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
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	bool bLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
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
	struct<3> Local_408 = { 0, 0, 0 } ;
	struct<3> Local_411 = { 0, 0, 0 } ;
	struct<3> Local_414 = { 0, 0, 0 } ;
	struct<3> Local_417 = { 0, 0, 0 } ;
	struct<3> Local_420 = { 0, 0, 0 } ;
	struct<3> Local_423 = { 0, 0, 0 } ;
	struct<3> Local_426 = { 0, 0, 0 } ;
	struct<3> Local_429 = { 0, 0, 0 } ;
	int iLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	int iLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	bool bLocal_442 = 0;
	bool bLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	bool bLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	float fLocal_449 = 0f;
	float fLocal_450 = 0f;
	float fLocal_451 = 0f;
	var uLocal_452[4] = { 0, 0, 0, 0 };
	var uLocal_457[4] = { 0, 0, 0, 0 };
	struct<429> Local_462 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_891 = 0;
	struct<27> Local_892 = { 3, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 3;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 3;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 5;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 3;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 3;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 1;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 4;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 4;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 4;
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
	var uLocal_986 = 1;
	var uLocal_987 = 2;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	struct<3> Local_994[1];
	int iLocal_998 = 0;
	var uLocal_999 = 0;
	struct<3> Local_1000 = { 0, 0, 0 } ;
	struct<3> Local_1003 = { 0, 0, 0 } ;
	int iLocal_1006 = 0;
	bool bLocal_1007 = 0;
	int iLocal_1008 = 0;
	int iLocal_1009 = 0;
	bool bLocal_1010 = 0;
	struct<28> Local_1011 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 5;
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
	var uLocal_1084 = 1097859072;
	var uLocal_1085 = 1500;
	var uLocal_1086 = 45;
	var uLocal_1087 = 1103626240;
	var uLocal_1088 = 5;
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
	fLocal_449 = 98f;
	fLocal_450 = 55f;
	fLocal_451 = 60f;
	iLocal_998 = 1;
	Local_1000 = { -1284.367f, 295.7437f, 63.83044f };
	Local_1003 = { -1286.218f, 292.573f, 63.7927f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		GlobalFunc_4670(2);
		func_393();
	}
	MISC::SET_MISSION_FLAG(1);
	func_380();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_462.f_2))
		{
			func_8();
		}
		else
		{
			GlobalFunc_8923(&Local_462);
		}
		SYSTEM::WAIT(0);
	}
}








void func_8()//Position - 0x312
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	
	if (GlobalFunc_4786(&Local_462))
	{
		GlobalFunc_4785(&Local_462);
		if (Local_462.f_410 > 0)
		{
			if (GlobalFunc_9568(&Local_462, 0))
			{
				func_375();
			}
		}
		else if (GlobalFunc_8928(&Local_462, 31) > 5f)
		{
			GlobalFunc_4670(2);
			func_393();
		}
	}
	else
	{
		func_352(&Local_462, &uLocal_1082);
		func_351(&Local_462);
		GlobalFunc_6615(&Local_462, &uLocal_999, 0);
		if (Local_462.f_410 < 9)
		{
			func_337(&Local_462, &Local_892, &uLocal_1082);
		}
		if (Local_462.f_410 > 5 && !iLocal_1006)
		{
			iLocal_1006 = 1;
			Local_892.f_16[0 /*3*/] = { 27.36738f, -1356.948f, 28.2181f };
			Local_892.f_16[1 /*3*/] = { 314.3014f, -266.3495f, 52.78319f };
			Local_892.f_16[2 /*3*/] = { -159.9642f, -856.5309f, 28.71328f };
			Local_892.f_26[0 /*3*/] = { 30.9791f, -1347.39f, 28.4939f };
			Local_892.f_26[1 /*3*/] = { 313.893f, -279.0695f, 53.1647f };
			Local_892.f_26[2 /*3*/] = { -88.0743f, -845.7833f, 40.797f };
		}
		if (Local_462.f_410 > 2)
		{
			if (!GlobalFunc_4783(&Local_462))
			{
				if (!iLocal_1008)
				{
					if (func_335())
					{
						func_333(&Local_892);
						iLocal_1008 = 1;
					}
				}
				func_303();
			}
			else
			{
				func_284(&Local_462, "Taxi Not Driveable", GlobalFunc_4778(&Local_462));
			}
		}
		if (Local_462.f_410 > 3)
		{
			if (!bVar3)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_462.f_4, 0))
				{
					iVar0 = 0;
					while (iVar0 < 5)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_892.f_4[iVar0]))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_892.f_4[iVar0], Local_462.f_4, 1))
							{
								bVar3 = true;
							}
						}
						iVar0++;
					}
				}
			}
			if (bVar3)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_892.f_4[iVar1]))
					{
						if (!PED::IS_PED_INJURED(Local_892.f_4[iVar1]))
						{
							TASK::CLEAR_PED_TASKS(Local_892.f_4[iVar1]);
							TASK::CLEAR_SEQUENCE_TASK(&uVar2);
							TASK::OPEN_SEQUENCE_TASK(&uVar2);
							TASK::TASK_SMART_FLEE_PED(0, Local_462.f_2, 1000f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar2);
							TASK::TASK_PERFORM_SEQUENCE(Local_892.f_4[iVar1], uVar2);
							TASK::CLEAR_SEQUENCE_TASK(&uVar2);
						}
					}
					iVar1++;
				}
			}
		}
		if (Local_462.f_410 == 9)
		{
			func_260(&Local_462, 0, 1);
			func_259(&Local_462, &Local_892, 1128792064);
		}
		switch (Local_462.f_410)
		{
			case 0:
				GlobalFunc_4775(&(Local_994[0 /*3*/]), "TAXI_SC_BN_10", 200);
				GlobalFunc_4774(&Local_462, &Local_994);
				func_255();
				func_253();
				func_252();
				GlobalFunc_8281(&Local_462, 16, 4f, 0);
				func_248(&Local_462, Local_1000, Local_1003, &Local_892);
				func_247(&Local_462);
				GlobalFunc_4773(&Local_462, 1);
				break;
			
			case 1:
				if (func_243())
				{
					func_242();
					func_222();
					GlobalFunc_6595(&Local_462);
					GlobalFunc_6594(&(Local_462.f_100), 8);
					GlobalFunc_6594(&(Local_462.f_100), 2048);
					GlobalFunc_6594(&(Local_462.f_100), 256);
					Local_462.f_14 = { Local_1000 };
					Local_462.f_49 = 0;
					GlobalFunc_4773(&Local_462, 3);
				}
				break;
			
			case 3:
				if (func_211(&Local_462, 3))
				{
					GlobalFunc_8926(&Local_462, 1, 0);
					func_209(&uLocal_1099, Local_1000, 20f, 0);
					GlobalFunc_4773(&Local_462, 5);
				}
				break;
			
			case 5:
				func_208();
				if (func_188(&Local_462, &Local_892))
				{
					STATS::STAT_GET_FLOAT(Local_462.f_428, &(Local_462.f_42), -1);
					GlobalFunc_4773(&Local_462, 15);
				}
				break;
			
			case 15:
				if (func_186(&Local_462, &Local_892))
				{
					GlobalFunc_9566(&Local_462, 8, 1, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_892[0]))
					{
						PED::SET_PED_CONFIG_FLAG(Local_892[0], 26, 1);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_892[1]))
					{
						PED::SET_PED_CONFIG_FLAG(Local_892[1], 26, 1);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_892[2]))
					{
						PED::SET_PED_CONFIG_FLAG(Local_892[2], 26, 1);
					}
					GlobalFunc_6590(&Local_462);
					func_179(&Local_462, 0);
					func_178();
					GlobalFunc_8925(&Local_462, 11);
					GlobalFunc_8281(&Local_462, 10, 0, 0);
					GlobalFunc_8281(&Local_462, 6, 0, 0);
					func_175();
					Local_462.f_36 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 10f);
					func_173(&Local_892);
					GlobalFunc_4773(&Local_462, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_462.f_4, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_462.f_2, Local_462.f_4, 0))
					{
						func_169(&Local_462, &Local_892);
						GlobalFunc_4773(&Local_462, 5);
					}
				}
				break;
			
			case 9:
				if (!bLocal_1007)
				{
				}
				GlobalFunc_10826(&Local_462);
				if (func_123(&Local_462, &Local_892, &Local_1011, &uLocal_1041))
				{
					GlobalFunc_4749(&Local_1011, -1, 1);
					if (func_121(&Local_892))
					{
						GlobalFunc_4748(&Local_462, 0);
					}
					func_119(&Local_892);
					func_117(&Local_462);
					GlobalFunc_10596(&Local_462);
					GlobalFunc_7558(&Local_462);
					GlobalFunc_4773(&Local_462, 27);
				}
				break;
			
			case 27:
				if (func_102(&Local_462, 1))
				{
					TASK::CLEAR_SEQUENCE_TASK(&uVar2);
					TASK::OPEN_SEQUENCE_TASK(&uVar2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_892.f_26[0 /*3*/], 1f, 20000, 1048576000, 0, 1193033728);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(Local_462.f_29, 4f, 1))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Local_462.f_29, 4f, 0);
					}
					else
					{
						TASK::TASK_ACHIEVE_HEADING(0, 350.8689f, 0);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(uVar2);
					TASK::TASK_PERFORM_SEQUENCE(Local_462.f_3, uVar2);
					PED::SET_PED_KEEP_TASK(Local_462.f_3, 1);
					GlobalFunc_4773(&Local_462, 29);
				}
				break;
			
			case 29:
				if (!PED::IS_PED_INJURED(Local_462.f_3))
				{
					if (GlobalFunc_4710(Local_462.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						PED::SET_PED_RESET_FLAG(Local_462.f_3, 60, 1);
					}
				}
				if (func_74(&Local_462, &uLocal_1089))
				{
					func_11(1, &Local_462, 0);
					GlobalFunc_8281(&Local_462, 31, 0, 0);
					GlobalFunc_4773(&Local_462, 30);
				}
				break;
			
			case 30:
				if (!PED::IS_PED_INJURED(Local_462.f_3))
				{
					if (GlobalFunc_4710(Local_462.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						PED::SET_PED_RESET_FLAG(Local_462.f_3, 60, 1);
					}
					if ((ENTITY::IS_ENTITY_AT_COORD(Local_462.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, 1, 1) || GlobalFunc_5682(Local_462.f_3, 1) > 50f) || GlobalFunc_8928(&Local_462, 31) > 30f)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_462.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, 1, 1))
						{
						}
						if (GlobalFunc_5682(Local_462.f_3, 1) > 50f)
						{
						}
						if (GlobalFunc_8928(&Local_462, 31) > 30f)
						{
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_462.f_3, 0);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_462.f_413, 1862763509);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_462.f_3));
						func_393();
					}
				}
				else
				{
					func_393();
				}
				break;
			}
	}
}



void func_11(bool bParam0, var uParam1, bool bParam2)//Position - 0xA95
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
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)//Position - 0xAD1
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
		func_17(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((GlobalFunc_4986(&uLocal_89) * 1000f)), 12, 0);
}





void func_17(int iParam0)//Position - 0xCC6
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

























































int func_74(var uParam0, var uParam1)//Position - 0x2569
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
				func_100(uParam0);
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
				func_75(uParam0);
				GlobalFunc_8281(uParam0, 0, 0, 0);
				GlobalFunc_778(0);
				iLocal_167 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_75(var uParam0)//Position - 0x263B
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

























void func_100(var uParam0)//Position - 0x3758
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


int func_102(var uParam0, bool bParam1)//Position - 0x3830
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (GlobalFunc_4746(uParam0) && func_108(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (GlobalFunc_6587(uParam0, 2097152))
				{
					GlobalFunc_7557(uParam0);
				}
			}
			else
			{
				GlobalFunc_7557(uParam0);
			}
		}
		else if (!GlobalFunc_4746(uParam0))
		{
			if (bParam1)
			{
				if (GlobalFunc_6587(uParam0, 2097152))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}






int func_108(var uParam0, bool bParam1, float fParam2)//Position - 0x3AE5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (GlobalFunc_116(1))
			{
				GlobalFunc_6685(0);
			}
			if (GlobalFunc_6582())
			{
				GlobalFunc_4745();
				return 1;
			}
			else if (GlobalFunc_2267(uParam0->f_4, fParam2, 1, 1056964608, 0, 1))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 256);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0);
				}
			}
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uParam0->f_4, 1);
		}
	}
	return 0;
}









void func_117(var uParam0)//Position - 0x3E62
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


void func_119(var uParam0)//Position - 0x3EC4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_73[iVar0]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_73[iVar0], 0);
		}
		iVar0++;
	}
	iLocal_439 = 0;
}


bool func_121(var uParam0)//Position - 0x3F2C
{
	return ((uParam0->f_55[0] && uParam0->f_55[1]) && uParam0->f_55[2]);
}


int func_123(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x3F77
{
	var uVar0;
	
	func_161(uParam0, uParam2, uParam1);
	if (GlobalFunc_4755(uParam0) >= 14)
	{
		if (iLocal_444)
		{
			if (((GlobalFunc_8928(uParam0, 11) > 20f && !GlobalFunc_111()) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !bLocal_442)
			{
				bLocal_442 = true;
			}
		}
	}
	if (uParam1->f_90 < 2)
	{
		if (uParam1->f_65 && !iLocal_444)
		{
			func_154(uParam0, uParam1, 0, uParam1->f_65);
			uParam1->f_65 = 0;
		}
		else
		{
			func_154(uParam0, uParam1, 0, 0);
		}
		if (uParam1->f_66 && uParam1->f_90 < 1)
		{
			if (!PED::IS_PED_INJURED((*uParam1)[uParam1->f_95]) && PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[uParam1->f_95], 0))
			{
				if (!iLocal_448)
				{
					if (func_153(uParam1[uParam1->f_95], &(uParam1->f_94)))
					{
						func_152(&(uParam1->f_95));
					}
				}
				else if (!uParam1->f_72)
				{
					TASK::CLEAR_PED_TASKS((*uParam1)[uParam1->f_95]);
					TASK::TASK_STAND_STILL((*uParam1)[uParam1->f_95], 500);
					uParam1->f_72 = 1;
				}
			}
		}
	}
	else if (!uParam1->f_62)
	{
		func_154(uParam0, uParam1, 1, 0);
	}
	if ((((PED::IS_PED_INJURED((*uParam1)[0]) || PED::IS_PED_INJURED((*uParam1)[1])) || PED::IS_PED_INJURED((*uParam1)[2])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*uParam1)[1], uParam0->f_4, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*uParam1)[2], uParam0->f_4, 1))
	{
		uParam0->f_415 = 14;
		func_284(uParam0, "Passenger injured.", 14);
	}
	if (!func_138(uParam0, uParam1))
	{
		if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(uParam0->f_2, uParam0->f_4, -1, 0, 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE((*uParam1)[0], 0, 0);
			bLocal_446 = true;
			iLocal_447 = 0;
		}
	}
	else
	{
		if (bLocal_446)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, 0))
			{
				if (!iLocal_447)
				{
					TASK::TASK_ENTER_VEHICLE((*uParam1)[0], uParam0->f_4, 20000, 0, 2f, 1, 0);
					iLocal_447 = 1;
				}
				if (GlobalFunc_156(uParam0->f_4, (*uParam1)[0], 1) > 40f)
				{
					func_284(uParam0, "Passenger left behind.", 8);
				}
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0) == (*uParam1)[0])
			{
				func_173(uParam1);
				bLocal_446 = false;
			}
		}
		func_135(uParam0, 1097859072, 1117782016);
		GlobalFunc_4751(uParam0, &(uParam0->f_43));
		if (!bLocal_446 && !PED::IS_PED_IN_VEHICLE((*uParam1)[0], uParam0->f_4, 0))
		{
			func_284(uParam0, "Passenger left car.", 9);
		}
		switch (uParam1->f_90)
		{
			case 0:
				if (!uParam1->f_51[2])
				{
					if (GlobalFunc_4710(uParam0->f_4, uParam1->f_16[2 /*3*/], 1) < 150f && !iLocal_448)
					{
						GlobalFunc_9566(uParam0, 99, 1, 0, 0);
						iLocal_448 = 1;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam1->f_16[2 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_108(uParam0, 1, 4f))
						{
							if (!PED::IS_PED_INJURED((*uParam1)[2]))
							{
								HUD::REMOVE_BLIP(&(uParam1->f_36[2]));
								GlobalFunc_5105();
								if (uParam1->f_95 == 2)
								{
									TASK::CLEAR_PED_TASKS((*uParam1)[2]);
								}
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -98.0071f, -851.2611f, 40.9833f, 1f, 30000, 1048576000, 0, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -83.1601f, -835.3889f, 39.5744f, 1f, 20000, 1048576000, 0, 1193033728);
								TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::TASK_PERFORM_SEQUENCE((*uParam1)[2], uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								if (GlobalFunc_8928(uParam0, 6) < fLocal_449)
								{
									uParam1->f_55[2] = 1;
									GlobalFunc_9566(uParam0, 38, 1, 0, 0);
									uParam0->f_56 += 3;
								}
								else
								{
									uParam1->f_55[2] = 0;
									GlobalFunc_9566(uParam0, 39, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 3);
								}
								uParam1->f_90++;
								func_132(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 1:
				if ((!func_130((*uParam1)[2], uParam0->f_4) && GlobalFunc_8928(uParam0, 20) > 1f) && !uParam1->f_51[2])
				{
					func_119(uParam1);
					uParam1->f_51[2] = 1;
					uParam0->f_26 = { 193.102f, -220.0569f, 52.8647f };
					uParam0->f_34 = 250.7f;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
				}
				else if (!GlobalFunc_7560(uParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					GlobalFunc_7559(uParam3);
					GlobalFunc_4749(uParam2, -1, 0);
					GlobalFunc_8281(uParam0, 6, 0, 0);
					GlobalFunc_8281(uParam0, 11, 0, 0);
					GlobalFunc_9566(uParam0, 40, 1, 0, 0);
					if (!HUD::DOES_BLIP_EXIST(uParam1->f_36[1]))
					{
						func_173(uParam1);
					}
					iLocal_448 = 0;
					uParam1->f_90++;
				}
				break;
			
			case 2:
				if (!uParam1->f_51[1])
				{
					if (GlobalFunc_4710(uParam0->f_4, uParam1->f_16[1 /*3*/], 1) < 175f && !iLocal_448)
					{
						GlobalFunc_9566(uParam0, 99, 1, 0, 0);
						iLocal_448 = 1;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam1->f_16[1 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_108(uParam0, 1, 4f))
						{
							if (!PED::IS_PED_INJURED((*uParam1)[1]))
							{
								GlobalFunc_5105();
								HUD::REMOVE_BLIP(&(uParam1->f_36[1]));
								func_124(&(uParam0->f_4), uParam1[1], uParam1->f_26[1 /*3*/]);
								if (GlobalFunc_8928(uParam0, 6) < fLocal_450)
								{
									uParam1->f_55[1] = 1;
									GlobalFunc_9566(uParam0, 41, 1, 0, 0);
									uParam0->f_56 += 2;
								}
								else
								{
									uParam1->f_55[1] = 0;
									GlobalFunc_9566(uParam0, 42, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 2);
								}
								uParam1->f_90++;
								func_132(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 3:
				if ((!func_130((*uParam1)[1], uParam0->f_4) && GlobalFunc_8928(uParam0, 20) > 1f) && !uParam1->f_51[1])
				{
					uParam1->f_51[1] = 1;
					uParam0->f_26 = { 51.4688f, -1302.042f, 28.1383f };
					uParam0->f_34 = 216.5f;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
				}
				else if (!GlobalFunc_7560(uParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					GlobalFunc_7559(uParam3);
					GlobalFunc_4749(uParam2, -1, 0);
					GlobalFunc_8281(uParam0, 6, 0, 0);
					GlobalFunc_8281(uParam0, 11, 0, 0);
					GlobalFunc_9566(uParam0, 43, 1, 0, 0);
					iLocal_448 = 0;
					if (!HUD::DOES_BLIP_EXIST(uParam1->f_36[0]))
					{
						func_173(uParam1);
					}
					uParam1->f_90++;
				}
				break;
			
			case 4:
				if (!uParam1->f_51[0])
				{
					if (GlobalFunc_4710(uParam0->f_4, uParam1->f_16[0 /*3*/], 1) < 100f && !iLocal_448)
					{
						GlobalFunc_9566(uParam0, 99, 1, 0, 0);
						iLocal_448 = 1;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam1->f_16[0 /*3*/], 5f, 5f, 2f, !uParam0->f_140, 1, 0))
					{
						if (func_108(uParam0, 1, 4f))
						{
							HUD::REMOVE_BLIP(&(uParam1->f_36[0]));
							uParam1->f_51[0] = 1;
							GlobalFunc_5105();
							if (GlobalFunc_8928(uParam0, 6) < fLocal_451)
							{
								uParam1->f_55[0] = 1;
								uParam0->f_56 += 2;
							}
							else
							{
								uParam1->f_55[0] = 0;
								uParam0->f_56 = (uParam0->f_56 - 2);
							}
							return 1;
						}
					}
				}
				break;
			}
	}
	return 0;
}

void func_124(var uParam0, var uParam1, struct<3> Param2)//Position - 0x46CA
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 1.78498f, -1.24105f, -0.6422f) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param2, 0) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param2, 0) && VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(*uParam1, *uParam0, 1, 0, 0))
			{
				iVar6 = 131072;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param2, 0) >= MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param2, 0) && VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(*uParam1, *uParam0, 2, 0, 0))
			{
				iVar6 = 262144;
			}
			else
			{
				iVar6 = 16;
			}
			Var8 = { 312.9961f, -274.4479f, 52.92882f };
			if (iVar6 == 16)
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar7);
				TASK::OPEN_SEQUENCE_TASK(&uVar7);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var8, 1f, 20000, 1048576000, 0, 1193033728);
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Var8, 5f, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param2, 1f, 20000, 1048576000, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uVar7);
				TASK::TASK_PERFORM_SEQUENCE(*uParam1, uVar7);
			}
			else
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar7);
				TASK::OPEN_SEQUENCE_TASK(&uVar7);
				TASK::TASK_LEAVE_VEHICLE(0, *uParam0, iVar6);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var8, 1f, 20000, 1048576000, 0, 1193033728);
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Var8, 5f, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param2, 1f, 20000, 1048576000, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(uVar7);
				TASK::TASK_PERFORM_SEQUENCE(*uParam1, uVar7);
			}
		}
	}
}






int func_130(int iParam0, int iParam1)//Position - 0x4915
{
	if (func_131(iParam0, iParam1))
	{
		if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_131(int iParam0, int iParam1)//Position - 0x4939
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

void func_132(var uParam0, int iParam1)//Position - 0x495A
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!GlobalFunc_225(&(uParam0->f_146[iVar0 /*3*/])))
			{
				GlobalFunc_4985(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (GlobalFunc_226(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!GlobalFunc_225(&(uParam0->f_146[iParam1 /*3*/])))
		{
			GlobalFunc_4985(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}



void func_135(var uParam0, float fParam1, float fParam2)//Position - 0x4A21
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
					func_284(uParam0, "Car not moving", 20);
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



int func_138(var uParam0, var uParam1)//Position - 0x4BAE
{
	int iVar0;
	bool bVar1;
	
	bVar1 = true;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		func_284(uParam0, "IS_TAXI_RIDE_ALL_READY - Taxi not drivable.", 0);
	}
	else
	{
		func_151(uParam0, &(uParam1->f_40));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (PED::IS_PED_INJURED((*uParam1)[iVar0]))
			{
				func_284(uParam0, "Passenger injured.", 15);
				bVar1 = false;
			}
			iVar0++;
		}
		if (bVar1)
		{
			if (GlobalFunc_10900(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}













void func_151(var uParam0, var uParam1)//Position - 0x4F76
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
				GlobalFunc_9566(uParam0, 2, 1, 1, 0);
			}
			else if (GlobalFunc_8928(uParam0, 14) > 20f)
			{
				func_284(uParam0, "Player not in taxi.", 9);
			}
		}
		else
		{
			if (GlobalFunc_6588(uParam0, 14))
			{
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

void func_152(var uParam0)//Position - 0x5059
{
	int iVar0;
	
	iVar0 = *uParam0;
	iVar0++;
	if (iVar0 == 3)
	{
		iVar0 = 0;
	}
	*uParam0 = iVar0;
}

int func_153(var uParam0, var uParam1)//Position - 0x507A
{
	var uVar0;
	
	switch (*uParam1)
	{
		case 0:
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
			*uParam1 = 1;
			break;
		
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1 || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) == 7)
			{
				*uParam1 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_154(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x517A
{
	var uVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (bLocal_442)
	{
		if (!uParam1->f_59)
		{
			if (!GlobalFunc_111())
			{
				func_158(&(uParam1->f_99));
				uParam1->f_59 = 1;
				func_157(uParam0, uParam1);
				uParam1->f_91 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (bLocal_443)
	{
		if (!uParam1->f_60)
		{
			if (!GlobalFunc_111())
			{
				uParam1->f_60 = 1;
				func_156(uParam0, uParam1);
				uParam1->f_91 = MISC::GET_GAME_TIMER();
				uParam1->f_92 = MISC::GET_GAME_TIMER();
			}
		}
	}
	uVar0 = func_155(uParam0);
	if (uParam1->f_59 || uParam1->f_60)
	{
		fVar2 = ENTITY::GET_ENTITY_SPEED(uParam0->f_4);
		fVar3 = 4f;
		if (fVar2 >= fVar3)
		{
			fVar4 = 1f;
		}
		else
		{
			fVar4 = (fVar2 / fVar3);
		}
		if (uParam1->f_60)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "speed", fVar4, 0);
				}
				iVar1++;
			}
		}
		if (uParam1->f_59)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_88, "speed", fVar4, 0);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_89, "speed", fVar4, 0);
		}
	}
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) >= 40f && !uParam1->f_63)
	{
		uParam1->f_91 = MISC::GET_GAME_TIMER();
		uParam1->f_63 = 1;
	}
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 40f && uParam1->f_63) && !bParam2)
	{
		uParam1->f_91 = MISC::GET_GAME_TIMER();
		uParam1->f_63 = 0;
		uParam1->f_62 = 0;
	}
	if (bParam2 && !uParam1->f_63)
	{
		uParam1->f_91 = MISC::GET_GAME_TIMER();
		uParam1->f_63 = 1;
	}
	if (((uParam1->f_59 || uParam1->f_60) && !uParam1->f_63) && !bParam2)
	{
		if (bParam3)
		{
			fVar8 = 0f;
			uParam1->f_61 = 1;
			uParam1->f_63 = 0;
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(uParam0->f_4, iVar1))
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(uParam0->f_4, iVar1))
					{
						if ((MISC::GET_GAME_TIMER() % 2000) < 50)
						{
						}
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_88, "smoke", fVar8, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
		else
		{
			iVar6 = 6000;
			iVar5 = (MISC::GET_GAME_TIMER() - uParam1->f_91);
			if (iVar5 >= iVar6)
			{
				fVar8 = 0f;
				uParam1->f_61 = 1;
				uParam1->f_63 = 0;
			}
			else
			{
				fVar8 = (1f - (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar6)));
			}
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(uParam0->f_4, iVar1))
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(uParam0->f_4, iVar1))
					{
						if ((MISC::GET_GAME_TIMER() % 2000) < 50)
						{
						}
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_88, "smoke", fVar8, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
	}
	if ((uParam1->f_59 || uParam1->f_60) && ((uParam1->f_61 && !uParam1->f_62) || bParam2))
	{
		if (uParam1->f_63)
		{
			iVar7 = 6000;
			iVar5 = (MISC::GET_GAME_TIMER() - uParam1->f_91);
			if (iVar5 >= iVar7)
			{
				fVar8 = 1f;
				uParam1->f_62 = 1;
			}
			else
			{
				fVar8 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar7));
			}
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(uParam0->f_4, iVar1))
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_83[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_83[iVar1], "smoke", fVar8, 0);
						}
					}
					else if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(uParam0->f_4, iVar1))
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_78[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_78[iVar1], "smoke", fVar8, 0);
						}
					}
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
					{
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "smoke", fVar8, 0);
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_88, "smoke", fVar8, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_89, "smoke", fVar8, 0);
			}
		}
	}
}

int func_155(var uParam0)//Position - 0x565C
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(uParam0->f_4, iVar0))
		{
			if (!MISC::IS_BIT_SET(uLocal_457[iVar0], 1))
			{
				MISC::SET_BIT(&(uLocal_457[iVar0]), 1);
			}
			if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(uParam0->f_4, iVar0))
			{
				iVar1 = 0;
				if (!iLocal_444)
				{
					iLocal_444 = 1;
				}
			}
		}
		else if (MISC::IS_BIT_SET(uLocal_457[iVar0], 1))
		{
			MISC::CLEAR_BIT(&(uLocal_457[iVar0]), 1);
		}
		if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(uParam0->f_4, iVar0))
		{
			iVar1 = 0;
			if (!MISC::IS_BIT_SET(uLocal_452[iVar0], 1))
			{
				MISC::SET_BIT(&(uLocal_452[iVar0]), 1);
			}
			if (!iLocal_444)
			{
				iLocal_444 = 1;
			}
		}
		else if (MISC::IS_BIT_SET(uLocal_452[iVar0], 1))
		{
			MISC::CLEAR_BIT(&(uLocal_452[iVar0]), 1);
		}
		iVar0++;
	}
	return iVar1;
}

void func_156(var uParam0, var uParam1)//Position - 0x5733
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		uParam1->f_73[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_408, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_73[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_414, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_73[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_411, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1f), 0, 0, 0);
		uParam1->f_73[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_417, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1f), 0, 0, 0);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar0], "smoke", 1f, 0);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar0], "speed", 0f, 0);
			iVar0++;
		}
	}
}

void func_157(var uParam0, var uParam1)//Position - 0x5825
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		uParam1->f_88 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_door", uParam0->f_4, 0f, -0.15f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
		uParam1->f_89 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_window", uParam0->f_4, 0f, -0.15f, 0.6f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
	}
	GRAPHICS::_0x8CDE909A0370BB3A(1);
}

void func_158(var uParam0)//Position - 0x588A
{
	func_159(uParam0, 0f);
}

void func_159(var uParam0, float fParam1)//Position - 0x5899
{
	uParam0->f_1 = (GlobalFunc_224(MISC::IS_BIT_SET(*uParam0, 4)) + fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}


void func_161(var uParam0, var uParam1, var uParam2)//Position - 0x58D4
{
	if (!GlobalFunc_747(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (GlobalFunc_8928(uParam0, 9) > 1f)
					{
						GlobalFunc_4758(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						GlobalFunc_9566(uParam0, 50, 1, 0, 0);
						GlobalFunc_8281(uParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uParam2->f_40))
						{
							HUD::SET_BLIP_ALPHA(uParam2->f_40, 0);
							HUD::SET_BLIP_ROUTE(uParam2->f_40, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!GlobalFunc_111() && GlobalFunc_8928(uParam0, 9) > 4f)
				{
					GlobalFunc_9566(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (GlobalFunc_663("TAXI_OBJ_POL", 0, 0))
				{
					GlobalFunc_9566(uParam0, 51, 0, 0, 0);
					uParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), GlobalFunc_4757(uParam0)))
				{
					GlobalFunc_4758(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					GlobalFunc_6585(6, 0);
				}
				if (!GlobalFunc_4750(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (GlobalFunc_8928(uParam0, 16) > 10f)
						{
							GlobalFunc_9566(uParam0, 51, 1, 0, 0);
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (HUD::DOES_BLIP_EXIST(uParam2->f_40))
					{
						HUD::SET_BLIP_ALPHA(uParam2->f_40, 255);
						HUD::SET_BLIP_ROUTE(uParam2->f_40, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!GlobalFunc_111())
				{
					GlobalFunc_9566(uParam0, 53, 1, 0, 1);
					GlobalFunc_6585(7, GlobalFunc_4757(uParam0));
					GlobalFunc_4758(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!GlobalFunc_111())
				{
					GlobalFunc_4756(uParam1, -1, 4);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}








void func_169(var uParam0, var uParam1)//Position - 0x5DAC
{
	GlobalFunc_4760(uParam0, 1000);
	if ((!ENTITY::IS_ENTITY_DEAD((*uParam1)[0]) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[1])) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[2]))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[0]);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[1]);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[2]);
	}
	GlobalFunc_4935();
	GlobalFunc_7561(uParam0);
}




void func_173(var uParam0)//Position - 0x5EAE
{
	if (!uParam0->f_51[2])
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_36[2]))
		{
			uParam0->f_36[2] = GlobalFunc_5104(uParam0->f_16[2 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[2];
		}
		if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(uParam0->f_36[2]))
		{
			HUD::SET_BLIP_ROUTE(uParam0->f_36[2], 1);
		}
	}
	else if (!uParam0->f_51[1])
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_36[1]))
		{
			uParam0->f_36[1] = GlobalFunc_5104(uParam0->f_16[1 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[1];
		}
		if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(uParam0->f_36[1]))
		{
			HUD::SET_BLIP_ROUTE(uParam0->f_36[1], 1);
		}
	}
	else
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_36[0]))
		{
			uParam0->f_36[0] = GlobalFunc_5104(uParam0->f_16[0 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[0];
		}
		if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(uParam0->f_36[0]))
		{
			HUD::SET_BLIP_ROUTE(uParam0->f_36[0], 1);
		}
	}
}


void func_175()//Position - 0x5FDC
{
	GlobalFunc_6594(&(Local_462.f_55), 2);
	GlobalFunc_6594(&(Local_462.f_55), 4);
	GlobalFunc_6594(&(Local_462.f_55), 16);
	GlobalFunc_6594(&(Local_462.f_55), 64);
	GlobalFunc_6594(&(Local_462.f_55), 256);
	GlobalFunc_6594(&(Local_462.f_55), 512);
	GlobalFunc_6594(&(Local_462.f_55), 1024);
	GlobalFunc_6594(&(Local_462.f_55), 2048);
	GlobalFunc_6594(&(Local_462.f_55), 4096);
	GlobalFunc_6594(&(Local_462.f_55), 1073741824);
	GlobalFunc_6594(&uLocal_1082, 2);
}



void func_178()//Position - 0x608C
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stretch"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("superd"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_892.f_45[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_892.f_45[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_892.f_45[2]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_892.f_45[3]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_892.f_45[4]);
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@gyn@cc@intro");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@exit");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@base");
}

void func_179(var uParam0, bool bParam1)//Position - 0x60FA
{
	GlobalFunc_4761(uParam0);
	if (bParam1)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
		{
			uParam0->f_9 = GlobalFunc_5104(uParam0->f_17, 1);
		}
		else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
		{
			HUD::SET_GPS_FLAGS(1, 0);
			HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
			HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
			HUD::SET_BLIP_ROUTE(uParam0->f_9, 1);
		}
	}
}







bool func_186(var uParam0, var uParam1)//Position - 0x6274
{
	return ((func_187((*uParam1)[0], uParam0) && func_187((*uParam1)[1], uParam0)) && func_187((*uParam1)[2], uParam0));
}

int func_187(int iParam0, var uParam1)//Position - 0x62A7
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, uParam1->f_4))
			{
				return 1;
			}
		}
		else
		{
			func_284(uParam1, "Passenger was injured", 15);
		}
	}
	else
	{
		func_284(uParam1, "Taxi was destroyed", 0);
	}
	return 0;
}

int func_188(var uParam0, var uParam1)//Position - 0x62F4
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	func_207(uParam0, (*uParam1)[0]);
	func_207(uParam0, (*uParam1)[1]);
	func_207(uParam0, (*uParam1)[2]);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			func_205(uParam0, 1);
			if (GlobalFunc_6582())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
				func_169(uParam0, uParam1);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_203(uParam0);
		}
		else
		{
			if (GlobalFunc_6588(uParam0, 14))
			{
				GlobalFunc_7561(uParam0);
				func_202(uParam0, uParam1, 0);
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
			if (!PED::IS_PED_INJURED((*uParam1)[0]))
			{
				if (!uParam0->f_142)
				{
					fVar4 = ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) / 5f) + 4f);
					if (uParam0->f_141)
					{
						if (GlobalFunc_6592(uParam0, (*uParam1)[iLocal_432]) > 50f || GlobalFunc_4986(&uLocal_433) > 5f)
						{
							func_284(uParam0, "Left Passenger", 8);
						}
					}
					switch (uParam0->f_48)
					{
						case 0:
							if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iLocal_432], 713668775) != 1 || ((GlobalFunc_156(PLAYER::PLAYER_PED_ID(), (*uParam1)[iLocal_432], 1) < 20f && GlobalFunc_713((*uParam1)[iLocal_432], uParam0->f_11, 1) <= 28f) && GlobalFunc_713(uParam0->f_4, uParam0->f_11, 1) <= 28f))
							{
								if (func_198(uParam0, uParam1, 40f))
								{
									uParam0->f_48++;
								}
							}
							break;
						
						case 1:
							if (func_197(uParam0, uParam1, 0, 1108082688, 1090519040, 1082130432))
							{
								uParam0->f_138 = 1;
								if (bLocal_93)
								{
									iVar0 = GlobalFunc_4764(uParam0, &uVar1);
									if (!ENTITY::IS_ENTITY_DEAD(iVar0))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								iVar3 = 0;
								while (iVar3 < 3)
								{
									TASK::CLEAR_PED_TASKS((*uParam1)[iVar3]);
									TASK::CLEAR_SEQUENCE_TASK(&uVar2);
									TASK::OPEN_SEQUENCE_TASK(&uVar2);
									switch (iVar3)
									{
										case 0:
											if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar3], 0))
											{
												TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4, -1, 0, 2);
												TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1750, 2250));
												TASK::TASK_ENTER_VEHICLE(0, uParam0->f_4, 40000, 0, 1f, 1, 0);
											}
											break;
										
										case 1:
											if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar3], 0))
											{
												TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4, -1, 0, 2);
												TASK::TASK_ENTER_VEHICLE(0, uParam0->f_4, 40000, 1, 1f, 1, 0);
											}
											break;
										
										case 2:
											if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar3], 0))
											{
												TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4, -1, 0, 2);
												TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(750, 1250));
												TASK::TASK_ENTER_VEHICLE(0, uParam0->f_4, 40000, 2, 1f, 1, 0);
											}
											break;
									}
									TASK::CLOSE_SEQUENCE_TASK(uVar2);
									TASK::TASK_PERFORM_SEQUENCE((*uParam1)[iVar3], uVar2);
									iVar3++;
								}
								uParam0->f_48++;
							}
							else if (!GlobalFunc_4752(uParam0))
							{
								TASK::CLEAR_PED_TASKS((*uParam1)[0]);
								TASK::CLEAR_PED_TASKS((*uParam1)[1]);
								TASK::CLEAR_PED_TASKS((*uParam1)[2]);
							}
							else if ((TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[0], 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[0], 242628503) != 0) && GlobalFunc_6592(uParam0, (*uParam1)[0]) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
								TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
								TASK::TASK_PERFORM_SEQUENCE((*uParam1)[0], uParam0->f_243);
							}
							break;
						
						case 2:
							if (bLocal_93)
							{
								if (GlobalFunc_156(uParam0->f_4, (*uParam1)[0], 1) < 3f)
								{
									if (!GlobalFunc_4763(uParam0, 1))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[0]);
										TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[1]);
										TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[2]);
										func_284(uParam0, "You had a dead body in your back seat.", 5);
									}
								}
							}
							func_194(uParam0, uParam1);
							if (GlobalFunc_6592(uParam0, (*uParam1)[0]) < fVar4 || GlobalFunc_6582())
							{
								if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
								{
									if ((PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[0], 0) && PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[1], 0)) && PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[2], 0))
									{
										GlobalFunc_4761(uParam0);
										PED::SET_PED_CONFIG_FLAG((*uParam1)[0], 26, 1);
										PED::SET_PED_CONFIG_FLAG((*uParam1)[1], 26, 1);
										PED::SET_PED_CONFIG_FLAG((*uParam1)[2], 26, 1);
										PED::SET_PED_CONFIG_FLAG((*uParam1)[0], 104, 1);
										GlobalFunc_6589(uParam0, 5, 0);
										HUD::CLEAR_GPS_FLAGS();
										return 1;
									}
								}
							}
							else
							{
								if ((MISC::GET_GAME_TIMER() % 1000) < 50)
								{
								}
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS((*uParam1)[0], 1), fVar4, 0, 0, 255, 150);
							}
							if (func_193(uParam1))
							{
								TASK::CLEAR_PED_TASKS((*uParam1)[0]);
								TASK::CLEAR_PED_TASKS((*uParam1)[1]);
								TASK::CLEAR_PED_TASKS((*uParam1)[2]);
								func_284(uParam0, "Left Passenger", 8);
							}
							if ((func_192(uParam0, uParam1) || func_191(uParam0, uParam1)) || func_190(uParam0, uParam1))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[2], 0))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[2], GlobalFunc_4722(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_432 = 2;
								}
								if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[1], 0))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[1], GlobalFunc_4722(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_432 = 1;
								}
								if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[0], 0))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[0], uParam0->f_11, 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_432 = 0;
								}
								HUD::REMOVE_BLIP(&(uParam0->f_8));
								uParam0->f_8 = GlobalFunc_6783((*uParam1)[iLocal_432], 0, 0);
								GlobalFunc_6715(&uLocal_433);
								uParam0->f_48 = 0;
								iLocal_86 = 0;
							}
							break;
						}
				}
			}
			else
			{
				func_284(uParam0, "Passenger injured.", 9);
			}
		}
	}
	else
	{
		func_284(uParam0, "Taxi not drivable.", 9);
	}
	return 0;
}


int func_190(var uParam0, var uParam1)//Position - 0x6934
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED((*uParam1)[iVar0]) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar0], 0))
		{
			if (GlobalFunc_6592(uParam0, (*uParam1)[iVar0]) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_191(var uParam0, var uParam1)//Position - 0x6987
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED((*uParam1)[iVar0]) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar0], 0))
		{
			if (GlobalFunc_713(uParam0->f_4, uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_192(var uParam0, var uParam1)//Position - 0x69DD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED((*uParam1)[iVar0]) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar0], 0))
		{
			if (GlobalFunc_713((*uParam1)[iVar0], uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_193(var uParam0)//Position - 0x6A35
{
	if ((!PED::IS_PED_INJURED((*uParam0)[0]) && !PED::IS_PED_INJURED((*uParam0)[1])) && !PED::IS_PED_INJURED((*uParam0)[2]))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[0], 0) || PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[1], 0)) || PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[2], 0))
		{
			if ((!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[0], 0) || !PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[1], 0)) || !PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[2], 0))
			{
				if (!GlobalFunc_226(&uLocal_436))
				{
					GlobalFunc_7731(&uLocal_436);
				}
				else if (GlobalFunc_4981(&uLocal_436) > 15f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_194(var uParam0, var uParam1)//Position - 0x6AEF
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED((*uParam1)[iLocal_432]))
		{
			if (GlobalFunc_5682((*uParam1)[iLocal_432], 1) > 30f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iLocal_432], -1794415470) == 1 || TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iLocal_432], 242628503) == 1)
				{
					func_284(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}



int func_197(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6C88
{
	if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[0]))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED((*uParam1)[iLocal_432]) && GlobalFunc_5682((*uParam1)[iLocal_432], 1) < fParam3)
		{
			if (!GlobalFunc_6588(uParam0, 5))
			{
				GlobalFunc_8281(uParam0, 5, 0, 0);
			}
		}
		else if (GlobalFunc_6588(uParam0, 5))
		{
			GlobalFunc_6589(uParam0, 5, 0);
		}
		if (((GlobalFunc_8928(uParam0, 5) > IntToFloat(iParam2) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam5) && !ENTITY::IS_ENTITY_OCCLUDED((*uParam1)[iLocal_432])) || GlobalFunc_5682((*uParam1)[iLocal_432], 1) <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

int func_198(var uParam0, var uParam1, float fParam2)//Position - 0x6D32
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	var uVar10;
	
	uVar10 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	Var6 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, uVar10) };
	Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, Var6) };
	Var6.f_1 = (Var6.f_1 + 1f);
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var6) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x6A3E157475DBFCD9(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_86)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[0], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[1], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[2], 1);
			iLocal_86 = 1;
			break;
		
		case 1:
			if ((GlobalFunc_156(uParam0->f_4, (*uParam1)[iLocal_432], 0) <= fParam2 && !uParam0->f_142) && MISC::ABSF((Var0.f_2 - Var3.f_2)) < 5f)
			{
				iVar9 = GlobalFunc_4765(&(uParam0->f_409), Var0, Var3, 0);
				if (iVar9 == 0)
				{
					iLocal_86 = 2;
				}
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			GlobalFunc_9566(uParam0, 4, 1, 0, 1);
			TASK::CLEAR_PED_TASKS((*uParam1)[iLocal_432]);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
			TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -8f, -1, 49, 0, 0, 0, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
			TASK::TASK_PERFORM_SEQUENCE((*uParam1)[iLocal_432], uParam0->f_243);
			return 1;
			break;
		
		case 3:
			iLocal_86 = 0;
			return 1;
			break;
	}
	return 0;
}




void func_202(var uParam0, var uParam1, bool bParam2)//Position - 0x6FA6
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (bParam2)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, 0);
				GlobalFunc_10598(uParam0, &(uParam0->f_98), 4, 3);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (HUD::DOES_BLIP_EXIST(uParam1->f_36[iVar0]))
					{
						HUD::SET_BLIP_ALPHA(uParam1->f_36[iVar0], 0);
					}
					iVar0++;
				}
				GlobalFunc_9566(uParam0, 2, 1, 1, 0);
			}
			GlobalFunc_10597(uParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_10));
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, 1);
				GlobalFunc_10598(uParam0, &(uParam0->f_98), 8, 1);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (HUD::DOES_BLIP_EXIST(uParam1->f_36[iVar0]))
					{
						HUD::SET_BLIP_ALPHA(uParam1->f_36[iVar0], 255);
					}
					iVar0++;
				}
			}
		}
	}
}

void func_203(var uParam0)//Position - 0x709E
{
	func_207(uParam0, uParam0->f_3);
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


void func_205(var uParam0, bool bParam1)//Position - 0x7135
{
	func_207(uParam0, uParam0->f_3);
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
						func_284(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (GlobalFunc_8928(uParam0, 14) > 20f)
				{
					if (GlobalFunc_5682(uParam0->f_4, 1) > 40f)
					{
						func_284(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_284(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}


void func_207(var uParam0, int iParam1)//Position - 0x7254
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_284(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

void func_208()//Position - 0x72B9
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_462.f_4, 0))
	{
		if (GlobalFunc_4752(&Local_462))
		{
			if (!iLocal_1009)
			{
				uVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_462.f_4, "window_lf");
				uVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_462.f_4, "window_lr");
				uVar2 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_462.f_4, "window_rf");
				uVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_462.f_4, "window_rr");
				Local_408 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_462.f_4, uVar0) };
				Local_408 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_462.f_4, Local_408) };
				Local_420 = { Local_408 };
				Local_408.f_2 = (Local_408.f_2 + 0.15f);
				Local_408.f_1 = (Local_408.f_1 - 0.15f);
				Local_411 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_462.f_4, uVar1) };
				Local_411 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_462.f_4, Local_411) };
				Local_423 = { Local_411 };
				Local_411.f_2 = (Local_411.f_2 + 0.15f);
				Local_414 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_462.f_4, uVar2) };
				Local_414 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_462.f_4, Local_414) };
				Local_426 = { Local_414 };
				Local_414.f_2 = (Local_414.f_2 + 0.15f);
				Local_414.f_1 = (Local_414.f_1 - 0.15f);
				Local_417 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_462.f_4, uVar3) };
				Local_417 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_462.f_4, Local_417) };
				Local_429 = { Local_417 };
				Local_417.f_2 = (Local_417.f_2 + 0.15f);
				iLocal_1009 = 1;
			}
		}
		else if (iLocal_1009)
		{
			iLocal_1009 = 0;
		}
	}
}

void func_209(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x7440
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


int func_211(var uParam0, int iParam1)//Position - 0x74F6
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
			func_284(uParam0, "ped is fleeing or injured", 5);
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
			func_284(uParam0, "No Taxi", 21);
			GlobalFunc_159("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}











void func_222()//Position - 0x7E42
{
	Local_342 = 0;
	func_239(33267/*func_241*/, 33242/*func_240*/, 1);
	func_239(33003/*func_237*/, 32980/*func_236*/, 1);
	func_239(32919/*func_235*/, 32894/*func_234*/, 1);
	func_239(32823/*func_233*/, 32799/*func_232*/, 1);
	func_239(32689/*func_231*/, 32668/*func_230*/, 1);
	func_239(32615/*func_228*/, 32590/*func_227*/, 1);
	func_239(32448/*func_224*/, 32425/*func_223*/, 1);
}

int func_223(var uParam0, var uParam1)//Position - 0x7EA9
{
	uParam1 = uParam1;
	func_284(uParam0, "Taxi Not Driveable", 1);
	return 1;
}




int func_227(var uParam0, var uParam1)//Position - 0x7F4E
{
	uParam1 = uParam1;
	func_284(uParam0, "Didn't lose police in time.", 9);
	return 1;
}





int func_232(var uParam0, var uParam1)//Position - 0x801F
{
	uParam1 = uParam1;
	func_284(uParam0, "Taxi Is Flipped", 0);
	return 1;
}


int func_234(var uParam0, var uParam1)//Position - 0x807E
{
	uParam1 = uParam1;
	func_284(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}


int func_236(var uParam0, var uParam1)//Position - 0x80D4
{
	uParam1 = uParam1;
	func_284(uParam0, "Taxi Not Driveable", 0);
	return 1;
}



void func_239(int iParam0, int iParam1, bool bParam2)//Position - 0x8170
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

int func_240(var uParam0, var uParam1)//Position - 0x81DA
{
	uParam1 = uParam1;
	func_284(uParam0, "Passenger injured.", 15);
	return 1;
}


void func_242()//Position - 0x8232
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

int func_243()//Position - 0x840A
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_892.f_41[0]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_01", &iLocal_998, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_892.f_41[1]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_02", &iLocal_998, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_892.f_41[2]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading A_M_Y_GOLFER_01", &iLocal_998, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1089))
	{
		return 0;
	}
	if (!GlobalFunc_6601(&iLocal_998, 1))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Waiting for assets...", &iLocal_998, 1000);
		return 0;
	}
	return 1;
}




void func_247(var uParam0)//Position - 0x879A
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = GlobalFunc_6783(uParam0->f_3, 0, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS");
		HUD::SET_GPS_FLAGS(1, 0);
		HUD::SET_BLIP_ROUTE(uParam0->f_8, 1);
	}
}

int func_248(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7)//Position - 0x87D7
{
	uParam0->f_11 = { Param1 };
	uParam0->f_14 = { Param4 };
	GlobalFunc_6584(uParam0->f_14, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_14, 25f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_96066.f_225[0]))
	{
		(*uParam7)[0] = Global_96066.f_225[0];
		(*uParam7)[1] = Global_96066.f_225[1];
		(*uParam7)[2] = Global_96066.f_225[2];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam7)[0], 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam7)[1], 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam7)[2], 1, 1);
	}
	else
	{
		(*uParam7)[0] = PED::CREATE_PED(26, uParam7->f_41[0], uParam0->f_11, -178.76f, 1, 1);
		(*uParam7)[1] = PED::CREATE_PED(26, uParam7->f_41[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam7)[0], 0.5f, 0.5f, 0f), 21.77f, 1, 1);
		(*uParam7)[2] = PED::CREATE_PED(26, uParam7->f_41[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam7)[0], 0.5f, -0.5f, 0f), -147.25f, 1, 1);
	}
	func_250(uParam0, uParam7[0]);
	uParam7->f_51[0] = 0;
	uParam7->f_51[1] = 0;
	uParam7->f_51[2] = 0;
	uParam7->f_12[0] = 0;
	uParam7->f_12[1] = 1;
	uParam7->f_12[2] = 2;
	if ((!PED::IS_PED_INJURED((*uParam7)[0]) && !PED::IS_PED_INJURED((*uParam7)[1])) && !PED::IS_PED_INJURED((*uParam7)[2]))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam7)[1], (*uParam7)[0], 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam7)[2], (*uParam7)[0], 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam7)[0], (*uParam7)[1], 0);
	}
	if (!PED::IS_PED_INJURED((*uParam7)[2]))
	{
		GlobalFunc_173(&(uParam0->f_244), 5, (*uParam7)[2], "TaxiPaulie", 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME((*uParam7)[2], "TaxiPaulie");
		PED::SET_PED_CONFIG_FLAG((*uParam7)[2], 317, 1);
	}
	if (!PED::IS_PED_INJURED((*uParam7)[1]))
	{
		GlobalFunc_173(&(uParam0->f_244), 4, (*uParam7)[1], "TaxiClyde", 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME((*uParam7)[1], "TaxiClyde");
		PED::SET_PED_CONFIG_FLAG((*uParam7)[1], 317, 1);
	}
	if (!PED::IS_PED_INJURED((*uParam7)[0]))
	{
		GlobalFunc_173(&(uParam0->f_244), 3, (*uParam7)[0], "TaxiDarren", 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME((*uParam7)[0], "TaxiDarren");
		PED::SET_PED_CONFIG_FLAG((*uParam7)[0], 317, 1);
		PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(uParam0->f_413));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_413, 1862763509);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam7)[0], uParam0->f_413);
		func_249((*uParam7)[1], uParam0->f_413);
		func_249((*uParam7)[2], uParam0->f_413);
		return 1;
	}
	return 0;
}

void func_249(int iParam0, var uParam1)//Position - 0x8A79
{
	if (!PED::IS_PED_INJURED(uParam0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, uParam1);
	}
}

void func_250(var uParam0, var uParam1)//Position - 0x8A93
{
	if (!PED::IS_PED_INJURED(*uParam1))
	{
		uParam0->f_3 = *uParam1;
	}
}


void func_252()//Position - 0x8B22
{
	STREAMING::REQUEST_PTFX_ASSET();
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@gyn@cc@hotbox");
}

void func_253()//Position - 0x8B36
{
	STREAMING::REQUEST_MODEL(Local_892.f_45[0]);
	STREAMING::REQUEST_MODEL(Local_892.f_45[1]);
	STREAMING::REQUEST_MODEL(Local_892.f_45[2]);
	STREAMING::REQUEST_MODEL(Local_892.f_45[3]);
	STREAMING::REQUEST_MODEL(Local_892.f_45[4]);
	STREAMING::REQUEST_MODEL(joaat("stretch"));
	STREAMING::REQUEST_MODEL(joaat("superd"));
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@gyn@cc@intro");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@exit");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@base");
	uLocal_1089 = GlobalFunc_1455();
}


void func_255()//Position - 0x8BBB
{
	STREAMING::REQUEST_MODEL(Local_892.f_41[0]);
	STREAMING::REQUEST_MODEL(Local_892.f_41[1]);
	STREAMING::REQUEST_MODEL(Local_892.f_41[2]);
	GlobalFunc_7563(1);
}




void func_259(var uParam0, var uParam1, float fParam2)//Position - 0x8CD4
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_4[iVar0]))
			{
				if (GlobalFunc_156(uParam0->f_2, uParam1->f_4[iVar0], 1) > fParam2)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam1->f_4[iVar0]));
				}
			}
			iVar0++;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_10))
	{
		if (GlobalFunc_156(uParam0->f_2, uParam1->f_10, 1) > fParam2)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam1->f_10));
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam1->f_11));
		}
	}
}

void func_260(var uParam0, int iParam1, bool bParam2)//Position - 0x8D5C
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
			if (func_283(uParam0))
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
				func_280(5, uParam0);
				func_279(uParam0);
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
			if (func_278(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_280(0, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[0 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
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
			if (func_277(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_280(1, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[1 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
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
			if (func_276(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_280(8, uParam0);
				func_279(uParam0);
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
			if (func_275(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_280(6, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[6 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
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
			if (func_274(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_280(4, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[4 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
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
			if (func_273(uParam0))
			{
				func_280(7, uParam0);
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
				func_279(uParam0);
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
				func_280(9, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[9 /*10*/].f_9, 1, 0, 1);
				}
				func_279(uParam0);
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
			if (func_266(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_280(13, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[13 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
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
			if (func_265(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_280(14, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[14 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
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
			if (func_264(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_280(11, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[11 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
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
			if (func_263(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_280(12, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[12 /*10*/].f_9, 1, 0, 0);
				}
				func_279(uParam0);
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
			if (func_261(uParam0))
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
				func_280(2, uParam0);
				func_279(uParam0);
			}
		}
	}
}

int func_261(var uParam0)//Position - 0x9556
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


int func_263(var uParam0)//Position - 0x9653
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

int func_264(var uParam0)//Position - 0x96E2
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

int func_265(var uParam0)//Position - 0x9812
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

int func_266(var uParam0)//Position - 0x9995
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







int func_273(var uParam0)//Position - 0x9D10
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

int func_274(var uParam0)//Position - 0x9DA5
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

int func_275(var uParam0)//Position - 0x9E17
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

int func_276(var uParam0)//Position - 0x9E8D
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

int func_277(var uParam0)//Position - 0x9F0E
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

int func_278(var uParam0)//Position - 0x9F9A
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

void func_279(var uParam0)//Position - 0xA024
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

void func_280(int iParam0, var uParam1)//Position - 0xA06C
{
	Local_189[iParam0 /*10*/].f_1++;
	func_281(uParam1, iParam0);
	GlobalFunc_235(&(Local_189[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_281(var uParam0, int iParam1)//Position - 0xA09F
{
	uParam0->f_76 = (uParam0->f_76 + Local_189[iParam1 /*10*/]);
}


int func_283(var uParam0)//Position - 0xA0C9
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

void func_284(var uParam0, char* sParam1, int iParam2)//Position - 0xA140
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



















void func_303()//Position - 0xB2DC
{
	GlobalFunc_7571(&Local_462);
	if (GlobalFunc_7570(&Local_462, &Local_1011))
	{
		switch (Local_1011.f_27)
		{
			case 0:
				if (Local_462.f_410 == 9)
				{
					if (!GlobalFunc_7560(&Local_462))
					{
						if (GlobalFunc_6612("TAXI_OBJ_CC1") || HUD::DOES_BLIP_EXIST(Local_892.f_36[2]))
						{
							Local_1011.f_27++;
						}
						else if (GlobalFunc_4755(&Local_462) != 10)
						{
							GlobalFunc_9566(&Local_462, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((GlobalFunc_4755(&Local_462) > 10 && GlobalFunc_4755(&Local_462) != 15) && !GlobalFunc_7560(&Local_462))
				{
					GlobalFunc_9566(&Local_462, 15, 1, 0, 0);
					if (bLocal_1010)
					{
					}
					GlobalFunc_8925(&Local_462, 7);
				}
				break;
			
			case 2:
				if (!Local_892.f_66)
				{
					Local_892.f_66 = 1;
					bLocal_442 = true;
				}
				if (GlobalFunc_4710(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 530f)
				{
					Local_1011.f_27++;
				}
				if (GlobalFunc_8928(&Local_462, 11) > 17f || GlobalFunc_4710(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 700f)
				{
					GlobalFunc_9566(&Local_462, 95, 1, 0, 0);
					if (bLocal_1010)
					{
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			
			case 3:
				if ((GlobalFunc_4755(&Local_462) > 10 && GlobalFunc_4755(&Local_462) != 16) && !GlobalFunc_7560(&Local_462))
				{
					GlobalFunc_9566(&Local_462, 16, 1, 0, 0);
					if (bLocal_1010)
					{
					}
				}
				break;
			
			case 4:
				if (GlobalFunc_4710(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 530f)
				{
					Local_1011.f_27++;
				}
				if (GlobalFunc_8928(&Local_462, 11) > 8f || GlobalFunc_4710(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 700f)
				{
					GlobalFunc_9566(&Local_462, 94, 1, 0, 0);
					if (bLocal_1010)
					{
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			
			case 5:
				if (GlobalFunc_8928(&Local_462, 11) > 20f || GlobalFunc_4710(Local_462.f_4, Local_892.f_16[2 /*3*/], 1) < 530f)
				{
					if (!iLocal_445)
					{
						iLocal_445 = 1;
					}
					if (!bLocal_443)
					{
						GlobalFunc_9566(&Local_462, 96, 1, 0, 0);
						bLocal_443 = true;
						if (bLocal_1010)
						{
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			
			case 6:
				if (GlobalFunc_8928(&Local_462, 18) > MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 16f))
				{
				}
				break;
			}
	}
	func_304(&Local_462, &uLocal_1041, &Local_1011, bLocal_1010);
}

int func_304(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xB5BC
{
	func_312(uParam0, uParam1);
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








void func_312(var uParam0, var uParam1)//Position - 0xBC6C
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





















void func_333(var uParam0)//Position - 0x10165
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_96066.f_225[3]))
	{
		uParam0->f_4[0] = Global_96066.f_225[3];
		uParam0->f_4[1] = Global_96066.f_225[4];
		uParam0->f_4[2] = Global_96066.f_225[5];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[0], 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[1], 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[2], 1, 1);
	}
	else
	{
		uParam0->f_4[0] = PED::CREATE_PED(26, uParam0->f_45[0], -1283.45f, 299.3781f, 63.9305f, 151.9095f, 1, 1);
		uParam0->f_4[1] = PED::CREATE_PED(26, uParam0->f_45[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4[0], 1f, 1f, 0f), 90.5877f, 1, 1);
		uParam0->f_4[2] = PED::CREATE_PED(26, uParam0->f_45[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4[0], -1f, 1f, 0f), 163.5411f, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96066.f_225[6]))
	{
		uParam0->f_4[3] = Global_96066.f_225[6];
		uParam0->f_4[4] = Global_96066.f_225[7];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[3], 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[4], 1, 1);
	}
	else
	{
		uParam0->f_4[3] = PED::CREATE_PED(26, uParam0->f_45[3], -1282.83f, 306.2308f, 63.9354f, 163.5411f, 1, 1);
		uParam0->f_4[4] = PED::CREATE_PED(26, uParam0->f_45[4], -1280.987f, 305.4652f, 63.9499f, 90.5877f, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96066.f_222[0]))
	{
		uParam0->f_10 = Global_96066.f_222[0];
		uParam0->f_11 = Global_96066.f_222[1];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_10, 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_11, 1, 1);
	}
	else
	{
		uParam0->f_10 = VEHICLE::CREATE_VEHICLE(joaat("stretch"), -1290.724f, 284.893f, 63.7823f, 55.6864f, 1, 1);
		uParam0->f_11 = VEHICLE::CREATE_VEHICLE(joaat("superd"), -1288.964f, 296.9287f, 63.8537f, 67.6169f, 1, 1);
	}
	Var2 = { -1276.693f, 312.9434f, 64.491f };
	Var5 = { -1281.349f, 315.1646f, 64.4805f };
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4[iVar1]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_4[iVar1]);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			switch (iVar1)
			{
				case 0:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[1], 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 4000, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var2, 1f, 20000, 1193033728, 1056964608);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 1:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[0], 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 6000, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var2, 1f, 20000, 1193033728, 1056964608);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 2:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[0], 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 8500, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var2, 1f, 20000, 1193033728, 1056964608);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var5, 1f, 20000, 1193033728, 1056964608);
					break;
				
				case 3:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[4], 0);
					TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4[4], 3, 2, 2);
					TASK::TASK_CHAT_TO_PED(0, uParam0->f_4[4], 16, 0f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[3], 0);
					TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4[3], 3, 2, 2);
					TASK::TASK_CHAT_TO_PED(0, uParam0->f_4[3], 16, 0f, 0f, 0f, 0f, 0f);
					break;
			}
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_4[iVar1], uVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar1]) && (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar1], 242628503) != 1 || TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar1], 242628503) == 7))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar1], 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[iVar1]);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			func_334(uParam0, iVar1, MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE((*uParam0)[iVar1], uVar0);
		}
		iVar1++;
	}
}

void func_334(var uParam0, int iParam1, int iParam2)//Position - 0x106BA
{
	iParam2 = iParam2;
	switch (iParam1)
	{
		case 0:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, (*uParam0)[1], 0);
			TASK::TASK_LOOK_AT_ENTITY(0, (*uParam0)[1], 3, 2, 2);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 1:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, (*uParam0)[0], 0);
			TASK::TASK_LOOK_AT_ENTITY(0, (*uParam0)[0], 3, 2, 2);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, (*uParam0)[0], 0);
			TASK::TASK_LOOK_AT_ENTITY(0, (*uParam0)[0], 3, 2, 2);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
	}
}

int func_335()//Position - 0x10787
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_892.f_45[0]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P0_AMANDA", &iLocal_998, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_892.f_45[1]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P1_BRENDA", &iLocal_998, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_892.f_45[2]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P2_CANDY", &iLocal_998, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_892.f_45[3]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P4_GUEST1", &iLocal_998, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_892.f_45[4]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P6_GUEST3", &iLocal_998, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("stretch")))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading STRETCH", &iLocal_998, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("superd")))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading SUPERD", &iLocal_998, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@gyn@cc@intro"))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@gyn@cc@intro Loading...", &iLocal_998, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_impatient@female@no_sign@exit"))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_998, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_impatient@female@no_sign@base"))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_998, 1000);
		return 0;
	}
	return 1;
}


int func_337(var uParam0, var uParam1, var uParam2)//Position - 0x108DE
{
	var uVar0;
	int iVar1;
	
	if (!uParam0->f_109)
	{
		if ((func_343((*uParam1)[0], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1) || func_343((*uParam1)[1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1)) || func_343((*uParam1)[2], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
		{
			func_341(uParam0, &uVar0, uParam2);
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
			{
				if (func_343(uParam1->f_4[iVar1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
				{
					func_284(uParam0, "Taxi attacked the entourage", 9);
					return 1;
				}
			}
			iVar1++;
		}
		GlobalFunc_10908(uParam0);
	}
	return 0;
}




void func_341(var uParam0, var uParam1, var uParam2)//Position - 0x10A8F
{
	switch (*uParam1)
	{
		case 1:
			if (GlobalFunc_10600(uParam0, 0, 1))
			{
				func_284(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (GlobalFunc_10600(uParam0, 0, 4))
			{
				func_284(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (GlobalFunc_10600(uParam0, 0, 8))
			{
				func_284(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (GlobalFunc_10600(uParam0, 1, 1))
			{
				func_284(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (GlobalFunc_10600(uParam0, 0, 1))
			{
				func_284(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!GlobalFunc_747(*uParam2, 2) && GlobalFunc_4746(uParam0))
			{
				func_284(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}


int func_343(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x10BE6
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
			if (func_344(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!GlobalFunc_747(*uParam2, 16))
		{
			if (func_344(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
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

int func_344(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x10D0E
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







void func_351(var uParam0)//Position - 0x112C3
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
			func_284(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_352(var uParam0, var uParam1)//Position - 0x113D6
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
		if (func_343(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			GlobalFunc_8281(uParam0, 27, 0, 0);
			GlobalFunc_8281(uParam0, 10, 0, 0);
			func_341(uParam0, &uVar0, uParam1);
		}
		GlobalFunc_10908(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_353(uParam0);
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

void func_353(var uParam0)//Position - 0x11500
{
	if (!GlobalFunc_6710(uParam0->f_429))
	{
		uParam0->f_429 = GlobalFunc_7719();
		GlobalFunc_8328(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (GlobalFunc_8448(uParam0->f_429))
	{
		func_284(uParam0, "Player took too long to make pickup", 9);
	}
}






















void func_375()//Position - 0x11C68
{
	func_376(&Local_462);
	func_393();
}

void func_376(var uParam0)//Position - 0x11C7B
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		GlobalFunc_4670(2);
	}
}




void func_380()//Position - 0x11DFA
{
	GlobalFunc_8929(&Local_462, 7);
	Local_462.f_410 = 0;
	Local_462.f_23 = { -1248.422f, 252.6221f, 63.0799f };
	Local_462.f_33 = 34.4f;
	Local_462.f_26 = { -231.2259f, -889.5931f, 28.8903f };
	Local_462.f_34 = 251.9658f;
	Local_892.f_41[0] = joaat("a_m_y_business_02");
	Local_892.f_41[1] = joaat("a_m_y_business_02");
	Local_892.f_41[2] = joaat("a_m_y_business_02");
	Local_892.f_45[0] = joaat("a_f_y_beach_01");
	Local_892.f_45[1] = joaat("a_f_y_beach_01");
	Local_892.f_45[2] = joaat("a_f_y_beach_01");
	Local_892.f_45[3] = joaat("a_f_y_beach_01");
	Local_892.f_45[4] = joaat("a_m_y_business_01");
	GlobalFunc_4787(&Local_462, 3, 6);
}













void func_393()//Position - 0x12420
{
	func_396(&Local_892);
	func_178();
	func_395();
	func_394();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_394()//Position - 0x1243F
{
	STREAMING::REMOVE_PTFX_ASSET();
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@gyn@cc@hotbox");
}

void func_395()//Position - 0x12453
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_892.f_41[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_892.f_41[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_892.f_41[2]);
}

void func_396(var uParam0)//Position - 0x1247F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_73[iVar0]))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(uParam0->f_73[iVar0], 0);
		}
		iVar0++;
	}
}


