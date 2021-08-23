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
		func_207(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	SYSTEM::SETTIMERA(0);
	func_206();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_205();
		func_204(uLocal_101, &uLocal_107);
		func_201(&Local_383);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!func_198())
		{
			if (func_197())
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
								func_159(&Local_158, 2);
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
				func_157("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_252();
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_98))
			{
				if (!PED::IS_PED_INJURED(iLocal_98))
				{
					if (func_156(iLocal_98, -251125078))
					{
						if (func_155(iLocal_98, Local_94, 1) >= 190f)
						{
							TASK::CLEAR_PED_TASKS(iLocal_98);
							TASK::TASK_SMART_FLEE_PED(iLocal_98, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
						}
					}
					else if (func_156(iLocal_98, -982327190))
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
									if (func_108(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
									{
										iLocal_136 = 1;
									}
								}
							}
							else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, -203.72f, -861.8f, 29.27f, 1) < 5f)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 40f, 40f, 15f, 0, 1, 0))
								{
									if (func_108(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
									{
										iLocal_136 = 1;
									}
								}
							}
							else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_94, 288.46f, -1256.71f, 28.44f, 1) < 5f)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 50f, 50f, 15f, 0, 1, 0))
								{
									if (func_108(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
									{
										iLocal_136 = 1;
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, 50f, 50f, 15f, 0, 1, 0))
							{
								if (func_108(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0))
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
									func_108(&Local_158, cLocal_334, sLocal_324, 4, 0, 0, 0);
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
										func_108(&Local_158, cLocal_334, sLocal_324, 4, 0, 0, 0);
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
										if (func_108(&Local_158, cLocal_334, sLocal_327, 4, 0, 0, 0))
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
										if (((!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_98) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_98)) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && func_104(iLocal_99, iLocal_98, 1) > 30f)
										{
											if (func_108(&Local_158, cLocal_334, sLocal_328, 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_139 = 1;
											}
										}
									}
								}
								else if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_99))
								{
									func_102(iLocal_99, "GENERIC_CURSE_MED", 24);
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
										if (func_98(iLocal_98) && !PED::IS_PED_RAGDOLL(iLocal_98))
										{
											if (func_108(&Local_158, cLocal_334, sLocal_329, 4, 0, 0, 0))
											{
												bLocal_341 = true;
												SYSTEM::SETTIMERA(0);
											}
										}
									}
								}
							}
							else if (func_98(iLocal_99))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_99, Global_18, 0, 1, 0))
								{
									if (func_108(&Local_158, cLocal_334, sLocal_332, 4, 0, 0, 0))
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
									if (func_108(&Local_158, cLocal_334, sLocal_333, 4, 0, 0, 0))
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
							if ((PED::IS_PED_INJURED(iLocal_98) || PED::IS_PED_DEAD_OR_DYING(iLocal_98, 1)) || func_156(iLocal_98, -1899872703))
							{
								func_108(&Local_158, cLocal_334, sLocal_336, 4, 0, 0, 0);
								func_95();
								func_159(&Local_158, 2);
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
							func_90(&uLocal_107);
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
		func_102(iLocal_99, "GENERIC_FRIGHTENED_HIGH", 24);
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
						func_102(iLocal_99, "GENERIC_HI", 5);
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
					if (func_83(2))
					{
						HUD::CLEAR_HELP(1);
					}
					if (!func_110())
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (func_82(1, 0, 1))
							{
								if (!MISC::IS_BIT_SET(Global_2263, 11) || func_81())
								{
									if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
									{
										HUD::CLEAR_HELP(1);
										if (func_80())
										{
											func_79();
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
										func_71(1, 1, 1, 0);
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
											{
												while ((!func_70(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uLocal_135, 1, 1056964608, 0, 1) || func_80()) || !ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_100))
												{
													if (!func_70(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uLocal_135, 1, 1056964608, 0, 1))
													{
													}
													if (func_80())
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
											while (func_80() || !ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_100))
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
										func_68();
										func_64();
										SYSTEM::WAIT(0);
										if (func_98(iLocal_99))
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
						if (!func_156(iLocal_99, 1227113341) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							TASK::CLEAR_PED_TASKS(iLocal_99);
							TASK::TASK_GO_TO_ENTITY(iLocal_99, PLAYER::PLAYER_PED_ID(), 20000, 1056964608, 1f, 1073741824, 0);
						}
					}
					else if (func_156(iLocal_99, 1227113341))
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
							if (func_58(Local_94, -526.58f, -1222.79f, 17.46f, 10f))
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
									if (func_58(Local_94, -526.58f, -1222.79f, 17.46f, 10f) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, 1, 0)))
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
											if (func_57(iVar0))
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
											if (func_57(iVar0))
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
											if (func_57(iVar0))
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
											if (func_57(iVar0))
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
											if (func_57(iVar0))
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
										if (func_54(0f, 0f, 0f, Local_120))
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
											if (func_57(iVar0))
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
						if (func_57(iVar0))
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
						func_41(joaat("rc_wallets_returned"), 1);
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
						if (func_58(Local_94, -526.58f, -1222.79f, 17.46f, 10f))
						{
							if (func_37(PLAYER::PLAYER_PED_ID(), 215.68f, 60f))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 0.25f, 5, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_99), 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
							}
							else if (func_37(PLAYER::PLAYER_PED_ID(), 122.0371f, 60f))
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
							if (func_37(PLAYER::PLAYER_PED_ID(), 200.8887f, 60f))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_104);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_99, 0f, 3.5f, 0f), 1f, 20000, 0.25f, 5, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 0.25f, 5, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_99), 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_104);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_99, uLocal_104);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_104);
							}
							else if (func_37(PLAYER::PLAYER_PED_ID(), 347.8599f, 60f))
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
						func_36(&iLocal_116);
						SYSTEM::SETTIMERB(0);
						CAM::STOP_GAMEPLAY_HINT(0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							if (!func_35())
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
						func_71(0, 1, 1, 0);
						func_3(func_28(), 1, iVar34);
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

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x29B5
{
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x29FE
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_27();
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
					func_26(99, 1);
					func_41(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_41(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_41(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_12(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_11(5))
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
							func_41(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_11(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_41(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_41(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_41(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_41(joaat("sp2_money_spent_property"), iParam3);
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
									func_41(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_11(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_41(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_41(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_41(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_10(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_26(95, iParam3);
					break;
				
				case 1:
					func_26(97, iParam3);
					break;
				
				case 2:
					func_26(96, iParam3);
					break;
			}
			func_26(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
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
					func_41(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_41(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_41(joaat("sp2_total_cash_earned"), iParam3);
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
	func_6(iParam0);
	if (Global_34913 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)//Position - 0x2FFD
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

void func_6(int iParam0)//Position - 0x327F
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

void func_7(int iParam0)//Position - 0x32D9
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
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_9() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_9() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_8(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)//Position - 0x3399
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

int func_9()//Position - 0x340F
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0)//Position - 0x341C
{
	func_26(93, iParam0);
	func_26(29, iParam0);
	func_26(30, iParam0);
}

bool func_11(int iParam0)//Position - 0x343C
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_9() /*8053*/].f_5756.f_10, iParam0);
}

int func_12(bool bParam0)//Position - 0x3478
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
		func_25(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_13(27, 1);
	return 1;
}

int func_13(int iParam0, int iParam1)//Position - 0x352F
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_14(iParam0, iParam1);
}

int func_14(int iParam0, int iParam1)//Position - 0x354A
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_24(&Global_2544859))
	{
		if (func_22(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_15(&Global_2544859, iParam0))
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

int func_15(var uParam0, int iParam1)//Position - 0x35CE
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_22(uParam0, iParam1))
	{
		return 0;
	}
	func_18(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_16(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_16(var uParam0, int iParam1)//Position - 0x3654
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_22(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_17(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_17(var uParam0, int iParam1)//Position - 0x36A4
{
	return (*uParam0)[iParam1] == 61;
}

void func_18(var uParam0)//Position - 0x36B5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_21(uParam0, iVar0);
		iVar0++;
	}
	func_19(&(uParam0->f_62), (8f - 0.5f));
}

void func_19(var uParam0, float fParam1)//Position - 0x36EC
{
	uParam0->f_1 = (func_20(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_20(bool bParam0)//Position - 0x371A
{
	int iVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(iVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_21(var uParam0, int iParam1)//Position - 0x3762
{
	(*uParam0)[iParam1] = 61;
}

bool func_22(var uParam0, int iParam1)//Position - 0x3772
{
	return func_23(uParam0, iParam1) != -1;
}

int func_23(var uParam0, int iParam1)//Position - 0x3784
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

bool func_24(var uParam0)//Position - 0x37B1
{
	return uParam0->f_68 == 1;
}

int func_25(int iParam0, int iParam1)//Position - 0x37BF
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

void func_26(int iParam0, int iParam1)//Position - 0x3810
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

void func_27()//Position - 0x386D
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

int func_28()//Position - 0x38E2
{
	func_29();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_29()//Position - 0x38FB
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_33(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_32(PLAYER::PLAYER_PED_ID());
			if (func_31(iVar0) && (!func_30(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_31(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
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

bool func_30(int iParam0)//Position - 0x39F8
{
	return Global_34913 == iParam0;
}

bool func_31(int iParam0)//Position - 0x3A06
{
	return iParam0 < 3;
}

int func_32(int iParam0)//Position - 0x3A12
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)//Position - 0x3A4F
{
	if (func_31(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_34()//Position - 0x3A79
{
	var uVar0;
	
	uVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1115815936, 1, 2);
	CAM::SET_CAM_ACTIVE(uVar0, 1);
}

int func_35()//Position - 0x3AB7
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_36(int iParam0)//Position - 0x3AD0
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

int func_37(int iParam0, float fParam1, float fParam2)//Position - 0x3B07
{
	float fVar0;
	float fVar1;
	
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (ENTITY::GET_ENTITY_HEADING(iParam0) < fVar0 && ENTITY::GET_ENTITY_HEADING(iParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (ENTITY::GET_ENTITY_HEADING(iParam0) < fVar0 || ENTITY::GET_ENTITY_HEADING(iParam0) > fVar1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_38()//Position - 0x3BA8
{
	if (func_39(1000))
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

int func_39(int iParam0)//Position - 0x3BD9
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			Global_26 = MISC::GET_GAME_TIMER();
		}
		Global_27 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_26) > iParam0)
		{
			if (func_40())
			{
				Global_26 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_40()//Position - 0x3C23
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

void func_41(int iParam0, int iParam1)//Position - 0x3C55
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

int func_42(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)//Position - 0x3C78
{
	var uVar0;
	var uVar11;
	
	func_53(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar11 = 10;
	func_52(2, &uVar0, &uVar11, sParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_43(&uVar0, &uVar11, iParam6, 0);
}

int func_43(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x3CD1
{
	int iVar0;
	
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam2 > Global_15694)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
				}
				else
				{
					func_51();
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
		if (func_50(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_49();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16688 = Global_16689;
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15311.f_370 = Global_16681;
		Global_15688 = Global_15689;
		Global_15690 = Global_15691;
		if (Global_15950 == 0)
		{
			Global_15846[0 /*6*/] = { Global_15872[0 /*6*/] };
			Global_15846[1 /*6*/] = { Global_15872[1 /*6*/] };
			Global_15898[0 /*6*/] = { Global_15924[0 /*6*/] };
			Global_15898[1 /*6*/] = { Global_15924[1 /*6*/] };
			Global_15859[0 /*6*/] = { Global_15885[0 /*6*/] };
			Global_15859[1 /*6*/] = { Global_15885[1 /*6*/] };
			Global_15911[0 /*6*/] = { Global_15937[0 /*6*/] };
			Global_15911[1 /*6*/] = { Global_15937[1 /*6*/] };
		}
		if (Global_15698)
		{
			MISC::CLEAR_BIT(&Global_2263, 20);
			MISC::CLEAR_BIT(&Global_2264, 17);
			MISC::CLEAR_BIT(&Global_2265, 0);
			if (bParam3)
			{
				func_48();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_47())
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
					if (Global_15950 == 0)
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
			}
			if (func_46())
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
			}
			func_45();
			Global_15702 = bParam3;
		}
		Global_15694 = iParam2;
		if (Global_15688 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15688)
			{
				StringCopy(&(Global_15311.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15311.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14558 = 0;
		func_44();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15694 || iParam2 == Global_15694)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_51();
	}
	return 0;
}

void func_44()//Position - 0x403B
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

void func_45()//Position - 0x406C
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

int func_46()//Position - 0x4101
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_47()//Position - 0x4128
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

void func_48()//Position - 0x41C1
{
	if (func_30(14))
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
		Global_14393 = func_28();
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

void func_49()//Position - 0x4262
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

bool func_50(int iParam0, int iParam1)//Position - 0x42B9
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

void func_51()//Position - 0x42F4
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

void func_52(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x434B
{
	Global_15689 = iParam0;
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x43D3
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

bool func_54(struct<3> Param0, struct<3> Param3)//Position - 0x4429
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
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
						Var22 = { func_56(Var1, 0f, Var10) };
						Var25 = { func_56(Var1, 0f, Var7) };
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
						Var22 = { func_56(Var1, 0f, Var10) };
						Var25 = { func_56(Var1, 0f, Var7) };
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
						Var22 = { func_56(Var1, 0f, Var10) };
						Var25 = { func_56(Var1, 0f, Var7) };
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
						Var22 = { func_56(Var1, 0f, Var10) };
						Var25 = { func_56(Var1, 0f, Var7) };
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

Vector3 func_56(struct<3> Param0, float fParam3, struct<2> Param4, var uParam6)//Position - 0x4A4F
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	Var0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

int func_57(int iParam0)//Position - 0x4A9C
{
	if (func_98(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_58(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x4AC6
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
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
	uParam2->f_2 = func_61(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar3 = func_61(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar4 = func_61(iParam0, PLAYER::PLAYER_PED_ID(), 1);
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
					uParam2->f_2 = func_60(ENTITY::GET_ENTITY_COORDS(iParam0, 0), *uParam1, 1);
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
							uParam2->f_2 = func_60(Var13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
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

float func_60(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, int iParam6)//Position - 0x4CCA
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_61(int iParam0, int iParam1, int iParam2)//Position - 0x4D2F
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	return func_60(Var0, Var3, iParam2);
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
		if (func_63(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
		if (func_63(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
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

int func_63(int iParam0, float fParam1, float fParam2)//Position - 0x4E5C
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_64()//Position - 0x4EE3
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_67(0))
		{
			func_65(0);
		}
		MISC::SET_BIT(&Global_2264, 2);
	}
}

void func_65(int iParam0)//Position - 0x4F0B
{
	if (Global_14551)
	{
		func_66(0, 0);
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
	if (!func_46())
	{
		Global_14393.f_1 = 3;
	}
}

void func_66(bool bParam0, bool bParam1)//Position - 0x4F7B
{
	if (bParam0)
	{
		if (func_67(0))
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

int func_67(int iParam0)//Position - 0x4FEF
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

void func_68()//Position - 0x5049
{
	Global_14558 = 0;
	func_69();
}

void func_69()//Position - 0x5059
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
	}
}

int func_70(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x507A
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

void func_71(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x51FC
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_78(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_14393.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_46())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_77(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_78(0);
		HUD::THEFEED_RESUME();
		Global_54756 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_77(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_72(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_68243 = 0;
	}
}

int func_72(int iParam0)//Position - 0x52CD
{
	if (func_74(iParam0, 0))
	{
		return 1;
	}
	if (func_73())
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

bool func_73()//Position - 0x530E
{
	return MISC::IS_BIT_SET(Global_2359301, 3);
}

bool func_74(int iParam0, int iParam1)//Position - 0x531F
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_75(-1, 0) == 8;
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

int func_75(int iParam0, bool bParam1)//Position - 0x536A
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_76();
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

int func_76()//Position - 0x53AB
{
	return Global_1312737;
}

int func_77(int iParam0, var uParam1, var uParam2)//Position - 0x53B7
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

void func_78(int iParam0)//Position - 0x53E8
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

void func_79()//Position - 0x540B
{
	Global_14558 = 0;
	func_51();
}

int func_80()//Position - 0x541B
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_81()//Position - 0x543D
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (func_80())
		{
			return 1;
		}
	}
	return 0;
}

int func_82(bool bParam0, bool bParam1, bool bParam2)//Position - 0x545E
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

bool func_83(int iParam0)//Position - 0x553E
{
	return func_84(func_85(iParam0));
}

bool func_84(char* sParam0)//Position - 0x5550
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_85(int iParam0)//Position - 0x5563
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
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
					func_41(joaat("rc_wallets_recovered"), 1);
					STATS::STAT_GET_INT(joaat("rc_wallets_recovered"), &uVar0, -1);
					PAD::SET_PAD_SHAKE(0, 200, 250);
					func_88(2);
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

void func_88(int iParam0)//Position - 0x5B8A
{
	switch (iParam0)
	{
		case 0:
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_89(func_85(iParam0), -1);
					Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT++;
					MISC::SET_BIT(&Global_97349, 0);
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_97349, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_89(func_85(iParam0), -1);
					Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLIP_HELP_COUNT++;
					MISC::SET_BIT(&Global_97349, 1);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_97349, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_89(func_85(iParam0), -1);
					Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_ITEM_HELP_COUNT++;
					MISC::SET_BIT(&Global_97349, 2);
				}
			}
			break;
	}
}

void func_89(char* sParam0, int iParam1)//Position - 0x5C6B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_90(var uParam0)//Position - 0x5C82
{
	*uParam0 = -99;
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
		HUD::SET_BLIP_SCALE(uVar0, func_94(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_94(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_94(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_94(bool bParam0, float fParam1, float fParam2)//Position - 0x5D9C
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
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
		func_108(&Local_158, cLocal_334, sLocal_330, 4, 0, 0, 0);
		if (HUD::DOES_BLIP_EXIST(iLocal_102))
		{
			HUD::REMOVE_BLIP(&iLocal_102);
		}
		if (func_98(iLocal_99))
		{
			TASK::CLEAR_PED_TASKS(iLocal_99);
		}
	}
	else
	{
		if (!iLocal_142)
		{
			if (!func_156(iLocal_99, 242628503) && !PED::IS_PED_INJURED(iLocal_99))
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
								func_108(&Local_158, cLocal_334, cLocal_331, 4, 0, 0, 0);
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
	HUD::SET_BLIP_SCALE(uVar0, func_94(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

int func_98(int iParam0)//Position - 0x6102
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
	}
	return 0;
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
			else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_116, 0) || !func_156(iLocal_98, -1273030092))
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
						if (func_98(PLAYER::PLAYER_PED_ID()))
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
			func_101(iLocal_102, iLocal_98, 180f, 1061158912, 0);
			return 1;
		}
		else
		{
			if (Local_158[2 /*10*/].f_7)
			{
				func_159(&Local_158, 2);
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

void func_101(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x635D
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, 1);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, 0);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, 1);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, 0);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_102(int iParam0, char* sParam1, int iParam2)//Position - 0x64B6
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_103(iParam2), 1);
}

int func_103(int iParam0)//Position - 0x64CD
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

float func_104(int iParam0, int iParam1, int iParam2)//Position - 0x66C2
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
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_106(0))
		{
			func_88(1);
		}
	}
}

bool func_106(int iParam0)//Position - 0x677C
{
	return MISC::IS_BIT_SET(Global_97349, iParam0);
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

bool func_108(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6985
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_109(sParam2, iParam3, 0);
}

int func_109(char* sParam0, int iParam1, bool bParam2)//Position - 0x69D3
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
					func_51();
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
		if (func_50(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_49();
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
				func_48();
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
				if (func_47())
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
			if (func_46())
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
			func_45();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_44();
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
		func_51();
	}
	return 0;
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
				if (func_111(iLocal_99))
				{
					TASK::TASK_COWER(iLocal_99, 2000);
				}
			}
		}
	}
	return bVar0;
}

int func_111(int iParam0)//Position - 0x6DF0
{
	if (func_98(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_112()//Position - 0x6E10
{
	if (func_98(iLocal_98))
	{
		if (func_104(iLocal_99, iLocal_98, 1) < 22f)
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
				if (func_111(iLocal_99))
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
	
	if (func_98(PLAYER::PLAYER_PED_ID()) && func_98(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (func_128(iParam0, bParam1, bParam5, bParam6, bParam7))
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
					return func_127(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
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
	
	if (func_98(PLAYER::PLAYER_PED_ID()) && func_98(iParam0))
	{
		if (func_126(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
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
	if (!func_98(iParam0) || !func_98(iParam1))
	{
		if (iVar4 != -1)
		{
			func_124(&(Local_48[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_121(iParam0, iParam1, fParam2, iParam3))
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
	uVar0 = func_118(&(Local_48[iVar4 /*4*/]), Var1, iParam1, &(Local_48[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_48[iVar4 /*4*/].f_3) < iParam4);
}

int func_118(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)//Position - 0x7127
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_98(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_119(iParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar7))
	{
		func_98(iVar7);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_89)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		func_98(iVar7);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam4, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(iParam4, 0))
			{
				if (bLocal_89)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_119(int iParam0, int iParam1)//Position - 0x7253
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
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

int func_121(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x7362
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_123(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_123(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_122(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_122(struct<3> Param0, struct<3> Param3)//Position - 0x73F3
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_123(struct<3> Param0)//Position - 0x7414
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

void func_124(var uParam0)//Position - 0x7453
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
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

int func_126(int iParam0)//Position - 0x74AD
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_127(int iParam0, int iParam1, float fParam2)//Position - 0x74D5
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	return (((Var0.x * Var3.x) + (Var0.f_1 * Var3.f_1)) / SYSTEM::VDIST(Var3, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_128(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x751C
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_98(PLAYER::PLAYER_PED_ID()) && func_98(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_132(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_129(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_132(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_129(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_129(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x7617
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Var3 = { Var0 };
	Var0.x = (Var0.x - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.x = (Var3.x + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_130(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_130(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (MISC::IS_PROJECTILE_IN_AREA(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_130(int iParam0, float fParam1)//Position - 0x7723
{
	var uVar0;
	struct<3> Var1;
	
	if ((((MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_131(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_131(int iParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x77B8
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_123(Param1 - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_123(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_122(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_132(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0x7846
{
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

void func_133()//Position - 0x788E
{
	if (bLocal_141 || ENTITY::IS_ENTITY_DEAD(iLocal_98))
	{
		func_154(&uLocal_371, 0, 0);
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
	func_136(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_136(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x78FB
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_154(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_137(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_137(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x7933
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_84(iVar0))
	{
		func_153();
	}
	if (func_152(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_147(uParam0, bParam7, bParam9, 0))
			{
				func_144(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_141(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_84(iVar0))
							{
								func_89(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_140(1);
								}
							}
						}
					}
				}
			}
			else if (func_141(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_84(iVar0))
						{
							func_89(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_140(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (func_84(sParam5))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						func_154(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_154(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_154(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_154(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_154(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_154(uParam0, iVar0, 1);
				}
			}
			if (!func_147(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_139(uParam0))
				{
					func_138(uParam0);
				}
			}
		}
	}
	else
	{
		func_154(uParam0, iVar0, 0);
	}
}

void func_138(var uParam0)//Position - 0x7CA0
{
	if (func_152(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_139(var uParam0)//Position - 0x7D09
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_140(bool bParam0)//Position - 0x7D34
{
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_MI++;
			}
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_MI;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RC++;
			}
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RC;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RE++;
			}
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RE;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_141(char* sParam0)//Position - 0x7DDE
{
	if (!func_142(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_84(sParam0)) || func_84("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (func_140(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_140(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_140(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_142(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7E77
{
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_67(0))
	{
		return 0;
	}
	if (func_143())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51932)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_143()//Position - 0x7FF3
{
	return MISC::GET_GAME_TIMER() <= Global_17236.f_5130 + 100;
}

void func_144(var uParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x8009
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		func_154(uParam0, 0, 0);
	}
	if (func_54(Param2, 0f, 0f, 0f))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			uVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(uVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_145())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_145()//Position - 0x810C
{
	return func_146(PLAYER::PLAYER_ID());
}

int func_146(var uParam0)//Position - 0x811C
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_147(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x813B
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_151(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_150(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_150(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_151(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_139(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_151(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_150(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_150(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_151(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_151(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_150(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_150(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_151(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_149(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_148(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_148(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_139(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_142(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_153();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_148(bool bParam0, bool bParam1, bool bParam2)//Position - 0x84A7
{
	if (!func_142(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_149(bool bParam0, bool bParam1, bool bParam2)//Position - 0x84F9
{
	if (!func_142(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_150(bool bParam0, bool bParam1, bool bParam2)//Position - 0x8542
{
	if (!func_142(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_151(bool bParam0, bool bParam1, bool bParam2)//Position - 0x85A1
{
	if (!func_142(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_96)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_152(int iParam0)//Position - 0x85F7
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_153()//Position - 0x8652
{
	MISC::SET_BIT(&Global_2264, 4);
}

void func_154(var uParam0, int iParam1, int iParam2)//Position - 0x8662
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2446554.f_4397, 25))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_84(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_84(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

float func_155(int iParam0, struct<3> Param1, int iParam4)//Position - 0x873F
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

int func_156(int iParam0, int iParam1)//Position - 0x8778
{
	if (func_111(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_157(char* sParam0)//Position - 0x87AB
{
	func_158(sParam0);
}

void func_158(char* sParam0)//Position - 0x87B9
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_159(var uParam0, int iParam1)//Position - 0x87CC
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
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
		if (func_104(PLAYER::PLAYER_PED_ID(), iLocal_99, 1) < 50f)
		{
			func_108(&Local_158, cLocal_334, sLocal_326, 3, 0, 0, 0);
			iLocal_136 = 1;
		}
	}
	iLocal_109 = MISC::GET_GAME_TIMER();
	SYSTEM::SETTIMERA(0);
	if (func_98(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
	}
	func_161(1);
}

int func_161(int iParam0)//Position - 0x89A0
{
	if (func_163())
	{
		Global_97343 = 1;
		Global_97340 = MISC::GET_GAME_TIMER();
		if (func_162(Global_97342))
		{
			func_88(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_162(Global_97342))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

int func_162(int iParam0)//Position - 0x89F3
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_163()//Position - 0x8A22
{
	switch (func_164(&Global_24503, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_164(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x8A58
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_168(0))
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_166(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_165(uParam0, iParam4);
		}
	}
	return 2;
}

void func_165(var uParam0, int iParam1)//Position - 0x8B8F
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_166(int iParam0)//Position - 0x8BDE
{
	return func_167(iParam0, Global_34913);
}

int func_167(int iParam0, int iParam1)//Position - 0x8BEF
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_168(int iParam0)//Position - 0x8DD0
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_166(iParam0))
	{
		return 0;
	}
	return 1;
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
			if (func_98(iLocal_99) && func_98(PLAYER::PLAYER_PED_ID()))
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
		if (func_98(iLocal_99) && func_98(PLAYER::PLAYER_PED_ID()))
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
		if (func_98(iLocal_99))
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
		switch (func_28())
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
		func_172(&Local_158, 0, PLAYER::PLAYER_PED_ID(), sLocal_323, 0, 1);
		func_172(&Local_158, 1, iLocal_99, sLocal_325, 0, 1);
		func_172(&Local_158, 2, iLocal_98, "ATMRobber", 0, 1);
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

void func_172(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x9682
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(uParam2))
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

int func_173()//Position - 0x971D
{
	STREAMING::REQUEST_ANIM_DICT("random@atmrobberygen@male");
	STREAMING::REQUEST_ANIM_DICT("random@atmrobberygen@female");
	if (!iLocal_132)
	{
		func_181(&Local_383, 3);
		Local_383.f_146 = MISC::GET_FRAME_COUNT();
		func_180(&Local_383, iLocal_155);
		func_180(&Local_383, iLocal_156);
		func_180(&Local_383, iLocal_152);
		func_180(&Local_383, iLocal_153);
		func_178(&Local_383, cLocal_143);
		func_178(&Local_383, cLocal_367);
		func_178(&Local_383, cLocal_361);
		func_178(&Local_383, cLocal_144);
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
			switch (func_177(iParam0))
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

int func_177(int iParam0)//Position - 0x992E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_178(var uParam0, char* sParam1)//Position - 0x995A
{
	func_179(uParam0, 1, -1, sParam1, 0);
}

void func_179(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x996D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], iParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_180(var uParam0, int iParam1)//Position - 0x9A55
{
	func_179(uParam0, 0, iParam1, "NULL", 0);
}

void func_181(var uParam0, int iParam1)//Position - 0x9A69
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

int func_182()//Position - 0x9A80
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_90) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_194())
		{
			return 0;
		}
	}
	if (func_190())
	{
		return 1;
	}
	if (func_183(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_183(float fParam0, bool bParam1)//Position - 0x9B06
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_31(func_28()))
		{
			iVar36 = func_189();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 3))
				{
					func_184(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_184(int iParam0, var uParam1)//Position - 0x9BBD
{
	switch (iParam0)
	{
		case 0:
			func_185(uParam1, "Abigail1", func_187(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_186(iParam0), 1, 0);
			break;
		
		case 1:
			func_185(uParam1, "Abigail2", func_187(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_186(iParam0), 1, 0);
			break;
		
		case 2:
			func_185(uParam1, "Barry1", func_187(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_186(iParam0), 1, 0);
			break;
		
		case 3:
			func_185(uParam1, "Barry2", func_187(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_186(iParam0), 1, 1);
			break;
		
		case 4:
			func_185(uParam1, "Barry3", func_187(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 5:
			func_185(uParam1, "Barry3A", func_187(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 6:
			func_185(uParam1, "Barry3C", func_187(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 7:
			func_185(uParam1, "Barry4", func_187(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_186(iParam0), 0, 0);
			break;
		
		case 8:
			func_185(uParam1, "Dreyfuss1", func_187(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 9:
			func_185(uParam1, "Epsilon1", func_187(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 10:
			func_185(uParam1, "Epsilon2", func_187(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_186(iParam0), 1, 0);
			break;
		
		case 11:
			func_185(uParam1, "Epsilon3", func_187(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 12:
			func_185(uParam1, "Epsilon4", func_187(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 13:
			func_185(uParam1, "Epsilon5", func_187(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_186(iParam0), 1, 0);
			break;
		
		case 14:
			func_185(uParam1, "Epsilon6", func_187(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 15:
			func_185(uParam1, "Epsilon7", func_187(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 16:
			func_185(uParam1, "Epsilon8", func_187(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_186(iParam0), 1, 0);
			break;
		
		case 17:
			func_185(uParam1, "Extreme1", func_187(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 18:
			func_185(uParam1, "Extreme2", func_187(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 19:
			func_185(uParam1, "Extreme3", func_187(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 20:
			func_185(uParam1, "Extreme4", func_187(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 21:
			func_185(uParam1, "Fanatic1", func_187(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_186(iParam0), 1, 0);
			break;
		
		case 22:
			func_185(uParam1, "Fanatic2", func_187(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_186(iParam0), 1, 0);
			break;
		
		case 23:
			func_185(uParam1, "Fanatic3", func_187(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_186(iParam0), 0, 1);
			break;
		
		case 24:
			func_185(uParam1, "Hao1", func_187(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_186(iParam0), 0, 1);
			break;
		
		case 25:
			func_185(uParam1, "Hunting1", func_187(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 26:
			func_185(uParam1, "Hunting2", func_187(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 27:
			func_185(uParam1, "Josh1", func_187(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_186(iParam0), 1, 0);
			break;
		
		case 28:
			func_185(uParam1, "Josh2", func_187(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_186(iParam0), 1, 1);
			break;
		
		case 29:
			func_185(uParam1, "Josh3", func_187(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_186(iParam0), 1, 1);
			break;
		
		case 30:
			func_185(uParam1, "Josh4", func_187(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_186(iParam0), 1, 0);
			break;
		
		case 31:
			func_185(uParam1, "Maude1", func_187(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 32:
			func_185(uParam1, "Minute1", func_187(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 33:
			func_185(uParam1, "Minute2", func_187(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 34:
			func_185(uParam1, "Minute3", func_187(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 35:
			func_185(uParam1, "MrsPhilips1", func_187(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 36:
			func_185(uParam1, "MrsPhilips2", func_187(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 37:
			func_185(uParam1, "Nigel1", func_187(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_186(iParam0), 1, 0);
			break;
		
		case 38:
			func_185(uParam1, "Nigel1A", func_187(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_186(iParam0), 1, 1);
			break;
		
		case 39:
			func_185(uParam1, "Nigel1B", func_187(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_186(iParam0), 1, 1);
			break;
		
		case 40:
			func_185(uParam1, "Nigel1C", func_187(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_186(iParam0), 1, 1);
			break;
		
		case 41:
			func_185(uParam1, "Nigel1D", func_187(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_186(iParam0), 1, 1);
			break;
		
		case 42:
			func_185(uParam1, "Nigel2", func_187(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_186(iParam0), 1, 1);
			break;
		
		case 43:
			func_185(uParam1, "Nigel3", func_187(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_186(iParam0), 1, 1);
			break;
		
		case 44:
			func_185(uParam1, "Omega1", func_187(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 45:
			func_185(uParam1, "Omega2", func_187(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 46:
			func_185(uParam1, "Paparazzo1", func_187(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 47:
			func_185(uParam1, "Paparazzo2", func_187(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 48:
			func_185(uParam1, "Paparazzo3", func_187(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 49:
			func_185(uParam1, "Paparazzo3A", func_187(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 50:
			func_185(uParam1, "Paparazzo3B", func_187(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 51:
			func_185(uParam1, "Paparazzo4", func_187(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 52:
			func_185(uParam1, "Rampage1", func_187(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 54:
			func_185(uParam1, "Rampage3", func_187(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_186(iParam0), 1, 0);
			break;
		
		case 55:
			func_185(uParam1, "Rampage4", func_187(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_186(iParam0), 1, 0);
			break;
		
		case 56:
			func_185(uParam1, "Rampage5", func_187(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_186(iParam0), 0, 0);
			break;
		
		case 53:
			func_185(uParam1, "Rampage2", func_187(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_186(iParam0), 1, 0);
			break;
		
		case 57:
			func_185(uParam1, "TheLastOne", func_187(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 58:
			func_185(uParam1, "Tonya1", func_187(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 59:
			func_185(uParam1, "Tonya2", func_187(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 60:
			func_185(uParam1, "Tonya3", func_187(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 61:
			func_185(uParam1, "Tonya4", func_187(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		case 62:
			func_185(uParam1, "Tonya5", func_187(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_186(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_185(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0xAD72
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_186(int iParam0)//Position - 0xAE03
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_187(int iParam0)//Position - 0xB149
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_188(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_188(int iParam0)//Position - 0xB180
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_189()//Position - 0xB5CC
{
	func_29();
	switch (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_190()//Position - 0xB612
{
	if (func_193() && !func_194())
	{
		return 1;
	}
	if (func_192() && func_191())
	{
		return 1;
	}
	return 0;
}

bool func_191()//Position - 0xB644
{
	return Global_97071 > 0;
}

int func_192()//Position - 0xB652
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_193()//Position - 0xB667
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_194()//Position - 0xB68D
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
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
			switch (func_28())
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
					bVar1 = func_196();
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
			switch (func_28())
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
			switch (func_28())
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
					bVar2 = func_196();
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
			switch (func_28())
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
					bVar3 = func_196();
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

int func_196()//Position - 0xC204
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_197()//Position - 0xC225
{
	if (!func_166(5))
	{
		return 1;
	}
	if (func_190())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_194())
		{
			return 0;
		}
	}
	if (func_183(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_198()//Position - 0xC287
{
	if ((Global_97342 == func_199() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_97343)
	{
		return 1;
	}
	return 0;
}

int func_199()//Position - 0xC2B2
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_200(Var0);
	return uVar16;
}

int func_200(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0xC2CF
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
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
		switch (func_177(*uParam0))
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

void func_205()//Position - 0xC6C1
{
}

void func_206()//Position - 0xC6C9
{
}

void func_207(int iParam0)//Position - 0xC6D1
{
	if (iParam0 == -1)
	{
		iParam0 = func_199();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_209(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_97339 = 0;
	func_208();
}

void func_208()//Position - 0xC707
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
}

void func_209(int iParam0)//Position - 0xC744
{
	Global_97342 = iParam0;
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
		iParam3 = func_199();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_251())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_194())
			{
				return 0;
			}
		}
		if (!Global_SAVE_DATA.isGameflowActive)
		{
			return 0;
		}
		if (func_250(0))
		{
			return 0;
		}
		if (func_190())
		{
			return 0;
		}
		if (func_249())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (func_31(func_28()))
		{
			if (func_183(100f, 1) != -1)
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
		if (!func_248(iParam3))
		{
			return 0;
		}
		if (func_31(func_28()))
		{
			if (func_247(func_28()) == 4 || func_247(func_28()) == 5)
			{
				return 0;
			}
		}
		if (func_31(func_28()))
		{
			if (!func_246(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_245(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam3]))
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
		if (func_244())
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
		if (!func_235(4))
		{
			return 0;
		}
		if (!func_166(5))
		{
			return 0;
		}
		if (func_234(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_234(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_248(30) && !func_234(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_31(func_28()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar4 /*3*/] };
				iVar8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar4];
				if (func_233(iVar8))
				{
					if (func_211(iVar4))
					{
						if (!func_54(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (func_28() != iVar4)
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

bool func_211(int iParam0)//Position - 0xCAEB
{
	int iVar0;
	
	iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0];
	return func_212(iVar0);
}

int func_212(int iParam0)//Position - 0xCB0C
{
	return func_213(iParam0, 1);
}

int func_213(int iParam0, int iParam1)//Position - 0xCB1B
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_233(iParam0))
	{
		return 0;
	}
	func_214(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_214(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xCB6E
{
	func_215(func_226(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_215(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xCB8C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_225(iParam0, iParam1))
	{
		iVar0 = func_224(iParam1);
		iVar1 = func_222(iParam0);
		iVar2 = (func_222(iParam0) - func_222(iParam1));
		iVar3 = (func_224(iParam0) - func_224(iParam1));
		iVar4 = (func_221(iParam0) - func_221(iParam1));
		iVar5 = (func_220(iParam0) - func_220(iParam1));
		iVar6 = (func_219(iParam0) - func_219(iParam1));
		iVar7 = (func_218(iParam0) - func_218(iParam1));
	}
	else
	{
		iVar0 = func_224(iParam0);
		iVar1 = func_222(iParam1);
		iVar2 = (func_222(iParam1) - func_222(iParam0));
		iVar3 = (func_224(iParam1) - func_224(iParam0));
		iVar4 = (func_221(iParam1) - func_221(iParam0));
		iVar5 = (func_220(iParam1) - func_220(iParam0));
		iVar6 = (func_219(iParam1) - func_219(iParam0));
		iVar7 = (func_218(iParam1) - func_218(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_217(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_216(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_216(float fParam0, float fParam1, float fParam2)//Position - 0xCD8D
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_217(int iParam0, int iParam1)//Position - 0xCDCF
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

int func_218(int iParam0)//Position - 0xCE71
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_219(int iParam0)//Position - 0xCE84
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_220(int iParam0)//Position - 0xCE97
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_221(int iParam0)//Position - 0xCEAA
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_222(int iParam0)//Position - 0xCEBC
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_223(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_223(bool bParam0, int iParam1, int iParam2)//Position - 0xCEE1
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_224(int iParam0)//Position - 0xCEF8
{
	return iParam0 & 15;
}

int func_225(int iParam0, int iParam1)//Position - 0xCF05
{
	int iVar0;
	int iVar1;
	
	if (!func_233(iParam1) || !func_233(iParam0))
	{
		return 1;
	}
	iVar0 = func_222(iParam0);
	iVar1 = func_222(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_224(iParam0);
	iVar1 = func_224(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_221(iParam0);
	iVar1 = func_221(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_220(iParam0);
	iVar1 = func_220(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_219(iParam0);
	iVar1 = func_219(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_218(iParam0);
	iVar1 = func_218(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_226()//Position - 0xD011
{
	var uVar0;
	
	func_232(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_231(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_230(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_229(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_228(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_227(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_227(var uParam0, int iParam1)//Position - 0xD057
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

void func_228(var uParam0, int iParam1)//Position - 0xD0DD
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_229(var uParam0, int iParam1)//Position - 0xD110
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_224(*uParam0);
	iVar1 = func_222(*uParam0);
	if (iParam1 < 1 || iParam1 > func_217(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_230(var uParam0, int iParam1)//Position - 0xD161
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_231(var uParam0, int iParam1)//Position - 0xD19B
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_232(var uParam0, int iParam1)//Position - 0xD1D6
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_233(int iParam0)//Position - 0xD212
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
	iVar0 = func_218(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_219(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_220(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_222(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_224(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_221(iParam0);
	if (iVar5 < 1 || iVar5 > func_217(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_234(int iParam0, int iParam1)//Position - 0xD2EE
{
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_VAR_COMPLETE[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0)//Position - 0xD311
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_28();
				if (!func_31(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_243()) || Global_96400) || Global_24446) || func_242()) || func_50(8, -1)) || func_241()) || func_240()) || func_239()) || func_238()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_243()) || Global_24446) || func_242()) || func_50(8, -1)) || func_239()) || func_241()) || func_240()) || func_238()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_243()) || Global_96400) || Global_24446) || func_242()) || func_50(8, -1)) || func_239()) || func_241()) || func_240()) || func_238()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_243()) || Global_96400) || Global_24446) || func_242()) || func_50(8, -1)) || func_241()) || func_240()) || func_238()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_243() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_50(8, -1)) || func_238()) || func_237()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_50(8, -1) || func_241()) || func_240()) || func_237()) || func_236())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_243()) || Global_24446) || func_242()) || func_50(8, -1)) || func_240()) || func_239()) || func_238()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_243()) || func_240()) || Global_96400) || Global_24446) || func_242()) || Global_35957) || func_50(8, -1)) || func_239()) || func_237()) || func_238()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_243()) || Global_96400) || Global_24446) || func_242()) || func_50(8, -1)) || func_239()) || func_237()) || func_241()) || func_240()) || func_238())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_236()//Position - 0xDA2E
{
	return Global_90001.f_1;
}

int func_237()//Position - 0xDA3C
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_238()//Position - 0xDA62
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_239()//Position - 0xDA7C
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_240()//Position - 0xDAA6
{
	return Global_90014.f_291 > 0;
}

bool func_241()//Position - 0xDAB7
{
	return Global_90014.f_290 > 0;
}

var func_242()//Position - 0xDAC8
{
	return Global_1315900;
}

int func_243()//Position - 0xDAD4
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_244()//Position - 0xDAF0
{
	func_48();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_245(int iParam0)//Position - 0xDB18
{
	return func_225(func_226(), iParam0);
}

int func_246(int iParam0, int iParam1, int iParam2)//Position - 0xDB2A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_28();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_247(int iParam0)//Position - 0xDC0E
{
	if (!func_31(iParam0))
	{
		return 7;
	}
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iParam0];
}

bool func_248(int iParam0)//Position - 0xDC32
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_251())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_SAVE_DATA.RE_FLAGS, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_TIME_REQ_SET, iVar0);
	}
	return bVar1;
}

int func_249()//Position - 0xDC90
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_250(bool bParam0)//Position - 0xDCC7
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

int func_251()//Position - 0xDCF2
{
	var uVar0;
	
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
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
	func_154(&uLocal_371, 0, 0);
	if (func_198())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
	}
	func_265(&Local_383, 0);
	func_253(-1);
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_106, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_253(int iParam0)//Position - 0xDE51
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_199();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_198())
	{
		func_258(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_97344 = MISC::GET_GAME_TIMER();
		func_257(30000);
		StringCopy(&cVar0, func_256(Global_97342, 1), 64);
		if (func_255(Global_97342) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97341, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_97339, (MISC::GET_GAME_TIMER() - Global_97340), 0);
	}
	else if (MISC::IS_BIT_SET(Global_97349, 0) && Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT < 3)
	{
		MISC::CLEAR_BIT(&Global_97349, 0);
	}
	func_254(&Global_24503);
	Global_97343 = 0;
	func_209(-1);
}

void func_254(var uParam0)//Position - 0xDF06
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34875)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
}

int func_255(int iParam0)//Position - 0xDF43
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_256(int iParam0, bool bParam1)//Position - 0xDFF4
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_257(int iParam0)//Position - 0xE23D
{
	Global_35464 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_258(int iParam0)//Position - 0xE24F
{
	func_259(iParam0, 0, func_264(iParam0));
}

void func_259(int iParam0, int iParam1, int iParam2)//Position - 0xE264
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_226();
	func_262(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_261(iParam0, &uVar0);
	Var1 = { func_260(&uVar0) };
}

struct<16> func_260(var uParam0)//Position - 0xE293
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_220(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_219(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_218(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_221(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_224(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_222(*uParam0), 64);
	return Var0;
}

void func_261(int iParam0, var uParam1)//Position - 0xE363
{
	Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam0] = *uParam1;
}

void func_262(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE37B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_222(*uParam0);
	iVar1 = func_224(*uParam0);
	iVar2 = func_221(*uParam0);
	iVar3 = func_220(*uParam0);
	iVar4 = func_219(*uParam0);
	iVar5 = func_218(*uParam0);
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
	iVar6 = func_217(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_217(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_263(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_263(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE4FD
{
	func_232(uParam0, iParam1);
	func_231(uParam0, iParam2);
	func_230(uParam0, iParam3);
	func_229(uParam0, iParam4);
	func_228(uParam0, iParam5);
	func_227(uParam0, iParam6);
}

int func_264(int iParam0)//Position - 0xE535
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
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
		func_266(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_266(var uParam0)//Position - 0xE713
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
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
		switch (func_177(iParam0))
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
		func_286(3);
	}
	func_274(1, 0);
	if (!bLocal_147)
	{
		func_273();
	}
	func_271();
	func_252();
}

void func_271()//Position - 0xE871
{
	func_272();
}

int func_272()//Position - 0xE87E
{
	if (func_250(0))
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

int func_273()//Position - 0xE8C9
{
	return 1;
}

void func_274(int iParam0, int iParam1)//Position - 0xE8D2
{
	if (iParam0 == -1)
	{
		iParam0 = func_199();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_255(iParam0))
	{
		func_285(iParam0, iParam1);
		if (!func_284(51))
		{
			func_281("RE_REWARD", 1, 0, 4000, 10000, func_189(), 0, 138, 0);
			func_280(51);
		}
		if (func_162(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (func_279(iParam0, iParam1) != 322)
		{
			func_275(func_279(iParam0, iParam1), Local_90.x, Local_90.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				func_286(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				func_286(7);
			}
			else
			{
				func_286(1);
			}
		}
	}
}

void func_275(int iParam0, var uParam1, var uParam2)//Position - 0xE9D6
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
		func_278((891 + iParam0), 1, -1, 1);
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
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_10 = uParam1;
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_11 = uParam2;
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
		func_276();
	}
}

void func_276()//Position - 0xEABE
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
		func_25(13, SYSTEM::FLOOR(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_68245)
		{
			if (func_277() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_272();
				}
			}
		}
	}
}

int func_277()//Position - 0xEF7F
{
	return Global_24444;
}

int func_278(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xEF8A
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
		iParam2 = func_76();
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

int func_279(int iParam0, int iParam1)//Position - 0xF1E7
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_280(int iParam0)//Position - 0xF55B
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY[iVar1]), iVar0);
	}
}

void func_281(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xF59D
{
	func_282(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_282(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xF5BE
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount < 9)
	{
		StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/]), sParam0, 16);
		StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_4), sParam1, 16);
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_9 = iParam5;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_11 = iParam6;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_12 = uParam2;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_13 = iParam7;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_14 = iParam8;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_10 = -1;
		}
		Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount++;
		func_283();
	}
}

void func_283()//Position - 0xF791
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 0))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[0])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[0] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 1))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[1])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[1] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 2))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[2])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[2] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_284(int iParam0)//Position - 0xF8B1
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY[iVar1], iVar0);
	}
	return 0;
}

void func_285(int iParam0, int iParam1)//Position - 0xF8F4
{
	MISC::SET_BIT(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_VAR_COMPLETE[iParam0]), iParam1);
}

void func_286(int iParam0)//Position - 0xF90F
{
	Global_97339 = iParam0;
}

