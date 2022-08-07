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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	float fLocal_41 = 0f;
	struct<3> Local_42 = { 0, 0, 0 } ;
	bool bLocal_45 = 0;
	struct<3> Local_46 = { 0, 0, 0 } ;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	float fLocal_64 = 0f;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	struct<345> Local_75 = { 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1075838976, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 1065353216, 2, 0, 0, 2, 0, 0, 0, 0, 0, -1, -1, -1, 0, 1, 0, 2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 1050253722, 2, 0, 0, 2, 0, 0, 7, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1027211264, 0, 0, 1069547520, 0, 1061997773, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 1;
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
	var uLocal_438 = 16;
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
	float fLocal_556 = 0f;
	bool bLocal_557 = 0;
	int iLocal_558 = 0;
	bool bLocal_559 = 0;
	int iLocal_560 = 0;
	struct<24> Local_561[2];
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
	var uLocal_622 = -1;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	int iLocal_627 = 0;
	float fLocal_628 = 0f;
	struct<3> Local_629 = { 0, 0, 0 } ;
	float fLocal_632 = 0f;
	float fLocal_633 = 0f;
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_39 = 125;
	iLocal_40 = 128;
	fLocal_41 = 0.625f;
	Local_42 = { 0f, 0f, (0.55f * 1.1f) };
	Local_46 = { 0f, 0f, -1.125f };
	Local_49 = { 0f, 0f, 0f };
	Local_52 = { 0f, 90f, 0f };
	Local_55 = { 90f, 90f, 0f };
	Local_58 = { 0f, 0f, 0f };
	Local_61 = { 0f, 0.1f, -0.76f };
	fLocal_64 = 1f;
	iLocal_70 = -1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	fLocal_73 = 1f;
	fLocal_74 = 3f;
	iLocal_627 = -1;
	fLocal_628 = 0.75f;
	Local_629 = { 0.1f, 0f, -1f };
	fLocal_632 = 2.1f;
	fLocal_633 = 3f;
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("carwash2")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_371(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_318();
	}
	else
	{
		func_1();
	}
}

void func_1()//Position - 0x13B
{
	int iVar0;
	
	GlobalFunc_234(PLAYER::PLAYER_PED_ID());
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_627 = -1;
	if (!func_311())
	{
		func_371(0);
	}
	MISC::SET_MISSION_FLAG(1);
	func_194(0f, 0f, 0f, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1);
	FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 60f);
	func_163();
	HUD::CLEAR_HELP(1);
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	Local_75.f_336 = 1.75f;
	func_157(iVar0, &Local_75, 0);
	fLocal_556 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iVar0);
	bLocal_559 = VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar0);
	while (true)
	{
		if ((!GlobalFunc_234(iVar0) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			func_156(iVar0);
			func_110(2);
			func_371(0);
		}
		func_107();
		func_84(&Local_75);
		func_81(&Local_75, iVar0, fLocal_556);
		if (func_15(&Local_75, iVar0))
		{
			func_3(1, 1, 1, 1);
			func_156(iVar0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_371(1);
			}
			else
			{
				func_110(2);
				func_371(0);
			}
		}
		if (Local_75.f_344 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 18))
			{
				GlobalFunc_2350(500, 0);
				Local_75.f_344 = 1;
				func_156(iVar0);
			}
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_371(1);
		}
		SYSTEM::WAIT(0);
	}
}


void func_3(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2C4
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
		if ((iLocal_38 != 0 && iLocal_38 != joaat("object")) && iLocal_38 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_38, 0);
				}
			}
		}
	}
	if (GlobalFunc_4950(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}












int func_15(var uParam0, int iParam1)//Position - 0x5E1
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar1 = func_80(uParam0, iParam1);
	iVar2 = 0;
	iVar3 = 0;
	if (!GlobalFunc_234(iParam1))
	{
		func_67(uParam0, iParam1);
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			func_66(uParam0);
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_66(uParam0);
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1);
	if (func_65(iVar0))
	{
		iLocal_68 = (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 242628503) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, 242628503) == 0);
		if (iLocal_68)
		{
			iLocal_70 = TASK::GET_SEQUENCE_PROGRESS(iVar0);
			iLocal_69 = (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 242628503) == 7 && iLocal_70 == (uParam0->f_350 - 1));
		}
		if (iLocal_66)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
			}
			iLocal_66 = 0;
		}
		if (iLocal_67)
		{
			func_64(iParam1, uParam0);
			iLocal_67 = 0;
		}
	}
	if (Global_68245)
	{
		if (!func_65(iVar0))
		{
			iVar2 = 1;
		}
		if (PED::IS_PED_IN_VEHICLE(iVar0, iParam1, 0))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iVar0, iParam1))
			{
				iVar2 = 1;
			}
		}
		if (!func_62(PLAYER::PLAYER_PED_ID()))
		{
			iVar2 = 1;
		}
		if (GlobalFunc_7143(iParam1, 3))
		{
			iVar2 = 1;
		}
		if (!func_59())
		{
			iVar2 = 1;
		}
		if (PED::IS_PED_BEING_JACKED(iVar0))
		{
			iVar2 = 1;
		}
		if (func_58(iParam1))
		{
			iVar2 = 1;
		}
		if (func_55(uParam0))
		{
			func_67(uParam0, iParam1);
			return 1;
		}
		if (iVar2 == 1)
		{
			func_67(uParam0, iParam1);
			return 1;
		}
	}
	else if (func_55(uParam0) && uParam0->f_344 == 0)
	{
		GlobalFunc_2350(500, 1);
		func_54(iParam1, 100f, 0f);
		uParam0->f_344 = 1;
		return 1;
	}
	if (iVar0 == PLAYER::PLAYER_PED_ID())
	{
		if (!iLocal_68 && (iLocal_70 > -1 && iLocal_70 < uParam0->f_350))
		{
			func_64(iParam1, uParam0);
		}
		if (iLocal_69)
		{
		}
	}
	if (func_49(uParam0, iParam1))
	{
		func_67(uParam0, iParam1);
		return 1;
	}
	if (uParam0->f_339 != 99)
	{
		GlobalFunc_7629();
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		if (uParam0->f_339 > 0)
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (GlobalFunc_2539(uParam0->f_334) != 1)
			{
				GlobalFunc_7621(uParam0->f_334, 1, 0, 1, 0);
			}
		}
	}
	switch (uParam0->f_339)
	{
		case 0:
			func_35(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_68245);
			PATHFIND::SET_PED_PATHS_IN_AREA(uParam0->f_352, uParam0->f_355, 0, 0);
			if (GlobalFunc_2539(uParam0->f_334) != 1)
			{
				GlobalFunc_7621(uParam0->f_334, 1, 0, 1, 0);
			}
			GlobalFunc_5749(&(uParam0->f_172[0 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 19, 19);
			func_66(uParam0);
			if (!Global_68245)
			{
				MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_80(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
			}
			uParam0->f_339++;
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_WASH_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("CAR_WASH_SCENE");
			}
			if (!Global_68245)
			{
				ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uParam0->f_21, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uParam0->f_24);
				if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam1, 1))
				{
					VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam1, 1);
				}
				func_31(iParam1, 2);
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				func_31(iParam1, 10);
				if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam1, 1))
				{
					VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam1, 0);
				}
			}
			break;
		
		case 1:
			if (func_30(&(uParam0->f_172[0 /*23*/]), fVar1))
			{
				func_35(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_68245);
				GlobalFunc_5749(&(uParam0->f_172[1 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
				func_29(iParam1);
				func_66(uParam0);
				uParam0->f_339++;
			}
			break;
		
		case 2:
			if (func_30(&(uParam0->f_172[1 /*23*/]), fVar1))
			{
				func_35(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_68245);
				if (uParam0->f_172[2 /*23*/])
				{
					GlobalFunc_5749(&(uParam0->f_172[2 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					uParam0->f_339++;
				}
				else
				{
					GlobalFunc_5749(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					func_54(iParam1, 50f, 0f);
					uParam0->f_339 = 98;
				}
				func_29(iParam1);
				func_66(uParam0);
			}
			break;
		
		case 3:
			if (func_30(&(uParam0->f_172[2 /*23*/]), fVar1))
			{
				func_35(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_68245);
				if (uParam0->f_172[3 /*23*/])
				{
					GlobalFunc_5749(&(uParam0->f_172[3 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					uParam0->f_339++;
				}
				else
				{
					GlobalFunc_5749(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					func_54(iParam1, 50f, 0f);
					uParam0->f_339 = 98;
				}
				func_29(iParam1);
				func_66(uParam0);
			}
			break;
		
		case 4:
			if (func_30(&(uParam0->f_172[3 /*23*/]), fVar1))
			{
				func_35(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_68245);
				if (uParam0->f_172[4 /*23*/])
				{
					GlobalFunc_5749(&(uParam0->f_172[4 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					uParam0->f_339++;
				}
				else
				{
					GlobalFunc_5749(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					func_54(iParam1, 50f, 0f);
					uParam0->f_339 = 98;
				}
				func_29(iParam1);
				func_66(uParam0);
			}
			break;
		
		case 5:
			if (func_30(&(uParam0->f_172[4 /*23*/]), fVar1))
			{
				func_35(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_68245);
				if (uParam0->f_172[5 /*23*/])
				{
					GlobalFunc_5749(&(uParam0->f_172[5 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					uParam0->f_339++;
				}
				else
				{
					GlobalFunc_5749(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 0, 1);
					func_54(iParam1, 50f, 0f);
					uParam0->f_339 = 98;
				}
				func_29(iParam1);
				func_66(uParam0);
			}
			break;
		
		case 6:
			if (func_30(&(uParam0->f_172[5 /*23*/]), fVar1) && fVar1 >= uParam0->f_338)
			{
				func_35(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_68245);
				if (!MISC::IS_POSITION_OCCUPIED(uParam0->f_172[6 /*23*/].f_1[0 /*3*/], 2f, 0, 1, 0, 0, 0, iParam1, 0))
				{
					GlobalFunc_5749(&(uParam0->f_172[6 /*23*/]), &(uParam0->f_340), uParam0->f_342, 0, 3, 1);
				}
				func_54(iParam1, 100f, 0f);
				if (!Global_68245)
				{
				}
				uParam0->f_339 = 98;
				func_29(iParam1);
				func_66(uParam0);
			}
			break;
		
		case 98:
			if (MISC::IS_POSITION_OCCUPIED(uParam0->f_172[6 /*23*/].f_1[0 /*3*/], 2f, 0, 1, 0, 0, 0, iParam1, 0))
			{
				iVar3 = 1;
			}
			if (func_30(&(uParam0->f_172[6 /*23*/]), fVar1) || iVar3)
			{
				func_35(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, !Global_68245);
				func_25(uParam0->f_340, 0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_WASH_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("CAR_WASH_SCENE");
				}
				if (func_62(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
				func_23(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				uParam0->f_339 = 99;
				uParam0->f_348 = 0;
				uParam0->f_349 = 0;
				iLocal_69 = 0;
				iLocal_68 = 0;
				iLocal_70 = -1;
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
				func_54(iParam1, 100f, 0f);
				func_156(iParam1);
				if (!Global_68245)
				{
				}
				func_31(iParam1, 1);
				PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(uParam0->f_352, uParam0->f_355, 0);
				GlobalFunc_7610(302, 0, 0);
				return 1;
			}
			else
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			}
			break;
		
		case 99:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_WASH_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_WASH_SCENE");
			}
			func_25(uParam0->f_340, 0);
			uParam0->f_348 = 0;
			uParam0->f_349 = 0;
			uParam0->f_341 = 0;
			iLocal_69 = 0;
			iLocal_68 = 0;
			iLocal_70 = -1;
			break;
	}
	return 0;
}








void func_23(int iParam0)//Position - 0x16A3
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	if (iVar0 == GlobalFunc_314())
	{
		return;
	}
	Global_2414009[iVar0 /*254*/].f_228 = 0;
}


void func_25(var uParam0, bool bParam1)//Position - 0x16D3
{
	int iVar0;
	
	if (CAM::DOES_CAM_EXIST(uParam0))
	{
		GlobalFunc_1475(&uParam0, 0);
		GlobalFunc_728(bParam1);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (GlobalFunc_234(iVar0))
			{
				if (!GlobalFunc_316(iVar0))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == PLAYER::PLAYER_PED_ID())
					{
						func_31(iVar0, 1);
					}
				}
			}
		}
	}
}




void func_29(int iParam0)//Position - 0x1799
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0, 1);
		}
		return;
	}
	VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0, 1);
}

int func_30(var uParam0, float fParam1)//Position - 0x17C2
{
	bool bVar0;
	
	bVar0 = (fParam1 != -99f && uParam0->f_22 != -99f);
	if (!*uParam0 == 1)
	{
		return 0;
	}
	if (bVar0 && fParam1 >= uParam0->f_22)
	{
		return 1;
	}
	if (MISC::GET_GAME_TIMER() > (uParam0->f_19 + uParam0->f_20))
	{
		return fParam1 >= uParam0->f_22;
	}
	return 0;
}

void func_31(int iParam0, int iParam1)//Position - 0x1820
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, iParam1);
		return;
	}
	if (!GlobalFunc_316(iParam0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, iParam1);
	}
}




void func_35(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x19A4
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param3, 1);
	Var1 = { Param0 };
	Var4 = { GlobalFunc_107(Param3 - Param0) };
	while (fVar7 < fVar0)
	{
		FIRE::STOP_FIRE_IN_RANGE(Var1, fParam6);
		if (bParam7)
		{
			MISC::CLEAR_AREA_OF_PROJECTILES(Var1, fParam6, 0);
		}
		Var1 = { Var1 + Var4 * FtoV((fParam6 / 2f)) };
		fVar7 = (fVar7 + (fParam6 / 2f));
	}
}














int func_49(var uParam0, int iParam1)//Position - 0x5F0E
{
	var uVar0;
	struct<3> Var1;
	struct<2> Var4;
	struct<2> Var7;
	var uVar10;
	var uVar13;
	int iVar16;
	var uVar17;
	
	if (MISC::GET_GAME_TIMER() < uParam0->f_346)
	{
		return 0;
	}
	if (uParam0->f_348 == 0)
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1), &Var4, &Var7);
		if (uParam0->f_359 == 0)
		{
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, (Var7.f_1 + 0.325f), 0f) };
		}
		else
		{
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, (Var4.f_1 - 0.325f), 0f) };
		}
		if (Global_68245)
		{
			uParam0->f_348 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1 - Vector(0.1f, 0f, 0f), Var1 + Vector(0.1f, 0f, 0f), 0.75f, 18, iParam1, 4);
		}
		else
		{
			uParam0->f_348 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1 - Vector(0.1f, 0f, 0f), Var1 + Vector(0.1f, 0f, 0f), 0.75f, 2, iParam1, 4);
		}
		return 0;
	}
	else
	{
		iVar16 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_348, &uVar0, &uVar10, &uVar13, &uVar17);
		if (iVar16 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uVar17))
			{
				if (func_50(iVar17))
				{
					uParam0->f_349++;
					return 1;
				}
				else
				{
					uParam0->f_349 = 0;
				}
			}
		}
		uParam0->f_346 = MISC::GET_GAME_TIMER() + 500;
		uParam0->f_348 = 0;
	}
	return 0;
}

int func_50(int iParam0)//Position - 0x6032
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			return 0;
		}
		if (func_53(iParam0))
		{
			return 0;
		}
		if (func_52(iParam0))
		{
			return 1;
		}
		if (func_51(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_51(int iParam0)//Position - 0x6085
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0), &Var0, &Var3);
	Var6.x = MISC::ABSF((Var3.x - Var0.x));
	Var6.f_1 = MISC::ABSF((Var3.f_1 - Var0.f_1));
	Var6.f_2 = MISC::ABSF((Var3.f_2 - Var0.f_2));
	return ((Var6.x >= 1.4f && Var6.f_1 >= 1.4f) && Var6.f_2 >= 1.4f);
}

int func_52(int iParam0)//Position - 0x60EE
{
	if (ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("prop_dumpster_01a"))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_dumpster_02a"))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_dumpster_02b"))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_dumpster_3a"))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_dumpster_4a"))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_dumpster_4b"))
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x6163
{
	if (ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("prop_carwash_roller_horz"))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_carwash_roller_vert"))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("prop_ld_test_01"))
	{
		return 1;
	}
	return 0;
}

void func_54(int iParam0, float fParam1, float fParam2)//Position - 0x61A2
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		GRAPHICS::WASH_DECALS_FROM_VEHICLE(iParam0, fParam1);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam0, fParam2);
	}
}

bool func_55(var uParam0)//Position - 0x61C3
{
	int iVar0;
	
	iVar0 = GlobalFunc_92(uParam0->f_351 == 1, 20000, 15000);
	if (Global_68245)
	{
		return (func_56(uParam0) > iVar0 && uParam0->f_341);
	}
	return MISC::GET_GAME_TIMER() > (uParam0->f_361 + iVar0);
}

int func_56(var uParam0)//Position - 0x6208
{
	if (Global_68245)
	{
		return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_362);
	}
	return (MISC::GET_GAME_TIMER() - uParam0->f_361);
}


int func_58(int iParam0)//Position - 0x624B
{
	if (!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iParam0))
	{
		return 0;
	}
	if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 5000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 5000))
	{
		return 1;
	}
	return 0;
}

int func_59()//Position - 0x62A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_2414009[iVar0 /*254*/].f_228)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}



int func_62(int iParam0)//Position - 0x6396
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_65(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
	if (!GlobalFunc_234(iVar0))
	{
		return 0;
	}
	iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1);
	if (!func_65(iVar1))
	{
		return 0;
	}
	if (Global_68245)
	{
		iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
		if (iVar2 == GlobalFunc_314())
		{
			return 0;
		}
		if (!GlobalFunc_252(iVar2, 1, 0))
		{
			Global_2414009[iVar2 /*254*/].f_228 = 0;
			return 0;
		}
		return Global_2414009[iVar2 /*254*/].f_228;
	}
	return 1;
}


int func_64(int iParam0, var uParam1)//Position - 0x6472
{
	int iVar0;
	var uVar1;
	
	if (!GlobalFunc_234(iParam0))
	{
		return 0;
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
	if (!GlobalFunc_234(iParam0))
	{
		return 0;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam1->f_335))
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0, 1);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, 1);
	}
	TASK::OPEN_SEQUENCE_TASK(&uVar1);
	TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iParam0, uParam1->f_335, 262144, 0, 546, -1, uParam1->f_336, 0, 1.25f);
	TASK::TASK_STAND_STILL(0, 3000);
	TASK::CLOSE_SEQUENCE_TASK(uVar1);
	TASK::TASK_PERFORM_SEQUENCE(iVar0, uVar1);
	TASK::CLEAR_SEQUENCE_TASK(&uVar1);
	TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, uParam1->f_336);
	iLocal_70 = -1;
	uParam1->f_350 = 2;
	return 1;
}

bool func_65(int iParam0)//Position - 0x651E
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!PED::IS_PED_A_PLAYER(iParam0))
		{
			return 0;
		}
	}
	return !PED::IS_PED_DEAD_OR_DYING(iParam0, 1);
}

void func_66(var uParam0)//Position - 0x655E
{
	uParam0->f_341 = 1;
	if (Global_68245)
	{
		uParam0->f_362 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		uParam0->f_361 = MISC::GET_GAME_TIMER();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			return;
		}
	}
}

void func_67(var uParam0, int iParam1)//Position - 0x6599
{
	int iVar0;
	
	uParam0->f_339 = 99;
	func_79(uParam0, 0);
	func_78(uParam0);
	func_77(uParam0);
	func_25(uParam0->f_340, 1);
	func_76(PLAYER::PLAYER_PED_ID(), 0);
	func_68(&(uParam0->f_51));
	func_68(&(uParam0->f_30));
	func_68(&(uParam0->f_72));
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (Global_68245)
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(PLAYER::PLAYER_PED_ID());
		if (iVar0 != GlobalFunc_314())
		{
			if (Global_2414009[iVar0 /*254*/].f_228 == 1)
			{
				Global_2414009[iVar0 /*254*/].f_228 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_31(iParam1, 1);
		func_156(iParam1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, 0);
			}
		}
	}
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(uParam0->f_352, uParam0->f_355, 0);
	uParam0->f_348 = 0;
	uParam0->f_349 = 0;
	uParam0->f_358 = 1;
	uParam0->f_341 = 0;
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_WASH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_WASH_SCENE");
	}
}

void func_68(var uParam0)//Position - 0x6693
{
	func_69(uParam0);
}

void func_69(var uParam0)//Position - 0x66A1
{
	uParam0->f_2 = 3;
	func_71(uParam0);
	GlobalFunc_130(&(uParam0->f_3));
}


void func_71(var uParam0)//Position - 0x66E7
{
	if (func_75(uParam0->f_2))
	{
		func_73(uParam0);
		GlobalFunc_2348(&(uParam0->f_6));
		GlobalFunc_2348(&(uParam0->f_5));
		uParam0->f_2 = 0;
	}
}


void func_73(var uParam0)//Position - 0x6736
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_14)
	{
		GlobalFunc_2347(&(uParam0->f_14[iVar0]));
		iVar0++;
	}
}


bool func_75(int iParam0)//Position - 0x678F
{
	return !(iParam0 == 0 || iParam0 == 5);
}

void func_76(int iParam0, int iParam1)//Position - 0x67A6
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	if (iVar0 == GlobalFunc_314())
	{
		return;
	}
	if (!func_65(iParam0))
	{
		Global_2414009[iVar0 /*254*/].f_228 = 0;
		return;
	}
	Global_2414009[iVar0 /*254*/].f_228 = iParam1;
}

void func_77(var uParam0)//Position - 0x67E6
{
	func_73(&(uParam0->f_51));
	func_73(&(uParam0->f_30));
	func_73(&(uParam0->f_72));
	GlobalFunc_2347(&(uParam0->f_120.f_6[0]));
	GlobalFunc_2347(&(uParam0->f_120.f_6[1]));
	GlobalFunc_2347(&(uParam0->f_93.f_21));
}

void func_78(var uParam0)//Position - 0x682A
{
	GlobalFunc_2348(&(uParam0->f_93.f_16));
	GlobalFunc_2348(&(uParam0->f_93.f_17));
	GlobalFunc_2348(&(uParam0->f_93.f_18));
	GlobalFunc_2348(&(uParam0->f_120.f_27));
	GlobalFunc_2348(&(uParam0->f_120.f_28));
	GlobalFunc_2348(&(uParam0->f_120.f_29));
	GlobalFunc_2348(&(uParam0->f_30.f_5));
	GlobalFunc_2348(&(uParam0->f_30.f_6));
	GlobalFunc_2348(&(uParam0->f_51.f_5));
	GlobalFunc_2348(&(uParam0->f_51.f_6));
	GlobalFunc_2348(&(uParam0->f_72.f_5));
	GlobalFunc_2348(&(uParam0->f_72.f_6));
}

void func_79(var uParam0, int iParam1)//Position - 0x68AA
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_93.f_19))
	{
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_93.f_19, 1, 0);
	}
	func_156(iParam1);
}

float func_80(var uParam0, int iParam1)//Position - 0x68D1
{
	if (!GlobalFunc_115(iParam1))
	{
		return 0f;
	}
	return MISC::_0x7F8F6405F4777AF6(ENTITY::GET_ENTITY_COORDS(iParam1, 1), uParam0->f_14[0 /*3*/], uParam0->f_14[1 /*3*/], 0);
}

float func_81(var uParam0, int iParam1, float fParam2)//Position - 0x6905
{
	struct<3> Var0;
	float fVar3;
	
	fVar3 = MISC::_0x7F8F6405F4777AF6(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 0);
	if (fVar3 <= 1f)
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
		}
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1) == PLAYER::PLAYER_PED_ID())
		{
			func_107();
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
		{
			Var0 = { MISC::_0x21C235BC64831E5A(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 0) };
			if (GlobalFunc_713(iParam1, Var0, 1) < 4f)
			{
				if (fVar3 > 0f)
				{
					func_54(iParam1, 0.005f, (fParam2 * (1f - fVar3)));
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() == 0)
	{
		func_82(uParam0, iParam1);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		if ((fVar3 > 0.85f && !uParam0->f_343) && uParam0->f_337 > 0f)
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1, uParam0->f_337);
			uParam0->f_343 = 1;
		}
	}
	return fVar3;
}

void func_82(var uParam0, int iParam1)//Position - 0x69FE
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_93.f_19))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam1, uParam0->f_93.f_19, 1);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_93.f_19, iParam1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_120.f_3[0]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam1, uParam0->f_120.f_3[0], 1);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_120.f_3[0], iParam1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_120.f_3[1]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam1, uParam0->f_120.f_3[1], 1);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_120.f_3[1], iParam1, 1);
	}
}


void func_84(var uParam0)//Position - 0x6AC6
{
	bool bVar0;
	
	bVar0 = true;
	if (Global_68245)
	{
		bVar0 = func_59();
		if (bVar0)
		{
			uParam0->f_347 = MISC::GET_GAME_TIMER();
		}
		if (bVar0 == 0 && uParam0->f_360 == 1)
		{
			uParam0->f_120.f_16 = 0f;
			uParam0->f_341 = 0;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iLocal_71)
	{
		func_105(&(uParam0->f_120), bVar0, uParam0->f_358);
	}
	else
	{
		func_100(&(uParam0->f_120), bVar0, uParam0->f_358);
	}
	if (Global_68245)
	{
		uParam0->f_360 = bVar0;
		if (MISC::GET_GAME_TIMER() > uParam0->f_347 + 1500)
		{
			uParam0->f_348 = 0;
			uParam0->f_349 = 0;
			return;
		}
	}
	func_95(&(uParam0->f_93), bVar0);
	func_85(&(uParam0->f_51), bVar0);
	func_85(&(uParam0->f_30), bVar0);
	func_85(&(uParam0->f_72), bVar0);
}

void func_85(var uParam0, bool bParam1)//Position - 0x6B8F
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	var uVar10;
	int iVar13;
	int iVar14;
	
	if (!GlobalFunc_234(uParam0->f_3) || *uParam0 == 0)
	{
		return;
	}
	if (func_75(uParam0->f_2))
	{
		if (bParam1 == 0)
		{
			uParam0->f_2 = 5;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_59())
		{
			uParam0->f_2 = 5;
		}
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (MISC::GET_GAME_TIMER() > uParam0->f_20 && bParam1 == 1)
			{
				if (uParam0->f_1 == 0)
				{
					if (uParam0->f_19 == 0)
					{
						if (MISC::GET_GAME_TIMER() > uParam0->f_20)
						{
							Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, (-uParam0->f_8 * 0.8f), 0f, (-uParam0->f_9 * 0.75f)) };
							Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, (uParam0->f_8 * 0.8f), 0f, (-uParam0->f_9 * 0.75f)) };
							uParam0->f_19 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var1, Var4, 2, uParam0->f_3, 4);
							FIRE::STOP_FIRE_IN_RANGE(uParam0->f_10, uParam0->f_7);
						}
					}
					else
					{
						iVar13 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_19, &uVar0, &Var7, &uVar10, &iVar14);
						if (iVar13 == 2)
						{
							if (func_93(iVar14, 1))
							{
								uParam0->f_2 = 1;
							}
							uParam0->f_20 = (MISC::GET_GAME_TIMER() + iLocal_40);
						}
						uParam0->f_19 = 0;
					}
				}
				else
				{
					uParam0->f_20 = (MISC::GET_GAME_TIMER() + iLocal_40);
					if (func_91(uParam0->f_10, uParam0->f_7, 1))
					{
						uParam0->f_2 = 1;
						uParam0->f_19 = 0;
					}
				}
			}
			break;
		
		case 1:
			uParam0->f_2 = 3;
			func_89(uParam0, 0);
			FIRE::STOP_FIRE_IN_RANGE(uParam0->f_10, (uParam0->f_7 * 1.2f));
			uParam0->f_5 = AUDIO::GET_SOUND_ID();
			if (uParam0->f_1 == 0)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_5, "SPRAY", uParam0->f_3, "CARWASH_SOUNDS", 0, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_5, "DRYER", uParam0->f_3, "CARWASH_SOUNDS", 0, 0);
			}
			break;
		
		case 3:
			if (bParam1 == 0)
			{
				uParam0->f_2 = 5;
				return;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_59())
			{
				uParam0->f_2 = 5;
				return;
			}
			if (uParam0->f_1 == 0)
			{
				FIRE::STOP_FIRE_IN_RANGE(uParam0->f_10, (uParam0->f_7 * 1.2f));
				if (uParam0->f_19 == 0)
				{
					if (MISC::GET_GAME_TIMER() > uParam0->f_20)
					{
						Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, (-uParam0->f_8 * 0.8f), 0f, (-uParam0->f_9 * 0.75f)) };
						Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, (uParam0->f_8 * 0.8f), 0f, (-uParam0->f_9 * 0.75f)) };
						uParam0->f_19 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var1, Var4, 2, uParam0->f_3, 4);
					}
				}
				else
				{
					iVar13 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_19, &uVar0, &Var7, &uVar10, &iVar14);
					if (iVar13 == 2)
					{
						if (!func_93(iVar14, 1))
						{
							uParam0->f_2 = 5;
						}
						else
						{
							if (uParam0->f_6 == -1)
							{
								uParam0->f_6 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_6, "SPRAY_CAR", uParam0->f_3, "CARWASH_SOUNDS", 0, 0);
							}
							if (func_88(PLAYER::PLAYER_PED_ID(), ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar14), 0))
							{
								func_86(iLocal_40, 64);
							}
						}
						uParam0->f_20 = (MISC::GET_GAME_TIMER() + iLocal_40);
					}
					uParam0->f_19 = 0;
				}
				if ((PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
				{
					Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
					if ((MISC::ABSF(Var7.x) < uParam0->f_8 && MISC::ABSF(Var7.f_1) < 1.2f) && Var7.f_2 < (-uParam0->f_9 * 0.25f))
					{
						PED::SET_PED_WETNESS_HEIGHT(PLAYER::PLAYER_PED_ID(), 3f);
					}
				}
			}
			else if (MISC::GET_GAME_TIMER() > uParam0->f_4)
			{
				func_86(iLocal_39, 16);
				if (!func_91(uParam0->f_10, (uParam0->f_7 * 1.25f), 1))
				{
					uParam0->f_2 = 5;
				}
				uParam0->f_4 = (MISC::GET_GAME_TIMER() + iLocal_39);
			}
			break;
		
		case 5:
			func_73(uParam0);
			GlobalFunc_2348(&(uParam0->f_6));
			GlobalFunc_2348(&(uParam0->f_5));
			uParam0->f_2 = 0;
			break;
	}
}

void func_86(int iParam0, int iParam1)//Position - 0x6F7E
{
	float fVar0;
	
	if (func_62(PLAYER::PLAYER_PED_ID()))
	{
		fVar0 = (SYSTEM::TO_FLOAT(iParam1) * fLocal_64);
		fVar0 = GlobalFunc_253(fVar0, 0f, 256f);
		PAD::SET_PAD_SHAKE(0, iParam0, SYSTEM::FLOOR(fVar0));
	}
}


int func_88(int iParam0, int iParam1, int iParam2)//Position - 0x6FDE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_89(var uParam0, int iParam1)//Position - 0x7022
{
	if (!GlobalFunc_955(iParam1))
	{
		uParam0->f_13 = iParam1;
	}
	func_73(uParam0);
	GlobalFunc_105(Local_58);
	if (uParam0->f_1 == 0)
	{
		uParam0->f_14[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(uParam0->f_13, uParam0->f_3, uParam0->f_8, 0f, (-uParam0->f_9 * 0.25f), -Local_55, 1065353216, 0, 0, 0);
		uParam0->f_14[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(uParam0->f_13, uParam0->f_3, -uParam0->f_8, 0f, (-uParam0->f_9 * 0.25f), Local_55, 1065353216, 0, 0, 0);
		uParam0->f_14[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(uParam0->f_13, uParam0->f_3, uParam0->f_8, 0f, (-uParam0->f_9 * 0.75f), -Local_55, 1065353216, 0, 0, 0);
		uParam0->f_14[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(uParam0->f_13, uParam0->f_3, -uParam0->f_8, 0f, (-uParam0->f_9 * 0.75f), Local_55, 1065353216, 0, 0, 0);
	}
	else
	{
		uParam0->f_14[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(uParam0->f_13, uParam0->f_3, Local_61, 0f, 90f, 0f, 1065353216, 0, 0, 0);
		uParam0->f_14[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(uParam0->f_13, uParam0->f_3, -1.96f, 0.1f, -2.16f, 0f, 35f, 0f, 1065353216, 0, 0, 0);
		uParam0->f_14[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(uParam0->f_13, uParam0->f_3, 1.96f, 0.1f, -2.16f, 0f, 145f, 0f, 1065353216, 0, 0, 0);
	}
}


bool func_91(struct<3> Param0, float fParam3, int iParam4)//Position - 0x71D6
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_775(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Param0, fParam3))
	{
		return 1;
	}
	if (!CAM::IS_SPHERE_VISIBLE(Param0, fParam3) && iParam4 == 1)
	{
		return 0;
	}
	return MISC::IS_POSITION_OCCUPIED(Param0, fParam3, 0, 1, 0, 0, 0, 0, 1);
}


int func_93(int iParam0, bool bParam1)//Position - 0x724F
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0) && GlobalFunc_234(iParam0))
	{
		iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (bParam1)
		{
			if (!func_65(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1)))
			{
				return 0;
			}
		}
		if (!func_94(iVar0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_94(int iParam0)//Position - 0x729E
{
	if (!GlobalFunc_234(iParam0))
	{
		return 0;
	}
	return DECORATOR::DECOR_EXIST_ON(iParam0, "Carwash_Vehicle_Decorator");
}

void func_95(var uParam0, bool bParam1)//Position - 0x72BE
{
	var uVar0;
	var uVar1;
	var uVar4;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	float fVar12;
	
	Var9 = { uParam0->f_2 };
	fVar12 = (360f * SYSTEM::TIMESTEP());
	Var9.f_2 = uParam0->f_22;
	if (func_75(*uParam0))
	{
		if (bParam1 == 0)
		{
			*uParam0 = 5;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_59())
		{
			*uParam0 = 5;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (Global_68245)
			{
				if (!func_59())
				{
					return;
				}
			}
			if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(uParam0->f_2, 4f))
			{
				if (uParam0->f_20 == 0)
				{
					if (MISC::GET_GAME_TIMER() > uParam0->f_26)
					{
						uParam0->f_20 = SHAPETEST::START_SHAPE_TEST_CAPSULE(uParam0->f_2, uParam0->f_2 - Vector(6f, 0f, 0f), (uParam0->f_15 * 1.2f), 2, uParam0->f_19, 4);
					}
				}
				else
				{
					iVar7 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_20, &uVar0, &uVar1, &uVar4, &iVar8);
					if (iVar7 == 2)
					{
						if (func_93(iVar8, 1))
						{
							*uParam0 = 1;
							GlobalFunc_2348(&(uParam0->f_16));
							uParam0->f_16 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_16, "BRUSHES_SPINNING", uParam0->f_19, "CARWASH_SOUNDS", 0, 0);
						}
					}
					uParam0->f_20 = 0;
					uParam0->f_26 = (MISC::GET_GAME_TIMER() + iLocal_40);
				}
			}
			break;
		
		case 1:
			if (bParam1 == 0)
			{
				*uParam0 = 5;
			}
			else
			{
				uParam0->f_13 = (uParam0->f_13 + fVar12);
				if (uParam0->f_13 >= 360f)
				{
					uParam0->f_13 = 360f;
					*uParam0 = 3;
					func_99(uParam0);
					GlobalFunc_2348(&(uParam0->f_17));
					uParam0->f_17 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_17, "BRUSHES_MOVE", uParam0->f_19, "CARWASH_SOUNDS", 0, 0);
				}
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_59())
			{
				*uParam0 = 5;
			}
			break;
		
		case 3:
			if (bParam1 == 0)
			{
				*uParam0 = 5;
			}
			else if (MISC::GET_GAME_TIMER() > uParam0->f_25)
			{
				if (!func_91(Var9, uParam0->f_15, 1))
				{
					GlobalFunc_2347(&(uParam0->f_21));
					*uParam0 = 5;
				}
				uParam0->f_25 = (MISC::GET_GAME_TIMER() + iLocal_39);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_59())
			{
				*uParam0 = 5;
			}
			break;
		
		case 5:
			uParam0->f_20 = 0;
			GlobalFunc_2347(&(uParam0->f_21));
			GlobalFunc_2348(&(uParam0->f_18));
			uParam0->f_13 = (uParam0->f_13 - fVar12);
			if (uParam0->f_13 <= 0f)
			{
				uParam0->f_13 = 0f;
				*uParam0 = 0;
				GlobalFunc_2348(&(uParam0->f_17));
				GlobalFunc_2348(&(uParam0->f_16));
			}
			break;
	}
	uParam0->f_12 = (uParam0->f_12 + (uParam0->f_13 * SYSTEM::TIMESTEP()));
	if (uParam0->f_12 > 360f)
	{
		uParam0->f_12 = (uParam0->f_12 - 360f);
	}
	func_96(uParam0);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_19, uParam0->f_11);
	ENTITY::SET_ENTITY_ROTATION(uParam0->f_19, ENTITY::GET_ENTITY_ROTATION(uParam0->f_19, 2) + Vector(0f, 0f, uParam0->f_12), 2, 1);
}

void func_96(var uParam0)//Position - 0x7556
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	int iVar10;
	int iVar11;
	
	if (!uParam0->f_1 == 1)
	{
		return;
	}
	if (func_75(*uParam0))
	{
		if (uParam0->f_20 == 0)
		{
			if (MISC::GET_GAME_TIMER() > uParam0->f_26)
			{
				uParam0->f_20 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(uParam0->f_2, uParam0->f_2 - Vector(5f, 0f, 0f), 2, uParam0->f_19, 4);
				if (uParam0->f_20 == 0)
				{
				}
			}
		}
		else
		{
			iVar10 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_20, &iVar0, &Var4, &uVar7, &iVar11);
			if (iVar10 == 2)
			{
				if (iVar0 > 0)
				{
					if (uParam0->f_22 == 0f)
					{
						uParam0->f_22 = (Var4.f_2 + 0.55f);
					}
					uParam0->f_5 = { Var4 + Local_42 };
					if (uParam0->f_5.f_2 == uParam0->f_22)
					{
						uParam0->f_23 = (uParam0->f_2.f_2 - (0.55f * 1.1f));
					}
					else
					{
						uParam0->f_23 = (uParam0->f_5.f_2 + 0.1f);
						if (func_93(iVar11, 1))
						{
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar11, uParam0->f_19, 1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_19, iVar11, 1);
							if (uParam0->f_18 == -1)
							{
								uParam0->f_18 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_18, "BRUSHES_HIT_CAR", uParam0->f_19, "CARWASH_SOUNDS", 0, 0);
							}
						}
					}
				}
			}
			uParam0->f_20 = 0;
			uParam0->f_26 = (MISC::GET_GAME_TIMER() + iLocal_40);
		}
	}
	else
	{
		GlobalFunc_2348(&(uParam0->f_18));
		uParam0->f_23 = uParam0->f_24;
	}
	Var1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_19, 1) };
	if (Var1.f_2 < uParam0->f_23)
	{
		Var1.f_2 = (Var1.f_2 + (uParam0->f_14 * SYSTEM::TIMESTEP()));
		if (Var1.f_2 > uParam0->f_23)
		{
			Var1.f_2 = uParam0->f_23;
		}
	}
	if (Var1.f_2 > uParam0->f_23)
	{
		Var1.f_2 = (Var1.f_2 - (uParam0->f_14 * SYSTEM::TIMESTEP()));
		if (Var1.f_2 < uParam0->f_23)
		{
			func_86(64, 64);
			Var1.f_2 = uParam0->f_23;
		}
	}
	if (uParam0->f_22 != 0f)
	{
		Var1.f_2 = GlobalFunc_253(Var1.f_2, uParam0->f_22, uParam0->f_24);
	}
	if (!GlobalFunc_100(uParam0->f_8, Var1))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_19, Var1, 1, 0, 0, 1);
	}
	uParam0->f_8 = { Var1 };
	if (bLocal_45 == 1)
	{
		GlobalFunc_2368(uParam0->f_2, uParam0->f_2.f_1, (uParam0->f_22 - 0.55f), uParam0->f_15, 0, 0, 255, 255, 32);
		GRAPHICS::DRAW_DEBUG_SPHERE(uParam0->f_2, 0.0625f, 0, 0, 255, 255);
		unk_0x6A3E157475DBFCD9(uParam0->f_2, uParam0->f_5 - Local_42, 0, 0, 255, 255);
		GRAPHICS::DRAW_DEBUG_SPHERE(uParam0->f_5 - Local_42, 0.03125f, 0, 0, 255, 255);
	}
}



void func_99(var uParam0)//Position - 0x78A2
{
	GlobalFunc_2347(&(uParam0->f_21));
	if (GlobalFunc_234(uParam0->f_19))
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_21))
		{
			uParam0->f_21 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_amb_car_wash", uParam0->f_19, 0f, 0f, 0f, Local_52, 1065353216, 0, 0, 0);
		}
	}
}

void func_100(var uParam0, bool bParam1, bool bParam2)//Position - 0x78E8
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	var uVar15;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	float fVar22;
	struct<2> Var23;
	struct<2> Var26;
	int iVar29;
	int iVar30;
	float fVar31;
	float fVar32;
	
	fVar3 = (360f * SYSTEM::TIMESTEP());
	iVar30 = -1;
	if (!*uParam0 == 1)
	{
		return;
	}
	func_104(uParam0);
	if (func_75(uParam0->f_2))
	{
		if (bParam1 == 0)
		{
			uParam0->f_2 = 5;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_59())
		{
			bParam1 = false;
			uParam0->f_2 = 5;
		}
		if (bParam1 == 0)
		{
			uParam0->f_16 = (uParam0->f_16 - (fVar3 * 2f));
			if (uParam0->f_16 <= 0f)
			{
				uParam0->f_16 = 0f;
				GlobalFunc_2348(&(uParam0->f_28));
			}
		}
	}
	else
	{
		uParam0->f_16 = (uParam0->f_16 - (fVar3 * 2f));
		if (uParam0->f_16 <= 0f)
		{
			uParam0->f_16 = 0f;
			GlobalFunc_2348(&(uParam0->f_28));
		}
	}
	fVar31 = -1.5f;
	fVar32 = -0.55f;
	if (!bParam2 && uParam0->f_2 != 5)
	{
		if (MISC::GET_GAME_TIMER() > uParam0->f_44)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
			uParam0->f_33[0] = func_91(Var0, uParam0->f_21[0], 1);
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[1], 0f) };
			uParam0->f_33[1] = func_91(Var0, uParam0->f_21[1], 1);
			uParam0->f_44 = (MISC::GET_GAME_TIMER() + iLocal_40);
		}
		if (bLocal_45 == 1)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
			if (uParam0->f_33[0])
			{
				GlobalFunc_2368(Var0, uParam0->f_21[0], 0, 255, 0, 255, 32);
			}
			else
			{
				GlobalFunc_2368(Var0, uParam0->f_21[0], 255, 0, 0, 255, 32);
			}
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[1], 0f) };
			if (uParam0->f_33[1])
			{
				GlobalFunc_2368(Var0, uParam0->f_21[1], 0, 255, 0, 255, 32);
			}
			else
			{
				GlobalFunc_2368(Var0, uParam0->f_21[1], 0, 0, 255, 255, 32);
			}
			unk_0x6A3E157475DBFCD9(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -2.5f, fVar31, 0.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 2.5f, fVar31, 0.5f), 0, 0, 255, 255);
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, 0f, 0.5f) };
			unk_0x6A3E157475DBFCD9(Var0, Var0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), 0, 0, 255, 255);
		}
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (!bParam2)
			{
				if (bParam1 == 1 && uParam0->f_33[0])
				{
					GlobalFunc_2348(&(uParam0->f_27));
					uParam0->f_27 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_27, "BRUSHES_SPINNING", uParam0->f_1, "CARWASH_SOUNDS", 0, 0);
					uParam0->f_12[0] = -0.55f;
					uParam0->f_12[1] = 0.55f;
					uParam0->f_31 = 0;
					uParam0->f_2 = 1;
					uParam0->f_46[0] = 0;
					uParam0->f_46[1] = 0;
					uParam0->f_49[0] = 0;
					uParam0->f_49[1] = 0;
				}
			}
			break;
		
		case 1:
			uParam0->f_16 = (uParam0->f_16 + fVar3);
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
			iVar29 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Var0, 2f, 0, 2064);
			if (func_93(iVar29, 1))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar29, uParam0->f_3[0], 1);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar29, uParam0->f_3[1], 1);
			}
			if (uParam0->f_16 >= 360f)
			{
				uParam0->f_16 = 360f;
				func_103(uParam0);
				uParam0->f_28 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_28, "BRUSHES_MOVE", uParam0->f_1, "CARWASH_SOUNDS", 0, 0);
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_36 == 0)
			{
				if (bLocal_65)
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, -1f, 0f) };
					uParam0->f_36 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var0 + Vector(1f, 0f, 0f), 2.5f, 2, 0, 4);
				}
				else
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -3f, fVar31, 0.5f) };
					uParam0->f_36 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, fVar31, 0.5f), 2, 0, 7);
				}
				if (uParam0->f_36 == 0)
				{
				}
			}
			else
			{
				iVar11 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_36, &iVar19, &Var12, &uVar15, &iVar10);
				if (iVar11 == 2)
				{
					if (func_93(iVar10, 1))
					{
						uParam0->f_37 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar10);
						MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_37), &Var23, &Var26);
						fVar21 = MISC::ABSF((Var26 - Var23));
						if (bLocal_65)
						{
							uParam0->f_12[0] = -((0.55f * 0.75f) + (fVar21 / 2f));
							uParam0->f_12[1] = ((0.55f * 0.75f) + (fVar21 / 2f));
						}
						else
						{
							Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_1, Var12 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1) * Vector(-fVar31, -fVar31, -fVar31)) };
							uParam0->f_17 = 1.5f;
						}
						if (iVar19 == 0)
						{
							uParam0->f_12[0] = -(0.55f + (fVar21 / 2f));
							uParam0->f_12[1] = (0.55f + (fVar21 / 2f));
						}
						uParam0->f_2 = 3;
						uParam0->f_17 = 1.5f;
						uParam0->f_46[0] = 0;
						uParam0->f_46[1] = 0;
						uParam0->f_49[0] = 0;
						uParam0->f_49[1] = 0;
						uParam0->f_41[0] = MISC::GET_GAME_TIMER() + 32;
						uParam0->f_41[1] = MISC::GET_GAME_TIMER() + 64;
					}
				}
				uParam0->f_36 = 0;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_37))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[0], 1);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[1], 1);
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_37), &Var23, &Var26);
				fVar22 = (MISC::ABSF((Var26.f_1 - Var23.f_1)) / 2f);
				fVar21 = MISC::ABSF((Var26 - Var23));
				iVar20 = GlobalFunc_5735(ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, fVar22, 0f), ENTITY::GET_ENTITY_COORDS(uParam0->f_37, 1));
				if (iVar20 == 1)
				{
					uParam0->f_12[0] = -0.55f;
					uParam0->f_12[1] = 0.55f;
				}
				else if (bLocal_65)
				{
					uParam0->f_12[0] = -((0.55f * fLocal_41) + (fVar21 / 2f));
					uParam0->f_12[1] = ((0.55f * fLocal_41) + (fVar21 / 2f));
					uParam0->f_17 = 1f;
				}
				else
				{
					iVar18 = 0;
					while (iVar18 < uParam0->f_3)
					{
						Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, fVar32, 0.5f) };
						if (iVar18 == 0)
						{
							Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -fLocal_74, fVar32, 0.5f) };
						}
						else
						{
							Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, fLocal_74, fVar32, 0.5f) };
						}
						iVar30 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_37, "seat_dside_f");
						if (iVar30 != -1)
						{
							Var0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_37, iVar30) };
							Var4.f_2 = Var0.f_2;
							Var7.f_2 = Var0.f_2;
						}
						if (bLocal_45)
						{
							unk_0x6A3E157475DBFCD9(Var4, Var7, 0, 0, 255, 255);
						}
						if (uParam0->f_38[iVar18] == 0)
						{
							if (MISC::GET_GAME_TIMER() > uParam0->f_41[iVar18])
							{
								if (iLocal_72 == 1 || VEHICLE::GET_VEHICLE_MOD(uParam0->f_37, 0) != -1)
								{
									uParam0->f_38[iVar18] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var7, Var4, fLocal_73, 2, 0, 4);
								}
								else
								{
									uParam0->f_38[iVar18] = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var7, Var4, 2, 0, 7);
								}
								if (uParam0->f_38[iVar18] == 0)
								{
								}
							}
						}
						else
						{
							iVar11 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_38[iVar18], &iVar19, &Var12, &uVar15, &iVar10);
							if (iVar11 == 2)
							{
								uParam0->f_49[iVar18] = uParam0->f_46[iVar18];
								uParam0->f_46[iVar18] = 0;
								if (iVar19 > 0)
								{
									if (bLocal_45)
									{
										GRAPHICS::DRAW_DEBUG_SPHERE(Var12, 0.06625f, 0, 0, 255, 255);
									}
									uParam0->f_46[iVar18] = 1;
								}
								if (func_93(iVar10, 1))
								{
									Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_1, Var12 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1) * Vector(-fVar32, -fVar32, -fVar32)) };
									uParam0->f_46[iVar18] = 1;
									if (iVar18 == 0)
									{
										uParam0->f_12[iVar18] = (Var0.x - 0.55f);
									}
									else
									{
										uParam0->f_12[iVar18] = (Var0.x + 0.55f);
									}
								}
							}
							uParam0->f_38[iVar18] = 0;
							uParam0->f_41[iVar18] = MISC::GET_GAME_TIMER() + 120;
						}
						if (uParam0->f_49[iVar18] != uParam0->f_46[iVar18])
						{
							if (uParam0->f_49[iVar18] == 1 && uParam0->f_46[iVar18] == 0)
							{
							}
							if (uParam0->f_49[iVar18] == 0 && uParam0->f_46[iVar18] == 1)
							{
							}
						}
						iVar18++;
					}
				}
				iVar20 = GlobalFunc_5735(ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, (fVar22 * 1.25f), 0f), ENTITY::GET_ENTITY_COORDS(uParam0->f_37, 1));
				if (iVar20 == 1)
				{
					uParam0->f_16 = (uParam0->f_16 - (fVar3 * 2f));
					if (uParam0->f_16 < 0f)
					{
						uParam0->f_16 = 0f;
						GlobalFunc_2348(&(uParam0->f_29));
						GlobalFunc_2348(&(uParam0->f_27));
						GlobalFunc_2347(&(uParam0->f_6[0]));
						GlobalFunc_2347(&(uParam0->f_6[1]));
					}
				}
			}
			if (!(uParam0->f_33[0] || uParam0->f_33[1]))
			{
				GlobalFunc_2347(&(uParam0->f_6[0]));
				GlobalFunc_2347(&(uParam0->f_6[1]));
				uParam0->f_2 = 5;
			}
			break;
		
		case 4:
			if (GlobalFunc_115(uParam0->f_37))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[0], 1);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[1], 1);
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_37), &Var23, &Var26);
				fVar22 = (MISC::ABSF((Var26.f_1 - Var23.f_1)) / 2f);
				fVar21 = MISC::ABSF((Var26 - Var23));
				iVar20 = GlobalFunc_5735(ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, (fVar22 * 1.25f), 0f), ENTITY::GET_ENTITY_COORDS(uParam0->f_37, 1));
				if (iVar20 == 1)
				{
					uParam0->f_16 = (uParam0->f_16 - (fVar3 * 2f));
					if (uParam0->f_16 < 0f)
					{
						uParam0->f_16 = 0f;
						GlobalFunc_2348(&(uParam0->f_29));
						GlobalFunc_2348(&(uParam0->f_27));
						GlobalFunc_2347(&(uParam0->f_6[0]));
						GlobalFunc_2347(&(uParam0->f_6[1]));
						uParam0->f_2 = 5;
					}
				}
			}
			if (!(uParam0->f_33[0] || uParam0->f_33[1]))
			{
				GlobalFunc_2347(&(uParam0->f_6[0]));
				GlobalFunc_2347(&(uParam0->f_6[1]));
				uParam0->f_2 = 5;
			}
			break;
		
		case 5:
			GlobalFunc_2348(&(uParam0->f_29));
			GlobalFunc_2348(&(uParam0->f_27));
			GlobalFunc_2347(&(uParam0->f_6[0]));
			GlobalFunc_2347(&(uParam0->f_6[1]));
			uParam0->f_16 = (uParam0->f_16 - fVar3);
			uParam0->f_12[0] = -1.75f;
			uParam0->f_12[1] = 1.75f;
			uParam0->f_17 = 1.5f;
			uParam0->f_46[0] = 0;
			uParam0->f_46[1] = 0;
			uParam0->f_49[0] = 0;
			uParam0->f_49[1] = 0;
			if (uParam0->f_16 <= 0f)
			{
				uParam0->f_16 = 0f;
				GlobalFunc_2348(&(uParam0->f_28));
			}
			if (MISC::GET_GAME_TIMER() > uParam0->f_44)
			{
				if (!func_91(uParam0->f_24, 1f, 1))
				{
					uParam0->f_31 = 1;
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_3[0], uParam0->f_31, 0);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_3[1], uParam0->f_31, 0);
					uParam0->f_44 = 0;
					uParam0->f_2 = 0;
				}
				else
				{
					uParam0->f_44 = (MISC::GET_GAME_TIMER() + iLocal_40);
				}
			}
			break;
	}
}



void func_103(var uParam0)//Position - 0x83E2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		GlobalFunc_2347(&(uParam0->f_6[iVar0]));
		if (GlobalFunc_234(uParam0->f_3[iVar0]))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_6[iVar0]))
			{
				uParam0->f_6[iVar0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_amb_car_wash", uParam0->f_3[iVar0], Local_46, Local_49, 1065353216, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_104(var uParam0)//Position - 0x8452
{
	int iVar0;
	float fVar1;
	var uVar2[2];
	
	fVar1 = uParam0->f_15;
	if (uParam0->f_16 >= 360f)
	{
		uParam0->f_16 = 360f;
	}
	if (uParam0->f_16 <= 0f)
	{
		uParam0->f_16 = 0f;
	}
	uParam0->f_15 = (uParam0->f_15 + (uParam0->f_16 * SYSTEM::TIMESTEP()));
	if (uParam0->f_15 < 0f)
	{
		uParam0->f_15 = (uParam0->f_15 + 360f);
	}
	if (uParam0->f_15 > 360f)
	{
		uParam0->f_15 = (uParam0->f_15 - 360f);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uVar2[iVar0] = uParam0->f_9[iVar0];
		if (uParam0->f_9[iVar0] < uParam0->f_12[iVar0])
		{
			uParam0->f_9[iVar0] = (uParam0->f_9[iVar0] + (uParam0->f_17 * SYSTEM::TIMESTEP()));
			if (uParam0->f_9[iVar0] > uParam0->f_12[iVar0])
			{
				func_86(iLocal_40, 64);
				uParam0->f_9[iVar0] = uParam0->f_12[iVar0];
			}
		}
		if (uParam0->f_9[iVar0] > uParam0->f_12[iVar0])
		{
			uParam0->f_9[iVar0] = (uParam0->f_9[iVar0] - (uParam0->f_17 * SYSTEM::TIMESTEP()));
			if (uParam0->f_9[iVar0] < uParam0->f_12[iVar0])
			{
				func_86(iLocal_40, 64);
				uParam0->f_9[iVar0] = uParam0->f_12[iVar0];
			}
		}
		if (uVar2[iVar0] != uParam0->f_9[iVar0])
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_3[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_9[iVar0], 0f, 1.5f), 1, 0, 0, 1);
		}
		if (fVar1 != uParam0->f_15)
		{
			ENTITY::SET_ENTITY_HEADING(uParam0->f_3[iVar0], uParam0->f_15);
		}
		iVar0++;
	}
}

void func_105(var uParam0, bool bParam1, bool bParam2)//Position - 0x85F6
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<3> Var16;
	var uVar19;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	struct<2> Var26;
	struct<2> Var29;
	
	fVar10 = -1.5f;
	fVar11 = -0.55f;
	fVar22 = (360f * SYSTEM::TIMESTEP());
	iVar23 = -1;
	if (!*uParam0 == 1)
	{
		return;
	}
	func_104(uParam0);
	if (func_75(uParam0->f_2))
	{
		if (bParam1 == 0)
		{
			uParam0->f_2 = 5;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_59())
		{
			bParam1 = false;
			uParam0->f_2 = 5;
		}
		if (bParam1 == 0)
		{
			uParam0->f_16 = (uParam0->f_16 - (fVar22 * 2f));
			if (uParam0->f_16 <= 0f)
			{
				uParam0->f_16 = 0f;
				GlobalFunc_2348(&(uParam0->f_28));
			}
		}
	}
	else
	{
		uParam0->f_16 = (uParam0->f_16 - (fVar22 * 2f));
		if (uParam0->f_16 <= 0f)
		{
			uParam0->f_16 = 0f;
			GlobalFunc_2348(&(uParam0->f_28));
		}
	}
	if (!bParam2 && uParam0->f_2 != 5)
	{
		if (MISC::GET_GAME_TIMER() > uParam0->f_44)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
			uParam0->f_33[0] = func_91(Var0, uParam0->f_21[0], 1);
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[1], 0f) };
			uParam0->f_33[1] = func_91(Var0, uParam0->f_21[1], 1);
			uParam0->f_44 = (MISC::GET_GAME_TIMER() + iLocal_40);
		}
	}
	if (bLocal_45 == 1)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
		if (uParam0->f_33[0])
		{
			GlobalFunc_2368(Var0, uParam0->f_21[0], 0, 255, 0, 255, 32);
		}
		else
		{
			GlobalFunc_2368(Var0, uParam0->f_21[0], 255, 0, 0, 255, 32);
		}
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[1], 0f) };
		if (uParam0->f_33[1])
		{
			GlobalFunc_2368(Var0, uParam0->f_21[1], 0, 255, 0, 255, 32);
		}
		else
		{
			GlobalFunc_2368(Var0, uParam0->f_21[1], 0, 0, 255, 255, 32);
		}
		unk_0x6A3E157475DBFCD9(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -2.5f, fVar10, 0.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 2.5f, fVar10, 0.5f), 0, 0, 255, 255);
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, 0f, 0.5f) };
		unk_0x6A3E157475DBFCD9(Var0, Var0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), 0, 0, 255, 255);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (!uParam0->f_33[0])
			{
				return;
			}
			if (uParam0->f_36 == 0)
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, uParam0->f_18[0], 0f) };
				uParam0->f_36 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var0 + Vector(1f, 0f, 0f), 2.25f, 2, 0, 4);
			}
			else
			{
				iVar15 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_36, &iVar13, &Var16, &uVar19, &iVar14);
				if (iVar15 == 2)
				{
					uVar9 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar14);
					if (func_93(iVar14, 1))
					{
						if (func_106(ENTITY::GET_ENTITY_FORWARD_VECTOR(uVar9), ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), 10f))
						{
							Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iVar9, 1) };
							if (Var0.f_1 <= 0f)
							{
							}
							else
							{
								uParam0->f_2 = 1;
								uParam0->f_37 = iVar9;
								GlobalFunc_2348(&(uParam0->f_27));
								uParam0->f_27 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_27, "BRUSHES_SPINNING", uParam0->f_1, "CARWASH_SOUNDS", 0, 0);
							}
						}
					}
				}
				uParam0->f_36 = 0;
			}
			break;
		
		case 1:
			uParam0->f_16 = (uParam0->f_16 + fVar22);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[0], 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[1], 1);
			if (uParam0->f_16 >= 360f)
			{
				uParam0->f_16 = 360f;
				func_103(uParam0);
				uParam0->f_28 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_28, "BRUSHES_MOVE", uParam0->f_1, "CARWASH_SOUNDS", 0, 0);
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			uParam0->f_2 = 3;
			break;
		
		case 3:
			if (!func_93(uParam0->f_37, 1))
			{
				uParam0->f_2 = 4;
				return;
			}
			if (!func_65(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_37, -1)))
			{
				uParam0->f_2 = 4;
				return;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_59())
			{
				uParam0->f_2 = 4;
				return;
			}
			MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_37), &Var26, &Var29);
			fVar25 = (MISC::ABSF((Var29.f_1 - Var26.f_1)) / 2f);
			iVar24 = GlobalFunc_5735(ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, fVar25, 0f), ENTITY::GET_ENTITY_COORDS(uParam0->f_37, 1));
			if (iVar24 == 1)
			{
				uParam0->f_12[0] = -0.55f;
				uParam0->f_12[1] = 0.55f;
				uParam0->f_2 = 4;
				return;
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_3)
			{
				if (iVar12 == 0)
				{
					Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 1f, fVar11, 0.5f) };
					Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -fLocal_74, fVar11, 0.5f) };
				}
				else
				{
					Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -1f, fVar11, 0.5f) };
					Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, fLocal_74, fVar11, 0.5f) };
				}
				iVar23 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_37, "seat_dside_f");
				if (iVar23 != -1)
				{
					Var0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_37, iVar23) };
					Var3.f_2 = Var0.f_2;
					Var6.f_2 = Var0.f_2;
				}
				if (uParam0->f_38[iVar12] == 0)
				{
					if (MISC::GET_GAME_TIMER() > uParam0->f_41[iVar12])
					{
						if (iLocal_72 == 1 || VEHICLE::GET_VEHICLE_MOD(uParam0->f_37, 0) != -1)
						{
							uParam0->f_38[iVar12] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var6, Var3, fLocal_73, 2, 0, 4);
						}
						else
						{
							uParam0->f_38[iVar12] = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var6, Var3, 2, 0, 7);
						}
						if (uParam0->f_38[iVar12] == 0)
						{
						}
					}
				}
				else
				{
					iVar15 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_38[iVar12], &iVar13, &Var16, &uVar19, &iVar14);
					if (iVar15 == 2)
					{
						uParam0->f_49[iVar12] = uParam0->f_46[iVar12];
						uParam0->f_46[iVar12] = 0;
						if (iVar13 > 0)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(Var16, 0.06625f, 0, 0, 255, 255);
							uParam0->f_46[iVar12] = 1;
						}
						if (func_93(iVar14, 1))
						{
							Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_1, Var16 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_1) * Vector(-fVar11, -fVar11, -fVar11)) };
							if (iVar12 == 0)
							{
								uParam0->f_12[iVar12] = (Var0.x - 0.55f);
							}
							else
							{
								uParam0->f_12[iVar12] = (Var0.x + 0.55f);
							}
						}
					}
					uParam0->f_38[iVar12] = 0;
					uParam0->f_41[iVar12] = MISC::GET_GAME_TIMER() + 120;
				}
				if (uParam0->f_49[iVar12] != uParam0->f_46[iVar12])
				{
					if (uParam0->f_49[iVar12] == 1 && uParam0->f_46[iVar12] == 0)
					{
					}
					if (uParam0->f_49[iVar12] == 0 && uParam0->f_46[iVar12] == 1)
					{
					}
				}
				iVar12++;
			}
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[0], 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_37, uParam0->f_3[1], 1);
			if (bParam2)
			{
				uParam0->f_2 = 4;
				return;
			}
			break;
		
		case 4:
			uParam0->f_37 = 0;
			uParam0->f_12[0] = (-uParam0->f_30 / 2f);
			uParam0->f_12[1] = (uParam0->f_30 / 2f);
			uParam0->f_16 = (uParam0->f_16 - fVar22);
			if (uParam0->f_16 <= 0f)
			{
				uParam0->f_16 = 0f;
				GlobalFunc_2348(&(uParam0->f_29));
				GlobalFunc_2348(&(uParam0->f_27));
				GlobalFunc_2347(&(uParam0->f_6[0]));
				GlobalFunc_2347(&(uParam0->f_6[1]));
			}
			if ((uParam0->f_12[0] == uParam0->f_9[0] && uParam0->f_12[1] == uParam0->f_9[1]) && uParam0->f_16 == 0f)
			{
				GlobalFunc_2348(&(uParam0->f_28));
				uParam0->f_2 = 5;
			}
			break;
		
		case 5:
			GlobalFunc_2348(&(uParam0->f_28));
			GlobalFunc_2348(&(uParam0->f_29));
			GlobalFunc_2348(&(uParam0->f_27));
			GlobalFunc_2347(&(uParam0->f_6[0]));
			GlobalFunc_2347(&(uParam0->f_6[1]));
			uParam0->f_12[0] = (-uParam0->f_30 / 2f);
			uParam0->f_12[1] = (uParam0->f_30 / 2f);
			uParam0->f_17 = 1.5f;
			if (MISC::GET_GAME_TIMER() > uParam0->f_44)
			{
				if (!func_91(uParam0->f_24, 1f, 1))
				{
					uParam0->f_31 = 1;
					uParam0->f_44 = 0;
					uParam0->f_2 = 0;
				}
				else
				{
					uParam0->f_44 = (MISC::GET_GAME_TIMER() + iLocal_40);
				}
			}
			break;
	}
}

bool func_106(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x8DD7
{
	return MISC::ACOS(GlobalFunc_168(Param3, Param0)) <= fParam6;
}

void func_107()//Position - 0x8DF2
{
	PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 225, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
	GlobalFunc_112();
	if (!Global_68245)
	{
		GlobalFunc_187();
	}
}



void func_110(int iParam0)//Position - 0x8EA9
{
	var uVar0;
	int iVar1;
	
	if (!Global_68245)
	{
		GlobalFunc_10963(15, 1);
	}
	else
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (GlobalFunc_234(uVar0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1) == PLAYER::PLAYER_PED_ID())
			{
				if (GlobalFunc_218())
				{
					GlobalFunc_8416(1182673174, 15, &iVar1, 0, 1);
					Global_2540096[iVar1 /*69*/].f_8 = ENTITY::GET_ENTITY_MODEL(iVar0);
					Global_2540096[iVar1 /*69*/].f_8.f_1 = iParam0;
				}
				else
				{
					MONEY::NETWORK_SPENT_CARWASH(15, ENTITY::GET_ENTITY_MODEL(iVar0), iParam0, 0, 1);
				}
			}
		}
	}
}














































void func_156(int iParam0)//Position - 0xA6ED
{
	if (!GlobalFunc_115(iParam0))
	{
		return;
	}
	if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iParam0))
	{
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(iParam0);
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Carwash_Vehicle_Decorator"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "Carwash_Vehicle_Decorator");
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, 0);
		}
	}
}

int func_157(int iParam0, var uParam1, int iParam2)//Position - 0xA740
{
	int iVar0;
	var uVar1;
	
	if (!GlobalFunc_234(iParam0))
	{
		return 0;
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
	if (!GlobalFunc_234(iParam0))
	{
		return 0;
	}
	if (VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
	}
	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 1))
	{
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_335))
	{
		func_159(iParam0, uParam1, 0f, uParam1->f_336);
		return 0;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam1->f_335))
	{
	}
	if (Global_68245)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, 1);
		}
	}
	VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0, 0);
	TASK::CLEAR_PED_TASKS(iVar0);
	ENTITY::SET_ENTITY_VELOCITY(iParam0, 0f, 0f, 0f);
	uParam1->f_350 = 2;
	TASK::OPEN_SEQUENCE_TASK(&uVar1);
	if (iParam2 > 0)
	{
		TASK::TASK_STAND_STILL(0, iParam2);
		uParam1->f_350++;
	}
	TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iParam0, uParam1->f_335, 262144, 0, 546, -1, uParam1->f_336, 0, 1.25f);
	TASK::TASK_STAND_STILL(0, 3000);
	TASK::CLOSE_SEQUENCE_TASK(uVar1);
	TASK::TASK_PERFORM_SEQUENCE(iVar0, uVar1);
	TASK::CLEAR_SEQUENCE_TASK(&uVar1);
	TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, uParam1->f_336);
	iLocal_70 = -1;
	uParam1->f_358 = 0;
	func_158();
	VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(iParam0, 0.2f, 1000, 0, 0, 0, -1);
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Carwash_Vehicle_Decorator"))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "Carwash_Vehicle_Decorator", 1);
	}
	func_66(uParam1);
	return 1;
}

void func_158()//Position - 0xA890
{
	var uVar0;
	var uVar3;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), &uVar0, &uVar3);
	}
}

void func_159(int iParam0, var uParam1, float fParam2, float fParam3)//Position - 0xA8B9
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	
	Var0 = { GlobalFunc_5778(*(uParam1[0 /*3*/]), *(uParam1[1 /*3*/]), fParam2, 0) };
	uVar3 = GlobalFunc_1695(*(uParam1[0 /*3*/]), *(uParam1[1 /*3*/]), 1);
	GlobalFunc_5724(iParam0, Var0 + Vector(0.1f, 0f, 0f));
	ENTITY::SET_ENTITY_HEADING(iParam0, uVar3);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, 0);
	if (fParam3 == 0f)
	{
		return;
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1);
	if (fParam2 > 1f)
	{
		return;
	}
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, fParam3);
	uVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
	if (!func_65(uVar4))
	{
		return;
	}
	Var0 = { GlobalFunc_5778(*(uParam1[0 /*3*/]), *(uParam1[1 /*3*/]), 1.1f, 0) };
	TASK::TASK_VEHICLE_DRIVE_TO_COORD(uVar4, iParam0, Var0, fParam3, 0, ENTITY::GET_ENTITY_MODEL(iParam0), 262144, 0.5f, 1000f);
}




void func_163()//Position - 0xAA5E
{
	struct<3> Var0;
	float fVar3;
	
	func_191(&Local_75, -700.1f, -922.2f, 18.4f, -700.1f, -943.6f, 18.7f);
	func_190(&Local_75, -700.1f, -926.6f, 18.7f, -699.9344f, -939.5706f, 18.01449f);
	func_189(&Local_75, -699.9368f, -940.4027f, 20f, -699.8781f, -926.0388f, 20f);
	GlobalFunc_2357(-701.15f, -947.1219f, 18.49169f, 6.2f, &(Local_75.f_352), &(Local_75.f_355));
	func_187(&Local_75, "carwash2_r");
	Local_75.f_338 = 0.6f;
	Local_75.f_351 = 2;
	Local_75.f_21 = { -700.0682f, -921.149f, 18.7028f };
	Local_75.f_337 = 4f;
	func_183(&(Local_75.f_172[0 /*23*/]), -701.0261f, -918.9723f, 21.3734f, 1.9948f, 0f, -121.2536f, -701.1696f, -918.9987f, 20.313f, -2.3997f, 0f, -166.3155f, GlobalFunc_92(Global_68245, 5000, 8500), 0);
	GlobalFunc_2451(&(Local_75.f_172[0 /*23*/]), 50f, 0);
	func_181(&(Local_75.f_172[0 /*23*/]), 0.105457f);
	func_183(&(Local_75.f_172[1 /*23*/]), -701.5583f, -942.6389f, 20.2026f, -4.1156f, 0f, -23.5382f, -698.8515f, -942.399f, 20.1769f, -4.1156f, 0f, 16.0096f, 8500, 0);
	GlobalFunc_2451(&(Local_75.f_172[1 /*23*/]), 50f, 0);
	func_181(&(Local_75.f_172[1 /*23*/]), 0.74f);
	GlobalFunc_234(PLAYER::PLAYER_PED_ID());
	if (!Global_68245)
	{
		func_180();
	}
	func_183(&(Local_75.f_172[6 /*23*/]), -699.0652f, -951.9319f, 18.9507f, 7.8579f, 0f, 8.784f, -698.65f, -952.932f, 19.26f, 0.7437f, 0f, 23.8817f, 7200, 0.45f);
	GlobalFunc_2451(&(Local_75.f_172[6 /*23*/]), 40.022f, 0);
	Var0 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3) && (Var0.f_2 - fVar3) > 1.35f)
	{
		Local_75.f_342 = 1;
	}
	if (!Global_68245)
	{
		GlobalFunc_5749(&(Local_75.f_172[0 /*23*/]), &(Local_75.f_340), Local_75.f_342, 1, 1, 1);
	}
	func_179(&Local_75, 190);
	func_172(&uLocal_438, Local_75.f_335);
	func_171(&(Local_75.f_30), -699.97f, -927.7f, 20.8279f, 0f, 4.85f, 0, 0.3f);
	func_170(&(Local_75.f_30), "ent_amb_car_wash_jet_soap");
	func_169(60);
	func_168(&(Local_75.f_120), -699.97f, -935f, 17.9f, 180f, 3.6f, 0.2f);
	func_167(&(Local_75.f_93), -699.97f, -931.7f, 21.3f, 0f, 18.56449f);
	func_169(60);
	func_171(&(Local_75.f_51), -699.97f, -938.8f, 20.8279f, 180f, 4.85f, 0, 0.3f);
	func_170(&(Local_75.f_51), "ent_amb_car_wash_jet");
	func_169(60);
	func_164(&uLocal_438);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
}

void func_164(var uParam0)//Position - 0xADAB
{
	GlobalFunc_5398(uParam0, 0);
	GlobalFunc_5398(uParam0, 1);
	GlobalFunc_5398(uParam0, 2);
}



void func_167(var uParam0, struct<3> Param1, float fParam4, float fParam5)//Position - 0xAFE3
{
	float fVar0;
	
	uParam0->f_2 = { Param1 };
	uParam0->f_19 = OBJECT::CREATE_OBJECT(joaat("prop_carwash_roller_horz"), Param1, 0, 1, 0);
	uParam0->f_5 = { Param1 };
	uParam0->f_23 = Param1.f_2;
	uParam0->f_24 = Param1.f_2;
	uParam0->f_11 = fParam4;
	uParam0->f_1 = 1;
	uParam0->f_25 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1, iLocal_39));
	uParam0->f_26 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2, iLocal_40));
	uParam0->f_15 = 1.25f;
	if (fParam5 == 0f)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar0))
		{
			if (fVar0 != 0f && fVar0 != -200f)
			{
				uParam0->f_22 = (fVar0 + 0.55f);
			}
		}
	}
	else
	{
		uParam0->f_22 = fParam5;
	}
	if (GlobalFunc_234(uParam0->f_19))
	{
		ENTITY::SET_ENTITY_HEADING(uParam0->f_19, fParam4);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_19, 1);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_19, 1, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_19, 1);
	}
	func_95(uParam0, 1);
}

void func_168(var uParam0, struct<3> Param1, float fParam4, float fParam5, float fParam6)//Position - 0xB0CC
{
	var uVar0;
	struct<3> Var1;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1 + Vector(0.3f, 0f, 0f), &uVar0))
	{
	}
	uParam0->f_24 = { Param1 };
	uParam0->f_30 = fParam5;
	Param1.f_2 = (Param1.f_2 + fParam6);
	uParam0->f_24 = { Param1 };
	uParam0->f_1 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Param1, 0, 1, 0);
	if (GlobalFunc_115(uParam0->f_1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1, 1);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_1, Param1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_1, fParam4);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_1, 0, 0);
	}
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, (-fParam5 / 2f), 0f, 1.5f) };
	uParam0->f_3[0] = OBJECT::CREATE_OBJECT(joaat("prop_carwash_roller_vert"), Var1, 0, 1, 0);
	uParam0->f_12[0] = (-fParam5 / 2f);
	uParam0->f_9[0] = (-fParam5 / 2f);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3[0], 1);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_3[0], 1, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_3[0], 1);
	ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_3[0], 0);
	ENTITY::SET_ENTITY_COORDS(uParam0->f_3[0], Var1, 1, 0, 0, 1);
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, (fParam5 / 2f), 0f, 1.5f) };
	uParam0->f_3[1] = OBJECT::CREATE_OBJECT(joaat("prop_carwash_roller_vert"), Var1, 0, 1, 0);
	uParam0->f_12[1] = (fParam5 / 2f);
	uParam0->f_9[1] = (fParam5 / 2f);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3[1], 1);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_3[1], 1, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_3[1], 1);
	ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_3[1], 0);
	ENTITY::SET_ENTITY_COORDS(uParam0->f_3[1], Var1, 1, 0, 0, 1);
	uParam0->f_15 = 0f;
	uParam0->f_2 = 0;
	*uParam0 = 1;
	uParam0->f_18[0] = -1.275f;
	uParam0->f_21[0] = 1.25f;
	uParam0->f_18[1] = 0f;
	uParam0->f_21[1] = 0.62f;
	uParam0->f_12[0] = -1.75f;
	uParam0->f_12[1] = 1.75f;
	uParam0->f_44 = 0;
}

void func_169(int iParam0)//Position - 0xB2C1
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = NETWORK::GET_NETWORK_TIME();
	while (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uVar0)) < iParam0)
	{
		SYSTEM::WAIT(0);
	}
}

void func_170(var uParam0, char* sParam1)//Position - 0xB2F5
{
	uParam0->f_13 = sParam1;
}

void func_171(var uParam0, struct<3> Param1, float fParam4, float fParam5, int iParam6, float fParam7)//Position - 0xB303
{
	float fVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_13))
	{
		uParam0->f_13 = "ent_amb_car_wash_jet";
	}
	*uParam0 = 1;
	uParam0->f_8 = (fParam5 / 2f);
	uParam0->f_3 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Param1, 0, 1, 0);
	uParam0->f_1 = iParam6;
	if (GlobalFunc_234(uParam0->f_3))
	{
		ENTITY::SET_ENTITY_HEADING(uParam0->f_3, fParam4);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3, 1);
	}
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar0))
	{
		uParam0->f_9 = MISC::ABSF((Param1.f_2 - fVar0));
	}
	uParam0->f_7 = fParam7;
	uParam0->f_10 = { Param1 };
	uParam0->f_10.f_2 = fVar0;
}

void func_172(var uParam0, char* sParam1)//Position - 0xB396
{
	GlobalFunc_5730(uParam0, 0, joaat("prop_carwash_roller_horz"));
	GlobalFunc_5730(uParam0, 1, joaat("prop_carwash_roller_vert"));
	GlobalFunc_5730(uParam0, 2, joaat("prop_ld_test_01"));
	GlobalFunc_5397(uParam0, 3, 4, "SCRIPT\CARWASH", 0);
	GlobalFunc_5729(uParam0, 4);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		GlobalFunc_5397(uParam0, 5, 11, sParam1, 0);
	}
	while (!GlobalFunc_5731(uParam0))
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 51);
		PAD::SET_INPUT_EXCLUSIVE(2, 75);
		func_107();
		SYSTEM::WAIT(0);
	}
}







void func_179(var uParam0, int iParam1)//Position - 0xB998
{
	uParam0->f_334 = iParam1;
	GlobalFunc_7621(uParam0->f_334, 1, 0, 1, 0);
}

void func_180()//Position - 0xB9B4
{
	var uVar0;
	struct<2> Var1;
	var uVar4;
	
	uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uVar0), &Var1, &uVar4);
	if (Var1.f_1 < -3.8f)
	{
		func_183(&(Local_75.f_172[2 /*23*/]), -699.969f, -929.1818f, 19.2126f, -0.8962f, -0.0038f, -179.6509f, -699.9516f, -932.04f, 19.1679f, -0.8962f, -0.0038f, -179.6509f, 6500, 1.5f);
	}
	else
	{
		func_183(&(Local_75.f_172[2 /*23*/]), -700.0016f, -932.0601f, 18.7178f, -8.6749f, 0f, -179.6145f, -700.0532f, -936.7521f, 18.6515f, 3.9366f, 0f, 179.651f, 6500, 1.5f);
	}
	Local_75.f_172[2 /*23*/].f_1[0 /*3*/].f_1 = (Local_75.f_172[2 /*23*/].f_1[0 /*3*/].f_1 + fLocal_628);
	Local_75.f_172[2 /*23*/].f_1[1 /*3*/].f_1 = (Local_75.f_172[2 /*23*/].f_1[1 /*3*/].f_1 + fLocal_628);
	GlobalFunc_2451(&(Local_75.f_172[2 /*23*/]), 50f, 0);
	func_181(&(Local_75.f_172[2 /*23*/]), 1.107178f);
}

void func_181(var uParam0, float fParam1)//Position - 0xBADC
{
	uParam0->f_22 = fParam1;
}


void func_183(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14)//Position - 0xBB17
{
	func_185(uParam0, Param1, Param4, 0, iParam14);
	func_184(uParam0, Param7, Param10, iParam13);
}

void func_184(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7)//Position - 0xBB40
{
	uParam0->f_1[1 /*3*/] = { Param1 };
	uParam0->f_8[1 /*3*/] = { Param4 };
	*uParam0 = 1;
	uParam0->f_20 = uParam7;
}

void func_185(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8)//Position - 0xBB6C
{
	GlobalFunc_1476(uParam0);
	uParam0->f_1[0 /*3*/] = { Param1 };
	uParam0->f_8[0 /*3*/] = { Param4 };
	*uParam0 = 1;
	uParam0->f_21 = iParam7;
	uParam0->f_18 = uParam8;
	uParam0->f_20 = 0;
}


void func_187(var uParam0, char* sParam1)//Position - 0xBC03
{
	uParam0->f_335 = sParam1;
}


void func_189(var uParam0, struct<3> Param1, struct<3> Param4)//Position - 0xBC3E
{
	uParam0->f_7[0 /*3*/] = { Param1 };
	uParam0->f_7[1 /*3*/] = { Param4 };
	if (MISC::ABSF((Param4.x - Param1.x)) > MISC::ABSF((Param4.f_1 - Param1.f_1)))
	{
		uParam0->f_29 = 0;
	}
	else
	{
		uParam0->f_29 = 0;
	}
}

void func_190(var uParam0, struct<3> Param1, struct<3> Param4)//Position - 0xBC87
{
	uParam0->f_14[0 /*3*/] = { Param1 };
	uParam0->f_14[1 /*3*/] = { Param4 };
}

void func_191(var uParam0, struct<3> Param1, struct<3> Param4)//Position - 0xBCA9
{
	*(uParam0[0 /*3*/]) = { Param1 };
	*(uParam0[1 /*3*/]) = { Param4 };
	uParam0->f_26 = { GlobalFunc_107(Param4 - Param1) };
	uParam0->f_24 = GlobalFunc_830(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]));
	func_192(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), 3f, 0, !Global_68245, 0, 1, !Global_68245);
}

void func_192(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0xBD10
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param3, 1);
	Var2 = { Param0 };
	Var5 = { GlobalFunc_107(Param3 - Param0) };
	while (fVar1 < fVar0)
	{
		if (bParam7)
		{
			MISC::CLEAR_AREA_OF_PEDS(Var2, fParam6, 0);
		}
		if (bParam9)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Var2, fParam6, 0);
		}
		if (bParam8)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var2, fParam6, 0, 0, 0, 0, 0);
		}
		if (bParam10)
		{
			FIRE::STOP_FIRE_IN_RANGE(Var2, fParam6);
		}
		if (bParam11)
		{
			MISC::CLEAR_AREA_OF_PROJECTILES(Var2, fParam6, 0);
		}
		Var2 = { Var2 + Var5 * FtoV((fParam6 / 2f)) };
		fVar1 = (fVar1 + (fParam6 / 2f));
	}
}


void func_194(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0xBDD4
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
					if (GlobalFunc_10971(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11268(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10971(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11268(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10971(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10971(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11268(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10971(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11268(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iLocal_38 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_38 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}





















































































































int func_311()//Position - 0x28111
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER() + 100;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		switch (GlobalFunc_7905(&iLocal_627, 0, 9, 0, 0))
		{
			case 1:
				return 1;
			
			case 0:
				return 0;
			
			default:
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}







void func_318()//Position - 0x2850F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar12;
	int iVar15;
	struct<3> Var16;
	struct<3> Var19;
	var uVar22;
	int iVar23;
	
	while (CAM::IS_SCREEN_FADED_OUT() || GlobalFunc_268())
	{
		SYSTEM::WAIT(0);
	}
	func_163();
	GlobalFunc_2545(&(Local_561[0 /*24*/]), 1, "", GlobalFunc_1567(156), 15, "", 0, 2.5f);
	GlobalFunc_5817(&(Local_561[0 /*24*/]), Local_75.f_26, 15f);
	GlobalFunc_2544(&uLocal_610, 1);
	Local_75.f_336 = 1.5f;
	while (true)
	{
		GlobalFunc_234(PLAYER::PLAYER_PED_ID());
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (GlobalFunc_7987())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_371(0);
			}
		}
		bVar1 = false;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			bVar1 = (func_354(iVar3) || func_353(iVar3));
			bLocal_559 = VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar3);
			GlobalFunc_728(bLocal_559);
		}
		func_84(&Local_75);
		iVar2 = bLocal_557;
		bLocal_557 = func_62(PLAYER::PLAYER_PED_ID());
		if (iVar2 == 0 && bLocal_557 == 1)
		{
		}
		if (iVar2 == 1 && bLocal_557 == 0)
		{
		}
		if (bLocal_557)
		{
			if (iVar2 != bLocal_557)
			{
				Local_75.f_339 = 0;
				func_180();
			}
			func_81(&Local_75, iVar3, fLocal_556);
			if (func_15(&Local_75, iVar3))
			{
				if (Local_75.f_358 == 0)
				{
					func_110(2);
				}
				func_156(iVar3);
				func_78(&Local_75);
				func_23(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
		else
		{
			func_25(Local_75.f_340, 1);
			func_23(PLAYER::PLAYER_PED_ID());
			if (iVar2 == 1 && bLocal_557 == 0)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (func_352(&(Local_561[0 /*24*/])))
			{
				Var16 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_75.f_7[0 /*3*/] + Local_75.f_7[1 /*3*/] / Vector(2f, 2f, 2f), Local_75.f_24, Local_629) };
				Var19 = { fLocal_632, SYSTEM::VDIST(Local_75.f_7[0 /*3*/], Local_75.f_7[1 /*3*/]), fLocal_633 };
				uVar22 = Local_75.f_24;
				if (iLocal_560 == 0)
				{
					if (MISC::GET_GAME_TIMER() > iVar0)
					{
						iLocal_560 = SHAPETEST::START_SHAPE_TEST_BOX(Var16, Var19, 0f, 0f, uVar22, 0, 18, iVar3, 4);
					}
				}
				else
				{
					iVar7 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_560, &iVar15, &uVar9, &uVar12, &uVar8);
					if (iVar7 == 2)
					{
						iLocal_558 = 0;
						if (iVar15 > 0)
						{
							if (func_50(uVar8))
							{
								iLocal_558 = 1;
							}
						}
						iLocal_560 = 0;
					}
					if (iVar7 == 0)
					{
						iLocal_560 = 0;
					}
					iVar0 = MISC::GET_GAME_TIMER() + 250;
				}
			}
			Local_561[0 /*24*/].f_8 = iLocal_558;
			if (!iLocal_558 && func_352(&(Local_561[0 /*24*/])))
			{
				iVar23 = func_351(&(Local_561[0 /*24*/]));
				if (iVar23 > 1)
				{
				}
			}
			if (func_321(&Local_561, &uLocal_610, bVar1, 0, 0, 1424))
			{
				if (GlobalFunc_234(iVar3))
				{
					func_35(Local_75[0 /*3*/], Local_75[1 /*3*/], 3f, 0);
					func_319(iVar3, &Local_75, 1);
					func_76(PLAYER::PLAYER_PED_ID(), 1);
					func_157(iVar3, &Local_75, 0);
					fLocal_556 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iVar3);
					Local_75.f_339 = 0;
					Local_75.f_343 = 0;
					iLocal_558 = 0;
				}
			}
		}
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (GlobalFunc_6678(PLAYER::PLAYER_ID(), 0))
		{
			Var4.f_2 = 18.5f;
		}
		if (SYSTEM::VDIST2(Var4, -700.6f, -933.4f, 18.5f) > (90f * 90f))
		{
			func_371(0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_319(int iParam0, var uParam1, int iParam2)//Position - 0x2886A
{
	struct<3> Var0;
	
	if (GlobalFunc_234(iParam0))
	{
		GlobalFunc_5749(&(uParam1->f_172[0 /*23*/]), &(uParam1->f_340), uParam1->f_342, 1, 1, 1);
		Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
		if (!func_320(uParam1->f_26, Var0, 30f) || iParam2 == 1)
		{
			GlobalFunc_5724(iParam0, MISC::_0x21C235BC64831E5A(ENTITY::GET_ENTITY_COORDS(iParam0, 1), *(uParam1[0 /*3*/]), *(uParam1[1 /*3*/]), 0) + Vector(0.1f, 0f, 0f));
			ENTITY::SET_ENTITY_HEADING(iParam0, uParam1->f_24);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 0f);
		}
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0, 0);
		uParam1->f_339 = 0;
		uParam1->f_345 = 0;
		uParam1->f_348 = 0;
		uParam1->f_349 = 0;
		if (Global_68245)
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return;
			}
		}
		func_31(iParam0, 2);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 1))
		{
			VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 0);
		}
	}
}

bool func_320(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x2894C
{
	return MISC::ACOS(MISC::ABSF(GlobalFunc_168(Param3, Param0))) <= fParam6;
}

int func_321(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x2896B
{
	int iVar0;
	var uVar1;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			func_347(uParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (GlobalFunc_5815(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *uParam0)
				{
					if (func_352(uParam0[iVar0 /*24*/]) && (*uParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((uParam0[iVar0 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0))
						{
							GlobalFunc_7986(uParam1, 6);
						}
						else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							GlobalFunc_7986(uParam1, 8);
						}
						else if (bParam2)
						{
							GlobalFunc_7986(uParam1, 3);
						}
						else if ((uParam0[iVar0 /*24*/])->f_8)
						{
							GlobalFunc_7986(uParam1, 2);
						}
						else if (!func_340((uParam0[uParam1->f_12 /*24*/])->f_9))
						{
							GlobalFunc_7986(uParam1, 1);
						}
						else if (GlobalFunc_7985())
						{
							GlobalFunc_7986(uParam1, 7);
						}
						else if (func_337(uParam0[iVar0 /*24*/], &uVar1))
						{
							GlobalFunc_7986(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				GlobalFunc_7144(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_334(uParam1, uParam1->f_6);
			}
			if (func_332(uParam0[uParam1->f_12 /*24*/]) || (uParam0[iVar0 /*24*/])->f_8 == 0)
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_327(uParam1, uParam1->f_2, (uParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_332(uParam0[uParam1->f_12 /*24*/]) || func_340((uParam0[uParam1->f_12 /*24*/])->f_9))
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_334(uParam1, uParam1->f_1);
			}
			if (func_332(uParam0[uParam1->f_12 /*24*/]) || !GlobalFunc_5815(uParam1->f_16))
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_334(uParam1, uParam1->f_3);
			}
			if ((func_332(uParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !GlobalFunc_5815(uParam1->f_16))
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_334(uParam1, uParam1->f_5);
			}
			if (func_332(uParam0[uParam1->f_12 /*24*/]) || !GlobalFunc_5815(uParam1->f_16))
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_334(uParam1, uParam1->f_4);
			}
			if (func_332(uParam0[uParam1->f_12 /*24*/]) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (GlobalFunc_2546())
				{
					func_334(uParam1, uParam1->f_7);
				}
				else
				{
					func_334(uParam1, uParam1->f_8);
				}
			}
			if (func_332(uParam0[uParam1->f_12 /*24*/]) || GlobalFunc_5813(uParam0[uParam1->f_12 /*24*/]))
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			PAD::SET_INPUT_EXCLUSIVE(2, 51);
			PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
			GlobalFunc_187();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				GlobalFunc_7986(uParam1, 8);
				return 0;
			}
			if ((uParam0[uParam1->f_12 /*24*/])->f_8)
			{
				GlobalFunc_7986(uParam1, 2);
				return 0;
			}
			if (func_332(uParam0[uParam1->f_12 /*24*/]) || !GlobalFunc_5815(uParam1->f_16))
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			if (Global_67058)
			{
				return 0;
			}
			if ((uParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || GlobalFunc_708(PLAYER::PLAYER_PED_ID()) != -1)
				{
					GlobalFunc_7986(uParam1, 0);
					return 0;
				}
			}
			if ((uParam0[uParam1->f_12 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0))
			{
				GlobalFunc_7986(uParam1, 6);
				return 0;
			}
			if (GlobalFunc_7985())
			{
				GlobalFunc_7986(uParam1, 7);
				return 0;
			}
			if (!func_340((uParam0[uParam1->f_12 /*24*/])->f_9))
			{
				GlobalFunc_7986(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_327(uParam1, *uParam1, (uParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((uParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 0;
			}
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if ((PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.05f)
				{
					return 0;
				}
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 51) && uParam1->f_9 == 1)
			{
				if (!GlobalFunc_5813(uParam0[uParam1->f_12 /*24*/]))
				{
					GlobalFunc_7986(uParam1, 9);
				}
				else
				{
					GlobalFunc_7986(uParam1, 5);
				}
			}
			break;
		
		case 5:
			GlobalFunc_7144(uParam1);
			(uParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				GlobalFunc_7986(uParam1, 0);
				return 1;
			}
			HUD::CLEAR_HELP(1);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0[uParam1->f_12 /*24*/])->f_5))
			{
				SCRIPT::REQUEST_SCRIPT((uParam0[uParam1->f_12 /*24*/])->f_5);
				while (!SCRIPT::HAS_SCRIPT_LOADED((uParam0[uParam1->f_12 /*24*/])->f_5))
				{
					GlobalFunc_187();
					if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !Global_68245)
						{
							GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2f, 1, 1056964608, 0, 1);
						}
					}
					PAD::SET_INPUT_EXCLUSIVE(2, 51);
					SCRIPT::REQUEST_SCRIPT((uParam0[uParam1->f_12 /*24*/])->f_5);
					PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
					SYSTEM::WAIT(0);
				}
				if (bParam3)
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (SCRIPT::HAS_SCRIPT_LOADED((uParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!CAM::IS_SCREEN_FADED_OUT())
						{
							if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !Global_68245)
								{
									GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2f, 1, 1056964608, 0, 1);
								}
							}
							PAD::SET_INPUT_EXCLUSIVE(2, 51);
							PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
							GlobalFunc_187();
							SYSTEM::WAIT(0);
						}
					}
					SYSTEM::START_NEW_SCRIPT((uParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED((uParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}






int func_327(var uParam0, char* sParam1, var uParam2)//Position - 0x2938B
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (GlobalFunc_5814(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
		GlobalFunc_2540(sParam1, uParam2);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = uParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}





bool func_332(var uParam0)//Position - 0x29479
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 1;
		}
		if (GlobalFunc_708(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { GlobalFunc_5741(uParam0->f_16, 2f) };
	return !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}


int func_334(var uParam0, char* sParam1)//Position - 0x2957D
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (GlobalFunc_5814(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
		GlobalFunc_Display_Help_Text2(sParam1);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}



int func_337(var uParam0, var uParam1)//Position - 0x29609
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5[32];
	
	iVar2 = -1;
	fVar4 = 1f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	iVar0 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar5);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (GlobalFunc_234(uVar5[iVar1]))
		{
			fVar3 = GlobalFunc_713(uVar5[iVar1], uParam0->f_1, 1);
			if (fVar3 < fVar4 || fVar4 == -1f)
			{
				fVar4 = fVar3;
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar5[iVar2], -1) != PLAYER::PLAYER_PED_ID())
	{
		return 0;
	}
	*uParam1 = uVar5[iVar2];
	return 1;
}



bool func_340(int iParam0)//Position - 0x29753
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MONEY::_NETWORK_GET_VC_BANK_WALLET_BALANCE_IS_NOT_LESS_THAN(iParam0, -1);
	}
	return GlobalFunc_469(GlobalFunc_8329()) >= iParam0;
}







void func_347(var uParam0)//Position - 0x29893
{
	if (uParam0->f_11 == 1)
	{
		func_348(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		GlobalFunc_2368(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_348(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x298C8
{
	func_349(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_349(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x298EE
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13[8];
	int iVar38;
	
	if (fParam6 == 0f)
	{
		return;
	}
	Var0 = { GlobalFunc_107(Param3 - Param0) };
	Var3 = { GlobalFunc_277(Var0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	Var7 = { Param0 };
	Var10 = { Param3 };
	Var10.f_2 = Param0.f_2;
	Var13[0 /*3*/] = { Var7 - Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[1 /*3*/] = { Var7 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[2 /*3*/] = { Var10 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[3 /*3*/] = { Var10 - Var3 * Vector(fVar6, fVar6, fVar6) };
	unk_0x6A3E157475DBFCD9(Var13[0 /*3*/], Var13[1 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[1 /*3*/], Var13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[2 /*3*/], Var13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[3 /*3*/], Var13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		Var13[(4 + iVar38) /*3*/] = { Var13[iVar38 /*3*/] };
		Var13[(4 + iVar38) /*3*/].f_2 = Param3.f_2;
		iVar38++;
	}
	unk_0x6A3E157475DBFCD9(Var13[4 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[5 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[6 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[7 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[0 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[1 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[2 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[3 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}


int func_351(var uParam0)//Position - 0x29B37
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	float fVar35;
	int iVar36;
	
	iVar0 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (GlobalFunc_234(uVar2[iVar1]))
		{
			fVar35 = GlobalFunc_713(uVar2[iVar1], uParam0->f_1, 1);
			if (fVar35 <= (uParam0->f_10 * 2.5f))
			{
				iVar36++;
			}
		}
		iVar1++;
	}
	return iVar36;
}

bool func_352(var uParam0)//Position - 0x29B9C
{
	GlobalFunc_234(PLAYER::PLAYER_PED_ID());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (GlobalFunc_126(0))
	{
		return 0;
	}
	if (GlobalFunc_160())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (GlobalFunc_708(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, 1, 0);
	}
	return GlobalFunc_775(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_10);
}

int func_353(int iParam0)//Position - 0x29C53
{
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 1))
	{
		if (VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_354(int iParam0)//Position - 0x29CBE
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!GlobalFunc_115(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iParam0))
	{
		return 1;
	}
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		return 1;
	}
	if (func_355(iParam0))
	{
		return 1;
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var3);
	if (MISC::ABSF((Var3.x - Var0.x)) > 3.4f)
	{
		return 1;
	}
	if (MISC::ABSF((Var3.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_68245)
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			return 0;
		}
	}
	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 1) && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (!VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 1) && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("btype"))
	{
		if (GlobalFunc_115(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 3)) || GlobalFunc_115(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_355(int iParam0)//Position - 0x29DD5
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);
	if (GlobalFunc_2543(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3) && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}
















void func_371(int iParam0)//Position - 0x2A439
{
	func_375(&Local_75);
	func_374(&Local_75, iParam0);
	GlobalFunc_6925(&uLocal_438);
	if (Global_68245 == 0)
	{
		GlobalFunc_1997(&iLocal_627);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}



void func_374(var uParam0, int iParam1)//Position - 0x2A4CB
{
	struct<3> Var0;
	int iVar3;
	
	func_375(uParam0);
	if (Global_68245)
	{
		iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(PLAYER::PLAYER_PED_ID());
		if (iVar3 != GlobalFunc_314())
		{
			if (Global_2414009[iVar3 /*254*/].f_228 == 1)
			{
				Global_2414009[iVar3 /*254*/].f_228 = 0;
			}
		}
	}
	if (iParam1 == 1)
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		func_159(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uParam0, 1f, 0f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
		ENTITY::SET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0f, 0f, 0f);
		SYSTEM::WAIT(0);
		func_65(PLAYER::PLAYER_PED_ID());
		Var0 = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1) };
		Var0.f_2 = -200f;
		ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Var0, 1, 0, 0, 1);
		func_54(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 500f, 0f);
		func_31(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
		SYSTEM::WAIT(125);
		CAM::DO_SCREEN_FADE_IN(500);
		SYSTEM::WAIT(1000);
		GlobalFunc_7610(302, 0, 0);
		func_110(uParam0->f_351);
	}
	else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	if (!Global_68245)
	{
		BRAIN::_0x6D6840CEE8845831("launcher_CarWash");
	}
}

void func_375(var uParam0)//Position - 0x2A5F1
{
	var uVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_3(1, 1, 1, 1);
	}
	func_23(PLAYER::PLAYER_PED_ID());
	GlobalFunc_7632(0);
	uParam0->f_348 = 0;
	uParam0->f_349 = 0;
	func_79(uParam0, 0);
	func_78(uParam0);
	func_77(uParam0);
	func_379(&(uParam0->f_120));
	func_376(&(uParam0->f_93));
	func_68(&(uParam0->f_51));
	func_68(&(uParam0->f_30));
	func_68(&(uParam0->f_72));
	GlobalFunc_7621(uParam0->f_334, 0, 0, 1, 0);
	GlobalFunc_1475(&(uParam0->f_340), 0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_WASH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_WASH_SCENE");
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID());
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (GlobalFunc_234(uVar0))
			{
				func_31(uVar0, 1);
				func_156(uVar0);
			}
		}
	}
	if (Global_68245)
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(PLAYER::PLAYER_PED_ID());
		if (iVar1 != GlobalFunc_314())
		{
			if (Global_2414009[iVar1 /*254*/].f_228 == 1)
			{
				Global_2414009[iVar1 /*254*/].f_228 = 0;
			}
		}
	}
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (GlobalFunc_234(uVar0))
	{
		func_31(uVar0, 1);
		func_156(uVar0);
	}
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(uParam0->f_352, uParam0->f_355, 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
}

void func_376(var uParam0)//Position - 0x2A738
{
	func_377(uParam0);
	GlobalFunc_130(&(uParam0->f_19));
}

void func_377(var uParam0)//Position - 0x2A74E
{
	*uParam0 = 3;
	func_378(uParam0);
}

void func_378(var uParam0)//Position - 0x2A760
{
	if (func_75(*uParam0))
	{
		GlobalFunc_2347(&(uParam0->f_21));
		GlobalFunc_2348(&(uParam0->f_17));
		GlobalFunc_2348(&(uParam0->f_16));
		GlobalFunc_2348(&(uParam0->f_18));
		*uParam0 = 0;
	}
}

void func_379(var uParam0)//Position - 0x2A796
{
	func_380(uParam0);
	GlobalFunc_130(&(uParam0->f_3[0]));
	GlobalFunc_130(&(uParam0->f_3[1]));
}

void func_380(var uParam0)//Position - 0x2A7BA
{
	uParam0->f_2 = 0;
	func_381(uParam0);
	GlobalFunc_130(&(uParam0->f_1));
}

void func_381(var uParam0)//Position - 0x2A7D5
{
	if (func_75(uParam0->f_2))
	{
		GlobalFunc_2347(&(uParam0->f_6[0]));
		GlobalFunc_2347(&(uParam0->f_6[1]));
		GlobalFunc_2348(&(uParam0->f_28));
		GlobalFunc_2348(&(uParam0->f_27));
		GlobalFunc_2348(&(uParam0->f_29));
		uParam0->f_2 = 0;
	}
}



