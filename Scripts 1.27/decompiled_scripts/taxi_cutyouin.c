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
	struct<418> Local_412 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_830 = -1;
	var uLocal_831 = -1;
	var uLocal_832 = -1;
	var uLocal_833 = -1;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	int iLocal_842 = 0;
	var uLocal_843 = 0;
	struct<3> Local_844 = { 0, 0, 0 } ;
	struct<3> Local_847 = { 0, 0, 0 } ;
	struct<3> Local_850 = { 0, 0, 0 } ;
	struct<3> Local_853 = { 0, 0, 0 } ;
	struct<3> Local_856 = { 0, 0, 0 } ;
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	bool bLocal_862 = 0;
	int iLocal_863 = 0;
	bool bLocal_864 = 0;
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	int iLocal_868 = 0;
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	int iLocal_871 = 0;
	var uLocal_872 = 0;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	char cLocal_877[24] = "";
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	char cLocal_883[24] = "";
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	char cLocal_889[24] = "";
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	char cLocal_895[24] = "";
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	char cLocal_901[24] = "";
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	char cLocal_907[24] = "";
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	char cLocal_913[24] = "";
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	char cLocal_919[24] = "";
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	char cLocal_925[24] = "";
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	struct<6> Local_931 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 1097859072;
	var uLocal_940 = 1500;
	var uLocal_941 = 45;
	var uLocal_942 = 1103626240;
	var uLocal_943 = 5;
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
	var uLocal_954[2] = { 0, 0 };
	int iLocal_957 = 0;
	var uLocal_958[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_967 = 0;
	int iLocal_968 = 0;
	int iLocal_969 = 0;
	bool bLocal_970 = 0;
	struct<28> Local_971 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 5;
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
	int iLocal_1042 = 0;
	int iLocal_1043 = 0;
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
	Local_844 = { 342.6987f, -996.7599f, 28.2438f };
	Local_847 = { 321.1089f, -996.4285f, 28.20932f };
	Local_850 = { -1042.946f, -2689.55f, 12.7572f };
	Local_853 = { -1044.808f, -2694.138f, 12.728f };
	Local_856 = { 348.0136f, -993.6165f, 31.9655f };
	iLocal_870 = 1;
	iLocal_874 = -1;
	StringCopy(&cLocal_877, "txm8_thank1M_2", 24);
	StringCopy(&cLocal_883, "txm8_thank1T_2", 24);
	StringCopy(&cLocal_889, "txm8_thank1F_2", 24);
	StringCopy(&cLocal_895, "txm8_thank2M_2", 24);
	StringCopy(&cLocal_901, "txm8_thank2T_2", 24);
	StringCopy(&cLocal_907, "txm8_thank2F_2", 24);
	StringCopy(&cLocal_913, "txm8_thank3M_2", 24);
	StringCopy(&cLocal_919, "txm8_thank3T_2", 24);
	StringCopy(&cLocal_925, "txm8_thank3F_2", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		GlobalFunc_4670(2);
		func_413();
	}
	MISC::SET_MISSION_FLAG(1);
	func_400(5);
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_412.f_2))
		{
			func_8();
		}
		else
		{
			GlobalFunc_8923(&Local_412);
		}
		SYSTEM::WAIT(0);
	}
}








void func_8()//Position - 0x384
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_4786(&Local_412))
	{
		if (GlobalFunc_9568(&Local_412, bLocal_862))
		{
			func_396();
		}
	}
	else
	{
		GlobalFunc_7576(&Local_412);
		func_361(&Local_412, &uLocal_937);
		if (Local_412.f_410 != 28 && Local_412.f_410 != 30)
		{
			func_360(&Local_412);
		}
		GlobalFunc_6615(&Local_412, &uLocal_872, 0);
		if (Local_412.f_410 > 2)
		{
			if (((Local_412.f_410 == 21 || Local_412.f_410 == 25) || Local_412.f_410 == 9) || Local_412.f_410 == 22)
			{
				func_358(&Local_412);
			}
			if (!GlobalFunc_4783(&Local_412))
			{
				func_327();
			}
			else
			{
				func_311(&Local_412, "Taxi Not Driveable", GlobalFunc_4778(&Local_412));
			}
		}
		if (Local_412.f_410 == 9 || Local_412.f_410 == 22)
		{
			func_288(&Local_412, 0, 1);
		}
		if (Local_412.f_410 == 17 || Local_412.f_410 == 21)
		{
			if (GlobalFunc_4752(&Local_412) && GlobalFunc_4953(1, 1, 0))
			{
				GlobalFunc_8932(&uLocal_44, Local_856, 0, 0, 1, 1, 1);
			}
			else
			{
				GlobalFunc_4948(&uLocal_44, 0, 0);
			}
			if (GlobalFunc_10900(&Local_412) && GlobalFunc_4953(1, 1, 0))
			{
				if (!MISC::IS_BIT_SET(uLocal_871, 3))
				{
					GlobalFunc_159("TAXI_HNT_CAM", -1);
					MISC::SET_BIT(&iLocal_871, 3);
					if (MISC::IS_BIT_SET(iLocal_871, 4))
					{
						MISC::CLEAR_BIT(&iLocal_871, 4);
					}
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_871, 4))
			{
				HUD::CLEAR_HELP(1);
				MISC::SET_BIT(&iLocal_871, 4);
			}
		}
		switch (Local_412.f_410)
		{
			case 0:
				func_266();
				GlobalFunc_8281(&Local_412, 16, 4f, 0);
				GlobalFunc_7575(&Local_412, Local_850, Local_853, "TaxiDerrick", func_264(0), 116.1366f, 10f);
				GlobalFunc_8286(&Local_412);
				GlobalFunc_4773(&Local_412, 1);
				break;
			
			case 1:
				if (func_257())
				{
					PED::ADD_RELATIONSHIP_GROUP("TAXI_Pursuers", &iLocal_969);
					func_256();
					func_236();
					GlobalFunc_4775(&(Local_408[0 /*3*/]), "TAXI_SC_BN_07", 1000);
					GlobalFunc_4774(&Local_412, &Local_408);
					GlobalFunc_6595(&Local_412);
					Local_412.f_14 = { Local_850 };
					GlobalFunc_4773(&Local_412, 3);
				}
				break;
			
			case 3:
				if (func_227(&Local_412, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_412.f_3))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_412.f_3, 8, 0, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_412.f_3, iLocal_969);
						WEAPON::REMOVE_ALL_PED_WEAPONS(Local_412.f_3, 1);
					}
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1035.326f, -2703.305f, 12.8004f, -1056.08f, -2568.675f, 12.8181f, 125f, 1, 0, 1);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, 1166638144, Local_412.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, -1865950624, Local_412.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, 296331235, Local_412.f_413);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_264(0));
					GlobalFunc_8926(&Local_412, 1, 0);
					GlobalFunc_4773(&Local_412, 5);
				}
				break;
			
			case 5:
				if (func_202(&Local_412, 0, 1109393408))
				{
					Local_412.f_17 = { func_201(0) };
					iLocal_859 = 1;
					GlobalFunc_4773(&Local_412, 15);
				}
				break;
			
			case 15:
				if (func_200(&Local_412))
				{
					GlobalFunc_9566(&Local_412, 9, 1, 0, 0);
					GlobalFunc_6590(&Local_412);
					func_195();
					GlobalFunc_6583(func_201(-1), 0, 1114636288);
					GlobalFunc_4773(&Local_412, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_412.f_4, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_412.f_2, Local_412.f_4, 0))
					{
						GlobalFunc_8284(&Local_412);
						GlobalFunc_4773(&Local_412, 5);
					}
				}
				break;
			
			case 9:
				if (!GlobalFunc_747(Local_412.f_82, 16384) && GlobalFunc_4755(&Local_412) != 35)
				{
					if (GlobalFunc_4746(&Local_412))
					{
						if (GlobalFunc_10900(&Local_412))
						{
							if (GlobalFunc_4710(Local_412.f_4, Local_412.f_17, 1) <= 80f)
							{
								GlobalFunc_7559(&uLocal_1001);
								GlobalFunc_4749(&Local_971, 4, 0);
								GlobalFunc_9566(&Local_412, 35, 1, 1, 0);
								PED::SET_CREATE_RANDOM_COPS(0);
							}
						}
					}
				}
				if (!iLocal_869)
				{
					if (GlobalFunc_4746(&Local_412))
					{
						if (GlobalFunc_10900(&Local_412))
						{
							if (GlobalFunc_4710(Local_412.f_4, Local_412.f_17, 1) <= 100f)
							{
								MISC::CLEAR_AREA_OF_COPS(333.6208f, -955.5027f, 28.4225f, 60f, 0);
								iLocal_869 = 1;
							}
						}
					}
				}
				if (func_165(&Local_412, 1086324736, 1097859072, 1117782016))
				{
					iLocal_859 = 0;
					HUD::SET_BLIP_ALPHA(Local_412.f_9, 0);
					Local_412.f_26 = { -1047.518f, -2722.114f, 19.0823f };
					Local_412.f_34 = 238.52f;
					GlobalFunc_8281(&Local_412, 6, 0, 0);
					GlobalFunc_6594(&(Local_412.f_81), 67108864);
					GlobalFunc_9566(&Local_412, 28, 1, 1, 0);
					Local_412.f_417 = 29;
					GlobalFunc_4773(&Local_412, 16);
				}
				break;
			
			case 16:
				if (!PED::IS_PED_INJURED(Local_412.f_3))
				{
					if (GlobalFunc_4746(&Local_412))
					{
						GlobalFunc_6586(&Local_412, Local_844);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_412.f_3, 451360105) == 7)
					{
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_843);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_843);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_844, 1.5f, 40000, 1048576000, 0, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 337.3356f, -997.7456f, 28.1318f, 3f, 40000, 1048576000, 0, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_847, 3f, 40000, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_843);
						TASK::TASK_PERFORM_SEQUENCE(Local_412.f_3, uLocal_843);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_843);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
						GlobalFunc_8281(&Local_412, 6, 0, 0);
						GlobalFunc_4773(&Local_412, 17);
						iLocal_860 = 0;
					}
				}
				break;
			
			case 17:
				if (!PED::IS_PED_INJURED(Local_412.f_3))
				{
				}
				if (!iLocal_860)
				{
					func_153();
				}
				if (GlobalFunc_10900(&Local_412))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_412.f_4, Local_412.f_17, 10f, 10f, 10f, false, 1, 0))
					{
						if (GlobalFunc_4710(Local_412.f_4, Local_412.f_17, 1) > 250f)
						{
							func_311(&Local_412, "Player abandoned his accomplice while he at the jewelry store", 8);
						}
						if (GlobalFunc_5682(Local_412.f_3, 1) > 10f)
						{
							if (HUD::GET_BLIP_ALPHA(Local_412.f_9) == 0 && !bLocal_862)
							{
								func_148(&Local_412, 1);
								HUD::CLEAR_THIS_PRINT("TAXI_OBJ_CYI_01");
							}
							GlobalFunc_9566(&Local_412, 57, 1, 0, 1);
						}
					}
					else if (HUD::DOES_BLIP_EXIST(Local_412.f_9) && HUD::GET_BLIP_ALPHA(Local_412.f_9) > 0)
					{
						HUD::SET_BLIP_ALPHA(Local_412.f_9, 0);
						HUD::SET_BLIP_ROUTE(Local_412.f_9, 0);
						GlobalFunc_9566(&Local_412, 29, 1, 0, 1);
						HUD::CLEAR_THIS_PRINT("TAXI_OBJ_CYI_1B");
					}
				}
				else
				{
					if (!iLocal_861)
					{
						iLocal_861 = 1;
					}
					func_137(&Local_412, 1);
				}
				if (((ENTITY::IS_ENTITY_AT_COORD(Local_412.f_4, Local_412.f_17, 10f, 10f, 10f, false, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_412.f_3, Local_847, 5f, 5f, 5f, false, 1, 0)) && GlobalFunc_4752(&Local_412)) && !iLocal_860)
				{
					if (!PED::IS_PED_INJURED(Local_412.f_3))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(Local_412.f_3))
						{
							MISC::SET_BIT(&uLocal_937, 8);
							WEAPON::GIVE_WEAPON_TO_PED(Local_412.f_3, joaat("weapon_combatpistol"), 50, 0, 1);
							TASK::TASK_SHOOT_AT_COORD(Local_412.f_3, 335.5314f, -992.4785f, 28.38245f, 10000, -687903391);
							ENTITY::SET_ENTITY_VISIBLE(Local_412.f_3, 0);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_412.f_3, 0);
							ENTITY::SET_ENTITY_INVINCIBLE(Local_412.f_3, 1);
							ENTITY::SET_ENTITY_COORDS(Local_412.f_3, 339.9392f, -992.9357f, 28.3731f, 1, 0, 0, 1);
							iLocal_860 = 1;
							GlobalFunc_8281(&Local_412, 6, 0, 0);
						}
					}
				}
				if (iLocal_860)
				{
					if ((GlobalFunc_8928(&Local_412, 6) > 8f && ENTITY::IS_ENTITY_AT_COORD(Local_412.f_4, Local_412.f_17, 10f, 10f, 10f, false, 1, 0)) && GlobalFunc_4752(&Local_412))
					{
						if (!PED::IS_PED_INJURED(Local_412.f_3))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(Local_412.f_3))
							{
								MISC::CLEAR_BIT(&uLocal_937, 8);
								ENTITY::SET_ENTITY_VISIBLE(Local_412.f_3, 1);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_412.f_3, 1);
								ENTITY::SET_ENTITY_INVINCIBLE(Local_412.f_3, 0);
								ENTITY::SET_ENTITY_COORDS(Local_412.f_3, Local_847, 1, 0, 0, 1);
								PED::SET_PED_COMPONENT_VARIATION(Local_412.f_3, 8, 1, 0, 0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_412.f_4, 0))
								{
									PED::SET_PED_CONFIG_FLAG(Local_412.f_3, 118, 0);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_412.f_3);
									uVar0 = GlobalFunc_4793(Local_412.f_4, Local_412.f_3);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_843);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_843);
									TASK::TASK_GO_TO_COORD_ANY_MEANS(0, 343.9973f, -998.308f, 28.2314f, 3f, 0, 0, 786603, -1082130432);
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
									TASK::TASK_SWAP_WEAPON(0, 0);
									TASK::TASK_ENTER_VEHICLE(0, Local_412.f_4, 40000, uVar0, 1073741824, 1, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_843);
									TASK::TASK_PERFORM_SEQUENCE(Local_412.f_3, uLocal_843);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_843);
									GlobalFunc_8281(&Local_412, 6, 0, 0);
									if (HUD::DOES_BLIP_EXIST(Local_412.f_9))
									{
										HUD::SET_BLIP_ALPHA(Local_412.f_9, 0);
										HUD::SET_BLIP_ROUTE(Local_412.f_9, 0);
									}
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_412.f_3, "MOVE_P_M_ZERO_RUCKSACK");
									GlobalFunc_4773(&Local_412, 21);
								}
							}
						}
					}
				}
				break;
			
			case 21:
				if (GlobalFunc_8928(&Local_412, 6) > 23f)
				{
					if (!PED::IS_PED_INJURED(Local_412.f_3))
					{
						TASK::CLEAR_PED_TASKS(Local_412.f_3);
						TASK::TASK_SHOOT_AT_ENTITY(Local_412.f_3, PLAYER::PLAYER_PED_ID(), -1, 0);
					}
					func_311(&Local_412, "player didn't let teh Passenger in", 8);
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				if ((ENTITY::IS_ENTITY_AT_COORD(Local_412.f_3, 347.8621f, -983.6118f, 31.30889f, 4f, 3f, 3f, false, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_412.f_4, Local_412.f_17, 10f, 10f, 10f, false, 1, 0)) && iLocal_860)
				{
					FIRE::ADD_EXPLOSION(344.5906f, -996.409f, 28.30219f, 4, 1056964608, 1, 0, 1065353216);
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_874, "Burglar_Bell", 340.8f, -965.4f, 28.4f, "Generic_Alarms", 0, 0, 0);
					iLocal_860 = 0;
				}
				if (GlobalFunc_4746(&Local_412))
				{
					PED::SET_CREATE_RANDOM_COPS(1);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::GET_PLAYER_INDEX(), 2, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), 0);
					AUDIO::START_AUDIO_SCENE("TAXI_CUT_U_IN");
					GlobalFunc_6583(func_201(0), 1, 1114636288);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_412.f_413, joaat("COP"));
					GlobalFunc_6585(6, 2);
					GlobalFunc_9566(&Local_412, 49, 1, 0, 0);
					if (HUD::DOES_BLIP_EXIST(Local_412.f_9))
					{
						HUD::SET_BLIP_ROUTE(Local_412.f_9, 0);
						HUD::REMOVE_BLIP(&(Local_412.f_9));
					}
					GlobalFunc_4948(&uLocal_44, 0, 0);
					GlobalFunc_8281(&Local_412, 6, 0, 0);
					GlobalFunc_8281(&Local_412, 9, 0, 0);
					GlobalFunc_8281(&Local_412, 7, 0, 0);
					GlobalFunc_4773(&Local_412, 25);
				}
				break;
			
			case 25:
				GlobalFunc_4751(&Local_412, &(Local_412.f_43));
				if (GlobalFunc_747(Local_412.f_44, 4))
				{
					GlobalFunc_6581(&(Local_412.f_44), 4);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
				{
					if (!GlobalFunc_4750(&Local_412))
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if ((GlobalFunc_8928(&Local_412, 16) > MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f) && iLocal_876 < 8) || GlobalFunc_8928(&Local_412, 16) > MISC::GET_RANDOM_FLOAT_IN_RANGE(25f, 35f))
							{
								if (GlobalFunc_4755(&Local_412) != 51)
								{
									GlobalFunc_9566(&Local_412, 51, 1, 0, 0);
									iLocal_876++;
								}
								else
								{
									GlobalFunc_8926(&Local_412, 1, 0);
								}
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1 && GlobalFunc_8928(&Local_412, 6) > 10f)
				{
					AUDIO::STOP_AUDIO_SCENE("TAXI_CUT_U_IN");
					GlobalFunc_4773(&Local_412, 26);
					GlobalFunc_6594(&(Local_412.f_44), 1);
				}
				break;
			
			case 26:
				GlobalFunc_4751(&Local_412, &(Local_412.f_43));
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
				{
					if (!GlobalFunc_4750(&Local_412))
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if ((GlobalFunc_8928(&Local_412, 16) > MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f) && iLocal_876 < 8) || GlobalFunc_8928(&Local_412, 16) > MISC::GET_RANDOM_FLOAT_IN_RANGE(25f, 35f))
							{
								if (GlobalFunc_4755(&Local_412) != 51)
								{
									GlobalFunc_9566(&Local_412, 51, 1, 0, 0);
									iLocal_876++;
								}
								else
								{
									GlobalFunc_8926(&Local_412, 1, 0);
								}
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1 && GlobalFunc_8928(&Local_412, 9) > 2f)
				{
					if (GlobalFunc_8928(&Local_412, 9) <= 180f)
					{
						GlobalFunc_4748(&Local_412, 0);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, Local_412.f_413, joaat("COP"));
					Local_412.f_17 = { func_201(5) };
					GlobalFunc_6585(7, 2);
					func_126(&Local_412);
					GlobalFunc_6589(&Local_412, 9, 0);
					GlobalFunc_6589(&Local_412, 2, 0);
					GlobalFunc_6589(&Local_412, 3, 0);
					if (!GlobalFunc_747(Local_412.f_44, 4))
					{
						GlobalFunc_6594(&(Local_412.f_44), 4);
					}
					Local_412.f_116 = 1;
					GlobalFunc_4773(&Local_412, 14);
				}
				break;
			
			case 14:
				if (!GlobalFunc_7560(&Local_412))
				{
					func_120();
					func_148(&Local_412, 1);
					func_119();
					GlobalFunc_4773(&Local_412, 22);
				}
				break;
			
			case 22:
				if (!bLocal_864)
				{
					if (Local_412.f_417 == 33 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
					{
						bLocal_864 = true;
						GlobalFunc_6594(&(Local_412.f_44), 4);
						GlobalFunc_894(&iLocal_874);
						Local_971.f_27++;
					}
				}
				if (bLocal_864)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
					{
						if (HUD::DOES_BLIP_EXIST(Local_412.f_9))
						{
							HUD::SET_BLIP_ROUTE(Local_412.f_9, 0);
							HUD::REMOVE_BLIP(&(Local_412.f_9));
						}
					}
					else
					{
						func_148(&Local_412, 1);
					}
				}
				if (GlobalFunc_747(Local_412.f_44, 1) && bLocal_864)
				{
					GlobalFunc_6581(&(Local_412.f_44), 1);
					if (bLocal_970)
					{
					}
				}
				if (!GlobalFunc_747(Local_412.f_82, 32768) && GlobalFunc_4755(&Local_412) != 36)
				{
					if (GlobalFunc_4746(&Local_412))
					{
						if (GlobalFunc_10900(&Local_412))
						{
							if (GlobalFunc_4710(Local_412.f_4, Local_412.f_17, 1) <= 300f)
							{
								if (!GlobalFunc_111())
								{
									GlobalFunc_9566(&Local_412, 36, 1, 1, 0);
								}
								else
								{
									GlobalFunc_4935();
								}
								if (iLocal_863 && !iLocal_866)
								{
									MISC::CLEAR_AREA(Local_412.f_17, 3f, 0, 0, 0, 0);
									uLocal_967 = PED::ADD_SCENARIO_BLOCKING_AREA(-1033.188f, -2743.18f, 19f, -1047.948f, -2739.18f, 20.20066f, 0, 1, 1, 1);
									uLocal_954[0] = PED::CREATE_PED(6, func_264(3), -1036.502f, -2742.986f, 20.16969f, 0, 1, 1);
									uLocal_954[1] = PED::CREATE_PED(6, func_264(3), -1043.706f, -2739.234f, 19.16969f, 0, 1, 1);
									WEAPON::GIVE_WEAPON_TO_PED(uLocal_954[0], joaat("weapon_carbinerifle"), -1, 1, 1);
									WEAPON::GIVE_WEAPON_TO_PED(uLocal_954[1], joaat("weapon_carbinerifle"), -1, 1, 1);
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(-1036.502f, -2742.986f, 20.16969f, 5f, 1))
									{
										TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(uLocal_954[0], -1036.502f, -2742.986f, 20.16969f, 2.5f, 0);
									}
									else
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_954[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
									}
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(-1043.706f, -2739.234f, 19.16969f, 5f, 1))
									{
										TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(uLocal_954[1], -1043.706f, -2739.234f, 19.16969f, 2.5f, 0);
									}
									else
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_954[1], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
									}
									iLocal_866 = 1;
								}
							}
						}
					}
				}
				if (func_165(&Local_412, 1086324736, 1097859072, 1117782016))
				{
					Local_971 = 0;
					HUD::REMOVE_BLIP(&(Local_412.f_9));
					func_113(&Local_412);
					GlobalFunc_10596(&Local_412);
					func_108();
					GlobalFunc_4773(&Local_412, 27);
				}
				break;
			
			case 27:
				if (func_106() && !iLocal_865)
				{
					GlobalFunc_4764(&Local_412, &iVar1);
					uLocal_842 = OBJECT::CREATE_OBJECT(joaat("p_banknote_s"), ENTITY::GET_ENTITY_COORDS(Local_412.f_3, 1), 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_842, Local_412.f_3, 57005, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					if (!PED::IS_PED_INJURED(Local_412.f_3) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_PLAY_ANIM(Local_412.f_3, "oddjobs@taxi@cyi", func_104(iVar1), 2f, -2f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@taxi@cyi", func_103(iVar1), 2f, -2f, -1, 0, 0, 0, 0, 0);
						ENTITY::PLAY_ENTITY_ANIM(uLocal_842, func_102(iVar1), "oddjobs@taxi@cyi", 1f, 0, 0, 0, 0, 0);
					}
					iLocal_865 = 1;
				}
				if (GlobalFunc_8930(&Local_412, 1))
				{
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_843);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_843);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_412.f_29, 1f, 20000, 1048576000, 0, 1193033728);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_843);
					TASK::TASK_PERFORM_SEQUENCE(Local_412.f_3, uLocal_843);
					PED::SET_PED_KEEP_TASK(Local_412.f_3, 1);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_412.f_3, "MOVE_P_M_ZERO_RUCKSACK");
					GlobalFunc_4773(&Local_412, 29);
				}
				break;
			
			case 29:
				if (func_68(&Local_412, &uLocal_944))
				{
					if (iLocal_863 || iLocal_873 == -1)
					{
						GlobalFunc_4773(&Local_412, 28);
					}
					else
					{
						func_11(1, &Local_412, 1);
						GlobalFunc_4773(&Local_412, 30);
					}
				}
				break;
			
			case 28:
				if (func_9())
				{
					func_11(1, &Local_412, 1);
					GlobalFunc_4773(&Local_412, 30);
				}
				break;
			
			case 30:
				func_413();
				break;
			}
	}
}

int func_9()//Position - 0x155B
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	
	Var1 = { Var1 };
	if (iLocal_873 > 2)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	switch (iLocal_873)
	{
		case -1:
			iLocal_873++;
			break;
		
		case 0:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			PED::SET_CREATE_RANDOM_COPS(0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1041.9f, -2745.113f, 20.3644f, 1.25f, 20000, 1048576000, 0, 1193033728);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_412.f_3, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			iLocal_968 = VEHICLE::CREATE_VEHICLE(func_264(4), -1067.146f, -2579.632f, 19.7762f, 150f, 1, 1);
			iLocal_957 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_968, 26, func_264(3), -1, 1, 1);
			GlobalFunc_8281(&Local_412, 9, 0, 0);
			iLocal_873++;
			break;
		
		case 1:
			if (GlobalFunc_8928(&Local_412, 9) > 0.5f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_412.f_3))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_954[0]))
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_954[0], Local_412.f_3, -1, 2049, 3);
						GlobalFunc_173(&(Local_412.f_244), 4, uLocal_954[0], "TaxiOJCop1", 0, 1);
						AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_954[0], "TaxiOJCop1");
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_954[1]))
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_954[1], Local_412.f_3, -1, 2049, 3);
					}
				}
				iLocal_873++;
			}
			break;
		
		case 2:
			if ((!ENTITY::IS_ENTITY_DEAD(uLocal_954[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_954[1])) && !ENTITY::IS_ENTITY_DEAD(Local_412.f_3))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_412.f_3, -1032.675f, -2738.775f, 19.16969f, -1041.51f, -2733.615f, 21.54504f, 2f, 0, 1, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Local_412.f_3, Local_412.f_3, 1f, 0, 4f, 1082130432, 1, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_412.f_3, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_954[0], uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					PED::SET_PED_KEEP_TASK(uLocal_954[0], 1);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_STAND_STILL(0, 1500);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_412.f_3, 2000, 0);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Local_412.f_3, Local_412.f_3, 1f, 0, 4f, 1082130432, 1, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_412.f_3, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_954[1], uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					PED::SET_PED_KEEP_TASK(uLocal_954[1], 1);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_954[0], 3);
					TASK::TASK_LOOK_AT_ENTITY(0, uLocal_954[0], -1, 2049, 3);
					TASK::TASK_STAND_STILL(0, 1000);
					TASK::TASK_HANDS_UP(0, -1, 0, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_412.f_3, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					GlobalFunc_9566(&Local_412, 54, 1, 0, 0);
					iLocal_875 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uLocal_958, -1);
					iVar4 = 0;
					while (iVar4 < iLocal_875)
					{
						if (((((uLocal_958[iVar4] != PLAYER::PLAYER_PED_ID() && uLocal_958[iVar4] != Local_412.f_3) && uLocal_958[iVar4] != uLocal_954[1]) && uLocal_958[iVar4] != uLocal_954[0]) && uLocal_958[iVar4] != iLocal_957) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_958[iVar4]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_958[iVar4], 1, 1);
							TASK::TASK_SMART_FLEE_PED(uLocal_958[iVar4], Local_412.f_3, 100f, -1, 0, 0);
						}
						iVar4++;
					}
					GlobalFunc_8281(&Local_412, 9, 0, 0);
					iLocal_873++;
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_8928(&Local_412, 9) > 5f && !GlobalFunc_111())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_969, joaat("COP"));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_969);
				WEAPON::GET_CURRENT_PED_WEAPON(Local_412.f_3, &iVar5, 1);
				if (iVar5 == joaat("weapon_unarmed"))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_412.f_3, joaat("weapon_combatpistol"), -1, 0, 1);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_412.f_3, 13, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_412.f_3, 24, 1);
				PED::SET_PED_COMBAT_MOVEMENT(Local_412.f_3, 2);
				PED::SET_PED_CAN_EVASIVE_DIVE(Local_412.f_3, 1);
				PED::SET_PED_ACCURACY(Local_412.f_3, 80);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_412.f_3, 50f, 0);
				GlobalFunc_8281(&Local_412, 9, 0, 0);
				iLocal_873++;
			}
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_954[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_954[1], PLAYER::PLAYER_PED_ID(), 1)) && !PED::IS_PED_INJURED(Local_412.f_3))
			{
				TASK::TASK_SMART_FLEE_PED(Local_412.f_3, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
				GlobalFunc_8281(&Local_412, 9, 0, 0);
				iLocal_873++;
			}
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_DEAD(Local_412.f_3))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_954[0]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_954[0]);
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(-1036.502f, -2742.986f, 20.16969f, 5f, 1))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(uLocal_954[0], -1036.502f, -2742.986f, 20.16969f, 1f, 0);
					}
					else
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_954[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
					}
					PED::SET_PED_KEEP_TASK(uLocal_954[0], 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_954[1]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_954[1]);
					Var1 = { ENTITY::GET_ENTITY_COORDS(Local_412.f_3, 0) };
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Var1, Var1, 1f, 0, 3f, 1082130432, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, Var1, 500, 0, 0);
					TASK::TASK_LOOK_AT_COORD(0, Var1, -1, 2049, 3);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_954[1], uVar0);
					PED::SET_PED_KEEP_TASK(uLocal_954[0], 1);
				}
				return 1;
			}
			else
			{
				if (GlobalFunc_8928(&Local_412, 9) > 6f)
				{
					GlobalFunc_9566(&Local_412, 140, 1, 0, 1);
					GlobalFunc_8281(&Local_412, 9, 0, 0);
				}
				if (ENTITY::IS_ENTITY_DEAD(uLocal_954[0]) && ENTITY::IS_ENTITY_DEAD(uLocal_954[1]))
				{
					TASK::CLEAR_PED_TASKS(Local_412.f_3);
					TASK::TASK_SMART_FLEE_PED(Local_412.f_3, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
				}
				if (GlobalFunc_5682(Local_412.f_3, 1) > 50f)
				{
					return 1;
				}
			}
			GlobalFunc_8281(&Local_412, 9, 0, 0);
			iLocal_873++;
			break;
		
		case 5:
			if (GlobalFunc_8928(&Local_412, 9) > 2f)
			{
				GlobalFunc_8281(&Local_412, 9, 0, 0);
				iLocal_873++;
			}
			break;
		
		case 6:
			if (GlobalFunc_8928(&Local_412, 9) > 2f)
			{
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_968, func_10(5)) };
				GlobalFunc_8281(&Local_412, 9, 0, 0);
				iLocal_873++;
			}
			break;
		
		case 7:
			if (GlobalFunc_8928(&Local_412, 9) >= 1f)
			{
				iLocal_873++;
			}
			break;
		
		case 8:
			iLocal_873++;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

Vector3 func_10(int iParam0)//Position - 0x1C6A
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -1040.486f, -2726.058f, 21.4491f };
			break;
		
		case 4:
			Var0 = { -1044.847f, -2726.239f, 20.2197f };
			break;
		
		case 6:
			Var0 = { -1045.252f, -2733.154f, 23.9084f };
			break;
		
		case 5:
			Var0 = { -1053.653f, -2720.5f, 20.1615f };
			break;
		
		case 1:
			Var0 = { -1042.008f, -2729.232f, 21.2022f };
			break;
		
		case 2:
			Var0 = { -1049.799f, -2725.069f, 20.7481f };
			break;
		
		case 3:
			Var0 = { -1043.888f, -2723.783f, 20.6874f };
			break;
		
		case 7:
			Var0 = { -1041.917f, -2746.239f, 22.2494f };
			break;
		
		case 8:
			Var0 = { -1041.811f, -2739.353f, 21.2173f };
			break;
	}
	return Var0;
}

void func_11(bool bParam0, var uParam1, bool bParam2)//Position - 0x1D79
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

void func_12(var uParam0, bool bParam1)//Position - 0x1DB5
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





void func_17(int iParam0)//Position - 0x1FAD
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



















































int func_68(var uParam0, var uParam1)//Position - 0x33D9
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
				func_94(uParam0);
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
				func_69(uParam0);
				GlobalFunc_8281(uParam0, 0, 0, 0);
				GlobalFunc_778(0);
				iLocal_167 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_69(var uParam0)//Position - 0x34AB
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

























void func_94(var uParam0)//Position - 0x45CA
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








char* func_102(int iParam0)//Position - 0x49BF
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_money";
		
		case 2:
			return "std_hand_off_rps_money";
		
		case 1:
			return "std_hand_off_rds_money";
		
		default:
	}
	return "";
}

char* func_103(int iParam0)//Position - 0x49F9
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_driver";
		
		case 2:
			return "std_hand_off_rps_driver";
		
		case 1:
			return "std_hand_off_rds_driver";
		
		default:
	}
	return "";
}

char* func_104(int iParam0)//Position - 0x4A33
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_passenger";
		
		case 2:
			return "std_hand_off_rps_passenger";
		
		case 1:
			return "std_hand_off_rds_passenger";
		
		default:
	}
	return "";
}


int func_106()//Position - 0x4ADF
{
	Local_931 = { GlobalFunc_2209() };
	if ((((((((MISC::ARE_STRINGS_EQUAL(&cLocal_877, &Local_931) || MISC::ARE_STRINGS_EQUAL(&cLocal_883, &Local_931)) || MISC::ARE_STRINGS_EQUAL(&cLocal_889, &Local_931)) || MISC::ARE_STRINGS_EQUAL(&cLocal_895, &Local_931)) || MISC::ARE_STRINGS_EQUAL(&cLocal_901, &Local_931)) || MISC::ARE_STRINGS_EQUAL(&cLocal_907, &Local_931)) || MISC::ARE_STRINGS_EQUAL(&cLocal_913, &Local_931)) || MISC::ARE_STRINGS_EQUAL(&cLocal_919, &Local_931)) || MISC::ARE_STRINGS_EQUAL(&cLocal_925, &Local_931))
	{
		return 1;
	}
	return 0;
}


void func_108()//Position - 0x4BC8
{
	if (Local_412.f_56 >= Local_412.f_59)
	{
		Local_412.f_56 = 10000;
	}
	else if (Local_412.f_56 <= 0)
	{
		Local_412.f_56 = 0;
	}
	else
	{
		Local_412.f_56 = 5000;
	}
}





void func_113(var uParam0)//Position - 0x4CB9
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






void func_119()//Position - 0x4DC5
{
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@cyi");
	STREAMING::REQUEST_MODEL(joaat("p_banknote_s"));
}

void func_120()//Position - 0x4DDE
{
	if (GlobalFunc_8928(&Local_412, 7) < 75f && !iLocal_863)
	{
		Local_412.f_57 += 12;
		GlobalFunc_9566(&Local_412, 30, 1, 0, 1);
	}
	else if (GlobalFunc_8928(&Local_412, 7) > 150f || iLocal_863)
	{
		Local_412.f_57 = -10;
		GlobalFunc_9566(&Local_412, 32, 1, 0, 1);
		iLocal_863 = 1;
		func_121();
	}
	else
	{
		Local_412.f_57 += 5;
		GlobalFunc_9566(&Local_412, 31, 1, 0, 1);
	}
}

void func_121()//Position - 0x4E6C
{
	STREAMING::REQUEST_MODEL(func_264(3));
	STREAMING::REQUEST_MODEL(func_264(4));
	VEHICLE::REQUEST_VEHICLE_RECORDING(0, func_122(1));
}

char* func_122(int iParam0)//Position - 0x4E90
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "txm8_pol1_A";
			break;
	}
	return sVar0;
}




void func_126(var uParam0)//Position - 0x4F4C
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











void func_137(var uParam0, bool bParam1)//Position - 0x550D
{
	func_147(uParam0, uParam0->f_3);
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
						func_311(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (GlobalFunc_8928(uParam0, 14) > 20f)
				{
					if (GlobalFunc_5682(uParam0->f_4, 1) > 40f)
					{
						func_311(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_311(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}










void func_147(var uParam0, int iParam1)//Position - 0x58D8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_311(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

void func_148(var uParam0, bool bParam1)//Position - 0x593D
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





void func_153()//Position - 0x5A65
{
	if (bLocal_970)
	{
		GlobalFunc_2654("TAXI_CYI_HANDLE_PLAYER_NEAR_JEWELRY_STORE", &iLocal_870, 1000);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_412.f_3))
	{
		switch (iLocal_1042)
		{
			case 0:
				if (GlobalFunc_4710(Local_412.f_3, Local_844, 1) < 16f)
				{
					iLocal_1042 = 1;
				}
				break;
			
			case 1:
				if (GlobalFunc_5682(Local_412.f_3, 1) < 10f)
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_412.f_3, joaat("weapon_combatpistol"), 50, 1, 1);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_843);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_843);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_843);
					TASK::TASK_PERFORM_SEQUENCE(Local_412.f_3, uLocal_843);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_843);
					GlobalFunc_8281(&Local_412, 12, 0, 0);
					iLocal_1042 = 2;
				}
				break;
			
			case 2:
				if (GlobalFunc_8928(&Local_412, 12) > 1.5f)
				{
					if (iLocal_1043 != 5)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_412.f_2))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_412.f_4, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_412.f_2, Local_412.f_4, 0))
								{
									GlobalFunc_9566(&Local_412, 56, 1, 0, 0);
								}
								else
								{
									GlobalFunc_9566(&Local_412, 55, 1, 1, 0);
								}
							}
						}
						iLocal_867 = 0;
						iLocal_861 = 1;
						GlobalFunc_8281(&Local_412, 12, 0, 0);
						func_158(&Local_412, 6);
						iLocal_1042 = 3;
					}
					else
					{
						GlobalFunc_6589(&Local_412, 12, 0);
						iLocal_1042 = 9;
					}
				}
				break;
			
			case 3:
				if (GlobalFunc_5682(Local_412.f_3, 1) >= 10f)
				{
					iLocal_1042 = 5;
				}
				else if (iLocal_868)
				{
					if (!GlobalFunc_111() && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!iLocal_867)
						{
							GlobalFunc_8281(&Local_412, 12, 0, 0);
							iLocal_867 = 1;
						}
						else if (GlobalFunc_8928(&Local_412, 12) > 5f)
						{
							GlobalFunc_6589(&Local_412, 12, 0);
							iLocal_1042 = 9;
						}
					}
				}
				else if (!iLocal_868)
				{
					if (GlobalFunc_5672("txm8_lvMe1") || GlobalFunc_5672("txm8_lvMe2"))
					{
						iLocal_868 = 1;
					}
				}
				break;
			
			case 5:
				func_154(&Local_412, 6);
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_412.f_3, 242628503) != 7)
				{
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_843);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_843);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_844, 1f, 40000, 1048576000, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 337.3356f, -997.7456f, 28.1318f, 3f, 40000, 1048576000, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_847, 3f, 40000, 1048576000, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_843);
					TASK::TASK_PERFORM_SEQUENCE(Local_412.f_3, uLocal_843);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_843);
					iLocal_1043 = 5;
					iLocal_1042 = 0;
				}
				break;
			
			case 9:
				if (GlobalFunc_6588(&Local_412, 12))
				{
					if (GlobalFunc_8928(&Local_412, 12) > 2f)
					{
						GlobalFunc_8281(&Local_412, 6, 0, 0);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_843);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_843);
						TASK::TASK_SHOOT_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, -957453492);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_843);
						TASK::TASK_PERFORM_SEQUENCE(Local_412.f_3, uLocal_843);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_843);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_412.f_413, 1862763509);
						PED::SET_PED_KEEP_TASK(Local_412.f_3, 1);
						bLocal_862 = true;
						if (HUD::DOES_BLIP_EXIST(Local_412.f_9) && HUD::GET_BLIP_ALPHA(Local_412.f_9) > 0)
						{
							HUD::SET_BLIP_ALPHA(Local_412.f_9, 0);
							HUD::SET_BLIP_ROUTE(Local_412.f_9, 0);
							HUD::CLEAR_THIS_PRINT("TAXI_OBJ_CYI_1B");
						}
						iLocal_1042 = 10;
					}
				}
				else
				{
					GlobalFunc_8281(&Local_412, 12, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_412.f_2))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_412.f_4, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_412.f_2, Local_412.f_4, 0))
							{
								GlobalFunc_9566(&Local_412, 56, 1, 0, 0);
							}
							else
							{
								GlobalFunc_9566(&Local_412, 55, 1, 1, 0);
							}
						}
					}
				}
				break;
			
			case 10:
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && GlobalFunc_8928(&Local_412, 6) > 2f)
				{
					func_311(&Local_412, "Passenger shoots player", 9);
				}
				break;
			}
	}
}

void func_154(var uParam0, int iParam1)//Position - 0x5E49
{
	if (GlobalFunc_226(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (GlobalFunc_225(&(uParam0->f_146[iParam1 /*3*/])))
		{
			GlobalFunc_5947(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}




void func_158(var uParam0, int iParam1)//Position - 0x5F05
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







int func_165(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x6177
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (func_181(uParam0))
		{
			GlobalFunc_4751(uParam0, &(uParam0->f_43));
			GlobalFunc_10602(uParam0);
			GlobalFunc_10601(uParam0);
			GlobalFunc_10826(uParam0);
			func_171(uParam0, fParam2, fParam3);
			func_169(uParam0);
			return GlobalFunc_8931(uParam0, iParam1);
		}
	}
	return 0;
}




void func_169(var uParam0)//Position - 0x63DF
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


void func_171(var uParam0, float fParam1, float fParam2)//Position - 0x64CF
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
					func_311(uParam0, "Car not moving", 20);
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










int func_181(var uParam0)//Position - 0x6B8A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_311(uParam0, "Passenger left car.", 9);
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
				func_137(uParam0, 1);
			}
		}
	}
	return 0;
}














void func_195()//Position - 0x6E64
{
	GlobalFunc_6594(&(Local_412.f_55), 2);
	GlobalFunc_6594(&(Local_412.f_55), 4);
	GlobalFunc_6594(&(Local_412.f_55), 16);
	GlobalFunc_6594(&(Local_412.f_55), 64);
	GlobalFunc_6594(&(Local_412.f_55), 256);
	GlobalFunc_6594(&(Local_412.f_55), 512);
	GlobalFunc_6594(&(Local_412.f_55), 1024);
	GlobalFunc_6594(&(Local_412.f_55), 2048);
	GlobalFunc_6594(&(Local_412.f_55), 4096);
	GlobalFunc_6594(&(Local_412.f_100), 8);
	GlobalFunc_6594(&(Local_412.f_100), 2048);
	GlobalFunc_6594(&(Local_412.f_100), 256);
	GlobalFunc_6594(&uLocal_937, 2);
}





int func_200(var uParam0)//Position - 0x6FCB
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

Vector3 func_201(int iParam0)//Position - 0x701E
{
	switch (iParam0)
	{
		case -1:
			return 335.4227f, -956.4223f, 28.3588f;
			break;
		
		case 0:
			return 349.926f, -958.3827f, 28.3033f;
			break;
		
		case 1:
			return -1020.581f, -2743.842f, 18.4049f;
			break;
		
		case 2:
			return -1043.947f, -2748.683f, 20.3594f;
			break;
		
		case 3:
			return -1042.391f, -2731.644f, 19.1701f;
			break;
		
		case 4:
			return -1045.677f, -2730.109f, 19.1701f;
			break;
		
		case 5:
			return -1032.295f, -2731.449f, 19.0458f;
			break;
		
		case 6:
			return -1051.045f, -2722.934f, 19.1693f;
			break;
		
		case 7:
			return -1052.905f, -2723.375f, 19.1693f;
			break;
		
		case 8:
			return -1042.812f, -2743.095f, 20.362f;
			break;
		
		default:
			return 354.5381f, -947.7332f, 28.359f;
			break;
	}
	return GlobalFunc_649();
}

int func_202(var uParam0, bool bParam1, float fParam2)//Position - 0x7154
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
			func_137(uParam0, 1);
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
			func_224(uParam0);
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
					func_311(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 || ((GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && GlobalFunc_713(uParam0->f_3, uParam0->f_11, 1) <= 28f) && GlobalFunc_713(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_220(uParam0, fParam2))
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
									func_311(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!GlobalFunc_4767(uParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_311(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_215(uParam0);
						if (GlobalFunc_6592(uParam0, uParam0->f_3) < fVar4 || GlobalFunc_6582())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_203(uParam0))
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

int func_203(var uParam0)//Position - 0x7664
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
					func_311(uParam0, "You had a dead body in your back seat.", 5);
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












void func_215(var uParam0)//Position - 0x7E24
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
					func_311(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}





int func_220(var uParam0, float fParam1)//Position - 0x813F
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




void func_224(var uParam0)//Position - 0x8658
{
	func_147(uParam0, uParam0->f_3);
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



int func_227(var uParam0, int iParam1)//Position - 0x8714
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
			func_311(uParam0, "ped is fleeing or injured", 5);
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
			func_311(uParam0, "No Taxi", 21);
			GlobalFunc_159("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}









void func_236()//Position - 0x8FFB
{
	Local_342 = 0;
	func_253(37804/*func_255*/, 37779/*func_254*/, 1);
	func_253(37540/*func_251*/, 37517/*func_250*/, 1);
	func_253(37456/*func_249*/, 37431/*func_248*/, 1);
	func_253(37360/*func_247*/, 37336/*func_246*/, 1);
	func_253(37226/*func_245*/, 37205/*func_244*/, 1);
	func_253(37152/*func_242*/, 37127/*func_241*/, 1);
	func_253(36985/*func_238*/, 36962/*func_237*/, 1);
}

int func_237(var uParam0, var uParam1)//Position - 0x9062
{
	uParam1 = uParam1;
	func_311(uParam0, "Taxi Not Driveable", 1);
	return 1;
}




int func_241(var uParam0, var uParam1)//Position - 0x9107
{
	uParam1 = uParam1;
	func_311(uParam0, "Didn't lose police in time.", 9);
	return 1;
}





int func_246(var uParam0, var uParam1)//Position - 0x91D8
{
	uParam1 = uParam1;
	func_311(uParam0, "Taxi Is Flipped", 0);
	return 1;
}


int func_248(var uParam0, var uParam1)//Position - 0x9237
{
	uParam1 = uParam1;
	func_311(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}


int func_250(var uParam0, var uParam1)//Position - 0x928D
{
	uParam1 = uParam1;
	func_311(uParam0, "Taxi Not Driveable", 0);
	return 1;
}



void func_253(int iParam0, int iParam1, bool bParam2)//Position - 0x9329
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

int func_254(var uParam0, var uParam1)//Position - 0x9393
{
	uParam1 = uParam1;
	func_311(uParam0, "Passenger injured.", 15);
	return 1;
}


void func_256()//Position - 0x93EB
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

int func_257()//Position - 0x95C3
{
	if (!GlobalFunc_6601(&iLocal_870, 1))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_870, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_944))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_264(0)))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading U_M_M_JewelThief", &iLocal_870, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MOVE_P_M_ZERO_RUCKSACK"))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading MOVE_P_M_ZERO_RUCKSACK", &iLocal_870, 1000);
		return 0;
	}
	return 1;
}







int func_264(int iParam0)//Position - 0x9AE3
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("u_m_m_jewelthief");
			break;
		
		case 1:
			iVar0 = joaat("manana");
			break;
		
		case 2:
			iVar0 = joaat("issi2");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_cop_01");
			break;
		
		case 4:
			iVar0 = joaat("police2");
			break;
		
		default:
			iVar0 = joaat("u_m_m_jewelthief");
			break;
	}
	return iVar0;
}


void func_266()//Position - 0x9BC0
{
	GlobalFunc_7563(1);
	STREAMING::REQUEST_MODEL(func_264(0));
	uLocal_944 = GlobalFunc_1455();
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Alarms", 0);
	STREAMING::REQUEST_ANIM_DICT("MOVE_P_M_ZERO_RUCKSACK");
}






















void func_288(var uParam0, int iParam1, bool bParam2)//Position - 0xA9BE
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
			if (func_310(uParam0))
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
				func_307(5, uParam0);
				func_126(uParam0);
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
				func_307(0, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[0 /*10*/].f_9, 1, 0, 0);
				}
				func_126(uParam0);
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
				func_307(1, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[1 /*10*/].f_9, 1, 0, 0);
				}
				func_126(uParam0);
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
				func_307(8, uParam0);
				func_126(uParam0);
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
				func_307(6, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[6 /*10*/].f_9, 1, 0, 0);
				}
				func_126(uParam0);
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
				func_307(4, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[4 /*10*/].f_9, 1, 0, 0);
				}
				func_126(uParam0);
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
				func_307(7, uParam0);
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
				func_126(uParam0);
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
				func_307(9, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[9 /*10*/].f_9, 1, 0, 1);
				}
				func_126(uParam0);
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
				func_307(13, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[13 /*10*/].f_9, 1, 0, 0);
				}
				func_126(uParam0);
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
				func_307(14, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[14 /*10*/].f_9, 1, 0, 0);
				}
				func_126(uParam0);
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
				func_307(11, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[11 /*10*/].f_9, 1, 0, 0);
				}
				func_126(uParam0);
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
				func_307(12, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[12 /*10*/].f_9, 1, 0, 0);
				}
				func_126(uParam0);
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
				func_307(2, uParam0);
				func_126(uParam0);
			}
		}
	}
}

int func_289(var uParam0)//Position - 0xB1B8
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


int func_291(var uParam0)//Position - 0xB2B5
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

int func_292(var uParam0)//Position - 0xB344
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

int func_293(var uParam0)//Position - 0xB474
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

int func_294(var uParam0)//Position - 0xB5F7
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







int func_301(var uParam0)//Position - 0xB972
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

int func_302(var uParam0)//Position - 0xBA07
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

int func_303(var uParam0)//Position - 0xBA79
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

int func_304(var uParam0)//Position - 0xBAEF
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

int func_305(var uParam0)//Position - 0xBB70
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

int func_306(var uParam0)//Position - 0xBBFC
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

void func_307(int iParam0, var uParam1)//Position - 0xBC86
{
	Local_189[iParam0 /*10*/].f_1++;
	func_308(uParam1, iParam0);
	GlobalFunc_235(&(Local_189[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_308(var uParam0, int iParam1)//Position - 0xBCB9
{
	uParam0->f_76 = (uParam0->f_76 + Local_189[iParam1 /*10*/]);
}


int func_310(var uParam0)//Position - 0xBCE3
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

void func_311(var uParam0, char* sParam1, int iParam2)//Position - 0xBD5A
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
















void func_327()//Position - 0xCCAC
{
	GlobalFunc_7571(&Local_412);
	if (GlobalFunc_7570(&Local_412, &Local_971))
	{
		switch (Local_971.f_27)
		{
			case 0:
				if (Local_412.f_410 == 9)
				{
					if (!GlobalFunc_7560(&Local_412))
					{
						if (GlobalFunc_6612("TX_OBJ_CYI_DO") || HUD::DOES_BLIP_EXIST(Local_412.f_9))
						{
							Local_971.f_27++;
						}
						else if (GlobalFunc_4755(&Local_412) != 10)
						{
							GlobalFunc_9566(&Local_412, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((GlobalFunc_4755(&Local_412) > 10 && GlobalFunc_4755(&Local_412) != 15) && !GlobalFunc_7560(&Local_412))
				{
					GlobalFunc_9566(&Local_412, 15, 1, 0, 0);
					GlobalFunc_8925(&Local_412, 7);
				}
				break;
			
			case 2:
				if (GlobalFunc_8928(&Local_412, 18) > 2f)
				{
					GlobalFunc_9566(&Local_412, 16, 1, 0, 0);
				}
				break;
			
			case 3:
				if (GlobalFunc_8928(&Local_412, 18) > 2f)
				{
					GlobalFunc_9566(&Local_412, 17, 1, 0, 0);
				}
				break;
			
			case 5:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if ((((GlobalFunc_4755(&Local_412) != 33 && !GlobalFunc_6607(&Local_412)) && !GlobalFunc_7560(&Local_412)) && !bLocal_864) && Local_412.f_410 > 9)
					{
						if (GlobalFunc_8928(&Local_412, 18) > 2f)
						{
							GlobalFunc_9566(&Local_412, 33, 1, 0, 1);
							GlobalFunc_8281(&Local_412, 16, 4f, 0);
							if (bLocal_970)
							{
							}
						}
					}
					else
					{
						if (GlobalFunc_4755(&Local_412) != 33)
						{
						}
						if (!GlobalFunc_6607(&Local_412))
						{
						}
						if (!GlobalFunc_7560(&Local_412))
						{
						}
						if (!bLocal_864)
						{
						}
						if (Local_412.f_410 > 9)
						{
						}
					}
				}
				break;
			
			case 6:
				if (((GlobalFunc_8928(&Local_412, 16) > 4f && GlobalFunc_4755(&Local_412) != 34) && !GlobalFunc_7560(&Local_412)) && !GlobalFunc_6607(&Local_412))
				{
					GlobalFunc_9566(&Local_412, 34, 1, 0, 0);
					if (bLocal_970)
					{
					}
				}
				break;
			
			case 7:
				Local_971.f_27++;
				break;
			}
	}
	func_328(&Local_412, &uLocal_1001, &Local_971, bLocal_970);
}

int func_328(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xCEEE
{
	func_335(uParam0, uParam1);
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







void func_335(var uParam0, var uParam1)//Position - 0xD37E
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























void func_358(var uParam0)//Position - 0x11959
{
	if (!GlobalFunc_4752(uParam0))
	{
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
		func_137(uParam0, 1);
	}
	else if (GlobalFunc_6588(uParam0, 14))
	{
		GlobalFunc_7561(uParam0);
		GlobalFunc_10825(uParam0, 0);
	}
}


void func_360(var uParam0)//Position - 0x11A20
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
			func_311(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_361(var uParam0, var uParam1)//Position - 0x11B33
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
		if (func_388(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			GlobalFunc_8281(uParam0, 27, 0, 0);
			GlobalFunc_8281(uParam0, 10, 0, 0);
			func_386(uParam0, &uVar0, uParam1);
		}
		GlobalFunc_10908(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_362(uParam0);
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

void func_362(var uParam0)//Position - 0x11C5D
{
	if (!GlobalFunc_6710(uParam0->f_429))
	{
		uParam0->f_429 = GlobalFunc_7719();
		GlobalFunc_8328(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (GlobalFunc_8448(uParam0->f_429))
	{
		func_311(uParam0, "Player took too long to make pickup", 9);
	}
}
























void func_386(var uParam0, var uParam1, var uParam2)//Position - 0x1248A
{
	switch (*uParam1)
	{
		case 1:
			if (GlobalFunc_10600(uParam0, 0, 1))
			{
				func_311(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (GlobalFunc_10600(uParam0, 0, 4))
			{
				func_311(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (GlobalFunc_10600(uParam0, 0, 8))
			{
				func_311(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (GlobalFunc_10600(uParam0, 1, 1))
			{
				func_311(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (GlobalFunc_10600(uParam0, 0, 1))
			{
				func_311(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!GlobalFunc_747(*uParam2, 2) && GlobalFunc_4746(uParam0))
			{
				func_311(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}


int func_388(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x125E1
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
			if (func_389(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!GlobalFunc_747(*uParam2, 16))
		{
			if (func_389(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
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

int func_389(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x12709
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







void func_396()//Position - 0x12C8E
{
	func_397(&Local_412);
	func_413();
}

void func_397(var uParam0)//Position - 0x12CA1
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		GlobalFunc_4670(2);
	}
}



void func_400(int iParam0)//Position - 0x12DDF
{
	func_402(&Local_412, iParam0);
	Local_412.f_410 = 0;
	GlobalFunc_4787(&Local_412, 2, 8);
	Local_412.f_23 = { -1069.277f, -2666.156f, 12.665f };
	Local_412.f_33 = 202.9f;
	Local_412.f_26 = { 323.9376f, -956.7155f, 28.346f };
	Local_412.f_34 = 262.6098f;
	Local_412.f_29 = { -1037.711f, -2748.463f, 20.3642f };
}


void func_402(var uParam0, var uParam1)//Position - 0x12E6B
{
	GlobalFunc_563(1);
	GlobalFunc_4754();
	GlobalFunc_8002(&(uParam0->f_244));
	GlobalFunc_7574(uParam0);
	uParam0->f_411 = uParam1;
	if (!GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 4))
	{
		GlobalFunc_6594(&(Global_SAVE_DATA.TAXI_iGenData), 4);
	}
	GlobalFunc_6617(uParam0);
	GlobalFunc_6616(uParam0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	uParam0->f_102 = (GlobalFunc_4788(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = GlobalFunc_8279();
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
}











void func_413()//Position - 0x133B5
{
	int iVar0;
	
	GlobalFunc_6583(func_201(-1), 1, 1114636288);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_954[iVar0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_954[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_264(0));
	GlobalFunc_894(&iLocal_874);
	AUDIO::DISTANT_COP_CAR_SIRENS(0);
	PED::SET_CREATE_RANDOM_COPS(1);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::STOP_AUDIO_SCENE("TAXI_CUT_U_IN");
	STREAMING::REMOVE_ANIM_DICT("MOVE_P_M_ZERO_RUCKSACK");
	GlobalFunc_587();
	func_414();
	GlobalFunc_4948(&uLocal_44, 0, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_967, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_842))
	{
		OBJECT::DELETE_OBJECT(&iLocal_842);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_414()//Position - 0x13453
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_264(3));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_264(4));
	VEHICLE::REMOVE_VEHICLE_RECORDING(0, func_122(1));
}



