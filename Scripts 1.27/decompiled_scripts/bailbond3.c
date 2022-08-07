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
	struct<20> Local_131[6];
	int iLocal_252 = 0;
	struct<6> Local_253[6];
	struct<6> Local_290[8];
	struct<9> Local_339[4];
	struct<7> Local_376[1];
	struct<7> Local_384 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_391 = 0;
	struct<6> Local_392 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_398 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_404 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_410 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421[3] = { 0, 0, 0 };
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	bool bLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	bool bLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	bool bLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	bool bLocal_453 = 0;
	var uLocal_454 = 0;
	int iLocal_455 = 0;
	float fLocal_456 = 0f;
	float fLocal_457 = 0f;
	float fLocal_458 = 0f;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	char* sLocal_484 = NULL;
	char* sLocal_485 = NULL;
	char* sLocal_486 = NULL;
	char* sLocal_487[3] = { NULL, NULL, NULL };
	char[] cLocal_491[8] = 0;
	char[] cLocal_492[8] = 0;
	char* sLocal_493 = NULL;
	char* sLocal_494 = NULL;
	char* sLocal_495 = NULL;
	char* sLocal_496 = NULL;
	char* sLocal_497 = NULL;
	var uLocal_498 = 16;
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
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	int iLocal_663 = 0;
	struct<3> Local_664 = { 0, 0, 0 } ;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	char cLocal_670[24] = "";
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	struct<3> Local_676 = { 0, 0, 0 } ;
	struct<3> Local_679 = { 0, 0, 0 } ;
	struct<3> Local_682 = { 0, 0, 0 } ;
	struct<3> Local_685 = { 0, 0, 0 } ;
	struct<3> Local_688 = { 0, 0, 0 } ;
	struct<3> Local_691 = { 0, 0, 0 } ;
	struct<3> Local_694 = { 0, 0, 0 } ;
	struct<3> Local_697 = { 0, 0, 0 } ;
	struct<3> Local_700 = { 0, 0, 0 } ;
	struct<3> Local_703 = { 0, 0, 0 } ;
	int iLocal_706 = 0;
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
	bLocal_442 = true;
	cLocal_491 = "BB3AUD";
	cLocal_492 = "BBCAUD";
	sLocal_493 = "Trevor";
	sLocal_494 = "Maude";
	sLocal_495 = "maude_criminal_3";
	sLocal_496 = "maude_chair";
	sLocal_497 = "maude_laptop";
	StringCopy(&Local_664, "", 24);
	StringCopy(&cLocal_670, "MAUDE_MCS_4", 24);
	Local_102 = { ScriptParam_0 };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		if (iLocal_97 == 0)
		{
			Global_96065 = 0;
			func_519();
		}
		else
		{
			Global_96065 = 3;
			GlobalFunc_10100(2);
			func_519();
		}
	}
	if (!GlobalFunc_10099(1))
	{
		Global_96065 = 0;
		func_519();
	}
	MISC::SET_MISSION_FLAG(1);
	func_461();
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
				GlobalFunc_10698(&iLocal_706, 509.6743f, 5532.435f, 776.0009f, 153.1431f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
				GlobalFunc_4972(Local_691, fLocal_456, 1, 0);
				iLocal_100 = 2;
				func_409(1, 0);
				break;
			
			case 1:
				GlobalFunc_10698(&iLocal_706, 2704.078f, 4152.24f, 42.2514f, 175.193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
				GlobalFunc_4972(Local_676, 254.9762f, 0, 0);
				func_409(4, 0);
				break;
			
			default:
				break;
		}
	}
	else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_691, fLocal_456, 0, 0);
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
			Local_679 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			func_395();
			func_394();
			switch (iLocal_97)
			{
				case 0:
					func_387();
					break;
				
				case 1:
					func_379();
					break;
				
				case 2:
					func_376();
					break;
				
				case 3:
					func_372();
					break;
				
				case 6:
					func_365();
					break;
				
				case 7:
					func_302();
					break;
				
				case 4:
					func_123();
					break;
				
				case 5:
					func_115(1);
					break;
				
				case 8:
					func_113();
					break;
				
				case 9:
					func_68();
					break;
			}
			if (bLocal_442 == 0)
			{
				func_1(iLocal_98);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x2BA
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
		bLocal_442 = true;
		iLocal_443 = 0;
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

void func_2()//Position - 0x311
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
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_694, fLocal_457, 0, 1);
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
						{
							GlobalFunc_2294(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_111.f_9, 1));
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_443 == 0)
						{
							if (iLocal_98 == 1)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_443 = 1;
								}
							}
						}
					}
					iLocal_426 = 1;
					iLocal_100 = 2;
					func_7();
					iLocal_99 = 2;
				}
				break;
			
			case 1:
				iLocal_426 = 1;
				iLocal_425 = 1;
				if (iLocal_99 == 1)
				{
					if (!GlobalFunc_188())
					{
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_697, fLocal_458, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_443 == 0)
						{
							if (iLocal_98 == 2)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_443 = 1;
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
				iLocal_416 = 1;
				if (iLocal_99 == 1)
				{
					iLocal_418 = 1;
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_111.f_9);
					GlobalFunc_7097(Local_111.f_9, Local_685, 153.53f, 0, 0);
					if (!GlobalFunc_188())
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_685 + Vector(0f, -2f, -1f), -27.29f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_443 == 0)
						{
							if (iLocal_98 == 3)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_443 = 1;
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
			
			case 3:
				iLocal_436 = 1;
				if (iLocal_99 == 1)
				{
					GlobalFunc_7097(Local_111.f_9, Local_676, 0f, 0, 0);
					if (!GlobalFunc_188())
					{
						GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_676, 254.9762f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_443 == 0)
						{
							if (iLocal_98 == 4)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_443 = 1;
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
					iLocal_418 = 1;
					if (!GlobalFunc_188())
					{
						GlobalFunc_7087(Local_111.f_9, 2.5f);
						if (iLocal_443 == 0)
						{
							if (iLocal_98 == 3)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_443 = 1;
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





void func_7()//Position - 0x70D
{
	func_8();
	Local_111.f_17 = 0;
	Local_111.f_18 = 0;
	Local_111.f_19 = 0;
}

void func_8()//Position - 0x728
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_55)
	{
		GlobalFunc_169(&(Local_55[iVar0 /*4*/]));
		iVar0++;
	}
}















void func_23(int iParam0, int iParam1, int iParam2)//Position - 0xAEE
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

void func_24(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xB22
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









void func_33(int iParam0)//Position - 0xDD8
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 4:
				GlobalFunc_9152(&cLocal_670);
				func_63();
				while (!GlobalFunc_7956(1, 1093140480, 0) || !func_34())
				{
					GlobalFunc_9152(&cLocal_670);
					func_63();
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
}

int func_34()//Position - 0xE34
{
	if (GlobalFunc_1986(Local_679, Local_384.f_1, 210f))
	{
		if (!iLocal_450)
		{
			if ((func_55(2) && GlobalFunc_5708(&Local_392, Local_392.f_5, Local_392.f_1, Local_392.f_4, 1)) && GlobalFunc_5708(&Local_398, Local_398.f_5, Local_398.f_1, Local_398.f_4, 1))
			{
				if (GlobalFunc_5707(&Local_384, Local_384.f_6, Local_384.f_1, Local_384.f_4, 1, 0, 1))
				{
					func_46();
					iLocal_450 = 1;
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_404))
		{
			if (GlobalFunc_1986(Local_679, Local_404.f_1, 150f))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_404.f_1, 10f, GlobalFunc_2301(), 0))
				{
					Local_404 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_404.f_1, 10f, GlobalFunc_2301(), 1, 0, 1);
					if (GlobalFunc_115(Local_404))
					{
						ENTITY::SET_ENTITY_COORDS(Local_404, GlobalFunc_2300(), 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_404, GlobalFunc_2299());
						ENTITY::FREEZE_ENTITY_POSITION(Local_404, 1);
					}
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_410))
		{
			if (GlobalFunc_1986(Local_679, Local_410.f_1, 150f))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_410.f_1, 10f, GlobalFunc_2298(), 0))
				{
					Local_410 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_410.f_1, 10f, GlobalFunc_2298(), 1, 0, 1);
				}
			}
		}
	}
	else if (!CAM::IS_SPHERE_VISIBLE(Local_384.f_1, 2.5f))
	{
		GlobalFunc_5706(&Local_384, 1);
		STREAMING::REMOVE_ANIM_DICT(GlobalFunc_2296());
		GlobalFunc_5721(&Local_392, 1);
		GlobalFunc_5721(&Local_398, 1);
		GlobalFunc_5721(&Local_404, 0);
		GlobalFunc_5721(&Local_410, 0);
		iLocal_450 = 0;
	}
	return iLocal_450;
}












void func_46()//Position - 0x1162
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_384))
	{
		if (GlobalFunc_115(Local_392))
		{
			if (func_55(2))
			{
				uVar0 = PED::CREATE_SYNCHRONIZED_SCENE(GlobalFunc_2300(), GlobalFunc_2304(), 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar0, 1);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uVar0, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_384, uVar0, GlobalFunc_2296(), GlobalFunc_2303(), 1000f, -8f, 4688, 0, 1148846080, 0);
				iVar1 = 0;
				iVar1 += 16;
				iVar1 += 64;
				iVar1 += 512;
				iVar1 += 4096;
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_392, uVar0, GlobalFunc_2302(), GlobalFunc_2296(), 1000f, -8f, iVar1, 1148846080);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_384, 1);
				PED::SET_PED_MONEY(Local_384, 0);
				PED::SET_PED_CAN_BE_TARGETTED(Local_384, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_384, 1862763509);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_384, 0);
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_384, 0);
				PED::SET_PED_KEEP_TASK(Local_384, 1);
				PED::SET_PED_CONFIG_FLAG(Local_384, 118, 0);
			}
		}
	}
}









int func_55(int iParam0)//Position - 0x13C8
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
			STREAMING::REQUEST_ANIM_DICT("oddjobs@bailbond_mountain");
			if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@bailbond_mountain"))
			{
				return 1;
			}
			break;
	}
	return 0;
}








void func_63()//Position - 0x176B
{
	if (GlobalFunc_115(Local_111.f_9))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_495, Local_111.f_9, 0);
		}
	}
	if (GlobalFunc_115(Local_384))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_494, Local_384, 0);
		}
	}
}





void func_68()//Position - 0x18C6
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
			func_109();
			Global_96065 = 3;
			if (iLocal_101 == 4)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_384))
				{
					GlobalFunc_200(&uLocal_498, 4);
					GlobalFunc_7090(Local_384, 0);
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_384))
					{
						if (GlobalFunc_775(Local_384, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 35f))
						{
							AUDIO::STOP_PED_SPEAKING(Local_384, 0);
							GlobalFunc_5653(Local_384, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_398))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_398, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_404))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_404, 0);
				}
				STREAMING::REQUEST_ANIM_DICT(GlobalFunc_2310());
				if (GlobalFunc_7959(&Local_384, &Local_392, &iLocal_479))
				{
					iLocal_441 = 1;
				}
			}
			else if (iLocal_101 == 2)
			{
				iLocal_433 = 0;
				StringCopy(&Local_664, "BBC_T12", 24);
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
			while (iVar1 <= (iLocal_470 - 1))
			{
				GlobalFunc_7958(Local_131[iVar1 /*20*/], 1);
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
			GlobalFunc_10100(2);
			iLocal_99 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) > 4f || (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1 && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != 3))
				{
					GlobalFunc_5129(1163.149f, 4432.493f, 59.3682f, 266.3425f);
					GlobalFunc_5166(1178f, 4435.16f, 57.58f, 294.03f);
				}
				func_88(1);
				func_519();
			}
			else
			{
				if (!iLocal_433)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					if (iLocal_101 == 4)
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_384))
						{
							if (GlobalFunc_775(Local_384, Local_679, 35f))
							{
								GlobalFunc_173(&uLocal_498, 4, Local_384, "MAUDE", 0, 1);
								if (GlobalFunc_10865(&uLocal_498, cLocal_492, &Local_664, 4, 0, 0, 0))
								{
									iLocal_433 = 1;
								}
							}
						}
					}
					else if (GlobalFunc_10865(&uLocal_498, cLocal_492, &Local_664, 4, 0, 0, 0))
					{
						iLocal_433 = 1;
					}
				}
				if (iLocal_101 == 4)
				{
					if (!iLocal_441)
					{
						STREAMING::REQUEST_ANIM_DICT(GlobalFunc_2310());
						if (GlobalFunc_7959(&Local_384, &Local_392, &iLocal_479))
						{
							iLocal_441 = 1;
						}
					}
					else if (GlobalFunc_IsPedNotInjuredOrDead(Local_384))
					{
						if (!GlobalFunc_6964(Local_384, 1805844857))
						{
							if (!PED::IS_PED_FLEEING(Local_384))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_384, GlobalFunc_2310(), GlobalFunc_2308(), 3))
								{
									GlobalFunc_7088(&Local_384);
									TASK::TASK_SMART_FLEE_PED(Local_384, PLAYER::PLAYER_PED_ID(), 50f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(Local_384, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
}




















void func_88(bool bParam0)//Position - 0x24AB
{
	int iVar0;
	
	if (iLocal_468 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_468 - 1))
		{
			GlobalFunc_5721(&(Local_290[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_466 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_466 - 1))
		{
			GlobalFunc_5721(&(Local_339[iVar0 /*9*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_469 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_469 - 1))
		{
			GlobalFunc_841(&(Local_376[iVar0 /*7*/]));
			iVar0++;
		}
	}
	GlobalFunc_5721(&Local_392, bParam0);
	GlobalFunc_5721(&Local_398, bParam0);
	GlobalFunc_5721(&Local_404, 0);
	GlobalFunc_5721(&Local_410, 0);
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
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_384))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_384, 0);
		PED::SET_PED_KEEP_TASK(Local_384, 1);
	}
	GlobalFunc_5706(&Local_384, bParam0);
	if (iLocal_470 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_470 - 1))
		{
			if (iLocal_110 == 4)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_131[iVar0 /*20*/]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_131[iVar0 /*20*/], -2065892691);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_131[iVar0 /*20*/], 0);
					if (Global_96065 == 0)
					{
						PED::SET_PED_KEEP_TASK(Local_131[iVar0 /*20*/], 0);
					}
					else
					{
						PED::SET_PED_KEEP_TASK(Local_131[iVar0 /*20*/], 1);
					}
				}
			}
			GlobalFunc_5706(&(Local_131[iVar0 /*20*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_467 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_467 - 1))
		{
			GlobalFunc_7957(&(Local_253[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
}





















void func_109()//Position - 0x2D36
{
	func_112(iLocal_470);
	GlobalFunc_846(&(Local_111.f_8));
	GlobalFunc_589(&Local_111);
	GlobalFunc_846(&uLocal_454);
}



void func_112(int iParam0)//Position - 0x2DE8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		GlobalFunc_589(&(Local_131[iVar0 /*20*/].f_6));
		iVar0++;
	}
}

void func_113()//Position - 0x2E11
{
	switch (iLocal_99)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			func_109();
			GlobalFunc_5706(&Local_384, 1);
			GlobalFunc_7958(Local_131[0 /*20*/], 1);
			iLocal_474 = MISC::GET_GAME_TIMER();
			iLocal_99 = 1;
			break;
		
		case 1:
			if (GlobalFunc_2311(iLocal_474, 500))
			{
				if (!bLocal_434)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4935();
						GlobalFunc_4956();
					}
					if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_PK1", 4, 0, 0, 0))
					{
						bLocal_434 = true;
					}
				}
				if (bLocal_434)
				{
					func_115(2);
				}
				if (GlobalFunc_2311(iLocal_474, 1500))
				{
					func_115(2);
				}
			}
			break;
	}
}


void func_115(int iParam0)//Position - 0x2ED4
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
	func_519();
}








void func_123()//Position - 0x37FB
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	switch (iLocal_99)
	{
		case 0:
			GlobalFunc_9152(&cLocal_670);
			func_63();
			if (func_34())
			{
				if (GlobalFunc_7956(1, 10.5f, 1))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_493, 0, 0, 0);
					if (GlobalFunc_115(Local_384))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_384, sLocal_494, 0, 0, 0);
					}
					if (GlobalFunc_115(Local_111.f_9))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_111.f_9, sLocal_495, 0, 0, 0);
					}
					if (GlobalFunc_115(Local_392))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_392, sLocal_496, 0, 0, 0);
					}
					if (GlobalFunc_115(Local_398))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_398, sLocal_497, 0, 0, 0);
					}
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					GlobalFunc_79(800, 0);
					func_185(2727.58f, 4144.19f, 43.95f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
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
			if (GlobalFunc_115(Local_392))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_384))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_494, 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_496, 0))
					{
						func_46();
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_493, 0))
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
				if (bLocal_442)
				{
					func_24(1, 1, 1, 1);
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
				{
					if (PED::IS_PED_IN_GROUP(Local_111.f_9))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_111.f_9);
					}
				}
				GlobalFunc_5706(&(Local_111.f_9), 1);
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_384))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_384, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					PED::SET_PED_KEEP_TASK(Local_384, 1);
				}
				GlobalFunc_2297(&Local_384, 1, 0, 1);
				func_124(5);
			}
			break;
	}
}

void func_124(int iParam0)//Position - 0x3ADA
{
	iLocal_97 = iParam0;
	iLocal_99 = 0;
}





























































void func_185(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x7846
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





















































































































void func_302()//Position - 0x239DD
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	func_34();
	func_363();
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_111.f_9, 0) };
		func_362(Local_111.f_9, &iLocal_471, 1126825984, 7);
		func_354(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_342();
		switch (iLocal_99)
		{
			case 0:
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_663);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_663, 1862763509);
				iLocal_475 = ENTITY::GET_ENTITY_HEALTH(Local_111.f_9);
				Local_700 = { ENTITY::GET_ENTITY_COORDS(Local_111.f_9, 0) };
				GlobalFunc_2318(&Local_703, Local_700);
				func_340(Local_111.f_9);
				if (Local_111.f_10 != 22 && Local_111.f_10 != 23)
				{
					TASK::CLEAR_PED_TASKS(Local_111.f_9);
					Local_111.f_18 = (MISC::GET_GAME_TIMER() - 3000);
					Local_111.f_10 = 22;
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
					{
						Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 0, 5);
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_111.f_9);
				}
				iLocal_472 = -1;
				iLocal_473 = -1;
				iLocal_447 = 0;
				iLocal_417 = 0;
				iLocal_416 = 0;
				sLocal_486 = "BB3_J8";
				iLocal_461 = MISC::GET_GAME_TIMER();
				GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_464, iLocal_465, 0);
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_447)
				{
					GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_464, iLocal_465, 0);
					GlobalFunc_10693(&uLocal_43, Local_111.f_9, 0, 0, 1, 1, 1);
					if (Local_111.f_10 == 22 || Local_111.f_10 == 23)
					{
						if (iLocal_473 == -1)
						{
							iLocal_473 = MISC::GET_GAME_TIMER();
						}
						if (iLocal_472 == -1)
						{
							iLocal_472 = MISC::GET_GAME_TIMER();
						}
						else if (GlobalFunc_2311(iLocal_472, 8000))
						{
							bVar0 = true;
						}
						if (GlobalFunc_7093(Local_111.f_9, Local_679, bVar0, 0, 1, iLocal_475))
						{
							if ((GlobalFunc_2311(iLocal_473, 5000) || GlobalFunc_100(Local_703, 0f, 0f, 0f)) || (!GlobalFunc_1986(Var1, Local_703, 8.5f) && !GlobalFunc_1986(Var1, Local_700, 8.5f)))
							{
								func_313();
								Local_111.f_17 = MISC::GET_GAME_TIMER();
								GlobalFunc_4948(&uLocal_43, 0, 0);
								iLocal_447 = 1;
							}
						}
						else
						{
							if (!iLocal_416)
							{
								if (!GlobalFunc_2311(iLocal_461, 2500))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_775(Local_111.f_9, Local_679, 30f))
										{
											if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_J7", 4, 0, 0, 0))
											{
												iLocal_461 = MISC::GET_GAME_TIMER();
												iLocal_416 = 1;
											}
										}
									}
								}
								else
								{
									iLocal_416 = 1;
								}
							}
							else if (!GlobalFunc_111())
							{
								if (GlobalFunc_2311(iLocal_461, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
								{
									if (GlobalFunc_775(Local_111.f_9, Local_679, 30f))
									{
										if (PED::IS_PED_FLEEING(Local_111.f_9))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 101) < 30)
											{
												if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_461 = MISC::GET_GAME_TIMER();
												}
											}
											else if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_FLEE", 4, 0, 0, 0))
											{
												iLocal_461 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else
							{
								iLocal_461 = MISC::GET_GAME_TIMER();
							}
							GlobalFunc_2317(Local_111.f_9, Local_679, iLocal_473, 925353388);
						}
					}
					else
					{
						func_313();
						Local_111.f_17 = MISC::GET_GAME_TIMER();
						GlobalFunc_4948(&uLocal_43, 0, 0);
						iLocal_447 = 1;
					}
				}
				else
				{
					func_313();
					if (!GlobalFunc_775(Local_111.f_9, Local_679, 10f))
					{
						if (!iLocal_436)
						{
							if (!GlobalFunc_5710(sLocal_486, 1))
							{
								GlobalFunc_5709(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_464, &iLocal_465, 1, 1);
								iLocal_436 = 1;
							}
						}
						else
						{
							GlobalFunc_5713(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_464, iLocal_465, 1);
						}
					}
					else
					{
						if (!iLocal_417)
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
								if (GlobalFunc_10865(&uLocal_498, cLocal_491, sLocal_486, 4, 0, 0, 0))
								{
									iLocal_417 = 1;
								}
							}
						}
						else if (!GlobalFunc_111())
						{
							iLocal_99 = 2;
						}
						GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_464, iLocal_465, 0);
					}
					if (GlobalFunc_7092(&(Local_111.f_9)))
					{
						iLocal_452 = 1;
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
				iLocal_417 = 1;
				func_313();
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_663);
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_663, 1862763509);
				GlobalFunc_846(&(Local_111.f_8));
				iLocal_417 = 1;
				Local_111.f_17 = MISC::GET_GAME_TIMER();
				GlobalFunc_4948(&uLocal_43, 0, 0);
				iLocal_448 = 0;
				iLocal_452 = 0;
				iLocal_418 = 1;
				func_124(3);
				break;
			}
	}
}











void func_313()//Position - 0x2424D
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		if (((Local_111.f_10 != 32 && Local_111.f_10 != 33) && Local_111.f_10 != 30) && Local_111.f_10 != 31)
		{
			PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_663);
			PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_663, 1862763509);
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
			iLocal_480 = MISC::GET_GAME_TIMER();
			Local_111.f_10 = 32;
		}
	}
}



























void func_340(int iParam0)//Position - 0x25455
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0, iLocal_663);
	PED::SET_PED_CONFIG_FLAG(iParam0, 177, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 116, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, 1);
	PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iParam0, 10f, 5);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
}


void func_342()//Position - 0x2557A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		if (iLocal_252 == 0)
		{
			GlobalFunc_2323(&(Local_111.f_9), &bLocal_453);
			if (GlobalFunc_5714())
			{
				if (iLocal_447 || iLocal_97 == 7)
				{
					if (bLocal_453)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(Local_111.f_9, GlobalFunc_2322(), 1048576000);
						iLocal_252 = 2;
					}
					else
					{
						PED::SET_PED_MOVEMENT_CLIPSET(Local_111.f_9, GlobalFunc_2321(), 1048576000);
						iLocal_252 = 1;
					}
				}
			}
		}
		else if (iLocal_252 == 1)
		{
			GlobalFunc_2323(&(Local_111.f_9), &bLocal_453);
			if (bLocal_453)
			{
				if (GlobalFunc_5714())
				{
					PED::SET_PED_MOVEMENT_CLIPSET(Local_111.f_9, GlobalFunc_2322(), 1048576000);
					iLocal_252 = 2;
				}
			}
		}
		if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			switch (Local_111.f_10)
			{
				case 0:
					if (GlobalFunc_775(Local_111.f_9, Local_679, 20f))
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
					if (!GlobalFunc_775(Local_111.f_9, Local_679, 3.5f))
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
				
				case 38:
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
					Local_111.f_10 = 39;
					break;
				
				case 39:
					if (!GlobalFunc_6964(Local_111.f_9, 242628503))
					{
						uVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 8f);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_483);
						TASK::TASK_GOTO_ENTITY_AIMING(0, PLAYER::PLAYER_PED_ID(), uVar3, 30f);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_483);
						TASK::TASK_PERFORM_SEQUENCE(Local_111.f_9, uLocal_483);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_483);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
					}
					break;
				
				case 40:
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
						Local_111.f_10 = 41;
					}
					break;
				
				case 41:
					if (!GlobalFunc_6964(Local_111.f_9, 780511057))
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_111.f_10 = 40;
					}
					break;
				
				case 13:
					if ((!PED::IS_PED_FALLING(Local_111.f_9) && !PED::IS_PED_RAGDOLL(Local_111.f_9)) && !PED::IS_PED_BEING_STUNNED(Local_111.f_9, 0))
					{
						if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 500)))
						{
							PED::SET_PED_RESET_FLAG(Local_111.f_9, 222, 1);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_483);
							if (!GlobalFunc_775(Local_111.f_9, Local_111.f_13, 0.5f))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_111.f_13, 1f, 20000, 0.25f, 512, 1193033728);
							}
							TASK::TASK_ACHIEVE_HEADING(0, 190f, 0);
							TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_mountain", "base_jump_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_483);
							TASK::TASK_PERFORM_SEQUENCE(Local_111.f_9, uLocal_483);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_483);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
							Local_111.f_10 = 14;
						}
					}
					else
					{
						Local_111.f_10 = 18;
					}
					break;
				
				case 14:
					if (!PED::IS_PED_BEING_STUNNED(Local_111.f_9, 0))
					{
						if (!GlobalFunc_6964(Local_111.f_9, 242628503))
						{
							Local_111.f_10 = 13;
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_111.f_9, "oddjobs@bailbond_mountain", "base_jump_idle", 3))
						{
							Local_111.f_18 = MISC::GET_GAME_TIMER();
							Local_111.f_10 = 15;
						}
					}
					else
					{
						Local_111.f_10 = 18;
					}
					break;
				
				case 15:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_111.f_9, "oddjobs@bailbond_mountain", "base_jump_idle", 3))
					{
						if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 500)))
						{
							Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
							Local_111.f_10 = 16;
						}
					}
					else
					{
						Local_111.f_10 = 13;
					}
					break;
				
				case 16:
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_111.f_9, 0);
					if ((!PED::IS_PED_FALLING(Local_111.f_9) && !PED::IS_PED_RAGDOLL(Local_111.f_9)) && !PED::IS_PED_BEING_STUNNED(Local_111.f_9, 0))
					{
						if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 500)))
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_111.f_9, 1);
							ENTITY::SET_ENTITY_LOD_DIST(Local_111.f_9, 800);
							PED::SET_PED_RESET_FLAG(Local_111.f_9, 222, 1);
							Local_688 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_111.f_9) };
							TASK::OPEN_SEQUENCE_TASK(&uLocal_483);
							TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_mountain", "base_jump_spot", 8f, -1.5f, -1, 8, 0, 0, 0, 0);
							TASK::TASK_SKY_DIVE(0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_483);
							TASK::TASK_PERFORM_SEQUENCE(Local_111.f_9, uLocal_483);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_483);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
							Local_111.f_10 = 17;
						}
					}
					else
					{
						Local_111.f_10 = 18;
					}
					break;
				
				case 17:
					if (!PED::IS_PED_BEING_STUNNED(Local_111.f_9, 0))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_111.f_9, "oddjobs@bailbond_mountain", "base_jump_spot", 3))
						{
							ENTITY::SET_ENTITY_ANIM_SPEED(Local_111.f_9, "oddjobs@bailbond_mountain", "base_jump_spot", 1.7f);
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_111.f_9, "oddjobs@bailbond_mountain", "base_jump_spot") > 0.413f)
							{
								Local_688.f_2 = 0f;
								GlobalFunc_107(Local_688);
								fVar7 = 9f;
								Var4 = { -1f, 0f, 0f };
								if (Local_688.x < 0.164f)
								{
									Local_688.x = 0.164323f;
								}
								ENTITY::APPLY_FORCE_TO_ENTITY(Local_111.f_9, 1, Vector(fVar7, fVar7, fVar7) * Local_688, Var4, 0, 0, 1, 1, 0, 1);
								Local_111.f_18 = MISC::GET_GAME_TIMER();
								Local_111.f_10 = 19;
							}
						}
					}
					else
					{
						Local_111.f_10 = 18;
					}
					break;
				
				case 18:
					if (!GlobalFunc_775(Local_111.f_9, Local_102, 50f))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_111.f_9, 0);
					}
					if ((!PED::IS_PED_FALLING(Local_111.f_9) && !PED::IS_PED_RAGDOLL(Local_111.f_9)) && !PED::IS_PED_BEING_STUNNED(Local_111.f_9, 0))
					{
						if (!TASK::IS_PED_GETTING_UP(Local_111.f_9))
						{
							if (PED::IS_PED_ON_FOOT(Local_111.f_9))
							{
								if (!GlobalFunc_775(Local_111.f_9, Local_102, 25f))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_111.f_9, 0);
								}
								else
								{
									Local_111.f_10 = 19;
								}
							}
						}
					}
					break;
				
				case 19:
					PED::FORCE_PED_MOTION_STATE(Local_111.f_9, -1161760501, 0, 0, 0);
					if (GlobalFunc_2311(Local_111.f_18, 500))
					{
						if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(Local_111.f_9))
						{
							PED::FORCE_PED_TO_OPEN_PARACHUTE(Local_111.f_9);
							TASK::TASK_PARACHUTE_TO_TARGET(Local_111.f_9, Local_682);
							Local_111.f_10 = 20;
						}
					}
					break;
				
				case 20:
					if (PED::GET_PED_PARACHUTE_STATE(Local_111.f_9) == -1)
					{
						ENTITY::SET_ENTITY_LOD_DIST(Local_111.f_9, 200);
						Local_111.f_10 = 21;
					}
					else if (PED::GET_PED_PARACHUTE_STATE(Local_111.f_9) == 2)
					{
						if (!iLocal_444)
						{
							if (!GlobalFunc_775(Local_111.f_9, Local_102, 220f))
							{
								TASK::SET_PARACHUTE_TASK_TARGET(Local_111.f_9, Local_685);
								iLocal_444 = 1;
							}
						}
					}
					break;
				
				case 21:
					break;
				
				case 22:
					if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(0, 500)))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_111.f_9))
						{
							PED::SET_PED_PANIC_EXIT_SCENARIO(Local_111.f_9, Local_679);
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
						TASK::OPEN_SEQUENCE_TASK(&uLocal_483);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_483);
						TASK::TASK_PERFORM_SEQUENCE(Local_111.f_9, uLocal_483);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_483);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
						PED::SET_PED_KEEP_TASK(Local_111.f_9, 1);
						Local_111.f_10 = 23;
					}
					break;
				
				case 23:
					if (!GlobalFunc_6964(Local_111.f_9, 1805844857) && !PED::IS_PED_FLEEING(Local_111.f_9))
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_111.f_10 = 22;
					}
					break;
				
				case 24:
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
					if (GlobalFunc_4947(Local_253[0 /*6*/]))
					{
						if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_253[0 /*6*/], 0) && GlobalFunc_775(Local_253[0 /*6*/], Local_253[0 /*6*/].f_1, 3f)) && GlobalFunc_2320(ENTITY::GET_ENTITY_HEADING(Local_253[0 /*6*/]), Local_253[0 /*6*/].f_4, 20f))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_111.f_9, Local_253[0 /*6*/], 0) && !PED::IS_PED_BEING_JACKED(Local_111.f_9))
							{
								Local_111.f_10 = 25;
							}
							else if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 350)))
							{
								if (PED::IS_PED_USING_ANY_SCENARIO(Local_111.f_9))
								{
									PED::SET_PED_PANIC_EXIT_SCENARIO(Local_111.f_9, Local_679);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(Local_111.f_9);
								}
								TASK::TASK_ENTER_VEHICLE(Local_111.f_9, Local_253[0 /*6*/], 25000, -1, 2f, 8388608, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
								Local_111.f_10 = 25;
							}
						}
						else
						{
							Local_111.f_10 = 22;
						}
					}
					else
					{
						Local_111.f_10 = 22;
					}
					break;
				
				case 25:
					if (!GlobalFunc_4947(Local_253[0 /*6*/]))
					{
						Local_111.f_10 = 22;
					}
					else if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_253[0 /*6*/], 0) || PED::IS_PED_BEING_JACKED(Local_111.f_9)) || !GlobalFunc_775(Local_253[0 /*6*/], Local_253[0 /*6*/].f_1, 3f)) || !GlobalFunc_2320(ENTITY::GET_ENTITY_HEADING(Local_253[0 /*6*/]), Local_253[0 /*6*/].f_4, 20f))
					{
						Local_111.f_10 = 22;
					}
					else if (PED::IS_PED_SITTING_IN_VEHICLE(Local_111.f_9, Local_253[0 /*6*/]))
					{
						Local_111.f_10 = 42;
					}
					else if (!GlobalFunc_6964(Local_111.f_9, -1794415470))
					{
						Local_111.f_10 = 24;
					}
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_111.f_9, 2f);
					break;
				
				case 26:
					if (GlobalFunc_4947(Local_253[0 /*6*/]) && PED::IS_PED_SITTING_IN_VEHICLE(Local_111.f_9, Local_253[0 /*6*/]))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_111.f_9, Local_253[0 /*6*/], PLAYER::PLAYER_PED_ID(), 8, 30f, 786468, 350f, 30f, 1);
						PED::SET_PED_CONFIG_FLAG(Local_111.f_9, 173, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
						Local_111.f_10 = 27;
					}
					else if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_111.f_9))
					{
						Local_111.f_10 = 22;
					}
					break;
				
				case 27:
					if (!GlobalFunc_6964(Local_111.f_9, -1273030092))
					{
						Local_111.f_10 = 26;
					}
					break;
				
				case 28:
					TASK::CLEAR_PED_TASKS(Local_111.f_9);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 5, 0);
					PED::SET_PED_COWER_HASH(Local_111.f_9, "CODE_HUMAN_STAND_COWER");
					TASK::TASK_COWER(Local_111.f_9, -1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
					Local_111.f_10 = 29;
					break;
				
				case 29:
					if (!PED::IS_PED_RAGDOLL(Local_111.f_9))
					{
						if (!GlobalFunc_6964(Local_111.f_9, 474215631))
						{
							Local_111.f_10 = 28;
						}
					}
					break;
				
				case 30:
					if (func_347(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_346())
					{
						Local_111.f_10 = 32;
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
						Local_111.f_10 = 31;
					}
					break;
				
				case 31:
					if (func_347(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_346())
					{
						Local_111.f_10 = 32;
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
									fVar8 = ENTITY::GET_ENTITY_SPEED(iVar1);
									if (fVar8 < 1.75f && GlobalFunc_775(Local_111.f_9, Local_679, 8f))
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
				
				case 32:
					if (func_347(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_346())
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
							if ((!GlobalFunc_2319(Local_111.f_19, 10) && GlobalFunc_775(Local_111.f_9, Local_679, 50f)) || !GlobalFunc_2311(iLocal_480, 2000))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(Local_111.f_9, 0, 0);
								}
								else if (((!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_111.f_9)) && !func_346()) || ENTITY::IS_ENTITY_IN_WATER(Local_111.f_9))
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
							Local_111.f_10 = 33;
						}
					}
					else if (!iLocal_448)
					{
						Local_111.f_10 = 30;
					}
					else
					{
						Local_111.f_10 = 34;
					}
					break;
				
				case 33:
					if (func_347(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0) || func_346())
					{
						if (!GlobalFunc_6964(Local_111.f_9, -1519143300))
						{
							if (!GlobalFunc_6964(Local_111.f_9, -875674219))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
								{
									if (!GlobalFunc_2319(Local_111.f_19, 10) && GlobalFunc_775(Local_111.f_9, Local_679, 50f))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(Local_111.f_9, 0, 0);
										Local_111.f_10 = 32;
									}
								}
								else
								{
									Local_111.f_10 = 32;
								}
							}
							else if (!GlobalFunc_2319(Local_111.f_19, 10) && GlobalFunc_775(Local_111.f_9, Local_679, 50f))
							{
								if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_111.f_9)) || func_346())
								{
									Local_111.f_10 = 32;
								}
							}
						}
					}
					else if (!iLocal_448)
					{
						Local_111.f_10 = 30;
					}
					else
					{
						Local_111.f_10 = 34;
					}
					break;
				
				case 34:
					if (func_347(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0))
					{
						Local_111.f_10 = 32;
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
						Local_111.f_10 = 35;
					}
					break;
				
				case 35:
					if (func_347(Local_111.f_9, Local_111.f_19, 100f, 1, 1090519040, 1097859072, 0))
					{
						Local_111.f_10 = 32;
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
				
				case 36:
					break;
				
				case 37:
					break;
				
				case 42:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
					Local_111.f_10 = 43;
					break;
				
				case 43:
					break;
				}
			}
	}
}




int func_346()//Position - 0x26BFB
{
	if (!iLocal_417)
	{
		return 1;
	}
	if (GlobalFunc_5710(sLocal_486, 0))
	{
		return 1;
	}
	if (iLocal_97 != 3 && iLocal_97 != 6)
	{
		return 1;
	}
	if (TASK::IS_PED_GETTING_UP(Local_111.f_9) || PED::IS_PED_RAGDOLL(Local_111.f_9))
	{
		iLocal_480 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (!GlobalFunc_2311(iLocal_480, 2000))
	{
		return 1;
	}
	return 0;
}

int func_347(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, float fParam5, bool bParam6)//Position - 0x26C68
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
		if (GlobalFunc_775(iParam0, Local_679, fParam2))
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







void func_354(int iParam0, var uParam1, float fParam2, int iParam3)//Position - 0x26F95
{
	if (GlobalFunc_115(iParam0))
	{
		if (func_355(iParam0, PLAYER::PLAYER_PED_ID(), fParam2, 1, 250, iParam3))
		{
			*uParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

bool func_355(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x26FC1
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_361(iParam0, iParam1);
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
		iVar4 = func_358();
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



int func_358()//Position - 0x27273
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



int func_361(int iParam0, int iParam1)//Position - 0x2736F
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

void func_362(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x273AE
{
	if (GlobalFunc_115(iParam0))
	{
		if (func_355(PLAYER::PLAYER_PED_ID(), iParam0, fParam2, 1, 250, iParam3))
		{
			*iParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

void func_363()//Position - 0x273DA
{
	if (GlobalFunc_1986(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_676, 100f))
	{
		if (!GlobalFunc_2233())
		{
			CUTSCENE::REQUEST_CUTSCENE(&cLocal_670, 8);
			func_63();
			iLocal_451 = 1;
		}
	}
	else if (iLocal_451)
	{
		if (!GlobalFunc_1986(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_676, 120f))
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_451 = 0;
			}
		}
		else
		{
			func_63();
		}
	}
	if (iLocal_451)
	{
		if (GlobalFunc_2233())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_451 = 0;
		}
	}
}


void func_365()//Position - 0x27470
{
	func_34();
	func_363();
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		func_362(Local_111.f_9, &iLocal_471, 1126825984, 7);
		func_354(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_342();
		switch (iLocal_99)
		{
			case 0:
				GlobalFunc_4935();
				iLocal_419 = 0;
				iLocal_438 = 0;
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_448)
				{
					if (GlobalFunc_663("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					GlobalFunc_846(&(Local_111.f_8));
					if (!GlobalFunc_775(Local_111.f_9, Local_679, 25f))
					{
						if (Local_111.f_10 == 30 || Local_111.f_10 == 31)
						{
							Local_111.f_18 = MISC::GET_GAME_TIMER();
							Local_111.f_10 = 34;
						}
						if (GlobalFunc_2319(iLocal_471, 10))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T9", 4, 0, 0, 0))
								{
									iLocal_461 = MISC::GET_GAME_TIMER();
								}
							}
						}
						iLocal_448 = 1;
					}
					else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						if (GlobalFunc_663("BBS_COPS", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("BBS_COPS");
						}
						iLocal_419 = 1;
						if (!GlobalFunc_111())
						{
							iLocal_99 = 2;
						}
					}
					else if (!iLocal_418)
					{
						if (!GlobalFunc_5710(sLocal_486, 1))
						{
							if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T5", 4, 0, 0, 0))
							{
								iLocal_418 = 1;
							}
						}
					}
					else if (!iLocal_438)
					{
						if (!GlobalFunc_663("BBS_COPS", 0, 0))
						{
							GlobalFunc_164("BBS_COPS", 7500, 0);
							iLocal_438 = 1;
						}
					}
					else
					{
						func_368();
						GlobalFunc_7096(&Local_384, Local_679, &iLocal_463, 5000, 1101004800);
					}
				}
				else if (GlobalFunc_775(Local_111.f_9, Local_679, 8f))
				{
					if (Local_111.f_10 == 34 || Local_111.f_10 == 35)
					{
						Local_111.f_18 = MISC::GET_GAME_TIMER();
						Local_111.f_10 = 30;
					}
					iLocal_438 = 0;
					if (GlobalFunc_663("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					if (!GlobalFunc_111())
					{
						if (Local_111.f_10 == 30 || Local_111.f_10 == 31)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T10", 4, 0, 0, 0))
								{
									iLocal_461 = MISC::GET_GAME_TIMER();
								}
							}
							else if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_J5", 4, 0, 0, 0))
							{
								iLocal_461 = MISC::GET_GAME_TIMER();
							}
						}
					}
					iLocal_448 = 0;
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
					if (!iLocal_439)
					{
						GlobalFunc_164("BBS_05", 7500, 1);
						iLocal_439 = 1;
					}
				}
				if (GlobalFunc_7092(&(Local_111.f_9)))
				{
					iLocal_452 = 1;
					iLocal_99 = 2;
				}
				break;
			
			case 2:
				if (GlobalFunc_663("BBS_05", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("BBS_05");
				}
				iLocal_419 = 1;
				GlobalFunc_846(&(Local_111.f_8));
				if (iLocal_452)
				{
					func_124(7);
				}
				else
				{
					if (GlobalFunc_663("BBS_COPS", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_COPS");
					}
					func_124(3);
				}
				break;
			}
	}
}



void func_368()//Position - 0x2784B
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
			iLocal_461 = MISC::GET_GAME_TIMER();
		}
		if (!iLocal_420)
		{
			if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_J6", 4, 0, 0, 0))
			{
				iLocal_420 = 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0) && PED::GET_VEHICLE_PED_IS_IN(Local_111.f_9, 0) == iVar0)
			{
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!iLocal_446)
					{
						if (!GlobalFunc_111())
						{
							iLocal_460 = MISC::GET_GAME_TIMER();
							iLocal_446 = 1;
						}
					}
					else if (!iLocal_421[0])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_460) > 7500)
						{
							func_371(0);
						}
					}
					else if (!iLocal_421[1])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_460) > 10000)
						{
							func_371(1);
						}
					}
					else if (!iLocal_421[2])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_460) > 10000)
						{
							func_371(2);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iVar0) < 0.5f)
						{
							if (!iLocal_432)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_2311(iLocal_476, 3500))
									{
										if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_STOP", 4, 0, 0, 0))
										{
											iLocal_432 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_432)
						{
							if (!GlobalFunc_5710("BB3_STOP", 1))
							{
								iLocal_476 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							iLocal_476 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (!iLocal_419)
				{
					if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_J9", 4, 0, 0, 0))
					{
						iLocal_419 = 1;
					}
				}
			}
			else
			{
				if (!iLocal_440)
				{
					if (!GlobalFunc_7094())
					{
						GlobalFunc_159("BBS_VH1", -1);
						iLocal_440 = 1;
					}
				}
				iLocal_476 = MISC::GET_GAME_TIMER();
			}
			iLocal_427 = 0;
			iLocal_428 = 0;
		}
		else
		{
			iLocal_476 = MISC::GET_GAME_TIMER();
			iLocal_432 = 0;
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				if (!iLocal_427)
				{
					if (GlobalFunc_7094())
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
						{
							if (!GlobalFunc_5710("BBC_T6", 1))
							{
								if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T6", 4, iVar1, 0, 0))
								{
									iLocal_427 = 1;
								}
							}
						}
						GlobalFunc_5716("BBS_VH1", 1);
					}
					else if (!GlobalFunc_5710("BBC_T8", 1) && !GlobalFunc_5710("BB3_WTF", 1))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) < 5)
						{
							if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T8", 4, iVar1, 0, 0))
							{
								iLocal_427 = 1;
							}
						}
						else if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_WTF", 4, iVar1, 0, 0))
						{
							iLocal_427 = 1;
						}
					}
				}
				else if (!iLocal_431)
				{
					if (GlobalFunc_7095(&iVar0))
					{
						if ((!GlobalFunc_5710("BB3_JACK", 1) && !GlobalFunc_5710("BBC_T6", 1)) && !GlobalFunc_5710("BBC_T8", 1))
						{
							if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_JACK", 4, iVar1, 0, 0))
							{
								iLocal_431 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_427 = 0;
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 0))
				{
					if (!iLocal_428)
					{
						if (!GlobalFunc_5710("BBC_T7", 1) && !GlobalFunc_5710("BB3_OUT", 1))
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) < 5)
							{
								if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T7", 4, iVar1, 0, 0))
								{
									iLocal_428 = 1;
								}
							}
							else if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_OUT", 4, iVar1, 0, 0))
							{
								iLocal_428 = 1;
							}
						}
					}
				}
				else if (Local_111.f_10 == 33 && GlobalFunc_6964(Local_111.f_9, -1519143300))
				{
					if (GlobalFunc_775(Local_111.f_9, Local_679, 25f))
					{
						if (!GlobalFunc_5710("BB3_J11", 1))
						{
							if (GlobalFunc_2311(iLocal_462, MISC::GET_RANDOM_INT_IN_RANGE(2500, 5000)))
							{
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_J11", 4, 0, 0, 0))
								{
									iLocal_462 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else
						{
							iLocal_462 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					iLocal_462 = 0;
					if (!iLocal_419)
					{
						if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_J9", 4, 0, 0, 0))
						{
							iLocal_461 = MISC::GET_GAME_TIMER();
							iLocal_419 = 1;
						}
					}
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_2311(iLocal_461, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000)))
						{
							if (!GlobalFunc_775(Local_111.f_9, Local_679, 20f))
							{
								if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_J4", 4, 0, 0, 0))
								{
									iLocal_461 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
		}
	}
}



void func_371(int iParam0)//Position - 0x27D17
{
	if (!iLocal_421[iParam0])
	{
		if (GlobalFunc_10865(&uLocal_498, cLocal_491, sLocal_487[iParam0], 4, 0, 0, 0))
		{
			iLocal_421[iParam0] = 1;
			iLocal_446 = 0;
			iLocal_460 = 0;
		}
	}
}

void func_372()//Position - 0x27D52
{
	func_34();
	func_363();
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		func_362(Local_111.f_9, &iLocal_471, 1126825984, 7);
		func_354(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_342();
		switch (iLocal_99)
		{
			case 0:
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_448)
				{
					if (GlobalFunc_663("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					GlobalFunc_846(&(Local_111.f_8));
					if (!GlobalFunc_775(Local_111.f_9, Local_679, 25f))
					{
						if (Local_111.f_10 == 30 || Local_111.f_10 == 31)
						{
							Local_111.f_18 = MISC::GET_GAME_TIMER();
							Local_111.f_10 = 34;
						}
						if (GlobalFunc_2319(iLocal_471, 10))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T9", 4, 0, 0, 0))
								{
									iLocal_461 = MISC::GET_GAME_TIMER();
								}
							}
						}
						iLocal_418 = 1;
						iLocal_448 = 1;
					}
					else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
						iLocal_418 = 1;
						iLocal_99 = 2;
					}
					else
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_454))
						{
							if (iLocal_435)
							{
								uLocal_454 = GlobalFunc_2324(Local_676, 5, 1);
							}
						}
						if (!iLocal_418)
						{
							if (!GlobalFunc_5710(sLocal_486, 1))
							{
								if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T5", 4, 0, 0, 0))
								{
									iLocal_418 = 1;
								}
							}
						}
						else if (!iLocal_435)
						{
							if (!GlobalFunc_111())
							{
								GlobalFunc_164("BBS_DROP", 7500, 0);
								iLocal_461 = MISC::GET_GAME_TIMER();
								iLocal_435 = 1;
							}
						}
						else
						{
							func_368();
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_676, 4f, 4f, 2f, 1, 1, 0))
						{
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2732.815f, 4143.618f, 42.02822f, 2724.603f, 4144.803f, 46.33084f, 9f, 0, 1, 0))
						{
							iLocal_99 = 2;
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_676, 6.5f))
							{
								iLocal_99 = 2;
							}
						}
						else if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_676, 2.5f))
						{
							iLocal_99 = 2;
						}
					}
				}
				else
				{
					GlobalFunc_846(&uLocal_454);
					if (GlobalFunc_663("BBS_DROP", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_DROP");
					}
					if (GlobalFunc_775(Local_111.f_9, Local_679, 8f))
					{
						if (Local_111.f_10 == 34 || Local_111.f_10 == 35)
						{
							Local_111.f_18 = MISC::GET_GAME_TIMER();
							Local_111.f_10 = 30;
						}
						if (GlobalFunc_663("BBS_05", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("BBS_05");
						}
						if (!GlobalFunc_111())
						{
							if (Local_111.f_10 == 30 || Local_111.f_10 == 31)
							{
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T10", 4, 0, 0, 0))
									{
										iLocal_461 = MISC::GET_GAME_TIMER();
									}
								}
								else if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_J5", 4, 0, 0, 0))
								{
									iLocal_461 = MISC::GET_GAME_TIMER();
								}
							}
						}
						iLocal_448 = 0;
					}
					else
					{
						if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
						{
							Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 1, 5);
						}
						if (!iLocal_439)
						{
							GlobalFunc_164("BBS_05", 7500, 1);
							iLocal_439 = 1;
						}
					}
				}
				if (!bLocal_445)
				{
					bLocal_445 = func_373(Local_679, Local_102, 180f);
				}
				if (GlobalFunc_7092(&(Local_111.f_9)))
				{
					iLocal_452 = 1;
					iLocal_99 = 2;
				}
				break;
			
			case 2:
				GlobalFunc_846(&uLocal_454);
				if (GlobalFunc_663("BBS_DROP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("BBS_DROP");
				}
				if (iLocal_452)
				{
					func_124(7);
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_124(6);
				}
				else
				{
					GlobalFunc_846(&(Local_111.f_8));
					if (GlobalFunc_663("BBS_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_05");
					}
					if (!bLocal_445)
					{
						bLocal_445 = func_373(Local_679, Local_102, 0f);
					}
					func_124(4);
				}
				break;
			}
	}
}

int func_373(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x2812B
{
	int iVar0;
	
	if (!GlobalFunc_497(Param0, Param3, fParam6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		if (iLocal_470 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_470 - 1))
			{
				GlobalFunc_2297(&(Local_131[iVar0 /*20*/]), 1, 0, 1);
				iVar0++;
			}
		}
		if (iLocal_467 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_467 - 1))
			{
				GlobalFunc_131(&(Local_253[iVar0 /*6*/]));
				iVar0++;
			}
		}
		if (iLocal_468 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_468 - 1))
			{
				GlobalFunc_129(&(Local_290[iVar0 /*6*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_466 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_466 - 1))
			{
				GlobalFunc_129(&(Local_339[iVar0 /*9*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_469 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_469 - 1))
			{
				GlobalFunc_841(&(Local_376[iVar0 /*7*/]));
				iVar0++;
			}
		}
	}
	return 0;
}



void func_376()//Position - 0x28275
{
	bool bVar0;
	
	bVar0 = false;
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		func_362(Local_111.f_9, &iLocal_471, 1126825984, 7);
		func_354(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_342();
		func_378();
		switch (iLocal_99)
		{
			case 0:
				iLocal_461 = MISC::GET_GAME_TIMER();
				Local_111.f_17 = MISC::GET_GAME_TIMER();
				Local_111.f_18 = MISC::GET_GAME_TIMER();
				Local_111.f_10 = 13;
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
					{
						Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 0, 5);
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_111.f_9);
				}
				GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_464, iLocal_465, 0);
				iLocal_99 = 1;
				break;
			
			case 1:
				PED::SET_PED_RESET_FLAG(Local_111.f_9, 222, 1);
				if (!iLocal_447)
				{
					GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_464, iLocal_465, 0);
					GlobalFunc_10693(&uLocal_43, Local_111.f_9, 0, 0, 1, 1, 1);
					if (!iLocal_416)
					{
						if (GlobalFunc_2311(Local_111.f_17, 3000))
						{
							iLocal_416 = 1;
						}
						if (!GlobalFunc_111() && GlobalFunc_775(Local_111.f_9, Local_679, 35f))
						{
							if (GlobalFunc_10865(&uLocal_498, cLocal_491, sLocal_485, 4, 0, 0, 0))
							{
								Local_111.f_17 = MISC::GET_GAME_TIMER();
								iLocal_461 = MISC::GET_GAME_TIMER();
								iLocal_416 = 1;
							}
						}
					}
					if (Local_111.f_10 == 21)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_9))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_111.f_9);
						}
						Local_111.f_10 = 22;
					}
					else if (Local_111.f_10 == 22 || Local_111.f_10 == 23)
					{
						if (iLocal_473 == -1)
						{
							iLocal_473 = MISC::GET_GAME_TIMER();
						}
						if (iLocal_472 == -1)
						{
							iLocal_472 = MISC::GET_GAME_TIMER();
						}
						else if (GlobalFunc_2311(iLocal_472, 5000))
						{
							bVar0 = true;
						}
						if (GlobalFunc_7093(Local_111.f_9, Local_679, bVar0, 0, 1, 170))
						{
							func_313();
							Local_111.f_17 = MISC::GET_GAME_TIMER();
							GlobalFunc_4948(&uLocal_43, 0, 0);
							iLocal_447 = 1;
						}
						else
						{
							GlobalFunc_2317(Local_111.f_9, Local_679, iLocal_472, 925353388);
						}
					}
					if (!GlobalFunc_111())
					{
						if (iLocal_416)
						{
							if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
							{
								if (GlobalFunc_2311(iLocal_461, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
								{
									if (Local_111.f_10 == 22 || Local_111.f_10 == 23)
									{
										if (GlobalFunc_775(Local_111.f_9, Local_679, 30f))
										{
											if (PED::IS_PED_FLEEING(Local_111.f_9))
											{
												if (MISC::GET_RANDOM_INT_IN_RANGE(0, 101) < 30)
												{
													if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T13", 4, 0, 0, 0))
													{
														iLocal_461 = MISC::GET_GAME_TIMER();
													}
												}
												else if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_FLEE", 4, 0, 0, 0))
												{
													iLocal_461 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						iLocal_461 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					func_313();
					if (!GlobalFunc_775(Local_111.f_9, Local_679, 10f))
					{
						if (!iLocal_436)
						{
							if (!GlobalFunc_5710(sLocal_486, 1))
							{
								GlobalFunc_5709(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_464, &iLocal_465, 1, 1);
								iLocal_436 = 1;
							}
						}
						else
						{
							GlobalFunc_5713(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_464, iLocal_465, 1);
						}
					}
					else
					{
						if (!iLocal_417)
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
								if (GlobalFunc_10865(&uLocal_498, cLocal_491, sLocal_486, 4, 0, 0, 0))
								{
									iLocal_417 = 1;
								}
							}
						}
						else if (!GlobalFunc_111())
						{
							iLocal_99 = 2;
						}
						GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_464, iLocal_465, 0);
					}
					if (GlobalFunc_7092(&(Local_111.f_9)))
					{
						iLocal_452 = 1;
						iLocal_99 = 2;
					}
				}
				break;
			
			case 2:
				if (GlobalFunc_663("BBS_APPSUS", 0, 0) || GlobalFunc_663("BBS_APPSUS2", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				iLocal_417 = 1;
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_663);
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_663, 1862763509);
				GlobalFunc_846(&(Local_111.f_8));
				func_313();
				Local_111.f_17 = MISC::GET_GAME_TIMER();
				GlobalFunc_4948(&uLocal_43, 0, 0);
				GlobalFunc_129(&(Local_339[0 /*9*/]), 0);
				GlobalFunc_2297(&(Local_131[0 /*20*/]), 1, 0, 1);
				GlobalFunc_2325(1, &uLocal_482);
				if (iLocal_452)
				{
					func_124(7);
				}
				else
				{
					func_124(3);
				}
				break;
			}
	}
}


void func_378()//Position - 0x287B5
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_131[0 /*20*/]))
	{
		if (Local_131[0 /*20*/].f_14 == 0)
		{
			func_354(Local_131[0 /*20*/], &(Local_131[0 /*20*/].f_17), 160f, 7);
			if (func_347(Local_131[0 /*20*/], Local_131[0 /*20*/].f_17, 1101004800, 0, 1090519040, 1097859072, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_339[0 /*9*/]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_339[0 /*9*/]))
					{
						ENTITY::DETACH_ENTITY(Local_339[0 /*9*/], 1, 1);
					}
				}
				Local_131[0 /*20*/].f_14 = 4;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_339[0 /*9*/]))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(Local_339[0 /*9*/]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_339[0 /*9*/], Local_131[0 /*20*/], PED::GET_PED_BONE_INDEX(Local_131[0 /*20*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_131[0 /*20*/], "oddjobs@bailbond_mountain", "Idle_Camman", 3))
					{
						TASK::TASK_PLAY_ANIM(Local_131[0 /*20*/], "oddjobs@bailbond_mountain", "Idle_Camman", 8f, -8f, -1, 49, 0, 0, 0, 0);
					}
					if (!GlobalFunc_6964(Local_131[0 /*20*/], -875674219))
					{
						if (GlobalFunc_115(Local_111.f_9))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_131[0 /*20*/], Local_111.f_9, -1, 2060, 3);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_131[0 /*20*/], Local_111.f_9, -1);
						}
					}
				}
			}
		}
		else if (Local_131[0 /*20*/].f_14 == 4)
		{
			if (!GlobalFunc_6964(Local_131[0 /*20*/], 1805844857))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_339[0 /*9*/]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_339[0 /*9*/]))
					{
						ENTITY::DETACH_ENTITY(Local_339[0 /*9*/], 1, 1);
					}
					else
					{
						GlobalFunc_129(&(Local_339[0 /*9*/]), 0);
					}
				}
				GlobalFunc_7958(Local_131[0 /*20*/], 1);
			}
		}
	}
	else if (Local_131[0 /*20*/].f_14 != 5)
	{
		GlobalFunc_129(&(Local_339[0 /*9*/]), 0);
		GlobalFunc_2297(&(Local_131[0 /*20*/]), 1, 0, 1);
		Local_131[0 /*20*/].f_14 = 5;
	}
}

void func_379()//Position - 0x28982
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		func_362(Local_111.f_9, &iLocal_471, 1126825984, 1);
		func_354(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_342();
		func_378();
		switch (iLocal_99)
		{
			case 0:
				if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
				{
					Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 0, 5);
				}
				GlobalFunc_5709(&(Local_111.f_8), "", "", &iLocal_464, &iLocal_465, 1, 0);
				iLocal_99 = 1;
				break;
			
			case 1:
				switch (iLocal_100)
				{
					case 2:
						if (!iLocal_426)
						{
							if (GlobalFunc_111())
							{
								GlobalFunc_4956();
							}
							if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T14", 4, 0, 0, 0))
							{
								Local_111.f_17 = MISC::GET_GAME_TIMER();
								iLocal_426 = 1;
							}
							GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_464, iLocal_465, 0);
						}
						else if (!iLocal_437)
						{
							if (!GlobalFunc_5710("BBC_T14", 1))
							{
								GlobalFunc_5709(&(Local_111.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_464, &iLocal_465, 1, 1);
								iLocal_437 = 1;
							}
						}
						else
						{
							GlobalFunc_5713(&(Local_111.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_464, iLocal_465, 1);
							if (GlobalFunc_775(Local_111.f_9, Local_679, 25f) && GlobalFunc_2326(Local_111.f_9, Local_679, 10f))
							{
								if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (GlobalFunc_5717(&(Local_111.f_19)))
									{
										iLocal_100 = 1;
										iLocal_429 = 0;
										if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
										{
											Local_111.f_18 = (MISC::GET_GAME_TIMER() - 50000);
											Local_111.f_10 = 3;
										}
									}
									else if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_111.f_9))
									{
										iLocal_100 = 1;
										iLocal_429 = 0;
										if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
										{
											Local_111.f_18 = (MISC::GET_GAME_TIMER() - 50000);
											Local_111.f_10 = 3;
										}
									}
								}
								else if (func_384(Local_111.f_9, iLocal_471, 0, 1103626240, 1086324736))
								{
									iLocal_100 = 0;
								}
								else if (GlobalFunc_775(Local_111.f_9, Local_679, 5f))
								{
									iLocal_100 = 0;
								}
								else if (GlobalFunc_5717(&(Local_111.f_19)))
								{
									if (GlobalFunc_775(Local_111.f_9, Local_679, (25f - 1.5f)))
									{
										iLocal_100 = 1;
										iLocal_429 = 0;
										if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
										{
											Local_111.f_18 = (MISC::GET_GAME_TIMER() - 50000);
											Local_111.f_10 = 3;
										}
									}
								}
							}
							func_383();
						}
						if (func_347(Local_111.f_9, Local_111.f_19, 20f, 0, 1090519040, 1097859072, 0) || Local_131[0 /*20*/].f_14 != 0)
						{
							iLocal_99 = 2;
						}
						break;
					
					case 0:
					case 1:
						if (!iLocal_429)
						{
							if (GlobalFunc_663("BBS_APHEND", 0, 0) || GlobalFunc_663("BBS_APHEND2", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (GlobalFunc_111())
							{
								GlobalFunc_4956();
							}
							if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_J2", 4, 0, 0, 0))
							{
								Local_111.f_17 = MISC::GET_GAME_TIMER();
								iLocal_461 = MISC::GET_GAME_TIMER();
								iLocal_429 = 1;
							}
							GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_464, iLocal_465, 0);
						}
						else if (!iLocal_425)
						{
							if (!GlobalFunc_5710("BBC_T14", 1) && !GlobalFunc_5710("BB3_J2", 1))
							{
								if (GlobalFunc_663("BBS_APHEND", 0, 0) || GlobalFunc_663("BBS_APHEND2", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T1", 4, 0, 0, 0))
								{
									Local_111.f_17 = MISC::GET_GAME_TIMER();
									iLocal_425 = 1;
								}
								else if (iLocal_100 == 1)
								{
									if (GlobalFunc_2311(iLocal_461, 1250))
									{
										Local_111.f_17 = (MISC::GET_GAME_TIMER() - 3000);
										iLocal_425 = 1;
									}
								}
							}
							else
							{
								iLocal_461 = MISC::GET_GAME_TIMER();
							}
							GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_464, iLocal_465, 0);
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
						if (func_347(Local_111.f_9, Local_111.f_19, 20f, 0, 1090519040, 1097859072, 0) || Local_131[0 /*20*/].f_14 != 0)
						{
							iLocal_99 = 2;
						}
						break;
					
					case 3:
						GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_464, iLocal_465, 0);
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
				func_380(0);
				GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_464, iLocal_465, 0);
				iLocal_464 = MISC::GET_GAME_TIMER();
				iLocal_465 = MISC::GET_GAME_TIMER();
				func_124(2);
				break;
			}
	}
}

void func_380(bool bParam0)//Position - 0x28E83
{
	if (GlobalFunc_5710("BB3_J10", 0))
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



void func_383()//Position - 0x28EDB
{
	if (iLocal_477 < 10)
	{
		if (!iLocal_430)
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_775(Local_111.f_9, Local_679, (25f + 5f)))
				{
					iLocal_455 = 0;
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						iLocal_455 = 1;
					}
					if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB3_J10", 1, iLocal_455, 0, 0))
					{
						iLocal_478 = MISC::GET_GAME_TIMER();
						iLocal_477++;
						iLocal_430 = 1;
					}
				}
			}
		}
		else if (!GlobalFunc_5710("BB3_J10", 0))
		{
			if (GlobalFunc_2311(iLocal_478, MISC::GET_RANDOM_INT_IN_RANGE(2500, 4000)))
			{
				iLocal_430 = 0;
			}
		}
		else
		{
			iLocal_478 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_384(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4)//Position - 0x28F7C
{
	if (GlobalFunc_115(iParam0))
	{
		if (!GlobalFunc_2319(iParam1, 10))
		{
			if (bParam2)
			{
				if (!GlobalFunc_775(Local_111.f_9, Local_679, fParam3))
				{
					return 0;
				}
				if (!GlobalFunc_2326(iParam0, Local_679, fParam4))
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



void func_387()//Position - 0x2902B
{
	switch (iLocal_99)
	{
		case 0:
			if (bLocal_442)
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
			GlobalFunc_10866(&Local_102, &uLocal_498);
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
			{
				func_362(Local_111.f_9, &iLocal_471, 1126825984, 1);
				func_354(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
				func_342();
				func_378();
				if (GlobalFunc_775(Local_111.f_9, Local_679, 25f) && GlobalFunc_2326(Local_111.f_9, Local_679, 10f))
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
					else if (func_384(Local_111.f_9, iLocal_471, 0, 1103626240, 1086324736))
					{
						iLocal_100 = 0;
						iLocal_99 = 2;
					}
					else if (GlobalFunc_775(Local_111.f_9, Local_679, 5f))
					{
						iLocal_100 = 0;
						iLocal_99 = 2;
					}
					else if (GlobalFunc_5717(&(Local_111.f_19)))
					{
						if (GlobalFunc_775(Local_111.f_9, Local_679, (25f - 1.5f)))
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
				if (func_347(Local_111.f_9, Local_111.f_19, 25f, 0, 1090519040, 1097859072, 0) || Local_131[0 /*20*/].f_14 != 0)
				{
					iLocal_100 = 3;
					iLocal_99 = 2;
				}
			}
			func_383();
			break;
		
		case 2:
			if (iLocal_100 == 3)
			{
				func_380(0);
				GlobalFunc_5709(&(Local_111.f_8), "", "", &iLocal_464, &iLocal_465, 1, 0);
				func_124(2);
			}
			else
			{
				if (iLocal_100 == 1)
				{
					iLocal_429 = 0;
					if (Local_111.f_10 != 3 && Local_111.f_10 != 4)
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 50000);
						Local_111.f_10 = 3;
					}
				}
				func_124(1);
			}
			break;
	}
}







void func_394()//Position - 0x2950F
{
	if (bLocal_442)
	{
		if (((iLocal_97 != 9 && iLocal_97 != 4) && iLocal_97 != 5) && iLocal_97 != 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_9))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_111.f_9) || PED::IS_PED_INJURED(Local_111.f_9))
				{
					func_124(8);
				}
			}
		}
	}
}

void func_395()//Position - 0x2956B
{
	if (bLocal_442)
	{
		if ((iLocal_97 != 9 && iLocal_97 != 4) && iLocal_97 != 5)
		{
			func_396();
			if (iLocal_101 != 0)
			{
				if (iLocal_101 == 1)
				{
					Global_96065 = 0;
					func_519();
				}
				else
				{
					func_124(9);
				}
			}
		}
	}
}

void func_396()//Position - 0x295B5
{
	float fVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_384))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_384) || PED::IS_PED_INJURED(Local_384))
		{
			iLocal_101 = 3;
			return;
		}
		if (iLocal_101 == 4)
		{
			return;
		}
		if (func_397(0))
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
		if (!SYSTEM::VDIST2(Local_679, Local_102) <= ((Local_102.f_3 + 25f) * (Local_102.f_3 + 25f)))
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
				fVar0 = 150f;
				if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1 || PED::GET_PED_PARACHUTE_STATE(Local_111.f_9) != -1)
				{
					fVar0 = (fVar0 + 300f);
				}
				if (!GlobalFunc_775(Local_111.f_9, Local_679, fVar0))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_111.f_9))
					{
						iLocal_101 = 2;
						return;
					}
				}
				if (Local_111.f_10 != 19 && Local_111.f_10 != 20)
				{
					if (!GlobalFunc_775(Local_111.f_9, Local_679, 1000f))
					{
						iLocal_101 = 2;
						return;
					}
				}
			}
			else if (iLocal_97 == 3 || iLocal_97 == 6)
			{
				if (!GlobalFunc_775(Local_111.f_9, Local_679, 80f))
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

int func_397(bool bParam0)//Position - 0x2974F
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_384))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_384) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_384)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Local_384))
		{
			return 1;
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_384))
			{
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_392))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_392))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_404))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_404))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_398))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_398))
				{
					return 1;
				}
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(Local_384, 60))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(Local_384))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(Local_384, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(Local_384, 50))
		{
			return 1;
		}
		if (func_403(Local_384, 1126825984))
		{
			return 1;
		}
		if (GlobalFunc_8324(Local_384, 1, 0, 0, 0))
		{
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_384, 1), 15f))
		{
			return 1;
		}
		if (PED::HAS_PED_RECEIVED_EVENT(Local_384, 72))
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






int func_403(int iParam0, float fParam1)//Position - 0x29C19
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
				if (func_404(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_404(int iParam0, float fParam1)//Position - 0x29C8F
{
	return func_355(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}





void func_409(int iParam0, bool bParam1)//Position - 0x29D48
{
	func_419(bParam1, 1);
	if (bParam1)
	{
		func_410();
	}
	iLocal_98 = iParam0;
	bLocal_442 = false;
	if (GlobalFunc_188())
	{
		iLocal_443 = 1;
	}
	else
	{
		iLocal_443 = 0;
	}
	if (!GlobalFunc_188())
	{
		if (iLocal_98 == 0)
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_691, fLocal_456, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
				iLocal_443 = 1;
			}
		}
	}
	func_1(iLocal_98);
}

void func_410()//Position - 0x29DD7
{
	func_411(1, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!GlobalFunc_188())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_691, fLocal_456, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	GlobalFunc_4935();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_663);
	func_461();
	func_124(0);
}

void func_411(bool bParam0, bool bParam1)//Position - 0x29E49
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
		GlobalFunc_2325(0, &uLocal_482);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_481, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	GlobalFunc_200(&uLocal_498, 2);
	GlobalFunc_200(&uLocal_498, 3);
	GlobalFunc_200(&uLocal_498, 4);
	GlobalFunc_4948(&uLocal_43, 0, 0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	MISC::SET_TIME_SCALE(1f);
	func_24(1, 1, 1, 1);
	CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	func_414(1, 1, 1);
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
	func_109();
	func_88(bParam0);
	func_412(bParam1);
}

void func_412(bool bParam0)//Position - 0x29F60
{
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	}
	STREAMING::REMOVE_ANIM_DICT("oddjobs@bailbond_mountain");
	STREAMING::REMOVE_ANIM_DICT(GlobalFunc_2310());
	GlobalFunc_5719();
}


void func_414(bool bParam0, int iParam1, int iParam2)//Position - 0x29F9E
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





void func_419(bool bParam0, bool bParam1)//Position - 0x2A173
{
	if (bParam0)
	{
		func_414(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_185(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}










































void func_461()//Position - 0x2ECB1
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_469();
	while (!func_55(0) || !func_55(1))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_663);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_663);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_663, 1862763509);
	Var0 = { GlobalFunc_2334(Local_102) };
	Var3 = { GlobalFunc_2333(Local_102) };
	PED::SET_PED_NON_CREATION_AREA(Var0, Var3);
	uLocal_481 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, 0, 1, 1, 1);
	MISC::CLEAR_AREA(Local_102, 30f, 0, 0, 0, 0);
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(4, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	PED::SET_CREATE_RANDOM_COPS(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	GlobalFunc_2331(1);
	while (!func_464())
	{
		SYSTEM::WAIT(0);
	}
	func_462();
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_173(&uLocal_498, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		GlobalFunc_173(&uLocal_498, 3, Local_111.f_9, sLocal_484, 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_111.f_9, 1);
	}
}

void func_462()//Position - 0x2EDF6
{
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
		PED::SET_PED_AS_ENEMY(Local_111.f_9, 1);
		if (Local_111.f_12 != 0)
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_111.f_9, Local_111.f_12, -1, 1, 1);
		}
		func_340(Local_111.f_9);
		GlobalFunc_2332(Local_111.f_9, "TARGET_", 0);
		Local_111.f_10 = 0;
		WEAPON::GIVE_WEAPON_TO_PED(Local_111.f_9, joaat("gadget_parachute"), 1, 0, 1);
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 10, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 8, 3, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_483);
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_131[0 /*20*/]))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_131[0 /*20*/], 0);
		}
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_mountain", "excited_idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_mountain", "excited_idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_mountain", "excited_idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
		TASK::SET_SEQUENCE_TO_REPEAT(uLocal_483, 1);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_483);
		TASK::TASK_PERFORM_SEQUENCE(Local_111.f_9, uLocal_483);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_483);
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_131[0 /*20*/]))
		{
			func_340(Local_131[0 /*20*/]);
			if (Local_131[0 /*20*/].f_5 != 0)
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_131[0 /*20*/], Local_131[0 /*20*/].f_5, -1, 1, 1);
			}
			GlobalFunc_2332(Local_131[0 /*20*/], "BACKUP_", 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_131[0 /*20*/], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_131[0 /*20*/], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_131[0 /*20*/], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_131[0 /*20*/], 4, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_131[0 /*20*/], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_131[0 /*20*/], 10, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_339[0 /*9*/]))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(Local_339[0 /*9*/]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_339[0 /*9*/], Local_131[0 /*20*/], PED::GET_PED_BONE_INDEX(Local_131[0 /*20*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_339[0 /*9*/], 0);
					TASK::TASK_LOOK_AT_ENTITY(Local_131[0 /*20*/], Local_111.f_9, -1, 2060, 3);
					TASK::TASK_PLAY_ANIM(Local_131[0 /*20*/], "oddjobs@bailbond_mountain", "Idle_Camman", 8f, -8f, -1, 49, 0, 0, 0, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_131[0 /*20*/], Local_111.f_9, -1);
				}
			}
		}
	}
}


int func_464()//Position - 0x2F108
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
	if (iLocal_470 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_470 - 1))
		{
			if (GlobalFunc_5707(&(Local_131[iVar2 /*20*/]), Local_131[iVar2 /*20*/].f_19, Local_131[iVar2 /*20*/].f_1, Local_131[iVar2 /*20*/].f_4, 0, 0, 0))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_131[iVar2 /*20*/]))
				{
					iVar0++;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
	if (iVar1 == iLocal_470)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_470 - 1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_131[iVar2 /*20*/].f_19);
			iVar2++;
		}
	}
	if (iLocal_467 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_467 - 1))
		{
			if (GlobalFunc_7099(&(Local_253[iVar2 /*6*/]), Local_253[iVar2 /*6*/].f_5, Local_253[iVar2 /*6*/].f_1, Local_253[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_468 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_468 - 1))
		{
			if (GlobalFunc_5708(&(Local_290[iVar2 /*6*/]), Local_290[iVar2 /*6*/].f_5, Local_290[iVar2 /*6*/].f_1, Local_290[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_466 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_466 - 1))
		{
			if (GlobalFunc_5708(&(Local_339[iVar2 /*9*/]), Local_339[iVar2 /*9*/].f_8, Local_339[iVar2 /*9*/].f_1, Local_339[iVar2 /*9*/].f_7, 1))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_339[iVar2 /*9*/], 1);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_469 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_469 - 1))
		{
			if (GlobalFunc_5720(&(Local_376[iVar2 /*7*/]), Local_376[iVar2 /*7*/].f_5, Local_376[iVar2 /*7*/].f_2, Local_376[iVar2 /*7*/].f_6, Local_376[iVar2 /*7*/].f_1, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iVar0 == ((((iLocal_470 + iLocal_467) + iLocal_468) + iLocal_466) + iLocal_469) + 1)
	{
		return 1;
	}
	return 0;
}





void func_469()//Position - 0x2F534
{
	int iVar0;
	
	iVar0 = 0;
	iLocal_110 = 5;
	Local_111.f_11 = joaat("s_m_y_xmech_02");
	Local_111.f_13 = { 515.5f, 5494.33f, 766.77f };
	Local_111.f_16 = 187.4998f;
	Local_111.f_12 = joaat("weapon_unarmed");
	Local_111.f_10 = 0;
	Local_111.f_17 = 0;
	Local_111.f_18 = 0;
	Local_111.f_19 = 0;
	func_8();
	Local_131[0 /*20*/].f_19 = joaat("a_m_y_skater_01");
	Local_131[0 /*20*/].f_1 = { 513.79f, 5495.2f, 767.76f };
	Local_131[0 /*20*/].f_4 = 247.4996f;
	Local_131[0 /*20*/].f_5 = joaat("weapon_unarmed");
	Local_131[0 /*20*/].f_14 = 0;
	iLocal_470 = 1;
	Local_253[0 /*6*/].f_5 = joaat("sanchez");
	Local_253[0 /*6*/].f_1 = { 513.4f, 5501.95f, 770.5f };
	Local_253[0 /*6*/].f_4 = 270f;
	iLocal_467 = 1;
	iLocal_468 = 0;
	Local_339[0 /*9*/].f_8 = joaat("prop_v_cam_01");
	Local_339[0 /*9*/].f_1 = { 515.2064f, 5496.782f, 767.511f };
	Local_339[0 /*9*/].f_7 = 0f;
	iLocal_466 = 1;
	Local_376[0 /*7*/].f_5 = joaat("pickup_parachute");
	Local_376[0 /*7*/].f_2 = { 515.06f, 5500.79f, 769.55f };
	MISC::SET_BIT(&(Local_376[0 /*7*/].f_6), 3);
	MISC::SET_BIT(&(Local_376[0 /*7*/].f_6), 4);
	MISC::SET_BIT(&(Local_376[0 /*7*/].f_6), 1);
	iLocal_469 = 1;
	Local_691 = { 519.3214f, 5543.285f, 776.6292f };
	fLocal_456 = 171.0401f;
	Local_694 = { 526.7953f, 5518.609f, 770.8146f };
	fLocal_457 = 149.4155f;
	Local_697 = { 516.7903f, 5503.043f, 769.7175f };
	fLocal_458 = 171.4808f;
	Local_700 = { 0f, 0f, 0f };
	Local_703 = { 0f, 0f, 0f };
	iLocal_100 = 4;
	iLocal_416 = 0;
	iLocal_417 = 0;
	iLocal_418 = 0;
	iLocal_420 = 1;
	iLocal_419 = 1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_421[iVar0] = 0;
		iVar0++;
	}
	iLocal_425 = 0;
	iLocal_426 = 0;
	iLocal_427 = 0;
	iLocal_428 = 0;
	iLocal_429 = 1;
	iLocal_431 = 0;
	iLocal_430 = 0;
	iLocal_432 = 0;
	iLocal_435 = 0;
	iLocal_437 = 0;
	iLocal_438 = 0;
	iLocal_439 = 0;
	iLocal_440 = 0;
	bLocal_445 = false;
	iLocal_446 = 0;
	iLocal_447 = 0;
	iLocal_448 = 0;
	iLocal_449 = 1;
	iLocal_450 = 0;
	iLocal_451 = 0;
	iLocal_452 = 0;
	iLocal_433 = 1;
	bLocal_434 = false;
	iLocal_441 = 0;
	bLocal_453 = false;
	iLocal_444 = 0;
	iLocal_101 = 0;
	iLocal_460 = 0;
	iLocal_464 = 0;
	iLocal_465 = 0;
	iLocal_461 = 0;
	iLocal_462 = 0;
	iLocal_463 = 0;
	iLocal_459 = 0;
	iLocal_476 = 0;
	iLocal_471 = 0;
	iLocal_472 = -1;
	iLocal_473 = -1;
	iLocal_475 = 0;
	iLocal_477 = 0;
	iLocal_478 = 0;
	iLocal_479 = -1;
	Local_682 = { 1110.065f, 4408.885f, 64.5833f };
	Local_685 = { 1525.04f, 4491.764f, 53.3925f };
	Local_676 = { 2722.661f, 4143.105f, 43.0617f };
	StringCopy(&Local_664, "", 24);
	Local_384.f_6 = GlobalFunc_4946(62);
	Local_384.f_1 = { GlobalFunc_2344() };
	Local_384.f_4 = GlobalFunc_2343();
	Local_392.f_5 = GlobalFunc_2342();
	Local_392.f_1 = { GlobalFunc_2341() };
	Local_392.f_4 = GlobalFunc_2340();
	Local_398.f_5 = GlobalFunc_2339();
	Local_398.f_1 = { GlobalFunc_2338() };
	Local_398.f_4 = GlobalFunc_2337();
	Local_404.f_5 = GlobalFunc_2301();
	Local_404.f_1 = { GlobalFunc_2300() };
	Local_404.f_4 = GlobalFunc_2299();
	Local_410.f_5 = GlobalFunc_2298();
	Local_410.f_1 = { GlobalFunc_2336() };
	Local_410.f_4 = GlobalFunc_2335();
	sLocal_484 = "BailBond3Jumper";
	sLocal_485 = "BB3_J1";
	sLocal_486 = "BB3_J3";
	sLocal_487[0] = "BB3_VC1";
	sLocal_487[1] = "BB3_VC2";
	sLocal_487[2] = "BB3_VC3";
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_421[iVar0] = 0;
		iVar0++;
	}
	iLocal_252 = 0;
}


















































void func_519()//Position - 0x324BE
{
	if (iLocal_449)
	{
		func_411(0, 1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

