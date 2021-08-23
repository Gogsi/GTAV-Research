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
	struct<411> Local_408 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
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
	int iLocal_838 = 0;
	struct<3> Local_839[1];
	int iLocal_843 = 0;
	var uLocal_844 = 0;
	int iLocal_845 = 0;
	float fLocal_846 = 0f;
	var uLocal_847 = 0;
	struct<3> Local_848 = { 0, 0, 0 } ;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	bool bLocal_860 = 0;
	struct<28> Local_861 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 5;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	int iLocal_932 = 0;
	struct<2> Local_933 = { 0, 0 } ;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 1097859072;
	var uLocal_938 = 1500;
	var uLocal_939 = 45;
	var uLocal_940 = 1103626240;
	var uLocal_941 = 5;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	float fLocal_955[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_963[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_986[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	bool bLocal_1009 = 0;
	int iLocal_1010 = 0;
	int iLocal_1011 = 0;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
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
	iLocal_838 = joaat("g_m_m_chigoon_02");
	iLocal_843 = 1;
	Local_848 = { 344.7458f, 452.1832f, 145.9936f };
	iLocal_954 = 2;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_398(2);
		func_396();
	}
	MISC::SET_MISSION_FLAG(1);
	func_383();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_408.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_408);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0xF2
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()//Position - 0x113
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)//Position - 0x15E
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)//Position - 0x19B
{
	if (func_5(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_5(int iParam0)//Position - 0x1C5
{
	return iParam0 < 3;
}

void func_6(var uParam0)//Position - 0x1D1
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_7(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x257
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_8()//Position - 0x2F2
{
	if (func_382(&Local_408))
	{
		func_381(&Local_408);
		if (Local_408.f_410 > 0)
		{
			if (func_380(&Local_408, 0))
			{
				func_378();
			}
		}
		else if (func_377(&Local_408, 31) > 5f)
		{
			func_398(2);
			func_396();
		}
	}
	else
	{
		func_376(&Local_408);
		func_355(&Local_408, &uLocal_935);
		func_350();
		func_349(&Local_408, &uLocal_844, 0);
		func_348(&Local_408);
		if (Local_408.f_410 == 9)
		{
			func_347(&Local_408);
			func_323(&Local_408, 0, 1);
		}
		if (Local_408.f_410 > 2)
		{
			if (!func_322(&Local_408))
			{
				func_287();
			}
			else
			{
				func_270(&Local_408, "Taxi Not Driveable", func_286(&Local_408));
			}
		}
		switch (Local_408.f_410)
		{
			case 0:
				func_267();
				func_266(&Local_408, 16, 4f, 0);
				func_263(&Local_408, func_265(iLocal_954), func_265(iLocal_953), "TaxiKwak", iLocal_838, 180.6f, 1114636288);
				func_261(&Local_408);
				func_260(&Local_408, 1);
				break;
			
			case 1:
				if (func_258())
				{
					func_257();
					func_256(&(Local_839[0 /*3*/]), "TAXI_SC_BN_03", 200);
					func_255(&Local_408, &Local_839);
					Local_408.f_14 = { func_265(iLocal_954) };
					func_235();
					func_234(&Local_408);
					func_260(&Local_408, 3);
				}
				break;
			
			case 3:
				if (func_227(&Local_408, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_408.f_3))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_408.f_3, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_408.f_3, 2, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_408.f_3, 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_408.f_3, 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_408.f_3, 8, 1, 1, 0);
					}
					func_226(&Local_408, 1, 0);
					func_260(&Local_408, 5);
				}
				break;
			
			case 5:
				if (func_198(&Local_408, 0, 1109393408))
				{
					func_260(&Local_408, 15);
				}
				break;
			
			case 15:
				if (func_197(&Local_408))
				{
					Local_408.f_17 = { Local_848 };
					iLocal_932 = func_183();
					Local_933 = { func_178(iLocal_932) };
					Local_408.f_136 = { Local_933 };
					fLocal_846 = 210f;
					func_177(&uLocal_851);
					func_173(&Local_408, 9, 1, 0, 0);
					func_172(&Local_408);
					func_171();
					func_260(&Local_408, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_408.f_4, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_408.f_2, Local_408.f_4, 0))
					{
						func_169(&Local_408);
						func_260(&Local_408, 5);
					}
				}
				break;
			
			case 9:
				func_165();
				if (func_164(&uLocal_851) > (fLocal_846 + 10f))
				{
					if (!func_163())
					{
						func_270(&Local_408, "Player did not hit the deadline", 20);
					}
					else
					{
						func_161();
					}
				}
				if (func_120(&Local_408, func_160(), 7f, 30f))
				{
					if (!func_163())
					{
						func_119(&Local_861, 15, 1);
						HUD::REMOVE_BLIP(&(Local_408.f_9));
						if (func_377(&Local_408, 7) < fLocal_955[5] || Local_408.f_56 >= Local_408.f_59)
						{
							func_118(&Local_408, 0);
						}
						if (func_164(&uLocal_851) > 210f)
						{
							Local_408.f_56 = 0;
						}
						func_116(&Local_408);
						func_112(&Local_408);
						func_111(&Local_408);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 26, 1);
						}
						func_260(&Local_408, 27);
					}
					else
					{
						func_161();
					}
				}
				break;
			
			case 27:
				if (func_101(&Local_408, 1))
				{
					func_99(0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_408.f_3))
					{
						if (func_97(func_98(), Local_408.f_29))
						{
							ENTITY::SET_ENTITY_HEADING(Local_408.f_3, 84.9058f);
							PED::SET_PED_KEEP_TASK(Local_408.f_3, 1);
						}
						else
						{
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_847);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_847);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_408.f_29, 2f, 20000, 1048576000, 0, 1193033728);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 322.1072f, 442.4288f, 140.6772f, 2f, 20000, 1048576000, 0, 1193033728);
							TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_847);
							TASK::TASK_PERFORM_SEQUENCE(Local_408.f_3, uLocal_847);
							PED::SET_PED_KEEP_TASK(Local_408.f_3, 1);
						}
					}
					func_260(&Local_408, 29);
				}
				break;
			
			case 29:
				if (func_68(&Local_408, &uLocal_942))
				{
					func_9(1, &Local_408, 1);
					func_260(&Local_408, 30);
				}
				break;
			
			case 30:
				func_396();
				break;
			}
	}
}

void func_9(bool bParam0, var uParam1, bool bParam2)//Position - 0x782
{
	if (bParam0)
	{
		func_44(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_42(1, 0);
	}
	func_10(uParam1, bParam2);
}

void func_10(var uParam0, bool bParam1)//Position - 0x7BE
{
	func_381(uParam0);
	if (func_163())
	{
		func_40();
	}
	func_38();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	func_35(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, 0);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	func_34(uParam0->f_14, 1);
	func_32(uParam0->f_14, 1, 1114636288);
	func_31(&(uParam0->f_244), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
	if (func_28())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_19(0, 1, 1, 0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	}
	if (func_18(Global_SAVE_DATA.TAXI_iGenData, 4))
	{
		func_16(&(Global_SAVE_DATA.TAXI_iGenData), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_15(), 0);
	}
	if (bParam1)
	{
		func_14(uParam0);
	}
	func_13(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_11(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_164(&uLocal_89) * 1000f)), 12, 0);
}

void func_11(int iParam0)//Position - 0x90F
{
	var uVar0;
	
	if (iLocal_56[0] != 0)
	{
		MemCopy(&uVar0, {func_12(iParam0)}, 6);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
		}
	}
}

struct<8> func_12(int iParam0)//Position - 0x936
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_13(var uParam0)//Position - 0x9FE
{
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uParam0->f_51[0]);
}

void func_14(var uParam0)//Position - 0xA12
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
			{
				PED::RESET_PED_LAST_VEHICLE(uParam0->f_3);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uParam0->f_413, 1862763509);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
		}
	}
}

int func_15()//Position - 0xB06
{
	return joaat("taxi");
}

void func_16(var uParam0, int iParam1)//Position - 0xB13
{
	func_17(uParam0, iParam1);
}

void func_17(var uParam0, int iParam1)//Position - 0xB23
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_18(var uParam0, int iParam1)//Position - 0xB38
{
	return (uParam0 && iParam1) != 0;
}

void func_19(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xB47
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_27(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_14393.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_26())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_25(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_27(0);
		HUD::THEFEED_RESUME();
		Global_54756 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_25(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_20(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_68243 = 0;
	}
}

int func_20(int iParam0)//Position - 0xC18
{
	if (func_22(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_21()//Position - 0xC59
{
	return MISC::IS_BIT_SET(Global_2359301, 3);
}

bool func_22(int iParam0, int iParam1)//Position - 0xC6A
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_23(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_23(int iParam0, bool bParam1)//Position - 0xCB5
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_24()//Position - 0xCF6
{
	return Global_1312737;
}

int func_25(int iParam0, var uParam1, var uParam2)//Position - 0xD02
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_26()//Position - 0xD33
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_27(int iParam0)//Position - 0xD5A
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 13);
	}
}

int func_28()//Position - 0xD7D
{
	if (!func_30() && !func_29())
	{
		if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()//Position - 0xDA8
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_30()//Position - 0xDC2
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_31(var uParam0, int iParam1)//Position - 0xDDC
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_32(struct<3> Param0, bool bParam3, float fParam4)//Position - 0xDF9
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_33(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_33(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		PATHFIND::SET_ROADS_IN_AREA(Var0, Var3, 0, 1);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var3, 1);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}

Vector3 func_33(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)//Position - 0xE6E
{
	struct<3> Var0;
	var uVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	uVar3 = fParam3;
	fVar4 = SYSTEM::COS(uVar3);
	fVar5 = SYSTEM::SIN(uVar3);
	Var0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

void func_34(struct<3> Param0, int iParam3)//Position - 0xEBB
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_97(Param0, func_98()))
	{
		Var0 = { func_33(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_33(Param0, 1f, 30f, 30f, 10f) };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var3, iParam3, 1);
	}
}

void func_35(int iParam0)//Position - 0xF1A
{
	if (Global_14551)
	{
		func_36(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2264, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 30);
	}
	if (!func_26())
	{
		Global_14393.f_1 = 3;
	}
}

void func_36(bool bParam0, bool bParam1)//Position - 0xF8A
{
	if (bParam0)
	{
		if (func_37(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14330);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
}

int func_37(int iParam0)//Position - 0xFFE
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
			{
				return 1;
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
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_38()//Position - 0x1058
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_87300[iVar0 /*17*/] && !Global_87300[iVar0 /*17*/].f_1)
		{
			if (Global_87300[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_87300[iVar0 /*17*/].f_5 != 88 && Global_87300[iVar0 /*17*/].f_5 != 89) && Global_87300[iVar0 /*17*/].f_5 != 92)
				{
					func_39(Global_87300[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_39(int iParam0, bool bParam1)//Position - 0x10DF
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_84352[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84352[iParam0 /*2*/] = 0;
	}
}

void func_40()//Position - 0x111D
{
	Global_14558 = 0;
	func_41();
}

void func_41()//Position - 0x112D
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
	}
}

void func_42(int iParam0, int iParam1)//Position - 0x114E
{
	switch (iParam0)
	{
		case 0:
			Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[0]++;
			func_43("Fares Completed ++ = ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[0]);
			break;
		
		case 1:
			Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[1]++;
			func_43("Fares Failed ++ = ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[1]);
			break;
		
		case 2:
			Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[2]++;
			func_43("Fares Accepted ++ ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[2]);
			break;
		
		case 3:
			Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[3]++;
			func_43("Fares Expired ++ ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[3]);
			break;
		
		case 13:
			Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[13]++;
			func_43("Passengers run ++ = ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[13]);
			break;
		
		case 14:
			Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[14]++;
			func_43("Passenger Forced to Pay ++ = ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[4])
				{
					Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[4] = iParam1;
					func_43("This distance ", iParam1);
					func_43(" is longer than current best", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[4]);
				}
				else
				{
					func_43("Longest Distance Not Beat ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[4]);
				}
			}
			break;
		
		case 5:
			Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[5] = (Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[5] + iParam1);
			func_43("Total Distance w/ Passenger = ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[6]++;
			}
			else
			{
				Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[6] = (Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[6] + iParam1);
			}
			func_43("Wanted Levels ++ = ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[7] = (Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[7] + iParam1);
			}
			else
			{
				Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[7]++;
			}
			func_43("Wanted Levels Lost = ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[7]);
			break;
		
		case 8:
			Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[8]++;
			func_43("Taxis wrecked ++ = ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[8]);
			break;
		
		case 9:
			Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[9]++;
			func_43("Horn Honked ++ = ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[9]);
			break;
		
		case 10:
			Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[10] = (Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[10] + iParam1);
			func_43("Total Money Earned = ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[10]);
			break;
		
		case 11:
			Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[11] = (Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[11] + iParam1);
			func_43("Total Tips Earned = ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[11]);
			break;
		
		case 12:
			if (iParam1 > Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[12])
			{
				Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[12] = iParam1;
				func_43("New Highest Tip = ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[12]);
			}
			else
			{
				func_43("Highest Tip Not Reached = ", Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_STAT_ARRAY[12]);
			}
			break;
	}
}

void func_43(char* sParam0, int iParam1)//Position - 0x153F
{
}

void func_44(var uParam0)//Position - 0x1547
{
	func_42(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_398(1);
		func_56(15, 1);
	}
	func_54(&(Global_SAVE_DATA.TAXI_iGenData), 1024);
	if (!func_18(Global_SAVE_DATA.TAXI_iGenData, 64))
	{
		func_45(func_52(func_53(uParam0)), 0, 0);
	}
}

void func_45(int iParam0, int iParam1, int iParam2)//Position - 0x159B
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_51((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_6 == 11 || Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_5 = 1;
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_10 = iParam1;
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_46();
	}
}

void func_46()//Position - 0x1683
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					STATS::_UPDATE_STAT_INT(joaat("num_rndevents_completed"), Global_97076, 0);
					MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_97089, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_97072, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_97090, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_97073, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_97091, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_97074, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_97092, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_97075, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_97079, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_97096, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_97097, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853))
	{
		func_50(13, SYSTEM::FLOOR(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_68245)
		{
			if (func_49() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_47();
				}
			}
		}
	}
}

int func_47()//Position - 0x1B44
{
	if (func_48(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_48(bool bParam0)//Position - 0x1B8F
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

int func_49()//Position - 0x1BBA
{
	return Global_24444;
}

int func_50(int iParam0, int iParam1)//Position - 0x1BC5
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1C16
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_24();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_52(int iParam0)//Position - 0x1E73
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_53(var uParam0)//Position - 0x1F09
{
	return uParam0->f_411;
}

void func_54(var uParam0, int iParam1)//Position - 0x1F16
{
	func_55(uParam0, iParam1);
}

void func_55(var uParam0, int iParam1)//Position - 0x1F26
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_56(int iParam0, int iParam1)//Position - 0x1F37
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_57(iParam0, iParam1);
}

int func_57(int iParam0, int iParam1)//Position - 0x1F52
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_67(&Global_2544859))
	{
		if (func_65(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_58(&Global_2544859, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_58(var uParam0, int iParam1)//Position - 0x1FD6
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_65(uParam0, iParam1))
	{
		return 0;
	}
	func_61(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_59(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_59(var uParam0, int iParam1)//Position - 0x205C
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_65(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_60(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_60(var uParam0, int iParam1)//Position - 0x20AC
{
	return (*uParam0)[iParam1] == 61;
}

void func_61(var uParam0)//Position - 0x20BD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_64(uParam0, iVar0);
		iVar0++;
	}
	func_62(&(uParam0->f_62), (8f - 0.5f));
}

void func_62(var uParam0, float fParam1)//Position - 0x20F4
{
	uParam0->f_1 = (func_63(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_63(bool bParam0)//Position - 0x2122
{
	var uVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(uVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_64(var uParam0, int iParam1)//Position - 0x216A
{
	(*uParam0)[iParam1] = 61;
}

bool func_65(var uParam0, int iParam1)//Position - 0x217A
{
	return func_66(uParam0, iParam1) != -1;
}

int func_66(var uParam0, int iParam1)//Position - 0x218C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_67(var uParam0)//Position - 0x21B9
{
	return uParam0->f_68 == 1;
}

int func_68(var uParam0, var uParam1)//Position - 0x21C7
{
	switch (iLocal_167)
	{
		case 0:
			if (!func_163() && func_377(uParam0, 0) > 1f)
			{
				if (func_28())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
				func_96(uParam0);
				func_16(&(Global_SAVE_DATA.TAXI_iGenData), 4096);
				func_94(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_95(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_93(1);
				iLocal_167 = 6;
			}
			break;
		
		case 6:
			if (!func_86(uParam1, 0))
			{
				func_69(uParam0);
				func_266(uParam0, 0, 0, 0);
				func_93(0);
				iLocal_167 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_69(var uParam0)//Position - 0x2299
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_70(func_83(), 21, iVar0, 0, 0);
		func_42(10, iVar0);
		iLocal_56[0] = iVar0;
	}
}

void func_70(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x22D7
{
	int iVar0;
	int iVar1;
	
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_71(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x23BE
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_82();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_81(99, 1);
					func_80(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_80(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_80(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_79(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_78(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_80(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_80(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_80(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_78(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_80(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_80(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_80(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_80(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_80(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_80(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_80(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_80(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_80(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_80(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_80(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_80(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_80(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_80(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_80(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_78(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_80(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_80(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_80(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_80(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_80(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_80(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_77(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_81(95, iParam3);
					break;
				
				case 1:
					func_81(97, iParam3);
					break;
				
				case 2:
					func_81(96, iParam3);
					break;
			}
			func_81(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_74(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_74(iVar1);
	}
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_80(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_80(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_80(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/]++;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1++;
		if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_73(iParam0);
	if (Global_34913 == 15)
	{
		func_72(0);
	}
	return 1;
}

void func_72(bool bParam0)//Position - 0x29BD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_73(int iParam0)//Position - 0x2C3F
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_74(int iParam0)//Position - 0x2C99
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_76() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_76() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_75(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_75(int iParam0)//Position - 0x2D5C
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_76()//Position - 0x2DD7
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_77(int iParam0)//Position - 0x2DE4
{
	func_81(93, iParam0);
	func_81(29, iParam0);
	func_81(30, iParam0);
}

bool func_78(int iParam0)//Position - 0x2E04
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_76() /*8053*/].f_5756.f_10, iParam0);
}

int func_79(bool bParam0)//Position - 0x2E40
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_50(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_56(27, 1);
	return 1;
}

void func_80(int iParam0, int iParam1)//Position - 0x2EF7
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_81(int iParam0, int iParam1)//Position - 0x2F1A
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_82()//Position - 0x2F77
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

int func_83()//Position - 0x2FEC
{
	func_84();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_84()//Position - 0x3005
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_4(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_3(PLAYER::PLAYER_PED_ID());
			if (func_5(iVar0) && (!func_85(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_5(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = iVar0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != 145)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
			}
			return;
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
}

bool func_85(int iParam0)//Position - 0x3102
{
	return Global_34913 == iParam0;
}

int func_86(var uParam0, int iParam1)//Position - 0x3110
{
	if (!func_92(&(uParam0->f_2)))
	{
		func_91(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_92(&(uParam0->f_5)))
			{
				func_91(&(uParam0->f_5));
				func_90(uParam0, 1051260355);
			}
		}
		if (func_92(&(uParam0->f_5)))
		{
			if (func_88(&(uParam0->f_5)) > 0.33f)
			{
				func_87(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_88(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_92(&(uParam0->f_5)))
		{
			func_91(&(uParam0->f_5));
			func_90(uParam0, 1051260355);
		}
		else if (func_88(&(uParam0->f_5)) > 0.33f)
		{
			func_87(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_87(var uParam0)//Position - 0x3213
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_88(var uParam0)//Position - 0x3229
{
	if (func_92(uParam0))
	{
		if (func_89(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_63(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_89(var uParam0)//Position - 0x3268
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

void func_90(var uParam0, int iParam1)//Position - 0x3278
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_91(var uParam0)//Position - 0x329E
{
	func_62(uParam0, 0f);
}

bool func_92(var uParam0)//Position - 0x32AD
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_93(int iParam0)//Position - 0x32BD
{
	Global_68505 = iParam0;
	Global_68506 = iParam0;
}

void func_94(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x32D1
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam9);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam6);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam5);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_91(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_95(var uParam0)//Position - 0x333C
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_96(var uParam0)//Position - 0x33D6
{
	int iVar0;
	
	Local_168.f_1 = SYSTEM::TO_FLOAT(uParam0->f_50);
	Local_168.f_2 = SYSTEM::TO_FLOAT(uParam0->f_56);
	func_42(11, uParam0->f_56);
	func_42(12, uParam0->f_56);
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

bool func_97(struct<3> Param0, struct<3> Param3)//Position - 0x3485
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_98()//Position - 0x34AE
{
	struct<3> Var0;
	
	return Var0;
}

void func_99(bool bParam0)//Position - 0x34BA
{
	if (bParam0)
	{
		func_100();
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, bParam0, 0f, 0);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, bParam0, 0f, 0);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, bParam0, 0f, 0);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, bParam0, 0f, 0);
	}
	else
	{
		OBJECT::_DOOR_CONTROL(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, bParam0, 0f, 50f, 0);
		OBJECT::_DOOR_CONTROL(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, bParam0, 0f, 50f, 0);
		OBJECT::_DOOR_CONTROL(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, bParam0, 0f, 50f, 0);
		OBJECT::_DOOR_CONTROL(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, bParam0, 0f, 50f, 0);
	}
}

void func_100()//Position - 0x35C2
{
	OBJECT::_DOOR_CONTROL(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, true, 1f, 50f, 0);
	OBJECT::_DOOR_CONTROL(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, true, 1f, 50f, 0);
	OBJECT::_DOOR_CONTROL(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, true, 1f, 50f, 0);
	OBJECT::_DOOR_CONTROL(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, true, 1f, 50f, 0);
}

int func_101(var uParam0, bool bParam1)//Position - 0x364A
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (func_110(uParam0) && func_107(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_106(uParam0, 2097152))
				{
					func_102(uParam0);
				}
			}
			else
			{
				func_102(uParam0);
			}
		}
		else if (!func_110(uParam0))
		{
			if (bParam1)
			{
				if (func_106(uParam0, 2097152))
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

void func_102(var uParam0)//Position - 0x36E6
{
	struct<3> Var0;
	
	if (func_105(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_103(uParam0, Var0);
}

void func_103(var uParam0, struct<3> Param1)//Position - 0x371C
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3) && PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_104(uParam0->f_3, uParam0->f_4) == 0)
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, 0) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param1, 0) && VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, 0) >= MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param1, 0) && VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				TASK::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_104(int iParam0, int iParam1)//Position - 0x383C
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_105(struct<3> Param0)//Position - 0x38A8
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_106(var uParam0, int iParam1)//Position - 0x38D2
{
	if (iParam1 != 1073741824)
	{
		return (func_18(uParam0->f_81, iParam1) && !func_163());
	}
	return func_163();
}

int func_107(var uParam0, bool bParam1, int iParam2)//Position - 0x38FF
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_37(1))
			{
				func_35(0);
			}
			if (func_28())
			{
				func_109();
				return 1;
			}
			else if (func_108(uParam0->f_4, iParam2, 1, 1056964608, 0, 1))
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

int func_108(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x397F
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	if ((MISC::GET_GAME_TIMER() - Global_28) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, uParam1, iParam2, iParam4);
	}
	Global_28 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_109()//Position - 0x3B01
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	}
}

int func_110(var uParam0)//Position - 0x3B1C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_111(var uParam0)//Position - 0x3B51
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = SYSTEM::CEIL((IntToFloat(uParam0->f_50) * 0.4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = SYSTEM::CEIL((IntToFloat(uParam0->f_50) * 0.15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!func_18(uParam0->f_55, 1))
	{
		func_54(&(uParam0->f_55), 1);
	}
}

void func_112(var uParam0)//Position - 0x3BC5
{
	func_114();
	HUD::CLEAR_PRINTS();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_173(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_173(uParam0, 103, 1, 0, 0);
		}
		func_113(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_173(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_173(uParam0, 102, 1, 0, 0);
	}
	func_266(uParam0, 16, 4f, 0);
}

void func_113(int iParam0)//Position - 0x3C38
{
	Global_96066.f_221 = iParam0;
}

void func_114()//Position - 0x3C48
{
	Global_14558 = 0;
	func_115();
}

void func_115()//Position - 0x3C58
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_16703 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

void func_116(var uParam0)//Position - 0x3C7C
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_117(fVar0);
	iLocal_56[4] = SYSTEM::CEIL(fVar0);
	iLocal_56[5] = SYSTEM::CEIL(fVar0);
	func_42(4, SYSTEM::CEIL(fVar0));
	func_42(5, SYSTEM::CEIL(fVar0));
	uParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_117(float fParam0)//Position - 0x3CCE
{
	return (fParam0 * 0.0006213712f);
}

void func_118(var uParam0, int iParam1)//Position - 0x3CDE
{
	if (iParam1 < 5)
	{
		MISC::SET_BIT(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_119(var uParam0, int iParam1, bool bParam2)//Position - 0x3D0C
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_120(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x3D30
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (func_142(uParam0))
		{
			func_141(uParam0, &(uParam0->f_43));
			func_136(uParam0);
			func_135(uParam0);
			func_132(uParam0);
			func_127(uParam0, fParam2, fParam3);
			func_124(uParam0);
			return func_121(uParam0, iParam1);
		}
	}
	return 0;
}

int func_121(var uParam0, int iParam1)//Position - 0x3DA8
{
	if (func_53(uParam0) == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_123(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_122(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			return func_107(uParam0, 1, iParam1);
		}
	}
	else if (((ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_122(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
	{
		return func_107(uParam0, 1, iParam1);
	}
	return 0;
}

int func_122(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3E7F
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

float func_123(int iParam0, struct<3> Param1, int iParam4)//Position - 0x3F5F
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam4);
}

void func_124(var uParam0)//Position - 0x3F98
{
	float fVar0;
	
	if ((func_110(uParam0) && func_18(uParam0->f_81, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_96) >= 10000)
		{
			fVar0 = func_125(uParam0->f_17, 1);
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
		if (iLocal_95 >= 2 && !func_163())
		{
			func_173(uParam0, 136, 1, 0, 1);
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
			if (!func_110(uParam0))
			{
			}
			if (!func_18(uParam0->f_81, 67108864))
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

float func_125(struct<3> Param0, int iParam3)//Position - 0x406F
{
	return func_126(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Param0, iParam3);
}

float func_126(int iParam0, struct<3> Param1, int iParam4)//Position - 0x4089
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1, iParam4);
}

void func_127(var uParam0, float fParam1, float fParam2)//Position - 0x40B2
{
	if (func_110(uParam0) && func_18(uParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4) || ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 3f) && func_131(uParam0))
		{
			if (!func_130(uParam0, 2))
			{
				func_129(uParam0, 2);
			}
			else if (func_110(uParam0))
			{
				if (func_377(uParam0, 2) > fParam1 && !func_130(uParam0, 14))
				{
					if (func_30())
					{
						func_173(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_173(uParam0, 48, 1, 0, 0);
					}
					func_266(uParam0, 2, 0, 0);
					if (func_130(uParam0, 10))
					{
						func_266(uParam0, 10, 0, 0);
					}
				}
				if (!func_130(uParam0, 3))
				{
					func_266(uParam0, 3, 0, 0);
				}
				else if (func_377(uParam0, 3) >= fParam2)
				{
					func_128(uParam0, 3, 0);
					func_270(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_130(uParam0, 2))
			{
				func_128(uParam0, 2, 0);
			}
			if (func_130(uParam0, 3))
			{
				func_128(uParam0, 3, 0);
			}
		}
	}
}

void func_128(var uParam0, int iParam1, bool bParam2)//Position - 0x41CD
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_87(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_87(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_129(var uParam0, int iParam1)//Position - 0x4216
{
	func_177(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_130(var uParam0, int iParam1)//Position - 0x422A
{
	return func_92(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_131(var uParam0)//Position - 0x423E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

void func_132(var uParam0)//Position - 0x4267
{
	if (func_134(uParam0))
	{
		func_133(uParam0);
	}
}

void func_133(var uParam0)//Position - 0x427E
{
	if (AUDIO::IS_RADIO_RETUNING() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			func_128(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_377(uParam0, 20) > 3f)
				{
					func_173(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_18(uParam0->f_81, 262144) || !func_18(uParam0->f_81, 1048576))
				{
					if (func_377(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_173(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_18(uParam0->f_82, 67108864))
				{
					if (func_377(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_173(uParam0, 85, 1, 0, 0);
						func_128(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_377(uParam0, 20) > 8f)
				{
					func_173(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_18(uParam0->f_81, 262144) || func_18(uParam0->f_82, 67108864))
			{
				if (!func_130(uParam0, 22))
				{
					func_129(uParam0, 22);
				}
			}
			if (func_130(uParam0, 22) && func_377(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_18(uParam0->f_81, 1048576))
					{
						func_173(uParam0, 84, 1, 0, 0);
						func_128(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_18(uParam0->f_82, 134217728))
					{
						func_173(uParam0, 85, 1, 0, 0);
						func_128(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_134(var uParam0)//Position - 0x44F9
{
	return uParam0->f_120;
}

void func_135(var uParam0)//Position - 0x4505
{
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && !func_18(uParam0->f_44, 2))
	{
		func_54(&(uParam0->f_44), 2);
	}
	else if (!PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && func_18(uParam0->f_44, 2))
	{
		func_16(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_42(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_173(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_136(var uParam0)//Position - 0x458E
{
	if (!func_18(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (func_377(uParam0, 9) > 1f)
					{
						func_140(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (uParam0->f_410 != 22)
						{
							func_173(uParam0, 50, 1, 1, 0);
						}
						func_266(uParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
							HUD::SET_BLIP_ROUTE(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_163() && func_377(uParam0, 9) > 4f)
				{
					func_173(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_139("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_173(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), func_138(uParam0)))
				{
					func_140(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					func_42(6, 0);
				}
				if (!func_137(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (func_377(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_173(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (func_139("TAXI_OBJ_POL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_163())
				{
					if (uParam0->f_410 != 22)
					{
						func_173(uParam0, 53, 1, 0, 1);
					}
					func_42(7, func_138(uParam0));
					func_140(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_163())
				{
					func_128(uParam0, 9, 0);
					func_266(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_137(var uParam0)//Position - 0x47B2
{
	return uParam0->f_110;
}

int func_138(var uParam0)//Position - 0x47BE
{
	return uParam0->f_106;
}

bool func_139(char* sParam0, int iParam1, int iParam2)//Position - 0x47CA
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_140(var uParam0, int iParam1)//Position - 0x47E8
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_141(var uParam0, var uParam1)//Position - 0x47FF
{
	STATS::STAT_GET_FLOAT(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_142(var uParam0)//Position - 0x4820
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_270(uParam0, "Passenger left car.", 9);
			}
			else if (func_156(uParam0))
			{
				if (func_139("TAXI_OBJ_PICKUP", 0, 0))
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
				func_143(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_143(var uParam0, bool bParam1)//Position - 0x48AF
{
	func_155(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_130(uParam0, 14))
			{
				if (func_163())
				{
					func_154(1);
				}
				func_153(uParam0, 11, 1);
				func_146(uParam0, 1);
				func_266(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_110(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, 0))
					{
						if (func_377(uParam0, 15) > 5f)
						{
							func_266(uParam0, 15, 0f, 1);
						}
					}
					if (func_377(uParam0, 14) > 20f)
					{
						func_270(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_377(uParam0, 14) > 20f)
				{
					if (func_144(uParam0->f_4, 1) > 40f)
					{
						func_270(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_270(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_144(int iParam0, int iParam1)//Position - 0x49BA
{
	return func_145(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, iParam1);
}

float func_145(int iParam0, int iParam1, int iParam2)//Position - 0x49D2
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

void func_146(var uParam0, bool bParam1)//Position - 0x4A2E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, 0);
				func_152(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_9, 0);
				HUD::CLEAR_PRINTS();
				if (func_110(uParam0))
				{
					func_173(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_152(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_147(uParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_10));
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, 1);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, 1);
				}
			}
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_147(var uParam0, bool bParam1, bool bParam2)//Position - 0x4B4C
{
	if (bParam1)
	{
		func_381(uParam0);
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		uParam0->f_10 = func_150(uParam0->f_4, 1, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_10, "TAXI_BLIP_CAR");
		HUD::SET_BLIP_ROUTE(uParam0->f_10, 1);
		func_148(uParam0);
		if (bParam2)
		{
			HUD::CLEAR_PRINTS();
			func_173(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_148(var uParam0)//Position - 0x4BA7
{
	func_266(uParam0, 14, 0, 0);
	func_149();
}

void func_149()//Position - 0x4BBD
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_150(int iParam0, bool bParam1, bool bParam2)//Position - 0x4BE6
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_151(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_151(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_151(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_151(bool bParam0, float fParam1, float fParam2)//Position - 0x4C8A
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_152(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x4CA1
{
	if (!func_18(*uParam1, iParam2))
	{
		HUD::CLEAR_PRINTS();
		func_173(uParam0, iParam3, 1, 0, 0);
		func_54(uParam1, iParam2);
	}
}

void func_153(var uParam0, int iParam1, bool bParam2)//Position - 0x4CCD
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_154(int iParam0)//Position - 0x4CE1
{
	Global_16703 = iParam0;
}

void func_155(var uParam0, int iParam1)//Position - 0x4CEE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_270(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

int func_156(var uParam0)//Position - 0x4D53
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_130(uParam0, 14))
			{
				func_157(uParam0);
			}
			func_146(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_157(var uParam0)//Position - 0x4D94
{
	func_128(uParam0, 14, 0);
	func_128(uParam0, 15, 0);
	func_159();
	if (func_158())
	{
		func_154(0);
	}
}

int func_158()//Position - 0x4DBE
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

void func_159()//Position - 0x4DD5
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

float func_160()//Position - 0x4DFE
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_SPEED(Local_408.f_4);
	if (fVar0 >= 10f)
	{
		return (fVar0 * 0.5f);
	}
	return 5f;
}

void func_161()//Position - 0x4E28
{
	Global_14558 = 0;
	func_162();
}

void func_162()//Position - 0x4E38
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

int func_163()//Position - 0x4E8F
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

float func_164(var uParam0)//Position - 0x4EB1
{
	if (func_92(uParam0))
	{
		if (func_89(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_63(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_165()//Position - 0x4EED
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = SYSTEM::ROUND(((fLocal_846 - func_164(&uLocal_851)) * 1000f));
	if (iVar0 < 0)
	{
		iVar0 = 0;
		bLocal_1009 = true;
		if (!iLocal_1011)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_1011 = 1;
		}
	}
	func_166(iVar0, "TIM_TIMER", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
	if (!bLocal_1009)
	{
		if (!iLocal_1010)
		{
			fVar1 = func_88(&uLocal_851);
			if (((((((((((((((fLocal_846 - fVar1) < 1f || (fLocal_846 - fVar1) < 1.5f) || (fLocal_846 - fVar1) < 2f) || (fLocal_846 - fVar1) < 2.5f) || (fLocal_846 - fVar1) < 3f) || (fLocal_846 - fVar1) < 3.5f) || (fLocal_846 - fVar1) < 4f) || (fLocal_846 - fVar1) < 4.5f) || (fLocal_846 - fVar1) < 5f) || (fLocal_846 - fVar1) < 6f) || (fLocal_846 - fVar1) < 7f) || (fLocal_846 - fVar1) < 8f) || (fLocal_846 - fVar1) < 9f) || (fLocal_846 - fVar1) < 10f) || (fLocal_846 - fVar1) < 11f)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_1010 = 1;
				iLocal_1012 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			fVar2 = func_88(&uLocal_851);
			if (((fLocal_846 - fVar2) < 5.5f && (MISC::GET_GAME_TIMER() - iLocal_1012) > 500) || ((fLocal_846 - fVar2) < 11f && (MISC::GET_GAME_TIMER() - iLocal_1012) > 1000))
			{
				iLocal_1010 = 0;
			}
		}
	}
}

void func_166(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x50BA
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_168(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_167(7, iVar0);
		Global_1328872.f_3132[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = iParam3;
		Global_1328872.f_3132.f_147[iVar0] = iParam4;
		Global_1328872.f_3132.f_156[iVar0] = iParam5;
		Global_1328872.f_3132.f_201[iVar0] = iParam6;
		Global_1328872.f_3132.f_210[iVar0] = iParam7;
		Global_1328872.f_3132.f_165[iVar0] = iParam8;
		Global_1328872.f_3132.f_254[iVar0] = iParam9;
		Global_1328872.f_3132.f_263[iVar0] = iParam10;
		Global_1328872.f_3132.f_289[iVar0] = iParam11;
		Global_1328872.f_3132.f_192[iVar0] = iParam12;
		Global_1328872.f_3132.f_219[iVar0] = iParam13;
	}
}

void func_167(int iParam0, int iParam1)//Position - 0x51D4
{
	MISC::SET_BIT(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_168(int iParam0, int iParam1)//Position - 0x51ED
{
	return MISC::IS_BIT_SET(Global_1328872.f_3613[iParam0], iParam1);
}

void func_169(var uParam0)//Position - 0x5206
{
	func_170(uParam0, 1000);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
	}
	func_161();
	func_157(uParam0);
}

void func_170(var uParam0, int iParam1)//Position - 0x5250
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		CAM::RENDER_SCRIPT_CAMS(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	}
}

void func_171()//Position - 0x528A
{
	func_54(&(Local_408.f_55), 2);
	func_54(&(Local_408.f_55), 4);
	func_54(&(Local_408.f_55), 16);
	func_54(&(Local_408.f_55), 64);
	func_54(&(Local_408.f_55), 256);
	func_54(&(Local_408.f_55), 512);
	func_54(&(Local_408.f_55), 1024);
	func_54(&(Local_408.f_55), 2048);
	func_54(&(Local_408.f_55), 4096);
	func_54(&(Local_408.f_55), 1073741824);
	func_54(&(Local_408.f_100), 8);
	func_54(&(Local_408.f_100), 2048);
	func_54(&(Local_408.f_100), 256);
	func_54(&uLocal_935, 2);
	func_129(&Local_408, 7);
}

void func_172(var uParam0)//Position - 0x5339
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	func_170(uParam0, 1000);
}

void func_173(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x535C
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_266(uParam0, 16, 4f, 0);
		if (func_174(uParam0))
		{
			func_40();
		}
	}
	func_226(uParam0, iParam2, bParam3);
}

int func_174(var uParam0)//Position - 0x5391
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_163())
	{
		Var6 = { func_176() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (MISC::ARE_STRINGS_EQUAL(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_175(&Var0);
			if (MISC::ARE_STRINGS_EQUAL(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_175(char* sParam0)//Position - 0x53F7
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_176()//Position - 0x5407
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

void func_177(var uParam0)//Position - 0x542B
{
	if (!func_92(uParam0))
	{
		func_91(uParam0);
	}
}

struct<2> func_178(int iParam0)//Position - 0x5443
{
	struct<2> Var0;
	char cVar2[0];
	char cVar3[0];
	
	StringCopy(&cVar2, func_180(func_182(iParam0)), 4);
	StringConCat(&Var0, &cVar2, 8);
	StringConCat(&Var0, ":", 8);
	if (func_179(iParam0) < 10)
	{
		StringConCat(&Var0, "0", 8);
	}
	StringCopy(&cVar3, func_180(func_179(iParam0)), 4);
	StringConCat(&Var0, &cVar3, 8);
	return Var0;
}

int func_179(int iParam0)//Position - 0x5492
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

var func_180(int iParam0)//Position - 0x54A5
{
	char cVar0[16];
	
	StringCopy(&cVar0, "", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	return func_181(&cVar0);
}

var func_181(char[4] cParam0)//Position - 0x54C1
{
	return cParam0;
}

int func_182(int iParam0)//Position - 0x54CB
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_183()//Position - 0x54DE
{
	int iVar0;
	
	iVar0 = func_188();
	func_186(&iVar0, 3);
	func_184(&iVar0, 30);
	return iVar0;
}

void func_184(int iParam0, int iParam1)//Position - 0x54FD
{
	if ((func_179(*iParam0) + iParam1) > 59)
	{
		func_185(iParam0, ((func_179(*iParam0) + iParam1) - 60));
		func_186(iParam0, 1);
	}
	else
	{
		func_185(iParam0, (func_179(*iParam0) + iParam1));
	}
}

void func_185(int iParam0, int iParam1)//Position - 0x5541
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_186(int iParam0, int iParam1)//Position - 0x557C
{
	if ((func_182(*iParam0) + iParam1) > 23)
	{
		func_187(iParam0, ((func_182(*iParam0) + iParam1) - 24));
	}
	else
	{
		func_187(iParam0, (func_182(*iParam0) + iParam1));
	}
}

void func_187(var uParam0, int iParam1)//Position - 0x55B9
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

int func_188()//Position - 0x55F3
{
	var uVar0;
	
	func_196(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_185(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_187(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_191(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_190(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_189(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_189(var uParam0, int iParam1)//Position - 0x5639
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_190(var uParam0, int iParam1)//Position - 0x56BF
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_191(var uParam0, int iParam1)//Position - 0x56F2
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_195(*uParam0);
	iVar1 = func_193(*uParam0);
	if (iParam1 < 1 || iParam1 > func_192(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_192(int iParam0, int iParam1)//Position - 0x5743
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_193(int iParam0)//Position - 0x57E5
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_194(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_194(bool bParam0, int iParam1, int iParam2)//Position - 0x580A
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_195(int iParam0)//Position - 0x5821
{
	return iParam0 & 15;
}

void func_196(var uParam0, int iParam1)//Position - 0x582E
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_197(var uParam0)//Position - 0x586A
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

int func_198(var uParam0, bool bParam1, float fParam2)//Position - 0x58BD
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
			func_143(uParam0, 1);
			if (func_28())
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
			if (func_130(uParam0, 14))
			{
				func_157(uParam0);
				func_146(uParam0, 0);
			}
			if (func_130(uParam0, 9))
			{
				func_128(uParam0, 9, 0);
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
				if (uParam0->f_141 && func_223(uParam0, uParam0->f_3) > 300f)
				{
					func_270(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 || ((func_145(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && func_123(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_123(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_220(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_219(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_93)
							{
								uParam0->f_7 = func_218(uParam0->f_4, uParam0->f_3);
								iVar0 = func_217(uParam0, &iVar1);
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
							if (!func_131(uParam0))
							{
								TASK::CLEAR_PED_TASKS(uParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 7) && func_223(uParam0, uParam0->f_3) > 8f)
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
							if (func_145(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_216(uParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_270(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_215(uParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_270(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_213(uParam0);
						if (func_223(uParam0, uParam0->f_3) < fVar4 || func_28())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_200(uParam0))
								{
									func_199(uParam0);
									iLocal_88 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 26, 1);
									func_128(uParam0, 5, 0);
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

void func_199(var uParam0)//Position - 0x5DC9
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(uParam0->f_8, 0);
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
}

int func_200(var uParam0)//Position - 0x5DED
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_212("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		func_211();
	}
	if (bLocal_93)
	{
		iLocal_85 = 10;
	}
	if ((iLocal_85 < 7 && iLocal_85 > 0) && !bLocal_93)
	{
		if (func_209(iLocal_87))
		{
			iLocal_85 = 7;
		}
	}
	switch (iLocal_85)
	{
		case 0:
			if (func_107(uParam0, 0, 1084227584) && func_122(1, 1, 1))
			{
				if (func_216(uParam0, 1))
				{
					iLocal_87 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_85 = 1;
				}
				else
				{
					func_270(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = func_218(uParam0->f_4, uParam0->f_3);
				iVar9 = func_217(uParam0, &iVar10);
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
			iVar12 = func_208(&(uParam0->f_409), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0), 1);
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
				func_207(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1), 25f, 0);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				func_114();
				func_226(uParam0, 0, 0);
				Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var6) };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_3, Var13, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, func_205(uParam0));
				func_204(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
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
			func_212("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
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
					VEHICLE::SET_VEHICLE_DOOR_SHUT(uParam0->f_4, func_203(uParam0->f_7), 1);
				}
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::DESTROY_CAM(*uParam0, 0);
				CAM::DESTROY_CAM(uParam0->f_1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				CAM::DO_SCREEN_FADE_IN(800);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				func_114();
				func_226(uParam0, 0, 0);
				iLocal_85 = 8;
			}
			break;
		
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				func_201(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(*uParam0, 0);
			CAM::DESTROY_CAM(uParam0->f_1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			func_201(1, 1, 1);
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

void func_201(bool bParam0, bool bParam1, int iParam2)//Position - 0x62F2
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_19(0, 1, iParam2, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	func_202(23, 0);
}

void func_202(int iParam0, bool bParam1)//Position - 0x632D
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_24688, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_24688, iParam0);
	}
}

int func_203(int iParam0)//Position - 0x634F
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

void func_204(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)//Position - 0x6387
{
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

float func_205(var uParam0)//Position - 0x63B2
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_98() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_206(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_206(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)//Position - 0x641B
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_207(int iParam0, int iParam1, int iParam2)//Position - 0x6435
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_35(0);
	func_19(1, 1, iParam2, 0);
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	func_202(23, 1);
}

int func_208(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)//Position - 0x648B
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
		if (iVar8 == 2)
		{
			if (bParam7)
			{
			}
			if (iVar6 == 0)
			{
				*uParam0 = 0;
				return iVar6;
			}
			else
			{
				if (bParam7)
				{
				}
				*uParam0 = 0;
				return iVar6;
			}
		}
		else if (iVar8 == 0)
		{
			if (bParam7)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_209(int iParam0)//Position - 0x6505
{
	if (func_210() && MISC::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_35(0);
		func_161();
		return 1;
	}
	return 0;
}

int func_210()//Position - 0x6548
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_211()//Position - 0x657A
{
	if (func_30())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appInternet");
	}
	if (func_29())
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appCamera");
	}
	if (func_37(1))
	{
		func_35(0);
	}
}

void func_212(char* sParam0, int iParam1, int iParam2)//Position - 0x65AD
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

void func_213(var uParam0)//Position - 0x65CC
{
	var uVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (func_144(uParam0->f_3, 1) > 30f || func_214(uParam0))
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
					func_270(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_214(var uParam0)//Position - 0x669D
{
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 3f && func_377(uParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)//Position - 0x66D7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_216(var uParam0, bool bParam1)//Position - 0x6793
{
	int iVar0[3];
	int iVar4;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1);
		iVar0[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2);
		iVar0[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar4]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar0[iVar4]))
				{
					if (iVar4 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar4 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar4++;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_217(var uParam0, var uParam1)//Position - 0x6849
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_218(int iParam0, int iParam1)//Position - 0x68BB
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, 1)) };
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("vacca"))
	{
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.x > 0f)
	{
		if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_219(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x6973
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3) && func_144(uParam0->f_3, 1) < fParam2)
		{
			if (!func_130(uParam0, 5))
			{
				func_266(uParam0, 5, 0, 0);
			}
		}
		else if (func_130(uParam0, 5))
		{
			func_128(uParam0, 5, 0);
		}
		if (((func_377(uParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3)) || func_144(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_220(var uParam0, float fParam1)//Position - 0x6A10
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
			if ((func_145(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && MISC::ABSF((Var0.f_2 - Var3.f_2)) < 5f)
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
				if (!func_18(uParam0->f_44, 128))
				{
					func_173(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_221(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
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

void func_221(var uParam0, char* sParam1, var uParam2, int iParam3)//Position - 0x6CEC
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, uParam2, func_222(iParam3), 0);
}

int func_222(int iParam0)//Position - 0x6D05
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

float func_223(var uParam0, int iParam1)//Position - 0x6EFA
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_131(uParam0))
		{
			return func_145(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_224(var uParam0)//Position - 0x6F24
{
	func_155(uParam0, uParam0->f_3);
	if (func_131(uParam0))
	{
		if (func_130(uParam0, 14))
		{
			func_157(uParam0);
			if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_10));
			}
		}
	}
	if (!func_130(uParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(uParam0->f_8, 0);
		}
		func_266(uParam0, 9, 0, 0);
		func_225("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_225(char* sParam0, int iParam1, int iParam2)//Position - 0x6FA2
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_226(var uParam0, int iParam1, bool bParam2)//Position - 0x6FBB
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_40();
		func_266(uParam0, 16, 4f, 0);
		HUD::CLEAR_PRINTS();
	}
}

int func_227(var uParam0, int iParam1)//Position - 0x6FE0
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	func_233(12);
	if (func_18(uParam0->f_44, 8))
	{
		if (!func_18(uParam0->f_44, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !func_18(uParam0->f_44, 256))
			{
				func_54(&(uParam0->f_44), 256);
			}
			if (func_18(uParam0->f_44, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_173(uParam0, 135, 1, 0, 1);
				func_54(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_231(uParam0, iParam1))
	{
		if (func_144(uParam0->f_3, 1) < 35f)
		{
			if (!func_18(uParam0->f_44, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				func_173(uParam0, 133, 1, 0, 1);
				func_54(&(uParam0->f_44), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || func_144(uParam0->f_3, 1) > 400f)
		{
			func_270(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, 1);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			func_229(uParam0);
			func_42(2, 0);
			bLocal_93 = true;
			func_177(&uLocal_89);
			return 1;
		}
		else
		{
			func_270(uParam0, "No Taxi", 21);
			func_228("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_228(char* sParam0, int iParam1)//Position - 0x7158
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_229(var uParam0)//Position - 0x716F
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		if (func_230())
		{
		}
	}
}

int func_230()//Position - 0x718A
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_231(var uParam0, int iParam1)//Position - 0x71AB
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				bVar2 = func_215(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == joaat("firetruk")) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_18(uParam0->f_44, 64))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_228("TX_VIP_DMGD", -1);
							if (func_232("TX_VIP_DMGD"))
							{
								func_54(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_18(uParam0->f_44, 32))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_228("TX_VIP_CAR", -1);
							if (func_232("TX_VIP_CAR"))
							{
								func_54(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_18(uParam0->f_44, 16))
					{
						if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_228("TX_VIP_SMALL", -1);
							if (func_232("TX_VIP_SMALL"))
							{
								func_54(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_16(&(uParam0->f_44), 16);
			func_16(&(uParam0->f_44), 64);
			func_16(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

bool func_232(char* sParam0)//Position - 0x77BE
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_233(int iParam0)//Position - 0x77D1
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_234(var uParam0)//Position - 0x782A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_17(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_235()//Position - 0x784F
{
	Local_342 = 0;
	func_252(31744/*func_254*/, 31719/*func_253*/, 1);
	func_252(31480/*func_250*/, 31457/*func_249*/, 1);
	func_252(31396/*func_248*/, 31371/*func_247*/, 1);
	func_252(31300/*func_246*/, 31276/*func_245*/, 1);
	func_252(31166/*func_244*/, 31145/*func_243*/, 1);
	func_252(31092/*func_241*/, 31067/*func_240*/, 1);
	func_252(30925/*func_237*/, 30902/*func_236*/, 1);
}

int func_236(var uParam0, var uParam1)//Position - 0x78B6
{
	uParam1 = uParam1;
	func_270(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_237(var uParam0)//Position - 0x78CD
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_239(uParam0->f_4))
		{
			func_238(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_238(var uParam0, int iParam1)//Position - 0x78F7
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_239(int iParam0)//Position - 0x790A
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < -100f)
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_240(var uParam0, var uParam1)//Position - 0x795B
{
	uParam1 = uParam1;
	func_270(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_241(var uParam0)//Position - 0x7974
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_242(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_242(var uParam0, int iParam1)//Position - 0x799A
{
	return (uParam0 && iParam1) != 0;
}

int func_243(var uParam0, var uParam1)//Position - 0x79A9
{
	uParam1 = uParam1;
	func_238(uParam0, 11);
	return 1;
}

int func_244(var uParam0)//Position - 0x79BE
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			if (!func_130(uParam0, 25))
			{
				func_266(uParam0, 25, 0, 0);
			}
			else if (func_377(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_130(uParam0, 25))
		{
			func_128(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_245(var uParam0, var uParam1)//Position - 0x7A2C
{
	uParam1 = uParam1;
	func_270(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_246(var uParam0)//Position - 0x7A44
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uParam0->f_4))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_247(var uParam0, var uParam1)//Position - 0x7A8B
{
	uParam1 = uParam1;
	func_270(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_248(var uParam0)//Position - 0x7AA4
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (func_242(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_249(var uParam0, var uParam1)//Position - 0x7AE1
{
	uParam1 = uParam1;
	func_270(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_250(var uParam0)//Position - 0x7AF8
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_251(uParam0->f_4))
		{
			func_238(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_251(int iParam0)//Position - 0x7B22
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) == 0f)
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
		}
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_252(int iParam0, int iParam1, bool bParam2)//Position - 0x7B7D
{
	if (Local_342 >= 16)
	{
		Local_342 = 16;
		return;
	}
	Local_342.f_1[Local_342 /*4*/] = 0;
	func_55(&(Local_342.f_1[Local_342 /*4*/]), 1);
	if (bParam2)
	{
		func_55(&(Local_342.f_1[Local_342 /*4*/]), 2);
	}
	Local_342.f_1[Local_342 /*4*/].f_2 = iParam0;
	Local_342.f_1[Local_342 /*4*/].f_3 = iParam1;
	Local_342++;
}

int func_253(var uParam0, var uParam1)//Position - 0x7BE7
{
	uParam1 = uParam1;
	func_270(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_254(var uParam0)//Position - 0x7C00
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if ((PED::IS_PED_INJURED(uParam0->f_3) || ENTITY::IS_ENTITY_DEAD(uParam0->f_3)) || FIRE::IS_ENTITY_ON_FIRE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_255(var uParam0, var uParam1)//Position - 0x7C3F
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			MISC::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			MISC::SET_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			MISC::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_256(var uParam0, char* sParam1, int iParam2)//Position - 0x7CB6
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_257()//Position - 0x7CCE
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

int func_258()//Position - 0x7EA6
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_838))
	{
		func_212("TAXI_ASSETS_STREAMED - Loading G_M_M_ChiGoon_02", &iLocal_843, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_942))
	{
		return 0;
	}
	if (!func_259(&iLocal_843, 1))
	{
		func_212("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_843, 1000);
		return 0;
	}
	return 1;
}

int func_259(int iParam0, bool bParam1)//Position - 0x7EF9
{
	if (!STREAMING::HAS_MODEL_LOADED(func_15()))
	{
		func_212("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			func_212("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		func_212("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		func_212("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		func_212("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		func_212("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_260(var uParam0, int iParam1)//Position - 0x7FAF
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_261(var uParam0)//Position - 0x8218
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = func_262(uParam0->f_3, 0, 0);
		HUD::SET_GPS_FLAGS(1, 0);
		HUD::SET_BLIP_ROUTE(uParam0->f_8, 1);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS");
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
	}
	return 1;
}

int func_262(int iParam0, bool bParam1, bool bParam2)//Position - 0x8267
{
	return func_150(iParam0, !bParam1, bParam2);
}

int func_263(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)//Position - 0x827A
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_264(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_34(uParam0->f_14, 0);
		MISC::CLEAR_AREA_OF_PEDS(uParam0->f_14, 2f, 0);
		func_32(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = PED::CREATE_RANDOM_PED(uParam0->f_11);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_96066.f_225[0]))
		{
			uParam0->f_3 = Global_96066.f_225[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = PED::CREATE_PED(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_3, sParam7);
		PED::SET_PED_RESET_FLAG(uParam0->f_3, 112, 1);
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_3, 250);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 32, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 104, 1);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 177, 1);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 116, 0);
			PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(uParam0->f_413));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_413, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uParam0->f_413, joaat("COP"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_264(var uParam0, struct<3> Param1)//Position - 0x83CF
{
	uParam0->f_51[0] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param1, 20f, 5f, 0);
}

Vector3 func_265(int iParam0)//Position - 0x83ED
{
	struct<3> Var0;
	
	Var0 = { func_98() };
	switch (iParam0)
	{
		case 0:
			Var0 = { 924.2684f, 50.078f, 79.7647f };
			break;
		
		case 1:
			Var0 = { 916.0502f, 39.3504f, 79.7647f };
			break;
		
		case 2:
			Var0 = { 1971.246f, 3741.517f, 31.3268f };
			break;
		
		case 3:
			Var0 = { 2004.278f, 3752.319f, 31.4156f };
			break;
		
		case 4:
			Var0 = { 1410.891f, 3596.068f, 33.8351f };
			break;
		
		case 5:
			Var0 = { -1383.06f, -972.8339f, 8.014f };
			break;
		
		case 6:
			Var0 = { -1399.197f, -944.1848f, 9.4306f };
			break;
		
		case 7:
			Var0 = { -1379.262f, -972.9459f, 7.8097f };
			break;
		
		case 8:
			Var0 = { -1390.765f, -584.3324f, 29.2306f };
			break;
		
		case 9:
			Var0 = { -1410.223f, -590.6025f, 29.3669f };
			break;
		
		case 10:
			Var0 = { -1379.262f, -972.9459f, 7.8097f };
			break;
	}
	return Var0;
}

void func_266(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x853C
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_62(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_91(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_62(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_91(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_267()//Position - 0x85AE
{
	STREAMING::REQUEST_MODEL(iLocal_838);
	uLocal_942 = func_269();
	func_268(1);
}

void func_268(bool bParam0)//Position - 0x85C9
{
	STREAMING::REQUEST_MODEL(func_15());
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	}
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@towingcome_here");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
	if (!func_18(Global_SAVE_DATA.TAXI_iGenData, 128))
	{
		func_54(&(Global_SAVE_DATA.TAXI_iGenData), 128);
	}
}

var func_269()//Position - 0x8622
{
	return unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
}

void func_270(var uParam0, char* sParam1, int iParam2)//Position - 0x8632
{
	struct<3> Var0;
	
	func_161();
	func_398(2);
	Var0 = { func_285() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && func_163()) && !MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
		{
			if (!func_110(uParam0))
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
		func_266(uParam0, 3, 0, 0);
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
				func_283(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_221(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
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
			func_283(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_283(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_283(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_283(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_283(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_110(uParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
				{
					func_281(uParam0, 4096, 0);
				}
				else
				{
					func_281(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_283(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_283(uParam0, &Var0);
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
				func_283(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_221(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_283(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_283(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_42(8, 0);
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
				func_283(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_221(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_281(uParam0, 0, 0);
			func_283(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_42(8, 0);
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
				func_283(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_221(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_283(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_42(8, 0);
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
				func_283(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_221(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_280(&Var0);
			func_271(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
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
			func_283(uParam0, &Var0);
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
					func_283(uParam0, &Var0);
				}
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_221(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_42(3, 0);
		}
		func_266(uParam0, 3, 0f, 1);
	}
}

int func_271(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8BDC
{
	func_279(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_272(sParam2, iParam3, 0);
}

int func_272(char* sParam0, int iParam1, bool bParam2)//Position - 0x8C2A
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_162();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_278(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_277();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			MISC::CLEAR_BIT(&Global_2263, 20);
			MISC::CLEAR_BIT(&Global_2264, 17);
			MISC::CLEAR_BIT(&Global_2265, 0);
			if (bParam2)
			{
				func_276();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_275())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_26())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_2263, 9))
				{
					return 0;
				}
			}
			func_274();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_273();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_162();
	}
	return 0;
}

void func_273()//Position - 0x8EF6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_15692 = 1;
}

void func_274()//Position - 0x8F28
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	MISC::CLEAR_BIT(&Global_2264, 16);
}

int func_275()//Position - 0x8FBD
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_276()//Position - 0x9056
{
	if (func_85(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_83();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_277()//Position - 0x90F7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_278(int iParam0, int iParam1)//Position - 0x914F
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1327593.f_949, iParam0);
}

void func_279(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x918A
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

void func_280(char* sParam0)//Position - 0x91E0
{
	switch (func_3(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_281(var uParam0, int iParam1, bool bParam2)//Position - 0x9233
{
	var uVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 0);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 3, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 17, 1);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if ((func_126(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_105(uParam0->f_29)) && !bParam2)
		{
			func_282(uParam0);
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

void func_282(var uParam0)//Position - 0x9326
{
	var uVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (func_97(func_98(), uParam0->f_29))
		{
			if (uParam0->f_411 == 2)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 84.9058f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 68.3138f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, 1);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				TASK::TASK_CLIMB_LADDER(0, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_ACHIEVE_HEADING(0, 151.7794f, 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 20000);
				TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(uParam0->f_29, 15f, 1))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, 1);
	}
}

void func_283(var uParam0, char* sParam1)//Position - 0x9509
{
	if (func_284(uParam0))
	{
		func_271(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_284(var uParam0)//Position - 0x9531
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (func_145(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_285()//Position - 0x956E
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_16702);
		if (iVar6 > -1)
		{
			return Global_14560[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_286(var uParam0)//Position - 0x95B4
{
	return uParam0->f_118;
}

void func_287()//Position - 0x95C0
{
	func_321(&Local_408);
	if (func_320(&Local_408, &Local_861))
	{
		switch (Local_861.f_27)
		{
			case 0:
				if (Local_408.f_410 == 9)
				{
					if (!func_319(&Local_408))
					{
						if (func_318("TX_OBJ_DL_DO") || HUD::DOES_BLIP_EXIST(Local_408.f_9))
						{
							Local_861.f_27++;
						}
						else if (func_317(&Local_408) != 10)
						{
							func_173(&Local_408, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if (func_317(&Local_408) > 10 && func_317(&Local_408) != 16)
				{
					func_54(&(Local_408.f_81), 67108864);
					func_173(&Local_408, 16, 1, 0, 0);
					if (bLocal_860)
					{
					}
				}
				break;
			
			case 2:
				if (func_377(&Local_408, 18) > MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 14f))
				{
					if (!func_134(&Local_408))
					{
						func_316(&Local_408, 0);
						Local_861.f_27++;
						if (bLocal_860)
						{
						}
					}
				}
				break;
			}
	}
	func_288(&Local_408, &uLocal_891, &Local_861, bLocal_860);
}

int func_288(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x96E5
{
	func_297(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_130(uParam0, 2))
	{
		if (func_296(uParam1))
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
				if (!func_295(uParam0))
				{
					uParam2->f_7 = { func_294(uParam1) };
					func_271(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_163())
				{
					uParam2->f_13 = { func_176() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_55(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_291(uParam1);
					func_266(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_137(uParam0))
				{
					if (func_163())
					{
						func_266(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_290() };
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
				else if (func_163())
				{
					uParam2->f_19 = { func_285() };
				}
				else
				{
					func_55(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_291(uParam1);
					func_266(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_130(uParam0, 14) && !func_163()) && !func_137(uParam0)) && func_377(uParam0, 18) > 1f)
				{
					func_266(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_163())
				{
					if (func_377(uParam0, 18) > 1f)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							func_289(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_163())
				{
					func_55(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_291(uParam1);
					func_266(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_289(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9985
{
	func_279(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 1;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_272(sParam2, iParam4, 0);
}

struct<6> func_290()//Position - 0x99D9
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_16702);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_14560[iVar7 /*6*/])))
			{
				return Global_14560[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_14560[iVar8 /*6*/])))
					{
						return Global_14560[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14560[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_291(var uParam0)//Position - 0x9A85
{
	int iVar0;
	
	iVar0 = func_293(uParam0);
	if (iVar0 > -1)
	{
		func_16(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_16(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_54(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_292(), 24);
	}
}

var func_292()//Position - 0x9ACF
{
	var uVar0;
	
	return uVar0;
}

int func_293(var uParam0)//Position - 0x9AD9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_18((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_294(var uParam0)//Position - 0x9B09
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_18((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_54(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_295(var uParam0)//Position - 0x9B50
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_139("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_139("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_139("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_139("TX_OBJ_GYB_DO", 0, 0) || func_139("TAXI_OBJ_GYB", 0, 0)) || func_139("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_139("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_139("TX_OBJ_CYI_DO", 0, 0) || func_139("TAXI_OBJ_CYI_01", 0, 0)) || func_139("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_139("TX_OBJ_GYN_DO", 0, 0) || func_139("TAXI_OBJ_GYN", 0, 0)) || func_139("TAXI_OBJ_GYN_TG", 0, 0)) || func_139("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_139("TAXI_OBJ_CC1", 0, 0) || func_139("TAXI_OBJ_CC2", 0, 0)) || func_139("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_139("TAXI_OBJ_FTC1", 0, 0) || func_139("TAXI_OBJ_FTC2", 0, 0)) || func_139("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_139("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_139("TAXI_OBJ_GETRUN", 0, 0) || func_139("TAXI_OBJ_DRIVE", 0, 0)) || func_139("TAXI_OBJ_RETURN", 0, 0)) || func_139("TAXI_OBJ_POL", 0, 0)) || func_139("TAXI_OBJ_RUNOUT", 0, 0)) || func_139("TAXI_OBJ_POL", 0, 0));
}

int func_296(var uParam0)//Position - 0x9D70
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_18((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_297(var uParam0, var uParam1)//Position - 0x9D9F
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_295(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_130(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_317(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_266(uParam0, 16, 0, 0);
				func_313(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_163())
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
						func_312(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_309(uParam0, Var0, func_311(uParam0, 2));
				}
				if (func_18(uParam0->f_98, 4))
				{
					func_266(uParam0, 16, 0, 0);
					func_226(uParam0, 0, 0);
				}
				func_152(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_377(uParam0, 16) > 1f)
				{
					func_154(1);
					if (uParam0->f_411 == 9)
					{
						func_225("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_225("TAXI_VIP_RETURN", 7500, 1);
					}
					func_266(uParam0, 16, 0, 0);
					func_226(uParam0, 0, 0);
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
					func_312(uParam0, &Var0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_221(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_377(uParam0, 16) > func_151(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_163()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_317(uParam0))
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
				func_312(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_266(uParam0, 16, 0, 0);
				func_313(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_271(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_173(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_266(uParam0, 16, 0, 0);
				func_173(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_18(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_315(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_312(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_266(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_225("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_225("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_308(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, 1);
					}
				}
				func_173(uParam0, 10, 1, 0, 0);
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
				func_175(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_312(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_221(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_308(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, 1);
					}
				}
				func_173(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_307(uParam0, 33554432, Var0, "", 1, 8);
				func_266(uParam0, 16, 0, 0);
				func_173(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_163())
				{
					func_306(uParam0, 0);
					func_54(&(uParam0->f_44), 4);
					func_266(uParam0, 16, 0, 0);
					func_173(uParam0, 13, 0, 0, 0);
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
				func_175(&Var0);
				func_304(Var0, uParam1);
				func_266(uParam0, 16, 0, 0);
				func_266(uParam0, 11, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_377(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_175(&Var0);
					}
					func_304(Var0, uParam1);
					func_54(&(uParam0->f_81), 67108864);
					func_266(uParam0, 16, 0, 0);
					func_266(uParam0, 11, 0, 0);
					func_226(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_377(uParam0, 11) > uParam0->f_36)
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
							func_175(&Var0);
						}
					}
					func_304(Var0, uParam1);
					func_266(uParam0, 11, 0, 0);
					func_266(uParam0, 16, 0, 0);
					func_226(uParam0, 0, 0);
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
					func_175(&Var0);
				}
				func_304(Var0, uParam1);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
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
				func_175(&Var0);
				func_304(Var0, uParam1);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
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
				func_175(&Var0);
				func_304(Var0, uParam1);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_175(&Var0);
				func_304(Var0, uParam1);
				func_266(uParam0, 16, 0, 0);
				func_266(uParam0, 11, 0, 0);
				func_226(uParam0, 0, 0);
				func_54(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_173(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_175(&Var0);
				func_312(uParam0, &Var0, 1, 0, 8);
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
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
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
					func_303(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_303(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_304(Var0, uParam1);
				func_313(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_266(uParam0, 16, 0, 0);
				func_266(uParam0, 6, 0f, 1);
				func_226(uParam0, 0, 0);
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
					func_303(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_303(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_304(Var0, uParam1);
				func_313(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_266(uParam0, 16, 0, 0);
				func_266(uParam0, 6, 0f, 1);
				func_226(uParam0, 0, 0);
				break;
			
			case 12:
				func_225("TAXI_OBJ_GYB", 3500, 1);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_225("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_225("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_225("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
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
				func_312(uParam0, &Var0, 0, 0, 8);
				func_173(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_18(uParam0->f_98, 268435456))
				{
					func_225("TAXI_OBJ_CYI_01", 7500, 1);
					func_54(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_175(&Var0);
				func_304(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_175(&Var0);
				func_304(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_175(&Var0);
				func_304(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 33:
				func_225("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_18(uParam0->f_82, 8192))
				{
					if (func_377(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_175(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_304(Var0, uParam1);
						}
						else
						{
							func_312(uParam0, &Var0, 0, 0, 8);
						}
						func_54(&(uParam0->f_82), 8192);
						func_266(uParam0, 16, 0, 0);
						func_266(uParam0, 11, 0, 0);
						func_226(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_18(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_175(&Var0);
					func_312(uParam0, &Var0, 0, 0, 8);
					func_54(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_18(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_175(&Var0);
					func_312(uParam0, &Var0, 0, 0, 8);
					func_54(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_173(uParam0, 46, 1, 0, 0);
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
				func_175(&Var0);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_173(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_226(uParam0, 0, 0);
				break;
			
			case 139:
				func_225("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_173(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!func_18(uParam0->f_82, 268435456))
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
					func_54(&(uParam0->f_82), 268435456);
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
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!func_18(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_54(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_173(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_225("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_226(uParam0, 0, 0);
				func_173(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_173(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_163())
				{
					func_225("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_226(uParam0, 0, 0);
					func_173(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_225("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_226(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_18(uParam0->f_81, 1))
				{
					func_302(uParam0, 1, Var0, "_sick1", 8);
					func_16(&(uParam0->f_81), 2);
				}
				else if (!func_18(uParam0->f_81, 2))
				{
					func_302(uParam0, 2, Var0, "_sick2", 8);
					func_16(&(uParam0->f_81), 1);
				}
				func_313(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_18(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_18(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_54(&(uParam0->f_81), 2097152);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_266(uParam0, 16, 0, 0);
				func_313(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_226(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_313(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_313(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_313(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_175(&Var0);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_18(uParam0->f_81, 4))
				{
					func_302(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_18(uParam0->f_81, 8))
				{
					func_302(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_302(uParam0, 8, Var0, "_turns3", 8);
					func_16(&(uParam0->f_81), 4);
					func_16(&(uParam0->f_81), 8);
				}
				func_313(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_301(uParam0))
				{
					func_309(uParam0, Var0, func_311(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_221(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_315(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_271(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_315(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_315(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_313(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_18(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 128);
					func_16(&(uParam0->f_83), 256);
					func_266(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 256);
					func_16(&(uParam0->f_83), 512);
					func_266(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 512);
					func_16(&(uParam0->f_83), 128);
					func_266(uParam0, 16, 0, 0);
				}
				func_226(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_18(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_175(&Var0);
					}
					func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 1);
					func_16(&(uParam0->f_83), 2);
					func_266(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_175(&Var0);
					}
					func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_16(&(uParam0->f_83), 4);
					}
					else
					{
						func_16(&(uParam0->f_83), 1);
					}
					func_266(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_175(&Var0);
					}
					func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 4);
					func_16(&(uParam0->f_83), 1);
					func_266(uParam0, 16, 0, 0);
				}
				func_313(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_18(uParam0->f_81, 4096))
				{
					func_307(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_18(uParam0->f_81, 8192))
				{
					func_307(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_313(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_18(uParam0->f_81, 16384))
				{
					func_307(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_18(uParam0->f_81, 32768))
				{
					func_307(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_313(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_18(uParam0->f_82, 8))
					{
						func_300(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_18(uParam0->f_82, 16))
					{
						func_300(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_18(uParam0->f_82, 32))
					{
						func_300(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_313(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_226(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_315(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_313(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_266(uParam0, 16, 0, 0);
					func_226(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_313(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_313(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_18(uParam0->f_81, 65536))
				{
					func_307(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_18(uParam0->f_81, 131072))
				{
					func_307(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_226(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_301(uParam0))
				{
					func_309(uParam0, Var0, func_311(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_221(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_18(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_175(&Var0);
					func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 8);
					func_16(&(uParam0->f_83), 16);
					func_266(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_175(&Var0);
					func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 16);
					func_16(&(uParam0->f_83), 32);
					func_266(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_175(&Var0);
					func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_16(&(uParam0->f_83), 64);
					}
					else
					{
						func_16(&(uParam0->f_83), 8);
					}
					func_266(uParam0, 16, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_175(&Var0);
					func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_54(&(uParam0->f_83), 64);
					func_16(&(uParam0->f_83), 8);
					func_266(uParam0, 16, 0, 0);
				}
				func_313(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_163())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_312(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_309(uParam0, Var0, func_311(uParam0, 65));
					func_226(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_163())
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
					func_312(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_309(uParam0, Var0, func_311(uParam0, 66));
					func_226(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_163())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_312(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_312(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_312(uParam0, &Var0, 0, 0, 8);
								func_313(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_312(uParam0, &Var0, 0, 0, 8);
								func_313(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_312(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_315(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_313(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_266(uParam0, 16, 0, 0);
								func_226(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_63)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_312(uParam0, &Var0, 0, 0, 8);
									func_266(uParam0, 16, 0, 0);
									func_266(uParam0, 11, 0, 0);
									func_226(uParam0, 0, 0);
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
									func_175(&Var0);
									func_312(uParam0, &Var0, 0, 0, 8);
									func_266(uParam0, 16, 0, 0);
									func_266(uParam0, 11, 0, 0);
									func_226(uParam0, 0, 0);
									iLocal_63 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_312(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_173(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_313(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_18(uParam0->f_82, 1))
				{
					func_300(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_18(uParam0->f_82, 2))
				{
					func_300(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_18(uParam0->f_82, 4))
				{
					func_300(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_226(uParam0, 0, 0);
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
				func_315(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_221(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_266(uParam0, 16, 0, 0);
				func_313(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_301(uParam0))
				{
					func_309(uParam0, Var0, func_311(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_221(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_299(uParam0, Var0, 8);
				}
				func_313(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_18(uParam0->f_83, 1024))
				{
					func_54(&(uParam0->f_83), 1024);
					func_266(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_175(&Var0);
					func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 2048))
				{
					func_54(&(uParam0->f_83), 2048);
					func_266(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_175(&Var0);
					func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_18(uParam0->f_83, 4096))
				{
					func_54(&(uParam0->f_83), 4096);
					func_266(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_175(&Var0);
					func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_226(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_18(uParam0->f_82, 1024))
				{
					func_300(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_16(&(uParam0->f_82), 2048);
				}
				else if (!func_18(uParam0->f_82, 2048))
				{
					func_300(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_226(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_313(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_173(uParam0, 52, 1, 0, 0);
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
					func_312(uParam0, &Var0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_221(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_301(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_312(uParam0, &Var0, 0, 0, 8);
						func_173(uParam0, 52, 1, 0, 0);
						func_266(uParam0, 16, 0, 0);
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
						func_312(uParam0, &Var0, 0, 0, 8);
						func_266(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_315(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_266(uParam0, 16, 0, 0);
					func_226(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_313(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_266(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					func_225("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_226(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_175(&Var0);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_18(uParam0->f_81, 262144))
				{
					func_307(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_18(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_307(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_307(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_313(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_18(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_298(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_18(uParam0->f_82, 134217728))
				{
					func_298(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_313(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 100:
				func_225("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_226(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_312(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_175(&Var0);
				}
				func_54(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_312(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_175(&Var0);
				}
				func_54(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_312(uParam0, &Var0, 0, 0, 8);
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
					func_175(&Var0);
				}
				func_54(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_312(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_18(uParam0->f_82, 65536))
				{
					if (func_377(uParam0, 11) > uParam0->f_36)
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
						func_175(&Var0);
						func_304(Var0, uParam1);
						func_54(&(uParam0->f_82), 65536);
						func_266(uParam0, 16, 0, 0);
						func_266(uParam0, 11, 0, 0);
						func_226(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_18(uParam0->f_82, 131072))
				{
					if (func_377(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_175(&Var0);
						func_304(Var0, uParam1);
						func_54(&(uParam0->f_82), 131072);
						func_266(uParam0, 16, 0, 0);
						func_266(uParam0, 11, 0, 0);
						func_226(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_18(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_54(&(uParam0->f_82), 8388608);
				}
				else if (!func_18(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_54(&(uParam0->f_82), 16777216);
				}
				else if (!func_18(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_54(&(uParam0->f_82), 33554432);
				}
				func_304(Var0, uParam1);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_315(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_175(&Var0);
					func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_312(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_312(uParam0, &Var0, 0, 0, 8);
				}
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_304(Var0, uParam1);
				func_266(uParam0, 16, 0, 0);
				func_266(uParam0, 11, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_304(Var0, uParam1);
				func_266(uParam0, 16, 0, 0);
				func_266(uParam0, 11, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_304(Var0, uParam1);
				func_266(uParam0, 16, 0, 0);
				func_266(uParam0, 11, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_175(&Var0);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_175(&Var0);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_315(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_314(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_175(&Var0);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_175(&Var0);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_173(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_54(&(uParam0->f_81), 2097152);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_175(&Var0);
				func_304(Var0, uParam1);
				func_54(&(uParam0->f_81), 67108864);
				func_266(uParam0, 16, 0, 0);
				func_266(uParam0, 11, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_18(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_307(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_221(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_173(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_18(uParam0->f_81, 268435456))
				{
					func_307(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_173(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_225("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_226(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_18(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_307(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							func_221(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_307(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_173(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_225("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_226(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_271(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_266(uParam0, 16, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_18(uParam0->f_81, 16777216))
				{
					func_307(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_226(uParam0, 0, 0);
				break;
			
			case 88:
				func_225("TAXI_TIEFLEE", 7500, 1);
				func_226(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_18(uParam0->f_98, 536870912))
				{
					func_225("TAXI_OBJ_CYI_1B", 7500, 1);
					func_54(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_226(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_175(&Var0);
				func_312(uParam0, &Var0, 0, 0, 8);
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
				func_312(uParam0, &Var0, 0, 0, 8);
				func_226(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_312(uParam0, &Var0, 0, 0, 8);
				func_226(uParam0, 0, 0);
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
				func_312(uParam0, &Var0, 0, 0, 8);
				func_226(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_312(uParam0, &Var0, 1, 0, 8);
				func_173(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_225("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_173(uParam0, 0, 0, 0, 0);
				func_226(uParam0, 0, 0);
				break;
			}
	}
}

void func_298(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xD05F
{
	func_54(&(uParam0->f_82), iParam1);
	func_266(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_175(&Param2);
	}
	func_271(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_299(var uParam0, struct<6> Param1, int iParam7)//Position - 0xD0A0
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_18(uParam0->f_82, 64))
	{
		func_54(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_18(uParam0->f_82, 128))
	{
		func_54(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	func_314(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_266(uParam0, 16, 0, 0);
}

void func_300(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)//Position - 0xD127
{
	func_54(&(uParam0->f_82), iParam1);
	func_266(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_175(&Param2);
		}
	}
	func_271(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_301(var uParam0)//Position - 0xD1A7
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_302(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)//Position - 0xD20D
{
	func_54(&(uParam0->f_81), iParam1);
	func_266(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_271(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_303(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xD243
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_242(*uParam0, iVar1))
		{
			func_55(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_175(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_304(char[24] cParam0, var uParam6)//Position - 0xD2C4
{
	int iVar0;
	
	iVar0 = func_305(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_54(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_305(var uParam0)//Position - 0xD2F3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_306(var uParam0, bool bParam1)//Position - 0xD320
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_225("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_225("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_225("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_225("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_225("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_225("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_225("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_225("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_225("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_225("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_225("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_225("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_225("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_307(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xD4D7
{
	func_54(&(uParam0->f_81), iParam1);
	func_266(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_175(&Param2);
	}
	func_271(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

var func_308(struct<3> Param0, int iParam3)//Position - 0xD518
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_151(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

void func_309(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)//Position - 0xD544
{
	func_266(uParam0, 16, 0, 0);
	func_266(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, func_310(uParam0));
	}
}

char* func_310(var uParam0)//Position - 0xD582
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_311(var uParam0, int iParam1)//Position - 0xD61C
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_312(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xD9C5
{
	func_266(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_266(uParam0, 17, 0f, 1);
	}
	func_226(uParam0, iParam2, 0);
	return func_271(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_313(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)//Position - 0xDA02
{
	if (iParam0 == 0)
	{
		if (func_18(*uParam2, 2))
		{
			if (!bParam10)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_18(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_18(*uParam2, 4))
		{
			if (!func_18(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_16(uParam2, 4096);
			}
		}
		else if (func_18(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_18(*uParam2, 512))
		{
			if (!func_18(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_16(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_18(*uParam2, 16))
		{
			if (!func_18(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_16(uParam2, 4096);
			}
		}
		else if (func_18(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_18(*uParam2, 64))
		{
			if (!func_18(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_16(uParam2, 4096);
			}
		}
		else if (func_18(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_18(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_18(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_18(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_18(*uParam2, 8192))
		{
			if (func_18(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_18(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_18(*uParam2, 16384))
		{
			if (func_18(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_18(*uParam2, 32768))
		{
			if (func_18(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_18(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_18(*uParam2, 65536))
		{
			if (func_18(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_18(*uParam2, 131072))
		{
			if (func_18(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_18(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_18(*uParam2, 262144))
		{
			if (func_18(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_18(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_18(*uParam2, 524288))
		{
			if (func_18(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_18(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_18(*uParam2, 1048576))
		{
			if (func_18(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_18(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_18(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_18(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_18(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_18(*uParam2, 67108864))
		{
			if (func_18(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_18(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_18(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_18(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_18(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_314(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE00C
{
	func_279(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 1;
	Global_16685 = 0;
	Global_16689 = 0;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_272(sParam2, iParam4, 0);
}

void func_315(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xE060
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_242(*uParam0, iVar1))
		{
			func_55(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_175(sParam2);
				}
				else
				{
					func_175(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_316(var uParam0, bool bParam1)//Position - 0xE0F7
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

int func_317(var uParam0)//Position - 0xE109
{
	return uParam0->f_416;
}

int func_318(char* sParam0)//Position - 0xE116
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (func_139(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_319(var uParam0)//Position - 0xE138
{
	if (func_163())
	{
		return 1;
	}
	if (func_130(uParam0, 17))
	{
		return 1;
	}
	if (func_130(uParam0, 14))
	{
		return 1;
	}
	if (func_137(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_320(var uParam0, var uParam1)//Position - 0xE177
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_130(uParam0, 9));
}

void func_321(var uParam0)//Position - 0xE19E
{
	if (func_130(uParam0, 17))
	{
		if (!func_130(uParam0, 14))
		{
			if (!func_137(uParam0))
			{
				if (!func_163())
				{
					func_128(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_322(var uParam0)//Position - 0xE1D8
{
	return uParam0->f_117;
}

void func_323(var uParam0, int iParam1, bool bParam2)//Position - 0xE1E4
{
	if (uParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (func_377(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_173(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_173(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_266(uParam0, 10, 0f, 1);
				}
			}
			else if (func_377(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_173(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_173(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_266(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_377(uParam0, 10) > 30f)
		{
			if (!func_163())
			{
				if (uParam0->f_112)
				{
					func_173(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_173(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_266(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_18(uParam0->f_100, 64))
	{
		if (!func_92(&(Local_189[5 /*10*/].f_6)))
		{
			func_177(&(Local_189[5 /*10*/].f_6));
		}
		else if (func_88(&(Local_189[5 /*10*/].f_6)) > 6f)
		{
			if (func_346(uParam0))
			{
				if (uParam0->f_113)
				{
					func_173(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_173(uParam0, Local_189[5 /*10*/].f_9, 1, 0, 0);
				}
				func_345(uParam0, 1);
				func_343(5, uParam0);
				func_342(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 1))
	{
		if (!func_92(&(Local_189[0 /*10*/].f_6)))
		{
			func_177(&(Local_189[0 /*10*/].f_6));
		}
		else if (func_88(&(Local_189[0 /*10*/].f_6)) > 5f)
		{
			if (func_341(uParam0))
			{
				func_345(uParam0, 1);
				func_343(0, uParam0);
				if (uParam0->f_113)
				{
					func_173(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_173(uParam0, Local_189[0 /*10*/].f_9, 1, 0, 0);
				}
				func_342(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 2))
	{
		if (!func_92(&(Local_189[1 /*10*/].f_6)))
		{
			func_177(&(Local_189[1 /*10*/].f_6));
		}
		else if (func_88(&(Local_189[1 /*10*/].f_6)) > 5f)
		{
			if (func_340(uParam0))
			{
				func_345(uParam0, 1);
				func_343(1, uParam0);
				if (uParam0->f_113)
				{
					func_173(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_173(uParam0, Local_189[1 /*10*/].f_9, 1, 0, 0);
				}
				func_342(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 2048))
	{
		if (!func_92(&(Local_189[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				func_177(&(Local_189[8 /*10*/].f_6));
			}
		}
		else if (func_88(&(Local_189[8 /*10*/].f_6)) > 7f || Local_189[8 /*10*/].f_1 == 0)
		{
			if (func_339(uParam0))
			{
				func_345(uParam0, 1);
				func_343(8, uParam0);
				func_342(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 128))
	{
		if (!func_92(&(Local_189[6 /*10*/].f_6)))
		{
			func_177(&(Local_189[6 /*10*/].f_6));
		}
		else if (func_88(&(Local_189[6 /*10*/].f_6)) > 5f)
		{
			if (func_338(uParam0))
			{
				func_345(uParam0, 1);
				func_343(6, uParam0);
				if (uParam0->f_113)
				{
					func_173(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_173(uParam0, Local_189[6 /*10*/].f_9, 1, 0, 0);
				}
				func_342(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 32))
	{
		if (!func_92(&(Local_189[4 /*10*/].f_6)))
		{
			func_177(&(Local_189[4 /*10*/].f_6));
		}
		else if (func_88(&(Local_189[4 /*10*/].f_6)) > 4f)
		{
			if (func_337(uParam0))
			{
				func_345(uParam0, 1);
				func_343(4, uParam0);
				if (uParam0->f_113)
				{
					func_173(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_173(uParam0, Local_189[4 /*10*/].f_9, 1, 0, 0);
				}
				func_342(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 256))
	{
		if (!func_92(&(Local_189[7 /*10*/].f_6)))
		{
			func_177(&(Local_189[7 /*10*/].f_6));
		}
		else if (func_88(&(Local_189[7 /*10*/].f_6)) > 5f || Local_189[7 /*10*/].f_1 == 0)
		{
			if (func_336(uParam0))
			{
				func_343(7, uParam0);
				func_345(uParam0, 1);
				if (uParam0->f_113)
				{
					func_173(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_173(uParam0, Local_189[7 /*10*/].f_9, 1, 0, 1);
				}
				func_342(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 8))
	{
		if (!func_92(&(Local_189[9 /*10*/].f_6)))
		{
			func_177(&(Local_189[9 /*10*/].f_6));
		}
		else if (func_88(&(Local_189[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (func_88(&(Local_189[9 /*10*/].f_6)) > 7f || Local_189[9 /*10*/].f_1 == 0)
		{
			if (func_335(uParam0))
			{
				func_345(uParam0, 1);
				func_343(9, uParam0);
				if (uParam0->f_113)
				{
					func_173(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_173(uParam0, Local_189[9 /*10*/].f_9, 1, 0, 1);
				}
				func_342(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 16384))
	{
		if (!func_92(&(Local_189[13 /*10*/].f_6)))
		{
			func_177(&(Local_189[13 /*10*/].f_6));
		}
		else if (func_88(&(Local_189[13 /*10*/].f_6)) > 10f)
		{
			if (func_329(uParam0))
			{
				func_345(uParam0, 1);
				func_343(13, uParam0);
				if (uParam0->f_113)
				{
					func_173(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_173(uParam0, Local_189[13 /*10*/].f_9, 1, 0, 0);
				}
				func_342(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 32768))
	{
		if (!func_92(&(Local_189[14 /*10*/].f_6)))
		{
			func_177(&(Local_189[14 /*10*/].f_6));
		}
		else if (func_88(&(Local_189[14 /*10*/].f_6)) > 7f)
		{
			if (func_328(uParam0))
			{
				func_345(uParam0, 1);
				func_343(14, uParam0);
				if (uParam0->f_113)
				{
					func_173(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_173(uParam0, Local_189[14 /*10*/].f_9, 1, 0, 0);
				}
				func_342(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 4096))
	{
		if (!func_92(&(Local_189[11 /*10*/].f_6)))
		{
			func_177(&(Local_189[11 /*10*/].f_6));
		}
		else if (func_88(&(Local_189[11 /*10*/].f_6)) > 8f)
		{
			if (func_327(uParam0))
			{
				func_345(uParam0, 1);
				func_343(11, uParam0);
				if (uParam0->f_113)
				{
					func_173(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_173(uParam0, Local_189[11 /*10*/].f_9, 1, 0, 0);
				}
				func_342(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 8192))
	{
		if (!func_92(&(Local_189[12 /*10*/].f_6)))
		{
			func_177(&(Local_189[12 /*10*/].f_6));
		}
		else if (func_88(&(Local_189[12 /*10*/].f_6)) > 5f)
		{
			if (func_326(uParam0))
			{
				func_345(uParam0, 1);
				func_343(12, uParam0);
				if (uParam0->f_113)
				{
					func_173(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_173(uParam0, Local_189[12 /*10*/].f_9, 1, 0, 0);
				}
				func_342(uParam0);
			}
		}
	}
	if (func_18(uParam0->f_100, 4))
	{
		if (!func_92(&(Local_189[2 /*10*/].f_6)))
		{
			func_325(&(Local_189[2 /*10*/].f_6), 0f);
		}
		else if (func_88(&(Local_189[2 /*10*/].f_6)) > 5f)
		{
			if (func_324(uParam0))
			{
				if (uParam0->f_113)
				{
					func_173(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_173(uParam0, Local_189[2 /*10*/].f_9, 1, 0, 0);
				}
				func_345(uParam0, 1);
				func_343(2, uParam0);
				func_342(uParam0);
			}
		}
	}
}

int func_324(var uParam0)//Position - 0xE9DE
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !func_92(&(Local_189[0 /*10*/].f_3))) && !func_92(&(Local_189[1 /*10*/].f_3)))
		{
			if (!func_92(&(Local_189[2 /*10*/].f_3)))
			{
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_177(&(Local_189[2 /*10*/].f_3));
				}
			}
			else if (func_88(&(Local_189[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_87(&(Local_189[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_87(&(Local_189[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_325(var uParam0, float fParam1)//Position - 0xEAC1
{
	if (!func_92(uParam0))
	{
		func_62(uParam0, fParam1);
	}
}

int func_326(var uParam0)//Position - 0xEADB
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_92(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_92(&(Local_189[12 /*10*/].f_3)))
			{
				func_177(&(Local_189[12 /*10*/].f_3));
			}
			else if (func_88(&(Local_189[12 /*10*/].f_3)) > 5f)
			{
				func_87(&(Local_189[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_87(&(Local_189[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_327(var uParam0)//Position - 0xEB6A
{
	struct<3> Var0;
	
	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_92(&(Local_189[0 /*10*/].f_3))) && !func_92(&(Local_189[1 /*10*/].f_3))) && !func_92(&(Local_189[5 /*10*/].f_3))) && !func_92(&(Local_189[9 /*10*/].f_3))) && !func_92(&(Local_189[7 /*10*/].f_3))) && !func_92(&(Local_189[8 /*10*/].f_3)))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (MISC::ABSF(Var0.x) > 2.5f && !func_92(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_92(&(Local_189[11 /*10*/].f_3)))
			{
				func_177(&(Local_189[11 /*10*/].f_3));
				uLocal_341 = Var0.x;
			}
			else if (func_88(&(Local_189[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(uLocal_341) - MISC::ABSF(Var0.x)) < 0f)
			{
				func_87(&(Local_189[11 /*10*/].f_3));
				return 1;
			}
			else if (func_88(&(Local_189[11 /*10*/].f_3)) >= 1.5f)
			{
				func_87(&(Local_189[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_328(var uParam0)//Position - 0xEC9A
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_92(&(Local_189[0 /*10*/].f_3))) && !func_92(&(Local_189[8 /*10*/].f_3))) && !func_92(&(Local_189[5 /*10*/].f_3))) && !func_92(&(Local_189[9 /*10*/].f_3))) && !func_92(&(Local_189[7 /*10*/].f_3)))
	{
		if (!func_92(&(Local_189[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && func_145(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1)))
				{
					func_177(&(Local_189[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_88(&(Local_189[14 /*10*/].f_3)) < 1.5f && func_145(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_87(&(Local_189[14 /*10*/].f_3));
			return 1;
		}
		else if (func_88(&(Local_189[14 /*10*/].f_3)) >= 1.5f)
		{
			func_87(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_87(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_329(var uParam0)//Position - 0xEE1D
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_92(&(Local_189[9 /*10*/].f_3))) && !func_92(&(Local_189[7 /*10*/].f_3))) && !func_92(&(Local_189[4 /*10*/].f_3)))
	{
		if (!func_330(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!func_92(&(Local_189[13 /*10*/].f_3)))
			{
				func_177(&(Local_189[13 /*10*/].f_3));
			}
			else if (func_88(&(Local_189[13 /*10*/].f_3)) > 5f)
			{
				func_87(&(Local_189[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_87(&(Local_189[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_330(int iParam0)//Position - 0xEED4
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	float fVar27;
	
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	PATHFIND::_GET_POINT_ON_ROAD_SIDE(Var0, -1, &Var6);
	fVar27 = SYSTEM::VMAG(Var6 - Var0);
	Var9 = { func_334((Var3.x - Var0.x), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_333(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_331(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Var15, Var18, Var21);
}

int func_331(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)//Position - 0xEFBD
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
	
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	Param6.f_2 = 0f;
	Param9.f_2 = 0f;
	Var0 = { func_334(Param6 - Param3) };
	Var3 = { func_334(Param9 - Param3) };
	fVar6 = func_332(Param0, Var0);
	fVar7 = func_332(Param3, Var0);
	fVar8 = func_332(Param6, Var0);
	fVar9 = func_332(Param0, Var3);
	fVar10 = func_332(Param3, Var3);
	fVar11 = func_332(Param9, Var3);
	if (fVar7 > fVar8)
	{
		fVar12 = fVar7;
		fVar7 = fVar8;
		fVar8 = fVar12;
	}
	if (fVar6 < fVar7 || fVar6 > fVar8)
	{
		return 0;
	}
	if (fVar10 > fVar11)
	{
		fVar13 = fVar10;
		fVar10 = fVar11;
		fVar11 = fVar13;
	}
	if (fVar9 < fVar10 || fVar9 > fVar11)
	{
		return 0;
	}
	return 1;
}

float func_332(struct<3> Param0, struct<3> Param3)//Position - 0xF0A6
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_333(struct<3> Param0, int iParam3)//Position - 0xF0C7
{
	struct<3> Var0;
	
	switch (iParam3)
	{
		case 0:
			Var0.x = -Param0.f_1;
			Var0.f_1 = Param0.x;
			break;
		
		case 1:
			Var0.x = -Param0.x;
			Var0.f_1 = -Param0.f_1;
			break;
		
		case 2:
			Var0.x = Param0.f_1;
			Var0.f_1 = -Param0.x;
			break;
	}
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_334(struct<3> Param0)//Position - 0xF125
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_335(var uParam0)//Position - 0xF164
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1) == PLAYER::PLAYER_PED_ID())
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_336(var uParam0)//Position - 0xF198
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

int func_337(var uParam0)//Position - 0xF22D
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_92(&(Local_189[4 /*10*/].f_3)))
			{
				func_177(&(Local_189[4 /*10*/].f_3));
			}
			else if (func_88(&(Local_189[4 /*10*/].f_3)) > 2f)
			{
				func_87(&(Local_189[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_87(&(Local_189[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_338(var uParam0)//Position - 0xF29F
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_92(&(Local_189[6 /*10*/].f_3)))
			{
				func_177(&(Local_189[6 /*10*/].f_3));
			}
			else if (func_88(&(Local_189[6 /*10*/].f_3)) > 3.5f)
			{
				func_87(&(Local_189[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_87(&(Local_189[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_339(var uParam0)//Position - 0xF315
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
					func_173(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_173(uParam0, 72, 1, 0, 1);
				}
				func_87(&(Local_189[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_340(var uParam0)//Position - 0xF396
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (MISC::ABSF(Var0.x) > 3f && !func_92(&(Local_189[0 /*10*/].f_3)))
		{
			if (!func_92(&(Local_189[1 /*10*/].f_3)))
			{
				func_177(&(Local_189[1 /*10*/].f_3));
			}
			else if (func_88(&(Local_189[1 /*10*/].f_3)) > 1.2f)
			{
				func_87(&(Local_189[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_87(&(Local_189[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_341(var uParam0)//Position - 0xF422
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!func_92(&(Local_189[0 /*10*/].f_3)))
			{
				func_177(&(Local_189[0 /*10*/].f_3));
			}
			else if (func_88(&(Local_189[0 /*10*/].f_3)) > 0.7f)
			{
				func_87(&(Local_189[0 /*10*/].f_3));
				func_91(&(Local_189[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_87(&(Local_189[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_342(var uParam0)//Position - 0xF4AC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_92(&(Local_189[iVar0 /*10*/].f_6)))
		{
			func_91(&(Local_189[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_266(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

void func_343(int iParam0, var uParam1)//Position - 0xF4F4
{
	Local_189[iParam0 /*10*/].f_1++;
	func_344(uParam1, iParam0);
	func_87(&(Local_189[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_344(var uParam0, int iParam1)//Position - 0xF527
{
	uParam0->f_76 = (uParam0->f_76 + Local_189[iParam1 /*10*/]);
}

void func_345(var uParam0, int iParam1)//Position - 0xF53E
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_346(var uParam0)//Position - 0xF551
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!func_92(&(Local_189[5 /*10*/].f_3)))
			{
				func_177(&(Local_189[5 /*10*/].f_3));
			}
			else if (func_88(&(Local_189[5 /*10*/].f_3)) > 3.5f)
			{
				func_87(&(Local_189[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_87(&(Local_189[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_347(var uParam0)//Position - 0xF5C8
{
	if (!func_131(uParam0))
	{
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
		func_143(uParam0, 1);
	}
	else if (func_130(uParam0, 14))
	{
		func_157(uParam0);
		func_146(uParam0, 0);
	}
}

void func_348(var uParam0)//Position - 0xF609
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (Local_342 > 0 && !func_242(Local_342.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_342 - 1))
				{
					if (func_242(Local_342.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_342.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_242(Local_342.f_1[iVar0 /*4*/], 4))
							{
								func_55(&(Local_342.f_1[iVar0 /*4*/]), 4);
								Local_342.f_1[iVar0 /*4*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_17(&(Local_342.f_1[iVar0 /*4*/]), 12);
						}
						if (func_242(Local_342.f_1[iVar0 /*4*/], 4) && !func_242(Local_342.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_342.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_342.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_55(&(Local_342.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_270(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_349(var uParam0, var uParam1, bool bParam2)//Position - 0xF71C
{
	if (!func_18(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_124)) && func_163())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_163())
				{
					StringCopy(&(uParam0->f_124), func_292(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_350()//Position - 0xF7A2
{
	if ((SYSTEM::ROUND((func_377(&Local_408, 7) * 1000f)) % 10000) < 50)
	{
	}
	if (!func_354(&Local_408, 27, fLocal_955[0]))
	{
		switch (iLocal_845)
		{
			case 0:
				func_352();
				Local_408.f_39 = fLocal_955[1];
				Local_408.f_40 = fLocal_955[2];
				iLocal_845++;
				break;
			
			case 1:
				func_351(26, 27, Local_408.f_39);
				break;
			}
	}
}

int func_351(int iParam0, int iParam1, float fParam2)//Position - 0xF821
{
	if (func_130(&Local_408, 7))
	{
		if (iLocal_1013 < 22)
		{
			if (!func_163())
			{
				if (func_377(&Local_408, 7) <= (fLocal_963[iLocal_1013] + 6f) && func_377(&Local_408, 7) >= (fLocal_963[iLocal_1013] - 6f))
				{
					if (func_125(Local_408.f_17, 0) <= fLocal_986[iLocal_1013] && iLocal_1014 < 8)
					{
						if (!iLocal_1016)
						{
							iLocal_1013++;
							iLocal_1014++;
							func_173(&Local_408, iParam0, 1, 0, 0);
							func_91(&uLocal_854);
							iLocal_1016 = 1;
						}
						if (func_92(&uLocal_854))
						{
							if (func_88(&uLocal_854) > 20f)
							{
								iLocal_1013++;
								iLocal_1014++;
								func_173(&Local_408, iParam0, 1, 0, 0);
								func_87(&uLocal_854);
								func_91(&uLocal_854);
							}
						}
						return 1;
					}
					else if (func_125(Local_408.f_17, 0) > fLocal_986[iLocal_1013] && iLocal_1015 < 8)
					{
						if (!iLocal_1016)
						{
							iLocal_1013++;
							iLocal_1015++;
							func_173(&Local_408, iParam1, 1, 0, 0);
							func_91(&uLocal_854);
							iLocal_1016 = 1;
						}
						if (func_92(&uLocal_854))
						{
							if (func_88(&uLocal_854) > 20f)
							{
								iLocal_1013++;
								iLocal_1015++;
								func_173(&Local_408, iParam1, 1, 0, 0);
								func_87(&uLocal_854);
								func_91(&uLocal_854);
							}
						}
						return 1;
					}
				}
				else if (func_377(&Local_408, 7) > (fLocal_963[iLocal_1013] + 6f))
				{
					iLocal_1013++;
					return 1;
				}
			}
		}
		else if (func_377(&Local_408, 7) >= fParam2 && func_125(Local_408.f_17, 0) > 50f)
		{
			if (!func_163())
			{
				if (!func_92(&uLocal_857))
				{
					func_91(&uLocal_857);
				}
				else if (func_88(&uLocal_857) > 4f)
				{
					func_173(&Local_408, iParam1, 1, 0, 0);
				}
			}
			else if (func_92(&uLocal_857))
			{
				func_87(&uLocal_857);
			}
			return 1;
		}
	}
	return 0;
}

void func_352()//Position - 0xFA42
{
	if (iLocal_954 == 2)
	{
		iLocal_952 = 3;
		iLocal_953 = 4;
		fLocal_955[0] = 210f;
		fLocal_955[1] = 60f;
		fLocal_955[2] = 3150f;
		fLocal_955[3] = 105f;
		fLocal_955[4] = 1800f;
		fLocal_955[5] = 150f;
		fLocal_955[6] = 200f;
	}
	else
	{
		iLocal_952 = 9;
		iLocal_953 = 10;
		fLocal_955[0] = 140f;
		fLocal_955[1] = 60f;
		fLocal_955[2] = 1780f;
		fLocal_955[3] = 90f;
		fLocal_955[4] = 900f;
		fLocal_955[5] = 120f;
		fLocal_955[6] = 228f;
	}
	fLocal_963[0] = 70.05005f;
	fLocal_986[0] = 3090.417f;
	fLocal_963[1] = 76.25293f;
	fLocal_986[1] = 2929.083f;
	fLocal_963[2] = 82.69312f;
	fLocal_986[2] = 2759.83f;
	fLocal_963[3] = 88.34399f;
	fLocal_986[3] = 2576.061f;
	fLocal_963[4] = 94.97803f;
	fLocal_986[4] = 2350.886f;
	fLocal_963[5] = 100.7981f;
	fLocal_986[5] = 2177.442f;
	fLocal_963[6] = 106.467f;
	fLocal_986[6] = 2016.681f;
	fLocal_963[7] = 112.929f;
	fLocal_986[7] = 1839.417f;
	fLocal_963[8] = 118.4209f;
	fLocal_986[8] = 1689.62f;
	fLocal_963[9] = 124.4241f;
	fLocal_986[9] = 1526.638f;
	fLocal_963[10] = 130.76f;
	fLocal_986[10] = 1356.039f;
	fLocal_963[11] = 136.7f;
	fLocal_986[11] = 1184.013f;
	fLocal_963[12] = 142.573f;
	fLocal_986[12] = 1034.024f;
	fLocal_963[13] = 148.2161f;
	fLocal_986[13] = 894.6225f;
	fLocal_963[14] = 154.4321f;
	fLocal_986[14] = 756.5219f;
	fLocal_963[15] = 160.2749f;
	fLocal_986[15] = 669.364f;
	fLocal_963[16] = 166.25f;
	fLocal_986[16] = 570.2953f;
	fLocal_963[17] = 172.251f;
	fLocal_986[17] = 521.977f;
	fLocal_963[18] = 178.606f;
	fLocal_986[18] = 340.7466f;
	fLocal_963[19] = 184.6809f;
	fLocal_986[19] = 224.3091f;
	fLocal_963[20] = 190.708f;
	fLocal_986[20] = 126.9535f;
	fLocal_963[21] = 193.062f;
	fLocal_986[21] = 81.80421f;
	Local_408.f_23 = { func_265(iLocal_952) };
	Local_408.f_33 = func_353(iLocal_952);
	Local_408.f_26 = { func_265(1) };
	Local_408.f_34 = func_353(1);
	Local_408.f_29 = { 328.6758f, 443.9846f, 144.2298f };
}

float func_353(int iParam0)//Position - 0xFD46
{
	float fVar0;
	
	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 328.48f;
			break;
		
		case 1:
			fVar0 = 328.48f;
			break;
		
		case 2:
			fVar0 = 239.143f;
			break;
		
		case 3:
			fVar0 = 121.2021f;
			break;
		
		case 5:
			fVar0 = 268.6f;
			break;
		
		case 6:
			fVar0 = 218.5f;
			break;
		
		case 8:
			fVar0 = 268.6f;
			break;
		
		case 9:
			fVar0 = 301.6025f;
			break;
	}
	return fVar0;
}

int func_354(var uParam0, int iParam1, float fParam2)//Position - 0xFDDA
{
	if (uParam0->f_410 < 29)
	{
		if (func_130(uParam0, 7))
		{
			func_129(uParam0, 23);
			if (func_377(uParam0, 7) > fParam2 && func_377(uParam0, 23) > 35f)
			{
				func_266(uParam0, 23, 0, 0);
				func_173(uParam0, iParam1, 1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_355(var uParam0, var uParam1)//Position - 0xFE38
{
	var uVar0;
	
	if (!func_130(uParam0, 27))
	{
		func_129(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_377(uParam0, 27) > 5f)
	{
		if (func_369(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_266(uParam0, 27, 0, 0);
			func_266(uParam0, 10, 0, 0);
			func_367(uParam0, &uVar0, uParam1);
		}
		func_364(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_356(uParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*uParam0) && !CAM::IS_CAM_ACTIVE(*uParam0))) && (CAM::DOES_CAM_EXIST(uParam0->f_1) && !CAM::IS_CAM_ACTIVE(uParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !func_163())
	{
		if (func_377(uParam0, 26) > 10f)
		{
			func_128(uParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
	}
	else if (func_130(uParam0, 26))
	{
		func_128(uParam0, 26, 0);
	}
	return 0;
}

void func_356(var uParam0)//Position - 0xFF62
{
	if (!func_363(uParam0->f_429))
	{
		uParam0->f_429 = func_188();
		func_361(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (func_357(uParam0->f_429))
	{
		func_270(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_357(int iParam0)//Position - 0xFFAF
{
	return func_358(func_188(), iParam0);
}

int func_358(int iParam0, int iParam1)//Position - 0xFFC1
{
	int iVar0;
	int iVar1;
	
	if (!func_363(iParam1) || !func_363(iParam0))
	{
		return 1;
	}
	iVar0 = func_193(iParam0);
	iVar1 = func_193(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_360(iParam0);
	iVar1 = func_360(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_182(iParam0);
	iVar1 = func_182(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_359(iParam0);
	iVar1 = func_359(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_359(int iParam0)//Position - 0x100CE
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_360(int iParam0)//Position - 0x100E1
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

void func_361(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x100F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_193(*uParam0);
	iVar1 = func_195(*uParam0);
	iVar2 = func_360(*uParam0);
	iVar3 = func_182(*uParam0);
	iVar4 = func_179(*uParam0);
	iVar5 = func_359(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_192(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_192(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_362(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_362(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10275
{
	func_196(uParam0, iParam1);
	func_185(uParam0, iParam2);
	func_187(uParam0, iParam3);
	func_191(uParam0, iParam4);
	func_190(uParam0, iParam5);
	func_189(uParam0, iParam6);
}

int func_363(int iParam0)//Position - 0x102AD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_359(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_179(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_182(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_193(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_195(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_360(iParam0);
	if (iVar5 < 1 || iVar5 > func_192(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_364(var uParam0)//Position - 0x10389
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_366()) && !func_131(uParam0)) || ((uParam0->f_411 != 9 && func_231(uParam0, 1)) && !func_131(uParam0)))
		{
			uVar0 = func_365(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, 1, 0);
			func_157(uParam0);
			func_146(uParam0, 0);
		}
	}
}

var func_365(var uParam0)//Position - 0x1041F
{
	return uParam0;
}

int func_366()//Position - 0x10429
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == PLAYER::PLAYER_PED_ID())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, func_15()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_367(var uParam0, var uParam1, var uParam2)//Position - 0x1047E
{
	switch (*uParam1)
	{
		case 1:
			if (func_368(uParam0, 0, 1))
			{
				func_270(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_368(uParam0, 0, 4))
			{
				func_270(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_368(uParam0, 0, 8))
			{
				func_270(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_368(uParam0, 1, 1))
			{
				func_270(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_368(uParam0, 0, 1))
			{
				func_270(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_18(*uParam2, 2) && func_110(uParam0))
			{
				func_270(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_368(var uParam0, int iParam1, int iParam2)//Position - 0x10559
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_173(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_173(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_369(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x105D5
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!func_18(*uParam2, 1))
		{
			if (func_375(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_18(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_18(*uParam2, 4))
		{
			if (func_373(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_18(*uParam2, 8))
		{
			if (func_372(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_18(*uParam2, 128);
		if (bParam4)
		{
			if (func_370(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_18(*uParam2, 16))
		{
			if (func_370(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
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

int func_370(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x106FD
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
	if (func_371(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_144(iParam0, 1) < 1.5f)
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

int func_371(int iParam0, int iParam1)//Position - 0x108C1
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_372(int iParam0, int iParam1, var uParam2)//Position - 0x10916
{
	if (WEAPON::IS_PED_ARMED(uParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(uParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_373(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x10964
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	if (MISC::IS_BULLET_IN_AREA(Var0, 4f, 1))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(Var0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(uParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(uParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_374(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((Var0.x - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.x + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_374(int iParam0)//Position - 0x10ADC
{
	int iVar0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_145(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &uVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(uVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_375(int iParam0, var uParam1)//Position - 0x10BA8
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_144(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_376(var uParam0)//Position - 0x10C2C
{
	if (!func_18(uParam0->f_98, 2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
		{
			if (func_126(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_54(&(uParam0->f_98), 2);
			}
		}
	}
}

float func_377(var uParam0, int iParam1)//Position - 0x10C82
{
	if (!func_92(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_177(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_88(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_378()//Position - 0x10CB2
{
	func_379(&Local_408);
	func_396();
}

void func_379(var uParam0)//Position - 0x10CC5
{
	func_9(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_398(2);
	}
}

int func_380(var uParam0, bool bParam1)//Position - 0x10CE4
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_163() && func_377(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_53(uParam0) == 0 || func_242(uParam0->f_85, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							func_281(uParam0, 4160, 0);
						}
						else
						{
							func_281(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_281(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_281(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_281(uParam0, 0, 0);
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

void func_381(var uParam0)//Position - 0x10DE2
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_8));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_9));
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_10));
	}
}

int func_382(var uParam0)//Position - 0x10E23
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_383()//Position - 0x10E44
{
	func_385(&Local_408, 2);
	Local_408.f_410 = 0;
	func_384(&Local_408, 3, 6);
	Local_408.f_6 = 2f;
}

void func_384(var uParam0, int iParam1, int iParam2)//Position - 0x10E6A
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_385(var uParam0, int iParam1)//Position - 0x10E7E
{
	func_395(1);
	func_159();
	func_6(&(uParam0->f_244));
	func_394(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_18(Global_SAVE_DATA.TAXI_iGenData, 4))
	{
		func_54(&(Global_SAVE_DATA.TAXI_iGenData), 4);
	}
	func_389(uParam0);
	func_387(uParam0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	uParam0->f_102 = (func_386(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
}

int func_386(int iParam0)//Position - 0x10F00
{
	return Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_RUNS_ARRAY[iParam0];
}

void func_387(var uParam0)//Position - 0x10F15
{
	switch (func_53(uParam0))
	{
		case 0:
			func_388(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_388(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_388(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_388(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_388(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_388(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_388(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_388(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_388(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_388(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_388(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x11068
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_389(var uParam0)//Position - 0x11082
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_393(uParam0, 3);
			func_392(uParam0, 14);
			break;
		
		case 1:
			func_393(uParam0, 14);
			func_392(uParam0, 8);
			break;
		
		case 2:
			func_393(uParam0, 8);
			func_392(uParam0, 7);
			break;
		
		case 3:
			func_393(uParam0, 15);
			func_392(uParam0, 6);
			break;
		
		case 4:
			func_393(uParam0, 0);
			func_392(uParam0, 3);
			break;
		
		case 5:
			func_393(uParam0, 6);
			func_392(uParam0, 7);
			break;
		
		case 6:
			func_393(uParam0, 8);
			func_392(uParam0, 15);
			break;
		
		case 7:
			func_393(uParam0, 8);
			func_392(uParam0, 14);
			break;
		
		case 8:
			func_393(uParam0, 7);
			func_392(uParam0, 15);
			break;
		
		case 9:
			func_393(uParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = func_391((uParam0->f_418.f_2 + MISC::GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			func_392(uParam0, iVar0);
			func_390(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_390(var uParam0)//Position - 0x111B9
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_391(int iParam0, int iParam1, int iParam2)//Position - 0x1127A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_392(var uParam0, int iParam1)//Position - 0x1131C
{
	uParam0->f_418.f_1 = iParam1;
}

void func_393(var uParam0, int iParam1)//Position - 0x1132D
{
	uParam0->f_418.f_2 = iParam1;
}

void func_394(var uParam0)//Position - 0x1133E
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_98() };
	uParam0->f_17 = { func_98() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_128(uParam0, 32, 0);
}

void func_395(bool bParam0)//Position - 0x1139C
{
	if (bParam0)
	{
		StringCopy(&Global_96409, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_96403 = 1;
	}
	else
	{
		StringCopy(&Global_96409, "NULL", 24);
		Global_96403 = 0;
	}
}

void func_396()//Position - 0x113C8
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 26, 0);
	}
	func_397();
	func_100();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_397()//Position - 0x113F3
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_838);
}

void func_398(int iParam0)//Position - 0x11402
{
	Global_96066.f_22 = iParam0;
}

