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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	var uLocal_100 = 0;
	bool bLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125[4] = { 0, 0, 0, 0 };
	int iLocal_130[140] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_271 = 0f;
	float fLocal_272 = 0f;
	float fLocal_273 = 0f;
	float fLocal_274 = 0f;
	float fLocal_275 = 0f;
	float fLocal_276 = 0f;
	float fLocal_277 = 0f;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289[4] = { 0, 0, 0, 0 };
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	var uLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	char* sLocal_347 = NULL;
	char* sLocal_348 = NULL;
	char[] cLocal_349[8] = 0;
	char* sLocal_350 = NULL;
	char* sLocal_351 = NULL;
	char* sLocal_352 = NULL;
	char* sLocal_353 = NULL;
	char* sLocal_354 = NULL;
	char* sLocal_355 = NULL;
	char* sLocal_356 = NULL;
	char* sLocal_357 = NULL;
	char* sLocal_358 = NULL;
	char* sLocal_359 = NULL;
	struct<3> Local_360 = { 0, 0, 0 } ;
	struct<3> Local_363 = { 0, 0, 0 } ;
	struct<3> Local_366 = { 0, 0, 0 } ;
	struct<3> Local_369 = { 0, 0, 0 } ;
	struct<3> Local_372 = { 0, 0, 0 } ;
	struct<3> Local_375 = { 0, 0, 0 } ;
	struct<3> Local_378 = { 0, 0, 0 } ;
	struct<3> Local_381 = { 0, 0, 0 } ;
	struct<3> Local_384 = { 0, 0, 0 } ;
	struct<3> Local_387 = { 0, 0, 0 } ;
	struct<3> Local_390 = { 0, 0, 0 } ;
	struct<3> Local_393 = { 0, 0, 0 } ;
	struct<3> Local_396 = { 0, 0, 0 } ;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_419 = 0;
	struct<9> Local_420[15];
	struct<9> Local_556[19];
	struct<2> Local_728[4];
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	int iLocal_739 = 0;
	int iLocal_740 = 0;
	int iLocal_741 = 0;
	var uLocal_742[2] = { 0, 0 };
	int iLocal_745 = 0;
	int iLocal_746[4] = { 0, 0, 0, 0 };
	int iLocal_751[4] = { 0, 0, 0, 0 };
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	int iLocal_759 = 0;
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	var uLocal_763[2] = { 0, 0 };
	var uLocal_766 = 0;
	int iLocal_767[2] = { 0, 0 };
	int iLocal_770[4] = { 0, 0, 0, 0 };
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782[2] = { 0, 0 };
	var uLocal_785 = 0;
	int iLocal_786[2] = { 0, 0 };
	int iLocal_789 = 0;
	int iLocal_790 = 0;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	struct<13> Local_793 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<13> Local_806 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_819 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 3;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	struct<10> Local_844[16];
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
	var uLocal_1016 = 21;
	var uLocal_1017 = 6;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	struct<25> Local_1021[2];
	struct<25> Local_1072[2];
	struct<25> Local_1123[3];
	struct<25> Local_1199[5];
	struct<25> Local_1325[4];
	struct<25> Local_1426[5];
	struct<25> Local_1552[6];
	struct<25> Local_1703[2];
	struct<25> Local_1754[1];
	struct<25> Local_1780[3];
	struct<25> Local_1856[1];
	struct<25> Local_1882[2];
	struct<25> Local_1933[2];
	struct<25> Local_1984[2];
	int iLocal_2035 = 0;
	int iLocal_2036 = 0;
	int iLocal_2037 = 0;
	int iLocal_2038 = 0;
	int iLocal_2039 = 0;
	int iLocal_2040 = 0;
	int iLocal_2041 = 0;
	int iLocal_2042 = 0;
	int iLocal_2043 = 0;
	int iLocal_2044 = 0;
	int iLocal_2045 = 0;
	int iLocal_2046 = 0;
	int iLocal_2047 = 0;
	int iLocal_2048 = 0;
	int iLocal_2049 = 0;
	int iLocal_2050 = 0;
	int iLocal_2051 = 0;
	int iLocal_2052 = 0;
	int iLocal_2053 = 0;
	int iLocal_2054 = 0;
	int iLocal_2055 = 0;
	int iLocal_2056 = 0;
	int iLocal_2057 = 0;
	int iLocal_2058 = 0;
	int iLocal_2059 = 0;
	int iLocal_2060 = 0;
	int iLocal_2061 = 0;
	int iLocal_2062 = 0;
	int iLocal_2063 = 0;
	int iLocal_2064 = 0;
	var uLocal_2065[3] = { 0, 0, 0 };
	var uLocal_2069 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
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
	sLocal_17 = "NULL";
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
	uLocal_54 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_55 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_271 = 1f;
	fLocal_272 = 1f;
	fLocal_273 = 0f;
	fLocal_274 = 301.9804f;
	fLocal_275 = 69.4093f;
	fLocal_276 = 2.6f;
	fLocal_277 = 0f;
	iLocal_343 = 613961892;
	iLocal_344 = 84471659;
	iLocal_345 = -2106541084;
	sLocal_347 = "misslamar1swat_rappel";
	sLocal_348 = "misslamar1ig_1";
	cLocal_349 = "LEM1AUD";
	sLocal_350 = "mattlemar";
	sLocal_351 = "lamar_1_int";
	sLocal_352 = "misstimelapse@franklinold_home";
	sLocal_353 = "scr_lamar1_door_breach";
	sLocal_354 = "lamar1_interior";
	sLocal_355 = "lamar1_carjack";
	sLocal_356 = "lamar1_01";
	sLocal_357 = "";
	sLocal_358 = "oddjobs@assassinate@vice@hooker";
	sLocal_359 = "misslamar1dead_body";
	Local_360 = { -617.2782f, -1618.683f, 32.0105f };
	Local_363 = { -25.0062f, -1435.922f, 29.6542f };
	Local_366 = { 28.9547f, -1110.974f, 28.2798f };
	Local_369 = { 18.4291f, -1113.362f, 28.797f };
	Local_372 = { 22.3429f, -1109.28f, 28.797f };
	Local_375 = { 17.8331f, -1111.81f, 28.797f };
	Local_378 = { -614.4f, -1620.3f, 33.2f };
	Local_381 = { -614.1f, -1617.7f, 33.2f };
	Local_384 = { -566.3f, -1630.5f, 33.2f };
	Local_387 = { -566.1f, -1627.9f, 33.2f };
	Local_390 = { -591.5f, -1621.4f, 33.2f };
	Local_393 = { -588.9f, -1621.6f, 33.2f };
	Local_396 = { 22.1f, -1106.6f, 29.8f };
	iLocal_2041 = joaat("s_m_y_swat_01");
	iLocal_2042 = joaat("g_m_y_ballaeast_01");
	iLocal_2043 = joaat("g_m_y_ballasout_01");
	iLocal_2044 = joaat("polmav");
	iLocal_2045 = joaat("v_ilev_rc_doorel_l");
	iLocal_2046 = joaat("v_ilev_rc_doorel_r");
	iLocal_2047 = joaat("v_ilev_rc_door1");
	iLocal_2048 = joaat("v_ilev_rc_door1");
	iLocal_2049 = joaat("jackal");
	iLocal_2050 = joaat("cavalcade2");
	iLocal_2051 = joaat("v_ilev_rc_door1_st");
	iLocal_2052 = joaat("s_m_y_cop_01");
	iLocal_2053 = joaat("police");
	iLocal_2054 = joaat("a_m_m_genfat_01");
	iLocal_2055 = joaat("s_f_y_hooker_02");
	iLocal_2056 = joaat("prop_gascyl_01a");
	iLocal_2057 = joaat("ig_ballasog");
	iLocal_2058 = joaat("prop_recycle_light");
	iLocal_2059 = joaat("prop_recycle_light");
	iLocal_2060 = joaat("emperor2");
	iLocal_2061 = joaat("v_ilev_fa_frontdoor");
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		iLocal_56 = 0;
		Global_85393 = 3;
		func_657();
		BRAIN::_0x6D6840CEE8845831("chop");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_648();
	if (GlobalFunc_Is_Mission_Retry())
	{
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544)
		{
			if (iVar0 == 1)
			{
				iLocal_91 = 1;
			}
			iVar0++;
		}
		if (iVar0 == 0)
		{
			func_645(1, 0);
		}
		else if (iVar0 == 1)
		{
			func_645(3, 0);
		}
		else if (iVar0 == 2)
		{
			func_645(4, 0);
		}
		else if (iVar0 == 3)
		{
			func_645(6, 0);
		}
		else if (iVar0 == 4)
		{
			func_645(7, 0);
		}
		else if (iVar0 == 5)
		{
			func_645(8, 0);
		}
		else if (iVar0 > 5)
		{
			func_645(9, 0);
		}
		if (iLocal_2035 <= 1)
		{
			func_629(PLAYER::PLAYER_PED_ID(), 12, 20, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		bLocal_75 = true;
	}
	else
	{
		GlobalFunc_2536(1, 0);
		func_600(0, "GO_TO_GUN_SHOP", 0, 0, 0, 1);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("M_TheLongStretch", 0);
		if (iLocal_346 > MISC::GET_GAME_TIMER())
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		if (bLocal_75)
		{
			if (iLocal_2036 == 1)
			{
				bLocal_75 = false;
			}
		}
		if (!iLocal_77)
		{
			if (iLocal_2035 < 4)
			{
				func_599(28, 1);
				iLocal_77 = 1;
			}
		}
		if (iLocal_2035 < 4)
		{
			if (GlobalFunc_8493(29))
			{
				func_597(0);
			}
		}
		else if (iLocal_2035 > 4)
		{
			if (!GlobalFunc_8493(29))
			{
				func_597(1);
			}
		}
		else if (iLocal_2036 == 1)
		{
			if (!GlobalFunc_8493(29))
			{
				func_597(1);
			}
		}
		if (iLocal_2036 == 1 && !iLocal_69)
		{
			if (iLocal_2035 != 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_793))
				{
					if (PED::IS_PED_INJURED(Local_793))
					{
						if (PED::IS_PED_INJURED(Local_806))
						{
							func_585(8);
						}
						else
						{
							func_585(1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_806))
				{
					if (PED::IS_PED_INJURED(Local_806))
					{
						if (PED::IS_PED_INJURED(Local_793))
						{
							func_585(8);
						}
						else
						{
							func_585(2);
						}
					}
				}
			}
			if (iLocal_2035 == 1 || iLocal_2035 == 3)
			{
				if (GlobalFunc_8560(28))
				{
					func_585(9);
				}
			}
		}
		if (iLocal_2036 == 1)
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					fVar2 = ENTITY::GET_ENTITY_SPEED(iVar1);
					if (fVar2 > fLocal_277)
					{
						fLocal_277 = fVar2;
						GlobalFunc_565(377, SYSTEM::ROUND(fLocal_277), 1);
					}
					if ((!ENTITY::DOES_ENTITY_EXIST(Global_54763) || !ENTITY::IS_ENTITY_A_VEHICLE(Global_54763)) || (ENTITY::IS_ENTITY_A_VEHICLE(Global_54763) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Global_54763) != iVar1))
					{
						GlobalFunc_504(iVar1, 376);
					}
				}
			}
			else if ((!ENTITY::DOES_ENTITY_EXIST(Global_54763) || !ENTITY::IS_ENTITY_A_PED(Global_54763)) || (ENTITY::IS_ENTITY_A_PED(Global_54763) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_54763) != PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 374);
			}
		}
		if (iLocal_2035 == 3 || iLocal_2035 == 4)
		{
			iVar3 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID());
			if (iVar3 > iLocal_320)
			{
				GlobalFunc_553(382);
				iLocal_320 = iVar3;
			}
		}
		switch (iLocal_2035)
		{
			case 0:
				func_542();
				break;
			
			case 1:
				func_518();
				break;
			
			case 2:
				func_503();
				break;
			
			case 3:
				func_389();
				break;
			
			case 4:
				func_349();
				break;
			
			case 5:
				func_314();
				break;
			
			case 6:
			case 7:
				func_262();
				break;
			
			case 8:
				func_149();
				break;
			
			case 9:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x641
{
	int iVar0;
	
	if (iLocal_2036 == 0)
	{
		if (iLocal_56)
		{
			if (iLocal_278 != 99)
			{
				if (bLocal_75)
				{
					GlobalFunc_4972(Local_363, 0f, 0, 0);
				}
				iLocal_278 = 99;
			}
			else if ((func_127(0, Local_363 + Vector(0f, 2f, 0f), 0, 0) && func_127(1, Local_363 + Vector(0f, 3f, 0f), 0, 0)) && func_127(5, 0f, 0f, 0f, 0, 0))
			{
				GlobalFunc_4967(0, -1, 0);
				SYSTEM::SETTIMERB(0);
				while (SYSTEM::TIMERB() < 10000)
				{
					if (((!PED::IS_PED_INJURED(Local_793) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_793)) && (!PED::IS_PED_INJURED(Local_806) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_806))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						SYSTEM::SETTIMERB(100000);
					}
					SYSTEM::WAIT(0);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_363, 1, 0, 0, 1);
				iLocal_56 = 0;
			}
		}
		else
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
			}
			if (!PED::IS_PED_INJURED(Local_793) && !PED::IS_PED_INJURED(Local_806))
			{
				CUTSCENE::REQUEST_CUTSCENE("LAM_1_MCS_2", 8);
				STREAMING::REQUEST_MODEL(joaat("jackal"));
				func_34("LAM_1_MCS_2");
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_793, -1, 2048, 2);
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_793))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(Local_793, 800, 0);
					TASK::TASK_LOOK_AT_ENTITY(Local_793, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_806))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(Local_806, 1100, 0);
					TASK::TASK_LOOK_AT_ENTITY(Local_806, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
				if (SYSTEM::TIMERA() > 1550)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				if (((CUTSCENE::HAS_CUTSCENE_LOADED() && STREAMING::HAS_MODEL_LOADED(joaat("jackal"))) && SYSTEM::TIMERA() > 1500) && (!GlobalFunc_5172(&Local_819, 0) || SYSTEM::TIMERA() > 5000))
				{
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
					func_29(Local_793);
					func_29(Local_806);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_793, "Lamar", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_806, "Stretch", 0, 0, 0);
					func_28();
					GlobalFunc_4956();
					if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
					{
						Global_85393 = 1;
					}
					GlobalFunc_8316(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					iLocal_278 = 0;
					iLocal_57 = 0;
					iLocal_2036 = 1;
				}
			}
		}
	}
	if (iLocal_2036 == 1)
	{
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_57 = 1;
			iLocal_2036 = 3;
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_2036 = 2;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		switch (iLocal_278)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					iLocal_790 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_790))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_790, 1, 1);
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_790, Local_363, 20f, 20f, 10f, 0, 1, 0) && ENTITY::GET_ENTITY_MODEL(iLocal_790) != GlobalFunc_4931(1, 1))
						{
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_790, -1))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_790, -1);
							}
							if (iVar0 == 0 || iVar0 == PLAYER::PLAYER_PED_ID())
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_790, 1, 0);
								ENTITY::SET_ENTITY_COORDS(iLocal_790, Local_363, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_790, 359.9619f);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_790);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_790, 1);
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_790, 0, 0);
								VEHICLE::SET_VEHICLE_LIGHTS(iLocal_790, 1);
							}
						}
					}
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
					MISC::CLEAR_AREA(-17.8292f, -1458.012f, 29.4598f, 200f, 1, 1, 0, 0);
					iLocal_792 = VEHICLE::CREATE_VEHICLE(joaat("jackal"), -38.2037f, -1459.511f, 30.3994f, 93.9805f, 1, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_792);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jackal"));
					GlobalFunc_2204();
					iLocal_278++;
				}
				break;
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
		{
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 1, 0);
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		}
	}
	if (iLocal_2036 == 2)
	{
		if (!PED::IS_PED_INJURED(Local_793))
		{
			TASK::TASK_CLEAR_LOOK_AT(Local_793);
			if (PED::IS_PED_GROUP_MEMBER(Local_793, GlobalFunc_468()))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_793);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_792, 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_793, iLocal_792, -1);
			}
			PED::SET_PED_COMPONENT_VARIATION(Local_793, 1, 1, 0, 0);
		}
		if (!PED::IS_PED_INJURED(Local_806))
		{
			TASK::TASK_CLEAR_LOOK_AT(Local_806);
			if (PED::IS_PED_GROUP_MEMBER(Local_806, GlobalFunc_468()))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_806);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_792, 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_806, iLocal_792, 0);
			}
		}
		func_7(Local_793);
		func_7(Local_806);
		if (iLocal_57)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -24.5866f, -1452.87f, 29.7865f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 2.6628f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			SYSTEM::WAIT(250);
			GlobalFunc_2204();
		}
		RECORDING::_0x81CBAE94390F9F89();
		GlobalFunc_8316(0, 1, 1, 0);
		func_2(0);
	}
	if (iLocal_2036 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(0);
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
		iLocal_57 = 1;
		iLocal_2036 = 1;
	}
}

void func_2(bool bParam0)//Position - 0xB52
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
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	GlobalFunc_2196(6, 0, 0);
	GlobalFunc_5103(0, 0);
	iLocal_93 = 1;
	func_657();
}





int func_7(int iParam0)//Position - 0xD78
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = GlobalFunc_7234(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_89748))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_89749))
		{
			return 0;
		}
		Global_85373[iVar0] = 140;
		Global_89749 = iParam0;
		return 1;
	}
	Global_85373[iVar0] = 140;
	Global_85389 = 137;
	Global_89748 = iParam0;
	return 1;
}





















void func_28()//Position - 0x14E8
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_AMMUNATION"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_GO_TO_AMMUNATION");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_AMMUNATION_INTRO_CUTSCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_AMMUNATION_INTRO_CUTSCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_RECYCLING_CENTRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_GO_TO_RECYCLING_CENTRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_MEETING"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_GO_TO_MEETING");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_START"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_START");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_COVER_LAMAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_COVER_LAMAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_SAVE_LAMAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_SAVE_LAMAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_STAIRWELL"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_STAIRWELL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_WAREHOUSE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_WAREHOUSE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_GET_OUTSIDE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_GET_OUTSIDE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_ESCAPE_FIGHT_HELI"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_ESCAPE_FIGHT_HELI");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_ESCAPE_THE_JUNKYARD"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_ESCAPE_THE_JUNKYARD");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_STEAL_CAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_STEAL_CAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_LOSE_COPS"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_LOSE_COPS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_DRIVE_HOME"))
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_1_DRIVE_HOME");
	}
}

void func_29(int iParam0)//Position - 0x160D
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_HEADTRACKING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_CLEAR_LOOK_AT(iParam0);
		}
	}
}





void func_34(char* sParam0)//Position - 0x16E6
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (iVar0 == 899872323)
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise", 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise", 3, 0, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise", 10, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend", 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend", 3, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend", 2, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend^1", 0, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend^1", 3, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend^1", 4, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend^1", 2, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Denise_Friend^1", 5, 0, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 2, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 3, 2, 2, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 4, 5, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 1, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Stretch", 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Stretch", 8, 1, 0, 0);
		}
		else if (iVar0 == -1112756783)
		{
			func_35("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(Local_793))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_793, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 1, 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_806))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Stretch", Local_806, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Stretch", 0, 0, 0, 0);
			}
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Ballas_OG", 3, 0, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Ballas_OG", 4, 0, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Ballas_OG", 10, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Ballas_OG", 0, 1, 0, 0);
		}
		else if (iVar0 == -498410031)
		{
			func_35("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(Local_793) && !PED::IS_PED_INJURED(Local_806))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_793, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 1, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Stretch", Local_806, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Stretch", 0, 0, 0, 0);
			}
		}
		else if (iVar0 == -813942732)
		{
			func_35("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(Local_793))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_793, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 1, 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_806))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Stretch", Local_806, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Stretch", 0, 0, 0, 0);
			}
		}
	}
}

void func_35(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1975
{
	struct<50> Var0;
	int iVar65;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_36(iParam1, &Var0, iParam3);
	iVar65 = 0;
	while (iVar65 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar65, Var0.f_13[iVar65], Var0[iVar65], iParam2);
		iVar65++;
	}
	iVar65 = 0;
	while (iVar65 < 9)
	{
		if (Var0.f_39[iVar65] == -1 || Var0.f_39[iVar65] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar65, Var0.f_39[iVar65], Var0.f_49[iVar65], iParam2);
		}
		iVar65++;
	}
}

void func_36(int iParam0, var uParam1, int iParam2)//Position - 0x1A30
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var67;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar81 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_8576(iParam0, &Var2, 0);
	GlobalFunc_8576(iParam0, uParam1, iParam2);
	iVar82 = 0;
	iVar83 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (GlobalFunc_4911(iVar81, GlobalFunc_33(iVar0), GlobalFunc_5663(iParam0, Var2.f_13[iVar0], Var2[iVar0], GlobalFunc_33(iVar0)), &iVar1))
			{
				Var67 = { func_47(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, GlobalFunc_33(iVar0), GlobalFunc_5663(iParam0, Var2.f_13[iVar0], Var2[iVar0], GlobalFunc_33(iVar0)), &iVar1))
			{
				Var67 = { func_47(iVar81, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var67.f_3;
				(*uParam1)[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (GlobalFunc_4911(iVar81, 14, GlobalFunc_6668(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { func_47(iVar81, 2, uParam1->f_59) };
				uParam1->f_13[2] = Var67.f_3;
				(*uParam1)[2] = Var67.f_4;
				iVar82 = 1;
			}
			if (GlobalFunc_4912(iVar81, 14, GlobalFunc_6668(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var67 = { func_47(iVar81, 1, uParam1->f_62) };
				uParam1->f_13[1] = Var67.f_3;
				(*uParam1)[1] = Var67.f_4;
				iVar83 = 1;
			}
		}
		iVar0++;
	}
	if (iVar83 || iVar82)
	{
		iVar84 = GlobalFunc_5663(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar85 = GlobalFunc_5663(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar86 = GlobalFunc_24(iVar81, iVar85, iVar84);
		if (iVar86 != -99)
		{
			Var67 = { func_47(iVar81, 0, iVar86) };
			uParam1->f_13[0] = Var67.f_3;
			(*uParam1)[0] = Var67.f_4;
		}
	}
}











struct<14> func_47(int iParam0, int iParam1, int iParam2)//Position - 0x2912
{
	GlobalFunc_41();
	if (iParam0 == joaat("player_zero"))
	{
		func_97(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_78(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_48(iParam1, iParam2);
	}
	return Global_68106[0 /*14*/];
}

void func_48(int iParam0, int iParam1)//Position - 0x2964
{
	switch (iParam0)
	{
		case 0:
			func_77(iParam1);
			break;
		
		case 2:
			func_76(iParam1);
			break;
		
		case 3:
			func_73(iParam1);
			break;
		
		case 4:
			func_72(iParam1);
			break;
		
		case 6:
			func_71(iParam1);
			break;
		
		case 5:
			func_70(iParam1);
			break;
		
		case 8:
			func_69(iParam1);
			break;
		
		case 9:
			func_68(iParam1);
			break;
		
		case 10:
			func_67(iParam1);
			break;
		
		case 1:
			func_66(iParam1);
			break;
		
		case 7:
			func_65(iParam1);
			break;
		
		case 11:
			func_64(iParam1);
			break;
		
		case 12:
			func_63(iParam1);
			break;
		
		case 13:
			func_62(iParam1);
			break;
		
		case 14:
			func_49(iParam1);
			break;
	}
}

void func_49(int iParam0)//Position - 0x2A54
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 155);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_50(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x3CCA
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = GlobalFunc_40(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), 1);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (iParam1 == 1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("REBREATHER"), 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!GlobalFunc_7897(Global_2621444, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!GlobalFunc_7897(Global_2621444, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!GlobalFunc_7897(Global_2621444, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!GlobalFunc_7897(Global_2621444, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!GlobalFunc_7897(Global_2621444, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!GlobalFunc_7897(Global_2621444, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (GlobalFunc_31(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (GlobalFunc_31(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!GlobalFunc_31(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (!GlobalFunc_39(14))
			{
				uVar0 = GlobalFunc_6872(GlobalFunc_38(iParam1, uParam0->f_2), Global_68104, 0);
				if (MISC::IS_BIT_SET(uVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 1);
				}
				uVar0 = GlobalFunc_6872(GlobalFunc_37(iParam1, uParam0->f_2), Global_68104, 0);
				if (MISC::IS_BIT_SET(uVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 2);
				}
				if (GlobalFunc_36(iParam1, uParam0->f_2, &iVar1))
				{
					uVar0 = GlobalFunc_6872(iVar1, Global_68104, 0);
					if (!MISC::IS_BIT_SET(uVar0, uParam0->f_1))
					{
						MISC::SET_BIT(&(uParam0->f_6), 4);
					}
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}











void func_61(int iParam0, int iParam1, int iParam2)//Position - 0x6392
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_68106[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar17, &Var2);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var2))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_50(&(Global_68106[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_50(&(Global_68106[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var20);
		iVar39 = 0;
		iVar40 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar38, &Var20);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var20))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_50(&(Global_68106[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var20.f_1, joaat("OUTFIT_ONLY"), 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var41);
		iVar59 = 0;
		iVar60 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 6, -1, 0, -1, GlobalFunc_33(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar58, &Var41);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var41))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_50(&(Global_68106[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_62(int iParam0)//Position - 0x660D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_61(iVar10, iParam0, 9);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_63(int iParam0)//Position - 0x6763
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 48);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_64(int iParam0)//Position - 0x6C70
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 1);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_65(int iParam0)//Position - 0x6CE4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 1);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_66(int iParam0)//Position - 0x6D57
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 6);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_67(int iParam0)//Position - 0x6E3D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_61(iVar10, iParam0, 33);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_68(int iParam0)//Position - 0x719F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_61(iVar10, iParam0, 17);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_69(int iParam0)//Position - 0x73AF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_61(iVar10, iParam0, 18);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_70(int iParam0)//Position - 0x75DE
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_61(iVar10, iParam0, 7);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_71(int iParam0)//Position - 0x76ED
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_61(iVar10, iParam0, 84);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_72(int iParam0)//Position - 0x808D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_61(iVar10, iParam0, 104);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_73(int iParam0)//Position - 0x8BFF
{
	if (iParam0 < 136)
	{
		func_75(iParam0);
	}
	else
	{
		func_74(iParam0);
	}
	if (Global_68106[0 /*14*/].f_2 == -1)
	{
		func_61(3, iParam0, 242);
	}
}

void func_74(int iParam0)//Position - 0x8C33
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_75(int iParam0)//Position - 0x9837
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_76(int iParam0)//Position - 0xA745
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 9);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_77(int iParam0)//Position - 0xA871
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_68106[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_61(iVar10, iParam0, 7);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_78(int iParam0, int iParam1)//Position - 0xA96E
{
	switch (iParam0)
	{
		case 0:
			func_96(iParam1);
			break;
		
		case 2:
			func_95(iParam1);
			break;
		
		case 3:
			func_91(iParam1);
			break;
		
		case 4:
			func_90(iParam1);
			break;
		
		case 6:
			func_89(iParam1);
			break;
		
		case 5:
			func_88(iParam1);
			break;
		
		case 8:
			func_87(iParam1);
			break;
		
		case 9:
			func_86(iParam1);
			break;
		
		case 10:
			func_85(iParam1);
			break;
		
		case 1:
			func_84(iParam1);
			break;
		
		case 7:
			func_83(iParam1);
			break;
		
		case 11:
			func_82(iParam1);
			break;
		
		case 12:
			func_81(iParam1);
			break;
		
		case 13:
			func_80(iParam1);
			break;
		
		case 14:
			func_79(iParam1);
			break;
	}
}

void func_79(int iParam0)//Position - 0xAA5E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 175);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_80(int iParam0)//Position - 0xBF4E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 9);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_81(int iParam0)//Position - 0xC0A0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 47);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_82(int iParam0)//Position - 0xC5AA
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_61(iVar10, iParam0, 63);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_83(int iParam0)//Position - 0xCC17
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 1);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_84(int iParam0)//Position - 0xCC8A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 5);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_85(int iParam0)//Position - 0xCD59
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 53);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_86(int iParam0)//Position - 0xD288
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 12);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_87(int iParam0)//Position - 0xD41E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 77);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_88(int iParam0)//Position - 0xDC1B
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_61(iVar10, iParam0, 7);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_89(int iParam0)//Position - 0xDD2A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_61(iVar10, iParam0, 134);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_90(int iParam0)//Position - 0xEC54
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_61(iVar10, iParam0, 117);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_91(int iParam0)//Position - 0xF910
{
	if (iParam0 < 107)
	{
		func_94(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_93(iParam0);
	}
	else
	{
		func_92(iParam0);
	}
	if (Global_68106[0 /*14*/].f_2 == -1)
	{
		func_61(3, iParam0, 318);
	}
}

void func_92(int iParam0)//Position - 0xF955
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_93(int iParam0)//Position - 0x103FB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_94(int iParam0)//Position - 0x111EA
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_95(int iParam0)//Position - 0x11E33
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_61(iVar10, iParam0, 21);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_96(int iParam0)//Position - 0x120AB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_68106[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_61(iVar10, iParam0, 10);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_97(int iParam0, int iParam1)//Position - 0x121F0
{
	switch (iParam0)
	{
		case 0:
			func_114(iParam1);
			break;
		
		case 2:
			func_113(iParam1);
			break;
		
		case 3:
			func_110(iParam1);
			break;
		
		case 4:
			func_109(iParam1);
			break;
		
		case 6:
			func_108(iParam1);
			break;
		
		case 5:
			func_107(iParam1);
			break;
		
		case 8:
			func_106(iParam1);
			break;
		
		case 9:
			func_105(iParam1);
			break;
		
		case 10:
			func_104(iParam1);
			break;
		
		case 1:
			func_103(iParam1);
			break;
		
		case 7:
			func_102(iParam1);
			break;
		
		case 11:
			func_101(iParam1);
			break;
		
		case 12:
			func_100(iParam1);
			break;
		
		case 13:
			func_99(iParam1);
			break;
		
		case 14:
			func_98(iParam1);
			break;
	}
}

void func_98(int iParam0)//Position - 0x122E0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_61(iVar10, iParam0, 113);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_99(int iParam0)//Position - 0x13069
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_61(iVar10, iParam0, 10);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_100(int iParam0)//Position - 0x131E2
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 53);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_101(int iParam0)//Position - 0x13758
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 45);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_102(int iParam0)//Position - 0x13C81
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 1);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_103(int iParam0)//Position - 0x13CF4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 5);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_104(int iParam0)//Position - 0x13DC3
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_61(iVar10, iParam0, 48);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_105(int iParam0)//Position - 0x1429C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_61(iVar10, iParam0, 20);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_106(int iParam0)//Position - 0x14504
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_61(iVar10, iParam0, 24);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_107(int iParam0)//Position - 0x147D9
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_61(iVar10, iParam0, 14);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_108(int iParam0)//Position - 0x149A1
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_61(iVar10, iParam0, 99);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_109(int iParam0)//Position - 0x154F4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 113);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_110(int iParam0)//Position - 0x1613D
{
	if (iParam0 < 60)
	{
		func_112(iParam0);
	}
	else
	{
		func_111(iParam0);
	}
	if (Global_68106[0 /*14*/].f_2 == -1)
	{
		func_61(3, iParam0, 181);
	}
}

void func_111(int iParam0)//Position - 0x16171
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_112(int iParam0)//Position - 0x16F11
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_113(int iParam0)//Position - 0x1759D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_61(iVar10, iParam0, 6);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_114(int iParam0)//Position - 0x17683
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_68106[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_61(iVar10, iParam0, 7);
			return;
			break;
	}
	func_50(&(Global_68106[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}













int func_127(int iParam0, struct<3> Param1, int iParam4, bool bParam5)//Position - 0x186D2
{
	switch (iParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_793))
			{
				GlobalFunc_7049(19);
				if (GlobalFunc_7048(19))
				{
					if (bParam5)
					{
						return 1;
					}
					else if (GlobalFunc_7142(&Local_793, 19, Param1, iParam4, 1))
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_793, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_793, 1862763509);
						PED::SET_PED_CONFIG_FLAG(Local_793, 182, 1);
						Local_793.f_3 = 0;
						GlobalFunc_173(&Local_844, 5, Local_793, "LAMAR", 0, 1);
						PED::SET_PED_COMPONENT_VARIATION(Local_793, 2, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_793, 3, 2, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_793, 4, 5, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_793, 6, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_793, 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_793, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_793, 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_793, 1, 1, 0, 0);
						WEAPON::GIVE_WEAPON_TO_PED(Local_793, joaat("weapon_pistol"), -1, 0, 1);
						WEAPON::GIVE_WEAPON_TO_PED(Local_793, joaat("weapon_pumpshotgun"), -1, 0, 1);
						return 1;
					}
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_793))
				{
					PED::SET_PED_CAN_BE_TARGETTED(Local_793, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_793, 1862763509);
					PED::SET_PED_CONFIG_FLAG(Local_793, 182, 1);
					Local_793.f_3 = 0;
					if (Local_844[5 /*10*/] != Local_793)
					{
						GlobalFunc_173(&Local_844, 5, Local_793, "LAMAR", 0, 1);
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_793, joaat("weapon_pistol"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_793, joaat("weapon_pistol"), -1, 0, 1);
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_793, joaat("weapon_pumpshotgun"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_793, joaat("weapon_pumpshotgun"), -1, 0, 1);
					}
				}
				return 1;
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_806))
			{
				GlobalFunc_7049(37);
				if (GlobalFunc_7048(37))
				{
					if (bParam5)
					{
						return 1;
					}
					else if (GlobalFunc_7142(&Local_806, 37, Param1, iParam4, 1))
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_806, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_806, 1862763509);
						PED::SET_PED_CONFIG_FLAG(Local_806, 182, 1);
						Local_806.f_3 = 0;
						GlobalFunc_173(&Local_844, 7, Local_806, "STRETCH", 0, 1);
						PED::SET_PED_PROP_INDEX(Local_806, 0, 0, 0, false);
						PED::SET_PED_COMPONENT_VARIATION(Local_806, 8, 0, 0, 0);
						WEAPON::GIVE_WEAPON_TO_PED(Local_806, joaat("weapon_pistol"), -1, 0, 1);
						return 1;
					}
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_806))
				{
					PED::SET_PED_CAN_BE_TARGETTED(Local_806, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_806, 1862763509);
					PED::SET_PED_CONFIG_FLAG(Local_806, 182, 1);
					Local_806.f_3 = 0;
					if (Local_844[7 /*10*/] != Local_793)
					{
						GlobalFunc_173(&Local_844, 7, Local_806, "STRETCH", 0, 1);
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_806, joaat("weapon_pistol"), 0))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_806, joaat("weapon_pistol"), -1, 0, 1);
					}
				}
				return 1;
			}
			break;
		
		case 4:
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Lemar1");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Lemar2");
			return 1;
			break;
		
		case 5:
			func_132(28, 1, 0);
			return 1;
			break;
		
		case 6:
			if (iLocal_738 == 0)
			{
				iLocal_738 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(20.3f, -1109.7f, 30.5f, "v_gun");
			}
			else if (INTERIOR::IS_INTERIOR_READY(iLocal_738))
			{
				return 1;
			}
			else
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_738);
			}
			break;
		
		case 7:
			if (iLocal_737 == 0)
			{
				iLocal_737 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-624.2677f, -1619.155f, 34.0105f, "v_recycle");
			}
			if (INTERIOR::IS_INTERIOR_READY(iLocal_737))
			{
				return 1;
			}
			else
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_737);
			}
			break;
		
		case 8:
			if (!PED::IS_PED_INJURED(Local_793))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_793);
				WEAPON::GIVE_WEAPON_TO_PED(Local_793, joaat("weapon_pistol"), -1, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(Local_793, joaat("weapon_pumpshotgun"), -1, 1, 1);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_793, 733);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_793, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
				ENTITY::SET_ENTITY_PROOFS(Local_793, 0, 1, 0, 0, 0, 0, 0, 0);
				PED::SET_PED_ALLOWED_TO_DUCK(Local_793, 0);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_793, 0);
				PED::SET_PED_MAX_HEALTH(Local_793, 1800);
				ENTITY::SET_ENTITY_HEALTH(Local_793, 1800);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_793, 0);
				PED::SET_PED_CONFIG_FLAG(Local_793, 118, 0);
				PED::SET_PED_CONFIG_FLAG(Local_793, 208, 1);
				PED::SET_PED_CONFIG_FLAG(Local_793, 185, 1);
				PED::SET_PED_CONFIG_FLAG(Local_793, 188, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_793, 29, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_793, 35, 1);
				PED::SET_PED_CAN_COWER_IN_COVER(Local_793, 0);
				PED::SET_PED_ENABLE_WEAPON_BLOCKING(Local_793, 1);
				WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_793, 0.5f, 0.8f);
				if (!HUD::DOES_BLIP_EXIST(Local_793.f_1))
				{
					Local_793.f_1 = GlobalFunc_6797(Local_793, 0, 145);
				}
				Local_793.f_3 = 0;
				Local_793.f_4 = 0;
				Local_793.f_6 = -1;
				func_128(&Local_793, 2, 1, 2, 1, 0, 0f, 0f, 0f, 0);
			}
			if (!PED::IS_PED_INJURED(Local_806))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_806);
				WEAPON::GIVE_WEAPON_TO_PED(Local_806, joaat("weapon_pistol"), -1, 1, 1);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_806, 733);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_806, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 1);
				ENTITY::SET_ENTITY_PROOFS(Local_806, 0, 1, 0, 0, 0, 0, 0, 0);
				PED::SET_PED_ALLOWED_TO_DUCK(Local_806, 0);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_806, 0);
				PED::SET_PED_MAX_HEALTH(Local_806, 1800);
				ENTITY::SET_ENTITY_HEALTH(Local_806, 1800);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_806, 0);
				PED::SET_PED_CONFIG_FLAG(Local_806, 118, 0);
				PED::SET_PED_CONFIG_FLAG(Local_806, 208, 1);
				PED::SET_PED_CONFIG_FLAG(Local_806, 185, 1);
				PED::SET_PED_CONFIG_FLAG(Local_806, 188, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_806, 29, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_806, 35, 1);
				PED::SET_PED_CAN_COWER_IN_COVER(Local_806, 0);
				PED::SET_PED_ENABLE_WEAPON_BLOCKING(Local_806, 1);
				WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_806, 0.5f, 0.8f);
				if (!HUD::DOES_BLIP_EXIST(Local_806.f_1))
				{
					Local_806.f_1 = GlobalFunc_6797(Local_806, 0, 145);
				}
				Local_806.f_3 = 0;
				Local_806.f_4 = 0;
				Local_806.f_6 = -1;
				func_128(&Local_806, 2, 1, 2, 1, 0, 0f, 0f, 0f, 0);
			}
			return 1;
			break;
		
		case 9:
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
			PED::SET_CREATE_RANDOM_COPS(0);
			MISC::ENABLE_DISPATCH_SERVICE(3, 0);
			MISC::ENABLE_DISPATCH_SERVICE(1, 0);
			MISC::ENABLE_DISPATCH_SERVICE(8, 0);
			MISC::ENABLE_DISPATCH_SERVICE(2, 0);
			MISC::ENABLE_DISPATCH_SERVICE(6, 0);
			MISC::ENABLE_DISPATCH_SERVICE(5, 0);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			return 1;
			break;
		
		case 10:
			AUDIO::DISTANT_COP_CAR_SIRENS(1);
			return 1;
			break;
	}
	return 0;
}

void func_128(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, struct<3> Param6, float fParam9)//Position - 0x18CE2
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, iParam2);
		PED::SET_PED_COMBAT_ABILITY(*uParam0, iParam3);
		PED::SET_PED_COMBAT_RANGE(*uParam0, iParam4);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 2, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 14, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, iParam5, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, 1);
		PED::SET_PED_ACCURACY(*uParam0, iParam1);
		if (fParam9 != 0f)
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, Param6, fParam9, 0, 0);
		}
	}
}




void func_132(int iParam0, bool bParam1, int iParam2)//Position - 0x18E7E
{
	if (bParam1)
	{
		if (!GlobalFunc_7782(iParam0, 0, 0))
		{
			if (iParam2 && Global_90014.f_17[iParam0])
			{
				if (GlobalFunc_330(iParam0) == 3 && !GlobalFunc_8419(iParam0))
				{
					func_139(iParam0);
					func_138(iParam0, 0, 0);
					func_134(iParam0, 1, 0);
					GlobalFunc_1293(iParam0);
				}
				else
				{
					func_138(iParam0, 1, 0);
					GlobalFunc_1293(iParam0);
				}
			}
			else
			{
				func_138(iParam0, 0, 0);
				func_134(iParam0, 1, 0);
				GlobalFunc_1293(iParam0);
			}
		}
		else
		{
			func_134(iParam0, 1, 0);
			GlobalFunc_1293(iParam0);
		}
	}
	else if (GlobalFunc_7782(iParam0, 0, 0))
	{
		func_134(iParam0, 0, 0);
		func_134(iParam0, 1, 0);
		GlobalFunc_1293(iParam0);
	}
}


void func_134(int iParam0, int iParam1, bool bParam2)//Position - 0x18F57
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_3() == 0)
		{
			uVar0 = GlobalFunc_6872(GlobalFunc_329(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_135(GlobalFunc_329(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
}

void func_135(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x18FBF
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][GlobalFunc_4990(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}



void func_138(int iParam0, int iParam1, bool bParam2)//Position - 0x1929E
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_3() == 0)
		{
			uVar0 = GlobalFunc_6872(GlobalFunc_329(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_135(GlobalFunc_329(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
}

void func_139(int iParam0)//Position - 0x19306
{
	if (Global_90014.f_17[iParam0])
	{
		func_138(iParam0, 10, 1);
		func_138(iParam0, 19, 1);
	}
}










void func_149()//Position - 0x1984A
{
	int iVar0[10];
	int iVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	struct<2> Var16;
	bool bVar20;
	int iVar21;
	var uVar22;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (iLocal_2036 == 0)
	{
		if (iLocal_56)
		{
			if (bLocal_75)
			{
				GlobalFunc_4972(-604.4547f, -1700.725f, 22.9864f, 153.9423f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -604.4547f, -1700.725f, 22.9864f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 153.9423f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			while (!ENTITY::DOES_ENTITY_EXIST(Local_793) || !ENTITY::DOES_ENTITY_EXIST(Local_806))
			{
				func_127(0, -607.1035f, -1701.274f, 23.0408f, 280.0961f, 0);
				func_127(1, -601.7869f, -1701.035f, 22.9121f, 160.0113f, 0);
				SYSTEM::WAIT(0);
			}
			func_127(9, 0f, 0f, 0f, 0, 0);
			func_127(8, 0f, 0f, 0f, 0, 0);
			func_261(10);
			iLocal_308 = 0;
			iLocal_311 = 0;
			while (iLocal_308 < 100)
			{
				func_260();
				func_259();
				SYSTEM::WAIT(0);
			}
			GlobalFunc_4967(0, -1, 0);
			SYSTEM::SETTIMERB(0);
			while (SYSTEM::TIMERB() < 10000)
			{
				if (((!PED::IS_PED_INJURED(Local_793) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_793)) && (!PED::IS_PED_INJURED(Local_806) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_806))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					SYSTEM::SETTIMERB(100000);
				}
				SYSTEM::WAIT(0);
			}
			SYSTEM::WAIT(500);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			iLocal_278 = 99;
			iLocal_60 = 1;
			bLocal_97 = false;
			iLocal_56 = 0;
			iLocal_112 = 1;
		}
		else
		{
			MISC::SET_FAKE_WANTED_LEVEL(0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
			PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			PLAYER::SET_POLICE_RADAR_BLIPS(1);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			MISC::ENABLE_DISPATCH_SERVICE(3, 1);
			MISC::ENABLE_DISPATCH_SERVICE(1, 1);
			MISC::ENABLE_DISPATCH_SERVICE(8, 1);
			MISC::ENABLE_DISPATCH_SERVICE(2, 1);
			MISC::ENABLE_DISPATCH_SERVICE(6, 1);
			MISC::ENABLE_DISPATCH_SERVICE(5, 1);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, joaat("COP"));
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(0);
			if (!PED::IS_PED_INJURED(Local_793) && !PED::IS_PED_INJURED(Local_806))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_793, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_793, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 0);
				ENTITY::SET_ENTITY_PROOFS(Local_793, 0, 0, 0, 0, 0, 0, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_793, 2, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_793, 81, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_793, 0);
				PED::SET_PED_ALLOWED_TO_DUCK(Local_793, 1);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_793, 1);
				PED::SET_PED_CONFIG_FLAG(Local_793, 174, 1);
				PED::SET_PED_CONFIG_FLAG(Local_793, 185, 0);
				PED::SET_PED_CONFIG_FLAG(Local_793, 118, 1);
				PED::SET_PED_CONFIG_FLAG(Local_793, 208, 0);
				PED::SET_PED_CONFIG_FLAG(Local_793, 188, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_806, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_806, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 0);
				ENTITY::SET_ENTITY_PROOFS(Local_806, 0, 0, 0, 0, 0, 0, 0, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_806, 2, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_806, 81, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_806, 0);
				PED::SET_PED_ALLOWED_TO_DUCK(Local_806, 1);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_806, 1);
				PED::SET_PED_CONFIG_FLAG(Local_806, 174, 1);
				PED::SET_PED_CONFIG_FLAG(Local_806, 185, 0);
				PED::SET_PED_CONFIG_FLAG(Local_806, 118, 1);
				PED::SET_PED_CONFIG_FLAG(Local_806, 208, 0);
				PED::SET_PED_CONFIG_FLAG(Local_806, 188, 0);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
			if (!iLocal_119)
			{
				iLocal_119 = 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_777, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_777))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_777);
				}
			}
			if (!PED::IS_PED_INJURED(Local_1856[0 /*25*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1856[0 /*25*/], 0);
				TASK::CLEAR_PED_TASKS(Local_1856[0 /*25*/]);
			}
			if (HUD::DOES_BLIP_EXIST(Local_1856[0 /*25*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_1856[0 /*25*/].f_1));
			}
			func_258(&(Local_1856[0 /*25*/]), 0);
			func_257(&iLocal_777, 0);
			func_28();
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_STEAL_CAR"))
			{
				AUDIO::START_AUDIO_SCENE("LAMAR_1_STEAL_CAR");
			}
			AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", 0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_255();
				AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_CLIMB_LADDER_RESTART");
				iLocal_90 = 1;
			}
			else
			{
				iLocal_90 = 0;
			}
			GlobalFunc_10639(103, 1);
			GlobalFunc_10639(104, 1);
			GlobalFunc_10639(101, 1);
			GlobalFunc_10639(102, 1);
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					func_260();
					func_259();
					SYSTEM::WAIT(0);
				}
			}
			GlobalFunc_2204();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_76 = 0;
			iLocal_80 = 0;
			iLocal_86 = 0;
			bLocal_89 = false;
			iLocal_120 = 0;
			iLocal_307 = 0;
			iLocal_278 = 0;
			iLocal_321 = 0;
			iLocal_322 = 0;
			iLocal_338 = 0;
			GlobalFunc_574(381, 0);
			func_600(5, "LOSE_COPS", 1, 0, 0, 1);
			iLocal_130[93] = 0;
			bLocal_89 = true;
			GlobalFunc_563(1);
			GlobalFunc_601(9, 0);
			GlobalFunc_601(8, 0);
			SYSTEM::SETTIMERA(0);
			iLocal_2036 = 1;
		}
	}
	if (iLocal_2036 == 1)
	{
		iVar11 = 0;
		GlobalFunc_2232(Local_793, 1);
		GlobalFunc_2232(Local_806, 1);
		func_225();
		bVar12 = false;
		iVar13 = 0;
		if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			SYSTEM::SETTIMERA(0);
			if (iLocal_86)
			{
				PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
				iLocal_86 = 0;
			}
			if (!iLocal_130[41])
			{
				iLocal_130[41] = 1;
			}
			if (iLocal_76)
			{
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, joaat("COP"));
				iLocal_76 = 0;
				if (!PED::IS_PED_INJURED(Local_793))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_793, 2104565373) == 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_793, 780511057) == 1)
					{
						TASK::CLEAR_PED_TASKS(Local_793);
					}
				}
				if (!PED::IS_PED_INJURED(Local_806))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_806, 2104565373) == 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_806, 780511057) == 1)
					{
						TASK::CLEAR_PED_TASKS(Local_806);
					}
				}
			}
			AUDIO::DISTANT_COP_CAR_SIRENS(0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2052);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2053);
			if (!GlobalFunc_5172(&Local_819, 1))
			{
				if (!iLocal_130[107])
				{
					if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_COPS4", 7, 0, 0, 0))
					{
						iLocal_130[107] = 1;
						iVar13 = 1;
					}
				}
				else if (!iLocal_130[108])
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_HOUSE", 7, 0, 0, 0))
						{
							iLocal_130[108] = 1;
							iVar13 = 1;
						}
					}
					else
					{
						iLocal_130[108] = 1;
					}
				}
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_LOSE_COPS"))
			{
				AUDIO::STOP_AUDIO_SCENE("LAMAR_1_LOSE_COPS");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_DRIVE_HOME"))
			{
				AUDIO::START_AUDIO_SCENE("LAMAR_1_DRIVE_HOME");
			}
		}
		else
		{
			if (!iLocal_86)
			{
				if (((((((SYSTEM::TIMERA() > 60000 && !GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0)) && !GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 0, 0)) && !GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, 0, 0)) && !GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4, 0, 0)) && !GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 5, 0, 0)) && !GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 6, 0, 0)) && !GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 7, 0, 0))
				{
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
					iLocal_86 = 1;
				}
			}
			if (!iLocal_130[109])
			{
				if (SYSTEM::TIMERA() < 7000)
				{
					PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
					PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				}
				if ((SYSTEM::TIMERA() > 7000 && func_211(PLAYER::PLAYER_PED_ID(), Local_793)) && func_211(PLAYER::PLAYER_PED_ID(), Local_806))
				{
					if (GlobalFunc_Is_Mission_Retry())
					{
						if (PAD::_IS_USING_KEYBOARD(0))
						{
							GlobalFunc_159("LEM1_SPECHELP_KM", -1);
						}
						else
						{
							GlobalFunc_159("LEM1_SPECHELP", -1);
						}
					}
					iLocal_130[109] = 1;
				}
			}
			else if (!iLocal_130[110])
			{
				bVar14 = false;
				if (MISC::IS_PC_VERSION())
				{
					if (GlobalFunc_74("LEM1_SPECHELP_KM"))
					{
						bVar14 = true;
					}
				}
				if (!iLocal_130[110])
				{
					if (((!GlobalFunc_74("LEM1_SPECHELP") && !bVar14) && func_211(PLAYER::PLAYER_PED_ID(), Local_793)) && func_211(PLAYER::PLAYER_PED_ID(), Local_806))
					{
						GlobalFunc_159("LEM1_ALLEYHELP", -1);
						iLocal_130[110] = 1;
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_793))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_793, 1)) > 2500f)
				{
					if (PED::IS_PED_IN_COMBAT(Local_793, 0))
					{
						PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
						PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
						PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
						PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_806))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_806, 1)) > 2500f)
				{
					if (PED::IS_PED_IN_COMBAT(Local_806, 0))
					{
						PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
						PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
						PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
						PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
					}
				}
			}
			if (!iLocal_76)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, joaat("COP"));
				iLocal_76 = 1;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_LOSE_COPS"))
				{
					AUDIO::START_AUDIO_SCENE("LAMAR_1_LOSE_COPS");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_DRIVE_HOME"))
				{
					AUDIO::STOP_AUDIO_SCENE("LAMAR_1_DRIVE_HOME");
				}
			}
			if (!GlobalFunc_5172(&Local_819, 1))
			{
				if (!iLocal_130[41])
				{
					if (bLocal_97)
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_DEAD", 7, 0, 0, 0))
						{
							iLocal_130[41] = 1;
							bVar12 = true;
						}
					}
					else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_COPS1", 7, 0, 0, 0))
						{
							iLocal_130[41] = 1;
							bVar12 = true;
						}
					}
					else if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_STRCOPS", 7, 0, 0, 0))
					{
						iLocal_130[41] = 1;
						bVar12 = true;
					}
				}
				else if (MISC::GET_GAME_TIMER() - iLocal_295) > (13000 + iLocal_321 * 500)
				{
					if ((GlobalFunc_631(PLAYER::PLAYER_PED_ID(), Local_793) && GlobalFunc_631(PLAYER::PLAYER_PED_ID(), Local_806)) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 8) == 0)
							{
								if (!iLocal_130[112])
								{
									iVar15 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (!ENTITY::IS_ENTITY_DEAD(iVar15))
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar15) > 10f)
										{
											if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_COPS2B", 7, 0, 0, 0))
											{
												iLocal_130[112] = 1;
												iLocal_295 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-3000, 2000));
												bVar12 = true;
												iLocal_321++;
											}
										}
									}
								}
							}
							else if (iLocal_321 < 7)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_COPS2", 7, 0, 0, 0))
								{
									iLocal_295 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-3000, 2000));
									bVar12 = true;
									iLocal_321++;
								}
							}
						}
						else if (iLocal_322 < 7)
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_COPS3", 7, 0, 0, 0))
							{
								iLocal_295 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-3000, 2000));
								bVar12 = true;
								iLocal_322++;
							}
						}
					}
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_793.f_1))
		{
			func_207();
		}
		func_260();
		func_259();
		if (iLocal_130[41] && !bVar12)
		{
			StringCopy(&Var16, "LEM1_GOFRANKLIN", 16);
			if (!iLocal_130[108] || iVar13)
			{
				StringCopy(&Var16, "", 16);
				MISC::CLEAR_BIT(&(Local_819.f_13), 2);
			}
			switch (iLocal_278)
			{
				case 0:
					if (iLocal_308 == 100)
					{
						if (!bLocal_89)
						{
							if (GlobalFunc_631(PLAYER::PLAYER_PED_ID(), Local_793) && GlobalFunc_631(PLAYER::PLAYER_PED_ID(), Local_806))
							{
								bLocal_89 = true;
							}
						}
						if (!iLocal_90)
						{
							PED::GET_PED_NEARBY_PEDS(Local_793, &iVar0, -1);
							iVar11 = 0;
							while (iVar11 < iVar0)
							{
								if (!PED::IS_PED_INJURED(iVar0[iVar11]))
								{
									if (ENTITY::GET_ENTITY_MODEL(iVar0[iVar11]) == joaat("s_m_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar0[iVar11]) == joaat("s_m_y_swat_01"))
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0[iVar11], 1), ENTITY::GET_ENTITY_COORDS(Local_793, 0)) < 10000f)
										{
											iLocal_90 = 1;
										}
									}
								}
								iVar11++;
							}
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
							{
								iLocal_90 = 1;
							}
						}
						else if (bLocal_89)
						{
							if (func_205(&Local_819, Local_363, 0.001f, 0.001f, 2f, 1, Local_793, Local_806, 0, &Var16, "LEM1_LEFTLEMAR", "LEM1_LEFTSTRET", "", "LEM1_LEFTBOTH", 0, 1, 1, -1))
							{
							}
						}
						else if (func_167(&Local_819, Local_363, 0.001f, 0.001f, 2f, 1, Local_793, Local_806, 0, &Var16, "LEM1_LEFTLEMAR", "LEM1_LEFTSTRET", "", "LEM1_LEFTBOTH", "LEM1_FINDCAR", "LEM1_BACKVEH", 0, 1, 3, 1, -1))
						{
						}
						if (HUD::DOES_BLIP_EXIST(Local_819.f_5))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -23.99403f, -1431.219f, 29.65533f, -23.94807f, -1443.376f, 32.4042f, 4.75f, 0, 1, 0))
							{
								GlobalFunc_5652(&Local_819, 1, 0);
								if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
								{
									GlobalFunc_6685(0);
								}
								RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
								iLocal_278++;
							}
						}
						if ((HUD::DOES_BLIP_EXIST(Local_819.f_5) && GlobalFunc_631(PLAYER::PLAYER_PED_ID(), Local_793)) && GlobalFunc_631(PLAYER::PLAYER_PED_ID(), Local_806))
						{
							if (GlobalFunc_620())
							{
								GlobalFunc_619(0);
							}
							if (!iLocal_130[113])
							{
								if (!GlobalFunc_5172(&Local_819, 1))
								{
									if (!iLocal_130[114])
									{
										if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_CHAT2", 7, 0, 0, 0))
										{
											iLocal_130[114] = 1;
										}
									}
								}
							}
						}
						else if (((iLocal_130[115] || iLocal_130[116]) || iLocal_130[117]) || iLocal_130[114])
						{
							if (!iLocal_130[113])
							{
								if (!GlobalFunc_620())
								{
									GlobalFunc_619(1);
								}
							}
						}
					}
					break;
				
				case 1:
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar21 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar21, 0) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
						if (GlobalFunc_763(iVar21, 1093140480, 5, 1056964608, 0, 1))
						{
							if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
							}
							bVar20 = true;
						}
					}
					else
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
						}
						bVar20 = true;
					}
					if (!iLocal_130[113])
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_BACK", 7, 0, 0, 0))
						{
							iLocal_130[113] = 1;
						}
						else
						{
							GlobalFunc_5105();
						}
					}
					else if (bVar20)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
						iLocal_2036 = 2;
					}
					break;
				}
		}
		if (!iLocal_130[113])
		{
			if (((HUD::DOES_BLIP_EXIST(Local_819.f_5) || iLocal_278 > 0) && !PED::IS_PED_INJURED(Local_793)) && !PED::IS_PED_INJURED(Local_806))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_363) < 1225f)
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						MemCopy(&uVar22, {GlobalFunc_560()}, 4);
						if ((MISC::ARE_STRINGS_EQUAL(&uVar22, "LEM1_CHAT2") || MISC::ARE_STRINGS_EQUAL(&uVar22, "LEM1_CHAT1")) || MISC::ARE_STRINGS_EQUAL(&uVar22, "LEM1_HOME"))
						{
							GlobalFunc_5105();
						}
					}
				}
			}
		}
		switch (iLocal_307)
		{
			case 0:
				if ((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(Local_793)) && !PED::IS_PED_INJURED(Local_806)) && PED::IS_PED_IN_ANY_VEHICLE(Local_793, 0)) && PED::IS_PED_IN_ANY_VEHICLE(Local_806, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_ENTER_CAR");
					iLocal_307++;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					iLocal_307++;
				}
				break;
			
			case 1:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						AUDIO::PREPARE_MUSIC_EVENT("LM1_COPS_LOST_RADIO");
						if (iLocal_130[107])
						{
							AUDIO::SET_AUDIO_FLAG("SpeechDucksScore", 1);
							AUDIO::TRIGGER_MUSIC_EVENT("LM1_COPS_LOST_RADIO");
							bVar26 = true;
						}
					}
					else
					{
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_LOST_ON_FOOT");
						bVar26 = true;
					}
				}
				if (bVar26)
				{
					GlobalFunc_571(0, -1);
					AUDIO::PLAY_POLICE_REPORT("LAMAR_1_POLICE_LOST", 0);
					iLocal_307++;
				}
				break;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_STEAL_CAR"))
			{
				AUDIO::STOP_AUDIO_SCENE("LAMAR_1_STEAL_CAR");
			}
		}
		if (!iLocal_120)
		{
			if (iLocal_338 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar27 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (!ENTITY::IS_ENTITY_DEAD(iVar27))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iVar27, false);
						iLocal_338 = MISC::GET_GAME_TIMER();
						iLocal_120 = 1;
					}
				}
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_338) > 30000)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar28 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar28))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iVar28, true);
					iLocal_120 = 0;
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_819.f_5))
		{
			if (!iLocal_80)
			{
				GlobalFunc_2269(&(Local_819.f_5), -13.3369f, -1457.382f, 29.4549f, 274.288f);
				iLocal_80 = 1;
			}
		}
		else
		{
			iLocal_80 = 0;
			func_152();
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_363) < (100f * 100f))
		{
			CUTSCENE::REQUEST_CUTSCENE("LAM_1_MCS_2", 8);
			func_34("LAM_1_MCS_2");
		}
		if (iLocal_92)
		{
			if ((PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && (!PED::IS_PED_INJURED(Local_793) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_793))) && (!PED::IS_PED_INJURED(Local_793) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_806)))
			{
				VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_2049);
				iLocal_92 = 0;
			}
		}
	}
	if (iLocal_2036 == 2)
	{
		func_207();
		GlobalFunc_5652(&Local_819, 1, 0);
		func_150(&Local_1882, 0);
		func_150(&Local_1933, 0);
		func_150(&Local_1984, 0);
		func_258(&iLocal_758, 0);
		func_258(&iLocal_759, 0);
		func_258(&iLocal_760, 0);
		func_257(&iLocal_779, 0);
		func_257(&iLocal_780, 0);
		func_257(&iLocal_781, 0);
		func_257(&iLocal_791, 0);
		func_257(&iLocal_778, 0);
		STREAMING::REMOVE_ANIM_DICT(sLocal_358);
		AUDIO::DISTANT_COP_CAR_SIRENS(0);
		PED::SET_CREATE_RANDOM_COPS(1);
		GlobalFunc_563(0);
		SYSTEM::SETTIMERA(0);
		iLocal_2036 = 0;
		iLocal_2035 = 9;
	}
	if (iLocal_2036 == 3)
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_363, 1, 0, 0, 1);
		if (!PED::IS_PED_INJURED(Local_793))
		{
			ENTITY::SET_ENTITY_COORDS(Local_793, Local_363 + Vector(0f, 1f, 0f), 1, 0, 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_806))
		{
			ENTITY::SET_ENTITY_COORDS(Local_806, Local_363 + Vector(0f, 0f, 1f), 1, 0, 0, 1);
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		iLocal_2036 = 2;
	}
}

void func_150(int iParam0, bool bParam1)//Position - 0x1AA98
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (HUD::DOES_BLIP_EXIST((iParam0[iVar0 /*25*/])->f_1))
		{
			HUD::REMOVE_BLIP(&((iParam0[iVar0 /*25*/])->f_1));
		}
		GlobalFunc_589(&((iParam0[iVar0 /*25*/])->f_17));
		if ((iParam0[iVar0 /*25*/])->f_10 != 0)
		{
			PHYSICS::DELETE_ROPE(&((iParam0[iVar0 /*25*/])->f_10));
			(iParam0[iVar0 /*25*/])->f_10 = 0;
		}
		TASK::REMOVE_COVER_POINT((iParam0[iVar0 /*25*/])->f_4);
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*25*/]))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM((*iParam0)[iVar0 /*25*/], -8f, 1);
			if (!PED::IS_PED_IN_ANY_VEHICLE((*iParam0)[iVar0 /*25*/], 0) && PED::GET_PED_RELATIONSHIP_GROUP_HASH((*iParam0)[iVar0 /*25*/]) == iLocal_2062)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_COMBAT_PED((*iParam0)[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				else if (!PED::IS_PED_INJURED(Local_793))
				{
					TASK::TASK_COMBAT_PED((*iParam0)[iVar0 /*25*/], Local_793, 0, 16);
				}
				else if (!PED::IS_PED_INJURED(Local_806))
				{
					TASK::TASK_COMBAT_PED((*iParam0)[iVar0 /*25*/], Local_806, 0, 16);
				}
				PED::SET_PED_KEEP_TASK((*iParam0)[iVar0 /*25*/], 1);
			}
		}
		func_258(iParam0[iVar0 /*25*/], bParam1);
		(iParam0[iVar0 /*25*/])->f_2 = 0;
		(iParam0[iVar0 /*25*/])->f_5 = 0;
		(iParam0[iVar0 /*25*/])->f_7 = 0;
		iVar0++;
	}
}


void func_152()//Position - 0x1AC45
{
	if (!PED::IS_PED_INJURED(Local_806))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_806, 1)) > 22500f)
		{
			if (!PED::IS_PED_INJURED(Local_793))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_793, 1)) > 10000f)
				{
					func_585(7);
				}
				else
				{
					func_585(6);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_793))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_793, 1)) > 22500f)
		{
			if (!PED::IS_PED_INJURED(Local_806))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_806, 1)) > 10000f)
				{
					func_585(7);
				}
				else
				{
					func_585(5);
				}
			}
		}
	}
}















bool func_167(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, bool bParam18, bool bParam19, int iParam20, bool bParam21, int iParam22)//Position - 0x1B34F
{
	return func_168(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, iParam8, iParam9, iParam10, 0, sParam11, sParam12, sParam13, sParam14, sParam15, sParam16, bParam18, bParam19, sParam17, 0, iParam20, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}

int func_168(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, char* sParam32, char* sParam33, char* sParam34, bool bParam35, float fParam36)//Position - 0x1B399
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
	if (GlobalFunc_7931(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, sParam32, sParam33, sParam34, iParam14, bParam26))
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





































bool func_205(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19)//Position - 0x1DB0B
{
	return func_168(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 1, iParam8, iParam9, iParam10, 0, sParam11, sParam12, sParam13, sParam14, sParam15, GlobalFunc_648(), bParam16, bParam17, GlobalFunc_648(), 0, 0, bParam18, iParam19, 0, 0, 0, 1, 1065353216);
}


void func_207()//Position - 0x1DB62
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_399))
	{
		HUD::REMOVE_BLIP(&uLocal_399);
	}
	if (HUD::DOES_BLIP_EXIST(Local_793.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_793.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_806.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_806.f_1));
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_728)
	{
		if (HUD::DOES_BLIP_EXIST(Local_728[iVar0 /*2*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_728[iVar0 /*2*/].f_1));
		}
		iVar0++;
	}
}




bool func_211(int iParam0, int iParam1)//Position - 0x1DC4B
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) || !PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
	{
		return 0;
	}
	return PED::GET_VEHICLE_PED_IS_IN(iParam0, 0) == PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
}














void func_225()//Position - 0x1F14D
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (iLocal_60)
	{
		iVar0 = 0;
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if ((!Local_1882[0 /*25*/].f_2 || !Local_1933[0 /*25*/].f_2) || !Local_1984[0 /*25*/].f_2)
			{
				STREAMING::REQUEST_MODEL(iLocal_2052);
				STREAMING::REQUEST_MODEL(iLocal_2053);
			}
		}
		if (!Local_1882[0 /*25*/].f_2)
		{
			iLocal_339 = 0;
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_2052) && STREAMING::HAS_MODEL_LOADED(iLocal_2053))
				{
					if (Local_1882[0 /*25*/].f_7 == 0)
					{
						Local_1882[0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_1882[0 /*25*/].f_7) > 3000 || iLocal_112)
					{
						iLocal_779 = VEHICLE::CREATE_VEHICLE(iLocal_2053, -477.9164f, -1776.632f, 19.8944f, 89.4953f, 1, 1);
						Local_1882[0 /*25*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_779, 6, iLocal_2052, -1, 1, 1);
						Local_1882[1 /*25*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_779, 6, iLocal_2052, 0, 1, 1);
						iVar0 = 0;
						while (iVar0 < Local_1882)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1882[iVar0 /*25*/], joaat("weapon_pistol"), -1, 1, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1882[iVar0 /*25*/], 58, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1882[iVar0 /*25*/], 1);
							Local_1882[iVar0 /*25*/].f_2 = 1;
							Local_1882[iVar0 /*25*/].f_5 = 0;
							iVar0++;
						}
						iLocal_339 = MISC::GET_GAME_TIMER();
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_779, 1, 1);
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_779, 2);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_779, 1);
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_1882)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1882[iVar0 /*25*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1882[iVar0 /*25*/]))
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							switch (Local_1882[iVar0 /*25*/].f_5)
							{
								case 0:
									Local_1882[iVar0 /*25*/].f_14 = { -579.4522f, -1728.003f, 21.714f };
									if (iVar0 == 0)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_779, 0))
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_1882[iVar0 /*25*/], iLocal_779, Local_1882[iVar0 /*25*/].f_14, 20f, 0, iLocal_2053, 786469, 4f, 5f);
										}
									}
									Local_1882[iVar0 /*25*/].f_7 = 0;
									Local_1882[iVar0 /*25*/].f_5++;
									break;
								
								case 1:
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1882[iVar0 /*25*/], 1), Local_1882[iVar0 /*25*/].f_14) < 25f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1882[iVar0 /*25*/], 1), Var2) < 100f)
									{
										if (iVar0 == 0)
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_779, 0))
											{
												TASK::TASK_VEHICLE_TEMP_ACTION(Local_1882[iVar0 /*25*/], iLocal_779, 20, 1000);
											}
										}
										Local_1882[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
										Local_1882[iVar0 /*25*/].f_5++;
									}
									break;
								
								case 2:
									if ((MISC::GET_GAME_TIMER() - Local_1882[iVar0 /*25*/].f_7) > 2000)
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar1);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar0 * 200, 256);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
										TASK::CLOSE_SEQUENCE_TASK(uVar1);
										TASK::TASK_PERFORM_SEQUENCE(Local_1882[iVar0 /*25*/], uVar1);
										TASK::CLEAR_SEQUENCE_TASK(&uVar1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1882[iVar0 /*25*/], 0);
										Local_1882[iVar0 /*25*/].f_7 = 0;
										Local_1882[iVar0 /*25*/].f_5++;
									}
									break;
								
								case 3:
									if (PED::IS_PED_IN_COMBAT(Local_1882[iVar0 /*25*/], 0))
									{
										func_226(&(Local_1882[iVar0 /*25*/]), 0);
									}
									break;
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_1882[iVar0 /*25*/]);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1882[iVar0 /*25*/], 0);
							func_226(&(Local_1882[iVar0 /*25*/]), 0);
						}
					}
					else
					{
						func_226(&(Local_1882[iVar0 /*25*/]), 0);
					}
				}
				else
				{
					func_257(&iLocal_779, 0);
				}
				iVar0++;
			}
		}
		if (!Local_1933[0 /*25*/].f_2)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_2052) && STREAMING::HAS_MODEL_LOADED(iLocal_2053))
				{
					if (Local_1933[0 /*25*/].f_7 == 0)
					{
						Local_1933[0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_1933[0 /*25*/].f_7) > 3000 || iLocal_112)
					{
						iLocal_780 = VEHICLE::CREATE_VEHICLE(iLocal_2053, -471.361f, -1782.565f, 19.886f, 94.4439f, 1, 1);
						Local_1933[0 /*25*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_780, 6, iLocal_2052, -1, 1, 1);
						Local_1933[1 /*25*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_780, 6, iLocal_2052, 0, 1, 1);
						iVar0 = 0;
						while (iVar0 < Local_1933)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1933[iVar0 /*25*/], joaat("weapon_pistol"), -1, 1, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1933[iVar0 /*25*/], 58, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1933[iVar0 /*25*/], 1);
							Local_1933[iVar0 /*25*/].f_2 = 1;
							Local_1933[iVar0 /*25*/].f_5 = 0;
							iVar0++;
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_780, 1, 1);
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_780, 2);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_780, 1);
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_1933)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1933[iVar0 /*25*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1933[iVar0 /*25*/]))
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							switch (Local_1933[iVar0 /*25*/].f_5)
							{
								case 0:
									Local_1933[iVar0 /*25*/].f_14 = { -569.6553f, -1740.9f, 21.358f };
									if (iVar0 == 0)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_780, 0))
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_1933[iVar0 /*25*/], iLocal_780, Local_1933[iVar0 /*25*/].f_14, 20f, 0, iLocal_2053, 786469, 4f, 5f);
										}
									}
									Local_1933[iVar0 /*25*/].f_7 = 0;
									Local_1933[iVar0 /*25*/].f_5++;
									break;
								
								case 1:
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1933[iVar0 /*25*/], 1), Local_1933[iVar0 /*25*/].f_14) < 25f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1933[iVar0 /*25*/], 1), Var2) < 100f)
									{
										if (iVar0 == 0)
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_780, 0))
											{
												TASK::TASK_VEHICLE_TEMP_ACTION(Local_1933[iVar0 /*25*/], iLocal_780, 20, 1000);
											}
										}
										Local_1933[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
										Local_1933[iVar0 /*25*/].f_5++;
									}
									break;
								
								case 2:
									if ((MISC::GET_GAME_TIMER() - Local_1933[iVar0 /*25*/].f_7) > 2000)
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar1);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar0 * 200, 256);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
										TASK::CLOSE_SEQUENCE_TASK(uVar1);
										TASK::TASK_PERFORM_SEQUENCE(Local_1933[iVar0 /*25*/], uVar1);
										TASK::CLEAR_SEQUENCE_TASK(&uVar1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1933[iVar0 /*25*/], 0);
										Local_1933[iVar0 /*25*/].f_7 = 0;
										Local_1933[iVar0 /*25*/].f_5++;
									}
									break;
								
								case 3:
									if (PED::IS_PED_IN_COMBAT(Local_1933[iVar0 /*25*/], 0))
									{
										func_226(&(Local_1933[iVar0 /*25*/]), 0);
									}
									break;
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_1933[iVar0 /*25*/]);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1933[iVar0 /*25*/], 0);
							func_226(&(Local_1933[iVar0 /*25*/]), 0);
						}
					}
					else
					{
						func_226(&(Local_1933[iVar0 /*25*/]), 0);
					}
				}
				else
				{
					func_257(&iLocal_780, 0);
				}
				iVar0++;
			}
		}
		if (!Local_1984[0 /*25*/].f_2)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (((STREAMING::HAS_MODEL_LOADED(iLocal_2052) && STREAMING::HAS_MODEL_LOADED(iLocal_2053)) && Local_1882[0 /*25*/].f_2) && Local_1933[0 /*25*/].f_2)
				{
					if (Local_1984[0 /*25*/].f_7 == 0)
					{
						Local_1984[0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_1984[0 /*25*/].f_7) > 3000 || iLocal_112)
					{
						iLocal_781 = VEHICLE::CREATE_VEHICLE(iLocal_2053, -649.9347f, -1632.298f, 23.9329f, 153.8572f, 1, 1);
						Local_1984[0 /*25*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_781, 6, iLocal_2052, -1, 1, 1);
						Local_1984[1 /*25*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_781, 6, iLocal_2052, 0, 1, 1);
						iVar0 = 0;
						while (iVar0 < Local_1984)
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_1984[iVar0 /*25*/], joaat("weapon_pistol"), -1, 1, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1984[iVar0 /*25*/], 58, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1984[iVar0 /*25*/], 1);
							Local_1984[iVar0 /*25*/].f_2 = 1;
							Local_1984[iVar0 /*25*/].f_5 = 0;
							iVar0++;
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_781, 1, 1);
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_781, 2);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_781, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2052);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2053);
					}
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Local_1984)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1984[iVar0 /*25*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1984[iVar0 /*25*/]))
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							switch (Local_1984[iVar0 /*25*/].f_5)
							{
								case 0:
									Local_1984[iVar0 /*25*/].f_14 = { -626.8539f, -1699.012f, 23.4229f };
									if (iVar0 == 0)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_781, 0))
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_1984[iVar0 /*25*/], iLocal_781, Local_1984[iVar0 /*25*/].f_14, 20f, 0, iLocal_2053, 786469, 4f, 5f);
										}
									}
									Local_1984[iVar0 /*25*/].f_7 = 0;
									Local_1984[iVar0 /*25*/].f_5++;
									break;
								
								case 1:
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1984[iVar0 /*25*/], 1), Local_1984[iVar0 /*25*/].f_14) < 25f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_1984[iVar0 /*25*/], 1), Var2) < 100f)
									{
										if (iVar0 == 0)
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_781, 0))
											{
												TASK::TASK_VEHICLE_TEMP_ACTION(Local_1984[iVar0 /*25*/], iLocal_781, 20, 1000);
											}
										}
										Local_1984[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
										Local_1984[iVar0 /*25*/].f_5++;
									}
									break;
								
								case 2:
									if ((MISC::GET_GAME_TIMER() - Local_1984[iVar0 /*25*/].f_7) > 2000)
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar1);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar0 * 200, 256);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
										TASK::CLOSE_SEQUENCE_TASK(uVar1);
										TASK::TASK_PERFORM_SEQUENCE(Local_1984[iVar0 /*25*/], uVar1);
										TASK::CLEAR_SEQUENCE_TASK(&uVar1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1984[iVar0 /*25*/], 0);
										Local_1984[iVar0 /*25*/].f_7 = 0;
										Local_1984[iVar0 /*25*/].f_5++;
									}
									break;
								
								case 3:
									if (PED::IS_PED_IN_COMBAT(Local_1984[iVar0 /*25*/], 0))
									{
										func_226(&(Local_1984[iVar0 /*25*/]), 0);
									}
									break;
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_1984[iVar0 /*25*/]);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1984[iVar0 /*25*/], 0);
							func_226(&(Local_1984[iVar0 /*25*/]), 0);
						}
					}
					else
					{
						func_226(&(Local_1984[iVar0 /*25*/]), 0);
					}
				}
				else
				{
					func_257(&iLocal_781, 0);
				}
				iVar0++;
			}
		}
	}
}

void func_226(var uParam0, bool bParam1)//Position - 0x1FBE3
{
	int iVar0;
	int iVar1;
	
	if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_1));
	}
	GlobalFunc_589(&(uParam0->f_17));
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, -8f, 1);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar0 = PED::GET_PED_SOURCE_OF_DEATH(*uParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == PLAYER::PLAYER_PED_ID())
			{
				iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(*uParam0);
				if (iVar1 == iLocal_2062 || iVar1 == joaat("COP"))
				{
					GlobalFunc_565(379, 1, 0);
				}
			}
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	TASK::REMOVE_COVER_POINT(uParam0->f_4);
	if (bParam1)
	{
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_5 = 0;
		uParam0->f_6 = 0;
		uParam0->f_7 = 0;
		uParam0->f_8 = -1;
	}
}





























void func_255()//Position - 0x24017
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_2284(1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || !bLocal_75) || !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, 0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0) && WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun")) > 0)
		{
			iVar0 = joaat("weapon_pumpshotgun");
		}
		else
		{
			iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
	{
		iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar0, 1);
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) < iVar1 || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) == 0)
		{
			if (iVar1 != 0)
			{
				WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iVar0, iVar1 * 2);
				WEAPON::SET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar0, iVar1);
			}
			else
			{
				WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iVar0, 1);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, 1);
	}
}


void func_257(int iParam0, bool bParam1)//Position - 0x24137
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

void func_258(int iParam0, bool bParam1)//Position - 0x24189
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
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
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

void func_259()//Position - 0x2423F
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	switch (iLocal_311)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iLocal_2050);
			STREAMING::REQUEST_MODEL(iLocal_2055);
			STREAMING::REQUEST_MODEL(iLocal_2054);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_2050) && STREAMING::HAS_MODEL_LOADED(iLocal_2055)) && STREAMING::HAS_MODEL_LOADED(iLocal_2054))
			{
				iLocal_778 = VEHICLE::CREATE_VEHICLE(iLocal_2050, -634.4861f, -1696.895f, 23.4894f, 228.7563f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_778, 4, 4);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_778, 111, 156);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_778, "34MTA729");
				VEHICLE::SET_VEHICLE_STRONG(iLocal_778, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_778);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_778, 1, 1);
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_778, 2);
				AUDIO::SET_VEH_RADIO_STATION(iLocal_778, "RADIO_01_CLASS_ROCK");
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_778, 1);
				iLocal_760 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_778, 26, iLocal_2054, -1, 1, 1);
				iLocal_759 = PED::CREATE_PED(26, iLocal_2055, -633.0969f, -1695.24f, 23.5702f, 135.734f, 1, 1);
				TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_759, "WORLD_HUMAN_PROSTITUTE_LOW_CLASS", 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_759, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_759, 1);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_760, iLocal_759, -1, 2048, 2);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_760, 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_760, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2050);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2055);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2054);
				iLocal_311++;
			}
			break;
		
		case 1:
			if (iLocal_60)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_778, 0) };
				if ((((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0) < 225f || (!PED::IS_PED_INJURED(iLocal_760) && (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_760) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_760)))) || (!PED::IS_PED_INJURED(iLocal_759) && (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_759) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_759)))) || MISC::IS_BULLET_IN_AREA(Var0, 20f, 0)) || (!ENTITY::IS_ENTITY_DEAD(iLocal_781) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_781, 1), Var0) < 400f))
				{
					if (!PED::IS_PED_INJURED(iLocal_760))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar3);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar3);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_760, 128, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_760, 2, 0);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_760, uVar3);
						TASK::TASK_CLEAR_LOOK_AT(iLocal_760);
						TASK::CLEAR_SEQUENCE_TASK(&uVar3);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_760, 0);
						PED::SET_PED_KEEP_TASK(iLocal_760, 1);
					}
					if (!PED::IS_PED_INJURED(iLocal_759))
					{
						PED::_0x25361A96E0F7E419(iLocal_759, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_759, 128, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_759, 2, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_759, 0);
						PED::SET_PED_KEEP_TASK(iLocal_759, 1);
					}
					iLocal_312 = MISC::GET_GAME_TIMER();
					iLocal_311 = 99;
				}
			}
			break;
		
		case 99:
			iVar4 = 0;
			if (!PED::IS_PED_INJURED(iLocal_760))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_760, 0))
				{
					iVar4 = 1;
				}
			}
			else
			{
				iVar4 = 1;
			}
			if (iVar4 || (MISC::GET_GAME_TIMER() - iLocal_312) > 20000)
			{
				if (!PED::IS_PED_INJURED(iLocal_760))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_760);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_778))
				{
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_778, 0);
				}
				func_258(&iLocal_759, 0);
				func_258(&iLocal_760, 0);
				func_257(&iLocal_778, 0);
				STREAMING::REMOVE_ANIM_DICT(sLocal_358);
				iLocal_311++;
			}
			break;
	}
}

void func_260()//Position - 0x245A1
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar7;
	
	switch (iLocal_308)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iLocal_2049);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_2049, 2);
			STREAMING::REQUEST_MODEL(iLocal_2054);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_355);
			if (((STREAMING::HAS_MODEL_LOADED(iLocal_2049) && STREAMING::HAS_MODEL_LOADED(iLocal_2054)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(iLocal_2049)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_355))
			{
				if (iLocal_2035 == 8)
				{
					iLocal_791 = VEHICLE::CREATE_VEHICLE(iLocal_2049, -607.0482f, -1707.616f, 22.8813f, 42.694f, 1, 1);
					iLocal_758 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_791, 26, iLocal_2054, -1, 1, 1);
					ENTITY::SET_ENTITY_HEALTH(iLocal_758, 0);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_791, 0, 0, 0);
					bLocal_97 = false;
					iLocal_308 = 100;
				}
				else
				{
					bVar1 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -626.8754f, -1679.489f, 24.42051f, -625.3168f, -1677.468f, 49.42051f, 19.25f, 0, 1, 0);
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -601.6466f, -1696.297f, 24.13569f, -600.0009f, -1693.806f, 27.22772f, 6.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -609.1152f, -1690.96f, 20.59095f, -604.6172f, -1693.887f, 24.21274f, 4.75f, 0, 1, 0)) || bVar1)
					{
						if (bLocal_62 && bLocal_63)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_791))
							{
								iLocal_791 = VEHICLE::CREATE_VEHICLE(iLocal_2049, -607.0482f, -1707.616f, 22.8813f, 42.694f, 1, 1);
								iLocal_758 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_791, 26, iLocal_2054, -1, 1, 1);
								ENTITY::SET_ENTITY_HEALTH(iLocal_758, 0);
								VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_791, 0, 0, 0);
								bLocal_97 = true;
							}
							iLocal_308 = 100;
						}
						else if (!bVar1)
						{
							iLocal_791 = VEHICLE::CREATE_VEHICLE(iLocal_2049, -537.2055f, -1757.013f, 20.5996f, 53.6758f, 1, 1);
							iLocal_758 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_791, 26, iLocal_2054, -1, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_758, 1);
							bLocal_97 = false;
							iLocal_308++;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_791, 0))
				{
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_791, 0, 0);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_791, 0, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_791, 1);
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_791, 2);
					AUDIO::SET_VEH_RADIO_STATION(iLocal_791, "RADIO_01_CLASS_ROCK");
				}
				if (iLocal_308 != 0)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2049);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2054);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_2049, 1);
				}
				iLocal_92 = 1;
				iLocal_309 = 0;
			}
			break;
		
		case 1:
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_355);
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_791, 0) && !PED::IS_PED_INJURED(iLocal_758)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_355))
			{
				if (iLocal_60 || (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -605.8986f, -1696.711f, 24.81672f, -600.3635f, -1700.792f, 28.06672f, 2.5f, 0, 1, 0)))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_758, iLocal_791, sLocal_355, 786603, 0, 8, -1, -1082130432, 0, 1073741824);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_758, 1);
					Local_793.f_11 = 1;
					Local_806.f_11 = 1;
					iLocal_309 = 0;
					iLocal_308++;
				}
			}
			if (!PED::IS_PED_INJURED(Local_793))
			{
			}
			if (!PED::IS_PED_INJURED(Local_806))
			{
			}
			break;
		
		case 2:
			if ((!PED::IS_PED_INJURED(iLocal_758) && !PED::IS_PED_INJURED(Local_793)) && !PED::IS_PED_INJURED(Local_806))
			{
				Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_758, 1) };
				bVar2 = TASK::GET_SCRIPT_TASK_STATUS(Local_793, 242628503) == true;
				bVar3 = TASK::GET_SCRIPT_TASK_STATUS(Local_806, 242628503) == true;
				if ((bLocal_62 || iLocal_2035 == 8) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.99f)))
				{
					if (((iLocal_60 && Local_1882[0 /*25*/].f_2) && iLocal_339 != 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!PED::IS_PED_GROUP_MEMBER(Local_793, GlobalFunc_468()))
						{
							TASK::CLEAR_PED_TASKS(Local_793);
							PED::SET_PED_AS_GROUP_MEMBER(Local_793, GlobalFunc_468());
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 0);
						}
					}
					else if (!bVar2 || Local_793.f_11)
					{
						if (PED::IS_PED_GROUP_MEMBER(Local_793, GlobalFunc_468()))
						{
							PED::REMOVE_PED_FROM_GROUP(Local_793);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -607.9194f, -1703.648f, 22.8549f, iLocal_758, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_758, -1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						Local_793.f_6 = -1;
						Local_793.f_11 = 0;
					}
				}
				if ((bLocal_63 || iLocal_2035 == 8) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6) > 0.99f)))
				{
					if (((iLocal_60 && Local_1882[0 /*25*/].f_2) && iLocal_339 != 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!PED::IS_PED_GROUP_MEMBER(Local_806, GlobalFunc_468()))
						{
							TASK::CLEAR_PED_TASKS(Local_806);
							PED::SET_PED_AS_GROUP_MEMBER(Local_806, GlobalFunc_468());
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 0);
						}
					}
					else if (!bVar3 || Local_806.f_11)
					{
						if (PED::IS_PED_GROUP_MEMBER(Local_806, GlobalFunc_468()))
						{
							PED::REMOVE_PED_FROM_GROUP(Local_806);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -611.5765f, -1705.56f, 23.0669f, iLocal_758, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_758, -1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						Local_806.f_6 = -1;
						Local_806.f_11 = 0;
					}
				}
				if (iLocal_309 == 0)
				{
					if ((((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_758) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_758)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var4) < 100f) || (bVar2 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_793, 1), Var4) < 100f)) || (bVar3 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_806, 1), Var4) < 100f))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_758, 128, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_758, 2, 0);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_758, uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						PED::SET_PED_KEEP_TASK(iLocal_758, 1);
						iLocal_309 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_758, 0))
					{
						if (!iLocal_130[40])
						{
							GlobalFunc_5130(iLocal_758, "GENERIC_FRIGHTENED_HIGH", 3);
							iLocal_130[40] = 1;
						}
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_309) > 2500)
					{
						iLocal_308 = 99;
					}
				}
				if (iLocal_339 != 0 && (MISC::GET_GAME_TIMER() - iLocal_339) > 6500)
				{
					iVar7 = 1;
				}
				if (bVar2 && bVar3)
				{
					if ((!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || (iLocal_60 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -603.3f, -1699.8f, 23.3f) > (35f * 35f))) || (iLocal_60 && iVar7))
					{
						iLocal_308 = 99;
					}
				}
				if (iLocal_130[41] && !GlobalFunc_5172(&Local_819, 1))
				{
					if (!iLocal_130[42])
					{
						if ((!PED::IS_PED_INJURED(iLocal_758) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_758, 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_793, 1), Var4) < 400f)
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_JACK", 7, 0, 0, 0))
							{
								iLocal_130[42] = 1;
							}
						}
					}
					else if (!iLocal_130[43])
					{
						if (!PED::IS_PED_INJURED(iLocal_758) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_806, 1), Var4) < 400f)
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_JAC2", 7, 0, 0, 0))
							{
								iLocal_130[43] = 1;
							}
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_308 = 99;
				}
			}
			else
			{
				iLocal_308 = 99;
			}
			break;
		
		case 99:
			if (iLocal_2035 == 8)
			{
				TASK::CLEAR_PED_TASKS(Local_793);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 0);
				if (!PED::IS_PED_GROUP_MEMBER(Local_793, GlobalFunc_468()))
				{
					PED::SET_PED_AS_GROUP_MEMBER(Local_793, GlobalFunc_468());
				}
				TASK::CLEAR_PED_TASKS(Local_806);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 0);
				if (!PED::IS_PED_GROUP_MEMBER(Local_806, GlobalFunc_468()))
				{
					PED::SET_PED_AS_GROUP_MEMBER(Local_806, GlobalFunc_468());
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_791))
				{
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_791, 0);
				}
				func_257(&iLocal_791, 0);
				func_258(&iLocal_758, 0);
				iLocal_309 = 0;
				iLocal_308 = 100;
			}
			break;
		
		case 100:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_791))
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_791, 0);
				func_257(&iLocal_791, 0);
				func_258(&iLocal_758, 0);
			}
			if (!iLocal_130[44])
			{
				if ((iLocal_130[41] && (MISC::IS_BIT_SET(Local_819.f_13, 3) || MISC::IS_BIT_SET(Local_819.f_13, 0))) && !GlobalFunc_5172(&Local_819, 1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_DRIVE", 7, 0, 0, 0))
						{
							iLocal_130[44] = 1;
						}
					}
					else
					{
						iLocal_130[44] = 1;
					}
				}
			}
			break;
	}
}

bool func_261(int iParam0)//Position - 0x24F1E
{
	return func_127(iParam0, 0f, 0f, 0f, 0, 0);
}

void func_262()//Position - 0x24F31
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	iVar0 = 0;
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (iLocal_2036 == 0)
	{
		if (iLocal_56)
		{
			if (iLocal_278 != 99)
			{
				if (bLocal_75)
				{
					if (iLocal_2035 == 6)
					{
						GlobalFunc_4972(-624.0677f, -1621.155f, 32.0105f, 179.3006f, 0, 0);
					}
					else
					{
						GlobalFunc_4972(-571.7395f, -1601.896f, 26.0108f, 100.1658f, 0, 0);
					}
					iLocal_278 = 99;
				}
				else
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					}
					if (iLocal_2035 == 6)
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -624.0677f, -1621.155f, 32.0105f, 1, 0, 0, 1);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -571.7395f, -1601.896f, 26.0108f, 1, 0, 0, 1);
					}
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					if (func_261(7))
					{
						if (iLocal_2035 == 6)
						{
							STREAMING::LOAD_SCENE(-624.0677f, -1621.155f, 33.0105f);
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -624.0677f, -1621.155f, 32.0105f, 1, 0, 0, 1);
						}
						else
						{
							STREAMING::LOAD_SCENE(-571.7395f, -1601.896f, 26.0108f);
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -571.7395f, -1601.896f, 26.0108f, 1, 0, 0, 1);
						}
						iLocal_278 = 99;
					}
				}
			}
			else if (((((((func_261(7) && func_127(0, -622.6625f, -1624.366f, 32.0105f, 80.6249f, 0)) && func_127(1, -622.458f, -1623.38f, 32.0105f, 175.0071f, 0)) && func_312(0, 0, 0)) && func_127(5, 0f, 0f, 0f, 0, 0)) && func_127(8, 0f, 0f, 0f, 0, 0)) && func_127(4, 0f, 0f, 0f, 0, 0)) && func_311())
			{
				iLocal_329 = 0;
				iLocal_123 = 0;
				if (iLocal_2035 == 6)
				{
					GlobalFunc_4967(0, -1, 0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -624.0677f, -1621.155f, 32.0105f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 179.3006f);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					iLocal_102 = 0;
					iLocal_56 = 0;
				}
				else
				{
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pumpshotgun"), 31, 0);
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
					WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pistol"), 31, 0);
					STREAMING::REQUEST_ANIM_DICT("misslamar1ig_2_p1");
					if ((((WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pistol")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pumpshotgun"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))) && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_2_p1")) && func_127(9, 0f, 0f, 0f, 0, 0))
					{
						if (!PED::IS_PED_INJURED(Local_793))
						{
							ENTITY::SET_ENTITY_COORDS(Local_793, -573.7945f, -1611.434f, 26.011f, 0, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_793, 93.6465f);
						}
						if (!PED::IS_PED_INJURED(Local_806))
						{
							ENTITY::SET_ENTITY_COORDS(Local_806, -572.0372f, -1600.089f, 26.011f, 0, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_806, 89.2657f);
						}
						func_310(&Local_1072);
						func_310(&Local_1325);
						func_310(&Local_1123);
						func_310(&Local_1754);
						func_310(&Local_1021);
						Local_793.f_3 = 50;
						Local_806.f_3 = 50;
						while ((((!ENTITY::DOES_ENTITY_EXIST(Local_1552[0 /*25*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_1426[0 /*25*/])) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID())) || (!PED::IS_PED_INJURED(Local_793) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_793))) || (!PED::IS_PED_INJURED(Local_806) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_806)))
						{
							func_299(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
							func_296(0);
							func_284(0);
							SYSTEM::WAIT(0);
						}
						GlobalFunc_4967(0, -1, 0);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -571.7395f, -1601.896f, 26.0108f, 0, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 100.1658f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 1, 1, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((90f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						iLocal_56 = 0;
					}
				}
			}
		}
		else
		{
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pumpshotgun"), 31, 0);
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pistol"), 31, 0);
			if ((WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pistol")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pumpshotgun"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle")))
			{
				iLocal_60 = 0;
				bLocal_62 = false;
				bLocal_63 = false;
				bLocal_65 = false;
				bLocal_64 = false;
				bLocal_66 = false;
				iLocal_68 = 0;
				bLocal_84 = false;
				iLocal_70 = 0;
				iLocal_71 = 0;
				iLocal_72 = 0;
				bLocal_85 = false;
				iLocal_110 = 0;
				iLocal_112 = 0;
				iLocal_114 = 0;
				iLocal_115 = 0;
				iLocal_116 = 0;
				bLocal_121 = false;
				iLocal_87 = 0;
				iLocal_117 = 0;
				iLocal_61 = 0;
				iLocal_125[0] = 0;
				iLocal_125[1] = 0;
				iLocal_125[2] = 0;
				iLocal_125[3] = 0;
				iLocal_294 = 0;
				iLocal_282 = 0;
				iLocal_308 = 0;
				iLocal_311 = 0;
				iLocal_318 = 0;
				iLocal_326 = 0;
				iLocal_325 = 0;
				iLocal_331 = 0;
				iLocal_332 = 0;
				iLocal_342 = 0;
				iLocal_130[45] = 0;
				func_255();
				GlobalFunc_4956();
				func_261(9);
				func_283();
				func_282();
				GlobalFunc_601(9, 1);
				GlobalFunc_601(8, 1);
				if (!PED::IS_PED_INJURED(iLocal_761))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_761, true);
					if (!iLocal_102)
					{
						iLocal_102 = 1;
					}
					PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_761, 1, 0.534f, 0.556f, 16.352f, 1f, 1, 0f, "BulletLarge");
					PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_761, 1, 0.534f, 0.556f, 16.352f, 1f, 1, 0f, "BulletLarge");
					PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_761, 1, 0.556f, 0.53f, 23.682f, 1f, 5, 0f, "BulletLarge");
					PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_761, 1, 0.504f, 0.576f, 6.12f, 1f, 0, 0f, "ShotgunLarge");
					PED::SET_PED_TO_RAGDOLL(iLocal_761, 2000, 5000, 0, 1, 1, 0);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						SYSTEM::WAIT(500);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_761))
				{
					if (iLocal_419 == 0)
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_761, 1) };
						iLocal_419 = GRAPHICS::ADD_DECAL(1110, Var1.x, Var1.f_1, 32.1f, 0f, 0f, -1f, GlobalFunc_107(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
					}
					ENTITY::SET_ENTITY_HEALTH(iLocal_761, 0);
				}
				PLAYER::SET_POLICE_RADAR_BLIPS(0);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
				ENTITY::CREATE_MODEL_HIDE(-614.7736f, -1633.723f, 32.4919f, 2f, joaat("prop_crate_05a"), 1);
				OBJECT::_DOOR_CONTROL(iLocal_2047, Local_378, 1, 0, 0, 0);
				OBJECT::_DOOR_CONTROL(iLocal_2048, Local_381, 1, 0, 0, 0);
				GlobalFunc_10639(103, 1);
				GlobalFunc_10639(104, 1);
				GlobalFunc_10639(101, 1);
				GlobalFunc_10639(102, 1);
				OBJECT::_DOOR_CONTROL(iLocal_2047, Local_384, 1, 0f, 0f, 1f);
				OBJECT::_DOOR_CONTROL(iLocal_2048, Local_387, 1, 0f, 0f, -1f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CLOCK::SET_CLOCK_TIME(0, 0, 0);
					if (iLocal_2035 == 6)
					{
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-623f, -1624.7f, 33.2f, 2f, joaat("v_ilev_rc_door1"), 0))
						{
							OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -623f, -1624.7f, 33.2f, 1, 0f, 0);
							OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -623f, -1624.7f, 33.2f, 0, 0f, 0);
						}
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-623f, -1624.7f, 33.2f, 2f, joaat("v_ilev_rc_door1"), 0))
						{
							OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -625.6f, -1624.5f, 33.2f, 1, 0f, 0);
							OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -625.6f, -1624.5f, 33.2f, 0, 0f, 0);
						}
						if (!PED::IS_PED_INJURED(Local_793) && Local_793.f_3 == 0)
						{
							TASK::REMOVE_COVER_POINT(Local_793.f_2);
							Local_793.f_2 = TASK::ADD_COVER_POINT(-622.6625f, -1624.366f, 32.0105f, 170f, 0, 2, 3, 0);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_793, -622.6625f, -1624.366f, 32.0105f, -1, 0, 0f, true, 0, Local_793.f_2, 0);
						}
						if (!PED::IS_PED_INJURED(Local_806) && Local_806.f_3 == 0)
						{
							TASK::TASK_AIM_GUN_AT_COORD(Local_806, -625.3885f, -1626.489f, 33.2392f, -1, 0, 0);
						}
						SYSTEM::WAIT(1000);
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_GAMEPLAY_BEGINS_RESTART");
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
					else
					{
						SYSTEM::SETTIMERB(0);
						Local_793.f_11 = 1;
						Local_806.f_11 = 1;
						while (!func_279())
						{
							SYSTEM::WAIT(0);
						}
						while (SYSTEM::TIMERB() < 1000)
						{
							func_299(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
							func_296(0);
							func_284(0);
							SYSTEM::WAIT(0);
						}
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_ENTER_WAREHOUSE_RESTART");
					}
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_GAMEPLAY_BEGINS");
				}
				if (iLocal_402 == 0)
				{
					iLocal_402 = TASK::ADD_COVER_POINT(-603.3557f, -1619.358f, 32.0105f, 275.431f, 1, 2, 4, 1);
				}
				func_278(1);
				if (OBJECT::DOES_PICKUP_EXIST(uLocal_763[0]))
				{
					Var4 = { OBJECT::GET_PICKUP_COORDS(uLocal_763[0]) };
					OBJECT::REMOVE_PICKUP(uLocal_763[0]);
					MISC::CLEAR_AREA(Var4, 2f, 1, 0, 0, 0);
				}
				if (OBJECT::DOES_PICKUP_EXIST(uLocal_763[1]))
				{
					Var4 = { OBJECT::GET_PICKUP_COORDS(uLocal_763[1]) };
					OBJECT::REMOVE_PICKUP(uLocal_763[1]);
					MISC::CLEAR_AREA(Var4, 2f, 1, 0, 0, 0);
				}
				iVar7 = 0;
				MISC::SET_BIT(&iVar7, 1);
				MISC::SET_BIT(&iVar7, 5);
				uLocal_763[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), -602.3171f, -1612.258f, 26.8207f, 0f, 0f, -3.96f, iVar7, -1, 2, 1, 0);
				uLocal_763[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), -595.63f, -1620.18f, 32.11f, 0f, 0f, 25.2f, iVar7, -1, 2, 1, 0);
				MISC::SET_INSTANCE_PRIORITY_HINT(1);
				if (iLocal_2035 == 6)
				{
					iLocal_328 = 0;
					func_600(3, "ESCAPE_PRE_WAREHOUSE", 0, 0, 0, 1);
					func_277();
				}
				else if (iLocal_2035 == 7)
				{
					iLocal_328 = 50;
					func_600(4, "ESCAPE_FROM_WAREHOUSE", 0, 0, 0, 1);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (iLocal_2035 == 7)
					{
						iLocal_401 = TASK::ADD_COVER_POINT(-571.7395f, -1601.896f, 26.0108f, 100.1658f, 1, 0, 4, 0);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), -571.7395f, -1601.896f, 26.0108f, -1, 0, 0f, true, 1, iLocal_401, 0);
						SYSTEM::WAIT(500);
					}
					SYSTEM::SETTIMERB(0);
					while (SYSTEM::TIMERB() < 400)
					{
						CLOCK::PAUSE_CLOCK(1);
						func_299(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
						func_296(1);
						func_284(1);
						SYSTEM::WAIT(0);
					}
					CAM::DO_SCREEN_FADE_IN(800);
					while (!CAM::IS_SCREEN_FADED_IN())
					{
						CLOCK::PAUSE_CLOCK(1);
						func_299(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
						func_296(1);
						func_284(1);
						SYSTEM::WAIT(0);
					}
				}
				SYSTEM::SETTIMERA(0);
				SYSTEM::SETTIMERB(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::SET_PLAYER_SPRINT(PLAYER::PLAYER_ID(), 0);
				iLocal_330 = 0;
				iLocal_329 = MISC::GET_GAME_TIMER();
				iLocal_319 = 0;
				iLocal_313 = 0;
				iLocal_333 = 0;
				iLocal_281 = 0;
				iLocal_314 = 0;
				iLocal_335 = 0;
				iLocal_336 = 0;
				iLocal_306 = 0;
				iLocal_278 = 0;
				iLocal_2036 = 1;
			}
		}
	}
	if (iLocal_2036 == 1)
	{
		Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (!PED::IS_PED_INJURED(Local_793))
		{
			Var11 = { ENTITY::GET_ENTITY_COORDS(Local_793, 1) };
		}
		if (!PED::IS_PED_INJURED(Local_806))
		{
			Var14 = { ENTITY::GET_ENTITY_COORDS(Local_806, 1) };
		}
		fVar19 = SYSTEM::VDIST2(Var11, Var8);
		fVar20 = SYSTEM::VDIST2(Var14, Var8);
		fVar17 = MISC::ABSF((Var8.f_2 - Var11.f_2));
		fVar18 = MISC::ABSF((Var8.f_2 - Var14.f_2));
		func_299(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		func_296(0);
		func_284(0);
		func_275(&Local_420, &iLocal_335, 0);
		func_275(&Local_556, &iLocal_336, 1);
		func_279();
		PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
		PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), Var8);
		PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		CLOCK::PAUSE_CLOCK(1);
		switch (iLocal_314)
		{
			case 0:
				if (iLocal_2035 == 6)
				{
					if (func_274(&Local_1072))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -588.1853f, -1619.154f, 32.0105f, -592.5206f, -1618.995f, 34.7605f, 4.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -566.4107f, -1627.291f, 32.05611f, -592.1121f, -1624.949f, 34.76048f, 7.25f, 0, 1, 0))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_ENTERED_ROOM");
							iLocal_314++;
						}
					}
				}
				else
				{
					iLocal_314++;
				}
				break;
			
			case 1:
				if (iLocal_2035 == 6)
				{
					if (func_274(&Local_1072))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -565.4863f, -1631.969f, 32.09035f, -565.017f, -1627.817f, 34.7774f, 1.75f, 0, 1, 0))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_CLUMSY_ASS");
							iLocal_314++;
						}
					}
				}
				else
				{
					iLocal_314++;
				}
				break;
			
			case 2:
				if (iLocal_2035 == 6)
				{
					if (func_274(&Local_1325))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_SMOKE");
						iLocal_314++;
					}
				}
				else
				{
					iLocal_314++;
				}
				break;
			
			case 3:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -605.4152f, -1604.123f, 26.01081f, -568.3521f, -1606.941f, 31.55005f, 16f, 0, 1, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_ENTER_WAREHOUSE");
					iLocal_314++;
				}
				break;
			
			case 4:
				if (func_273(&Local_1552) + func_273(&Local_1426)) <= ((Local_1552 + Local_1426) / 2)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_HALF_WAREHOUSE");
					iLocal_314++;
				}
				break;
			
			case 5:
				if (func_274(&Local_1552) && func_274(&Local_1426))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_ALL_WAREHOUSE");
					iLocal_314++;
				}
				break;
			
			case 6:
				if (Local_1703[0 /*25*/].f_2)
				{
					AUDIO::PREPARE_MUSIC_EVENT("LM1_TERMINADOR_2ND_DOOR_EXPLODES");
					if (Local_1703[0 /*25*/].f_5 > 0 || func_274(&Local_1703))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_2ND_DOOR_EXPLODES");
						iLocal_313 = 0;
						iLocal_314++;
					}
				}
				break;
			
			case 7:
				if (iLocal_313 == 0)
				{
					if (!AUDIO::IS_MUSIC_ONESHOT_PLAYING())
					{
						iLocal_313 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					AUDIO::PREPARE_MUSIC_EVENT("LM1_TERMINADOR_EXIT_WAREHOUSE");
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -592.51f, -1631.69f, 25.98f, -592.32f, -1629.18f, 28.23f, 1f, 0, 1, 1) || bLocal_85)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_EXIT_WAREHOUSE");
						iLocal_314++;
					}
				}
				break;
			
			case 8:
				if (bLocal_84 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -591.0391f, -1639.498f, 18.9625f, -593.2191f, -1642.997f, 26.02014f, 3.5f, 0, 1, 0))
				{
					if (!AUDIO::IS_MUSIC_ONESHOT_PLAYING())
					{
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_CLIMB_LADDER");
						iLocal_314++;
					}
				}
				break;
			
			case 9:
				if (iLocal_60)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_LANDED");
					iLocal_314 = 100;
				}
				break;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_745))
		{
			iLocal_745 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-610.31f, -1631.93f, 32.01f, 2f, joaat("prop_box_wood01a"), 1, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_745))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_745, 1);
			}
		}
		if (!PED::IS_PED_INJURED(Local_793) && !PED::IS_PED_INJURED(Local_806))
		{
			if (fVar19 > 40000f)
			{
				ENTITY::SET_ENTITY_HEALTH(Local_793, 0);
				if (fVar20 > 10000f)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_806, 0);
				}
			}
			else if (fVar20 > 40000f)
			{
				ENTITY::SET_ENTITY_HEALTH(Local_806, 0);
				if (fVar19 > 10000f)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_793, 0);
				}
			}
			if (!bLocal_59)
			{
				if (iLocal_281 == 0)
				{
					bLocal_108 = false;
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -614.23f, -1607.38f, 25.75f, -616.93f, -1640.62f, 38.11f, 23.25f, 0, 1, 0))
					{
						bLocal_108 = true;
					}
					iLocal_281++;
				}
				else if (iLocal_281 == 1)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -582.29f, -1597.29f, 18.15f, -585.14f, -1632.1f, 37.29f, 50f, 0, 1, 0))
					{
						bLocal_108 = true;
					}
					iLocal_281++;
				}
				else if (iLocal_281 == 2)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -593.0045f, -1630.942f, 26.01083f, -607.7571f, -1629.696f, 28.26083f, 4f, 0, 1, 0))
					{
						bLocal_108 = true;
					}
					if (!bLocal_108)
					{
						if (!iLocal_130[45] && !GlobalFunc_5172(&Local_819, 2))
						{
							GlobalFunc_164("LEM1_LEFTBOTH", 7500, 0);
							iLocal_130[45] = 1;
						}
						if (iLocal_282 == 0)
						{
							if ((Var8.f_2 < 27f || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && ENTITY::IS_ENTITY_OCCLUDED(Local_793))
							{
								iLocal_282 = MISC::GET_GAME_TIMER();
							}
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_282) > 3000)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_793, 0);
							ENTITY::SET_ENTITY_HEALTH(Local_806, 0);
						}
					}
					else
					{
						iLocal_282 = 0;
					}
					iLocal_281++;
				}
				else if (iLocal_281 == 3)
				{
					if ((!PED::IS_PED_INJURED(Local_806) && !PED::IS_PED_INJURED(Local_793)) && (PED::IS_PED_IN_COMBAT(Local_793, 0) || PED::IS_PED_IN_COMBAT(Local_806, 0)))
					{
						if (fVar19 > 500f && ENTITY::IS_ENTITY_OCCLUDED(Local_793))
						{
							if (fVar20 > 225f && ENTITY::IS_ENTITY_OCCLUDED(Local_806))
							{
								if (!iLocal_130[45] && !GlobalFunc_5172(&Local_819, 2))
								{
									GlobalFunc_164("LEM1_LEFTBOTH", 7500, 0);
									iLocal_130[45] = 1;
								}
							}
							if (fVar19 > 1250f)
							{
								if (iLocal_283 == 0)
								{
									iLocal_283 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_283) > 5000)
								{
									ENTITY::SET_ENTITY_HEALTH(Local_793, 0);
									if (ENTITY::IS_ENTITY_OCCLUDED(Local_806))
									{
										ENTITY::SET_ENTITY_HEALTH(Local_806, 0);
									}
								}
							}
						}
						else
						{
							iLocal_283 = 0;
						}
					}
					iLocal_281 = 0;
				}
			}
			else
			{
				if (!iLocal_130[45] && !GlobalFunc_5172(&Local_819, 2))
				{
					if ((fVar19 > 2500f && fVar20 > 900f) || (fVar19 > 900f && fVar20 > 2500f))
					{
						GlobalFunc_164("LEM1_LEFTBOTH", 7500, 0);
						iLocal_130[45] = 1;
					}
				}
				func_152();
			}
		}
		if (iLocal_2035 == 6)
		{
			if (!iLocal_110)
			{
				if (SYSTEM::TIMERB() > 500)
				{
					OBJECT::_DOOR_CONTROL(joaat("v_ilev_rc_door1"), -603.8043f, -1620.301f, 33.1606f, 1, 0f, 0f, 1.1f);
					OBJECT::_DOOR_CONTROL(joaat("v_ilev_rc_door1"), -606.3953f, -1620.074f, 33.1606f, 1, 0f, 0f, -1.1f);
					iLocal_110 = 1;
				}
			}
			if (iLocal_403[iLocal_337] != 0)
			{
				if (Local_1199[0 /*25*/].f_5 > 0 && Var8.f_1 < -1622f)
				{
					TASK::REMOVE_COVER_POINT(iLocal_403[iLocal_337]);
					iLocal_403[iLocal_337] = 0;
				}
			}
			if (!iLocal_130[73])
			{
				if (!GlobalFunc_5172(&Local_819, 1))
				{
					if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_DOOR", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 8f, 4);
						iLocal_130[73] = 1;
					}
				}
			}
			else if (!iLocal_130[74])
			{
				if (!GlobalFunc_5172(&Local_819, 2))
				{
					GlobalFunc_164("LEM1_KILLSWAT", 7500, 0);
					iLocal_130[74] = 1;
					iLocal_302 = MISC::GET_GAME_TIMER();
				}
			}
			else if (Local_1123[0 /*25*/].f_5 == 0)
			{
				if (!iLocal_130[75])
				{
					if (!GlobalFunc_5172(&Local_819, 1))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_302) > 8500)
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_GOGO", 7, 0, 0, 0))
							{
								iLocal_130[75] = 1;
								iLocal_302 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else if (!iLocal_130[76])
				{
					if (!GlobalFunc_5172(&Local_819, 1))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_302) > 8500)
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_DOOR", 7, 0, 0, 0))
							{
								iLocal_130[76] = 1;
								iLocal_302 = 0;
							}
						}
					}
				}
			}
			if (Local_1123[0 /*25*/].f_5 > 0)
			{
				if (iLocal_318 == 0)
				{
					iLocal_318 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_318) > 500)
				{
					if (!iLocal_130[29])
					{
						iLocal_130[29] = 1;
					}
					else if (!iLocal_130[77])
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar21, 1);
							if ((iVar21 != joaat("weapon_unarmed") && WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iVar21, joaat("component_at_ar_flsh"))) && !WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iVar21, joaat("component_at_ar_flsh")))
							{
								GlobalFunc_Display_Help_Text("LEM1_FLAHELP");
								iLocal_130[77] = 1;
							}
							else
							{
								iLocal_130[77] = 1;
							}
						}
					}
					else if (!iLocal_130[78])
					{
						if (GlobalFunc_74("LEM1_FLAHELP"))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -588.0685f, -1619.129f, 32.0334f, -606.6573f, -1617.368f, 34.5106f, 5.5f, 0, 1, 0))
							{
								HUD::CLEAR_HELP(1);
							}
							else
							{
								WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar22, 1);
								if (iVar22 != joaat("weapon_unarmed") && WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iVar22, joaat("component_at_ar_flsh")))
								{
									if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iVar22, joaat("component_at_ar_flsh")))
									{
										if (PAD::IS_CONTROL_PRESSED(0, 54))
										{
											HUD::CLEAR_HELP(1);
										}
									}
								}
							}
						}
						else if (!GlobalFunc_230(1) || uLocal_100)
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && (MISC::GET_GAME_TIMER() - iLocal_318) > 4000)
							{
								iLocal_130[78] = 1;
							}
						}
						else
						{
							iLocal_130[78] = 1;
							iLocal_130[86] = 1;
							iLocal_130[87] = 1;
						}
					}
					else if (!iLocal_130[79])
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && (MISC::GET_GAME_TIMER() - iLocal_318) > 4000)
						{
							GlobalFunc_159("LEM1_ACCSTAT1", -1);
							iLocal_130[79] = 1;
						}
					}
					else if (!iLocal_130[80])
					{
						if (!Global_SAVE_DATA.SHOOTING_RANGE_SAVED_ARRAY[0 /*271*/].f_268)
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								GlobalFunc_159("LEM1_ACCSTAT2", -1);
								iLocal_130[80] = 1;
							}
						}
						else
						{
							iLocal_130[80] = 1;
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -568.24f, -1607.67f, 30.48f, -577.45f, -1606.81f, 25.76f, 16.75f, 0, 1, 0))
			{
				func_600(4, "ESCAPE_FROM_WAREHOUSE", 0, 0, 0, 1);
				iLocal_2035 = 7;
			}
		}
		if (iLocal_2035 == 7)
		{
			if (((!func_274(&Local_1552) || !func_274(&Local_1426)) && iLocal_130[81]) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenade"), 0))
			{
				if (!iLocal_130[82])
				{
					if (!PED::IS_PED_INJURED(Local_793))
					{
						if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_793, 1)) < 400f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -571.8954f, -1598.943f, 25.49722f, -573.733f, -1614.018f, 31.41052f, 6.75f, 0, 1, 0)) && !GlobalFunc_5172(&Local_819, 1))
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_RIOT", 7, 0, 0, 0))
							{
								iLocal_304 = MISC::GET_GAME_TIMER();
								iLocal_130[82] = 1;
							}
						}
					}
				}
				else
				{
					WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar23, 1);
					if (iLocal_306 == 0)
					{
						if (iVar23 == joaat("weapon_grenade"))
						{
							iLocal_305 = 0;
							iLocal_306++;
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_304) > 2000)
						{
							GlobalFunc_159("LEM1_GRGUNHELP", 10000);
							iLocal_305 = 0;
							iLocal_306++;
						}
					}
					else if (iLocal_306 == 1)
					{
						if (GlobalFunc_74("LEM1_GRGUNHELP"))
						{
							if (iLocal_305 == 0)
							{
								if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
								{
									if (PAD::IS_CONTROL_JUST_PRESSED(0, 58))
									{
										if (WEAPON::GET_WEAPONTYPE_GROUP(iVar23) != joaat("GROUP_HEAVY") && WEAPON::GET_WEAPONTYPE_GROUP(iVar23) != joaat("GROUP_SNIPER"))
										{
											iLocal_305 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_305) > 1500)
							{
								HUD::CLEAR_HELP(1);
							}
						}
						else if (iVar23 == joaat("weapon_grenade"))
						{
							if (iLocal_305 == 0)
							{
								iLocal_305 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_305) > 1500)
							{
								iLocal_305 = 0;
								iLocal_306++;
							}
						}
						else
						{
							GlobalFunc_159("LEM1_GRENHELP1", 10000);
							iLocal_305 = 0;
							iLocal_306++;
						}
					}
					else if (iLocal_306 == 2)
					{
						if (iVar23 == joaat("weapon_grenade"))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_305) > 1500)
							{
								GlobalFunc_159("LEM1_GRENHELP2", 10000);
								iLocal_306++;
							}
						}
						else
						{
							iLocal_305 = MISC::GET_GAME_TIMER();
						}
					}
					else if (iLocal_306 == 3)
					{
						if (iVar23 == joaat("weapon_grenade") && GlobalFunc_74("LEM1_GRENHELP2"))
						{
							if (PAD::IS_CONTROL_PRESSED(0, 24))
							{
								HUD::CLEAR_HELP(1);
							}
						}
					}
				}
			}
			if (!bLocal_85)
			{
				bLocal_85 = (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -592.5679f, -1630.368f, 28.23845f, -587.9066f, -1630.824f, 23.51186f, 2.5f, 0, 1, 0) || iLocal_60);
			}
			else
			{
				func_260();
				func_259();
				func_270(Var8, Var11, Var14, &Local_793, &Local_806);
				if (!iLocal_130[86])
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (func_268(PLAYER::PLAYER_PED_ID()) > 1)
						{
							GlobalFunc_159("LEM1_WEAPHELP1", -1);
							iLocal_130[86] = 1;
						}
					}
				}
				else if (!iLocal_130[87])
				{
					if (PAD::IS_CONTROL_PRESSED(0, 37))
					{
						if (GlobalFunc_74("LEM1_WEAPHELP1"))
						{
							HUD::CLEAR_HELP(1);
						}
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							GlobalFunc_159("LEM1_WEAPHELP2", -1);
							iLocal_130[87] = 1;
						}
					}
				}
				if (!GlobalFunc_63(24))
				{
					if (SYSTEM::VDIST2(Var8, -592.4f, -1641.9f, 20f) < 16f)
					{
						GlobalFunc_651(24);
					}
				}
			}
			if (bLocal_59)
			{
				if (!iLocal_60)
				{
					iLocal_60 = (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -602.8685f, -1699.255f, 22.65175f, -607.1429f, -1705.015f, 26.96269f, 11.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -630.7239f, -1678.827f, 23.90753f, -625.2783f, -1683.398f, 26.22428f, 3f, 0, 1, 0));
					if (iLocal_60)
					{
						PLAYER::SET_PLAYER_SPRINT(PLAYER::PLAYER_ID(), 1);
					}
				}
				if (!bLocal_62)
				{
					bLocal_62 = (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, -608.4293f, -1697.497f, 22.65175f, -599.1333f, -1704.504f, 26.06269f, 3.75f, 0, 1, 0) && !PED::IS_PED_RAGDOLL(Local_793));
				}
				if (!bLocal_63)
				{
					bLocal_63 = (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_806, -608.4293f, -1697.497f, 22.65175f, -599.1333f, -1704.504f, 26.06269f, 3.75f, 0, 1, 0) && !PED::IS_PED_RAGDOLL(Local_806));
				}
				if (!bLocal_65)
				{
					bLocal_65 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -588.1567f, -1682.519f, 18.00192f, -622.1935f, -1662.53f, 27.97556f, 62.75f, 0, 1, 0);
				}
				if (!bLocal_64)
				{
					bLocal_64 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, -588.1567f, -1682.519f, 18.00192f, -622.1935f, -1662.53f, 27.97556f, 62.75f, 0, 1, 0);
				}
				if (!bLocal_66)
				{
					bLocal_66 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_806, -588.1567f, -1682.519f, 18.00192f, -622.1935f, -1662.53f, 27.97556f, 62.75f, 0, 1, 0);
				}
				if (iLocal_60)
				{
					func_225();
					if (func_273(&Local_1780) >= 2)
					{
						if (iLocal_294 == 0)
						{
							iLocal_294 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_294) > 3000)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_793, 0);
						}
					}
				}
				if (!bLocal_84)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -592.3618f, -1642.958f, 20.43099f, -593.5129f, -1642.292f, 25.70805f, 1.25f, 0, 1, 0) || bLocal_65)
					{
						bLocal_84 = true;
					}
				}
			}
			if (bLocal_65 || iLocal_60)
			{
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			}
			if (bLocal_84 && !iLocal_60)
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 195, 1);
			}
			if (!iLocal_130[88])
			{
				if (func_274(&Local_1552) && func_274(&Local_1426))
				{
					if (iLocal_319 == 0)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						func_261(10);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "LAMAR1_FAKE_POLICE_SIREN2_MASTER", PLAYER::PLAYER_PED_ID(), 0, 0, 0);
						AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", 1);
						iLocal_319 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_319) > 4000)
					{
						if (fVar19 < 625f)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_COPSARR", 7, 0, 0, 0))
								{
									iLocal_130[88] = 1;
								}
							}
							else if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SIREN", 7, 0, 0, 0))
							{
								iLocal_130[88] = 1;
							}
						}
					}
				}
			}
			if (!iLocal_87)
			{
				if (bLocal_84)
				{
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_LAMAR_1_01", 0);
					iLocal_87 = 1;
				}
			}
		}
		switch (iLocal_278)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -607.4754f, -1626.929f, 26.01083f, -604.2385f, -1627.289f, 28.51083f, 1.5f, 0, 1, 0))
				{
					MISC::CLEAR_AREA_OF_OBJECTS(-580.4233f, -1631.758f, 18.6651f, 5f, 0);
					MISC::CLEAR_AREA(-592.8243f, -1642.23f, 18.9575f, 8f, 1, 0, 0, 0);
					iLocal_278++;
				}
				break;
			
			case 1:
				if (func_273(&Local_1780) < 2)
				{
					HUD::CLEAR_PRINTS();
					iLocal_278++;
				}
				break;
			
			case 2:
				if (!bLocal_65 && !iLocal_60)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_399))
					{
						uLocal_399 = GlobalFunc_5104(-593.2421f, -1643.441f, 25.1788f, 0);
					}
					if (!GlobalFunc_5172(&Local_819, 2))
					{
						if (!iLocal_130[34])
						{
							GlobalFunc_164("LEM1_GOLAD", 7500, 0);
							iLocal_130[34] = 1;
						}
					}
				}
				else
				{
					HUD::REMOVE_BLIP(&uLocal_399);
					HUD::CLEAR_PRINTS();
					iLocal_278++;
				}
				break;
			
			case 3:
				if (!iLocal_60)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_399))
					{
						if (Var8.f_2 < 21.7459f)
						{
							uLocal_399 = GlobalFunc_5104(-603.4348f, -1696.697f, 25.0436f, 0);
						}
					}
					if (Var8.f_2 > 21.7459f)
					{
						if (!iLocal_130[90])
						{
							if (!GlobalFunc_5172(&Local_819, 2) && (!bLocal_64 || (bLocal_64 && iLocal_130[91])))
							{
								iLocal_130[90] = 1;
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_399))
					{
						AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", 0);
						HUD::REMOVE_BLIP(&uLocal_399);
					}
					if (bLocal_62)
					{
						if (bLocal_63)
						{
							if (iLocal_314 < 100)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_LANDED");
								iLocal_314 = 100;
							}
							iLocal_2036 = 2;
						}
						else if (!iLocal_130[92])
						{
							GlobalFunc_164("LEM1_WAITSTRET", 7500, 0);
							iLocal_130[92] = 1;
						}
					}
					else if (bLocal_63)
					{
						if (!iLocal_130[93])
						{
							GlobalFunc_164("LEM1_WAITLEMAR", 7500, 0);
							iLocal_130[93] = 1;
						}
					}
					else if (!iLocal_130[94])
					{
						GlobalFunc_164("LEM1_WAITBOTH", 7500, 0);
						iLocal_130[94] = 1;
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_ESCAPE_THE_JUNKYARD"))
					{
						AUDIO::STOP_AUDIO_SCENE("LAMAR_1_ESCAPE_THE_JUNKYARD");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_STEAL_CAR"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_STEAL_CAR");
					}
				}
				break;
		}
		if (iLocal_296 != 0 && (MISC::GET_GAME_TIMER() - iLocal_296) < 26000)
		{
			STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_12");
			if (func_274(&Local_1325))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, -560.454f, -1600.034f, 25.01095f, -560.7523f, -1604.482f, 28.01095f, 3.75f, 0, 1, 0))
				{
					if ((!iLocal_130[95] && !GlobalFunc_5172(&Local_819, 1)) && GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SMOKE2", 7, 0, 0, 0))
					{
						iLocal_130[95] = 1;
					}
					if ((!iLocal_70 && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_12")) && !PED::IS_PED_INJURED(Local_793))
					{
						if (TASK::IS_PED_RUNNING(Local_793))
						{
							TASK::TASK_PLAY_ANIM(Local_793, "misslamar1lam_1_ig_12", "run_lamar", 4f, -4f, -1, 48, 0, 0, 0, 0);
						}
						else if (TASK::IS_PED_WALKING(Local_793))
						{
							TASK::TASK_PLAY_ANIM(Local_793, "misslamar1lam_1_ig_12", "walk_lamar", 4f, -4f, -1, 48, 0, 0, 0, 0);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(Local_793, "misslamar1lam_1_ig_12", "idle_lamar", 4f, -4f, -1, 48, 0, 0, 0, 0);
						}
						iLocal_70 = 1;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_806, -560.454f, -1600.034f, 25.01095f, -560.7523f, -1604.482f, 28.01095f, 3.75f, 0, 1, 0))
				{
					if ((!iLocal_130[95] && !GlobalFunc_5172(&Local_819, 1)) && GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SMOKE3", 7, 0, 0, 0))
					{
						iLocal_130[95] = 1;
					}
					if ((!iLocal_71 && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_12")) && !PED::IS_PED_INJURED(Local_806))
					{
						if (TASK::IS_PED_RUNNING(Local_806))
						{
							TASK::TASK_PLAY_ANIM(Local_806, "misslamar1lam_1_ig_12", "run_stretch", 4f, -4f, -1, 48, 0, 0, 0, 0);
						}
						else if (TASK::IS_PED_WALKING(Local_806))
						{
							TASK::TASK_PLAY_ANIM(Local_806, "misslamar1lam_1_ig_12", "walk_stretch", 4f, -4f, -1, 48, 0, 0, 0, 0);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(Local_806, "misslamar1lam_1_ig_12", "idle_stretch", 4f, -4f, -1, 48, 0, 0, 0, 0);
						}
						iLocal_71 = 1;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -560.454f, -1600.034f, 25.01095f, -560.7523f, -1604.482f, 28.01095f, 3.75f, 0, 1, 0))
				{
					if ((!iLocal_130[95] && !GlobalFunc_5172(&Local_819, 1)) && GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SMOKE4", 7, 0, 0, 0))
					{
						iLocal_130[95] = 1;
					}
					if (!iLocal_72 && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_12"))
					{
						if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misslamar1lam_1_ig_12", "run_franklin", 4f, -4f, -1, 48, 0, 0, 0, 0);
						}
						else if (TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misslamar1lam_1_ig_12", "walk_franklin", 4f, -4f, -1, 48, 0, 0, 0, 0);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misslamar1lam_1_ig_12", "idle_franklin", 4f, -4f, -1, 48, 0, 0, 0, 0);
						}
						iLocal_72 = 1;
					}
				}
			}
		}
		if (!GlobalFunc_5172(&Local_819, 1))
		{
			if (iLocal_2035 == 6)
			{
				if (!iLocal_130[4])
				{
					if (Local_1123[0 /*25*/].f_5 > 0)
					{
						if (!iLocal_130[5])
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_FIGHT1", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(4f, 5f, 4);
								iLocal_130[4] = 1;
							}
						}
						else
						{
							iLocal_130[5] = 1;
						}
					}
				}
				else
				{
					if (!iLocal_130[5])
					{
						if (!iLocal_130[13] && func_274(&Local_1754))
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_WIN2", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
								iLocal_130[13] = 1;
							}
						}
						if (!iLocal_130[96] && func_274(&Local_1325))
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_GOGOS", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
								iLocal_130[96] = 1;
							}
						}
					}
					if (!iLocal_130[97])
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -614.3666f, -1619.024f, 32.01062f, -615.1086f, -1618.954f, 34.26062f, 2.5f, 0, 1, 0))
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_TRIES", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
								iLocal_130[97] = 1;
							}
						}
					}
					if (!iLocal_130[98])
					{
						iVar24 = (func_273(&Local_1123) + func_273(&Local_1021));
						if (iVar24 == 1)
						{
							if (!PED::IS_PED_INJURED(Local_793))
							{
								if (fVar19 < 400f)
								{
									if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_1GUY", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
										iLocal_130[98] = 1;
									}
								}
							}
						}
						else if (iVar24 == 0)
						{
							iLocal_130[98] = 1;
						}
					}
					if (!iLocal_130[99])
					{
						if (func_274(&Local_1123) && func_274(&Local_1021))
						{
							if (!PED::IS_PED_INJURED(Local_806) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_806, -613.5451f, -1628.705f, 32.01062f, -613.0481f, -1622.706f, 34.26847f, 3f, 0, 1, 0))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -626.3481f, -1629.436f, 32.01056f, -604.701f, -1630.901f, 35.07471f, 8.25f, 0, 1, 0) && fVar20 < 400f)
								{
									if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_NOLIFT", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
										iLocal_130[99] = 1;
									}
								}
							}
							else
							{
								iLocal_130[99] = 1;
							}
						}
					}
				}
			}
			if (iLocal_2035 == 7)
			{
				if ((((!iLocal_130[81] && Local_1426[0 /*25*/].f_5 > 0) && fVar19 < 900f) && fVar17 < 5f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -571.8954f, -1598.943f, 25.49722f, -573.733f, -1614.018f, 31.41052f, 6.75f, 0, 1, 0))
				{
					if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_WAIT1", 8, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
						iLocal_130[81] = 1;
					}
				}
				if (!iLocal_130[100])
				{
					if (iLocal_330 == 0)
					{
						if (Local_420[0 /*9*/].f_1 > 0.1f)
						{
							iLocal_330 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_330) > 4000 && (MISC::GET_GAME_TIMER() - iLocal_330) < 15000)
					{
						if (fVar20 < 900f && fVar18 < 5f)
						{
							iVar25 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
							if (iVar25 == 0)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_FIRE", 8, 0, 0, 0))
								{
									iLocal_130[100] = 1;
								}
							}
							else if (iVar25 == 1)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_FIRE2", 8, 0, 0, 0))
								{
									iLocal_130[100] = 1;
								}
							}
							else if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_FIRE3", 8, 0, 0, 0))
							{
								iLocal_130[100] = 1;
							}
						}
					}
				}
				if (!iLocal_130[101])
				{
					iVar26 = (func_273(&Local_1552) + func_273(&Local_1426));
					if (iVar26 == 2)
					{
						if (iLocal_310 == 0)
						{
							iLocal_310 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_310) > 1000)
						{
							if (fVar19 < 400f && fVar17 < 5f)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_LGUY", 7, 0, 0, 0))
								{
									iLocal_130[101] = 1;
								}
							}
						}
					}
					else if (iVar26 < 2)
					{
						iLocal_130[101] = 1;
					}
					else
					{
						iLocal_310 = 0;
					}
				}
				if ((!iLocal_130[102] && iLocal_130[82]) && iLocal_68)
				{
					if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_RIOT2", 7, 0, 0, 0))
					{
						iLocal_130[102] = 1;
					}
				}
				if (!iLocal_130[22] && fVar19 < 900f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -593.0045f, -1630.942f, 26.01083f, -607.7571f, -1629.696f, 28.26083f, 4f, 0, 1, 0))
					{
						if (CAM::IS_SPHERE_VISIBLE(-593.0891f, -1630.25f, 27.3027f, 1f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -593.0774f, -1630.832f, 26.01095f, -604.3877f, -1630.008f, 28.51095f, 4f, 0, 1, 0))
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_EXIT", 7, 0, 0, 0))
							{
								iLocal_130[22] = 1;
							}
						}
					}
				}
				if (!iLocal_130[103])
				{
					if (Local_1780[0 /*25*/].f_5 > 0 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_776, 0))
					{
						if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_776))
						{
							if (iLocal_333 == 0)
							{
								iLocal_333 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_333) > 800)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_EXITH", 7, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
									iLocal_130[103] = 1;
								}
							}
						}
					}
				}
				else if (!iLocal_130[32])
				{
					if (func_273(&Local_1780) >= 2)
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_BRIDGE", 7, 0, 0, 0))
						{
							iLocal_130[32] = 1;
						}
					}
					else
					{
						iLocal_130[32] = 1;
					}
				}
				if (!bLocal_62 && !iLocal_60)
				{
					if (((!iLocal_130[91] && (bLocal_65 || Local_793.f_3 == 100)) && bLocal_64) && func_273(&Local_1780) < 2)
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_ROOF2", 7, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
							iLocal_130[91] = 1;
						}
					}
					if ((!iLocal_130[104] && fVar19 < 400f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, -602.1941f, -1697.792f, 24.04359f, -599.153f, -1692.315f, 27.31071f, 7f, 0, 1, 0))
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_ROOF3", 7, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
							iLocal_130[104] = 1;
						}
					}
				}
				if ((bLocal_62 && bLocal_63) && !iLocal_60)
				{
					if (fVar19 < 625f)
					{
						if (!iLocal_130[105])
						{
							if (iLocal_326 < 4)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_KEEPUP", 7, 0, 0, 0))
								{
									iLocal_130[105] = 1;
									iLocal_326++;
								}
							}
							else
							{
								iLocal_130[105] = 1;
							}
						}
						else if (!iLocal_130[106])
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_KEEPUPS", 7, 0, 0, 0))
							{
								iLocal_130[106] = 1;
							}
						}
					}
					if (!bLocal_121)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_341) > 60000)
						{
							MISC::SET_FAKE_WANTED_LEVEL(0);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
							PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							PLAYER::SET_POLICE_RADAR_BLIPS(1);
							PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
							MISC::ENABLE_DISPATCH_SERVICE(3, 1);
							MISC::ENABLE_DISPATCH_SERVICE(1, 1);
							MISC::ENABLE_DISPATCH_SERVICE(8, 1);
							MISC::ENABLE_DISPATCH_SERVICE(2, 1);
							MISC::ENABLE_DISPATCH_SERVICE(6, 1);
							MISC::ENABLE_DISPATCH_SERVICE(5, 1);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, joaat("COP"));
							bLocal_121 = true;
						}
					}
					else
					{
						PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
						PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
						if (iLocal_308 == 100)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_341) > 90000)
							{
								if (!PED::IS_PED_INJURED(Local_793) && TASK::GET_SCRIPT_TASK_STATUS(Local_793, -1442466670) != 1)
								{
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_793, 200f, 0);
								}
								if (!PED::IS_PED_INJURED(Local_806) && TASK::GET_SCRIPT_TASK_STATUS(Local_806, -1442466670) != 1)
								{
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_806, 200f, 0);
								}
							}
						}
					}
				}
				else
				{
					iLocal_341 = MISC::GET_GAME_TIMER();
				}
			}
			if ((((((MISC::GET_GAME_TIMER() - iLocal_285) > 0 || (MISC::GET_GAME_TIMER() - iLocal_287) > 0) && iLocal_130[4]) && !PED::IS_PED_INJURED(Local_793)) && !PED::IS_PED_INJURED(Local_806)) && !bLocal_121)
			{
				if (!PED::IS_PED_RAGDOLL(Local_793) && (((PED::IS_PED_IN_COMBAT(Local_793, 0) || PED::IS_PED_SHOOTING(Local_793)) || PED::IS_PED_IN_COMBAT(Local_806, 0)) || PED::IS_PED_SHOOTING(Local_806)))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_288) > 0)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_285) > 0 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && fVar19 < 625f)
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_GENCOM", 7, 0, 0, 0))
							{
								iLocal_285 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 11000));
							}
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_286) > 0 && fVar19 < 625f)
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_FRAK", 7, 0, 0, 0))
							{
								iLocal_286 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(14000, 17000));
							}
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_287) > 0)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								if (((PED::IS_PED_IN_COMBAT(Local_793, 0) || PED::IS_PED_SHOOTING(Local_793)) && fVar19 < 625f) && fVar17 < 5f)
								{
									if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_GENL2", 7, 0, 0, 0))
									{
										iLocal_287 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 11000));
									}
								}
							}
							else if (((PED::IS_PED_IN_COMBAT(Local_806, 0) || PED::IS_PED_SHOOTING(Local_806)) && fVar20 < 625f) && fVar18 < 5f)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_GENSTR", 7, 0, 0, 0))
								{
									iLocal_287 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 11000));
								}
							}
						}
						iLocal_288 = 0;
					}
				}
				else
				{
					iLocal_288 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		switch (iLocal_328)
		{
			case 0:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_START"))
				{
					AUDIO::START_AUDIO_SCENE("LAMAR_1_SHOOTOUT_START");
				}
				iLocal_328++;
				break;
			
			case 1:
				if (func_274(&Local_1072))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -565.4863f, -1631.969f, 32.09035f, -565.017f, -1627.817f, 34.7774f, 1.75f, 0, 1, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_START"))
						{
							AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_START");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_SAVE_LAMAR"))
						{
							AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_SAVE_LAMAR");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_STAIRWELL"))
						{
							AUDIO::START_AUDIO_SCENE("LAMAR_1_SHOOTOUT_STAIRWELL");
						}
						iLocal_328 = 50;
					}
				}
				break;
			
			case 50:
				if (iLocal_2035 == 7)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_STAIRWELL"))
					{
						AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_STAIRWELL");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_WAREHOUSE"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_SHOOTOUT_WAREHOUSE");
					}
					iLocal_328++;
				}
				break;
			
			case 51:
				if (func_274(&Local_1552) && func_274(&Local_1426))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_WAREHOUSE"))
					{
						AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_WAREHOUSE");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_GET_OUTSIDE"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_SHOOTOUT_GET_OUTSIDE");
					}
					iLocal_328++;
				}
				break;
			
			case 52:
				if (Local_1780[0 /*25*/].f_5 > 0)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_GET_OUTSIDE"))
					{
						AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_GET_OUTSIDE");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_ESCAPE_FIGHT_HELI"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_ESCAPE_FIGHT_HELI");
					}
					iLocal_328++;
				}
				break;
			
			case 53:
				if (func_273(&Local_1780) < 2)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_ESCAPE_FIGHT_HELI"))
					{
						AUDIO::STOP_AUDIO_SCENE("LAMAR_1_ESCAPE_FIGHT_HELI");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_ESCAPE_THE_JUNKYARD"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_ESCAPE_THE_JUNKYARD");
					}
					iLocal_328++;
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_761))
		{
			if (SYSTEM::VDIST2(Var8, ENTITY::GET_ENTITY_COORDS(iLocal_761, 0)) > 2500f)
			{
				func_258(&iLocal_761, 0);
			}
		}
	}
	if (iLocal_2036 == 2)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		func_207();
		CLOCK::PAUSE_CLOCK(0);
		GlobalFunc_2206(&iLocal_740, 0);
		GlobalFunc_2206(&iLocal_741, 0);
		GlobalFunc_2206(&iLocal_745, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2041);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2042);
		func_264();
		func_150(&Local_1780, 0);
		func_257(&iLocal_776, 0);
		GlobalFunc_200(&Local_844, 3);
		GlobalFunc_200(&Local_844, 4);
		GlobalFunc_200(&Local_844, 8);
		func_278(0);
		if (iLocal_737 != 0)
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_737))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_737);
				iLocal_737 = 0;
			}
		}
		iVar0 = 0;
		while (iVar0 < Local_420)
		{
			if (Local_420[iVar0 /*9*/] != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_420[iVar0 /*9*/], 0);
				Local_420[iVar0 /*9*/] = 0;
			}
			Local_420[iVar0 /*9*/].f_1 = 0f;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_556)
		{
			if (Local_556[iVar0 /*9*/] != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_556[iVar0 /*9*/], 0);
				Local_556[iVar0 /*9*/] = 0;
			}
			Local_556[iVar0 /*9*/].f_1 = 0f;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_767)
		{
			if (iLocal_767[iVar0] != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_767[iVar0], 0);
				iLocal_767[iVar0] = 0;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_746)
		{
			GlobalFunc_2206(&(iLocal_746[iVar0]), 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_751)
		{
			GlobalFunc_2206(&(iLocal_751[iVar0]), 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_770)
		{
			if (iLocal_770[iVar0] != 0)
			{
				PHYSICS::DELETE_ROPE(&(iLocal_770[iVar0]));
				iLocal_770[iVar0] = 0;
			}
			iVar0++;
		}
		func_258(&iLocal_761, 0);
		STREAMING::REMOVE_PTFX_ASSET();
		WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_pumpshotgun"));
		WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_smg"));
		TASK::REMOVE_COVER_POINT(Local_793.f_2);
		TASK::REMOVE_COVER_POINT(Local_806.f_2);
		TASK::REMOVE_COVER_POINT(iLocal_401);
		TASK::REMOVE_COVER_POINT(iLocal_402);
		TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Lemar1");
		TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Lemar2");
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		iLocal_2036 = 0;
		iLocal_2035 = 8;
	}
	if (iLocal_2036 == 3)
	{
		if (iLocal_2035 == 6)
		{
			func_645(7, 0);
		}
		else
		{
			func_645(8, 0);
		}
	}
}


void func_264()//Position - 0x27FAF
{
	if (!PED::IS_PED_INJURED(Local_793))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_793, -8f, 1);
	}
	if (!PED::IS_PED_INJURED(Local_806))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_806, -8f, 1);
	}
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_19");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_18");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_17");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_16");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_15");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_14");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_13");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_12");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_11");
	STREAMING::REMOVE_ANIM_DICT("misslamar1ig_9");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_23");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_23_b");
	STREAMING::REMOVE_ANIM_DICT("misslamar1ig_6");
	STREAMING::REMOVE_ANIM_DICT("misslamar1ig_5");
	STREAMING::REMOVE_ANIM_DICT("misslamar1ig_4");
	STREAMING::REMOVE_ANIM_DICT("misslamar1ig_2_p1");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_26_alt1");
	STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_26");
	STREAMING::REMOVE_ANIM_DICT("misslamar1ig_20");
	STREAMING::REMOVE_CLIP_SET("move_ped_strafing");
}




int func_268(int iParam0)//Position - 0x28149
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar1 = 0;
		while (iVar1 <= (44 - 1))
		{
			iVar2 = GlobalFunc_223(iVar1);
			if (iVar2 != 0)
			{
				if (WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar2) != 0 && WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar2) != joaat("weapon_unarmed"))
				{
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}


void func_270(struct<3> Param0, struct<3> Param3, struct<3> Param6, int iParam9, int iParam10)//Position - 0x2841D
{
	if (!PED::IS_PED_INJURED(*iParam9) && !PED::IS_PED_INJURED(*iParam10))
	{
		if (SYSTEM::VDIST2(Param0, -593f, -1642.5f, 19.7f) < 25f && (SYSTEM::VDIST2(Param3, -593f, -1642.5f, 19.7f) < 25f || SYSTEM::VDIST2(Param6, -593f, -1642.5f, 19.7f) < 25f))
		{
			if (((Param3.f_2 < 22f && Param0.f_2 < Param3.f_2) && SYSTEM::VDIST2(Param3, -593f, -1642.5f, 21.5f) < SYSTEM::VDIST2(Param0, -593f, -1642.5f, 21.5f)) || ((Param6.f_2 < 22f && Param0.f_2 < Param6.f_2) && SYSTEM::VDIST2(Param6, -593f, -1642.5f, 21.5f) < SYSTEM::VDIST2(Param0, -593f, -1642.5f, 21.5f)))
			{
				TASK::SET_PED_PATH_CAN_USE_LADDERS(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, 1);
			}
			else
			{
				TASK::SET_PED_PATH_CAN_USE_LADDERS(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, 0);
			}
		}
		else
		{
			TASK::SET_PED_PATH_CAN_USE_LADDERS(PLAYER::PLAYER_PED_ID(), 1);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, 0);
		}
	}
}



int func_273(int iParam0)//Position - 0x285C7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if ((iParam0[iVar1 /*25*/])->f_2)
		{
			if (!PED::IS_PED_INJURED((*iParam0)[iVar1 /*25*/]))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_274(int iParam0)//Position - 0x28613
{
	int iVar0;
	
	if ((iParam0[0 /*25*/])->f_2)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*25*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_275(int iParam0, int iParam1, int iParam2)//Position - 0x28656
{
	struct<3> Var0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	float fVar14;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	bVar3 = FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID());
	bVar4 = PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID());
	bVar5 = TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID());
	STREAMING::REQUEST_PTFX_ASSET();
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		iVar6 = 0;
		iVar7 = *iParam0;
		iVar8 = 0;
		if (*iParam1 >= (iVar7 - 1))
		{
			*iParam1 = 0;
		}
		fVar9 = 0f;
		iVar6 = 0;
		while (iVar6 < *iParam0)
		{
			if (iVar6 >= *iParam1 && iVar8 < 4)
			{
				if ((iParam0[iVar6 /*9*/])->f_1 == 0f)
				{
					if ((iParam0[(iParam0[iVar6 /*9*/])->f_4 /*9*/])->f_1 > (iParam0[iVar6 /*9*/])->f_2)
					{
						if ((iParam0[iVar6 /*9*/])->f_8)
						{
							(iParam0[iVar6 /*9*/])->f_1 = 0.01f;
						}
						else
						{
							(iParam0[iVar6 /*9*/])->f_1 = 0.1f;
						}
					}
				}
				else if ((*iParam0)[iVar6 /*9*/] == 0)
				{
					if ((iParam0[iVar6 /*9*/])->f_8)
					{
						(*iParam0)[iVar6 /*9*/] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_lamar1_fire_spread1", (iParam0[iVar6 /*9*/])->f_5, 0f, 0f, 0f, (iParam0[iVar6 /*9*/])->f_1, 0, 0, 0, 0);
					}
					else
					{
						(*iParam0)[iVar6 /*9*/] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_lamar1_fire_spread", (iParam0[iVar6 /*9*/])->f_5, 0f, 0f, 0f, (iParam0[iVar6 /*9*/])->f_1, 0, 0, 0, 0);
					}
				}
				else
				{
					if ((iParam0[iVar6 /*9*/])->f_1 < 1.8f)
					{
						(iParam0[iVar6 /*9*/])->f_1 = GlobalFunc_253(((iParam0[iVar6 /*9*/])->f_1 + (0.9f * SYSTEM::TIMESTEP())), 0f, 1.8f);
						GRAPHICS::SET_PARTICLE_FX_LOOPED_SCALE((*iParam0)[iVar6 /*9*/], (iParam0[iVar6 /*9*/])->f_1);
					}
					if (((((iParam0[iVar6 /*9*/])->f_1 > 0.4f && ((SYSTEM::VDIST2((iParam0[iVar6 /*9*/])->f_5, Var0) < 2f && (iParam0[iVar6 /*9*/])->f_1 > 0.9f) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), (iParam0[iVar6 /*9*/])->f_5 + Vector(1f, 0f, 0f), 0.75f, 0.75f, 1f, 0, 1, 0))) && !bVar3) && !bVar4) && !bVar5)
					{
						FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
						iLocal_284 = MISC::GET_GAME_TIMER();
					}
				}
				*iParam1 = iVar6 + 1;
				iVar8++;
			}
			fVar9 = (fVar9 + (iParam0[iVar6 /*9*/])->f_1);
			iVar6++;
		}
		fVar10 = (fVar9 / (SYSTEM::TO_FLOAT(*iParam0) * 1.8f));
		Var11 = { -578.854f, -1601.34f, 27.826f };
		if (iParam2 != 0)
		{
			Var11 = { -590.665f, -1603.005f, 27.95f };
		}
		if (iLocal_767[iParam2] == 0)
		{
			if (fVar10 > 0.25f)
			{
				iLocal_767[iParam2] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_env_agency3b_smoke", Var11, 0f, 0f, 0f, 1f, 0, 0, 0, 0);
			}
		}
		else
		{
			fVar14 = ((fVar10 - 0.25f) / (1f - 0.25f));
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_767[iParam2], "smoke", (1f - fVar14), 0);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_767[iParam2], "cinder", (1f - fVar14), 0);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_767[iParam2], "debris", (1f - fVar14), 0);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_767[iParam2], "speed", 1f, 0);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_767[iParam2], "smoke_strength", 1f, 0);
		}
	}
	if (iLocal_284 != 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_284) > 2000 && bVar3)
		{
			FIRE::STOP_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
			iLocal_284 = 0;
		}
	}
}


void func_277()//Position - 0x289B4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_130)
	{
		iLocal_130[iVar0] = 0;
		iVar0++;
	}
}

void func_278(bool bParam0)//Position - 0x289D9
{
	int iVar0;
	
	if (bParam0)
	{
		if (iLocal_403[0] == 0)
		{
			iLocal_403[0] = TASK::ADD_COVER_POINT(-611.5913f, -1628.093f, 32.0105f, 276.8619f, 2, 0, 1, 1);
		}
		if (iLocal_403[1] == 0)
		{
			iLocal_403[1] = TASK::ADD_COVER_POINT(-613.2361f, -1633.884f, 32.0105f, 276.5077f, 2, 0, 1, 1);
		}
		if (iLocal_403[2] == 0)
		{
			iLocal_403[2] = TASK::ADD_COVER_POINT(-607.7554f, -1634.366f, 32.0303f, 86.4219f, 2, 0, 1, 1);
		}
		if (iLocal_403[3] == 0)
		{
			iLocal_403[3] = TASK::ADD_COVER_POINT(-573.81f, -1611.331f, 26.0108f, 103.7234f, 2, 0, 1, 1);
		}
		if (iLocal_403[4] == 0)
		{
			iLocal_403[4] = TASK::ADD_COVER_POINT(-589.1723f, -1621.676f, 32.0106f, 262.9417f, 0, 2, 3, 1);
			iLocal_337 = 4;
		}
		if (iLocal_403[5] == 0)
		{
			iLocal_403[5] = TASK::ADD_COVER_POINT(-602.7028f, -1607.086f, 26.0108f, 268.2972f, 2, 0, 1, 1);
		}
		if (iLocal_403[6] == 0)
		{
			iLocal_403[6] = TASK::ADD_COVER_POINT(-598.4998f, -1607.204f, 26.0108f, 81.2509f, 2, 0, 1, 1);
		}
		if (iLocal_403[7] == 0)
		{
			iLocal_403[7] = TASK::ADD_COVER_POINT(-607.9058f, -1627.806f, 32.0106f, 1.1009f, 0, 2, 3, 1);
		}
		if (iLocal_403[8] == 0)
		{
			iLocal_403[8] = TASK::ADD_COVER_POINT(-575.5695f, -1599.438f, 27.1608f, 83.5327f, 2, 0, 1, 1);
		}
		if (iLocal_403[9] == 0)
		{
			iLocal_403[9] = TASK::ADD_COVER_POINT(-587.3282f, -1626.755f, 32.0106f, 275.1829f, 2, 0, 1, 1);
		}
		if (iLocal_403[10] == 0)
		{
			iLocal_403[10] = TASK::ADD_COVER_POINT(-587.3992f, -1625.977f, 32.053f, 275.1821f, 2, 0, 1, 1);
		}
		if (iLocal_403[11] == 0)
		{
			iLocal_403[11] = TASK::ADD_COVER_POINT(-576.1132f, -1603.067f, 26.1021f, 99.7303f, 1, 0, 1, 1);
		}
		if (iLocal_403[12] == 0)
		{
			iLocal_403[12] = TASK::ADD_COVER_POINT(-576.2527f, -1605.175f, 26.0108f, 90.3217f, 1, 0, 1, 1);
		}
		if (iLocal_403[13] == 0)
		{
			iLocal_403[13] = TASK::ADD_COVER_POINT(-562.7417f, -1616.397f, 26.011f, 356.9735f, 0, 0, 1, 1);
		}
		if (iLocal_403[14] == 0)
		{
			iLocal_403[14] = TASK::ADD_COVER_POINT(-560.3149f, -1611.988f, 26.011f, 356.9735f, 1, 0, 1, 1);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iLocal_403)
		{
			if (iLocal_403[iVar0] != 0)
			{
				TASK::REMOVE_COVER_POINT(iLocal_403[iVar0]);
				iLocal_403[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_279()//Position - 0x28CC1
{
	int iVar0;
	struct<3> Var1[4];
	int iVar14;
	
	iVar0 = 0;
	Var1[0 /*3*/] = { -572.1191f, -1609.382f, 32.89491f };
	Var1[1 /*3*/] = { -579.1962f, -1603.945f, 32.89491f };
	Var1[2 /*3*/] = { -594.8319f, -1607.378f, 32.89491f };
	Var1[3 /*3*/] = { -602.4001f, -1609.924f, 32.33266f };
	if (!PHYSICS::ROPE_ARE_TEXTURES_LOADED())
	{
		PHYSICS::ROPE_LOAD_TEXTURES();
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_746[0]))
	{
		STREAMING::REQUEST_MODEL(iLocal_2058);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_2058) && func_280(0))
		{
			iLocal_746[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_2058, -572.1191f, -1609.382f, 30.29491f, 1, 1, 0);
			iLocal_746[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_2058, -579.1962f, -1603.945f, 30.29491f, 1, 1, 0);
			iLocal_746[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_2058, -594.8319f, -1607.378f, 30.29491f, 1, 1, 0);
			iLocal_746[3] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_2058, -602.4001f, -1609.924f, 29.73266f, 1, 1, 0);
			iLocal_751[0] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Var1[0 /*3*/], 1, 1, 0);
			iLocal_751[1] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Var1[1 /*3*/], 1, 1, 0);
			iLocal_751[2] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Var1[2 /*3*/], 1, 1, 0);
			iLocal_751[3] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Var1[3 /*3*/], 1, 1, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_746)
			{
				OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iLocal_746[iVar0], 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_746[iVar0], 0);
				ENTITY::SET_ENTITY_DYNAMIC(iLocal_746[iVar0], 1);
				PHYSICS::ACTIVATE_PHYSICS(iLocal_746[iVar0]);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_746[iVar0], 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_751[iVar0], 1);
				iLocal_125[iVar0] = 0;
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2058);
		}
	}
	else if (!PHYSICS::DOES_ROPE_EXIST(&(iLocal_770[0])))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_770)
		{
			iLocal_770[iVar0] = PHYSICS::ADD_ROPE(Var1[iVar0 /*3*/], 0f, 90f, 0f, fLocal_276, 3, fLocal_276, fLocal_276, 1056964608, 0, 0, 1, 1065353216, 0, 0);
			PHYSICS::PIN_ROPE_VERTEX(iLocal_770[iVar0], (PHYSICS::GET_ROPE_VERTEX_COUNT(iLocal_770[iVar0]) - 1), Var1[iVar0 /*3*/]);
			iLocal_125[iVar0] = 0;
			iVar0++;
		}
	}
	else
	{
		iVar14 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_746)
		{
			if (!iLocal_125[iVar0])
			{
				if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_746[iVar0]) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_751[iVar0]))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_746[iVar0], Var1[iVar0 /*3*/] + Vector(-fLocal_276, 0f, 0f), 0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_746[iVar0], 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(iLocal_770[iVar0], iLocal_751[iVar0], iLocal_746[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_751[iVar0], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_746[iVar0], 0f, 0f, -0.1f), fLocal_276, 0, 0, 0, 0);
					iLocal_125[iVar0] = 1;
				}
				iVar14++;
			}
			iVar0++;
		}
		if (iVar14 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_280(bool bParam0)//Position - 0x28FEC
{
	if (bParam0)
	{
		ENTITY::REMOVE_MODEL_HIDE(-572.1191f, -1609.382f, 30.29491f, 10f, iLocal_2059, 1);
		ENTITY::REMOVE_MODEL_HIDE(-579.1962f, -1603.945f, 30.29491f, 10f, iLocal_2059, 1);
		ENTITY::REMOVE_MODEL_HIDE(-594.8319f, -1607.378f, 30.29491f, 10f, iLocal_2059, 1);
		ENTITY::REMOVE_MODEL_HIDE(-602.4001f, -1609.924f, 29.73266f, 10f, iLocal_2059, 1);
		return 1;
	}
	else
	{
		ENTITY::CREATE_MODEL_HIDE(-572.1191f, -1609.382f, 30.29491f, 10f, iLocal_2059, 1);
		ENTITY::CREATE_MODEL_HIDE(-579.1962f, -1603.945f, 30.29491f, 10f, iLocal_2059, 1);
		ENTITY::CREATE_MODEL_HIDE(-594.8319f, -1607.378f, 30.29491f, 10f, iLocal_2059, 1);
		ENTITY::CREATE_MODEL_HIDE(-602.4001f, -1609.924f, 29.73266f, 10f, iLocal_2059, 1);
		return 1;
	}
	return 0;
}


void func_282()//Position - 0x29124
{
	int iVar0;
	
	Local_556[0 /*9*/].f_5 = { -583.4873f, -1601.044f, 26.701f };
	Local_556[0 /*9*/].f_4 = 0;
	Local_556[0 /*9*/].f_2 = 0.1f;
	Local_556[0 /*9*/].f_8 = 1;
	Local_556[1 /*9*/].f_5 = { -581.7587f, -1601.232f, 26.6951f };
	Local_556[1 /*9*/].f_4 = 0;
	Local_556[1 /*9*/].f_2 = 0.7f;
	Local_556[2 /*9*/].f_5 = { -582.0659f, -1602.441f, 26.6555f };
	Local_556[2 /*9*/].f_4 = 1;
	Local_556[2 /*9*/].f_2 = 0.7f;
	Local_556[3 /*9*/].f_5 = { -581.7474f, -1600.007f, 27.6408f };
	Local_556[3 /*9*/].f_4 = 1;
	Local_556[3 /*9*/].f_2 = 0.6f;
	Local_556[4 /*9*/].f_5 = { -581.9272f, -1604.213f, 26.8116f };
	Local_556[4 /*9*/].f_4 = 2;
	Local_556[4 /*9*/].f_2 = 0.7f;
	Local_556[5 /*9*/].f_5 = { -581.5225f, -1598.957f, 27.6963f };
	Local_556[5 /*9*/].f_4 = 3;
	Local_556[5 /*9*/].f_2 = 0.5f;
	Local_556[6 /*9*/].f_5 = { -580.6136f, -1604.27f, 26.5611f };
	Local_556[6 /*9*/].f_4 = 4;
	Local_556[6 /*9*/].f_2 = 0.8f;
	Local_556[7 /*9*/].f_5 = { -579.8723f, -1600.191f, 28.7132f };
	Local_556[7 /*9*/].f_4 = 3;
	Local_556[7 /*9*/].f_2 = 0.4f;
	Local_556[8 /*9*/].f_5 = { -579.7776f, -1599.275f, 29.8253f };
	Local_556[8 /*9*/].f_4 = 5;
	Local_556[8 /*9*/].f_2 = 0.4f;
	Local_556[9 /*9*/].f_5 = { -578.4561f, -1600.315f, 27.7598f };
	Local_556[9 /*9*/].f_4 = 7;
	Local_556[9 /*9*/].f_2 = 0.5f;
	Local_556[10 /*9*/].f_5 = { -578.2825f, -1599.199f, 28.8074f };
	Local_556[10 /*9*/].f_4 = 8;
	Local_556[10 /*9*/].f_2 = 0.4f;
	Local_556[11 /*9*/].f_5 = { -576.612f, -1600.441f, 26.6787f };
	Local_556[11 /*9*/].f_4 = 9;
	Local_556[11 /*9*/].f_2 = 0.7f;
	Local_556[11 /*9*/].f_8 = 1;
	Local_556[12 /*9*/].f_5 = { -576.6265f, -1599.384f, 27.5946f };
	Local_556[12 /*9*/].f_4 = 10;
	Local_556[12 /*9*/].f_2 = 0.5f;
	Local_556[13 /*9*/].f_5 = { -576.6396f, -1601.597f, 26.5078f };
	Local_556[13 /*9*/].f_4 = 11;
	Local_556[13 /*9*/].f_2 = 0.5f;
	Local_556[14 /*9*/].f_5 = { -575.087f, -1599.997f, 26.6606f };
	Local_556[14 /*9*/].f_4 = 11;
	Local_556[14 /*9*/].f_2 = 0.6f;
	Local_556[15 /*9*/].f_5 = { -576.9461f, -1602.997f, 26.4396f };
	Local_556[15 /*9*/].f_4 = 13;
	Local_556[15 /*9*/].f_2 = 0.7f;
	Local_556[16 /*9*/].f_5 = { -573.2653f, -1600.133f, 26.6599f };
	Local_556[16 /*9*/].f_4 = 14;
	Local_556[16 /*9*/].f_2 = 0.7f;
	Local_556[17 /*9*/].f_5 = { -577.1041f, -1605.072f, 26.5755f };
	Local_556[17 /*9*/].f_4 = 15;
	Local_556[17 /*9*/].f_2 = 0.8f;
	Local_556[18 /*9*/].f_5 = { -572.7047f, -1601.734f, 26.5865f };
	Local_556[18 /*9*/].f_4 = 16;
	Local_556[18 /*9*/].f_2 = 0.8f;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_556)
	{
		Local_556[iVar0 /*9*/].f_1 = 0f;
		Local_556[iVar0 /*9*/].f_3 = 0;
		iVar0++;
	}
}

void func_283()//Position - 0x29508
{
	int iVar0;
	
	Local_420[0 /*9*/].f_5 = { -589.7524f, -1601.659f, 26.7179f };
	Local_420[0 /*9*/].f_4 = 0;
	Local_420[0 /*9*/].f_2 = 0.1f;
	Local_420[0 /*9*/].f_8 = 1;
	Local_420[1 /*9*/].f_5 = { -589.6934f, -1600.419f, 27.9798f };
	Local_420[1 /*9*/].f_4 = 0;
	Local_420[1 /*9*/].f_2 = 0.7f;
	Local_420[2 /*9*/].f_5 = { -591.6019f, -1601.349f, 26.7896f };
	Local_420[2 /*9*/].f_4 = 1;
	Local_420[2 /*9*/].f_2 = 0.2f;
	Local_420[3 /*9*/].f_5 = { -591.2652f, -1600.315f, 27.9268f };
	Local_420[3 /*9*/].f_4 = 2;
	Local_420[3 /*9*/].f_2 = 0.4f;
	Local_420[4 /*9*/].f_5 = { -591.699f, -1602.375f, 26.757f };
	Local_420[4 /*9*/].f_4 = 3;
	Local_420[4 /*9*/].f_2 = 0.2f;
	Local_420[5 /*9*/].f_5 = { -589.5444f, -1599.386f, 27.9523f };
	Local_420[5 /*9*/].f_4 = 4;
	Local_420[5 /*9*/].f_2 = 0.2f;
	Local_420[6 /*9*/].f_5 = { -591.2639f, -1603.735f, 26.8366f };
	Local_420[6 /*9*/].f_4 = 5;
	Local_420[6 /*9*/].f_2 = 0.2f;
	Local_420[7 /*9*/].f_5 = { -591.1995f, -1599.247f, 27.9672f };
	Local_420[7 /*9*/].f_4 = 6;
	Local_420[7 /*9*/].f_2 = 0.2f;
	Local_420[8 /*9*/].f_5 = { -589.4444f, -1598.251f, 27.9685f };
	Local_420[8 /*9*/].f_4 = 7;
	Local_420[8 /*9*/].f_2 = 0.2f;
	Local_420[9 /*9*/].f_5 = { -591.0514f, -1598.044f, 29.1302f };
	Local_420[9 /*9*/].f_4 = 8;
	Local_420[9 /*9*/].f_2 = 0.2f;
	Local_420[10 /*9*/].f_5 = { -594.8785f, -1603.141f, 27.0172f };
	Local_420[10 /*9*/].f_4 = 7;
	Local_420[10 /*9*/].f_2 = 0.7f;
	Local_420[11 /*9*/].f_5 = { -596.2939f, -1604.303f, 25.9614f };
	Local_420[11 /*9*/].f_4 = 10;
	Local_420[11 /*9*/].f_2 = 0.7f;
	Local_420[12 /*9*/].f_5 = { -596.6607f, -1602.72f, 26.0841f };
	Local_420[12 /*9*/].f_4 = 11;
	Local_420[12 /*9*/].f_2 = 0.4f;
	Local_420[12 /*9*/].f_8 = 1;
	Local_420[13 /*9*/].f_5 = { -597.8643f, -1601.611f, 26.0368f };
	Local_420[13 /*9*/].f_4 = 12;
	Local_420[13 /*9*/].f_2 = 0.4f;
	Local_420[14 /*9*/].f_5 = { -597.0824f, -1598.961f, 25.8901f };
	Local_420[14 /*9*/].f_4 = 13;
	Local_420[14 /*9*/].f_2 = 0.7f;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_420)
	{
		Local_420[iVar0 /*9*/].f_1 = 0f;
		Local_420[iVar0 /*9*/].f_3 = 0;
		iVar0++;
	}
}

void func_284(int iParam0)//Position - 0x29824
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	var uVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	float fVar14;
	bool bVar15;
	int iVar16;
	float fVar17;
	bool bVar18;
	bool bVar19;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	struct<3> Var32;
	struct<3> Var35;
	struct<3> Var38;
	bool bVar41;
	struct<3> Var42;
	bool bVar45;
	
	if (!PED::IS_PED_INJURED(Local_806))
	{
		bVar2 = (PED::IS_PED_IN_COMBAT(Local_806, 0) || TASK::GET_SCRIPT_TASK_STATUS(Local_806, -1442466670) == 1);
		Var4 = { ENTITY::GET_ENTITY_COORDS(Local_806, 1) };
		Var7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_354);
		PED::SET_PED_RESET_FLAG(Local_806, 227, 1);
		switch (Local_806.f_3)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_2_p1");
				if (PED::IS_PED_RAGDOLL(Local_806))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_806, 0);
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_2_p1"))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() || iParam0)
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_806, 0);
						Local_806.f_8 = { -617.8926f, -1628.966f, 32.0106f };
						func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 253.2876f, 2f, 0, 0, 1, 1);
						Local_806.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-617.689f, -1629.484f, 32.038f, 0f, 0f, 175f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_806, Local_806.f_6, "misslamar1ig_2_p1", "ig_2_p1_stretch", 1.5f, -1.5f, 5, 153, 1.5f, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_806, 12, 1);
						PED::SET_COMBAT_FLOAT(Local_806, 0, 1f);
						PED::SET_COMBAT_FLOAT(Local_806, 13, 0.5f);
						iLocal_111 = 0;
						Local_806.f_12 = 0;
						Local_806.f_11 = 0;
						Local_806.f_4 = 0;
						Local_806.f_3++;
					}
				}
				break;
			
			case 1:
				if (!Local_806.f_11)
				{
					if (func_294(Local_806, Local_806.f_8, 4f, 2f, 0, 0))
					{
						if (Local_806.f_12)
						{
							Local_806.f_8 = { -617.8926f, -1628.966f, 32.0106f };
							func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 253.2876f, 2f, 0, 0, 1, 1);
							Local_806.f_12 = 0;
						}
						else
						{
							Local_806.f_8 = { -620.7198f, -1627.315f, 32.0303f };
							func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 269.1433f, 2f, 0, 2, 1, 1);
							Local_806.f_12 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_806, -8f, 1);
							Local_806.f_6 = -1;
							Local_806.f_11 = 1;
						}
						bVar0 = true;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var4, Local_806.f_8);
				if (func_274(&Local_1123) && func_274(&Local_1021))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
					{
						func_293(&Local_806, &(Local_806.f_6), Local_806.f_8, 1f, 0.5f, 1, 0, Local_806.f_2, -1056964608);
					}
					else
					{
						Local_806.f_8 = { -601.8096f, -1615.841f, 32.0102f };
						func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 267.2701f, 1f, 0, 2, 3, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_806, 12, 0);
						PED::SET_COMBAT_FLOAT(Local_806, 0, 0.05f);
						PED::SET_COMBAT_FLOAT(Local_806, 13, 3f);
						Local_806.f_12 = 0;
						Local_806.f_11 = 1;
						Local_806.f_4 = MISC::GET_GAME_TIMER();
						Local_806.f_3++;
					}
				}
				else
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6) && !Local_806.f_11)
					{
						func_292(&Local_806, &(Local_806.f_6), &(Local_806.f_4), Local_806.f_8, 1f, 0.5f, 1, 0, Local_806.f_2, -1056964608);
					}
					else if (Local_806.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_806, 242628503) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6)) && (fVar3 > 4f || !bVar2)))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar10);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar10);
						TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
						TASK::CLEAR_SEQUENCE_TASK(&uVar10);
						Local_806.f_11 = 0;
					}
					if (!iLocal_115)
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
						{
							if (PED::IS_PED_SHOOTING(Local_806))
							{
								MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(-606.3475f, -1634.252f, 33.66398f, -606.5612f, -1638.025f, 33.71402f, 0, 1, joaat("weapon_pumpshotgun"), PLAYER::PLAYER_PED_ID(), 0, 1, -1082130432);
								iLocal_115 = 1;
							}
						}
					}
				}
				break;
			
			case 2:
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_6");
				if (!Local_806.f_11)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -601.8096f, -1615.841f, 32.0102f) < 2f)
					{
						if (GlobalFunc_537(Local_806.f_8, -601.8954f, -1615.957f, 32.0105f, 1056964608))
						{
							if (SYSTEM::VDIST2(Var4, -601.8954f, -1615.957f, 32.0105f) > 2f)
							{
								Local_806.f_8 = { -603.361f, -1619.394f, 32.0105f };
								TASK::REMOVE_COVER_POINT(iLocal_402);
								func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 267.2701f, 2f, 1, 2, 0, 1);
								Local_806.f_11 = 1;
							}
						}
					}
					else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -603.361f, -1619.394f, 32.0105f) < 2f)
					{
						if (GlobalFunc_537(Local_806.f_8, -603.361f, -1619.394f, 32.0105f, 1056964608))
						{
							if (SYSTEM::VDIST2(Var4, -603.361f, -1619.394f, 32.0105f) > 2f)
							{
								Local_806.f_8 = { -601.8954f, -1615.957f, 32.0105f };
								func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 267.2701f, 2f, 0, 2, 0, 1);
								Local_806.f_11 = 1;
							}
						}
					}
				}
				if (func_274(&Local_1072))
				{
					if (Local_806.f_8 != -601.8096f)
					{
						Local_806.f_8 = { -601.8096f, -1615.841f, 32.0102f };
						func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 267.2701f, 2f, 0, 2, 3, 1);
					}
					iVar11 = func_291(&Local_806, &(Local_806.f_4), Local_806.f_8, -604.2f, -1603.531f, 27.5187f, Local_806.f_2, 1, 1, 0.75f, 0, 0);
					if (iVar11 == 0)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_6"))
						{
							Local_806.f_8 = { -589.083f, -1619.854f, 32.0105f };
							TASK::REMOVE_COVER_POINT(Local_806.f_2);
							Local_806.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-599.1f, -1619.598f, 32.001f, 0f, 0f, 175f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_806, Local_806.f_6, "misslamar1ig_6", "ig_6_stretch", 8f, -1.5f, 261, 153, 8f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 0);
							Local_806.f_12 = 0;
							Local_806.f_11 = 0;
							Local_806.f_4 = 0;
							Local_806.f_3++;
						}
					}
					else if (iVar11 == 2)
					{
						Local_806.f_8 = { -589.083f, -1619.854f, 32.0105f };
						TASK::REMOVE_COVER_POINT(Local_806.f_2);
						Local_806.f_12 = 0;
						Local_806.f_11 = 1;
						Local_806.f_4 = 0;
						Local_806.f_3++;
					}
				}
				else
				{
					if (!iLocal_111)
					{
						if (Local_1072[0 /*25*/].f_5 > 0)
						{
							Local_806.f_11 = 1;
							iLocal_111 = 1;
						}
					}
					if (Local_806.f_11 == 1 && (MISC::GET_GAME_TIMER() - Local_806.f_4) > 500)
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar10);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						if (SYSTEM::VDIST2(Var4, Local_806.f_8) > 4f)
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_806.f_8, -599f, -1618f, 33.5f, 2f, 0, 1f, 4f, 1, 1, 0, -957453492);
						}
						if (Local_1072[0 /*25*/].f_5 > 0)
						{
							if (!PED::IS_PED_IN_COVER(Local_806, 0))
							{
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_806.f_8, 1000, 0, 0.5f, false, 0, Local_806.f_2, 1);
							}
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
						}
						else
						{
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_806.f_8, -1, 0, 0.5f, false, 0, Local_806.f_2, 1);
						}
						TASK::CLOSE_SEQUENCE_TASK(uVar10);
						TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
						TASK::CLEAR_SEQUENCE_TASK(&uVar10);
						Local_806.f_11 = 0;
					}
				}
				break;
			
			case 3:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_23");
				fVar3 = SYSTEM::VDIST2(Local_806.f_8, Var4);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
				{
					func_290(&Local_806, &(Local_806.f_6), -589.4374f, -1628.932f, 33.7582f, 0.99f, 0, -1056964608);
					if (SYSTEM::VDIST(Var7, Var4) < 2f)
					{
						if (fVar3 > SYSTEM::VDIST2(Var7, Local_806.f_8))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_806, -1.5f, 1);
							Local_806.f_6 = -1;
						}
					}
				}
				else if (fVar3 > 2f && TASK::GET_SCRIPT_TASK_STATUS(Local_806, 242628503) != 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar10);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_806.f_8, -589.4374f, -1628.932f, 33.7582f, 2f, 0, 0.1f, 4f, 1, 4096, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, -589.4374f, -1628.932f, 33.7582f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar10);
					TASK::CLEAR_PED_TASKS(Local_806);
					TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
					TASK::CLEAR_SEQUENCE_TASK(&uVar10);
				}
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -588.1853f, -1619.154f, 32.0105f, -592.5206f, -1618.995f, 34.7605f, 4.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -566.4107f, -1627.291f, 32.05611f, -592.1121f, -1624.949f, 34.76048f, 7.25f, 0, 1, 0)) && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_23"))
				{
					if ((fVar3 < 2f && ENTITY::GET_ENTITY_SPEED(Local_806) < 0.3f) || (!ENTITY::IS_ENTITY_ON_SCREEN(Local_806) && !CAM::IS_SPHERE_VISIBLE(Local_806.f_8, 1f)))
					{
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6) > 0.95f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
						{
							if (Local_806.f_4 == 0)
							{
								Local_806.f_4 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - Local_806.f_4) > 500)
							{
								Local_806.f_8 = { -584.9334f, -1622.812f, 32.0105f };
								func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 272.4262f, 2f, 0, 0, 1, 1);
								Local_806.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-589.083f, -1619.854f, 33.016f, 0f, 0f, 168f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_806, Local_806.f_6, "misslamar1lam_1_ig_23", "lam_1_ig_23", 1.5f, -1.5f, 261, 153, 1.5f, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6, 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 0);
								Local_806.f_12 = 0;
								Local_806.f_11 = 0;
								Local_806.f_4 = 0;
								Local_806.f_3++;
							}
						}
					}
				}
				break;
			
			case 4:
				if (!Local_806.f_11)
				{
					if (func_294(Local_806, Local_806.f_8, 5f, 2f, 0, 0))
					{
						if (Local_806.f_12)
						{
							Local_806.f_8 = { -584.9334f, -1622.812f, 32.0105f };
							func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 272.4262f, 2f, 0, 0, 1, 1);
							Local_806.f_12 = 0;
						}
						else
						{
							Local_806.f_8 = { -587.5033f, -1625.958f, 32.053f };
							TASK::REMOVE_COVER_POINT(Local_806.f_2);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_806, Local_806.f_8, 2f, 0, 0);
							Local_806.f_12 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_806, -1.5f, 1);
							Local_806.f_6 = -1;
						}
						bVar0 = true;
						Local_806.f_11 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var4, Local_806.f_8);
				if (func_274(&Local_1199))
				{
					if (Local_806.f_4 == 0)
					{
						Local_806.f_4 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_806.f_4) > 500)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_806, -1.5f, 1);
							Local_806.f_6 = -1;
						}
						Local_806.f_8 = { -562.4127f, -1631.973f, 32.0105f };
						func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 180.132f, 2f, 0, 2, 3, 1);
						TASK::OPEN_SEQUENCE_TASK(&uVar10);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -576.3644f, -1624.477f, 32.0106f, -562f, -1627.9f, 33.6f, 2f, 0, 0.5f, 4f, 1, 1, 0, -957453492);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_806.f_8, -562f, -1627.9f, 33.6f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
						TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, Local_806.f_2, -564.5787f, -1652.993f, 34.1345f, -1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar10);
						TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
						TASK::CLEAR_SEQUENCE_TASK(&uVar10);
						Local_806.f_12 = 0;
						Local_806.f_11 = 0;
						Local_806.f_4 = 0;
						Local_806.f_3++;
					}
				}
				else
				{
					if (Local_806.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_806, 242628503) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6)) && (fVar3 > 4f || !bVar2)))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar10);
						if (fVar3 > 4f)
						{
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_806.f_8, -583f, -1626.8f, 33.6f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
						}
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar10);
						TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
						TASK::CLEAR_SEQUENCE_TASK(&uVar10);
						Local_806.f_11 = 0;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
					{
						func_292(&Local_806, &(Local_806.f_6), &(Local_806.f_4), Local_806.f_8, 0.99f, 0f, 1, 0, Local_806.f_2, -1.5f);
					}
				}
				break;
			
			case 5:
				fVar3 = SYSTEM::VDIST2(Var4, Local_806.f_8);
				if (Local_1754[0 /*25*/].f_5 > 0 || PED::IS_PED_INJURED(Local_1754[0 /*25*/]))
				{
					if (fVar3 < 100f)
					{
						Local_806.f_8 = { -561.5094f, -1623.129f, 30.0093f };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_806, Local_806.f_8, 2f, 0, 0);
						if (!PED::IS_PED_INJURED(Local_1754[0 /*25*/]))
						{
							TASK::TASK_COMBAT_PED(Local_806, Local_1754[0 /*25*/], 0, 16);
						}
						Local_806.f_4 = 0;
						Local_806.f_3++;
					}
				}
				break;
			
			case 6:
				if (func_274(&Local_1754))
				{
					if (Var7.f_2 < 29.1f || Local_1325[0 /*25*/].f_5 > 0)
					{
						if (Local_806.f_4 == 0)
						{
							Local_806.f_4 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - Local_806.f_4) > 650)
						{
							Local_806.f_8 = { -564.3552f, -1626.571f, 29.0099f };
							TASK::OPEN_SEQUENCE_TASK(&uVar10);
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_806.f_8, -561.7f, -1626.3f, 29.3f, 2f, 0, 0.5f, 4f, 1, 512, 0, -957453492);
							TASK::TASK_AIM_GUN_AT_COORD(0, -561.7f, -1626.3f, 29.3f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar10);
							TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
							TASK::CLEAR_SEQUENCE_TASK(&uVar10);
							Local_806.f_11 = 0;
							Local_806.f_4 = 0;
							Local_806.f_3++;
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_806, 1237250926) != 1)
					{
						TASK::TASK_AIM_GUN_AT_COORD(Local_806, -564.2987f, -1631.583f, 30.0554f, -1, 0, 0);
					}
				}
				break;
			
			case 7:
				if (Var7.f_2 < 27.1f || Local_1325[0 /*25*/].f_5 > 0)
				{
					if (Local_806.f_4 == 0)
					{
						Local_806.f_4 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_806.f_4) > 650)
					{
						Local_806.f_8 = { -562.5714f, -1628.365f, 28.0096f };
						TASK::OPEN_SEQUENCE_TASK(&uVar10);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_806.f_8, -560.4027f, -1602.119f, 27.3222f, 2f, 0, 0.5f, 4f, 1, 512, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_COORD(0, -560.4027f, -1602.119f, 27.3222f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar10);
						TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
						TASK::CLEAR_SEQUENCE_TASK(&uVar10);
						Local_806.f_11 = 0;
						Local_806.f_4 = 0;
						Local_806.f_3++;
					}
				}
				break;
			
			case 8:
				if (Local_1325[0 /*25*/].f_5 > 0 || (Local_1325[0 /*25*/].f_2 && PED::IS_PED_INJURED(Local_1325[0 /*25*/])))
				{
					Local_806.f_11 = 0;
					Local_806.f_4 = 0;
					Local_806.f_3++;
				}
				break;
			
			case 9:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_806))
				{
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_354, Var4, &iVar12);
					if (iVar12 > 55)
					{
						TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Local_806, -562.5f, -1626.1f, 28.4f, 0);
					}
					else
					{
						TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Local_806, -565.7f, -1627.7f, 29.6f, 0);
					}
				}
				if (func_274(&Local_1325))
				{
					Local_806.f_8 = { -560.9681f, -1617.041f, 26.011f };
					fVar3 = SYSTEM::VDIST2(Var4, Local_806.f_8);
					TASK::OPEN_SEQUENCE_TASK(&uVar10);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					if (fVar3 > 9f)
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_806.f_8, -562f, -1602.3f, 27.6f, 2f, 0, 0.5f, 0.5f, 1, 1, 0, -957453492);
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, -562f, -1602.3f, 27.6f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar10);
					TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
					TASK::CLEAR_SEQUENCE_TASK(&uVar10);
					Local_806.f_11 = 0;
					Local_806.f_4 = 0;
					Local_806.f_3++;
				}
				else if (Local_1325[0 /*25*/].f_5 > 0)
				{
					if (!PED::IS_PED_IN_COMBAT(Local_806, 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_806, -1442466670) != 1)
					{
						if (Local_806.f_4 == 0)
						{
							Local_806.f_4 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - Local_806.f_4) > 2000)
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_806, -560.9681f, -1617.041f, 26.011f, 1.5f, 1, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_806, 100f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 0);
							Local_806.f_4 = 0;
						}
					}
				}
				break;
			
			case 10:
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -567.4567f, -1601.174f, 26.0108f, -558.6825f, -1601.874f, 29.5108f, 7f, 0, 1, 0) || Local_1426[0 /*25*/].f_5 > 0) || PED::IS_PED_INJURED(Local_1426[0 /*25*/]))
				{
					Local_806.f_8 = { -560.7259f, -1600.862f, 26.0603f };
					TASK::OPEN_SEQUENCE_TASK(&uVar10);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_806.f_8, -566.3f, -1601.3f, 27.6159f, 2f, 0, 0.5f, 0.5f, 1, 1, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, -566.3f, -1601.3f, 27.6159f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar10);
					TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
					TASK::CLEAR_SEQUENCE_TASK(&uVar10);
					Local_806.f_11 = 0;
					Local_806.f_4 = 0;
					Local_806.f_3++;
				}
				break;
			
			case 11:
				if (!iLocal_130[39])
				{
					if (Local_806.f_4 == 0)
					{
						if (!GlobalFunc_5172(&Local_819, 1))
						{
							Local_806.f_4 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - Local_806.f_4) > 5000)
					{
						if (SYSTEM::VDIST2(Var4, Var7) < 625f)
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_GOGO2", 7, 0, 0, 0))
							{
								iLocal_130[39] = 1;
							}
						}
					}
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_344))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_344, joaat("v_ilev_rc_door1"), -567.638f, -1602.477f, 27.1608f, 1, 1, 0);
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_344))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_345, joaat("v_ilev_rc_door1"), -567.4113f, -1599.886f, 27.1608f, 1, 1, 0);
				}
				if (((Local_1426[0 /*25*/].f_5 > 0 || PED::IS_PED_INJURED(Local_1426[0 /*25*/])) || (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_344) && OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_344) != 0f)) || (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_345) && OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_345) != 0f))
				{
					MISC::SET_BIT(&uVar13, 2);
					MISC::SET_BIT(&uVar13, 1);
					MISC::SET_BIT(&uVar13, 4);
					MISC::SET_BIT(&uVar13, 3);
					uLocal_766 = OBJECT::CREATE_PICKUP(joaat("pickup_weapon_smg"), -601.9845f, -1602.443f, 29.6f, uVar13, -1, 1, 0);
					INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(uLocal_766, "v_recycle");
					Local_806.f_11 = 0;
					Local_806.f_4 = 0;
					Local_806.f_3 = 50;
				}
				break;
			
			case 50:
				if (func_274(&Local_1325))
				{
					if (Local_806.f_4 == 0)
					{
						if (iLocal_2035 == 7)
						{
							Local_806.f_4 = (MISC::GET_GAME_TIMER() - 10000);
						}
						else
						{
							Local_806.f_4 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - Local_806.f_4) > 500)
					{
						Local_806.f_8 = { -572.0428f, -1600.691f, 26.0108f };
						func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 84.6418f, 1f, 2, 0, 1, 1);
						PED::SET_PED_CONFIG_FLAG(Local_806, 131, 1);
						TASK::OPEN_SEQUENCE_TASK(&uVar10);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_806, 1), Local_806.f_8) > 9f)
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -564.2f, -1601.4f, 26.01f, -566.3f, -1601.3f, 27.6159f, 2f, 0, 0.5f, 0.5f, 1, 1, 0, -957453492);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_806, 1), Local_806.f_8) > 2f)
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_806.f_8, -590.1738f, -1606.668f, 27.6159f, 2f, 0, 0.5f, 4f, 1, 1, 0, -957453492);
						}
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_806.f_8, 1000, 0, 0.5f, true, 1, Local_806.f_2, 1);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar10);
						TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
						TASK::CLEAR_SEQUENCE_TASK(&uVar10);
						PED::SET_PED_ACCURACY(Local_806, 1);
						PED::SET_COMBAT_FLOAT(Local_806, 13, 3f);
						Local_806.f_4 = 0;
						Local_806.f_3++;
					}
				}
				break;
			
			case 51:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_14");
				if (!func_289(&Local_1426, -582.3566f, -1606.783f, 26.0108f, -569.629f, -1607.289f, 30.27093f, 15.5f, 0) && !func_289(&Local_1552, -582.3566f, -1606.783f, 26.0108f, -569.629f, -1607.289f, 30.27093f, 15.5f, 0))
				{
					iVar11 = func_291(&Local_806, &(Local_806.f_4), Local_806.f_8, -604.2f, -1603.531f, 27.5187f, Local_806.f_2, 1, 1, 0.75f, 0, 0);
					if (iVar11 == 0)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_14"))
						{
							Local_806.f_8 = { -580.3932f, -1608.878f, 26.0108f };
							func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 90.292f, 2f, 0, 2, 0, 1);
							Local_806.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-576.169f, -1610.406f, 26.032f, 0f, 0f, -120f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_806, Local_806.f_6, "misslamar1lam_1_ig_14", "lam_1_ig_14_stretch", 1.5f, -1.5f, 5, 601, 1.5f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 0);
							Local_806.f_4 = 0;
							Local_806.f_3++;
						}
					}
					else if (iVar11 == 2)
					{
						Local_806.f_8 = { -580.3932f, -1608.878f, 26.0108f };
						func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 90.292f, 2f, 0, 2, 0, 1);
						Local_806.f_11 = 1;
						Local_806.f_4 = 0;
						Local_806.f_3++;
					}
				}
				break;
			
			case 52:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_15");
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
				{
					fVar14 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6);
					if (fVar14 > 0.64f && fVar14 < 0.8f)
					{
						func_288(&Local_806);
						if (!(func_274(&Local_1426) && func_274(&Local_1552)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_740))
							{
								PED::SET_PED_SHOOTS_AT_COORD(Local_806, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_740, 0f, 0f, 2f), 0);
								if (fVar14 > 0.7f)
								{
									MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_740, 0.5f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(iLocal_740, 1), 1, 1, joaat("weapon_pumpshotgun"), PLAYER::PLAYER_PED_ID(), 0, 1, -1082130432);
								}
							}
							else
							{
								PED::SET_PED_SHOOTS_AT_COORD(Local_806, -594.93f, -1607.64f, 27.8f, 0);
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_740))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_806, 0))
					{
						fVar3 = SYSTEM::VDIST2(Var4, Local_806.f_8);
						if (fVar3 > 4f && fVar3 < 100f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(Local_806, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_740, 0f, 0f, 2f), 0);
							if (fVar3 < 49f && Local_420[0 /*9*/].f_1 == 0f)
							{
								MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_740, 0.5f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(iLocal_740, 1), 1, 1, joaat("weapon_pumpshotgun"), PLAYER::PLAYER_PED_ID(), 0, 1, -1082130432);
							}
						}
					}
				}
				bVar1 = (!func_289(&Local_1426, -592.3627f, -1606.239f, 25.86052f, -569.629f, -1607.289f, 30.27093f, 15.5f, 0) && !func_289(&Local_1552, -592.3627f, -1606.239f, 25.86052f, -569.629f, -1607.289f, 30.27093f, 15.5f, 0));
				if (!Local_806.f_11)
				{
					if (func_294(Local_806, Local_806.f_8, 5f, 1073741824, 0, 1))
					{
						if (Local_806.f_12)
						{
							Local_806.f_8 = { -580.3932f, -1608.878f, 26.0108f };
							func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 90.292f, 2f, 0, 2, 0, 1);
							Local_806.f_12 = 0;
						}
						else
						{
							Local_806.f_8 = { -576.3989f, -1605.457f, 26.0108f };
							func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 90.292f, 2f, 2, 0, 0, 1);
							Local_806.f_12 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_806, -8f, 1);
							Local_806.f_6 = -1;
						}
						bVar0 = true;
						Local_806.f_11 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var4, Local_806.f_8);
				if (bVar1)
				{
					if (Local_806.f_8 != -580.3932f)
					{
						Local_806.f_8 = { -580.3932f, -1608.878f, 26.0108f };
						func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 90.292f, 2f, 0, 2, 0, 1);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
					{
						func_293(&Local_806, &(Local_806.f_6), Local_806.f_8, 1f, 0.5f, 1, 0, Local_806.f_2, -1056964608);
					}
					else
					{
						iVar11 = func_291(&Local_806, &(Local_806.f_4), Local_806.f_8, -604.2f, -1603.531f, 27.5187f, Local_806.f_2, 1, 1, 0.75f, 1, 0);
						if (iVar11 == 0)
						{
							if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_15"))
							{
								Local_806.f_8 = { -589.0823f, -1610.111f, 26.011f };
								func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 90.3195f, 1f, 0, 0, 1, 1);
								Local_806.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-576.169f, -1610.406f, 26.032f, 0f, 0f, -120f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_806, Local_806.f_6, "misslamar1lam_1_ig_15", "lam_1_ig_15_stretch", 1.5f, -1.5f, 5, 601, 1.5f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 0);
								func_288(&Local_806);
								Local_806.f_12 = 0;
								Local_806.f_11 = 0;
								Local_806.f_4 = 0;
								Local_806.f_3++;
							}
						}
						else if (iVar11 == 2)
						{
							Local_806.f_8 = { -589.0823f, -1610.111f, 26.011f };
							func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 90.3195f, 1f, 0, 0, 1, 1);
							Local_806.f_12 = 0;
							Local_806.f_11 = 1;
							Local_806.f_4 = 0;
							Local_806.f_3++;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6) && !Local_806.f_11)
				{
					func_292(&Local_806, &(Local_806.f_6), &(Local_806.f_4), Local_806.f_8, 1f, 0.5f, 1, 0, Local_806.f_2, -1056964608);
				}
				else if (Local_806.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_806, 242628503) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6)) && (fVar3 > 4f || !bVar2)))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar10);
					if (fVar3 > 4f && !bVar0)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_806.f_8, -590.1738f, -1606.668f, 27.6159f, 2f, 0, 1f, 1f, 1, 1, 0, -957453492);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_806.f_8, 1000, 0, 0.25f, true, 0, Local_806.f_2, 1);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar10);
					TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
					TASK::CLEAR_SEQUENCE_TASK(&uVar10);
					Local_806.f_11 = 0;
				}
				break;
			
			case 53:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_17");
				iVar16 = (func_273(&Local_1426) + func_273(&Local_1552));
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
				{
					fVar17 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6);
					if (fVar17 > 0.25f && fVar17 < 0.4f)
					{
						func_288(&Local_806);
						if (!PED::IS_PED_INJURED(Local_1552[2 /*25*/]))
						{
							PED::SET_PED_SHOOTS_AT_COORD(Local_806, ENTITY::GET_ENTITY_COORDS(Local_1552[2 /*25*/], 1), 0);
							ENTITY::SET_ENTITY_HEALTH(Local_1552[2 /*25*/], 0);
						}
						else if (iVar16 > 0)
						{
							PED::SET_PED_SHOOTS_AT_COORD(Local_806, -594.93f, -1607.64f, 27.8f, 0);
						}
					}
				}
				if (iVar16 == 0)
				{
					bVar1 = true;
				}
				else if ((iVar16 == 1 && !PED::IS_PED_INJURED(Local_1552[3 /*25*/])) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1552[3 /*25*/], -605.6366f, -1608.953f, 26.01083f, -594.8846f, -1609.297f, 29.01083f, 5.25f, 0, 1, 0))
				{
					if (iLocal_331 == 0)
					{
						iLocal_331 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_331) > 5000)
					{
						bVar1 = true;
					}
				}
				if (!Local_806.f_11)
				{
					if (!Local_806.f_12)
					{
						bVar18 = func_294(Local_806, Local_806.f_8, 5f, 1073741824, 0, 1);
					}
					else
					{
						bVar18 = func_294(Local_806, Local_806.f_8, 4f, 1f, 0, 1);
					}
					if (bVar18)
					{
						if (!bVar1)
						{
							if (Local_806.f_12)
							{
								Local_806.f_8 = { -589.0823f, -1610.111f, 26.011f };
								func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 90.3195f, 1f, 0, 0, 1, 1);
								Local_806.f_12 = 0;
							}
							else
							{
								Local_806.f_8 = { -588.1877f, -1608.475f, 26.0108f };
								TASK::REMOVE_COVER_POINT(Local_806.f_2);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_806, Local_806.f_8, 1f, 1, 0);
								Local_806.f_12 = 1;
							}
							bVar0 = true;
							Local_806.f_11 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_806, -8f, 1);
							Local_806.f_6 = -1;
						}
					}
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
				{
					if (iVar16 == 1)
					{
						if (!PED::IS_PED_INJURED(Local_1552[4 /*25*/]))
						{
							if (!PED::IS_PED_IN_COMBAT(Local_1552[4 /*25*/], 0))
							{
								bVar15 = true;
								if (bVar2)
								{
									Local_806.f_11 = 1;
								}
							}
						}
					}
					if (iVar16 == 1)
					{
						if ((!bVar15 && !bVar2) && !bVar1)
						{
							Local_806.f_11 = 1;
						}
					}
				}
				fVar3 = SYSTEM::VDIST2(Var4, Local_806.f_8);
				if (bVar1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
					{
						func_293(&Local_806, &(Local_806.f_6), Local_806.f_8, 0.99f, 0.5f, 1, 0, Local_806.f_2, -1056964608);
					}
					else
					{
						if (Local_806.f_8 != -589.0823f)
						{
							Local_806.f_8 = { -589.0823f, -1610.111f, 26.011f };
							func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 90.3195f, 1f, 0, 0, 1, 1);
						}
						iVar11 = func_291(&Local_806, &(Local_806.f_4), Local_806.f_8, -604.2f, -1603.531f, 27.5187f, Local_806.f_2, 1, 1, 0.75f, 0, 0);
						if (iVar11 == 0)
						{
							if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_17"))
							{
								Local_806.f_8 = { -602.9832f, -1611.943f, 26.0108f };
								func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 188.2352f, 1f, 0, 2, 3, 1);
								Local_806.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-576.169f, -1610.406f, 26.032f, 0f, 0f, -120f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_806, Local_806.f_6, "misslamar1lam_1_ig_17", "lam_1_ig_17_stretch", 1.5f, -1.5f, 5, 601, 1.5f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 1);
								Local_806.f_12 = 0;
								Local_806.f_11 = 0;
								Local_806.f_4 = 0;
								Local_806.f_3++;
							}
						}
						else if (iVar11 == 2)
						{
							Local_806.f_8 = { -602.9832f, -1611.943f, 26.0108f };
							func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 188.2352f, 1f, 0, 2, 3, 1);
							Local_806.f_12 = 0;
							Local_806.f_11 = 1;
							Local_806.f_4 = 0;
							Local_806.f_3++;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6) && !Local_806.f_11)
				{
					func_292(&Local_806, &(Local_806.f_6), &(Local_806.f_4), Local_806.f_8, 1f, 0.5f, 1, 0, Local_806.f_2, -1056964608);
				}
				else if (Local_806.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_806, 242628503) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6)) && (fVar3 > 4f || !bVar2)))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar10);
					if (fVar3 > 4f && !bVar0)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_806.f_8, -597.1738f, -1606.168f, 27.6159f, 2f, 0, 1f, 1f, 1, 1, 0, -957453492);
					}
					if (bVar15)
					{
						TASK::TASK_AIM_GUN_AT_COORD(0, -597.1738f, -1606.168f, 27.6159f, -1, 0, 0);
					}
					else
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(uVar10);
					TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
					TASK::CLEAR_SEQUENCE_TASK(&uVar10);
					Local_806.f_11 = 0;
				}
				break;
			
			case 54:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6) && !PED::IS_PED_INJURED(Local_1552[3 /*25*/]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6) > 0.25f && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6) < 0.36f)
					{
						PED::SET_PED_SHOOTS_AT_COORD(Local_806, ENTITY::GET_ENTITY_COORDS(Local_1552[3 /*25*/], 1), 0);
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6) > 0.34f)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_1552[3 /*25*/], 0);
					}
				}
				if (!Local_806.f_11)
				{
					if (!Local_806.f_12)
					{
						bVar19 = func_294(Local_806, Local_806.f_8, 5f, 1073741824, 0, 1);
					}
					else
					{
						bVar19 = func_294(Local_806, Local_806.f_8, 4f, 1f, 0, 1);
					}
					if (bVar19)
					{
						if (Local_806.f_12)
						{
							Local_806.f_8 = { -602.9832f, -1611.943f, 26.0108f };
							func_295(Local_806, &(Local_806.f_2), Local_806.f_8, 188.2352f, 2f, 0, 2, 3, 1);
							Local_806.f_12 = 0;
						}
						else
						{
							Local_806.f_8 = { -602.3002f, -1609.171f, 26.0108f };
							TASK::REMOVE_COVER_POINT(Local_806.f_2);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_806, Local_806.f_8, 1f, 1, 0);
							Local_806.f_12 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_806, -8f, 1);
							Local_806.f_6 = -1;
						}
						bVar0 = true;
						Local_806.f_11 = 1;
					}
				}
				fVar3 = SYSTEM::VDIST2(Var4, Local_806.f_8);
				if (Local_1703[0 /*25*/].f_5 > 0)
				{
					Local_806.f_8 = { -605.6207f, -1615.94f, 26.0395f };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_806, Local_806.f_8, 2f, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_806, 50f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 0);
					Local_806.f_4 = 0;
					Local_806.f_3++;
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6) && !Local_806.f_11)
				{
					func_293(&Local_806, &(Local_806.f_6), Local_806.f_8, 1f, 0.5f, 1, 0, Local_806.f_2, -1056964608);
				}
				else if (Local_806.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_806, 242628503) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6)) && fVar3 > 4f))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar10);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					if (fVar3 > 4f)
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_806.f_8, -605.6f, -1624.94f, 27.54f, 2f, 0, 1f, 1f, 1, 1, 0, -957453492);
					}
					if (Local_806.f_12)
					{
						TASK::TASK_AIM_GUN_AT_COORD(0, -605.6f, -1624.94f, 27.54f, -1, 0, 0);
					}
					else
					{
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_806.f_8, -1, 0, 0.5f, true, 0, Local_806.f_2, 1);
					}
					TASK::CLOSE_SEQUENCE_TASK(uVar10);
					TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
					TASK::CLEAR_SEQUENCE_TASK(&uVar10);
					Local_806.f_11 = 0;
				}
				break;
			
			case 55:
				if (func_274(&Local_1703))
				{
					Local_806.f_8 = { -605.6207f, -1615.94f, 26.0395f };
					Local_806.f_11 = 1;
					Local_806.f_4 = 0;
					Local_806.f_3++;
				}
				break;
			
			case 56:
				Var23 = { -605.6207f, -1615.94f, 26.0395f };
				Var26 = { -605.9904f, -1630.747f, 26.0108f };
				Var29 = { -597.8649f, -1631.375f, 26.0108f };
				Var32 = { -591.7455f, -1630.483f, 27.2158f };
				Var35 = { -601f, -1630.2f, 27.2f };
				if (SYSTEM::VDIST2(Var7, Var32) < SYSTEM::VDIST2(Var29, Var32))
				{
					Var20 = { Var29 };
					Var35 = { -591.7455f, -1630.483f, 27.2158f };
				}
				else if (SYSTEM::VDIST2(Var7, Var29) < SYSTEM::VDIST2(Var26, Var29))
				{
					if (!GlobalFunc_537(Local_806.f_8, Var29, 1056964608))
					{
						Var20 = { Var26 };
						Var35 = { -591.7455f, -1630.483f, 27.2158f };
					}
				}
				else if (!GlobalFunc_537(Local_806.f_8, Var26, 1056964608) && !GlobalFunc_537(Local_806.f_8, Var23, 1056964608))
				{
					Var20 = { Var23 };
					Var35 = { -601f, -1630.2f, 27.2f };
				}
				if (!GlobalFunc_537(Local_806.f_8, Var20, 1056964608) && !GlobalFunc_537(0f, 0f, 0f, Var20, 1056964608))
				{
					Local_806.f_8 = { Var20 };
					Local_806.f_11 = 1;
				}
				if (Local_806.f_11)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar10);
					if (SYSTEM::VDIST2(-598.5f, -1608.4f, 26.0109f, -605.5658f, -1628.206f, 26.0109f) < SYSTEM::VDIST2(Var4, -605.5658f, -1628.206f, 26.0109f))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -598.5f, -1608.4f, 26.0109f, -601f, -1630.2f, 27.2f, 2f, 0, 0.5f, 0.5f, 1, 1, 0, -957453492);
					}
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_806.f_8, Var35, 2f, 0, 0.5f, 2f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, Var35, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar10);
					TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
					TASK::CLEAR_SEQUENCE_TASK(&uVar10);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 1);
					Local_806.f_11 = 0;
				}
				if (bLocal_85)
				{
					if (Local_806.f_4 == 0)
					{
						Local_806.f_4 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_806.f_4) > 500)
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Local_806, -589.4766f, -1639.89f, 18.8855f, -587.2f, -1631.2f, 26f, 2f, 0, 1f, 1f, 1, 0, 0, -957453492);
						Local_806.f_4 = 0;
						Local_806.f_3++;
					}
				}
				break;
			
			case 57:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_806, -592.5679f, -1630.368f, 28.23845f, -587.9066f, -1630.824f, 23.51186f, 2.5f, 0, 1, 0))
				{
					func_287();
					if (bLocal_99)
					{
						Local_806.f_8 = { -593.268f, -1639.526f, 18.9594f };
					}
					else
					{
						Local_806.f_8 = { -592.8024f, -1642.528f, 18.9567f };
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 1);
					TASK::OPEN_SEQUENCE_TASK(&uVar10);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -580.124f, -1634.676f, 18.5787f, -563.72f, -1649f, 29.8111f, 2f, 0, 0.5f, 0.5f, 1, 1, 0, -957453492);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_806.f_8, 2f, 20000, 0.25f, 512, 150f);
					TASK::CLOSE_SEQUENCE_TASK(uVar10);
					TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
					TASK::CLEAR_SEQUENCE_TASK(&uVar10);
					iLocal_88 = 0;
					iLocal_79 = 0;
					Local_806.f_4 = MISC::GET_GAME_TIMER();
					Local_806.f_3++;
				}
				break;
			
			case 58:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_18");
				if (SYSTEM::VDIST2(Var4, -592.8024f, -1642.528f, 18.9567f) < 1.3f)
				{
					iLocal_88 = 1;
					if (!PED::IS_PED_INJURED(Local_793))
					{
						Var38 = { ENTITY::GET_ENTITY_COORDS(Local_793, 1) };
					}
					if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_18") && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -592.2216f, -1642.938f, 18.92483f, -593.819f, -1641.984f, 22.70944f, 1.25f, 0, 1, 0))
					{
						if ((bLocal_78 && Var38.f_2 > 22f) || !bLocal_78)
						{
							TASK::TASK_CLIMB_LADDER(Local_806, 1);
							TASK::TASK_LOOK_AT_ENTITY(Local_793, Local_806, 8000, 0, 2);
							iLocal_2040 = 2;
							iLocal_79 = 1;
							Local_806.f_4 = 0;
							Local_806.f_3++;
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - Local_806.f_4) > 1000)
				{
					func_287();
					if (bLocal_99)
					{
						Local_806.f_8 = { -593.268f, -1639.526f, 18.9594f };
					}
					else
					{
						Local_806.f_8 = { -592.8024f, -1642.528f, 18.9567f };
					}
					if (SYSTEM::VDIST2(Var4, Local_806.f_8) >= 1.3f)
					{
						if ((TASK::GET_SCRIPT_TASK_STATUS(Local_806, 2106541073) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_806, 713668775) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_806, 242628503) != 1)
						{
							if (SYSTEM::VDIST2(Var4, Local_806.f_8) > 16f)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_806, Local_806.f_8, 2f, 20000, 0.25f, 512, 150f);
							}
							else
							{
								TASK::TASK_GO_STRAIGHT_TO_COORD(Local_806, Local_806.f_8, 1f, 20000, 150f, 0.1f);
							}
						}
					}
				}
				break;
			
			case 59:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_18");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_18"))
				{
					Var42 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("misslamar1lam_1_ig_18", "lam_1_ig_18_stretch", -593.06f, -1642.835f, 19.004f, 0f, 0f, 0f, 0.421f, 2) };
				}
				if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					if (Var7.f_2 > Var4.f_2)
					{
						bVar41 = true;
					}
				}
				if (PED::IS_PED_CLIMBING(Local_806))
				{
					if (bVar41)
					{
						if (iLocal_2040 != 0)
						{
							PED::_0x1A330D297AAC6BC1(Local_806, 0);
							iLocal_2040 = 0;
						}
					}
					else if (iLocal_2040 != 2)
					{
						PED::_0x1A330D297AAC6BC1(Local_806, 2);
						iLocal_2040 = 2;
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_806, 1715483475) == 1)
				{
					func_286(Var7, Var4, 0);
					if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_18"))
					{
						Local_806.f_8 = { Var42 };
						if (MISC::ABSF((Var4.f_2 - Var42.f_2)) < 0.2f)
						{
							if (!bVar41)
							{
								Local_806.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-593.06f, -1642.835f, 19.004f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_806, Local_806.f_6, "misslamar1lam_1_ig_18", "lam_1_ig_18_stretch", 1.5f, -1.5f, 5, 601, 1.5f, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6, 0.421f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_806, joaat("weapon_pistol"), 1);
								Local_806.f_4 = 0;
								Local_806.f_3++;
							}
						}
					}
				}
				else if (MISC::ABSF((Var4.f_2 - Var42.f_2)) > 0.2f)
				{
					iLocal_79 = 0;
					iLocal_88 = 0;
					Local_806.f_4 = 0;
					Local_806.f_3 = (Local_806.f_3 - 1);
				}
				else if (!bVar41)
				{
					TASK::TASK_CLIMB_LADDER(Local_806, 1);
				}
				break;
			
			case 60:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_19");
				Local_806.f_8 = { -596.36f, -1649.46f, 25.14f };
				if (iLocal_105)
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6) > 0.7f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
					{
						iLocal_105 = 0;
					}
				}
				if (func_273(&Local_1780) < 2)
				{
					if ((bLocal_65 || iLocal_60) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -593.1262f, -1643.063f, 23f, -592.6035f, -1642.084f, 26.9577f, 1.5f, 0, 1, 0))
					{
						bVar45 = true;
					}
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6) > 0.9f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
				{
					if (bVar45)
					{
						if (SYSTEM::VDIST2(Var4, Local_806.f_8) < 2f || (ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(Local_806), Var4, 1) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(Local_806), Local_806.f_8, 1)))
						{
							bLocal_106 = false;
							Local_806.f_4 = 0;
							Local_806.f_3 = 100;
						}
						else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
						{
							bLocal_106 = true;
							Local_806.f_4 = 0;
							Local_806.f_3 = 100;
						}
					}
					else
					{
						if (Local_806.f_6 != -1)
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_806, -8f, 1);
							Local_806.f_6 = -1;
						}
						if (SYSTEM::VDIST2(Var4, Local_806.f_8) > 2f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_806, 242628503) != 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar10);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_806.f_8, -563.72f, -1649f, 29.8111f, 2f, 0, 0.25f, 0.5f, 1, 512, 0, -957453492);
								if (func_273(&Local_1780) >= 2)
								{
									TASK::TASK_SHOOT_AT_ENTITY(0, iLocal_776, -1, -687903391);
								}
								else
								{
									TASK::TASK_AIM_GUN_AT_COORD(0, -563.72f, -1649f, 29.8111f, -1, 0, 0);
								}
								TASK::CLOSE_SEQUENCE_TASK(uVar10);
								TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
								TASK::CLEAR_SEQUENCE_TASK(&uVar10);
							}
						}
					}
				}
				else
				{
					func_286(Var7, Var4, 1);
				}
				break;
			
			case 100:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_19");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_19"))
				{
					Local_806.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-593.078f, -1642.909f, 18.951f, 0f, 0f, 0f, 2);
					if (bLocal_106)
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_806, Local_806.f_6, "misslamar1lam_1_ig_19", "LAM_1_IG_19_by_ladder_stretch", 1.5f, -1.5f, 5, 603, 1.5f, 0);
					}
					else
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_806, Local_806.f_6, "misslamar1lam_1_ig_19", "lam_1_ig_19_stretch", 1.5f, -1.5f, 5, 603, 1.5f, 0);
					}
					PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6, 0f);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 1);
					PED::SET_PED_CONFIG_FLAG(Local_806, 131, 0);
					Local_806.f_4 = 0;
					Local_806.f_3++;
				}
				break;
			
			case 101:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
				{
					if (((bLocal_106 && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6) > 0.755f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6) < 0.892f) || ((!bLocal_106 && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6) > 0.594f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6) < 0.71f))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -603.7463f, -1697.936f, 24.04358f, -602.3535f, -1695.987f, 26.90152f, 1f, 0, 1, 0))
						{
							PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
						}
					}
					if (iLocal_60 && bLocal_62)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6) < 0.7f)
						{
							if (!CAM::IS_SPHERE_VISIBLE(-603.1f, -1696.5f, 24.9f, 1f) && !CAM::IS_SPHERE_VISIBLE(Var4, 1f))
							{
								PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6, 0.7f);
							}
						}
					}
				}
				if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6) > 0.99f) || ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_806.f_6) > 0.75f) && SYSTEM::VDIST2(Var4, -605.1f, -1699.6f, 23.3f) < 4f)) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar10);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -606.7747f, -1700.015f, 23.0618f, -625.4585f, -1699.599f, 24.8108f, 1f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, -625.4585f, -1699.599f, 24.8108f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar10);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_806, -8f, 1);
					TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar10);
					TASK::CLEAR_SEQUENCE_TASK(&uVar10);
					Local_806.f_6 = -1;
					Local_806.f_4 = 0;
					Local_806.f_3++;
				}
				break;
		}
		func_285(&Local_806, &(Local_806.f_7));
	}
}

void func_285(var uParam0, var uParam1)//Position - 0x2C991
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		bVar0 = true;
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam0);
			if (PED::IS_PED_RAGDOLL(*uParam0))
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f))
				{
					if (!FIRE::IS_EXPLOSION_IN_SPHERE(23, ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 5f))
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, 0);
						ENTITY::SET_ENTITY_HEALTH(*uParam0, 0);
						bVar0 = false;
					}
				}
				else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if ((*uParam1 - ENTITY::GET_ENTITY_HEALTH(*uParam0)) > 100)
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, 0);
						ENTITY::SET_ENTITY_HEALTH(*uParam0, 0);
						bVar0 = false;
					}
				}
			}
		}
		if (bVar0)
		{
			*uParam1 = ENTITY::GET_ENTITY_HEALTH(*uParam0);
		}
	}
}

void func_286(struct<3> Param0, struct<3> Param3, int iParam6)//Position - 0x2CA3E
{
	float fVar0;
	
	if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
	{
		fVar0 = (Param3.f_2 - Param0.f_2);
		if (fVar0 > 0f)
		{
			if (fVar0 < 3f)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
				if (fVar0 < 1.8f || (iParam6 && fVar0 < 2f))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 32, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
				}
			}
		}
	}
}

void func_287()//Position - 0x2CA9E
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	bool bVar9;
	
	Var0 = { -592.8243f, -1642.23f, 18.9575f };
	if (!PED::IS_PED_INJURED(Local_793) && !PED::IS_PED_INJURED(Local_793))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(Local_793, 1) };
		Var6 = { ENTITY::GET_ENTITY_COORDS(Local_806, 1) };
		bVar9 = false;
		if (bLocal_64 || (bLocal_78 && Var3.f_2 > 22f))
		{
			bLocal_99 = false;
			bVar9 = true;
		}
		if (bLocal_66 || (iLocal_79 && Var6.f_2 > 22f))
		{
			bLocal_99 = true;
			bVar9 = true;
		}
		if (!bVar9)
		{
			bLocal_99 = SYSTEM::VDIST2(Var0, Var3) < SYSTEM::VDIST2(Var0, Var6);
		}
	}
}

void func_288(int iParam0)//Position - 0x2CB51
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &uVar0, 1);
	WEAPON::SET_AMMO_IN_CLIP(*iParam0, uVar0, WEAPON::GET_MAX_AMMO_IN_CLIP(*iParam0, uVar0, 1));
}

int func_289(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8)//Position - 0x2CB78
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*25*/]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA((*iParam0)[iVar0 /*25*/], Param1, Param4, fParam7, 0, 1, 0) || (iParam8 && OBJECT::IS_POINT_IN_ANGLED_AREA((iParam0[iVar0 /*25*/])->f_14, Param1, Param4, fParam7, 0, 1)))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_290(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6, float fParam7)//Position - 0x2CBEB
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1) && PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam1) >= fParam5)
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, fParam7, 1);
			*uParam1 = -1;
			TASK::TASK_AIM_GUN_AT_COORD(*iParam0, Param2, -1, iParam6, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
		}
	}
}

int func_291(int iParam0, var uParam1, struct<3> Param2, struct<3> Param5, int iParam8, bool bParam9, bool bParam10, float fParam11, bool bParam12, int iParam13)//Position - 0x2CC3D
{
	int iVar0;
	var uVar1;
	float fVar2;
	
	iVar0 = 1;
	fVar2 = SYSTEM::VDIST2(Param2, ENTITY::GET_ENTITY_COORDS(*iParam0, 1));
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (!PED::IS_PED_IN_COVER(*iParam0, 1) || fVar2 > 4f)
		{
			*uParam1 = 0;
			if ((TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 242628503) != 0) || PED::IS_PED_IN_COMBAT(*iParam0, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
				if (fVar2 > 4f)
				{
					if (bParam9)
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Param2, Param5, 2f, 0, 0.25f, 1f, 1, 0, 0, -957453492);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param2, 2f, 20000, 0.25f, 0, 1193033728);
					}
				}
				if (bParam10)
				{
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Param2, 10000, 0, fParam11, bParam12, iParam13, iParam8, 1);
				}
				else if (iParam8 == 0)
				{
					TASK::TASK_SEEK_COVER_TO_COORDS(0, Param2, Param5, 10000, 0);
				}
				else
				{
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, iParam8, Param5, 10000, 0);
				}
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
			}
		}
		else if (*uParam1 == 0 || (MISC::GET_GAME_TIMER() - *uParam1) > 1500)
		{
			*uParam1 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - *uParam1) > 500)
		{
			iVar0 = 0;
		}
		if (func_294(*iParam0, Param2, 4f, 1073741824, 0, 1))
		{
			iVar0 = 2;
		}
	}
	return iVar0;
}

void func_292(var uParam0, var uParam1, var uParam2, struct<3> Param3, float fParam6, float fParam7, bool bParam8, int iParam9, int iParam10, float fParam11)//Position - 0x2CDBB
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1))
		{
			*uParam2 = MISC::GET_GAME_TIMER();
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam1) >= fParam6)
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, fParam11, 1);
				*uParam1 = -1;
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), Param3) < 2f)
				{
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Param3, 1500, 0, fParam7, bParam8, iParam9, iParam10, 0);
				}
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				if (bParam8)
				{
					PED::SET_PED_CONFIG_FLAG(*uParam0, 131, 1);
				}
			}
		}
		else if ((MISC::GET_GAME_TIMER() - *uParam2) > 2500)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, -1442466670) != 1 && !PED::IS_PED_IN_COMBAT(*uParam0, 0))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, fParam11, 1);
				*uParam1 = -1;
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 50f, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
	}
}

void func_293(var uParam0, var uParam1, struct<3> Param2, float fParam5, float fParam6, bool bParam7, int iParam8, int iParam9, float fParam10)//Position - 0x2CEBB
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam1) >= fParam5)
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, fParam10, 1);
				*uParam1 = -1;
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*uParam0, Param2, -1, 0, fParam6, bParam7, iParam8, iParam9, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
				if (bParam7)
				{
					PED::SET_PED_CONFIG_FLAG(*uParam0, 131, 1);
				}
			}
		}
		else if (*uParam1 != -1)
		{
			*uParam1 = -1;
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), Param2) < 4f)
			{
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*uParam0, Param2, -1, 0, fParam6, bParam7, iParam8, iParam9, 1);
			}
		}
	}
}

int func_294(int iParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x2CF5A
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		fVar6 = SYSTEM::VDIST(Var3, Param1);
		fVar7 = SYSTEM::VDIST(Var0, Param1);
		if (fVar6 < fParam4)
		{
			if ((fVar7 < fVar6 || !bParam7) && fVar7 < fParam5)
			{
				if (bParam6)
				{
					if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_295(int iParam0, var uParam1, struct<3> Param2, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2CFE0
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (*uParam1 != 0)
		{
			TASK::REMOVE_COVER_POINT(*uParam1);
			*uParam1 = 0;
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(Param2))
		{
			*uParam1 = TASK::ADD_COVER_POINT(Param2, fParam5, iParam7, iParam8, iParam9, 0);
		}
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, Param2, fParam6, iParam10, 0);
	}
}

void func_296(int iParam0)//Position - 0x2D033
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	bool bVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	int iVar22;
	bool bVar23;
	bool bVar24;
	struct<3> Var25;
	struct<3> Var28;
	struct<3> Var31;
	struct<3> Var34;
	struct<3> Var37;
	struct<3> Var40;
	struct<3> Var43;
	bool bVar46;
	struct<3> Var47;
	int iVar50;
	struct<6> Var51;
	int iVar57;
	
	if (!PED::IS_PED_INJURED(Local_793))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_793, 1) };
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		bVar9 = (PED::IS_PED_IN_COMBAT(Local_793, 0) || TASK::GET_SCRIPT_TASK_STATUS(Local_793, -1442466670) == 1);
		iVar10 = 0;
		iVar11 = Local_793.f_3;
		fVar14 = SYSTEM::VDIST2(Var1, Var4);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_354);
		PED::SET_PED_RESET_FLAG(Local_793, 227, 1);
		switch (Local_793.f_3)
		{
			case 0:
				bLocal_59 = false;
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_2_p1");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_2_p1"))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() || iParam0)
					{
						Local_793.f_8 = { -616.5454f, -1633.308f, 32.0106f };
						func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 261.3191f, 2f, 1, 0, 1, 1);
						if (!iLocal_123 || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
						{
							Local_793.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-617.689f, -1629.484f, 32.038f, 0f, 0f, 175f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_793, Local_793.f_6, "misslamar1ig_2_p1", "ig_2_p1_lamar", 4f, -8f, 5, 153, 4f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6, 0f);
						}
						PED::SET_SYNCHRONIZED_SCENE_RATE(Local_793.f_6, 1f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
						Local_793.f_11 = 0;
						Local_793.f_12 = 0;
						Local_793.f_4 = 0;
						Local_793.f_3++;
					}
				}
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_4");
				if (!Local_793.f_11)
				{
					if (func_294(Local_793, Local_793.f_8, 5f, 1073741824, 0, 1))
					{
						if (!bVar8)
						{
							if (Local_793.f_12)
							{
								Local_793.f_8 = { -616.5454f, -1633.308f, 32.0106f };
								func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 261.3191f, 2f, 1, 0, 1, 1);
								Local_793.f_12 = 0;
							}
							else
							{
								Local_793.f_8 = { -621.3306f, -1632.293f, 32.0105f };
								func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 279.3376f, 2f, 2, 0, 1, 1);
								Local_793.f_12 = 1;
							}
							bVar7 = true;
							Local_793.f_11 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_793, -8f, 1);
							Local_793.f_6 = -1;
						}
					}
				}
				fVar13 = SYSTEM::VDIST2(Var1, Local_793.f_8);
				if ((func_274(&Local_1021) && PED::IS_PED_INJURED(Local_1123[0 /*25*/])) && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_4"))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
					{
						func_293(&Local_793, &(Local_793.f_6), Local_793.f_8, 0.96f, 0.5f, 1, 1, Local_793.f_2, -1056964608);
					}
					else
					{
						Local_793.f_12 = 0;
						Local_793.f_11 = 0;
						Local_793.f_4 = 0;
						Local_793.f_3++;
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && !Local_793.f_11)
				{
					func_292(&Local_793, &(Local_793.f_6), &(Local_793.f_4), Local_793.f_8, 0.96f, 0.5f, 1, 1, Local_793.f_2, -1056964608);
				}
				else if (Local_793.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_793, 242628503) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6)) && (fVar13 > 4f || !bVar9)))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					Local_793.f_11 = 0;
				}
				break;
			
			case 2:
				func_292(&Local_793, &(Local_793.f_6), &(Local_793.f_4), Local_793.f_8, 1f, 0.5f, 1, 0, Local_793.f_2, -1056964608);
				if (((!PED::IS_PED_INJURED(Local_1123[1 /*25*/]) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.45f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) < 0.5f)
				{
					PED::SET_PED_SHOOTS_AT_COORD(Local_793, -605f, -1631.61f, 33.68f, 0);
				}
				if (func_274(&Local_1123) && func_274(&Local_1021))
				{
					Local_793.f_8 = { -601.2477f, -1617.87f, 32.0105f };
					TASK::REMOVE_COVER_POINT(Local_793.f_2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_793, Local_793.f_8, 1f, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, -599f, -1618f, 33.5f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, -589.2117f, -1619.245f, 33.7295f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				break;
			
			case 3:
				if ((Local_793.f_4 == 0 && !GlobalFunc_5172(&Local_819, 1)) && !PED::IS_PED_INJURED(Local_806))
				{
					if (func_298(Var4, Var1, ENTITY::GET_ENTITY_COORDS(Local_806, 1)))
					{
						Local_793.f_4 = MISC::GET_GAME_TIMER();
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -588.0685f, -1619.129f, 32.0334f, -606.6573f, -1617.368f, 34.5106f, 5.5f, 0, 1, 0))
				{
					Local_793.f_8 = { -589.94f, -1620.08f, 32.0106f };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_793, Local_793.f_8, 1f, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, -588.0685f, -1619.129f, 32.0334f, -606.6573f, -1617.368f, 34.5106f, 5.5f, 0, 1, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -603.2654f, -1617.911f, 32.0105f, 2f, 20000, 1f, 1, 1193033728);
					}
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, -590.2297f, -1621.969f, 33.5192f, 2f, 0, 0.25f, 2f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, -590.2297f, -1621.969f, 33.5192f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_793, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_CORRIDOR");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_START"))
					{
						AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_START");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_COVER_LAMAR"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_SHOOTOUT_COVER_LAMAR");
					}
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				break;
			
			case 4:
				if ((!iLocal_130[5] && !GlobalFunc_5172(&Local_819, 1)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, -588.0685f, -1619.129f, 32.0334f, -606.6573f, -1617.368f, 34.5106f, 5.5f, 0, 1, 0))
				{
					if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_AHEAD", 7, 0, 0, 0))
					{
						iLocal_130[5] = 1;
					}
				}
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_5");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_5") && Local_1072[0 /*25*/].f_5 > 0)
				{
					Local_793.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-599.1f, -1619.598f, 32.001f, 0f, 0f, -95f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_793, Local_793.f_6, "misslamar1ig_5", "lamar", 1.5f, -1.5f, 5, 601, 1.5f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6, 0.675f);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
					PED::SET_CAN_ATTACK_FRIENDLY(PLAYER::PLAYER_PED_ID(), 1, 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_COVER_LAMAR"))
					{
						AUDIO::STOP_AUDIO_SCENE("LAMAR_1_SHOOTOUT_COVER_LAMAR");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_SHOOTOUT_SAVE_LAMAR"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_SHOOTOUT_SAVE_LAMAR");
					}
					RECORDING::_0x293220DA1B46CEBC(2f, 1073741824, 3);
					iLocal_61 = 1;
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				break;
			
			case 5:
				if (!iLocal_130[1])
				{
					if (!GlobalFunc_5172(&Local_819, 1))
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_KNOCK", 7, 0, 0, 0))
						{
							iLocal_130[1] = 1;
						}
					}
					else
					{
						GlobalFunc_4956();
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.9f)
					{
						Local_793.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-599.1f, -1619.598f, 32.001f, 0f, 0f, -95f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_793, Local_793.f_6, "misslamar1ig_5", "p3_lamar", 1.5f, -1.5f, 5, 601, 8f, 0);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1072[0 /*25*/].f_8))
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6, PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1072[0 /*25*/].f_8));
						}
						Local_793.f_4 = 0;
						Local_793.f_3++;
					}
				}
				break;
			
			case 6:
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_6");
				if (!PED::IS_PED_INJURED(Local_1072[1 /*25*/]) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1072[1 /*25*/].f_8))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.45f)
						{
							PED::SET_SYNCHRONIZED_SCENE_RATE(Local_793.f_6, -0.8f);
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) < 0.28f)
						{
							PED::SET_SYNCHRONIZED_SCENE_RATE(Local_793.f_6, 0.8f);
						}
					}
				}
				if (func_274(&Local_1072) && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_6"))
				{
					if (Local_793.f_4 == 0)
					{
						Local_793.f_4 = MISC::GET_GAME_TIMER();
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.35f)
						{
							Local_793.f_4 = (Local_793.f_4 - 500);
						}
					}
					else if ((MISC::GET_GAME_TIMER() - Local_793.f_4) > 500)
					{
						Local_793.f_8 = { -588.95f, -1620.83f, 32.0105f };
						Local_793.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-599.1f, -1619.598f, 32.001f, 0f, 0f, 175f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_793, Local_793.f_6, "misslamar1ig_6", "ig_6_lamar", 8f, -4f, 5, 601, 8f, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6, 0f);
						PED::SET_SYNCHRONIZED_SCENE_RATE(Local_793.f_6, 1f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
						PED::SET_CAN_ATTACK_FRIENDLY(PLAYER::PLAYER_PED_ID(), 0, 0);
						iLocal_61 = 0;
						iLocal_302 = 0;
						Local_793.f_4 = 0;
						Local_793.f_3++;
					}
				}
				else if ((!PED::IS_PED_INJURED(Local_1072[0 /*25*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_793, Local_1072[0 /*25*/], 1)) || (!PED::IS_PED_INJURED(Local_1072[1 /*25*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_793, Local_1072[1 /*25*/], 1)))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_793, 0);
					PED::SET_PED_TO_RAGDOLL(Local_793, 1000, 2000, 2, 1, 1, 0);
					PED::APPLY_DAMAGE_TO_PED(Local_793, ENTITY::GET_ENTITY_HEALTH(Local_793) + 50, 1);
				}
				break;
			
			case 7:
				if (!iLocal_130[6])
				{
					if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_BREACH2", 7, 0, 0, 0))
					{
						iLocal_130[6] = 1;
					}
				}
				else if (!iLocal_130[7])
				{
					if (!GlobalFunc_5172(&Local_819, 1))
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_BREACH3", 7, 0, 0, 0))
						{
							iLocal_130[7] = 1;
						}
					}
				}
				func_290(&Local_793, &(Local_793.f_6), -589.4374f, -1628.932f, 33.7582f, 1065353216, 1, -1056964608);
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_23_b");
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -588.1853f, -1619.154f, 32.0105f, -592.5206f, -1618.995f, 34.7605f, 4.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -566.4107f, -1627.291f, 32.05611f, -592.1121f, -1624.949f, 34.76048f, 7.25f, 0, 1, 0)) && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_23_b"))
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.6f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
					{
						Local_793.f_8 = { -585.6258f, -1628.18f, 32.0105f };
						TASK::REMOVE_COVER_POINT(Local_793.f_2);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_793, Local_793.f_8, 1f, 0, 0);
						if (SYSTEM::VDIST2(Var4, -589.4396f, -1621.624f, 32.0106f) < 3f)
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, -583.7613f, -1628.281f, 33.6858f, 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						}
						else
						{
							Local_793.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-589.133f, -1620.554f, 33.016f, 0f, 0f, 168f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_793, Local_793.f_6, "misslamar1lam_1_ig_23_b", "lam_1_ig_23_b", 4f, -4f, 5, 601, 4f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
						}
						Local_793.f_4 = MISC::GET_GAME_TIMER();
						Local_793.f_3++;
					}
				}
				else if (!GlobalFunc_5172(&Local_819, 1))
				{
					if (iLocal_130[7])
					{
						if (!iLocal_130[8] && SYSTEM::VDIST2(Var1, Local_793.f_8) < 2f)
						{
							if (iLocal_302 == 0)
							{
								iLocal_302 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_302) > 5000)
							{
								if (SYSTEM::VDIST2(Var1, Var4) < 400f)
								{
									if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_GOGO", 7, 0, 0, 0))
									{
										iLocal_130[8] = 1;
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (!iLocal_130[9])
				{
					if (Local_1199[0 /*25*/].f_5 > 0)
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_GENL2", 8, 0, 0, 0))
						{
							iLocal_130[9] = 1;
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
				{
					func_297(&Local_793, &(Local_793.f_6), 0.99f, 1, -4f);
				}
				if ((PED::IS_PED_INJURED(Local_1199[0 /*25*/]) && PED::IS_PED_INJURED(Local_1199[1 /*25*/])) && Local_1199[0 /*25*/].f_2)
				{
					Local_793.f_8 = { -578.9801f, -1628.939f, 32.0105f };
					TASK::REMOVE_COVER_POINT(Local_793.f_2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_793, Local_793.f_8, 3f, 0, 0);
					Local_793.f_12 = 0;
					Local_793.f_11 = 1;
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				if (!iLocal_116)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
					{
						if (PED::IS_PED_SHOOTING(Local_793))
						{
							MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(-568.3865f, -1630.186f, 33.54812f, -568.45f, -1631.329f, 33.60714f, 0, 1, joaat("weapon_pumpshotgun"), PLAYER::PLAYER_PED_ID(), 0, 1, -1082130432);
							iLocal_116 = 1;
						}
					}
				}
				break;
			
			case 9:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
				{
					func_297(&Local_793, &(Local_793.f_6), 0.99f, 1, -4f);
				}
				if (func_274(&Local_1199))
				{
					Local_793.f_8 = { -564.5422f, -1628.349f, 32.0098f };
					TASK::REMOVE_COVER_POINT(Local_793.f_2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_793, Local_793.f_8, 1f, 0, 0);
					Local_793.f_12 = 0;
					Local_793.f_11 = 1;
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				break;
			
			case 10:
				fVar16 = SYSTEM::VDIST2(Var1, Local_793.f_8);
				fVar17 = ENTITY::GET_ENTITY_HEADING(Local_793);
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_9");
				if (!GlobalFunc_5172(&Local_819, 1))
				{
					if (Local_793.f_4 == 0)
					{
						if (!PED::IS_PED_INJURED(Local_806))
						{
							if (func_298(Var4, Var1, ENTITY::GET_ENTITY_COORDS(Local_806, 1)))
							{
								Local_793.f_4 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (fVar16 > 1.2f && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) || Local_793.f_11))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_793, 242628503) != 1 || Local_793.f_11)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_793, -8f, 1);
							Local_793.f_6 = -1;
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						if (fVar16 > 25f)
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -566.4057f, -1629.305f, 32.0105f, -565.2f, -1632.1f, 33.6f, 2f, 0, 0.5f, 2f, 1, 1, 0, -957453492);
						}
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, -565.2f, -1632.1f, 33.6f, 1f, 0, 0.05f, 1f, 1, 4608, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_COORD(0, -580f, -1682f, 38.5f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						Local_793.f_11 = 0;
					}
				}
				if ((((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && fVar16 < 1.2f) && MISC::ABSF((fVar17 - 160f)) < 20f) && ENTITY::GET_ENTITY_SPEED(Local_793) < 0.1f) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) >= 1f))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -561.0819f, -1629.639f, 32.0533f, -570.0524f, -1628.872f, 34.2605f, 3.25f, 0, 1, 0) || Var4.f_2 < 32f)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_9"))
						{
							Local_793.f_8 = { -561.9443f, -1623.503f, 30.0091f };
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_793, Local_793.f_8, 1f, 0, 0);
							Local_793.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-587.039f, -1626.984f, 32.008f, 0f, 0f, 175f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_793, Local_793.f_6, "misslamar1ig_9", "lamar_stairs", 4f, -1.5f, 5, 601, 8f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6, 0.01f);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
							iLocal_302 = 0;
							Local_793.f_4 = 0;
							Local_793.f_3++;
						}
					}
					else if (!GlobalFunc_5172(&Local_819, 1) && !iLocal_130[10])
					{
						if (iLocal_302 == 0)
						{
							iLocal_302 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_302) > 3000)
						{
							if (SYSTEM::VDIST2(Var1, Var4) < 400f)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_GOGO", 7, 0, 0, 0))
								{
									iLocal_130[10] = 1;
								}
							}
						}
					}
				}
				if (Local_1754[0 /*25*/].f_5 > 0)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
					{
						iLocal_302 = 0;
						Local_793.f_4 = 0;
						Local_793.f_3++;
					}
				}
				break;
			
			case 11:
				func_290(&Local_793, &(Local_793.f_6), -580f, -1682f, 38.5f, 1065353216, 1, -1056964608);
				if (Local_1754[0 /*25*/].f_5 > 0 || PED::IS_PED_INJURED(Local_1754[0 /*25*/]))
				{
					if (PED::IS_PED_INJURED(Local_1754[0 /*25*/]) || (!PED::IS_PED_INJURED(Local_1754[0 /*25*/]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1754[0 /*25*/], -563.84f, -1632.11f, 25.76f, -563.15f, -1626.45f, 30.89f, 5f, 0, 1, 0)))
					{
						Local_793.f_8 = { -563.824f, -1622.483f, 30.0094f };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_793, Local_793.f_8, 2f, 0, 0);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_793, -1.5f, 1);
							bVar18 = true;
							Local_793.f_6 = -1;
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						if (bVar18)
						{
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, -564.2987f, -1631.583f, 30.0554f, 2f, 0, 0.5f, 4f, 1, 512, 0, -957453492);
						}
						if (!PED::IS_PED_INJURED(Local_1754[0 /*25*/]))
						{
							TASK::TASK_COMBAT_PED(0, Local_1754[0 /*25*/], 0, 16);
						}
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						Local_793.f_4 = 0;
						Local_793.f_3++;
					}
				}
				else if (!GlobalFunc_5172(&Local_819, 1))
				{
					if (SYSTEM::VDIST2(Var1, Var4) < 400f)
					{
						if (!iLocal_130[11])
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_STAIRS", 7, 0, 0, 0))
							{
								iLocal_130[11] = 1;
							}
						}
						else if (!iLocal_130[12])
						{
							if (iLocal_302 == 0)
							{
								iLocal_302 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_302) > 3000)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_FIRST", 7, 0, 0, 0))
								{
									iLocal_130[12] = 1;
								}
							}
						}
					}
				}
				break;
			
			case 12:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
				{
					STREAMING::REMOVE_ANIM_DICT("misslamar1ig_9");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_23");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_23_b");
					STREAMING::REMOVE_ANIM_DICT("misslamar1ig_6");
					STREAMING::REMOVE_ANIM_DICT("misslamar1ig_5");
					STREAMING::REMOVE_ANIM_DICT("misslamar1ig_4");
					STREAMING::REMOVE_ANIM_DICT("misslamar1ig_2_p1");
				}
				if (func_274(&Local_1754))
				{
					if (Var4.f_2 < 29.1f || Local_1325[0 /*25*/].f_5 > 0)
					{
						Local_793.f_8 = { -564.3741f, -1630.452f, 28.0096f };
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, -561.7f, -1626.3f, 29.3f, 2f, 0, 0.5f, 4f, 1, 512, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_COORD(0, -561.7f, -1626.3f, 29.3f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						Local_793.f_11 = 0;
						Local_793.f_4 = 0;
						Local_793.f_3++;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_793, 1237250926) != 1)
					{
						TASK::TASK_AIM_GUN_AT_COORD(Local_793, -564.2987f, -1631.583f, 30.0554f, -1, 0, 0);
					}
				}
				break;
			
			case 13:
				if (iLocal_130[13])
				{
					if (!iLocal_130[14])
					{
						if (SYSTEM::VDIST2(Var1, Var4) < 625f)
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_FIRST", 7, 0, 0, 0))
							{
								iLocal_130[14] = 1;
							}
						}
					}
				}
				if (Var4.f_2 < 27.1f || Local_1325[0 /*25*/].f_5 > 0)
				{
					Local_793.f_8 = { -561.3693f, -1626.759f, 27.2101f };
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, -560.4027f, -1602.119f, 27.3222f, 2f, 0, 0.5f, 4f, 1, 512, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, -560.4027f, -1602.119f, 27.3222f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					iLocal_302 = 0;
					Local_793.f_11 = 0;
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				break;
			
			case 14:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_26_alt1");
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_26");
				if (!iLocal_130[15])
				{
					if (iLocal_302 == 0)
					{
						if (!GlobalFunc_5172(&Local_819, 1))
						{
							iLocal_302 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_302) > 5000)
					{
						if (SYSTEM::VDIST2(Var1, Var4) < 625f)
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_DELAY", 7, 0, 0, 0))
							{
								iLocal_130[15] = 1;
							}
						}
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_26_alt1") && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_26"))
				{
					if (Local_1325[0 /*25*/].f_5 > 0 || (Local_1325[0 /*25*/].f_2 && PED::IS_PED_INJURED(Local_1325[0 /*25*/])))
					{
						Local_793.f_11 = 1;
						Local_793.f_4 = 0;
						Local_793.f_3++;
					}
				}
				break;
			
			case 15:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_26_alt1");
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_26");
				if (SYSTEM::VDIST2(Var1, Local_793.f_8) < 0.15f)
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_26_alt1") && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_26"))
					{
						Local_793.f_8 = { -560.3149f, -1611.988f, 26.011f };
						func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 353.8994f, 1f, 1, 0, 1, 1);
						Local_793.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-562.36f, -1621.636f, 27.012f, 0f, 0f, -6f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_793, Local_793.f_6, "misslamar1lam_1_ig_26_alt1", "lam_1_ig_26_alt_1", 4f, -8f, 5, 601, 8f, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
						Local_793.f_4 = 0;
						Local_793.f_3++;
					}
				}
				else
				{
					iVar19 = TASK::GET_SCRIPT_TASK_STATUS(Local_793, 242628503);
					if ((iVar19 != 1 || (iVar19 == 1 && TASK::GET_SEQUENCE_PROGRESS(Local_793) >= 3)) || Local_793.f_11)
					{
						Local_793.f_8 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("misslamar1lam_1_ig_26_alt1", "lam_1_ig_26_alt_1", -562.36f, -1621.636f, 27.012f, 0f, 0f, -6f, 0, 2) };
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_354, Local_793.f_8, &iVar10);
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_354, 0, 8, (iVar10 - 2));
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, -560.4027f, -1602.119f, 27.3222f, 2f, 0, 0.1f, 4f, 1, 512, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_COORD(0, -560.4027f, -1602.119f, 27.3222f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						Local_793.f_11 = 0;
					}
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_354, Var1, &uVar20);
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_354, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &uVar21);
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_793))
					{
						TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Local_793, -562.5f, -1626.1f, 28.4f, 0);
					}
				}
				break;
			
			case 16:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
				{
					if (Local_793.f_4 == 0)
					{
						Local_793.f_4 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_793.f_4) > 1000 || !PED::IS_PED_IN_COVER(Local_793, 0))
					{
						if (!GlobalFunc_537(Local_793.f_8, -560.3149f, -1611.988f, 26.011f, 1056964608))
						{
							Local_793.f_8 = { -560.3149f, -1611.988f, 26.011f };
							func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 356.9735f, 1f, 1, 0, 1, 1);
						}
						Local_793.f_12 = 0;
						Local_793.f_11 = 1;
						Local_793.f_4 = 0;
						Local_793.f_3++;
					}
				}
				else
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) < 0.7f)
					{
						PED::SET_PED_CAPSULE(Local_793, 1f);
					}
					func_293(&Local_793, &(Local_793.f_6), Local_793.f_8, 0.98f, 0.5f, 1, 1, 0, -1056964608);
					if (func_294(Local_793, Local_793.f_8, 5f, 1073741824, 0, 1))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_793, -8f, 1);
						Local_793.f_8 = { -562.7417f, -1616.397f, 26.011f };
						func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 356.9735f, 1f, 0, 0, 1, 1);
						Local_793.f_12 = 1;
						Local_793.f_11 = 1;
						Local_793.f_4 = 0;
						Local_793.f_3++;
					}
				}
				break;
			
			case 17:
				if (!Local_793.f_11)
				{
					if (func_294(Local_793, Local_793.f_8, 5f, 2f, 0, 0))
					{
						if (Local_793.f_12)
						{
							Local_793.f_8 = { -560.3149f, -1611.988f, 26.011f };
							func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 356.9735f, 2f, 1, 0, 1, 1);
							Local_793.f_12 = 0;
						}
						else
						{
							Local_793.f_8 = { -562.7417f, -1616.397f, 26.011f };
							func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 356.9735f, 2f, 0, 0, 1, 1);
							Local_793.f_12 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_793, -8f, 1);
							Local_793.f_6 = -1;
						}
						bVar7 = true;
						Local_793.f_11 = 1;
					}
				}
				fVar13 = SYSTEM::VDIST2(Var1, Local_793.f_8);
				if (func_274(&Local_1325))
				{
					if (Local_793.f_4 == 0)
					{
						Local_793.f_4 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - Local_793.f_4) > 500)
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						if (fVar13 > 9f)
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, -562f, -1602.3f, 27.6f, 2f, 0, 0.5f, 0.5f, 1, 1, 0, -957453492);
						}
						TASK::TASK_AIM_GUN_AT_COORD(0, -562f, -1602.3f, 27.6f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						Local_793.f_11 = 0;
						Local_793.f_4 = 0;
						Local_793.f_3++;
					}
				}
				else if (Local_793.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_793, 242628503) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6)) && (fVar13 > 4f || !bVar9)))
				{
					if (Local_1325[0 /*25*/].f_5 > 0)
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						Local_793.f_11 = 0;
					}
				}
				break;
			
			case 18:
				if (!iLocal_130[16])
				{
					if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_FIRST", 7, 0, 0, 0))
					{
						iLocal_130[16] = 1;
						iLocal_302 = 0;
					}
				}
				else if (!iLocal_130[17])
				{
					if (iLocal_302 == 0)
					{
						if (!GlobalFunc_5172(&Local_819, 1))
						{
							iLocal_302 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_302) > 5000)
					{
						if (SYSTEM::VDIST2(Var1, Var4) < 625f)
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_DELAY", 7, 0, 0, 0))
							{
								iLocal_130[17] = 1;
							}
						}
					}
				}
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -567.3907f, -1601.248f, 26.0108f, -563.4156f, -1601.658f, 28.2608f, 3.75f, 0, 1, 0) || Local_1426[0 /*25*/].f_5 > 0) || PED::IS_PED_INJURED(Local_1426[0 /*25*/]))
				{
					Local_793.f_8 = { -562.7458f, -1602.204f, 26.0108f };
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, -566.3f, -1601.3f, 27.6159f, 2f, 0, 0.5f, 0.5f, 1, 1, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, -566.3f, -1601.3f, 27.6159f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					Local_793.f_11 = 0;
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				break;
			
			case 19:
				if (Local_1426[0 /*25*/].f_5 > 0 || PED::IS_PED_INJURED(Local_1426[0 /*25*/]))
				{
					Local_793.f_11 = 0;
					Local_793.f_4 = 0;
					Local_793.f_3 = 50;
				}
				break;
			
			case 50:
				if (Local_793.f_4 == 0)
				{
					Local_793.f_4 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - Local_793.f_4) > 500)
				{
					Local_793.f_8 = { -575.0826f, -1610.557f, 26.044f };
					func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 64.3911f, 1f, 0, 0, 1, 1);
					PED::SET_PED_CONFIG_FLAG(Local_793, 131, 1);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
					if (SYSTEM::VDIST2(Var1, Local_793.f_8) > 9f)
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -564.2f, -1601.4f, 26.01f, -566.3f, -1601.3f, 27.6159f, 2f, 0, 0.5f, 0.5f, 1, 1, 0, -957453492);
					}
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, -590.1738f, -1606.668f, 27.6159f, 2f, 0, 1f, 1f, 1, 1, 0, -957453492);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_793.f_8, 1000, 0, 0f, true, 0, Local_793.f_2, 1);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					PED::SET_PED_ACCURACY(Local_793, 1);
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				break;
			
			case 51:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_14");
				if (!func_289(&Local_1426, -582.3566f, -1606.783f, 26.0108f, -569.629f, -1607.289f, 30.27093f, 15.5f, 0) && !func_289(&Local_1552, -582.3566f, -1606.783f, 26.0108f, -569.629f, -1607.289f, 30.27093f, 15.5f, 0))
				{
					iVar15 = func_291(&Local_793, &(Local_793.f_4), Local_793.f_8, -604.2f, -1603.531f, 27.5187f, Local_793.f_2, 1, 1, 0.75f, 0, 0);
					if (iVar15 == 0)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_14"))
						{
							Local_793.f_8 = { -579.7391f, -1604.374f, 26.0308f };
							func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 77.199f, 1f, 1, 0, 1, 1);
							Local_793.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-576.169f, -1610.406f, 26.032f, 0f, 0f, -120f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_793, Local_793.f_6, "misslamar1lam_1_ig_14", "lam_1_ig_14_lamar", 1.5f, -1.5f, 1, 601, 1.5f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
							Local_793.f_12 = 0;
							Local_793.f_11 = 0;
							Local_793.f_4 = 0;
							Local_793.f_3++;
						}
					}
					else if (iVar15 == 2)
					{
						Local_793.f_8 = { -579.7391f, -1604.374f, 26.0308f };
						func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 77.199f, 1f, 1, 0, 1, 1);
						Local_793.f_12 = 0;
						Local_793.f_11 = 1;
						Local_793.f_4 = 0;
						Local_793.f_3++;
					}
				}
				break;
			
			case 52:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_15");
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
				{
					fVar12 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6);
					if (fVar12 > 0.34f && fVar12 < 0.36f)
					{
						func_288(&Local_793);
						if (!(func_274(&Local_1426) && func_274(&Local_1552)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_740))
							{
								PED::SET_PED_SHOOTS_AT_COORD(Local_793, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_740, 0f, 0f, 1.5f), 0);
							}
							else
							{
								PED::SET_PED_SHOOTS_AT_COORD(Local_793, -594.93f, -1607.64f, 27.8f, 0);
							}
						}
					}
				}
				bVar8 = ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, -572.629f, -1612.547f, 26.01087f, -577.249f, -1609.106f, 28.01087f, 3.25f, 0, 1, 1) && !func_289(&Local_1426, -592.9783f, -1606.412f, 25.67116f, -569.629f, -1607.289f, 30.27093f, 15.5f, 0)) && !func_289(&Local_1552, -592.9783f, -1606.412f, 25.67116f, -569.629f, -1607.289f, 30.27093f, 15.5f, 0));
				if (!Local_793.f_11)
				{
					if (func_294(Local_793, Local_793.f_8, 5f, 1073741824, 0, 1))
					{
						if (Local_793.f_12)
						{
							Local_793.f_8 = { -579.7391f, -1604.374f, 26.0308f };
							func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 77.199f, 1f, 1, 0, 1, 1);
							Local_793.f_12 = 0;
						}
						else
						{
							Local_793.f_8 = { -580.6209f, -1601.483f, 26.0108f };
							func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 81.6555f, 2f, 2, 0, 0, 1);
							Local_793.f_12 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_793, -8f, 1);
							Local_793.f_6 = -1;
						}
						bVar7 = true;
						Local_793.f_11 = 1;
					}
				}
				fVar13 = SYSTEM::VDIST2(Var1, Local_793.f_8);
				if (bVar8)
				{
					if (!GlobalFunc_537(Local_793.f_8, -579.7391f, -1604.374f, 26.0308f, 1056964608))
					{
						Local_793.f_8 = { -579.7391f, -1604.374f, 26.0308f };
						func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 77.199f, 1f, 1, 0, 1, 1);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
					{
						func_293(&Local_793, &(Local_793.f_6), Local_793.f_8, 1f, 0.5f, 1, 1, Local_793.f_2, -1056964608);
					}
					else
					{
						iVar15 = func_291(&Local_793, &(Local_793.f_4), Local_793.f_8, -604.2f, -1603.531f, 27.5187f, Local_793.f_2, 1, 1, 0.75f, 0, 0);
						if (iVar15 == 0 && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_15"))
						{
							Local_793.f_8 = { -587.1434f, -1606.148f, 26.0108f };
							func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 94.366f, 1f, 1, 0, 1, 1);
							Local_793.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-576.169f, -1610.406f, 26.032f, 0f, 0f, -120f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_793, Local_793.f_6, "misslamar1lam_1_ig_15", "lam_1_ig_15_lamar", 1.5f, -1.5f, 1, 601, 1.5f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6, 0.1f);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
							Local_793.f_5 = 0;
							Local_793.f_12 = 0;
							Local_793.f_11 = 0;
							Local_793.f_4 = 0;
							Local_793.f_3++;
						}
						else if (iVar15 == 2)
						{
							Local_793.f_8 = { -587.1434f, -1606.148f, 26.0108f };
							func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 94.366f, 1f, 1, 0, 1, 1);
							Local_793.f_5 = 0;
							Local_793.f_12 = 0;
							Local_793.f_11 = 1;
							Local_793.f_4 = 0;
							Local_793.f_3++;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && !Local_793.f_11)
				{
					func_292(&Local_793, &(Local_793.f_6), &(Local_793.f_4), Local_793.f_8, 1f, 0.5f, 1, 1, Local_793.f_2, -1056964608);
				}
				else if (Local_793.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_793, 242628503) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6)) && (fVar13 > 4f || !bVar9)))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					if (fVar13 > 4f && !bVar7)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, -590.1738f, -1606.668f, 27.6159f, 2f, 0, 1f, 1f, 1, 1, 0, -957453492);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_793.f_8, 1000, 0, 0.25f, true, 0, Local_793.f_2, 1);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					Local_793.f_11 = 0;
				}
				break;
			
			case 53:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_17");
				iVar22 = (func_273(&Local_1426) + func_273(&Local_1552));
				if ((!iLocal_130[18] && !GlobalFunc_5172(&Local_819, 1)) && !PED::IS_PED_INJURED(Local_806))
				{
					if (func_298(Var4, Var1, ENTITY::GET_ENTITY_COORDS(Local_806, 1)))
					{
						iLocal_130[18] = 1;
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
				{
					fVar12 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6);
					if (fVar12 > 0.48f && fVar12 < 0.75f)
					{
						func_288(&Local_793);
						if (iVar22 > 0)
						{
							PED::SET_PED_SHOOTS_AT_COORD(Local_793, -594.93f, -1607.64f, 27.8f, 0);
							WEAPON::SET_AMMO_IN_CLIP(Local_793, joaat("weapon_pumpshotgun"), 6);
						}
					}
				}
				if (iVar22 == 0)
				{
					bVar8 = true;
				}
				else if ((iVar22 == 1 && !PED::IS_PED_INJURED(Local_1552[3 /*25*/])) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1552[3 /*25*/], -605.6366f, -1608.953f, 26.01083f, -594.8846f, -1609.297f, 29.01083f, 5.25f, 0, 1, 0))
				{
					if (iLocal_332 == 0)
					{
						iLocal_332 = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_332) > 5000)
					{
						bVar8 = true;
					}
				}
				if (!Local_793.f_11)
				{
					if (!Local_793.f_12)
					{
						bVar23 = func_294(Local_793, Local_793.f_8, 5f, 1073741824, 0, 1);
					}
					else
					{
						bVar23 = func_294(Local_793, Local_793.f_8, 4f, 1f, 0, 1);
					}
					if (bVar23)
					{
						if (!bVar8)
						{
							if (Local_793.f_12)
							{
								Local_793.f_8 = { -587.1434f, -1606.148f, 26.0108f };
								func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 94.366f, 1f, 1, 0, 1, 1);
								Local_793.f_12 = 0;
							}
							else
							{
								Local_793.f_8 = { -586.5f, -1604.041f, 26.0108f };
								TASK::REMOVE_COVER_POINT(Local_793.f_2);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_793, Local_793.f_8, 1f, 1, 0);
								Local_793.f_12 = 1;
							}
							bVar7 = true;
							Local_793.f_11 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_793, -8f, 1);
							Local_793.f_6 = -1;
						}
					}
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
				{
					if (iVar22 == 1)
					{
						if (!PED::IS_PED_INJURED(Local_1552[4 /*25*/]))
						{
							if (!PED::IS_PED_IN_COMBAT(Local_1552[4 /*25*/], 0))
							{
								bVar24 = true;
								if (bVar9)
								{
									Local_793.f_11 = 1;
								}
							}
						}
					}
					if (iVar22 == 1)
					{
						if ((!bVar24 && !bVar9) && !bVar8)
						{
							Local_793.f_11 = 1;
						}
					}
				}
				if (bVar24)
				{
					if (!iLocal_130[19])
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_FIRST", 7, 0, 0, 0))
						{
							iLocal_130[19] = 1;
							iLocal_302 = 0;
						}
					}
					else if (!iLocal_130[20])
					{
						if (!GlobalFunc_5172(&Local_819, 1))
						{
							if (iLocal_302 == 0)
							{
								iLocal_302 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_302) > 7000)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_GOGO", 7, 0, 0, 0))
								{
									iLocal_130[20] = 1;
								}
							}
						}
					}
				}
				fVar13 = SYSTEM::VDIST2(Var1, Local_793.f_8);
				if (bVar8)
				{
					if (Local_793.f_8 != -587.1434f)
					{
						Local_793.f_8 = { -587.1434f, -1606.148f, 26.0108f };
						func_295(Local_793, &(Local_793.f_2), Local_793.f_8, 94.366f, 1f, 1, 0, 1, 1);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
					{
						func_293(&Local_793, &(Local_793.f_6), Local_793.f_8, 0.99f, 0.5f, 1, 1, Local_793.f_2, -1056964608);
					}
					else
					{
						iVar15 = func_291(&Local_793, &(Local_793.f_4), Local_793.f_8, -604.2f, -1603.531f, 27.5187f, Local_793.f_2, 1, 1, 0.75f, 0, 0);
						if (iVar15 == 0 && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_17"))
						{
							if (Local_793.f_5 == 0)
							{
								Local_793.f_5 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - Local_793.f_5) > 1000 || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -595.3635f, -1609.287f, 27.0108f, 8.25f, 2.75f, 2f, 0, 1, 0))
							{
								Local_793.f_8 = { -602.9f, -1607.08f, 26.0109f };
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_793, Local_793.f_8, 2f, 1, 0);
								Local_793.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-576.169f, -1610.406f, 26.032f, 0f, 0f, -120f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_793, Local_793.f_6, "misslamar1lam_1_ig_17", "lam_1_ig_17_lamar", 1.5f, -1.5f, 5, 601, 1.5f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
								Local_793.f_12 = 0;
								Local_793.f_11 = 0;
								Local_793.f_4 = 0;
								Local_793.f_3++;
							}
						}
						else if (iVar15 == 2)
						{
							Local_793.f_8 = { -602.9f, -1607.08f, 26.0109f };
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_793, Local_793.f_8, 2f, 1, 0);
							Local_793.f_12 = 0;
							Local_793.f_11 = 1;
							Local_793.f_4 = 0;
							Local_793.f_3++;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && !Local_793.f_11)
				{
					func_292(&Local_793, &(Local_793.f_6), &(Local_793.f_4), Local_793.f_8, 0.99f, 0.5f, 1, 1, Local_793.f_2, -1056964608);
				}
				else if (Local_793.f_11 || ((TASK::GET_SCRIPT_TASK_STATUS(Local_793, 242628503) != 1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6)) && (fVar13 > 4f || !bVar9)))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					if (fVar13 > 4f && !bVar7)
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, -597.1738f, -1606.168f, 27.6159f, 2f, 0, 1f, 1f, 1, 1, 0, -957453492);
					}
					if (bVar24)
					{
						TASK::TASK_AIM_GUN_AT_COORD(0, -597.1738f, -1606.168f, 27.6159f, -1, 0, 0);
					}
					else
					{
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					Local_793.f_11 = 0;
				}
				break;
			
			case 54:
				if (!GlobalFunc_5172(&Local_819, 1))
				{
					if (Local_793.f_4 == 0)
					{
						if (!PED::IS_PED_INJURED(Local_806) && func_298(Var4, Var1, ENTITY::GET_ENTITY_COORDS(Local_806, 1)))
						{
							Local_793.f_4 = MISC::GET_GAME_TIMER();
							iLocal_302 = 0;
						}
					}
					else if (!iLocal_130[21])
					{
						if (iLocal_302 == 0)
						{
							iLocal_302 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_302) > 3000)
						{
							if (SYSTEM::VDIST2(Var1, Var4) < 400f && MISC::ABSF((Var1.f_2 - Var4.f_2)) < 5f)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_FIRST", 7, 0, 0, 0))
								{
									iLocal_130[21] = 1;
								}
							}
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
				{
					func_290(&Local_793, &(Local_793.f_6), -605.6f, -1624.94f, 27.54f, 1065353216, 1, -1056964608);
					if (!PED::IS_PED_INJURED(Local_1552[3 /*25*/]))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.125f && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) < 0.2f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(Local_793, ENTITY::GET_ENTITY_COORDS(Local_1552[3 /*25*/], 1), 0);
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.16f)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_1552[3 /*25*/], 0);
						}
					}
				}
				else if (SYSTEM::VDIST2(Var1, Local_793.f_8) > 4f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_793, 242628503) != 1 || (TASK::GET_SCRIPT_TASK_STATUS(Local_793, 242628503) == 1 && TASK::GET_SEQUENCE_PROGRESS(Local_793) >= 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, -605.6f, -1624.94f, 27.54f, 2f, 0, 0.1f, 1f, 1, 512, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_COORD(0, -605.6f, -1624.94f, 27.54f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					}
				}
				if (Local_1703[0 /*25*/].f_5 > 0)
				{
					Local_793.f_8 = { -604.0372f, -1618.151f, 26.0108f };
					TASK::REMOVE_COVER_POINT(Local_793.f_2);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_793, Local_793.f_8, 1f, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_793, 50f, 0);
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				break;
			
			case 55:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
				{
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_17");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_16");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_15");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_14");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_13");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_11");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_12");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_26_alt1");
					STREAMING::REMOVE_ANIM_DICT("misslamar1lam_1_ig_26");
				}
				if (func_274(&Local_1703))
				{
					Local_793.f_11 = 1;
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				break;
			
			case 56:
				Var28 = { -604.0372f, -1618.151f, 26.0108f };
				Var31 = { -605.6624f, -1628.981f, 26.0107f };
				Var34 = { -596.8221f, -1629.526f, 26.0108f };
				Var37 = { -591.7455f, -1630.483f, 27.2158f };
				Var40 = { -601f, -1630.2f, 27.2f };
				if (SYSTEM::VDIST2(Var4, Var37) < SYSTEM::VDIST2(Var34, Var37))
				{
					Var25 = { Var34 };
					Var40 = { -591.7455f, -1630.483f, 27.2158f };
				}
				else if (SYSTEM::VDIST2(Var4, Var34) < SYSTEM::VDIST2(Var31, Var34))
				{
					if (!GlobalFunc_537(Local_793.f_8, Var34, 1056964608))
					{
						Var25 = { Var31 };
						Var40 = { -591.7455f, -1630.483f, 27.2158f };
					}
				}
				else if (!GlobalFunc_537(Local_793.f_8, Var31, 1056964608) && !GlobalFunc_537(Local_793.f_8, Var28, 1056964608))
				{
					Var25 = { Var28 };
					Var40 = { -601f, -1630.2f, 27.2f };
				}
				if (!GlobalFunc_537(Local_793.f_8, Var25, 1056964608) && !GlobalFunc_537(0f, 0f, 0f, Var25, 1056964608))
				{
					Local_793.f_8 = { Var25 };
					Local_793.f_11 = 1;
				}
				if (Local_793.f_11)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_793.f_8, Var40, 2f, 0, 0.5f, 2f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, Var40, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
					Local_793.f_11 = 0;
				}
				if (bLocal_85)
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Local_793, -589.4766f, -1639.89f, 18.8855f, -587.2f, -1631.2f, 26f, 2f, 0, 1f, 1f, 1, 0, 0, -957453492);
					iLocal_130[45] = 0;
					bLocal_59 = true;
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				else if ((!GlobalFunc_5172(&Local_819, 1) && SYSTEM::VDIST2(Var1, Var4) < 400f) && MISC::ABSF((Var1.f_2 - Var4.f_2)) < 5f)
				{
					if (!iLocal_130[22])
					{
						if (!iLocal_130[23])
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_FIRST", 7, 0, 0, 0))
							{
								iLocal_130[23] = 1;
								iLocal_302 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!iLocal_130[24])
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_302) > 7000)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_GOGO", 7, 0, 0, 0))
								{
									iLocal_130[24] = 1;
									iLocal_302 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else if (!iLocal_130[25])
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_302) > 7000)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_DELAY", 7, 0, 0, 0))
								{
									iLocal_130[25] = 1;
								}
							}
						}
					}
					else if (!iLocal_130[26])
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_WAYOUT", 7, 0, 0, 0))
						{
							iLocal_130[26] = 1;
							iLocal_302 = MISC::GET_GAME_TIMER();
						}
					}
					else if (!iLocal_130[27])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_302) > 7000)
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_EXT", 7, 0, 0, 0))
							{
								iLocal_130[27] = 1;
								iLocal_302 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (!iLocal_130[28])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_302) > 7000)
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_DELAY", 7, 0, 0, 0))
							{
								iLocal_130[28] = 1;
							}
						}
					}
				}
				break;
			
			case 57:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, -592.5679f, -1630.368f, 28.23845f, -587.9066f, -1630.824f, 23.51186f, 2.5f, 0, 1, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_776, 0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Local_793, -589.4766f, -1639.89f, 18.8855f, -563.72f, -1649f, 29.8111f, 2f, 1, 1f, 1f, 1, 0, 0, -957453492);
					}
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				break;
			
			case 58:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, -592.5679f, -1630.368f, 28.23845f, -587.9066f, -1630.824f, 23.51186f, 2.5f, 0, 1, 0))
				{
					func_287();
					if (bLocal_99)
					{
						Local_793.f_8 = { -592.8024f, -1642.528f, 18.9567f };
					}
					else
					{
						Local_793.f_8 = { -593.268f, -1639.526f, 18.9594f };
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -580.124f, -1634.676f, 18.5787f, -563.72f, -1649f, 29.8111f, 2f, 0, 0.5f, 0.5f, 1, 1, 0, -957453492);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_793.f_8, 2f, 20000, 0.25f, 512, 150f);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					bLocal_78 = false;
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				break;
			
			case 59:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_18");
				if (SYSTEM::VDIST2(Var1, -592.8024f, -1642.528f, 18.9567f) < 1.3f)
				{
					if (!PED::IS_PED_INJURED(Local_806))
					{
						Var43 = { ENTITY::GET_ENTITY_COORDS(Local_806, 1) };
					}
					if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_18") && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -592.2216f, -1642.938f, 18.92483f, -593.819f, -1641.984f, 22.70944f, 1.25f, 0, 1, 0))
					{
						if ((iLocal_79 && Var43.f_2 > 22f) || !iLocal_88)
						{
							TASK::TASK_CLIMB_LADDER(Local_793, 1);
							iLocal_2039 = 2;
							iLocal_105 = 1;
							bLocal_78 = true;
							Local_793.f_4 = 0;
							Local_793.f_3++;
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - Local_793.f_4) > 1000)
				{
					func_287();
					if (bLocal_99)
					{
						Local_793.f_8 = { -592.8024f, -1642.528f, 18.9567f };
					}
					else
					{
						Local_793.f_8 = { -593.268f, -1639.526f, 18.9594f };
					}
					fVar13 = SYSTEM::VDIST2(Var1, Local_793.f_8);
					if (fVar13 >= 1.3f)
					{
						if ((TASK::GET_SCRIPT_TASK_STATUS(Local_793, 2106541073) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_793, 713668775) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_793, 242628503) != 1)
						{
							if (fVar13 > 16f)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_793, Local_793.f_8, 2f, 20000, 0.25f, 512, 150f);
							}
							else
							{
								TASK::TASK_GO_STRAIGHT_TO_COORD(Local_793, Local_793.f_8, 1f, 20000, 150f, 0.1f);
							}
						}
					}
				}
				if (!iLocal_130[31] && iLocal_130[32])
				{
					if (!bLocal_84 && fVar13 < 64f)
					{
						if (!GlobalFunc_5172(&Local_819, 1))
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_LADR", 7, 0, 0, 0))
							{
								iLocal_130[31] = 1;
							}
						}
					}
				}
				break;
			
			case 60:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_18");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_18"))
				{
					Var47 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("misslamar1lam_1_ig_18", "lam_1_ig_18_lamar", -593.06f, -1642.835f, 19.004f, 0f, 0f, 0f, 0.454f, 2) };
				}
				if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					if (Var4.f_2 > Var1.f_2)
					{
						bVar46 = true;
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_793, 1715483475) == 1)
				{
					func_286(Var4, Var1, 0);
					if (PED::IS_PED_CLIMBING(Local_793))
					{
						if (bVar46)
						{
							if (iLocal_2039 != 0)
							{
								PED::_0x1A330D297AAC6BC1(Local_793, 0);
								iLocal_2039 = 0;
							}
						}
						else if (iLocal_2039 != 2)
						{
							PED::_0x1A330D297AAC6BC1(Local_793, 2);
							iLocal_2039 = 2;
						}
					}
					if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_18"))
					{
						if (MISC::ABSF((Var1.f_2 - Var47.f_2)) < 0.2f)
						{
							if (!bVar46)
							{
								Local_793.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-593.06f, -1642.835f, 19.004f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_793, Local_793.f_6, "misslamar1lam_1_ig_18", "lam_1_ig_18_lamar", 1.5f, -1.5f, 5, 601, 1.5f, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6, 0.454f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_793, joaat("weapon_pumpshotgun"), 1);
								Local_793.f_4 = 0;
								Local_793.f_3++;
							}
						}
					}
				}
				else if (MISC::ABSF((Var1.f_2 - Var47.f_2)) > 0.2f)
				{
					bLocal_78 = false;
					Local_793.f_4 = 0;
					Local_793.f_3 = (Local_793.f_3 - 1);
				}
				else if (!bVar46)
				{
					TASK::TASK_CLIMB_LADDER(Local_793, 1);
				}
				if (!iLocal_130[31] && iLocal_130[32])
				{
					if (!bLocal_84)
					{
						if (!GlobalFunc_5172(&Local_819, 1))
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_LADR", 7, 0, 0, 0))
							{
								iLocal_130[31] = 1;
							}
						}
					}
				}
				break;
			
			case 61:
				STREAMING::REQUEST_ANIM_DICT("misslamar1ig_20");
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.82f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
				{
					if (Local_793.f_6 != -1)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_793, -8f, 1);
						Local_793.f_6 = -1;
					}
					if (func_273(&Local_1780) >= 2)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_793, 167901368) != 1 && !ENTITY::IS_ENTITY_DEAD(iLocal_776))
						{
							TASK::TASK_SHOOT_AT_ENTITY(Local_793, iLocal_776, -1, -687903391);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
						}
					}
					else
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_793, 1237250926) != 1)
						{
							if ((((!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_793, "misslamar1ig_20", "Lamar_Call_Hurry_A", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_793, "misslamar1ig_20", "Lamar_Call_Hurry_B", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_793, "misslamar1ig_20", "Lamar_Call_Hurry_C", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_793, "misslamar1ig_20", "Lamar_Call_Hurry_D", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_793, "misslamar1ig_20", "Lamar_Call_Hurry_E", 3))
							{
								TASK::TASK_AIM_GUN_AT_COORD(Local_793, -563.72f, -1649f, 29.8111f, -1, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
							}
						}
						if (!bLocal_65)
						{
							Var51 = { GlobalFunc_560() };
							if (fVar14 > 25f)
							{
								if (fVar14 < 625f)
								{
									if (iLocal_325 == 0)
									{
										iLocal_325 = (MISC::GET_GAME_TIMER() - 4000);
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_325) > 10000)
									{
										if (iLocal_326 < 2)
										{
											if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_KEEPUP", 7, 0, 0, 0))
											{
												if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_20"))
												{
													iVar50 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
													TASK::OPEN_SEQUENCE_TASK(&uVar0);
													if (iVar50 == 0)
													{
														TASK::TASK_PLAY_ANIM(0, "misslamar1ig_20", "Lamar_Call_Hurry_A", 4f, -4f, -1, 0, 0, 0, 0, 0);
													}
													else if (iVar50 == 1)
													{
														TASK::TASK_PLAY_ANIM(0, "misslamar1ig_20", "Lamar_Call_Hurry_B", 4f, -4f, -1, 0, 0, 0, 0, 0);
													}
													else if (iVar50 == 2)
													{
														TASK::TASK_PLAY_ANIM(0, "misslamar1ig_20", "Lamar_Call_Hurry_C", 4f, -4f, -1, 0, 0, 0, 0, 0);
													}
													else if (iVar50 == 3)
													{
														TASK::TASK_PLAY_ANIM(0, "misslamar1ig_20", "Lamar_Call_Hurry_D", 4f, -4f, -1, 0, 0, 0, 0, 0);
													}
													else
													{
														TASK::TASK_PLAY_ANIM(0, "misslamar1ig_20", "Lamar_Call_Hurry_E", 4f, -4f, -1, 0, 0, 0, 0, 0);
													}
													TASK::TASK_AIM_GUN_AT_COORD(0, -563.72f, -1649f, 29.8111f, -1, 0, 0);
													TASK::CLOSE_SEQUENCE_TASK(uVar0);
													TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
													TASK::CLEAR_SEQUENCE_TASK(&uVar0);
												}
												iLocal_325 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 4000));
												iLocal_326++;
											}
										}
										else if (!iLocal_130[33])
										{
											if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_TOP", 7, 0, 0, 0))
											{
												iLocal_130[33] = 1;
												iLocal_325 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 4000));
											}
										}
									}
								}
							}
							else if (MISC::ARE_STRINGS_EQUAL(&Var51, "LEM1_TOP"))
							{
								GlobalFunc_5105();
							}
						}
					}
					STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_19");
					if (func_273(&Local_1780) < 2)
					{
						if (iLocal_105 || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_806, 1), -596.36f, -1649.46f, 25.14f) < 4f)
						{
							if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.82f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
							{
								if ((bLocal_65 || iLocal_60) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -593.1262f, -1643.063f, 23f, -592.6035f, -1642.084f, 26.9577f, 1.5f, 0, 1, 0))
								{
									iVar57 = 1;
								}
							}
						}
						if (!PED::IS_PED_INJURED(Local_806))
						{
							if (Local_806.f_3 >= 100 || iVar57)
							{
								if (Local_793.f_4 == 0)
								{
									if (Local_806.f_3 >= 100)
									{
										Local_793.f_4 = MISC::GET_GAME_TIMER();
									}
									else
									{
										Local_793.f_4 = (MISC::GET_GAME_TIMER() - 1000);
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_793.f_4) > 500)
								{
									Local_793.f_4 = 0;
									Local_793.f_3 = 100;
								}
							}
						}
					}
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) < 0.82f) || TASK::GET_SCRIPT_TASK_STATUS(Local_793, 1715483475) == 1)
				{
					func_286(Var4, Var1, 1);
					if (!GlobalFunc_5172(&Local_819, 1))
					{
						if (iLocal_130[34] && !iLocal_130[35])
						{
							if (!iLocal_60 && fVar14 < 625f)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_ROOF", 7, 0, 0, 0))
								{
									iLocal_130[35] = 1;
								}
							}
						}
					}
				}
				break;
			
			case 100:
				STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_19");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_19"))
				{
					Local_793.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-593.078f, -1642.909f, 18.951f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_793, Local_793.f_6, "misslamar1lam_1_ig_19", "lam_1_ig_19_lamar", 1.5f, -1.5f, 5, 603, 1.5f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6, 0f);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
					PED::SET_PED_CONFIG_FLAG(Local_793, 131, 1);
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				break;
			
			case 101:
				if (!GlobalFunc_5172(&Local_819, 1) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
				{
					if (!iLocal_130[36])
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.2f && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) < 0.5f)
						{
							if (fVar14 < 900f)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_MOVE", 7, 0, 0, 0))
								{
									iLocal_130[36] = 1;
									iLocal_325 = (MISC::GET_GAME_TIMER() - 3000);
								}
							}
						}
					}
					else if (!iLocal_130[37] && iLocal_326 < 3)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_325) > 10000)
						{
							if (fVar14 < 900f && fVar14 > 400f)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_KEEPUP", 7, 0, 0, 0))
								{
									iLocal_130[37] = 1;
									iLocal_326++;
								}
							}
						}
					}
					if (!iLocal_130[38])
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.55f && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) < 0.62f) && fVar14 < 900f)
						{
							GlobalFunc_5130(Local_793, "GENERIC_CURSE_MED", 10);
							iLocal_130[38] = 1;
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
				{
					if (iLocal_60 && bLocal_63)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) < 0.7f)
						{
							if (!CAM::IS_SPHERE_VISIBLE(-603.1f, -1696.5f, 24.9f, 1f) && !CAM::IS_SPHERE_VISIBLE(Var1, 1f))
							{
								PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6, 0.7f);
							}
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.713f && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) < 0.9f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -603.101f, -1698.411f, 24.04358f, -601.6309f, -1696.324f, 26.9779f, 1f, 0, 1, 0))
						{
							PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
						}
					}
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.99f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -603.5973f, -1701.3f, 22.9511f, -596.5918f, -1714.461f, 23.8392f, 1f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, -596.5918f, -1714.461f, 23.8392f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_793, -8f, 1);
					TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					Local_793.f_6 = -1;
					Local_793.f_4 = 0;
					Local_793.f_3++;
				}
				break;
		}
		func_285(&Local_793, &(Local_793.f_7));
		if (iVar11 != Local_793.f_3)
		{
		}
	}
}

void func_297(var uParam0, var uParam1, float fParam2, int iParam3, float fParam4)//Position - 0x31124
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1) && PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam1) >= fParam2) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1))
		{
			iVar0 = 0;
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam1))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, fParam4, 1);
				*uParam1 = -1;
				iVar0 = 1;
			}
			if (!PED::IS_PED_IN_COMBAT(*uParam0, 0) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, -1442466670) != 1)
			{
				if (iVar0 && iParam3)
				{
					PED::SET_PED_RESET_FLAG(*uParam0, 156, 1);
				}
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 50f, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
	}
}

int func_298(struct<3> Param0, struct<3> Param3, struct<3> Param6)//Position - 0x311C7
{
	int iVar0;
	struct<2> Var1;
	int iVar5;
	
	if ((SYSTEM::VDIST2(Param0, Param3) < 400f && SYSTEM::VDIST2(Param0, Param6) < 400f) && MISC::ABSF((Param0.f_2 - Param6.f_2)) < 5f)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		StringCopy(&Var1, "", 16);
		switch (iVar0)
		{
			case 0:
				StringConCat(&Var1, "LEM1_FCONV1", 16);
				iVar5 = 118;
				break;
			
			case 1:
				StringConCat(&Var1, "LEM1_FCONV2", 16);
				iVar5 = 119;
				break;
			
			case 2:
				StringConCat(&Var1, "LEM1_FCONV3", 16);
				iVar5 = 120;
				break;
			
			case 3:
				StringConCat(&Var1, "LEM1_FCONV4", 16);
				iVar5 = 121;
				break;
			
			case 4:
				StringConCat(&Var1, "LEM1_FCONV5", 16);
				iVar5 = 122;
				break;
			
			case 5:
				StringConCat(&Var1, "LEM1_FCONV6", 16);
				iVar5 = 123;
				break;
			
			case 6:
				StringConCat(&Var1, "LEM1_FCONV7", 16);
				iVar5 = 124;
				break;
			
			case 7:
				StringConCat(&Var1, "LEM1_FCONV8", 16);
				iVar5 = 125;
				break;
			
			case 8:
				StringConCat(&Var1, "LEM1_FCONV9", 16);
				iVar5 = 126;
				break;
			
			case 9:
				StringConCat(&Var1, "LEM1_FCONV10", 16);
				iVar5 = 127;
				break;
		}
		if (!iLocal_130[iVar5])
		{
			if (GlobalFunc_10618(&Local_844, cLocal_349, &Var1, 7, 0, 0, 0))
			{
				iLocal_130[iVar5] = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_299(struct<3> Param0)//Position - 0x31321
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	float fVar18;
	bool bVar19;
	int iVar20[4];
	bool bVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	struct<3> Var31;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	struct<3> Var38;
	struct<3> Var41;
	var uVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	int iVar48;
	bool bVar49;
	float fVar50;
	float fVar51;
	float fVar52;
	int iVar53;
	int iVar54;
	
	iVar0 = 0;
	Var1 = { 0f, 0f, 0f };
	iVar10 = 0;
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar11, 0);
	if (Local_1703[iVar0 /*25*/].f_5 == 0)
	{
		STREAMING::REQUEST_MODEL(iLocal_2042);
		STREAMING::REQUEST_MODEL(iLocal_2043);
	}
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pistol"), 31, 0);
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
	if (!PED::IS_PED_INJURED(Local_793))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(Local_793, 1) };
	}
	if (!PED::IS_PED_INJURED(Local_806))
	{
		Var7 = { ENTITY::GET_ENTITY_COORDS(Local_806, 1) };
	}
	if (!iLocal_117)
	{
		if (!iLocal_56)
		{
			AUDIO::PREPARE_MUSIC_EVENT("LM1_TERMINADOR_DOORS_OPEN");
		}
		iVar13 = 0;
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -626.0966f, -1625.246f, 32.03473f, -622.5164f, -1625.457f, 34.01049f, 1.25f, 0, 1, 0) || iVar13) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6) > 0.1f)) || (iLocal_329 > 0 && (MISC::GET_GAME_TIMER() - iLocal_329) > 750))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_DOORS_OPEN");
			iLocal_117 = 1;
		}
	}
	if (!Local_1021[(Local_1021 - 1) /*25*/].f_2)
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_2042) && STREAMING::HAS_MODEL_LOADED(iLocal_2043))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1021[0 /*25*/]))
			{
				Local_1021[0 /*25*/] = func_309(iLocal_2042, -613.8455f, -1625.895f, 32.0106f, 175.6571f, iLocal_2063, 135, 0, joaat("weapon_pistol"), 26);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_1021[1 /*25*/]))
			{
				Local_1021[1 /*25*/] = func_309(iLocal_2043, -612.4139f, -1623.916f, 32.0106f, 180.2247f, iLocal_2063, 115, 0, joaat("weapon_pistol"), 26);
				fLocal_273 = 0f;
				func_307(&Local_1021, "Lift ");
			}
		}
	}
	else
	{
		if (iLocal_117)
		{
			func_306(&fLocal_273, 1f, 0.5f, 1);
			if (fLocal_273 < 1f && fLocal_273 != 0f)
			{
				OBJECT::_DOOR_CONTROL(iLocal_2045, -614.7f, -1626.8f, 32f, 1, 0f, 0f, -fLocal_273);
				OBJECT::_DOOR_CONTROL(iLocal_2046, -612.1f, -1627f, 32f, 1, 0f, 0f, fLocal_273);
			}
		}
		iVar0 = 0;
		while (iVar0 < Local_1021)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1021[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_1021[iVar0 /*25*/]))
				{
					switch (Local_1021[iVar0 /*25*/].f_5)
					{
						case 0:
							if (iLocal_117)
							{
								Local_1021[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								Local_1021[iVar0 /*25*/].f_5++;
							}
							break;
						
						case 1:
							if (iVar0 == 0)
							{
								iVar14 = 100;
								Local_1021[iVar0 /*25*/].f_14 = { -614.2863f, -1630.572f, 32.0106f };
							}
							else if (iVar0 == 1)
							{
								iVar14 = 500;
								Local_1021[iVar0 /*25*/].f_14 = { -609.6615f, -1631.922f, 32.0106f };
							}
							if ((MISC::GET_GAME_TIMER() - Local_1021[iVar0 /*25*/].f_7) > iVar14)
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1021[iVar0 /*25*/], iLocal_2062);
								func_305(&(Local_1021[iVar0 /*25*/]), 10, 1, 2, 0, 1);
								if (iVar0 == 0)
								{
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1021[iVar0 /*25*/], Local_1021[iVar0 /*25*/].f_14, 2f, 1, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1021[iVar0 /*25*/], 100f, 0);
								}
								else
								{
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1021[iVar0 /*25*/], Local_1021[iVar0 /*25*/].f_14, 2f, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1021[iVar0 /*25*/], 100f, 0);
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1021[iVar0 /*25*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1021[iVar0 /*25*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1021[iVar0 /*25*/], 50, 1);
								PED::SET_COMBAT_FLOAT(Local_1021[iVar0 /*25*/], 13, 3f);
								GlobalFunc_5130(Local_1021[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1021[iVar0 /*25*/], 1);
								Local_1021[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								Local_1021[iVar0 /*25*/].f_5++;
							}
							break;
						
						case 2:
							if ((MISC::GET_GAME_TIMER() - Local_1021[iVar0 /*25*/].f_7) > 17000)
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1021[iVar0 /*25*/], 0);
								Local_1021[iVar0 /*25*/].f_5++;
							}
							break;
					}
					if (!iLocal_114)
					{
						iVar15 = (func_273(&Local_1021) + func_273(&Local_1123));
						if (iVar15 <= 2)
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1021[iVar0 /*25*/], -614.2863f, -1630.572f, 32.0106f, 3f, 0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_1021[iVar0 /*25*/], 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1021[iVar0 /*25*/], 51, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1021[iVar0 /*25*/], 50, 1);
							iLocal_114 = 1;
						}
					}
					if (Local_1021[iVar0 /*25*/].f_5 > 1)
					{
						func_304(Local_1021[iVar0 /*25*/], &(Local_1021[iVar0 /*25*/].f_17), -1, 0, 0, 0, -1082130432, 0);
					}
				}
				else
				{
					func_226(&(Local_1021[iVar0 /*25*/]), 0);
				}
			}
			iVar0++;
		}
	}
	if (!Local_1123[(Local_1123 - 1) /*25*/].f_2)
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_2042) && STREAMING::HAS_MODEL_LOADED(iLocal_2043))
		{
			if (Local_1021[0 /*25*/].f_5 > 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1123[0 /*25*/]))
				{
					Local_1123[0 /*25*/] = func_309(iLocal_2042, -605.7524f, -1625.376f, 32.0106f, 90.1695f, iLocal_2063, 115, 0, joaat("weapon_pistol"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1123[1 /*25*/]))
				{
					Local_1123[1 /*25*/] = func_309(iLocal_2043, -605.5994f, -1624.163f, 32.0106f, 90.2147f, iLocal_2063, 115, 0, joaat("weapon_pistol"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1123[2 /*25*/]))
				{
					Local_1123[2 /*25*/] = func_309(iLocal_2042, -605.3604f, -1621.979f, 32.0106f, 90.2147f, iLocal_2063, 115, 0, joaat("weapon_pistol"), 26);
					func_307(&Local_1123, "Window ");
				}
			}
		}
	}
	else
	{
		bVar16 = false;
		iVar0 = 0;
		while (iVar0 < Local_1123)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1123[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_1123[iVar0 /*25*/]))
				{
					switch (Local_1123[iVar0 /*25*/].f_5)
					{
						case 0:
							if (iLocal_117)
							{
								Local_1123[iVar0 /*25*/].f_7 = 0;
								Local_1123[iVar0 /*25*/].f_5++;
							}
							break;
						
						case 1:
							bVar16 = false;
							if (iVar0 == 0)
							{
								if (Local_1123[iVar0 /*25*/].f_7 == 0)
								{
									Local_1123[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - Local_1123[iVar0 /*25*/].f_7) > 1000)
								{
									bVar16 = true;
								}
							}
							else if (iVar0 == 1 || iVar0 == 2)
							{
								if (func_273(&Local_1021) <= 1 || func_273(&Local_1123) <= 2)
								{
									if (Local_1123[iVar0 /*25*/].f_7 == 0)
									{
										Local_1123[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - Local_1123[iVar0 /*25*/].f_7) > 1000)
									{
										bVar16 = true;
									}
								}
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -616.5145f, -1630.978f, 31.76054f, -605.3833f, -1631.433f, 35.2605f, 7.75f, 0, 1, 0))
							{
								bVar16 = true;
							}
							if (bVar16)
							{
								if (iVar0 == 0)
								{
									GlobalFunc_5130(Local_1123[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
									func_295(Local_1123[iVar0 /*25*/], &(Local_1123[iVar0 /*25*/].f_4), -607.4794f, -1633.298f, 32.0303f, 80.4127f, 2f, 2, 0, 1, 1);
								}
								else if (iVar0 == 1)
								{
									func_295(Local_1123[iVar0 /*25*/], &(Local_1123[iVar0 /*25*/].f_4), -609.4595f, -1631.629f, 32.0106f, 89.7347f, 2f, 2, 0, 1, 1);
								}
								else if (iVar0 == 2)
								{
									func_295(Local_1123[iVar0 /*25*/], &(Local_1123[iVar0 /*25*/].f_4), -608.9896f, -1628.006f, 32.0105f, 97.5261f, 2f, 2, 0, 1, 1);
								}
								func_305(&(Local_1123[iVar0 /*25*/]), 10, 1, 2, 0, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1123[iVar0 /*25*/], iLocal_2062);
								PED::SET_PED_CAN_BE_TARGETTED(Local_1123[iVar0 /*25*/], 1);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1123[iVar0 /*25*/], 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1123[iVar0 /*25*/], 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1123[iVar0 /*25*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1123[iVar0 /*25*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1123[iVar0 /*25*/], 50, 1);
								PED::SET_COMBAT_FLOAT(Local_1123[iVar0 /*25*/], 13, 3f);
								Local_1123[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								Local_1123[iVar0 /*25*/].f_5++;
							}
							break;
						
						case 2:
							if ((MISC::GET_GAME_TIMER() - Local_1123[iVar0 /*25*/].f_7) > 15000)
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1123[iVar0 /*25*/], 0);
								Local_1123[iVar0 /*25*/].f_5++;
							}
							break;
					}
					if (!iLocal_114)
					{
						iVar17 = (func_273(&Local_1123) + func_273(&Local_1021));
						if (iVar17 <= 2)
						{
							PED::SET_PED_COMBAT_MOVEMENT(Local_1123[iVar0 /*25*/], 1);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1123[iVar0 /*25*/], -616.7226f, -1630.485f, 32.0106f, 3f, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1123[iVar0 /*25*/], 51, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1123[iVar0 /*25*/], 50, 1);
							iLocal_114 = 1;
						}
					}
					if (Local_1123[iVar0 /*25*/].f_5 > 1)
					{
						func_304(Local_1123[iVar0 /*25*/], &(Local_1123[iVar0 /*25*/].f_17), -1, 0, 0, 0, -1082130432, 0);
					}
				}
				else
				{
					func_226(&(Local_1123[iVar0 /*25*/]), 0);
				}
			}
			iVar0++;
		}
	}
	if (!Local_1072[0 /*25*/].f_2)
	{
		if (!Local_1123[0 /*25*/].f_2)
		{
			Local_1072[0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - Local_1072[0 /*25*/].f_7) > 3000)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_MODEL(iLocal_2051);
			if ((((STREAMING::HAS_MODEL_LOADED(iLocal_2042) && STREAMING::HAS_MODEL_LOADED(iLocal_2043)) && STREAMING::HAS_MODEL_LOADED(iLocal_2051)) && STREAMING::HAS_PTFX_ASSET_LOADED()) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\LAMAR1_01", 0))
			{
				Local_1072[0 /*25*/] = func_309(iLocal_2042, -590.1174f, -1622.818f, 32.0106f, 19.5823f, iLocal_2063, 110, 0, joaat("weapon_pumpshotgun"), 26);
				Local_1072[1 /*25*/] = func_309(iLocal_2043, -590.9761f, -1623.569f, 32.0106f, 342.5562f, iLocal_2063, 135, 0, joaat("weapon_assaultrifle"), 26);
				GlobalFunc_2206(&(uLocal_742[0]), 1);
				GlobalFunc_2206(&(uLocal_742[1]), 1);
				iLocal_741 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_2051, -591.5f, -1621.4f, 100f, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_741, -591.5f, -1621.4f, 100f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_741, 0f, 0f, 180f, 2, 1);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_741, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_741, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2051);
				ENTITY::REMOVE_MODEL_HIDE(-591.5f, -1621.4f, 33.2f, 0.5f, joaat("v_ilev_rc_door1_st"), 0);
				ENTITY::REMOVE_MODEL_HIDE(-588.9f, -1621.6f, 33.2f, 0.5f, joaat("v_ilev_rc_door1_st"), 0);
				MISC::CLEAR_AREA(-588.9f, -1621.6f, 33.2f, 5f, 0, 0, 0, 0);
				iVar0 = 0;
				while (iVar0 < Local_1072)
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1072[iVar0 /*25*/], 1);
					ENTITY::SET_ENTITY_PROOFS(Local_1072[iVar0 /*25*/], 1, 1, 1, 1, 1, 0, 0, 0);
					if (iVar0 == 1)
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1072[iVar0 /*25*/], 1);
						PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_1072[iVar0 /*25*/], 0);
						PED::SET_PED_MAX_HEALTH(Local_1072[iVar0 /*25*/], 1000);
						ENTITY::SET_ENTITY_HEALTH(Local_1072[iVar0 /*25*/], 1000);
					}
					iVar0++;
				}
				func_307(&Local_1072, "Breach ");
				iLocal_83 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_1072)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1072[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_1072[iVar0 /*25*/]))
				{
					switch (Local_1072[iVar0 /*25*/].f_5)
					{
						case 0:
							if (!iLocal_83)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(uLocal_742[0]))
								{
									uLocal_742[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_390, 1f, joaat("v_ilev_rc_door1_st"), 0, 0, 1);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(uLocal_742[1]))
								{
									uLocal_742[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_393, 1f, joaat("v_ilev_rc_door1_st"), 0, 0, 1);
								}
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_742[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_742[1]))
								{
									ENTITY::SET_ENTITY_VISIBLE(uLocal_742[0], true);
									ENTITY::SET_ENTITY_COLLISION(uLocal_742[0], 1, 0);
									ENTITY::FREEZE_ENTITY_POSITION(uLocal_742[0], 1);
									ENTITY::SET_ENTITY_INVINCIBLE(uLocal_742[0], 1);
									ENTITY::SET_ENTITY_VISIBLE(uLocal_742[1], true);
									ENTITY::SET_ENTITY_COLLISION(uLocal_742[1], 1, 0);
									ENTITY::FREEZE_ENTITY_POSITION(uLocal_742[1], 1);
									ENTITY::SET_ENTITY_INVINCIBLE(uLocal_742[1], 1);
									iLocal_83 = 1;
								}
							}
							if (!PED::IS_PED_INJURED(Local_793))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, -590.109f, -1621.448f, 32.01178f, -589.89f, -1617.485f, 34.37877f, 2f, 0, 1, 0))
								{
									if (iVar0 == 0)
									{
										Var1 = { -589.5699f, -1619.771f, 32.0106f };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(sLocal_353, -590.1724f, -1621.482f, 33.1749f, 0f, 0f, -5.84f, 1f, 0, 0, 0);
										fVar18 = SYSTEM::VDIST2(Param0, -590.1724f, -1621.482f, 33.1749f);
										if (fVar18 < 100f)
										{
											CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", (0.5f - (fVar18 / 100f)));
										}
										AUDIO::PLAY_SOUND_FROM_COORD(-1, "LAMAR1_BustDoorOpen1", -590.1724f, -1621.482f, 33.1749f, 0, 0, 0, 0);
										AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_1ST_DOOR_EXPLODES");
									}
									else
									{
										Var1 = { -592.0153f, -1619.49f, 32.0106f };
									}
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1072[iVar0 /*25*/], iLocal_2062);
									ENTITY::SET_ENTITY_INVINCIBLE(Local_1072[iVar0 /*25*/], 0);
									ENTITY::SET_ENTITY_PROOFS(Local_1072[iVar0 /*25*/], 0, 0, 0, 0, 0, 0, 0, 0);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1072[iVar0 /*25*/], 29);
									func_128(&(Local_1072[iVar0 /*25*/]), 10, 1, 2, 0, 0, Var1, 1f);
									Local_1072[iVar0 /*25*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(-599.1f, -1620.098f, 32.001f, 0f, 0f, -91f, 2);
									if (iVar0 == 0)
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar12);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -589.4663f, -1620.326f, 32.0106f, -589.6f, -1617.7f, 32.3f, 1f, 0, 0.5f, 4f, 0, 0, 0, -957453492);
										TASK::TASK_AIM_GUN_AT_COORD(0, -589.6f, -1617.7f, 32.3f, -1, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uVar12);
										TASK::TASK_PERFORM_SEQUENCE(Local_1072[iVar0 /*25*/], uVar12);
										TASK::CLEAR_SEQUENCE_TASK(&uVar12);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1072[iVar0 /*25*/], 1);
									}
									else
									{
										Local_1072[iVar0 /*25*/].f_14 = { -591.5299f, -1619.239f, 32.0105f };
										TASK::OPEN_SEQUENCE_TASK(&uVar12);
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_1072[iVar0 /*25*/].f_14, PLAYER::PLAYER_PED_ID(), 2f, 0, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
										TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
										TASK::CLOSE_SEQUENCE_TASK(uVar12);
										TASK::TASK_PERFORM_SEQUENCE(Local_1072[iVar0 /*25*/], uVar12);
										TASK::CLEAR_SEQUENCE_TASK(&uVar12);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1072[iVar0 /*25*/], 51, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1072[iVar0 /*25*/], 50, 1);
										PED::SET_COMBAT_FLOAT(Local_1072[iVar0 /*25*/], 13, 3f);
										ENTITY::SET_ENTITY_INVINCIBLE(Local_1072[iVar0 /*25*/], 1);
									}
									Local_1072[iVar0 /*25*/].f_1 = GlobalFunc_6797(Local_1072[iVar0 /*25*/], 1, 145);
									Local_1072[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
									Local_1072[iVar0 /*25*/].f_5++;
								}
							}
							break;
						
						case 1:
							if (iVar0 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_742[0]))
								{
									GRAPHICS::REMOVE_DECALS_FROM_OBJECT(uLocal_742[0]);
									ENTITY::SET_ENTITY_VISIBLE(uLocal_742[0], false);
									ENTITY::SET_ENTITY_COLLISION(uLocal_742[0], 0, 0);
									ENTITY::SET_ENTITY_INVINCIBLE(uLocal_742[0], 0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_742[1]))
								{
									GRAPHICS::REMOVE_DECALS_FROM_OBJECT(uLocal_742[1]);
									ENTITY::SET_ENTITY_VISIBLE(uLocal_742[1], false);
									ENTITY::SET_ENTITY_COLLISION(uLocal_742[1], 0, 0);
									ENTITY::SET_ENTITY_INVINCIBLE(uLocal_742[1], 0);
								}
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_741, -590.7942f, -1621.283f, 33.1598f, 0, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(iLocal_741, 0f, 0f, -5f, 2, 1);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_741, 0);
								ENTITY::SET_ENTITY_VISIBLE(iLocal_741, true);
								PHYSICS::ACTIVATE_PHYSICS(iLocal_741);
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_741, 1, -0.5f, 5f, 0f, 0f, 0f, 0f, 0, 0, 1, 1, 0, 0);
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -589.8508f, -1621.564f, 31.76054f, -589.2391f, -1616.516f, 34.76246f, 3.5f, 0, 1, 0))
							{
								PED::SET_PED_TO_RAGDOLL_WITH_FALL(PLAYER::PLAYER_PED_ID(), 1000, 5000, 2, 0f, 1f, 0f, 32f, 0f, 0f, 0f, 0f, 0f, 0f);
								ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 0f, 1f, 0.25f, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
								PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), ((ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) - 100) / 3), 1);
								CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.5f);
							}
							Local_1072[iVar0 /*25*/].f_5++;
							break;
						
						case 2:
							if ((MISC::GET_GAME_TIMER() - Local_1072[iVar0 /*25*/].f_7) > 500)
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_1072[iVar0 /*25*/], 0);
								PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1072[iVar0 /*25*/], 1);
								PED::SET_PED_CAN_RAGDOLL(Local_1072[iVar0 /*25*/], 1);
								if (iVar0 == 0)
								{
									if (!iLocal_130[0] && iLocal_130[1])
									{
										if (!GlobalFunc_5172(&Local_819, 1))
										{
											GlobalFunc_5130(Local_1072[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
											iLocal_130[0] = 1;
										}
									}
									else
									{
										Local_1072[iVar0 /*25*/].f_7 = 0;
										Local_1072[iVar0 /*25*/].f_5++;
									}
								}
								else
								{
									Local_1072[iVar0 /*25*/].f_7 = 0;
									Local_1072[iVar0 /*25*/].f_5++;
								}
							}
							break;
						
						case 3:
							if (iVar0 == 0)
							{
								if (Local_1072[iVar0 /*25*/].f_7 == 0)
								{
									Local_1072[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - Local_1072[iVar0 /*25*/].f_7) > 3000)
								{
									if (!PED::IS_PED_RAGDOLL(Local_1072[iVar0 /*25*/]))
									{
										PED::SET_PED_ACCURACY(Local_793, 100);
									}
									TASK::OPEN_SEQUENCE_TASK(&uVar12);
									if (!PED::IS_PED_RAGDOLL(Local_1072[iVar0 /*25*/]))
									{
										if (!PED::IS_PED_INJURED(Local_793))
										{
											TASK::TASK_SHOOT_AT_ENTITY(0, Local_793, 800, -957453492);
										}
									}
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
									TASK::CLOSE_SEQUENCE_TASK(uVar12);
									TASK::TASK_PERFORM_SEQUENCE(Local_1072[iVar0 /*25*/], uVar12);
									TASK::CLEAR_SEQUENCE_TASK(&uVar12);
									if (!PED::IS_PED_RAGDOLL(Local_1072[iVar0 /*25*/]))
									{
										if (!PED::IS_PED_INJURED(Local_793))
										{
											PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_793, 0);
											PED::SET_PED_TO_RAGDOLL(Local_793, 1000, 2000, 2, 1, 1, 0);
											PED::APPLY_DAMAGE_TO_PED(Local_793, ENTITY::GET_ENTITY_HEALTH(Local_793) + 50, 1);
										}
									}
									Local_1072[iVar0 /*25*/].f_7 = 0;
									Local_1072[iVar0 /*25*/].f_5++;
								}
								if (PED::IS_PED_INJURED(Local_1072[1 /*25*/]))
								{
									MISC::SET_BIT(&(Local_1072[iVar0 /*25*/].f_9), 3);
									Local_1072[iVar0 /*25*/].f_7 = 0;
									Local_1072[iVar0 /*25*/].f_5 = 10;
								}
							}
							else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1072[iVar0 /*25*/].f_8))
							{
								if (!iLocal_130[2])
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1072[iVar0 /*25*/].f_8) > 0.21f)
									{
										GlobalFunc_5130(Local_1072[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
										iLocal_130[2] = 1;
									}
								}
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1072[iVar0 /*25*/].f_8) > 0.25f)
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1072[iVar0 /*25*/].f_8) > 0.27f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -588.2419f, -1619.37f, 32.01052f, -593.0773f, -1618.893f, 34.76052f, 5.25f, 0, 1, 0))
									{
										Local_1072[iVar0 /*25*/].f_7 = 0;
										Local_1072[iVar0 /*25*/].f_5 = 10;
									}
								}
							}
							else
							{
								Local_1072[iVar0 /*25*/].f_7 = 0;
								Local_1072[iVar0 /*25*/].f_5 = 10;
							}
							break;
						
						case 10:
							if (PED::GET_PED_MAX_HEALTH(Local_1072[iVar0 /*25*/]) > 200)
							{
								PED::SET_PED_MAX_HEALTH(Local_1072[iVar0 /*25*/], 200);
								if (ENTITY::GET_ENTITY_HEALTH(Local_1072[iVar0 /*25*/]) > 135)
								{
									ENTITY::SET_ENTITY_HEALTH(Local_1072[iVar0 /*25*/], 135);
								}
							}
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1072[iVar0 /*25*/], 1);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1072[iVar0 /*25*/], 0);
							PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1072[iVar0 /*25*/], 1);
							if (((TASK::GET_SCRIPT_TASK_STATUS(Local_1072[iVar0 /*25*/], 780511057) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_1072[iVar0 /*25*/], 242628503) != 1) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1072[iVar0 /*25*/].f_8)) || MISC::IS_BIT_SET(Local_1072[iVar0 /*25*/].f_9, 3))
							{
								if (iVar0 == 0)
								{
									Local_1072[iVar0 /*25*/].f_14 = { -591.5299f, -1619.239f, 32.0105f };
								}
								else if (iVar0 == 1)
								{
									Local_1072[iVar0 /*25*/].f_14 = { -591.5299f, -1619.239f, 32.0105f };
								}
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1072[iVar0 /*25*/], Local_1072[iVar0 /*25*/].f_14, 2f, 0, 0);
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1072[iVar0 /*25*/].f_8))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1072[iVar0 /*25*/], -4f, 1);
									Local_1072[iVar0 /*25*/].f_8 = -1;
									bVar19 = true;
								}
								TASK::OPEN_SEQUENCE_TASK(&uVar12);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
								if (bVar19)
								{
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_1072[iVar0 /*25*/].f_14, PLAYER::PLAYER_PED_ID(), 1f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
								}
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 67108864, 16);
								TASK::CLOSE_SEQUENCE_TASK(uVar12);
								TASK::TASK_PERFORM_SEQUENCE(Local_1072[iVar0 /*25*/], uVar12);
								TASK::CLEAR_SEQUENCE_TASK(&uVar12);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1072[iVar0 /*25*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1072[iVar0 /*25*/], 50, 1);
								PED::SET_COMBAT_FLOAT(Local_1072[iVar0 /*25*/], 13, 3f);
								MISC::CLEAR_BIT(&(Local_1072[iVar0 /*25*/].f_9), 3);
							}
							break;
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1072[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1072[iVar0 /*25*/], -4f, 1);
						Local_1072[iVar0 /*25*/].f_8 = -1;
						ENTITY::SET_ENTITY_INVINCIBLE(Local_1072[iVar0 /*25*/], 0);
						PED::SET_PED_CAN_RAGDOLL(Local_1072[iVar0 /*25*/], 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1072[iVar0 /*25*/], 0);
						if (PED::GET_PED_MAX_HEALTH(Local_1072[iVar0 /*25*/]) > 200)
						{
							PED::SET_PED_MAX_HEALTH(Local_1072[iVar0 /*25*/], 200);
							if (ENTITY::GET_ENTITY_HEALTH(Local_1072[iVar0 /*25*/]) > 135)
							{
								ENTITY::SET_ENTITY_HEALTH(Local_1072[iVar0 /*25*/], 135);
							}
						}
					}
				}
				else
				{
					func_226(&(Local_1072[iVar0 /*25*/]), 0);
					GlobalFunc_2206(&iLocal_741, 0);
					STREAMING::REMOVE_PTFX_ASSET();
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\LAMAR1_01");
				}
			}
			iVar0++;
		}
	}
	if (!Local_1199[0 /*25*/].f_2)
	{
		if (Local_1072[0 /*25*/].f_5 > 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_2042))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1199[0 /*25*/]))
				{
					Local_1199[0 /*25*/] = func_309(iLocal_2042, -562.0791f, -1627.719f, 31.8098f, 86.8494f, iLocal_2063, 135, 0, joaat("weapon_pistol"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1199[1 /*25*/]))
				{
					Local_1199[1 /*25*/] = func_309(iLocal_2042, -562.11f, -1626.726f, 31.2098f, 86.8494f, iLocal_2063, 135, 0, joaat("weapon_pistol"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1199[2 /*25*/]))
				{
					Local_1199[2 /*25*/] = func_309(iLocal_2042, -561.9381f, -1625.961f, 30.6098f, 95.2498f, iLocal_2063, 175, 0, joaat("weapon_microsmg"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1199[3 /*25*/]))
				{
					Local_1199[3 /*25*/] = func_309(iLocal_2042, -561.6803f, -1624.112f, 30.0093f, 95.2498f, iLocal_2063, 135, 0, joaat("weapon_pumpshotgun"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1199[4 /*25*/]))
				{
					Local_1199[4 /*25*/] = func_309(iLocal_2042, -574.1028f, -1625.116f, 32.0106f, 81.3094f, iLocal_2063, 135, 0, joaat("weapon_pistol"), 26);
					func_307(&Local_1199, "heliroom ");
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_1199)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1199[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_1199[iVar0 /*25*/]))
				{
					switch (Local_1199[iVar0 /*25*/].f_5)
					{
						case 0:
							if (iVar0 < 3)
							{
								PED::SET_PED_RESET_FLAG(Local_1199[iVar0 /*25*/], 282, 1);
								if (func_303(PLAYER::PLAYER_PED_ID(), Local_793, Local_806, -586.0922f, -1625.472f, 32.18966f, -592.1024f, -1624.91f, 34.51054f, 6.85f))
								{
									func_305(&(Local_1199[iVar0 /*25*/]), 10, 2, 2, 0, 1);
									if (iVar0 == 0)
									{
										func_295(Local_1199[iVar0 /*25*/], &(Local_1199[iVar0 /*25*/].f_4), -573.5095f, -1627.338f, 32.0258f, 79.2489f, 2f, 2, 0, 1, 1);
									}
									else if (iVar0 == 1)
									{
										func_295(Local_1199[iVar0 /*25*/], &(Local_1199[iVar0 /*25*/].f_4), -577.9146f, -1623.586f, 32.0106f, 89.1467f, 2f, 2, 0, 1, 1);
									}
									else
									{
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1199[iVar0 /*25*/], -578.3687f, -1628.826f, 32.0106f, 2f, 1, 0);
									}
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1199[iVar0 /*25*/], iLocal_2062);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1199[iVar0 /*25*/], 100f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1199[iVar0 /*25*/], 1);
									if (iVar0 != 2)
									{
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1199[iVar0 /*25*/], 1);
									}
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1199[iVar0 /*25*/], 51, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1199[iVar0 /*25*/], 50, 1);
									PED::SET_COMBAT_FLOAT(Local_1199[iVar0 /*25*/], 13, 3f);
									if (iVar0 == 0)
									{
										GlobalFunc_5130(Local_1199[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
									}
									Local_1199[iVar0 /*25*/].f_5++;
									Local_1199[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								}
							}
							else if (iVar0 == 3)
							{
								if (((PED::IS_PED_INJURED(Local_1199[0 /*25*/]) && PED::IS_PED_INJURED(Local_1199[1 /*25*/])) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -566.9922f, -1627.381f, 31.79691f, -580.0611f, -1626.554f, 34.57551f, 9.5f, 0, 1, 0)) || func_273(&Local_1199) <= 3)
								{
									func_305(&(Local_1199[iVar0 /*25*/]), 10, 2, 2, 0, 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1199[iVar0 /*25*/], -573.6948f, -1627.846f, 32.0258f, 2f, 0, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1199[iVar0 /*25*/], 51, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1199[iVar0 /*25*/], 50, 1);
									PED::SET_COMBAT_FLOAT(Local_1199[iVar0 /*25*/], 13, 3f);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1199[iVar0 /*25*/], iLocal_2062);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1199[iVar0 /*25*/], 100f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1199[iVar0 /*25*/], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1199[iVar0 /*25*/], 1);
									GlobalFunc_5130(Local_1199[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
									Local_1199[iVar0 /*25*/].f_5++;
									Local_1199[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								}
							}
							else if (iVar0 == 4)
							{
								if (func_303(Local_793, Local_806, 0, -586.0922f, -1625.472f, 32.18966f, -592.1024f, -1624.91f, 34.51054f, 6.85f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -589.3593f, -1628.688f, 32.13086f, -589.5018f, -1619.567f, 34.76056f, 5.25f, 0, 1, 0))
								{
									if (PED::IS_PED_INJURED(Local_1072[0 /*25*/]) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -589.3593f, -1628.688f, 32.13086f, -589.5018f, -1619.567f, 34.76056f, 5.25f, 0, 1, 0))
									{
										Local_1199[iVar0 /*25*/].f_14 = { -581.6903f, -1624.329f, 32.0106f };
										func_305(&(Local_1199[iVar0 /*25*/]), 10, 2, 2, 0, 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1199[iVar0 /*25*/], Local_1199[iVar0 /*25*/].f_14, 2f, 1, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1199[iVar0 /*25*/], 51, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1199[iVar0 /*25*/], 50, 1);
										PED::SET_COMBAT_FLOAT(Local_1199[iVar0 /*25*/], 13, 3f);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1199[iVar0 /*25*/], 1);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1199[iVar0 /*25*/], iLocal_2062);
										TASK::OPEN_SEQUENCE_TASK(&uVar12);
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
										TASK::CLOSE_SEQUENCE_TASK(uVar12);
										TASK::TASK_PERFORM_SEQUENCE(Local_1199[iVar0 /*25*/], uVar12);
										TASK::CLEAR_SEQUENCE_TASK(&uVar12);
										GlobalFunc_5130(Local_1199[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
										Local_1199[iVar0 /*25*/].f_5++;
										Local_1199[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
									}
								}
							}
							break;
						
						case 1:
							if ((MISC::GET_GAME_TIMER() - Local_1199[iVar0 /*25*/].f_7) > 13000 || (iVar0 == 3 && (MISC::GET_GAME_TIMER() - Local_1199[iVar0 /*25*/].f_7) > 8000))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1199[iVar0 /*25*/], 0);
								Local_1199[iVar0 /*25*/].f_5++;
								Local_1199[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
							}
							break;
					}
					if (iVar0 == 4)
					{
						if (GlobalFunc_537(Local_1199[iVar0 /*25*/].f_14, -581.6903f, -1624.329f, 32.0106f, 0.1f))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -586.0922f, -1625.472f, 32.18966f, -592.1024f, -1624.91f, 34.51054f, 6.85f, 0, 1, 0))
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_1199[iVar0 /*25*/], 1);
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Local_1199[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 4f, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1199[iVar0 /*25*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1199[iVar0 /*25*/], 50, 1);
								Local_1199[iVar0 /*25*/].f_14 = { 0f, 0f, 0f };
							}
						}
					}
					if (Local_1199[iVar0 /*25*/].f_5 > 0)
					{
						func_304(Local_1199[iVar0 /*25*/], &(Local_1199[iVar0 /*25*/].f_17), -1, 0, 0, 0, -1082130432, 0);
					}
				}
				else
				{
					func_226(&(Local_1199[iVar0 /*25*/]), 0);
				}
			}
			iVar0++;
		}
	}
	if (!Local_1754[0 /*25*/].f_2)
	{
		if (Local_1072[0 /*25*/].f_5 > 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_2042))
			{
				Local_1754[0 /*25*/] = func_309(iLocal_2042, -562.1794f, -1628.912f, 28.0096f, 359.9586f, iLocal_2063, 135, 0, joaat("weapon_pistol"), 26);
				func_307(&Local_1754, "window_2 ");
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_1754)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1754[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_1754[iVar0 /*25*/]))
				{
					switch (Local_1754[iVar0 /*25*/].f_5)
					{
						case 0:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -564.71f, -1628.201f, 28.00959f, -564.2546f, -1622.007f, 31.75942f, 2.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -560.6124f, -1623.895f, 30.00933f, -565.5566f, -1623.529f, 32.31889f, 3f, 0, 1, 0))
							{
								func_305(&(Local_1754[iVar0 /*25*/]), 10, 2, 2, 1, 1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1754[iVar0 /*25*/], -563.7205f, -1630.929f, 28.0096f, 2f, 1, 0);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1754[iVar0 /*25*/], iLocal_2062);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1754[iVar0 /*25*/], 50f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1754[iVar0 /*25*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1754[iVar0 /*25*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1754[iVar0 /*25*/], 50, 1);
								PED::SET_COMBAT_FLOAT(Local_1754[iVar0 /*25*/], 13, 3f);
								GlobalFunc_5130(Local_1754[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
								Local_1754[iVar0 /*25*/].f_5++;
								Local_1754[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
							}
							break;
						
						case 1:
							if ((MISC::GET_GAME_TIMER() - Local_1754[iVar0 /*25*/].f_7) > 2500)
							{
								GlobalFunc_5130(Local_1754[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
								Local_1754[iVar0 /*25*/].f_5++;
							}
							break;
					}
					if (Local_1754[iVar0 /*25*/].f_5 > 0)
					{
						func_304(Local_1754[iVar0 /*25*/], &(Local_1754[iVar0 /*25*/].f_17), -1, 0, 0, 0, -1082130432, 0);
					}
				}
				else
				{
					if (Local_1754[iVar0 /*25*/].f_5 <= 0)
					{
						Local_1754[iVar0 /*25*/].f_5 = 1;
					}
					func_226(&(Local_1754[iVar0 /*25*/]), 0);
				}
			}
			iVar0++;
		}
	}
	if (!Local_1325[0 /*25*/].f_2)
	{
		if (Local_1754[0 /*25*/].f_5 > 0)
		{
			if (SYSTEM::VDIST2(-561.449f, -1603.411f, 26.0109f, Param0) < 2500f)
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_2042) && STREAMING::HAS_MODEL_LOADED(iLocal_2043))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_1325[0 /*25*/]))
					{
						Local_1325[0 /*25*/] = func_309(iLocal_2042, -564.2737f, -1601.372f, 26.0108f, 182.8773f, iLocal_2063, 135, 0, joaat("weapon_assaultrifle"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1325[1 /*25*/]))
					{
						Local_1325[1 /*25*/] = func_309(iLocal_2043, -563.2382f, -1602.565f, 26.0108f, 183.3599f, iLocal_2063, 135, 0, joaat("weapon_assaultrifle"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1325[2 /*25*/]))
					{
						Local_1325[2 /*25*/] = func_309(iLocal_2042, -564.2366f, -1602.449f, 26.0108f, 183.3599f, iLocal_2063, 135, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1325[3 /*25*/]))
					{
						Local_1325[3 /*25*/] = func_309(iLocal_2043, -565.6711f, -1601.512f, 26.0108f, 177.4956f, iLocal_2063, 135, 0, joaat("weapon_microsmg"), 26);
						iVar20[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-559.99f, -1610.07f, 26.01f, 2f, joaat("prop_box_wood03a"), 0, 0, 1);
						iVar20[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-560f, -1611.25f, 26.01f, 2f, joaat("prop_box_wood03a"), 0, 0, 1);
						iVar20[2] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-562.69f, -1614.53f, 26.01f, 2f, joaat("prop_box_wood03a"), 0, 0, 1);
						iVar20[3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-562.79f, -1615.71f, 26.01f, 2f, joaat("prop_box_wood03a"), 0, 0, 1);
						iVar0 = 0;
						while (iVar0 < iVar20)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar20[iVar0]))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iVar20[iVar0], 1);
							}
							iVar0++;
						}
						func_307(&Local_1325, "Pre-warehouse ");
						iLocal_296 = 0;
					}
				}
			}
		}
	}
	else
	{
		bVar25 = false;
		bVar26 = false;
		iVar0 = 0;
		while (iVar0 < Local_1325)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1325[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_1325[iVar0 /*25*/]))
				{
					switch (Local_1325[iVar0 /*25*/].f_5)
					{
						case 0:
							if (!bVar26)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -560.26f, -1619.91f, 26.01f, -563.71f, -1619.67f, 28.01f, 1f, 0, 1, 0))
								{
									bVar25 = true;
								}
								else if (Local_1325[iVar0 /*25*/].f_7 == 0)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, -560.26f, -1619.91f, 26.01f, -563.71f, -1619.67f, 28.01f, 1f, 0, 1, 0))
									{
										Local_1325[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_1325[iVar0 /*25*/].f_7) > 5000)
								{
									bVar25 = true;
								}
								bVar26 = true;
							}
							if (bVar25)
							{
								Local_1325[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								Local_1325[iVar0 /*25*/].f_5++;
							}
							break;
						
						case 1:
							STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_11");
							if (iVar0 < 2)
							{
								if ((MISC::GET_GAME_TIMER() - Local_1325[iVar0 /*25*/].f_7) > 500 && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_11"))
								{
									if (iVar0 == 0)
									{
										Local_1325[iVar0 /*25*/].f_14 = { -559.94f, -1606.506f, 26.011f };
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1325[iVar0 /*25*/], Local_1325[iVar0 /*25*/].f_14, 2f, 0, 0);
									}
									else if (iVar0 == 1)
									{
										Local_1325[iVar0 /*25*/].f_14 = { -561.5538f, -1607.413f, 26.011f };
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1325[iVar0 /*25*/], Local_1325[iVar0 /*25*/].f_14, 2f, 0, 0);
									}
									func_305(&(Local_1325[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1325[iVar0 /*25*/], iLocal_2062);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1325[iVar0 /*25*/], 51, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1325[iVar0 /*25*/], 50, 1);
									PED::SET_COMBAT_FLOAT(Local_1325[iVar0 /*25*/], 13, 3f);
									Local_1325[iVar0 /*25*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(-559.968f, -1610.005f, 26.03f, 0f, 0f, 88f, 2);
									if (iVar0 == 0)
									{
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1325[iVar0 /*25*/], Local_1325[iVar0 /*25*/].f_8, "misslamar1lam_1_ig_11", "lam_1_ig_11_swat_a", 8f, -8f, 1, 0, 1148846080, 0);
										PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_1325[iVar0 /*25*/].f_8, 0.05f);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1325[iVar0 /*25*/], 1);
										PED::SET_PED_FIRING_PATTERN(Local_1325[iVar0 /*25*/], -957453492);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1325[iVar0 /*25*/], 1);
									}
									else
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1325[iVar0 /*25*/], 100f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1325[iVar0 /*25*/], 0);
									}
									if (iVar0 == 0)
									{
										GlobalFunc_5130(Local_1325[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
									}
									else
									{
										PED::SET_PED_CONFIG_FLAG(Local_1325[iVar0 /*25*/], 286, 1);
									}
									Local_1325[iVar0 /*25*/].f_7 = 0;
									Local_1325[iVar0 /*25*/].f_5++;
								}
							}
							else if (iVar0 == 2)
							{
								if (func_273(&Local_1325) < 4 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -561.1622f, -1611.552f, 25.76083f, -560.3719f, -1601.496f, 32.26083f, 5f, 0, 1, 0))
								{
									Local_1325[iVar0 /*25*/].f_14 = { -561.5297f, -1609.808f, 26.0108f };
									func_305(&(Local_1325[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1325[iVar0 /*25*/], Local_1325[iVar0 /*25*/].f_14, 2f, 1, 0);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1325[iVar0 /*25*/], iLocal_2062);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1325[iVar0 /*25*/], 100f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1325[iVar0 /*25*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1325[iVar0 /*25*/], 51, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1325[iVar0 /*25*/], 50, 1);
									PED::SET_COMBAT_FLOAT(Local_1325[iVar0 /*25*/], 13, 3f);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1325[iVar0 /*25*/], 1);
									Local_1325[iVar0 /*25*/].f_7 = 0;
									Local_1325[iVar0 /*25*/].f_5++;
								}
							}
							else if (iVar0 == 3)
							{
								if (func_273(&Local_1325) < 3 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -561.1622f, -1611.552f, 25.76083f, -560.3719f, -1601.496f, 32.26083f, 5f, 0, 1, 0))
								{
									Local_1325[iVar0 /*25*/].f_14 = { -560.71f, -1601.676f, 26.0108f };
									func_305(&(Local_1325[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1325[iVar0 /*25*/], Local_1325[iVar0 /*25*/].f_14, 1f, 1, 0);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1325[iVar0 /*25*/], iLocal_2062);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1325[iVar0 /*25*/], 100f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1325[iVar0 /*25*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1325[iVar0 /*25*/], 51, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1325[iVar0 /*25*/], 50, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1325[iVar0 /*25*/], 35, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1325[iVar0 /*25*/], 34, 0);
									PED::SET_COMBAT_FLOAT(Local_1325[iVar0 /*25*/], 13, 3f);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1325[iVar0 /*25*/], 1);
									Local_1325[iVar0 /*25*/].f_7 = 0;
									Local_1325[iVar0 /*25*/].f_5++;
								}
							}
							break;
						
						case 2:
							if (iVar0 < 2)
							{
								if (iVar0 == 0)
								{
									func_297(&(Local_1325[iVar0 /*25*/]), &(Local_1325[iVar0 /*25*/].f_8), 0.9f, 1, -1056964608);
								}
								else if (iVar0 == 1)
								{
									func_297(&(Local_1325[iVar0 /*25*/]), &(Local_1325[iVar0 /*25*/].f_8), 0.77f, 1, -1056964608);
								}
							}
							if (Local_1325[iVar0 /*25*/].f_7 == 0)
							{
								Local_1325[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
							}
							else if (iVar0 < 2)
							{
								if (iVar0 == 0)
								{
									iVar27 = 6000;
								}
								else
								{
									iVar27 = 9000;
								}
								if ((MISC::GET_GAME_TIMER() - Local_1325[iVar0 /*25*/].f_7) > iVar27 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1325[iVar0 /*25*/].f_8))
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1325[iVar0 /*25*/], 0);
									Local_1325[iVar0 /*25*/].f_5++;
								}
							}
							else if ((MISC::GET_GAME_TIMER() - Local_1325[iVar0 /*25*/].f_7) > 6000)
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1325[iVar0 /*25*/], 0);
								if (iVar0 == 3)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1325[iVar0 /*25*/], 51, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1325[iVar0 /*25*/], 50, 1);
								}
								Local_1325[iVar0 /*25*/].f_5++;
							}
							break;
					}
					if (Local_1325[iVar0 /*25*/].f_5 > 1)
					{
						func_304(Local_1325[iVar0 /*25*/], &(Local_1325[iVar0 /*25*/].f_17), -1, 0, 0, 0, -1082130432, 0);
					}
				}
				else
				{
					func_226(&(Local_1325[iVar0 /*25*/]), 0);
				}
			}
			iVar0++;
		}
	}
	if (!Local_1552[0 /*25*/].f_2)
	{
		if (Local_1325[0 /*25*/].f_5 > 0 || Local_793.f_3 >= 50)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_2042) && STREAMING::HAS_MODEL_LOADED(iLocal_2043))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1552[0 /*25*/]))
				{
					Local_1552[0 /*25*/] = func_309(iLocal_2042, -604.6722f, -1614.372f, 26.011f, 1.7272f, iLocal_2063, 135, 0, joaat("weapon_assaultrifle"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1552[1 /*25*/]))
				{
					Local_1552[1 /*25*/] = func_309(iLocal_2043, -604.7084f, -1616.147f, 26.011f, 1.7272f, iLocal_2063, 165, 0, joaat("weapon_assaultrifle"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1552[2 /*25*/]))
				{
					Local_1552[2 /*25*/] = func_309(iLocal_2042, -604.7386f, -1617.994f, 26.011f, 1.7272f, iLocal_2063, 135, 0, joaat("weapon_assaultrifle"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1552[3 /*25*/]))
				{
					Local_1552[3 /*25*/] = func_309(iLocal_2043, -605.5866f, -1615.778f, 26.0393f, 336.7832f, iLocal_2063, 135, 0, joaat("weapon_microsmg"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1552[4 /*25*/]))
				{
					Local_1552[4 /*25*/] = func_309(iLocal_2043, -603.8036f, -1605.409f, 26.6105f, 267.3067f, iLocal_2063, 135, 0, joaat("weapon_microsmg"), 26);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_1552[5 /*25*/]))
				{
					Local_1552[5 /*25*/] = func_309(iLocal_2042, -605.4207f, -1614.522f, 26.0108f, 330.9266f, iLocal_2063, 135, 0, joaat("weapon_pumpshotgun"), 26);
					func_307(&Local_1552, "Warehouse ");
					iVar0 = 0;
					while (iVar0 < Local_1552)
					{
						if (!PED::IS_PED_INJURED(Local_1552[iVar0 /*25*/]))
						{
							TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_1552[iVar0 /*25*/], 0);
						}
						iVar0++;
					}
				}
			}
		}
	}
	else
	{
		bVar28 = false;
		bVar29 = false;
		bVar30 = false;
		iVar0 = 0;
		while (iVar0 < Local_1552)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1552[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_1552[iVar0 /*25*/]))
				{
					Var31 = { ENTITY::GET_ENTITY_COORDS(Local_1552[iVar0 /*25*/], 1) };
					switch (Local_1552[iVar0 /*25*/].f_5)
					{
						case 0:
							if (!bVar28)
							{
								bVar29 = (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -565.84f, -1601.32f, 25.8f, -571.33f, -1600.83f, 29.01f, 3f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -568.24f, -1607.67f, 30.48f, -577.45f, -1606.81f, 25.76f, 16.75f, 0, 1, 0));
								bVar28 = true;
							}
							if (bVar29)
							{
								Local_1552[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								Local_1552[iVar0 /*25*/].f_5++;
							}
							break;
						
						case 1:
							if (iVar0 < 3)
							{
								STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_13");
								if ((MISC::GET_GAME_TIMER() - Local_1552[iVar0 /*25*/].f_7) > 1000 && STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_13"))
								{
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1552[iVar0 /*25*/], iLocal_2062);
									func_305(&(Local_1552[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									if (iVar0 == 0)
									{
										Local_1552[iVar0 /*25*/].f_14 = { -586.1633f, -1604.645f, 26.011f };
										func_295(Local_1552[iVar0 /*25*/], &(Local_1552[iVar0 /*25*/].f_4), Local_1552[iVar0 /*25*/].f_14, 270.8263f, 2f, 0, 0, 1, 1);
									}
									else if (iVar0 == 1)
									{
										Local_1552[iVar0 /*25*/].f_14 = { -590.7108f, -1610.339f, 26.011f };
										func_295(Local_1552[iVar0 /*25*/], &(Local_1552[iVar0 /*25*/].f_4), Local_1552[iVar0 /*25*/].f_14, 272.9712f, 2f, 1, 0, 1, 1);
									}
									else if (iVar0 == 2)
									{
										Local_1552[iVar0 /*25*/].f_14 = { -584.5994f, -1601.208f, 26.011f };
										func_295(Local_1552[iVar0 /*25*/], &(Local_1552[iVar0 /*25*/].f_4), Local_1552[iVar0 /*25*/].f_14, 270.8263f, 2f, 0, 0, 1, 1);
									}
									Local_1552[iVar0 /*25*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(-589.947f, -1610.48f, 26.043f, 0f, 0f, 90f, 2);
									if (iVar0 == 0)
									{
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1552[iVar0 /*25*/], Local_1552[iVar0 /*25*/].f_8, "misslamar1lam_1_ig_13", "lam_1_ig_13_a", 8f, -8f, 5, 0, 1148846080, 0);
									}
									else if (iVar0 == 1)
									{
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1552[iVar0 /*25*/], Local_1552[iVar0 /*25*/].f_8, "misslamar1lam_1_ig_13", "lam_1_ig_13_b", 8f, -8f, 5, 0, 1148846080, 0);
									}
									else
									{
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1552[iVar0 /*25*/], Local_1552[iVar0 /*25*/].f_8, "misslamar1lam_1_ig_13", "lam_1_ig_13_c", 8f, -8f, 5, 0, 1148846080, 0);
									}
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1552[iVar0 /*25*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1552[iVar0 /*25*/], 51, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1552[iVar0 /*25*/], 50, 1);
									PED::SET_COMBAT_FLOAT(Local_1552[iVar0 /*25*/], 13, 3f);
									Local_1552[iVar0 /*25*/].f_7 = 0;
									Local_1552[iVar0 /*25*/].f_5++;
								}
							}
							else if (iVar0 == 3)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -605.6935f, -1609.531f, 26.01081f, -588.6613f, -1609.12f, 31.01081f, 6.75f, 0, 1, 0) || (func_273(&Local_1552) + func_273(&Local_1426)) < 4)
								{
									Local_1552[iVar0 /*25*/].f_14 = { -598.8683f, -1611.348f, 26.0109f };
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1552[iVar0 /*25*/], iLocal_2062);
									func_305(&(Local_1552[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1552[iVar0 /*25*/], Local_1552[iVar0 /*25*/].f_14, 2f, 1, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1552[iVar0 /*25*/], 50f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1552[iVar0 /*25*/], 0);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1552[iVar0 /*25*/], 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1552[iVar0 /*25*/], 51, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1552[iVar0 /*25*/], 50, 1);
									PED::SET_COMBAT_FLOAT(Local_1552[iVar0 /*25*/], 13, 3f);
									GlobalFunc_5130(Local_1552[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
									Local_1552[iVar0 /*25*/].f_7 = 0;
									Local_1552[iVar0 /*25*/].f_5++;
								}
							}
							else if (iVar0 == 4)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -606.0367f, -1609.49f, 25.29745f, -584.5716f, -1609.026f, 31.7608f, 7f, 0, 1, 0))
								{
									Local_1552[iVar0 /*25*/].f_14 = { -593.4334f, -1608.603f, 26.0108f };
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1552[iVar0 /*25*/], iLocal_2062);
									func_305(&(Local_1552[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1552[iVar0 /*25*/], Local_1552[iVar0 /*25*/].f_14, 2f, 1, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1552[iVar0 /*25*/], 100f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1552[iVar0 /*25*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1552[iVar0 /*25*/], 51, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1552[iVar0 /*25*/], 50, 1);
									PED::SET_COMBAT_FLOAT(Local_1552[iVar0 /*25*/], 13, 3f);
									ENTITY::SET_ENTITY_INVINCIBLE(Local_1552[iVar0 /*25*/], 0);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1552[iVar0 /*25*/], 1);
									GlobalFunc_5130(Local_1552[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
									Local_1552[iVar0 /*25*/].f_7 = 0;
									Local_1552[iVar0 /*25*/].f_5++;
								}
							}
							else if (iVar0 == 5)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -605.6935f, -1609.531f, 26.01081f, -588.6613f, -1609.12f, 31.01081f, 6.75f, 0, 1, 0) || (PED::IS_PED_INJURED(Local_1426[3 /*25*/]) && Local_1426[3 /*25*/].f_2))
								{
									Local_1552[iVar0 /*25*/].f_14 = { -590.7108f, -1610.339f, 26.011f };
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1552[iVar0 /*25*/], iLocal_2062);
									func_305(&(Local_1552[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1552[iVar0 /*25*/], Local_1552[iVar0 /*25*/].f_14, 2f, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1552[iVar0 /*25*/], 100f, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1552[iVar0 /*25*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1552[iVar0 /*25*/], 51, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1552[iVar0 /*25*/], 50, 1);
									PED::SET_COMBAT_FLOAT(Local_1552[iVar0 /*25*/], 13, 3f);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1552[iVar0 /*25*/], 1);
									Local_1552[iVar0 /*25*/].f_7 = 0;
									Local_1552[iVar0 /*25*/].f_5++;
								}
							}
							break;
						
						case 2:
							if (iVar0 < 3)
							{
								if (iVar0 == 0)
								{
									func_292(&(Local_1552[iVar0 /*25*/]), &(Local_1552[iVar0 /*25*/].f_8), &(Local_1552[iVar0 /*25*/].f_7), Local_1552[iVar0 /*25*/].f_14, 0.9f, 0.5f, 1, 1, 0, -1056964608);
								}
								else if (iVar0 == 1)
								{
									func_292(&(Local_1552[iVar0 /*25*/]), &(Local_1552[iVar0 /*25*/].f_8), &(Local_1552[iVar0 /*25*/].f_7), Local_1552[iVar0 /*25*/].f_14, 0.7f, 0.5f, 1, 1, 0, -1056964608);
								}
								else
								{
									func_292(&(Local_1552[iVar0 /*25*/]), &(Local_1552[iVar0 /*25*/].f_8), &(Local_1552[iVar0 /*25*/].f_7), Local_1552[iVar0 /*25*/].f_14, 0.99f, 0.5f, 1, 0, 0, -1056964608);
								}
								if (iVar0 == 1)
								{
									if (!GlobalFunc_537(Local_1552[iVar0 /*25*/].f_14, -584.7054f, -1608.466f, 26.0108f, 0.5f))
									{
										if (PED::IS_PED_INJURED(Local_1426[3 /*25*/]) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1552[iVar0 /*25*/].f_8))
										{
											Local_1552[iVar0 /*25*/].f_14 = { -584.7054f, -1608.466f, 26.0108f };
											PED::SET_PED_COMBAT_MOVEMENT(Local_1552[iVar0 /*25*/], 1);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1552[iVar0 /*25*/], Local_1552[iVar0 /*25*/].f_14, 2f, 1, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1552[iVar0 /*25*/], 51, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1552[iVar0 /*25*/], 50, 1);
											PED::SET_COMBAT_FLOAT(Local_1552[iVar0 /*25*/], 13, 3f);
											GlobalFunc_5130(Local_1552[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
										}
									}
								}
							}
							else if (Local_1552[iVar0 /*25*/].f_7 == 0)
							{
								Local_1552[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - Local_1552[iVar0 /*25*/].f_7) > 10000)
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1552[iVar0 /*25*/], 0);
								Local_1552[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
							}
							if (!GlobalFunc_537(Local_1552[iVar0 /*25*/].f_14, Var31, 1f))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
								{
									if (!MISC::IS_BIT_SET(Local_1552[iVar0 /*25*/].f_9, 2) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1552[iVar0 /*25*/].f_8))
									{
										if (SYSTEM::VDIST2(Var31, Local_1552[iVar0 /*25*/].f_14) < SYSTEM::VDIST2(Var4, Local_1552[iVar0 /*25*/].f_14) && SYSTEM::VDIST2(Var31, Local_1552[iVar0 /*25*/].f_14) < SYSTEM::VDIST2(Var7, Local_1552[iVar0 /*25*/].f_14))
										{
											PED::SET_PED_COMBAT_MOVEMENT(Local_1552[iVar0 /*25*/], 1);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1552[iVar0 /*25*/], Local_1552[iVar0 /*25*/].f_14, 2f, 1, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_1552[iVar0 /*25*/], 51, 1);
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1552[iVar0 /*25*/], 0);
											TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1552[iVar0 /*25*/], 100f, 0);
											MISC::SET_BIT(&(Local_1552[iVar0 /*25*/].f_9), 2);
										}
									}
								}
								else if (MISC::IS_BIT_SET(Local_1552[iVar0 /*25*/].f_9, 2))
								{
									MISC::CLEAR_BIT(&(Local_1552[iVar0 /*25*/].f_9), 2);
								}
							}
							break;
					}
					bVar30 = false;
					if (FIRE::IS_EXPLOSION_IN_AREA(-1, Var31 - Vector(5f, 5f, 5f), Var31 + Vector(5f, 5f, 5f)) && !FIRE::IS_EXPLOSION_IN_AREA(23, Var31 - Vector(5f, 5f, 5f), Var31 + Vector(5f, 5f, 5f)))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_342) > 1000)
						{
							bVar30 = true;
						}
					}
					if (!MISC::IS_BIT_SET(Local_1552[iVar0 /*25*/].f_9, 1))
					{
						if (Local_420[0 /*9*/].f_1 < 0.5f)
						{
							if (!bVar30)
							{
								ENTITY::SET_ENTITY_PROOFS(Local_1552[iVar0 /*25*/], 0, 0, 1, 0, 0, 0, 0, 0);
								PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1552[iVar0 /*25*/], 1);
								MISC::SET_BIT(&(Local_1552[iVar0 /*25*/].f_9), 1);
							}
						}
					}
					else if (Local_420[0 /*9*/].f_1 > 0.5f || bVar30)
					{
						ENTITY::SET_ENTITY_PROOFS(Local_1552[iVar0 /*25*/], 0, 0, 0, 0, 0, 0, 0, 0);
						PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1552[iVar0 /*25*/], 1);
						MISC::CLEAR_BIT(&(Local_1552[iVar0 /*25*/].f_9), 1);
					}
					if (Local_1552[iVar0 /*25*/].f_5 > 1)
					{
						bVar34 = PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1552[iVar0 /*25*/].f_8);
						func_304(Local_1552[iVar0 /*25*/], &(Local_1552[iVar0 /*25*/].f_17), -1, 0, bVar34, 0, -1082130432, 0);
					}
				}
				else
				{
					func_226(&(Local_1552[iVar0 /*25*/]), 0);
				}
			}
			iVar0++;
		}
	}
	if (!Local_1426[0 /*25*/].f_2)
	{
		if (Local_1325[0 /*25*/].f_5 > 0 || Local_793.f_3 >= 50)
		{
			if (SYSTEM::VDIST2(-579.9283f, -1602.401f, 34.2005f, Param0) < 2500f)
			{
				STREAMING::REQUEST_MODEL(iLocal_2056);
				STREAMING::REQUEST_CLIP_SET("move_ped_strafing");
				if (((STREAMING::HAS_MODEL_LOADED(iLocal_2042) && STREAMING::HAS_MODEL_LOADED(iLocal_2043)) && STREAMING::HAS_MODEL_LOADED(iLocal_2056)) && STREAMING::HAS_CLIP_SET_LOADED("move_ped_strafing"))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_1426[0 /*25*/]))
					{
						Local_1426[0 /*25*/] = func_309(iLocal_2042, -578.6725f, -1606.921f, 26.0108f, 298.2048f, iLocal_2063, 135, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1426[1 /*25*/]))
					{
						Local_1426[1 /*25*/] = func_309(iLocal_2043, -593.8203f, -1597.949f, 26.0108f, 271.5309f, iLocal_2063, 135, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1426[2 /*25*/]))
					{
						Local_1426[2 /*25*/] = func_309(iLocal_2042, -601.3184f, -1598.068f, 29.4102f, 264.0741f, iLocal_2063, 135, 0, joaat("weapon_assaultrifle"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1426[3 /*25*/]))
					{
						Local_1426[3 /*25*/] = func_309(iLocal_2043, -584.7054f, -1608.466f, 26.0108f, 270.8387f, iLocal_2063, 135, 0, joaat("weapon_pistol"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1426[4 /*25*/]))
					{
						Local_1426[4 /*25*/] = func_309(iLocal_2042, -588.8279f, -1608.274f, 26.0108f, 284.8407f, iLocal_2063, 115, 0, joaat("weapon_pumpshotgun"), 26);
						func_307(&Local_1426, "Roof ");
						iVar0 = 0;
						while (iVar0 < Local_1426)
						{
							if (!PED::IS_PED_INJURED(Local_1426[iVar0 /*25*/]))
							{
								if (iVar0 == 2)
								{
									PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_1426[iVar0 /*25*/], 0);
									PED::SET_PED_STRAFE_CLIPSET(Local_1426[iVar0 /*25*/], "move_ped_strafing");
								}
								TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_1426[iVar0 /*25*/], 0);
							}
							iVar0++;
						}
						if (!PED::IS_PED_INJURED(Local_1426[4 /*25*/]))
						{
							TASK::TASK_AIM_GUN_AT_COORD(Local_1426[4 /*25*/], -567.5737f, -1601.145f, 27.5852f, -1, 0, 0);
						}
						iLocal_740 = OBJECT::CREATE_OBJECT(iLocal_2056, -588.2625f, -1600.562f, 26.0109f, 1, 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_740, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2056);
						Local_420[0 /*9*/].f_3 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
	else
	{
		bVar35 = false;
		bVar36 = false;
		bVar37 = false;
		iVar0 = 0;
		while (iVar0 < Local_1426)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1426[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_1426[iVar0 /*25*/]))
				{
					Var38 = { ENTITY::GET_ENTITY_COORDS(Local_1426[iVar0 /*25*/], 1) };
					switch (Local_1426[iVar0 /*25*/].f_5)
					{
						case 0:
							if (!bVar36)
							{
								bVar35 = (func_303(PLAYER::PLAYER_PED_ID(), Local_793, Local_806, -565.84f, -1601.32f, 25.8f, -571.33f, -1600.83f, 29.01f, 3f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -568.24f, -1607.67f, 30.48f, -577.45f, -1606.81f, 25.76f, 16.75f, 0, 1, 0));
								bVar36 = true;
							}
							if (bVar35)
							{
								if (iVar0 == 0)
								{
									Local_1426[iVar0 /*25*/].f_14 = { -577.7428f, -1603.142f, 26.0108f };
									func_295(Local_1426[iVar0 /*25*/], &(Local_1426[iVar0 /*25*/].f_4), Local_1426[iVar0 /*25*/].f_14, 276.7884f, 2f, 2, 0, 1, 1);
									func_305(&(Local_1426[iVar0 /*25*/]), 10, 1, 2, 0, 1);
								}
								else if (iVar0 == 1)
								{
									Local_1426[iVar0 /*25*/].f_14 = { -592.6339f, -1602.442f, 26.0108f };
									func_295(Local_1426[iVar0 /*25*/], &(Local_1426[iVar0 /*25*/].f_4), Local_1426[iVar0 /*25*/].f_14, 264.6638f, 2f, 0, 0, 1, 1);
									func_305(&(Local_1426[iVar0 /*25*/]), 10, 1, 2, 0, 1);
								}
								else if (iVar0 == 2)
								{
									Local_1426[iVar0 /*25*/].f_14 = { -601.3184f, -1598.068f, 29.4102f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1426[iVar0 /*25*/], Local_1426[iVar0 /*25*/].f_14, 1f, 1, 0);
									func_305(&(Local_1426[iVar0 /*25*/]), 10, 0, 2, 1, 1);
								}
								else if (iVar0 == 3)
								{
									Local_1426[iVar0 /*25*/].f_14 = { -584.7054f, -1608.466f, 26.0108f };
									func_295(Local_1426[iVar0 /*25*/], &(Local_1426[iVar0 /*25*/].f_4), Local_1426[iVar0 /*25*/].f_14, 270.8387f, 2f, 2, 0, 1, 1);
									func_305(&(Local_1426[iVar0 /*25*/]), 10, 1, 2, 0, 1);
								}
								else if (iVar0 == 4)
								{
									Local_1426[iVar0 /*25*/].f_14 = { -575.7058f, -1606.347f, 26.0108f };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1426[iVar0 /*25*/], Local_1426[iVar0 /*25*/].f_14, 2f, 1, 0);
									func_305(&(Local_1426[iVar0 /*25*/]), 10, 1, 2, 0, 1);
									ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_1426[iVar0 /*25*/], 1, 0);
								}
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1426[iVar0 /*25*/], iLocal_2062);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1426[iVar0 /*25*/], 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1426[iVar0 /*25*/], 100f, 0);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1426[iVar0 /*25*/], 1);
								if (iVar0 == 0 || iVar0 == 4)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1426[iVar0 /*25*/], 51, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1426[iVar0 /*25*/], 50, 1);
									PED::SET_COMBAT_FLOAT(Local_1426[iVar0 /*25*/], 13, 3f);
								}
								if (iVar0 == 2)
								{
									PED::SET_PED_CAN_RAGDOLL(Local_1426[iVar0 /*25*/], 0);
									PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_1426[iVar0 /*25*/], 0);
								}
								iLocal_74 = 0;
								Local_1426[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								Local_1426[iVar0 /*25*/].f_5++;
							}
							break;
						
						case 1:
							if ((MISC::GET_GAME_TIMER() - Local_1426[iVar0 /*25*/].f_7) > 10000 && (iVar0 != 4 || (iVar0 == 4 && iLocal_2035 == 7)))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1426[iVar0 /*25*/], 0);
								if (iVar0 == 0)
								{
									Local_1426[iVar0 /*25*/].f_7 = 0;
									Local_1426[iVar0 /*25*/].f_5++;
								}
							}
							if (iVar0 == 1)
							{
								if (Local_420[0 /*9*/].f_1 > 0f)
								{
									Local_1426[iVar0 /*25*/].f_14 = { -591.0416f, -1605.228f, 26.0108f };
									func_295(Local_1426[iVar0 /*25*/], &(Local_1426[iVar0 /*25*/].f_4), Local_1426[iVar0 /*25*/].f_14, 329.4291f, 2f, 2, 0, 1, 1);
									TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_1426[iVar0 /*25*/], 0);
									Local_1426[iVar0 /*25*/].f_5++;
								}
							}
							else if (iVar0 == 2)
							{
								STREAMING::REQUEST_ANIM_DICT("misslamar1lam_1_ig_16");
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -598.5446f, -1604.523f, 25.77024f, -605.584f, -1604.194f, 31.82796f, 15f, 0, 1, 0))
								{
									if (!iLocal_74)
									{
										PED::SET_PED_CAN_RAGDOLL(Local_1426[iVar0 /*25*/], 1);
										iLocal_74 = 1;
									}
								}
								else if (iLocal_74)
								{
									PED::SET_PED_CAN_RAGDOLL(Local_1426[iVar0 /*25*/], 0);
									iLocal_74 = 0;
								}
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1426[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), 1))
								{
									if ((STREAMING::HAS_ANIM_DICT_LOADED("misslamar1lam_1_ig_16") && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -598.5446f, -1604.523f, 25.77024f, -605.584f, -1604.194f, 31.82796f, 15f, 0, 1, 0)) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_1426[iVar0 /*25*/], 1), PED::GET_ANIM_INITIAL_OFFSET_POSITION("misslamar1lam_1_ig_16", "lam_1_ig_16_swat", -594.45f, -1602.85f, 26f, 0f, 0f, 10f, 0, 2)) < 1.25f)
									{
										Local_1426[iVar0 /*25*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(-594.45f, -1602.85f, 26f, 0f, 0f, 10f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1426[iVar0 /*25*/], Local_1426[iVar0 /*25*/].f_8, "misslamar1lam_1_ig_16", "lam_1_ig_16_swat", 8f, -8f, 5, 0, 1148846080, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1426[iVar0 /*25*/], 1);
									}
									else
									{
										TASK::CLEAR_PED_TASKS(Local_1426[iVar0 /*25*/]);
										PED::SET_PED_CAN_RAGDOLL(Local_1426[iVar0 /*25*/], 1);
										PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_1426[iVar0 /*25*/], 10000, 20000, 0, GlobalFunc_590(0f, 0f, -90f), 26f, 0f, 0f, 0f, 0f, 0f, 0f);
										ENTITY::APPLY_FORCE_TO_ENTITY(Local_1426[iVar0 /*25*/], 1, 2f, 0f, 0.25f, 0f, 0f, 0f, PED::GET_PED_RAGDOLL_BONE_INDEX(Local_1426[iVar0 /*25*/], 11), 0, 1, 1, 0, 1);
									}
									if (HUD::DOES_BLIP_EXIST(Local_1426[iVar0 /*25*/].f_1))
									{
										HUD::REMOVE_BLIP(&(Local_1426[iVar0 /*25*/].f_1));
									}
									PED::SET_PED_CAN_BE_TARGETTED(Local_1426[iVar0 /*25*/], 0);
									Local_1426[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
									Local_1426[iVar0 /*25*/].f_5++;
								}
							}
							break;
						
						case 2:
							if (iVar0 == 2)
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_1426[iVar0 /*25*/].f_8))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1426[iVar0 /*25*/].f_8) > 0.945f)
									{
										PED::SET_PED_CAN_RAGDOLL(Local_1426[iVar0 /*25*/], 1);
										PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_1426[iVar0 /*25*/], 10000, 20000, 0, GlobalFunc_590(0f, 0f, -90f), 26f, 0f, 0f, 0f, 0f, 0f, 0f);
										ENTITY::SET_ENTITY_HEALTH(Local_1426[iVar0 /*25*/], 0);
										Local_1426[iVar0 /*25*/].f_7 = 0;
										Local_1426[iVar0 /*25*/].f_5++;
									}
								}
								else if ((MISC::GET_GAME_TIMER() - Local_1426[iVar0 /*25*/].f_7) > 3000)
								{
									ENTITY::SET_ENTITY_HEALTH(Local_1426[iVar0 /*25*/], 0);
									Local_1426[iVar0 /*25*/].f_7 = 0;
									Local_1426[iVar0 /*25*/].f_5++;
								}
							}
							break;
					}
					if (iVar0 == 2)
					{
						Var41 = { ENTITY::GET_ENTITY_COORDS(Local_1426[iVar0 /*25*/], 1) };
						if (Var41.f_2 < 28f)
						{
							PED::APPLY_DAMAGE_TO_PED(Local_1426[iVar0 /*25*/], 200, 1);
						}
					}
					if (iVar0 != 2)
					{
						if (!MISC::IS_BIT_SET(Local_1426[iVar0 /*25*/].f_9, 2))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
							{
								if (!GlobalFunc_537(Local_1426[iVar0 /*25*/].f_14, Var38, 1f))
								{
									if (SYSTEM::VDIST2(Var38, Local_1426[iVar0 /*25*/].f_14) < SYSTEM::VDIST2(Var4, Local_1426[iVar0 /*25*/].f_14) && SYSTEM::VDIST2(Var38, Local_1426[iVar0 /*25*/].f_14) < SYSTEM::VDIST2(Var7, Local_1426[iVar0 /*25*/].f_14))
									{
										PED::SET_PED_COMBAT_MOVEMENT(Local_1426[iVar0 /*25*/], 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1426[iVar0 /*25*/], Local_1426[iVar0 /*25*/].f_14, 2f, 1, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1426[iVar0 /*25*/], 51, 1);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1426[iVar0 /*25*/], 0);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1426[iVar0 /*25*/], 100f, 0);
										MISC::SET_BIT(&(Local_1426[iVar0 /*25*/].f_9), 2);
									}
								}
							}
						}
						else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_793.f_6) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_806.f_6))
						{
							MISC::CLEAR_BIT(&(Local_1426[iVar0 /*25*/].f_9), 2);
						}
					}
					bVar37 = false;
					if (FIRE::IS_EXPLOSION_IN_AREA(-1, Var38 - Vector(5f, 5f, 5f), Var38 + Vector(5f, 5f, 5f)) && !FIRE::IS_EXPLOSION_IN_AREA(23, Var38 - Vector(5f, 5f, 5f), Var38 + Vector(5f, 5f, 5f)))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_342) > 1000)
						{
							bVar37 = true;
						}
					}
					if (!MISC::IS_BIT_SET(Local_1426[iVar0 /*25*/].f_9, 1))
					{
						if (Local_420[0 /*9*/].f_1 < 0.5f)
						{
							if (!bVar37)
							{
								ENTITY::SET_ENTITY_PROOFS(Local_1426[iVar0 /*25*/], 0, 0, 1, 0, 0, 0, 0, 0);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1426[iVar0 /*25*/], 32);
								MISC::SET_BIT(&(Local_1426[iVar0 /*25*/].f_9), 1);
							}
						}
					}
					else if (Local_420[0 /*9*/].f_1 >= 0.5f || bVar37)
					{
						ENTITY::SET_ENTITY_PROOFS(Local_1426[iVar0 /*25*/], 0, 0, 0, 0, 0, 0, 0, 0);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1426[iVar0 /*25*/], 0);
						MISC::CLEAR_BIT(&(Local_1426[iVar0 /*25*/].f_9), 1);
						if (iVar0 == 1 || iVar0 == 3)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1426[iVar0 /*25*/], 51, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1426[iVar0 /*25*/], 50, 1);
							PED::SET_COMBAT_FLOAT(Local_1426[iVar0 /*25*/], 13, 3f);
						}
					}
					if (Local_1426[iVar0 /*25*/].f_5 > 0)
					{
						func_304(Local_1426[iVar0 /*25*/], &(Local_1426[iVar0 /*25*/].f_17), -1, 0, 0, 0, -1082130432, 0);
					}
				}
				else
				{
					func_226(&(Local_1426[iVar0 /*25*/]), 0);
					if (iVar0 == 2)
					{
						STREAMING::REMOVE_CLIP_SET("move_ped_strafing");
					}
				}
			}
			iVar0++;
		}
		if (Local_420[0 /*9*/].f_1 == 0f)
		{
			uVar44 = MISC::IS_BULLET_IN_ANGLED_AREA(-588.9023f, -1600.488f, 26.01722f, -588.2918f, -1600.518f, 28.7507f, 2.75f, 0);
			bVar45 = MISC::IS_BULLET_IN_ANGLED_AREA(-588.9023f, -1600.488f, 26.01722f, -588.2918f, -1600.518f, 27.50704f, 1.5f, 1);
			if ((bVar45 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -582.8576f, -1605.419f, 25.76083f, -568.1859f, -1607.004f, 31.54765f, 17.5f, 0, 1, 0)) || ((uVar44 && !bVar45) && (MISC::GET_GAME_TIMER() - Local_420[0 /*9*/].f_3) > 4000))
			{
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_740, 0.5f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(iLocal_740, 1), 1, 1, joaat("weapon_pumpshotgun"), PLAYER::PLAYER_PED_ID(), 0, 1, -1082130432);
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_740, PLAYER::PLAYER_PED_ID(), 1))
			{
				FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_740, 1), 23, 0.1f, 1, 0, 0.1f);
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_303, "LAMAR1_WAREHOUSE_FIRE", -591.8f, -1602.6f, 27.3f, 0, 0, 0, 0);
				Local_420[0 /*9*/].f_1 = 0.3f;
				Local_556[0 /*9*/].f_1 = 0.1f;
				iLocal_342 = MISC::GET_GAME_TIMER();
				RECORDING::_0x293220DA1B46CEBC(1f, 1073741824, 3);
				if (!PED::IS_PED_INJURED(Local_1426[1 /*25*/]))
				{
					PED::APPLY_DAMAGE_TO_PED(Local_1426[1 /*25*/], 500, 1);
				}
			}
		}
	}
	if (!Local_1703[0 /*25*/].f_2)
	{
		if (Local_1426[0 /*25*/].f_5 > 0)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (SYSTEM::VDIST2(-605.9154f, -1628.344f, 26.0109f, Param0) < 10000f)
			{
				if (((STREAMING::HAS_MODEL_LOADED(iLocal_2042) && STREAMING::HAS_MODEL_LOADED(iLocal_2043)) && STREAMING::HAS_PTFX_ASSET_LOADED()) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\LAMAR1_01", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_1703[0 /*25*/]))
					{
						Local_1703[0 /*25*/] = func_309(iLocal_2042, -605.9154f, -1628.344f, 26.0109f, 355.7177f, iLocal_2063, 135, 0, joaat("weapon_assaultrifle"), 26);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(Local_1703[1 /*25*/]))
					{
						Local_1703[1 /*25*/] = func_309(iLocal_2043, -604.5666f, -1630.394f, 26.0109f, 359.9206f, iLocal_2063, 135, 0, joaat("weapon_pistol"), 26);
						iVar0 = 0;
						while (iVar0 < Local_1703)
						{
							if (!PED::IS_PED_INJURED(Local_1703[iVar0 /*25*/]))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_1703[iVar0 /*25*/], 1);
								PED::SET_PED_CAN_RAGDOLL(Local_1703[iVar0 /*25*/], 0);
							}
							iVar0++;
						}
						func_307(&Local_1703, "Breach 2 ");
					}
				}
			}
		}
	}
	else
	{
		bVar46 = false;
		if (Local_1703[0 /*25*/].f_5 == 0)
		{
			if (func_274(&Local_1552) && func_274(&Local_1426))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -605.6501f, -1626.159f, 26.01081f, -604.4257f, -1612.359f, 28.64778f, 3.5f, 0, 1, 0) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -605.6109f, -1626.216f, 25.76258f, -605.3935f, -1623.641f, 28.76094f, 4f))
				{
					bVar46 = true;
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < Local_1703)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1703[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_1703[iVar0 /*25*/]))
				{
					if (Local_1703[iVar0 /*25*/].f_5 == 0)
					{
						if (iVar0 == 0)
						{
							if ((MISC::GET_GAME_TIMER() - Local_1703[0 /*25*/].f_7) > 1000)
							{
								OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -604.3f, -1626.4f, 27.2f, 1, 0f, 0);
								OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -606.9f, -1626.2f, 27.2f, 1, 0f, 0);
								Local_1703[0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
							}
						}
						if (bVar46)
						{
							if (iVar0 == 0)
							{
								Local_1703[iVar0 /*25*/].f_14 = { -606.2178f, -1621.538f, 26.0108f };
								OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -604.3f, -1626.4f, 27.2f, 0, 0f, 0);
								OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_rc_door1"), -606.9f, -1626.2f, 27.2f, 0, 0f, 0);
								iVar47 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-604.3f, -1626.4f, 27.2f, 2f, joaat("v_ilev_rc_door1"), 0, 0, 1);
								iVar48 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-606.9f, -1626.2f, 27.2f, 2f, joaat("v_ilev_rc_door1"), 0, 0, 1);
								ENTITY::APPLY_FORCE_TO_ENTITY(iVar47, 1, 0f, 16f, 0f, 1.3077f, 0f, 0f, 0, 0, 1, 1, 0, 1);
								ENTITY::APPLY_FORCE_TO_ENTITY(iVar48, 1, 0f, 16f, 0f, 1.3077f, 0f, 0f, 0, 0, 1, 1, 0, 1);
								MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(-605.65f, -1627.202f, 27.2032f, -605.5878f, -1625.385f, 27.0974f, 1, 1, joaat("weapon_pumpshotgun"), 0, 0, 1, -1082130432);
								MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(-605.65f, -1627.202f, 27.6032f, -605.5878f, -1625.385f, 27.6974f, 1, 1, joaat("weapon_pumpshotgun"), 0, 0, 1, -1082130432);
								GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(sLocal_353, -605.65f, -1626.35f, 27.24f, 0f, 0f, -5.23f, 1f, 0, 0, 0);
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "LAMAR1_BustDoorOpen1", -605.65f, -1626.35f, 27.24f, 0, 0, 0, 0);
								GlobalFunc_5130(Local_1703[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
								RECORDING::_0x293220DA1B46CEBC(1f, 1073741824, 3);
								GlobalFunc_10639(103, 0);
								GlobalFunc_10639(104, 0);
							}
							else if (iVar0 == 1)
							{
								Local_1703[iVar0 /*25*/].f_14 = { -604.7348f, -1622.465f, 26.0108f };
							}
							ENTITY::SET_ENTITY_INVINCIBLE(Local_1703[iVar0 /*25*/], 0);
							PED::SET_PED_CAN_RAGDOLL(Local_1703[iVar0 /*25*/], 1);
							PED::SET_PED_CAN_BE_TARGETTED(Local_1703[iVar0 /*25*/], 1);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1703[iVar0 /*25*/], iLocal_2062);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1703[iVar0 /*25*/], 1);
							func_305(&(Local_1703[iVar0 /*25*/]), 10, 1, 2, 0, 1);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1703[iVar0 /*25*/], Local_1703[iVar0 /*25*/].f_14, 2f, 1, 0);
							func_301(Local_1703[iVar0 /*25*/], Local_1703[iVar0 /*25*/].f_14, 2f, 0f, 0f, 0f, PLAYER::PLAYER_PED_ID(), 0, 0.5f, 1f, 1, 1, 0, -687903391);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2042);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2043);
							iVar10 = 1;
							Local_1703[iVar0 /*25*/].f_7 = 0;
							Local_1703[iVar0 /*25*/].f_5++;
						}
					}
					else
					{
						func_304(Local_1703[iVar0 /*25*/], &(Local_1703[iVar0 /*25*/].f_17), -1, 0, 0, 0, -1082130432, 0);
						if (Local_1703[iVar0 /*25*/].f_5 == 1)
						{
							if (Local_1703[iVar0 /*25*/].f_7 == 0)
							{
								if (SYSTEM::VDIST2(Local_1703[iVar0 /*25*/].f_14, ENTITY::GET_ENTITY_COORDS(Local_1703[iVar0 /*25*/], 1)) < 9f)
								{
									Local_1703[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								}
							}
							else if ((MISC::GET_GAME_TIMER() - Local_1703[iVar0 /*25*/].f_7) > 250)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1703[iVar0 /*25*/], 100f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1703[iVar0 /*25*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1703[iVar0 /*25*/], 51, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1703[iVar0 /*25*/], 50, 1);
								PED::SET_COMBAT_FLOAT(Local_1703[iVar0 /*25*/], 13, 3f);
								if (iVar0 == 1)
								{
									GlobalFunc_5130(Local_1703[iVar0 /*25*/], "GENERIC_WAR_CRY", 3);
								}
								Local_1703[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
								Local_1703[iVar0 /*25*/].f_5++;
							}
						}
						else if (Local_1703[iVar0 /*25*/].f_5 == 2)
						{
							if ((MISC::GET_GAME_TIMER() - Local_1703[iVar0 /*25*/].f_7) > 4000)
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1703[iVar0 /*25*/], 0);
								Local_1703[iVar0 /*25*/].f_5++;
							}
						}
					}
				}
				else
				{
					func_226(&(Local_1703[iVar0 /*25*/]), 0);
					STREAMING::REMOVE_PTFX_ASSET();
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\LAMAR1_01");
				}
			}
			iVar0++;
		}
	}
	if (!Local_1780[0 /*25*/].f_2)
	{
		if (Local_1703[0 /*25*/].f_5 > 0)
		{
			STREAMING::REQUEST_MODEL(iLocal_2044);
			STREAMING::REQUEST_MODEL(iLocal_2041);
			VEHICLE::REQUEST_VEHICLE_RECORDING(10, sLocal_350);
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_2041) && STREAMING::HAS_MODEL_LOADED(iLocal_2044)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, sLocal_350))
			{
				iLocal_776 = VEHICLE::CREATE_VEHICLE(iLocal_2044, -531.7855f, -1650.402f, 46.0368f, 0f, 1, 1);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_776, 0);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_776, 1, 1);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_776, 1);
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_776, 2);
				ENTITY::SET_ENTITY_COLLISION(iLocal_776, 0, 0);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_776);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_776, 10, sLocal_350, 1);
				ENTITY::SET_ENTITY_ALWAYS_PRERENDER(iLocal_776, 1);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_776, 0f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2044);
				fLocal_271 = 1f;
				iLocal_73 = 0;
				iLocal_298 = 0;
				Local_1780[0 /*25*/] = func_309(iLocal_2041, -531.7855f, -1650.402f, 47.0368f, 0f, iLocal_2063, 200, 0, joaat("weapon_unarmed"), 26);
				PED::SET_PED_INTO_VEHICLE(Local_1780[0 /*25*/], iLocal_776, -1);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_1780[0 /*25*/], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1780[0 /*25*/], 1);
				Local_1780[1 /*25*/] = func_309(iLocal_2041, -531.7855f, -1650.402f, 48.0368f, 0f, iLocal_2063, 200, 0, joaat("weapon_carbinerifle"), 26);
				PED::SET_PED_INTO_VEHICLE(Local_1780[1 /*25*/], iLocal_776, 2);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_1780[1 /*25*/], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1780[1 /*25*/], 1);
				Local_1780[2 /*25*/] = func_309(iLocal_2041, -531.7855f, -1650.402f, 49.0368f, 0f, iLocal_2063, 200, 0, joaat("weapon_carbinerifle"), 26);
				PED::SET_PED_INTO_VEHICLE(Local_1780[2 /*25*/], iLocal_776, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_1780[2 /*25*/], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1780[2 /*25*/], 1);
				func_307(&Local_1780, "Chopper-");
			}
		}
	}
	else
	{
		bVar49 = false;
		iVar0 = 0;
		while (iVar0 < Local_1780)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1780[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_1780[iVar0 /*25*/]))
				{
					switch (Local_1780[iVar0 /*25*/].f_5)
					{
						case 0:
							if (iVar0 == 0)
							{
								bVar49 = ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -592.51f, -1631.69f, 25.98f, -592.32f, -1629.18f, 28.23f, 1f, 0, 1, 1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, -592.51f, -1631.69f, 25.98f, -592.32f, -1629.18f, 28.23f, 1f, 0, 1, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_806, -592.51f, -1631.69f, 25.98f, -592.32f, -1629.18f, 28.23f, 1f, 0, 1, 1));
							}
							if (bVar49)
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_1780[iVar0 /*25*/], 0);
								PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_1780[iVar0 /*25*/], 0);
								if (iVar0 == 0)
								{
									if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_776, 0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_776)) && !PED::IS_PED_INJURED(Local_793))
									{
										GlobalFunc_2513(&iLocal_776, 4500f);
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_776, 1);
										ENTITY::SET_ENTITY_COLLISION(iLocal_776, 1, 0);
										VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_776, 1, 0);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1780[iVar0 /*25*/], iLocal_2062);
										TASK::TASK_VEHICLE_AIM_AT_PED(Local_1780[iVar0 /*25*/], Local_793);
										AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_776, "LAMAR_1_HELI", 0);
										Local_1780[iVar0 /*25*/].f_1 = GlobalFunc_6783(iLocal_776, 1, 0);
										Local_1780[iVar0 /*25*/].f_5++;
									}
								}
								else
								{
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1780[iVar0 /*25*/], iLocal_2062);
									func_128(&(Local_1780[iVar0 /*25*/]), 1, 1, 2, 1, 0, 0f, 0f, 0f, 0f);
									WEAPON::SET_CURRENT_PED_WEAPON(Local_1780[iVar0 /*25*/], joaat("weapon_carbinerifle"), 1);
									Local_1780[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
									Local_1780[iVar0 /*25*/].f_5++;
								}
							}
							break;
						
						case 1:
							if (iVar0 == 1)
							{
								if ((MISC::GET_GAME_TIMER() - Local_1780[iVar0 /*25*/].f_7) > 2000 && TASK::GET_SCRIPT_TASK_STATUS(Local_1780[iVar0 /*25*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_1780[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 100, 0, -957453492);
									PED::SET_PED_SHOOT_RATE(Local_1780[iVar0 /*25*/], 80);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1780[iVar0 /*25*/], 1);
								}
							}
							else if (iVar0 == 2)
							{
								if (PED::IS_PED_INJURED(Local_1780[1 /*25*/]))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_776, 0))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_776, 2) != Local_1780[iVar0 /*25*/])
										{
											if ((PED::IS_PED_IN_VEHICLE(Local_1780[iVar0 /*25*/], iLocal_776, 0) && !PED::IS_PED_RAGDOLL(Local_1780[iVar0 /*25*/])) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_776, 2))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_1780[iVar0 /*25*/], 355471868) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_1780[iVar0 /*25*/], 355471868) != 0)
												{
													if ((MISC::GET_GAME_TIMER() - Local_1780[iVar0 /*25*/].f_7) > 250)
													{
														TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_1780[iVar0 /*25*/], iLocal_776);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1780[iVar0 /*25*/], 1);
														Local_1780[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
													}
												}
											}
										}
										else
										{
											Local_1780[iVar0 /*25*/].f_7 = MISC::GET_GAME_TIMER();
											Local_1780[iVar0 /*25*/].f_5++;
										}
									}
								}
							}
							break;
						
						case 2:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_776, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_1780[iVar0 /*25*/], 2104565373) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_1780[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 100, 0, -957453492);
									PED::SET_PED_SHOOT_RATE(Local_1780[iVar0 /*25*/], 80);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1780[iVar0 /*25*/], 1);
								}
							}
							break;
					}
				}
				else
				{
					func_226(&(Local_1780[iVar0 /*25*/]), 0);
				}
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_776))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_776, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_776))
				{
					if (Local_1780[0 /*25*/].f_5 > 0)
					{
						fVar50 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_776);
						if (!bLocal_65 && !PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						{
							if (fVar50 < 16000f)
							{
								func_306(&fLocal_271, 1f, 0.5f, 1);
							}
							if (fVar50 > 22000f)
							{
								func_306(&fLocal_271, -1f, 0.5f, 1);
							}
						}
						else
						{
							if (fVar50 < 33000f)
							{
								func_306(&fLocal_271, 1f, 0.5f, 1);
							}
							if (fVar50 > 38000f)
							{
								func_306(&fLocal_271, -1f, 0.5f, 1);
							}
						}
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_776, fLocal_271);
					}
					if (PED::IS_PED_INJURED(Local_1780[1 /*25*/]) && PED::IS_PED_INJURED(Local_1780[2 /*25*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_776);
						if (!PED::IS_PED_INJURED(Local_1780[0 /*25*/]))
						{
							TASK::TASK_HELI_MISSION(Local_1780[0 /*25*/], iLocal_776, 0, 0, -165.91f, -1771f, 200f, 4, 30f, 5f, 0f, 200, 100, -1082130432, 0);
							PED::SET_PED_KEEP_TASK(Local_1780[0 /*25*/], 1);
						}
						if (HUD::DOES_BLIP_EXIST(Local_1780[0 /*25*/].f_1))
						{
							HUD::REMOVE_BLIP(&(Local_1780[0 /*25*/].f_1));
						}
						RECORDING::_0x293220DA1B46CEBC(3f, 1073741824, 3);
					}
				}
				else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_776, 1), Param0) > 40000f)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_776, 0);
					func_226(&(Local_1780[0 /*25*/]), 0);
					func_257(&iLocal_776, 0);
				}
			}
			else if (!PED::IS_PED_INJURED(Local_1780[0 /*25*/]))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_1780[0 /*25*/], 0);
			}
			if (!iLocal_73)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_776))
				{
					if (iLocal_298 <= 3)
					{
						if ((ENTITY::GET_ENTITY_HEALTH(iLocal_776) < 800 || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_776) < 800f) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_776) < 800f)
						{
							iLocal_298 = 10;
							iLocal_299 = MISC::GET_GAME_TIMER();
						}
					}
					if (((iLocal_298 > 3 && (MISC::GET_GAME_TIMER() - iLocal_299) > 400) || PED::IS_PED_INJURED(Local_1780[0 /*25*/])) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_776, 0f, 5f, -5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_776, 0f, -5f, 5f), 8f))
					{
						if (!PED::IS_PED_INJURED(Local_1780[0 /*25*/]))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_1780[0 /*25*/], 0);
						}
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_776))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_776);
						}
						ENTITY::SET_ENTITY_HEALTH(iLocal_776, 1000);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_776, 1000f);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_776, 1);
						ENTITY::SET_ENTITY_PROOFS(iLocal_776, 1, 1, 1, 1, 1, 0, 0, 0);
						VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_776, 1, 1);
						if (iLocal_298 > 3)
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_776, -50f);
						}
						else
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_776, 200f);
						}
						RECORDING::_0x293220DA1B46CEBC(3f, 1073741824, 3);
						iLocal_73 = 1;
						iLocal_299 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_299) < 2000)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_776))
				{
					if (iLocal_298 > 3)
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_776, -50f);
					}
					else
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_776, 200f);
					}
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_776, 0, 20f, 0f, 9f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_776, 0, 1.5f, 0f, 0f, 0f, -5f, 0f, 0, 1, 1, 1, 0, 1);
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_776))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_776, 0);
					ENTITY::SET_ENTITY_PROOFS(iLocal_776, 0, 0, 0, 0, 0, 0, 0, 0);
					VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_776, 1, 1);
				}
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_776, 0);
				func_226(&(Local_1780[0 /*25*/]), 0);
				func_257(&iLocal_776, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_776))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_776, 0);
			func_257(&iLocal_776, 0);
		}
	}
	if (!Local_1856[0 /*25*/].f_2)
	{
		if (Local_1703[0 /*25*/].f_5 > 0)
		{
			STREAMING::REQUEST_MODEL(iLocal_2044);
			STREAMING::REQUEST_MODEL(iLocal_2041);
			VEHICLE::REQUEST_VEHICLE_RECORDING(11, sLocal_350);
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_2041) && STREAMING::HAS_MODEL_LOADED(iLocal_2044)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, sLocal_350))
			{
				iLocal_777 = VEHICLE::CREATE_VEHICLE(iLocal_2044, -531.7855f, -1650.402f, 46.0368f, 0f, 1, 1);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_777, 0);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_777, 1, 1);
				VEHICLE::SET_VEHICLE_SIREN(iLocal_777, 1);
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_777, 2);
				ENTITY::SET_ENTITY_COLLISION(iLocal_777, 0, 0);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_777);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_777, 11, sLocal_350, 1);
				ENTITY::SET_ENTITY_ALWAYS_PRERENDER(iLocal_777, 1);
				ENTITY::SET_ENTITY_COLLISION(iLocal_777, 0, 0);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_777, 0f);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_777, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2044);
				Local_1856[0 /*25*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_777, 6, iLocal_2041, -1, 1, 1);
				Local_1856[0 /*25*/].f_5 = 0;
				Local_1856[0 /*25*/].f_2 = 1;
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_1856)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1856[iVar0 /*25*/]))
			{
				if (!PED::IS_PED_INJURED(Local_1856[iVar0 /*25*/]))
				{
					switch (Local_1856[iVar0 /*25*/].f_5)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_777, 0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_777))
							{
								if (bLocal_65 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -593.1262f, -1643.063f, 23f, -592.6035f, -1642.084f, 26.9577f, 1.5f, 0, 1, 0))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -592.9584f, -1642.802f, 23.4562f, 3f, 3f, 4.5f, 0, 1, 0))
									{
										GlobalFunc_2513(&iLocal_777, 6500f);
									}
									else
									{
										GlobalFunc_2513(&iLocal_777, 0f);
									}
									VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_777, 1);
									VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_777, 1, 0);
									ENTITY::SET_ENTITY_COLLISION(iLocal_777, 1, 0);
									TASK::TASK_VEHICLE_AIM_AT_PED(Local_1856[iVar0 /*25*/], PLAYER::PLAYER_PED_ID());
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1856[iVar0 /*25*/], 1);
									AUDIO::BLIP_SIREN(iLocal_777);
									Local_1856[0 /*25*/].f_1 = GlobalFunc_6783(iLocal_777, 1, 0);
									HUD::SET_BLIP_SPRITE(Local_1856[0 /*25*/].f_1, 15);
									fLocal_272 = 1f;
									Local_1856[iVar0 /*25*/].f_7 = 0;
									Local_1856[iVar0 /*25*/].f_5++;
								}
							}
							break;
						
						case 1:
							if (iVar0 == 0)
							{
								if (!iLocal_130[3] && !GlobalFunc_5172(&Local_819, 1))
								{
									if (Local_844[6 /*10*/] != Local_1856[iVar0 /*25*/])
									{
										GlobalFunc_173(&Local_844, 6, Local_1856[iVar0 /*25*/], "Lam1Swat5", 0, 1);
									}
									else if (bLocal_65)
									{
										if (SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(Local_1856[iVar0 /*25*/], 1)) < 6400f)
										{
											if (Local_1856[iVar0 /*25*/].f_7 == 0)
											{
												if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_HELIC", 7, 0, 0, 0))
												{
													Local_1856[iVar0 /*25*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
												}
											}
											else if ((MISC::GET_GAME_TIMER() - Local_1856[iVar0 /*25*/].f_7) > 8000)
											{
												if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_HELIC", 7, 0, 0, 0))
												{
													iLocal_130[3] = 1;
												}
											}
										}
									}
								}
							}
							break;
					}
				}
				else
				{
					func_226(&(Local_1856[iVar0 /*25*/]), 0);
					if (Local_844[6 /*10*/] == Local_1856[iVar0 /*25*/])
					{
						GlobalFunc_200(&Local_844, 6);
					}
				}
			}
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_777, 0))
		{
			if (iLocal_2035 == 7)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_777))
				{
					if (Local_1856[0 /*25*/].f_5 > 0)
					{
						fVar51 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_777);
						fVar52 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(11, sLocal_350);
						if (fVar51 < 15500f)
						{
							func_306(&fLocal_272, 1f, 0.5f, 1);
						}
						else if (fVar51 > (fVar52 - 3000f))
						{
							func_306(&fLocal_272, -1f, 0.5f, 1);
						}
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_777, fLocal_272);
					}
					if (((PED::IS_PED_INJURED(Local_1856[0 /*25*/]) || ENTITY::GET_ENTITY_HEALTH(iLocal_777) < 200) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_777) < 200f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_777) < 200f)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_777);
						VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_777, 1, 1);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_777, 0);
					}
				}
				else if (!PED::IS_PED_INJURED(Local_1856[0 /*25*/]))
				{
					PED::APPLY_DAMAGE_TO_PED(Local_1856[0 /*25*/], 0, 1);
					VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_777, 1, 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_777, 0);
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_777))
		{
			if (!PED::IS_PED_INJURED(Local_1856[0 /*25*/]))
			{
				PED::APPLY_DAMAGE_TO_PED(Local_1856[0 /*25*/], 0, 1);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_777))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_777);
				}
				VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_777, 1, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_777, 0);
			}
		}
	}
	if (Local_844[3 /*10*/].f_7)
	{
		if (PED::IS_PED_INJURED(Local_844[3 /*10*/]))
		{
			GlobalFunc_200(&Local_844, 3);
		}
	}
	if (Local_844[4 /*10*/].f_7)
	{
		if (PED::IS_PED_INJURED(Local_844[4 /*10*/]))
		{
			GlobalFunc_200(&Local_844, 4);
		}
	}
	if (Local_844[8 /*10*/].f_7)
	{
		if (PED::IS_PED_INJURED(Local_844[8 /*10*/]))
		{
			GlobalFunc_200(&Local_844, 8);
		}
	}
	if (iLocal_130[4])
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_297) > 0 || iVar10)
		{
			iVar53 = -1;
			iVar54 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar54 == 0)
			{
				if (Local_844[3 /*10*/].f_7)
				{
					iVar53 = 3;
				}
				else if (Local_844[4 /*10*/].f_7)
				{
					iVar53 = 4;
				}
				else if (Local_844[8 /*10*/].f_7)
				{
					iVar53 = 8;
				}
			}
			else if (iVar54 == 1)
			{
				if (Local_844[4 /*10*/].f_7)
				{
					iVar53 = 4;
				}
				else if (Local_844[8 /*10*/].f_7)
				{
					iVar53 = 8;
				}
				else if (Local_844[3 /*10*/].f_7)
				{
					iVar53 = 3;
				}
			}
			else if (iVar54 == 2)
			{
				if (Local_844[8 /*10*/].f_7)
				{
					iVar53 = 8;
				}
				else if (Local_844[3 /*10*/].f_7)
				{
					iVar53 = 3;
				}
				else if (Local_844[4 /*10*/].f_7)
				{
					iVar53 = 4;
				}
			}
			if (iVar53 != -1)
			{
				if (!PED::IS_PED_INJURED(Local_844[iVar53 /*10*/]))
				{
					if ((PED::IS_PED_IN_COMBAT(Local_844[iVar53 /*10*/], 0) || PED::IS_PED_SHOOTING(Local_844[iVar53 /*10*/])) || iVar10)
					{
						iLocal_297 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 13000));
					}
				}
			}
		}
	}
	else if (iLocal_2035 == 7)
	{
		iLocal_130[4] = 1;
	}
}


void func_301(int iParam0, struct<3> Param1, float fParam4, struct<3> Param5, int iParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, bool bParam14, int iParam15)//Position - 0x36BCE
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		if (ENTITY::IS_ENTITY_DEAD(iParam8))
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Param1, Param5, fParam4, iParam9, fParam10, fParam11, iParam12, 0, 0, -957453492);
			if (bParam14)
			{
				TASK::TASK_SHOOT_AT_COORD(0, Param5, -1, iParam15);
			}
			else
			{
				TASK::TASK_AIM_GUN_AT_COORD(0, Param5, -1, 0, 0);
			}
		}
		else
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, iParam8, fParam4, iParam9, fParam10, fParam11, iParam12, 0, 0, -957453492, 20000);
			if (bParam14)
			{
				TASK::TASK_SHOOT_AT_ENTITY(0, iParam8, -1, iParam15);
			}
			else
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam8, -1, 0);
			}
		}
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, iParam13);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}


int func_303(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6, float fParam9)//Position - 0x36CB3
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param3, Param6, fParam9, 0, 1, 1))
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Param3, Param6, fParam9, 0, 1, 1))
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iParam2))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, Param3, Param6, fParam9, 0, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_304(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, int iParam7)//Position - 0x36D28
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			HUD::SET_PED_HAS_AI_BLIP(iParam0, 1);
			uParam1->f_7 = iParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, iParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("MCUSTBLIP");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_305(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x36E47
{
	PED::SET_PED_COMBAT_MOVEMENT(*uParam0, iParam2);
	PED::SET_PED_COMBAT_ABILITY(*uParam0, iParam3);
	PED::SET_PED_COMBAT_RANGE(*uParam0, iParam4);
	PED::SET_PED_ACCURACY(*uParam0, iParam1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, iParam5);
}

void func_306(float fParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x36E7C
{
	float fVar0;
	
	if (*fParam0 != fParam1)
	{
		fVar0 = fParam2;
		if (bParam3)
		{
			fVar0 = (0f + (fParam2 * SYSTEM::TIMESTEP()));
		}
		if ((*fParam0 - fParam1) > fVar0)
		{
			*fParam0 = (*fParam0 - fVar0);
		}
		else if ((*fParam0 - fParam1) < -fVar0)
		{
			*fParam0 = (*fParam0 + fVar0);
		}
		else
		{
			*fParam0 = fParam1;
		}
	}
}

void func_307(int iParam0, char* sParam1)//Position - 0x36ED7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*25*/]))
		{
			TASK::TASK_STAND_STILL((*iParam0)[iVar0 /*25*/], -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iVar0 /*25*/], 1);
			GlobalFunc_593((*iParam0)[iVar0 /*25*/], 0);
			(iParam0[iVar0 /*25*/])->f_2 = 1;
			(iParam0[iVar0 /*25*/])->f_5 = 0;
			(iParam0[iVar0 /*25*/])->f_7 = 0;
			(iParam0[iVar0 /*25*/])->f_9 = 0;
			sParam1 = sParam1;
		}
		iVar0++;
	}
}


int func_309(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x36FE8
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED(iParam9, iParam0, Param1, fParam4, 1, 1);
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam8, -1, 1, 1);
	WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, iParam8);
	PED::SET_PED_MAX_HEALTH(iVar0, iParam6);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam6);
	PED::ADD_ARMOUR_TO_PED(iVar0, -PED::GET_PED_ARMOUR(iVar0));
	PED::ADD_ARMOUR_TO_PED(iVar0, iParam7);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam5);
	PED::SET_PED_AS_ENEMY(iVar0, 1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 118, 0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 208, 1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 188, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 29, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 12, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 14, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 9, 0);
	PED::SET_PED_MONEY(iVar0, 0);
	iLocal_346 = MISC::GET_GAME_TIMER() + 500;
	return iVar0;
}

void func_310(int iParam0)//Position - 0x370AA
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		(iParam0[iVar0 /*25*/])->f_2 = 1;
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*25*/]))
		{
			ENTITY::SET_ENTITY_HEALTH((*iParam0)[iVar0 /*25*/], 0);
		}
		iVar0++;
	}
}

int func_311()//Position - 0x370EB
{
	if (!bLocal_75 || iLocal_91)
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 100, 0, 1);
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), joaat("component_at_ar_flsh")))
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), joaat("component_at_ar_flsh"));
		}
		iLocal_91 = 0;
	}
	return 1;
}

int func_312(bool bParam0, bool bParam1, bool bParam2)//Position - 0x37150
{
	if (func_313(bParam1))
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_359);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_359))
		{
			if (!bParam1)
			{
				if (!PED::IS_PED_INJURED(iLocal_761) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_761, sLocal_359, "dead_idle", 3) || bParam2))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_761, -622.82f, -1619.93f, 32.21f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_761, -1.28f);
					TASK::TASK_PLAY_ANIM(iLocal_761, sLocal_359, "dead_idle", 1000f, -4f, -1, 9, 0, 0, 0, 0);
					if (bParam2)
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_761, 0, 0);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_761, 1);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_761, !bParam0);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_313(bool bParam0)//Position - 0x3720A
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_761))
	{
		STREAMING::REQUEST_MODEL(iLocal_2057);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_2057))
		{
			if (!bParam0)
			{
				iLocal_761 = PED::CREATE_PED(26, iLocal_2057, -622.82f, -1619.93f, 32.21f, -1.28f, 1, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_761, 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_761, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_761, 10, 0, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_761, 0, 1, 0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_761, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2057);
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

void func_314()//Position - 0x3729E
{
	int iVar0[5];
	int iVar6;
	int iVar7[10];
	int iVar18;
	int iVar19;
	
	if (iLocal_2036 == 0)
	{
		if (iLocal_56)
		{
			if (iLocal_278 != 99)
			{
				if (bLocal_75)
				{
					GlobalFunc_4972(Local_360 + Vector(0.5f, 0f, 0f), 0f, 0, 0);
					iLocal_278 = 99;
				}
				else if (func_127(7, 0f, 0f, 0f, 0, 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_360 + Vector(0.5f, 0f, 0f), 1, 0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					STREAMING::LOAD_SCENE(Local_360);
					iLocal_278 = 99;
				}
			}
			else if (func_127(7, 0f, 0f, 0f, 0, 0))
			{
				if (((func_127(0, Local_360 - Vector(0f, 3f, 0f), 0, 0) && func_127(1, Local_360 - Vector(0f, 2f, 0f), 0, 0)) && func_127(5, 0f, 0f, 0f, 0, 0)) && func_311())
				{
					GlobalFunc_4967(0, -1, 0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_360 + Vector(0.5f, 0f, 0f), 1, 0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					iLocal_56 = 0;
				}
			}
		}
		else
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -614.123f, -1619.022f, 32.01052f, -611.4392f, -1619.123f, 34.26001f, 3.25f, 0, 1, 0))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				}
			}
			CUTSCENE::REQUEST_CUTSCENE("LAM_1_MCS_1_CONCAT", 8);
			func_34("LAM_1_MCS_1_CONCAT");
			if ((func_313(0) && !GlobalFunc_5172(&Local_819, 0)) && GlobalFunc_Has_Cutscene_Loaded())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				func_29(Local_793);
				func_29(Local_806);
				if (!PED::IS_PED_INJURED(Local_793))
				{
					PED::SET_PED_CONFIG_FLAG(Local_793, 104, 0);
					PED::REMOVE_PED_FROM_GROUP(Local_793);
					TASK::TASK_CLEAR_LOOK_AT(Local_793);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_793, "Lamar", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_806))
				{
					PED::SET_PED_CONFIG_FLAG(Local_806, 104, 0);
					PED::REMOVE_PED_FROM_GROUP(Local_806);
					TASK::TASK_CLEAR_LOOK_AT(Local_806);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_806, "Stretch", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_761))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_761, "Ballas_OG", 0, 0, 0);
				}
				CUTSCENE::START_CUTSCENE(0);
				GlobalFunc_8316(1, 1, 1, 0);
				func_28();
				RECORDING::_0x48621C9FCA3EBD28(4);
				OBJECT::_DOOR_CONTROL(iLocal_2047, Local_378, 0, 0, 0, 0);
				OBJECT::_DOOR_CONTROL(iLocal_2048, Local_381, 0, 0, 0, 0);
				GlobalFunc_10639(103, 1);
				GlobalFunc_10639(104, 1);
				GlobalFunc_10639(101, 1);
				GlobalFunc_10639(102, 1);
				Local_793.f_3 = 0;
				Local_793.f_4 = 0;
				Local_806.f_3 = 0;
				Local_806.f_4 = 0;
				iLocal_58 = 0;
				iLocal_123 = 0;
				iLocal_57 = 0;
				iLocal_102 = 0;
				iLocal_329 = 0;
				iLocal_278 = 0;
				iLocal_2036 = 1;
			}
		}
	}
	if (iLocal_2036 == 1)
	{
		if (!iLocal_57)
		{
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				iLocal_57 = 1;
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_2036 = 2;
		}
		else
		{
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_312(0, 1, 0);
				if (!iLocal_102 && !PED::IS_PED_INJURED(iLocal_761))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 42500)
					{
						PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar0, -1);
						iVar6 = 0;
						iVar6 = 0;
						while (iVar6 < iVar0)
						{
							if (!PED::IS_PED_INJURED(iVar0[iVar6]))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar0[iVar6]) == joaat("csb_ballasog"))
								{
									PED::APPLY_PED_BLOOD_SPECIFIC(iVar0[iVar6], 1, 0.534f, 0.556f, 16.352f, 1f, 1, 0f, "BulletLarge");
									PED::APPLY_PED_BLOOD_SPECIFIC(iVar0[iVar6], 1, 0.534f, 0.556f, 16.352f, 1f, 1, 0f, "BulletLarge");
									PED::APPLY_PED_BLOOD_SPECIFIC(iVar0[iVar6], 1, 0.556f, 0.53f, 23.682f, 1f, 5, 0f, "BulletLarge");
									PED::APPLY_PED_BLOOD_SPECIFIC(iVar0[iVar6], 1, 0.504f, 0.576f, 6.12f, 1f, 0, 0f, "ShotgunLarge");
									iLocal_102 = 1;
								}
							}
							iVar6++;
						}
					}
				}
				if (!iLocal_58)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 33000)
					{
						PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &iVar7);
						iVar18 = 0;
						iVar18 = 0;
						while (iVar18 < iVar7)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iVar7[iVar18]))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar7[iVar18]) == joaat("speedo") || ENTITY::GET_ENTITY_MODEL(iVar7[iVar18]) == joaat("landstalker"))
								{
									VEHICLE::SET_VEHICLE_LIGHTS(iVar7[iVar18], 2);
								}
							}
							iVar18++;
						}
						iLocal_58 = 1;
					}
				}
			}
			switch (iLocal_278)
			{
				case 0:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						iVar19 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar19, 0))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iVar19, -612.1882f, -1594.531f, 29.25171f, 22.75f, 16f, 4f, 0, 1, 0))
							{
								GlobalFunc_10236(iVar19, -700.7425f, 5270.605f, 74.4262f, 229.0238f, 24, 0);
							}
						}
						MISC::CLEAR_AREA(Local_360, 200f, 1, 1, 0, 0);
						func_127(8, 0f, 0f, 0f, 0, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(Local_793, joaat("weapon_unarmed"), 1);
						if (!PED::IS_PED_INJURED(Local_806))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Local_806, joaat("weapon_unarmed"), 1);
						}
						CLOCK::SET_CLOCK_TIME(0, 0, 0);
						GlobalFunc_2204();
						iLocal_278++;
					}
					break;
				
				case 1:
					if (CUTSCENE::GET_CUTSCENE_TIME() > 1500)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_CS_DOORS");
						iLocal_278++;
					}
					break;
				
				case 2:
					if (CUTSCENE::GET_CUTSCENE_TIME() > 26000)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_MISSION_START");
						iLocal_278++;
					}
					break;
				
				case 3:
					if (!iLocal_57)
					{
						AUDIO::PREPARE_MUSIC_EVENT("LM1_TERMINADOR_HEAD_SHOT");
						if (CUTSCENE::GET_CUTSCENE_TIME() > 42500)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_HEAD_SHOT");
							iLocal_278++;
						}
					}
					break;
				}
		}
		PED::REQUEST_ACTION_MODE_ASSET("FRANKLIN_ACTION");
		WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pumpshotgun"), 31, 0);
		WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
		WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pistol"), 31, 0);
		STREAMING::REQUEST_ANIM_DICT("misslamar1ig_2_p1");
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
		{
			ENTITY::SET_ENTITY_COORDS(Local_793, -622.6625f, -1624.366f, 32.0105f, 1, 1, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_793, 80f);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_793, joaat("weapon_pumpshotgun"), 1);
			PED::SET_PED_COMPONENT_VARIATION(Local_793, 1, 1, 0, 0);
			if (!iLocal_57)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_2_p1"))
				{
					Local_793.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(-617.689f, -1629.484f, 32.038f, 0f, 0f, 175f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_793, Local_793.f_6, "misslamar1ig_2_p1", "ig_2_p1_lamar", 1000f, -8f, 5, 153, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_793.f_6, 0f);
					PED::SET_SYNCHRONIZED_SCENE_RATE(Local_793.f_6, 0f);
					iLocal_123 = 1;
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_793, 0, 0);
				Local_793.f_4 = MISC::GET_GAME_TIMER();
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Stretch", 0))
		{
			if (!PED::IS_PED_INJURED(Local_806))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_806, 1237250926) != 1)
				{
					ENTITY::SET_ENTITY_COORDS(Local_806, -622.458f, -1623.38f, 32.0105f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_806, 175.0071f);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_806, joaat("weapon_pistol"), 1);
					TASK::TASK_AIM_GUN_AT_COORD(Local_806, -625.3885f, -1626.489f, 33.2392f, -1, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 1);
					PED::FORCE_PED_MOTION_STATE(Local_806, 1063765679, 0, 1, 0);
					Local_806.f_4 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
		{
			if (PED::HAS_ACTION_MODE_ASSET_LOADED("FRANKLIN_ACTION"))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -633298724, 0, 1, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 1);
				RECORDING::_0x81CBAE94390F9F89();
			}
		}
		if (!iLocal_57)
		{
			if (!PED::IS_PED_INJURED(Local_793))
			{
				if (Local_793.f_4 != 0)
				{
					if ((MISC::GET_GAME_TIMER() - Local_793.f_4) > 2500)
					{
						func_296(0);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_806))
			{
				if (Local_806.f_4 != 0)
				{
					if ((MISC::GET_GAME_TIMER() - Local_806.f_4) > 1500)
					{
						func_284(0);
					}
				}
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ballas_OG", 0))
		{
			func_312(0, 0, 0);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
	}
	if (iLocal_2036 == 2)
	{
		if (iLocal_57)
		{
			func_315();
			AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_MISSION_FAIL");
			while (CUTSCENE::IS_CUTSCENE_ACTIVE() || !func_312(0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(Local_793) && !PED::IS_PED_INJURED(Local_806))
			{
				if (Local_793.f_3 == 0)
				{
					ENTITY::SET_ENTITY_COORDS(Local_793, -622.6625f, -1624.366f, 32.0105f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_793, 185.6249f);
				}
				if (Local_806.f_3 == 0)
				{
					ENTITY::SET_ENTITY_COORDS(Local_806, -622.6948f, -1623.197f, 32.0105f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_806, 175.0071f);
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		if (!PED::IS_PED_INJURED(Local_793))
		{
			if ((!PED::IS_PED_IN_COVER(Local_793, 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_793, -1959848946) != 1) && Local_793.f_3 == 0)
			{
				Local_793.f_2 = TASK::ADD_COVER_POINT(-622.6625f, -1624.366f, 32.0105f, 185.6249f, 0, 2, 3, 0);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_793, -622.6625f, -1624.366f, 32.0105f, -1, 0, 0.5f, true, 0, Local_793.f_2, 0);
			}
		}
		if (!PED::IS_PED_INJURED(Local_806))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_806, 1237250926) != 1 && Local_806.f_3 == 0)
			{
				TASK::TASK_AIM_GUN_AT_COORD(Local_806, -625.3885f, -1626.489f, 33.2392f, -1, 0, 0);
			}
		}
		func_312(0, 0, 1);
		GlobalFunc_8316(0, 1, 1, 0);
		iLocal_278 = 0;
		iLocal_2036 = 0;
		iLocal_2035 = 6;
	}
	if (iLocal_2036 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(0);
		func_315();
		iLocal_57 = 1;
		iLocal_2036 = 1;
	}
}

void func_315()//Position - 0x37C16
{
	AUDIO::CANCEL_MUSIC_EVENT("LM1_TERMINADOR_DOORS_OPEN");
	AUDIO::CANCEL_MUSIC_EVENT("LM1_TERMINADOR_2ND_DOOR_EXPLODES");
	AUDIO::CANCEL_MUSIC_EVENT("LM1_TERMINADOR_EXIT_WAREHOUSE");
	AUDIO::CANCEL_MUSIC_EVENT("LM1_TERMINADOR_HEAD_SHOT");
}


































void func_349()//Position - 0x3A89A
{
	float fVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var9;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	struct<6> Var15;
	
	if (iLocal_2036 == 0)
	{
		if (iLocal_56)
		{
			if (bLocal_75)
			{
				GlobalFunc_4972(16.1696f, -1119.918f, 27.8357f, 182.5737f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 16.1696f, -1119.918f, 27.8357f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 182.5737f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			while ((!ENTITY::DOES_ENTITY_EXIST(Local_793) || !ENTITY::DOES_ENTITY_EXIST(Local_806)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_775))
			{
				func_127(0, 14.642f, -1120.876f, 27.7931f, 321.7365f, 0);
				func_127(1, 18.2288f, -1120.647f, 27.9195f, 88.0996f, 0);
				func_358(15.3563f, -1126.204f, 27.7251f, 273.6953f, 1);
				SYSTEM::WAIT(0);
			}
			GlobalFunc_4967(0, -1, 0);
			SYSTEM::SETTIMERB(0);
			while (SYSTEM::TIMERB() < 10000)
			{
				if (((!PED::IS_PED_INJURED(Local_793) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_793)) && (!PED::IS_PED_INJURED(Local_806) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_806))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					SYSTEM::SETTIMERB(100000);
				}
				SYSTEM::WAIT(0);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 16.1696f, -1119.918f, 27.8357f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 182.5737f);
			func_127(4, 0f, 0f, 0f, 0, 0);
			func_127(5, 0f, 0f, 0f, 0, 0);
			GlobalFunc_2201(48, 1);
			func_311();
			CLOCK::SET_CLOCK_TIME(21, 30, 0);
			iLocal_278 = 99;
			iLocal_56 = 0;
		}
		else
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				MISC::CLEAR_AREA_OF_PEDS(16.1696f, -1119.918f, 27.8357f, 100f, 0);
				iLocal_94 = 1;
			}
			else
			{
				iLocal_94 = 0;
			}
			iLocal_104 = 0;
			bLocal_103 = false;
			iLocal_113 = 0;
			iLocal_279 = 0;
			iLocal_334 = 0;
			iLocal_130[128] = 0;
			GlobalFunc_2201(48, 0);
			func_597(1);
			if (!bLocal_109)
			{
			}
			OBJECT::_DOOR_CONTROL(iLocal_2047, Local_378, 1, 0, 0, 0);
			OBJECT::_DOOR_CONTROL(iLocal_2048, Local_381, 1, 0, 0, 0);
			GlobalFunc_10639(103, 1);
			GlobalFunc_10639(104, 1);
			GlobalFunc_10639(101, 0);
			GlobalFunc_10639(102, 0);
			func_600(2, "GO_TO_PLANT", 0, 0, 0, 1);
			GlobalFunc_2204();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			SYSTEM::SETTIMERB(0);
			iLocal_278 = 0;
			iLocal_2036 = 1;
		}
	}
	if (iLocal_2036 == 1)
	{
		GlobalFunc_2232(Local_793, 1);
		GlobalFunc_2232(Local_806, 1);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_356);
		if (!PED::IS_PED_INJURED(Local_793) && !PED::IS_PED_INJURED(Local_806))
		{
			if (GlobalFunc_8419(28))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_793, 1f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_806, 1f);
			}
			else if (!iLocal_94)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_793, 2f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_806, 2f);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_793, 1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_806, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 0);
				iLocal_94 = 1;
			}
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_793, 1));
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_806, 1));
			if (!iLocal_130[66])
			{
				if (!GlobalFunc_5172(&Local_819, 1))
				{
					if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SHOP5", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(2f, 5f, 3);
						iLocal_130[66] = 1;
					}
				}
			}
			switch (iLocal_278)
			{
				case 0:
					func_356(&Local_819, -614.2678f, -1602.964f, 25.7517f, 3f, 3f, 2f, 0, Local_793, Local_806, 0, "LEM1_GOMEET", "LEM1_LEFTLEMAR", "LEM1_LEFTSTRET", "", "LEM1_LEFTBOTH", 0, 1, 1, -1, 1);
					if (HUD::DOES_BLIP_EXIST(Local_819.f_5))
					{
						HUD::SET_BLIP_ALPHA(Local_819.f_5, 0);
						if (HUD::DOES_BLIP_EXIST(uLocal_399) && !GlobalFunc_100(HUD::GET_BLIP_COORDS(uLocal_399), Local_360))
						{
							HUD::REMOVE_BLIP(&uLocal_399);
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_399))
						{
							uLocal_399 = GlobalFunc_5104(Local_360, 0);
						}
					}
					else if (HUD::DOES_BLIP_EXIST(uLocal_399))
					{
						HUD::REMOVE_BLIP(&uLocal_399);
					}
					if (!iLocal_113)
					{
						PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, 1);
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							iLocal_113 = 1;
						}
					}
					if (!HUD::DOES_BLIP_EXIST(Local_819.f_5))
					{
						if (((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -605.7533f, -1601.942f, 23.05815f, -627.6484f, -1599.526f, 31.5013f, 22f, 0, 1, 0)) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && fVar0 < 100f) && fVar1 < 100f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
						{
							iVar2 = 1;
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_819.f_5) || iVar2)
					{
						if (HUD::DOES_BLIP_EXIST(Local_819.f_6))
						{
							if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_819.f_6))
							{
								HUD::SET_BLIP_ROUTE(Local_819.f_6, 1);
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -605.7533f, -1601.942f, 23.05815f, -627.6484f, -1599.526f, 31.5013f, 22f, 0, 1, 0))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								GlobalFunc_5652(&Local_819, 0, 0);
								HUD::REMOVE_BLIP(&uLocal_399);
								Local_793.f_4 = 0;
								Local_806.f_4 = 0;
								iLocal_278++;
							}
						}
					}
					break;
				
				case 1:
					func_355(&Local_819, Local_360, 0.001f, 0.001f, 2f, 1, "", 1, 1, -1, 1);
					Var6 = { -611.823f, -1618.204f, 32.0105f };
					Var9 = { -613.2916f, -1620.058f, 32.0105f };
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_356))
					{
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_356, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &uVar3);
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_356, ENTITY::GET_ENTITY_COORDS(Local_793, 1), &uVar4);
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_356, ENTITY::GET_ENTITY_COORDS(Local_806, 1), &uVar5);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, -611.2579f, -1609.935f, 26.03599f, -612.2429f, -1620.9f, 35.43765f, 6f, 0, 1, 0))
					{
						PED::SET_PED_RESET_FLAG(Local_793, 247, 1);
					}
					if (Local_793.f_3 == 0)
					{
						if (PED::IS_PED_IN_GROUP(Local_793))
						{
							PED::REMOVE_PED_FROM_GROUP(Local_793);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_793, 713668775) != 1)
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_793, 1), Var6) > 4f)
							{
								PED::SET_PED_CONFIG_FLAG(Local_793, 104, 1);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_793, Var6, 1f, 40000, 0.25f, 0, 349.012f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 1);
								Local_793.f_3 = 0;
							}
						}
						else
						{
							PED::SET_PED_RESET_FLAG(Local_793, 60, 1);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_793, 1), Var6) < 4f)
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_793, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							Local_793.f_3++;
						}
					}
					else if (Local_793.f_3 == 1)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -611.7079f, -1620.938f, 31.26054f, -611.278f, -1616.51f, 35.18559f, 5f, 0, 1, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_793, 713668775) != 1 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_793, 1), -613.2521f, -1619.051f, 32.0105f) > 3f)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_793, -613.2521f, -1619.051f, 32.0105f, 1f, 40000, 0.25f, 0, 349.012f);
								TASK::TASK_CLEAR_LOOK_AT(Local_793);
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_806, -611.2579f, -1609.935f, 26.03599f, -612.2429f, -1620.9f, 35.43765f, 6f, 0, 1, 0))
					{
						PED::SET_PED_RESET_FLAG(Local_806, 247, 1);
					}
					if (((PED::IS_PED_IN_GROUP(Local_806) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_793, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_806, 0))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_806);
					}
					if (Local_806.f_3 == 0)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_806, 713668775) != 1)
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_806, 1), Var9) > 4f)
							{
								PED::SET_PED_CONFIG_FLAG(Local_806, 104, 1);
								if (Local_806.f_4 == 0 && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_793))
								{
									Local_806.f_4 = MISC::GET_GAME_TIMER();
								}
								if ((MISC::GET_GAME_TIMER() - Local_806.f_4) > 700)
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_806, 0))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_806, Var9, 1f, 40000, 0.25f, 0, 300.2354f);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 1);
										Local_806.f_3 = 0;
									}
								}
							}
						}
						else
						{
							PED::SET_PED_RESET_FLAG(Local_806, 60, 1);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_806, 1), Var9) < 4f)
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_806, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							Local_806.f_3++;
						}
					}
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						TASK::CLEAR_PED_TASKS(Local_793);
						TASK::CLEAR_PED_TASKS(Local_806);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_793, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_806, 0);
						iLocal_278 = (iLocal_278 - 1);
					}
					if (HUD::DOES_BLIP_EXIST(Local_819.f_5))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_360) > 10000f)
						{
							if (!GlobalFunc_5172(&Local_819, 2))
							{
								if (!iLocal_130[67])
								{
									GlobalFunc_164("LEM1_LEFTMEET", 7500, 0);
									iLocal_130[67] = 1;
								}
							}
						}
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_360) > 40000f)
					{
						func_585(10);
					}
					break;
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_360) < (100f * 100f))
			{
				CUTSCENE::REQUEST_CUTSCENE("LAM_1_MCS_1_CONCAT", 8);
				func_313(1);
				func_34("LAM_1_MCS_1_CONCAT");
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_360) > (120f * 120f))
			{
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_819.f_5))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -609.9499f, -1619.684f, 32.01014f, -614.033f, -1618.932f, 34.50995f, 2.75f, 0, 1, 0) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_793, 1), -613.2521f, -1619.051f, 32.0105f) < 2f)
				{
					iLocal_2036 = 2;
				}
			}
			else
			{
				func_152();
			}
			switch (iLocal_279)
			{
				case 0:
					if (((HUD::DOES_BLIP_EXIST(Local_819.f_5) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && GlobalFunc_2227(PLAYER::PLAYER_PED_ID(), Local_793)) && GlobalFunc_2227(PLAYER::PLAYER_PED_ID(), Local_806))
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
						if (!GlobalFunc_5172(&Local_819, 1))
						{
							if (iLocal_334 == 0)
							{
								iLocal_334 = MISC::GET_GAME_TIMER();
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_334) > 2500)
							{
								if (GlobalFunc_7050() == 0)
								{
									if (!iLocal_130[68])
									{
										if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_REC", 7, 0, 0, 0))
										{
											iLocal_130[68] = 1;
										}
									}
								}
								else if (!iLocal_130[69])
								{
									if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_REC2", 7, 0, 0, 0))
									{
										iLocal_130[69] = 1;
									}
								}
							}
						}
					}
					else if (iLocal_130[68] || iLocal_130[69])
					{
						if (!GlobalFunc_620())
						{
							GlobalFunc_619(1);
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -624.4207f, -1608.072f, 25.75148f, -607.6138f, -1609.759f, 37.3981f, 26.75f, 0, 1, 0))
					{
						GlobalFunc_5105();
						iLocal_279++;
					}
					break;
				
				case 1:
					bVar14 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -611.3336f, -1610.305f, 25.76052f, -611.7027f, -1620.921f, 35.10986f, 5.25f, 0, 1, 0);
					bVar12 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, -611.3336f, -1610.305f, 25.76052f, -611.7027f, -1620.921f, 35.10986f, 5.25f, 0, 1, 0);
					bVar13 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_806, -611.3336f, -1610.305f, 25.76052f, -611.7027f, -1620.921f, 35.10986f, 5.25f, 0, 1, 0);
					if (bVar14)
					{
						func_313(1);
					}
					if (!iLocal_130[70])
					{
						if (bLocal_103)
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_T2", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
								iLocal_130[70] = 1;
							}
						}
						else if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_ARRIVE", 7, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
							iLocal_130[70] = 1;
						}
					}
					if (((((((fVar0 < 625f && fVar1 < 625f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -624.4207f, -1608.072f, 25.75148f, -607.6138f, -1609.759f, 37.3981f, 26.75f, 0, 1, 0)) && ((((bVar14 && bVar12) && bVar13) || !bVar12) || !bVar13)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_806, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_793, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && HUD::DOES_BLIP_EXIST(Local_819.f_5))
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
						if (!GlobalFunc_5172(&Local_819, 1))
						{
							if (!iLocal_130[71])
							{
								if (iLocal_130[70])
								{
									if (GlobalFunc_7050() == 0)
									{
										if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_STAIR", 7, 0, 0, 0))
										{
											iLocal_130[71] = 1;
										}
									}
									else if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_STAIR2", 7, 0, 0, 0))
									{
										iLocal_130[71] = 1;
										iLocal_324 = 0;
									}
								}
							}
							else if (!iLocal_130[72])
							{
								if (iLocal_324 == 0)
								{
									iLocal_324 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_324) > 10000)
								{
									if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_STOP", 7, 0, 0, 0))
									{
										iLocal_130[72] = 1;
									}
								}
							}
						}
					}
					else if (iLocal_130[71])
					{
						if (!GlobalFunc_620())
						{
							GlobalFunc_619(1);
						}
					}
					if (iLocal_130[71])
					{
						Var15 = { GlobalFunc_560() };
						if (MISC::ARE_STRINGS_EQUAL(&Var15, "LEM1_STAIR") || MISC::ARE_STRINGS_EQUAL(&Var15, "LEM1_STAIR2"))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -611.8038f, -1620.893f, 35.01054f, -611.146f, -1612.275f, 30.02573f, 5f, 0, 1, 0))
							{
								GlobalFunc_5105();
							}
						}
					}
					break;
			}
			if (iLocal_77)
			{
				if (!GlobalFunc_5172(&Local_819, 0))
				{
					func_599(28, 0);
					iLocal_77 = 0;
				}
			}
			if (!bVar14)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_RECYCLING_CENTRE"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_GO_TO_RECYCLING_CENTRE");
					}
				}
				else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_RECYCLING_CENTRE"))
				{
					AUDIO::STOP_AUDIO_SCENE("LAMAR_1_GO_TO_RECYCLING_CENTRE");
				}
			}
			else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_MEETING"))
			{
				AUDIO::START_AUDIO_SCENE("LAMAR_1_GO_TO_MEETING");
			}
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -611.3336f, -1610.305f, 25.76052f, -611.7027f, -1620.921f, 35.10986f, 5.25f, 0, 1, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					iLocal_104 = 1;
					if (SYSTEM::TIMERA() > 1000)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				else
				{
					SYSTEM::SETTIMERA(0);
				}
			}
		}
		else
		{
			SYSTEM::SETTIMERA(0);
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && iLocal_104)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_104 = 0;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -611.3336f, -1610.305f, 25.76052f, -611.7027f, -1620.921f, 35.10986f, 5.25f, 0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
			}
		}
	}
	if (iLocal_2036 == 2)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		func_207();
		GlobalFunc_5652(&Local_819, 1, 0);
		GlobalFunc_5105();
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_775))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_775, 1, 1);
			func_257(&iLocal_775, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_789))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_789, 1, 1);
			func_257(&iLocal_789, 0);
		}
		STREAMING::REMOVE_ANIM_DICT(sLocal_348);
		STREAMING::NEW_LOAD_SCENE_STOP();
		iLocal_2036 = 0;
		iLocal_2035 = 5;
	}
	if (iLocal_2036 == 3)
	{
		func_645(5, 0);
	}
}






int func_355(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x3B9B7
{
	return func_168(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 3, 0, 0, 0, 0, sParam8, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam9, GlobalFunc_648(), 0, 0, bParam10, iParam11, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), bParam12, 1065353216);
}

bool func_356(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19, bool bParam20)//Position - 0x3BA12
{
	return func_168(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 3, iParam8, iParam9, iParam10, 0, sParam11, sParam12, sParam13, sParam14, sParam15, GlobalFunc_648(), bParam16, bParam17, GlobalFunc_648(), 0, 0, bParam18, iParam19, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), bParam20, 1065353216);
}


int func_358(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x3BAEF
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_775))
	{
		if (bParam4)
		{
			if (GlobalFunc_7698())
			{
				GlobalFunc_8368();
				if (GlobalFunc_8367())
				{
					iLocal_775 = GlobalFunc_9749(Param0, fParam3);
					if (GlobalFunc_634(iLocal_775, &Local_819, 2))
					{
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_775, 0, 0);
						VEHICLE::_0x0AD9E8F87FF7C16F(iLocal_775, 0);
						return 1;
					}
					else
					{
						func_257(&iLocal_775, 1);
						bParam4 = false;
					}
				}
			}
			else
			{
				bParam4 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_775) && !bParam4)
		{
			GlobalFunc_7213(19, 3);
			VEHICLE::REQUEST_VEHICLE_ASSET(GlobalFunc_5112(19, 0), 2);
			if (GlobalFunc_7212(19, 3) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(GlobalFunc_5112(19, 0)))
			{
				GlobalFunc_8038(&iLocal_775, 19, Param0, fParam3, 1, 3);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_775, 0, 0);
				VEHICLE::_0x0AD9E8F87FF7C16F(iLocal_775, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}































void func_389()//Position - 0x3D908
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	struct<6> Var17;
	struct<6> Var23;
	float fVar29;
	float fVar30;
	struct<6> Var31;
	
	if (iLocal_2036 == 0)
	{
		if (iLocal_56)
		{
			if (bLocal_75)
			{
				while (GlobalFunc_7782(28, 10, 1) || !GlobalFunc_8555(28))
				{
					SYSTEM::WAIT(0);
				}
				GlobalFunc_4972(19.6422f, -1109.182f, 28.797f, 324.8243f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 19.6422f, -1109.182f, 28.797f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 324.8243f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				SYSTEM::SETTIMERA(0);
				while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(20.3f, -1110.2f, 30.4f, 10f, 0))
				{
					SYSTEM::WAIT(0);
				}
				while (SYSTEM::TIMERA() < 10000)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						SYSTEM::SETTIMERA(100000);
					}
					SYSTEM::WAIT(0);
				}
			}
			while (((!func_127(6, 0f, 0f, 0f, 0, 0) || !ENTITY::DOES_ENTITY_EXIST(Local_793)) || !ENTITY::DOES_ENTITY_EXIST(Local_806)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_775))
			{
				func_127(0, Local_372, fLocal_274, 0);
				func_127(1, Local_375, fLocal_275, 0);
				func_358(15.3563f, -1126.204f, 27.7251f, 273.6953f, 1);
				SYSTEM::WAIT(0);
			}
			func_127(5, 0f, 0f, 0f, 0, 0);
			func_127(4, 0f, 0f, 0f, 0, 0);
			func_139(28);
			GlobalFunc_2201(48, 1);
			GlobalFunc_4967(0, -1, 0);
			SYSTEM::SETTIMERB(0);
			while (SYSTEM::TIMERB() < 10000)
			{
				if (((!PED::IS_PED_INJURED(Local_793) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_793)) && (!PED::IS_PED_INJURED(Local_806) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_806))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					SYSTEM::SETTIMERB(100000);
				}
				SYSTEM::WAIT(0);
			}
			func_501(&Local_793, Local_372, fLocal_274, "idle_lamar");
			func_501(&Local_806, Local_375, fLocal_275, "idle_stretch");
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 19.6422f, -1109.182f, 28.797f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 324.8243f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CLOCK::SET_CLOCK_TIME(20, 45, 0);
			SYSTEM::WAIT(1000);
			bLocal_107 = true;
			iLocal_56 = 0;
		}
		else
		{
			iLocal_301 = GlobalFunc_469(GlobalFunc_8315());
			if (!PED::IS_PED_INJURED(Local_793))
			{
				if (PED::IS_PED_IN_GROUP(Local_793))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_793);
				}
			}
			if (!PED::IS_PED_INJURED(Local_806))
			{
				if (PED::IS_PED_IN_GROUP(Local_806))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_806);
				}
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0))
			{
				if (func_494(1, joaat("weapon_pumpshotgun"), joaat("component_at_ar_flsh")))
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), joaat("component_at_ar_flsh"));
				}
			}
			iLocal_81 = 0;
			bLocal_82 = false;
			iLocal_95 = 0;
			bLocal_98 = false;
			iLocal_118 = 0;
			bLocal_101 = WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0);
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0))
			{
				if (WEAPON::GET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun")) > 0)
				{
					bLocal_98 = true;
				}
			}
			GlobalFunc_4935();
			OBJECT::_DOOR_CONTROL(iLocal_2047, Local_378, 1, 0, 0, 0);
			OBJECT::_DOOR_CONTROL(iLocal_2048, Local_381, 1, 0, 0, 0);
			GlobalFunc_10639(103, 1);
			GlobalFunc_10639(104, 1);
			GlobalFunc_10639(101, 1);
			GlobalFunc_10639(102, 1);
			iLocal_130[45] = 0;
			func_600(1, "BUY_GRENADES", 0, 0, 0, 1);
			STREAMING::NEW_LOAD_SCENE_STOP();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				SYSTEM::WAIT(250);
				GlobalFunc_2204();
			}
			if (GlobalFunc_8557(28))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			iLocal_278 = 0;
			iLocal_2036 = 1;
		}
	}
	if (iLocal_2036 == 1)
	{
		func_501(&Local_793, Local_372, fLocal_274, "idle_lamar");
		func_501(&Local_806, Local_375, fLocal_275, "idle_stretch");
		func_470(joaat("weapon_knife"), &iVar3, &iVar3, &uVar8, 0);
		func_470(joaat("weapon_pumpshotgun"), &iVar4, &uVar6, &uVar8, 0);
		iVar5 = func_434(joaat("weapon_pumpshotgun"), joaat("component_at_ar_flsh"));
		if (GlobalFunc_8557(28))
		{
			GlobalFunc_4503(joaat("weapon_pistol"));
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_AMMUNATION_INTRO_CUTSCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("LAMAR_1_AMMUNATION_INTRO_CUTSCENE");
				}
			}
			bVar9 = WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0);
			bVar10 = WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), joaat("component_at_ar_flsh"));
			bVar11 = GlobalFunc_8419(28);
			bVar12 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_793, 17.55898f, -1114.358f, 28.79703f, 22.78873f, -1104.444f, 32.09842f, 6.25f, 0, 1, 0);
			bVar13 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_806, 17.55898f, -1114.358f, 28.79703f, 22.78873f, -1104.444f, 32.09842f, 6.25f, 0, 1, 0);
			bVar14 = (bVar11 && GlobalFunc_8423(28));
			iVar15 = GlobalFunc_469(GlobalFunc_8315());
			if (bVar14)
			{
				if (GlobalFunc_111() || !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
				}
			}
			if (!iLocal_81 && bVar14)
			{
				iLocal_81 = 1;
			}
			if (!iLocal_118 && !bVar11)
			{
				iLocal_118 = 1;
			}
			if (!bLocal_107)
			{
				bLocal_107 = func_431();
			}
			if (!bLocal_82)
			{
				if (bVar14 && iVar15 < iLocal_301)
				{
					bLocal_82 = true;
				}
			}
			iVar16 = 0;
			if (!bVar9)
			{
				iVar16 = (iVar16 + iVar4);
			}
			if (!bVar10)
			{
				iVar16 = (iVar16 + iVar5);
			}
			if (!bLocal_82)
			{
				iVar16 = (iVar16 + iVar3);
			}
			if (bVar10)
			{
				if (bVar9)
				{
					sVar0 = "LEM1_BUYANY";
					sVar1 = "LEM1_BACKSHOP";
					sVar2 = "LEM1_BUYN";
				}
				else
				{
					sVar0 = "";
					sVar1 = "LEM1_BACKSHOP2";
					sVar2 = "LEM1_BUYN";
				}
			}
			else if (bVar9)
			{
				sVar0 = "LEM1_BUYFLSH";
				sVar1 = "LEM1_BACKSHOP3";
				sVar2 = "LEM1_SHOTTY2";
			}
			else
			{
				sVar0 = "LEM1_BUYSHOT";
				sVar1 = "LEM1_BACKSHOP2";
				sVar2 = "LEM1_SHOTTY";
			}
			if (!iLocal_130[49])
			{
				if (!iLocal_130[50])
				{
					if (!GlobalFunc_5172(&Local_819, 1))
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, sVar2, 7, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 3.5f, 3);
							iLocal_130[50] = 1;
						}
					}
				}
				else if (!iLocal_130[51])
				{
					if (!GlobalFunc_5172(&Local_819, 1))
					{
						if (!func_430())
						{
							if (iVar15 < 1500)
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_LMONEY", 7, 0, 0, 0))
								{
									iLocal_130[51] = 1;
									bVar7 = true;
								}
							}
							else
							{
								iLocal_130[51] = 1;
								iLocal_95 = 1;
							}
						}
					}
				}
				else if (!iLocal_130[52])
				{
					if (!GlobalFunc_5172(&Local_819, 2))
					{
						if ((bVar10 && bVar9) && bLocal_82)
						{
							iLocal_130[52] = 1;
						}
						else
						{
							GlobalFunc_164(sVar0, 7500, 0);
							iLocal_130[52] = 1;
						}
					}
				}
			}
			if (!iLocal_95)
			{
				if (iLocal_130[51])
				{
					Var17 = { GlobalFunc_560() };
					if (MISC::ARE_STRINGS_EQUAL(&Var17, "LEM1_LMONEY"))
					{
						Var23 = { GlobalFunc_2209() };
						if (MISC::ARE_STRINGS_EQUAL(&Var23, "LEM1_LMONEY_2"))
						{
							GlobalFunc_10829(GlobalFunc_8315(), 1, (1500 - iVar15), 0, 0);
							iVar15 = 1500;
							iLocal_95 = 1;
						}
					}
					else if (!bVar7)
					{
						GlobalFunc_10829(GlobalFunc_8315(), 1, (1500 - iVar15), 0, 0);
						iVar15 = 1500;
						iLocal_95 = 1;
					}
				}
			}
			if ((bLocal_82 && bVar10) && bVar9)
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_793, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_806, 0);
				if (!iLocal_130[53])
				{
					if (bVar14)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_348) && func_402(bVar14))
						{
							if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SHOP", 8, 0, 0, 0))
							{
								iLocal_130[53] = 1;
								func_401("lam_ig_1_p4_lamar", "lam_ig_1_p4_stretch", bVar14);
							}
						}
					}
					else
					{
						GlobalFunc_5105();
						iLocal_130[53] = 1;
					}
				}
				else if (!bVar14)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_399))
					{
						uLocal_399 = GlobalFunc_5104(Local_360, 1);
					}
					if (!GlobalFunc_5172(&Local_819, 0))
					{
						iLocal_2036 = 2;
					}
					if (!GlobalFunc_8419(28))
					{
						GlobalFunc_5105();
						iLocal_2036 = 2;
					}
				}
			}
			else
			{
				if (!bVar11 && iVar15 >= iVar16)
				{
					if (!PED::IS_PED_INJURED(Local_793) && !PED::IS_PED_INJURED(Local_806))
					{
						fVar29 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_793, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
						fVar30 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_806, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
						if (fVar29 > 2500f || fVar30 > 2500f)
						{
							if (!HUD::DOES_BLIP_EXIST(Local_793.f_1))
							{
								Local_793.f_1 = GlobalFunc_6783(Local_793, 0, 0);
							}
							if (!HUD::DOES_BLIP_EXIST(Local_806.f_1))
							{
								Local_806.f_1 = GlobalFunc_6783(Local_806, 0, 0);
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_399))
							{
								HUD::REMOVE_BLIP(&uLocal_399);
							}
							if (!iLocal_130[45])
							{
								if (!GlobalFunc_5172(&Local_819, 2))
								{
									GlobalFunc_164("LEM1_LEFTBOTH", 7500, 0);
									iLocal_130[45] = 1;
								}
							}
						}
						else if (fVar29 < 1600f && fVar30 < 1600f)
						{
							if (HUD::DOES_BLIP_EXIST(Local_793.f_1))
							{
								HUD::REMOVE_BLIP(&(Local_793.f_1));
							}
							if (HUD::DOES_BLIP_EXIST(Local_806.f_1))
							{
								HUD::REMOVE_BLIP(&(Local_806.f_1));
							}
							if (GlobalFunc_663("LEM1_LEFTBOTH", 0, 0) || (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && GlobalFunc_663(sVar0, 0, 0)))
							{
								HUD::CLEAR_PRINTS();
							}
							if (!GlobalFunc_5172(&Local_819, 2))
							{
								if (!iLocal_130[54])
								{
									GlobalFunc_164(sVar1, 7500, 0);
									iLocal_130[54] = 1;
								}
							}
							if (!HUD::DOES_BLIP_EXIST(uLocal_399))
							{
								uLocal_399 = GlobalFunc_5104(22.1f, -1106.6f, 29.8f, 1);
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_399))
					{
						HUD::REMOVE_BLIP(&uLocal_399);
					}
					if (GlobalFunc_663("LEM1_BACKSHOP", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
				}
				if (bVar14)
				{
					if (GlobalFunc_663(sVar1, 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (!bVar9 && !iLocal_130[55])
					{
						if (func_399() == joaat("weapon_pumpshotgun"))
						{
							if (!GlobalFunc_5172(&Local_819, 1))
							{
								if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SFOUND", 7, 0, 0, 0))
								{
									iLocal_130[55] = 1;
								}
							}
						}
					}
					if (((!bLocal_101 && bVar9) && !bVar10) && !iLocal_130[56])
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SFLASH", 7, 0, 0, 0))
						{
							iLocal_130[56] = 1;
						}
					}
					if (((MISC::GET_GAME_TIMER() - iLocal_300) > 15000 && !GlobalFunc_5172(&Local_819, 1)) && iVar15 >= iVar16)
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SMOAN3", 7, 0, 0, 0))
						{
							iLocal_300 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-2000, 2000));
						}
					}
				}
				else
				{
					if (((iVar15 >= iVar16 && !iLocal_130[57]) && !GlobalFunc_5172(&Local_819, 1)) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 19.93965f, -1114.85f, 28.79702f, 15.61272f, -1113.192f, 31.334f, 4f, 0, 1, 0) || !bVar11))
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SMOAN3", 7, 0, 0, 0))
						{
							iLocal_130[57] = 1;
						}
					}
					iLocal_300 = MISC::GET_GAME_TIMER();
					if (GlobalFunc_7053())
					{
						GlobalFunc_5385(1);
					}
				}
				iLocal_301 = iVar15;
				if (!PED::IS_PED_INJURED(Local_793) && !PED::IS_PED_INJURED(Local_806))
				{
					if (((bVar11 && bVar12) && bVar13) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_348))
					{
						if (!GlobalFunc_5172(&Local_819, 1))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_280) > 10000 && iLocal_130[51])
							{
								if (func_402(bVar14))
								{
									if (!iLocal_130[58])
									{
										if (!func_430())
										{
											if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SHOP1", 7, 0, 0, 0))
											{
												iLocal_130[58] = 1;
											}
										}
									}
									else if (!iLocal_130[59])
									{
										if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SHOP2", 7, 0, 0, 0))
										{
											func_401("lam_ig_1_p1_lamar", "lam_ig_1_p1_stretch", bVar14);
											iLocal_130[59] = 1;
										}
									}
									else if (!iLocal_130[60])
									{
										if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SHOP3", 7, 0, 0, 0))
										{
											func_401("lam_ig_1_p2_lamar", "lam_ig_1_p2_stretch", bVar14);
											iLocal_130[60] = 1;
										}
									}
									else if (!iLocal_130[61])
									{
										if (!func_430())
										{
											if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SHOP6", 7, 0, 0, 0))
											{
												func_401("lam_ig_1_p3_lamar", "lam_ig_1_p3_stretch", bVar14);
												iLocal_130[61] = 1;
											}
										}
									}
								}
							}
							if (!iLocal_130[62])
							{
								if ((iLocal_118 && !bVar14) && iVar15 >= iVar16)
								{
									if (bVar9 && !bVar10)
									{
										if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_SRETURN", 7, 0, 0, 0))
										{
											iLocal_130[62] = 1;
										}
									}
								}
							}
							if (!iLocal_130[63])
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_793, sLocal_348, "idle_stretch", 3))
								{
									if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_STUFF", 7, 0, 0, 0))
									{
										iLocal_130[63] = 1;
									}
								}
							}
						}
						else if (iLocal_130[58])
						{
							iLocal_280 = (MISC::GET_GAME_TIMER() - MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
						}
					}
					else if (GlobalFunc_111())
					{
						if (iLocal_130[58])
						{
							GlobalFunc_5105();
							TASK::CLEAR_PED_TASKS(Local_793);
							TASK::CLEAR_PED_TASKS(Local_806);
						}
					}
					if (iLocal_130[52])
					{
						if (iVar15 < iVar16 && iLocal_95)
						{
							if (bVar9 && bVar10)
							{
								if (!iLocal_130[49])
								{
									if (((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_348) && func_402(bVar14)) && !func_430()) && GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_BROKE", 8, 0, 0, 0))
									{
										iLocal_130[49] = 1;
										func_401("lam_ig_1_p5_lamar", "lam_ig_1_p5_stretch", bVar14);
									}
								}
								else if (!GlobalFunc_5172(&Local_819, 0))
								{
									if (!bVar14)
									{
										iLocal_2036 = 2;
									}
								}
							}
							else
							{
								func_585(12);
							}
						}
					}
					if (!bLocal_98 && !iLocal_130[65])
					{
						if (bVar14 && !GlobalFunc_5172(&Local_819, 1))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 0))
							{
								if (WEAPON::GET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun")) > 0)
								{
									if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_COLOR", 7, 0, 0, 0))
									{
										iLocal_130[65] = 1;
									}
								}
							}
						}
					}
				}
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && iVar15 >= iVar16)
			{
				HUD::CLEAR_PRINTS();
				func_207();
				GlobalFunc_5105();
				GlobalFunc_5652(&Local_819, 1, 0);
				GlobalFunc_2919(&Local_819, 1);
				iLocal_278 = 1;
				iLocal_2035 = 1;
				iLocal_2036 = 1;
			}
			if (func_430())
			{
				Var31 = { GlobalFunc_560() };
				if (((MISC::ARE_STRINGS_EQUAL(&Var31, "LEM1_LMONEY") || MISC::ARE_STRINGS_EQUAL(&Var31, "LEM1_SHOP1")) || MISC::ARE_STRINGS_EQUAL(&Var31, "LEM1_SHOP6")) || MISC::ARE_STRINGS_EQUAL(&Var31, "LEM1_BROKE"))
				{
					GlobalFunc_5105();
				}
			}
		}
		func_152();
	}
	if (iLocal_2036 == 2)
	{
		HUD::CLEAR_HELP(1);
		GlobalFunc_5385(1);
		func_207();
		if (iLocal_738 != 0)
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_738))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_738);
				iLocal_738 = 0;
			}
		}
		GlobalFunc_4503(0);
		func_28();
		iLocal_2036 = 0;
		iLocal_2035 = 4;
	}
	if (iLocal_2036 == 3)
	{
		func_645(4, 0);
	}
}










int func_399()//Position - 0x3EA2F
{
	return Global_90014.f_1;
}


void func_401(char* sParam0, char* sParam1, bool bParam2)//Position - 0x3EA5B
{
	var uVar0;
	
	if (bParam2)
	{
		if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			ENTITY::SET_ENTITY_COORDS(Local_793, Local_372, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_793, fLocal_274);
			ENTITY::SET_ENTITY_COORDS(Local_806, Local_375, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_806, fLocal_275);
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&uVar0);
	TASK::TASK_PLAY_ANIM(0, sLocal_348, sParam0, 4f, -4f, -1, 262144, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, sLocal_348, "idle_lamar", 4f, -4f, -1, 262145, 0, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_793, uVar0);
	TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	TASK::OPEN_SEQUENCE_TASK(&uVar0);
	TASK::TASK_PLAY_ANIM(0, sLocal_348, sParam1, 4f, -4f, -1, 262144, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, sLocal_348, "idle_stretch", 4f, -4f, -1, 262145, 0, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_806, uVar0);
	TASK::CLEAR_SEQUENCE_TASK(&uVar0);
}

int func_402(bool bParam0)//Position - 0x3EB42
{
	float fVar0;
	float fVar1;
	
	if (!PED::IS_PED_INJURED(Local_793) && !PED::IS_PED_INJURED(Local_806))
	{
		if (bParam0)
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_793, sLocal_348, "idle_lamar", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_806, sLocal_348, "idle_stretch", 3))
		{
			fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_793, sLocal_348, "idle_lamar");
			fVar1 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_806, sLocal_348, "idle_stretch");
			if ((fVar0 >= 0.885f || fVar0 <= 0.4f) && (fVar1 >= 0.885f || fVar1 <= 0.6f))
			{
				return 1;
			}
		}
	}
	return 0;
}




























int func_430()//Position - 0x3FC27
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@sprunk", "plyr_buy_drink_pt1", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@sprunk", "plyr_buy_drink_pt2", 3))
	{
		return 1;
	}
	return 0;
}

int func_431()//Position - 0x3FC5F
{
	int iVar0;
	float fVar1;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
		{
			fVar1 = SYSTEM::VDIST2(Local_366, ENTITY::GET_ENTITY_COORDS(iVar0, 1));
			if (fVar1 < 10000f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, 17.35029f, -1115.117f, 27.79677f, 15.64012f, -1119.683f, 31.82052f, 6f, 0, 1, 0) || fVar1 > 2500f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iVar0))
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, Local_366, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iVar0, 273.6953f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
						return 1;
					}
				}
				if (iVar0 != iLocal_775)
				{
					iLocal_789 = iVar0;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_789, 1, 1);
				}
			}
		}
	}
	return 0;
}



int func_434(int iParam0, int iParam1)//Position - 0x3FD4E
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<6> Var43;
	int iVar65;
	int iVar66;
	var uVar67;
	struct<6> Var106;
	char* sVar128;
	struct<4> Var144;
	float fVar148;
	
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 729;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 735;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 730;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 775;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 134;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 810;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 105;
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 812;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 450;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 559;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 975;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 920;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 20000;
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 3612;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 1020;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 5000;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 1760;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 710;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4800;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 12000;
						break;
				}
				break;
			
			default:
				iVar2 = GlobalFunc_221(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar2))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar2, iVar3, &Var43))
						{
							if (Var43.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (Var43.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var43.f_5;
								}
								if (iParam0 == joaat("weapon_hammer"))
								{
									if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
									{
										iVar0 = 0;
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2855));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4305));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4306));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_262145.f_8238;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4381));
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 9250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2856));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4307));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4308));
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2858));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4309));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4310));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_262145.f_8237;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4370));
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2859));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4313));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4315));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4314));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_262145.f_8241;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4380));
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2860));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4316));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4318));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4317));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_262145.f_8240;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4385));
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2862));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4325));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4322));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4324));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4323));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8234;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4371));
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2863));
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4333));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4330));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4332));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4331));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_262145.f_8236;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4374));
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2865));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4335));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4337));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4336));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8235;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4369));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2866));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4338));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2867));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4359));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4360));
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4341));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4342));
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2869));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4345));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4346));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4347));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4348));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4349));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4350));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8243;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4386));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4351));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4352));
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4361));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4357));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4358));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2861));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4319));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4321));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4320));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_262145.f_4939;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_262145.f_5516;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_262145.f_5520;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_5523;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_5519;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_5517;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_5522;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_262145.f_5521;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_5524;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_5518;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_262145.f_5543;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_262145.f_5527;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_5529;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_5525;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_5526;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_5528;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_262145.f_5999;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_6000;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_262145.f_6649;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6650;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_6651;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6652;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_262145.f_6655;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = Global_262145.f_6657;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6656;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_6658;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6659;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = Global_262145.f_6660;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4343));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4344));
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2857));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4311));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4312));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_262145.f_8239;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4382));
						break;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_262145.f_8242;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4384));
						break;
				}
				break;
			
			default:
				iVar65 = GlobalFunc_221(iParam0, &uVar67);
				if (iVar65 != -1)
				{
					iVar66 = 0;
					while (iVar66 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar65))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar65, iVar66, &Var106))
						{
							if (Var106.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (Var106.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var106.f_5;
								}
							}
						}
						iVar66++;
					}
				}
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
	{
		StringCopy(&Var144, GlobalFunc_4978(iParam1, iParam0), 16);
		GlobalFunc_215(&sVar128, Var144, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, GlobalFunc_4977(iParam0), -1, -1);
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar128))
		{
			iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_435(iParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_435(int iParam0, int iParam1, float fParam2)//Position - 0x4144D
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
	{
		return 1f;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_68245)
	{
		if (*iParam1 != 0)
		{
			iVar2 = GlobalFunc_9284(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_50 == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_62));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_104) / 100f));
		}
	}
	if (iLocal_50 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_62));
			if (func_436())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_104) / 100f));
				iLocal_50 = 1;
			}
			else
			{
				iLocal_50 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}

int func_436()//Position - 0x41563
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (MISC::IS_PC_VERSION())
	{
		return 0;
	}
	if (GlobalFunc_6714())
	{
		if (func_440())
		{
			iVar0 = GlobalFunc_4974();
			iVar1 = GlobalFunc_205();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_103) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}




int func_440()//Position - 0x416B9
{
	struct<7> Var0;
	struct<7> Var7;
	
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { GlobalFunc_213(joaat("mpply_started_mp")) };
	if (func_441(Var7, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_441(struct<7> Param0, struct<7> Param7, int iParam14)//Position - 0x416FD
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_7642(Param7);
	iVar1 = func_447(Param0, iParam14);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (GlobalFunc_7640(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}






int func_447(struct<7> Param0, int iParam7)//Position - 0x41958
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (GlobalFunc_211(Param0) == 0)
	{
		iVar0 = GlobalFunc_7642(Param0);
		iVar1 = iVar0;
		GlobalFunc_8385(&iVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			iVar1 = iVar0;
		}
		return iVar1;
	}
	return uVar2;
}























bool func_470(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x42F84
{
	struct<5> Var0;
	int iVar39;
	int iVar40;
	struct<5> Var41;
	char* sVar80;
	struct<4> Var96;
	int iVar100;
	int iVar101;
	int iVar102;
	float fVar103;
	
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case joaat("weapon_unarmed"):
				if (iParam4 == 0)
				{
					*uParam1 = 500;
					*uParam2 = 500;
				}
				else if (iParam4 == 1)
				{
					*uParam1 = 1000;
					*uParam2 = 1000;
				}
				else if (iParam4 == 2)
				{
					*uParam1 = 1500;
					*uParam2 = 1500;
				}
				else if (iParam4 == 3)
				{
					*uParam1 = 2000;
					*uParam2 = 2000;
				}
				else if (iParam4 == 4)
				{
					*uParam1 = 2500;
					*uParam2 = 2500;
				}
				break;
			
			case joaat("gadget_parachute"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_microsmg"):
				*uParam1 = 850;
				*uParam2 = 20;
				break;
			
			case joaat("weapon_smg"):
				*uParam1 = 1300;
				*uParam2 = 38;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				*uParam1 = 300;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_pumpshotgun"):
				*uParam1 = 550;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_assaultshotgun"):
				*uParam1 = 1500;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_assaultrifle"):
				*uParam1 = 1400;
				*uParam2 = 36;
				break;
			
			case joaat("weapon_carbinerifle"):
				*uParam1 = 2100;
				*uParam2 = 36;
				break;
			
			case joaat("weapon_advancedrifle"):
				*uParam1 = 3500;
				*uParam2 = 36;
				break;
			
			case joaat("weapon_sniperrifle"):
				*uParam1 = 5000;
				*uParam2 = 48;
				break;
			
			case joaat("weapon_heavysniper"):
				*uParam1 = 9500;
				*uParam2 = 29;
				break;
			
			case joaat("weapon_mg"):
				*uParam1 = 3000;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_combatmg"):
				*uParam1 = 3700;
				*uParam2 = 92;
				break;
			
			case joaat("weapon_rpg"):
				*uParam1 = 6500;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_grenadelauncher"):
				*uParam1 = 8100;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_minigun"):
				*uParam1 = 15000;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_knife"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_nightstick"):
				*uParam1 = 100;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_stungun"):
				*uParam1 = 100;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_appistol"):
				*uParam1 = 1000;
				*uParam2 = 25;
				break;
			
			case joaat("weapon_combatpistol"):
				*uParam1 = 600;
				*uParam2 = 19;
				break;
			
			case joaat("weapon_pistol"):
				*uParam1 = 350;
				*uParam2 = 19;
				break;
			
			case joaat("weapon_smokegrenade"):
				*uParam1 = 150;
				*uParam2 = 150;
				break;
			
			case joaat("weapon_grenade"):
				*uParam1 = 150;
				*uParam2 = 150;
				break;
			
			case joaat("weapon_stickybomb"):
				*uParam1 = 400;
				*uParam2 = 400;
				break;
			
			case joaat("weapon_petrolcan"):
				*uParam1 = 25;
				*uParam2 = 25;
				break;
			
			case joaat("weapon_assaultsmg"):
				*uParam1 = 0;
				*uParam2 = 38;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				*uParam1 = 1250;
				*uParam2 = 8;
				break;
			
			case joaat("weapon_pistol50"):
				*uParam1 = 4000;
				*uParam2 = 19;
				break;
			
			case joaat("weapon_hammer"):
				*uParam1 = 500;
				*uParam2 = 0;
				break;
			
			case joaat("weapon_specialcarbine"):
				*uParam1 = 14750;
				*uParam2 = 108;
				break;
			
			case joaat("weapon_bullpuprifle"):
				*uParam1 = 14500;
				*uParam2 = 108;
				break;
			
			case joaat("weapon_railgun"):
				*uParam1 = 250000;
				*uParam2 = 100;
				break;
			
			case joaat("weapon_hatchet"):
				*uParam1 = 750;
				*uParam2 = 0;
				break;
			
			case joaat("weapon_hominglauncher"):
				*uParam1 = 15500;
				*uParam2 = 400;
				break;
			
			case joaat("weapon_proxmine"):
				*uParam1 = 750;
				*uParam2 = 750;
				break;
			
			case joaat("weapon_combatpdw"):
				*uParam1 = 11750;
				*uParam2 = 113;
				break;
			
			default:
				if (GlobalFunc_221(iParam0, &Var0) != -1)
				{
					*uParam1 = Var0.f_3;
					*uParam2 = Var0.f_4;
				}
				break;
		}
		if ((iParam0 == joaat("weapon_bullpupshotgun") || iParam0 == joaat("weapon_pistol50")) || iParam0 == joaat("weapon_hammer"))
		{
			if (GlobalFunc_84() && (GlobalFunc_219() || GlobalFunc_220()))
			{
				*uParam1 = 0;
			}
		}
		iVar39 = *uParam2;
		switch (iParam0)
		{
			case joaat("weapon_appistol"):
				iVar39 = 25;
				break;
			
			case joaat("weapon_snspistol"):
				iVar39 = 10;
				break;
			
			case joaat("weapon_heavypistol"):
				iVar39 = 100;
				break;
			
			case joaat("weapon_vintagepistol"):
				iVar39 = 10;
				break;
			
			case joaat("weapon_microsmg"):
				iVar39 = 20;
				break;
			
			case joaat("weapon_specialcarbine"):
				iVar39 = 108;
				break;
			
			case joaat("weapon_bullpuprifle"):
				iVar39 = 108;
				break;
			
			case joaat("weapon_mg"):
				iVar39 = 50;
				break;
			
			case joaat("weapon_gusenberg"):
				iVar39 = 108;
				break;
			
			case joaat("weapon_heavyshotgun"):
				iVar39 = 18;
				break;
			
			case joaat("weapon_musket"):
				iVar39 = 15;
				break;
			
			case joaat("weapon_heavysniper"):
				iVar39 = 29;
				break;
			
			case joaat("weapon_marksmanrifle"):
				iVar39 = 87;
				break;
		}
		if (*uParam2 != iVar39)
		{
			*uParam2 = iVar39;
		}
	}
	else
	{
		iVar40 = -1;
		switch (iParam0)
		{
			case joaat("weapon_unarmed"):
				if (iParam4 == 0)
				{
					*uParam1 = 100;
					*uParam2 = 100;
				}
				else if (iParam4 == 1)
				{
					*uParam1 = 200;
					*uParam2 = 200;
				}
				else if (iParam4 == 2)
				{
					*uParam1 = 300;
					*uParam2 = 300;
				}
				else if (iParam4 == 3)
				{
					*uParam1 = 400;
					*uParam2 = 400;
				}
				else if (iParam4 == 4)
				{
					*uParam1 = 500;
					*uParam2 = 500;
				}
				if (iParam4 == 0)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2789));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2789));
				}
				else if (iParam4 == 1)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2790));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2790));
				}
				else if (iParam4 == 2)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2791));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2791));
				}
				else if (iParam4 == 3)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2792));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2792));
				}
				else if (iParam4 == 4)
				{
					*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2793));
					*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2793));
				}
				iVar40 = 15;
				break;
			
			case joaat("gadget_parachute"):
				*uParam1 = 500;
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_2634));
				*uParam2 = 500;
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_2634));
				iVar40 = 99;
				break;
			
			case joaat("weapon_microsmg"):
				if (Global_262145.f_2320 == -1)
				{
					*uParam1 = 3750;
				}
				else
				{
					*uParam1 = Global_262145.f_2320;
				}
				if (Global_262145.f_2349 == -1)
				{
					*uParam2 = 60;
				}
				else
				{
					*uParam2 = Global_262145.f_2349;
				}
				iVar40 = 1;
				break;
			
			case joaat("weapon_smg"):
				if (Global_262145.f_2321 == -1)
				{
					*uParam1 = 7500;
				}
				else
				{
					*uParam1 = Global_262145.f_2321;
				}
				if (Global_262145.f_2350 == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_262145.f_2350;
				}
				iVar40 = 1;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				if (Global_262145.f_2331 == -1)
				{
					*uParam1 = 0;
				}
				else
				{
					*uParam1 = Global_262145.f_2331;
				}
				if (Global_262145.f_2360 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2360;
				}
				iVar40 = 2;
				break;
			
			case joaat("weapon_pumpshotgun"):
				if (Global_262145.f_2330 == -1)
				{
					*uParam1 = 3500;
				}
				else
				{
					*uParam1 = Global_262145.f_2330;
				}
				if (Global_262145.f_2359 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2359;
				}
				iVar40 = 2;
				break;
			
			case joaat("weapon_assaultshotgun"):
				if (Global_262145.f_2333 == -1)
				{
					*uParam1 = 10000;
				}
				else
				{
					*uParam1 = Global_262145.f_2333;
				}
				if (Global_262145.f_2362 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2362;
				}
				iVar40 = 2;
				break;
			
			case joaat("weapon_assaultrifle"):
				if (Global_262145.f_2323 == -1)
				{
					*uParam1 = 8550;
				}
				else
				{
					*uParam1 = Global_262145.f_2323;
				}
				if (Global_262145.f_2352 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2352;
				}
				iVar40 = 3;
				break;
			
			case joaat("weapon_carbinerifle"):
				if (Global_262145.f_2324 == -1)
				{
					*uParam1 = 13000;
				}
				else
				{
					*uParam1 = Global_262145.f_2324;
				}
				if (Global_262145.f_2353 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2353;
				}
				iVar40 = 3;
				break;
			
			case joaat("weapon_advancedrifle"):
				if (Global_262145.f_2326 == -1)
				{
					*uParam1 = 14250;
				}
				else
				{
					*uParam1 = Global_262145.f_2326;
				}
				if (Global_262145.f_2355 == -1)
				{
					*uParam2 = 108;
				}
				else
				{
					*uParam2 = Global_262145.f_2355;
				}
				iVar40 = 3;
				break;
			
			case joaat("weapon_sniperrifle"):
				if (Global_262145.f_2336 == -1)
				{
					*uParam1 = 20000;
				}
				else
				{
					*uParam1 = Global_262145.f_2336;
				}
				if (Global_262145.f_2365 == -1)
				{
					*uParam2 = 145;
				}
				else
				{
					*uParam2 = Global_262145.f_2365;
				}
				iVar40 = 4;
				break;
			
			case joaat("weapon_heavysniper"):
				if (Global_262145.f_2334 == -1)
				{
					*uParam1 = 38150;
				}
				else
				{
					*uParam1 = Global_262145.f_2334;
				}
				if (Global_262145.f_2363 == -1)
				{
					*uParam2 = 87;
				}
				else
				{
					*uParam2 = Global_262145.f_2363;
				}
				iVar40 = 4;
				break;
			
			case joaat("weapon_mg"):
				if (Global_262145.f_2327 == -1)
				{
					*uParam1 = 13500;
				}
				else
				{
					*uParam1 = Global_262145.f_2327;
				}
				if (Global_262145.f_2356 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2356;
				}
				iVar40 = 5;
				break;
			
			case joaat("weapon_combatmg"):
				if (Global_262145.f_2328 == -1)
				{
					*uParam1 = 14800;
				}
				else
				{
					*uParam1 = Global_262145.f_2328;
				}
				if (Global_262145.f_2357 == -1)
				{
					*uParam2 = 277;
				}
				else
				{
					*uParam2 = Global_262145.f_2357;
				}
				iVar40 = 5;
				break;
			
			case joaat("weapon_rpg"):
				if (Global_262145.f_2339 == -1)
				{
					*uParam1 = 26250;
				}
				else
				{
					*uParam1 = Global_262145.f_2339;
				}
				if (Global_262145.f_2368 == -1)
				{
					*uParam2 = 1000;
				}
				else
				{
					*uParam2 = Global_262145.f_2368;
				}
				iVar40 = 6;
				break;
			
			case joaat("weapon_grenadelauncher"):
				if (Global_262145.f_2338 == -1)
				{
					*uParam1 = 32400;
				}
				else
				{
					*uParam1 = Global_262145.f_2338;
				}
				if (Global_262145.f_2367 == -1)
				{
					*uParam2 = 5000;
				}
				else
				{
					*uParam2 = Global_262145.f_2367;
				}
				iVar40 = 6;
				break;
			
			case joaat("weapon_minigun"):
				if (Global_262145.f_2340 == -1)
				{
					*uParam1 = 50000;
				}
				else
				{
					*uParam1 = Global_262145.f_2340;
				}
				if (Global_262145.f_2369 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2369;
				}
				iVar40 = 6;
				break;
			
			case joaat("weapon_knife"):
				if (Global_262145.f_2373 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_2373;
				}
				if (Global_262145.f_2378 == -1)
				{
					*uParam2 = 100;
				}
				else
				{
					*uParam2 = Global_262145.f_2378;
				}
				iVar40 = 7;
				break;
			
			case joaat("weapon_nightstick"):
				if (Global_262145.f_2374 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_2374;
				}
				if (Global_262145.f_2379 == -1)
				{
					*uParam2 = 100;
				}
				else
				{
					*uParam2 = Global_262145.f_2379;
				}
				iVar40 = 7;
				break;
			
			case joaat("weapon_dagger"):
				if (Global_262145.f_5540 == -1)
				{
					*uParam1 = 400;
				}
				else
				{
					*uParam1 = Global_262145.f_5540;
				}
				if (Global_262145.f_5542 == -1)
				{
					*uParam2 = 85;
				}
				else
				{
					*uParam2 = Global_262145.f_5542;
				}
				iVar40 = 7;
				break;
			
			case joaat("weapon_stungun"):
				*uParam1 = 100;
				*uParam2 = 50;
				break;
			
			case joaat("weapon_appistol"):
				if (Global_262145.f_2319 == -1)
				{
					*uParam1 = 5000;
				}
				else
				{
					*uParam1 = Global_262145.f_2319;
				}
				if (Global_262145.f_2348 == -1)
				{
					*uParam2 = 85;
				}
				else
				{
					*uParam2 = Global_262145.f_2348;
				}
				iVar40 = 8;
				break;
			
			case joaat("weapon_combatpistol"):
				if (Global_262145.f_2317 == -1)
				{
					*uParam1 = 3200;
				}
				else
				{
					*uParam1 = Global_262145.f_2317;
				}
				if (Global_262145.f_2346 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2346;
				}
				iVar40 = 8;
				break;
			
			case joaat("weapon_pistol"):
				if (Global_262145.f_2316 == -1)
				{
					*uParam1 = 2500;
				}
				else
				{
					*uParam1 = Global_262145.f_2316;
				}
				if (Global_262145.f_2345 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2345;
				}
				iVar40 = 8;
				break;
			
			case joaat("weapon_smokegrenade"):
				if (Global_262145.f_2341 == -1)
				{
					*uParam1 = 150;
				}
				else
				{
					*uParam1 = Global_262145.f_2341;
				}
				if (Global_262145.f_2377 == -1)
				{
					*uParam2 = 150;
				}
				else
				{
					*uParam2 = Global_262145.f_2377;
				}
				iVar40 = 9;
				break;
			
			case joaat("weapon_grenade"):
				if (Global_262145.f_2371 == -1)
				{
					*uParam1 = 250;
				}
				else
				{
					*uParam1 = Global_262145.f_2371;
				}
				if (Global_262145.f_2376 == -1)
				{
					*uParam2 = 250;
				}
				else
				{
					*uParam2 = Global_262145.f_2376;
				}
				iVar40 = 9;
				break;
			
			case joaat("weapon_stickybomb"):
				if (Global_262145.f_2370 == -1)
				{
					*uParam1 = 600;
				}
				else
				{
					*uParam1 = Global_262145.f_2370;
				}
				if (Global_262145.f_2375 == -1)
				{
					*uParam2 = 600;
				}
				else
				{
					*uParam2 = Global_262145.f_2375;
				}
				iVar40 = 9;
				break;
			
			case joaat("weapon_petrolcan"):
				if (Global_262145.f_2342 == -1)
				{
					*uParam1 = 100;
				}
				else
				{
					*uParam1 = Global_262145.f_2342;
				}
				*uParam2 = 100;
				iVar40 = 10;
				break;
			
			case joaat("weapon_assaultsmg"):
				if (Global_262145.f_2322 == -1)
				{
					*uParam1 = 12550;
				}
				else
				{
					*uParam1 = Global_262145.f_2322;
				}
				if (Global_262145.f_2351 == -1)
				{
					*uParam2 = 113;
				}
				else
				{
					*uParam2 = Global_262145.f_2351;
				}
				iVar40 = 1;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				if (Global_262145.f_2332 == -1)
				{
					*uParam1 = 8000;
				}
				else
				{
					*uParam1 = Global_262145.f_2332;
				}
				if (Global_262145.f_2361 == -1)
				{
					*uParam2 = 24;
				}
				else
				{
					*uParam2 = Global_262145.f_2361;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					*uParam1 = 0;
				}
				iVar40 = 2;
				break;
			
			case joaat("weapon_pistol50"):
				if (Global_262145.f_2318 == -1)
				{
					*uParam1 = 3900;
				}
				else
				{
					*uParam1 = Global_262145.f_2318;
				}
				if (Global_262145.f_2347 == -1)
				{
					*uParam2 = 57;
				}
				else
				{
					*uParam2 = Global_262145.f_2347;
				}
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					*uParam1 = 0;
				}
				iVar40 = 8;
				break;
			
			case joaat("weapon_hammer"):
				if (Global_262145.f_2344 == -1)
				{
					*uParam1 = 500;
				}
				else
				{
					*uParam1 = Global_262145.f_2344;
				}
				*uParam2 = 0;
				if (GlobalFunc_84() && (GlobalFunc_220() || GlobalFunc_219()))
				{
					*uParam1 = 0;
				}
				iVar40 = 7;
				break;
			
			case joaat("weapon_snspistol"):
				*uParam1 = Global_262145.f_5535;
				*uParam2 = Global_262145.f_5530;
				iVar40 = 8;
				break;
			
			case joaat("weapon_bottle"):
				*uParam1 = Global_262145.f_5534;
				*uParam2 = 0;
				iVar40 = 7;
				break;
			
			case joaat("weapon_gusenberg"):
				*uParam1 = Global_262145.f_4934;
				*uParam2 = Global_262145.f_4940;
				iVar40 = 3;
				break;
			
			case joaat("weapon_heavypistol"):
				*uParam1 = Global_262145.f_5536;
				*uParam2 = Global_262145.f_5532;
				iVar40 = 8;
				break;
			
			case joaat("weapon_specialcarbine"):
				*uParam1 = Global_262145.f_5537;
				*uParam2 = Global_262145.f_5531;
				iVar40 = 3;
				break;
			
			case joaat("weapon_bullpuprifle"):
				*uParam1 = Global_262145.f_5538;
				*uParam2 = Global_262145.f_5533;
				iVar40 = 3;
				break;
			
			case joaat("weapon_vintagepistol"):
				*uParam1 = Global_262145.f_5539;
				*uParam2 = Global_262145.f_5541;
				iVar40 = 8;
				break;
			
			case joaat("weapon_musket"):
				*uParam1 = Global_262145.f_6139;
				*uParam2 = Global_262145.f_6140;
				iVar40 = 4;
				break;
			
			case joaat("weapon_firework"):
				*uParam1 = Global_262145.f_6141;
				*uParam2 = Global_262145.f_6142;
				iVar40 = 6;
				break;
			
			case joaat("weapon_heavyshotgun"):
				*uParam1 = Global_262145.f_6648;
				*uParam2 = Global_262145.f_6653;
				iVar40 = 2;
				break;
			
			case joaat("weapon_marksmanrifle"):
				*uParam1 = Global_262145.f_6654;
				*uParam2 = Global_262145.f_6661;
				iVar40 = 4;
				break;
			
			case joaat("weapon_hatchet"):
				*uParam1 = Global_262145.f_6967;
				*uParam2 = 0;
				iVar40 = 7;
				break;
			
			case joaat("weapon_flaregun"):
				*uParam1 = Global_262145.f_6898;
				*uParam2 = Global_262145.f_6899;
				iVar40 = 6;
				break;
			
			case joaat("weapon_proxmine"):
				*uParam1 = Global_262145.f_7182;
				*uParam2 = Global_262145.f_7182;
				iVar40 = 9;
				break;
			
			case joaat("weapon_knuckle"):
				*uParam1 = Global_262145.f_6900;
				*uParam2 = Global_262145.f_6901;
				iVar40 = 7;
				break;
			
			case joaat("weapon_marksmanpistol"):
				*uParam1 = Global_262145.f_6902;
				*uParam2 = Global_262145.f_6903;
				iVar40 = 8;
				break;
			
			case joaat("weapon_combatpdw"):
				*uParam1 = Global_262145.f_8273;
				*uParam2 = Global_262145.f_8274;
				iVar40 = 1;
				break;
			
			case joaat("weapon_hominglauncher"):
				*uParam1 = Global_262145.f_6904;
				*uParam2 = Global_262145.f_6905;
				iVar40 = 6;
				break;
			
			default:
				if (GlobalFunc_221(iParam0, &Var41) != -1)
				{
					*uParam1 = Var41.f_3;
					*uParam2 = Var41.f_4;
				}
				break;
		}
		switch (iVar40)
		{
			case 0:
				break;
			
			case 1:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 2:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 3:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 4:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 5:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 6:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 7:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_6));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_6));
				break;
			
			case 8:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_4));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_4));
				break;
			
			case 9:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 10:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_2));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_2));
				break;
			
			case 11:
				break;
			
			case 12:
				break;
			
			case 13:
				break;
			
			case 14:
				break;
			
			case 15:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421));
				break;
			
			case 99:
				*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_270421.f_7));
				*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_270421.f_7));
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
	{
		StringCopy(&Var96, GlobalFunc_5379(iParam0, 0), 16);
		iVar101 = 0;
		if (iParam0 == joaat("weapon_petrolcan"))
		{
			iVar100 = 5;
		}
		else if (iParam0 == joaat("gadget_parachute"))
		{
			iVar100 = 4;
		}
		else if (iParam0 == joaat("weapon_unarmed"))
		{
			iVar100 = 3;
		}
		else if (((((iParam0 == joaat("weapon_bottle") || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_hatchet")) || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_nightstick"))
		{
			iVar100 = 1;
		}
		else if (((iParam0 == joaat("weapon_grenade") || iParam0 == joaat("weapon_smokegrenade")) || iParam0 == joaat("weapon_stickybomb")) || iParam0 == joaat("weapon_proxmine"))
		{
			iVar100 = 2;
			iVar101 = 1;
		}
		else
		{
			iVar100 = 0;
		}
		GlobalFunc_215(&sVar80, Var96, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, iVar100, iVar101, -1, -1);
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar80))
		{
			*uParam1 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar80), -1829708865, 1);
		}
		if (GlobalFunc_3258(iParam0, &iVar102))
		{
			GlobalFunc_3257(iVar102, 2, &Var96, 0);
			GlobalFunc_215(&sVar80, Var96, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 0, GlobalFunc_4977(iParam0), -1, -1);
			if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar80))
			{
				*uParam2 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar80), 1067618600, 1);
				switch (iParam0)
				{
					case joaat("weapon_rpg"):
					case joaat("weapon_grenadelauncher"):
					case joaat("weapon_hominglauncher"):
					case joaat("weapon_firework"):
						*uParam3 = 1;
						break;
					}
				}
			}
	}
	fVar103 = func_471(iParam0, uParam1, uParam2);
	if (fVar103 != 1f)
	{
	}
	return *uParam1 != 0;
}

float func_471(int iParam0, var uParam1, var uParam2)//Position - 0x444C0
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar1 = 0f;
	fVar2 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
	{
		return 1f;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = GlobalFunc_9284(iParam0);
		if (iVar0 == 3)
		{
			fVar2 = (fVar2 + 0.05f);
		}
		else if (iVar0 == 2)
		{
			fVar2 = (fVar2 + 0.1f);
		}
		else if (iVar0 == 1)
		{
			fVar2 = (fVar2 + 0.15f);
		}
		if (fVar3 >= 100f)
		{
			fVar2 = (fVar2 + 0.1f);
		}
		else if (fVar3 >= 80f)
		{
			fVar2 = (fVar2 + 0.08f);
		}
		else if (fVar3 >= 60f)
		{
			fVar2 = (fVar2 + 0.06f);
		}
		else if (fVar3 >= 40f)
		{
			fVar2 = (fVar2 + 0.04f);
		}
		else if (fVar3 >= 20f)
		{
			fVar2 = (fVar2 + 0.02f);
		}
		fVar2 = (fVar2 + GlobalFunc_8697(iParam0));
		fVar2 = (fVar2 + GlobalFunc_8696());
		fVar2 = (fVar2 + GlobalFunc_8695());
		if (iLocal_50 == 1)
		{
			fVar2 = (fVar2 + (SYSTEM::TO_FLOAT(Global_262145.f_104) / 100f));
		}
		if (iLocal_50 == 0)
		{
			if (func_436())
			{
				fVar2 = (fVar2 + (SYSTEM::TO_FLOAT(Global_262145.f_104) / 100f));
				iLocal_50 = 1;
			}
			else
			{
				iLocal_50 = -1;
			}
		}
		fVar1 = (1f - fVar2);
		*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * fVar1));
		*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_62));
		*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_62));
		return fVar1;
	}
	iVar0 = GlobalFunc_9284(iParam0);
	if (iVar0 == 3)
	{
		fVar2 = (fVar2 + 0.1f);
	}
	else if (iVar0 == 2)
	{
		fVar2 = (fVar2 + 0.15f);
	}
	else if (iVar0 == 1)
	{
		fVar2 = (fVar2 + 0.25f);
	}
	fVar1 = (1f - fVar2);
	*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * fVar1));
	*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * fVar1));
	return fVar1;
}























int func_494(int iParam0, int iParam1, int iParam2)//Position - 0x45995
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		uVar0 = GlobalFunc_7249(iParam0, iParam1, iParam2);
		iVar1 = GlobalFunc_5846(iParam2, iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		return MISC::IS_BIT_SET(uVar0, iVar2);
	}
	return 0;
}







void func_501(int iParam0, struct<3> Param1, float fParam4, char* sParam5)//Position - 0x46687
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(*iParam0);
		fVar1 = MISC::ABSF((fVar0 - fParam4));
		if (fVar1 > 180f)
		{
			fVar1 = MISC::ABSF((fVar1 - 360f));
		}
		bVar2 = (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, -2017877118) == 1 && !ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, sLocal_348, sParam5, 3));
		bVar3 = (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(*iParam0, 1), Param1) < 1.4f && (fVar1 < 20f || bVar2));
		STREAMING::REQUEST_ANIM_DICT(sLocal_348);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_348))
		{
			if (!bVar3)
			{
				TASK::TASK_CLEAR_LOOK_AT(*iParam0);
				if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 242628503) != 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar4);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_775, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_775, 0))
						{
							if (*iParam0 == Local_793)
							{
								TASK::TASK_PAUSE(0, 500);
							}
							TASK::TASK_LEAVE_VEHICLE(0, iLocal_775, 0);
						}
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, 1f, 20000, 0.25f, 4608, 1193033728);
					TASK::TASK_ACHIEVE_HEADING(0, fParam4, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar4);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar4);
					TASK::CLEAR_SEQUENCE_TASK(&uVar4);
				}
			}
			else if ((TASK::GET_SCRIPT_TASK_STATUS(*iParam0, -2017877118) != 1 && TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 242628503) != 1) && TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 713668775) != 1)
			{
				TASK::TASK_PLAY_ANIM(*iParam0, sLocal_348, sParam5, 4f, -4f, -1, 262145, 0, 0, 0, 0);
			}
		}
	}
}


void func_503()//Position - 0x4681A
{
	int iVar0;
	
	if (iLocal_2036 == 0)
	{
		if (iLocal_56)
		{
			if (iLocal_278 != 99)
			{
				if (bLocal_75)
				{
					GlobalFunc_4972(Local_369 + Vector(0.5f, 0f, 0f), 327.4432f, 0, 0);
					iLocal_278 = 99;
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_369 + Vector(0.5f, 0f, 0f), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 327.4432f);
					if (func_127(6, 0f, 0f, 0f, 0, 0))
					{
						STREAMING::LOAD_SCENE(Local_369);
						iLocal_278 = 99;
					}
				}
			}
			else if ((((func_127(0, Local_372, fLocal_274, 0) && func_127(1, Local_375, fLocal_275, 0)) && func_358(15.3563f, -1126.204f, 27.7251f, 273.6953f, 1)) && func_127(4, 0f, 0f, 0f, 0, 0)) && func_127(5, 0f, 0f, 0f, 0, 0))
			{
				func_139(28);
				GlobalFunc_2201(48, 1);
				SYSTEM::WAIT(100);
				OBJECT::_DOOR_CONTROL(iLocal_2047, Local_378, 1, 0, 0, 0);
				OBJECT::_DOOR_CONTROL(iLocal_2048, Local_381, 1, 0, 0, 0);
				GlobalFunc_10639(103, 1);
				GlobalFunc_10639(104, 1);
				GlobalFunc_10639(101, 1);
				GlobalFunc_10639(102, 1);
				GlobalFunc_4967(0, -1, 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_369, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 327.4432f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				bLocal_107 = true;
				iLocal_56 = 0;
			}
		}
		else
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			}
			CUTSCENE::REQUEST_CUTSCENE("lam_1_mcs_3", 8);
			STREAMING::REQUEST_ANIM_DICT(sLocal_348);
			func_34("lam_1_mcs_3");
			if (((GlobalFunc_5798(28) && func_516()) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_348)) && GlobalFunc_Has_Cutscene_Loaded())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				func_29(Local_793);
				func_29(Local_806);
				if (!PED::IS_PED_INJURED(Local_793))
				{
					if (PED::IS_PED_IN_GROUP(Local_793))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_793);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_793, "Lamar", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_806))
				{
					if (PED::IS_PED_IN_GROUP(Local_806))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_806);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_806, "Stretch", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_762))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_762, "GunShopKeeper", 0, 0, 0);
				}
				CUTSCENE::START_CUTSCENE(0);
				GlobalFunc_8316(1, 1, 1, 0);
				func_28();
				iLocal_57 = 0;
				iLocal_278 = 0;
				iLocal_2036 = 1;
			}
		}
	}
	if (iLocal_2036 == 1)
	{
		if (!iLocal_57)
		{
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				iLocal_57 = 1;
				iLocal_2036 = 3;
			}
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_AMMUNATION_INTRO_CUTSCENE"))
			{
				AUDIO::START_AUDIO_SCENE("LAMAR_1_AMMUNATION_INTRO_CUTSCENE");
			}
			if (!bLocal_107)
			{
				bLocal_107 = func_431();
			}
			switch (iLocal_278)
			{
				case 0:
					iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
						GlobalFunc_9138(iVar0);
					}
					FIRE::STOP_FIRE_IN_RANGE(17.9f, -1115f, 29.3f, 50f);
					MISC::CLEAR_AREA_OF_PROJECTILES(17.9f, -1115f, 29.3f, 50f, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(17.9f, -1115f, 29.3f, 50f, 1, 0, 0, 0, 0);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(17.9f, -1115f, 29.3f, 50f);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_775, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_775, 1);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_775, 17.35029f, -1115.117f, 27.79677f, 15.64012f, -1119.683f, 31.82052f, 6f, 0, 1, 0))
						{
							ENTITY::SET_ENTITY_HEADING(iLocal_775, 229.0238f);
							ENTITY::SET_ENTITY_COORDS(iLocal_775, -700.7425f, 5270.605f, 74.4262f, 1, 0, 0, 1);
						}
					}
					if (CLOCK::GET_CLOCK_HOURS() < 21 && CLOCK::GET_CLOCK_HOURS() > 4)
					{
						CLOCK::SET_CLOCK_TIME(20, 45, 0);
					}
					SYSTEM::SETTIMERB(0);
					GlobalFunc_2204();
					iLocal_278++;
					break;
				
				case 1:
					GlobalFunc_5801(28, "SHOP_INTRO");
					if (SYSTEM::TIMERB() > 8000)
					{
						SYSTEM::SETTIMERB(0);
						iLocal_278++;
					}
					break;
				
				case 2:
					GlobalFunc_5801(28, "GS_INTRO_0");
					if (SYSTEM::TIMERB() > 8000)
					{
						SYSTEM::SETTIMERB(0);
						iLocal_278++;
					}
					break;
				
				case 3:
					GlobalFunc_5801(28, "GS_INTRO_1");
					if (SYSTEM::TIMERB() > 8000)
					{
						HUD::CLEAR_HELP(1);
						SYSTEM::SETTIMERB(0);
						iLocal_278++;
					}
					break;
				}
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_2036 = 2;
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
		{
			if (!PED::IS_PED_INJURED(Local_793))
			{
				TASK::TASK_PLAY_ANIM(Local_793, sLocal_348, "idle_lamar", 4f, -4f, -1, 262145, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_793, 0, 0);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Stretch", 0))
		{
			if (!PED::IS_PED_INJURED(Local_806))
			{
				ENTITY::SET_ENTITY_COORDS(Local_806, Local_375, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_806, fLocal_275);
				TASK::TASK_PLAY_ANIM(Local_806, sLocal_348, "idle_stretch", 4f, -4f, -1, 262145, 0, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_806, 0, 0);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("GunShopKeeper", 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_762))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_762, 23.76f, -1105.664f, 28.797f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_762, 142.49f);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
		{
			HUD::CLEAR_HELP(1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	if (iLocal_2036 == 2)
	{
		if (iLocal_57)
		{
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(Local_793))
			{
				ENTITY::SET_ENTITY_COORDS(Local_793, Local_372, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_793, fLocal_274);
				TASK::TASK_PLAY_ANIM(Local_793, sLocal_348, "idle_lamar", 1000f, -4f, -1, 262145, 0, 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_806))
			{
				ENTITY::SET_ENTITY_COORDS(Local_806, Local_375, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_806, fLocal_275);
				TASK::TASK_PLAY_ANIM(Local_806, sLocal_348, "idle_stretch", 1000f, -4f, -1, 262145, 0, 0, 0, 0);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 19.5879f, -1109.158f, 28.797f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 338.699f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		if (!PED::IS_PED_INJURED(iLocal_762))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_762, true);
		}
		GlobalFunc_8316(0, 1, 1, 0);
		GlobalFunc_5782(28);
		iLocal_2036 = 0;
		iLocal_2035 = 3;
	}
	if (iLocal_2036 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(0);
		iLocal_57 = 1;
		iLocal_2036 = 1;
	}
}













int func_516()//Position - 0x47813
{
	int iVar0[10];
	int iVar11;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_762))
	{
		PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar0, -1);
		iVar11 = 0;
		iVar11 = 0;
		while (iVar11 < iVar0)
		{
			if (!PED::IS_PED_INJURED(iVar0[iVar11]))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0[iVar11]) == joaat("s_m_y_ammucity_01"))
				{
					iLocal_762 = iVar0[iVar11];
					return 1;
				}
			}
			iVar11++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}


void func_518()//Position - 0x478B0
{
	int iVar0[1];
	struct<2> Var2;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	
	if (iLocal_2036 == 0)
	{
		if (iLocal_56)
		{
			if (bLocal_75)
			{
				GlobalFunc_4972(-14.2794f, -1453.471f, 29.5179f, 210.5592f, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -14.2794f, -1453.471f, 29.5179f, 0, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 210.5592f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				SYSTEM::WAIT(0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			func_127(4, 0f, 0f, 0f, 0, 0);
			if (!MISC::IS_AREA_OCCUPIED(-13.7896f, -1459.157f, 29.4592f, -11.7896f, -1457.157f, 29.4592f, 0, 1, 0, 0, 0, 0, 0))
			{
				while (!func_358(-12.7896f, -1458.157f, 29.4592f, 273.6953f, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
			while (!func_127(0, -12.0409f, -1460.072f, 29.5347f, 31.2574f, 0) || !func_127(1, -12.313f, -1452.996f, 29.5358f, 178.3208f, 0))
			{
				SYSTEM::WAIT(0);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			GlobalFunc_2201(48, 1);
			GlobalFunc_4967(0, -1, 0);
			SYSTEM::SETTIMERB(0);
			while (SYSTEM::TIMERB() < 10000)
			{
				if (((!PED::IS_PED_INJURED(Local_793) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_793)) && (!PED::IS_PED_INJURED(Local_806) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_806))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					SYSTEM::SETTIMERB(100000);
				}
				SYSTEM::WAIT(0);
			}
			iLocal_278 = 99;
			iLocal_56 = 0;
		}
		else if ((func_127(0, -12.0409f, -1460.072f, 29.5347f, 31.2574f, 0) && func_127(1, -12.313f, -1452.996f, 29.5358f, 178.3208f, 0)) && func_127(5, 0f, 0f, 0f, 0, 0))
		{
			GlobalFunc_2919(&Local_819, 1);
			GlobalFunc_690(&Local_819, 0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -14.2794f, -1453.471f, 29.5179f, 0, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 201.1911f);
				if (!PED::IS_PED_INJURED(Local_793) && !PED::IS_PED_INJURED(Local_806))
				{
					ENTITY::SET_ENTITY_COORDS(Local_793, -11.2779f, -1455.201f, 29.5488f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_793, 158.1405f);
					ENTITY::SET_ENTITY_COORDS(Local_806, -14.0287f, -1456.596f, 29.4127f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_806, 188.2834f);
					PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_775))
					{
						iVar0[0] = iLocal_775;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0[0], 0) && GlobalFunc_634(iVar0[0], &Local_819, 2))
					{
						TASK::TASK_ENTER_VEHICLE(Local_793, iVar0[0], 20000, 0, 1f, 1, 0);
						TASK::TASK_ENTER_VEHICLE(Local_806, iVar0[0], 20000, 1, 1f, 1, 0);
					}
				}
				SYSTEM::WAIT(500);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			OBJECT::_DOOR_CONTROL(iLocal_2047, Local_378, 1, 0, 0, 0);
			OBJECT::_DOOR_CONTROL(iLocal_2048, Local_381, 1, 0, 0, 0);
			GlobalFunc_10639(103, 1);
			GlobalFunc_10639(104, 1);
			GlobalFunc_10639(101, 1);
			GlobalFunc_10639(102, 1);
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!PED::IS_PED_INJURED(Local_793))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_793, 1f);
					}
					if (!PED::IS_PED_INJURED(Local_806))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_806, 1f);
					}
					SYSTEM::WAIT(0);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_278 = 0;
			iLocal_323 = 0;
			iLocal_327 = 0;
			iLocal_2036 = 1;
		}
	}
	if (iLocal_2036 == 1)
	{
		GlobalFunc_2232(Local_793, 1);
		GlobalFunc_2232(Local_806, 1);
		switch (iLocal_278)
		{
			case 0:
				if (GlobalFunc_10630(&Local_844, cLocal_349, "LEM1_GUN", "LEM1_GUN_1", 7, 0, 0))
				{
					iLocal_278++;
				}
				break;
			
			case 1:
				if (!iLocal_130[45])
				{
					StringCopy(&Var2, "LEM1_LEFTBOTH", 16);
				}
				else
				{
					StringCopy(&Var2, "", 16);
				}
				if (func_356(&Local_819, 14.9916f, -1126.095f, 27.7036f, 0.001f, 0.001f, 2f, 0, Local_793, Local_806, 0, "LEM1_GOGUN", "LEM1_LEFTLEMAR", "LEM1_LEFTSTRET", "", &Var2, 0, 1, 1, -1, 1))
				{
					iLocal_2036 = 2;
				}
				break;
		}
		if (((HUD::DOES_BLIP_EXIST(Local_819.f_5) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && GlobalFunc_2227(PLAYER::PLAYER_PED_ID(), Local_793)) && GlobalFunc_2227(PLAYER::PLAYER_PED_ID(), Local_806))
		{
			if (GlobalFunc_620())
			{
				GlobalFunc_619(0);
			}
			if (iLocal_323 == 0)
			{
				iLocal_323 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_323) > 1500)
			{
				if (!GlobalFunc_5172(&Local_819, 1) && SYSTEM::TIMERA() > 1000)
				{
					if (!iLocal_130[46])
					{
						if (GlobalFunc_892(6, 0))
						{
							if (GlobalFunc_892(6, 1))
							{
								iVar6 = func_537(PLAYER::PLAYER_PED_ID(), 2);
								if (iVar6 == 2 || iVar6 == 3)
								{
									iLocal_2037 = 2;
								}
								else
								{
									iLocal_2037 = 1;
								}
							}
							else
							{
								iLocal_2037 = 0;
							}
						}
						else
						{
							iLocal_2037 = 3;
						}
						if (func_519())
						{
							iVar7 = func_537(PLAYER::PLAYER_PED_ID(), 3);
							if (iVar7 == 2 || iVar7 == 3)
							{
								iLocal_2038 = 2;
							}
							else
							{
								iLocal_2038 = 1;
							}
						}
						else
						{
							iLocal_2038 = 0;
						}
						StringCopy(&Var8, "", 16);
						if (GlobalFunc_7050() == 0 && iLocal_2037 != 3)
						{
							if (iLocal_2037 == 0)
							{
								if (iLocal_2038 == 0)
								{
									StringCopy(&Var8, "LEM1_HAIR1", 16);
								}
								else if (iLocal_2038 == 1)
								{
									StringCopy(&Var8, "LEM1_HAIR2", 16);
								}
								else if (iLocal_2038 == 2)
								{
									StringCopy(&Var8, "LEM1_HAIR3", 16);
								}
							}
							else if (iLocal_2037 == 1)
							{
								if (iLocal_2038 == 0)
								{
									StringCopy(&Var8, "LEM1_HAIR4", 16);
								}
								else if (iLocal_2038 == 1)
								{
									StringCopy(&Var8, "LEM1_HAIR5", 16);
								}
								else if (iLocal_2038 == 2)
								{
									StringCopy(&Var8, "LEM1_HAIR6", 16);
								}
							}
							else if (iLocal_2037 == 2)
							{
								if (iLocal_2038 == 0)
								{
									StringCopy(&Var8, "LEM1_HAIR7", 16);
								}
								else if (iLocal_2038 == 1)
								{
									StringCopy(&Var8, "LEM1_HAIR8", 16);
								}
								else if (iLocal_2038 == 2)
								{
									StringCopy(&Var8, "LEM1_HAIR9", 16);
								}
							}
							if (GlobalFunc_10618(&Local_844, cLocal_349, &Var8, 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(3f, 4f, 4);
								iLocal_130[46] = 1;
							}
						}
						else
						{
							iLocal_130[46] = 1;
						}
					}
					else if (!iLocal_130[47])
					{
						if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_TOGUN", 7, 0, 0, 0))
						{
							iLocal_130[47] = 1;
						}
					}
				}
			}
		}
		else
		{
			if (((!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_396) < 1600f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_793, 1)) < 400f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_806, 1)) < 400f)
			{
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
				}
				if (!iLocal_130[48])
				{
					if (GlobalFunc_10618(&Local_844, cLocal_349, "LEM1_PRESHOP", 7, 0, 0, 0))
					{
						iLocal_130[48] = 1;
					}
					else
					{
						GlobalFunc_5105();
					}
				}
			}
			else if (iLocal_130[46])
			{
				if (!GlobalFunc_620())
				{
					GlobalFunc_619(1);
				}
			}
			func_152();
		}
		if (HUD::DOES_BLIP_EXIST(Local_819.f_5))
		{
			HUD::SET_BLIP_ALPHA(Local_819.f_5, 0);
			if (!HUD::DOES_BLIP_EXIST(uLocal_399))
			{
				uLocal_399 = GlobalFunc_5104(Local_396, 0);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uLocal_399))
		{
			HUD::REMOVE_BLIP(&uLocal_399);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 16.6939f, -1117.037f, 28.79683f, 18.68997f, -1111.739f, 31.79702f, 3.5f, 0, 1, 0) || GlobalFunc_8419(28))
		{
			if (HUD::DOES_BLIP_EXIST(Local_819.f_5) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_2036 = 2;
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 17.2f, -1114.9f, 29.6f) < 22500f)
		{
			func_127(6, 0f, 0f, 0f, 0, 0);
			STREAMING::REQUEST_ANIM_DICT(sLocal_348);
			GlobalFunc_5798(28);
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 17.2f, -1114.9f, 29.6f) > 40000f)
		{
			if (iLocal_738 != 0)
			{
				if (INTERIOR::IS_INTERIOR_READY(iLocal_738))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_738);
					iLocal_738 = 0;
				}
			}
			STREAMING::REMOVE_ANIM_DICT(sLocal_348);
			GlobalFunc_5782(28);
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 16.6953f, -1116.361f, 28.7962f) < 400f)
		{
			CUTSCENE::REQUEST_CUTSCENE("lam_1_mcs_3", 8);
			STREAMING::_0xF8155A7F03DDFC8E(1);
			func_34("lam_1_mcs_3");
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 16.6953f, -1116.361f, 28.7962f) > 900f)
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		switch (iLocal_327)
		{
			case 0:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_AMMUNATION"))
					{
						AUDIO::START_AUDIO_SCENE("LAMAR_1_GO_TO_AMMUNATION");
					}
				}
				else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LAMAR_1_GO_TO_AMMUNATION"))
				{
					AUDIO::STOP_AUDIO_SCENE("LAMAR_1_GO_TO_AMMUNATION");
				}
				break;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 17.63481f, -1113.574f, 29.81434f, 1.5f, 1.25f, 1f, 0, 1, 0))
			{
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(21.2064f, -1104.568f, 29.6342f, 21.0047f, -1105.253f, 29.5447f, 0, 1, joaat("weapon_pistol"), PLAYER::PLAYER_PED_ID(), 0, 0, -1082130432);
				func_585(9);
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 17.25297f, -1116.788f, 30.29677f, 10f, 8f, 2.75f, 0, 1, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
		}
	}
	if (iLocal_2036 == 2)
	{
		HUD::CLEAR_PRINTS();
		func_207();
		GlobalFunc_5652(&Local_819, 1, 0);
		GlobalFunc_5105();
		bLocal_107 = false;
		iLocal_2036 = 0;
		iLocal_2035 = 2;
	}
	if (iLocal_2036 == 3)
	{
		func_645(2, 0);
	}
}

int func_519()//Position - 0x482DA
{
	if (GlobalFunc_892(7, 0))
	{
		if (GlobalFunc_8315() == 1)
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.FRANKLIN_ORIGINAL_OUTFIT_ID == -1)
			{
				return 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (func_520(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.COMPONENTS_ARRAY.FRANKLIN_ORIGINAL_OUTFIT_ID)
				{
					GlobalFunc_2196(7, 1, 0);
				}
				else
				{
					GlobalFunc_2196(7, 1, 1);
				}
			}
		}
		return GlobalFunc_892(7, 1);
	}
	return 0;
}

int func_520(int iParam0)//Position - 0x48341
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_521(iParam0, 3, -1);
	iVar1 = func_521(iParam0, 4, -1);
	return (iVar0 + iVar1 * 100);
}

int func_521(int iParam0, int iParam1, int iParam2)//Position - 0x48364
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_524(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_524(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return GlobalFunc_7614(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_7054(iParam0, iParam1);
		}
	}
	return -99;
}



int func_524(int iParam0, int iParam1, int iParam2)//Position - 0x484AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { func_47(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_524(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_524(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { func_47(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_524(iParam0, 14, iVar4))
										{
											if (!GlobalFunc_8307(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_68106[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = GlobalFunc_7054(iParam0, iVar2);
						Global_68106[2 /*14*/] = { func_47(iVar0, iVar2, iVar1) };
						if (!GlobalFunc_8307(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_68106[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar32 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_524(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_4 || Global_68106[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
	{
		return 1;
	}
	return 0;
}













int func_537(int iParam0, int iParam1)//Position - 0x4C290
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!func_538(iVar0, 0))
	{
		return 2;
	}
	iVar1 = func_521(iParam0, iParam1, -1);
	if (iVar1 == -99)
	{
		return 0;
	}
	Global_68106[1 /*14*/] = { func_47(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iVar1) };
	return Global_68106[1 /*14*/];
}

int func_538(int iParam0, bool bParam1)//Position - 0x4C2E5
{
	if (bParam1)
	{
		if ((iParam0 == joaat("player_zero") || iParam0 == joaat("player_one")) || iParam0 == joaat("player_two"))
		{
			return 1;
		}
	}
	else if ((((iParam0 == joaat("player_zero") || iParam0 == joaat("player_one")) || iParam0 == joaat("player_two")) || iParam0 == joaat("mp_m_freemode_01")) || iParam0 == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}




void func_542()//Position - 0x4C42F
{
	bool bVar0;
	struct<3> Var1;
	int iVar4[1];
	int iVar6;
	int iVar7;
	
	if (iLocal_2036 == 0)
	{
		if (iLocal_56)
		{
			iLocal_56 = 0;
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE(sLocal_351, 8);
			func_34(sLocal_351);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			func_580();
			if (iLocal_278 < 99)
			{
				GlobalFunc_2536(1, 0);
				GlobalFunc_10639(47, 4);
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					STREAMING::REQUEST_ANIM_DICT(sLocal_352);
					STREAMING::REQUEST_MODEL(iLocal_2061);
					if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_343))
					{
						OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_343, joaat("v_ilev_fa_frontdoor"), -14.8689f, -1441.182f, 31.1932f, 1, 1, 0);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_757))
					{
						iLocal_757 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-14.8689f, -1441.182f, 31.1932f, 1f, joaat("v_ilev_fa_frontdoor"), 1, 0, 1);
					}
					if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_757) && OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_343)) && STREAMING::HAS_MODEL_LOADED(iLocal_2061)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_352)) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
					{
						if (GlobalFunc_7091(0f, 0f, 0f, 1))
						{
							GlobalFunc_10735(-3.2086f, -1465.918f, 29.4404f, 274.0793f, 0, 145);
						}
						GlobalFunc_10063(-16.0756f, -1468.569f, 29.09881f, -17.91556f, -1431.504f, 36.0524f, 20f, -3.2086f, -1465.918f, 29.4404f, 274.0793f, GlobalFunc_625(), 1, 1, 1, 0, 0);
						Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						if (Var1.f_2 > 31f)
						{
							bVar0 = true;
						}
						else
						{
							bVar0 = false;
						}
						if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_343) != 1f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_343) != 4)
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_343, 1f, 0, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_343, 4, 0, 1);
						}
						ENTITY::SET_ENTITY_VISIBLE(iLocal_757, false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						uLocal_340 = PED::CREATE_SYNCHRONIZED_SCENE(-14.862f, -1441.208f, 31.18f, 0f, 0f, 180f, 2);
						iLocal_756 = OBJECT::CREATE_OBJECT(iLocal_2061, -14.8689f, -1441.182f, 31.1932f, 1, 1, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2061);
						uLocal_400 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -7.205015f, -1471.655f, 31.16142f, 9.377599f, 0f, 11.4737f, 38.5265f, 1, 2);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						HUD::DISPLAY_HUD(0);
						HUD::DISPLAY_RADAR(0);
						GlobalFunc_8316(1, 1, 1, 0);
						PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
						if (!GlobalFunc_Is_Mission_Retry())
						{
							if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_2251()) && !ENTITY::IS_ENTITY_DEAD(GlobalFunc_2251()))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(GlobalFunc_2251(), 1, 1);
							}
						}
						MISC::CLEAR_AREA_OF_PEDS(-17.1615f, -1439.018f, 30.1015f, 400f, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(-17.1615f, -1439.018f, 30.1015f, 400f, 1, 0, 0, 0, 0);
						MISC::CLEAR_AREA_OF_OBJECTS(-17.1615f, -1439.018f, 30.1015f, 400f, 0);
						MISC::CLEAR_AREA_OF_PROJECTILES(-17.1615f, -1439.018f, 30.1015f, 400f, 0);
						GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-17.1615f, -1439.018f, 30.1015f, 50f);
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_340, sLocal_352, "franklin_enters_old_home", 1000f, -1000f, 4, 512, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_756, uLocal_340, "franklin_enters_old_home_door", sLocal_352, 1000f, 1090519040, 0, 1148846080);
						if (bVar0)
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_340, 0.3f);
						}
						else
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_340, 0.15f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_756);
						GRAPHICS::_0x0AE73D8DF3A762B2(0);
						GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
						GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
						iLocal_122 = 0;
						SYSTEM::SETTIMERB(0);
						iLocal_278 = 99;
					}
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_278 = 99;
				}
			}
			else if (iLocal_278 == 99)
			{
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("LAMAR1_INT", 0);
				if (!iLocal_122)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_340) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_340) > 0.67f)
					{
						CAM::DESTROY_ALL_CAMS(0);
						uLocal_400 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -7.205015f, -1471.655f, 31.16142f, 9.377599f, 0f, 11.4737f, 38.5265f, 1, 2);
						iLocal_122 = 1;
					}
				}
				if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_343) != 1f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_343) != 4)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_343, 1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_343, 4, 0, 1);
				}
				if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_340) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_340) > 0.85f) || (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_340) && SYSTEM::TIMERB() > 5000)) || CAM::IS_SCREEN_FADED_OUT())
				{
					if (func_549(43, &uLocal_1009, 1, 0, 0, 0, 1))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "LAMAR1_PARTYGIRLS_master", 0, 1);
						SYSTEM::SETTIMERB(0);
						iLocal_278++;
					}
				}
				if (GlobalFunc_4926(1000))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(800);
					}
				}
			}
			else if (iLocal_278 == 100)
			{
				if (SYSTEM::TIMERB() > 2500 || CAM::IS_SCREEN_FADED_OUT())
				{
					iLocal_278++;
				}
			}
			else if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				func_127(4, 0f, 0f, 0f, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_793, "Lamar", 2, GlobalFunc_4946(19), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_806, "Stretch", 2, GlobalFunc_4946(37), 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				GlobalFunc_8316(1, 1, 1, 0);
				GlobalFunc_2201(48, 1);
				bLocal_96 = false;
				iLocal_57 = 0;
				iLocal_278 = 0;
				iLocal_2036 = 1;
			}
		}
	}
	if (iLocal_2036 == 1)
	{
		if (!iLocal_57)
		{
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
				iLocal_57 = 1;
			}
		}
		switch (iLocal_278)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_545(&uLocal_1009, 0, 0, 2000, 1, 1, 0, 1);
					func_629(PLAYER::PLAYER_PED_ID(), 12, 20, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
					GRAPHICS::_0x0AE73D8DF3A762B2(1);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
					bLocal_96 = true;
					if (CAM::DOES_CAM_EXIST(uLocal_400))
					{
						CAM::DESTROY_ALL_CAMS(0);
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					}
					GlobalFunc_2206(&iLocal_756, 1);
					STREAMING::REMOVE_ANIM_DICT(sLocal_352);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_757))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_757, true);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_757);
					}
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_343))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_343, 0f, 0, 1);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_343, 0, 0, 1);
					}
					GlobalFunc_562(43);
					MISC::CLEAR_AREA_OF_PEDS(-12.7896f, -1458.157f, 29.4592f, 200f, 0);
					GlobalFunc_2204();
					iLocal_278++;
				}
				break;
			
			case 1:
				if (bLocal_96)
				{
					func_358(-12.7896f, -1458.157f, 29.4592f, 273.6953f, 0);
				}
				break;
		}
		PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &iVar4);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_775))
		{
			iVar4[0] = iLocal_775;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_793))
		{
			iVar6 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar6))
			{
				Local_793 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar6);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_806))
		{
			iVar7 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Stretch", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				Local_806 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7);
			}
		}
		if (!PED::IS_PED_INJURED(Local_793))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_793, 1f);
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", ENTITY::GET_ENTITY_MODEL(Local_793)))
			{
				ENTITY::SET_ENTITY_COORDS(Local_793, -10.151f, -1456.463f, 29.4131f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_793, 212.6173f);
				PED::SET_PED_COMPONENT_VARIATION(Local_793, 1, 1, 0, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4[0], 0) && GlobalFunc_634(iVar4[0], &Local_819, 2))
				{
					TASK::TASK_ENTER_VEHICLE(Local_793, iVar4[0], 20000, 0, 1f, 1, 0);
				}
				PED::FORCE_PED_MOTION_STATE(Local_793, -668482597, 1, 1, 0);
			}
		}
		if (!PED::IS_PED_INJURED(Local_806))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_806, 1f);
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Stretch", 0))
			{
				PED::SET_PED_PROP_INDEX(Local_806, 0, 0, 0, false);
				PED::SET_PED_COMPONENT_VARIATION(Local_806, 8, 0, 0, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4[0], 0) && GlobalFunc_634(iVar4[0], &Local_819, 2))
				{
					ENTITY::SET_ENTITY_COORDS(Local_806, -13.9305f, -1454.985f, 29.4717f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_806, 130.2734f);
					TASK::TASK_ENTER_VEHICLE(Local_806, iVar4[0], 20000, 1, 1f, 1, 0);
				}
				PED::FORCE_PED_MOTION_STATE(Local_806, -668482597, 1, 1, 0);
			}
			PED::SET_PED_RESET_FLAG(Local_806, 71, 1);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
		{
			if (!iLocal_57)
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, -157f, 0, 0);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0) || iLocal_57)
		{
			RECORDING::_0x81CBAE94390F9F89();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_2036 = 2;
		}
	}
	if (iLocal_2036 == 2)
	{
		GlobalFunc_2206(&iLocal_756, 1);
		STREAMING::REMOVE_ANIM_DICT(sLocal_352);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("LAMAR1_INT");
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_757))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_757, true);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_757);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_343))
		{
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_343) != 0)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_343, 0, 0, 1);
			}
		}
		if (iLocal_739 != 0)
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_739))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_739);
				iLocal_739 = 0;
			}
		}
		if (iLocal_57)
		{
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -14.2794f, -1453.471f, 29.5179f, 0, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 201.1911f);
			while (!func_127(0, -9.5493f, -1458.85f, 29.5055f, 133.2693f, 0) || !func_127(1, -12.313f, -1452.996f, 29.5358f, 178.3208f, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (bLocal_96)
			{
				while (!func_358(-12.7896f, -1458.157f, 29.4592f, 273.6953f, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
			if (!PED::IS_PED_INJURED(Local_793))
			{
				ENTITY::SET_ENTITY_COORDS(Local_793, -11.2779f, -1455.201f, 29.5488f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_793, 158.1405f);
			}
			if (!PED::IS_PED_INJURED(Local_806))
			{
				ENTITY::SET_ENTITY_COORDS(Local_806, -14.3457f, -1456.429f, 29.4137f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_806, -166.9394f);
			}
			while ((ENTITY::DOES_ENTITY_EXIST(Local_793) && !PED::IS_PED_INJURED(Local_793)) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_793))
			{
				SYSTEM::WAIT(0);
			}
			while ((ENTITY::DOES_ENTITY_EXIST(Local_806) && !PED::IS_PED_INJURED(Local_806)) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_806))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::WAIT(0);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 750, -157f, 0, 0);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
		func_127(0, -9.5493f, -1458.85f, 29.505f, 133.2693f, 0);
		func_127(1, -14.6866f, -1455.347f, 29.4362f, 212.5621f, 0);
		HUD::DISPLAY_HUD(1);
		HUD::DISPLAY_RADAR(1);
		GlobalFunc_8316(0, 1, 1, 0);
		iLocal_278 = 0;
		iLocal_2036 = 0;
		iLocal_2035 = 1;
	}
	if (iLocal_2036 == 3)
	{
		GlobalFunc_2195();
		CUTSCENE::STOP_CUTSCENE(0);
		iLocal_57 = 1;
		iLocal_2036 = 1;
	}
}



void func_545(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x4CFC1
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(1);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 0);
			}
			CAM::DESTROY_CAM(uParam0->f_4, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	GlobalFunc_8316(bParam1, 1, 0, 0);
	GlobalFunc_737();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 != -15)
		{
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_7719();
		}
	}
}




bool func_549(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x4D1DA
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_550(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_550(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x4D208
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	
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
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false);
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
				}
			}
			fVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			func_545(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false);
					}
					iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 0);
						}
						ENTITY::SET_ENTITY_VISIBLE(iVar2, false);
					}
				}
				fVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				GlobalFunc_7641(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				func_545(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false);
				}
				iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar4, false);
				}
			}
			fVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			func_545(uParam0, 1, 0, 2000, 1, 1, 0, 1);
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
			if (GlobalFunc_9141(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
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
		else if (GlobalFunc_9141(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
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
					GlobalFunc_9141(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
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






























int func_580()//Position - 0x4FB50
{
	if (iLocal_739 == 0)
	{
		iLocal_739 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-14.4f, -1437f, 31.5f, "v_franklins");
	}
	else if (INTERIOR::IS_INTERIOR_READY(iLocal_739))
	{
		return 1;
	}
	else
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_739);
	}
	return 0;
}





void func_585(int iParam0)//Position - 0x4FD2C
{
	if (!iLocal_69)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		func_207();
		GlobalFunc_5652(&Local_819, 1, 0);
		GlobalFunc_4935();
		if (iParam0 == 0)
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
		}
		switch (iParam0)
		{
			case 0:
				sLocal_357 = "";
				break;
			
			case 1:
				sLocal_357 = "LEM1_LEMDEAD";
				break;
			
			case 2:
				sLocal_357 = "LEM1_STRETDEAD";
				break;
			
			case 5:
				sLocal_357 = "LEM1_ABLAMAR";
				break;
			
			case 6:
				sLocal_357 = "LEM1_ABSTRETCH";
				break;
			
			case 7:
				sLocal_357 = "LEM1_ABBOTH";
				break;
			
			case 9:
				sLocal_357 = "LEM1_FAILSHOP";
				break;
			
			case 3:
				sLocal_357 = "CMN_GENDEST";
				break;
			
			case 4:
				sLocal_357 = "LEM1_FRASTUCK";
				break;
			
			case 8:
				sLocal_357 = "LEM1_BOTHDEAD";
				break;
			
			case 10:
				sLocal_357 = "LEM1_MISSDEAL";
				break;
			
			case 11:
				sLocal_357 = "LEM1_ABANCAR";
				break;
			
			case 12:
				sLocal_357 = "LEM1_NOMON";
				break;
		}
		iLocal_69 = 1;
	}
	AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_MISSION_FAIL");
	GlobalFunc_10835(sLocal_357);
	while (!GlobalFunc_145())
	{
		if (iLocal_2035 == 6 || iLocal_2035 == 7)
		{
			func_299(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		}
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_793))
	{
		if (PED::IS_PED_GROUP_MEMBER(Local_793, GlobalFunc_468()) || GlobalFunc_2227(PLAYER::PLAYER_PED_ID(), Local_793))
		{
			func_258(&Local_793, 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_806))
	{
		if (PED::IS_PED_GROUP_MEMBER(Local_806, GlobalFunc_468()) || GlobalFunc_2227(PLAYER::PLAYER_PED_ID(), Local_806))
		{
			func_258(&Local_806, 1);
		}
	}
	if ((iLocal_2035 == 6 || iLocal_2035 == 7) || (iLocal_2035 == 4 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -612.8f, -1619f, 28.6f) < 400f))
	{
		GlobalFunc_5129(-664.9598f, -1645.187f, 23.9818f, 283.7155f);
	}
	else if (iLocal_2035 == 3)
	{
		GlobalFunc_5129(15.9802f, -1119.646f, 27.8296f, 192.4578f);
	}
	func_657();
}












void func_597(bool bParam0)//Position - 0x50E04
{
	func_132(29, bParam0, 0);
	func_132(30, bParam0, 0);
	func_132(31, bParam0, 0);
	func_132(32, bParam0, 0);
	func_132(33, bParam0, 0);
	func_132(34, bParam0, 0);
	func_132(35, bParam0, 0);
	func_132(36, bParam0, 0);
	func_132(37, bParam0, 0);
}


void func_599(int iParam0, bool bParam1)//Position - 0x50E6D
{
	if (bParam1)
	{
		if (!GlobalFunc_7782(iParam0, 14, 1))
		{
			func_138(iParam0, 14, 1);
		}
	}
	else if (GlobalFunc_7782(iParam0, 14, 1))
	{
		func_134(iParam0, 14, 1);
	}
}

void func_600(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x50EA8
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
			iVar5 = GlobalFunc_7703(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
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
		func_601(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_Current_Checkpoint)
	{
	}
}

void func_601(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x51020
{
	func_602(&Global_93588, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_602(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x5103C
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_7719();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_612(&(uParam0->f_2161), 0);
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
			GlobalFunc_8576(PLAYER::PLAYER_PED_ID(), &(uParam0->f_472[iVar1 /*65*/]), 1);
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
		GlobalFunc_9750(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	GlobalFunc_542(&(uParam0->f_2233));
	uParam3 = uParam3;
	uParam2 = uParam2;
}










void func_612(var uParam0, int iParam1)//Position - 0x52D85
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (MISC::IS_BIT_SET(Global_68493, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (MISC::IS_BIT_SET(Global_68493, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (MISC::IS_BIT_SET(Global_68493, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (MISC::IS_BIT_SET(Global_68493, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_615(&iVar0))
		{
			if (GlobalFunc_5109(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = GlobalFunc_8315();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (GlobalFunc_545(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}



int func_615(var uParam0)//Position - 0x5397C
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_490())
		{
			*uParam0 = func_616(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 5, -1, 0, 1);
			if (GlobalFunc_8419(*uParam0) && !GlobalFunc_8555(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_616(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x539D5
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (iParam3 == 5 || iParam3 == GlobalFunc_330(iVar0))
		{
			if (!bParam5 || GlobalFunc_8493(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, GlobalFunc_546(iVar0), 1);
				if ((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}













int func_629(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x55CA7
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
		Global_68106[1 /*14*/] = { func_47(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		func_642(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_7054(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7054(iParam0, 9);
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
			iVar7 = GlobalFunc_7614(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7614(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7614(iParam0, 2);
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
				Global_68106[1 /*14*/] = { func_47(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { func_47(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							func_642(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_635(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_629(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						func_642(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_635(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_629(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { func_47(iVar10, iVar0, func_521(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_634(iParam0, iVar10, &iVar4, 1))
							{
								func_629(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_629(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { func_47(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_629(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_47(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_629(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_47(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_629(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_47(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_629(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_47(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_629(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { func_47(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			func_642(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_635(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_629(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		func_642(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_635(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_629(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_635(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_629(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_631(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (func_634(iParam0, iVar10, &iVar4, 0))
		{
			func_629(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_630(iParam0, iVar10, &iVar4))
		{
			func_629(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_630(int iParam0, int iParam1, int iParam2)//Position - 0x56494
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_524(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

void func_631(int iParam0, int iParam1, int iParam2)//Position - 0x56520
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_633(iParam0, 12, iVar0))
	{
		if (GlobalFunc_20(iParam0, iParam1, iParam2))
		{
			iVar1 = GlobalFunc_19(iParam0);
			if (iParam1 == 3)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_200[iVar1] = iParam2;
			}
		}
	}
}


bool func_633(int iParam0, int iParam1, int iParam2)//Position - 0x56688
{
	Global_68106[1 /*14*/] = { func_47(iParam0, iParam1, iParam2) };
	return MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 2);
}

int func_634(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x566B2
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_524(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_635(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x56748
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
				iVar1 = GlobalFunc_7054(iParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_7054(iParam0, 2);
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
									if (!GlobalFunc_7935(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_7935(iParam0, 3, 135, 150))
									{
										iVar0 = func_638(iParam1, 3, 135, 150);
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
									if (!GlobalFunc_7935(iParam0, 3, 209, 222))
									{
										iVar0 = func_638(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_7935(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_638(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_638(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_638(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_638(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!GlobalFunc_7935(iParam0, 3, 176, 191) && !GlobalFunc_7935(iParam0, 3, 227, 242))
									{
										iVar0 = func_638(iParam1, 3, 176, 191);
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
								iVar4 = GlobalFunc_7054(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_7054(iParam0, 11);
								iVar5 = func_637(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_7054(iParam0, 8);
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
								iVar7 = GlobalFunc_7054(iParam0, 8);
								iVar8 = GlobalFunc_7054(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_637(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_637(iParam1, iParam3, iVar8, 1);
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
								iVar9 = GlobalFunc_7054(iParam0, 11);
								iVar0 = func_637(iParam1, -99, iVar9, 0);
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


int func_637(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x575DF
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_638(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_638(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_638(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x578A6
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_633(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}




void func_642(int iParam0)//Position - 0x57BF9
{
	if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1) && !MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6))
	{
		GlobalFunc_31(iParam0, Global_68106[1 /*14*/].f_5, Global_68106[1 /*14*/].f_2, 2, Global_68106[1 /*14*/].f_1, 1, 0);
	}
	if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_643(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_643(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_643(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_643(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x57CB1
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_68104;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (GlobalFunc_30(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = GlobalFunc_6872(iVar2, iVar0, 0);
		MISC::SET_BIT(&uVar3, iVar1);
		func_135(iVar2, uVar3, iVar0, 1);
	}
}


void func_645(int iParam0, bool bParam1)//Position - 0x57D4B
{
	GlobalFunc_2195();
	iLocal_56 = 1;
	iLocal_278 = 0;
	iLocal_2035 = iParam0;
	iLocal_2036 = 0;
	func_657();
	if (bParam1)
	{
		if (iLocal_2035 >= 8)
		{
			func_600(5, "LOSE_COPS", 1, 0, 0, 1);
		}
		else if (iLocal_2035 >= 7)
		{
			func_600(4, "ESCAPE_FROM_WAREHOUSE", 0, 0, 0, 1);
		}
		else if (iLocal_2035 >= 6)
		{
			func_600(3, "ESCAPE_PRE_WAREHOUSE", 0, 0, 0, 1);
		}
		else if (iLocal_2035 >= 4)
		{
			func_600(2, "GO_TO_PLANT", 0, 0, 0, 1);
		}
		else if (iLocal_2035 >= 3)
		{
			func_600(1, "BUY_GRENADES", 0, 0, 0, 1);
		}
		else
		{
			func_600(0, "GO_TO_GUN_SHOP", 0, 0, 0, 1);
		}
	}
}



void func_648()//Position - 0x57E3E
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	HUD::REQUEST_ADDITIONAL_TEXT("LEM1", 0);
	PED::ADD_RELATIONSHIP_GROUP("SWAT", &iLocal_2062);
	PED::ADD_RELATIONSHIP_GROUP("DRIVERS", &iLocal_2063);
	PED::ADD_RELATIONSHIP_GROUP("BIKERS", &iLocal_2064);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_2062);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_2062, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2062, iLocal_2062);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2062, iLocal_2063);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_2062, iLocal_2064);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2063, iLocal_2062);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2063, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2063, iLocal_2063);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_2064, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_2064, iLocal_2062);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_2064, iLocal_2064);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_2060, 1);
	GlobalFunc_7934(3, 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-73.97455f, -1548.606f, 23.77007f, 7.875402f, -1450.704f, 39.28674f, 126.75f, 0, 0, 1);
	PATHFIND::SET_ROADS_IN_AREA(-672.15f, -1670.86f, 18.61f, -410.67f, -1748.43f, 26.83f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(17.2f, -1115.4f, 20f, 50f, -1083.3f, 40f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-630f, -1617f, 20f, -600f, -1590f, 40f, 0, 1);
	GlobalFunc_173(&Local_844, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	GlobalFunc_4927(2, 0);
	GlobalFunc_4927(3, 1);
	func_649(28, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_289)
	{
		iLocal_289[iVar0] = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
	iLocal_303 = AUDIO::GET_SOUND_ID();
	Global_85393 = 3;
	iLocal_93 = 0;
	bLocal_109 = GlobalFunc_8493(29);
	iLocal_320 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID());
	uLocal_2065[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-572.7031f, -1672.008f, 0f, -509.0245f, -1618.39f, 34.451f, 0, 1, 1, 1);
	uLocal_2065[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-563.9064f, -1761.471f, 0f, -384.2186f, -1635.013f, 34.451f, 0, 1, 1, 1);
	uLocal_2065[2] = PED::ADD_SCENARIO_BLOCKING_AREA(-697.5707f, -1686.845f, 0.0951f, -584.6719f, -1596.81f, 60.0951f, 0, 1, 1, 1);
	uLocal_2069 = PED::ADD_SCENARIO_BLOCKING_AREA(4.3425f, -1128.468f, 0.0951f, 38.8711f, -1098.105f, 60.0951f, 0, 1, 1, 1);
}

void func_649(int iParam0, bool bParam1)//Position - 0x580EB
{
	if (bParam1)
	{
		if (!GlobalFunc_7782(iParam0, 4, 0))
		{
			func_138(iParam0, 4, 0);
		}
	}
	else if (GlobalFunc_7782(iParam0, 4, 0))
	{
		func_134(iParam0, 4, 0);
	}
}








void func_657()//Position - 0x59028
{
	int iVar0[5];
	bool bVar6;
	int iVar7;
	int iVar8;
	
	HUD::CLEAR_HELP(1);
	GlobalFunc_5385(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	GlobalFunc_7632(0);
	GlobalFunc_5652(&Local_819, 1, 0);
	GlobalFunc_8316(0, 1, 1, 0);
	GlobalFunc_4503(0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(8, 1);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(6, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	PED::SET_CREATE_RANDOM_COPS(1);
	PLAYER::SET_POLICE_RADAR_BLIPS(1);
	MISC::SET_FAKE_WANTED_LEVEL(0);
	CLOCK::PAUSE_CLOCK(0);
	STREAMING::NEW_LOAD_SCENE_STOP();
	GlobalFunc_601(9, 0);
	GlobalFunc_601(8, 0);
	if (iLocal_119)
	{
		iLocal_119 = 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), 1);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, 0);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		PLAYER::SET_PLAYER_SPRINT(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_RADAR_BLIPS(1);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		if (iLocal_56)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
	else if (iLocal_2035 == 6 || iLocal_2035 == 7)
	{
		bVar6 = false;
		if (!PED::IS_PED_INJURED(Local_793))
		{
			PED::GET_PED_NEARBY_PEDS(Local_793, &iVar0, -1);
		}
		iVar7 = 0;
		iVar7 = 0;
		while (iVar7 < iVar0)
		{
			if (!PED::IS_PED_INJURED(iVar0[iVar7]))
			{
				if ((iVar0[iVar7] != Local_793 && iVar0[iVar7] != Local_806) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar7]) == iLocal_2062)
				{
					bVar6 = true;
				}
			}
			iVar7++;
		}
		if (!PED::IS_PED_INJURED(Local_793) && !PED::IS_PED_IN_COMBAT(Local_793, 0))
		{
			if (!iLocal_61)
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_793, -8f, 1);
				if (bVar6)
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_793, 100f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(Local_793, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 200f, -1, 0, 0);
				}
				PED::SET_PED_KEEP_TASK(Local_793, 1);
			}
			else
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_793, 0);
				PED::SET_PED_TO_RAGDOLL(Local_793, 1000, 2000, 2, 1, 1, 0);
				PED::APPLY_DAMAGE_TO_PED(Local_793, ENTITY::GET_ENTITY_HEALTH(Local_793) + 50, 1);
			}
		}
		if (!PED::IS_PED_INJURED(Local_806) && !PED::IS_PED_IN_COMBAT(Local_806, 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_806, 0);
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_806, -8f, 1);
			if (bVar6)
			{
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_806, 100f, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(Local_806, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 200f, -1, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(Local_806, 1);
		}
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_766))
	{
		OBJECT::REMOVE_PICKUP(uLocal_766);
	}
	TASK::REMOVE_COVER_POINT(iLocal_401);
	TASK::REMOVE_COVER_POINT(Local_793.f_2);
	TASK::REMOVE_COVER_POINT(iLocal_402);
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Lemar1");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Lemar2");
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_2049, 0);
	func_599(28, 0);
	GlobalFunc_2201(48, 0);
	iLocal_77 = 0;
	GlobalFunc_200(&Local_844, 5);
	GlobalFunc_200(&Local_844, 6);
	GlobalFunc_200(&Local_844, 7);
	GlobalFunc_200(&Local_844, 3);
	GlobalFunc_200(&Local_844, 4);
	GlobalFunc_200(&Local_844, 8);
	OBJECT::_DOOR_CONTROL(iLocal_2047, Local_378, 0, 0, 0, 0);
	OBJECT::_DOOR_CONTROL(iLocal_2048, Local_381, 0, 0, 0, 0);
	if (iLocal_110)
	{
		OBJECT::_DOOR_CONTROL(joaat("v_ilev_rc_door1"), -603.8043f, -1620.301f, 33.1606f, 0, 0, 0, 0);
		OBJECT::_DOOR_CONTROL(joaat("v_ilev_rc_door1"), -606.3953f, -1620.074f, 33.1606f, 0, 0, 0, 0);
	}
	if (iLocal_737 != 0)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_737))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_737);
			iLocal_737 = 0;
		}
	}
	if (iLocal_738 != 0)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_738))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_738);
			iLocal_738 = 0;
		}
	}
	if (iLocal_739 != 0)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_739))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_739);
			iLocal_739 = 0;
		}
	}
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < iLocal_289)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_289[iVar8]))
		{
			AUDIO::STOP_SOUND(iLocal_289[iVar8]);
		}
		iVar8++;
	}
	if (iLocal_67)
	{
		AUDIO::STOP_AUDIO_SCENE("LAMAR_NPC_RAPPELLING");
		iLocal_67 = 0;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_303))
	{
		AUDIO::STOP_SOUND(iLocal_303);
	}
	GlobalFunc_860();
	AUDIO::TRIGGER_MUSIC_EVENT("LM1_TERMINADOR_MISSION_FAIL");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::SET_AUDIO_FLAG("SpeechDucksScore", 0);
	AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", 0);
	if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
	{
		CUTSCENE::STOP_CUTSCENE(0);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	if (iLocal_56)
	{
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (iLocal_124)
	{
		RECORDING::_0x81CBAE94390F9F89();
		iLocal_124 = 0;
	}
	func_207();
	func_661();
	func_660(iLocal_56);
	func_659(iLocal_56);
	func_658(iLocal_56);
	func_280(1);
	func_264();
	PHYSICS::ROPE_UNLOAD_TEXTURES();
	VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_2049);
	VEHICLE::REMOVE_VEHICLE_ASSET(GlobalFunc_4931(1, 1));
	AUDIO::DISTANT_COP_CAR_SIRENS(0);
	GlobalFunc_563(0);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_343))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_343) != 0)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_343, 0, 0, 1);
		}
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_343);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_757))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_757, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_757);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_344))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_344);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_345))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_345);
	}
	ENTITY::REMOVE_MODEL_HIDE(-614.7736f, -1633.723f, 32.4919f, 2f, joaat("prop_crate_05a"), 1);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	func_278(0);
	iVar8 = 0;
	while (iVar8 < iLocal_770)
	{
		if (iLocal_770[iVar8] != 0)
		{
			PHYSICS::DELETE_ROPE(&(iLocal_770[iVar8]));
			iLocal_770[iVar8] = 0;
		}
		iVar8++;
	}
	if (!iLocal_56)
	{
		GlobalFunc_5661(3, 1);
		GlobalFunc_504(0, -1);
		GlobalFunc_4927(2, 1);
		GlobalFunc_5105();
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-73.97455f, -1548.606f, 23.77007f, 7.875402f, -1450.704f, 39.28674f, 126.75f, 1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-672.15f, -1670.86f, 18.61f, -410.67f, -1748.43f, 26.83f, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_2060, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(17.2f, -1115.4f, 20f, 50f, -1083.3f, 40f, 1, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-630f, -1617f, 20f, -600f, -1590f, 40f, 1, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2065[0], 0);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2065[1], 0);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2065[2], 0);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2069, 0);
		AUDIO::RELEASE_SOUND_ID(iLocal_303);
		BRAIN::_0x6D6840CEE8845831("chop");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		func_277();
		HUD::CLEAR_PRINTS();
		GlobalFunc_4956();
		GlobalFunc_860();
		iLocal_69 = 0;
		Global_85393 = 3;
		iVar8 = 0;
		while (iVar8 < Local_420)
		{
			if (Local_420[iVar8 /*9*/] != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_420[iVar8 /*9*/], 0);
				Local_420[iVar8 /*9*/] = 0;
			}
			Local_420[iVar8 /*9*/].f_1 = 0f;
			iVar8++;
		}
		iVar8 = 0;
		while (iVar8 < Local_556)
		{
			if (Local_556[iVar8 /*9*/] != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_556[iVar8 /*9*/], 0);
				Local_556[iVar8 /*9*/] = 0;
			}
			Local_556[iVar8 /*9*/].f_1 = 0f;
			iVar8++;
		}
		iVar8 = 0;
		while (iVar8 < iLocal_767)
		{
			if (iLocal_767[iVar8] != 0)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_767[iVar8], 0);
				iLocal_767[iVar8] = 0;
			}
			iVar8++;
		}
		if (iLocal_419 != 0)
		{
			GRAPHICS::REMOVE_DECAL(iLocal_419);
			iLocal_419 = 0;
		}
		func_139(28);
		GlobalFunc_10639(103, 1);
		GlobalFunc_10639(104, 1);
		GlobalFunc_10639(101, 1);
		GlobalFunc_10639(102, 1);
		func_315();
		AUDIO::STOP_AUDIO_SCENES();
		GlobalFunc_5782(28);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2041);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2042);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2043);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2044);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2049);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2050);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2052);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2053);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2054);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2055);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2056);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2057);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2060);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2061);
		STREAMING::REMOVE_ANIM_DICT(sLocal_348);
		STREAMING::REMOVE_ANIM_DICT(sLocal_347);
		STREAMING::REMOVE_ANIM_DICT(sLocal_358);
		STREAMING::REMOVE_ANIM_DICT(sLocal_359);
		STREAMING::REMOVE_ANIM_DICT(sLocal_352);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_355);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_354);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_356);
		STREAMING::REMOVE_PTFX_ASSET();
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_763[0]))
		{
			OBJECT::REMOVE_PICKUP(uLocal_763[0]);
		}
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_763[1]))
		{
			OBJECT::REMOVE_PICKUP(uLocal_763[1]);
		}
		MISC::CLEAR_AREA(0f, 0f, 0f, 10000f, 1, 1, 0, 0);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(0f, 0f, 0f, 10000f);
	}
}

void func_658(bool bParam0)//Position - 0x598DC
{
	int iVar0;
	
	func_257(&iLocal_775, bParam0);
	func_257(&iLocal_776, bParam0);
	func_257(&iLocal_778, bParam0);
	func_257(&iLocal_779, bParam0);
	func_257(&iLocal_780, bParam0);
	func_257(&iLocal_781, bParam0);
	func_257(&uLocal_785, bParam0);
	func_257(&iLocal_777, bParam0);
	func_257(&iLocal_790, bParam0);
	func_257(&iLocal_791, bParam0);
	if (bParam0)
	{
		func_257(&iLocal_792, bParam0);
	}
	func_257(&iLocal_789, bParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_782)
	{
		func_257(&(iLocal_782[iVar0]), 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_786)
	{
		func_257(&(iLocal_786[iVar0]), 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_728)
	{
		func_257(&(Local_728[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
}

void func_659(bool bParam0)//Position - 0x599B9
{
	if (!iLocal_93)
	{
		if (!(iLocal_61 && !bParam0))
		{
			func_258(&Local_793, bParam0);
		}
		func_258(&Local_806, bParam0);
	}
	func_258(&iLocal_758, bParam0);
	func_258(&iLocal_759, bParam0);
	func_258(&iLocal_760, bParam0);
	func_258(&iLocal_761, bParam0);
	func_258(&(Global_86864.f_9[0]), 1);
	func_258(&(Global_86864.f_9[1]), 1);
	func_258(&(Global_86864.f_9[2]), 1);
	func_258(&(Global_86864.f_9[3]), 1);
	func_150(&Local_1021, bParam0);
	func_150(&Local_1072, bParam0);
	func_150(&Local_1123, bParam0);
	func_150(&Local_1199, bParam0);
	func_150(&Local_1325, bParam0);
	func_150(&Local_1426, bParam0);
	func_150(&Local_1703, bParam0);
	func_150(&Local_1754, bParam0);
	func_150(&Local_1552, bParam0);
	func_150(&Local_1780, bParam0);
	func_150(&Local_1856, bParam0);
	func_150(&Local_1882, bParam0);
	func_150(&Local_1933, bParam0);
	func_150(&Local_1984, bParam0);
}

void func_660(bool bParam0)//Position - 0x59AC1
{
	int iVar0;
	
	GlobalFunc_2206(&iLocal_740, bParam0);
	GlobalFunc_2206(&iLocal_741, bParam0);
	GlobalFunc_2206(&iLocal_745, 0);
	GlobalFunc_2206(&iLocal_756, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_746)
	{
		GlobalFunc_2206(&(iLocal_746[iVar0]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_751)
	{
		GlobalFunc_2206(&(iLocal_751[iVar0]), bParam0);
		iVar0++;
	}
}

void func_661()//Position - 0x59B33
{
	CAM::DESTROY_ALL_CAMS(0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
}






