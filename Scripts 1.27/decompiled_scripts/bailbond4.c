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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = -1;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 1000;
	var uLocal_53 = 1000;
	var uLocal_54 = 0;
	struct<4> Local_55[10];
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	struct<5> Local_102 = { 0, 0, 0, 0, 0 } ;
	var uLocal_107 = 0;
	var uLocal_108 = -1;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	struct<20> Local_111 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<19> Local_131[3];
	int iLocal_189 = 0;
	struct<6> Local_190[6];
	struct<6> Local_227[8];
	struct<9> Local_276[4];
	struct<7> Local_313[1];
	struct<7> Local_321 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_328 = 0;
	struct<6> Local_329 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_335 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_341 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_347 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358[2] = { 0, 0 };
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	bool bLocal_375 = 0;
	int iLocal_376 = 0;
	bool bLocal_377 = 0;
	int iLocal_378 = 0;
	bool bLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	bool bLocal_388 = 0;
	var uLocal_389 = 0;
	int iLocal_390 = 0;
	float fLocal_391 = 0f;
	float fLocal_392 = 0f;
	float fLocal_393 = 0f;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	char* sLocal_418 = NULL;
	char* sLocal_419 = NULL;
	char* sLocal_420 = NULL;
	char* sLocal_421[2] = { NULL, NULL };
	char[] cLocal_424[8] = 0;
	char[] cLocal_425[8] = 0;
	char* sLocal_426 = NULL;
	char* sLocal_427 = NULL;
	char* sLocal_428 = NULL;
	char* sLocal_429 = NULL;
	char* sLocal_430 = NULL;
	var uLocal_431 = 16;
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
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	int iLocal_596 = 0;
	struct<3> Local_597 = { 0, 0, 0 } ;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	char cLocal_603[24] = "";
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	struct<6> Local_609 = { 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_615 = { 0, 0, 0 } ;
	struct<3> Local_618 = { 0, 0, 0 } ;
	struct<3> Local_621 = { 0, 0, 0 } ;
	struct<3> Local_624 = { 0, 0, 0 } ;
	struct<3> Local_627 = { 0, 0, 0 } ;
	struct<3> Local_630 = { 0, 0, 0 } ;
	struct<3> Local_633 = { 0, 0, 0 } ;
	struct<3> Local_636 = { 0, 0, 0 } ;
	int iLocal_639 = 0;
	struct<8> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	bLocal_377 = true;
	cLocal_424 = "BB4AUD";
	cLocal_425 = "BBCAUD";
	sLocal_426 = "Trevor";
	sLocal_427 = "Maude";
	sLocal_428 = "maude_criminal_4";
	sLocal_429 = "maude_chair";
	sLocal_430 = "maude_laptop";
	StringCopy(&Local_597, "", 24);
	StringCopy(&cLocal_603, "MAUDE_MCS_5", 24);
	StringCopy(&Local_609, "", 24);
	Local_102 = { ScriptParam_0 };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		if (iLocal_97 == 0)
		{
			Global_96065 = 0;
			func_524();
		}
		else
		{
			Global_96065 = 3;
			GlobalFunc_10100(3);
			func_524();
		}
	}
	if (!GlobalFunc_10099(1))
	{
		Global_96065 = 0;
		func_524();
	}
	MISC::SET_MISSION_FLAG(1);
	func_466();
	if (GlobalFunc_199())
	{
		iVar0 = GlobalFunc_198();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_10698(&iLocal_639, 1476.887f, 6363.799f, 22.5945f, 171.3869f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
				GlobalFunc_4972(Local_624, fLocal_391, 1, 0);
				iLocal_100 = 2;
				func_414(1, 0);
				break;
			
			case 1:
				GlobalFunc_10698(&iLocal_639, 2704.078f, 4152.24f, 42.2514f, 175.193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
				GlobalFunc_4972(Local_615, 254.9762f, 0, 0);
				func_414(4, 0);
				break;
			
			default:
				break;
		}
	}
	else if (GlobalFunc_2(0))
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_624, fLocal_391, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
	}
	while (true)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
			Local_618 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			func_400();
			func_399();
			switch (iLocal_97)
			{
				case 0:
					func_392();
					break;
				
				case 1:
					func_381();
					break;
				
				case 2:
					func_374();
					break;
				
				case 3:
					func_370();
					break;
				
				case 6:
					func_363();
					break;
				
				case 7:
					func_300();
					break;
				
				case 4:
					func_120();
					break;
				
				case 5:
					func_112(1);
					break;
				
				case 8:
					func_109();
					break;
				
				case 9:
					func_68();
					break;
			}
			if (bLocal_377 == 0)
			{
				func_1(iLocal_98);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x2C2
{
	if (iLocal_97 == iParam0)
	{
		if (GlobalFunc_188())
		{
			GlobalFunc_4967(0, -1, 0);
		}
		func_33(iLocal_97);
		if (iLocal_97 == 4)
		{
			func_23(1, 0, 1);
		}
		else
		{
			func_23(1, 1, 1);
		}
		bLocal_377 = true;
		iLocal_378 = 0;
		if (iLocal_97 == 5)
		{
			GlobalFunc_79(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x319
{
	int iVar0;
	
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_4935();
		HUD::CLEAR_PRINTS();
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(1);
		}
		switch (iLocal_97)
		{
			case 0:
				if (iLocal_99 == 1)
				{
					if (!GlobalFunc_188())
					{
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_627, fLocal_392, 0, 1);
						if (GlobalFunc_4924(Local_111.f_9))
						{
							GlobalFunc_2294(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_111.f_9, 1));
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_378 == 0)
						{
							if (iLocal_98 == 1)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_378 = 1;
								}
							}
						}
					}
					iLocal_362 = 1;
					iLocal_100 = 2;
					func_7();
					iLocal_99 = 2;
				}
				break;
			
			case 1:
				iLocal_362 = 1;
				iLocal_361 = 1;
				if (iLocal_99 == 1)
				{
					if (!GlobalFunc_188())
					{
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_630, fLocal_393, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_378 == 0)
						{
							if (iLocal_98 == 2)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_378 = 1;
								}
							}
						}
					}
					Local_111.f_17 = (MISC::GET_GAME_TIMER() - 5000);
					func_7();
					iLocal_99 = 2;
				}
				break;
			
			case 2:
				iLocal_353 = 1;
				if (iLocal_99 == 1)
				{
					iLocal_381 = 1;
					iLocal_354 = 1;
					iLocal_355 = 1;
					if (iLocal_406 > 0)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_406 - 1))
						{
							if (GlobalFunc_4924(Local_131[iVar0 /*19*/]))
							{
								PED::EXPLODE_PED_HEAD(Local_131[iVar0 /*19*/], joaat("weapon_sniperrifle"));
								ENTITY::SET_ENTITY_HEALTH(Local_131[iVar0 /*19*/], 0);
							}
							iVar0++;
						}
					}
					GlobalFunc_4935();
					GlobalFunc_4956();
					if (!GlobalFunc_188())
					{
						GlobalFunc_7087(Local_111.f_9, 5f);
						if (iLocal_378 == 0)
						{
							if (iLocal_98 == 3)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_378 = 1;
								}
							}
						}
					}
					func_7();
					iLocal_99 = 2;
				}
				break;
			
			case 3:
				iLocal_369 = 1;
				if (iLocal_99 == 1)
				{
					GlobalFunc_7097(Local_111.f_9, Local_615, 0f, 0, 0);
					if (!GlobalFunc_188())
					{
						GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_615, 254.9762f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_378 == 0)
						{
							if (iLocal_98 == 4)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_378 = 1;
								}
							}
						}
					}
					func_7();
					iLocal_99 = 2;
				}
				break;
			
			case 4:
				if (iLocal_99 == 1)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CUTSCENE::STOP_CUTSCENE(0);
					}
				}
				break;
			
			case 6:
				if (iLocal_99 == 1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					func_7();
				}
				break;
			
			case 7:
				if (iLocal_99 == 1)
				{
					iLocal_355 = 1;
					if (!GlobalFunc_188())
					{
						GlobalFunc_7087(Local_111.f_9, 2.5f);
						if (iLocal_378 == 0)
						{
							if (iLocal_98 == 3)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_378 = 1;
								}
							}
						}
					}
					GlobalFunc_4935();
					GlobalFunc_4956();
					func_7();
					iLocal_99 = 2;
				}
				break;
			}
	}
}





void func_7()//Position - 0x71C
{
	int iVar0;
	
	func_8();
	Local_111.f_17 = 0;
	Local_111.f_18 = 0;
	Local_111.f_19 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_406 - 1))
	{
		Local_131[iVar0 /*19*/].f_15 = 0;
		Local_131[iVar0 /*19*/].f_16 = 0;
		iVar0++;
	}
}

void func_8()//Position - 0x75F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_55)
	{
		GlobalFunc_169(&(Local_55[iVar0 /*4*/]));
		iVar0++;
	}
}















void func_23(int iParam0, int iParam1, int iParam2)//Position - 0xB25
{
	func_24(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		GlobalFunc_79(500, 0);
	}
}

void func_24(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xB59
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, iParam3, 0);
	GlobalFunc_8316(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	HUD::CLEAR_HELP(1);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_42 != 0 && iLocal_42 != joaat("object")) && iLocal_42 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_42, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_42, 0);
				}
			}
		}
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}









void func_33(int iParam0)//Position - 0xE0F
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 4:
				GlobalFunc_9152(&cLocal_603);
				func_63();
				while (!GlobalFunc_7956(1, 1093140480, 0) || !func_34())
				{
					GlobalFunc_9152(&cLocal_603);
					func_63();
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
}

int func_34()//Position - 0xE6B
{
	if (GlobalFunc_1986(Local_618, Local_321.f_1, 210f))
	{
		if (!iLocal_384)
		{
			if ((func_55(2) && GlobalFunc_5708(&Local_329, Local_329.f_5, Local_329.f_1, Local_329.f_4, 1)) && GlobalFunc_5708(&Local_335, Local_335.f_5, Local_335.f_1, Local_335.f_4, 1))
			{
				if (GlobalFunc_5707(&Local_321, Local_321.f_6, Local_321.f_1, Local_321.f_4, 1, 0, 1))
				{
					func_46();
					iLocal_384 = 1;
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_341))
		{
			if (GlobalFunc_1986(Local_618, Local_341.f_1, 150f))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_341.f_1, 10f, GlobalFunc_2301(), 0))
				{
					Local_341 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_341.f_1, 10f, GlobalFunc_2301(), 1, 0, 1);
					if (GlobalFunc_115(Local_341))
					{
						ENTITY::SET_ENTITY_COORDS(Local_341, GlobalFunc_2300(), 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_341, GlobalFunc_2299());
						ENTITY::FREEZE_ENTITY_POSITION(Local_341, 1);
					}
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_347))
		{
			if (GlobalFunc_1986(Local_618, Local_347.f_1, 150f))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_347.f_1, 10f, GlobalFunc_2298(), 0))
				{
					Local_347 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_347.f_1, 10f, GlobalFunc_2298(), 1, 0, 1);
				}
			}
		}
	}
	else if (!CAM::IS_SPHERE_VISIBLE(Local_321.f_1, 2.5f))
	{
		GlobalFunc_5706(&Local_321, 1);
		STREAMING::REMOVE_ANIM_DICT(GlobalFunc_2296());
		GlobalFunc_5721(&Local_329, 1);
		GlobalFunc_5721(&Local_335, 1);
		GlobalFunc_5721(&Local_341, 0);
		GlobalFunc_5721(&Local_347, 0);
		iLocal_384 = 0;
	}
	return iLocal_384;
}












void func_46()//Position - 0x1199
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_4924(Local_321))
	{
		if (GlobalFunc_115(Local_329))
		{
			if (func_55(2))
			{
				uVar0 = PED::CREATE_SYNCHRONIZED_SCENE(GlobalFunc_2300(), GlobalFunc_2304(), 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar0, 1);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uVar0, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_321, uVar0, GlobalFunc_2296(), GlobalFunc_2303(), 1000f, -8f, 4688, 0, 1148846080, 0);
				iVar1 = 0;
				iVar1 += 16;
				iVar1 += 64;
				iVar1 += 512;
				iVar1 += 4096;
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_329, uVar0, GlobalFunc_2302(), GlobalFunc_2296(), 1000f, -8f, iVar1, 1148846080);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_321, 1);
				PED::SET_PED_MONEY(Local_321, 0);
				PED::SET_PED_CAN_BE_TARGETTED(Local_321, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_321, 1862763509);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_321, 0);
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_321, 0);
				PED::SET_PED_KEEP_TASK(Local_321, 1);
				PED::SET_PED_CONFIG_FLAG(Local_321, 118, 0);
			}
		}
	}
}









int func_55(int iParam0)//Position - 0x13FF
{
	switch (iParam0)
	{
		case 0:
			HUD::REQUEST_ADDITIONAL_TEXT("BBONDS", 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				return 1;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT(GlobalFunc_2296());
			if (STREAMING::HAS_ANIM_DICT_LOADED(GlobalFunc_2296()))
			{
				return 1;
			}
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_DICT("oddjobs@bailbond_hobodepressed");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@bailbond_hobohang_out_street_b");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@bailbond_hobohang_out_street_c");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@bailbond_hobotwitchy");
			if (((STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@bailbond_hobodepressed") && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@bailbond_hobohang_out_street_b")) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@bailbond_hobohang_out_street_c")) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@bailbond_hobotwitchy"))
			{
				return 1;
			}
			break;
	}
	return 0;
}








void func_63()//Position - 0x17DB
{
	if (GlobalFunc_115(Local_111.f_9))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_428, Local_111.f_9, 0);
		}
	}
	if (GlobalFunc_115(Local_321))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_427, Local_321, 0);
		}
	}
}





void func_68()//Position - 0x1936
{
	char* sVar0;
	int iVar1;
	
	sVar0 = 0;
	switch (iLocal_99)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			func_105();
			Global_96065 = 3;
			if (iLocal_101 == 4)
			{
				if (GlobalFunc_4924(Local_321))
				{
					GlobalFunc_200(&uLocal_431, 4);
					GlobalFunc_7090(Local_321, 0);
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_321))
					{
						if (GlobalFunc_775(Local_321, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 35f))
						{
							AUDIO::STOP_PED_SPEAKING(Local_321, 0);
							GlobalFunc_5653(Local_321, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_335))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_335, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_341))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_341, 0);
				}
				STREAMING::REQUEST_ANIM_DICT(GlobalFunc_2310());
				if (GlobalFunc_7959(&Local_321, &Local_329, &iLocal_413))
				{
					iLocal_387 = 1;
				}
			}
			else if (iLocal_101 == 2)
			{
				iLocal_374 = 0;
				StringCopy(&Local_597, "BBC_T12", 24);
			}
			if (GlobalFunc_4924(Local_111.f_9))
			{
				if (PED::IS_PED_IN_GROUP(Local_111.f_9))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_111.f_9);
				}
				func_96(Local_111.f_9, 1);
			}
			iVar1 = 0;
			while (iVar1 <= (iLocal_406 - 1))
			{
				func_96(Local_131[iVar1 /*19*/], 1);
				iVar1++;
			}
			switch (iLocal_101)
			{
				case 1:
					break;
				
				case 2:
					sVar0 = "BBS_F1";
					break;
				
				case 3:
					sVar0 = "BBS_F3";
					break;
				
				case 4:
					sVar0 = "BBS_F2";
					break;
				
				case 0:
					break;
			}
			if (iLocal_101 != 0)
			{
				GlobalFunc_509(sVar0);
			}
			GlobalFunc_10100(3);
			iLocal_99 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_88(1);
				func_524();
			}
			else if (!iLocal_374)
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				if (iLocal_101 == 4)
				{
					if (GlobalFunc_4924(Local_321))
					{
						if (GlobalFunc_775(Local_321, Local_618, 35f))
						{
							GlobalFunc_173(&uLocal_431, 4, Local_321, "MAUDE", 0, 1);
							if (GlobalFunc_10865(&uLocal_431, cLocal_425, &Local_597, 4, 0, 0, 0))
							{
								iLocal_374 = 1;
							}
						}
					}
				}
				else if (GlobalFunc_10865(&uLocal_431, cLocal_425, &Local_597, 4, 0, 0, 0))
				{
					iLocal_374 = 1;
				}
				if (iLocal_101 == 4)
				{
					if (!iLocal_387)
					{
						STREAMING::REQUEST_ANIM_DICT(GlobalFunc_2310());
						if (GlobalFunc_7959(&Local_321, &Local_329, &iLocal_413))
						{
							iLocal_387 = 1;
						}
					}
					else if (GlobalFunc_4924(Local_321))
					{
						if (!GlobalFunc_6964(Local_321, 1805844857))
						{
							if (!PED::IS_PED_FLEEING(Local_321))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_321, GlobalFunc_2310(), GlobalFunc_2308(), 3))
								{
									GlobalFunc_7088(&Local_321);
									TASK::TASK_SMART_FLEE_PED(Local_321, PLAYER::PLAYER_PED_ID(), 50f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(Local_321, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
}




















void func_88(bool bParam0)//Position - 0x24C7
{
	int iVar0;
	
	if (iLocal_404 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_404 - 1))
		{
			GlobalFunc_5721(&(Local_227[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_402 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_402 - 1))
		{
			GlobalFunc_5721(&(Local_276[iVar0 /*9*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_405 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_405 - 1))
		{
			GlobalFunc_841(&(Local_313[iVar0 /*7*/]));
			iVar0++;
		}
	}
	GlobalFunc_5721(&Local_329, bParam0);
	GlobalFunc_5721(&Local_335, bParam0);
	GlobalFunc_5721(&Local_341, 0);
	GlobalFunc_5721(&Local_347, 0);
	if (GlobalFunc_4924(Local_111.f_9))
	{
		if (PED::IS_PED_IN_GROUP(Local_111.f_9))
		{
			if (PED::IS_PED_GROUP_MEMBER(Local_111.f_9, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_111.f_9);
			}
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_111.f_9, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 0);
		if (Global_96065 == 0)
		{
			PED::SET_PED_KEEP_TASK(Local_111.f_9, 0);
		}
		else
		{
			PED::SET_PED_KEEP_TASK(Local_111.f_9, 1);
		}
	}
	GlobalFunc_5706(&(Local_111.f_9), bParam0);
	if (GlobalFunc_4924(Local_321))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_321, 0);
		PED::SET_PED_KEEP_TASK(Local_321, 1);
	}
	GlobalFunc_5706(&Local_321, bParam0);
	if (iLocal_406 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_406 - 1))
		{
			if (iLocal_110 == 4)
			{
				if (GlobalFunc_4924(Local_131[iVar0 /*19*/]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_131[iVar0 /*19*/], -2065892691);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_131[iVar0 /*19*/], 0);
					if (Global_96065 == 0)
					{
						PED::SET_PED_KEEP_TASK(Local_131[iVar0 /*19*/], 0);
					}
					else
					{
						PED::SET_PED_KEEP_TASK(Local_131[iVar0 /*19*/], 1);
					}
				}
			}
			GlobalFunc_5706(&(Local_131[iVar0 /*19*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_403 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_403 - 1))
		{
			GlobalFunc_7957(&(Local_190[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
}








void func_96(int iParam0, bool bParam1)//Position - 0x2837
{
	if (GlobalFunc_4924(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 512, 0);
		if (!GlobalFunc_6964(iParam0, 1805844857))
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			TASK::TASK_LOOK_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
		}
		if (bParam1)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
		}
		PED::SET_PED_KEEP_TASK(iParam0, 1);
	}
}









void func_105()//Position - 0x2CCF
{
	func_108(iLocal_406);
	GlobalFunc_846(&(Local_111.f_8));
	GlobalFunc_589(&Local_111);
	GlobalFunc_846(&uLocal_389);
}



void func_108(int iParam0)//Position - 0x2D81
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		GlobalFunc_589(&(Local_131[iVar0 /*19*/].f_6));
		iVar0++;
	}
}

void func_109()//Position - 0x2DAA
{
	int iVar0;
	
	switch (iLocal_99)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			func_105();
			GlobalFunc_5706(&Local_321, 1);
			iVar0 = 0;
			while (iVar0 <= (iLocal_406 - 1))
			{
				func_111(iVar0);
				iVar0++;
			}
			iLocal_410 = MISC::GET_GAME_TIMER();
			iLocal_99 = 1;
			break;
		
		case 1:
			if (GlobalFunc_2311(iLocal_410, 500))
			{
				if (!bLocal_375)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4935();
						GlobalFunc_4956();
					}
					if (GlobalFunc_10865(&uLocal_431, cLocal_425, "BBC_PK1", 4, 0, 0, 0))
					{
						bLocal_375 = true;
					}
				}
				if (bLocal_375)
				{
					func_112(2);
				}
				if (GlobalFunc_2311(iLocal_410, 1500))
				{
					func_112(2);
				}
			}
			break;
	}
}


void func_111(int iParam0)//Position - 0x2E7F
{
	if (GlobalFunc_4924(Local_131[iParam0 /*19*/]))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_131[iParam0 /*19*/]) == iLocal_596)
		{
			PED::SET_PED_HEARING_RANGE(Local_131[iParam0 /*19*/], 30f);
			PED::SET_PED_SEEING_RANGE(Local_131[iParam0 /*19*/], 30f);
			PED::SET_PED_ID_RANGE(Local_131[iParam0 /*19*/], 30f);
			PED::SET_PED_COMBAT_RANGE(Local_131[iParam0 /*19*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_131[iParam0 /*19*/], 1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_131[iParam0 /*19*/], 3, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_131[iParam0 /*19*/], 0, 1);
			TASK::TASK_LOOK_AT_ENTITY(Local_131[iParam0 /*19*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			if (!PED::IS_PED_FLEEING(Local_131[iParam0 /*19*/]))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Local_131[iParam0 /*19*/]))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_131[iParam0 /*19*/]);
				}
				TASK::TASK_CLEAR_LOOK_AT(Local_131[iParam0 /*19*/]);
				TASK::CLEAR_PED_SECONDARY_TASK(Local_131[iParam0 /*19*/]);
				TASK::CLEAR_PED_TASKS(Local_131[iParam0 /*19*/]);
				TASK::TASK_HANDS_UP(Local_131[iParam0 /*19*/], -1, PLAYER::PLAYER_PED_ID(), -1, 0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_131[iParam0 /*19*/], 1);
			Local_131[iParam0 /*19*/].f_14 = 2;
		}
		else
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_131[iParam0 /*19*/], 13, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_131[iParam0 /*19*/], 5, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_131[iParam0 /*19*/], 17, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_131[iParam0 /*19*/], 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_131[iParam0 /*19*/], 0);
			Local_131[iParam0 /*19*/].f_14 = 5;
		}
	}
}

void func_112(int iParam0)//Position - 0x2FC2
{
	GlobalFunc_79(500, 1);
	GlobalFunc_7610(GlobalFunc_2313(Local_102.f_4), 0, 0);
	if (iParam0 == 2)
	{
		Global_96065 = 1;
	}
	else
	{
		Global_96065 = 2;
	}
	func_524();
}








void func_120()//Position - 0x38E9
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	switch (iLocal_99)
	{
		case 0:
			GlobalFunc_9152(&cLocal_603);
			func_63();
			if (func_34())
			{
				if (GlobalFunc_7956(1, 10.5f, 1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_426, 0, 0, 0);
					if (GlobalFunc_115(Local_321))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_321, sLocal_427, 0, 0, 0);
					}
					if (GlobalFunc_115(Local_111.f_9))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_111.f_9, sLocal_428, 0, 0, 0);
					}
					if (GlobalFunc_115(Local_329))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_329, sLocal_429, 0, 0, 0);
					}
					if (GlobalFunc_115(Local_335))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_335, sLocal_430, 0, 0, 0);
					}
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					GlobalFunc_79(800, 0);
					func_183(2727.58f, 4144.19f, 43.95f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					GlobalFunc_2315(&Var0, &Var3, &fVar9);
					Var6 = { GlobalFunc_2314() };
					if (GlobalFunc_7091(Var6, 0))
					{
						GlobalFunc_10096(Var0, Var3, fVar9, 2719.87f, 4143.46f, 43.46f, 261.91f, 1, 1, 1, 0, 0);
						GlobalFunc_10697(2719.87f, 4143.46f, 43.46f, 261.91f, 0, 145);
					}
					else
					{
						GlobalFunc_10096(Var0, Var3, fVar9, 2710.665f, 4149.075f, 42.7026f, 180.9488f, 1, 1, 1, 0, 0);
						GlobalFunc_10697(2710.665f, 4149.075f, 42.7026f, 180.9488f, 0, 145);
					}
					if (GlobalFunc_4924(Local_111.f_9))
					{
						if (PED::IS_PED_IN_GROUP(Local_111.f_9))
						{
							PED::REMOVE_PED_FROM_GROUP(Local_111.f_9);
						}
						TASK::CLEAR_PED_TASKS(Local_111.f_9);
						ENTITY::SET_ENTITY_COORDS(Local_111.f_9, 2724.02f, 4145.08f, 43.29f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_111.f_9, -84.2f);
						TASK::CLEAR_PED_TASKS(Local_111.f_9);
					}
					iLocal_99 = 1;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_115(Local_329))
			{
				if (GlobalFunc_4924(Local_321))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_427, 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_429, 0))
					{
						func_46();
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_426, 0))
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iLocal_99 = 2;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() >= 64500)
			{
				PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			else
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (bLocal_377)
				{
					func_24(1, 1, 1, 1);
				}
				if (GlobalFunc_4924(Local_111.f_9))
				{
					if (PED::IS_PED_IN_GROUP(Local_111.f_9))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_111.f_9);
					}
				}
				GlobalFunc_5706(&(Local_111.f_9), 1);
				if (GlobalFunc_4924(Local_321))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_321, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					PED::SET_PED_KEEP_TASK(Local_321, 1);
				}
				GlobalFunc_2297(&Local_321, 1, 0, 1);
				func_121(5);
			}
			break;
	}
}

void func_121(int iParam0)//Position - 0x3BDE
{
	iLocal_97 = iParam0;
	iLocal_99 = 0;
}






























































void func_183(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x7974
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		GlobalFunc_9154(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8329())
			{
				case 0:
					if (GlobalFunc_10959(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11262(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10959(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11262(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10959(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10959(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11262(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10959(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11262(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_80(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam10)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
		if (bParam12)
		{
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
		}
		HUD::CLEAR_PRINTS();
		if (iParam11 == 1)
		{
			HUD::CLEAR_HELP(1);
		}
		if (iParam3 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_42 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_42 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}





















































































































void func_300()//Position - 0x23B15
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	func_34();
	func_361();
	if (GlobalFunc_4924(Local_111.f_9))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_111.f_9, 0) };
		func_360(Local_111.f_9, &iLocal_407, 1126825984, 7);
		func_352(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_340();
		switch (iLocal_99)
		{
			case 0:
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_596);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_596, 1862763509);
				iLocal_411 = ENTITY::GET_ENTITY_HEALTH(Local_111.f_9);
				Local_633 = { ENTITY::GET_ENTITY_COORDS(Local_111.f_9, 0) };
				GlobalFunc_2318(&Local_636, Local_633);
				func_338(Local_111.f_9);
				if (Local_111.f_10 != 13 && Local_111.f_10 != 14)
				{
					TASK::CLEAR_PED_TASKS(Local_111.f_9);
					Local_111.f_18 = (MISC::GET_GAME_TIMER() - 3000);
					Local_111.f_10 = 13;
				}
				if (GlobalFunc_4924(Local_111.f_9))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
					{
						Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 0, 5);
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_111.f_9);
				}
				iLocal_408 = -1;
				iLocal_409 = -1;
				iLocal_381 = 0;
				iLocal_354 = 0;
				iLocal_353 = 0;
				sLocal_420 = "BB4_J8";
				iLocal_396 = MISC::GET_GAME_TIMER();
				GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_399, iLocal_400, 0);
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_381)
				{
					GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_399, iLocal_400, 0);
					GlobalFunc_10693(&uLocal_43, Local_111.f_9, 0, 0, 1, 1, 1);
					if (Local_111.f_10 == 13 || Local_111.f_10 == 14)
					{
						if (iLocal_409 == -1)
						{
							iLocal_409 = MISC::GET_GAME_TIMER();
						}
						if (iLocal_408 == -1)
						{
							iLocal_408 = MISC::GET_GAME_TIMER();
						}
						else if (GlobalFunc_2311(iLocal_408, 8000))
						{
							bVar0 = true;
						}
						if (GlobalFunc_7093(Local_111.f_9, Local_618, bVar0, 0, 1, iLocal_411))
						{
							if ((GlobalFunc_2311(iLocal_409, 5000) || GlobalFunc_100(Local_636, 0f, 0f, 0f)) || (!GlobalFunc_1986(Var1, Local_636, 8.5f) && !GlobalFunc_1986(Var1, Local_633, 8.5f)))
							{
								func_311();
								Local_111.f_17 = MISC::GET_GAME_TIMER();
								GlobalFunc_4948(&uLocal_43, 0, 0);
								iLocal_381 = 1;
							}
						}
						else
						{
							if (!iLocal_353)
							{
								if (!GlobalFunc_2311(iLocal_396, 2500))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_775(Local_111.f_9, Local_618, 30f))
										{
											if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_J7", 4, 0, 0, 0))
											{
												iLocal_396 = MISC::GET_GAME_TIMER();
												iLocal_353 = 1;
											}
										}
									}
								}
								else
								{
									iLocal_353 = 1;
								}
							}
							else if (!GlobalFunc_111())
							{
								if (GlobalFunc_2311(iLocal_396, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
								{
									if (GlobalFunc_775(Local_111.f_9, Local_618, 30f))
									{
										if (PED::IS_PED_FLEEING(Local_111.f_9))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 101) < 30)
											{
												if (GlobalFunc_10865(&uLocal_431, cLocal_425, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_396 = MISC::GET_GAME_TIMER();
												}
											}
											else if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_FLEE", 4, 0, 0, 0))
											{
												iLocal_396 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else
							{
								iLocal_396 = MISC::GET_GAME_TIMER();
							}
							GlobalFunc_2317(Local_111.f_9, Local_618, iLocal_409, 925353388);
						}
					}
					else
					{
						func_311();
						Local_111.f_17 = MISC::GET_GAME_TIMER();
						GlobalFunc_4948(&uLocal_43, 0, 0);
						iLocal_381 = 1;
					}
				}
				else
				{
					func_311();
					if (!GlobalFunc_775(Local_111.f_9, Local_618, 10f))
					{
						if (!iLocal_369)
						{
							if (!GlobalFunc_5710(sLocal_420, 1))
							{
								GlobalFunc_5709(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_399, &iLocal_400, 1, 1);
								iLocal_369 = 1;
							}
						}
						else
						{
							GlobalFunc_5713(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_399, iLocal_400, 1);
						}
					}
					else
					{
						if (!iLocal_354)
						{
							if (!PED::IS_PED_RAGDOLL(Local_111.f_9) && !PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
							{
								if (GlobalFunc_663("BBS_APPSUS", 0, 0) || GlobalFunc_663("BBS_APPSUS2", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (!GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								if (GlobalFunc_10865(&uLocal_431, cLocal_424, sLocal_420, 4, 0, 0, 0))
								{
									iLocal_354 = 1;
								}
							}
						}
						else if (!GlobalFunc_111())
						{
							iLocal_99 = 2;
						}
						GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_399, iLocal_400, 0);
					}
					if (GlobalFunc_7092(&(Local_111.f_9)))
					{
						iLocal_386 = 1;
						iLocal_99 = 0;
					}
				}
				break;
			
			case 2:
				if (GlobalFunc_663("BBS_APPSUS", 0, 0) || GlobalFunc_663("BBS_APPSUS2", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				MISC::SET_INSTANCE_PRIORITY_HINT(0);
				iLocal_354 = 1;
				func_311();
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_596);
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_596, 1862763509);
				GlobalFunc_846(&(Local_111.f_8));
				iLocal_354 = 1;
				Local_111.f_17 = MISC::GET_GAME_TIMER();
				GlobalFunc_4948(&uLocal_43, 0, 0);
				iLocal_382 = 0;
				iLocal_386 = 0;
				iLocal_355 = 1;
				func_121(3);
				break;
			}
	}
}











void func_311()//Position - 0x24385
{
	if (GlobalFunc_4924(Local_111.f_9))
	{
		if (((Local_111.f_10 != 23 && Local_111.f_10 != 24) && Local_111.f_10 != 21) && Local_111.f_10 != 22)
		{
			PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_596);
			PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_596, 1862763509);
			if (PED::IS_PED_IN_GROUP(Local_111.f_9))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_111.f_9);
			}
			TASK::CLEAR_PED_SECONDARY_TASK(Local_111.f_9);
			TASK::CLEAR_PED_TASKS(Local_111.f_9);
			WEAPON::SET_PED_DROPS_WEAPON(Local_111.f_9);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_111.f_9, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_111.f_9, joaat("weapon_unarmed"), 1);
			PED::SET_PED_CAN_SWITCH_WEAPON(Local_111.f_9, 0);
			PED::SET_PED_ARMOUR(Local_111.f_9, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 17, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 5, 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Local_111.f_9, 0, 0);
			}
			iLocal_414 = MISC::GET_GAME_TIMER();
			Local_111.f_10 = 23;
		}
	}
}



























void func_338(int iParam0)//Position - 0x2558D
{
	PED::SET_PED_CONFIG_FLAG(uParam0, 177, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 116, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, 1);
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, 1);
	PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iParam0, 10f, 5);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
}


void func_340()//Position - 0x256B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (GlobalFunc_4924(Local_111.f_9))
	{
		if (iLocal_189 == 0)
		{
			GlobalFunc_2323(&(Local_111.f_9), &bLocal_388);
			if (GlobalFunc_5714())
			{
				if (iLocal_381 || iLocal_97 == 7)
				{
					if (bLocal_388)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(Local_111.f_9, GlobalFunc_2322(), 1048576000);
						iLocal_189 = 2;
					}
					else
					{
						PED::SET_PED_MOVEMENT_CLIPSET(Local_111.f_9, GlobalFunc_2321(), 1048576000);
						iLocal_189 = 1;
					}
				}
			}
		}
		else if (iLocal_189 == 1)
		{
			GlobalFunc_2323(&(Local_111.f_9), &bLocal_388);
			if (bLocal_388)
			{
				if (GlobalFunc_5714())
				{
					PED::SET_PED_MOVEMENT_CLIPSET(Local_111.f_9, GlobalFunc_2322(), 1048576000);
					iLocal_189 = 2;
				}
			}
		}
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_111.f_10)
			{
				case 0:
					if (GlobalFunc_775(Local_111.f_9, Local_618, 20f))
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_111.f_9, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_111.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
					else if (PED::IS_PED_HEADTRACKING_PED(Local_111.f_9, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_111.f_9);
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 500)))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_111.f_9))
						{
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_111.f_9);
						}
						TASK::TASK_LOOK_AT_ENTITY(Local_111.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_111.f_9, PLAYER::PLAYER_PED_ID(), -1);
						Local_111.f_10 = 4;
					}
					break;
				
				case 4:
					if (!GlobalFunc_6964(Local_111.f_9, -875674219))
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_111.f_10 = 3;
					}
					break;
				
				case 5:
					if (!PED::IS_PED_HEADTRACKING_PED(Local_111.f_9, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_111.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					TASK::TASK_GO_TO_ENTITY(Local_111.f_9, PLAYER::PLAYER_PED_ID(), 20000, 2.5f, 1f, 1073741824, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
					Local_111.f_10 = 6;
					break;
				
				case 6:
					if (!GlobalFunc_775(Local_111.f_9, Local_618, 3.5f))
					{
						if (!GlobalFunc_6964(Local_111.f_9, 1227113341))
						{
							Local_111.f_10 = 5;
						}
						else
						{
							PED::SET_PED_MOVE_RATE_OVERRIDE(Local_111.f_9, 1.1f);
						}
					}
					else if (!GlobalFunc_6964(Local_111.f_9, -875674219))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_111.f_9, PLAYER::PLAYER_PED_ID(), -1);
					}
					break;
				
				case 7:
					if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 1000)))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_111.f_9))
						{
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_111.f_9);
						}
						PED::SET_PED_COMBAT_RANGE(Local_111.f_9, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 5, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 0, 0);
						TASK::TASK_COMBAT_PED(Local_111.f_9, PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
						Local_111.f_10 = 8;
					}
					break;
				
				case 8:
					if (!GlobalFunc_6964(Local_111.f_9, 780511057))
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_111.f_10 = 7;
					}
					break;
				
				case 9:
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 5, 0);
					PED::SET_PED_CAN_RAGDOLL(Local_111.f_9, 1);
					if (!PED::IS_PED_RAGDOLL(Local_111.f_9))
					{
						PED::SET_PED_TO_RAGDOLL(Local_111.f_9, 1000, 1000, 0, 1, 1, 0);
					}
					Local_111.f_10 = 10;
					break;
				
				case 10:
					if (!PED::IS_PED_RAGDOLL(Local_111.f_9))
					{
						if (!GlobalFunc_6964(Local_111.f_9, 474215631) && !GlobalFunc_6964(Local_111.f_9, -1519143300))
						{
							if (!ENTITY::IS_ENTITY_IN_WATER(Local_111.f_9))
							{
								PED::SET_PED_COWER_HASH(Local_111.f_9, "CODE_HUMAN_STAND_COWER");
								TASK::TASK_COWER(Local_111.f_9, -1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
							}
						}
					}
					break;
				
				case 29:
					WEAPON::GET_CURRENT_PED_WEAPON(Local_111.f_9, &iVar0, 1);
					if (iVar0 == joaat("weapon_unarmed"))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_111.f_9, joaat("weapon_pistol"), -1, 0, 1);
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 0, 0);
					PED::SET_PED_COMBAT_RANGE(Local_111.f_9, 0);
					PED::SET_PED_ACCURACY(Local_111.f_9, 15);
					TASK::CLEAR_PED_TASKS(Local_111.f_9);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
					Local_111.f_10 = 30;
					break;
				
				case 30:
					if (!GlobalFunc_6964(Local_111.f_9, 242628503))
					{
						uVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 8f);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_417);
						TASK::TASK_GOTO_ENTITY_AIMING(0, PLAYER::PLAYER_PED_ID(), uVar3, 30f);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_417);
						TASK::TASK_PERFORM_SEQUENCE(Local_111.f_9, uLocal_417);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_417);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
					}
					break;
				
				case 31:
					if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 500)))
					{
						PED::SET_PED_ACCURACY(Local_111.f_9, 50);
						WEAPON::GET_CURRENT_PED_WEAPON(Local_111.f_9, &iVar0, 1);
						if (iVar0 == joaat("weapon_unarmed"))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_111.f_9, joaat("weapon_pistol"), -1, 0, 1);
							WEAPON::SET_CURRENT_PED_WEAPON(Local_111.f_9, joaat("weapon_pistol"), 0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_417);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500, 0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_621, PLAYER::PLAYER_PED_ID(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
						TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500), 1);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, Local_621, 50f);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_417);
						TASK::TASK_PERFORM_SEQUENCE(Local_111.f_9, uLocal_417);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_417);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
						Local_111.f_10 = 32;
					}
					break;
				
				case 32:
					if (!GlobalFunc_6964(Local_111.f_9, 242628503))
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_111.f_10 = 37;
					}
					break;
				
				case 33:
					if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 500)))
					{
						PED::SET_PED_ACCURACY(Local_111.f_9, 10);
						WEAPON::GET_CURRENT_PED_WEAPON(Local_111.f_9, &iVar0, 1);
						if (iVar0 == joaat("weapon_unarmed"))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_111.f_9, joaat("weapon_pistol"), -1, 0, 1);
							WEAPON::SET_CURRENT_PED_WEAPON(Local_111.f_9, joaat("weapon_pistol"), 0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_417);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 750, 0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_621, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.5f, 4f, 1, 0, 0, -687903391, 20000);
						TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000), 0);
						TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, Local_621, 50f);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_417);
						TASK::TASK_PERFORM_SEQUENCE(Local_111.f_9, uLocal_417);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_417);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
						Local_111.f_10 = 34;
					}
					break;
				
				case 34:
					if (!GlobalFunc_6964(Local_111.f_9, 242628503))
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_111.f_10 = 13;
					}
					break;
				
				case 35:
					if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 500)))
					{
						PED::SET_PED_ACCURACY(Local_111.f_9, 10);
						WEAPON::GET_CURRENT_PED_WEAPON(Local_111.f_9, &iVar0, 1);
						if (iVar0 == joaat("weapon_unarmed"))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_111.f_9, joaat("weapon_pistol"), -1, 0, 1);
							WEAPON::SET_CURRENT_PED_WEAPON(Local_111.f_9, joaat("weapon_pistol"), 0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_417);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 750, 0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_621, PLAYER::PLAYER_PED_ID(), 2f, 1, 0.75f, 4f, 1, 0, 0, -687903391, 20000);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_417);
						TASK::TASK_PERFORM_SEQUENCE(Local_111.f_9, uLocal_417);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_417);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
						Local_111.f_10 = 36;
					}
					break;
				
				case 36:
					if (!GlobalFunc_6964(Local_111.f_9, 242628503))
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_111.f_10 = 13;
					}
					break;
				
				case 37:
					if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 750)))
					{
						PED::SET_PED_HEARING_RANGE(Local_111.f_9, 30f);
						PED::SET_PED_SEEING_RANGE(Local_111.f_9, 30f);
						PED::SET_PED_ID_RANGE(Local_111.f_9, 30f);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 3, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 5, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 512, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 0, 1);
						PED::SET_PED_COMBAT_RANGE(Local_111.f_9, 1);
						PED::SET_PED_COMBAT_MOVEMENT(Local_111.f_9, 1);
						PED::SET_PED_ACCURACY(Local_111.f_9, MISC::GET_RANDOM_INT_IN_RANGE(10, 22));
						PED::SET_PED_SHOOT_RATE(Local_111.f_9, MISC::GET_RANDOM_INT_IN_RANGE(30, 60));
						PED::SET_PED_FIRING_PATTERN(Local_111.f_9, 2055493265);
						WEAPON::GET_CURRENT_PED_WEAPON(Local_111.f_9, &iVar0, 1);
						if (iVar0 == joaat("weapon_unarmed"))
						{
							WEAPON::GIVE_WEAPON_TO_PED(Local_111.f_9, joaat("weapon_pistol"), -1, 0, 1);
							WEAPON::SET_CURRENT_PED_WEAPON(Local_111.f_9, joaat("weapon_pistol"), 0);
						}
						TASK::TASK_COMBAT_PED(Local_111.f_9, PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
						Local_111.f_10 = 38;
					}
					break;
				
				case 38:
					if (!GlobalFunc_6964(Local_111.f_9, 780511057))
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_111.f_10 = 37;
					}
					break;
				
				case 13:
					if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(0, 500)))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_111.f_9))
						{
							PED::SET_PED_PANIC_EXIT_SCENARIO(Local_111.f_9, Local_618);
						}
						WEAPON::GET_CURRENT_PED_WEAPON(Local_111.f_9, &iVar0, 1);
						if (iVar0 != joaat("weapon_unarmed"))
						{
							WEAPON::SET_PED_DROPS_WEAPON(Local_111.f_9);
							WEAPON::REMOVE_ALL_PED_WEAPONS(Local_111.f_9, 1);
							WEAPON::SET_CURRENT_PED_WEAPON(Local_111.f_9, joaat("weapon_unarmed"), 1);
							PED::SET_PED_CAN_SWITCH_WEAPON(Local_111.f_9, 0);
						}
						PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 2, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 64, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 128, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 8, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 1, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 32, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 5, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 17, 1);
						TASK::TASK_SMART_FLEE_PED(Local_111.f_9, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
						PED::SET_PED_KEEP_TASK(Local_111.f_9, 1);
						Local_111.f_10 = 14;
					}
					break;
				
				case 14:
					if (!GlobalFunc_6964(Local_111.f_9, 1805844857))
					{
						if (!PED::IS_PED_FLEEING(Local_111.f_9))
						{
							Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
							Local_111.f_10 = 13;
						}
					}
					break;
				
				case 15:
					PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 2, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 64, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 128, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 8, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 1, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 32, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 17, 1);
					PED::SET_PED_CONFIG_FLAG(Local_111.f_9, 173, 1);
					PED::SET_PED_RESET_FLAG(Local_111.f_9, 237, 1);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_111.f_9, 3f);
					if (GlobalFunc_4947(Local_190[0 /*6*/]))
					{
						if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_190[0 /*6*/], 0) && GlobalFunc_775(Local_190[0 /*6*/], Local_190[0 /*6*/].f_1, 3f)) && GlobalFunc_2320(ENTITY::GET_ENTITY_HEADING(Local_190[0 /*6*/]), Local_190[0 /*6*/].f_4, 20f))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_111.f_9, Local_190[0 /*6*/], 0) && !PED::IS_PED_BEING_JACKED(Local_111.f_9))
							{
								Local_111.f_10 = 16;
							}
							else if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 350)))
							{
								if (PED::IS_PED_USING_ANY_SCENARIO(Local_111.f_9))
								{
									PED::SET_PED_PANIC_EXIT_SCENARIO(Local_111.f_9, Local_618);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(Local_111.f_9);
								}
								TASK::TASK_ENTER_VEHICLE(Local_111.f_9, Local_190[0 /*6*/], 25000, -1, 2f, 8388608, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
								Local_111.f_10 = 16;
							}
						}
						else
						{
							Local_111.f_10 = 13;
						}
					}
					else
					{
						Local_111.f_10 = 13;
					}
					break;
				
				case 16:
					if (!GlobalFunc_4947(Local_190[0 /*6*/]))
					{
						Local_111.f_10 = 13;
					}
					else if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_190[0 /*6*/], 0) || PED::IS_PED_BEING_JACKED(Local_111.f_9)) || !GlobalFunc_775(Local_190[0 /*6*/], Local_190[0 /*6*/].f_1, 3f)) || !GlobalFunc_2320(ENTITY::GET_ENTITY_HEADING(Local_190[0 /*6*/]), Local_190[0 /*6*/].f_4, 20f))
					{
						Local_111.f_10 = 13;
					}
					else if (PED::IS_PED_SITTING_IN_VEHICLE(Local_111.f_9, Local_190[0 /*6*/]))
					{
						Local_111.f_10 = 39;
					}
					else if (!GlobalFunc_6964(Local_111.f_9, -1794415470))
					{
						Local_111.f_10 = 15;
					}
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_111.f_9, 2f);
					break;
				
				case 17:
					if (GlobalFunc_4947(Local_190[0 /*6*/]) && PED::IS_PED_SITTING_IN_VEHICLE(Local_111.f_9, Local_190[0 /*6*/]))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_111.f_9, Local_190[0 /*6*/], PLAYER::PLAYER_PED_ID(), 8, 30f, 786468, 350f, 30f, 1);
						PED::SET_PED_CONFIG_FLAG(Local_111.f_9, 173, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
						Local_111.f_10 = 18;
					}
					else if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_111.f_9))
					{
						Local_111.f_10 = 13;
					}
					break;
				
				case 18:
					if (!GlobalFunc_6964(Local_111.f_9, -1273030092))
					{
						Local_111.f_10 = 17;
					}
					break;
				
				case 19:
					TASK::CLEAR_PED_TASKS(Local_111.f_9);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 5, 0);
					PED::SET_PED_COWER_HASH(Local_111.f_9, "CODE_HUMAN_STAND_COWER");
					TASK::TASK_COWER(Local_111.f_9, -1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
					Local_111.f_10 = 20;
					break;
				
				case 20:
					if (!PED::IS_PED_RAGDOLL(Local_111.f_9))
					{
						if (!GlobalFunc_6964(Local_111.f_9, 474215631))
						{
							Local_111.f_10 = 19;
						}
					}
					break;
				
				case 21:
					if (func_345(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_344())
					{
						Local_111.f_10 = 23;
					}
					else if (PED::DOES_GROUP_EXIST(GlobalFunc_468()))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_111.f_9, -1519143300) == 1)
						{
							TASK::UPDATE_TASK_HANDS_UP_DURATION(Local_111.f_9, 500);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_111.f_9);
							TASK::CLEAR_PED_SECONDARY_TASK(Local_111.f_9);
						}
						if (!PED::IS_PED_GROUP_MEMBER(Local_111.f_9, GlobalFunc_468()))
						{
							PED::SET_PED_AS_GROUP_MEMBER(Local_111.f_9, GlobalFunc_468());
						}
						PED::SET_GROUP_FORMATION(GlobalFunc_468(), 0);
						PED::SET_GROUP_FORMATION_SPACING(GlobalFunc_468(), 1.5f, 3.5f, -1082130432);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_111.f_9, 0);
						TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_111.f_9, 1);
						TASK::SET_PED_PATH_CAN_USE_LADDERS(Local_111.f_9, 1);
						TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_111.f_9, 1);
						TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_111.f_9, 1);
						TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_111.f_9, 0);
						TASK::SET_PED_PATH_AVOID_FIRE(Local_111.f_9, 1);
						PED::SET_PED_CONFIG_FLAG(Local_111.f_9, 167, 1);
						PED::SET_PED_CONFIG_FLAG(Local_111.f_9, 118, 1);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_111.f_9, 1);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_111.f_9, 1);
						PED::SET_PED_CONFIG_FLAG(Local_111.f_9, 42, 1);
						PED::SET_PED_DIES_IN_WATER(Local_111.f_9, 1);
						PED::SET_PED_DIES_IN_SINKING_VEHICLE(Local_111.f_9, 1);
						PED::SET_PED_MAX_TIME_IN_WATER(Local_111.f_9, 2f);
						PED::SET_PED_MAX_TIME_UNDERWATER(Local_111.f_9, 2f);
						TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_111.f_9, 1);
						PED::SET_PED_CONFIG_FLAG(Local_111.f_9, 118, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 17, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 0, 0);
						PED::SET_PED_RESET_FLAG(Local_111.f_9, 237, 1);
						TASK::TASK_LOOK_AT_ENTITY(Local_111.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
						Local_111.f_10 = 22;
					}
					break;
				
				case 22:
					if (func_345(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_344())
					{
						Local_111.f_10 = 23;
					}
					else
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (GlobalFunc_7094())
							{
								iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								if (!PED::IS_PED_IN_VEHICLE(Local_111.f_9, iVar1, 0))
								{
									fVar4 = ENTITY::GET_ENTITY_SPEED(iVar1);
									if (fVar4 < 1.75f && GlobalFunc_775(Local_111.f_9, Local_618, 8f))
									{
										if (!GlobalFunc_6964(Local_111.f_9, -1794415470))
										{
											iVar2 = -1;
											if (VEHICLE::ARE_ANY_VEHICLE_SEATS_FREE(iVar1))
											{
												if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, 0) && VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(Local_111.f_9, iVar1, 0, 1, 0))
												{
													iVar2 = 0;
												}
												else
												{
													iVar2 = -2;
												}
											}
											if (iVar2 != -1)
											{
												TASK::TASK_ENTER_VEHICLE(Local_111.f_9, iVar1, 25000, iVar2, 2f, 1048577, 0);
											}
										}
										else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_111.f_9))
										{
											if (PED::GET_VEHICLE_PED_IS_ENTERING(Local_111.f_9) != iVar1)
											{
												TASK::CLEAR_PED_TASKS(Local_111.f_9);
											}
										}
									}
									else if (GlobalFunc_6964(Local_111.f_9, -1794415470))
									{
										if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_111.f_9))
										{
											TASK::CLEAR_PED_TASKS(Local_111.f_9);
										}
									}
								}
							}
							else if (GlobalFunc_6964(Local_111.f_9, -1794415470))
							{
								TASK::CLEAR_PED_TASKS(Local_111.f_9);
							}
						}
						else if (GlobalFunc_6964(Local_111.f_9, -1794415470))
						{
							TASK::CLEAR_PED_TASKS(Local_111.f_9);
						}
						if (PED::IS_PED_HEADTRACKING_PED(Local_111.f_9, PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_111.f_9))
							{
								TASK::TASK_CLEAR_LOOK_AT(Local_111.f_9);
							}
						}
						else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 1))
						{
							if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_111.f_9))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_111.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							}
						}
						PED::SET_PED_RESET_FLAG(Local_111.f_9, 237, 1);
					}
					break;
				
				case 23:
					if (func_345(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_344())
					{
						if (PED::IS_PED_IN_GROUP(Local_111.f_9))
						{
							PED::REMOVE_PED_FROM_GROUP(Local_111.f_9);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_111.f_9, 0);
							PED::SET_PED_CONFIG_FLAG(Local_111.f_9, 42, 0);
							PED::SET_PED_CONFIG_FLAG(Local_111.f_9, 118, 1);
						}
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_111.f_9, 0);
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (GlobalFunc_6964(Local_111.f_9, -1794415470))
							{
								TASK::CLEAR_PED_TASKS(Local_111.f_9);
							}
						}
						if (((!PED::IS_PED_RAGDOLL(Local_111.f_9) && !PED::IS_PED_BEING_STUNNED(Local_111.f_9, 0)) && !PED::IS_PED_BEING_JACKED(Local_111.f_9)) && !GlobalFunc_6964(Local_111.f_9, -828834893))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_111.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							if ((!GlobalFunc_2319(Local_111.f_19, 10) && GlobalFunc_775(Local_111.f_9, Local_618, 50f)) || !GlobalFunc_2311(iLocal_414, 2000))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(Local_111.f_9, 0, 0);
								}
								else if (((!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_111.f_9)) && !func_344()) || ENTITY::IS_ENTITY_IN_WATER(Local_111.f_9))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_111.f_9, PLAYER::PLAYER_PED_ID(), -1);
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(Local_111.f_9, -1519143300) == 1)
								{
									TASK::UPDATE_TASK_HANDS_UP_DURATION(Local_111.f_9, -1);
								}
								else
								{
									TASK::TASK_HANDS_UP(Local_111.f_9, -1, PLAYER::PLAYER_PED_ID(), -1, 0);
								}
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_111.f_9, PLAYER::PLAYER_PED_ID(), -1);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
							Local_111.f_10 = 24;
						}
					}
					else if (!iLocal_382)
					{
						Local_111.f_10 = 21;
					}
					else
					{
						Local_111.f_10 = 25;
					}
					break;
				
				case 24:
					if (func_345(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_344())
					{
						if (!GlobalFunc_6964(Local_111.f_9, -1519143300))
						{
							if (!GlobalFunc_6964(Local_111.f_9, -875674219))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
								{
									if (!GlobalFunc_2319(Local_111.f_19, 10) && GlobalFunc_775(Local_111.f_9, Local_618, 50f))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(Local_111.f_9, 0, 0);
										Local_111.f_10 = 23;
									}
								}
								else
								{
									Local_111.f_10 = 23;
								}
							}
							else if (!GlobalFunc_2319(Local_111.f_19, 10) && GlobalFunc_775(Local_111.f_9, Local_618, 50f))
							{
								if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_111.f_9)) || func_344())
								{
									Local_111.f_10 = 23;
								}
							}
						}
					}
					else if (!iLocal_382)
					{
						Local_111.f_10 = 21;
					}
					else
					{
						Local_111.f_10 = 25;
					}
					break;
				
				case 25:
					if (func_345(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0))
					{
						Local_111.f_10 = 23;
					}
					else
					{
						if (PED::IS_PED_IN_GROUP(Local_111.f_9))
						{
							PED::REMOVE_PED_FROM_GROUP(Local_111.f_9);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_111.f_9, 0);
							PED::SET_PED_CONFIG_FLAG(Local_111.f_9, 42, 0);
						}
						TASK::CLEAR_PED_TASKS(Local_111.f_9);
						TASK::TASK_LOOK_AT_ENTITY(Local_111.f_9, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
						Local_111.f_10 = 26;
					}
					break;
				
				case 26:
					if (func_345(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0))
					{
						Local_111.f_10 = 23;
					}
					else if (ENTITY::IS_ENTITY_IN_WATER(Local_111.f_9))
					{
						TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_111.f_9, 1);
						TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_111.f_9, 0);
					}
					else if ((!PED::IS_PED_RAGDOLL(Local_111.f_9) && !TASK::IS_PED_GETTING_UP(Local_111.f_9)) && PED::IS_PED_ON_FOOT(Local_111.f_9))
					{
						if (!PED::IS_PED_FACING_PED(Local_111.f_9, PLAYER::PLAYER_PED_ID(), 45f))
						{
							if (!GlobalFunc_6964(Local_111.f_9, -875674219))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_111.f_9, PLAYER::PLAYER_PED_ID(), -1);
							}
						}
					}
					break;
				
				case 27:
					break;
				
				case 28:
					break;
				
				case 39:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
					Local_111.f_10 = 40;
					break;
				
				case 40:
					break;
				}
			}
	}
}




int func_344()//Position - 0x26BFE
{
	if (!iLocal_354)
	{
		return 1;
	}
	if (GlobalFunc_5710(sLocal_420, 0))
	{
		return 1;
	}
	if (iLocal_97 != 3 && iLocal_97 != 6)
	{
		return 1;
	}
	if (TASK::IS_PED_GETTING_UP(Local_111.f_9) || PED::IS_PED_RAGDOLL(Local_111.f_9))
	{
		iLocal_414 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (!GlobalFunc_2311(iLocal_414, 2000))
	{
		return 1;
	}
	return 0;
}

int func_345(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, float fParam5, bool bParam6)//Position - 0x26C6B
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (GlobalFunc_4924(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if (MISC::IS_BULLET_IN_AREA(Var0, fParam4, 1))
		{
			return 1;
		}
		if (GlobalFunc_775(iParam0, Local_618, fParam2))
		{
			if (!GlobalFunc_2319(iParam1, 10))
			{
				if (bParam6)
				{
					if (GlobalFunc_2312(1, 0, 1))
					{
						if (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
				}
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
				{
					return 1;
				}
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						return 1;
					}
					if (bParam3)
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iParam0, 45f))
							{
								return 1;
							}
						}
					}
				}
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
				if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
				if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
			return 1;
		}
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 56))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, fParam5))
		{
			return 1;
		}
		Var3 = { Var0 };
		Var6 = { Var3 };
		Var3.x = (Var3.x - fParam5);
		Var3.f_1 = (Var3.f_1 - fParam5);
		Var3.f_2 = (Var3.f_2 - fParam5);
		Var6.x = (Var6.x + fParam5);
		Var6.f_1 = (Var6.f_1 + fParam5);
		Var6.f_2 = (Var6.f_2 + fParam5);
		if (MISC::IS_PROJECTILE_IN_AREA(Var3, Var6, 1))
		{
			return 1;
		}
	}
	return 0;
}







void func_352(int iParam0, var uParam1, float fParam2, int iParam3)//Position - 0x26F98
{
	if (GlobalFunc_115(iParam0))
	{
		if (func_353(iParam0, PLAYER::PLAYER_PED_ID(), fParam2, 1, 250, iParam3))
		{
			*uParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

bool func_353(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x26FC4
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_359(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_55[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_356();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_55[iVar4 /*4*/].f_1 = iParam0;
		Local_55[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_5715(&(Local_55[iVar4 /*4*/]), Var1, iParam1, &(Local_55[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_55[iVar4 /*4*/].f_3) < iParam4);
}



int func_356()//Position - 0x27276
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_55)
	{
		if ((Local_55[iVar0 /*4*/] == 0 && Local_55[iVar0 /*4*/].f_1 == 0) && Local_55[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}



int func_359(int iParam0, int iParam1)//Position - 0x27372
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_55)
	{
		if (Local_55[iVar0 /*4*/].f_1 == iParam0 && Local_55[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_360(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x273B1
{
	if (GlobalFunc_115(iParam0))
	{
		if (func_353(PLAYER::PLAYER_PED_ID(), iParam0, fParam2, 1, 250, iParam3))
		{
			*iParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

void func_361()//Position - 0x273DD
{
	if (GlobalFunc_1986(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_615, 100f))
	{
		if (!GlobalFunc_2233())
		{
			CUTSCENE::REQUEST_CUTSCENE(&cLocal_603, 8);
			func_63();
			iLocal_385 = 1;
		}
	}
	else if (iLocal_385)
	{
		if (!GlobalFunc_1986(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_615, 120f))
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_385 = 0;
			}
		}
		else
		{
			func_63();
		}
	}
	if (iLocal_385)
	{
		if (GlobalFunc_2233())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_385 = 0;
		}
	}
}


void func_363()//Position - 0x27473
{
	func_34();
	func_361();
	if (GlobalFunc_4924(Local_111.f_9))
	{
		func_360(Local_111.f_9, &iLocal_407, 1126825984, 7);
		func_352(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_340();
		switch (iLocal_99)
		{
			case 0:
				GlobalFunc_4935();
				iLocal_356 = 0;
				iLocal_371 = 0;
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_382)
				{
					if (GlobalFunc_663("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					GlobalFunc_846(&(Local_111.f_8));
					if (!GlobalFunc_775(Local_111.f_9, Local_618, 25f))
					{
						if (Local_111.f_10 == 21 || Local_111.f_10 == 22)
						{
							Local_111.f_18 = MISC::GET_GAME_TIMER();
							Local_111.f_10 = 25;
						}
						if (GlobalFunc_2319(iLocal_407, 10))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10865(&uLocal_431, cLocal_425, "BBC_T9", 4, 0, 0, 0))
								{
									iLocal_396 = MISC::GET_GAME_TIMER();
								}
							}
						}
						iLocal_382 = 1;
					}
					else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						if (GlobalFunc_663("BBS_COPS", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("BBS_COPS");
						}
						iLocal_356 = 1;
						if (!GlobalFunc_111())
						{
							iLocal_99 = 2;
						}
					}
					else if (!iLocal_355)
					{
						if (!GlobalFunc_5710(sLocal_420, 1))
						{
							if (GlobalFunc_10865(&uLocal_431, cLocal_425, "BBC_T5", 4, 0, 0, 0))
							{
								iLocal_355 = 1;
							}
						}
					}
					else if (!iLocal_371)
					{
						if (!GlobalFunc_663("BBS_COPS", 0, 0))
						{
							GlobalFunc_164("BBS_COPS", 7500, 0);
							iLocal_371 = 1;
						}
					}
					else
					{
						func_366();
						GlobalFunc_7096(&Local_321, Local_618, &iLocal_398, 5000, 1101004800);
					}
				}
				else if (GlobalFunc_775(Local_111.f_9, Local_618, 8f))
				{
					if (Local_111.f_10 == 25 || Local_111.f_10 == 26)
					{
						Local_111.f_18 = MISC::GET_GAME_TIMER();
						Local_111.f_10 = 21;
					}
					if (GlobalFunc_663("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					iLocal_371 = 0;
					if (!GlobalFunc_111())
					{
						if (Local_111.f_10 == 21 || Local_111.f_10 == 22)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								if (GlobalFunc_10865(&uLocal_431, cLocal_425, "BBC_T10", 4, 0, 0, 0))
								{
									iLocal_396 = MISC::GET_GAME_TIMER();
								}
							}
							else if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_J5", 4, 0, 0, 0))
							{
								iLocal_396 = MISC::GET_GAME_TIMER();
							}
						}
					}
					iLocal_382 = 0;
				}
				else
				{
					if (GlobalFunc_663("BBS_COPS", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_COPS");
					}
					if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
					{
						Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 1, 5);
					}
					if (!iLocal_372)
					{
						GlobalFunc_164("BBS_05", 7500, 1);
						iLocal_372 = 1;
					}
				}
				if (GlobalFunc_7092(&(Local_111.f_9)))
				{
					iLocal_386 = 1;
					iLocal_99 = 2;
				}
				break;
			
			case 2:
				if (GlobalFunc_663("BBS_05", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("BBS_05");
				}
				iLocal_356 = 1;
				GlobalFunc_846(&(Local_111.f_8));
				if (iLocal_386)
				{
					func_121(7);
				}
				else
				{
					if (GlobalFunc_663("BBS_COPS", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_COPS");
					}
					func_121(3);
				}
				break;
			}
	}
}



void func_366()//Position - 0x2784F
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (HUD::IS_MESSAGE_BEING_DISPLAYED() && MISC::GET_PROFILE_SETTING(203) != 0)
	{
		iVar1 = 1;
	}
	if (GlobalFunc_4924(Local_111.f_9))
	{
		if (GlobalFunc_111())
		{
			iLocal_396 = MISC::GET_GAME_TIMER();
		}
		if (!iLocal_357)
		{
			if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_J6", 4, 0, 0, 0))
			{
				iLocal_357 = 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0) && PED::GET_VEHICLE_PED_IS_IN(Local_111.f_9, 0) == iVar0)
			{
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!iLocal_380)
					{
						if (!GlobalFunc_111())
						{
							iLocal_395 = MISC::GET_GAME_TIMER();
							iLocal_380 = 1;
						}
					}
					else if (!iLocal_358[0])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_395) > 7500)
						{
							func_369(0);
						}
					}
					else if (!iLocal_358[1])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_395) > 10000)
						{
							func_369(1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iVar0) < 0.5f)
						{
							if (!iLocal_376)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_2311(iLocal_412, 3500))
									{
										if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_STOP", 4, 0, 0, 0))
										{
											iLocal_376 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_376)
						{
							if (!GlobalFunc_5710("BB4_STOP", 1))
							{
								iLocal_412 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							iLocal_412 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (!iLocal_356)
				{
					if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_J9", 4, 0, 0, 0))
					{
						iLocal_356 = 1;
					}
				}
			}
			else
			{
				if (!iLocal_373)
				{
					if (!GlobalFunc_7094())
					{
						GlobalFunc_159("BBS_VH1", -1);
						iLocal_373 = 1;
					}
				}
				iLocal_412 = MISC::GET_GAME_TIMER();
			}
			iLocal_363 = 0;
			iLocal_364 = 0;
		}
		else
		{
			iLocal_412 = MISC::GET_GAME_TIMER();
			iLocal_376 = 0;
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				if (!iLocal_363)
				{
					if (GlobalFunc_7094())
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
						{
							if (!GlobalFunc_5710("BBC_T6", 1))
							{
								if (GlobalFunc_10865(&uLocal_431, cLocal_425, "BBC_T6", 4, iVar1, 0, 0))
								{
									iLocal_363 = 1;
								}
							}
						}
						GlobalFunc_5716("BBS_VH1", 1);
					}
					else if (!GlobalFunc_5710("BBC_T8", 1) && !GlobalFunc_5710("BB4_VEH", 1))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) < 5)
						{
							if (GlobalFunc_10865(&uLocal_431, cLocal_425, "BBC_T8", 4, iVar1, 0, 0))
							{
								iLocal_363 = 1;
							}
						}
						else if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_VEH", 4, iVar1, 0, 0))
						{
							iLocal_363 = 1;
						}
					}
				}
				else if (!iLocal_367)
				{
					if (GlobalFunc_7095(&iVar0))
					{
						if ((!GlobalFunc_5710("BB4_JACK", 1) && !GlobalFunc_5710("BBC_T6", 1)) && !GlobalFunc_5710("BBC_T8", 1))
						{
							if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_JACK", 4, iVar1, 0, 0))
							{
								iLocal_367 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_363 = 0;
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
				{
					if (!iLocal_364)
					{
						if (!GlobalFunc_5710("BBC_T7", 1) && !GlobalFunc_5710("BB4_GETOUT", 1))
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) < 5)
							{
								if (GlobalFunc_10865(&uLocal_431, cLocal_425, "BBC_T7", 4, iVar1, 0, 0))
								{
									iLocal_364 = 1;
								}
							}
							else if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_GETOUT", 4, iVar1, 0, 0))
							{
								iLocal_364 = 1;
							}
						}
					}
				}
				else if (Local_111.f_10 == 24 && GlobalFunc_6964(Local_111.f_9, -1519143300))
				{
					if (GlobalFunc_775(Local_111.f_9, Local_618, 25f))
					{
						if (!GlobalFunc_5710("BB4_J11", 1))
						{
							if (GlobalFunc_2311(iLocal_397, MISC::GET_RANDOM_INT_IN_RANGE(2500, 5000)))
							{
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_J11", 4, 0, 0, 0))
								{
									iLocal_397 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else
						{
							iLocal_397 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					iLocal_397 = 0;
					if (!iLocal_356)
					{
						if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_J9", 4, 0, 0, 0))
						{
							iLocal_396 = MISC::GET_GAME_TIMER();
							iLocal_356 = 1;
						}
					}
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_2311(iLocal_396, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000)))
						{
							if (!GlobalFunc_775(Local_111.f_9, Local_618, 20f))
							{
								if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_J4", 4, 0, 0, 0))
								{
									iLocal_396 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
		}
	}
}



void func_369(int iParam0)//Position - 0x27CFB
{
	if (!iLocal_358[iParam0])
	{
		if (GlobalFunc_10865(&uLocal_431, cLocal_424, sLocal_421[iParam0], 4, 0, 0, 0))
		{
			iLocal_358[iParam0] = 1;
			iLocal_380 = 0;
			iLocal_395 = 0;
		}
	}
}

void func_370()//Position - 0x27D36
{
	func_34();
	func_361();
	if (GlobalFunc_4924(Local_111.f_9))
	{
		func_360(Local_111.f_9, &iLocal_407, 1126825984, 7);
		func_352(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_340();
		switch (iLocal_99)
		{
			case 0:
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_382)
				{
					if (GlobalFunc_663("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					GlobalFunc_846(&(Local_111.f_8));
					if (!GlobalFunc_775(Local_111.f_9, Local_618, 25f))
					{
						if (Local_111.f_10 == 21 || Local_111.f_10 == 22)
						{
							Local_111.f_18 = MISC::GET_GAME_TIMER();
							Local_111.f_10 = 25;
						}
						if (GlobalFunc_2319(iLocal_407, 10))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10865(&uLocal_431, cLocal_425, "BBC_T9", 4, 0, 0, 0))
								{
									iLocal_396 = MISC::GET_GAME_TIMER();
								}
							}
						}
						iLocal_355 = 1;
						iLocal_382 = 1;
					}
					else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
						iLocal_355 = 1;
						iLocal_99 = 2;
					}
					else
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_389))
						{
							if (iLocal_368)
							{
								uLocal_389 = GlobalFunc_2324(Local_615, 5, 1);
							}
						}
						if (!iLocal_355)
						{
							if (!GlobalFunc_5710(sLocal_420, 1))
							{
								if (GlobalFunc_10865(&uLocal_431, cLocal_425, "BBC_T5", 4, 0, 0, 0))
								{
									iLocal_355 = 1;
								}
							}
						}
						else if (!iLocal_368)
						{
							if (!GlobalFunc_111())
							{
								GlobalFunc_164("BBS_DROP", 7500, 0);
								iLocal_396 = MISC::GET_GAME_TIMER();
								iLocal_368 = 1;
							}
						}
						else
						{
							func_366();
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_615, 4f, 4f, 2f, 1, 1, 0))
						{
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2732.815f, 4143.618f, 42.02822f, 2724.603f, 4144.803f, 46.33084f, 9f, 0, 1, 0))
						{
							iLocal_99 = 2;
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_615, 6.5f))
							{
								iLocal_99 = 2;
							}
						}
						else if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_615, 2.5f))
						{
							iLocal_99 = 2;
						}
					}
				}
				else
				{
					GlobalFunc_846(&uLocal_389);
					if (GlobalFunc_663("BBS_DROP", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_DROP");
					}
					if (GlobalFunc_775(Local_111.f_9, Local_618, 8f))
					{
						if (Local_111.f_10 == 25 || Local_111.f_10 == 26)
						{
							Local_111.f_18 = MISC::GET_GAME_TIMER();
							Local_111.f_10 = 21;
						}
						if (GlobalFunc_663("BBS_05", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("BBS_05");
						}
						if (!GlobalFunc_111())
						{
							if (Local_111.f_10 == 21 || Local_111.f_10 == 22)
							{
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									if (GlobalFunc_10865(&uLocal_431, cLocal_425, "BBC_T10", 4, 0, 0, 0))
									{
										iLocal_396 = MISC::GET_GAME_TIMER();
									}
								}
								else if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_J5", 4, 0, 0, 0))
								{
									iLocal_396 = MISC::GET_GAME_TIMER();
								}
							}
						}
						iLocal_382 = 0;
					}
					else
					{
						if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
						{
							Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 1, 5);
						}
						if (!iLocal_372)
						{
							GlobalFunc_164("BBS_05", 7500, 1);
							iLocal_372 = 1;
						}
					}
				}
				if (!bLocal_379)
				{
					bLocal_379 = func_371(Local_618, Local_102, 180f);
				}
				if (GlobalFunc_7092(&(Local_111.f_9)))
				{
					iLocal_386 = 1;
					iLocal_99 = 2;
				}
				break;
			
			case 2:
				GlobalFunc_846(&uLocal_389);
				if (GlobalFunc_663("BBS_DROP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("BBS_DROP");
				}
				if (iLocal_386)
				{
					func_121(7);
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_121(6);
				}
				else
				{
					GlobalFunc_846(&(Local_111.f_8));
					if (GlobalFunc_663("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					if (!bLocal_379)
					{
						bLocal_379 = func_371(Local_618, Local_102, 0f);
					}
					func_121(4);
				}
				break;
			}
	}
}

int func_371(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x2810E
{
	int iVar0;
	
	if (!GlobalFunc_497(Param0, Param3, fParam6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		if (iLocal_406 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_406 - 1))
			{
				GlobalFunc_2297(&(Local_131[iVar0 /*19*/]), 1, 0, 1);
				iVar0++;
			}
		}
		if (iLocal_403 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_403 - 1))
			{
				GlobalFunc_131(&(Local_190[iVar0 /*6*/]));
				iVar0++;
			}
		}
		if (iLocal_404 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_404 - 1))
			{
				GlobalFunc_129(&(Local_227[iVar0 /*6*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_402 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_402 - 1))
			{
				GlobalFunc_129(&(Local_276[iVar0 /*9*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_405 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_405 - 1))
			{
				GlobalFunc_841(&(Local_313[iVar0 /*7*/]));
				iVar0++;
			}
		}
	}
	return 0;
}



void func_374()//Position - 0x28257
{
	bool bVar0;
	
	bVar0 = false;
	if (GlobalFunc_4924(Local_111.f_9))
	{
		func_360(Local_111.f_9, &iLocal_407, 1126825984, 7);
		func_352(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_340();
		switch (iLocal_99)
		{
			case 0:
				if (Local_111.f_10 != 35 && Local_111.f_10 != 36)
				{
					Local_111.f_18 = MISC::GET_GAME_TIMER();
					Local_111.f_10 = 35;
				}
				func_380(iLocal_406);
				if (GlobalFunc_4924(Local_111.f_9))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
					{
						Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 0, 5);
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_111.f_9);
				}
				GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_399, iLocal_400, 0);
				iLocal_99 = 1;
				break;
			
			case 1:
				func_377(iLocal_406);
				if (!iLocal_381)
				{
					GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_399, iLocal_400, 0);
					GlobalFunc_10693(&uLocal_43, Local_111.f_9, 0, 0, 1, 1, 1);
					if (!iLocal_353)
					{
						if (GlobalFunc_775(Local_111.f_9, Local_618, 30f))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_2312(1, 0, 1))
								{
									sLocal_419 = "BB4_J1";
								}
								else
								{
									sLocal_419 = "BB4_J10";
								}
								sLocal_419 = "BB4_J1";
								if (GlobalFunc_10865(&uLocal_431, cLocal_424, sLocal_419, 4, 0, 0, 0))
								{
									Local_111.f_17 = MISC::GET_GAME_TIMER();
									iLocal_396 = MISC::GET_GAME_TIMER();
									iLocal_353 = 1;
								}
							}
						}
						else
						{
							iLocal_353 = 1;
						}
					}
					if (Local_111.f_10 == 13 || Local_111.f_10 == 14)
					{
						if (iLocal_409 == -1)
						{
							iLocal_409 = MISC::GET_GAME_TIMER();
						}
						if (iLocal_408 == -1)
						{
							iLocal_408 = MISC::GET_GAME_TIMER();
						}
						else if (GlobalFunc_2311(iLocal_408, 5000))
						{
							bVar0 = true;
						}
						if (GlobalFunc_7093(Local_111.f_9, Local_618, bVar0, 0, 1, 170))
						{
							func_311();
							func_376(iLocal_406);
							Local_111.f_17 = MISC::GET_GAME_TIMER();
							GlobalFunc_4948(&uLocal_43, 0, 0);
							iLocal_381 = 1;
						}
						else
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_2311(iLocal_396, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
								{
									if (GlobalFunc_775(Local_111.f_9, Local_618, 30f))
									{
										if (PED::IS_PED_FLEEING(Local_111.f_9))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 101) < 30)
											{
												if (GlobalFunc_10865(&uLocal_431, cLocal_425, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_396 = MISC::GET_GAME_TIMER();
												}
											}
											else if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_FLEE", 4, 0, 0, 0))
											{
												iLocal_396 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else
							{
								iLocal_396 = MISC::GET_GAME_TIMER();
							}
							GlobalFunc_2317(Local_111.f_9, Local_618, iLocal_408, 925353388);
						}
					}
				}
				else
				{
					func_311();
					if (!GlobalFunc_775(Local_111.f_9, Local_618, 10f))
					{
						if (!iLocal_369)
						{
							if (!GlobalFunc_5710(sLocal_420, 1))
							{
								GlobalFunc_5709(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_399, &iLocal_400, 1, 1);
								iLocal_369 = 1;
							}
						}
						else
						{
							GlobalFunc_5713(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_399, iLocal_400, 1);
						}
					}
					else
					{
						if (!iLocal_354)
						{
							if (!PED::IS_PED_RAGDOLL(Local_111.f_9) && !PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
							{
								if (GlobalFunc_663("BBS_APPSUS", 0, 0) || GlobalFunc_663("BBS_APPSUS2", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (!GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								if (GlobalFunc_10865(&uLocal_431, cLocal_424, sLocal_420, 4, 0, 0, 0))
								{
									iLocal_354 = 1;
								}
							}
						}
						else if (!GlobalFunc_111())
						{
							iLocal_99 = 2;
						}
						GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_399, iLocal_400, 0);
					}
					if (GlobalFunc_7092(&(Local_111.f_9)))
					{
						iLocal_386 = 1;
						iLocal_99 = 2;
					}
				}
				break;
			
			case 2:
				if (GlobalFunc_663("BBS_APPSUS", 0, 0) || GlobalFunc_663("BBS_APPSUS2", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				iLocal_354 = 1;
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_596);
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_596, 1862763509);
				func_376(iLocal_406);
				GlobalFunc_846(&(Local_111.f_8));
				func_108(iLocal_401);
				func_311();
				Local_111.f_17 = MISC::GET_GAME_TIMER();
				GlobalFunc_4948(&uLocal_43, 0, 0);
				GlobalFunc_2325(1, &uLocal_416);
				if (iLocal_386)
				{
					func_121(7);
				}
				else
				{
					func_121(3);
				}
				break;
			}
	}
}


void func_376(int iParam0)//Position - 0x28762
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (Local_131[iVar0 /*19*/].f_14 != 6)
		{
			func_96(Local_131[iVar0 /*19*/], 1);
			Local_131[iVar0 /*19*/].f_14 = 4;
			GlobalFunc_589(&(Local_131[iVar0 /*19*/].f_6));
		}
		iVar0++;
	}
}

void func_377(int iParam0)//Position - 0x287AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (GlobalFunc_4924(Local_131[iVar0 /*19*/]))
		{
			func_352(Local_131[iVar0 /*19*/], &(Local_131[iVar0 /*19*/].f_16), 1126825984, 7);
			switch (Local_131[iVar0 /*19*/].f_14)
			{
				case 0:
					break;
				
				case 1:
					if (iVar0 == 0)
					{
						iVar2 = 0;
					}
					else if (iVar0 == 1)
					{
						iVar2 = 500;
					}
					else if (iVar0 == 2)
					{
						iVar2 = 750;
					}
					if (GlobalFunc_2311(Local_131[iVar0 /*19*/].f_15, iVar2))
					{
						func_111(iVar0);
					}
					break;
				
				case 2:
					if (func_379(Local_131[iVar0 /*19*/], Local_131[iVar0 /*19*/].f_16, 50f, 1, 1, 12f, 15f))
					{
						if (!GlobalFunc_4924(Local_111.f_9) || (PED::IS_PED_FLEEING(Local_111.f_9) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Local_111.f_9) > 1f))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_131[iVar0 /*19*/], -1519143300) == 1)
							{
								if (iVar0 == 0)
								{
									iVar2 = 750;
								}
								else if (iVar0 == 1)
								{
									iVar2 = 1500;
								}
								else if (iVar0 == 2)
								{
									iVar2 = 2500;
								}
								TASK::UPDATE_TASK_HANDS_UP_DURATION(Local_131[iVar0 /*19*/], iVar2);
							}
							else
							{
								TASK::CLEAR_PED_TASKS(Local_131[iVar0 /*19*/]);
								TASK::CLEAR_PED_SECONDARY_TASK(Local_131[iVar0 /*19*/]);
							}
							Local_131[iVar0 /*19*/].f_14 = 4;
							GlobalFunc_589(&(Local_131[iVar0 /*19*/].f_6));
						}
					}
					else if (!GlobalFunc_6964(Local_131[iVar0 /*19*/], 780511057))
					{
						GlobalFunc_589(&(Local_131[iVar0 /*19*/].f_6));
						if (GlobalFunc_775(Local_131[iVar0 /*19*/], Local_618, 5f))
						{
							if (!GlobalFunc_2319(Local_131[iVar0 /*19*/].f_16, 10))
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_131[iVar0 /*19*/], ENTITY::GET_ENTITY_COORDS(Local_131[iVar0 /*19*/], 1), 5f, 0, 0);
								TASK::TASK_COMBAT_PED(Local_131[iVar0 /*19*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_131[iVar0 /*19*/], 1);
							}
						}
					}
					else
					{
						if (!GlobalFunc_775(Local_131[iVar0 /*19*/], Local_618, 7f))
						{
							TASK::CLEAR_PED_TASKS(Local_131[iVar0 /*19*/]);
							TASK::TASK_LOOK_AT_ENTITY(Local_131[iVar0 /*19*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_131[iVar0 /*19*/], PLAYER::PLAYER_PED_ID(), -1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_131[iVar0 /*19*/], 0);
						}
						GlobalFunc_661(Local_131[iVar0 /*19*/], &(Local_131[iVar0 /*19*/].f_6), -1, 0, 0, 0, -1082130432, 0);
					}
					break;
				
				case 3:
					if (!GlobalFunc_6964(Local_131[iVar0 /*19*/], -2017877118))
					{
						if (func_379(Local_131[iVar0 /*19*/], Local_131[iVar0 /*19*/].f_16, 50f, 1, 1, 12f, 15f))
						{
							func_96(Local_131[iVar0 /*19*/], 1);
							Local_131[iVar0 /*19*/].f_14 = 4;
							GlobalFunc_589(&(Local_131[iVar0 /*19*/].f_6));
						}
						else
						{
							func_111(iVar0);
						}
					}
					break;
				
				case 4:
					if (!GlobalFunc_6964(Local_131[iVar0 /*19*/], -1519143300))
					{
						if (!PED::IS_PED_FLEEING(Local_131[iVar0 /*19*/]))
						{
							if (!GlobalFunc_6964(Local_131[iVar0 /*19*/], 1805844857))
							{
								func_96(Local_131[iVar0 /*19*/], 1);
							}
						}
					}
					GlobalFunc_589(&(Local_131[iVar0 /*19*/].f_6));
					break;
				
				case 5:
					GlobalFunc_589(&(Local_131[iVar0 /*19*/].f_6));
					break;
			}
		}
		else
		{
			if (Local_131[iVar0 /*19*/].f_14 != 6)
			{
				GlobalFunc_589(&(Local_131[iVar0 /*19*/].f_6));
				Local_131[iVar0 /*19*/].f_14 = 6;
			}
			iVar1++;
		}
		iVar0++;
	}
	iLocal_401 = iVar1;
}


int func_379(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, float fParam6)//Position - 0x28C1B
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (GlobalFunc_4924(iParam0))
	{
		if (GlobalFunc_2312(1, 0, 1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			if (MISC::IS_BULLET_IN_AREA(Var0, fParam5, 1))
			{
				return 1;
			}
			if (GlobalFunc_775(iParam0, Local_618, fParam2))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
				if (!GlobalFunc_2319(iParam1, 10))
				{
					if (bParam3)
					{
						if (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						return 1;
					}
					if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
						{
							return 1;
						}
						if (bParam4)
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iParam0, 45f))
								{
									return 1;
								}
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 56))
				{
					return 1;
				}
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
					return 1;
				}
			}
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, fParam6))
			{
				return 1;
			}
			Var3 = { Var0 };
			Var6 = { Var3 };
			Var3.x = (Var3.x - fParam6);
			Var3.f_1 = (Var3.f_1 - fParam6);
			Var3.f_2 = (Var3.f_2 - fParam6);
			Var6.x = (Var6.x + fParam6);
			Var6.f_1 = (Var6.f_1 + fParam6);
			Var6.f_2 = (Var6.f_2 + fParam6);
			if (MISC::IS_PROJECTILE_IN_AREA(Var3, Var6, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_380(int iParam0)//Position - 0x28DB4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (GlobalFunc_4924(Local_131[iVar0 /*19*/]))
		{
			Local_131[iVar0 /*19*/].f_15 = MISC::GET_GAME_TIMER();
			Local_131[iVar0 /*19*/].f_14 = 1;
		}
		iVar0++;
	}
}

void func_381()//Position - 0x28DF3
{
	if (GlobalFunc_4924(Local_111.f_9))
	{
		func_360(Local_111.f_9, &iLocal_407, 1126825984, 1);
		func_352(Local_111.f_9, &(Local_111.f_19), 120f, 7);
		func_340();
		switch (iLocal_99)
		{
			case 0:
				if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
				{
					Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 0, 5);
				}
				GlobalFunc_5709(&(Local_111.f_8), "", "", &iLocal_399, &iLocal_400, 1, 0);
				iLocal_99 = 1;
				break;
			
			case 1:
				switch (iLocal_100)
				{
					case 2:
						if (!iLocal_362)
						{
							if (GlobalFunc_111())
							{
								GlobalFunc_4956();
							}
							if (GlobalFunc_10865(&uLocal_431, cLocal_425, "BBC_T14", 4, 0, 0, 0))
							{
								Local_111.f_17 = MISC::GET_GAME_TIMER();
								iLocal_362 = 1;
							}
							GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_399, iLocal_400, 0);
						}
						else if (!iLocal_370)
						{
							if (!GlobalFunc_5710("BBC_T14", 1))
							{
								GlobalFunc_5709(&(Local_111.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_399, &iLocal_400, 1, 1);
								iLocal_370 = 1;
							}
						}
						else
						{
							GlobalFunc_5713(&(Local_111.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_399, iLocal_400, 1);
							if (GlobalFunc_775(Local_111.f_9, Local_618, 25f) && GlobalFunc_2326(Local_111.f_9, Local_618, 10f))
							{
								if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (GlobalFunc_5717(&(Local_111.f_19)))
									{
										iLocal_100 = 1;
										iLocal_365 = 0;
										if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
										{
											Local_111.f_18 = (MISC::GET_GAME_TIMER() - 50000);
											Local_111.f_10 = 3;
										}
									}
									else if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_111.f_9))
									{
										iLocal_100 = 1;
										iLocal_365 = 0;
										if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
										{
											Local_111.f_18 = (MISC::GET_GAME_TIMER() - 50000);
											Local_111.f_10 = 3;
										}
									}
								}
								else if (func_389(Local_111.f_9, iLocal_407, 0, 1103626240, 1086324736))
								{
									iLocal_100 = 0;
								}
								else if (GlobalFunc_775(Local_111.f_9, Local_618, 5f))
								{
									iLocal_100 = 0;
								}
								else if (GlobalFunc_5717(&(Local_111.f_19)))
								{
									iLocal_100 = 1;
									iLocal_365 = 0;
									if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
									{
										Local_111.f_18 = (MISC::GET_GAME_TIMER() - 50000);
										Local_111.f_10 = 3;
									}
								}
							}
							func_385();
						}
						if (func_345(Local_111.f_9, Local_111.f_19, 25f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_99 = 2;
						}
						break;
					
					case 0:
					case 1:
						if (!iLocal_365)
						{
							if (GlobalFunc_663("BBS_APHEND", 0, 0) || GlobalFunc_663("BBS_APHEND2", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (GlobalFunc_111())
							{
								GlobalFunc_4956();
							}
							if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_J2", 4, 0, 0, 0))
							{
								Local_111.f_17 = MISC::GET_GAME_TIMER();
								iLocal_396 = MISC::GET_GAME_TIMER();
								iLocal_365 = 1;
							}
							GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_399, iLocal_400, 0);
						}
						else if (!iLocal_361)
						{
							if (!GlobalFunc_5710("BBC_T14", 1) && !GlobalFunc_5710("BB4_J2", 1))
							{
								if (GlobalFunc_663("BBS_APHEND", 0, 0) || GlobalFunc_663("BBS_APHEND2", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								if (GlobalFunc_10865(&uLocal_431, cLocal_425, "BBC_T1", 4, 0, 0, 0))
								{
									Local_111.f_17 = MISC::GET_GAME_TIMER();
									iLocal_361 = 1;
								}
								else if (iLocal_100 == 1)
								{
									if (GlobalFunc_2311(iLocal_396, 1250))
									{
										Local_111.f_17 = (MISC::GET_GAME_TIMER() - 3000);
										iLocal_361 = 1;
									}
								}
							}
							else
							{
								iLocal_396 = MISC::GET_GAME_TIMER();
							}
							GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_399, iLocal_400, 0);
						}
						else if (GlobalFunc_2311(Local_111.f_17, 500))
						{
							if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
							{
								Local_111.f_18 = MISC::GET_GAME_TIMER();
								Local_111.f_10 = 3;
							}
							iLocal_99 = 2;
						}
						if (func_345(Local_111.f_9, Local_111.f_19, 25f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_99 = 2;
						}
						break;
					
					case 3:
						GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_399, iLocal_400, 0);
						iLocal_99 = 2;
						break;
				}
				break;
			
			case 2:
				if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
				{
					Local_111.f_18 = (MISC::GET_GAME_TIMER() - 50000);
					Local_111.f_10 = 3;
				}
				Local_111.f_17 = MISC::GET_GAME_TIMER();
				if (GlobalFunc_663("BBS_APHEND", 0, 0) || GlobalFunc_663("BBS_APHEND2", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				func_382(0);
				GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_399, iLocal_400, 0);
				iLocal_399 = MISC::GET_GAME_TIMER();
				iLocal_400 = MISC::GET_GAME_TIMER();
				func_121(2);
				break;
			}
	}
}

void func_382(bool bParam0)//Position - 0x292B7
{
	if (GlobalFunc_5710("BB4_AMB", 0))
	{
		if (bParam0)
		{
			GlobalFunc_5105();
		}
		else
		{
			GlobalFunc_4956();
		}
	}
}



void func_385()//Position - 0x2930F
{
	if (!iLocal_366)
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_775(Local_111.f_9, Local_618, (25f + 5f)))
			{
				iLocal_390 = 0;
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					iLocal_390 = 1;
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_609))
				{
					if (GlobalFunc_10865(&uLocal_431, cLocal_424, "BB4_AMB", 1, iLocal_390, 0, 0))
					{
						iLocal_366 = 1;
					}
				}
				else if (func_387(&uLocal_431, cLocal_424, "BB4_AMB", &Local_609, 1, iLocal_390, 0))
				{
					iLocal_366 = 1;
					StringCopy(&Local_609, "", 24);
				}
			}
		}
	}
	else if (GlobalFunc_5710("BB4_AMB", 0))
	{
		if (!GlobalFunc_775(Local_111.f_9, Local_618, (25f + 10f)))
		{
			Local_609 = { GlobalFunc_514() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_609))
			{
				iLocal_366 = 0;
				GlobalFunc_5105();
			}
		}
		else if (iLocal_390 == 0)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				Local_609 = { GlobalFunc_514() };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_609))
				{
					iLocal_366 = 0;
					GlobalFunc_5105();
				}
			}
		}
		else if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			Local_609 = { GlobalFunc_514() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_609))
			{
				iLocal_366 = 0;
				GlobalFunc_5105();
			}
		}
	}
}


int func_387(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x294E0
{
	if (iParam5 == 0)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (MISC::GET_PROFILE_SETTING(203) != 0)
			{
				return 0;
			}
		}
	}
	if (GlobalFunc_10699(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}


int func_389(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4)//Position - 0x29571
{
	if (GlobalFunc_115(iParam0))
	{
		if (!GlobalFunc_2319(iParam1, 10))
		{
			if (bParam2)
			{
				if (!GlobalFunc_775(Local_111.f_9, Local_618, fParam3))
				{
					return 0;
				}
				if (!GlobalFunc_2326(iParam0, Local_618, fParam4))
				{
					return 0;
				}
			}
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}



void func_392()//Position - 0x29620
{
	switch (iLocal_99)
	{
		case 0:
			if (bLocal_377)
			{
				if (GlobalFunc_2(0) && !Global_96400)
				{
					GlobalFunc_79(800, 0);
				}
			}
			if (!Global_96400)
			{
				iLocal_99 = 1;
			}
			break;
		
		case 1:
			GlobalFunc_10866(&Local_102, &uLocal_431);
			if (GlobalFunc_4924(Local_111.f_9))
			{
				func_360(Local_111.f_9, &iLocal_407, 1126825984, 1);
				func_352(Local_111.f_9, &(Local_111.f_19), 120f, 7);
				func_340();
				if (GlobalFunc_775(Local_111.f_9, Local_618, 25f) && GlobalFunc_2326(Local_111.f_9, Local_618, 10f))
				{
					if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (GlobalFunc_5717(&(Local_111.f_19)))
						{
							iLocal_100 = 1;
							iLocal_99 = 2;
						}
						else if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_111.f_9))
						{
							iLocal_100 = 1;
							iLocal_99 = 2;
						}
					}
					else if (func_389(Local_111.f_9, iLocal_407, 0, 1103626240, 1086324736))
					{
						iLocal_100 = 0;
						iLocal_99 = 2;
					}
					else if (GlobalFunc_775(Local_111.f_9, Local_618, 5f))
					{
						iLocal_100 = 0;
						iLocal_99 = 2;
					}
					else if (GlobalFunc_5717(&(Local_111.f_19)))
					{
						if (GlobalFunc_775(Local_111.f_9, Local_618, (25f - 1.5f)))
						{
							iLocal_100 = 1;
							iLocal_99 = 2;
						}
					}
				}
				else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_111.f_9) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_111.f_9))
				{
					iLocal_100 = 2;
					iLocal_99 = 2;
				}
				if (func_345(Local_111.f_9, Local_111.f_19, 25f, 0, 1090519040, 1097859072, 0))
				{
					iLocal_100 = 3;
					iLocal_99 = 2;
				}
			}
			func_385();
			break;
		
		case 2:
			if (iLocal_100 == 3)
			{
				func_382(0);
				GlobalFunc_5709(&(Local_111.f_8), "", "", &iLocal_399, &iLocal_400, 1, 0);
				func_121(2);
			}
			else
			{
				if (iLocal_100 == 1)
				{
					iLocal_365 = 0;
					if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 50000);
						Local_111.f_10 = 3;
					}
				}
				func_121(1);
			}
			break;
	}
}







void func_399()//Position - 0x29AF1
{
	if (bLocal_377)
	{
		if (((iLocal_97 != 9 && iLocal_97 != 4) && iLocal_97 != 5) && iLocal_97 != 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_9))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_111.f_9) || PED::IS_PED_INJURED(Local_111.f_9))
				{
					func_121(8);
				}
			}
		}
	}
}

void func_400()//Position - 0x29B4D
{
	if (bLocal_377)
	{
		if ((iLocal_97 != 9 && iLocal_97 != 4) && iLocal_97 != 5)
		{
			func_401();
			if (iLocal_101 != 0)
			{
				if (iLocal_101 == 1)
				{
					Global_96065 = 0;
					func_524();
				}
				else
				{
					func_121(9);
				}
			}
		}
	}
}

void func_401()//Position - 0x29B97
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_321))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_321) || PED::IS_PED_INJURED(Local_321))
		{
			iLocal_101 = 3;
			return;
		}
		if (iLocal_101 == 4)
		{
			return;
		}
		if (func_402(0))
		{
			iLocal_101 = 4;
			return;
		}
	}
	if (iLocal_101 == 2 || iLocal_101 == 1)
	{
		return;
	}
	if (iLocal_97 == 0)
	{
		if (!SYSTEM::VDIST2(Local_618, Local_102) <= ((Local_102.f_3 + 25f) * (Local_102.f_3 + 25f)))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_111.f_9))
			{
				iLocal_101 = 1;
				return;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_9))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_111.f_9) && !PED::IS_PED_INJURED(Local_111.f_9))
		{
			if ((iLocal_97 == 2 || iLocal_97 == 1) || iLocal_97 == 7)
			{
				if (!GlobalFunc_775(Local_111.f_9, Local_618, 150f))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_111.f_9))
					{
						iLocal_101 = 2;
						return;
					}
				}
			}
			else if (iLocal_97 == 3 || iLocal_97 == 6)
			{
				if (!GlobalFunc_775(Local_111.f_9, Local_618, 80f))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_111.f_9))
					{
						iLocal_101 = 2;
						return;
					}
				}
			}
		}
	}
}

int func_402(bool bParam0)//Position - 0x29CD4
{
	if (GlobalFunc_4924(Local_321))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_321) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_321)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Local_321))
		{
			return 1;
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_321))
			{
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_329))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_329))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_341))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_341))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_335))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_335))
				{
					return 1;
				}
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(Local_321, 60))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(Local_321))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(Local_321, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(Local_321, 50))
		{
			return 1;
		}
		if (func_408(Local_321, 1126825984))
		{
			return 1;
		}
		if (GlobalFunc_8324(Local_321, 1, 0, 0, 0))
		{
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_321, 1), 15f))
		{
			return 1;
		}
		if (PED::HAS_PED_RECEIVED_EVENT(Local_321, 72))
		{
			return 1;
		}
		if (bParam0)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}






int func_408(int iParam0, float fParam1)//Position - 0x2A19E
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
				if (func_409(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_409(int iParam0, float fParam1)//Position - 0x2A214
{
	return func_353(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}





void func_414(int iParam0, bool bParam1)//Position - 0x2A2CD
{
	func_424(bParam1, 1);
	if (bParam1)
	{
		func_415();
	}
	iLocal_98 = iParam0;
	bLocal_377 = false;
	if (GlobalFunc_188())
	{
		iLocal_378 = 1;
	}
	else
	{
		iLocal_378 = 0;
	}
	if (!GlobalFunc_188())
	{
		if (iLocal_98 == 0)
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_624, fLocal_391, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
				iLocal_378 = 1;
			}
		}
	}
	func_1(iLocal_98);
}

void func_415()//Position - 0x2A35C
{
	func_416(1, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!GlobalFunc_188())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_624, fLocal_391, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	GlobalFunc_4935();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_596);
	func_466();
	func_121(0);
}

void func_416(bool bParam0, bool bParam1)//Position - 0x2A3CE
{
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
	}
	if (Global_96065 == 0)
	{
		GlobalFunc_4935();
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(4, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	PED::SET_CREATE_RANDOM_COPS(1);
	GlobalFunc_7632(0);
	GlobalFunc_4937(0, 0);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	GlobalFunc_2331(0);
	AUDIO::SET_AGGRESSIVE_HORNS(0);
	GlobalFunc_695(1);
	if (iLocal_97 > 2)
	{
		GlobalFunc_2325(0, &uLocal_416);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_415, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	GlobalFunc_200(&uLocal_431, 2);
	GlobalFunc_200(&uLocal_431, 3);
	GlobalFunc_200(&uLocal_431, 4);
	GlobalFunc_4948(&uLocal_43, 0, 0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	MISC::SET_TIME_SCALE(1f);
	func_24(1, 1, 1, 1);
	CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	func_419(1, 1, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 1);
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	func_105();
	func_88(bParam0);
	func_417(bParam1);
}

void func_417(bool bParam0)//Position - 0x2A4E5
{
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	}
	STREAMING::REMOVE_ANIM_DICT("oddjobs@bailbond_hobodepressed");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@bailbond_hobohang_out_street_b");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@bailbond_hobohang_out_street_c");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@bailbond_hobotwitchy");
	STREAMING::REMOVE_ANIM_DICT(GlobalFunc_2310());
	GlobalFunc_5719();
}


void func_419(bool bParam0, int iParam1, int iParam2)//Position - 0x2A538
{
	bool bVar0;
	
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_24(iParam1, iParam2, 1, 1);
		}
	}
}





void func_424(bool bParam0, bool bParam1)//Position - 0x2A70D
{
	if (bParam0)
	{
		func_419(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_183(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}










































void func_466()//Position - 0x2F05B
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_474();
	while (!func_55(0) || !func_55(1))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_596);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_596);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_596, 1862763509);
	Var0 = { GlobalFunc_2334(Local_102) };
	Var3 = { GlobalFunc_2333(Local_102) };
	PED::SET_PED_NON_CREATION_AREA(Var0, Var3);
	uLocal_415 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, 0, 1, 1, 1);
	MISC::CLEAR_AREA(Local_102, 30f, 0, 0, 0, 0);
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(4, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	PED::SET_CREATE_RANDOM_COPS(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	GlobalFunc_2331(1);
	while (!func_469())
	{
		SYSTEM::WAIT(0);
	}
	func_467();
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_173(&uLocal_431, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (GlobalFunc_4924(Local_111.f_9))
	{
		GlobalFunc_173(&uLocal_431, 3, Local_111.f_9, sLocal_418, 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_111.f_9, 1);
	}
}

void func_467()//Position - 0x2F1A0
{
	int iVar0;
	
	if (GlobalFunc_4924(Local_111.f_9))
	{
		AUDIO::STOP_PED_SPEAKING(Local_111.f_9, 1);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_111.f_9, 1);
		PED::SET_PED_ARMOUR(Local_111.f_9, 100);
		ENTITY::SET_ENTITY_HEALTH(Local_111.f_9, 200);
		PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(Local_111.f_9, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_111.f_9, 1);
		PED::SET_PED_DIES_IN_WATER(Local_111.f_9, 1);
		PED::SET_PED_DIES_IN_SINKING_VEHICLE(Local_111.f_9, 1);
		PED::SET_PED_MAX_TIME_IN_WATER(Local_111.f_9, 2f);
		PED::SET_PED_MAX_TIME_UNDERWATER(Local_111.f_9, 2f);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_111.f_9, 1);
		TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_111.f_9, 0);
		PED::SET_PED_CONFIG_FLAG(Local_111.f_9, 118, 1);
		PED::SET_PED_CONFIG_FLAG(Local_111.f_9, 137, 1);
		PED::SET_PED_CONFIG_FLAG(Local_111.f_9, 281, 1);
		PED::SET_PED_AS_ENEMY(Local_111.f_9, 1);
		if (Local_111.f_12 != 0)
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_111.f_9, Local_111.f_12, -1, 0, 1);
		}
		func_338(Local_111.f_9);
		GlobalFunc_2332(Local_111.f_9, "TARGET_", 0);
		Local_111.f_10 = 0;
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 2, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 4, 0, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_417);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_c", "base", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_c", "base", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_c", "idle_a", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_c", "idle_c", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_c", "idle_a", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_c", "base", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_c", "idle_a", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		TASK::SET_SEQUENCE_TO_REPEAT(uLocal_417, 1);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_417);
		TASK::TASK_PERFORM_SEQUENCE(Local_111.f_9, uLocal_417);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_417);
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (GlobalFunc_4924(Local_131[iVar0 /*19*/]))
		{
			func_338(Local_131[iVar0 /*19*/]);
			if (iVar0 == 0 || iVar0 == 2)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_131[iVar0 /*19*/], iLocal_596);
			}
			GlobalFunc_2332(Local_131[iVar0 /*19*/], "BACKUP_", iVar0);
			switch (iVar0)
			{
				case 0:
					TASK::OPEN_SEQUENCE_TASK(&uLocal_417);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_b", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_b", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_b", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_b", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_b", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobohang_out_street_b", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_417, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_417);
					TASK::TASK_PERFORM_SEQUENCE(Local_131[iVar0 /*19*/], uLocal_417);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_417);
					break;
				
				case 1:
					TASK::OPEN_SEQUENCE_TASK(&uLocal_417);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobotwitchy", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobotwitchy", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobotwitchy", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobotwitchy", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobotwitchy", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobotwitchy", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobotwitchy", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_417, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_417);
					TASK::TASK_PERFORM_SEQUENCE(Local_131[iVar0 /*19*/], uLocal_417);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_417);
					break;
				
				case 2:
					TASK::OPEN_SEQUENCE_TASK(&uLocal_417);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobodepressed", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobodepressed", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobodepressed", "idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobodepressed", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobodepressed", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_hobodepressed", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uLocal_417, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_417);
					TASK::TASK_PERFORM_SEQUENCE(Local_131[iVar0 /*19*/], uLocal_417);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_417);
					break;
				}
		}
		iVar0++;
	}
}


int func_469()//Position - 0x2F6B2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (GlobalFunc_5707(&(Local_111.f_9), Local_111.f_11, Local_111.f_13, Local_111.f_16, 1, 0, 0))
	{
		if (GlobalFunc_4924(Local_111.f_9))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
			iVar0++;
		}
	}
	if (iLocal_406 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_406 - 1))
		{
			if (GlobalFunc_5707(&(Local_131[iVar2 /*19*/]), Local_131[iVar2 /*19*/].f_18, Local_131[iVar2 /*19*/].f_1, Local_131[iVar2 /*19*/].f_4, 0, 0, 0))
			{
				if (GlobalFunc_4924(Local_131[iVar2 /*19*/]))
				{
					iVar0++;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
	if (iVar1 == iLocal_406)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_406 - 1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_131[iVar2 /*19*/].f_18);
			iVar2++;
		}
	}
	if (iLocal_403 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_403 - 1))
		{
			if (GlobalFunc_7099(&(Local_190[iVar2 /*6*/]), Local_190[iVar2 /*6*/].f_5, Local_190[iVar2 /*6*/].f_1, Local_190[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_404 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_404 - 1))
		{
			if (GlobalFunc_5708(&(Local_227[iVar2 /*6*/]), Local_227[iVar2 /*6*/].f_5, Local_227[iVar2 /*6*/].f_1, Local_227[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_402 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_402 - 1))
		{
			if (GlobalFunc_5708(&(Local_276[iVar2 /*9*/]), Local_276[iVar2 /*9*/].f_8, Local_276[iVar2 /*9*/].f_1, Local_276[iVar2 /*9*/].f_7, 1))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_276[iVar2 /*9*/], 1);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_405 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_405 - 1))
		{
			if (GlobalFunc_5720(&(Local_313[iVar2 /*7*/]), Local_313[iVar2 /*7*/].f_5, Local_313[iVar2 /*7*/].f_2, Local_313[iVar2 /*7*/].f_6, Local_313[iVar2 /*7*/].f_1, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iVar0 == ((((iLocal_406 + iLocal_403) + iLocal_404) + iLocal_402) + iLocal_405) + 1)
	{
		return 1;
	}
	return 0;
}





void func_474()//Position - 0x2FADA
{
	int iVar0;
	
	iVar0 = 0;
	iLocal_110 = 4;
	Local_111.f_11 = joaat("a_m_o_acult_02");
	Local_111.f_13 = { 1429.18f, 6350.05f, 23.99f };
	Local_111.f_16 = 39.2f;
	Local_111.f_12 = joaat("weapon_pistol");
	Local_111.f_10 = 0;
	Local_111.f_17 = 0;
	Local_111.f_18 = 0;
	Local_111.f_19 = 0;
	func_8();
	Local_131[0 /*19*/].f_18 = joaat("a_m_m_tramp_01");
	Local_131[0 /*19*/].f_1 = { 1426.88f, 6352.04f, 23.99f };
	Local_131[0 /*19*/].f_4 = -166.25f;
	Local_131[1 /*19*/].f_18 = joaat("a_m_m_tramp_01");
	Local_131[1 /*19*/].f_1 = { 1430.64f, 6347.71f, 23.99f };
	Local_131[1 /*19*/].f_4 = 39.58f;
	Local_131[2 /*19*/].f_18 = joaat("a_m_m_tramp_01");
	Local_131[2 /*19*/].f_1 = { 1429.44f, 6345.15f, 23.99f };
	Local_131[2 /*19*/].f_4 = 10.05f;
	Local_131[2 /*19*/].f_16 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_406 - 1))
	{
		Local_131[iVar0 /*19*/].f_15 = 0;
		Local_131[iVar0 /*19*/].f_16 = 0;
		Local_131[iVar0 /*19*/].f_14 = 0;
		iVar0++;
	}
	iLocal_406 = 3;
	iLocal_403 = 0;
	Local_227[0 /*6*/].f_5 = joaat("prop_box_wood04a");
	Local_227[0 /*6*/].f_1 = { 1427.111f, 6346.972f, 22.9878f };
	Local_227[0 /*6*/].f_4 = 257.2001f;
	Local_227[1 /*6*/].f_5 = joaat("prop_box_wood04a");
	Local_227[1 /*6*/].f_1 = { 1445.856f, 6348.244f, 22.6787f };
	Local_227[1 /*6*/].f_4 = 190.8004f;
	Local_227[2 /*6*/].f_5 = joaat("prop_box_wood04a");
	Local_227[2 /*6*/].f_1 = { 1433.867f, 6344.37f, 22.9878f };
	Local_227[2 /*6*/].f_4 = 68.0003f;
	Local_227[3 /*6*/].f_5 = joaat("prop_box_wood04a");
	Local_227[3 /*6*/].f_1 = { 1439.488f, 6353.594f, 22.9811f };
	Local_227[3 /*6*/].f_4 = 117.2f;
	Local_227[4 /*6*/].f_5 = joaat("prop_box_wood04a");
	Local_227[4 /*6*/].f_1 = { 1441.326f, 6340.953f, 22.9246f };
	Local_227[4 /*6*/].f_4 = 47.9998f;
	Local_227[5 /*6*/].f_5 = joaat("prop_box_wood04a");
	Local_227[5 /*6*/].f_1 = { 1432.94f, 6351.196f, 22.9878f };
	Local_227[5 /*6*/].f_4 = 5.5997f;
	Local_227[6 /*6*/].f_5 = joaat("prop_box_wood04a");
	Local_227[6 /*6*/].f_1 = { 1431.664f, 6337.698f, 22.9945f };
	Local_227[6 /*6*/].f_4 = 129.1996f;
	iLocal_404 = 7;
	iLocal_402 = 0;
	iLocal_405 = 0;
	Local_624 = { 1477.907f, 6372.509f, 22.5721f };
	fLocal_391 = 145.357f;
	Local_627 = { 1456.282f, 6352.942f, 22.8309f };
	fLocal_392 = 97.282f;
	Local_630 = { 1445.696f, 6351.564f, 22.7946f };
	fLocal_393 = 90.3412f;
	Local_633 = { 0f, 0f, 0f };
	Local_636 = { 0f, 0f, 0f };
	iLocal_100 = 4;
	iLocal_353 = 0;
	iLocal_354 = 0;
	iLocal_355 = 0;
	iLocal_357 = 1;
	iLocal_356 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iLocal_358[iVar0] = 0;
		iVar0++;
	}
	iLocal_361 = 0;
	iLocal_362 = 0;
	iLocal_363 = 0;
	iLocal_364 = 0;
	iLocal_365 = 1;
	iLocal_366 = 0;
	iLocal_367 = 0;
	iLocal_368 = 0;
	iLocal_370 = 0;
	iLocal_371 = 0;
	iLocal_372 = 0;
	iLocal_373 = 0;
	bLocal_379 = false;
	iLocal_380 = 0;
	iLocal_381 = 0;
	iLocal_382 = 0;
	iLocal_383 = 1;
	iLocal_384 = 0;
	iLocal_385 = 0;
	iLocal_386 = 0;
	iLocal_374 = 1;
	bLocal_375 = false;
	iLocal_376 = 0;
	iLocal_387 = 0;
	bLocal_388 = false;
	iLocal_101 = 0;
	iLocal_401 = 0;
	iLocal_395 = 0;
	iLocal_399 = 0;
	iLocal_400 = 0;
	iLocal_396 = 0;
	iLocal_397 = 0;
	iLocal_398 = 0;
	iLocal_412 = 0;
	iLocal_394 = 0;
	iLocal_407 = 0;
	iLocal_408 = -1;
	iLocal_409 = -1;
	iLocal_411 = 0;
	iLocal_413 = -1;
	Local_621 = { 1425.318f, 6346.781f, 22.9851f };
	Local_615 = { 2722.661f, 4143.105f, 43.0617f };
	StringCopy(&Local_597, "", 24);
	StringCopy(&Local_609, "", 24);
	Local_321.f_6 = GlobalFunc_4946(62);
	Local_321.f_1 = { GlobalFunc_2344() };
	Local_321.f_4 = GlobalFunc_2343();
	Local_329.f_5 = GlobalFunc_2342();
	Local_329.f_1 = { GlobalFunc_2341() };
	Local_329.f_4 = GlobalFunc_2340();
	Local_335.f_5 = GlobalFunc_2339();
	Local_335.f_1 = { GlobalFunc_2338() };
	Local_335.f_4 = GlobalFunc_2337();
	Local_341.f_5 = GlobalFunc_2301();
	Local_341.f_1 = { GlobalFunc_2300() };
	Local_341.f_4 = GlobalFunc_2299();
	Local_347.f_5 = GlobalFunc_2298();
	Local_347.f_1 = { GlobalFunc_2336() };
	Local_347.f_4 = GlobalFunc_2335();
	sLocal_418 = "BailBond4Jumper";
	sLocal_420 = "BB4_J3";
	sLocal_421[0] = "BB4_VC1";
	sLocal_421[1] = "BB4_VC2";
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iLocal_358[iVar0] = 0;
		iVar0++;
	}
	iLocal_189 = 0;
}


















































void func_524()//Position - 0x32B68
{
	if (iLocal_383)
	{
		func_416(0, 1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

