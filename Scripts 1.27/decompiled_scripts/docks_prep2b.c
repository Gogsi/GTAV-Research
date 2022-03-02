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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30[1] = { 0 };
	var uLocal_32[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48[1] = { 0 };
	int iLocal_50[1] = { 0 };
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62[1] = { 0 };
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	struct<8> Local_69[13];
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	var uLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201[2] = { 0, 0 };
	int iLocal_204 = 0;
	int iLocal_205[2] = { 0, 0 };
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214[1] = { 0 };
	int iLocal_216[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_230[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_244[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_258[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291[2] = { 0, 0 };
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_319 = { 0, 0, 0 } ;
	float fLocal_322 = 0f;
	char* sLocal_323 = NULL;
	var uLocal_324[4] = { 0, 0, 0, 0 };
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 4;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 4;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 4;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 4;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 4;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 4;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 8;
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
	var uLocal_402 = 16;
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
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 3;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
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
	Local_310 = { -2145.486f, 3018.294f, 31.81f };
	Local_313 = { 1744.308f, 3270.673f, 40.2076f };
	fLocal_322 = 330.4836f;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_240();
	}
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 30f);
	func_238();
	if (!GlobalFunc_199())
	{
		iLocal_27 = 0;
	}
	else
	{
		iLocal_27 = 1;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("M_ThePortOfLSHeistPrep2B", 0);
		func_236();
		func_230();
		GlobalFunc_587();
		func_228();
		func_226();
		switch (iLocal_27)
		{
			case 0:
				func_225();
				break;
			
			case 1:
				func_220();
				break;
			
			case 2:
				func_202();
				break;
			
			case 3:
				func_194();
				break;
			
			case 4:
				func_110();
				break;
			
			case 5:
				func_28();
				break;
			
			case 6:
				func_4();
				break;
		}
		if (iLocal_27 != 6)
		{
			if (iLocal_196 == 1)
			{
				func_1();
			}
		}
	}
}

void func_1()//Position - 0x146
{
	if ((iLocal_27 == 2 || iLocal_27 == 3) || iLocal_27 == 4)
	{
		if (iLocal_199 == 1)
		{
			func_3(1);
			return;
		}
	}
	if (iLocal_27 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
			{
				if (GlobalFunc_156(iLocal_47, PLAYER::PLAYER_PED_ID(), 1) > 850f)
				{
					func_3(2);
					return;
				}
			}
		}
	}
	if (iLocal_27 == 3 || iLocal_27 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
			{
				if (GlobalFunc_156(iLocal_47, PLAYER::PLAYER_PED_ID(), 1) > 100f)
				{
					func_3(2);
					return;
				}
				else if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_47, 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_47, 1, 40000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_47, 0, 7000))
				{
					func_3(3);
					return;
				}
			}
		}
	}
}


void func_3(int iParam0)//Position - 0x281
{
	iLocal_28 = iParam0;
	if (iLocal_27 != 6)
	{
		iLocal_27 = 6;
		iLocal_174 = 0;
	}
}

void func_4()//Position - 0x299
{
	switch (iLocal_174)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			switch (iLocal_28)
			{
				case 0:
					break;
				
				case 1:
					sLocal_323 = "DP_FAIL1";
					break;
				
				case 2:
					sLocal_323 = "DP_FAIL2";
					break;
				
				case 3:
					sLocal_323 = "DP_FAIL3";
					break;
			}
			if (iLocal_28 == 0)
			{
				GlobalFunc_10616(0);
			}
			else
			{
				GlobalFunc_10835(sLocal_323);
			}
			iLocal_174 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				if (GlobalFunc_764())
				{
				}
				else
				{
					GlobalFunc_5129(-1139.164f, 2662.465f, 16.9873f, 74.9925f);
					GlobalFunc_5166(-1147.504f, 2663.104f, 17.0938f, 40.2433f);
				}
				func_240();
			}
			break;
	}
}
























void func_28()//Position - 0x1432
{
	func_102();
	if (iLocal_174 == 0)
	{
		if (iLocal_195 == 1)
		{
			iLocal_196 = 0;
			func_33();
			iLocal_195 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_47, 0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0);
				}
			}
		}
		iLocal_196 = 1;
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 1))
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_47, 0, 0);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_47, 1, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_47, 2);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_47, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_47, 1);
					func_29();
				}
			}
		}
	}
}

void func_29()//Position - 0x152B
{
	GlobalFunc_5103(0, 0);
	GlobalFunc_45(1, 1);
	func_240();
}




void func_33()//Position - 0x16A1
{
	func_100();
	func_99();
	func_36();
	if (!GlobalFunc_188() || GlobalFunc_2(0))
	{
		func_34();
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_34()//Position - 0x16D1
{
	switch (iLocal_27)
	{
		case 2:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_54, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_54, -1);
				}
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1565.084f, 2780.813f, 16.4022f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 53.6086f);
			}
			break;
		
		case 3:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (GlobalFunc_8315() == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, -1);
						}
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_47, 0);
					}
				}
			}
			break;
		
		case 4:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (GlobalFunc_8315() == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, -1);
						}
					}
				}
			}
			break;
		
		case 5:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (GlobalFunc_8315() == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, -1);
						}
					}
				}
			}
			break;
	}
}


void func_36()//Position - 0x182C
{
	switch (iLocal_27)
	{
		case 2:
			MISC::CLEAR_AREA(-1588.1f, 2794.9f, 17.2f, 20f, 1, 0, 0, 0);
			GlobalFunc_9807(-1720.5f, 2568.4f, 67.1f, -1523.2f, 3002f, -70f, 100f, -1155.06f, 2665.979f, 17.0939f, 219.2079f, 1, 0, 1, 0, 0);
			MISC::CLEAR_AREA_OF_OBJECTS(-1588.1f, 2794.9f, 17.2f, 20f, 6);
			STREAMING::REQUEST_MODEL(joaat("cargobob"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_marine_01"));
			STREAMING::REQUEST_MODEL(joaat("s_m_m_pilot_02"));
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			while (((!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_pilot_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("buzzard")))
			{
				SYSTEM::WAIT(0);
			}
			if (GlobalFunc_199())
			{
				if (GlobalFunc_7698())
				{
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(GlobalFunc_622()))
					{
						GlobalFunc_8368();
						while (!GlobalFunc_8367())
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			iLocal_200 = 0;
			iLocal_175 = 0;
			while (iLocal_175 <= 12)
			{
				iLocal_274[iLocal_175] = 0;
				iLocal_175++;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47))
			{
				MISC::CLEAR_AREA(Local_310, 10f, 1, 0, 0, 0);
				iLocal_47 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), Local_310, fLocal_322, 1, 1);
				VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_47, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_47, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_47, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), 1);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_47, 1);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_47, 0);
				GlobalFunc_534(iLocal_47, 0);
			}
			func_83();
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")))
				{
					MISC::CLEAR_AREA(-1866.446f, 3071.395f, 31.8104f, 10f, 1, 0, 0, 0);
					iLocal_48[0] = VEHICLE::CREATE_VEHICLE(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, 1, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_48[0], 1);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_48[0], 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_48[0]);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_48[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("buzzard"));
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_48[0], 0);
				}
			}
			if (GlobalFunc_199())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
				{
					if (GlobalFunc_7698())
					{
						if (!VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(GlobalFunc_622()))
						{
							iLocal_54 = func_37(-1535.209f, 2744.551f, 16.6437f, 47.9754f);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_54, 1);
							VEHICLE::SET_VEHICLE_STRONG(iLocal_54, 1);
						}
					}
				}
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			PLAYER::SET_POLICE_RADAR_BLIPS(1);
			break;
		
		case 3:
			AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
			SYSTEM::WAIT(1500);
			STREAMING::REQUEST_MODEL(joaat("cargobob"));
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_marine_01"));
			STREAMING::REQUEST_MODEL(joaat("s_m_m_pilot_02"));
			while (((!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")) || !STREAMING::HAS_MODEL_LOADED(joaat("buzzard"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_pilot_02")))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_200 = 0;
			iLocal_175 = 0;
			while (iLocal_175 <= 12)
			{
				iLocal_274[iLocal_175] = 0;
				iLocal_175++;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47))
			{
				MISC::CLEAR_AREA(Local_310, 10f, 1, 0, 0, 0);
				iLocal_47 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), Local_310, fLocal_322, 1, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_47, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_47, 1);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_47);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), 1);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_47, 1);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_47, 0);
				GlobalFunc_534(iLocal_47, 0);
			}
			func_83();
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")))
				{
					MISC::CLEAR_AREA(-1866.446f, 3071.395f, 31.8104f, 10f, 1, 0, 0, 0);
					iLocal_48[0] = VEHICLE::CREATE_VEHICLE(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, 1, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_48[0], 1);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_48[0], 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_48[0]);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_48[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("buzzard"));
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_48[0], 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
			{
				uLocal_30[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_48[0], 26, joaat("s_m_m_pilot_02"), -1, 1, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_02"));
			}
			else if (!PED::IS_PED_IN_VEHICLE(uLocal_30[0], iLocal_48[0], 0))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_30[0], iLocal_48[0], -1);
			}
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), -1, 0, 1);
			AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
			AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", 1, 1);
			break;
		
		case 4:
			STREAMING::REQUEST_MODEL(joaat("cargobob"));
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47))
			{
				MISC::CLEAR_AREA(Local_310, 10f, 1, 0, 0, 0);
				iLocal_47 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), -629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_47, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), 1);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_47, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_47, 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_47, 1, 1);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_47);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_47, 30f);
				GlobalFunc_534(iLocal_47, 0);
			}
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), -1, 0, 1);
			break;
		
		case 5:
			STREAMING::REQUEST_MODEL(joaat("cargobob"));
			STREAMING::REQUEST_MODEL(joaat("sandking"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")) || !STREAMING::HAS_MODEL_LOADED(joaat("sandking")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47))
			{
				MISC::CLEAR_AREA(1749.61f, 3272.95f, 40.1533f, 5f, 1, 0, 0, 0);
				iLocal_47 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), 1749.61f, 3272.95f, 40.1533f, 51.128f, 1, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_47, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
				VEHICLE::SET_VEHICLE_STRONG(iLocal_47, 1);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_47, 0);
				GlobalFunc_534(iLocal_47, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50[0]))
			{
				iLocal_50[0] = VEHICLE::CREATE_VEHICLE(joaat("sandking"), 1754.951f, 3290.994f, 40.1176f, 182.397f, 1, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_50[0], 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sandking"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[0]))
			{
				iLocal_213 = 1;
			}
			break;
	}
}

int func_37(struct<3> Param0, float fParam3)//Position - 0x1EF2
{
	return GlobalFunc_9228(&(Global_93588.f_2167), Param0, fParam3, 0);
}














































void func_83()//Position - 0x5A00
{
	if (iLocal_200 == 0)
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_pilot_02")))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_32[0]))
			{
				uLocal_32[0] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -1590.523f, 2796.302f, 15.9184f, 247.0896f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_32[1]))
			{
				uLocal_32[1] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2303.8f, 3387.99f, 30.034f, 58.5763f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_32[2]))
			{
				uLocal_32[2] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -1697.329f, 2909.941f, 31.9506f, 245.656f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_32[3]))
			{
				uLocal_32[3] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -1696.369f, 2905.772f, 31.9454f, 6.3714f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_32[4]))
			{
				uLocal_32[4] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -1843.707f, 2821.611f, 31.8528f, 271.6265f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_32[5]))
			{
				uLocal_32[5] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2006.877f, 2955.101f, 31.8103f, 332.0101f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_32[6]))
			{
				uLocal_32[6] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2010.022f, 2956.805f, 31.8103f, 288.1283f, 1, 1);
			}
			if (iLocal_27 != 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_32[7]))
				{
					uLocal_32[7] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2140.213f, 3034.609f, 31.81f, 302.4493f, 1, 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_32[8]))
				{
					uLocal_32[8] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2136.053f, 3031.494f, 31.81f, 38.6856f, 1, 1);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_32[9]))
			{
				uLocal_32[9] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2035.429f, 3058.876f, 31.8103f, 169.8222f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_32[10]))
			{
				uLocal_32[10] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2146.467f, 3160.749f, 31.8106f, 356.4766f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_32[11]))
			{
				uLocal_32[11] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2280.087f, 3172.423f, 31.8103f, 353.663f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_32[12]))
			{
				uLocal_32[12] = PED::CREATE_PED(26, joaat("s_m_y_marine_01"), -2277.376f, 3177.8f, 31.8103f, 175.0685f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
			{
				uLocal_30[0] = PED::CREATE_PED(26, joaat("s_m_m_pilot_02"), -1859.831f, 3071.758f, 31.8104f, 139.3607f, 1, 1);
				PED::SET_PED_PROP_INDEX(uLocal_30[0], 0, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_30[0], 8, 0, 0, 0);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_30[0], 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_30[0], joaat("weapon_assaultrifle"), 2000, 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_30[0], iLocal_59);
				PED::SET_PED_ACCURACY(uLocal_30[0], 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_30[0], 1);
				GlobalFunc_722(uLocal_30[0], 595);
				GlobalFunc_593(uLocal_30[0], 0);
			}
			iLocal_175 = 0;
			while (iLocal_175 <= 12)
			{
				if (iLocal_274[iLocal_175] == 0)
				{
					if (!PED::IS_PED_INJURED(uLocal_32[iLocal_175]))
					{
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_32[iLocal_175], 1);
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_32[iLocal_175], joaat("weapon_assaultrifle"), 2000, 1, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_32[iLocal_175], iLocal_59);
						PED::SET_PED_ACCURACY(uLocal_32[iLocal_175], 10);
						GlobalFunc_722(uLocal_32[iLocal_175], 595);
						GlobalFunc_593(uLocal_32[iLocal_175], 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_32[iLocal_175], 1);
						iLocal_274[iLocal_175] = 1;
					}
				}
				iLocal_175++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_marine_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_pilot_02"));
			iLocal_200 = 1;
		}
	}
}
















void func_99()//Position - 0x680B
{
	if (!GlobalFunc_188())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1738.131f, 3283.38f, 40.1261f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 25.3545f);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
	{
		PED::DELETE_PED(&(uLocal_30[0]));
	}
	iLocal_175 = 0;
	while (iLocal_175 <= 12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[iLocal_175]))
		{
			PED::DELETE_PED(&(uLocal_32[iLocal_175]));
		}
		iLocal_175++;
	}
	if (GlobalFunc_8315() == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_324[0]))
		{
			PED::DELETE_PED(&(uLocal_324[0]));
		}
	}
	if (GlobalFunc_8315() == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_324[2]))
		{
			PED::DELETE_PED(&(uLocal_324[2]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_48[0], 0);
	}
	AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", 0, 0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENTER_CHOPPER"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_P_2B_ENTER_CHOPPER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_46))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_46);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_54);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_47);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_48[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_86864[0], 1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
		}
		VEHICLE::DELETE_VEHICLE(&(Global_86864[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_86864[1], 1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[1], 1, 1);
		}
		VEHICLE::DELETE_VEHICLE(&(Global_86864[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_86864[2], 1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[2], 1, 1);
		}
		VEHICLE::DELETE_VEHICLE(&(Global_86864[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_50[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		OBJECT::DELETE_OBJECT(&iLocal_57);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		OBJECT::DELETE_OBJECT(&iLocal_58);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_55))
	{
		if (CAM::IS_CAM_ACTIVE(uLocal_55))
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		}
		CAM::DESTROY_CAM(uLocal_55, 0);
	}
}

void func_100()//Position - 0x6A55
{
	if (HUD::DOES_BLIP_EXIST(uLocal_60))
	{
		HUD::REMOVE_BLIP(&uLocal_60);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_61))
	{
		HUD::REMOVE_BLIP(&uLocal_61);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_64))
	{
		HUD::REMOVE_BLIP(&uLocal_64);
	}
	iLocal_175 = 0;
	while (iLocal_175 <= 12)
	{
		GlobalFunc_589(&(Local_69[iLocal_175 /*8*/]));
		iLocal_175++;
	}
	HUD::CLEAR_GPS_MULTI_ROUTE();
}


void func_102()//Position - 0x6B19
{
	if (iLocal_27 == 5)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_60))
		{
			HUD::REMOVE_BLIP(&uLocal_60);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_61))
		{
			HUD::REMOVE_BLIP(&uLocal_61);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_60))
				{
					HUD::REMOVE_BLIP(&uLocal_60);
				}
				if (iLocal_299 == 1)
				{
					if (MISC::GET_GAME_TIMER() < iLocal_188 + 7500)
					{
						HUD::CLEAR_PRINTS();
					}
				}
				if (iLocal_27 == 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_61))
					{
						uLocal_61 = GlobalFunc_5104(Local_313, 0);
					}
					if (iLocal_198 == 0)
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								GlobalFunc_164("DP_GOD4", 7500, 1);
								iLocal_189 = MISC::GET_GAME_TIMER();
								iLocal_198 = 1;
							}
						}
					}
				}
				if (iLocal_27 == 3)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_62[0]))
					{
						uLocal_62[0] = GlobalFunc_7055(uLocal_30[0], 1, 0);
					}
				}
			}
			else if (iLocal_27 != 5)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_60))
				{
					uLocal_60 = GlobalFunc_7055(iLocal_47, 0, 0);
				}
				if (iLocal_27 == 3 || iLocal_27 == 4)
				{
					if (iLocal_299 == 0)
					{
						HUD::CLEAR_PRINTS();
						GlobalFunc_164("DP_GOD6", 7500, 1);
						iLocal_188 = MISC::GET_GAME_TIMER();
						iLocal_299 = 1;
					}
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_61))
				{
					HUD::REMOVE_BLIP(&uLocal_61);
				}
				if (iLocal_27 == 3)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_62[0]))
					{
						HUD::REMOVE_BLIP(&(uLocal_62[0]));
					}
				}
				if (iLocal_27 == 4)
				{
					if (iLocal_198 == 1)
					{
						if (MISC::GET_GAME_TIMER() < iLocal_189 + 7500)
						{
							HUD::CLEAR_PRINTS();
						}
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_60))
			{
				HUD::REMOVE_BLIP(&uLocal_60);
			}
			if (iLocal_196 == 1)
			{
				iLocal_199 = 1;
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_60))
		{
			HUD::REMOVE_BLIP(&uLocal_60);
		}
		if (iLocal_196 == 1)
		{
			iLocal_199 = 1;
		}
	}
}








void func_110()//Position - 0x6E14
{
	if (iLocal_174 > 0)
	{
		func_102();
		func_193();
	}
	if (iLocal_174 == 0)
	{
		if (iLocal_195 == 1)
		{
			iLocal_196 = 0;
			func_33();
			iLocal_195 = 0;
		}
		iLocal_303 = 0;
		iLocal_304 = 0;
		iLocal_307 = 0;
		iLocal_308 = 0;
		if (HUD::DOES_BLIP_EXIST(uLocal_64))
		{
			HUD::REMOVE_BLIP(&uLocal_64);
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_47, 0);
		}
		PLAYER::SET_POLICE_RADAR_BLIPS(0);
		iLocal_175 = 0;
		while (iLocal_175 <= 12)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[iLocal_175]))
			{
				if (!PED::IS_PED_INJURED(uLocal_32[iLocal_175]))
				{
					PED::SET_PED_KEEP_TASK(uLocal_32[iLocal_175], 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_32[iLocal_175]));
				}
			}
			iLocal_175++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_48[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_30[0]));
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENTER_CHOPPER"))
		{
			AUDIO::START_AUDIO_SCENE("DH_P_2B_ENTER_CHOPPER");
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_5108(iLocal_47, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
		iLocal_196 = 1;
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (iLocal_307 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_310, 1) > 800f)
						{
							GlobalFunc_11043(2, "STAGE_FLY_CARGOBOB_TO_HANGER", 1, 0, 0, 1);
							iLocal_307 = 1;
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
				{
					if (ENTITY::IS_ENTITY_IN_AIR(iLocal_47))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_310, 1) > 800f)
						{
							if (iLocal_303 == 0 && iLocal_198 == 1)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										GlobalFunc_173(&uLocal_402, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
										if (GlobalFunc_10618(&uLocal_402, "DP2BAUD", "DP2B_CHAT59", 7, 0, 0, 0))
										{
											iLocal_303 = 1;
										}
									}
								}
							}
							if (iLocal_303 == 1 && iLocal_308 == 0)
							{
								if (GlobalFunc_230(72) == 0)
								{
									if (!GlobalFunc_111())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											GlobalFunc_173(&uLocal_402, 3, 0, "Wade", 0, 1);
											if (GlobalFunc_10638(&uLocal_402, 24, "DP2BAUD", "DP2B_WADEP3", 7, 1, 0, 0, 0))
											{
												iLocal_308 = 1;
											}
										}
									}
								}
								else if (!GlobalFunc_111())
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										GlobalFunc_173(&uLocal_402, 3, 0, "Wade", 0, 1);
										if (GlobalFunc_10638(&uLocal_402, 24, "DP2BAUD", "DP2B_WADEP4", 7, 1, 0, 0, 0))
										{
											iLocal_308 = 1;
										}
									}
								}
							}
						}
						else if (GlobalFunc_485(71) == 0)
						{
							if (iLocal_304 == 0)
							{
								if (!GlobalFunc_111())
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										GlobalFunc_159("DP_HELP4", -1);
										iLocal_304 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_313, 2f, 2f, 2f, 1, 1, 0))
					{
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1721.001f, 3264.248f, 38.40064f, 1765.509f, 3276.518f, 46.05385f, 48.25f, 0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_47) && VEHICLE::IS_VEHICLE_STOPPED(iLocal_47))
						{
							GlobalFunc_571(1, 600);
							RECORDING::_0x293220DA1B46CEBC(8f, 5f, 4);
							iLocal_174 = 0;
							iLocal_27 = 5;
						}
					}
				}
			}
		}
	}
}



















































































void func_193()//Position - 0xE190
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_313, 1) < 500f)
	{
		if (iLocal_213 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50[0]))
			{
				STREAMING::REQUEST_MODEL(joaat("sandking"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("sandking")))
				{
					iLocal_50[0] = VEHICLE::CREATE_VEHICLE(joaat("sandking"), 1754.951f, 3290.994f, 40.1176f, 182.397f, 1, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_50[0], 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sandking"));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[0]))
			{
				iLocal_213 = 1;
			}
		}
	}
	else if (iLocal_213 == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_313, 1) > 550f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_50[0]));
			}
			iLocal_213 = 0;
		}
	}
}

void func_194()//Position - 0xE25F
{
	if (iLocal_174 > 0)
	{
		func_102();
		func_200();
		func_193();
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 4)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		}
		func_199();
		func_198();
		iLocal_175 = 0;
		while (iLocal_175 <= 12)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
			{
				GlobalFunc_661(uLocal_32[iLocal_175], &(Local_69[iLocal_175 /*8*/]), -1, 0, 0, 0, -1082130432, 0);
			}
			else
			{
				GlobalFunc_589(&(Local_69[iLocal_175 /*8*/]));
			}
			iLocal_175++;
		}
	}
	if (iLocal_174 == 0)
	{
		if (iLocal_195 == 1)
		{
			iLocal_196 = 0;
			func_33();
			iLocal_195 = 0;
		}
		iLocal_198 = 0;
		iLocal_201[0] = 0;
		iLocal_201[1] = 0;
		iLocal_204 = 0;
		iLocal_205[0] = 0;
		iLocal_205[1] = 0;
		iLocal_208 = 0;
		iLocal_213 = 0;
		iLocal_214[0] = 0;
		iLocal_272 = 0;
		iLocal_273 = 0;
		iLocal_294 = 0;
		iLocal_295 = 0;
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_299 = 0;
		iLocal_182 = MISC::GET_GAME_TIMER();
		iLocal_187 = MISC::GET_GAME_TIMER();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_47, 0);
		}
		GlobalFunc_11043(1, "STAGE_ESCAPE_MILITARY", 0, 0, 0, 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_5108(iLocal_47, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENTER_CHOPPER"))
		{
			AUDIO::START_AUDIO_SCENE("DH_P_2B_ENTER_CHOPPER");
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
		{
			AUDIO::START_AUDIO_SCENE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
		}
		GlobalFunc_574(602, 0);
		PLAYER::SET_POLICE_RADAR_BLIPS(0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
			{
				GlobalFunc_503(iLocal_47, -1);
			}
		}
		RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
		iLocal_196 = 1;
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (iLocal_205[0] == 1)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_62[0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_62[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_48[0], 0);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
			}
			GlobalFunc_571(1, 602);
			GlobalFunc_574(600, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_47, 1721.001f, 3264.248f, 38.40064f, 1765.509f, 3276.518f, 46.05385f, 48.25f, 0, 1, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							iLocal_174 = 0;
							iLocal_27 = 5;
						}
						else
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							func_29();
						}
					}
					else
					{
						iLocal_174 = 0;
						iLocal_27 = 4;
					}
				}
			}
		}
		else if (iLocal_208 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_182 + 10000)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								GlobalFunc_164("DP_GOD5", 7500, 1);
								iLocal_208 = 1;
							}
						}
					}
				}
			}
		}
	}
}




void func_198()//Position - 0xE6B9
{
	iLocal_52 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 300f, joaat("lazer"), 4);
	iLocal_53 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 300f, joaat("lazer"), 16386);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::IS_ENTITY_IN_AIR(iLocal_52))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_64))
		{
			uLocal_64 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_52);
			HUD::SET_BLIP_AS_FRIENDLY(uLocal_64, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53) && ENTITY::IS_ENTITY_IN_AIR(iLocal_53))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_65))
		{
			uLocal_65 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_53);
			HUD::SET_BLIP_AS_FRIENDLY(uLocal_65, false);
		}
	}
}

void func_199()//Position - 0xE751
{
	if (iLocal_27 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
				{
					Local_319 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_48[0], 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_30[0]))
								{
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_30[0], 1) < 600f)
									{
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_319, -75.8f, -819.9f, 326f, 1) > 1600f && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_319, -2159f, 3067f, 33f, 1) < 1000f)
										{
											if (Local_319.f_2 > 70f)
											{
												if (iLocal_29 != 2)
												{
													iLocal_214[0] = 1;
													iLocal_29 = 2;
												}
											}
											else if (iLocal_29 != 1)
											{
												iLocal_214[0] = 1;
												iLocal_29 = 1;
											}
											if (iLocal_272 == 1)
											{
												if (iLocal_273 == 0)
												{
													if (!GlobalFunc_111())
													{
														if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															GlobalFunc_173(&uLocal_402, 4, 0, "PilotDispatch", 0, 1);
															GlobalFunc_173(&uLocal_402, 5, 0, "PilotDispatch2", 0, 1);
															if (GlobalFunc_10618(&uLocal_402, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
															{
																iLocal_273 = 1;
															}
														}
													}
												}
											}
										}
										else
										{
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_319, -75.8f, -819.9f, 326f, 1) < 1600f)
											{
												if (iLocal_29 != 3)
												{
													iLocal_214[0] = 1;
													iLocal_29 = 3;
												}
												if (iLocal_272 == 0)
												{
													if (!GlobalFunc_111())
													{
														if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															GlobalFunc_173(&uLocal_402, 4, 0, "PilotDispatch", 0, 1);
															GlobalFunc_173(&uLocal_402, 5, 0, "PilotDispatch2", 0, 1);
															if (GlobalFunc_10618(&uLocal_402, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
															{
																iLocal_272 = 1;
															}
														}
													}
												}
											}
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_319, -2159f, 3067f, 33f, 1) > 1000f)
											{
												if (iLocal_29 != 3)
												{
													iLocal_214[0] = 1;
													iLocal_29 = 3;
												}
											}
										}
									}
									else if (iLocal_29 != 4)
									{
										iLocal_214[0] = 1;
										iLocal_29 = 4;
									}
								}
							}
						}
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_319, -75.8f, -819.9f, 326f, 1) > 1600f)
				{
					if (iLocal_29 != 0)
					{
						iLocal_214[0] = 1;
						iLocal_29 = 0;
					}
					if (iLocal_272 == 1)
					{
						if (iLocal_273 == 0)
						{
							if (!GlobalFunc_111())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									GlobalFunc_173(&uLocal_402, 4, 0, "PilotDispatch", 0, 1);
									GlobalFunc_173(&uLocal_402, 5, 0, "PilotDispatch2", 0, 1);
									if (GlobalFunc_10618(&uLocal_402, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
									{
										iLocal_273 = 1;
									}
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_29 != 3)
					{
						iLocal_214[0] = 1;
						iLocal_29 = 3;
					}
					if (iLocal_272 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								GlobalFunc_173(&uLocal_402, 4, 0, "PilotDispatch", 0, 1);
								GlobalFunc_173(&uLocal_402, 5, 0, "PilotDispatch2", 0, 1);
								if (GlobalFunc_10618(&uLocal_402, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
								{
									iLocal_272 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_201[0] == 0)
	{
		if (iLocal_27 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_48[0], 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_30[0]))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_30[0], 1) < 200f)
							{
								Local_316 = { ENTITY::GET_ENTITY_COORDS(iLocal_48[0], 1) };
								TASK::CLEAR_PED_TASKS(uLocal_30[0]);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_30[0], Local_316, 10f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_30[0], 250f, 0);
								iLocal_201[0] = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_27 == 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_48[0], 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_30[0]))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_62[0]))
							{
								uLocal_62[0] = GlobalFunc_7055(uLocal_30[0], 1, 0);
							}
							Local_316 = { ENTITY::GET_ENTITY_COORDS(iLocal_48[0], 1) };
							TASK::CLEAR_PED_TASKS(uLocal_30[0]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_571);
							if (!PED::IS_PED_IN_VEHICLE(uLocal_30[0], iLocal_48[0], 0))
							{
								TASK::TASK_ENTER_VEHICLE(0, iLocal_48[0], 20000, -1, 1073741824, 1, 0);
							}
							TASK::TASK_HELI_MISSION(0, iLocal_48[0], 0, 0, Local_316.x, Local_316.f_1, (Local_316.f_2 + 20f), 4, 30f, 10f, -1f, 170, 40, -1082130432, 0);
							TASK::TASK_HELI_MISSION(0, iLocal_48[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 40, -1082130432, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_571);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_30[0], uLocal_571);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_571);
							iLocal_201[0] = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_27 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_48[0], 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_30[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_30[0], iLocal_48[0], 0))
						{
							if (MISC::GET_GAME_TIMER() > (iLocal_187 + 90000))
							{
								if (iLocal_296 == 0)
								{
									PED::SET_PED_ACCURACY(uLocal_30[0], 100);
									iLocal_295 = 0;
									iLocal_296 = 1;
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_187 + 10000 && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
							{
								if (iLocal_296 == 0)
								{
									PED::SET_PED_ACCURACY(uLocal_30[0], 100);
									iLocal_295 = 0;
									iLocal_296 = 1;
								}
							}
							else if (iLocal_295 == 0)
							{
								PED::SET_PED_ACCURACY(uLocal_30[0], 0);
								iLocal_296 = 0;
								iLocal_295 = 1;
							}
							if (GlobalFunc_156(iLocal_48[0], PLAYER::PLAYER_PED_ID(), 1) < 300f)
							{
								if (iLocal_298 == 0)
								{
									WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uLocal_30[0], joaat("vehicle_weapon_space_rocket"));
									PED::SET_PED_FIRING_PATTERN(uLocal_30[0], -1857128337);
									iLocal_297 = 0;
									iLocal_298 = 1;
								}
							}
							else if (iLocal_297 == 0)
							{
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uLocal_30[0], joaat("vehicle_weapon_player_buzzard"));
								PED::SET_PED_FIRING_PATTERN(uLocal_30[0], 1566631136);
								iLocal_298 = 0;
								iLocal_297 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_204 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_48[0], 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_30[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(uLocal_30[0], iLocal_48[0], 0))
							{
								PED::SET_PED_ACCURACY(uLocal_30[0], 0);
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uLocal_30[0], joaat("vehicle_weapon_space_rocket"));
								iLocal_204 = 1;
							}
						}
					}
				}
			}
		}
		switch (iLocal_29)
		{
			case 0:
				if (iLocal_214[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_48[0], 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_30[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_30[0], iLocal_48[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 15, 10, -1082130432, 0);
									iLocal_214[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_214[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_48[0], 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_30[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_30[0], iLocal_48[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 50, 20, -1082130432, 0);
									iLocal_214[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (iLocal_214[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_48[0], 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_30[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_30[0], iLocal_48[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 70, -1082130432, 0);
									iLocal_214[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (iLocal_214[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_48[0], 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_30[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_30[0], iLocal_48[0], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_48[0], 20f, 0f, 0f), 4, 10f, 10f, ENTITY::GET_ENTITY_HEADING(iLocal_48[0]), SYSTEM::ROUND(ENTITY::GET_ENTITY_HEIGHT(iLocal_48[0], ENTITY::GET_ENTITY_COORDS(iLocal_48[0], 1), 1, 1)), 100, -1082130432, 0);
									iLocal_214[0] = 0;
								}
							}
						}
					}
				}
				if (iLocal_294 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_319, -2159f, 3067f, 33f, 1) > 1000f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_48[0], 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
								{
									if (!PED::IS_PED_INJURED(uLocal_30[0]))
									{
										TASK::TASK_HELI_MISSION(uLocal_30[0], iLocal_48[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 170, 70, -1082130432, 0);
										iLocal_294 = 1;
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (iLocal_214[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_48[0], 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_30[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_30[0], iLocal_48[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, 50f, -1f, 200, 170, -1082130432, 0);
									iLocal_214[0] = 0;
								}
							}
						}
					}
				}
				break;
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
	{
		if (PED::IS_PED_INJURED(uLocal_30[0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_62[0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_62[0]));
			}
			iLocal_205[0] = 1;
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_62[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_62[0]));
		}
		iLocal_205[0] = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_48[0], 0))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_62[0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_62[0]));
			}
			iLocal_205[0] = 1;
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_62[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_62[0]));
		}
		iLocal_205[0] = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_48[0], 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
			{
				if (!PED::IS_PED_INJURED(uLocal_30[0]))
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_30[0], iLocal_48[0], 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_62[0]))
						{
							HUD::SET_BLIP_SCALE(uLocal_62[0], 1f);
						}
					}
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_30[0], 1) > 600f)
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_62[0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_62[0]));
						}
						iLocal_205[0] = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_30[0]))
	{
		if (!PED::IS_PED_INJURED(uLocal_30[0]))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(uLocal_30[0]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_30[0]);
				ENTITY::SET_ENTITY_HEALTH(uLocal_30[0], 0);
				if (HUD::DOES_BLIP_EXIST(uLocal_62[0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_62[0]));
				}
				iLocal_205[0] = 1;
			}
		}
	}
}

void func_200()//Position - 0xF25C
{
	if (iLocal_209 == 0)
	{
		if ((((GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, 0, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1598.278f, 2803.98f, 17.01772f, -1665.98f, 2895.398f, 34.58953f, 14.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1648.554f, 2873.74f, 24.85017f, -1673.864f, 2889.698f, 38.18856f, 14.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1647.446f, 2873.969f, 24.82373f, -1667.316f, 2914.302f, 39.39478f, 14.5f, 0, 1, 0))
		{
			iLocal_209 = 1;
		}
	}
	if (iLocal_209 == 1)
	{
		if ((((!GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, 0, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1598.278f, 2803.98f, 17.01772f, -1665.98f, 2895.398f, 34.58953f, 14.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1648.554f, 2873.74f, 24.85017f, -1673.864f, 2889.698f, 38.18856f, 14.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1647.446f, 2873.969f, 24.82373f, -1667.316f, 2914.302f, 39.39478f, 14.5f, 0, 1, 0))
		{
			iLocal_209 = 0;
		}
	}
	if (iLocal_200 == 1)
	{
		if (((iLocal_209 == 1 || iLocal_288 == 1) || iLocal_301 == 1) || iLocal_210 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 4)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
			iLocal_175 = 0;
			while (iLocal_175 <= 12)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[iLocal_175]))
				{
					if (!PED::IS_PED_INJURED(uLocal_32[iLocal_175]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0) || iLocal_211 == 1)
								{
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[iLocal_175], 1) < 39f)
									{
										if (iLocal_216[iLocal_175] == 0)
										{
											TASK::CLEAR_PED_TASKS(uLocal_32[iLocal_175]);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_32[iLocal_175], ENTITY::GET_ENTITY_COORDS(uLocal_32[iLocal_175], 1), 50f, 0, 0);
											TASK::TASK_COMBAT_PED(uLocal_32[iLocal_175], PLAYER::PLAYER_PED_ID(), 0, 16);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_32[iLocal_175], 51, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_32[iLocal_175], 43, 1);
											iLocal_230[iLocal_175] = 0;
											iLocal_244[iLocal_175] = 0;
											iLocal_258[iLocal_175] = 0;
											iLocal_216[iLocal_175] = 1;
										}
									}
									else if (iLocal_230[iLocal_175] == 0)
									{
										TASK::CLEAR_PED_TASKS(uLocal_32[iLocal_175]);
										TASK::OPEN_SEQUENCE_TASK(&uLocal_571);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_47, 1), 2f, -1, 20f, 0, 1193033728);
										TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_571);
										TASK::TASK_PERFORM_SEQUENCE(uLocal_32[iLocal_175], uLocal_571);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_571);
										iLocal_244[iLocal_175] = 0;
										iLocal_258[iLocal_175] = 0;
										iLocal_216[iLocal_175] = 0;
										iLocal_230[iLocal_175] = 1;
									}
								}
								else
								{
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[iLocal_175], 1) < 39f)
									{
										if (iLocal_244[iLocal_175] == 0)
										{
											TASK::CLEAR_PED_TASKS(uLocal_32[iLocal_175]);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_32[iLocal_175], ENTITY::GET_ENTITY_COORDS(uLocal_32[iLocal_175], 1), 50f, 0, 0);
											TASK::TASK_COMBAT_PED(uLocal_32[iLocal_175], PLAYER::PLAYER_PED_ID(), 0, 16);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_32[iLocal_175], 51, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_32[iLocal_175], 43, 1);
											iLocal_230[iLocal_175] = 0;
											iLocal_258[iLocal_175] = 0;
											iLocal_216[iLocal_175] = 0;
											iLocal_244[iLocal_175] = 1;
										}
									}
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[iLocal_175], 1) > 41f && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[iLocal_175], 1) < 400f)
									{
										if (iLocal_258[iLocal_175] == 0)
										{
											iLocal_194 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
											TASK::CLEAR_PED_TASKS(uLocal_32[iLocal_175]);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_32[iLocal_175], ENTITY::GET_ENTITY_COORDS(uLocal_32[iLocal_175], 1), 50f, 0, 0);
											TASK::OPEN_SEQUENCE_TASK(&uLocal_571);
											if (iLocal_194 == 0)
											{
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 1073741824, 1073741824, 0);
											}
											else if (iLocal_194 == 1)
											{
												TASK::TASK_STAND_STILL(0, 500);
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 1073741824, 1073741824, 0);
											}
											else if (iLocal_194 == 2)
											{
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 3f, 1073741824, 0);
											}
											else if (iLocal_194 == 3)
											{
												TASK::TASK_STAND_STILL(0, 500);
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 3f, 1073741824, 0);
											}
											TASK::CLOSE_SEQUENCE_TASK(uLocal_571);
											TASK::TASK_PERFORM_SEQUENCE(uLocal_32[iLocal_175], uLocal_571);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_571);
											iLocal_230[iLocal_175] = 0;
											iLocal_244[iLocal_175] = 0;
											iLocal_216[iLocal_175] = 0;
											iLocal_258[iLocal_175] = 1;
										}
									}
								}
							}
						}
					}
				}
				iLocal_175++;
			}
		}
		if (((iLocal_209 == 0 && iLocal_288 == 0) && iLocal_301 == 0) && iLocal_210 == 0)
		{
			iLocal_192 = 0;
			while (iLocal_192 <= 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[iLocal_192]))
				{
					if (!PED::IS_PED_INJURED(uLocal_32[iLocal_192]))
					{
						if (GlobalFunc_156(uLocal_32[iLocal_192], PLAYER::PLAYER_PED_ID(), 1) < 25f)
						{
							if (iLocal_291[iLocal_192] == 0)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_32[iLocal_192]))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_32[iLocal_192]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(uLocal_32[iLocal_192]);
								}
								TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_32[iLocal_192], PLAYER::PLAYER_PED_ID(), -1, 0);
								iLocal_291[iLocal_192] = 1;
							}
							if (iLocal_302 == 1)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_190 + 20000)
								{
									iLocal_301 = 1;
								}
							}
						}
						else if (GlobalFunc_156(uLocal_32[iLocal_192], PLAYER::PLAYER_PED_ID(), 1) > 30f)
						{
							if (iLocal_291[iLocal_192] == 1)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_32[iLocal_192]))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_32[iLocal_192]);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(uLocal_32[iLocal_192]);
								}
								TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_32[iLocal_192], PLAYER::PLAYER_PED_ID(), 1, 0);
								iLocal_291[iLocal_192] = 0;
							}
						}
					}
				}
				iLocal_192++;
			}
		}
	}
}


void func_202()//Position - 0x1063B
{
	if (iLocal_174 > 0)
	{
		func_102();
		func_200();
		func_199();
	}
	if (iLocal_174 == 0)
	{
		if (iLocal_195 == 1)
		{
			iLocal_196 = 0;
			func_33();
			iLocal_195 = 0;
		}
		iLocal_197 = 0;
		iLocal_200 = 0;
		iLocal_201[0] = 0;
		iLocal_201[1] = 0;
		iLocal_209 = 0;
		iLocal_210 = 0;
		iLocal_211 = 0;
		iLocal_289 = 0;
		iLocal_290 = 0;
		iLocal_291[0] = 0;
		iLocal_291[1] = 0;
		iLocal_301 = 0;
		iLocal_302 = 0;
		iLocal_305 = 0;
		iLocal_306 = 0;
		iLocal_309 = 0;
		iLocal_190 = 0;
		iLocal_175 = 0;
		while (iLocal_175 <= 12)
		{
			iLocal_216[iLocal_175] = 0;
			iLocal_230[iLocal_175] = 0;
			iLocal_244[iLocal_175] = 0;
			iLocal_258[iLocal_175] = 0;
			iLocal_175++;
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
		iLocal_181 = MISC::GET_GAME_TIMER();
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("lazer"), 1);
		STREAMING::REQUEST_MODEL(joaat("s_m_y_marine_01"));
		STREAMING::REQUEST_MODEL(joaat("s_m_m_pilot_02"));
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
					iLocal_47 = Global_86864[0];
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_47, 0);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_47, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), 1);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_47, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_47, 1);
					GlobalFunc_534(iLocal_47, 0);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_48[0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[1], 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[1], 1, 1);
					iLocal_48[0] = Global_86864[1];
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_48[0], 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_48[0], 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_48[0], 0);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_48[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_48[0], 0);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[2], 0))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Global_86864[2])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[2], 1, 1);
					GlobalFunc_10718(1734.799f, 3234.833f, 40.7041f, 321.0399f, 0, 145);
				}
				if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_86864[2])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_86864[2]))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Global_86864[2]))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Global_86864[2])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[2], 1, 1);
					GlobalFunc_10718(1748.05f, 3294.7f, 40.106f, 204.2419f, 0, 145);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
			uLocal_32[0] = Global_86864.f_9[0];
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[1], 1, 1);
			uLocal_32[1] = Global_86864.f_9[1];
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_47, 0);
		}
		AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_5108(iLocal_54, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
		GlobalFunc_562(73);
		iLocal_196 = 1;
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_GUARD"))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_GUARD"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_GUARD", 0);
			}
		}
		func_83();
		if (iLocal_210 == 0)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_181 + 3000)
			{
				iLocal_183 = 0;
				while (iLocal_183 <= 12)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[iLocal_183]))
					{
						if (!PED::IS_PED_INJURED(uLocal_32[iLocal_183]))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[iLocal_183], 1) < 40f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_32[iLocal_183], PLAYER::PLAYER_PED_ID()))
								{
									if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
									{
										AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0);
										AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", 1, 1);
										iLocal_210 = 1;
									}
									if (iLocal_209 == 1)
									{
										AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0);
										AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", 1, 1);
										iLocal_210 = 1;
									}
									if (iLocal_306 == 0)
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !GlobalFunc_116(0))
										{
											if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
											{
												iLocal_193 = MISC::GET_GAME_TIMER();
												iLocal_306 = 1;
											}
										}
									}
									else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !GlobalFunc_116(0))
									{
										if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
										{
											if (MISC::GET_GAME_TIMER() > iLocal_193 + 3000)
											{
												AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0);
												AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", 1, 1);
												iLocal_210 = 1;
											}
										}
										else if (iLocal_305 == 0)
										{
											iLocal_306 = 0;
											iLocal_305 = 1;
										}
									}
								}
							}
						}
					}
					iLocal_183++;
				}
			}
		}
		if (iLocal_197 == 0)
		{
			HUD::CLEAR_PRINTS();
			RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
			GlobalFunc_164("DP_GOD2", 7500, 1);
			iLocal_197 = 1;
		}
		if (iLocal_209 == 1)
		{
			if (!GlobalFunc_2018(5))
			{
				GlobalFunc_770(5);
			}
		}
		else if (GlobalFunc_2018(5))
		{
			func_203(5);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_47, 1) < 30f)
				{
					iLocal_211 = 1;
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), -1, 0, 1);
					iLocal_174 = 0;
					RECORDING::_0x293220DA1B46CEBC(10f, 10f, 4);
					iLocal_27 = 3;
				}
			}
		}
	}
}

void func_203(int iParam0)//Position - 0x10B9F
{
	MISC::CLEAR_BIT(&Global_86222, iParam0);
}

















void func_220()//Position - 0x11311
{
	if (iLocal_174 == 0)
	{
		GlobalFunc_2789(1, 0);
		GlobalFunc_2789(2, 0);
		GlobalFunc_2789(7, 0);
		GlobalFunc_2789(8, 0);
		GlobalFunc_2789(9, 0);
		GlobalFunc_2789(10, 0);
		GlobalFunc_2789(4, 0);
		GlobalFunc_2789(12, 0);
		PED::ADD_RELATIONSHIP_GROUP("MarineGroupHash", &iLocal_59);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_59, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -472287501, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_59, -472287501);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -472287501, iLocal_59);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_59);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_59, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), -472287501);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -472287501, joaat("COP"));
		if (GlobalFunc_199())
		{
			if (Global_84544 == 1)
			{
				if (GlobalFunc_198() == 0)
				{
					GlobalFunc_5116(Local_310, fLocal_322, 1, 0);
					iLocal_195 = 1;
					iLocal_174 = 0;
					iLocal_27 = 3;
				}
				if (GlobalFunc_198() == 1)
				{
					GlobalFunc_5116(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_195 = 1;
					iLocal_174 = 0;
					iLocal_27 = 4;
				}
				if (GlobalFunc_198() == 2)
				{
					func_221();
				}
			}
			else
			{
				if (GlobalFunc_198() == 0)
				{
					GlobalFunc_5116(-1565.084f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
					iLocal_195 = 1;
					iLocal_174 = 0;
					iLocal_27 = 2;
				}
				if (GlobalFunc_198() == 1)
				{
					GlobalFunc_5116(Local_310, fLocal_322, 1, 0);
					iLocal_195 = 1;
					iLocal_174 = 0;
					iLocal_27 = 3;
				}
				if (GlobalFunc_198() == 2)
				{
					GlobalFunc_5116(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_195 = 1;
					iLocal_174 = 0;
					iLocal_27 = 4;
				}
			}
		}
		else if (GlobalFunc_2(0))
		{
			GlobalFunc_5116(-1565.084f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
			iLocal_195 = 1;
			iLocal_174 = 0;
			iLocal_27 = 2;
		}
		else
		{
			iLocal_174 = 0;
			iLocal_27 = 2;
		}
	}
}

void func_221()//Position - 0x114DB
{
	iLocal_196 = 0;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1747.04f, 3267.456f, 40.246f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 229.0887f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_47);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47))
	{
		STREAMING::REQUEST_MODEL(joaat("cargobob"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("cargobob")))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_47 = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), 1740.852f, 3263.161f, 40.2743f, 280.3712f, 1, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_47, 0, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_47, 1, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_47, 2);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_47, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_47, 1);
		VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_47, 0);
		GlobalFunc_534(iLocal_47, 0);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(800);
		SYSTEM::WAIT(0);
	}
	func_29();
}




void func_225()//Position - 0x116C1
{
	if (!GlobalFunc_199())
	{
		if (iLocal_174 == 0)
		{
			iLocal_27 = 1;
		}
	}
	else
	{
		iLocal_174 = 0;
		iLocal_27 = 1;
	}
}

void func_226()//Position - 0x116E3
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47))
					{
						if (GlobalFunc_1517(PLAYER::PLAYER_PED_ID(), iLocal_47) == -1)
						{
							PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
						}
					}
				}
			}
		}
	}
}


void func_228()//Position - 0x117A7
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_27 == 2 || iLocal_27 == 3)
		{
			if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, 200, 0) || iLocal_210 == 1)
			{
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			}
		}
		if (iLocal_27 == 4)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_310, 1) > 1000f)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
		}
	}
}


void func_230()//Position - 0x11846
{
	if (iLocal_288 == 0)
	{
		iLocal_184 = 0;
		while (iLocal_184 <= 12)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[iLocal_184]))
			{
				if (!PED::IS_PED_INJURED(uLocal_32[iLocal_184]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_32[iLocal_184], PLAYER::PLAYER_PED_ID()))
					{
						if (GlobalFunc_156(uLocal_32[iLocal_184], PLAYER::PLAYER_PED_ID(), 1) < 40f)
						{
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								iLocal_288 = 1;
							}
						}
						if (GlobalFunc_156(uLocal_32[iLocal_184], PLAYER::PLAYER_PED_ID(), 1) < 25f)
						{
							if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
							{
								if (func_235(uLocal_32[iLocal_184], 6))
								{
									iLocal_288 = 1;
								}
							}
						}
					}
				}
			}
			iLocal_184++;
		}
	}
	if (iLocal_212 == 0)
	{
		if (GlobalFunc_8315() == 2)
		{
			GlobalFunc_173(&uLocal_402, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			iLocal_212 = 1;
		}
	}
	if (iLocal_209 == 0)
	{
		iLocal_191 = 0;
		while (iLocal_191 <= 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[iLocal_191]))
			{
				if (!PED::IS_PED_INJURED(uLocal_32[iLocal_191]))
				{
					if (iLocal_289 == 0 && iLocal_290 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[iLocal_191], 1) < 25f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_32[iLocal_191], PLAYER::PLAYER_PED_ID()))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !GlobalFunc_116(0))
										{
											if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
											{
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[0]))
												{
													if (!PED::IS_PED_INJURED(uLocal_32[0]))
													{
														if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[0], 1) < 30f)
														{
															GlobalFunc_173(&uLocal_402, 4, uLocal_32[0], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[1]))
												{
													if (!PED::IS_PED_INJURED(uLocal_32[1]))
													{
														if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[1], 1) < 30f)
														{
															GlobalFunc_173(&uLocal_402, 4, uLocal_32[1], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (GlobalFunc_10618(&uLocal_402, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_186 = MISC::GET_GAME_TIMER();
													iLocal_185 = MISC::GET_GAME_TIMER();
													iLocal_289 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_290 == 0 && iLocal_289 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[iLocal_191], 1) < 25f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_32[iLocal_191], PLAYER::PLAYER_PED_ID()))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
										{
											if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || GlobalFunc_116(0))
											{
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[0]))
												{
													if (!PED::IS_PED_INJURED(uLocal_32[0]))
													{
														if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[0], 1) < 30f)
														{
															GlobalFunc_173(&uLocal_402, 4, uLocal_32[0], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[1]))
												{
													if (!PED::IS_PED_INJURED(uLocal_32[1]))
													{
														if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[1], 1) < 30f)
														{
															GlobalFunc_173(&uLocal_402, 4, uLocal_32[1], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (GlobalFunc_10618(&uLocal_402, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_186 = MISC::GET_GAME_TIMER();
													iLocal_185 = MISC::GET_GAME_TIMER();
													iLocal_290 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_289 == 1 || iLocal_290 == 1)
					{
						if (iLocal_288 == 0 && iLocal_209 == 0)
						{
							if (iLocal_309 == 0)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_185 + 8000)
								{
									if (!GlobalFunc_111())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[iLocal_191], 1) < 25f)
											{
												if (PED::CAN_PED_SEE_HATED_PED(uLocal_32[iLocal_191], PLAYER::PLAYER_PED_ID()))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !GlobalFunc_116(0))
													{
														if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
														{
															if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[0]))
															{
																if (!PED::IS_PED_INJURED(uLocal_32[0]))
																{
																	if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[0], 1) < 30f)
																	{
																		GlobalFunc_173(&uLocal_402, 4, uLocal_32[0], "ARMY_Guard01", 0, 1);
																	}
																}
															}
															if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[1]))
															{
																if (!PED::IS_PED_INJURED(uLocal_32[1]))
																{
																	if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[1], 1) < 30f)
																	{
																		GlobalFunc_173(&uLocal_402, 4, uLocal_32[1], "ARMY_Guard01", 0, 1);
																	}
																}
															}
															if (GlobalFunc_10618(&uLocal_402, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_185 = MISC::GET_GAME_TIMER();
																iLocal_309 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
							}
							if (MISC::GET_GAME_TIMER() > iLocal_186 + 8000)
							{
								if (!GlobalFunc_111())
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[iLocal_191], 1) < 25f)
										{
											if (PED::CAN_PED_SEE_HATED_PED(uLocal_32[iLocal_191], PLAYER::PLAYER_PED_ID()))
											{
												if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
												{
													if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_unarmed") || GlobalFunc_116(0))
													{
														if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[0]))
														{
															if (!PED::IS_PED_INJURED(uLocal_32[0]))
															{
																if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[0], 1) < 30f)
																{
																	GlobalFunc_173(&uLocal_402, 4, uLocal_32[0], "ARMY_Guard01", 0, 1);
																}
															}
														}
														if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[1]))
														{
															if (!PED::IS_PED_INJURED(uLocal_32[1]))
															{
																if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[1], 1) < 30f)
																{
																	GlobalFunc_173(&uLocal_402, 4, uLocal_32[1], "ARMY_Guard01", 0, 1);
																}
															}
														}
														if (iLocal_309 == 0)
														{
															if (GlobalFunc_10618(&uLocal_402, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_186 = MISC::GET_GAME_TIMER();
																iLocal_309 = 1;
															}
														}
														if (iLocal_302 == 0)
														{
															iLocal_190 = MISC::GET_GAME_TIMER();
															iLocal_302 = 1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iLocal_191++;
		}
	}
	if (MISC::GET_GAME_TIMER() > iLocal_176 + 12000)
	{
		if (iLocal_209 == 1 || iLocal_288 == 1)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				if (!GlobalFunc_111())
				{
					if (func_234())
					{
						iLocal_180 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
						if (iLocal_180 == 0)
						{
							GlobalFunc_5122(func_233(), "OVER_THERE", 9);
							iLocal_176 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_180 == 1)
						{
							GlobalFunc_5122(func_233(), "PROVOKE_TRESSPASS", 9);
							iLocal_176 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_180 == 2)
						{
							GlobalFunc_5122(func_233(), "UP_THERE", 9);
							iLocal_176 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_180 == 3)
						{
							GlobalFunc_5122(func_233(), "suspect_spotted", 9);
							iLocal_176 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_180 == 4)
						{
							GlobalFunc_5122(func_233(), "GENERIC_INSULT_HIGH", 9);
							iLocal_176 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_180 == 5)
						{
							GlobalFunc_5122(func_233(), "GENERIC_INSULT_MED", 9);
							iLocal_176 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
}



int func_233()//Position - 0x1211F
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 0, 1, &iVar0, 0, 1, -1);
	}
	iLocal_178 = 0;
	while (iLocal_178 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[iLocal_178]))
		{
			if (!PED::IS_PED_INJURED(uLocal_32[iLocal_178]))
			{
				if (iVar0 == uLocal_32[iLocal_178])
				{
					return uLocal_32[iLocal_178];
				}
			}
		}
		iLocal_178++;
	}
	return 0;
}

int func_234()//Position - 0x12190
{
	iLocal_179 = 0;
	while (iLocal_179 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[iLocal_179]))
		{
			if (!PED::IS_PED_INJURED(uLocal_32[iLocal_179]))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_32[iLocal_179], 1) < 25f)
				{
					return 1;
				}
			}
		}
		iLocal_179++;
	}
	return 0;
}

int func_235(int iParam0, int iParam1)//Position - 0x121E3
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam1))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_236()//Position - 0x1222F
{
	if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_HELI"))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_HELI"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_HELI", 0);
		}
	}
}


void func_238()//Position - 0x1227A
{
	GlobalFunc_5198(73);
	HUD::REQUEST_ADDITIONAL_TEXT("DOCKP2B", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(4, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2024.2f, 2968f, 30.2f, -2004f, 2921.5f, 37.6f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2133.3f, 2993.7f, 41.1f, -2152.7f, 3039.4f, 31.6f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, 0, 1);
	uLocal_66 = PED::ADD_SCENARIO_BLOCKING_AREA(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, 0, 1, 1, 1);
	uLocal_68 = PED::ADD_SCENARIO_BLOCKING_AREA(-2168.3f, 3223.6f, 52.8f, -2156.2f, 3205f, 29f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1876.8f, 2806.1f, 32.3f, 8f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(-1857.7f, 2797.9f, 32.4f, 8f, 1, 0, 0, 0);
	AUDIO::SET_AUDIO_FLAG("WantedMusicOnMission", 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buzzard"), 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f);
}


void func_240()//Position - 0x124EC
{
	GlobalFunc_771();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buzzard"), 0);
	PLAYER::SET_POLICE_RADAR_BLIPS(1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 1, 1);
	VEHICLE::_0x0A436B8643716D14();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_66, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_67, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_68, 0);
	GlobalFunc_2789(1, 1);
	GlobalFunc_2789(2, 1);
	GlobalFunc_2789(7, 1);
	GlobalFunc_2789(8, 1);
	GlobalFunc_2789(9, 1);
	GlobalFunc_2789(10, 1);
	GlobalFunc_2789(4, 1);
	GlobalFunc_2789(12, 1);
	func_100();
	if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_GUARD"))
	{
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_GUARD"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_GUARD", 1);
		}
	}
	AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", 0, 0);
	AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", 0);
	AUDIO::SET_AUDIO_FLAG("WantedMusicOnMission", 0);
	iLocal_175 = 0;
	while (iLocal_175 <= 12)
	{
		GlobalFunc_589(&(Local_69[iLocal_175 /*8*/]));
		iLocal_175++;
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_HELI"))
	{
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_HELI"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_HELI", 1);
		}
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_59);
	SCRIPT::TERMINATE_THIS_THREAD();
}




