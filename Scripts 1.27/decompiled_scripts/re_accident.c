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
	int iLocal_17 = 0;
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
	struct<3> Local_42 = { 0, 0, 0 } ;
	bool bLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	float fLocal_56 = 0f;
	float fLocal_57 = 0f;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	int iLocal_64 = 0;
	struct<5> Local_65[31];
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	struct<5> Local_228[14];
	float fLocal_299 = 0f;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	struct<3> Local_304 = { 0, 0, 0 } ;
	struct<3> Local_307 = { 0, 0, 0 } ;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	bool bLocal_342 = 0;
	bool bLocal_343 = 0;
	bool bLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 16;
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
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	struct<3> Local_522 = { 0, 0, 0 } ;
	struct<3> Local_525 = { 0, 0, 0 } ;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	bool bLocal_535 = 0;
	struct<33> Local_536 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_569 = 1;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	iLocal_17 = 3;
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
	iLocal_50 = -1;
	iLocal_53 = -1;
	fLocal_56 = 0.5f;
	fLocal_57 = 0f;
	iLocal_222 = 1;
	fLocal_299 = 160f;
	iLocal_303 = 55000;
	Local_310 = { 30f, 30f, 5f };
	iLocal_351 = -1;
	Local_522 = { -458.4085f, -984.6459f, 22.5892f };
	Local_525 = { -458.1934f, -995.4897f, 22.7427f };
	Local_304 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_172();
	}
	if (CLOCK::GET_CLOCK_HOURS() > 18 || CLOCK::GET_CLOCK_HOURS() < 5)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_130(Local_304, -1, 0, 0, 0))
	{
		func_127(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (!func_126())
			{
				if (func_125())
				{
					func_172();
				}
			}
			RECORDING::_0x208784099002BC30("RE_CA", 0);
			switch (iLocal_300)
			{
				case 0:
					if (func_113())
					{
						func_172();
					}
					func_107();
					func_104(&Local_536);
					break;
				
				case 1:
					func_21();
					func_104(&Local_536);
					func_12();
					break;
				
				case 2:
					if (((ENTITY::DOES_ENTITY_EXIST(iLocal_316) && PED::IS_PED_DEAD_OR_DYING(iLocal_316, 1)) && iLocal_347 < 5) && !bLocal_344)
					{
						func_11();
					}
					func_1();
					break;
			}
		}
		else
		{
			func_172();
		}
	}
}

void func_1()//Position - 0x1CC
{
	if (iLocal_533 && !iLocal_534)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
		iLocal_346 = 0;
		while (iLocal_346 < 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_326[iLocal_346]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_326[iLocal_346], 0);
			}
			iLocal_346++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_318))
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_318, 0f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_318, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_338))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_338, 0);
		}
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
		func_2(0, 1, 1, 0);
		iLocal_341 = 1;
		MISC::SET_TIME_SCALE(1f);
		STREAMING::REMOVE_ANIM_DICT("re@construction");
		if (CAM::DOES_CAM_EXIST(uLocal_528))
		{
			CAM::DESTROY_CAM(uLocal_528, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_322))
		{
			HUD::REMOVE_BLIP(&uLocal_322);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_323))
		{
			HUD::REMOVE_BLIP(&uLocal_323);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_324))
		{
			HUD::REMOVE_BLIP(&uLocal_324);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_325))
		{
			HUD::REMOVE_BLIP(&uLocal_325);
		}
		iLocal_534 = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_326[0]) || ENTITY::DOES_ENTITY_EXIST(uLocal_326[1]))
	{
		if (!CAM::IS_SPHERE_VISIBLE(Local_307 + Vector(20f, 0f, 0f), 30f) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_307, 80f, 80f, 80f, 0, 1, 0))
		{
			func_172();
		}
	}
}

void func_2(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x36B
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_10(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_14393.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_9())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_8(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_10(0);
		HUD::THEFEED_RESUME();
		Global_54756 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_8(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_3(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_68243 = 0;
	}
}

int func_3(int iParam0)//Position - 0x43C
{
	if (func_5(iParam0, 0))
	{
		return 1;
	}
	if (func_4())
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

bool func_4()//Position - 0x47D
{
	return MISC::IS_BIT_SET(Global_2359301, 3);
}

bool func_5(int iParam0, int iParam1)//Position - 0x48E
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_6(-1, 0) == 8;
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

int func_6(int iParam0, bool bParam1)//Position - 0x4D9
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_7();
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

int func_7()//Position - 0x51A
{
	return Global_1312737;
}

int func_8(int iParam0, var uParam1, var uParam2)//Position - 0x526
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

int func_9()//Position - 0x557
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_10(int iParam0)//Position - 0x57E
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

void func_11()//Position - 0x5A1
{
	if (iLocal_351 == -1)
	{
		iLocal_351 = MISC::GET_GAME_TIMER() + 5000;
	}
	if (MISC::GET_GAME_TIMER() > iLocal_351)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_318))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_318, 0);
			ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_318))
			{
				VEHICLE::EXPLODE_VEHICLE(iLocal_318, 1, 0);
			}
		}
	}
}

void func_12()//Position - 0x602
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_20();
		func_19();
		func_16();
		func_13();
	}
}

void func_13()//Position - 0x626
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	Var1 = { 0f, 0f, 0f };
	if (iLocal_221 == 0)
	{
		if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_228[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_228)
			{
				if (iVar0 > 0)
				{
					fVar4 = (fVar4 + MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228[(iVar0 - 1) /*5*/], Local_228[iVar0 /*5*/], 1));
				}
				if (Local_228[iVar0 /*5*/].f_4)
				{
					if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_228[iVar0 /*5*/]))
					{
						fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228[iVar0 /*5*/], Var1, 1);
						if (fVar6 < fVar7)
						{
							fVar7 = fVar6;
							fVar8 = fVar4;
							iVar5 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar7 < fLocal_56)
			{
				iVar5 = iVar5;
				iLocal_221 = 1;
				iLocal_223 = MISC::GET_GAME_TIMER();
				fVar8 = fVar8;
				Local_61 = { Local_228[iVar5 /*5*/] };
				iLocal_64 = iVar5;
				iLocal_224 = iVar5 * 2;
				iLocal_226 = iLocal_224;
				iLocal_227 = iLocal_224;
				if (iLocal_227 < 0)
				{
					iLocal_227 = 0;
				}
				if (iLocal_226 >= Local_228 * 2)
				{
					iLocal_226 = (Local_228 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_221 == 1)
	{
		GRAPHICS::_0xD9454B5752C857DC();
		fVar9 = (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_223)) / fLocal_299);
		iVar10 = (SYSTEM::FLOOR((fVar9 / (1f / 2f))) - 1);
		iVar11 = (iLocal_224 + iVar10);
		iVar12 = (iLocal_224 - iVar10);
		if (iVar11 >= 28)
		{
			iVar11 = 27;
		}
		if (iVar12 < 0)
		{
			iVar12 = 0;
		}
		if (iVar11 > iLocal_226)
		{
			iVar0 = iLocal_226 + 1;
			while (iVar0 <= iVar11)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_228)
				{
					if (Local_228[iVar13 /*5*/].f_4)
					{
						func_14(iVar0, 1);
					}
					else
					{
						iVar11 = (iVar0 - 1);
						iVar0 = iVar11 + 1;
					}
				}
				iVar0++;
			}
			iLocal_226 = iVar11;
		}
		if (iVar12 < iLocal_227)
		{
			iVar0 = (iLocal_227 - 1);
			while (iVar0 >= iVar12)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_228)
				{
					if (Local_228[iVar13 /*5*/].f_4)
					{
						func_14(iVar0, 1);
					}
					else
					{
						iVar12 = iVar0 + 1;
						iVar0 = (iVar12 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_227 = iVar12;
		}
		iVar0 = 0;
		while (iVar0 < Local_65)
		{
			if ((MISC::GET_GAME_TIMER() - Local_65[iVar0 /*5*/].f_4) > 1000)
			{
				GRAPHICS::FADE_DECALS_IN_RANGE(Local_65[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((MISC::GET_GAME_TIMER() - Local_65[iVar0 /*5*/].f_4) > 6000)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_65[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_14(int iParam0, int iParam1)//Position - 0x85E
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 14)
			{
				func_15(Local_228[(iParam0 / 2) /*5*/] + Local_228[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_57, fLocal_57, fLocal_57), iParam1);
			}
		}
		else if ((iParam0 / 2) < 14)
		{
			func_15(Local_228[(iParam0 / 2) /*5*/] + Vector(fLocal_57, fLocal_57, fLocal_57), iParam1);
		}
	}
}

void func_15(struct<3> Param0, int iParam3)//Position - 0x8C7
{
	if (iLocal_222 == 0)
	{
		iParam3 = 0;
	}
	FIRE::REMOVE_SCRIPT_FIRE(Local_65[iLocal_225 /*5*/]);
	if (Local_65[iLocal_225 /*5*/].f_4 != 0)
	{
		GRAPHICS::FADE_DECALS_IN_RANGE(Local_65[iLocal_225 /*5*/].f_1, 0.4f, 1f);
	}
	Local_65[iLocal_225 /*5*/].f_4 = MISC::GET_GAME_TIMER();
	Local_65[iLocal_225 /*5*/].f_1 = { Param0 };
	Local_65[iLocal_225 /*5*/] = FIRE::START_SCRIPT_FIRE(Param0, uLocal_54, iParam3);
	iLocal_225++;
	if (iLocal_225 >= 31)
	{
		iLocal_225 = 0;
	}
}

void func_16()//Position - 0x93E
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_49)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (PAD::IS_CONTROL_PRESSED(0, 24) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_55 == 0)
				{
					RECORDING::_0x293220DA1B46CEBC(2f, 8f, 4);
					iLocal_55 = MISC::GET_GAME_TIMER() + 250;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_55)
				{
					if (!bLocal_45)
					{
						fVar4 = 9999.9f;
						Local_58 = { func_18() };
						iVar0 = 0;
						while (iVar0 < Local_228)
						{
							if (HUD::DOES_BLIP_EXIST(Local_228[iVar0 /*5*/].f_3))
							{
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_58, HUD::GET_BLIP_COORDS(Local_228[iVar0 /*5*/].f_3), 1);
								fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_228[iVar0 /*5*/], HUD::GET_BLIP_COORDS(Local_228[iVar0 /*5*/].f_3), 1);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_228[iVar0 /*5*/] = { Local_58 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_51 != -1)
							{
								if (MISC::ABSI((iLocal_52 - iVar5)) > 1)
								{
									iLocal_52 = -1;
								}
								if (iLocal_52 == -1)
								{
									iLocal_52 = iLocal_51;
								}
								if (MISC::ABSI((iLocal_52 - iVar5)) < 3 && MISC::ABSI((iLocal_52 - iVar5)) > 0)
								{
									if (iLocal_52 < iVar5)
									{
										iVar6 = iLocal_52;
										while (iVar6 <= (iVar5 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(Local_228[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_228[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_228[iVar6 /*5*/].f_3, 0);
													Local_228[iVar6 /*5*/].f_4 = 1;
													iLocal_53 = (iLocal_53 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_52)
										{
											if (HUD::DOES_BLIP_EXIST(Local_228[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_228[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_228[iVar6 /*5*/].f_3, 0);
													Local_228[iVar6 /*5*/].f_4 = 1;
													iLocal_53 = (iLocal_53 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_52 = iLocal_51;
								}
								if (iVar5 == 0)
								{
									if (HUD::DOES_BLIP_EXIST(Local_228[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_228[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_228[iVar5 /*5*/].f_3, 0);
											Local_228[iVar5 /*5*/].f_4 = 1;
											iLocal_53 = (iLocal_53 - 1);
										}
									}
								}
								if (iVar5 == 13)
								{
									if (HUD::DOES_BLIP_EXIST(Local_228[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_228[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_228[iVar5 /*5*/].f_3, 0);
											Local_228[iVar5 /*5*/].f_4 = 1;
											iLocal_53 = (iLocal_53 - 1);
										}
									}
								}
								if (iVar5 < 13)
								{
									if (func_17(Local_228[iVar5 + 1 /*5*/]))
									{
										if (HUD::DOES_BLIP_EXIST(Local_228[iVar5 /*5*/].f_3))
										{
											if (HUD::GET_BLIP_ALPHA(Local_228[iVar5 /*5*/].f_3) > 0)
											{
												HUD::SET_BLIP_ALPHA(Local_228[iVar5 /*5*/].f_3, 0);
												Local_228[iVar5 /*5*/].f_4 = 1;
												iLocal_53 = (iLocal_53 - 1);
											}
										}
									}
								}
							}
							iLocal_51 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_51 = -1;
				iLocal_52 = -1;
				iLocal_55 = 0;
			}
		}
	}
}

int func_17(struct<3> Param0)//Position - 0xC13
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_18()//Position - 0xC3D
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	var uVar8;
	
	iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iVar0, iVar1) };
		Var2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(iVar0), 0.35f, 0f, -0.15f) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &uVar8);
		Var5 = { Var2.x, Var2.f_1, uVar8 };
	}
	return Var5;
}

void func_19()//Position - 0xCAA
{
	int iVar0;
	
	if (iLocal_47)
	{
		if (iLocal_221)
		{
			iVar0 = 0;
			while (iVar0 < Local_65)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_65[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_47 = 0;
		iLocal_221 = 1;
		iLocal_223 = MISC::GET_GAME_TIMER();
		iVar0 = 0;
		while (iVar0 < Local_228)
		{
			Local_228[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_50 != -1)
		{
			iLocal_227 = iLocal_50;
			iLocal_226 = iLocal_50;
			iLocal_224 = iLocal_50;
		}
		else
		{
			iLocal_227 = -1;
			iLocal_226 = -1;
			iLocal_224 = iLocal_50;
		}
		iLocal_225 = 1;
	}
}

void func_20()//Position - 0xD23
{
	if (!iLocal_48)
	{
		iLocal_48 = 1;
	}
}

void func_21()//Position - 0xD34
{
	switch (iLocal_301)
	{
		case 0:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false);
			STREAMING::REQUEST_ANIM_DICT("re@construction");
			if (Local_536.f_32 <= 0)
			{
				Local_536.f_32 = MISC::GET_FRAME_COUNT();
			}
			func_103(&Local_536, joaat("s_m_m_dockwork_01"));
			func_103(&Local_536, joaat("prop_generator_01a"));
			func_103(&Local_536, joaat("p_amb_phone_01"));
			func_100(&Local_536);
			if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false) && STREAMING::HAS_ANIM_DICT_LOADED("re@construction")) && func_96(&Local_536))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_318, 0))
				{
					iLocal_316 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_318, 26, joaat("s_m_m_dockwork_01"), -1, 1, 1);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_316, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_316, 3, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_316, 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_316, 8, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(iLocal_316, "re@construction", "idle_c", 1000f, -1000f, -1, 49, 0.4f, 0, 0, 0);
					iLocal_339 = OBJECT::CREATE_OBJECT(joaat("p_amb_phone_01"), -455.6561f, -985.8071f, 22.4868f, 1, 1, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_phone_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_339, iLocal_316, PED::GET_PED_BONE_INDEX(iLocal_316, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_316, 17, 1);
					PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_316, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_316, 1);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_316, 0);
					func_95(&uLocal_357, 3, iLocal_316, "RECONACWorker", 0, 1);
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_316, "S_M_Y_GENERICWORKER_01_WHITE_01");
					uLocal_317 = PED::CREATE_PED(26, joaat("s_m_m_dockwork_01"), -462.2982f, -978.3272f, 65f, 221.4041f, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_317, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_317, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_317, 1);
					EVENT::SET_DECISION_MAKER(iLocal_316, -1143637011);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 24);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 46);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 61);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 136);
					EVENT::CLEAR_DECISION_MAKER_EVENT_RESPONSE(-1143637011, 55);
					iLocal_338 = OBJECT::CREATE_OBJECT(joaat("prop_generator_01a"), Local_525.x, (Local_525.f_1 + 0.5f), (Local_525.f_2 - 0.25f), 1, 1, 0);
					ENTITY::SET_ENTITY_HEADING(iLocal_338, 75f);
					ENTITY::SET_ENTITY_PROOFS(iLocal_338, 0, 1, 1, 0, 0, 0, 0, 0);
					uLocal_532 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sparking_generator", iLocal_338, 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_338, 1);
					func_94(&uLocal_357, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
					iLocal_350 = MISC::GET_GAME_TIMER();
					iLocal_301 = 1;
				}
			}
			break;
		
		case 1:
			if (iLocal_340)
			{
				func_90();
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!iLocal_341)
				{
					if (!PED::IS_PED_INJURED(iLocal_316))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -532.2208f, -849.2668f, 19.7038f, -531.6973f, -1065.341f, 60.7893f, 190.8125f, 0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_318))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_323))
								{
									uLocal_323 = func_89(iLocal_318, 0, 0);
								}
							}
						}
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_316, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_318, PLAYER::PLAYER_PED_ID(), 1))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_318, 0);
							TASK::CLEAR_PED_TASKS(iLocal_316);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_356);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_356);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_316, uLocal_356);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_356);
							func_88();
						}
						STREAMING::REQUEST_MODEL(joaat("prop_ld_pipe_single_01"));
						if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -473.1686f, -984.6405f, 22.487f, 40f, 40f, 5f, 0, 1, 0) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && func_87(1, 0, 1)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_pipe_single_01")))
						{
							if (!func_126())
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									iLocal_321 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								}
								func_77(1);
							}
							iLocal_340 = 1;
						}
					}
					else
					{
						func_88();
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(iLocal_316))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_316, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_318) && !HUD::DOES_BLIP_EXIST(uLocal_323))
							{
								uLocal_323 = func_89(iLocal_318, 0, 0);
							}
						}
						else if (!HUD::DOES_BLIP_EXIST(uLocal_322))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_323))
							{
								HUD::REMOVE_BLIP(&uLocal_323);
							}
							uLocal_322 = func_74(iLocal_316, 0, 145);
						}
					}
					func_45();
					func_42();
					if (!PED::IS_PED_INJURED(iLocal_316))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_316, Local_310, 0, 1, 0))
						{
							if (!bLocal_342)
							{
								func_41();
							}
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_322))
						{
							HUD::REMOVE_BLIP(&uLocal_322);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_323))
						{
							HUD::REMOVE_BLIP(&uLocal_323);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_324))
						{
							HUD::REMOVE_BLIP(&uLocal_324);
						}
						if (PED::IS_PED_INJURED(iLocal_316) || ENTITY::IS_ENTITY_DEAD(iLocal_318))
						{
							func_88();
						}
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_319, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_324))
						{
							HUD::REMOVE_BLIP(&uLocal_324);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_318) && !HUD::DOES_BLIP_EXIST(uLocal_323))
							{
								uLocal_323 = func_89(iLocal_318, 0, 0);
							}
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_319, 0))
				{
					if (iLocal_352 >= 3)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_324))
							{
								HUD::REMOVE_BLIP(&uLocal_324);
								if (!PED::IS_PED_INJURED(iLocal_316) && !ENTITY::IS_ENTITY_DEAD(iLocal_318))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_316, 0) && !HUD::DOES_BLIP_EXIST(uLocal_323))
									{
										uLocal_323 = func_89(iLocal_318, 0, 0);
									}
								}
							}
						}
						else if (!PED::IS_PED_INJURED(iLocal_316) && !ENTITY::IS_ENTITY_DEAD(iLocal_318))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_316, 0) && HUD::DOES_BLIP_EXIST(uLocal_323))
							{
								HUD::REMOVE_BLIP(&uLocal_323);
								if (!HUD::DOES_BLIP_EXIST(uLocal_324))
								{
									uLocal_324 = func_89(iLocal_319, 0, 0);
								}
							}
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_316))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
						{
							iLocal_346 = 0;
							while (iLocal_346 < 11)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_326[iLocal_346]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(uLocal_326[iLocal_346], 0);
								}
								iLocal_346++;
							}
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_318))
				{
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_318))
					{
						iLocal_346 = 0;
						while (iLocal_346 < 11)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_326[iLocal_346]))
							{
								ENTITY::FREEZE_ENTITY_POSITION(uLocal_326[iLocal_346], 0);
							}
							iLocal_346++;
						}
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_318, 0);
						if (!PED::IS_PED_INJURED(iLocal_316))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_316, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_316, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_316, 116, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_316, 29, 0);
								if (!bLocal_344)
								{
									func_39();
									SYSTEM::WAIT(0);
									func_23(&uLocal_357, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
									while (func_22())
									{
										SYSTEM::WAIT(0);
									}
									bLocal_344 = true;
								}
								if (!PED::IS_PED_INJURED(iLocal_316))
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_316, 99);
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_318))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_318, 0);
									ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
									VEHICLE::EXPLODE_VEHICLE(iLocal_318, 1, 0);
								}
								func_88();
							}
						}
					}
				}
			}
			break;
	}
}

int func_22()//Position - 0x1490
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_23(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x14B2
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_24(sParam2, iParam3, 0);
}

int func_24(char* sParam0, int iParam1, bool bParam2)//Position - 0x1500
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
					func_37();
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
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_35();
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
				func_28();
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
				if (func_27())
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
			if (func_9())
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
			func_26();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_25();
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
		func_37();
	}
	return 0;
}

void func_25()//Position - 0x17CC
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

void func_26()//Position - 0x17FD
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

int func_27()//Position - 0x1892
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

void func_28()//Position - 0x192B
{
	if (func_34(14))
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
		Global_14393 = func_29();
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

int func_29()//Position - 0x19CC
{
	func_30();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_30()//Position - 0x19E5
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_33(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_32(PLAYER::PLAYER_PED_ID());
			if (func_31(iVar0) && (!func_34(14) || Global_96306))
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

bool func_31(int iParam0)//Position - 0x1AE2
{
	return iParam0 < 3;
}

int func_32(int iParam0)//Position - 0x1AEE
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
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

int func_33(int iParam0)//Position - 0x1B2B
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

bool func_34(int iParam0)//Position - 0x1B55
{
	return Global_34913 == iParam0;
}

void func_35()//Position - 0x1B63
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

bool func_36(int iParam0, int iParam1)//Position - 0x1BBA
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

void func_37()//Position - 0x1BF5
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

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1C4C
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
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

void func_39()//Position - 0x1CA2
{
	Global_14558 = 0;
	func_40();
}

void func_40()//Position - 0x1CB2
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
	}
}

void func_41()//Position - 0x1CD3
{
	switch (iLocal_352)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_316))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_350) > 3000)
				{
					func_23(&uLocal_357, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
					iLocal_354 = MISC::GET_GAME_TIMER();
					iLocal_350 = MISC::GET_GAME_TIMER();
					iLocal_352 = 2;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_316))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_350) > 3000)
				{
					iLocal_350 = MISC::GET_GAME_TIMER();
					iLocal_352++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_316))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_350) > 5000 && !func_22())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_355 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_316, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_319, 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (!PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bulldozer")))
								{
									if (!HUD::DOES_BLIP_EXIST(uLocal_324))
									{
										uLocal_324 = func_89(iLocal_319, 0, 0);
										if (HUD::DOES_BLIP_EXIST(uLocal_323))
										{
											HUD::REMOVE_BLIP(&uLocal_323);
										}
									}
								}
							}
							else if (!HUD::DOES_BLIP_EXIST(uLocal_324))
							{
								uLocal_324 = func_89(iLocal_319, 0, 0);
								if (HUD::DOES_BLIP_EXIST(uLocal_323))
								{
									HUD::REMOVE_BLIP(&uLocal_323);
								}
							}
						}
					}
					if (iLocal_355 == joaat("bulldozer"))
					{
						func_23(&uLocal_357, "CONACAU", "CONAC_HELP2", 4, 0, 0, 0);
					}
					else
					{
						func_23(&uLocal_357, "CONACAU", "CONAC_HELP3", 4, 0, 0, 0);
					}
					iLocal_350 = MISC::GET_GAME_TIMER();
					iLocal_352++;
				}
			}
			break;
		
		case 3:
			if (MISC::GET_GAME_TIMER() - iLocal_350) > MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000)
			{
				if (!func_22())
				{
					func_23(&uLocal_357, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
					iLocal_350 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
}

void func_42()//Position - 0x1EA9
{
	switch (iLocal_348)
	{
		case 0:
			GRAPHICS::ADD_PETROL_DECAL(Local_525 + Vector(0f, 1f, 0f), 1f, 1f, 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::START_PETROL_TRAIL_DECALS(1f);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_522, 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_522 - Vector(0f, 4f, 0f), 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_522 - Vector(0f, 8f, 0f), 1f);
			SYSTEM::WAIT(0);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_525, 1f);
			GRAPHICS::END_PETROL_TRAIL_DECALS();
			iLocal_354 = MISC::GET_GAME_TIMER();
			iLocal_348 = 2;
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_354) > iLocal_303 || func_44())
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_532))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_532, 0);
				}
				func_43();
				if (!bLocal_344)
				{
					if (!PED::IS_PED_INJURED(iLocal_316) && !ENTITY::IS_ENTITY_DEAD(iLocal_318))
					{
						if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_316, iLocal_318, -1, 0, 0) && !VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_316, iLocal_318, 0, 0, 0))
						{
							func_39();
							SYSTEM::WAIT(0);
							func_23(&uLocal_357, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
							bLocal_344 = true;
						}
					}
				}
				MISC::ENABLE_DISPATCH_SERVICE(3, 1);
				MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(80f);
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, 1, 1);
				MISC::CREATE_INCIDENT(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_531);
				SYSTEM::SETTIMERA(0);
				iLocal_348 = 3;
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_318))
			{
				if (!FIRE::IS_ENTITY_ON_FIRE(iLocal_318))
				{
				}
			}
			if (iLocal_347 < 2)
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_318))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_318, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						VEHICLE::EXPLODE_VEHICLE(iLocal_318, 1, 0);
					}
				}
			}
			break;
	}
}

void func_43()//Position - 0x2088
{
	iLocal_47 = 1;
}

int func_44()//Position - 0x2093
{
	if (iLocal_221 == 1)
	{
		return 1;
	}
	return 0;
}

void func_45()//Position - 0x20A6
{
	struct<3> Var0;
	
	switch (iLocal_347)
	{
		case 0:
			if (iLocal_352 >= 2)
			{
				if (!PED::IS_PED_INJURED(iLocal_316) && !ENTITY::IS_ENTITY_DEAD(iLocal_318))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_316, 0))
					{
						iLocal_347++;
					}
					OBJECT::DELETE_OBJECT(&iLocal_339);
					if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_316, iLocal_318, -1, 0, 0) || VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_316, iLocal_318, 0, 0, 0))
					{
						if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_316, iLocal_318, -1, 0, 0))
						{
							bLocal_343 = true;
							Local_313 = { ENTITY::GET_ENTITY_COORDS(iLocal_318, 0) + Vector(0f, -1f, -3f) };
						}
						else
						{
							Local_313 = { ENTITY::GET_ENTITY_COORDS(iLocal_318, 0) + Vector(0f, 1.5f, -3f) };
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_313, 4.2f, 4f, 5f, 0, 1, 0))
						{
							if (!bLocal_342)
							{
								func_39();
								SYSTEM::WAIT(0);
								func_23(&uLocal_357, "CONACAU", "CONAC_FREE", 4, 0, 0, 0);
								bLocal_342 = true;
							}
						}
						else
						{
							bLocal_342 = true;
							iLocal_347++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_316) && !ENTITY::IS_ENTITY_DEAD(iLocal_318))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_319))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_319, 0, 1, 1, 0, 0, 0, 0, 0);
				}
				ENTITY::SET_ENTITY_PROOFS(iLocal_316, 0, 1, 0, 0, 0, 0, 0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_318, 0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_356);
				if (bLocal_343)
				{
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -476.3904f, -986.836f, 22.5569f, 3f, -1, 1048576000, 0, 1193033728);
				}
				TASK::CLOSE_SEQUENCE_TASK(uLocal_356);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_316, uLocal_356);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_356);
				PED::SET_PED_KEEP_TASK(iLocal_316, 1);
				iLocal_350 = MISC::GET_GAME_TIMER();
				iLocal_347++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_316))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_350) > 500 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_316, 0))
				{
					iLocal_303 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_318, 0))
					{
					}
					func_39();
					SYSTEM::WAIT(0);
					func_23(&uLocal_357, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
					iLocal_350 = MISC::GET_GAME_TIMER();
					iLocal_347++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_316))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_316, -464.7217f, -989.7214f, 22.4867f, 3f, 10f, 3f, 0, 1, 0) || (MISC::GET_GAME_TIMER() - iLocal_350) > 10000)
				{
					func_23(&uLocal_357, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
					iLocal_347++;
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_316))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_316, -472.7056f, -991.105f, 22.4867f, 3f, 30f, 3f, 0, 1, 0) || (MISC::GET_GAME_TIMER() - iLocal_350) > 10000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_318))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_318, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						VEHICLE::EXPLODE_VEHICLE(iLocal_318, 1, 0);
					}
					iLocal_347++;
				}
			}
			break;
		
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_350) > 3000)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_318, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_318, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_318, 0, 0f, 0f, 50f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					VEHICLE::EXPLODE_VEHICLE(iLocal_318, 1, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_316))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RE14A_SAFE");
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_319))
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_319, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					ENTITY::SET_ENTITY_PROOFS(iLocal_316, 0, 0, 0, 0, 0, 0, 0, 0);
					PED::SET_PED_CAN_RAGDOLL(iLocal_316, 1);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_316, 1);
					PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_316, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_316, 0);
					EVENT::SET_DECISION_MAKER(iLocal_316, joaat("DEFAULT"));
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::OPEN_SEQUENCE_TASK(&uLocal_356);
					TASK::TASK_PLAY_ANIM(0, "re@construction", "Out_Of_Breath", 2f, -2f, -1, 0, 0f, 0, 0, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_356, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_356);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_316, uLocal_356);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_356);
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 0, 1, 1);
				MISC::CREATE_INCIDENT(3, -539.4481f, -962.3162f, 22.4918f, 4, 0f, &uLocal_531);
				iLocal_350 = MISC::GET_GAME_TIMER();
				iLocal_347++;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_316))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_350) > 6400)
				{
					Var0 = { -477.2774f, -990.0638f, 23.5497f };
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_321))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_321, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_319))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_319, -477.2774f, -990.0638f, 23.5497f, 3f, 3f, 3f, 0, 1, 0))
						{
							Var0 = { -477.7884f, -996.3974f, 23.5503f };
						}
					}
					TASK::OPEN_SEQUENCE_TASK(&uLocal_356);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_PICNIC", Var0, 304.8172f, 0, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_356);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_316, uLocal_356);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_356);
					func_23(&uLocal_357, "CONACAU", "CONAC_THANK", 4, 0, 0, 0);
					func_46();
				}
			}
			else
			{
				func_88();
			}
			break;
	}
}

void func_46()//Position - 0x26A7
{
	while (!func_73())
	{
		SYSTEM::WAIT(0);
	}
	func_69(func_29(), 4, 2);
	func_50(-1, 0);
	func_47();
	iLocal_300 = 2;
}

void func_47()//Position - 0x26D7
{
	func_48();
}

int func_48()//Position - 0x26E4
{
	if (func_49(0))
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

bool func_49(bool bParam0)//Position - 0x272F
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

void func_50(int iParam0, int iParam1)//Position - 0x275A
{
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_66(iParam0))
	{
		func_65(iParam0, iParam1);
		if (!func_64(51))
		{
			func_60("RE_REWARD", 1, 0, 4000, 10000, func_63(), 0, 138, 0);
			func_59(51);
		}
		if (func_58(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (func_57(iParam0, iParam1) != 322)
		{
			func_52(func_57(iParam0, iParam1), Local_42.x, Local_42.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				func_51(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				func_51(7);
			}
			else
			{
				func_51(1);
			}
		}
	}
}

void func_51(int iParam0)//Position - 0x285E
{
	Global_97339 = iParam0;
}

void func_52(int iParam0, var uParam1, var uParam2)//Position - 0x286C
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
		func_56((891 + iParam0), 1, -1, 1);
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
		func_53();
	}
}

void func_53()//Position - 0x2954
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
		func_55(13, SYSTEM::FLOOR(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_68245)
		{
			if (func_54() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_48();
				}
			}
		}
	}
}

int func_54()//Position - 0x2E15
{
	return Global_24444;
}

int func_55(int iParam0, int iParam1)//Position - 0x2E20
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

int func_56(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2E71
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
		iParam2 = func_7();
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

int func_57(int iParam0, int iParam1)//Position - 0x30CE
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

int func_58(int iParam0)//Position - 0x3442
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

void func_59(int iParam0)//Position - 0x3471
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

void func_60(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x34B3
{
	func_61(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_61(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x34D4
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
		func_62();
	}
}

void func_62()//Position - 0x36A7
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

int func_63()//Position - 0x37C7
{
	func_30();
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

int func_64(int iParam0)//Position - 0x380D
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

void func_65(int iParam0, int iParam1)//Position - 0x3850
{
	MISC::SET_BIT(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_VAR_COMPLETE[iParam0]), iParam1);
}

int func_66(int iParam0)//Position - 0x386B
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

int func_67()//Position - 0x391C
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_68(Var0);
	return uVar16;
}

int func_68(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x3939
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

void func_69(int iParam0, int iParam1, int iParam2)//Position - 0x3B13
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1475[iParam1 /*4*/][iParam0] = (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 2903;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 2903)
			{
				iVar0 = func_72(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_70(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3C02
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_71(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_71(var uParam0)//Position - 0x3C2D
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

int func_72(int iParam0, int iParam1, int iParam2)//Position - 0x3C61
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_71(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_73()//Position - 0x3C93
{
	return 1;
}

var func_74(int iParam0, bool bParam1, int iParam2)//Position - 0x3C9C
{
	var uVar0;
	
	uVar0 = func_75(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)//Position - 0x3CEE
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(uVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_76(bool bParam0, float fParam1, float fParam2)//Position - 0x3D92
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_77(int iParam0)//Position - 0x3DA9
{
	if (func_81())
	{
		Global_97343 = 1;
		Global_97340 = MISC::GET_GAME_TIMER();
		if (func_58(Global_97342))
		{
			func_78(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_58(Global_97342))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_78(int iParam0)//Position - 0x3DFC
{
	switch (iParam0)
	{
		case 0:
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_79(func_80(iParam0), -1);
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
					func_79(func_80(iParam0), -1);
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
					func_79(func_80(iParam0), -1);
					Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_ITEM_HELP_COUNT++;
					MISC::SET_BIT(&Global_97349, 2);
				}
			}
			break;
	}
}

void func_79(var uParam0, int iParam1)//Position - 0x3EDD
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_80(int iParam0)//Position - 0x3EF4
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

int func_81()//Position - 0x3F37
{
	switch (func_82(&Global_24503, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_82(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x3F6D
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
		if (func_86(0))
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
		if (!func_84(iParam2))
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
			func_83(uParam0, iParam4);
		}
	}
	return 2;
}

void func_83(var uParam0, int iParam1)//Position - 0x40A5
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

bool func_84(int iParam0)//Position - 0x40F4
{
	return func_85(iParam0, Global_34913);
}

int func_85(int iParam0, int iParam1)//Position - 0x4105
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

int func_86(int iParam0)//Position - 0x42E6
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_84(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_87(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4308
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

void func_88()//Position - 0x43E8
{
	AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
	iLocal_300 = 2;
}

int func_89(int iParam0, bool bParam1, bool bParam2)//Position - 0x43FC
{
	return func_75(iParam0, !bParam1, bParam2);
}

void func_90()//Position - 0x440F
{
	if (func_92(1000))
	{
		func_39();
		CAM::DO_SCREEN_FADE_OUT(800);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_318))
		{
			VEHICLE::SET_VEHICLE_DAMAGE(iLocal_318, 0f, 1f, 1f, 200f, 800f, 1);
		}
		bLocal_535 = true;
		iLocal_302 = 8;
	}
	switch (iLocal_302)
	{
		case 0:
			func_2(1, 1, 1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			HUD::CLEAR_ALL_HELP_MESSAGES();
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
			}
			MISC::CLEAR_AREA_OF_PEDS(Local_307, 50f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(Local_307, 30f, 0, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(Local_307, 100f, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_307, 8f, 8f, 8f, 0, 1, 0))
				{
					uLocal_320 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_320, 1, 0);
					VEHICLE::DELETE_VEHICLE(&iLocal_320);
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -473.1686f, -984.6405f, 22.487f, 15f, 15f, 5f, 0, 1, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -477.3538f, -972.67f, 22.5494f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 237.4839f);
			}
			uLocal_529 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, -0.1371f, -0.0346f, -29.6605f, 28f, 1, 2);
			uLocal_530 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -462.711f, -992.5728f, 23.8729f, 69.4831f, -0.0346f, -40.8884f, 28f, 1, 2);
			CAM::SHAKE_CAM(uLocal_529, "HAND_SHAKE", 0.3f);
			CAM::SHAKE_CAM(uLocal_530, "HAND_SHAKE", 0.3f);
			func_91();
			CAM::SET_CAM_ACTIVE(uLocal_529, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			SYSTEM::WAIT(500);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_530, uLocal_529, 3500, 1, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_START");
			iLocal_353 = MISC::GET_GAME_TIMER();
			iLocal_302 = 1;
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - iLocal_353) > 3500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAKEN", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_349, "WIND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uLocal_326[0], 1);
				uLocal_529 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -455.4617f, -990.631f, 61.6885f, -89.0761f, -0.0146f, -49.881f, 80.5355f, 1, 2);
				uLocal_530 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -455.4543f, -990.6208f, 61.012f, -89.0759f, -0.0146f, -47.8226f, 80.5355f, 1, 2);
				CAM::SHAKE_CAM(uLocal_529, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(uLocal_530, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_530, uLocal_529, 4000, 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_316))
				{
					TASK::CLEAR_PED_TASKS(iLocal_316);
					TASK::TASK_LOOK_AT_COORD(iLocal_316, -461.4785f, -984.8583f, 28.0809f, 30000, 2080, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_339))
				{
					ENTITY::DETACH_ENTITY(iLocal_339, 1, 1);
					OBJECT::DELETE_OBJECT(&iLocal_339);
				}
				iLocal_353 = MISC::GET_GAME_TIMER();
				iLocal_302 = 2;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_353) > 1500)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CABLE_SNAPS", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
				iLocal_353 = MISC::GET_GAME_TIMER();
				iLocal_302 = 3;
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_353) > 500)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_326[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_326[0], 0);
					ENTITY::APPLY_FORCE_TO_ENTITY(uLocal_326[0], 0, 0f, 0f, 5f, 0f, -2f, 2f, 0, 1, 1, 1, 0, 1);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(uLocal_326[0], 11, 0);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(uLocal_326[0], 18, 0);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(uLocal_326[0], 19, 0);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(uLocal_326[0], 23, 0);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(uLocal_326[0], 9, 0);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(uLocal_326[0], 12, 0);
					OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(uLocal_326[0], 17, 0);
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_reconstruct_pipefall_debris", uLocal_326[0], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				iLocal_353 = MISC::GET_GAME_TIMER();
				iLocal_302 = 4;
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_353) > 2000)
			{
				uLocal_529 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 25.437f, -0.0087f, -118.3831f, 34f, 1, 2);
				uLocal_530 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -470.5648f, -976.951f, 24.2657f, 2.0695f, -0.0087f, -120.2811f, 34f, 1, 2);
				CAM::SHAKE_CAM(uLocal_529, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(uLocal_530, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_530, uLocal_529, 1000, 3, 3);
				AUDIO::STOP_SOUND(iLocal_349);
				iLocal_353 = MISC::GET_GAME_TIMER();
				iLocal_302 = 5;
			}
			break;
		
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_353) > 500)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_318))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_318, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PIPES_LAND", "CONSTRUCTION_ACCIDENT_1_SOUNDS", 1);
					VEHICLE::SET_VEHICLE_DAMAGE(iLocal_318, 0f, 1f, 1f, 200f, 800f, 1);
					if (!PED::IS_PED_INJURED(iLocal_316))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_316);
					}
					TASK::TASK_PLAY_ANIM(iLocal_316, "re@construction", "idle_panic", 8f, -8f, -1, 16, 0f, 0, 0, 0);
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_reconstruct_pipe_impact", iLocal_318, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
					func_23(&uLocal_357, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
					if (CAM::DOES_CAM_EXIST(uLocal_529) && CAM::DOES_CAM_EXIST(uLocal_530))
					{
						CAM::SHAKE_CAM(uLocal_529, "HAND_SHAKE", 1.5f);
						CAM::SHAKE_CAM(uLocal_530, "HAND_SHAKE", 1.5f);
					}
					iLocal_353 = MISC::GET_GAME_TIMER();
					iLocal_302 = 6;
				}
			}
			break;
		
		case 6:
			if ((MISC::GET_GAME_TIMER() - iLocal_353) > 500)
			{
				uLocal_529 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -459.2609f, -987.5602f, 24.2611f, 0.583f, 0.2617f, -32.7532f, 49.9914f, 1, 2);
				uLocal_530 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -459.0622f, -987.2584f, 24.2661f, 5.0301f, 0.2617f, -36.7308f, 49.9914f, 1, 2);
				CAM::SHAKE_CAM(uLocal_529, "HAND_SHAKE", 0.5f);
				CAM::SHAKE_CAM(uLocal_530, "HAND_SHAKE", 0.5f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_530, uLocal_529, 2500, 3, 3);
				if (!PED::IS_PED_INJURED(iLocal_316))
				{
					TASK::TASK_LOOK_AT_COORD(iLocal_316, ENTITY::GET_ENTITY_COORDS(iLocal_316, 1) - Vector(10f, 0f, 2f), 30000, 2080, 2);
				}
				iLocal_353 = MISC::GET_GAME_TIMER();
				iLocal_302 = 7;
			}
			break;
		
		case 7:
			if ((MISC::GET_GAME_TIMER() - iLocal_353) > 2200 && !iLocal_345)
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_345 = 1;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_353) > 2500)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_318, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_318, 1);
				}
				iLocal_302 = 8;
			}
			break;
		
		case 8:
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_PIPES");
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_326[0]))
			{
				OBJECT::DELETE_OBJECT(&(uLocal_326[0]));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_318, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_318, 250f);
				ENTITY::SET_ENTITY_COORDS(iLocal_318, Local_307, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_318, 80f);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_307, 50f, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_316))
			{
				TASK::CLEAR_PED_TASKS(iLocal_316);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_316);
				TASK::TASK_PLAY_ANIM(iLocal_316, "re@construction", "idle_panic", 8f, -8f, -1, 1, 0f, 0, 0, 0);
			}
			CAM::SET_CAM_ACTIVE(uLocal_529, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(uLocal_529, 0);
			CAM::DESTROY_CAM(uLocal_530, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
			func_2(0, 1, 1, 0);
			iLocal_350 = MISC::GET_GAME_TIMER();
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pipe_stack_01"));
			uLocal_326[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -457.8815f, -988.9059f, 22.9554f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_326[1], -0.1939f, 105.0058f, 77.3964f, 2, 1);
			uLocal_326[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -451.5131f, -986.8079f, 24.6947f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_326[2], 24.3941f, 32.5423f, 80.6862f, 2, 1);
			uLocal_326[3] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -450.8099f, -985.9972f, 24.7104f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_326[3], 24.1841f, 110.287f, 78.4357f, 2, 1);
			uLocal_326[4] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.6558f, -987.3979f, 22.9537f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_326[4], -0.0264f, 29.5754f, 79.1811f, 2, 1);
			uLocal_326[5] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.1279f, -988.4162f, 22.9889f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_326[5], -0.6337f, 108.4339f, 77.9539f, 2, 1);
			uLocal_326[6] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -457.0807f, -987.3059f, 23.7564f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_326[6], 0.0929f, 74.2657f, 79.3839f, 2, 1);
			uLocal_326[7] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.6558f, -983.7804f, 22.9712f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_326[7], -0.0264f, 29.5754f, 80.9061f, 2, 1);
			uLocal_326[8] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -455.3279f, -983.1712f, 22.9564f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_326[8], -0.1087f, 109.7339f, 80.9789f, 2, 1);
			uLocal_326[9] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -456.1632f, -983.9359f, 23.7964f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_326[9], -0.3321f, 74.1907f, 81.6089f, 2, 1);
			uLocal_326[10] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_pipe_single_01"), -454.644f, -994.1709f, 23.3329f, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(uLocal_326[10], 5.7811f, 104.6058f, 104.6964f, 2, 1);
			iLocal_346 = 0;
			while (iLocal_346 < 11)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_326[iLocal_346]))
				{
					ENTITY::SET_ENTITY_DYNAMIC(uLocal_326[iLocal_346], 1);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_326[iLocal_346], 1);
				}
				iLocal_346++;
			}
			if (bLocal_535)
			{
				CAM::DO_SCREEN_FADE_IN(800);
				while (CAM::IS_SCREEN_FADING_IN())
				{
					SYSTEM::WAIT(0);
				}
			}
			iLocal_341 = 1;
			iLocal_340 = 0;
			break;
	}
}

void func_91()//Position - 0x4F26
{
	AUDIO::START_PRELOADED_CONVERSATION();
	Global_16684 = 0;
}

int func_92(int iParam0)//Position - 0x4F36
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
			if (func_93())
			{
				Global_26 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_93()//Position - 0x4F80
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

int func_94(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x4FB2
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_16685 = 1;
	Global_16689 = 0;
	Global_16687 = iParam7;
	Global_2621441 = 0;
	return func_24(sParam2, iParam3, 0);
}

void func_95(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5005
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

int func_96(var uParam0)//Position - 0x50A0
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_97(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_97(var uParam0)//Position - 0x5102
{
	return func_98(*uParam0, "NULL", uParam0->f_1);
}

int func_98(var uParam0, char* sParam1, int iParam2)//Position - 0x5117
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(uParam0, 29))
		{
			switch (func_99(uParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(uParam2);
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
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(uParam0, 27));
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

int func_99(var uParam0)//Position - 0x520A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::IS_BIT_SET(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_100(var uParam0)//Position - 0x5236
{
	func_101(uParam0, 9, -1, 0);
}

void func_101(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5248
{
	int iVar0;
	
	if (!func_102(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
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
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			MISC::SET_BIT(uParam0[iVar0 /*2*/], iParam1);
			MISC::SET_BIT(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_102(int iParam0)//Position - 0x530B
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_103(var uParam0, int iParam1)//Position - 0x53AA
{
	func_101(uParam0, 0, iParam1, 0);
}

void func_104(var uParam0)//Position - 0x53BC
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_32 + uParam0->f_33) || MISC::IS_BIT_SET(Global_89962.f_20, 2)) || MISC::IS_BIT_SET(Global_89962.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
					{
						func_105(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_105(var uParam0)//Position - 0x5446
{
	func_106(uParam0, "NULL", uParam0->f_1);
}

void func_106(var uParam0, char* sParam1, int iParam2)//Position - 0x545A
{
	if (MISC::IS_BIT_SET(*uParam0, 30))
	{
		switch (func_99(*uParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(uParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
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

void func_107()//Position - 0x5533
{
	int iVar0;
	
	func_103(&Local_536, joaat("bulldozer"));
	func_103(&Local_536, joaat("utillitruck2"));
	func_103(&Local_536, joaat("prop_pipe_stack_01"));
	if (func_96(&Local_536))
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("utillitruck2"), 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_304 + Vector(50f, 50f, 50f), Local_304 - Vector(50f, 50f, 50f), 0, 1, 1, 1);
		Local_307 = { -455.6561f, -985.8071f, 22.4868f };
		iLocal_318 = VEHICLE::CREATE_VEHICLE(joaat("utillitruck2"), Local_307, 80f, 1, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_318, 0, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_318, 3);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_318, 1, 1);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_318, 2, 1);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_318, 3, 0);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_318, 4, 1);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_318, 5, 1);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_318, 6, 0);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_318, 7, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_318, 1);
		ENTITY::SET_ENTITY_PROOFS(iLocal_318, 0, 0, 0, 1, 0, 0, 0, 0);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_318, 10000);
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_318, 5f);
		iLocal_319 = VEHICLE::CREATE_VEHICLE(joaat("bulldozer"), -472.9444f, -966.671f, 22.5534f, 181.8365f, 1, 1);
		MISC::CLEAR_AREA(Local_307, 10f, 1, 0, 0, 0);
		uLocal_326[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pipe_stack_01"), -453.2f, -986.1f, 59.45f, 1, 1, 0);
		ENTITY::SET_ENTITY_HEADING(uLocal_326[0], 90f);
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_326[0], 1);
		ENTITY::SET_ENTITY_PROOFS(uLocal_326[0], 1, 1, 1, 1, 0, 0, 0, 0);
		ENTITY::SET_ENTITY_LOD_DIST(uLocal_326[0], 10000000);
		Local_228[0 /*5*/] = { Local_525 };
		Local_228[1 /*5*/] = { Local_525 + Vector(0f, 0.5f, 0f) };
		Local_228[2 /*5*/] = { Local_525 + Vector(0f, 1f, 0f) };
		Local_228[3 /*5*/] = { Local_525 + Vector(0f, 2.5f, 0f) };
		Local_228[4 /*5*/] = { Local_525 + Vector(0f, 3f, 0f) };
		Local_228[5 /*5*/] = { Local_525 + Vector(0f, 3.5f, 0f) };
		Local_228[6 /*5*/] = { Local_525 + Vector(0f, 4f, 0f) };
		Local_228[7 /*5*/] = { Local_525 + Vector(0f, 4.5f, 0f) };
		Local_228[8 /*5*/] = { Local_525 + Vector(0f, 5f, 0f) };
		Local_228[9 /*5*/] = { Local_525 + Vector(0f, 5.5f, 0f) };
		Local_228[10 /*5*/] = { Local_525 + Vector(0f, 6f, 0f) };
		Local_228[11 /*5*/] = { Local_525 + Vector(0f, 6.5f, 0f) };
		Local_228[12 /*5*/] = { Local_525 + Vector(0f, 7f, 0f) };
		Local_228[13 /*5*/] = { Local_522 };
		iVar0 = 0;
		while (iVar0 < Local_228)
		{
			Local_228[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (!HUD::DOES_BLIP_EXIST(uLocal_325))
		{
		}
		func_108(&Local_536, 0);
		iLocal_533 = 1;
		iLocal_300 = 1;
	}
}

void func_108(var uParam0, bool bParam1)//Position - 0x5816
{
	int iVar0;
	
	if (!bParam1)
	{
		func_110(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_109(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_109(var uParam0)//Position - 0x5856
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_110(var uParam0)//Position - 0x5867
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			func_111(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_111(var uParam0)//Position - 0x58A0
{
	func_112(*uParam0, "NULL", uParam0->f_1);
}

void func_112(var uParam0, char* sParam1, int iParam2)//Position - 0x58B5
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		switch (func_99(uParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, MISC::IS_BIT_SET(uParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

int func_113()//Position - 0x5975
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_124())
		{
			return 0;
		}
	}
	if (func_120())
	{
		return 1;
	}
	if (func_114(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_114(float fParam0, bool bParam1)//Position - 0x59FB
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
		if (func_31(func_29()))
		{
			iVar36 = func_63();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 3))
				{
					func_115(iVar32, &Var0);
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

void func_115(int iParam0, var uParam1)//Position - 0x5AB2
{
	switch (iParam0)
	{
		case 0:
			func_116(uParam1, "Abigail1", func_118(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 1:
			func_116(uParam1, "Abigail2", func_118(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 2:
			func_116(uParam1, "Barry1", func_118(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 3:
			func_116(uParam1, "Barry2", func_118(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 4:
			func_116(uParam1, "Barry3", func_118(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 5:
			func_116(uParam1, "Barry3A", func_118(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 6:
			func_116(uParam1, "Barry3C", func_118(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 7:
			func_116(uParam1, "Barry4", func_118(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_117(iParam0), 0, 0);
			break;
		
		case 8:
			func_116(uParam1, "Dreyfuss1", func_118(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 9:
			func_116(uParam1, "Epsilon1", func_118(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 10:
			func_116(uParam1, "Epsilon2", func_118(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 11:
			func_116(uParam1, "Epsilon3", func_118(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 12:
			func_116(uParam1, "Epsilon4", func_118(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 13:
			func_116(uParam1, "Epsilon5", func_118(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 14:
			func_116(uParam1, "Epsilon6", func_118(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 15:
			func_116(uParam1, "Epsilon7", func_118(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 16:
			func_116(uParam1, "Epsilon8", func_118(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 17:
			func_116(uParam1, "Extreme1", func_118(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 18:
			func_116(uParam1, "Extreme2", func_118(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 19:
			func_116(uParam1, "Extreme3", func_118(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 20:
			func_116(uParam1, "Extreme4", func_118(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 21:
			func_116(uParam1, "Fanatic1", func_118(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_117(iParam0), 1, 0);
			break;
		
		case 22:
			func_116(uParam1, "Fanatic2", func_118(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_117(iParam0), 1, 0);
			break;
		
		case 23:
			func_116(uParam1, "Fanatic3", func_118(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_117(iParam0), 0, 1);
			break;
		
		case 24:
			func_116(uParam1, "Hao1", func_118(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_117(iParam0), 0, 1);
			break;
		
		case 25:
			func_116(uParam1, "Hunting1", func_118(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 26:
			func_116(uParam1, "Hunting2", func_118(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 27:
			func_116(uParam1, "Josh1", func_118(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 28:
			func_116(uParam1, "Josh2", func_118(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 29:
			func_116(uParam1, "Josh3", func_118(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 30:
			func_116(uParam1, "Josh4", func_118(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 31:
			func_116(uParam1, "Maude1", func_118(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 32:
			func_116(uParam1, "Minute1", func_118(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 33:
			func_116(uParam1, "Minute2", func_118(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 34:
			func_116(uParam1, "Minute3", func_118(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 35:
			func_116(uParam1, "MrsPhilips1", func_118(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 36:
			func_116(uParam1, "MrsPhilips2", func_118(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 37:
			func_116(uParam1, "Nigel1", func_118(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 38:
			func_116(uParam1, "Nigel1A", func_118(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 39:
			func_116(uParam1, "Nigel1B", func_118(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
		
		case 40:
			func_116(uParam1, "Nigel1C", func_118(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
		
		case 41:
			func_116(uParam1, "Nigel1D", func_118(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
		
		case 42:
			func_116(uParam1, "Nigel2", func_118(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 43:
			func_116(uParam1, "Nigel3", func_118(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
		
		case 44:
			func_116(uParam1, "Omega1", func_118(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 45:
			func_116(uParam1, "Omega2", func_118(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 46:
			func_116(uParam1, "Paparazzo1", func_118(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 47:
			func_116(uParam1, "Paparazzo2", func_118(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 48:
			func_116(uParam1, "Paparazzo3", func_118(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 49:
			func_116(uParam1, "Paparazzo3A", func_118(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 50:
			func_116(uParam1, "Paparazzo3B", func_118(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 51:
			func_116(uParam1, "Paparazzo4", func_118(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 52:
			func_116(uParam1, "Rampage1", func_118(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 54:
			func_116(uParam1, "Rampage3", func_118(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 55:
			func_116(uParam1, "Rampage4", func_118(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 56:
			func_116(uParam1, "Rampage5", func_118(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
		
		case 53:
			func_116(uParam1, "Rampage2", func_118(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
		
		case 57:
			func_116(uParam1, "TheLastOne", func_118(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 58:
			func_116(uParam1, "Tonya1", func_118(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 59:
			func_116(uParam1, "Tonya2", func_118(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 60:
			func_116(uParam1, "Tonya3", func_118(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 61:
			func_116(uParam1, "Tonya4", func_118(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		case 62:
			func_116(uParam1, "Tonya5", func_118(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_116(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x6C67
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

int func_117(int iParam0)//Position - 0x6CF8
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

struct<2> func_118(int iParam0)//Position - 0x703E
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_119(iParam0) };
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

struct<2> func_119(int iParam0)//Position - 0x7075
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

int func_120()//Position - 0x74C1
{
	if (func_123() && !func_124())
	{
		return 1;
	}
	if (func_122() && func_121())
	{
		return 1;
	}
	return 0;
}

bool func_121()//Position - 0x74F3
{
	return Global_97071 > 0;
}

int func_122()//Position - 0x7501
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_123()//Position - 0x7516
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_124()//Position - 0x753C
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

int func_125()//Position - 0x7559
{
	if (!func_84(5))
	{
		return 1;
	}
	if (func_120())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_124())
		{
			return 0;
		}
	}
	if (func_114(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_126()//Position - 0x75BB
{
	if ((Global_97342 == func_67() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_97343)
	{
		return 1;
	}
	return 0;
}

void func_127(int iParam0)//Position - 0x75E6
{
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_129(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_97339 = 0;
	func_128();
}

void func_128()//Position - 0x761C
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

void func_129(int iParam0)//Position - 0x7659
{
	Global_97342 = iParam0;
}

int func_130(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x7667
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
		iParam3 = func_67();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_171())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_124())
			{
				return 0;
			}
		}
		if (!Global_SAVE_DATA.isGameflowActive)
		{
			return 0;
		}
		if (func_49(0))
		{
			return 0;
		}
		if (func_120())
		{
			return 0;
		}
		if (func_170())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (func_31(func_29()))
		{
			if (func_114(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_169(iParam3))
		{
			return 0;
		}
		if (func_31(func_29()))
		{
			if (func_168(func_29()) == 4 || func_168(func_29()) == 5)
			{
				return 0;
			}
		}
		if (func_31(func_29()))
		{
			if (!func_167(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_166(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam3]))
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
		if (func_165())
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
		if (!func_156(4))
		{
			return 0;
		}
		if (!func_84(5))
		{
			return 0;
		}
		if (func_155(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_155(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_169(30) && !func_155(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_31(func_29()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar4 /*3*/] };
				iVar8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar4];
				if (func_154(iVar8))
				{
					if (func_132(iVar4))
					{
						if (!func_131(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (func_29() != iVar4)
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

bool func_131(struct<3> Param0, struct<3> Param3)//Position - 0x7A00
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_132(int iParam0)//Position - 0x7A29
{
	int iVar0;
	
	iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0];
	return func_133(iVar0);
}

int func_133(int iParam0)//Position - 0x7A4A
{
	return func_134(iParam0, 1);
}

int func_134(int iParam0, int iParam1)//Position - 0x7A59
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_154(iParam0))
	{
		return 0;
	}
	func_135(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7AAC
{
	func_136(func_147(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_136(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x7ACA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_146(iParam0, iParam1))
	{
		iVar0 = func_145(iParam1);
		iVar1 = func_143(iParam0);
		iVar2 = (func_143(iParam0) - func_143(iParam1));
		iVar3 = (func_145(iParam0) - func_145(iParam1));
		iVar4 = (func_142(iParam0) - func_142(iParam1));
		iVar5 = (func_141(iParam0) - func_141(iParam1));
		iVar6 = (func_140(iParam0) - func_140(iParam1));
		iVar7 = (func_139(iParam0) - func_139(iParam1));
	}
	else
	{
		iVar0 = func_145(iParam0);
		iVar1 = func_143(iParam1);
		iVar2 = (func_143(iParam1) - func_143(iParam0));
		iVar3 = (func_145(iParam1) - func_145(iParam0));
		iVar4 = (func_142(iParam1) - func_142(iParam0));
		iVar5 = (func_141(iParam1) - func_141(iParam0));
		iVar6 = (func_140(iParam1) - func_140(iParam0));
		iVar7 = (func_139(iParam1) - func_139(iParam0));
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
		iVar4 = (iVar4 + func_138(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_137(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_137(float fParam0, float fParam1, float fParam2)//Position - 0x7CCB
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

int func_138(int iParam0, int iParam1)//Position - 0x7D0D
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

int func_139(int iParam0)//Position - 0x7DAF
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_140(int iParam0)//Position - 0x7DC2
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_141(int iParam0)//Position - 0x7DD5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_142(int iParam0)//Position - 0x7DE8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_143(int iParam0)//Position - 0x7DFA
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_144(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_144(bool bParam0, int iParam1, int iParam2)//Position - 0x7E1F
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_145(int iParam0)//Position - 0x7E36
{
	return iParam0 & 15;
}

int func_146(int iParam0, int iParam1)//Position - 0x7E43
{
	int iVar0;
	int iVar1;
	
	if (!func_154(iParam1) || !func_154(iParam0))
	{
		return 1;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_147()//Position - 0x7F4F
{
	var uVar0;
	
	func_153(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_152(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_151(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_150(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_149(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_148(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_148(var uParam0, int iParam1)//Position - 0x7F95
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

void func_149(var uParam0, int iParam1)//Position - 0x801D
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_150(var uParam0, int iParam1)//Position - 0x8050
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_145(*uParam0);
	iVar1 = func_143(*uParam0);
	if (iParam1 < 1 || iParam1 > func_138(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_151(var uParam0, int iParam1)//Position - 0x80A1
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_152(var uParam0, int iParam1)//Position - 0x80DB
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_153(var uParam0, int iParam1)//Position - 0x8116
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_154(int iParam0)//Position - 0x8152
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
	iVar0 = func_139(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_140(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_141(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_143(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_145(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_142(iParam0);
	if (iVar5 < 1 || iVar5 > func_138(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_155(int iParam0, int iParam1)//Position - 0x822E
{
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_VAR_COMPLETE[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_156(int iParam0)//Position - 0x8251
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_29();
				if (!func_31(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_164()) || Global_96400) || Global_24446) || func_163()) || func_36(8, -1)) || func_162()) || func_161()) || func_160()) || func_159()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_164()) || Global_24446) || func_163()) || func_36(8, -1)) || func_160()) || func_162()) || func_161()) || func_159()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_164()) || Global_96400) || Global_24446) || func_163()) || func_36(8, -1)) || func_160()) || func_162()) || func_161()) || func_159()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_164()) || Global_96400) || Global_24446) || func_163()) || func_36(8, -1)) || func_162()) || func_161()) || func_159()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_164() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_36(8, -1)) || func_159()) || func_158()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_36(8, -1) || func_162()) || func_161()) || func_158()) || func_157())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_164()) || Global_24446) || func_163()) || func_36(8, -1)) || func_161()) || func_160()) || func_159()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_164()) || func_161()) || Global_96400) || Global_24446) || func_163()) || Global_35957) || func_36(8, -1)) || func_160()) || func_158()) || func_159()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_164()) || Global_96400) || Global_24446) || func_163()) || func_36(8, -1)) || func_160()) || func_158()) || func_162()) || func_161()) || func_159())
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

var func_157()//Position - 0x896E
{
	return Global_90001.f_1;
}

int func_158()//Position - 0x897C
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_159()//Position - 0x89A2
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_160()//Position - 0x89BC
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

bool func_161()//Position - 0x89E6
{
	return Global_90014.f_291 > 0;
}

bool func_162()//Position - 0x89F7
{
	return Global_90014.f_290 > 0;
}

var func_163()//Position - 0x8A08
{
	return Global_1315900;
}

int func_164()//Position - 0x8A14
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_165()//Position - 0x8A30
{
	func_28();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_166(int iParam0)//Position - 0x8A58
{
	return func_146(func_147(), iParam0);
}

int func_167(int iParam0, int iParam1, int iParam2)//Position - 0x8A6A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_29();
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

int func_168(int iParam0)//Position - 0x8B4E
{
	if (!func_31(iParam0))
	{
		return 7;
	}
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iParam0];
}

bool func_169(int iParam0)//Position - 0x8B72
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_171())
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

int func_170()//Position - 0x8BD0
{
	int iVar0;
	
	if (Global_24594)
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_171()//Position - 0x8C07
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

void func_172()//Position - 0x8C8A
{
	if (iLocal_533)
	{
		if (!iLocal_534)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
			func_204();
			if (!PED::IS_PED_INJURED(iLocal_316))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_316, 317, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_321))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_321, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_321, 50f, 50f, 50f, 0, 1, 0))
				{
					func_184(iLocal_321, 0, 145);
				}
			}
			iLocal_346 = 0;
			while (iLocal_346 < 11)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_326[iLocal_346]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_326[iLocal_346], 0);
				}
				iLocal_346++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_318))
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_318, 0f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_318, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_338))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_338, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			func_2(0, 1, 1, 0);
			iLocal_341 = 1;
			MISC::SET_TIME_SCALE(1f);
			STREAMING::REMOVE_ANIM_DICT("re@construction");
			if (CAM::DOES_CAM_EXIST(uLocal_528))
			{
				CAM::DESTROY_CAM(uLocal_528, 0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_322))
			{
				HUD::REMOVE_BLIP(&uLocal_322);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_323))
			{
				HUD::REMOVE_BLIP(&uLocal_323);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_324))
			{
				HUD::REMOVE_BLIP(&uLocal_324);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_325))
			{
				HUD::REMOVE_BLIP(&uLocal_325);
			}
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-460.3019f, -870.3607f, 21.89325f, -508.4859f, -981.1199f, 27.32087f, 36.5625f, 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	func_108(&Local_536, 0);
	func_173(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_173(int iParam0)//Position - 0x8E72
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_67();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_126())
	{
		func_177(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_97344 = MISC::GET_GAME_TIMER();
		func_176(30000);
		StringCopy(&cVar0, func_175(Global_97342, 1), 64);
		if (func_66(Global_97342) > 0)
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
	func_174(&Global_24503);
	Global_97343 = 0;
	func_129(-1);
}

void func_174(var uParam0)//Position - 0x8F27
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

char* func_175(int iParam0, bool bParam1)//Position - 0x8F64
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

void func_176(int iParam0)//Position - 0x91AD
{
	Global_35464 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_177(int iParam0)//Position - 0x91BF
{
	func_178(iParam0, 0, func_183(iParam0));
}

void func_178(int iParam0, int iParam1, int iParam2)//Position - 0x91D4
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_147();
	func_181(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_180(iParam0, &uVar0);
	Var1 = { func_179(&uVar0) };
}

struct<16> func_179(var uParam0)//Position - 0x9203
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_141(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_140(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_139(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_142(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_145(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_143(*uParam0), 64);
	return Var0;
}

void func_180(int iParam0, var uParam1)//Position - 0x92D3
{
	Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam0] = *uParam1;
}

void func_181(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x92EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_143(*uParam0);
	iVar1 = func_145(*uParam0);
	iVar2 = func_142(*uParam0);
	iVar3 = func_141(*uParam0);
	iVar4 = func_140(*uParam0);
	iVar5 = func_139(*uParam0);
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
	iVar6 = func_138(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_138(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_182(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_182(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x946D
{
	func_153(uParam0, iParam1);
	func_152(uParam0, iParam2);
	func_151(uParam0, iParam3);
	func_150(uParam0, iParam4);
	func_149(uParam0, iParam5);
	func_148(uParam0, iParam6);
}

int func_183(int iParam0)//Position - 0x94A5
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

int func_184(int iParam0, int iParam1, int iParam2)//Position - 0x9648
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			if (MISC::GET_HASH_KEY(uVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_185(iParam0, iParam2);
	return 1;
}

void func_185(int iParam0, int iParam1)//Position - 0x9688
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_190(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4800[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_42)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 = iParam1;
	Global_68043 = iParam0;
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 1;
	func_186(iParam0, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742));
}

void func_186(int iParam0, var uParam1)//Position - 0x9889
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_189(uParam1);
		uParam1->f_42 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_43 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_45 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_46 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_53), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_53), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_44 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 2:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_53), 23);
						MISC::SET_BIT(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_53), 23);
						MISC::CLEAR_BIT(&(uParam1->f_53), 22);
						break;
					
					case 4:
						MISC::SET_BIT(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_53), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 12);
		}
		func_188(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_53), func_187(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_53), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_53), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_53), 27);
		}
	}
}

int func_187(int iParam0)//Position - 0x9B35
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_188(int iParam0, var uParam1, var uParam2)//Position - 0x9BE5
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_189(var uParam0)//Position - 0x9CBF
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_190(int iParam0)//Position - 0x9D6F
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_202(iParam0, 0, 0)) || func_202(iParam0, 1, 0)) || func_202(iParam0, 2, 0)) || func_201(iParam0) != 145) || func_200(iParam0)) || func_199(iParam0)) || func_198(iParam0)) || func_197(iParam0)) || !func_191(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_199(iParam0))
		{
		}
		if (func_199(iParam0))
		{
		}
		if (func_202(iParam0, 0, 0))
		{
		}
		if (func_202(iParam0, 1, 0))
		{
		}
		if (func_202(iParam0, 2, 0))
		{
		}
		if (func_201(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_191(int iParam0)//Position - 0x9E4C
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_192(iParam0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_192(int iParam0)//Position - 0x9FFC
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_171())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_196() && !func_195()) && !func_194()) && !func_193()) && !func_171())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_194())
		{
			return 0;
		}
	}
	return 1;
}

int func_193()//Position - 0xA1CB
{
	return 0;
}

int func_194()//Position - 0xA1D4
{
	return 1;
}

int func_195()//Position - 0xA1DD
{
	return 1;
}

int func_196()//Position - 0xA1E6
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)//Position - 0xA1FF
{
	int iVar0;
	var uVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	uVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_192(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)//Position - 0xA244
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87728[iVar0]))
		{
			if (Global_87728[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_199(int iParam0)//Position - 0xA27F
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_87698[iVar0], 0))
			{
				if (Global_87698[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_87698[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_200(int iParam0)//Position - 0xA2FB
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[24]))
	{
		if (iParam0 == Global_67138.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67138.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_201(int iParam0)//Position - 0xA3E3
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				return Global_87708[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_202(int iParam0, int iParam1, bool bParam2)//Position - 0xA446
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_203(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_SAVE_DATA.RESPAWN_LOCATION_DATA[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_203(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xA4B7
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_204()//Position - 0xA58F
{
	Global_14558 = 0;
	func_205();
}

void func_205()//Position - 0xA59F
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

