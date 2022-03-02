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
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<15> Local_51[14];
	struct<15> Local_262 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_277 = 0;
	struct<3> Local_278 = { 0, 0, 0 } ;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	var uLocal_286[5] = { 0, 0, 0, 0, 0 };
	int iLocal_292[5] = { 0, 0, 0, 0, 0 };
	int iLocal_298 = 0;
	int iLocal_299[5] = { 0, 0, 0, 0, 0 };
	int iLocal_305 = 0;
	var uLocal_306 = 0;
	float fLocal_307 = 0f;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	struct<3> Local_319 = { 0, 0, 0 } ;
	struct<3> Local_322 = { 0, 0, 0 } ;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	bool bLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	float fLocal_340 = 0f;
	float fLocal_341 = 0f;
	var uLocal_342 = 16;
	var uLocal_343 = 0;
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
	int iLocal_507 = 0;
	char* sLocal_508 = NULL;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	char* sLocal_513[22] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
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
	Local_319 = { 0f, 0f, 0f };
	Local_322 = { 0f, 0f, 0f };
	sLocal_508 = "RANDOM@BUS_TOUR_GUIDE@IDLE_A";
	iLocal_510 = 524459;
	iLocal_511 = 40;
	iLocal_541 = 7500;
	Local_278 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_305, 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_305, 2.5f, 1.5f, 0f), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(iLocal_305));
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
					AUDIO::STOP_AUDIO_SCENE("RE_BUS_TOUR_SCENE");
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_305, 0);
				}
			}
		}
		func_214();
	}
	if (!func_213())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_180(Local_278, 2, 0, 1, 0))
	{
		GlobalFunc_6828(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_175();
	GlobalFunc_587();
	while (true)
	{
		GlobalFunc_587();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (iLocal_311)
		{
			case 0:
				if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
				{
					if (func_213())
					{
						switch (iLocal_47)
						{
							case 0:
								func_169();
								break;
							
							case 1:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
								{
									if (PED::IS_PED_INJURED(iLocal_284) || PED::IS_PED_INJURED(uLocal_285))
									{
										func_214();
									}
									else
									{
										iLocal_311 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_214();
					}
				}
				else
				{
					func_214();
				}
				break;
			
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
				{
					func_1();
				}
				else
				{
					func_214();
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x205
{
	func_168();
	func_167();
	func_166();
	func_165();
	switch (iLocal_48)
	{
		case 0:
			func_111();
			break;
		
		case 1:
			func_83();
			break;
		
		case 2:
			func_82();
			func_2();
			break;
	}
}

void func_2()//Position - 0x24F
{
	char cVar0[64];
	
	StringCopy(&cVar0, "curiCurrentRambler ", 64);
	StringIntConCat(&cVar0, iLocal_507, 64);
	StringConCat(&cVar0, " ", 64);
	StringIntConCat(&cVar0, iLocal_277, 64);
	GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar0, 0.02f, 0.5f, 0f, 0, 0, 255, 255);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
	if (!PED::IS_PED_INJURED(iLocal_285) && !PED::IS_PED_INJURED(iLocal_284))
	{
		if (iLocal_536)
		{
			if (!GlobalFunc_111())
			{
				if (iLocal_507 < 14)
				{
					GlobalFunc_10726(&uLocal_342, "BUSTOAU", "BUSTO_RAMB", sLocal_513[iLocal_507], 4, 0, 0);
				}
				func_214();
			}
		}
		else if (!func_79())
		{
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_305) && iLocal_277 + 1 < 13)
				{
					func_214();
				}
			}
			if (!iLocal_316)
			{
				if (SYSTEM::TIMERA() > 12000)
				{
					func_77();
				}
			}
			else
			{
				GRAPHICS::DRAW_DEBUG_TEXT_2D("At_Point_Of_Interest TRUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
			}
			func_39();
			func_27();
			func_21(0);
			if (func_20(iLocal_305))
			{
				iLocal_315 = 1;
			}
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_305);
		}
		else
		{
			GlobalFunc_10699(&uLocal_342, "BUSTOAU", "BUSTO_THANK", "BUSTO_THANK_7", 4, 0, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_305, 3);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_305, 0);
			iLocal_536 = 1;
		}
	}
	else
	{
		func_214();
	}
}


















int func_20(int iParam0)//Position - 0xBD2
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_21(bool bParam0)//Position - 0xC16
{
	if (!bParam0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 225))
		{
			if (iLocal_318)
			{
				iLocal_318 = 0;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
				GRAPHICS::_0xEF398BEEE4EF45F9(1);
			}
			else
			{
				iLocal_318 = 1;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				GRAPHICS::_0xEF398BEEE4EF45F9(0);
			}
		}
	}
	if (iLocal_318 && !Local_51[13 /*15*/].f_9)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
		func_24();
	}
	else if (iLocal_316)
	{
		if (CAM::DOES_CAM_EXIST(uLocal_327))
		{
			CAM::DESTROY_CAM(uLocal_327, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 0, 1, 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			func_22(Local_51[iLocal_277 /*15*/].f_4, Local_51[iLocal_277 /*15*/].f_7);
		}
	}
	else if (CAM::DOES_CAM_EXIST(uLocal_327))
	{
		CAM::DESTROY_CAM(uLocal_327, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 0, 1, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
}

void func_22(struct<3> Param0, var uParam3)//Position - 0xCF1
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
	{
		if (!CAM::DOES_CAM_EXIST(uLocal_327) && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_262.f_4, 12f, 12f, 12f, 0, 1, 0))
			{
				CAM::SET_GAMEPLAY_COORD_HINT(Param0, uParam3, 3000, 3000, 0);
				func_23(Param0);
				iLocal_313 = MISC::GET_GAME_TIMER();
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_284))
		{
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_284, 3f);
		}
		iLocal_316 = 1;
	}
}

void func_23(struct<3> Param0)//Position - 0xD75
{
	int iVar0;
	int iVar1;
	
	iLocal_298 = MISC::GET_GAME_TIMER();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 16000);
		TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, iVar1, 0, 2);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!PED::IS_PED_INJURED(uLocal_286[iVar0]))
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 16000);
			iLocal_292[iVar0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2000);
			iLocal_299[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_24()//Position - 0xDF0
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar1 = 70f;
	fVar2 = -20f;
	fVar3 = 42f;
	fVar4 = -89f;
	fVar5 = 69f;
	fVar6 = 4f;
	Var7 = { 0.2f, 0.9f, -0.15f };
	if (CAM::DOES_CAM_EXIST(uLocal_327))
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			fVar6 = 8f;
		}
		else
		{
			fVar6 = 4f;
		}
		func_26();
		iVar10 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		iVar11 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		iVar12 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		iVar13 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		if (!PAD::IS_LOOK_INVERTED())
		{
			iVar11 = (iVar11 * -1);
			iVar13 = (iVar13 * -1);
		}
		if ((iVar13 > 28 || iVar13 < -28) || PAD::_IS_USING_KEYBOARD(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar13);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar13 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_341 = (fLocal_341 + fVar0);
			if (fLocal_341 < fVar2)
			{
				fLocal_341 = fVar2;
			}
			if (fLocal_341 > fVar3)
			{
				fLocal_341 = fVar3;
			}
		}
		if ((iVar12 > 28 || iVar12 < -28) || PAD::_IS_USING_KEYBOARD(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar12);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar12 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_340 = (fLocal_340 + fVar0);
			if (fLocal_340 < fVar4)
			{
				fLocal_340 = fVar4;
			}
			if (fLocal_340 > fVar5)
			{
				fLocal_340 = fVar5;
			}
		}
		if ((iVar11 > 28 || iVar11 < -28) || PAD::_IS_USING_KEYBOARD(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar11);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar11 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_341 = (fLocal_341 + fVar0);
			if (fLocal_341 < fVar2)
			{
				fLocal_341 = fVar2;
			}
			if (fLocal_341 > fVar3)
			{
				fLocal_341 = fVar3;
			}
		}
		if ((iVar10 > 28 || iVar10 < -28) || PAD::_IS_USING_KEYBOARD(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar10);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar10 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_340 = (fLocal_340 + fVar0);
			if (fLocal_340 < fVar4)
			{
				fLocal_340 = fVar4;
			}
			if (fLocal_340 > fVar5)
			{
				fLocal_340 = fVar5;
			}
		}
		func_25(PLAYER::PLAYER_PED_ID(), &uLocal_327, fLocal_341, 0f, fLocal_340);
		CAM::SET_CAM_FOV(uLocal_327, fVar1);
		CAM::ATTACH_CAM_TO_ENTITY(uLocal_327, PLAYER::PLAYER_PED_ID(), Var7.x, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
	}
	else
	{
		uLocal_327 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		CAM::ATTACH_CAM_TO_ENTITY(uLocal_327, PLAYER::PLAYER_PED_ID(), Var7.x, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
		CAM::SET_CAM_NEAR_CLIP(uLocal_327, 0.01f);
		fLocal_340 = -70f;
		fLocal_341 = 3f;
		func_25(PLAYER::PLAYER_PED_ID(), &uLocal_327, fLocal_341, 0f, fLocal_340);
		CAM::SET_CAM_FOV(uLocal_327, fVar1);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 2000, 1, 0, 0);
	}
}

void func_25(int iParam0, var uParam1, struct<3> Param2)//Position - 0x1139
{
	var uVar0;
	struct<3> Var1;
	
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (CAM::DOES_CAM_EXIST(*uParam1))
		{
			uVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
			Var1.x = 0f;
			Var1.f_1 = 0f;
			Var1.f_2 = uVar0;
			Var1 = { Var1 + Param2 };
			CAM::SET_CAM_ROT(*uParam1, Var1.x, Var1.f_1, Var1.f_2, 2);
		}
	}
}

void func_26()//Position - 0x118A
{
	struct<3> Var0;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(uLocal_286[2]))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_286[2], -880529684) == 7)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_335 + 8000)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_286[2], 0);
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_286[2], MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f), 0.5f) };
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000);
				TASK::TASK_LOOK_AT_COORD(uLocal_286[2], Var0, iVar3, 2049, 2);
				iLocal_335 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_27()//Position - 0x1211
{
	int iVar0;
	
	iVar0 = iLocal_277 + 1;
	if (!iLocal_338 && CAM::IS_SCREEN_FADED_IN())
	{
		HUD::DISPLAY_HELP_TEXT_THIS_FRAME("Tour_help", 0);
	}
	if (iVar0 < 14)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 223) || iLocal_315 == 1)
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_284))
					{
						if (!Local_51[iVar0 /*15*/].f_14 && !Local_51[iVar0 /*15*/].f_9)
						{
							SYSTEM::SETTIMERA(0);
							Local_51[iLocal_277 /*15*/].f_9 = 1;
							func_30(Local_51[iVar0 /*15*/].f_10, Local_51[iVar0 /*15*/].f_13);
							GlobalFunc_4935();
							if (iVar0 == 13)
							{
								iLocal_338 = 1;
								func_28();
							}
							Local_51[iVar0 /*15*/].f_14 = 1;
							iLocal_277 = iVar0;
						}
						iLocal_315 = 0;
					}
				}
			}
		}
	}
}

void func_28()//Position - 0x12D5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_284))
		{
			TASK::CLEAR_PED_TASKS(iLocal_284);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_325);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_305, 120.8878f, 239.3244f, 106.5131f, 3f, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_305, Local_262.f_1, 3f, 0, joaat("tourbus"), iLocal_510, 3f, 15f);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_325);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_284, uLocal_325);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_325);
		}
	}
}


void func_30(struct<3> Param0, float fParam3)//Position - 0x136F
{
	int iVar0;
	
	iVar0 = iLocal_277 + 1;
	AUDIO::START_AUDIO_SCENE("RE_BUS_TOUR_FADE_OUT_WORLD");
	CAM::DO_SCREEN_FADE_OUT(1000);
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
		{
			func_214();
		}
		if (PED::IS_PED_INJURED(iLocal_284))
		{
			func_214();
		}
		SYSTEM::WAIT(0);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(1);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	if (!PED::IS_PED_INJURED(iLocal_284))
	{
		TASK::CLEAR_PED_TASKS(iLocal_284);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param0.x, Param0.f_1, Param0.f_2, 5f, 0, 0, 0, 0, 0);
		ENTITY::SET_ENTITY_COORDS(iLocal_305, Param0.x, Param0.f_1, Param0.f_2, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_305, fParam3);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_305, 0f);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_284, iLocal_305, ENTITY::GET_ENTITY_COORDS(iLocal_305, 1), 0f, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
		GlobalFunc_8326(Param0, 1112014848, 12, 5000, 0, 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_305);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_305, 1, 1);
		if (iVar0 < 13)
		{
			if (!PED::IS_PED_INJURED(iLocal_284))
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_284, iLocal_305, Local_51[iVar0 /*15*/].f_1, Local_51[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_284))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_284, iLocal_305, Local_262.f_1, Local_51[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_305, 8f);
	}
	GlobalFunc_4956();
	CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(3);
	iLocal_49 = 3;
	func_21(1);
	AUDIO::STOP_AUDIO_SCENE("RE_BUS_TOUR_FADE_OUT_WORLD");
	CAM::DO_SCREEN_FADE_IN(1000);
	while (CAM::IS_SCREEN_FADING_IN())
	{
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		func_21(1);
		SYSTEM::WAIT(0);
	}
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	func_21(1);
}









void func_39()//Position - 0x175B
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = iLocal_277 + 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_49)
		{
			case 0:
				if (!iLocal_338)
				{
					if (Local_51[12 /*15*/].f_9 || Local_51[13 /*15*/].f_14)
					{
						iLocal_338 = 1;
					}
				}
				iVar0 = 0;
				while (iVar0 < 14)
				{
					if (!Local_51[iVar0 /*15*/].f_9)
					{
						if (iVar0 == 13)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_51[iVar0 /*15*/].f_1, 30f, 30f, 15f, 0, 1, 0))
							{
								if (Local_51[12 /*15*/].f_9)
								{
									Local_51[13 /*15*/].f_9 = 1;
									iLocal_313 = MISC::GET_GAME_TIMER();
									iLocal_49 = 2;
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_51[iVar0 /*15*/].f_1, 40f, 40f, 12f, 0, 1, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_305, 0))
							{
								func_22(Local_51[iVar0 /*15*/].f_4, Local_51[iVar0 /*15*/].f_7);
								iLocal_277 = iVar0;
								if (iLocal_317)
								{
									iLocal_317 = 0;
								}
								GlobalFunc_4935();
								iLocal_49 = 1;
							}
							else
							{
								iLocal_49 = 3;
							}
						}
					}
					iVar0++;
				}
				break;
			
			case 1:
				func_22(Local_51[iLocal_277 /*15*/].f_4, Local_51[iLocal_277 /*15*/].f_7);
				iLocal_312 = MISC::GET_GAME_TIMER();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
				{
					if (iVar1 <= 13)
					{
						func_76(ENTITY::GET_ENTITY_COORDS(iLocal_305, 1), Local_51[iVar1 /*15*/].f_1, &Local_319, &Local_322, 500);
					}
					if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_319.x, Local_319.f_1, Local_322.x, Local_322.f_1))
					{
						if ((iLocal_312 - iLocal_313) > 0)
						{
							if (GlobalFunc_10652(&uLocal_342, "BUSTOAU", Local_51[iLocal_277 /*15*/], 4, 0, 0, 0))
							{
								if (iVar1 <= 13)
								{
									if (iVar1 == 11)
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar2);
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_305, -100.461f, -206.1412f, 44.4215f, Local_51[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 4f, 15f);
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_305, Local_51[iVar1 /*15*/].f_1, Local_51[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 4f, 15f);
										TASK::CLOSE_SEQUENCE_TASK(uVar2);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_284, uVar2);
										TASK::CLEAR_SEQUENCE_TASK(&uVar2);
									}
									else
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_284, iLocal_305, Local_51[iVar1 /*15*/].f_1, Local_51[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 4f, 15f);
									}
								}
								iLocal_313 = MISC::GET_GAME_TIMER();
								Local_51[iLocal_277 /*15*/].f_14 = 1;
								Local_51[iLocal_277 /*15*/].f_9 = 1;
								iLocal_49 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (func_41())
				{
					iLocal_49 = 3;
				}
				break;
			
			case 3:
				iLocal_312 = MISC::GET_GAME_TIMER();
				func_40(Local_51[iLocal_277 /*15*/].f_4);
				if ((iLocal_312 - iLocal_313) > 5000)
				{
					if (!GlobalFunc_111())
					{
						iLocal_316 = 0;
						iLocal_313 = MISC::GET_GAME_TIMER();
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(1);
						}
						if (Local_51[13 /*15*/].f_9 == 1)
						{
							iLocal_49 = 4;
						}
						else
						{
							if (!PED::IS_PED_INJURED(iLocal_284))
							{
								TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_284, 15f);
							}
							iLocal_49 = 0;
						}
					}
				}
				break;
			
			case 4:
				func_214();
				break;
			}
	}
}

void func_40(struct<3> Param0)//Position - 0x1A7C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_298) > iLocal_292[iVar0] && iLocal_299[iVar0] == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_286[iVar0]))
			{
				TASK::TASK_LOOK_AT_COORD(uLocal_286[iVar0], Param0, 20000, 2050, 4);
			}
			iLocal_299[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_41()//Position - 0x1AE4
{
	float fVar0[5];
	struct<3> Var6[5];
	
	if (GlobalFunc_4926(1000))
	{
		iLocal_332 = 3;
	}
	iLocal_537 = 1;
	switch (iLocal_332)
	{
		case 0:
			if (CAM::DOES_CAM_EXIST(uLocal_327))
			{
				CAM::DESTROY_CAM(uLocal_327, 0);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			}
			GlobalFunc_8316(1, 1, 1, 0);
			MISC::SET_MINIGAME_IN_PROGRESS(1);
			HUD::DISPLAY_RADAR(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			GRAPHICS::_0xEF398BEEE4EF45F9(1);
			uLocal_328 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 93.8459f, 251.8829f, 110.4535f, 23.0883f, 0.101f, -61.7699f, 40f, 1, 2);
			uLocal_329 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 97.0995f, 249.7653f, 109.0195f, -3f, 0f, -91.5944f, 50f, 1, 2);
			CAM::SET_CAM_ACTIVE(uLocal_328, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_329, uLocal_328, 17000, 1, 1);
			GlobalFunc_10652(&uLocal_342, "BUSTOAU", "BUSTO_THANK", 4, 0, 0, 0);
			ENTITY::SET_ENTITY_COORDS(iLocal_305, Local_262.f_1, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_305, Local_262.f_13);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_305);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_305, 3);
			if (!PED::IS_PED_INJURED(iLocal_284))
			{
				TASK::CLEAR_PED_TASKS(iLocal_284);
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_284, 0f);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_325);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_305, 24, 10000);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_325);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_284, uLocal_325);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_325);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 268.4057f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			iLocal_316 = 1;
			iLocal_313 = MISC::GET_GAME_TIMER();
			iLocal_332 = 1;
			break;
		
		case 1:
			iLocal_312 = MISC::GET_GAME_TIMER();
			if ((iLocal_312 - iLocal_313) > 3000)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 268.4057f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				Var6[0 /*3*/] = { 105.1253f, 247.7461f, 107.1111f };
				Var6[1 /*3*/] = { 109.2535f, 247.9478f, 107.0121f };
				Var6[2 /*3*/] = { 110.3568f, 249.2771f, 107.0133f };
				Var6[3 /*3*/] = { 104.8579f, 251.0388f, 107.1858f };
				Var6[4 /*3*/] = { 105.4064f, 248.0866f, 107.1104f };
				fVar0[0] = 269.6692f;
				fVar0[1] = 283.6581f;
				fVar0[2] = 278.7632f;
				fVar0[3] = 228.5865f;
				fVar0[4] = 263.4406f;
				iLocal_334 = 0;
				while (iLocal_334 < 5)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_286[iLocal_334]))
					{
						if (!PED::IS_PED_INJURED(uLocal_286[iLocal_334]))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_286[iLocal_334]);
							ENTITY::SET_ENTITY_HEADING(uLocal_286[iLocal_334], fVar0[iLocal_334]);
							ENTITY::SET_ENTITY_COORDS(uLocal_286[iLocal_334], Var6[iLocal_334 /*3*/], 1, 0, 0, 1);
							TASK::TASK_WANDER_STANDARD(uLocal_286[iLocal_334], 1193033728, 0);
						}
					}
					iLocal_334++;
				}
				iLocal_313 = MISC::GET_GAME_TIMER();
				iLocal_332 = 2;
			}
			break;
		
		case 2:
			iLocal_312 = MISC::GET_GAME_TIMER();
			if ((iLocal_312 - iLocal_313) > 13000)
			{
				iLocal_332 = 3;
			}
			break;
		
		case 3:
			CAM::SET_CAM_ACTIVE(uLocal_328, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 0, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::DESTROY_CAM(uLocal_328, 0);
			CAM::DESTROY_CAM(uLocal_329, 0);
			MISC::SET_MINIGAME_IN_PROGRESS(0);
			HUD::DISPLAY_RADAR(1);
			GlobalFunc_8316(0, 1, 1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_313 = 10000;
			func_42();
			return 1;
			break;
	}
	return 0;
}

void func_42()//Position - 0x1EB2
{
	func_46(-1, 0);
	GlobalFunc_7068();
	func_214();
}




void func_46(int iParam0, int iParam1)//Position - 0x1F4B
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
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_43.x, Local_43.f_1);
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






























void func_76(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)//Position - 0x35DA
{
	if (!iLocal_317)
	{
		if (Param3 <= Param0)
		{
			*uParam6 = Param3;
			*uParam7 = Param0;
		}
		else
		{
			*uParam6 = Param0;
			*uParam7 = Param3;
		}
		if (Param3.f_1 <= Param0.f_1)
		{
			uParam6->f_1 = Param3.f_1;
			uParam7->f_1 = Param0.f_1;
		}
		else
		{
			uParam6->f_1 = Param0.f_1;
			uParam7->f_1 = Param3.f_1;
		}
		*uParam6 = { *uParam6 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
		*uParam7 = { *uParam7 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
		iLocal_317 = 1;
	}
}

void func_77()//Position - 0x365F
{
	int iVar0[24];
	char* sVar25;
	
	sLocal_513[0] = "BUSTO_RAMB_1";
	sLocal_513[1] = "BUSTO_RAMB_2";
	sLocal_513[2] = "BUSTO_RAMB_3";
	sLocal_513[3] = "BUSTO_RAMB_4";
	sLocal_513[4] = "BUSTO_RAMB_5";
	sLocal_513[5] = "BUSTO_RAMB_6";
	sLocal_513[6] = "BUSTO_RAMB_7";
	sLocal_513[7] = "BUSTO_RAMB_8";
	sLocal_513[8] = "BUSTO_RAMB_9";
	sLocal_513[9] = "BUSTO_RAMB_10";
	sLocal_513[10] = "BUSTO_RAMB_11";
	sLocal_513[11] = "BUSTO_RAMB_12";
	sLocal_513[12] = "BUSTO_RAMB_13";
	sLocal_513[13] = "BUSTO_RAMB_14";
	iVar0[0] = 12000;
	iVar0[1] = 12000;
	iVar0[2] = 36000;
	iVar0[3] = 0;
	iVar0[4] = 36000;
	iVar0[5] = 0;
	iVar0[6] = 36000;
	iVar0[7] = 36000;
	iVar0[8] = 0;
	iVar0[9] = 36000;
	iVar0[10] = 36000;
	iVar0[11] = 0;
	iVar0[12] = 36000;
	iVar0[13] = 0;
	iVar0[14] = 36000;
	iVar0[15] = 0;
	iVar0[16] = 48000;
	iVar0[17] = 0;
	iVar0[18] = 48000;
	iVar0[19] = 0;
	iVar0[20] = 48000;
	iVar0[21] = 0;
	iVar0[0] = iVar0[0];
	switch (iLocal_314)
	{
		case 0:
			iLocal_313 = MISC::GET_GAME_TIMER();
			iLocal_314 = 1;
			break;
		
		case 1:
			iLocal_312 = MISC::GET_GAME_TIMER();
			if ((iLocal_312 - iLocal_313) > 2000)
			{
				if (!GlobalFunc_111())
				{
					iLocal_313 = MISC::GET_GAME_TIMER();
					iLocal_314 = 2;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_111())
			{
				GRAPHICS::DRAW_DEBUG_TEXT_2D("IS_ANY_CONVERSATION_ONGOING_OR_QUEUED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
			}
			if (iLocal_538)
			{
				iLocal_312 = MISC::GET_GAME_TIMER();
				if ((iLocal_312 - iLocal_313) > iLocal_541)
				{
					if (func_78(uLocal_286[iLocal_539]))
					{
						if (iLocal_277 == 0)
						{
							sVar25 = "TOUR_ABOUT_TO_START";
						}
						else if ((iLocal_277 % 2) == 0)
						{
							sVar25 = "TOUR_CHAT";
						}
						else
						{
							sVar25 = "TOUR_LANDMARK";
						}
						GRAPHICS::DRAW_DEBUG_TEXT_2D("AMBIENT LINE", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uLocal_286[iLocal_539], sVar25, "SPEECH_PARAMS_FORCE", 1);
						iLocal_540++;
						if (iLocal_540 == 3)
						{
							iLocal_538 = 0;
						}
						iLocal_541 = MISC::GET_RANDOM_INT_IN_RANGE(9000, 14000);
						iLocal_313 = MISC::GET_GAME_TIMER();
					}
					iLocal_539++;
					if (iLocal_539 == 5)
					{
						iLocal_539 = 0;
					}
				}
			}
			else if (iLocal_507 < 14)
			{
				iLocal_312 = MISC::GET_GAME_TIMER();
				if ((iLocal_312 - iLocal_313) > 10000)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10726(&uLocal_342, "BUSTOAU", "BUSTO_RAMB", sLocal_513[iLocal_507], 4, 0, 0))
						{
							iLocal_507++;
							iLocal_313 = MISC::GET_GAME_TIMER();
							iLocal_538 = 1;
							iLocal_540 = 0;
						}
						else
						{
							GRAPHICS::DRAW_DEBUG_TEXT_2D("NOT PLAY_SINGLE_LINE_FROM_CONVERSATION", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						}
					}
				}
			}
			else
			{
				iLocal_538 = 1;
			}
			break;
	}
}

int func_78(var uParam0)//Position - 0x3966
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		if (AUDIO::_CAN_PED_SPEAK(uParam0, "TOUR_ABOUT_TO_START", 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79()//Position - 0x398B
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 222) && !iLocal_537)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_305))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_305, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_284))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_284, iLocal_305, 24, 5000);
							fLocal_307 = ENTITY::GET_ENTITY_SPEED(iLocal_305);
							while (fLocal_307 > 5f)
							{
								SYSTEM::WAIT(0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
								{
									fLocal_307 = ENTITY::GET_ENTITY_SPEED(iLocal_305);
								}
							}
							GlobalFunc_4935();
							CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_509);
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
							AUDIO::STOP_AUDIO_SCENE("RE_BUS_TOUR_SCENE");
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_305, 0);
							if (CAM::DOES_CAM_EXIST(uLocal_327))
							{
								CAM::DESTROY_CAM(uLocal_327, 0);
								CAM::RENDER_SCRIPT_CAMS(0, 0, 0, 1, 0, 0);
								ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
							}
							TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_305, 0);
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}



void func_82()//Position - 0x3AEE
{
	switch (iLocal_277)
	{
		case 0:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			break;
		
		case 1:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
			break;
	}
}

void func_83()//Position - 0x3B64
{
	if (!PED::IS_PED_INJURED(iLocal_285) && !PED::IS_PED_INJURED(iLocal_284))
	{
		switch (iLocal_50)
		{
			case 0:
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				AUDIO::START_AUDIO_SCENE("RE_BUS_TOUR_SCENE");
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_305, "RE_BUS_TOUR_BUS_VEHICLE", 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
				GlobalFunc_8316(1, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_262.f_1, 30f, 0);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_284, 0);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_305, 2);
				MISC::SET_MINIGAME_IN_PROGRESS(1);
				HUD::DISPLAY_RADAR(0);
				uLocal_328 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 94.5693f, 246.0525f, 108.9809f, -11.5369f, 0f, -74.512f, 40f, 1, 2);
				uLocal_329 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 95.7144f, 243.8854f, 111.291f, -26.2154f, 0f, -59.2407f, 50f, 1, 2);
				CAM::SET_CAM_ACTIVE(uLocal_328, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_329, uLocal_328, 6500, 1, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_305, 8f, 8f, 5f, 0, 1, 0))
					{
						ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 65f);
						ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 115.1136f, 241.6893f, 106.6493f, 1, 0, 0, 1);
					}
				}
				PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("BusTours");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
				{
					func_76(ENTITY::GET_ENTITY_COORDS(iLocal_305, 1), Local_51[0 /*15*/].f_1, &Local_319, &Local_322, 500);
					iLocal_543 = MISC::GET_GAME_TIMER();
					iLocal_50 = 1;
				}
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					iLocal_318 = 1;
				}
				iLocal_544 = 0;
				break;
			
			case 1:
				if (!iLocal_339)
				{
					func_110();
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_543) > 5000 && !iLocal_542)
				{
					GlobalFunc_10652(&uLocal_342, "BUSTOAU", "BUSTO_GO", 4, 0, 0, 0);
					if (GlobalFunc_74("Enter_bus"))
					{
						HUD::CLEAR_HELP(1);
					}
					iLocal_542 = 1;
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_543) > 6200)
				{
					if (iLocal_318 == 1)
					{
						if (iLocal_544 == 0)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_544 = 1;
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_305) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_285, iLocal_305)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_284, iLocal_305))
					{
						iLocal_50 = 2;
					}
					else if (GlobalFunc_4926(1000))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_305, 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_285, iLocal_305, 0);
						}
						iLocal_50 = 2;
					}
				}
				break;
			
			case 2:
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_284, iLocal_305, Local_51[0 /*15*/].f_1, Local_51[0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_510, 5f, 15f);
				CAM::SET_CAM_ACTIVE(uLocal_328, 0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::DESTROY_CAM(uLocal_328, 0);
				CAM::DESTROY_CAM(uLocal_329, 0);
				MISC::SET_MINIGAME_IN_PROGRESS(0);
				HUD::DISPLAY_RADAR(1);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				GlobalFunc_8316(0, 1, 1, 0);
				iLocal_330 = GlobalFunc_8329();
				GlobalFunc_10834(iLocal_330, 1, iLocal_511);
				iLocal_509 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
				if (!iLocal_318)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(3);
				}
				else
				{
					func_21(1);
				}
				HUD::REMOVE_BLIP(&uLocal_309);
				iLocal_48 = 2;
				break;
		}
	}
	else
	{
		func_214();
	}
}



























void func_110()//Position - 0x4E54
{
	if (!PED::IS_PED_INJURED(iLocal_285))
	{
		TASK::CLEAR_PED_TASKS(iLocal_285);
		TASK::TASK_ENTER_VEHICLE(iLocal_285, iLocal_305, 10000, 0, 2f, 262144, 0);
		PED::SET_PED_KEEP_TASK(iLocal_285, 1);
		iLocal_339 = 1;
	}
}

void func_111()//Position - 0x4E8E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_151())
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_305, 3);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_305, 0);
			func_214();
		}
		else if (GlobalFunc_8988(4))
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_305, 5f, 5f, 5f, 0, 1, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !GlobalFunc_74("TX_H02"))
			{
				if (func_140())
				{
					if (!iLocal_512)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_305, 1);
						iLocal_512 = 1;
					}
					HUD::DISPLAY_HELP_TEXT_THIS_FRAME("Enter_bus", 0);
					if (PAD::IS_CONTROL_PRESSED(2, 23))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_305, -1, 2, 1f, 8, 0);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_309))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_310))
						{
							HUD::REMOVE_BLIP(&uLocal_310);
						}
						uLocal_309 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_305);
						HUD::SET_BLIP_AS_FRIENDLY(uLocal_309, 1);
						HUD::SET_BLIP_SCALE(uLocal_309, Global_24490);
						if (!PED::IS_PED_INJURED(iLocal_285))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_285, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (!GlobalFunc_6827())
						{
							if (GlobalFunc_10586())
							{
								func_214();
							}
							else
							{
								GlobalFunc_9034(1);
							}
						}
					}
					if (func_116())
					{
						iLocal_537 = 0;
						func_115(1);
					}
				}
				else
				{
					HUD::DISPLAY_HELP_TEXT_THIS_FRAME("No_bus_money", 0);
					if (iLocal_512)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_305, 2);
						iLocal_512 = 0;
					}
				}
			}
		}
		if (iLocal_334 < 5)
		{
			if (func_112(&(uLocal_286[iLocal_334])))
			{
				iLocal_334++;
			}
		}
	}
}

int func_112(var uParam0)//Position - 0x4FF0
{
	char* sVar0;
	
	*uParam0 = 0;
	if (PED::GET_CLOSEST_PED(Local_278, 100f, 1, 0, uParam0, 0, 0, 28))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			if (func_114(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
					TASK::CLEAR_PED_TASKS(*uParam0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
					PED::SET_PED_NAME_DEBUG(*uParam0, "randompassenger");
					PED::SET_PED_CONFIG_FLAG(*uParam0, 134, 1);
					switch (iLocal_334)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
							{
								PED::SET_PED_INTO_VEHICLE(*uParam0, iLocal_305, 3);
								PED::SET_PED_KEEP_TASK(*uParam0, 1);
							}
							break;
						
						case 1:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
							{
								PED::SET_PED_INTO_VEHICLE(*uParam0, iLocal_305, 7);
								PED::SET_PED_KEEP_TASK(*uParam0, 1);
							}
							break;
						
						case 2:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
							{
								PED::SET_PED_INTO_VEHICLE(*uParam0, iLocal_305, 6);
								PED::SET_PED_KEEP_TASK(*uParam0, 1);
							}
							break;
						
						case 3:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
							{
								PED::SET_PED_INTO_VEHICLE(*uParam0, iLocal_305, 8);
								PED::SET_PED_KEEP_TASK(*uParam0, 1);
							}
							break;
						
						case 4:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
							{
								PED::SET_PED_INTO_VEHICLE(*uParam0, iLocal_305, 1);
								PED::SET_PED_KEEP_TASK(*uParam0, 1);
							}
							break;
					}
					sVar0 = func_113(PED::IS_PED_MALE(*uParam0));
					AUDIO::SET_AMBIENT_VOICE_NAME(*uParam0, sVar0);
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_113(int iParam0)//Position - 0x5149
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
		if (iVar0 == 0)
		{
			return "A_F_M_DOWNTOWN_01_BLACK_FULL_01";
		}
		else if (iVar0 == 1)
		{
			return "A_F_M_EASTSA_01_LATINO_FULL_01";
		}
		else if (iVar0 == 2)
		{
			return "A_F_M_FATWHITE_01_WHITE_FULL_01";
		}
		else if (iVar0 == 3)
		{
			return "A_F_M_KTOWN_02_KOREAN_FULL_01";
		}
		else if (iVar0 == 4)
		{
			return "A_F_M_SOUCENT_02_BLACK_FULL_01";
		}
		else if (iVar0 == 5)
		{
			return "A_F_M_TOURIST_01_WHITE_MINI_01";
		}
		else if (iVar0 == 6)
		{
			return "A_F_O_KTOWN_01_KOREAN_FULL_01";
		}
		else if (iVar0 == 7)
		{
			return "A_F_O_SOUCENT_01_BLACK_FULL_01";
		}
		else if (iVar0 == 8)
		{
			return "A_F_Y_EASTSA_02_WHITE_FULL_01";
		}
		else if (iVar0 == 9)
		{
			return "A_F_Y_HIKER_01_WHITE_FULL_01";
		}
		else if (iVar0 == 10)
		{
			return "A_F_Y_HIKER_01_WHITE_MINI_01";
		}
		else if (iVar0 == 11)
		{
			return "A_F_Y_HIPSTER_03_WHITE_FULL_01";
		}
		else if (iVar0 == 12)
		{
			return "A_F_Y_TOURIST_01_BLACK_FULL_01";
		}
		else if (iVar0 == 13)
		{
			return "A_F_Y_TOURIST_01_LATINO_FULL_01";
		}
		else if (iVar0 == 14)
		{
			return "A_F_Y_TOURIST_01_WHITE_FULL_01";
		}
		else
		{
			return "A_F_Y_TOURIST_02_WHITE_MINI_01";
		}
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 33);
	if (iVar0 == 0)
	{
		return "A_M_M_AFRIAMER_01_BLACK_FULL_01";
	}
	if (iVar0 == 1)
	{
		return "A_M_M_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 2)
	{
		return "A_M_M_EASTSA_02_LATINO_FULL_01";
	}
	if (iVar0 == 3)
	{
		return "A_M_M_FATLATIN_01_LATINO_FULL_01";
	}
	if (iVar0 == 4)
	{
		return "A_M_M_GENFAT_01_LATINO_FULL_01";
	}
	if (iVar0 == 5)
	{
		return "A_M_M_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	if (iVar0 == 6)
	{
		return "A_M_M_SALTON_01_WHITE_FULL_01";
	}
	if (iVar0 == 7)
	{
		return "A_M_M_SALTON_02_WHITE_FULL_01";
	}
	if (iVar0 == 8)
	{
		return "A_M_M_STLAT_02_LATINO_FULL_01";
	}
	if (iVar0 == 9)
	{
		return "A_M_M_TOURIST_01_WHITE_MINI_01";
	}
	if (iVar0 == 10)
	{
		return "A_M_O_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 11)
	{
		return "A_M_Y_BEACH_01_CHINESE_FULL_01";
	}
	if (iVar0 == 12)
	{
		return "A_M_Y_BEACH_01_CHINESE_MINI_01";
	}
	if (iVar0 == 13)
	{
		return "A_M_Y_BEACH_01_WHITE_FULL_01";
	}
	if (iVar0 == 14)
	{
		return "A_M_Y_BEACH_02_LATINO_FULL_01";
	}
	if (iVar0 == 15)
	{
		return "A_M_Y_BEACH_03_WHITE_FULL_01";
	}
	if (iVar0 == 16)
	{
		return "A_M_Y_BEACHVESP_01_CHINESE_FULL_01";
	}
	if (iVar0 == 17)
	{
		return "A_M_Y_BEACHVESP_01_CHINESE_MINI_01";
	}
	if (iVar0 == 18)
	{
		return "A_M_Y_BEACHVESP_01_WHITE_FULL_01";
	}
	if (iVar0 == 19)
	{
		return "A_M_Y_BEACHVESP_02_WHITE_FULL_01";
	}
	if (iVar0 == 20)
	{
		return "A_M_Y_BEACHVESP_02_WHITE_MINI_01";
	}
	if (iVar0 == 21)
	{
		return "A_M_Y_BEVHILLS_01_WHITE_FULL_01";
	}
	if (iVar0 == 22)
	{
		return "A_M_Y_BUSINESS_01_BLACK_FULL_01";
	}
	if (iVar0 == 23)
	{
		return "A_M_Y_BUSINESS_01_CHINESE_FULL_01";
	}
	if (iVar0 == 24)
	{
		return "A_M_Y_BUSINESS_02_BLACK_FULL_01";
	}
	if (iVar0 == 25)
	{
		return "A_M_Y_BUSINESS_02_WHITE_FULL_01";
	}
	if (iVar0 == 26)
	{
		return "A_M_Y_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 27)
	{
		return "A_M_Y_GENSTREET_01_CHINESE_FULL_01";
	}
	if (iVar0 == 28)
	{
		return "A_M_Y_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 29)
	{
		return "A_M_Y_GENSTREET_02_BLACK_FULL_01";
	}
	if (iVar0 == 30)
	{
		return "A_M_Y_GENSTREET_02_LATINO_FULL_01";
	}
	if (iVar0 == 31)
	{
		return "A_M_Y_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	return "A_M_Y_STLAT_01_LATINO_FULL_01";
}

int func_114(int iParam0)//Position - 0x5486
{
	int iVar0;
	
	iVar0 = 1;
	if (((((ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("a_m_m_tramp_01") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_f_m_tramp_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_m_o_tramp_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("s_m_y_cop_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("s_m_y_fireman_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_f_y_hiker_01"))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_115(int iParam0)//Position - 0x54FF
{
	iLocal_50 = 0;
	iLocal_48 = iParam0;
}

int func_116()//Position - 0x550E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_305, 0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) == iLocal_305)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}
























int func_140()//Position - 0x7694
{
	if (GlobalFunc_469(GlobalFunc_8329()) >= iLocal_511)
	{
		return 1;
	}
	return 0;
}











int func_151()//Position - 0x7EE6
{
	if (GlobalFunc_777(iLocal_285))
	{
		if (!PED::IS_PED_INJURED(iLocal_285))
		{
			if (func_156(iLocal_285))
			{
				GlobalFunc_5122(iLocal_285, "HIT_WOMAN", 24);
				return 1;
			}
			else
			{
				func_153();
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
	if (!PED::IS_PED_INJURED(iLocal_284))
	{
		if (((func_156(iLocal_284) || !PED::IS_PED_IN_ANY_VEHICLE(iLocal_284, 0)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_284)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_284))
		{
			func_152(iLocal_285);
			return 1;
		}
	}
	else
	{
		func_152(iLocal_285);
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_305, PLAYER::PLAYER_PED_ID(), 1))
	{
		if (GlobalFunc_777(iLocal_285))
		{
			if (!PED::IS_PED_INJURED(iLocal_285))
			{
				func_152(iLocal_285);
				GlobalFunc_5122(iLocal_285, "GENERIC_SHOCKED_HIGH", 24);
			}
		}
		func_214();
	}
	if (CLOCK::GET_CLOCK_HOURS() >= 19 || CLOCK::GET_CLOCK_HOURS() <= 6)
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_10652(&uLocal_342, "BUSTOAU", "BUSTO_TIME", 4, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_305, 220f, 220f, 30f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_152(int iParam0)//Position - 0x802C
{
	if (GlobalFunc_777(iLocal_285))
	{
		if (!PED::IS_PED_INJURED(iLocal_285))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0, 0);
			TASK::CLEAR_PED_TASKS(uParam0);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iParam0, 1);
			GlobalFunc_4956();
		}
	}
}

void func_153()//Position - 0x8073
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_285, 40f, 40f, 5f, 0, 1, 0))
	{
		iLocal_312 = MISC::GET_GAME_TIMER();
		if ((iLocal_312 - iLocal_313) > 10000)
		{
			if (!GlobalFunc_111())
			{
				GlobalFunc_10652(&uLocal_342, "BUSTOAU", "BUSTO_STREET", 4, 0, 0, 0);
			}
			iLocal_313 = MISC::GET_GAME_TIMER();
		}
	}
}



int func_156(var uParam0)//Position - 0x82D9
{
	if (func_157(uParam0, &uLocal_336, &uLocal_333, uLocal_331, bLocal_337, 1077936128, 0) || PED::IS_PED_RAGDOLL(uParam0))
	{
		func_152(uParam0);
		return 1;
	}
	return 0;
}

int func_157(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5, int iParam6)//Position - 0x8313
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(uParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0) && !bParam4)
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			Var6 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
			fVar9 = SYSTEM::VDIST(Var3, Var6);
			if (!MISC::IS_BIT_SET(uParam3, 3))
			{
				if (func_163(iParam0, iParam6))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					GlobalFunc_4718(iParam0);
					return 1;
				}
			}
			if (!MISC::IS_BIT_SET(uParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(Var6, fParam5, 1))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					GlobalFunc_4718(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					GlobalFunc_4718(iParam0);
					return 1;
				}
			}
			if (!MISC::IS_BIT_SET(uParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								GlobalFunc_6524("	aggro Ped knows player is pointing gun\n");
								GlobalFunc_6570("		lockOnTimer = ", *uParam2);
								GlobalFunc_6524("\n");
								GlobalFunc_6570("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_42));
								GlobalFunc_6524("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_42 + *uParam2))
								{
									GlobalFunc_6524("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									GlobalFunc_4718(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!MISC::IS_BIT_SET(uParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					GlobalFunc_6524("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_6524("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					GlobalFunc_4718(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_42 = MISC::GET_GAME_TIMER();
	}
	return 0;
}






int func_163(int iParam0, int iParam1)//Position - 0x85BF
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		if ((PED::GET_PED_MAX_HEALTH(iParam0) - ENTITY::GET_ENTITY_HEALTH(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}


void func_165()//Position - 0x862C
{
	MISC::_0x1EAE0A6E978894A2(0, 1);
	MISC::_0x1EAE0A6E978894A2(1, 1);
	MISC::_0x1EAE0A6E978894A2(2, 1);
	MISC::_0x1EAE0A6E978894A2(3, 1);
	MISC::_0x1EAE0A6E978894A2(4, 1);
	MISC::_0x1EAE0A6E978894A2(5, 1);
	MISC::_0x1EAE0A6E978894A2(6, 1);
	MISC::_0x1EAE0A6E978894A2(7, 1);
	MISC::_0x1EAE0A6E978894A2(8, 1);
}

void func_166()//Position - 0x866B
{
	PLAYER::_0x36F1B38855F2A8DF(PLAYER::PLAYER_ID());
	PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 5);
	PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 3);
	PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 15);
	PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 2);
	PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 4);
}

void func_167()//Position - 0x86A9
{
	if (iLocal_317)
	{
		PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_319.x, Local_319.f_1, Local_322.x, Local_322.f_1);
	}
}

void func_168()//Position - 0x86CC
{
	if (MISC::IS_NEXT_WEATHER_TYPE("RAIN") || MISC::IS_NEXT_WEATHER_TYPE("THUNDER"))
	{
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 10000f);
	}
}

void func_169()//Position - 0x86FA
{
	int iVar0;
	int iVar1;
	
	if (func_172())
	{
		func_214();
	}
	else
	{
		iVar0 = joaat("a_f_m_bevhills_02");
		iVar1 = joaat("s_m_m_gentransport");
		STREAMING::REQUEST_MODEL(iVar0);
		STREAMING::REQUEST_MODEL(iVar1);
		STREAMING::REQUEST_ANIM_DICT(sLocal_508);
		STREAMING::REQUEST_MODEL(joaat("tourbus"));
		HUD::REQUEST_ADDITIONAL_TEXT("BUSTOUR", 2);
		if ((((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_508)) && STREAMING::HAS_MODEL_LOADED(joaat("tourbus"))) && HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
		{
			AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
			PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Local_278, &uLocal_281, &uLocal_306, 1, 1077936128, 0);
			iLocal_305 = VEHICLE::CREATE_VEHICLE(joaat("tourbus"), Local_262.f_1, Local_262.f_13, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_305);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_305, 3);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_305, 0);
			AUDIO::SET_VEH_RADIO_STATION(iLocal_305, "OFF");
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_305, 0, 0);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_305, 2, 1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tourbus"), 1);
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_305, 100f);
			iLocal_284 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_305, 26, iVar1, -1, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_284, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_284, 251, 1);
			PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_284, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
			{
				if (!PED::IS_PED_INJURED(iLocal_284))
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_284, 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_284, 4, 0, 2, 0);
				}
			}
			iLocal_285 = PED::CREATE_PED(26, iVar0, 102.9893f, 248.5367f, 107.1759f, 329f, 1, 1);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_285, "A_F_M_BEVHILLS_02_WHITE_FULL_02");
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_285, 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_285, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_285, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_285, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_285, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_285, 4, 1, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_326);
			TASK::TASK_PLAY_ANIM(0, sLocal_508, "IDLE_A", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sLocal_508, "IDLE_B", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sLocal_508, "IDLE_C", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_326, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_326);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_285, uLocal_326);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_326);
			GlobalFunc_1286(&uLocal_342, 3, iLocal_285, "TOURGUIDE", 0, 1);
			if (!HUD::DOES_BLIP_EXIST(uLocal_310))
			{
				uLocal_310 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_305);
				HUD::SET_BLIP_SPRITE(uLocal_310, 85);
			}
			func_170();
			iLocal_47 = 1;
		}
	}
}

void func_170()//Position - 0x896C
{
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_284, 17, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_285, 17, 1);
	PED::ADD_RELATIONSHIP_GROUP("re_bus_tours1", &uLocal_308);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_284, uLocal_308);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_285, uLocal_308);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_308, 1862763509);
}


int func_172()//Position - 0x8A50
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_43) < (75f * 75f))
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



void func_175()//Position - 0x8AE6
{
	struct<15> Var0;
	struct<15> Var15;
	struct<15> Var30;
	struct<15> Var45;
	struct<15> Var60;
	struct<15> Var75;
	struct<15> Var90;
	struct<15> Var105;
	struct<15> Var120;
	struct<15> Var135;
	struct<15> Var150;
	struct<15> Var165;
	struct<15> Var180;
	
	Var0.f_1 = { -24.85f, 263.6119f, 106.5301f };
	Var0.f_4 = { -62.9588f, 335.2273f, 136.055f };
	Var0.f_7 = 10000;
	Var0.f_8 = (8f - 1f);
	Var0.f_10 = { -0.9281f, 266.8539f, 108.0699f };
	Var0.f_13 = 82f;
	Var0 = "BUSTO_P1";
	Var15.f_1 = { -214.9f, 267.4f, 91.5f };
	Var15.f_4 = { -253.7246f, 247.9038f, 95.2063f };
	Var15.f_7 = 9000;
	Var15.f_8 = (8f - 1f);
	Var15.f_10 = { -188.67f, 265.43f, 92.15f };
	Var15.f_13 = 81.79f;
	Var15 = "BUSTO_P5";
	Var30.f_1 = { -522.1094f, 260.8653f, 82.063f };
	Var30.f_4 = { -549.5739f, 272.7824f, 82.9753f };
	Var30.f_7 = 9000;
	Var30.f_8 = 8f;
	Var30.f_10 = { -435.0476f, 249.8727f, 82.0866f };
	Var30.f_13 = 85f;
	Var30 = "BUSTO_P6";
	Var45.f_1 = { -575.5643f, 512.5427f, 105.0293f };
	Var45.f_4 = { -586.4406f, 529.1188f, 108.8539f };
	Var45.f_7 = 9000;
	Var45.f_8 = (8f + 2f);
	Var45.f_10 = { -552.3732f, 481.7021f, 102.1826f };
	Var45.f_13 = 25f;
	Var45 = "BUSTO_P7";
	Var60.f_1 = { -732.2224f, 474.0897f, 105.0424f };
	Var60.f_4 = { -728.4921f, 448.0321f, 107.9036f };
	Var60.f_7 = 9000;
	Var60.f_8 = (8f + 3f);
	Var60.f_10 = { -688.5469f, 490.5489f, 108.784f };
	Var60.f_13 = 105f;
	Var60 = "BUSTO_P8";
	Var75.f_1 = { -1037.97f, 468.9468f, 76.7167f };
	Var75.f_4 = { -1065.762f, 469.4401f, 80.3204f };
	Var75.f_7 = 9000;
	Var75.f_8 = (8f + 2f);
	Var75.f_10 = { -973.6752f, 499.3758f, 78.8246f };
	Var75.f_13 = 47f;
	Var75 = "BUSTO_P9";
	Var90.f_1 = { -1231.581f, 239.014f, 64.8339f };
	Var90.f_4 = { -1309.778f, 261.4181f, 65.87f };
	Var90.f_7 = 9000;
	Var90.f_8 = (8f + 4f);
	Var90.f_10 = { -1168.448f, 257.0845f, 66.3477f };
	Var90.f_13 = 105f;
	Var90 = "BUSTO_P10";
	Var105.f_1 = { -1406.729f, -160.0764f, 46.5244f };
	Var105.f_4 = { -1421.479f, -193.5715f, 50f };
	Var105.f_7 = 9000;
	Var105.f_8 = (8f + 4f);
	Var105.f_10 = { -1398.391f, -114.7998f, 50.028f };
	Var105.f_13 = 178f;
	Var105 = "BUSTO_P11";
	Var120.f_1 = { -1316.205f, -487.0228f, 32.3407f };
	Var120.f_4 = { -1271.75f, -500.2502f, 44.4638f };
	Var120.f_7 = 9000;
	Var120.f_8 = (15f + 4f);
	Var120.f_10 = { -1356.912f, -437.5389f, 34.0665f };
	Var120.f_13 = 215f;
	Var120 = "BUSTO_P3";
	Var135.f_1 = { -723.1427f, -239.0515f, 36.0196f };
	Var135.f_4 = { -696.7581f, -239.2147f, 40.8147f };
	Var135.f_7 = 9000;
	Var135.f_8 = (15f + 6f);
	Var135.f_10 = { -777.5432f, -262.5703f, 36.0082f };
	Var135.f_13 = 290f;
	Var135 = "BUSTO_P2";
	Var150.f_1 = { -690.7699f, -25.762f, 36.9897f };
	Var150.f_4 = { -695f, 22f, 53f };
	Var150.f_7 = 9000;
	Var150.f_8 = (15f + 5f);
	Var150.f_10 = { -696.695f, -40.7958f, 36.8186f };
	Var150.f_13 = 27.9347f;
	Var150 = "BUSTO_P14";
	Var165.f_1 = { 179.6443f, -340.3767f, 43.0448f };
	Var165.f_4 = { 235.139f, -393.0182f, 50.0242f };
	Var165.f_7 = 6000;
	Var165.f_8 = (15f + 5f);
	Var165.f_10 = { 113.5266f, -317.9667f, 44.6514f };
	Var165.f_13 = 250f;
	Var165 = "BUSTO_P13";
	Var180.f_1 = { 288.2845f, 166.6872f, 103.309f };
	Var180.f_4 = { 299.9585f, 198.3281f, 113.3522f };
	Var180.f_7 = 6000;
	Var180.f_8 = (15f + 3f);
	Var180.f_10 = { 344.1458f, 148.4554f, 102.159f };
	Var180.f_13 = 70f;
	Var180 = "BUSTO_P4";
	Local_262.f_1 = { 99.4291f, 246.9366f, 107.2005f };
	Local_262.f_4 = { 102.6186f, 254.6904f, 114.0255f };
	Local_262.f_7 = -1;
	Local_262.f_8 = 8f;
	Local_262.f_10 = { 177.5471f, 209.657f, 105.0543f };
	Local_262.f_13 = 70f;
	Local_262 = "BUSTO_Px";
	func_176(Var0);
	func_176(Var15);
	func_176(Var30);
	func_176(Var45);
	func_176(Var60);
	func_176(Var75);
	func_176(Var90);
	func_176(Var105);
	func_176(Var120);
	func_176(Var135);
	func_176(Var150);
	func_176(Var165);
	func_176(Var180);
	func_176(Local_262);
	iLocal_277 = 0;
}

void func_176(char[60] cParam0)//Position - 0x90B2
{
	Local_51[iLocal_277 /*15*/] = { cParam0 };
	iLocal_277++;
}




int func_180(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x9152
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
	Local_43 = { Param0 };
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
			if ((Var1.f_2 - Local_43.f_2) > 50f)
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

































int func_213()//Position - 0x9F94
{
	if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 6)
	{
		return 0;
	}
	return 1;
}

void func_214()//Position - 0x9FB7
{
	int iVar0;
	
	PAD::_RESET_INPUT_MAPPING_SCHEME();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_328))
	{
		CAM::SET_CAM_ACTIVE(uLocal_328, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_328, 0);
		MISC::SET_MINIGAME_IN_PROGRESS(0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_329))
	{
		CAM::DESTROY_CAM(uLocal_329, 0);
	}
	if (iLocal_48 >= 2)
	{
		CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_509);
	}
	HUD::DISPLAY_RADAR(1);
	if (iLocal_48 >= 1)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_284))
	{
		if (!PED::IS_PED_INJURED(iLocal_284))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_284, 251, 0);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_284, 1);
			PED::SET_PED_KEEP_TASK(iLocal_284, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_284, 0);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_284);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
	{
		if (!PED::IS_PED_INJURED(iLocal_285))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_285, 1);
			PED::SET_PED_KEEP_TASK(iLocal_285, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_285, 0);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_285);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_286[iVar0]))
		{
			if (GlobalFunc_777(uLocal_286[iVar0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_286[iVar0], 0);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_286[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_305))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_305, 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_305, 1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_305);
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	if (GlobalFunc_6827())
	{
		func_226();
	}
	else
	{
		GlobalFunc_54(&Global_24503);
	}
	GRAPHICS::_0xEF398BEEE4EF45F9(1);
	GlobalFunc_10823(-1);
	SYSTEM::WAIT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}












void func_226()//Position - 0xA91E
{
	GlobalFunc_3061(30000);
	GlobalFunc_54(&Global_24503);
	Global_24491 = MISC::GET_GAME_TIMER();
}

