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
		GlobalFunc_6828(-1);
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
			if (!GlobalFunc_6827())
			{
				if (GlobalFunc_10587())
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
					GlobalFunc_8277(&Local_536);
					break;
				
				case 1:
					func_21();
					GlobalFunc_8277(&Local_536);
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
		GlobalFunc_8316(0, 1, 1, 0);
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
						Local_58 = { GlobalFunc_2573() };
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
									if (GlobalFunc_105(Local_228[iVar5 + 1 /*5*/]))
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
			GlobalFunc_7550(&Local_536, joaat("s_m_m_dockwork_01"));
			GlobalFunc_7550(&Local_536, joaat("prop_generator_01a"));
			GlobalFunc_7550(&Local_536, joaat("p_amb_phone_01"));
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
					GlobalFunc_173(&uLocal_357, 3, iLocal_316, "RECONACWorker", 0, 1);
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
					GlobalFunc_10762(&uLocal_357, "CONACAU", "CONAC_CHAT", 4, 0, 0, 0, 0);
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
									uLocal_323 = GlobalFunc_6783(iLocal_318, 0, 0);
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
						if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -473.1686f, -984.6405f, 22.487f, 40f, 40f, 5f, 0, 1, 0) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && GlobalFunc_552(1, 0, 1)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_pipe_single_01")))
						{
							if (!GlobalFunc_6827())
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									iLocal_321 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								}
								GlobalFunc_9034(1);
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
								uLocal_323 = GlobalFunc_6783(iLocal_318, 0, 0);
							}
						}
						else if (!HUD::DOES_BLIP_EXIST(uLocal_322))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_323))
							{
								HUD::REMOVE_BLIP(&uLocal_323);
							}
							uLocal_322 = GlobalFunc_6797(iLocal_316, 0, 145);
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
								uLocal_323 = GlobalFunc_6783(iLocal_318, 0, 0);
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
										uLocal_323 = GlobalFunc_6783(iLocal_318, 0, 0);
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
									uLocal_324 = GlobalFunc_6783(iLocal_319, 0, 0);
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
									GlobalFunc_4956();
									SYSTEM::WAIT(0);
									GlobalFunc_10607(&uLocal_357, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
									while (GlobalFunc_111())
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




















void func_41()//Position - 0x1CD3
{
	switch (iLocal_352)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_316))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_350) > 3000)
				{
					GlobalFunc_10607(&uLocal_357, "CONACAU", "CONAC_HELP", 4, 0, 0, 0);
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
				if ((MISC::GET_GAME_TIMER() - iLocal_350) > 5000 && !GlobalFunc_111())
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
										uLocal_324 = GlobalFunc_6783(iLocal_319, 0, 0);
										if (HUD::DOES_BLIP_EXIST(uLocal_323))
										{
											HUD::REMOVE_BLIP(&uLocal_323);
										}
									}
								}
							}
							else if (!HUD::DOES_BLIP_EXIST(uLocal_324))
							{
								uLocal_324 = GlobalFunc_6783(iLocal_319, 0, 0);
								if (HUD::DOES_BLIP_EXIST(uLocal_323))
								{
									HUD::REMOVE_BLIP(&uLocal_323);
								}
							}
						}
					}
					if (iLocal_355 == joaat("bulldozer"))
					{
						GlobalFunc_10607(&uLocal_357, "CONACAU", "CONAC_HELP2", 4, 0, 0, 0);
					}
					else
					{
						GlobalFunc_10607(&uLocal_357, "CONACAU", "CONAC_HELP3", 4, 0, 0, 0);
					}
					iLocal_350 = MISC::GET_GAME_TIMER();
					iLocal_352++;
				}
			}
			break;
		
		case 3:
			if (MISC::GET_GAME_TIMER() - iLocal_350) > MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000)
			{
				if (!GlobalFunc_111())
				{
					GlobalFunc_10607(&uLocal_357, "CONACAU", "CONAC_HURRY", 4, 0, 0, 0);
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
							GlobalFunc_4956();
							SYSTEM::WAIT(0);
							GlobalFunc_10607(&uLocal_357, "CONACAU", "CONAC_DIE", 4, 0, 0, 0);
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
								GlobalFunc_4956();
								SYSTEM::WAIT(0);
								GlobalFunc_10607(&uLocal_357, "CONACAU", "CONAC_FREE", 4, 0, 0, 0);
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
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10607(&uLocal_357, "CONACAU", "CONAC_BOOM", 4, 0, 0, 0);
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
					GlobalFunc_10607(&uLocal_357, "CONACAU", "CONAC_AAAH", 4, 0, 0, 0);
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
					GlobalFunc_10607(&uLocal_357, "CONACAU", "CONAC_THANK", 4, 0, 0, 0);
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
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_8039(GlobalFunc_8315(), 4, 2);
	func_50(-1, 0);
	GlobalFunc_7068();
	iLocal_300 = 2;
}




void func_50(int iParam0, int iParam1)//Position - 0x275A
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
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8310(), 0, 138, 0);
			GlobalFunc_651(51);
		}
		if (GlobalFunc_827(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (GlobalFunc_4703(iParam0, iParam1) != 322)
		{
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_42.x, Local_42.f_1);
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






































void func_88()//Position - 0x43E8
{
	AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
	iLocal_300 = 2;
}


void func_90()//Position - 0x440F
{
	if (GlobalFunc_4926(1000))
	{
		GlobalFunc_4956();
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
			GlobalFunc_8316(1, 1, 1, 0);
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
			GlobalFunc_2207();
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
					GlobalFunc_10607(&uLocal_357, "CONACAU", "CONAC_SCREAM", 4, 0, 0, 0);
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
			GlobalFunc_8316(0, 1, 1, 0);
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
			switch (GlobalFunc_2270(uParam0))
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


void func_100(var uParam0)//Position - 0x5236
{
	GlobalFunc_6564(uParam0, 9, -1, 0);
}







void func_107()//Position - 0x5533
{
	int iVar0;
	
	GlobalFunc_7550(&Local_536, joaat("bulldozer"));
	GlobalFunc_7550(&Local_536, joaat("utillitruck2"));
	GlobalFunc_7550(&Local_536, joaat("prop_pipe_stack_01"));
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
		GlobalFunc_4708(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
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
		switch (GlobalFunc_2270(uParam0))
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
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
		{
			return 0;
		}
	}
	if (GlobalFunc_6562())
	{
		return 1;
	}
	if (GlobalFunc_9556(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
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
	Local_42 = { Param0 };
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
		if (GlobalFunc_4709())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (GlobalFunc_9556(100f, 1) != -1)
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
		if (!GlobalFunc_6563(iParam3))
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (GlobalFunc_6509(GlobalFunc_8315()) == 4 || GlobalFunc_6509(GlobalFunc_8315()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (!GlobalFunc_9557(iParam3, iParam4, 145))
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
		if (GlobalFunc_10548())
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
		if (!GlobalFunc_9039(4))
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
		if (GlobalFunc_42(GlobalFunc_8315()))
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
								if (GlobalFunc_8315() != iVar4)
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










































void func_172()//Position - 0x8C8A
{
	if (iLocal_533)
	{
		if (!iLocal_534)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("RE14A_FAIL");
			GlobalFunc_5105();
			if (!PED::IS_PED_INJURED(iLocal_316))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_316, 317, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_321))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_321, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_321, 50f, 50f, 50f, 0, 1, 0))
				{
					GlobalFunc_9554(iLocal_321, 0, 145);
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
			GlobalFunc_8316(0, 1, 1, 0);
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
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}


































