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
	int iLocal_131 = 0;
	struct<19> Local_132[6];
	struct<6> Local_247[6];
	struct<6> Local_284 = { 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_290[4];
	struct<7> Local_327[1];
	struct<7> Local_335 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_342 = 0;
	struct<6> Local_343 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_349 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_355 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_361 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371[3] = { 0, 0, 0 };
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	bool bLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	bool bLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	bool bLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	bool bLocal_402 = 0;
	var uLocal_403 = 0;
	float fLocal_404 = 0f;
	float fLocal_405 = 0f;
	float fLocal_406 = 0f;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	char* sLocal_432 = NULL;
	char* sLocal_433 = NULL;
	char* sLocal_434 = NULL;
	char* sLocal_435[3] = { NULL, NULL, NULL };
	char[] cLocal_439[8] = 0;
	char[] cLocal_440[8] = 0;
	char* sLocal_441 = NULL;
	char* sLocal_442 = NULL;
	char* sLocal_443 = NULL;
	char* sLocal_444 = NULL;
	char* sLocal_445 = NULL;
	var uLocal_446 = 16;
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
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	int iLocal_611 = 0;
	struct<3> Local_612 = { 0, 0, 0 } ;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	char cLocal_618[24] = "";
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	struct<3> Local_624 = { 0, 0, 0 } ;
	struct<3> Local_627 = { 0, 0, 0 } ;
	struct<3> Local_630[10];
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	struct<3> Local_664 = { 0, 0, 0 } ;
	struct<3> Local_667 = { 0, 0, 0 } ;
	struct<3> Local_670 = { 0, 0, 0 } ;
	struct<3> Local_673 = { 0, 0, 0 } ;
	struct<3> Local_676 = { 0, 0, 0 } ;
	int iLocal_679 = 0;
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
	bLocal_391 = true;
	cLocal_439 = "BB1AUD";
	cLocal_440 = "BBCAUD";
	sLocal_441 = "Trevor";
	sLocal_442 = "Maude";
	sLocal_443 = "maude_criminal_1";
	sLocal_444 = "maude_chair";
	sLocal_445 = "maude_laptop";
	StringCopy(&Local_612, "", 24);
	StringCopy(&cLocal_618, "MAUDE_MCS_2", 24);
	Local_102 = { ScriptParam_0 };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		if (iLocal_97 == 0)
		{
			Global_96065 = 0;
			func_517();
		}
		else
		{
			Global_96065 = 3;
			GlobalFunc_10100(0);
			func_517();
		}
	}
	if (!GlobalFunc_10099(1))
	{
		Global_96065 = 0;
		func_517();
	}
	MISC::SET_MISSION_FLAG(1);
	func_459();
	if (GlobalFunc_Is_Mission_Retry())
	{
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				if (VEHICLE::IS_THIS_MODEL_A_HELI(Global_93588.f_2167.f_12.f_42) || VEHICLE::IS_THIS_MODEL_A_PLANE(Global_93588.f_2167.f_12.f_42))
				{
					GlobalFunc_10698(&iLocal_679, 2898.294f, 2796.305f, 53.849f, 162.6353f, 0, 0, 1, 0, 0, joaat("asterope"), 0, 145);
				}
				else
				{
					GlobalFunc_10698(&iLocal_679, 2891.459f, 2798.125f, 53.7482f, 206.3925f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
				}
				GlobalFunc_4972(Local_664, fLocal_404, 1, 0);
				iLocal_100 = 2;
				func_407(1, 0);
				break;
			
			case 1:
				GlobalFunc_10698(&iLocal_679, 2704.078f, 4152.24f, 42.2514f, 175.193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
				GlobalFunc_4972(Local_624, 254.9762f, 0, 0);
				func_407(4, 0);
				break;
			
			default:
				break;
		}
	}
	else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_664, fLocal_404, 0, 0);
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
			Local_627 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			func_393();
			func_392();
			switch (iLocal_97)
			{
				case 0:
					func_385();
					break;
				
				case 1:
					func_381();
					break;
				
				case 2:
					func_375();
					break;
				
				case 3:
					func_369();
					break;
				
				case 6:
					func_364();
					break;
				
				case 7:
					func_301();
					break;
				
				case 4:
					func_121();
					break;
				
				case 5:
					func_113(1);
					break;
				
				case 8:
					func_109();
					break;
				
				case 9:
					func_69();
					break;
			}
			if (bLocal_391 == 0)
			{
				func_1(iLocal_98);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x30C
{
	if (iLocal_97 == iParam0)
	{
		if (GlobalFunc_188())
		{
			GlobalFunc_4967(0, -1, 0);
		}
		func_34(iLocal_97);
		if (iLocal_97 == 4)
		{
			func_24(1, 0, 1);
		}
		else
		{
			func_24(1, 1, 1);
		}
		bLocal_391 = true;
		iLocal_392 = 0;
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

void func_2()//Position - 0x363
{
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
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
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_667, fLocal_405, 0, 1);
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
						{
							GlobalFunc_2294(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_111.f_9, 1));
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_392 == 0)
						{
							if (iLocal_98 == 1)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_392 = 1;
								}
							}
						}
					}
					iLocal_376 = 1;
					iLocal_100 = 2;
					func_8();
					iLocal_99 = 2;
				}
				break;
			
			case 1:
				iLocal_376 = 1;
				iLocal_375 = 1;
				if (iLocal_99 == 1)
				{
					if (!GlobalFunc_188())
					{
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_670, fLocal_406, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_392 == 0)
						{
							if (iLocal_98 == 2)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_392 = 1;
								}
							}
						}
					}
					Local_111.f_17 = (MISC::GET_GAME_TIMER() - 5000);
					func_8();
					iLocal_99 = 2;
				}
				break;
			
			case 2:
				iLocal_367 = 1;
				if (iLocal_110 == 3)
				{
					if (iLocal_99 == 0)
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9) && GlobalFunc_4947(Local_247[0 /*6*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_111.f_9, Local_247[0 /*6*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_111.f_9, Local_247[0 /*6*/], -1);
							}
						}
					}
				}
				if (iLocal_99 == 1)
				{
					iLocal_369 = 1;
					if (!GlobalFunc_188())
					{
						GlobalFunc_7087(Local_111.f_9, 2.5f);
						if (iLocal_392 == 0)
						{
							if (iLocal_98 == 3)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_392 = 1;
								}
							}
						}
					}
					GlobalFunc_4935();
					GlobalFunc_4956();
					func_8();
					iLocal_99 = 2;
				}
				break;
			
			case 3:
				iLocal_386 = 1;
				if (iLocal_99 == 1)
				{
					GlobalFunc_7097(Local_111.f_9, Local_624, 0f, 0, 0);
					if (!GlobalFunc_188())
					{
						GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_624, 254.9762f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_392 == 0)
						{
							if (iLocal_98 == 4)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_392 = 1;
								}
							}
						}
					}
					func_8();
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
					func_8();
				}
				break;
			
			case 7:
				if (iLocal_99 == 1)
				{
					iLocal_369 = 1;
					if (!GlobalFunc_188())
					{
						GlobalFunc_7087(Local_111.f_9, 2.5f);
						if (iLocal_392 == 0)
						{
							if (iLocal_98 == 3)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_392 = 1;
								}
							}
						}
					}
					GlobalFunc_4935();
					GlobalFunc_4956();
					func_8();
					iLocal_99 = 2;
				}
				break;
			}
	}
}






void func_8()//Position - 0x78D
{
	func_9();
	Local_111.f_17 = 0;
	Local_111.f_18 = 0;
	Local_111.f_19 = 0;
}

void func_9()//Position - 0x7A8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_55)
	{
		GlobalFunc_169(&(Local_55[iVar0 /*4*/]));
		iVar0++;
	}
}















void func_24(int iParam0, int iParam1, int iParam2)//Position - 0xB6E
{
	func_25(0, 0, iParam2, 1);
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

void func_25(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xBA2
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
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}









void func_34(int iParam0)//Position - 0xE58
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 4:
				GlobalFunc_9152(&cLocal_618);
				func_64();
				while (!GlobalFunc_7956(1, 1093140480, 0) || !func_35())
				{
					GlobalFunc_9152(&cLocal_618);
					func_64();
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
}

int func_35()//Position - 0xEB4
{
	if (GlobalFunc_1986(Local_627, Local_335.f_1, 210f))
	{
		if (!iLocal_399)
		{
			if ((func_56(3) && GlobalFunc_5708(&Local_343, Local_343.f_5, Local_343.f_1, Local_343.f_4, 1)) && GlobalFunc_5708(&Local_349, Local_349.f_5, Local_349.f_1, Local_349.f_4, 1))
			{
				if (GlobalFunc_5707(&Local_335, Local_335.f_6, Local_335.f_1, Local_335.f_4, 1, 0, 1))
				{
					func_47();
					iLocal_399 = 1;
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_355))
		{
			if (GlobalFunc_1986(Local_627, Local_355.f_1, 150f))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_355.f_1, 10f, GlobalFunc_2301(), 0))
				{
					Local_355 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_355.f_1, 10f, GlobalFunc_2301(), 1, 0, 1);
					if (GlobalFunc_115(Local_355))
					{
						ENTITY::SET_ENTITY_COORDS(Local_355, GlobalFunc_2300(), 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_355, GlobalFunc_2299());
						ENTITY::FREEZE_ENTITY_POSITION(Local_355, 1);
					}
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_361))
		{
			if (GlobalFunc_1986(Local_627, Local_361.f_1, 150f))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_361.f_1, 10f, GlobalFunc_2298(), 0))
				{
					Local_361 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_361.f_1, 10f, GlobalFunc_2298(), 1, 0, 1);
				}
			}
		}
	}
	else if (!CAM::IS_SPHERE_VISIBLE(Local_335.f_1, 2.5f))
	{
		GlobalFunc_5706(&Local_335, 1);
		STREAMING::REMOVE_ANIM_DICT(GlobalFunc_2296());
		func_36(&Local_343, 1);
		func_36(&Local_349, 1);
		func_36(&Local_355, 0);
		func_36(&Local_361, 0);
		iLocal_399 = 0;
	}
	return iLocal_399;
}

void func_36(int iParam0, bool bParam1)//Position - 0x1069
{
	if (bParam1)
	{
		GlobalFunc_130(iParam0);
	}
	else
	{
		GlobalFunc_2295(iParam0, 0);
	}
}











void func_47()//Position - 0x11E2
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_335))
	{
		if (GlobalFunc_115(Local_343))
		{
			if (func_56(3))
			{
				uVar0 = PED::CREATE_SYNCHRONIZED_SCENE(GlobalFunc_2300(), GlobalFunc_2304(), 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar0, 1);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uVar0, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_335, uVar0, GlobalFunc_2296(), GlobalFunc_2303(), 1000f, -8f, 4688, 0, 1148846080, 0);
				iVar1 = 0;
				iVar1 += 16;
				iVar1 += 64;
				iVar1 += 512;
				iVar1 += 4096;
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_343, uVar0, GlobalFunc_2302(), GlobalFunc_2296(), 1000f, -8f, iVar1, 1148846080);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_335, 1);
				PED::SET_PED_MONEY(Local_335, 0);
				PED::SET_PED_CAN_BE_TARGETTED(Local_335, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_335, 1862763509);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_335, 0);
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_335, 0);
				PED::SET_PED_KEEP_TASK(Local_335, 1);
				PED::SET_PED_CONFIG_FLAG(Local_335, 118, 0);
			}
		}
	}
}









int func_56(int iParam0)//Position - 0x1448
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
		
		case 3:
			STREAMING::REQUEST_ANIM_DICT(GlobalFunc_2296());
			if (STREAMING::HAS_ANIM_DICT_LOADED(GlobalFunc_2296()))
			{
				return 1;
			}
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_DICT("ODDJOBS@BAILBOND_QUARRY");
			if (STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@BAILBOND_QUARRY"))
			{
				return 1;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(Local_284.f_5);
			if (STREAMING::HAS_MODEL_LOADED(Local_284.f_5))
			{
				return 1;
			}
			break;
	}
	return 0;
}








void func_64()//Position - 0x180D
{
	if (GlobalFunc_115(Local_111.f_9))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_443, Local_111.f_9, 0);
		}
	}
	if (GlobalFunc_115(Local_335))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_442, Local_335, 0);
		}
	}
}





void func_69()//Position - 0x1968
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
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_335))
				{
					GlobalFunc_200(&uLocal_446, 4);
					GlobalFunc_7090(Local_335, 0);
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_335))
					{
						if (GlobalFunc_775(Local_335, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 35f))
						{
							AUDIO::STOP_PED_SPEAKING(Local_335, 0);
							GlobalFunc_5653(Local_335, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_349))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_349, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_355))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_355, 0);
				}
				STREAMING::REQUEST_ANIM_DICT(GlobalFunc_2310());
				if (GlobalFunc_7959(&Local_335, &Local_343, &iLocal_427))
				{
					iLocal_393 = 1;
				}
			}
			else if (iLocal_101 == 2)
			{
				iLocal_383 = 0;
				StringCopy(&Local_612, "BBC_T12", 24);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
			{
				if (PED::IS_PED_IN_GROUP(Local_111.f_9))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_111.f_9);
				}
				GlobalFunc_7958(Local_111.f_9, 1);
			}
			iVar1 = 0;
			while (iVar1 <= (iLocal_419 - 1))
			{
				GlobalFunc_7958(Local_132[iVar1 /*19*/], 1);
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
			GlobalFunc_10100(0);
			iLocal_99 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_89(1);
				func_517();
			}
			else
			{
				if (!iLocal_383)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					if (iLocal_101 == 4)
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_335))
						{
							if (GlobalFunc_775(Local_335, Local_627, 35f))
							{
								GlobalFunc_173(&uLocal_446, 4, Local_335, "MAUDE", 0, 1);
								if (GlobalFunc_10865(&uLocal_446, cLocal_440, &Local_612, 4, 0, 0, 0))
								{
									iLocal_383 = 1;
								}
							}
						}
					}
					else if (GlobalFunc_10865(&uLocal_446, cLocal_440, &Local_612, 4, 0, 0, 0))
					{
						iLocal_383 = 1;
					}
				}
				if (iLocal_101 == 4)
				{
					if (!iLocal_393)
					{
						STREAMING::REQUEST_ANIM_DICT(GlobalFunc_2310());
						if (GlobalFunc_7959(&Local_335, &Local_343, &iLocal_427))
						{
							iLocal_393 = 1;
						}
					}
					else if (GlobalFunc_IsPedNotInjuredOrDead(Local_335))
					{
						if (!GlobalFunc_6964(Local_335, 1805844857))
						{
							if (!PED::IS_PED_FLEEING(Local_335))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_335, GlobalFunc_2310(), GlobalFunc_2308(), 3))
								{
									GlobalFunc_7088(&Local_335);
									TASK::TASK_SMART_FLEE_PED(Local_335, PLAYER::PLAYER_PED_ID(), 50f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(Local_335, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
}




















void func_89(bool bParam0)//Position - 0x24F1
{
	int iVar0;
	
	func_36(&Local_284, 0);
	if (iLocal_414 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_414 - 1))
		{
			func_36(&(Local_290[iVar0 /*9*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_417 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_417 - 1))
		{
			GlobalFunc_841(&(Local_327[iVar0 /*7*/]));
			iVar0++;
		}
	}
	func_36(&Local_343, bParam0);
	func_36(&Local_349, bParam0);
	func_36(&Local_355, 0);
	func_36(&Local_361, 0);
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
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
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_335))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_335, 0);
		PED::SET_PED_KEEP_TASK(Local_335, 1);
	}
	GlobalFunc_5706(&Local_335, bParam0);
	if (iLocal_419 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_419 - 1))
		{
			if (iLocal_110 == 4)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_132[iVar0 /*19*/]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_132[iVar0 /*19*/], -2065892691);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_132[iVar0 /*19*/], 0);
					if (Global_96065 == 0)
					{
						PED::SET_PED_KEEP_TASK(Local_132[iVar0 /*19*/], 0);
					}
					else
					{
						PED::SET_PED_KEEP_TASK(Local_132[iVar0 /*19*/], 1);
					}
				}
			}
			GlobalFunc_5706(&(Local_132[iVar0 /*19*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_415 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_415 - 1))
		{
			GlobalFunc_7957(&(Local_247[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
}
















void func_105()//Position - 0x2CAD
{
	func_108(iLocal_419);
	GlobalFunc_846(&(Local_111.f_8));
	GlobalFunc_589(&Local_111);
	GlobalFunc_846(&uLocal_403);
}



void func_108(int iParam0)//Position - 0x2D5F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		GlobalFunc_589(&(Local_132[iVar0 /*19*/].f_6));
		iVar0++;
	}
}

void func_109()//Position - 0x2D88
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
			GlobalFunc_5706(&Local_335, 1);
			iVar0 = 0;
			while (iVar0 <= (iLocal_419 - 1))
			{
				func_111(iVar0);
				iVar0++;
			}
			iLocal_424 = MISC::GET_GAME_TIMER();
			iLocal_99 = 1;
			break;
		
		case 1:
			if (GlobalFunc_2311(iLocal_424, 500))
			{
				if (!bLocal_384)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4935();
						GlobalFunc_4956();
					}
					if (GlobalFunc_10865(&uLocal_446, cLocal_440, "BBC_PK1", 4, 0, 0, 0))
					{
						bLocal_384 = true;
					}
				}
				if (bLocal_384)
				{
					func_113(2);
				}
				if (GlobalFunc_2311(iLocal_424, 1500))
				{
					func_113(2);
				}
			}
			break;
	}
}


void func_111(int iParam0)//Position - 0x2E5D
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_132[iParam0 /*19*/]))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(Local_132[iParam0 /*19*/]);
		TASK::CLEAR_PED_TASKS(Local_132[iParam0 /*19*/]);
		TASK::TASK_CLEAR_LOOK_AT(Local_132[iParam0 /*19*/]);
		if (GlobalFunc_2312(1, 0, 1))
		{
			GlobalFunc_7958(Local_132[iParam0 /*19*/], 1);
			Local_132[iParam0 /*19*/].f_14 = 4;
			GlobalFunc_589(&(Local_132[iParam0 /*19*/].f_6));
		}
		else if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_132[iParam0 /*19*/]) == iLocal_611)
		{
			PED::SET_PED_HEARING_RANGE(Local_132[iParam0 /*19*/], 30f);
			PED::SET_PED_SEEING_RANGE(Local_132[iParam0 /*19*/], 30f);
			PED::SET_PED_ID_RANGE(Local_132[iParam0 /*19*/], 30f);
			PED::SET_PED_COMBAT_RANGE(Local_132[iParam0 /*19*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_132[iParam0 /*19*/], 1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_132[iParam0 /*19*/], 3, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_132[iParam0 /*19*/], 5, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_132[iParam0 /*19*/], 0, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_132[iParam0 /*19*/], 512, 1);
			TASK::TASK_LOOK_AT_ENTITY(Local_132[iParam0 /*19*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_132[iParam0 /*19*/], PLAYER::PLAYER_PED_ID(), -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_132[iParam0 /*19*/], 1);
			Local_132[iParam0 /*19*/].f_14 = 2;
		}
		else
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_132[iParam0 /*19*/], 5, 0);
			TASK::TASK_LOOK_AT_ENTITY(Local_132[iParam0 /*19*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_132[iParam0 /*19*/], PLAYER::PLAYER_PED_ID(), -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_132[iParam0 /*19*/], 0);
			Local_132[iParam0 /*19*/].f_14 = 4;
		}
	}
}


void func_113(int iParam0)//Position - 0x30B1
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
	func_517();
}








void func_121()//Position - 0x39D8
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	switch (iLocal_99)
	{
		case 0:
			GlobalFunc_9152(&cLocal_618);
			func_64();
			if (func_35())
			{
				if (GlobalFunc_7956(1, 10.5f, 1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_441, 0, 0, 0);
					if (GlobalFunc_115(Local_335))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_335, sLocal_442, 0, 0, 0);
					}
					if (GlobalFunc_115(Local_111.f_9))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_111.f_9, sLocal_443, 0, 0, 0);
					}
					if (GlobalFunc_115(Local_343))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_343, sLocal_444, 0, 0, 0);
					}
					if (GlobalFunc_115(Local_349))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_349, sLocal_445, 0, 0, 0);
					}
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					GlobalFunc_79(800, 0);
					func_184(2727.58f, 4144.19f, 43.95f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					GlobalFunc_2315(&Var0, &Var3, &fVar9);
					Var6 = { GlobalFunc_2314() };
					if (GlobalFunc_7091(Var6, 0))
					{
						GlobalFunc_10096(Var0, Var3, fVar9, 2721.02f, 4140.34f, 43.66f, 257.67f, 1, 1, 1, 0, 0);
						GlobalFunc_10697(2721.02f, 4140.34f, 43.66f, 257.67f, 0, 145);
					}
					else
					{
						GlobalFunc_10096(Var0, Var3, fVar9, 2710.665f, 4149.075f, 42.7026f, 180.9488f, 1, 1, 1, 0, 0);
						GlobalFunc_10697(2710.665f, 4149.075f, 42.7026f, 180.9488f, 0, 145);
					}
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
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
			if (GlobalFunc_115(Local_343))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_335))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_442, 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_444, 0))
					{
						func_47();
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_441, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2724.193f, 4145.306f, 42.8324f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 76.4896f);
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
				if (bLocal_391)
				{
					func_25(1, 1, 1, 1);
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
				{
					if (PED::IS_PED_IN_GROUP(Local_111.f_9))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_111.f_9);
					}
				}
				GlobalFunc_5706(&(Local_111.f_9), 1);
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_335))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_335, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					PED::SET_PED_KEEP_TASK(Local_335, 1);
				}
				GlobalFunc_2297(&Local_335, 1, 0, 1);
				func_122(5);
			}
			break;
	}
}

void func_122(int iParam0)//Position - 0x3CDF
{
	iLocal_97 = iParam0;
	iLocal_99 = 0;
}






























































void func_184(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x7A74
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





















































































































void func_301()//Position - 0x23CA0
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	func_35();
	func_362();
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_111.f_9, 0) };
		func_361(Local_111.f_9, &iLocal_420, 1126825984, 7);
		func_353(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_341();
		switch (iLocal_99)
		{
			case 0:
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_611);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_611, 1862763509);
				iLocal_425 = ENTITY::GET_ENTITY_HEALTH(Local_111.f_9);
				Local_673 = { ENTITY::GET_ENTITY_COORDS(Local_111.f_9, 0) };
				GlobalFunc_2318(&Local_676, Local_673);
				func_339(Local_111.f_9);
				if (Local_111.f_10 != 13 && Local_111.f_10 != 14)
				{
					TASK::CLEAR_PED_TASKS(Local_111.f_9);
					Local_111.f_18 = (MISC::GET_GAME_TIMER() - 3000);
					Local_111.f_10 = 13;
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
					{
						Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 0, 5);
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_111.f_9);
				}
				iLocal_421 = -1;
				iLocal_422 = -1;
				iLocal_396 = 0;
				iLocal_368 = 0;
				iLocal_367 = 0;
				sLocal_434 = "BB1_J8";
				iLocal_409 = MISC::GET_GAME_TIMER();
				GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_396)
				{
					GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
					GlobalFunc_10693(&uLocal_43, Local_111.f_9, 0, 0, 1, 1, 1);
					if (Local_111.f_10 == 13 || Local_111.f_10 == 14)
					{
						if (iLocal_422 == -1)
						{
							iLocal_422 = MISC::GET_GAME_TIMER();
						}
						if (iLocal_421 == -1)
						{
							iLocal_421 = MISC::GET_GAME_TIMER();
						}
						else if (GlobalFunc_2311(iLocal_421, 8000))
						{
							bVar0 = true;
						}
						if (GlobalFunc_7093(Local_111.f_9, Local_627, bVar0, 0, 1, iLocal_425))
						{
							if ((GlobalFunc_2311(iLocal_422, 5000) || GlobalFunc_100(Local_676, 0f, 0f, 0f)) || (!GlobalFunc_1986(Var1, Local_676, 8.5f) && !GlobalFunc_1986(Var1, Local_673, 8.5f)))
							{
								func_312();
								Local_111.f_17 = MISC::GET_GAME_TIMER();
								GlobalFunc_4948(&uLocal_43, 0, 0);
								iLocal_396 = 1;
							}
						}
						else
						{
							if (!iLocal_367)
							{
								if (!GlobalFunc_2311(iLocal_409, 2500))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_775(Local_111.f_9, Local_627, 30f))
										{
											if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_J7", 4, 0, 0, 0))
											{
												iLocal_409 = MISC::GET_GAME_TIMER();
												iLocal_367 = 1;
											}
										}
									}
								}
								else
								{
									iLocal_367 = 1;
								}
							}
							else if (!GlobalFunc_111())
							{
								if (GlobalFunc_2311(iLocal_409, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
								{
									if (GlobalFunc_775(Local_111.f_9, Local_627, 30f))
									{
										if (PED::IS_PED_FLEEING(Local_111.f_9))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 101) < 30)
											{
												if (GlobalFunc_10865(&uLocal_446, cLocal_440, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_409 = MISC::GET_GAME_TIMER();
												}
											}
											else if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_FLEE", 4, 0, 0, 0))
											{
												iLocal_409 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else
							{
								iLocal_409 = MISC::GET_GAME_TIMER();
							}
							GlobalFunc_2317(Local_111.f_9, Local_627, iLocal_422, 925353388);
						}
					}
					else
					{
						func_312();
						Local_111.f_17 = MISC::GET_GAME_TIMER();
						GlobalFunc_4948(&uLocal_43, 0, 0);
						iLocal_396 = 1;
					}
				}
				else
				{
					func_312();
					if (!GlobalFunc_775(Local_111.f_9, Local_627, 10f))
					{
						if (!iLocal_386)
						{
							if (!GlobalFunc_5710(sLocal_434, 1))
							{
								GlobalFunc_5709(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_412, &iLocal_413, 1, 1);
								iLocal_386 = 1;
							}
						}
						else
						{
							GlobalFunc_5713(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_412, iLocal_413, 1);
						}
					}
					else
					{
						if (!iLocal_368)
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
								if (GlobalFunc_10865(&uLocal_446, cLocal_439, sLocal_434, 4, 0, 0, 0))
								{
									iLocal_368 = 1;
								}
							}
						}
						else if (!GlobalFunc_111())
						{
							iLocal_99 = 2;
						}
						GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
					}
					if (GlobalFunc_7092(&(Local_111.f_9)))
					{
						iLocal_401 = 1;
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
				iLocal_368 = 1;
				func_312();
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_611);
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_611, 1862763509);
				GlobalFunc_846(&(Local_111.f_8));
				iLocal_368 = 1;
				Local_111.f_17 = MISC::GET_GAME_TIMER();
				GlobalFunc_4948(&uLocal_43, 0, 0);
				iLocal_397 = 0;
				iLocal_401 = 0;
				func_122(3);
				break;
			}
	}
}











void func_312()//Position - 0x2450C
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		if (((Local_111.f_10 != 23 && Local_111.f_10 != 24) && Local_111.f_10 != 21) && Local_111.f_10 != 22)
		{
			PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_611);
			PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_611, 1862763509);
			if (PED::IS_PED_IN_GROUP(Local_111.f_9))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_111.f_9);
			}
			TASK::CLEAR_PED_SECONDARY_TASK(Local_111.f_9);
			TASK::CLEAR_PED_TASKS(Local_111.f_9);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_111.f_9, 0);
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
			iLocal_428 = MISC::GET_GAME_TIMER();
			Local_111.f_10 = 23;
		}
	}
}



























void func_339(int iParam0)//Position - 0x2571D
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0, iLocal_611);
	PED::SET_PED_CONFIG_FLAG(iParam0, 177, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 116, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, 1);
	PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iParam0, 10f, 5);
	PED::SET_PED_AS_ENEMY(iParam0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
}


void func_341()//Position - 0x25849
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		if (iLocal_131 == 0)
		{
			GlobalFunc_2323(&(Local_111.f_9), &bLocal_402);
			if (GlobalFunc_5714())
			{
				if (iLocal_396 || iLocal_97 == 7)
				{
					if (bLocal_402)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(Local_111.f_9, GlobalFunc_2322(), 1048576000);
						iLocal_131 = 2;
					}
					else
					{
						PED::SET_PED_MOVEMENT_CLIPSET(Local_111.f_9, GlobalFunc_2321(), 1048576000);
						iLocal_131 = 1;
					}
				}
			}
		}
		else if (iLocal_131 == 1)
		{
			GlobalFunc_2323(&(Local_111.f_9), &bLocal_402);
			if (bLocal_402)
			{
				if (GlobalFunc_5714())
				{
					PED::SET_PED_MOVEMENT_CLIPSET(Local_111.f_9, GlobalFunc_2322(), 1048576000);
					iLocal_131 = 2;
				}
			}
		}
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_111.f_10)
			{
				case 0:
					if (GlobalFunc_775(Local_111.f_9, Local_627, 30f))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_111.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 3))
						{
							ENTITY::STOP_ENTITY_ANIM(Local_111.f_9, "prem_producer_argue_a", "ODDJOBS@BAILBOND_QUARRY", -2f);
						}
						Local_111.f_10 = 1;
					}
					break;
				
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_111.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 3))
					{
						func_36(&Local_284, 1);
						if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_111.f_9))
						{
							TASK::TASK_START_SCENARIO_IN_PLACE(Local_111.f_9, "WORLD_HUMAN_SMOKING", 0, 1);
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_111.f_9);
						}
						Local_111.f_10 = 2;
					}
					break;
				
				case 2:
					if (GlobalFunc_775(Local_111.f_9, Local_627, 20f))
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
					if (!GlobalFunc_775(Local_111.f_9, Local_627, 3.5f))
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
						TASK::OPEN_SEQUENCE_TASK(&uLocal_431);
						TASK::TASK_GOTO_ENTITY_AIMING(0, PLAYER::PLAYER_PED_ID(), uVar3, 30f);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_431);
						TASK::TASK_PERFORM_SEQUENCE(Local_111.f_9, uLocal_431);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_431);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
					}
					break;
				
				case 31:
					if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 750)))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 0, 1);
						PED::SET_PED_COMBAT_RANGE(Local_111.f_9, 0);
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
						Local_111.f_10 = 32;
					}
					break;
				
				case 32:
					if (!GlobalFunc_6964(Local_111.f_9, 780511057))
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_111.f_10 = 31;
					}
					break;
				
				case 13:
					if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(0, 500)))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_111.f_9))
						{
							PED::SET_PED_PANIC_EXIT_SCENARIO(Local_111.f_9, Local_627);
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
						TASK::OPEN_SEQUENCE_TASK(&uLocal_431);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_431);
						TASK::TASK_PERFORM_SEQUENCE(Local_111.f_9, uLocal_431);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_431);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
						PED::SET_PED_KEEP_TASK(Local_111.f_9, 1);
						Local_111.f_10 = 14;
					}
					break;
				
				case 14:
					if (!GlobalFunc_6964(Local_111.f_9, 1805844857) && !PED::IS_PED_FLEEING(Local_111.f_9))
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_111.f_10 = 13;
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
					PED::SET_PED_RESET_FLAG(Local_111.f_9, 237, 1);
					if (GlobalFunc_4947(Local_247[0 /*6*/]))
					{
						if (((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_247[0 /*6*/], 0) && GlobalFunc_775(Local_247[0 /*6*/], Local_247[0 /*6*/].f_1, 3f)) && GlobalFunc_2320(ENTITY::GET_ENTITY_HEADING(Local_247[0 /*6*/]), Local_247[0 /*6*/].f_4, 20f)) && !func_347(Local_247[0 /*6*/], 2))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_111.f_9, Local_247[0 /*6*/], 0) && !PED::IS_PED_BEING_JACKED(Local_111.f_9))
							{
								Local_111.f_10 = 16;
							}
							else if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 350)))
							{
								func_36(&Local_284, 0);
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_111.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 3))
								{
									ENTITY::STOP_ENTITY_ANIM(Local_111.f_9, "prem_producer_argue_a", "ODDJOBS@BAILBOND_QUARRY", -4f);
								}
								else if (PED::IS_PED_USING_ANY_SCENARIO(Local_111.f_9))
								{
									PED::SET_PED_PANIC_EXIT_SCENARIO(Local_111.f_9, Local_627);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(Local_111.f_9);
								}
								TASK::TASK_ENTER_VEHICLE(Local_111.f_9, Local_247[0 /*6*/], 25000, -1, 3f, 8388608, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
								Local_111.f_10 = 16;
							}
						}
						else
						{
							Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
							Local_111.f_10 = 13;
						}
					}
					else
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_111.f_10 = 13;
					}
					break;
				
				case 16:
					PED::SET_PED_RESET_FLAG(Local_111.f_9, 237, 1);
					if (!GlobalFunc_4947(Local_247[0 /*6*/]))
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_111.f_10 = 13;
					}
					else if ((((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_247[0 /*6*/], 1) || PED::IS_PED_BEING_JACKED(Local_111.f_9)) || !GlobalFunc_775(Local_247[0 /*6*/], Local_247[0 /*6*/].f_1, 3f)) || !GlobalFunc_2320(ENTITY::GET_ENTITY_HEADING(Local_247[0 /*6*/]), Local_247[0 /*6*/].f_4, 20f)) || func_347(Local_247[0 /*6*/], 2))
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_111.f_10 = 13;
					}
					else if (PED::IS_PED_SITTING_IN_VEHICLE(Local_111.f_9, Local_247[0 /*6*/]))
					{
						Local_111.f_10 = 33;
					}
					else if (!GlobalFunc_6964(Local_111.f_9, -1794415470))
					{
						Local_111.f_10 = 15;
					}
					break;
				
				case 17:
					if (GlobalFunc_4947(Local_247[0 /*6*/]) && PED::IS_PED_SITTING_IN_VEHICLE(Local_111.f_9, Local_247[0 /*6*/]))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_111.f_9, Local_247[0 /*6*/], PLAYER::PLAYER_PED_ID(), 8, 30f, 786468, 350f, 30f, 1);
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
					if (func_346(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_345())
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
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
						Local_111.f_10 = 22;
					}
					break;
				
				case 22:
					if (func_346(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_345())
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
									if (fVar4 < 1.75f && GlobalFunc_775(Local_111.f_9, Local_627, 8f))
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
					if (func_346(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_345())
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
							if ((!GlobalFunc_2319(Local_111.f_19, 10) && GlobalFunc_775(Local_111.f_9, Local_627, 50f)) || !GlobalFunc_2311(iLocal_428, 2000))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(Local_111.f_9, 0, 0);
								}
								else if (((!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_111.f_9)) && !func_345()) || ENTITY::IS_ENTITY_IN_WATER(Local_111.f_9))
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
					else if (!iLocal_397)
					{
						Local_111.f_10 = 21;
					}
					else
					{
						Local_111.f_10 = 25;
					}
					break;
				
				case 24:
					if (func_346(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_345())
					{
						if (!GlobalFunc_6964(Local_111.f_9, -1519143300))
						{
							if (!GlobalFunc_6964(Local_111.f_9, -875674219))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
								{
									if (!GlobalFunc_2319(Local_111.f_19, 10) && GlobalFunc_775(Local_111.f_9, Local_627, 50f))
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
							else if (!GlobalFunc_2319(Local_111.f_19, 10) && GlobalFunc_775(Local_111.f_9, Local_627, 50f))
							{
								if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_111.f_9)) || func_345())
								{
									Local_111.f_10 = 23;
								}
							}
						}
					}
					else if (!iLocal_397)
					{
						Local_111.f_10 = 21;
					}
					else
					{
						Local_111.f_10 = 25;
					}
					break;
				
				case 25:
					if (func_346(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0))
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
					if (func_346(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0))
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
				
				case 33:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
					iLocal_423 = MISC::GET_GAME_TIMER();
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_111.f_9, 1);
					Local_111.f_10 = 34;
					break;
				
				case 34:
					break;
				}
			}
	}
}




int func_345()//Position - 0x26B65
{
	if (!iLocal_368)
	{
		return 1;
	}
	if (GlobalFunc_5710(sLocal_434, 0))
	{
		return 1;
	}
	if (iLocal_97 != 3 && iLocal_97 != 6)
	{
		return 1;
	}
	if (TASK::IS_PED_GETTING_UP(Local_111.f_9) || PED::IS_PED_RAGDOLL(Local_111.f_9))
	{
		iLocal_428 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (!GlobalFunc_2311(iLocal_428, 2000))
	{
		return 1;
	}
	return 0;
}

int func_346(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, float fParam5, bool bParam6)//Position - 0x26BD2
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if (MISC::IS_BULLET_IN_AREA(Var0, fParam4, 1))
		{
			return 1;
		}
		if (GlobalFunc_775(iParam0, Local_627, fParam2))
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

int func_347(int iParam0, int iParam1)//Position - 0x26D88
{
	int iVar0;
	
	if (GlobalFunc_4947(iParam0))
	{
		iVar0 = 0;
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}






void func_353(int iParam0, var uParam1, float fParam2, int iParam3)//Position - 0x26E6C
{
	if (GlobalFunc_115(iParam0))
	{
		if (func_354(iParam0, PLAYER::PLAYER_PED_ID(), fParam2, 1, 250, iParam3))
		{
			*uParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

bool func_354(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x26E98
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_360(iParam0, iParam1);
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
		iVar4 = func_357();
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



int func_357()//Position - 0x2714A
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



int func_360(int iParam0, int iParam1)//Position - 0x27246
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

void func_361(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x27285
{
	if (GlobalFunc_115(iParam0))
	{
		if (func_354(PLAYER::PLAYER_PED_ID(), iParam0, fParam2, 1, 250, iParam3))
		{
			*iParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

void func_362()//Position - 0x272B1
{
	if (GlobalFunc_1986(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_624, 100f))
	{
		if (!GlobalFunc_2233())
		{
			CUTSCENE::REQUEST_CUTSCENE(&cLocal_618, 8);
			func_64();
			iLocal_400 = 1;
		}
	}
	else if (iLocal_400)
	{
		if (!GlobalFunc_1986(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_624, 120f))
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_400 = 0;
			}
		}
		else
		{
			func_64();
		}
	}
	if (iLocal_400)
	{
		if (GlobalFunc_2233())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_400 = 0;
		}
	}
}


void func_364()//Position - 0x27347
{
	func_35();
	func_362();
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		func_361(Local_111.f_9, &iLocal_420, 1126825984, 7);
		func_353(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_341();
		switch (iLocal_99)
		{
			case 0:
				GlobalFunc_4935();
				iLocal_370 = 0;
				iLocal_388 = 0;
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_397)
				{
					if (GlobalFunc_663("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					GlobalFunc_846(&(Local_111.f_8));
					if (!GlobalFunc_775(Local_111.f_9, Local_627, 25f))
					{
						if (Local_111.f_10 == 21 || Local_111.f_10 == 22)
						{
							Local_111.f_18 = MISC::GET_GAME_TIMER();
							Local_111.f_10 = 25;
						}
						if (GlobalFunc_2319(iLocal_420, 10))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_2319(iLocal_420, 10))
								{
									if (GlobalFunc_10865(&uLocal_446, cLocal_440, "BBC_T9", 4, 0, 0, 0))
									{
										iLocal_409 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						iLocal_397 = 1;
					}
					else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						if (GlobalFunc_663("BBS_COPS", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("BBS_COPS");
						}
						iLocal_370 = 1;
						if (!GlobalFunc_111())
						{
							iLocal_99 = 2;
						}
					}
					else if (!iLocal_369)
					{
						if (!GlobalFunc_5710(sLocal_434, 1))
						{
							if (GlobalFunc_10865(&uLocal_446, cLocal_440, "BBC_T5", 4, 0, 0, 0))
							{
								iLocal_369 = 1;
							}
						}
					}
					else if (!iLocal_388)
					{
						if (!GlobalFunc_663("BBS_COPS", 0, 0))
						{
							GlobalFunc_164("BBS_COPS", 7500, 0);
							iLocal_388 = 1;
						}
						else
						{
							func_365();
						}
					}
					else
					{
						func_365();
					}
				}
				else if (GlobalFunc_775(Local_111.f_9, Local_627, 8f))
				{
					if (Local_111.f_10 == 25 || Local_111.f_10 == 26)
					{
						Local_111.f_18 = MISC::GET_GAME_TIMER();
						Local_111.f_10 = 21;
					}
					iLocal_388 = 0;
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
								if (GlobalFunc_10865(&uLocal_446, cLocal_440, "BBC_T10", 4, 0, 0, 0))
								{
									iLocal_409 = MISC::GET_GAME_TIMER();
								}
							}
							else if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_J5", 4, 0, 0, 0))
							{
								iLocal_409 = MISC::GET_GAME_TIMER();
							}
						}
					}
					iLocal_397 = 0;
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
					if (!iLocal_389)
					{
						GlobalFunc_164("BBS_05", 7500, 1);
						iLocal_389 = 1;
					}
				}
				if (GlobalFunc_7092(&(Local_111.f_9)))
				{
					iLocal_401 = 1;
					iLocal_99 = 2;
				}
				break;
			
			case 2:
				if (GlobalFunc_663("BBS_05", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("BBS_05");
				}
				iLocal_370 = 1;
				GlobalFunc_846(&(Local_111.f_8));
				if (iLocal_401)
				{
					func_122(7);
				}
				else
				{
					if (GlobalFunc_663("BBS_COPS", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_COPS");
					}
					func_122(3);
				}
				break;
			}
	}
}

void func_365()//Position - 0x27657
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (HUD::IS_MESSAGE_BEING_DISPLAYED() && MISC::GET_PROFILE_SETTING(203) != 0)
	{
		iVar1 = 1;
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		if (GlobalFunc_111())
		{
			iLocal_409 = MISC::GET_GAME_TIMER();
		}
		if (!iLocal_377)
		{
			if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_J6", 4, 0, 0, 0))
			{
				iLocal_377 = 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0) && PED::GET_VEHICLE_PED_IS_IN(Local_111.f_9, 0) == iVar0)
			{
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!iLocal_395)
					{
						if (!GlobalFunc_111())
						{
							iLocal_408 = MISC::GET_GAME_TIMER();
							iLocal_395 = 1;
						}
					}
					else if (!iLocal_371[0])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_408) > 7500)
						{
							func_368(0);
						}
					}
					else if (!iLocal_371[1])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_408) > 10000)
						{
							func_368(1);
						}
					}
					else if (!iLocal_371[2])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_408) > 10000)
						{
							func_368(2);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iVar0) < 0.5f)
						{
							if (!iLocal_382)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_2311(iLocal_426, 3500))
									{
										if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_STOP", 4, 0, 0, 0))
										{
											iLocal_382 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_382)
						{
							if (!GlobalFunc_5710("BB1_STOP", 1))
							{
								iLocal_426 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							iLocal_426 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (!iLocal_370)
				{
					if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_J9", 4, 0, 0, 0))
					{
						iLocal_370 = 1;
					}
				}
			}
			else
			{
				if (!iLocal_390)
				{
					if (!GlobalFunc_7094())
					{
						GlobalFunc_159("BBS_VH1", -1);
						iLocal_390 = 1;
					}
				}
				iLocal_426 = MISC::GET_GAME_TIMER();
			}
			iLocal_378 = 0;
			iLocal_379 = 0;
		}
		else
		{
			iLocal_426 = MISC::GET_GAME_TIMER();
			iLocal_382 = 0;
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				if (!iLocal_378)
				{
					if (GlobalFunc_7094())
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
						{
							if (!GlobalFunc_5710("BBC_T6", 1))
							{
								if (GlobalFunc_10865(&uLocal_446, cLocal_440, "BBC_T6", 4, iVar1, 0, 0))
								{
									iLocal_378 = 1;
								}
							}
						}
						GlobalFunc_5716("BBS_VH1", 1);
					}
					else if (!GlobalFunc_5710("BBC_T8", 1) && !GlobalFunc_5710("BB1_WTF", 1))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) < 5)
						{
							if (GlobalFunc_10865(&uLocal_446, cLocal_440, "BBC_T8", 4, iVar1, 0, 0))
							{
								iLocal_378 = 1;
							}
						}
						else if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_WTF", 4, iVar1, 0, 0))
						{
							iLocal_378 = 1;
						}
					}
				}
				else if (!iLocal_381)
				{
					if (GlobalFunc_7095(&iVar0))
					{
						if ((!GlobalFunc_5710("BB1_JACK", 1) && !GlobalFunc_5710("BBC_T6", 1)) && !GlobalFunc_5710("BBC_T8", 1))
						{
							if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_JACK", 4, iVar1, 0, 0))
							{
								iLocal_381 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_378 = 0;
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
				{
					if (!iLocal_379)
					{
						if (!GlobalFunc_5710("BBC_T7", 1) && !GlobalFunc_5710("BB1_OUT", 1))
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) < 5)
							{
								if (GlobalFunc_10865(&uLocal_446, cLocal_440, "BBC_T7", 4, iVar1, 0, 0))
								{
									iLocal_379 = 1;
								}
							}
							else if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_OUT", 4, iVar1, 0, 0))
							{
								iLocal_379 = 1;
							}
						}
					}
				}
				else if (Local_111.f_10 == 24 && GlobalFunc_6964(Local_111.f_9, -1519143300))
				{
					if (GlobalFunc_775(Local_111.f_9, Local_627, 25f))
					{
						if (!GlobalFunc_5710("BB1_J10", 1))
						{
							if (GlobalFunc_2311(iLocal_410, MISC::GET_RANDOM_INT_IN_RANGE(2500, 5000)))
							{
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_J10", 4, 0, 0, 0))
								{
									iLocal_410 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else
						{
							iLocal_410 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					iLocal_410 = 0;
					if (!iLocal_370)
					{
						if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_J9", 4, 0, 0, 0))
						{
							iLocal_409 = MISC::GET_GAME_TIMER();
							iLocal_370 = 1;
						}
					}
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_2311(iLocal_409, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000)))
						{
							if (!GlobalFunc_775(Local_111.f_9, Local_627, 20f))
							{
								if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_J4", 4, 0, 0, 0))
								{
									iLocal_409 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
		}
	}
}



void func_368(int iParam0)//Position - 0x27B23
{
	if (!iLocal_371[iParam0])
	{
		if (GlobalFunc_10865(&uLocal_446, cLocal_439, sLocal_435[iParam0], 4, 0, 0, 0))
		{
			iLocal_371[iParam0] = 1;
			iLocal_395 = 0;
			iLocal_408 = 0;
			iLocal_377 = 1;
		}
	}
}

void func_369()//Position - 0x27B62
{
	func_35();
	func_362();
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		func_361(Local_111.f_9, &iLocal_420, 1126825984, 7);
		func_353(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_341();
		switch (iLocal_99)
		{
			case 0:
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_397)
				{
					if (GlobalFunc_663("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					GlobalFunc_846(&(Local_111.f_8));
					if (!GlobalFunc_775(Local_111.f_9, Local_627, 25f))
					{
						if (Local_111.f_10 == 21 || Local_111.f_10 == 22)
						{
							Local_111.f_18 = MISC::GET_GAME_TIMER();
							Local_111.f_10 = 25;
						}
						if (GlobalFunc_2319(iLocal_420, 10))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_2319(iLocal_420, 10))
								{
									if (GlobalFunc_10865(&uLocal_446, cLocal_440, "BBC_T9", 4, 0, 0, 0))
									{
										iLocal_409 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						iLocal_369 = 1;
						iLocal_397 = 1;
					}
					else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
						iLocal_369 = 1;
						iLocal_99 = 2;
					}
					else
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_403))
						{
							if (iLocal_385)
							{
								uLocal_403 = GlobalFunc_2324(Local_624, 5, 1);
							}
						}
						if (!iLocal_369)
						{
							if (!GlobalFunc_5710(sLocal_434, 1))
							{
								if (GlobalFunc_10865(&uLocal_446, cLocal_440, "BBC_T5", 4, 0, 0, 0))
								{
									iLocal_369 = 1;
								}
							}
						}
						else if (!iLocal_385)
						{
							if (!GlobalFunc_111())
							{
								GlobalFunc_164("BBS_DROP", 7500, 0);
								iLocal_409 = MISC::GET_GAME_TIMER();
								iLocal_385 = 1;
							}
						}
						else
						{
							func_365();
							GlobalFunc_7096(&Local_335, Local_627, &iLocal_411, 5000, 1101004800);
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_624, 4f, 4f, 2f, 1, 1, 0))
						{
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2732.815f, 4143.618f, 42.02822f, 2724.603f, 4144.803f, 46.33084f, 9f, 0, 1, 0))
						{
							iLocal_99 = 2;
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_624, 6.5f))
							{
								iLocal_99 = 2;
							}
						}
						else if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_624, 2.5f))
						{
							iLocal_99 = 2;
						}
					}
				}
				else
				{
					GlobalFunc_846(&uLocal_403);
					if (GlobalFunc_663("BBS_DROP", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_DROP");
					}
					if (GlobalFunc_775(Local_111.f_9, Local_627, 8f))
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
									if (GlobalFunc_10865(&uLocal_446, cLocal_440, "BBC_T10", 4, 0, 0, 0))
									{
										iLocal_409 = MISC::GET_GAME_TIMER();
									}
								}
								else if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_J5", 4, 0, 0, 0))
								{
									iLocal_409 = MISC::GET_GAME_TIMER();
								}
							}
						}
						iLocal_397 = 0;
					}
					else
					{
						if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
						{
							Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 1, 5);
						}
						if (!iLocal_389)
						{
							GlobalFunc_164("BBS_05", 7500, 1);
							iLocal_389 = 1;
						}
					}
				}
				if (!bLocal_394)
				{
					bLocal_394 = func_370(Local_627, Local_102, 180f);
				}
				if (GlobalFunc_7092(&(Local_111.f_9)))
				{
					iLocal_401 = 1;
					iLocal_99 = 2;
				}
				break;
			
			case 2:
				GlobalFunc_846(&uLocal_403);
				if (GlobalFunc_663("BBS_DROP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("BBS_DROP");
				}
				if (iLocal_401)
				{
					func_122(7);
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_122(6);
				}
				else
				{
					GlobalFunc_846(&(Local_111.f_8));
					if (GlobalFunc_663("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					if (!bLocal_394)
					{
						bLocal_394 = func_370(Local_627, Local_102, 0f);
					}
					func_122(4);
				}
				break;
			}
	}
}

int func_370(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x27F5C
{
	int iVar0;
	
	if (!GlobalFunc_497(Param0, Param3, fParam6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		if (iLocal_419 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_419 - 1))
			{
				GlobalFunc_2297(&(Local_132[iVar0 /*19*/]), 1, 0, 1);
				iVar0++;
			}
		}
		if (iLocal_415 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_415 - 1))
			{
				GlobalFunc_131(&(Local_247[iVar0 /*6*/]));
				iVar0++;
			}
		}
		GlobalFunc_2295(&Local_284, 0);
		if (iLocal_414 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_414 - 1))
			{
				GlobalFunc_2295(&(Local_290[iVar0 /*9*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_417 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_417 - 1))
			{
				GlobalFunc_841(&(Local_327[iVar0 /*7*/]));
				iVar0++;
			}
		}
	}
	return 0;
}





void func_375()//Position - 0x2814E
{
	bool bVar0;
	
	bVar0 = false;
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		func_361(Local_111.f_9, &iLocal_420, 1126825984, 7);
		func_353(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_341();
		switch (iLocal_99)
		{
			case 0:
				if (Local_111.f_10 != 15 && Local_111.f_10 != 16)
				{
					Local_111.f_18 = MISC::GET_GAME_TIMER();
					Local_111.f_10 = 15;
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
					{
						Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 0, 5);
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_111.f_9);
				}
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_396)
				{
					GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
					GlobalFunc_10693(&uLocal_43, Local_111.f_9, 0, 0, 1, 1, 1);
					if (Local_111.f_10 == 13 || Local_111.f_10 == 14)
					{
						if (iLocal_422 == -1)
						{
							iLocal_422 = MISC::GET_GAME_TIMER();
						}
						if (iLocal_421 == -1)
						{
							iLocal_421 = MISC::GET_GAME_TIMER();
						}
						else if (GlobalFunc_2311(iLocal_421, 5000))
						{
							bVar0 = true;
						}
						if (GlobalFunc_7093(Local_111.f_9, Local_627, bVar0, 0, 1, 170))
						{
							func_312();
							Local_111.f_17 = MISC::GET_GAME_TIMER();
							GlobalFunc_4948(&uLocal_43, 0, 0);
							iLocal_396 = 1;
						}
						else
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_2311(iLocal_409, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
								{
									if (GlobalFunc_775(Local_111.f_9, Local_627, 30f))
									{
										if (PED::IS_PED_FLEEING(Local_111.f_9))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 101) < 30)
											{
												if (GlobalFunc_10865(&uLocal_446, cLocal_440, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_409 = MISC::GET_GAME_TIMER();
												}
											}
											else if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_FLEE", 4, 0, 0, 0))
											{
												iLocal_409 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else
							{
								iLocal_409 = MISC::GET_GAME_TIMER();
							}
							GlobalFunc_2317(Local_111.f_9, Local_627, iLocal_422, 925353388);
						}
					}
					else
					{
						if (Local_111.f_10 == 15 || Local_111.f_10 == 16)
						{
							if (!iLocal_367)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_775(Local_111.f_9, Local_627, 30f))
									{
										if (GlobalFunc_10865(&uLocal_446, cLocal_439, sLocal_433, 4, 0, 0, 0))
										{
											Local_111.f_17 = MISC::GET_GAME_TIMER();
											iLocal_409 = MISC::GET_GAME_TIMER();
											iLocal_367 = 1;
										}
									}
								}
							}
							if (GlobalFunc_7093(Local_111.f_9, Local_627, bVar0, 0, 1, 170))
							{
								func_312();
								Local_111.f_17 = MISC::GET_GAME_TIMER();
								GlobalFunc_4948(&uLocal_43, 0, 0);
								iLocal_396 = 1;
							}
						}
						if (GlobalFunc_4947(Local_247[0 /*6*/]))
						{
							if ((Local_111.f_10 == 34 || Local_111.f_10 == 17) || Local_111.f_10 == 18)
							{
								if (func_380(Local_111.f_9, Local_247[0 /*6*/], &iLocal_423, 2))
								{
									if (!GlobalFunc_111())
									{
										func_312();
										Local_111.f_17 = MISC::GET_GAME_TIMER();
										GlobalFunc_4948(&uLocal_43, 0, 0);
										iLocal_396 = 1;
									}
								}
								else
								{
									if (func_379(Local_111.f_9, Local_247[0 /*6*/], Local_247[0 /*6*/].f_5, &Local_630, &iLocal_407, iLocal_418))
									{
										if (Local_111.f_10 == 34)
										{
											Local_111.f_10 = 17;
										}
									}
									GlobalFunc_2216(Local_111.f_8, Local_111.f_9, 150f, 0.65f, 0);
									func_377(Local_111.f_9, Local_247[0 /*6*/], Local_627);
								}
							}
						}
						else
						{
							func_312();
							Local_111.f_17 = MISC::GET_GAME_TIMER();
							GlobalFunc_4948(&uLocal_43, 0, 0);
							iLocal_396 = 1;
						}
					}
				}
				else
				{
					func_312();
					if (!GlobalFunc_775(Local_111.f_9, Local_627, 10f))
					{
						if (!iLocal_386)
						{
							if (!GlobalFunc_5710(sLocal_434, 1))
							{
								GlobalFunc_5709(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_412, &iLocal_413, 1, 1);
								iLocal_386 = 1;
							}
						}
						else
						{
							GlobalFunc_5713(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_412, iLocal_413, 1);
						}
					}
					else
					{
						if (!iLocal_368)
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
								if (GlobalFunc_10865(&uLocal_446, cLocal_439, sLocal_434, 4, 0, 0, 0))
								{
									iLocal_368 = 1;
								}
							}
						}
						else if (!GlobalFunc_111())
						{
							iLocal_99 = 2;
						}
						GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
					}
					if (GlobalFunc_7092(&(Local_111.f_9)))
					{
						iLocal_401 = 1;
						iLocal_99 = 2;
					}
				}
				break;
			
			case 2:
				if (GlobalFunc_663("BBS_APPSUS", 0, 0) || GlobalFunc_663("BBS_APPSUS2", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				MISC::SET_INSTANCE_PRIORITY_HINT(0);
				iLocal_368 = 1;
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_611);
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_611, 1862763509);
				GlobalFunc_846(&(Local_111.f_8));
				func_312();
				Local_111.f_17 = MISC::GET_GAME_TIMER();
				GlobalFunc_4948(&uLocal_43, 0, 0);
				GlobalFunc_2325(1, &uLocal_430);
				if (iLocal_401)
				{
					func_122(7);
				}
				else
				{
					func_122(3);
				}
				break;
			}
	}
}


void func_377(int iParam0, int iParam1, struct<3> Param2)//Position - 0x28739
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar1 = 64f;
	fVar2 = 1600f;
	fVar3 = 4900f;
	fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param2);
	if (fVar4 > fVar3 && !ENTITY::IS_ENTITY_ON_SCREEN(iParam1))
	{
		fVar0 = 12f;
	}
	else if (fVar4 > fVar2)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			fVar0 = 10f;
		}
		else
		{
			fVar0 = 18f;
		}
	}
	else if (fVar4 < fVar1)
	{
		fVar0 = 28f;
	}
	else
	{
		fVar0 = 22f;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1) == iParam0)
	{
		TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0, fVar0);
	}
}


int func_379(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x28934
{
	if (iLocal_407 >= iParam5)
	{
		return 1;
	}
	if (!GlobalFunc_775(iParam1, *(uParam3[*iParam4 /*3*/]), 15f))
	{
		if (!GlobalFunc_6964(iParam0, -1817882002) && !GlobalFunc_6964(iParam0, -72074166))
		{
			if (iLocal_407 < 7)
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 0, uParam2, 786468, 0f, 2f);
			}
			else
			{
				TASK::TASK_VEHICLE_GOTO_NAVMESH(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 4980772, 0f);
			}
		}
	}
	else
	{
		*iParam4++;
		if (iLocal_407 >= iParam5)
		{
			return 1;
		}
		else if (iLocal_407 < 7)
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 0, uParam2, 786468, 0f, 2f);
		}
		else
		{
			TASK::TASK_VEHICLE_GOTO_NAVMESH(iParam0, iParam1, *(uParam3[*iParam4 /*3*/]), 35f, 4980772, 0f);
		}
	}
	return 0;
}

int func_380(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x28A23
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		if (GlobalFunc_4947(iParam1))
		{
			if (func_347(iParam1, iParam3))
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(iParam0, iParam1, 4, 2000);
				return (1 || ENTITY::GET_ENTITY_HEALTH(iParam1) < 150);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, 0, 1);
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam1) > 100f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam1, 100f);
				}
				VEHICLE::SET_VEHICLE_UNDRIVEABLE(iParam1, 1);
				return 1;
			}
			else if (!PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0))
			{
				return 1;
			}
			else if (PED::IS_PED_BEING_STUNNED(iParam0, 0))
			{
				return 1;
			}
			else if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam1, 2, 10000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam1, 3, 20000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam1, 0, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam1, 1, 10000))
			{
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_STOPPED(iParam1))
			{
				if (GlobalFunc_2311(*iParam2, 3500))
				{
					return 1;
				}
			}
			else
			{
				*iParam2 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_381()//Position - 0x28B29
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		func_361(Local_111.f_9, &iLocal_420, 1126825984, 1);
		func_353(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_341();
		switch (iLocal_99)
		{
			case 0:
				if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
				{
					Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 0, 5);
				}
				GlobalFunc_5709(&(Local_111.f_8), "", "", &iLocal_412, &iLocal_413, 1, 0);
				iLocal_99 = 1;
				break;
			
			case 1:
				switch (iLocal_100)
				{
					case 2:
						if (!iLocal_376)
						{
							if (GlobalFunc_111())
							{
								GlobalFunc_4956();
							}
							if (GlobalFunc_10865(&uLocal_446, cLocal_440, "BBC_T14", 4, 0, 0, 0))
							{
								Local_111.f_17 = MISC::GET_GAME_TIMER();
								iLocal_376 = 1;
							}
							GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
						}
						else if (!iLocal_387)
						{
							if (!GlobalFunc_5710("BBC_T14", 1))
							{
								GlobalFunc_5709(&(Local_111.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_412, &iLocal_413, 1, 1);
								iLocal_387 = 1;
							}
						}
						else
						{
							GlobalFunc_5713(&(Local_111.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_412, iLocal_413, 1);
							if (GlobalFunc_775(Local_111.f_9, Local_627, 25f) && GlobalFunc_2326(Local_111.f_9, Local_627, 10f))
							{
								if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (GlobalFunc_5717(&(Local_111.f_19)))
									{
										iLocal_100 = 1;
										iLocal_380 = 0;
										if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
										{
											Local_111.f_18 = (MISC::GET_GAME_TIMER() - 50000);
											Local_111.f_10 = 3;
										}
									}
									else if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_111.f_9))
									{
										iLocal_100 = 1;
										iLocal_380 = 0;
										if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
										{
											Local_111.f_18 = (MISC::GET_GAME_TIMER() - 50000);
											Local_111.f_10 = 3;
										}
									}
								}
								else if (func_382(Local_111.f_9, iLocal_420, 0, 1103626240, 1086324736))
								{
									iLocal_100 = 0;
								}
								else if (GlobalFunc_775(Local_111.f_9, Local_627, 5f))
								{
									iLocal_100 = 0;
								}
								else if (GlobalFunc_5717(&(Local_111.f_19)))
								{
									if (GlobalFunc_775(Local_111.f_9, Local_627, (25f - 1.5f)))
									{
										iLocal_100 = 1;
										iLocal_380 = 0;
										if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
										{
											Local_111.f_18 = (MISC::GET_GAME_TIMER() - 50000);
											Local_111.f_10 = 3;
										}
									}
								}
							}
						}
						if (func_346(Local_111.f_9, Local_111.f_19, 25f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_99 = 2;
						}
						break;
					
					case 0:
					case 1:
						if (!iLocal_380)
						{
							if (GlobalFunc_663("BBS_APHEND", 0, 0) || GlobalFunc_663("BBS_APHEND2", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (GlobalFunc_111())
							{
								GlobalFunc_4956();
							}
							if (GlobalFunc_10865(&uLocal_446, cLocal_439, "BB1_J2", 4, 0, 0, 0))
							{
								Local_111.f_17 = MISC::GET_GAME_TIMER();
								iLocal_409 = MISC::GET_GAME_TIMER();
								iLocal_380 = 1;
							}
							GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
						}
						else if (!iLocal_375)
						{
							if (!GlobalFunc_5710("BBC_T14", 1) && !GlobalFunc_5710("BB1_J2", 1))
							{
								if (GlobalFunc_663("BBS_APHEND", 0, 0) || GlobalFunc_663("BBS_APHEND2", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								if (GlobalFunc_10865(&uLocal_446, cLocal_440, "BBC_T1", 4, 0, 0, 0))
								{
									Local_111.f_17 = MISC::GET_GAME_TIMER();
									iLocal_375 = 1;
								}
								else if (iLocal_100 == 1)
								{
									if (GlobalFunc_2311(iLocal_409, 1250))
									{
										Local_111.f_17 = (MISC::GET_GAME_TIMER() - 3000);
										iLocal_375 = 1;
									}
								}
							}
							else
							{
								iLocal_409 = MISC::GET_GAME_TIMER();
							}
							GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
						}
						else if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
						{
							if (GlobalFunc_2311(Local_111.f_17, 500))
							{
								Local_111.f_18 = MISC::GET_GAME_TIMER();
								Local_111.f_10 = 3;
								iLocal_99 = 2;
							}
						}
						else
						{
							iLocal_99 = 2;
						}
						if (func_346(Local_111.f_9, Local_111.f_19, 25f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_99 = 2;
						}
						break;
					
					case 3:
						GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
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
				GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_412, iLocal_413, 0);
				iLocal_412 = MISC::GET_GAME_TIMER();
				iLocal_413 = MISC::GET_GAME_TIMER();
				func_122(2);
				break;
			}
	}
}

int func_382(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4)//Position - 0x29005
{
	if (GlobalFunc_115(iParam0))
	{
		if (!GlobalFunc_2319(iParam1, 10))
		{
			if (bParam2)
			{
				if (!GlobalFunc_775(Local_111.f_9, Local_627, fParam3))
				{
					return 0;
				}
				if (!GlobalFunc_2326(iParam0, Local_627, fParam4))
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



void func_385()//Position - 0x290B4
{
	switch (iLocal_99)
	{
		case 0:
			if (bLocal_391)
			{
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && !Global_96400)
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
			GlobalFunc_10866(&Local_102, &uLocal_446);
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
			{
				func_361(Local_111.f_9, &iLocal_420, 1126825984, 1);
				func_353(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
				func_341();
				if (GlobalFunc_775(Local_111.f_9, Local_627, 25f) && GlobalFunc_2326(Local_111.f_9, Local_627, 10f))
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
					else if (func_382(Local_111.f_9, iLocal_420, 0, 1103626240, 1086324736))
					{
						iLocal_100 = 0;
						iLocal_99 = 2;
					}
					else if (GlobalFunc_775(Local_111.f_9, Local_627, 5f))
					{
						iLocal_100 = 0;
						iLocal_99 = 2;
					}
					else if (GlobalFunc_5717(&(Local_111.f_19)))
					{
						if (GlobalFunc_775(Local_111.f_9, Local_627, (25f - 1.5f)))
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
				if (func_346(Local_111.f_9, Local_111.f_19, 25f, 0, 1090519040, 1097859072, 0))
				{
					iLocal_100 = 3;
					iLocal_99 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_100 == 3)
			{
				GlobalFunc_5709(&(Local_111.f_8), "", "", &iLocal_412, &iLocal_413, 1, 0);
				func_122(2);
			}
			else
			{
				if (iLocal_100 == 1)
				{
					iLocal_380 = 0;
					if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 50000);
						Local_111.f_10 = 3;
					}
				}
				func_122(1);
			}
			break;
	}
}







void func_392()//Position - 0x2957C
{
	if (bLocal_391)
	{
		if (((iLocal_97 != 9 && iLocal_97 != 4) && iLocal_97 != 5) && iLocal_97 != 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_9))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_111.f_9) || PED::IS_PED_INJURED(Local_111.f_9))
				{
					func_122(8);
				}
			}
		}
	}
}

void func_393()//Position - 0x295D8
{
	if (bLocal_391)
	{
		if ((iLocal_97 != 9 && iLocal_97 != 4) && iLocal_97 != 5)
		{
			func_394();
			if (iLocal_101 != 0)
			{
				if (iLocal_101 == 1)
				{
					Global_96065 = 0;
					func_517();
				}
				else
				{
					func_122(9);
				}
			}
		}
	}
}

void func_394()//Position - 0x29622
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_335))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_335) || PED::IS_PED_INJURED(Local_335))
		{
			iLocal_101 = 3;
			return;
		}
		if (iLocal_101 == 4)
		{
			return;
		}
		if (func_395(0))
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
		if (!SYSTEM::VDIST2(Local_627, Local_102) <= ((Local_102.f_3 + 25f) * (Local_102.f_3 + 25f)))
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
				if (!GlobalFunc_775(Local_111.f_9, Local_627, 150f))
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
				if (!GlobalFunc_775(Local_111.f_9, Local_627, 80f))
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

int func_395(bool bParam0)//Position - 0x2975F
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_335))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_335) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_335)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Local_335))
		{
			return 1;
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_335))
			{
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_343))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_343))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_355))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_355))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_349))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_349))
				{
					return 1;
				}
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(Local_335, 60))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(Local_335))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(Local_335, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(Local_335, 50))
		{
			return 1;
		}
		if (func_401(Local_335, 1126825984))
		{
			return 1;
		}
		if (GlobalFunc_8324(Local_335, 1, 0, 0, 0))
		{
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_335, 1), 15f))
		{
			return 1;
		}
		if (PED::HAS_PED_RECEIVED_EVENT(Local_335, 72))
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






int func_401(int iParam0, float fParam1)//Position - 0x29C29
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
				if (func_402(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_402(int iParam0, float fParam1)//Position - 0x29C9F
{
	return func_354(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}





void func_407(int iParam0, bool bParam1)//Position - 0x29D58
{
	func_417(bParam1, 1);
	if (bParam1)
	{
		func_408();
	}
	iLocal_98 = iParam0;
	bLocal_391 = false;
	if (GlobalFunc_188())
	{
		iLocal_392 = 1;
	}
	else
	{
		iLocal_392 = 0;
	}
	if (!GlobalFunc_188())
	{
		if (iLocal_98 == 0)
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_664, fLocal_404, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
				iLocal_392 = 1;
			}
		}
	}
	func_1(iLocal_98);
}

void func_408()//Position - 0x29DE7
{
	func_409(1, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!GlobalFunc_188())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_664, fLocal_404, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	GlobalFunc_4935();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_611);
	func_459();
	func_122(0);
}

void func_409(bool bParam0, bool bParam1)//Position - 0x29E59
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
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	GlobalFunc_695(1);
	if (iLocal_97 > 2)
	{
		GlobalFunc_2325(0, &uLocal_430);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_429, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	GlobalFunc_200(&uLocal_446, 2);
	GlobalFunc_200(&uLocal_446, 3);
	GlobalFunc_200(&uLocal_446, 4);
	GlobalFunc_4948(&uLocal_43, 0, 0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	MISC::SET_TIME_SCALE(1f);
	func_25(1, 1, 1, 1);
	CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	func_412(1, 1, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 1);
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	func_105();
	func_89(bParam0);
	func_410(bParam1);
}

void func_410(bool bParam0)//Position - 0x29F75
{
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	}
	STREAMING::REMOVE_ANIM_DICT(GlobalFunc_2310());
	STREAMING::REMOVE_ANIM_DICT("ODDJOBS@BAILBOND_QUARRY");
	GlobalFunc_5719();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_284.f_5);
}


void func_412(bool bParam0, int iParam1, int iParam2)//Position - 0x29FBC
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
			func_25(iParam1, iParam2, 1, 1);
		}
	}
}





void func_417(bool bParam0, bool bParam1)//Position - 0x2A191
{
	if (bParam0)
	{
		func_412(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_184(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}










































void func_459()//Position - 0x2ECB1
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_467();
	while ((!func_56(0) || !func_56(1)) || !func_56(2))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_611);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_611);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_611, 1862763509);
	Var0 = { GlobalFunc_2334(Local_102) };
	Var3 = { GlobalFunc_2333(Local_102) };
	PED::SET_PED_NON_CREATION_AREA(Var0, Var3);
	uLocal_429 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, 0, 1, 1, 1);
	MISC::CLEAR_AREA(Local_102, 30f, 0, 0, 0, 0);
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(4, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	PED::SET_CREATE_RANDOM_COPS(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	GlobalFunc_2331(1);
	while (!func_462())
	{
		SYSTEM::WAIT(0);
	}
	func_460();
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_173(&uLocal_446, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		GlobalFunc_173(&uLocal_446, 3, Local_111.f_9, sLocal_432, 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_111.f_9, 1);
	}
}

void func_460()//Position - 0x2EE02
{
	int iVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
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
		if (Local_111.f_12 != 0)
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_111.f_9, Local_111.f_12, -1, 1, 1);
		}
		func_339(Local_111.f_9);
		GlobalFunc_2332(Local_111.f_9, "TARGET_", 0);
		Local_111.f_10 = 0;
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_111.f_9);
		TASK::TASK_PLAY_ANIM(Local_111.f_9, "ODDJOBS@BAILBOND_QUARRY", "prem_producer_argue_a", 8f, -2f, -1, 1, 0, 0, 0, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(Local_284))
		{
			Local_284 = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing"), ENTITY::GET_ENTITY_COORDS(Local_111.f_9, 0), 1, 1, 0);
		}
		if (GlobalFunc_115(Local_284))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_284, Local_111.f_9, PED::GET_PED_BONE_INDEX(Local_111.f_9, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_132[iVar0 /*19*/]))
		{
			func_339(Local_132[iVar0 /*19*/]);
			if (Local_132[iVar0 /*19*/].f_5 != 0)
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_132[iVar0 /*19*/], Local_132[iVar0 /*19*/].f_5, -1, 1, 1);
			}
			PED::SET_PED_CONFIG_FLAG(Local_132[iVar0 /*19*/], 137, 1);
			GlobalFunc_2332(Local_132[iVar0 /*19*/], "BACKUP_", iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_415 - 1))
	{
		if (GlobalFunc_4947(Local_247[iVar0 /*6*/]))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_247[iVar0 /*6*/], 1, 1);
		}
		iVar0++;
	}
}


int func_462()//Position - 0x2EFFE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (GlobalFunc_5707(&(Local_111.f_9), Local_111.f_11, Local_111.f_13, Local_111.f_16, 1, 0, 0))
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
			iVar0++;
		}
	}
	if (iLocal_419 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_419 - 1))
		{
			if (GlobalFunc_5707(&(Local_132[iVar2 /*19*/]), Local_132[iVar2 /*19*/].f_18, Local_132[iVar2 /*19*/].f_1, Local_132[iVar2 /*19*/].f_4, 0, 0, 0))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_132[iVar2 /*19*/]))
				{
					iVar0++;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
	if (iVar1 == iLocal_419)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_419 - 1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_132[iVar2 /*19*/].f_18);
			iVar2++;
		}
	}
	if (iLocal_415 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_415 - 1))
		{
			if (GlobalFunc_7099(&(Local_247[iVar2 /*6*/]), Local_247[iVar2 /*6*/].f_5, Local_247[iVar2 /*6*/].f_1, Local_247[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_414 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_414 - 1))
		{
			if (GlobalFunc_5708(&(Local_290[iVar2 /*9*/]), Local_290[iVar2 /*9*/].f_8, Local_290[iVar2 /*9*/].f_1, Local_290[iVar2 /*9*/].f_7, 1))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_290[iVar2 /*9*/], 1);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_417 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_417 - 1))
		{
			if (GlobalFunc_5720(&(Local_327[iVar2 /*7*/]), Local_327[iVar2 /*7*/].f_5, Local_327[iVar2 /*7*/].f_2, Local_327[iVar2 /*7*/].f_6, Local_327[iVar2 /*7*/].f_1, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iVar0 == ((((iLocal_419 + iLocal_415) + iLocal_416) + iLocal_414) + iLocal_417) + 1)
	{
		return 1;
	}
	return 0;
}





void func_467()//Position - 0x2F3DB
{
	int iVar0;
	
	iVar0 = 0;
	iLocal_110 = 3;
	Local_111.f_11 = joaat("s_m_m_trucker_01");
	Local_111.f_13 = { 2945.036f, 2796.254f, 39.693f };
	Local_111.f_16 = 38.6771f;
	Local_111.f_12 = joaat("weapon_unarmed");
	Local_111.f_10 = 0;
	Local_111.f_17 = 0;
	Local_111.f_18 = 0;
	Local_111.f_19 = 0;
	func_9();
	iLocal_419 = 0;
	Local_247[0 /*6*/].f_5 = joaat("landstalker");
	Local_247[0 /*6*/].f_1 = { 2950.07f, 2796.39f, 40.35f };
	Local_247[0 /*6*/].f_4 = 338.45f;
	Local_247[1 /*6*/].f_5 = joaat("bjxl");
	Local_247[1 /*6*/].f_1 = { 2945.97f, 2790.77f, 40.37f };
	Local_247[1 /*6*/].f_4 = 28.22f;
	Local_284.f_5 = joaat("prop_phone_ing");
	iLocal_415 = 2;
	iLocal_416 = 0;
	iLocal_414 = 0;
	iLocal_417 = 0;
	Local_630[0 /*3*/] = { 2962.58f, 2817.19f, 42.29f };
	Local_630[1 /*3*/] = { 2942.482f, 2841.708f, 46.4443f };
	Local_630[2 /*3*/] = { 2909.12f, 2820.88f, 52.9f };
	Local_630[3 /*3*/] = { 2860.14f, 2816.9f, 52.56f };
	Local_630[4 /*3*/] = { 2821.638f, 2893.259f, 45.53f };
	Local_630[5 /*3*/] = { 2768.72f, 2950.61f, 39.78f };
	Local_630[6 /*3*/] = { 2712.31f, 2963.74f, 35.79f };
	Local_630[7 /*3*/] = { 2657.573f, 2981.731f, 38.9122f };
	Local_630[8 /*3*/] = { 2623.295f, 3077.358f, 46.24589f };
	iLocal_418 = 9;
	Local_664 = { 2883.023f, 2807.719f, 53.6941f };
	fLocal_404 = 256.3262f;
	Local_667 = { 2938.96f, 2783.275f, 38.5873f };
	fLocal_405 = 355.8176f;
	Local_670 = { 2947.246f, 2787.406f, 39.4516f };
	fLocal_406 = 306.625f;
	Local_673 = { 0f, 0f, 0f };
	Local_676 = { 0f, 0f, 0f };
	iLocal_100 = 4;
	iLocal_367 = 0;
	iLocal_368 = 0;
	iLocal_369 = 0;
	iLocal_377 = 1;
	iLocal_370 = 1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_371[iVar0] = 0;
		iVar0++;
	}
	iLocal_375 = 0;
	iLocal_376 = 0;
	iLocal_378 = 0;
	iLocal_379 = 0;
	iLocal_380 = 1;
	iLocal_381 = 0;
	iLocal_382 = 0;
	iLocal_385 = 0;
	iLocal_386 = 0;
	iLocal_387 = 0;
	iLocal_388 = 0;
	iLocal_389 = 0;
	iLocal_390 = 0;
	iLocal_393 = 0;
	bLocal_394 = false;
	iLocal_395 = 0;
	iLocal_396 = 0;
	iLocal_397 = 0;
	iLocal_398 = 1;
	iLocal_399 = 0;
	iLocal_400 = 0;
	iLocal_401 = 0;
	bLocal_402 = false;
	iLocal_383 = 1;
	bLocal_384 = false;
	iLocal_101 = 0;
	iLocal_408 = 0;
	iLocal_412 = 0;
	iLocal_413 = 0;
	iLocal_409 = 0;
	iLocal_407 = 0;
	iLocal_426 = 0;
	iLocal_411 = 0;
	iLocal_420 = 0;
	iLocal_421 = -1;
	iLocal_422 = -1;
	iLocal_423 = 0;
	iLocal_425 = 0;
	iLocal_427 = -1;
	Local_624 = { 2722.661f, 4143.105f, 43.0617f };
	StringCopy(&Local_612, "", 24);
	Local_335.f_6 = GlobalFunc_4946(62);
	Local_335.f_1 = { GlobalFunc_2344() };
	Local_335.f_4 = GlobalFunc_2343();
	Local_343.f_5 = GlobalFunc_2342();
	Local_343.f_1 = { GlobalFunc_2341() };
	Local_343.f_4 = GlobalFunc_2340();
	Local_349.f_5 = GlobalFunc_2339();
	Local_349.f_1 = { GlobalFunc_2338() };
	Local_349.f_4 = GlobalFunc_2337();
	Local_355.f_5 = GlobalFunc_2301();
	Local_355.f_1 = { GlobalFunc_2300() };
	Local_355.f_4 = GlobalFunc_2299();
	Local_361.f_5 = GlobalFunc_2298();
	Local_361.f_1 = { GlobalFunc_2336() };
	Local_361.f_4 = GlobalFunc_2335();
	sLocal_432 = "BailBond1Jumper";
	sLocal_433 = "BB1_J1";
	sLocal_434 = "BB1_J3";
	sLocal_435[0] = "BB1_VC1";
	sLocal_435[1] = "BB1_VC2";
	sLocal_435[2] = "BB1_VC3";
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_371[iVar0] = 0;
		iVar0++;
	}
	iLocal_131 = 0;
}


















































void func_517()//Position - 0x3237E
{
	if (iLocal_398)
	{
		func_409(0, 1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

