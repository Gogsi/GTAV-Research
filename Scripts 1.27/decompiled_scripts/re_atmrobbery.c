#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
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
	struct<4> Local_48[10];
	bool bLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	int iLocal_93 = 0;
	struct<3> Local_94 = { 0, 0, 0 } ;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	struct<3> Local_117 = { 0, 0, 0 } ;
	struct<3> Local_120 = { 0, 0, 0 } ;
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	struct<3> Local_125 = { 0, 0, 0 } ;
	struct<3> Local_128 = { 0, 0, 0 } ;
	bool bLocal_131 = 0;
	int iLocal_132 = 0;
	float fLocal_133 = 0f;
	float fLocal_134 = 0f;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 0;
	bool bLocal_141 = 0;
	int iLocal_142 = 0;
	char[] cLocal_143[8] = 0;
	char[] cLocal_144[8] = 0;
	char* sLocal_145 = NULL;
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	bool bLocal_150 = 0;
	bool bLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	struct<10> Local_158[16];
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	char* sLocal_323 = NULL;
	char* sLocal_324 = NULL;
	char* sLocal_325 = NULL;
	char* sLocal_326 = NULL;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	char[] cLocal_331[8] = 0;
	char* sLocal_332 = NULL;
	char* sLocal_333 = NULL;
	char[] cLocal_334[8] = 0;
	char* sLocal_335 = NULL;
	char* sLocal_336 = NULL;
	int iLocal_337 = 0;
	bool bLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	bool bLocal_341 = 0;
	int iLocal_342 = 0;
	float fLocal_343 = 0f;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	struct<3> Local_347 = { 0, 0, 0 } ;
	struct<3> Local_350 = { 0, 0, 0 } ;
	struct<3> Local_353 = { 0, 0, 0 } ;
	float fLocal_356 = 0f;
	struct<3> Local_357 = { 0, 0, 0 } ;
	float fLocal_360 = 0f;
	char[] cLocal_361[8] = 0;
	char* sLocal_362 = NULL;
	char* sLocal_363 = NULL;
	char* sLocal_364 = NULL;
	char* sLocal_365 = NULL;
	char* sLocal_366 = NULL;
	char[] cLocal_367[8] = 0;
	char* sLocal_368 = NULL;
	char* sLocal_369 = NULL;
	char* sLocal_370 = NULL;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = -1;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 1000;
	var uLocal_381 = 1000;
	var uLocal_382 = 0;
	struct<147> Local_383 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_530 = 1;
	struct<18> ScriptParam_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_108 = 3;
	bLocal_131 = true;
	cLocal_143 = "RANDOM@ATMROBBERYGEN";
	cLocal_144 = "RANDOM@ATMROBBERYGEN";
	iLocal_152 = joaat("prop_ld_wallet_01_s");
	iLocal_153 = joaat("prop_ld_wallet_01_s");
	iLocal_344 = 500;
	iLocal_345 = -1;
	iLocal_346 = -1;
	fLocal_356 = 0f;
	fLocal_360 = 0f;
	Local_94 = { ScriptParam_0.f_1[0 /*3*/] };
	uLocal_97 = ScriptParam_0.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (bLocal_146)
		{
			bLocal_147 = true;
			func_270(0);
		}
		else
		{
			func_252();
		}
	}
	if (SYSTEM::VDIST(Local_94, -203.758f, -861.738f, 29.2684f) < 5f)
	{
		iLocal_108 = 1;
	}
	else if (SYSTEM::VDIST(Local_94, -2957.61f, 488.29f, 14.47f) < 5f)
	{
		iLocal_108 = 1;
	}
	else if (SYSTEM::VDIST(Local_94, 288.973f, -1256.79f, 28.4407f) < 5f)
	{
		iLocal_108 = 2;
	}
	else if (SYSTEM::VDIST(Local_94, -3043.93f, 594.84f, 6.6115f) < 5f)
	{
		iLocal_108 = 3;
	}
	else if (SYSTEM::VDIST(Local_94, 174.715f, 6637.77f, 30.5733f) < 5f)
	{
		iLocal_108 = 4;
	}
	else
	{
		iLocal_108 = 5;
	}
	if (func_210(Local_94, 1, iLocal_108, 1, 0))
	{
		GlobalFunc_6828(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	SYSTEM::SETTIMERA(0);
	GlobalFunc_587();
	while (true)
	{
		SYSTEM::WAIT(0);
		GlobalFunc_587();
		func_204(uLocal_101, &uLocal_107);
		func_201(&Local_383);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!GlobalFunc_6827())
		{
			if (GlobalFunc_10586())
			{
				func_252();
			}
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_93)
				{
					case 0:
						if (func_171())
						{
							iLocal_93 = 1;
						}
						break;
					
					case 1:
						func_170();
						if (iLocal_112 == 0)
						{
							iLocal_112 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(99, Local_94, 30000f);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_98))
						{
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_99))
						{
						}
						if (!PED::IS_PED_INJURED(iLocal_98))
						{
							if (PED::IS_PED_INJURED(iLocal_99))
							{
								TASK::TASK_SMART_FLEE_COORD(iLocal_98, Local_94, 200f, -1, 0, 0);
								PED::SET_PED_KEEP_TASK(iLocal_98, 1);
								SYSTEM::WAIT(0);
								func_252();
							}
							if (!PED::IS_PED_INJURED(iLocal_99))
							{
								if (CAM::IS_SPHERE_VISIBLE(Local_94, 2.5f))
								{
									if (iLocal_108 == 2)
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 120f, 120f, 8f, 0, 1, 0) || func_169())
										{
											func_160();
										}
									}
									else if (iLocal_108 == 1)
									{
										if (SYSTEM::VDIST(Local_94, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 100f, 100f, 8f, 0, 1, 0) || func_169())
											{
												func_160();
											}
										}
										else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 170f, 170f, 8f, 0, 1, 0) || func_169())
										{
											func_160();
										}
									}
									else if (SYSTEM::VDIST(Local_94, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 65f, 65f, 5f, 0, 1, 0) || func_169())
										{
											func_160();
										}
									}
									else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -712.9f, -819.32f, 22.73f, 1) < 5f)
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 50f, 50f, 5f, 0, 1, 0) || func_169())
										{
											func_160();
										}
									}
									else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 24.13f, -946.84f, 28.36f, 1) < 5f)
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 60f, 60f, 5f, 0, 1, 0) || func_169())
										{
											func_160();
										}
									}
									else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 30f, 30f, 8f, 0, 1, 0) || func_169())
									{
										func_160();
									}
								}
							}
						}
						else
						{
							if (Local_158[2 /*10*/].f_7)
							{
								GlobalFunc_200(&Local_158, 2);
							}
							if (!PED::IS_PED_INJURED(iLocal_99))
							{
								TASK::TASK_SMART_FLEE_COORD(iLocal_99, Local_94, 200f, -1, 0, 0);
								PED::SET_PED_KEEP_TASK(iLocal_99, 1);
								SYSTEM::WAIT(0);
							}
							func_252();
						}
						break;
				}
			}
			else
			{
				GlobalFunc_5571("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_252();
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_98))
			{
				if (!PED::IS_PED_INJURED(iLocal_98))
				{
					if (GlobalFunc_6964(iLocal_98, -251125078))
					{
						if (GlobalFunc_713(iLocal_98, Local_94, 1) >= 190f)
						{
							TASK::CLEAR_PED_TASKS(iLocal_98);
							TASK::TASK_SMART_FLEE_PED(iLocal_98, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
						}
					}
					else if (GlobalFunc_6964(iLocal_98, -982327190))
					{
						TASK::CLEAR_PED_TASKS(iLocal_98);
						TASK::TASK_SMART_FLEE_PED(iLocal_98, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_99))
			{
			}
			if (MISC::GET_GAME_TIMER() > iLocal_109 + 3000)
			{
				func_133();
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_113() && !func_110())
				{
					PLAYER::_0x36F1B38855F2A8DF(PLAYER::PLAYER_ID());
					if (!iLocal_136 && !bLocal_141)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_99))
						{
							if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_99, 0), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 100f, 100f, 15f, 0, 1, 0))
								{
									if (GlobalFunc_10652(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
									{
										iLocal_136 = 1;
									}
								}
							}
							else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -203.72f, -861.8f, 29.27f, 1) < 5f)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 40f, 40f, 15f, 0, 1, 0))
								{
									if (GlobalFunc_10652(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
									{
										iLocal_136 = 1;
									}
								}
							}
							else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 288.46f, -1256.71f, 28.44f, 1) < 5f)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 50f, 50f, 15f, 0, 1, 0))
								{
									if (GlobalFunc_10652(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
									{
										iLocal_136 = 1;
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 50f, 50f, 15f, 0, 1, 0))
							{
								if (GlobalFunc_10652(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
								{
									iLocal_136 = 1;
								}
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_102))
					{
						if (!PED::IS_PED_INJURED(iLocal_98))
						{
							if (iLocal_337)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_98, PLAYER::PLAYER_PED_ID(), fLocal_343, fLocal_343, fLocal_343, 0, 1, 0))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_98, 0))
									{
										if (SYSTEM::TIMERA() > 1000)
										{
											if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_98))
											{
												fLocal_343 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_98, 1));
												fLocal_343 = (fLocal_343 * 1.5f);
												SYSTEM::SETTIMERA(0);
											}
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98, 17, 0);
										}
									}
								}
								else if (!iLocal_339)
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_98, 25f, 25f, 25f, 0, 1, 0))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_98, 0))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98, 17, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98, 13, 0);
											func_107();
											iLocal_339 = 1;
										}
									}
								}
							}
							else if (!iLocal_138)
							{
								if ((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_98) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_98)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_98, PLAYER::PLAYER_PED_ID(), 0))
								{
									GlobalFunc_10652(&Local_158, cLocal_334, sLocal_324, 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									fLocal_343 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_98, 1));
									fLocal_343 = (fLocal_343 * 1.5f);
									iLocal_337 = 1;
									iLocal_138 = 1;
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_116, 0))
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_116, PLAYER::PLAYER_PED_ID(), 1))
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98, 17, 0);
										if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_98))
										{
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_98, iLocal_116, PLAYER::PLAYER_PED_ID(), 8, 35f, 4, 10f, 10f, 1);
										}
										else
										{
											TASK::TASK_SMART_FLEE_PED(iLocal_98, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
										}
										GlobalFunc_10652(&Local_158, cLocal_334, sLocal_324, 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										fLocal_343 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_98, 1));
										fLocal_343 = (fLocal_343 * 1.5f);
										iLocal_337 = 1;
										iLocal_138 = 1;
									}
								}
							}
							if ((iLocal_339 || iLocal_337) || bLocal_341)
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_102))
								{
									if (HUD::GET_BLIP_COLOUR(iLocal_102) == 1)
									{
									}
									else
									{
										HUD::SET_BLIP_AS_FRIENDLY(iLocal_102, 0);
										HUD::SET_BLIP_COLOUR(iLocal_102, 1);
									}
								}
								if (!iLocal_339)
								{
									func_107();
									iLocal_339 = 1;
								}
							}
							else
							{
								if (PED::IS_PED_IN_COMBAT(iLocal_98, PLAYER::PLAYER_PED_ID()))
								{
									bLocal_341 = true;
								}
								func_105(iLocal_102, &uLocal_113);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_99))
							{
								if (!iLocal_138)
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 15f, 15f, 10f, 0, 1, 0))
									{
										if (GlobalFunc_10652(&Local_158, cLocal_334, sLocal_327, 4, 0, 0, 0))
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
											TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_368, 8f, -4f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_369, 8f, -4f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_370, 8f, -4f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_368, 8f, -4f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_369, 8f, -4f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_370, 8f, -4f, -1, 1, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
											SYSTEM::SETTIMERA(0);
											iLocal_138 = 1;
										}
									}
								}
								else if (!iLocal_139)
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 15f, 15f, 10f, 0, 1, 0))
									{
										if (((!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_98) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_98)) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && GlobalFunc_156(iLocal_99, iLocal_98, 1) > 30f)
										{
											if (GlobalFunc_10652(&Local_158, cLocal_334, sLocal_328, 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_139 = 1;
											}
										}
									}
								}
								else if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_99))
								{
									GlobalFunc_5130(iLocal_99, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_100())
							{
								func_99();
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_99))
								{
									Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_99, 1) };
								}
								if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_98, Var0, 25f, 25f, 25f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_98, 12f, 12f, 12f, 0, 1, 0))
								{
									if (SYSTEM::TIMERA() > 20000)
									{
										if (GlobalFunc_115(iLocal_98) && !PED::IS_PED_RAGDOLL(iLocal_98))
										{
											if (GlobalFunc_10652(&Local_158, cLocal_334, sLocal_329, 4, 0, 0, 0))
											{
												bLocal_341 = true;
												SYSTEM::SETTIMERA(0);
											}
										}
									}
								}
							}
							else if (GlobalFunc_115(iLocal_99))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, Global_18, 0, 1, 0))
								{
									if (GlobalFunc_10652(&Local_158, cLocal_334, sLocal_332, 4, 0, 0, 0))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
										TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
										bLocal_338 = true;
										func_252();
									}
								}
								else if (bLocal_341)
								{
									if (GlobalFunc_10652(&Local_158, cLocal_334, sLocal_333, 4, 0, 0, 0))
									{
										TASK::TASK_WANDER_STANDARD(iLocal_99, 1193033728, 0);
										PED::FORCE_PED_MOTION_STATE(iLocal_99, -668482597, 0, 0, 0);
										bLocal_338 = true;
										func_252();
									}
								}
								else
								{
									TASK::TASK_WANDER_STANDARD(iLocal_99, 1193033728, 0);
									PED::FORCE_PED_MOTION_STATE(iLocal_99, -668482597, 0, 0, 0);
									bLocal_338 = true;
									func_252();
								}
							}
							else
							{
								bLocal_338 = true;
								func_252();
							}
						}
						else if (func_100())
						{
							if ((PED::IS_PED_INJURED(iLocal_98) || PED::IS_PED_DEAD_OR_DYING(iLocal_98, 1)) || GlobalFunc_6964(iLocal_98, -1899872703))
							{
								GlobalFunc_10652(&Local_158, cLocal_334, sLocal_336, 4, 0, 0, 0);
								func_95();
								GlobalFunc_200(&Local_158, 2);
								HUD::REMOVE_BLIP(&iLocal_102);
							}
						}
					}
					else if (!HUD::DOES_BLIP_EXIST(uLocal_101))
					{
						if (bLocal_146)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_103))
							{
								HUD::REMOVE_BLIP(&iLocal_103);
							}
							iLocal_103 = 0;
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							iLocal_101 = func_91(iLocal_99, 0, 0);
							GlobalFunc_4713(&uLocal_107);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_99))
							{
								fLocal_133 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_99, 0));
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_99);
							}
							if (fLocal_133 > 750f)
							{
								func_270(0);
							}
						}
						else
						{
							func_87();
						}
					}
					else
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (bLocal_146)
							{
								func_270(0);
							}
							else
							{
								func_252();
							}
						}
						if (bLocal_151)
						{
						}
						else
						{
							func_2();
						}
						if (!bLocal_151)
						{
							if (!PED::IS_PED_INJURED(iLocal_99))
							{
								if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_99, 0)) > (fLocal_133 + 100f))
								{
									if (bLocal_146)
									{
										func_270(0);
									}
									else
									{
										TASK::TASK_SMART_FLEE_PED(iLocal_99, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
										func_252();
									}
								}
								else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_99, 0)) < fLocal_133)
								{
									fLocal_133 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_99, 0));
								}
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_99, PLAYER::PLAYER_PED_ID(), 1))
								{
									if (bLocal_146)
									{
										func_270(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_1();
				}
			}
			else
			{
				func_1();
			}
		}
	}
}

void func_1()//Position - 0xDBC
{
	if (!PED::IS_PED_INJURED(iLocal_99))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_99, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
		GlobalFunc_5130(iLocal_99, "GENERIC_FRIGHTENED_HIGH", 24);
		PED::SET_PED_KEEP_TASK(iLocal_99, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_99, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_99, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_99);
	}
	func_87();
	if (bLocal_141)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_103))
		{
			if (OBJECT::DOES_PICKUP_EXIST(uLocal_140))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), OBJECT::GET_PICKUP_COORDS(uLocal_140)) > 100f)
				{
					func_252();
				}
			}
		}
		else if (bLocal_146)
		{
			func_270(0);
		}
		else if (PED::IS_PED_INJURED(iLocal_98))
		{
			func_252();
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_102))
	{
		if (PED::IS_PED_INJURED(iLocal_98))
		{
			HUD::REMOVE_BLIP(&iLocal_102);
		}
		else if (!func_100())
		{
			func_252();
		}
	}
}

void func_2()//Position - 0xE85
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	bool bVar22;
	float fVar23;
	float fVar24;
	char cVar25[16];
	char cVar29[16];
	var uVar33;
	int iVar34;
	
	if (!PED::IS_PED_INJURED(iLocal_99))
	{
		if (!bLocal_150)
		{
			if (iLocal_340)
			{
				if (!iLocal_342)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 15f, 15f, 20f, 0, 1, 0))
					{
						GlobalFunc_5130(iLocal_99, "GENERIC_HI", 5);
						iLocal_342 = 1;
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 296.13f, -894.01f, 28.23f, 1) < 5f)
				{
					if (fLocal_134 == 6f)
					{
						fLocal_134 = 5f;
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -2072.88f, -317.19f, 12.32f, 1) < 5f)
				{
					if (fLocal_134 == 6f)
					{
						fLocal_134 = 4f;
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, fLocal_134, fLocal_134, fLocal_134, 0, 1, 0) && !func_86())
				{
					if (GlobalFunc_6566(2))
					{
						HUD::CLEAR_HELP(1);
					}
					if (!func_110())
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (GlobalFunc_552(1, 0, 1))
							{
								if (!MISC::IS_BIT_SET(Global_2263, 11) || func_81())
								{
									if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
									{
										HUD::CLEAR_HELP(1);
										if (GlobalFunc_111())
										{
											GlobalFunc_4935();
										}
										if (iLocal_152 == joaat("prop_ld_wallet_pickup"))
										{
											iLocal_100 = OBJECT::CREATE_OBJECT(iLocal_153, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
										}
										else
										{
											iLocal_100 = OBJECT::CREATE_OBJECT(iLocal_152, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
										}
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										{
											ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_100, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
										ENTITY::SET_ENTITY_VISIBLE(iLocal_100, 0);
										GlobalFunc_8316(1, 1, 1, 0);
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
											{
												while ((!GlobalFunc_2267(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uLocal_135, 1, 1056964608, 0, 1) || GlobalFunc_111()) || !ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_100))
												{
													if (!GlobalFunc_2267(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uLocal_135, 1, 1056964608, 0, 1))
													{
													}
													if (GlobalFunc_111())
													{
													}
													if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_100))
													{
													}
													SYSTEM::WAIT(0);
												}
												if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
												{
													TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
												}
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
										{
											while (GlobalFunc_111() || !ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_100))
											{
												SYSTEM::WAIT(0);
											}
										}
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
										if (!PED::IS_PED_INJURED(iLocal_99))
										{
											PED::SET_PED_CAN_RAGDOLL(iLocal_99, 0);
										}
										EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
										EVENT::REMOVE_SHOCKING_EVENT(iLocal_112);
										PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
										GlobalFunc_4956();
										GlobalFunc_7629();
										SYSTEM::WAIT(0);
										if (GlobalFunc_115(iLocal_99))
										{
											if (PED::IS_PED_MALE(iLocal_99))
											{
												sLocal_145 = "move_m@hurry@b";
											}
											else
											{
												sLocal_145 = "move_f@hurry@a";
											}
										}
										STREAMING::REQUEST_CLIP_SET(sLocal_145);
										bLocal_150 = true;
										SYSTEM::SETTIMERA(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_62(ENTITY::GET_ENTITY_COORDS(iLocal_99, 1), &fLocal_134, &uLocal_135);
					if (!func_86())
					{
						if (!GlobalFunc_6964(iLocal_99, 1227113341) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							TASK::CLEAR_PED_TASKS(iLocal_99);
							TASK::TASK_GO_TO_ENTITY(iLocal_99, PLAYER::PLAYER_PED_ID(), 20000, 1056964608, 1f, 1073741824, 0);
						}
					}
					else if (GlobalFunc_6964(iLocal_99, 1227113341))
					{
						TASK::CLEAR_PED_TASKS(iLocal_99);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_368, 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_370, 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_369, 8f, -8f, -1, 1, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_99, 0, 0);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 25f, 25f, 20f, 0, 1, 1) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 30f, 30f, 20f, 0, 1, 2))
			{
				if (!func_86())
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						TASK::CLEAR_PED_TASKS(iLocal_99);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 1056964608, 1f, 1073741824, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
					}
					iLocal_340 = 1;
				}
			}
		}
		if (bLocal_150)
		{
			switch (iLocal_149)
			{
				case 0:
					if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_PRONE(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
					{
						if (bLocal_131)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -712.9f, -819.32f, 22.73f, 1) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, 1, 0))
							{
								Local_125 = { -710.1279f, -821.3084f, 22.6169f };
								Local_128 = { 0f, 0f, 266.962f };
							}
							else if (!PED::IS_PED_INJURED(iLocal_99))
							{
								Var19 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
								func_59(iLocal_99, &Local_125, &Local_128, cLocal_361, sLocal_363);
								if ((Local_125.f_2 - Var19.f_2) > 20f)
								{
									Local_125 = { Var19 };
								}
								Local_125.f_2 = (Local_125.f_2 + 2f);
								MISC::GET_GROUND_Z_FOR_3D_COORD(Local_125, &(Local_125.f_2));
								if (Local_125.f_2 == 0f)
								{
									Local_125 = { Local_353 };
									Local_128.f_2 = fLocal_356;
								}
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -203.72f, -861.8f, 29.27f, 1) < 5f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, 1, 0))
									{
										if (Local_128.f_2 > 315f && Local_128.f_2 < 360f)
										{
											Local_128.f_2 = 251.4238f;
										}
										else if (Local_128.f_2 > 120f && Local_128.f_2 < 212f)
										{
											Local_128.f_2 = 67.2304f;
										}
										Local_125 = { -205.81f, -865.2f, 28.5f };
									}
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -821.33f, -1082.43f, 10.14f, 1) < 5f && OBJECT::IS_POINT_IN_ANGLED_AREA(Local_125, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, 1))
								{
									Local_125 = { -814.0593f, -1082.483f, 10.0671f };
									Local_128.f_2 = 275.5752f;
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -387.12f, 6045.79f, 30.5f, 1) < 5f && OBJECT::IS_POINT_IN_ANGLED_AREA(Local_125, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, 1))
								{
									Local_125 = { -375.0627f, 6030.533f, 30.5313f };
									Local_128.f_2 = 222.9049f;
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -387.12f, 6045.79f, 30.5f, 1) < 5f && OBJECT::IS_POINT_IN_ANGLED_AREA(Local_125, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, 1))
								{
									Local_125 = { -379.7835f, 6029.472f, 30.5014f };
									Local_128.f_2 = 213.2611f;
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 89.39f, 2f, 67.34f, 1) < 5f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, 1, 0))
									{
										if (Local_128.f_2 > 128f && Local_128.f_2 < 195f)
										{
											if (Local_128.f_2 > 162f)
											{
												Local_128.f_2 = 220f;
											}
											else
											{
												Local_128.f_2 = 107f;
											}
										}
									}
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 174.53f, 6637.64f, 30.57f, 1) < 5f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, 1, 0))
									{
										if (Local_128.f_2 > 244.444f && Local_128.f_2 < 326.2103f)
										{
											Local_128.f_2 = 343.1367f;
										}
									}
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -3044.11f, 594.34f, 6.73f, 1) < 5f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, 1, 0))
									{
										Local_125 = { -3045.4f, 598.65f, 6.51f };
									}
								}
								Var10 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_361, sLocal_363, Local_125, Local_128, 0f, 2) };
								Var13 = { Var10 - Local_125 };
								Var13.f_2 = 0f;
								fVar24 = SYSTEM::VMAG(Var13);
								MISC::GET_GROUND_Z_FOR_3D_COORD(Var10, &(Var10.f_2));
								fVar23 = (Local_125.f_2 - Var10.f_2);
								Local_128.x = MISC::ATAN2(fVar23, fVar24);
								if (Local_128.x > 20f || Local_128.x < -330f)
								{
									Local_125 = { Local_353 };
									Local_128.x = 0f;
									Local_128.f_2 = fLocal_356;
									Var10 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_361, sLocal_363, Local_125, Local_128, 0f, 2) };
									Var13 = { Var10 - Local_125 };
									Var13.f_2 = 0f;
									fVar24 = SYSTEM::VMAG(Var13);
									MISC::GET_GROUND_Z_FOR_3D_COORD(Var10, &(Var10.f_2));
									fVar23 = (Local_125.f_2 - Var10.f_2);
								}
							}
							if (GlobalFunc_537(Local_94, -526.58f, -1222.79f, 17.46f, 10f))
							{
								if (OBJECT::IS_POINT_IN_ANGLED_AREA(Local_125, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, 1))
								{
									if (Local_128.f_2 < 35f || Local_128.f_2 > 275f)
									{
										if (Local_128.f_2 < 335f)
										{
											Local_128.f_2 = 260f;
										}
										else
										{
											Local_128.f_2 = 55f;
										}
									}
									else if (Local_128.f_2 > 107.2072f && Local_128.f_2 < 210f)
									{
										if (Local_128.f_2 > 154.6742f)
										{
											Local_128.f_2 = 233f;
										}
										else
										{
											Local_128.f_2 = 73f;
										}
									}
								}
							}
						}
						else if (iLocal_108 == 4)
						{
							if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 183.6065f, 6636.653f, 30.6299f) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 172.2291f, 6631.007f, 30.7398f))
							{
								Local_125 = { 183.6065f, 6636.653f, 30.6299f };
								Local_128 = { 0f, 0f, 265f };
							}
							else
							{
								Local_125 = { 172.2291f, 6631.007f, 30.7398f };
								Local_128 = { 0f, 0f, 132f };
							}
						}
						else
						{
							Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
							if (!PED::IS_PED_INJURED(iLocal_99))
							{
								Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_99, 1) };
							}
							Var7 = { Var1 - Var4 };
							Local_125 = { Var1 };
							Local_125 = { Local_125.x, Local_125.f_1, (Local_125.f_2 - 1f) };
							Local_128 = { 0f, 0f, MISC::GET_HEADING_FROM_VECTOR_2D(Var7.x, Var7.f_1) };
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_125, -535.795f, -1222.23f, 17.4567f, 1) < 5f)
						{
							Local_125 = { -521.475f, -1210.47f, 17.1848f };
							Local_128 = { 0f, 0f, 308.502f };
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_116, 0))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_116);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
							{
								iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &Local_347, &Local_350);
								if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_125, (Local_350.f_1 + 1f), (Local_350.f_1 + 1f), 3f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iVar0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2), (Local_350.f_1 + 1f), (Local_350.f_1 + 1f), 3f, 0, 1, 0))
								{
									if (GlobalFunc_537(Local_94, -526.58f, -1222.79f, 17.46f, 10f) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, 1, 0)))
									{
										if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0))
										{
											Var16 = { 2.9f, 12f, 8f };
											Local_120 = { -543.34f, -1216.8f, 17.96f };
											fLocal_124 = 337.5f;
											bVar22 = true;
										}
										else
										{
											Var16 = { 2.9f, 12f, 8f };
											Local_120 = { -522.4418f, -1214.57f, 17.1848f };
											fLocal_124 = 246.7714f;
											bVar22 = true;
										}
										if ((Local_350.x - Local_347.x) > Var16.x)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_1 - Local_347.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_2 - Local_347.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (GlobalFunc_4947(iVar0))
											{
												ENTITY::SET_ENTITY_COORDS(iVar0, Local_120, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_124);
												VEHICLE::SET_VEHICLE_DOOR_LATCHED(iVar0, 0, 1, 1, 1);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
											{
												VEHICLE::DELETE_VEHICLE(&iVar0);
											}
										}
									}
									else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -203.72f, -861.8f, 29.27f, 1) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, 1, 0))
									{
										Var16 = { 2.9f, 12f, 8f };
										Local_120 = { -187f, -855.51f, 29.02f };
										fLocal_124 = 158.28f;
										bVar22 = true;
										if ((Local_350.x - Local_347.x) > Var16.x)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_1 - Local_347.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_2 - Local_347.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (GlobalFunc_4947(iVar0))
											{
												ENTITY::SET_ENTITY_COORDS(iVar0, Local_120, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_124);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
											{
												VEHICLE::DELETE_VEHICLE(&iVar0);
											}
										}
									}
									else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -387.12f, 6045.79f, 30.5f, 1) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, 1, 0))
									{
										Var16 = { 2.9f, 12f, 8f };
										Local_120 = { -395.84f, 6051.16f, 31.19f };
										fLocal_124 = 139.92f;
										bVar22 = true;
										if ((Local_350.x - Local_347.x) > Var16.x)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_1 - Local_347.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_2 - Local_347.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (GlobalFunc_4947(iVar0))
											{
												ENTITY::SET_ENTITY_COORDS(iVar0, Local_120, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_124);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
											{
												VEHICLE::DELETE_VEHICLE(&iVar0);
											}
										}
									}
									else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -2956.78f, 488.19f, 14.47f, 1) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, 1, 0))
									{
										Var16 = { 2.9f, 12f, 8f };
										Local_120 = { -2972.31f, 490.07f, 15.03f };
										fLocal_124 = 357.64f;
										bVar22 = true;
										if ((Local_350.x - Local_347.x) > Var16.x)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_1 - Local_347.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_2 - Local_347.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (GlobalFunc_4947(iVar0))
											{
												ENTITY::SET_ENTITY_COORDS(iVar0, Local_120, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_124);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
											{
												VEHICLE::DELETE_VEHICLE(&iVar0);
											}
										}
									}
									else if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 174.53f, 6637.64f, 30.57f, 1) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, 1, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, 1, 0))
									{
										Var16 = { 2.9f, 12f, 8f };
										Local_120 = { 184.05f, 6628.75f, 31.27f };
										fLocal_124 = 89.37f;
										bVar22 = true;
										if ((Local_350.x - Local_347.x) > Var16.x)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_1 - Local_347.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_2 - Local_347.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (GlobalFunc_4947(iVar0))
											{
												ENTITY::SET_ENTITY_COORDS(iVar0, Local_120, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_124);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
											{
												VEHICLE::DELETE_VEHICLE(&iVar0);
											}
										}
									}
									else
									{
										Var16 = { 2.9f, 12f, 8f };
										fLocal_124 = ENTITY::GET_ENTITY_HEADING(iVar0);
										Local_120 = { func_55(Local_125, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2)) };
										if (GlobalFunc_100(0f, 0f, 0f, Local_120))
										{
											Local_120 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
										}
										if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
										{
											Local_350.x = (Local_350.x + 3f);
											Local_350.f_1 = (Local_350.f_1 + 3f);
										}
										bVar22 = true;
										if ((Local_350.x - Local_347.x) > Var16.x)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_1 - Local_347.f_1) > Var16.f_1)
										{
											bVar22 = false;
										}
										else if ((Local_350.f_2 - Local_347.f_2) > Var16.f_2)
										{
											bVar22 = false;
										}
										if (bVar22)
										{
											if (GlobalFunc_4947(iVar0))
											{
												ENTITY::SET_ENTITY_COORDS(iVar0, Local_120, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_124);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
											{
												VEHICLE::DELETE_VEHICLE(&iVar0);
											}
										}
									}
								}
							}
						}
						if (GlobalFunc_4947(iVar0))
						{
							MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &Local_347, &Local_350);
							if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_125, (Local_350.f_1 + 1f), (Local_350.f_1 + 1f), 1f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iVar0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_361, sLocal_363, Local_125, Local_128, 0, 2), (Local_350.f_1 + 1f), (Local_350.f_1 + 1f), 1f, 0, 1, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iVar0, Local_357, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_360);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_100, 1);
						}
						VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_125 - Vector(10f, 10f, 10f), Local_125 + Vector(10f, 10f, 10f));
						MISC::CLEAR_AREA_OF_PROJECTILES(Local_125, 20f, 0);
						MISC::CLEAR_AREA_OF_PEDS(Local_125, 10f, 0);
						MISC::CLEAR_AREA(Local_125, (Local_350.f_1 + 1f), 1, 0, 0, 0);
						FIRE::STOP_FIRE_IN_RANGE(Local_125, 25f);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
						uLocal_111 = PED::CREATE_SYNCHRONIZED_SCENE(Local_125, Local_128, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_111, 0);
						uLocal_148 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
						CAM::SET_CAM_FOV(uLocal_148, 15f);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_148, uLocal_111, sLocal_364, cLocal_361);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_111, cLocal_361, sLocal_362, 1000f, -1000f, 1024, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						if (!PED::IS_PED_INJURED(iLocal_99))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_99);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_99, uLocal_111, cLocal_361, sLocal_363, 1000f, -4f, 0, 0, 1148846080, 0);
						}
						CAM::SET_CAM_ACTIVE(uLocal_148, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						StringCopy(&cVar25, sLocal_335, 16);
						StringConCat(&cVar25, "_1", 16);
						StringCopy(&cVar29, cLocal_331, 16);
						StringConCat(&cVar29, "_1", 16);
						func_42(&Local_158, cLocal_334, sLocal_335, &cVar25, cLocal_331, &cVar29, 7, 0, 0);
						SYSTEM::SETTIMERA(0);
						EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
						GlobalFunc_183(joaat("rc_wallets_returned"), 1);
						STATS::STAT_GET_INT(joaat("rc_wallets_returned"), &uVar33, -1);
						iLocal_149++;
					}
					else
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
						}
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
						{
						}
						if (PED::IS_PED_PRONE(PLAYER::PLAYER_PED_ID()))
						{
						}
						if (TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
						{
						}
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
				
				case 1:
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_111) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_111) == 1f) || func_38())
					{
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 0);
						if (!PED::IS_PED_INJURED(iLocal_99))
						{
							PED::SET_PED_MONEY(iLocal_99, (iLocal_344 - (iLocal_344 / 10)));
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_99, 0);
							PED::SET_PED_MOVEMENT_CLIPSET(iLocal_99, sLocal_145, 1048576000);
						}
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_99);
							Var10 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var10, &(Var10.f_2));
							ENTITY::SET_ENTITY_COORDS(iLocal_99, Var10, 1, 0, 0, 1);
							Var10 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
							ENTITY::SET_ENTITY_HEADING(iLocal_99, Var10.f_2);
						}
						Var10 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_361, sLocal_363, Local_125, Local_128, 1f, 2) };
						if (GlobalFunc_537(Local_94, -526.58f, -1222.79f, 17.46f, 10f))
						{
							if (GlobalFunc_2786(PLAYER::PLAYER_PED_ID(), 215.68f, 60f))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 0.25f, 5, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_99), 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
							}
							else if (GlobalFunc_2786(PLAYER::PLAYER_PED_ID(), 122.0371f, 60f))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -543.35f, -1208.09f, 16.73f, 1f, 20000, 0.25f, 5, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_99), 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_99), 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
							}
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 288.46f, -1256.71f, 28.44f, 1) < 5f)
						{
							if (GlobalFunc_2786(PLAYER::PLAYER_PED_ID(), 200.8887f, 60f))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 0.25f, 5, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_99), 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
							}
							else if (GlobalFunc_2786(PLAYER::PLAYER_PED_ID(), 347.8599f, 60f))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 241.22f, -1236.76f, 28.26f, 1f, 20000, 0.25f, 5, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_99), 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_99), 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
							}
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_99, 0f, 2.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
							TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_99), 1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
						}
						PED::FORCE_PED_MOTION_STATE(iLocal_99, -668482597, 1, 0, 0);
						PED::SET_PED_CAN_RAGDOLL(iLocal_99, 1);
						PED::SET_PED_KEEP_TASK(iLocal_99, 1);
						GlobalFunc_190(&iLocal_116);
						SYSTEM::SETTIMERB(0);
						CAM::STOP_GAMEPLAY_HINT(0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							if (!GlobalFunc_1720())
							{
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
						{
							OBJECT::DELETE_OBJECT(&iLocal_100);
						}
						if (!PED::IS_PED_INJURED(iLocal_99))
						{
							PED::SET_PED_MONEY(iLocal_99, (iLocal_344 - (iLocal_344 / 10)));
						}
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_CAM_ACTIVE(uLocal_148, 0);
						func_34();
						CAM::DESTROY_CAM(uLocal_148, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
							while (CAM::IS_SCREEN_FADING_IN())
							{
								SYSTEM::WAIT(0);
							}
						}
						iVar34 = (iLocal_344 / 100);
						iVar34 *= 90;
						SYSTEM::WAIT(0);
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
						GlobalFunc_8316(0, 1, 1, 0);
						GlobalFunc_10834(GlobalFunc_8329(), 1, iVar34);
						func_270(1);
					}
					else
					{
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -3856156))
						{
							if (!PED::IS_PED_INJURED(iLocal_99) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_100, PLAYER::PLAYER_PED_ID()))
								{
									ENTITY::DETACH_ENTITY(iLocal_100, 0, 1);
									if (PED::IS_PED_MALE(iLocal_99))
									{
										ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_100, iLocal_99, PED::GET_PED_BONE_INDEX(iLocal_99, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									else
									{
										ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_100, iLocal_99, PED::GET_PED_BONE_INDEX(iLocal_99, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
								}
							}
						}
					}
					break;
				}
			}
	}
}
































void func_34()//Position - 0x3A79
{
	var uVar0;
	
	uVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1115815936, 1, 2);
	CAM::SET_CAM_ACTIVE(uVar0, 1);
}




int func_38()//Position - 0x3BA8
{
	if (GlobalFunc_4926(1000))
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	return 0;
}




int func_42(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)//Position - 0x3C78
{
	var uVar0;
	var uVar11;
	
	GlobalFunc_513(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar11 = 10;
	GlobalFunc_559(2, &uVar0, &uVar11, sParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return GlobalFunc_10151(&uVar0, &uVar11, iParam6, 0);
}













Vector3 func_55(struct<3> Param0, struct<3> Param3)//Position - 0x4452
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	var uVar19;
	struct<3> Var22;
	struct<3> Var25;
	var uVar28;
	var uVar29;
	
	iVar13 = 0;
	iVar14 = 1;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &Var7, &Var10);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, 3, &Var4, 1, 1077936128, 0);
	if (SYSTEM::VDIST(Param0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		Var1 = { -3045.49f, 604.46f, 7.02f };
		iVar13 = 8;
	}
	else if (SYSTEM::VDIST(Param0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		Var1 = { 278.97f, -1255.06f, 28.88f };
		iVar13 = 8;
	}
	while (iVar13 < 8)
	{
		switch (iVar13)
		{
			case 0:
				if (SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f)) < SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						Var22 = { GlobalFunc_1271(Var1, 0f, Var10) };
						Var25 = { GlobalFunc_1271(Var1, 0f, Var7) };
						uVar29 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, 1) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f)) < SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						Var22 = { GlobalFunc_1271(Var1, 0f, Var10) };
						Var25 = { GlobalFunc_1271(Var1, 0f, Var7) };
						uVar29 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 3:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, 1) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var10.x + IntToFloat(iVar14)), 0f, 0f)) < SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var10.x + IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var10.x + IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var10.x + IntToFloat(iVar14)), 0f, 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						Var22 = { GlobalFunc_1271(Var1, 0f, Var10) };
						Var25 = { GlobalFunc_1271(Var1, 0f, Var7) };
						uVar29 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 5:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, 1) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 6:
				if (SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var10.x - IntToFloat(iVar14)), 0f, 0f)) < SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var10.x - IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var10.x - IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var10.x - IntToFloat(iVar14)), 0f, 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						Var22 = { GlobalFunc_1271(Var1, 0f, Var10) };
						Var25 = { GlobalFunc_1271(Var1, 0f, Var7) };
						uVar29 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 7:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, 1) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		SYSTEM::WAIT(0);
	}
	return Var1;
}




void func_59(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x4B12
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	var uVar19;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	uParam2->f_2 = GlobalFunc_5821(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar3 = GlobalFunc_5821(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar4 = GlobalFunc_5821(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	Var16 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam3))
	{
		Var13 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		Var13 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(iParam0, 0), *uParam1, 1);
					*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 0), uParam2->f_2, Var16) };
					iVar0 = 2;
				}
				else
				{
					uVar5 = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1, Var13 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar5, &iVar6, &Var10, &uVar7, &uVar19) == 2)
				{
					if (iVar6 != 0)
					{
						if (Var10.f_2 > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), fVar4, Var16) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = GlobalFunc_1695(Var13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		SYSTEM::WAIT(0);
	}
}



void func_62(struct<3> Param0, float fParam3, var uParam4)//Position - 0x4D5B
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Param0 };
		fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
		if (GlobalFunc_4712(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
		if (GlobalFunc_4712(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 30f)
		{
			*fParam3 = (6f * 4f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 20f)
		{
			*fParam3 = (6f * 3f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
		{
			*fParam3 = (6f * 2f);
		}
		else
		{
			*fParam3 = 6f;
		}
		*uParam4 = ((*fParam3 / 1.33f) - 1f);
	}
	else
	{
		*fParam3 = 6f;
		*uParam4 = ((*fParam3 / 1.33f) - 1f);
	}
}



















int func_81()//Position - 0x543D
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (GlobalFunc_111())
		{
			return 1;
		}
	}
	return 0;
}





int func_86()//Position - 0x55A6
{
	switch (iLocal_115)
	{
		case 1:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 11:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 23:
			if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 30:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 31:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
	{
		return 1;
	}
	return 0;
}

void func_87()//Position - 0x5A81
{
	var uVar0;
	
	if (!bLocal_146)
	{
		if (iLocal_337)
		{
			func_95();
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_98))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_98) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_98))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_98, 25f, 25f, 25f, 0, 1, 0))
					{
						iLocal_337 = 1;
					}
				}
			}
			else
			{
				iLocal_337 = 1;
			}
			func_105(iLocal_102, &uLocal_113);
		}
		if (!bLocal_338)
		{
			if (bLocal_141)
			{
				if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_140))
				{
					GlobalFunc_183(joaat("rc_wallets_recovered"), 1);
					STATS::STAT_GET_INT(joaat("rc_wallets_recovered"), &uVar0, -1);
					PAD::SET_PAD_SHAKE(0, 200, 250);
					GlobalFunc_6567(2);
					bLocal_146 = true;
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_103))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), OBJECT::GET_PICKUP_COORDS(uLocal_140)) > 150f)
					{
						if (PED::IS_PED_INJURED(iLocal_99))
						{
							func_252();
						}
						else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_99, 1)) > 100f)
						{
							func_252();
						}
					}
				}
			}
		}
	}
}




int func_91(int iParam0, bool bParam1, int iParam2)//Position - 0x5C90
{
	iParam2 = iParam2;
	return func_92(iParam0, bParam1, 145);
}

int func_92(var uParam0, bool bParam1, int iParam2)//Position - 0x5CA6
{
	var uVar0;
	
	uVar0 = func_93(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_93(int iParam0, bool bParam1, bool bParam2)//Position - 0x5CF8
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}


void func_95()//Position - 0x5DB3
{
	int iVar0;
	var uVar1;
	
	iVar0 = joaat("pickup_money_purse");
	if (!bLocal_141)
	{
		MISC::SET_BIT(&uVar1, 3);
		MISC::SET_BIT(&uVar1, 4);
		MISC::SET_BIT(&uVar1, 1);
		uLocal_140 = OBJECT::CREATE_PICKUP(iVar0, PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_98, 1067030938, 1069547520), uVar1, iLocal_344, 1, iLocal_152);
		bLocal_141 = true;
		iLocal_103 = func_96(uLocal_140);
		GlobalFunc_10652(&Local_158, cLocal_334, sLocal_330, 4, 0, 0, 0);
		if (HUD::DOES_BLIP_EXIST(iLocal_102))
		{
			HUD::REMOVE_BLIP(&iLocal_102);
		}
		if (GlobalFunc_115(iLocal_99))
		{
			TASK::CLEAR_PED_TASKS(iLocal_99);
		}
	}
	else
	{
		if (!iLocal_142)
		{
			if (!GlobalFunc_6964(iLocal_99, 242628503) && !PED::IS_PED_INJURED(iLocal_99))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_99, Local_353, 0.5f, 0.5f, 0.5f, 0, 1, 0))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_353, 1f, 20000, 1193033728, 1056964608);
				}
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_368, 8f, -2f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_370, 8f, -2f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_369, 8f, -2f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
			}
		}
		if (iLocal_142)
		{
			if (!bLocal_146)
			{
				if (!PED::IS_PED_INJURED(iLocal_99))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_99, cLocal_144, "pickup_low", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_99, cLocal_144, "pickup_low") > 0.35f)
						{
							if (OBJECT::DOES_PICKUP_EXIST(uLocal_140))
							{
								GlobalFunc_10652(&Local_158, cLocal_334, cLocal_331, 4, 0, 0, 0);
								OBJECT::REMOVE_PICKUP(uLocal_140);
								PED::SET_PED_MONEY(iLocal_99, iLocal_344);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_99, 0);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_99);
								func_270(1);
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_99, 242628503) == 7)
					{
						TASK::CLEAR_PED_TASKS(iLocal_99);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
						TASK::TASK_PLAY_ANIM(0, cLocal_144, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2048, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
						TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
						PED::SET_PED_KEEP_TASK(iLocal_99, 1);
					}
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_99))
		{
			if (OBJECT::DOES_PICKUP_EXIST(uLocal_140))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_99, OBJECT::GET_PICKUP_COORDS(uLocal_140), 10f, 10f, 7f, 0, 1, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_99);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(uLocal_140), 1f, 20000, 1f, 512, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, OBJECT::GET_PICKUP_COORDS(uLocal_140), 0);
					TASK::TASK_PLAY_ANIM(0, cLocal_144, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
					PED::SET_PED_KEEP_TASK(iLocal_99, 1);
					iLocal_142 = 1;
				}
			}
		}
	}
}

int func_96(var uParam0)//Position - 0x60BC
{
	return func_97(uParam0);
}

int func_97(var uParam0)//Position - 0x60CA
{
	var uVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_PICKUP(uParam0);
	HUD::SET_BLIP_SCALE(uVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}


void func_99()//Position - 0x6122
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	switch (iLocal_108)
	{
		case 1:
		case 2:
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_98, PLAYER::PLAYER_PED_ID(), 1))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_98);
				bVar0 = true;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_116, 0) && PED::IS_PED_IN_VEHICLE(iLocal_98, iLocal_116, 0))
			{
				if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iLocal_116))
				{
					if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_116))
					{
						bVar0 = true;
					}
				}
			}
			else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_116, 0) || !GlobalFunc_6964(iLocal_98, -1273030092))
			{
				bVar0 = true;
			}
			if (!PED::IS_PED_FLEEING(iLocal_98))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98, -1273030092) == 7)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_137)
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_98, iLocal_116, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_98, 242628503) != 0)
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_105);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_105);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_98, uLocal_105);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_105);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_98, 242628503) != 0)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_105);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_105);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_98, uLocal_105);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_105);
					}
					iVar1 = TASK::GET_NAVMESH_ROUTE_RESULT(iLocal_98);
					if (iVar1 == 2)
					{
						TASK::CLEAR_PED_TASKS(iLocal_98);
						if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_COMBAT_PED(iLocal_98, PLAYER::PLAYER_PED_ID(), 0, 16);
						}
						iLocal_137 = 1;
					}
				}
			}
			break;
	}
}

int func_100()//Position - 0x62B0
{
	if (!PED::IS_PED_INJURED(iLocal_98))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_98, 180f, 180f, 50f, 0, 1, 0) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_98))
		{
			GlobalFunc_2515(iLocal_102, iLocal_98, 180f, 1061158912, 0);
			return 1;
		}
		else
		{
			if (Local_158[2 /*10*/].f_7)
			{
				GlobalFunc_200(&Local_158, 2);
			}
			PED::DELETE_PED(&iLocal_98);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_116, 0))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_116))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_116);
				}
			}
		}
	}
	else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_98, 0)) < 300f)
	{
		return 1;
	}
	return 0;
}





void func_105(int iParam0, var uParam1)//Position - 0x671E
{
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		if (MISC::GET_GAME_TIMER() > *uParam1 + 500)
		{
			if (HUD::GET_BLIP_COLOUR(iParam0) == 1)
			{
				HUD::SET_BLIP_AS_FRIENDLY(iParam0, true);
			}
			else
			{
				HUD::SET_BLIP_AS_FRIENDLY(iParam0, false);
				HUD::SET_BLIP_COLOUR(iParam0, 1);
			}
			*uParam1 = MISC::GET_GAME_TIMER();
		}
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && GlobalFunc_4714(0))
		{
			GlobalFunc_6567(1);
		}
	}
}


void func_107()//Position - 0x678E
{
	switch (iLocal_108)
	{
		case 1:
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_116, 0))
			{
				if (iLocal_337)
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_98, iLocal_116) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_98, -1273030092) == 1)
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_98, iLocal_116, Local_94, 8, 35f, 786469, 10f, 10f, 1);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_98, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
					}
				}
				else
				{
					if (!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iLocal_116))
					{
						VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(iLocal_116, 0.1f, 1000, 0, 0, 0, -1);
					}
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_98, iLocal_116, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 8, 35f, 786469, 10f, 10f, 1);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_98, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			break;
		
		case 4:
			if (!iLocal_337)
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_98, uLocal_104);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_98, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			break;
		
		default:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -3044.11f, 594.34f, 6.73f, 1) < 5f)
			{
				TASK::TASK_SMART_FLEE_COORD(iLocal_98, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
			}
			else if (iLocal_337)
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_98, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iLocal_98, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			}
			break;
	}
	if (!PED::IS_PED_INJURED(iLocal_98))
	{
		PED::SET_PED_KEEP_TASK(iLocal_98, 1);
	}
}



bool func_110()//Position - 0x6C9F
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 6f, 6f, 6f };
	Var4 = { -6f, -6f, -6f };
	if (!PED::IS_PED_INJURED(iLocal_99))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_99))
			{
				iLocal_110++;
				if (iLocal_110 > 60)
				{
					bVar0 = true;
				}
			}
			else
			{
				iLocal_110 = 0;
			}
		}
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_99, 31086, 0f, 0f, 0f), 2f, 1))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_99, 31086, 0f, 0f, 0f) };
		Var4 = { Var4 + PED::GET_PED_BONE_COORDS(iLocal_99, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var4, Var1, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var4, Var1, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var4, Var1, joaat("weapon_stickybomb"), 1))
		{
			bVar0 = true;
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_99, 31086, 0f, 0f, 0f), 12f))
		{
			bVar0 = true;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(iLocal_99, 31086, 0f, 0f, 0f), 50f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!func_112())
		{
		}
		else
		{
			bVar0 = false;
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_99, 474215631) != 1)
			{
				if (GlobalFunc_4924(iLocal_99))
				{
					TASK::TASK_COWER(iLocal_99, 2000);
				}
			}
		}
	}
	return bVar0;
}


int func_112()//Position - 0x6E10
{
	if (GlobalFunc_115(iLocal_98))
	{
		if (GlobalFunc_156(iLocal_99, iLocal_98, 1) < 22f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_113()//Position - 0x6E38
{
	bool bVar0;
	
	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_99))
	{
		if (PED::IS_PED_INJURED(iLocal_99))
		{
			bVar0 = true;
		}
		else
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_99, PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_RAGDOLL(iLocal_99))
			{
				bVar0 = true;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_99);
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_99, 1), 1f, 1))
			{
				bVar0 = true;
			}
			if (func_114(iLocal_99, 0, 1116471296, 1126825984, 0, 1, 0, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (func_112())
		{
			bVar0 = false;
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_99, 474215631) != 1)
			{
				if (GlobalFunc_4924(iLocal_99))
				{
					TASK::TASK_COWER(iLocal_99, 2000);
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_98))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_98, 1805844857) == 7)
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98, 17, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98, 13, 0);
				TASK::TASK_SMART_FLEE_PED(iLocal_98, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
		}
	}
	return bVar0;
}

int func_114(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x6F1D
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8324(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
				if ((((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return GlobalFunc_171(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_115(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_115(int iParam0, float fParam1)//Position - 0x6FD8
{
	float fVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_170(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_116(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_116(int iParam0, float fParam1)//Position - 0x704E
{
	return func_117(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_117(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7066
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_125(iParam0, iParam1);
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
		iVar4 = func_120();
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



int func_120()//Position - 0x7318
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





int func_125(int iParam0, int iParam1)//Position - 0x746E
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








void func_133()//Position - 0x788E
{
	if (bLocal_141 || ENTITY::IS_ENTITY_DEAD(iLocal_98))
	{
		GlobalFunc_4948(&uLocal_371, 0, 0);
	}
	else
	{
		func_134(&uLocal_371, iLocal_98, "ATM_CHASEHINT", 0, 1, 1, 1);
	}
}

void func_134(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x78C4
{
	func_135(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_135(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x78DE
{
	GlobalFunc_9524(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

























void func_160()//Position - 0x87E9
{
	TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_98, 750);
	TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_368, 8f, -8f, -1, 0, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_369, 8f, -2f, -1, 0, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_370, 8f, -2f, -1, 0, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_368, 8f, -2f, -1, 0, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_369, 8f, -2f, -1, 0, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, cLocal_367, sLocal_370, 8f, -2f, -1, 1, 0, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
	if (HUD::DOES_BLIP_EXIST(iLocal_101))
	{
		HUD::REMOVE_BLIP(&iLocal_101);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_102))
	{
		iLocal_102 = func_91(iLocal_98, 1, 0);
	}
	HUD::SHOW_HEIGHT_ON_BLIP(iLocal_102, 1);
	PED::SET_CREATE_RANDOM_COPS(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	func_107();
	if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_99, 0), -2956.26f, 487.97f, 15.46f) > 5f && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -203.72f, -861.8f, 29.27f, 1) > 5f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 288.46f, -1256.71f, 28.44f, 1) > 5f)
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_99, 1) < 50f)
		{
			GlobalFunc_10652(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0);
			iLocal_136 = 1;
		}
	}
	iLocal_109 = MISC::GET_GAME_TIMER();
	SYSTEM::SETTIMERA(0);
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
	}
	GlobalFunc_9559(1);
}









int func_169()//Position - 0x8DF2
{
	if (iLocal_345 == -1)
	{
		if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_98))
			{
				iLocal_345 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_345 + 1000)
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_94, 50f))
	{
		return 1;
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_346) > 30000)
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_98))
		{
			return 1;
		}
		else
		{
			func_252();
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_102))
	{
		if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -3044.11f, 594.34f, 6.73f, 1) > 5f && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -712.9f, -819.32f, 22.73f, 1) > 5f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 24.13f, -946.84f, 28.36f, 1) > 5f)
		{
			if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_98, 0), 2.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_170()//Position - 0x8EE0
{
	if (SYSTEM::VDIST(Local_94, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_102))
		{
			if (GlobalFunc_115(iLocal_99) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 60f, 90f, 12f, 0, 1, 0))
				{
					iLocal_102 = func_91(iLocal_98, 1, 0);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_102, 0);
				}
			}
		}
		else
		{
			func_105(iLocal_102, &uLocal_113);
		}
	}
	else if (!HUD::DOES_BLIP_EXIST(iLocal_102))
	{
		if (GlobalFunc_115(iLocal_99) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 90f, 90f, 8f, 0, 1, 0))
			{
				iLocal_102 = func_91(iLocal_98, 1, 0);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_102, 0);
			}
		}
	}
	else
	{
		func_105(iLocal_102, &uLocal_113);
	}
	if (iLocal_346 == -1)
	{
		iLocal_346 = MISC::GET_GAME_TIMER();
	}
}

int func_171()//Position - 0x8FCB
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	Var0 = { Local_94 };
	Var3 = { 0f, 0f, uLocal_97 };
	Var6 = { 10f, 10f, 5f };
	if (iLocal_108 == 1)
	{
		func_195();
		if (SYSTEM::VDIST(Local_94, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			Local_117 = { -197.9643f, -868.5554f, 28.2738f };
			fLocal_123 = 196f;
			Local_120 = { -187.5415f, -858.1728f, 28.1863f };
			fLocal_124 = 160.391f;
			Local_347 = { -259.0351f, -865.7119f, 28f };
			Local_350 = { -130.3981f, -908.8096f, 40f };
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("ATM_1");
			STREAMING::REQUEST_MODEL(iLocal_157);
			while (!STREAMING::HAS_MODEL_LOADED(iLocal_157))
			{
				if (func_182())
				{
					func_252();
				}
				SYSTEM::WAIT(0);
			}
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_157, 1);
		}
		else
		{
			Local_117 = { -2968.5f, 494.48f, 14.82f };
			fLocal_123 = 55.24f;
			Local_120 = { -2973.03f, 496.38f, 14.96f };
			fLocal_124 = 3.18f;
			Local_347 = { -259.0351f, -865.7119f, 28f };
			Local_350 = { -130.3981f, -908.8096f, 40f };
			STREAMING::REQUEST_MODEL(iLocal_157);
			while (!STREAMING::HAS_MODEL_LOADED(iLocal_157))
			{
				if (func_182())
				{
					func_252();
				}
				SYSTEM::WAIT(0);
			}
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_157, 1);
		}
	}
	else if (iLocal_108 == 2)
	{
		func_195();
		Local_117 = { 283.31f, -1249.51f, 28.95f };
		fLocal_123 = 78.25f;
		Local_120 = { 288.9906f, -1248.443f, 28.2847f };
		fLocal_124 = 75.9756f;
		Local_347 = { 266.3643f, -1313.829f, 28.59103f };
		Local_350 = { 265.1489f, -1215.932f, 36.20192f };
		STREAMING::REQUEST_MODEL(iLocal_157);
		while (!STREAMING::HAS_MODEL_LOADED(iLocal_157))
		{
			if (func_182())
			{
				func_252();
			}
			SYSTEM::WAIT(0);
		}
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_157, 1);
	}
	else if (iLocal_108 == 3)
	{
		func_195();
		Local_120 = { -1587.15f, -539.9152f, 34.3644f };
		fLocal_124 = 327f;
		Local_347 = { -1596.203f, -474.8844f, 32f };
		Local_350 = { -1595.572f, -565.8368f, 48f };
	}
	else if (iLocal_108 == 4)
	{
		func_195();
		Local_117 = { 181.2355f, 6632.627f, 30.5732f };
		fLocal_123 = 182f;
		Local_120 = { 200.0727f, 6630.587f, 30.517f };
		fLocal_124 = 165f;
		Local_347 = { 178.1817f, 6660.375f, 31f };
		Local_350 = { 179.1249f, 6530.043f, 38f };
		MISC::SET_STUNT_JUMPS_CAN_TRIGGER(0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 0, 1);
		STREAMING::REQUEST_MODEL(iLocal_157);
		while (!STREAMING::HAS_MODEL_LOADED(iLocal_157))
		{
			if (func_182())
			{
				func_252();
			}
			SYSTEM::WAIT(0);
		}
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_157, 1);
	}
	else if (iLocal_108 == 5)
	{
		func_195();
	}
	if (func_173())
	{
		MISC::CLEAR_AREA(Local_94, Var6.x, 0, 0, 0, 0);
		uLocal_106 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_94 - Var6, Local_94 + Var6, 0, 1, 1, 1);
		iLocal_99 = PED::CREATE_PED(5, iLocal_156, Local_94, uLocal_97, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 13, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 11, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_99, 17, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_99, 6, 1, 0, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_99, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_99, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_99, 0);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_99, sLocal_366);
		PED::SET_PED_MONEY(iLocal_99, 0);
		if (iLocal_114 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_99, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_99, 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_99, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_99, 4, 0, 2, 0);
		}
		iLocal_98 = PED::CREATE_PED(22, iLocal_155, Local_94, 0, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98, 17, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98, 13, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98, 6, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_98, 128, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_98, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_98, 42, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_98, 281, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_98, 172, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_98, 137, 1);
		PED::_0x733C87D4CE22BEA2(iLocal_98);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_98, sLocal_365);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_98, 1);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_98, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_143, "b_atm_mugging", Var0, Var3, 0, 2), 0, 0, 1);
		Var9 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_143, "b_atm_mugging", Var0, Var3, 0, 2) };
		ENTITY::SET_ENTITY_HEADING(iLocal_98, Var9.f_2);
		if (GlobalFunc_115(iLocal_99))
		{
			if (PED::IS_PED_MALE(iLocal_99))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_99, PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@atmrobberygen@male", "idle_a", Var0, Var3, 0, 2), 0, 0, 1);
				Var9 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("random@atmrobberygen@male", "idle_a", Var0, Var3, 0, 2) };
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_99, PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@atmrobberygen@female", "idle_a", Var0, Var3, 0, 2), 0, 0, 1);
				Var9 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("random@atmrobberygen@female", "idle_a", Var0, Var3, 0, 2) };
			}
			ENTITY::SET_ENTITY_HEADING(iLocal_99, Var9.f_2);
		}
		TASK::TASK_PLAY_ANIM(iLocal_98, cLocal_143, "b_atm_mugging", 1000f, -4f, -1, 1, 0, 0, 0, 0);
		if (PED::IS_PED_MALE(iLocal_99))
		{
			TASK::TASK_PLAY_ANIM(iLocal_99, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			STREAMING::REMOVE_ANIM_DICT("random@atmrobberygen@female");
		}
		else
		{
			TASK::TASK_PLAY_ANIM(iLocal_99, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			STREAMING::REMOVE_ANIM_DICT("random@atmrobberygen@male");
		}
		PED::SET_PED_AS_ENEMY(iLocal_98, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_99, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_98, joaat("weapon_pistol"), -1, 1, 1);
		WEAPON::SET_PED_AMMO(iLocal_98, joaat("weapon_pistol"), 34);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_98, joaat("weapon_pistol"), 0);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_98, 1, 0);
		switch (GlobalFunc_8329())
		{
			case 0:
				sLocal_323 = "MICHAEL";
				break;
			
			case 1:
				sLocal_323 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_323 = "TREVOR";
				break;
		}
		GlobalFunc_1286(&Local_158, 0, PLAYER::PLAYER_PED_ID(), sLocal_323, 0, 1);
		GlobalFunc_1286(&Local_158, 1, iLocal_99, sLocal_325, 0, 1);
		GlobalFunc_1286(&Local_158, 2, iLocal_98, "ATMRobber", 0, 1);
		if (iLocal_108 == 1 || iLocal_108 == 2)
		{
			iLocal_116 = VEHICLE::CREATE_VEHICLE(iLocal_157, Local_117, fLocal_123, 1, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_116, 1, 1);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_116);
			VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_116, 1);
			if (iLocal_108 == 2)
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_116, 0, 0, 0);
			}
			else if (iLocal_108 == 1)
			{
				PED::SET_PED_HELMET(iLocal_98, 0);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_98, 3);
			}
			else if (iLocal_108 == 4)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_116, 3);
			}
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		return 1;
	}
	else if (func_182())
	{
		func_252();
	}
	return 0;
}


int func_173()//Position - 0x971D
{
	STREAMING::REQUEST_ANIM_DICT("random@atmrobberygen@male");
	STREAMING::REQUEST_ANIM_DICT("random@atmrobberygen@female");
	if (!iLocal_132)
	{
		GlobalFunc_4607(&Local_383, 3);
		Local_383.f_146 = MISC::GET_FRAME_COUNT();
		GlobalFunc_6492(&Local_383, iLocal_155);
		GlobalFunc_6492(&Local_383, iLocal_156);
		GlobalFunc_6492(&Local_383, iLocal_152);
		GlobalFunc_6492(&Local_383, iLocal_153);
		GlobalFunc_6491(&Local_383, cLocal_143);
		GlobalFunc_6491(&Local_383, cLocal_367);
		GlobalFunc_6491(&Local_383, cLocal_361);
		GlobalFunc_6491(&Local_383, cLocal_144);
		iLocal_132 = 1;
	}
	if ((STREAMING::HAS_ANIM_DICT_LOADED("random@atmrobberygen@male") && STREAMING::HAS_ANIM_DICT_LOADED("random@atmrobberygen@female")) && func_174(&Local_383))
	{
		return 1;
	}
	return 0;
}

int func_174(var uParam0)//Position - 0x97C2
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_175(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_175(var uParam0)//Position - 0x9824
{
	return func_176(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_176(int iParam0, char* sParam1, int iParam2)//Position - 0x983B
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (GlobalFunc_4585(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(iParam0, 27));
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}






int func_182()//Position - 0x9A80
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_90) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
		{
			return 0;
		}
	}
	if (GlobalFunc_6562())
	{
		return 1;
	}
	if (GlobalFunc_9553(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}













void func_195()//Position - 0xB6AA
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_114 == 0 && iLocal_108 == 5)
	{
		iLocal_114 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	}
	else if (iLocal_108 != 5)
	{
		iLocal_114 = iLocal_108;
	}
	switch (iLocal_114)
	{
		case 1:
			iLocal_155 = joaat("g_m_y_armgoon_02");
			sLocal_365 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
			iLocal_156 = joaat("a_f_m_tourist_01");
			sLocal_366 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
			iLocal_157 = joaat("sanchez");
			sLocal_326 = "REAR1_ATTR";
			sLocal_327 = "REAR1_HELP";
			sLocal_328 = "REAR1_PROMPT";
			sLocal_329 = "REAR1_CHASE";
			sLocal_330 = "REAR1_FLEE";
			cLocal_331 = "REAR1_THX";
			sLocal_332 = "REAR1_DAMN";
			switch (GlobalFunc_8329())
			{
				case 0:
					sLocal_335 = "REAR1_REM";
					sLocal_333 = "REAR1_FKM";
					sLocal_324 = "REAR1_WM";
					sLocal_336 = "REAR1_GYM";
					break;
				
				case 1:
					sLocal_335 = "REAR1_REF";
					sLocal_333 = "REAR1_FKF";
					sLocal_324 = "REAR1_WF";
					sLocal_336 = "REAR1_GYF";
					break;
				
				case 2:
					sLocal_335 = "REAR1_RET";
					sLocal_333 = "REAR1_FKT";
					sLocal_324 = "REAR1_WT";
					sLocal_336 = "REAR1_GYT";
					break;
			}
			sLocal_325 = "ATMRobVictim1";
			cLocal_334 = "REAR1AU";
			if (iLocal_154 == 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				if (iVar0 == 0)
				{
					iLocal_152 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_152 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar1 = GlobalFunc_745();
					if (bVar1)
					{
						iLocal_152 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_152 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_154 = 1;
			}
			cLocal_361 = "RANDOM@ATMROBBERY1";
			sLocal_362 = "Return_Wallet_Positive_A_Player";
			sLocal_363 = "Return_Wallet_Positive_A_Female";
			sLocal_364 = "Return_Wallet_Positive_A_Cam";
			cLocal_367 = "random@car_thief@waiting_ig_4";
			sLocal_368 = "waiting";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			break;
		
		case 2:
			iLocal_155 = joaat("g_m_y_famfor_01");
			sLocal_365 = "G_M_Y_FamFor_01_BLACK_MINI_01";
			iLocal_156 = joaat("a_m_y_hipster_02");
			sLocal_366 = "A_M_Y_Hipster_02_White_Full_01";
			iLocal_157 = joaat("ruiner");
			sLocal_326 = "REAR2_ATTR";
			sLocal_327 = "REAR2_HELP";
			sLocal_328 = "REAR2_PROMPT";
			sLocal_329 = "REAR2_CHASE";
			sLocal_330 = "REAR2_FLEE";
			cLocal_331 = "REAR2_THX";
			sLocal_332 = "REAR2_DAMN";
			switch (GlobalFunc_8329())
			{
				case 0:
					sLocal_335 = "REAR2_REM";
					sLocal_333 = "REAR2_FKM";
					sLocal_324 = "REAR2_WM";
					sLocal_336 = "REAR2_GYM";
					break;
				
				case 1:
					sLocal_335 = "REAR2_REF";
					sLocal_333 = "REAR2_FKF";
					sLocal_324 = "REAR2_WF";
					sLocal_336 = "REAR2_GYF";
					break;
				
				case 2:
					sLocal_335 = "REAR2_RET";
					sLocal_333 = "REAR2_FKT";
					sLocal_324 = "REAR2_WT";
					sLocal_336 = "REAR2_GYT";
					break;
			}
			sLocal_325 = "ATMRobVictim2";
			cLocal_334 = "REAR2AU";
			iLocal_152 = joaat("prop_ld_wallet_pickup");
			cLocal_361 = "RANDOM@ATMROBBERY2";
			sLocal_362 = "Return_Wallet_Positive_A_Player";
			sLocal_363 = "Return_Wallet_Positive_A_Male";
			sLocal_364 = "Return_Wallet_Positive_A_Cam";
			cLocal_367 = "RANDOM@BICYCLE_THIEF@IDLE_A";
			sLocal_368 = "IDLE_A";
			sLocal_369 = "IDLE_B";
			sLocal_370 = "IDLE_C";
			break;
		
		case 3:
			iLocal_156 = joaat("a_f_m_tourist_01");
			sLocal_366 = "A_F_Y_Tourist_01_White_Mini_01";
			iLocal_155 = joaat("g_m_y_salvagoon_02");
			sLocal_365 = "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
			sLocal_326 = "REAR5_ATTR";
			sLocal_327 = "REAR5_HELP";
			sLocal_328 = "REAR5_PROMPT";
			sLocal_329 = "REAR5_CHASE";
			sLocal_330 = "REAR5_FLEE";
			cLocal_331 = "REAR5_THX";
			sLocal_332 = "REAR5_DAMN";
			switch (GlobalFunc_8329())
			{
				case 0:
					sLocal_335 = "REAR5_REM";
					sLocal_333 = "REAR5_FKM";
					sLocal_324 = "REAR5_WM";
					sLocal_336 = "REAR5_GYM";
					break;
				
				case 1:
					sLocal_335 = "REAR5_REF";
					sLocal_333 = "REAR5_FKF";
					sLocal_324 = "REAR5_WF";
					sLocal_336 = "REAR5_GYF";
					break;
				
				case 2:
					sLocal_335 = "REAR5_RET";
					sLocal_333 = "REAR5_FKT";
					sLocal_324 = "REAR5_WT";
					sLocal_336 = "REAR5_GYT";
					break;
			}
			sLocal_325 = "ATMRobVictim5";
			cLocal_334 = "REAR5AU";
			if (iLocal_154 == 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				if (iVar0 == 0)
				{
					iLocal_152 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_152 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar2 = GlobalFunc_745();
					if (bVar2)
					{
						iLocal_152 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_152 = joaat("prop_ld_wallet_01");
					}
				}
				iLocal_154 = 1;
			}
			cLocal_361 = "RANDOM@ATMROBBERY3";
			sLocal_362 = "Return_Wallet_Positive_B_Player";
			sLocal_363 = "Return_Wallet_Positive_B_Female";
			sLocal_364 = "Return_Wallet_Positive_B_Cam";
			cLocal_367 = "random@car_thief@waiting_ig_4";
			sLocal_368 = "waiting";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			break;
		
		case 4:
			iLocal_156 = joaat("a_f_m_tourist_01");
			sLocal_366 = "A_F_M_BevHills_02_WHITE_FULL_01";
			iLocal_157 = joaat("ruiner");
			iLocal_155 = joaat("g_m_y_azteca_01");
			sLocal_365 = "G_M_Y_Latino01_Latino_MINI_01";
			sLocal_326 = "REAR3_ATTR";
			sLocal_327 = "REAR3_HELP";
			sLocal_328 = "REAR3_PROMPT";
			sLocal_329 = "REAR3_CHASE";
			sLocal_330 = "REAR3_FLEE";
			cLocal_331 = "REAR3_THX";
			sLocal_332 = "REAR3_DAMN";
			switch (GlobalFunc_8329())
			{
				case 0:
					sLocal_335 = "REAR3_REM";
					sLocal_333 = "REAR3_FKM";
					sLocal_324 = "REAR3_WM";
					sLocal_336 = "REAR3_GYM";
					break;
				
				case 1:
					sLocal_335 = "REAR3_REF";
					sLocal_333 = "REAR3_FKF";
					sLocal_324 = "REAR3_WF";
					sLocal_336 = "REAR3_GYF";
					break;
				
				case 2:
					sLocal_335 = "REAR3_RET";
					sLocal_333 = "REAR3_FKT";
					sLocal_324 = "REAR3_WT";
					sLocal_336 = "REAR3_GYT";
					break;
			}
			sLocal_325 = "ATMRobVictim3";
			cLocal_334 = "REAR3AU";
			if (iLocal_154 == 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				if (iVar0 == 0)
				{
					iLocal_152 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_152 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar3 = GlobalFunc_745();
					if (bVar3)
					{
						iLocal_152 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_152 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_154 = 1;
			}
			cLocal_361 = "RANDOM@ATMROBBERY4";
			sLocal_362 = "Return_Wallet_Positive_C_Player";
			sLocal_363 = "Return_Wallet_Positive_C_Female";
			sLocal_364 = "Return_Wallet_Positive_C_Cam";
			cLocal_367 = "random@car_thief@waiting_ig_4";
			sLocal_368 = "waiting";
			sLocal_369 = "waiting";
			sLocal_370 = "waiting";
			break;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -203.72f, -861.8f, 29.27f, 1) < 5f)
	{
		Local_353 = { -197.64f, -863.25f, 28.33f };
		fLocal_356 = 334.5007f;
		Local_357 = { -187.24f, -856.77f, 28.97f };
		fLocal_360 = 162.69f;
		iLocal_115 = 1;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 288.46f, -1256.71f, 28.44f, 1) < 5f)
	{
		Local_353 = { 286.5f, -1256.73f, 28.29f };
		fLocal_356 = 167.3216f;
		Local_357 = { 250.55f, -1239.27f, 28.84f };
		fLocal_360 = 265.51f;
		iLocal_115 = 2;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -3044.11f, 594.34f, 6.73f, 1) < 5f)
	{
		Local_353 = { -3044.66f, 595.7f, 6.59f };
		fLocal_356 = 296.7338f;
		Local_357 = { -3037.55f, 608.53f, 7.34f };
		fLocal_360 = 202.3f;
		iLocal_115 = 3;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 174.53f, 6637.64f, 30.57f, 1) < 5f)
	{
		Local_353 = { 175.57f, 6636.58f, 30.57f };
		fLocal_356 = 260.4868f;
		Local_357 = { 188.97f, 6616.2f, 31.48f };
		fLocal_360 = 93.97f;
		iLocal_115 = 4;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 24.13f, -946.84f, 28.36f, 1) < 5f)
	{
		Local_353 = { 23.65f, -948.26f, 28.36f };
		fLocal_356 = 258.8732f;
		Local_357 = { 22.19f, -955.82f, 28.94f };
		fLocal_360 = 70.66f;
		iLocal_115 = 6;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 296.13f, -894.01f, 28.23f, 1) < 5f)
	{
		Local_353 = { 294.64f, -893.6f, 28.18f };
		fLocal_356 = 156.7222f;
		Local_357 = { 286.4f, -897.28f, 28.57f };
		fLocal_360 = 341.97f;
		iLocal_115 = 8;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 1077.69f, -775.73f, 57.21f, 1) < 5f)
	{
		Local_353 = { 1077.64f, -773.86f, 57.09f };
		fLocal_356 = 275.6593f;
		Local_357 = { 1081.93f, -764.08f, 57.35f };
		fLocal_360 = 268.57f;
		iLocal_115 = 11;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -2072.88f, -317.19f, 12.32f, 1) < 5f)
	{
		Local_353 = { -2074.93f, -316.75f, 12.16f };
		fLocal_356 = 157.3363f;
		Local_357 = { -2101.2f, -293.74f, 12.74f };
		fLocal_360 = 263.12f;
		iLocal_115 = 16;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -821.33f, -1082.43f, 10.14f, 1) < 5f)
	{
		Local_353 = { -819.39f, -1084.12f, 10.03f };
		fLocal_356 = 236.6294f;
		Local_357 = { -803.18f, -1075.91f, 11.13f };
		fLocal_360 = 209.53f;
		iLocal_115 = 17;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -712.9f, -819.32f, 22.73f, 1) < 5f)
	{
		Local_353 = { -712.88f, -820.47f, 22.61f };
		fLocal_356 = 268.2568f;
		Local_357 = { -721.63f, -826.84f, 22.82f };
		fLocal_360 = 93.14f;
		iLocal_115 = 18;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -387.12f, 6045.79f, 30.5f, 1) < 5f)
	{
		Local_353 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_356 = 223.2838f;
		Local_357 = { -406.23f, 6045.69f, 31.06f };
		fLocal_360 = 229.52f;
		iLocal_115 = 19;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -301.84f, -830.39f, 31.38f, 1) < 5f)
	{
		Local_353 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_356 = 286.139f;
		Local_357 = { -304.56f, -840.76f, 31.26f };
		fLocal_360 = 77.59f;
		iLocal_115 = 22;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -254.3f, -691.96f, 32.61f, 1) < 5f)
	{
		Local_353 = { -253.51f, -689.26f, 32.57f };
		fLocal_356 = 209.9227f;
		Local_357 = { -250.91f, -684.01f, 33f };
		fLocal_360 = 230.65f;
		iLocal_115 = 23;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 89.39f, 2f, 67.34f, 1) < 5f)
	{
		Local_353 = { 88.7f, 0.01f, 67.38f };
		fLocal_356 = 71.0114f;
		Local_357 = { 91.35f, -7.07f, 67.82f };
		fLocal_360 = 70.28f;
		iLocal_115 = 25;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -526.42f, -1222.51f, 17.46f, 1) < 5f)
	{
		Local_353 = { -530.11f, -1217.33f, 17.26f };
		fLocal_356 = 53.768f;
		Local_357 = { -522.45f, -1196.35f, 18.45f };
		fLocal_360 = 297.22f;
		iLocal_115 = 30;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -2956.78f, 488.19f, 14.47f, 1) < 5f)
	{
		Local_353 = { -2956.78f, 488.19f, 14.47f };
		fLocal_356 = 80.0912f;
		Local_357 = { -2974.34f, 491.96f, 15f };
		fLocal_360 = 1.95f;
		iLocal_115 = 31;
	}
	else
	{
		Local_353 = { Local_94 };
	}
}






void func_201(var uParam0)//Position - 0xC4A9
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_146 + uParam0->f_147) || MISC::IS_BIT_SET(Global_89962.f_20, 2)) || MISC::IS_BIT_SET(Global_89962.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
					{
						func_202(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_202(var uParam0)//Position - 0xC533
{
	func_203(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_203(var uParam0, char* sParam1, int iParam2)//Position - 0xC549
{
	if (MISC::IS_BIT_SET(*uParam0, 30))
	{
		switch (GlobalFunc_4585(*uParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(uParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(uParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, MISC::IS_BIT_SET(*uParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(*uParam0, 27));
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(uParam0, 29);
	}
}

void func_204(int iParam0, var uParam1)//Position - 0xC622
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = MISC::GET_GAME_TIMER();
	}
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		iVar0 = (MISC::GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
				{
					HUD::SET_BLIP_ALPHA(iParam0, 255);
				}
			}
			else if (HUD::GET_BLIP_ALPHA(iParam0) != 0)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 255);
			}
		}
	}
}






int func_210(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xC752
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = GlobalFunc_5213();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!GlobalFunc_84())
		{
			return 0;
		}
	}
	Local_90 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
			{
				return 0;
			}
		}
		if (!Global_SAVE_DATA.isGameflowActive)
		{
			return 0;
		}
		if (GlobalFunc_2(0))
		{
			return 0;
		}
		if (GlobalFunc_6562())
		{
			return 0;
		}
		if (GlobalFunc_4612())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_9553(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_90.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!GlobalFunc_6563(iParam3))
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_6509(GlobalFunc_8329()) == 4 || GlobalFunc_6509(GlobalFunc_8329()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (!GlobalFunc_9555(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!GlobalFunc_8448(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_97344) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (GlobalFunc_10550())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!GlobalFunc_8988(4))
		{
			return 0;
		}
		if (!GlobalFunc_4938(5))
		{
			return 0;
		}
		if (GlobalFunc_2046(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !GlobalFunc_2046(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (GlobalFunc_6563(30) && !GlobalFunc_2046(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar4 /*3*/] };
				iVar8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar4];
				if (GlobalFunc_6710(iVar8))
				{
					if (GlobalFunc_10880(iVar4))
					{
						if (!GlobalFunc_100(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (GlobalFunc_8329() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}










































void func_252()//Position - 0xDD75
{
	if (bLocal_338)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_116, 0))
		{
			if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iLocal_116))
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(iLocal_116);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_98))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_98);
	}
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
	if (iLocal_112 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_112);
	}
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
	if (!PED::IS_PED_INJURED(iLocal_99))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_99, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_99, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_99);
	}
	if (iLocal_108 == 4)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, 1, 1);
	}
	GlobalFunc_4948(&uLocal_371, 0, 0);
	if (GlobalFunc_6827())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
	}
	func_265(&Local_383, 0);
	GlobalFunc_10823(-1);
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_106, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}













void func_265(var uParam0, bool bParam1)//Position - 0xE6D8
{
	int iVar0;
	
	if (!bParam1)
	{
		func_267(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		GlobalFunc_2281(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}


void func_267(var uParam0)//Position - 0xE72C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			func_268(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_268(var uParam0)//Position - 0xE765
{
	func_269(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_269(int iParam0, char* sParam1, var uParam2)//Position - 0xE77C
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		switch (GlobalFunc_4585(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(uParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(uParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(uParam2, MISC::IS_BIT_SET(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_270(bool bParam0)//Position - 0xE83C
{
	Global_97345 = { Local_94 };
	if (bParam0)
	{
		GlobalFunc_4702(3);
	}
	func_274(1, 0);
	if (!bLocal_147)
	{
		GlobalFunc_82();
	}
	GlobalFunc_7068();
	func_252();
}




void func_274(int iParam0, int iParam1)//Position - 0xE8D2
{
	if (iParam0 == -1)
	{
		iParam0 = GlobalFunc_5213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= GlobalFunc_818(iParam0))
	{
		GlobalFunc_4704(iParam0, iParam1);
		if (!GlobalFunc_63(51))
		{
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8546(), 0, 138, 0);
			GlobalFunc_651(51);
		}
		if (GlobalFunc_827(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (GlobalFunc_4703(iParam0, iParam1) != 322)
		{
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_90.x, Local_90.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				GlobalFunc_4702(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				GlobalFunc_4702(7);
			}
			else
			{
				GlobalFunc_4702(1);
			}
		}
	}
}













