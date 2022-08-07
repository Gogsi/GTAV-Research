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
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	bool bLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	bool bLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	bool bLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	bool bLocal_454 = 0;
	var uLocal_455 = 0;
	int iLocal_456 = 0;
	float fLocal_457 = 0f;
	float fLocal_458 = 0f;
	float fLocal_459 = 0f;
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
	char cLocal_676[24] = "";
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	struct<6> Local_682 = { 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_688 = { 0, 0, 0 } ;
	struct<3> Local_691 = { 0, 0, 0 } ;
	struct<3> Local_694 = { 0, 0, 0 } ;
	struct<3> Local_697 = { 0, 0, 0 } ;
	struct<3> Local_700 = { 0, 0, 0 } ;
	struct<3> Local_703 = { 0, 0, 0 } ;
	struct<3> Local_706 = { 0, 0, 0 } ;
	struct<3> Local_709 = { 0, 0, 0 } ;
	int iLocal_712 = 0;
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
	bLocal_441 = true;
	cLocal_491 = "BB2AUD";
	cLocal_492 = "BBCAUD";
	sLocal_493 = "Trevor";
	sLocal_494 = "Maude";
	sLocal_495 = "maude_criminal_2";
	sLocal_496 = "maude_chair";
	sLocal_497 = "maude_laptop";
	StringCopy(&Local_664, "", 24);
	StringCopy(&cLocal_670, "PostKilled_BailBond2", 24);
	StringCopy(&cLocal_676, "MAUDE_MCS_3", 24);
	StringCopy(&Local_682, "", 24);
	Local_102 = { ScriptParam_0 };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		if (iLocal_97 == 0)
		{
			Global_96065 = 0;
			func_523();
		}
		else
		{
			Global_96065 = 3;
			GlobalFunc_10100(1);
			func_523();
		}
	}
	if (!GlobalFunc_10099(1))
	{
		Global_96065 = 0;
		func_523();
	}
	MISC::SET_MISSION_FLAG(1);
	func_465();
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
				if (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_93588.f_2167.f_12.f_42))
				{
					GlobalFunc_10698(&iLocal_712, 225.012f, 2310.695f, 77.257f, 218.1301f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
				}
				else
				{
					GlobalFunc_10698(&iLocal_712, 232.0044f, 2314.844f, 76.9871f, 173.0429f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
				}
				GlobalFunc_4972(Local_697, fLocal_457, 1, 0);
				iLocal_100 = 2;
				func_413(1, 0);
				break;
			
			case 1:
				GlobalFunc_10698(&iLocal_712, 2704.078f, 4152.24f, 42.2514f, 175.193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
				GlobalFunc_4972(Local_688, 254.9762f, 0, 0);
				func_413(4, 0);
				break;
			
			default:
				break;
		}
	}
	else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_697, fLocal_457, 0, 0);
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
			Local_691 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			func_399();
			func_398();
			switch (iLocal_97)
			{
				case 0:
					func_391();
					break;
				
				case 1:
					func_380();
					break;
				
				case 2:
					func_374();
					break;
				
				case 3:
					func_368();
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
			if (bLocal_441 == 0)
			{
				func_1(iLocal_98);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x307
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
		bLocal_441 = true;
		iLocal_442 = 0;
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

void func_2()//Position - 0x35E
{
	int iVar0;
	
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
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_700, fLocal_458, 0, 1);
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
						{
							GlobalFunc_2294(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_111.f_9, 1));
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_442 == 0)
						{
							if (iLocal_98 == 1)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_442 = 1;
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
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_703, fLocal_459, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_442 == 0)
						{
							if (iLocal_98 == 2)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_442 = 1;
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
					iLocal_447 = 1;
					iLocal_417 = 1;
					iLocal_418 = 1;
					if (iLocal_472 > 0)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_472 - 1))
						{
							if (GlobalFunc_IsPedNotInjuredOrDead(Local_131[iVar0 /*20*/]))
							{
								PED::EXPLODE_PED_HEAD(Local_131[iVar0 /*20*/], joaat("weapon_sniperrifle"));
								ENTITY::SET_ENTITY_HEALTH(Local_131[iVar0 /*20*/], 0);
							}
							iVar0++;
						}
					}
					if (!GlobalFunc_188())
					{
						GlobalFunc_7087(Local_111.f_9, 5f);
						if (iLocal_442 == 0)
						{
							if (iLocal_98 == 3)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_442 = 1;
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
					GlobalFunc_7097(Local_111.f_9, Local_688, 0f, 0, 0);
					if (!GlobalFunc_188())
					{
						GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_688, 254.9762f, 0, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_442 == 0)
						{
							if (iLocal_98 == 4)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_442 = 1;
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
						if (iLocal_442 == 0)
						{
							if (iLocal_98 == 3)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_442 = 1;
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





void func_7()//Position - 0x761
{
	int iVar0;
	
	func_8();
	Local_111.f_17 = 0;
	Local_111.f_18 = 0;
	Local_111.f_19 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_472 - 1))
	{
		Local_131[iVar0 /*20*/].f_15 = 0;
		Local_131[iVar0 /*20*/].f_16 = 0;
		Local_131[iVar0 /*20*/].f_17 = 0;
		iVar0++;
	}
}

void func_8()//Position - 0x7AD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_55)
	{
		GlobalFunc_169(&(Local_55[iVar0 /*4*/]));
		iVar0++;
	}
}















void func_23(int iParam0, int iParam1, int iParam2)//Position - 0xB73
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

void func_24(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xBA7
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









void func_33(int iParam0)//Position - 0xE5D
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 4:
				GlobalFunc_9152(&cLocal_676);
				func_63();
				while (!GlobalFunc_7956(1, 1093140480, 0) || !func_34())
				{
					GlobalFunc_9152(&cLocal_676);
					func_63();
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
}

int func_34()//Position - 0xEB9
{
	if (GlobalFunc_1986(Local_691, Local_384.f_1, 210f))
	{
		if (!iLocal_451)
		{
			if ((func_55(2) && GlobalFunc_5708(&Local_392, Local_392.f_5, Local_392.f_1, Local_392.f_4, 1)) && GlobalFunc_5708(&Local_398, Local_398.f_5, Local_398.f_1, Local_398.f_4, 1))
			{
				if (GlobalFunc_5707(&Local_384, Local_384.f_6, Local_384.f_1, Local_384.f_4, 1, 0, 1))
				{
					func_46();
					iLocal_451 = 1;
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_404))
		{
			if (GlobalFunc_1986(Local_691, Local_404.f_1, 150f))
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
			if (GlobalFunc_1986(Local_691, Local_410.f_1, 150f))
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
		iLocal_451 = 0;
	}
	return iLocal_451;
}












void func_46()//Position - 0x11E7
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









int func_55(int iParam0)//Position - 0x144D
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
			STREAMING::REQUEST_ANIM_DICT("oddjobs@bailbond_surf_farm");
			if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@bailbond_surf_farm"))
			{
				return 1;
			}
			break;
	}
	return 0;
}








void func_63()//Position - 0x17F0
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





void func_68()//Position - 0x194B
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
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_384))
				{
					GlobalFunc_7090(Local_384, 0);
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
					iLocal_443 = 1;
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
			while (iVar1 <= (iLocal_472 - 1))
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
			GlobalFunc_10100(1);
			iLocal_99 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_88(1);
				func_523();
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
							if (GlobalFunc_775(Local_384, Local_691, 35f))
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
					if (!iLocal_443)
					{
						STREAMING::REQUEST_ANIM_DICT(GlobalFunc_2310());
						if (GlobalFunc_7959(&Local_384, &Local_392, &iLocal_479))
						{
							iLocal_443 = 1;
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




















void func_88(bool bParam0)//Position - 0x24E6
{
	int iVar0;
	
	if (iLocal_470 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_470 - 1))
		{
			GlobalFunc_5721(&(Local_290[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_468 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_468 - 1))
		{
			GlobalFunc_5721(&(Local_339[iVar0 /*9*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_471 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_471 - 1))
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
	if (iLocal_472 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_472 - 1))
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
	if (iLocal_469 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_469 - 1))
		{
			GlobalFunc_7957(&(Local_253[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
}

















void func_105()//Position - 0x2CEF
{
	func_108(iLocal_472);
	GlobalFunc_846(&(Local_111.f_8));
	GlobalFunc_589(&Local_111);
	GlobalFunc_846(&uLocal_455);
}



void func_108(int iParam0)//Position - 0x2DA1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		GlobalFunc_589(&(Local_131[iVar0 /*20*/].f_6));
		iVar0++;
	}
}

void func_109()//Position - 0x2DCA
{
	int iVar0;
	struct<6> Var1;
	
	Var1 = 4;
	Var1.f_5 = 3;
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
			GlobalFunc_5706(&Local_384, 1);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_663);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_663, 1862763509);
			iVar0 = 0;
			while (iVar0 <= (iLocal_472 - 1))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_131[iVar0 /*20*/]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_131[iVar0 /*20*/], iLocal_663);
					if (!PED::IS_PED_FLEEING(Local_131[iVar0 /*20*/]))
					{
						func_111(iVar0);
					}
				}
				iVar0++;
			}
			iLocal_476 = MISC::GET_GAME_TIMER();
			iLocal_99 = 1;
			break;
		
		case 1:
			if (GlobalFunc_2311(iLocal_476, 500))
			{
				if (!iLocal_434)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4935();
						GlobalFunc_4956();
					}
					if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_PK1", 4, 0, 0, 0))
					{
						iLocal_434 = 1;
					}
				}
				if (!iLocal_444)
				{
					SCRIPT::REQUEST_SCRIPT(&cLocal_670);
					if (SCRIPT::HAS_SCRIPT_LOADED(&cLocal_670))
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_472 - 1))
						{
							if (iVar0 < Var1)
							{
								Var1[iVar0] = Local_131[iVar0 /*20*/];
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 <= (iLocal_469 - 1))
						{
							if (iVar0 < Var1.f_5)
							{
								Var1.f_5[iVar0] = Local_253[iVar0 /*6*/];
							}
							iVar0++;
						}
						SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&cLocal_670, &Var1, 9, 512);
						SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_670);
						iLocal_444 = 1;
					}
				}
				if (iLocal_434 && iLocal_444)
				{
					func_112(2);
				}
				if (GlobalFunc_2311(iLocal_476, 1500))
				{
					func_112(2);
				}
			}
			break;
	}
}


void func_111(int iParam0)//Position - 0x2F81
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_131[iParam0 /*20*/]))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(Local_131[iParam0 /*20*/]);
		TASK::CLEAR_PED_TASKS(Local_131[iParam0 /*20*/]);
		TASK::TASK_CLEAR_LOOK_AT(Local_131[iParam0 /*20*/]);
		PED::SET_PED_HEARING_RANGE(Local_131[iParam0 /*20*/], 30f);
		PED::SET_PED_SEEING_RANGE(Local_131[iParam0 /*20*/], 30f);
		PED::SET_PED_ID_RANGE(Local_131[iParam0 /*20*/], 30f);
		PED::SET_PED_COMBAT_RANGE(Local_131[iParam0 /*20*/], 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_131[iParam0 /*20*/], 1, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_131[iParam0 /*20*/], 3, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_131[iParam0 /*20*/], 5, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_131[iParam0 /*20*/], 0, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_131[iParam0 /*20*/], 512, 1);
		PED::SET_PED_ACCURACY(Local_131[iParam0 /*20*/], MISC::GET_RANDOM_INT_IN_RANGE(10, 20));
		PED::SET_PED_SHOOT_RATE(Local_131[iParam0 /*20*/], MISC::GET_RANDOM_INT_IN_RANGE(15, 20));
		PED::SET_PED_FIRING_PATTERN(Local_131[iParam0 /*20*/], 445831135);
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_131[iParam0 /*20*/], ENTITY::GET_ENTITY_COORDS(Local_131[iParam0 /*20*/], 1), 45f, 0, 0);
		}
		else
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_131[iParam0 /*20*/], ENTITY::GET_ENTITY_COORDS(Local_131[iParam0 /*20*/], 1), 35f, 0, 0);
		}
		TASK::TASK_LOOK_AT_ENTITY(Local_131[iParam0 /*20*/], PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
		TASK::TASK_COMBAT_PED(Local_131[iParam0 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_131[iParam0 /*20*/], 0);
		Local_131[iParam0 /*20*/].f_14 = 2;
	}
}

void func_112(int iParam0)//Position - 0x30D8
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
	func_523();
}








void func_120()//Position - 0x39FF
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	switch (iLocal_99)
	{
		case 0:
			GlobalFunc_9152(&cLocal_676);
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
					bLocal_449 = false;
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
				bLocal_449 = true;
			}
			if (!bLocal_449)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
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
				if (bLocal_441)
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
				func_121(5);
			}
			break;
	}
}

void func_121(int iParam0)//Position - 0x3D04
{
	iLocal_97 = iParam0;
	iLocal_99 = 0;
}






























































void func_183(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x7A9A
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





















































































































void func_300()//Position - 0x23CA0
{
	bool bVar0;
	struct<3> Var1;
	
	bVar0 = false;
	func_34();
	func_361();
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_111.f_9, 0) };
		func_360(Local_111.f_9, &iLocal_473, 1126825984, 7);
		func_352(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_340();
		switch (iLocal_99)
		{
			case 0:
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_663);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_663, 1862763509);
				iLocal_477 = ENTITY::GET_ENTITY_HEALTH(Local_111.f_9);
				Local_706 = { ENTITY::GET_ENTITY_COORDS(Local_111.f_9, 0) };
				GlobalFunc_2318(&Local_709, Local_706);
				func_338(Local_111.f_9);
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
				iLocal_474 = -1;
				iLocal_475 = -1;
				iLocal_447 = 0;
				iLocal_417 = 0;
				iLocal_416 = 0;
				sLocal_486 = "BB2_J8";
				iLocal_462 = MISC::GET_GAME_TIMER();
				GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_465, iLocal_466, 0);
				iLocal_99 = 1;
				break;
			
			case 1:
				if (!iLocal_447)
				{
					GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_465, iLocal_466, 0);
					GlobalFunc_10693(&uLocal_43, Local_111.f_9, 0, 0, 1, 1, 1);
					if (Local_111.f_10 == 13 || Local_111.f_10 == 14)
					{
						if (iLocal_475 == -1)
						{
							iLocal_475 = MISC::GET_GAME_TIMER();
						}
						if (iLocal_474 == -1)
						{
							iLocal_474 = MISC::GET_GAME_TIMER();
						}
						else if (GlobalFunc_2311(iLocal_474, 8000))
						{
							bVar0 = true;
						}
						if (GlobalFunc_7093(Local_111.f_9, Local_691, bVar0, 0, 1, iLocal_477))
						{
							if ((GlobalFunc_2311(iLocal_475, 5000) || GlobalFunc_100(Local_709, 0f, 0f, 0f)) || (!GlobalFunc_1986(Var1, Local_709, 8.5f) && !GlobalFunc_1986(Var1, Local_706, 8.5f)))
							{
								func_311();
								Local_111.f_17 = MISC::GET_GAME_TIMER();
								GlobalFunc_4948(&uLocal_43, 0, 0);
								iLocal_447 = 1;
							}
						}
						else
						{
							if (!iLocal_416)
							{
								if (!GlobalFunc_2311(iLocal_462, 2500))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_775(Local_111.f_9, Local_691, 30f))
										{
											if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_J7", 4, 0, 0, 0))
											{
												iLocal_462 = MISC::GET_GAME_TIMER();
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
								if (GlobalFunc_2311(iLocal_462, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
								{
									if (GlobalFunc_775(Local_111.f_9, Local_691, 30f))
									{
										if (PED::IS_PED_FLEEING(Local_111.f_9))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 101) < 30)
											{
												if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_462 = MISC::GET_GAME_TIMER();
												}
											}
											else if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_FLEE", 4, 0, 0, 0))
											{
												iLocal_462 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else
							{
								iLocal_462 = MISC::GET_GAME_TIMER();
							}
							GlobalFunc_2317(Local_111.f_9, Local_691, iLocal_475, 925353388);
						}
					}
					else
					{
						func_311();
						Local_111.f_17 = MISC::GET_GAME_TIMER();
						GlobalFunc_4948(&uLocal_43, 0, 0);
						iLocal_447 = 1;
					}
				}
				else
				{
					func_311();
					if (!GlobalFunc_775(Local_111.f_9, Local_691, 10f))
					{
						if (!iLocal_436)
						{
							if (!GlobalFunc_5710(sLocal_486, 1))
							{
								GlobalFunc_5709(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_465, &iLocal_466, 1, 1);
								iLocal_436 = 1;
							}
						}
						else
						{
							GlobalFunc_5713(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_465, iLocal_466, 1);
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
						GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_465, iLocal_466, 0);
					}
					if (GlobalFunc_7092(&(Local_111.f_9)))
					{
						iLocal_453 = 1;
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
				func_311();
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_663);
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_663, 1862763509);
				GlobalFunc_846(&(Local_111.f_8));
				iLocal_417 = 1;
				Local_111.f_17 = MISC::GET_GAME_TIMER();
				GlobalFunc_4948(&uLocal_43, 0, 0);
				iLocal_448 = 0;
				iLocal_453 = 0;
				iLocal_418 = 1;
				func_121(3);
				break;
			}
	}
}











void func_311()//Position - 0x24510
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		if (((Local_111.f_10 != 23 && Local_111.f_10 != 24) && Local_111.f_10 != 21) && Local_111.f_10 != 22)
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
			Local_111.f_10 = 23;
		}
	}
}



























void func_338(int iParam0)//Position - 0x25718
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0, iLocal_663);
	PED::SET_PED_CONFIG_FLAG(iParam0, 177, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 116, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, 1);
	PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iParam0, 10f, 5);
	PED::SET_PED_AS_ENEMY(iParam0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
}


void func_340()//Position - 0x25844
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		if (iLocal_252 == 0)
		{
			GlobalFunc_2323(&(Local_111.f_9), &bLocal_454);
			if (GlobalFunc_5714())
			{
				if (iLocal_447 || iLocal_97 == 7)
				{
					if (bLocal_454)
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
			GlobalFunc_2323(&(Local_111.f_9), &bLocal_454);
			if (bLocal_454)
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
					if (GlobalFunc_775(Local_111.f_9, Local_691, 20f))
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
					if (!GlobalFunc_775(Local_111.f_9, Local_691, 3.5f))
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
					if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 500)))
					{
						PED::SET_PED_HEARING_RANGE(Local_111.f_9, 30f);
						PED::SET_PED_SEEING_RANGE(Local_111.f_9, 30f);
						PED::SET_PED_ID_RANGE(Local_111.f_9, 30f);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 3, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 5, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_111.f_9, 512, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 0, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 14, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 28, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 37, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 43, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 45, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 50, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_111.f_9, 51, 0);
						PED::SET_PED_COMBAT_RANGE(Local_111.f_9, 2);
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
						TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(Local_111.f_9, Local_694, 30f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
						Local_111.f_10 = 30;
					}
					break;
				
				case 30:
					if (!GlobalFunc_6964(Local_111.f_9, 780511057))
					{
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						Local_111.f_10 = 29;
					}
					break;
				
				case 13:
					if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(0, 500)))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_111.f_9))
						{
							PED::SET_PED_PANIC_EXIT_SCENARIO(Local_111.f_9, Local_691);
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
					PED::SET_PED_CONFIG_FLAG(Local_111.f_9, 173, 1);
					PED::SET_PED_RESET_FLAG(Local_111.f_9, 237, 1);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_111.f_9, 3f);
					if (GlobalFunc_4947(Local_253[0 /*6*/]))
					{
						if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_253[0 /*6*/], 0) && GlobalFunc_775(Local_253[0 /*6*/], Local_253[0 /*6*/].f_1, 3f)) && GlobalFunc_2320(ENTITY::GET_ENTITY_HEADING(Local_253[0 /*6*/]), Local_253[0 /*6*/].f_4, 20f))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_111.f_9, Local_253[0 /*6*/], 0) && !PED::IS_PED_BEING_JACKED(Local_111.f_9))
							{
								Local_111.f_10 = 16;
							}
							else if (GlobalFunc_2311(Local_111.f_18, MISC::GET_RANDOM_INT_IN_RANGE(250, 350)))
							{
								if (PED::IS_PED_USING_ANY_SCENARIO(Local_111.f_9))
								{
									PED::SET_PED_PANIC_EXIT_SCENARIO(Local_111.f_9, Local_691);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(Local_111.f_9);
								}
								TASK::TASK_ENTER_VEHICLE(Local_111.f_9, Local_253[0 /*6*/], 25000, -1, 2f, 8388608, 0);
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
					if (!GlobalFunc_4947(Local_253[0 /*6*/]))
					{
						Local_111.f_10 = 13;
					}
					else if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_253[0 /*6*/], 0) || PED::IS_PED_BEING_JACKED(Local_111.f_9)) || !GlobalFunc_775(Local_253[0 /*6*/], Local_253[0 /*6*/].f_1, 3f)) || !GlobalFunc_2320(ENTITY::GET_ENTITY_HEADING(Local_253[0 /*6*/]), Local_253[0 /*6*/].f_4, 20f))
					{
						Local_111.f_10 = 13;
					}
					else if (PED::IS_PED_SITTING_IN_VEHICLE(Local_111.f_9, Local_253[0 /*6*/]))
					{
						Local_111.f_10 = 31;
					}
					else if (!GlobalFunc_6964(Local_111.f_9, -1794415470))
					{
						Local_111.f_10 = 15;
					}
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_111.f_9, 2f);
					break;
				
				case 17:
					if (GlobalFunc_4947(Local_253[0 /*6*/]) && PED::IS_PED_SITTING_IN_VEHICLE(Local_111.f_9, Local_253[0 /*6*/]))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_111.f_9, Local_253[0 /*6*/], PLAYER::PLAYER_PED_ID(), 8, 30f, 786468, 350f, 30f, 1);
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
									fVar3 = ENTITY::GET_ENTITY_SPEED(iVar1);
									if (fVar3 < 1.75f && GlobalFunc_775(Local_111.f_9, Local_691, 8f))
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
							if ((!GlobalFunc_2319(Local_111.f_19, 10) && GlobalFunc_775(Local_111.f_9, Local_691, 50f)) || !GlobalFunc_2311(iLocal_480, 2000))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_111.f_9, 1))
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
					else if (!iLocal_448)
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
									if (!GlobalFunc_2319(Local_111.f_19, 10) && GlobalFunc_775(Local_111.f_9, Local_691, 50f))
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
							else if (!GlobalFunc_2319(Local_111.f_19, 10) && GlobalFunc_775(Local_111.f_9, Local_691, 50f))
							{
								if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_111.f_9)) || func_344())
								{
									Local_111.f_10 = 23;
								}
							}
						}
					}
					else if (!iLocal_448)
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
				
				case 31:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111.f_9, 1);
					Local_111.f_10 = 32;
					break;
				
				case 32:
					break;
				}
			}
	}
}




int func_344()//Position - 0x26A53
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

int func_345(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, float fParam5, bool bParam6)//Position - 0x26AC0
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
		if (GlobalFunc_775(iParam0, Local_691, fParam2))
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







void func_352(int iParam0, var uParam1, float fParam2, int iParam3)//Position - 0x26DED
{
	if (GlobalFunc_115(iParam0))
	{
		if (func_353(iParam0, PLAYER::PLAYER_PED_ID(), fParam2, 1, 250, iParam3))
		{
			*uParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

bool func_353(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x26E19
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



int func_356()//Position - 0x270CB
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



int func_359(int iParam0, int iParam1)//Position - 0x271C7
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

void func_360(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x27206
{
	if (GlobalFunc_115(iParam0))
	{
		if (func_353(PLAYER::PLAYER_PED_ID(), iParam0, fParam2, 1, 250, iParam3))
		{
			*iParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

void func_361()//Position - 0x27232
{
	if (GlobalFunc_1986(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_688, 100f))
	{
		if (!GlobalFunc_2233())
		{
			CUTSCENE::REQUEST_CUTSCENE(&cLocal_676, 8);
			func_63();
			iLocal_452 = 1;
		}
	}
	else if (iLocal_452)
	{
		if (!GlobalFunc_1986(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_688, 120f))
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_452 = 0;
			}
		}
		else
		{
			func_63();
		}
	}
	if (iLocal_452)
	{
		if (GlobalFunc_2233())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_452 = 0;
		}
	}
}


void func_363()//Position - 0x272C8
{
	func_34();
	func_361();
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		func_360(Local_111.f_9, &iLocal_473, 1126825984, 7);
		func_352(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_340();
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
					if (!GlobalFunc_775(Local_111.f_9, Local_691, 25f))
					{
						if (Local_111.f_10 == 21 || Local_111.f_10 == 22)
						{
							Local_111.f_18 = MISC::GET_GAME_TIMER();
							Local_111.f_10 = 25;
						}
						if (GlobalFunc_2319(iLocal_473, 10))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T9", 4, 0, 0, 0))
								{
									iLocal_462 = MISC::GET_GAME_TIMER();
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
						func_364();
					}
				}
				else if (GlobalFunc_775(Local_111.f_9, Local_691, 8f))
				{
					if (Local_111.f_10 == 25 || Local_111.f_10 == 26)
					{
						Local_111.f_18 = MISC::GET_GAME_TIMER();
						Local_111.f_10 = 21;
					}
					iLocal_438 = 0;
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
								if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T10", 4, 0, 0, 0))
								{
									iLocal_462 = MISC::GET_GAME_TIMER();
								}
							}
							else if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_J5", 4, 0, 0, 0))
							{
								iLocal_462 = MISC::GET_GAME_TIMER();
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
					iLocal_453 = 1;
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
				if (iLocal_453)
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

void func_364()//Position - 0x275C4
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
			iLocal_462 = MISC::GET_GAME_TIMER();
		}
		if (!iLocal_420)
		{
			if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_J6", 4, 0, 0, 0))
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
							iLocal_461 = MISC::GET_GAME_TIMER();
							iLocal_446 = 1;
						}
					}
					else if (!iLocal_421[0])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_461) > 7500)
						{
							func_367(0);
						}
					}
					else if (!iLocal_421[1])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_461) > 10000)
						{
							func_367(1);
						}
					}
					else if (!iLocal_421[2])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_461) > 10000)
						{
							func_367(2);
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
									if (GlobalFunc_2311(iLocal_478, 3500))
									{
										if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_STOP", 4, 0, 0, 0))
										{
											iLocal_432 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_432)
						{
							if (!GlobalFunc_5710("BB2_STOP", 1))
							{
								iLocal_478 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							iLocal_478 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (!iLocal_419)
				{
					if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_J9", 4, 0, 0, 0))
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
				iLocal_478 = MISC::GET_GAME_TIMER();
			}
			iLocal_427 = 0;
			iLocal_428 = 0;
		}
		else
		{
			iLocal_478 = MISC::GET_GAME_TIMER();
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
					else if (!GlobalFunc_5710("BBC_T8", 1) && !GlobalFunc_5710("BB2_WTF", 1))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) < 5)
						{
							if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T8", 4, iVar1, 0, 0))
							{
								iLocal_427 = 1;
							}
						}
						else if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_WTF", 4, iVar1, 0, 0))
						{
							iLocal_427 = 1;
						}
					}
				}
				else if (!iLocal_431)
				{
					if (GlobalFunc_7095(&iVar0))
					{
						if ((!GlobalFunc_5710("BB2_JACK", 1) && !GlobalFunc_5710("BBC_T6", 1)) && !GlobalFunc_5710("BBC_T8", 1))
						{
							if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_JACK", 4, iVar1, 0, 0))
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
						if (!GlobalFunc_5710("BBC_T7", 1) && !GlobalFunc_5710("BB2_OUT", 1))
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) < 5)
							{
								if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T7", 4, iVar1, 0, 0))
								{
									iLocal_428 = 1;
								}
							}
							else if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_OUT", 4, iVar1, 0, 0))
							{
								iLocal_428 = 1;
							}
						}
					}
				}
				else if (Local_111.f_10 == 24 && GlobalFunc_6964(Local_111.f_9, -1519143300))
				{
					if (GlobalFunc_775(Local_111.f_9, Local_691, 25f))
					{
						if (!GlobalFunc_5710("BB2_J10", 1))
						{
							if (GlobalFunc_2311(iLocal_463, MISC::GET_RANDOM_INT_IN_RANGE(2500, 5000)))
							{
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_J10", 4, 0, 0, 0))
								{
									iLocal_463 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else
						{
							iLocal_463 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					iLocal_463 = 0;
					if (!iLocal_419)
					{
						if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_J9", 4, 0, 0, 0))
						{
							iLocal_462 = MISC::GET_GAME_TIMER();
							iLocal_419 = 1;
						}
					}
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_2311(iLocal_462, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000)))
						{
							if (!GlobalFunc_775(Local_111.f_9, Local_691, 20f))
							{
								if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_J4", 4, 0, 0, 0))
								{
									iLocal_462 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
		}
	}
}



void func_367(int iParam0)//Position - 0x27A90
{
	if (!iLocal_421[iParam0])
	{
		if (GlobalFunc_10865(&uLocal_498, cLocal_491, sLocal_487[iParam0], 4, 0, 0, 0))
		{
			iLocal_421[iParam0] = 1;
			iLocal_446 = 0;
			iLocal_461 = 0;
		}
	}
}

void func_368()//Position - 0x27ACB
{
	func_34();
	func_361();
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		func_360(Local_111.f_9, &iLocal_473, 1126825984, 7);
		func_352(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_340();
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
					if (!GlobalFunc_775(Local_111.f_9, Local_691, 25f))
					{
						if (Local_111.f_10 == 21 || Local_111.f_10 == 22)
						{
							Local_111.f_18 = MISC::GET_GAME_TIMER();
							Local_111.f_10 = 25;
						}
						if (GlobalFunc_2319(iLocal_473, 10))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T9", 4, 0, 0, 0))
								{
									iLocal_462 = MISC::GET_GAME_TIMER();
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
						if (!HUD::DOES_BLIP_EXIST(uLocal_455))
						{
							if (iLocal_435)
							{
								uLocal_455 = GlobalFunc_2324(Local_688, 5, 1);
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
								iLocal_462 = MISC::GET_GAME_TIMER();
								iLocal_435 = 1;
							}
						}
						else
						{
							func_364();
							GlobalFunc_7096(&Local_384, Local_691, &iLocal_464, 5000, 1101004800);
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_688, 4f, 4f, 2f, 1, 1, 0))
						{
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2732.815f, 4143.618f, 42.02822f, 2724.603f, 4144.803f, 46.33084f, 9f, 0, 1, 0))
						{
							iLocal_99 = 2;
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_688, 6.5f))
							{
								iLocal_99 = 2;
							}
						}
						else if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_688, 2.5f))
						{
							iLocal_99 = 2;
						}
					}
				}
				else
				{
					GlobalFunc_846(&uLocal_455);
					if (GlobalFunc_663("BBS_DROP", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("BBS_DROP");
					}
					if (GlobalFunc_775(Local_111.f_9, Local_691, 8f))
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
									if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T10", 4, 0, 0, 0))
									{
										iLocal_462 = MISC::GET_GAME_TIMER();
									}
								}
								else if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_J5", 4, 0, 0, 0))
								{
									iLocal_462 = MISC::GET_GAME_TIMER();
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
					bLocal_445 = func_369(Local_691, Local_102, 180f);
				}
				if (GlobalFunc_7092(&(Local_111.f_9)))
				{
					iLocal_453 = 1;
					iLocal_99 = 2;
				}
				break;
			
			case 2:
				GlobalFunc_846(&uLocal_455);
				if (GlobalFunc_663("BBS_DROP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("BBS_DROP");
				}
				if (iLocal_453)
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
					if (!bLocal_445)
					{
						bLocal_445 = func_369(Local_691, Local_102, 0f);
					}
					func_121(4);
				}
				break;
			}
	}
}

int func_369(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x27EB8
{
	int iVar0;
	
	if (!GlobalFunc_497(Param0, Param3, fParam6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		if (iLocal_472 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_472 - 1))
			{
				GlobalFunc_2297(&(Local_131[iVar0 /*20*/]), 1, 0, 1);
				iVar0++;
			}
		}
		if (iLocal_469 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_469 - 1))
			{
				GlobalFunc_131(&(Local_253[iVar0 /*6*/]));
				iVar0++;
			}
		}
		if (iLocal_470 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_470 - 1))
			{
				GlobalFunc_129(&(Local_290[iVar0 /*6*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_468 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_468 - 1))
			{
				GlobalFunc_129(&(Local_339[iVar0 /*9*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_471 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_471 - 1))
			{
				GlobalFunc_841(&(Local_376[iVar0 /*7*/]));
				iVar0++;
			}
		}
	}
	return 0;
}





void func_374()//Position - 0x280CA
{
	bool bVar0;
	
	bVar0 = false;
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		func_360(Local_111.f_9, &iLocal_473, 1126825984, 7);
		func_352(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_340();
		switch (iLocal_99)
		{
			case 0:
				if (Local_111.f_10 != 29 && Local_111.f_10 != 30)
				{
					Local_111.f_18 = MISC::GET_GAME_TIMER();
					Local_111.f_10 = 29;
				}
				func_379(iLocal_472);
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
					{
						Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 0, 5);
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_111.f_9);
				}
				GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_465, iLocal_466, 0);
				iLocal_99 = 1;
				break;
			
			case 1:
				func_377(iLocal_472);
				if (!iLocal_447)
				{
					GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_465, iLocal_466, 0);
					GlobalFunc_10693(&uLocal_43, Local_111.f_9, 0, 0, 1, 1, 1);
					if (!iLocal_416)
					{
						if (GlobalFunc_775(Local_111.f_9, Local_691, 30f))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10865(&uLocal_498, cLocal_491, sLocal_485, 4, 0, 0, 0))
								{
									Local_111.f_17 = MISC::GET_GAME_TIMER();
									iLocal_462 = MISC::GET_GAME_TIMER();
									iLocal_416 = 1;
								}
							}
						}
						else
						{
							iLocal_416 = 1;
						}
					}
					if (Local_111.f_10 == 13 || Local_111.f_10 == 14)
					{
						if (iLocal_475 == -1)
						{
							iLocal_475 = MISC::GET_GAME_TIMER();
						}
						if (iLocal_474 == -1)
						{
							iLocal_474 = MISC::GET_GAME_TIMER();
						}
						else if (GlobalFunc_2311(iLocal_474, 5000))
						{
							bVar0 = true;
						}
						if (GlobalFunc_7093(Local_111.f_9, Local_691, bVar0, 0, 1, 170))
						{
							func_311();
							func_376(iLocal_472);
							Local_111.f_17 = MISC::GET_GAME_TIMER();
							GlobalFunc_4948(&uLocal_43, 0, 0);
							iLocal_447 = 1;
						}
						else
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_2311(iLocal_462, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000)))
								{
									if (GlobalFunc_775(Local_111.f_9, Local_691, 30f))
									{
										if (PED::IS_PED_FLEEING(Local_111.f_9))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 101) < 30)
											{
												if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_462 = MISC::GET_GAME_TIMER();
												}
											}
											else if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_FLEE", 4, 0, 0, 0))
											{
												iLocal_462 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else
							{
								iLocal_462 = MISC::GET_GAME_TIMER();
							}
							GlobalFunc_2317(Local_111.f_9, Local_691, iLocal_475, 925353388);
						}
					}
					else if ((iLocal_467 > 0 && GlobalFunc_775(Local_111.f_9, Local_691, 85f)) || ENTITY::GET_ENTITY_HEALTH(Local_111.f_9) < 200)
					{
						Local_111.f_10 = 13;
						Local_111.f_18 = (MISC::GET_GAME_TIMER() - 5000);
						iLocal_474 = MISC::GET_GAME_TIMER();
						if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_9))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_111.f_9);
						}
					}
					else if (!GlobalFunc_111())
					{
						if (GlobalFunc_2311(iLocal_462, MISC::GET_RANDOM_INT_IN_RANGE(3500, 7000)))
						{
							if (GlobalFunc_775(Local_111.f_9, Local_691, 30f))
							{
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 101) < 30)
								{
									if (GlobalFunc_10865(&uLocal_498, cLocal_492, "BBC_T2", 4, 0, 0, 0))
									{
										iLocal_462 = MISC::GET_GAME_TIMER();
									}
								}
								else if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_SHOOT", 4, 0, 0, 0))
								{
									iLocal_462 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					else
					{
						iLocal_462 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					func_311();
					if (!GlobalFunc_775(Local_111.f_9, Local_691, 10f))
					{
						if (!iLocal_436)
						{
							if (!GlobalFunc_5710(sLocal_486, 1))
							{
								GlobalFunc_5709(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_465, &iLocal_466, 1, 1);
								iLocal_436 = 1;
							}
						}
						else
						{
							GlobalFunc_5713(&(Local_111.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_465, iLocal_466, 1);
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
						GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_465, iLocal_466, 0);
					}
					if (GlobalFunc_7092(&(Local_111.f_9)))
					{
						iLocal_453 = 1;
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
				func_376(iLocal_472);
				GlobalFunc_846(&(Local_111.f_8));
				func_108(iLocal_467);
				func_311();
				Local_111.f_17 = MISC::GET_GAME_TIMER();
				GlobalFunc_4948(&uLocal_43, 0, 0);
				GlobalFunc_2325(1, &uLocal_482);
				if (iLocal_453)
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


void func_376(int iParam0)//Position - 0x28697
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (Local_131[iVar0 /*20*/].f_14 != 5)
		{
			GlobalFunc_7958(Local_131[iVar0 /*20*/], 1);
			Local_131[iVar0 /*20*/].f_14 = 4;
			GlobalFunc_589(&(Local_131[iVar0 /*20*/].f_6));
		}
		iVar0++;
	}
}

void func_377(int iParam0)//Position - 0x286E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_131[iVar0 /*20*/]))
		{
			func_352(Local_131[iVar0 /*20*/], &(Local_131[iVar0 /*20*/].f_17), 1126825984, 7);
			switch (Local_131[iVar0 /*20*/].f_14)
			{
				case 0:
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							iVar2 = 250;
							break;
						
						case 1:
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(750, 1250);
							break;
						
						case 2:
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1500, 2000);
							break;
						
						case 3:
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(2500, 3000);
							break;
						
						default:
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(500, 1500);
							break;
					}
					if (GlobalFunc_2311(Local_131[iVar0 /*20*/].f_15, iVar2))
					{
						func_111(iVar0);
					}
					break;
				
				case 2:
					GlobalFunc_661(Local_131[iVar0 /*20*/], &(Local_131[iVar0 /*20*/].f_6), -1, 0, 0, 0, -1082130432, 0);
					break;
				
				case 3:
					if (!GlobalFunc_6964(Local_131[iVar0 /*20*/], -2017877118))
					{
						func_111(iVar0);
					}
					break;
				
				case 4:
					if (!GlobalFunc_6964(Local_131[iVar0 /*20*/], 1805844857))
					{
						GlobalFunc_7958(Local_131[iVar0 /*20*/], 1);
					}
					GlobalFunc_589(&(Local_131[iVar0 /*20*/].f_6));
					break;
			}
		}
		else
		{
			if (Local_131[iVar0 /*20*/].f_14 != 5)
			{
				GlobalFunc_589(&(Local_131[iVar0 /*20*/].f_6));
				Local_131[iVar0 /*20*/].f_14 = 5;
			}
			iVar1++;
		}
		iVar0++;
	}
	iLocal_467 = iVar1;
}


void func_379(int iParam0)//Position - 0x28986
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_131[iVar0 /*20*/]))
		{
			Local_131[iVar0 /*20*/].f_15 = MISC::GET_GAME_TIMER();
			Local_131[iVar0 /*20*/].f_14 = 1;
		}
		iVar0++;
	}
}

void func_380()//Position - 0x289C5
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_111.f_9))
	{
		func_360(Local_111.f_9, &iLocal_473, 1126825984, 1);
		func_352(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
		func_340();
		switch (iLocal_99)
		{
			case 0:
				if (!HUD::DOES_BLIP_EXIST(Local_111.f_8))
				{
					Local_111.f_8 = GlobalFunc_4955(Local_111.f_9, 1, 0, 5);
				}
				GlobalFunc_5709(&(Local_111.f_8), "", "", &iLocal_465, &iLocal_466, 1, 0);
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
							GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_465, iLocal_466, 0);
						}
						else if (!iLocal_437)
						{
							if (!GlobalFunc_5710("BBC_T14", 1))
							{
								GlobalFunc_5709(&(Local_111.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_465, &iLocal_466, 1, 1);
								iLocal_437 = 1;
							}
						}
						else
						{
							GlobalFunc_5713(&(Local_111.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_465, iLocal_466, 1);
							if (GlobalFunc_775(Local_111.f_9, Local_691, 22f) && GlobalFunc_2326(Local_111.f_9, Local_691, 10f))
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
								else if (func_388(Local_111.f_9, iLocal_473, 0, 1102053376, 1086324736))
								{
									iLocal_100 = 0;
								}
								else if (GlobalFunc_775(Local_111.f_9, Local_691, 5f))
								{
									iLocal_100 = 0;
								}
								else if (GlobalFunc_5717(&(Local_111.f_19)))
								{
									if (GlobalFunc_775(Local_111.f_9, Local_691, (22f - 1.5f)))
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
							func_384();
						}
						if (func_345(Local_111.f_9, Local_111.f_19, 22f, 0, 1090519040, 1097859072, 0))
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
							if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_J2", 4, 0, 0, 0))
							{
								Local_111.f_17 = MISC::GET_GAME_TIMER();
								iLocal_462 = MISC::GET_GAME_TIMER();
								iLocal_429 = 1;
							}
							GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_465, iLocal_466, 0);
						}
						else if (!iLocal_425)
						{
							if (!GlobalFunc_5710("BBC_T14", 1) && !GlobalFunc_5710("BB2_J2", 1))
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
									if (GlobalFunc_2311(iLocal_462, 1250))
									{
										Local_111.f_17 = (MISC::GET_GAME_TIMER() - 3000);
										iLocal_425 = 1;
									}
								}
							}
							else
							{
								iLocal_462 = MISC::GET_GAME_TIMER();
							}
							GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_465, iLocal_466, 0);
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
						if (func_345(Local_111.f_9, Local_111.f_19, 22f, 0, 1090519040, 1097859072, 0))
						{
							iLocal_99 = 2;
						}
						break;
					
					case 3:
						GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_465, iLocal_466, 0);
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
				func_381(0);
				GlobalFunc_5713(&(Local_111.f_8), "", "", &iLocal_465, iLocal_466, 0);
				iLocal_465 = MISC::GET_GAME_TIMER();
				iLocal_466 = MISC::GET_GAME_TIMER();
				func_121(2);
				break;
			}
	}
}

void func_381(bool bParam0)//Position - 0x28EA4
{
	if (GlobalFunc_5710("BB2_AMB", 0))
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



void func_384()//Position - 0x28EFC
{
	if (!iLocal_430)
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_775(Local_111.f_9, Local_691, (22f + 5f)))
			{
				iLocal_456 = 0;
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					iLocal_456 = 1;
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_682))
				{
					if (GlobalFunc_10865(&uLocal_498, cLocal_491, "BB2_AMB", 1, iLocal_456, 0, 0))
					{
						iLocal_430 = 1;
					}
				}
				else if (func_386(&uLocal_498, cLocal_491, "BB2_AMB", &Local_682, 1, iLocal_456, 0))
				{
					iLocal_430 = 1;
					StringCopy(&Local_682, "", 24);
				}
			}
		}
	}
	else if (GlobalFunc_5710("BB2_AMB", 0))
	{
		if (!GlobalFunc_775(Local_111.f_9, Local_691, (22f + 10f)))
		{
			Local_682 = { GlobalFunc_514() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_682))
			{
				iLocal_430 = 0;
				GlobalFunc_5105();
			}
		}
		else if (iLocal_456 == 0)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				Local_682 = { GlobalFunc_514() };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_682))
				{
					iLocal_430 = 0;
					GlobalFunc_5105();
				}
			}
		}
		else if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			Local_682 = { GlobalFunc_514() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_682))
			{
				iLocal_430 = 0;
				GlobalFunc_5105();
			}
		}
	}
}


int func_386(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x290CD
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


int func_388(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4)//Position - 0x2915E
{
	if (GlobalFunc_115(iParam0))
	{
		if (!GlobalFunc_2319(iParam1, 10))
		{
			if (bParam2)
			{
				if (!GlobalFunc_775(Local_111.f_9, Local_691, fParam3))
				{
					return 0;
				}
				if (!GlobalFunc_2326(iParam0, Local_691, fParam4))
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



void func_391()//Position - 0x2920D
{
	switch (iLocal_99)
	{
		case 0:
			if (bLocal_441)
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
				func_360(Local_111.f_9, &iLocal_473, 1126825984, 1);
				func_352(Local_111.f_9, &(Local_111.f_19), 1126825984, 7);
				func_340();
				if (GlobalFunc_775(Local_111.f_9, Local_691, 22f) && GlobalFunc_2326(Local_111.f_9, Local_691, 10f))
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
					else if (func_388(Local_111.f_9, iLocal_473, 0, 1102053376, 1086324736))
					{
						iLocal_100 = 0;
						iLocal_99 = 2;
					}
					else if (GlobalFunc_775(Local_111.f_9, Local_691, 5f))
					{
						iLocal_100 = 0;
						iLocal_99 = 2;
					}
					else if (GlobalFunc_5717(&(Local_111.f_19)))
					{
						if (GlobalFunc_775(Local_111.f_9, Local_691, (22f - 1.5f)))
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
				if (func_345(Local_111.f_9, Local_111.f_19, 22f, 0, 1090519040, 1097859072, 0))
				{
					iLocal_100 = 3;
					iLocal_99 = 2;
				}
			}
			func_384();
			break;
		
		case 2:
			if (iLocal_100 == 3)
			{
				func_381(0);
				GlobalFunc_5709(&(Local_111.f_8), "", "", &iLocal_465, &iLocal_466, 1, 0);
				func_121(2);
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
				func_121(1);
			}
			break;
	}
}







void func_398()//Position - 0x296DE
{
	if (bLocal_441)
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

void func_399()//Position - 0x2973A
{
	if (bLocal_441)
	{
		if ((iLocal_97 != 9 && iLocal_97 != 4) && iLocal_97 != 5)
		{
			func_400();
			if (iLocal_101 != 0)
			{
				if (iLocal_101 == 1)
				{
					Global_96065 = 0;
					func_523();
				}
				else
				{
					func_121(9);
				}
			}
		}
	}
}

void func_400()//Position - 0x29784
{
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
		if (func_401(0))
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
		if (!SYSTEM::VDIST2(Local_691, Local_102) <= ((Local_102.f_3 + 25f) * (Local_102.f_3 + 25f)))
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
				if (!GlobalFunc_775(Local_111.f_9, Local_691, 150f))
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
				if (!GlobalFunc_775(Local_111.f_9, Local_691, 80f))
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

int func_401(bool bParam0)//Position - 0x298C1
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
		if (func_407(Local_384, 1126825984))
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






int func_407(int iParam0, float fParam1)//Position - 0x29D8B
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
				if (func_408(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_408(int iParam0, float fParam1)//Position - 0x29E01
{
	return func_353(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}





void func_413(int iParam0, bool bParam1)//Position - 0x29EBA
{
	func_423(bParam1, 1);
	if (bParam1)
	{
		func_414();
	}
	iLocal_98 = iParam0;
	bLocal_441 = false;
	if (GlobalFunc_188())
	{
		iLocal_442 = 1;
	}
	else
	{
		iLocal_442 = 0;
	}
	if (!GlobalFunc_188())
	{
		if (iLocal_98 == 0)
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_697, fLocal_457, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
				iLocal_442 = 1;
			}
		}
	}
	func_1(iLocal_98);
}

void func_414()//Position - 0x29F49
{
	func_415(1, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!GlobalFunc_188())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			GlobalFunc_7097(PLAYER::PLAYER_PED_ID(), Local_697, fLocal_457, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	GlobalFunc_4935();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_663);
	func_465();
	func_121(0);
}

void func_415(bool bParam0, bool bParam1)//Position - 0x29FBB
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
	func_418(1, 1, 1);
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
	func_88(bParam0);
	func_416(bParam1);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cLocal_670);
}

void func_416(bool bParam0)//Position - 0x2A0D9
{
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	}
	STREAMING::REMOVE_ANIM_DICT("oddjobs@bailbond_surf_farm");
	STREAMING::REMOVE_ANIM_DICT(GlobalFunc_2310());
	GlobalFunc_5719();
}


void func_418(bool bParam0, int iParam1, int iParam2)//Position - 0x2A117
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





void func_423(bool bParam0, bool bParam1)//Position - 0x2A2EC
{
	if (bParam0)
	{
		func_418(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_183(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}










































void func_465()//Position - 0x2ECB1
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_473();
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
	MISC::CLEAR_AREA(Local_102, 15f, 0, 0, 0, 0);
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(4, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	PED::SET_CREATE_RANDOM_COPS(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	GlobalFunc_2331(1);
	while (!func_468())
	{
		SYSTEM::WAIT(0);
	}
	func_466();
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

void func_466()//Position - 0x2EDF6
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
		func_338(Local_111.f_9);
		GlobalFunc_2332(Local_111.f_9, "TARGET_", 0);
		Local_111.f_10 = 0;
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 2, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 4, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_111.f_9, 8, 0, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_483);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_surf_farm", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_surf_farm", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_surf_farm", "idle_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_surf_farm", "idle_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_surf_farm", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_surf_farm", "idle_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::SET_SEQUENCE_TO_REPEAT(uLocal_483, 1);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_483);
		TASK::TASK_PERFORM_SEQUENCE(Local_111.f_9, uLocal_483);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_483);
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_131[iVar0 /*20*/]))
		{
			func_338(Local_131[iVar0 /*20*/]);
			if (Local_131[iVar0 /*20*/].f_5 != 0)
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_131[iVar0 /*20*/], Local_131[iVar0 /*20*/].f_5, -1, 1, 1);
			}
			PED::SET_PED_CONFIG_FLAG(Local_131[iVar0 /*20*/], 137, 1);
			GlobalFunc_2332(Local_131[iVar0 /*20*/], "BACKUP_", iVar0);
			if (GlobalFunc_4947(Local_253[0 /*6*/]))
			{
				if (iVar0 == 1)
				{
					PED::SET_PED_INTO_VEHICLE(Local_131[iVar0 /*20*/], Local_253[0 /*6*/], -1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_131[iVar0 /*20*/], 1, 0);
				}
				else if (iVar0 == 2)
				{
					PED::SET_PED_INTO_VEHICLE(Local_131[iVar0 /*20*/], Local_253[0 /*6*/], 2);
				}
				else if (iVar0 == 3)
				{
					PED::SET_PED_INTO_VEHICLE(Local_131[iVar0 /*20*/], Local_253[0 /*6*/], 1);
				}
			}
			switch (iVar0)
			{
				case 0:
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 0, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 2, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 3, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 4, 0, 0, 0);
					break;
				
				case 1:
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 0, 0, 3, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 3, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 4, 0, 1, 0);
					break;
				
				case 2:
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 2, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 3, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 4, 0, 2, 0);
					break;
				
				case 3:
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 2, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_131[iVar0 /*20*/], 4, 0, 2, 0);
					break;
			}
			if (iVar0 == 0)
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_483);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_surf_farm", "idle_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_surf_farm", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_surf_farm", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_surf_farm", "idle_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_surf_farm", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@bailbond_surf_farm", "idle_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uLocal_483, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_483);
				TASK::TASK_PERFORM_SEQUENCE(Local_131[iVar0 /*20*/], uLocal_483);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_483);
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_131[iVar0 /*20*/]))
				{
					GlobalFunc_173(&uLocal_498, 4, Local_131[iVar0 /*20*/], "HILLBILLY", 0, 1);
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_131[iVar0 /*20*/], 1);
				}
			}
		}
		iVar0++;
	}
}


int func_468()//Position - 0x2F2C3
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
	if (iLocal_472 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_472 - 1))
		{
			if (GlobalFunc_5707(&(Local_131[iVar2 /*20*/]), Local_131[iVar2 /*20*/].f_19, Local_131[iVar2 /*20*/].f_1, Local_131[iVar2 /*20*/].f_4, 0, 0, 0))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_131[iVar2 /*20*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_131[iVar2 /*20*/], 132, 1);
					iVar0++;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
	if (iVar1 == iLocal_472)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_472 - 1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_131[iVar2 /*20*/].f_19);
			iVar2++;
		}
	}
	if (iLocal_469 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_469 - 1))
		{
			if (GlobalFunc_7099(&(Local_253[iVar2 /*6*/]), Local_253[iVar2 /*6*/].f_5, Local_253[iVar2 /*6*/].f_1, Local_253[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_470 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_470 - 1))
		{
			if (GlobalFunc_5708(&(Local_290[iVar2 /*6*/]), Local_290[iVar2 /*6*/].f_5, Local_290[iVar2 /*6*/].f_1, Local_290[iVar2 /*6*/].f_4, 1))
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
			if (GlobalFunc_5708(&(Local_339[iVar2 /*9*/]), Local_339[iVar2 /*9*/].f_8, Local_339[iVar2 /*9*/].f_1, Local_339[iVar2 /*9*/].f_7, 1))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_339[iVar2 /*9*/], 1);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_471 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_471 - 1))
		{
			if (GlobalFunc_5720(&(Local_376[iVar2 /*7*/]), Local_376[iVar2 /*7*/].f_5, Local_376[iVar2 /*7*/].f_2, Local_376[iVar2 /*7*/].f_6, Local_376[iVar2 /*7*/].f_1, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iVar0 == ((((iLocal_472 + iLocal_469) + iLocal_470) + iLocal_468) + iLocal_471) + 1)
	{
		return 1;
	}
	return 0;
}





void func_473()//Position - 0x2F6FC
{
	int iVar0;
	
	iVar0 = 0;
	iLocal_110 = 4;
	Local_111.f_11 = joaat("a_m_y_salton_01");
	Local_111.f_13 = { 162.5572f, 2289.158f, 93.1489f };
	Local_111.f_16 = 292.4985f;
	Local_111.f_12 = joaat("weapon_pistol");
	Local_111.f_10 = 0;
	Local_111.f_17 = 0;
	Local_111.f_18 = 0;
	Local_111.f_19 = 0;
	func_8();
	Local_131[0 /*20*/].f_19 = joaat("a_m_m_hillbilly_02");
	Local_131[0 /*20*/].f_1 = { 164.3371f, 2290.645f, 93.1434f };
	Local_131[0 /*20*/].f_4 = 119.9981f;
	Local_131[0 /*20*/].f_5 = joaat("weapon_pistol");
	Local_131[1 /*20*/].f_19 = joaat("a_m_m_hillbilly_02");
	Local_131[1 /*20*/].f_1 = { 162.4443f, 2283.816f, 92.9438f };
	Local_131[1 /*20*/].f_4 = 299.9979f;
	Local_131[1 /*20*/].f_5 = joaat("weapon_pistol");
	Local_131[2 /*20*/].f_19 = joaat("a_m_m_hillbilly_02");
	Local_131[2 /*20*/].f_1 = { 163.1961f, 2282.257f, 93.6852f };
	Local_131[2 /*20*/].f_4 = 299.9979f;
	Local_131[2 /*20*/].f_5 = joaat("weapon_pistol");
	Local_131[3 /*20*/].f_19 = joaat("a_m_m_hillbilly_02");
	Local_131[3 /*20*/].f_1 = { 163.9295f, 2283.512f, 92.6928f };
	Local_131[3 /*20*/].f_4 = 299.9979f;
	Local_131[3 /*20*/].f_5 = joaat("weapon_pistol");
	iVar0 = 0;
	while (iVar0 <= (iLocal_472 - 1))
	{
		Local_131[iVar0 /*20*/].f_15 = 0;
		Local_131[iVar0 /*20*/].f_16 = 0;
		Local_131[iVar0 /*20*/].f_17 = 0;
		Local_131[iVar0 /*20*/].f_14 = 0;
		iVar0++;
	}
	iLocal_472 = 4;
	Local_253[0 /*6*/].f_5 = joaat("bison");
	Local_253[0 /*6*/].f_1 = { 167.6809f, 2285.204f, 92.2978f };
	Local_253[0 /*6*/].f_4 = 164.9999f;
	Local_253[1 /*6*/].f_5 = joaat("gauntlet");
	Local_253[1 /*6*/].f_1 = { 183.4f, 2287.07f, 91.09f };
	Local_253[1 /*6*/].f_4 = 208.2f;
	iLocal_469 = 2;
	iLocal_470 = 0;
	iLocal_468 = 0;
	iLocal_471 = 0;
	Local_697 = { 232.541f, 2321.896f, 76.1228f };
	fLocal_457 = 129.6421f;
	Local_700 = { 190.8215f, 2284.055f, 88.3843f };
	fLocal_458 = 76.0608f;
	Local_703 = { 181.1229f, 2289.56f, 91.2944f };
	fLocal_459 = 103.4559f;
	Local_706 = { 0f, 0f, 0f };
	Local_709 = { 0f, 0f, 0f };
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
	iLocal_430 = 0;
	iLocal_431 = 0;
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
	bLocal_449 = false;
	iLocal_450 = 1;
	iLocal_451 = 0;
	iLocal_452 = 0;
	iLocal_453 = 0;
	iLocal_433 = 1;
	iLocal_434 = 0;
	iLocal_444 = 0;
	iLocal_443 = 0;
	bLocal_454 = false;
	iLocal_101 = 0;
	iLocal_467 = 0;
	iLocal_461 = 0;
	iLocal_465 = 0;
	iLocal_466 = 0;
	iLocal_462 = 0;
	iLocal_463 = 0;
	iLocal_464 = 0;
	iLocal_460 = 0;
	iLocal_478 = 0;
	iLocal_473 = 0;
	iLocal_474 = -1;
	iLocal_475 = -1;
	iLocal_477 = 0;
	iLocal_479 = -1;
	Local_694 = { 166.4233f, 2285.507f, 92.5205f };
	Local_688 = { 2722.661f, 4143.105f, 43.0617f };
	StringCopy(&Local_664, "", 24);
	StringCopy(&Local_682, "", 24);
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
	sLocal_484 = "BailBond2Jumper";
	sLocal_485 = "BB2_J1";
	sLocal_486 = "BB2_J3";
	sLocal_487[0] = "BB2_VC1";
	sLocal_487[1] = "BB2_VC2";
	sLocal_487[2] = "BB2_VC3";
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_421[iVar0] = 0;
		iVar0++;
	}
	iLocal_252 = 0;
}


















































void func_523()//Position - 0x32712
{
	if (iLocal_450)
	{
		func_415(0, 1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

