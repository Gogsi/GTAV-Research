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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<485> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	int iLocal_728 = 0;
	int iLocal_729 = 0;
	int iLocal_730 = 0;
	int iLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_35 = 202;
	iLocal_36 = 201;
	iLocal_37 = 24;
	iLocal_38 = 202;
	iLocal_39 = 25;
	iLocal_42 = -1;
	iLocal_44 = -1;
	iLocal_737 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_230();
	}
	GlobalFunc_501(3);
	func_218(&(Local_45.f_1), GlobalFunc_3003(Global_86396[1 /*19*/], Global_86396[2 /*19*/]));
	GlobalFunc_4437(&Local_45, 0);
	while (!GlobalFunc_485(4))
	{
		if (!Global_68514)
		{
			if (!GlobalFunc_891(86) && !GlobalFunc_39(14))
			{
				GlobalFunc_10813(&Local_45, 32f, 35f);
			}
			else if (MISC::IS_BIT_SET(Local_45.f_449, 0))
			{
				GlobalFunc_10541(&Local_45);
			}
			if (MISC::IS_BIT_SET(Local_45.f_449, 0))
			{
				if (GlobalFunc_785() == 86)
				{
					while (!GlobalFunc_10541(&Local_45))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			func_198(&Local_45);
			func_189();
			func_145();
			if (GlobalFunc_4938(0) || MISC::IS_BIT_SET(Local_45.f_449, 2))
			{
				func_67(&Local_45);
				GlobalFunc_11016(&Local_45);
				GlobalFunc_4413(&Local_45);
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) > 0)
		{
			GlobalFunc_4412();
		}
		SYSTEM::WAIT(0);
	}
	GlobalFunc_492(3);
	func_230();
}



































































void func_67(var uParam0)//Position - 0x2617
{
	if (MISC::IS_BIT_SET(uParam0->f_449, 1))
	{
		func_68(uParam0);
	}
}

void func_68(var uParam0)//Position - 0x2632
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	
	bVar0 = false;
	if (!MISC::IS_BIT_SET(uParam0->f_449, 2))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_116(0))
			{
				if (GlobalFunc_9039(8))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_401) < 4f)
					{
						Var1 = { uParam0->f_401 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
						fVar5 = MISC::ABSF((uParam0->f_404 - fVar4));
						if (fVar5 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar6 = uParam0->f_404;
							if (fVar6 > 180f)
							{
								fVar6 = (fVar6 - 360f);
							}
							else if (fVar6 < -180f)
							{
								fVar6 = (fVar6 + 360f);
							}
							if ((fVar6 - fVar4) < fVar5)
							{
								fVar5 = MISC::ABSF((fVar6 - fVar4));
							}
							if (fVar5 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar4 > 180f)
								{
									fVar4 = (fVar4 - 360f);
								}
								else if (fVar4 < -180f)
								{
									fVar4 = (fVar4 + 360f);
								}
								if ((uParam0->f_404 - fVar4) < fVar5)
								{
									fVar5 = MISC::ABSF((uParam0->f_404 - fVar4));
								}
								if (fVar5 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar6 - fVar4) < fVar5)
									{
										fVar5 = MISC::ABSF((fVar6 - fVar4));
									}
									if (fVar5 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_451 == -1)
			{
				GlobalFunc_7016(&(uParam0->f_451), 3, "PB_H_ENT", 0, 0);
			}
			else if (GlobalFunc_5079(uParam0->f_451, 1))
			{
				GlobalFunc_5420(&(uParam0->f_451));
				GlobalFunc_10895(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			GlobalFunc_5420(&(uParam0->f_451));
		}
	}
	else
	{
		bVar7 = GlobalFunc_892(1, *uParam0);
		func_77(uParam0);
		if (((!bVar7 && uParam0->f_453 > 15) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_35) || PAD::IS_CONTROL_JUST_PRESSED(2, 238))) || MISC::IS_BIT_SET(uParam0->f_449, 8))
		{
			MISC::CLEAR_BIT(&(uParam0->f_449), 8);
			GlobalFunc_8904(uParam0, 0);
		}
	}
}









void func_77(var uParam0)//Position - 0x2C10
{
	char* sVar0;
	bool bVar1;
	struct<3> Var2;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1);
	if (!MISC::ARE_STRINGS_EQUAL(sVar0, uParam0->f_466))
	{
		GlobalFunc_6454(uParam0);
	}
	uParam0->f_466 = sVar0;
	GlobalFunc_5077();
	func_101(uParam0);
	GlobalFunc_10894(uParam0);
	if (uParam0->f_464 == 1)
	{
		func_82(uParam0);
	}
	if (GlobalFunc_1545())
	{
		GlobalFunc_8246(uParam0);
	}
	bVar1 = uParam0->f_454 > MISC::GET_GAME_TIMER();
	GlobalFunc_4995(&(uParam0->f_649), MISC::IS_BIT_SET(uParam0->f_449, 4), (MISC::IS_BIT_SET(uParam0->f_449, 5) && !bVar1), 1, 0, 1045220557, 1);
	if (MISC::IS_BIT_SET(uParam0->f_449, 7))
	{
		if ((!CUTSCENE::IS_CUTSCENE_PLAYING() && CAM::IS_SCREEN_FADED_IN()) && !HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (uParam0->f_464 != 1)
			{
				if (uParam0->f_464 == 0 || (((!MISC::IS_BIT_SET(uParam0->f_449, 11) && !MISC::IS_BIT_SET(uParam0->f_449, 10)) && !GlobalFunc_111()) && uParam0->f_483 == 0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_449, 18) || uParam0->f_464 == 2)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_414, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	HUD::DISPLAY_RADAR(0);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::THEFEED_HIDE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 201);
	}
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	if (!MISC::IS_BIT_SET(uParam0->f_449, 7))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			Var2 = { uParam0->f_401 };
			Var2 = { Var2 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_404))), (2.9f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &(Var2.f_2));
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 134);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var2, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			MISC::SET_BIT(&(uParam0->f_449), 7);
		}
	}
}





void func_82(var uParam0)//Position - 0x3453
{
	bool bVar0;
	int iVar1;
	
	if (!GlobalFunc_892(3, *uParam0))
	{
		if (uParam0->f_483 == 0 && uParam0->f_455 > 3)
		{
			if (uParam0->f_452 == -1)
			{
				if (MISC::IS_BIT_SET(uParam0->f_449, 19))
				{
					uParam0->f_452 = MISC::GET_GAME_TIMER() + 500;
				}
				else
				{
					uParam0->f_452 = MISC::GET_GAME_TIMER();
				}
			}
			else if (MISC::GET_GAME_TIMER() > uParam0->f_452)
			{
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < uParam0->f_1.f_369)
				{
					if (!bVar0)
					{
						if (!MISC::IS_BIT_SET(uParam0->f_1.f_303, iVar1 + 4))
						{
							GlobalFunc_8249(uParam0, iVar1);
							if (MISC::IS_BIT_SET(uParam0->f_1.f_370, iVar1))
							{
								MISC::SET_BIT(&(uParam0->f_449), 19);
							}
							else
							{
								MISC::CLEAR_BIT(&(uParam0->f_449), 19);
							}
							bVar0 = true;
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_83(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_83(int iParam0, int iParam1, bool bParam2)//Position - 0x3532
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	iVar0 = MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iParam0], iParam1);
	if (iVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iParam0]), iParam1);
	}
}


















void func_101(var uParam0)//Position - 0x3F97
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	uParam0->f_453++;
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		GlobalFunc_6454(uParam0);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_449, 11))
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_36) || PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_38)) || (PAD::_IS_USING_KEYBOARD(2) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_37) || PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_39))))
		{
			GlobalFunc_4956();
			if (MISC::IS_BIT_SET(uParam0->f_449, 12))
			{
				MISC::SET_BIT(&(uParam0->f_449), 13);
				MISC::CLEAR_BIT(&(uParam0->f_449), 11);
				MISC::CLEAR_BIT(&(uParam0->f_449), 10);
			}
			MISC::CLEAR_BIT(&(uParam0->f_449), 12);
		}
	}
	GlobalFunc_255(&(uParam0->f_458[0]), &(uParam0->f_458[1]), &(uParam0->f_458[2]), &(uParam0->f_458[3]), 0, 0);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		uParam0->f_458[2] = (uParam0->f_458[2] / 10);
		uParam0->f_458[3] = (uParam0->f_458[3] / 10);
		uParam0->f_458[2] = GlobalFunc_254((uParam0->f_458[2] + uParam0->f_649.f_24), -127, 127);
		uParam0->f_458[3] = GlobalFunc_254((uParam0->f_458[3] + uParam0->f_649.f_25), -127, 127);
	}
	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];
	if (PAD::IS_LOOK_INVERTED())
	{
		uParam0->f_458[3] = -uParam0->f_458[3];
	}
	if (uParam0->f_454 > MISC::GET_GAME_TIMER())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}
	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
	{
		if (uParam0->f_453 > 15)
		{
			MISC::SET_BIT(&(uParam0->f_449), 4);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
		}
	}
	if (!MISC::IS_BIT_SET(uParam0->f_449, 10))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_449, 11))
		{
			if ((MISC::GET_GAME_TIMER() - uParam0->f_456) > 200)
			{
				if ((uParam0->f_464 == 2 || uParam0->f_464 == 3) || uParam0->f_464 == 4)
				{
					if ((MISC::GET_GAME_TIMER() - uParam0->f_457) > 25000)
					{
						GlobalFunc_4414(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
						uParam0->f_457 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 8000));
					}
				}
				if (uParam0->f_464 == 2)
				{
					if ((((uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85) || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_PRESSED(2, 189)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((((uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85) || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_PRESSED(2, 190)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 242)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (uParam0->f_464 == 3)
				{
					if ((uParam0->f_458[1] < -85 || PAD::IS_CONTROL_PRESSED(2, 188)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 40)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (uParam0->f_416 != 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 0;
						if (MISC::IS_BIT_SET(uParam0->f_449, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_449), 9);
							GlobalFunc_6454(uParam0);
						}
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
					else if ((uParam0->f_458[1] > 85 || PAD::IS_CONTROL_PRESSED(2, 187)) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 41)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (uParam0->f_416 != 1)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						uParam0->f_416 = 1;
						if (MISC::IS_BIT_SET(uParam0->f_449, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_449), 9);
							GlobalFunc_6454(uParam0);
						}
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
				}
				if (!GlobalFunc_111() || MISC::IS_BIT_SET(uParam0->f_449, 13))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_36) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_37)))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!GlobalFunc_111())
								{
									if (!MISC::IS_BIT_SET(uParam0->f_449, 9))
									{
										uParam0->f_456 = MISC::GET_GAME_TIMER();
										iVar0 = GlobalFunc_656(*uParam0);
										if (iVar0 != -1)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
											GlobalFunc_6455(uParam0, 1);
											GlobalFunc_6456(&(uParam0->f_1.f_20[0 /*4*/]), 1);
											GlobalFunc_6456(&(uParam0->f_1.f_20[1 /*4*/]), 1);
											Global_SAVE_DATA.HEIST_CHOICE_HELP_DISPLAYED_ARRAY[*uParam0] = 1;
											HUD::CLEAR_HELP(0);
										}
									}
								}
								break;
							
							case 2:
								if (!GlobalFunc_892(4, *uParam0))
								{
									iVar0 = GlobalFunc_656(*uParam0);
									iVar1 = GlobalFunc_597(iVar0);
									if (uParam0->f_450 < Global_86396[iVar1 /*19*/])
									{
										GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
										GlobalFunc_6455(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_83(4, *uParam0, 1);
									if (!GlobalFunc_2(0))
									{
										GlobalFunc_6467(*uParam0);
									}
								}
								else
								{
									func_83(5, *uParam0, 1);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iVar0 = GlobalFunc_656(*uParam0);
								iVar1 = GlobalFunc_597(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_86396[iVar1 /*19*/])
								{
									if (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][iVar2] == 0 || GlobalFunc_595(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][iVar2]) != Global_86396[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												iVar3 = iVar5;
												if (iVar3 != 0)
												{
													if (Global_86242[iVar3 /*5*/] != Global_86396[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset, iVar3))
													{
														bVar4 = false;
													}
													if (MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Dead_Bitset, iVar3))
													{
														bVar4 = false;
													}
													if (iVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (GlobalFunc_6460(uParam0, iVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								GlobalFunc_6455(uParam0, 1);
								GlobalFunc_6464(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_427 = 0;
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_38) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_39)))
					{
						switch (uParam0->f_464)
						{
							case 2:
								iVar0 = GlobalFunc_656(*uParam0);
								iVar1 = GlobalFunc_597(iVar0);
								if (uParam0->f_450 > 0)
								{
									GlobalFunc_6455(uParam0, 1);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar6 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450];
									Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_86396[iVar1 /*19*/].f_1[uParam0->f_450];
									GlobalFunc_10540(uParam0, uParam0->f_450, iVar6);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
									uParam0->f_427 = 0;
									uParam0->f_456 = MISC::GET_GAME_TIMER();
								}
								else if (!GlobalFunc_485(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_96)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											iVar7++;
										}
										AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_30[iVar7] != 13)
											{
												GlobalFunc_505(*uParam0, uParam0->f_1.f_30[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_427 = 0;
										GlobalFunc_6455(uParam0, 1);
										uParam0->f_456 = MISC::GET_GAME_TIMER();
										uParam0->f_465 = 0;
										GlobalFunc_585(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = GlobalFunc_656(*uParam0);
									iVar1 = GlobalFunc_597(iVar0);
									uParam0->f_450 = (uParam0->f_450 - 1);
									uParam0->f_417 = uParam0->f_450;
									iVar8 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450];
									Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_86396[iVar1 /*19*/].f_1[uParam0->f_450];
									GlobalFunc_10893(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_30[iVar9] != 13)
										{
											GlobalFunc_505(*uParam0, uParam0->f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									GlobalFunc_3026(8, 0);
									func_83(5, 1, 0);
									uParam0->f_427 = 0;
									GlobalFunc_6455(uParam0, 1);
									uParam0->f_456 = MISC::GET_GAME_TIMER();
									GlobalFunc_10893(uParam0, 3, 0);
								}
								AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		iVar0 = GlobalFunc_656(*uParam0);
		iVar1 = GlobalFunc_597(iVar0);
		if (uParam0->f_450 >= Global_86396[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_450 > uParam0->f_415))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GlobalFunc_6457(uParam0, 0, 1);
			GlobalFunc_10893(uParam0, 4, 0);
		}
		else
		{
			if (!MISC::IS_BIT_SET(uParam0->f_449, 17))
			{
				iVar10 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450];
				Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_86396[iVar1 /*19*/].f_1[uParam0->f_450];
				GlobalFunc_10540(uParam0, uParam0->f_450, iVar10);
			}
			MISC::CLEAR_BIT(&(uParam0->f_449), 17);
		}
		uParam0->f_457 = MISC::GET_GAME_TIMER();
		MISC::CLEAR_BIT(&(uParam0->f_449), 10);
	}
	else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (((!GlobalFunc_74(&(uParam0->f_1.f_108[0 /*4*/])) && !GlobalFunc_74(&(uParam0->f_1.f_108[1 /*4*/]))) && !GlobalFunc_74(&(uParam0->f_1.f_20[0 /*4*/]))) && !GlobalFunc_74(&(uParam0->f_1.f_20[1 /*4*/])))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (uParam0->f_680 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_680))
		{
			iVar11 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_680);
			iVar1 = GlobalFunc_4417(*uParam0, iVar11);
			iVar0 = GlobalFunc_656(*uParam0);
			GlobalFunc_3026(iVar0, iVar1);
			if (!GlobalFunc_2(0))
			{
				GlobalFunc_4425(*uParam0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			GlobalFunc_6464(uParam0, iVar1, 0);
			if (uParam0->f_1.f_30[iVar11] != 13)
			{
				GlobalFunc_505(*uParam0, uParam0->f_1.f_30[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_96)
			{
				GlobalFunc_4423(uParam0, iVar12);
				if (iVar12 < Global_86396[iVar1 /*19*/])
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_83(5, *uParam0, 1);
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_449), 10);
				uParam0->f_450++;
			}
			HUD::CLEAR_HELP(0);
			uParam0->f_680 = 0;
		}
	}
	if (uParam0->f_681 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_681))
		{
			iVar13 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_681);
			iVar0 = GlobalFunc_656(*uParam0);
			iVar1 = GlobalFunc_597(iVar0);
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450] = uParam0->f_418[iVar13];
			iVar14 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][uParam0->f_450];
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "UPDATE_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_450);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar14);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
			MISC::CLEAR_BIT(&(uParam0->f_449), 17);
			GlobalFunc_6466(uParam0, iVar14);
			uParam0->f_450++;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = MISC::GET_GAME_TIMER();
			uParam0->f_457 = uParam0->f_456;
			MISC::SET_BIT(&(uParam0->f_449), 10);
			if (!GlobalFunc_74(&(uParam0->f_1.f_108[0 /*4*/])) && !GlobalFunc_74(&(uParam0->f_1.f_108[1 /*4*/])))
			{
				HUD::CLEAR_HELP(0);
			}
			uParam0->f_681 = 0;
		}
	}
	if (uParam0->f_682 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_682))
		{
			iVar15 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_682);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_418[iVar15];
				if (iVar16 != uParam0->f_427)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
				}
				uParam0->f_427 = iVar16;
			}
			uParam0->f_682 = 0;
		}
	}
	if (uParam0->f_427 != 0)
	{
		GlobalFunc_6465(uParam0, uParam0->f_427);
	}
}












































void func_145()//Position - 0x707F
{
	int iVar0;
	struct<3> Var1;
	
	if (GlobalFunc_485(17))
	{
		if (!MISC::IS_BIT_SET(uLocal_40, 11))
		{
			CUTSCENE::REQUEST_CUTSCENE("JH_1_MCS_4P2", 8);
			SCRIPT::REQUEST_SCRIPT("lesterHandler");
			HUD::REQUEST_ADDITIONAL_TEXT("JHS1AUD", 6);
			MISC::SET_BIT(&uLocal_40, 11);
		}
		else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
		}
	}
	if (GlobalFunc_485(18))
	{
		if (GlobalFunc_485(17))
		{
			if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4P2") && SCRIPT::HAS_SCRIPT_LOADED("lesterHandler")) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_728))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_728, "Lester", 0, joaat("cs_lestercrest"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_728, "Lester", 2, joaat("cs_lestercrest"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_731))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_731))
					{
						ENTITY::DETACH_ENTITY(iLocal_731, 1, 1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, joaat("player_zero"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_731))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_731, "WalkingStick_Lester", 1, joaat("prop_cs_walking_stick"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_731, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
				}
				STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
				STREAMING::REQUEST_MODEL(joaat("prop_laptop_lester2"));
				GlobalFunc_7632(1);
				GlobalFunc_2032(1);
				GlobalFunc_8380(1, 1, 1, 0);
				iLocal_42 = -1;
				CUTSCENE::START_CUTSCENE(0);
				if (GlobalFunc_2(0))
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				}
				GlobalFunc_585(17, 0);
			}
		}
		else if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			GlobalFunc_5077();
			if (MISC::IS_BIT_SET(uLocal_40, 7))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_731))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_731, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_729))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_729, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_728))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_728, 1);
				}
				MISC::CLEAR_BIT(&uLocal_40, 7);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_728))
				{
					iVar0 = iLocal_728;
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS("lesterHandler", &iVar0, 1, 1424);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("lesterHandler");
					iLocal_738 = MISC::GET_GAME_TIMER();
					MISC::SET_BIT(&uLocal_40, 18);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					Var1 = { 709.3766f, -964.2602f, 29.3954f };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &(Var1.f_2));
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var1, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 261.7831f);
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
						}
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
		}
		else if (iLocal_42 == -1 && !GlobalFunc_2(0))
		{
			iLocal_42 = MISC::GET_GAME_TIMER() + 1500;
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_42 || GlobalFunc_2(0))
		{
			if (GlobalFunc_2(0))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			else
			{
				Global_54750 = 0;
				Global_90001 = 0;
				GlobalFunc_4907();
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_laptop_lester2"));
			GlobalFunc_7632(0);
			GlobalFunc_8380(0, 1, 1, 0);
			GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 86);
			GlobalFunc_9523(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 86);
			GlobalFunc_1997(&iLocal_44);
			MISC::CLEAR_BIT(&uLocal_40, 1);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_732, 0);
			if (iLocal_737 != -1)
			{
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_737))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_737);
				}
			}
			PED::CLEAR_PED_NON_CREATION_AREA();
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_45.f_1.f_394 - Local_45.f_1.f_397, Local_45.f_1.f_394 + Local_45.f_1.f_397, 1, 0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			GlobalFunc_585(18, 0);
			GlobalFunc_8250(0, 0);
		}
	}
	else if (!GlobalFunc_485(17))
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4P2"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	if (MISC::IS_BIT_SET(uLocal_40, 18))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
		if (MISC::GET_GAME_TIMER() > iLocal_738 + 1000)
		{
			MISC::CLEAR_BIT(&uLocal_40, 18);
		}
	}
}












































void func_189()//Position - 0xCEB9
{
	INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(-1747852954);
	if (GlobalFunc_485(16))
	{
		if (!GlobalFunc_2(0))
		{
			if (!MISC::IS_BIT_SET(uLocal_40, 10))
			{
				CUTSCENE::REQUEST_CUTSCENE("JH_1_MCS_4_P1_ALT1", 8);
				GlobalFunc_3027();
				GlobalFunc_505(0, 0, 1);
				uLocal_732 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_45.f_1.f_394 - Local_45.f_1.f_397, Local_45.f_1.f_394 + Local_45.f_1.f_397, 0, 1, 1, 1);
				iLocal_737 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_45.f_1.f_394, Local_45.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
				PED::SET_PED_NON_CREATION_AREA(Local_45.f_1.f_394 - Local_45.f_1.f_397, Local_45.f_1.f_394 + Local_45.f_1.f_397);
				PATHFIND::SET_PED_PATHS_IN_AREA(Local_45.f_1.f_394 - Local_45.f_1.f_397, Local_45.f_1.f_394 + Local_45.f_1.f_397, 0, 0);
				MISC::SET_BIT(&uLocal_40, 10);
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
			}
			if (GlobalFunc_230(86))
			{
				if (!MISC::IS_BIT_SET(uLocal_40, 1))
				{
					if (GlobalFunc_4938(0))
					{
						if (GlobalFunc_7905(&iLocal_44, 0, 0, 0, 0) == 1)
						{
							GlobalFunc_702(1, 0, 1);
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
								PLAYER::SET_MAX_WANTED_LEVEL(0);
							}
							MISC::SET_BIT(&uLocal_40, 1);
							MISC::SET_BIT(&uLocal_40, 2);
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(uLocal_40, 2))
			{
				switch (iLocal_41)
				{
					case 0:
						if (CAM::DOES_CAM_EXIST(uLocal_733))
						{
							CAM::DESTROY_CAM(uLocal_733, 0);
						}
						if (CAM::DOES_CAM_EXIST(uLocal_734))
						{
							CAM::DESTROY_CAM(uLocal_734, 0);
						}
						uLocal_733 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 724.4682f, -992.0684f, 24.25137f, 5.259225f, 0.000715f, 25.88918f, 44.13121f, 0, 2);
						uLocal_734 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 724.3727f, -991.3205f, 24.43304f, 31.49925f, 0.000715f, -4.206256f, 44.13121f, 0, 2);
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
							{
								iLocal_728 = Global_86864.f_9[0];
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_728, 0, 1);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_86864[0]))
							{
								iLocal_730 = Global_86864[0];
							}
						}
						iLocal_41++;
						break;
					
					case 1:
						GlobalFunc_8380(1, 1, 0, 0);
						HUD::DISPLAY_RADAR(0);
						HUD::DISPLAY_HUD(0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_730))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_730, 0))
							{
								CAM::POINT_CAM_AT_ENTITY(uLocal_733, iLocal_730, 0f, 0f, 0f, 1);
							}
						}
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_734, uLocal_733, 5000, 1, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						iLocal_42 = MISC::GET_GAME_TIMER();
						iLocal_41++;
						break;
					
					case 2:
						if ((MISC::GET_GAME_TIMER() - iLocal_42) > 1200)
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_730, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_730, 0))
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_735);
											TASK::TASK_LEAVE_VEHICLE(0, iLocal_730, 0);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 1048576000, 0, 1193033728);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_735);
											TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
											TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_735);
										}
									}
								}
							}
							iLocal_41++;
						}
						break;
					
					case 3:
						if ((MISC::GET_GAME_TIMER() - iLocal_42) > 2400)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_728))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_730))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_730, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(iLocal_728, iLocal_730, 0))
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_736);
											TASK::TASK_LEAVE_VEHICLE(0, iLocal_730, 0);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 1048576000, 0, 1193033728);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_736);
											TASK::CLEAR_PED_TASKS(iLocal_728);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_728, uLocal_736);
										}
									}
								}
							}
							iLocal_41++;
						}
						break;
					
					case 4:
						if ((MISC::GET_GAME_TIMER() - iLocal_42) > 5000)
						{
							MISC::CLEAR_BIT(&uLocal_40, 2);
						}
						break;
					}
			}
			if (MISC::IS_BIT_SET(uLocal_40, 1) && !MISC::IS_BIT_SET(uLocal_40, 2))
			{
				if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4_P1_ALT1"))
				{
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						iLocal_729 = PLAYER::PLAYER_PED_ID();
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_729))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_729, "Michael", 0, joaat("player_zero"), 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_728))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_728, "Lester", 2, joaat("ig_lestercrest"), 0);
						}
						MISC::SET_BIT(&uLocal_40, 9);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_731, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
						MISC::SET_BIT(&uLocal_40, 8);
						GlobalFunc_173(&(Local_45.f_484), 0, 0, "MICHAEL", 1, 1);
						GlobalFunc_173(&(Local_45.f_484), 3, 0, "LESTER", 1, 1);
						GlobalFunc_7632(1);
						iLocal_42 = MISC::GET_GAME_TIMER();
						CUTSCENE::START_CUTSCENE(2048);
					}
					else
					{
						GlobalFunc_5077();
						if (!MISC::IS_BIT_SET(uLocal_40, 17))
						{
							if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							MISC::SET_BIT(&uLocal_40, 17);
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							MISC::SET_BIT(&uLocal_40, 16);
						}
						if (MISC::IS_BIT_SET(uLocal_40, 16))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (!MISC::IS_BIT_SET(uLocal_40, 12))
								{
									GlobalFunc_505(0, 1, 1);
									MISC::SET_BIT(&uLocal_40, 12);
								}
								if (!MISC::IS_BIT_SET(uLocal_40, 13))
								{
									GlobalFunc_505(0, 2, 1);
									MISC::SET_BIT(&uLocal_40, 13);
								}
								if (!MISC::IS_BIT_SET(uLocal_40, 14))
								{
									GlobalFunc_505(0, 3, 1);
									MISC::SET_BIT(&uLocal_40, 14);
								}
								if (!MISC::IS_BIT_SET(uLocal_40, 15))
								{
									GlobalFunc_505(0, 4, 1);
									MISC::SET_BIT(&uLocal_40, 15);
								}
								GlobalFunc_9522(&Local_45);
								if (!MISC::IS_BIT_SET(uLocal_40, 0))
								{
									func_190();
									MISC::SET_BIT(&uLocal_40, 0);
								}
							}
						}
						if (!MISC::IS_BIT_SET(uLocal_40, 5))
						{
							if (CAM::DOES_CAM_EXIST(uLocal_733))
							{
								CAM::SET_CAM_ACTIVE(uLocal_733, 0);
							}
							if (CAM::DOES_CAM_EXIST(uLocal_734))
							{
								CAM::SET_CAM_ACTIVE(uLocal_734, 0);
							}
							CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
							if (CAM::DOES_CAM_EXIST(uLocal_734))
							{
								CAM::DESTROY_CAM(uLocal_734, 0);
							}
							if (CAM::DOES_CAM_EXIST(uLocal_734))
							{
								CAM::DESTROY_CAM(uLocal_734, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_728))
							{
								PED::DELETE_PED(&iLocal_728);
							}
							MISC::SET_BIT(&uLocal_40, 5);
						}
						if (!MISC::IS_BIT_SET(uLocal_40, 6))
						{
							if (iLocal_43 > 0)
							{
								MISC::SET_BIT(&uLocal_40, 6);
							}
						}
						if (!MISC::IS_BIT_SET(uLocal_40, 12))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_42) > 14058)
							{
								GlobalFunc_505(0, 1, 1);
								MISC::SET_BIT(&uLocal_40, 12);
							}
						}
						else if (!MISC::IS_BIT_SET(uLocal_40, 13))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_42) > 22887)
							{
								GlobalFunc_505(0, 2, 1);
								MISC::SET_BIT(&uLocal_40, 13);
							}
						}
						else if (!MISC::IS_BIT_SET(uLocal_40, 14))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_42) > 27988)
							{
								GlobalFunc_505(0, 3, 1);
								GlobalFunc_9522(&Local_45);
								MISC::SET_BIT(&uLocal_40, 14);
							}
						}
						else if (!MISC::IS_BIT_SET(uLocal_40, 15))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_42) > 42084)
							{
								GlobalFunc_505(0, 4, 1);
								MISC::SET_BIT(&uLocal_40, 15);
							}
						}
						if (MISC::IS_BIT_SET(uLocal_40, 8))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", joaat("prop_cs_walking_stick"))))
							{
								iLocal_731 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", joaat("prop_cs_walking_stick")));
								MISC::CLEAR_BIT(&uLocal_40, 8);
							}
						}
						if (MISC::IS_BIT_SET(uLocal_40, 9))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", joaat("ig_lestercrest"))))
							{
								iLocal_728 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", joaat("ig_lestercrest")));
								MISC::CLEAR_BIT(&uLocal_40, 9);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_729))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_729, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_729, 208, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_729, 118, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_729, 213, 0);
								TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_729, 708.8129f, -966.3621f, 29.3956f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_728))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_731))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_731, iLocal_728, PED::GET_PED_BONE_INDEX(iLocal_728, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_728))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_728, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_728, 208, 1);
								PED::SET_PED_CONFIG_FLAG(iLocal_728, 118, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_728, 213, 0);
								TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_728, 708.3643f, -963.9194f, 29.4181f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
						{
							if (!MISC::IS_BIT_SET(uLocal_40, 0))
							{
								func_190();
								MISC::SET_BIT(&uLocal_40, 0);
							}
							if (!MISC::IS_BIT_SET(uLocal_40, 7))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_729))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_729, 0);
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_728))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_728, 0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_731))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_731, 0);
								}
								MISC::SET_BIT(&uLocal_40, 7);
							}
							GlobalFunc_585(16, 0);
						}
						iLocal_43++;
					}
				}
			}
		}
		else
		{
			GlobalFunc_173(&(Local_45.f_484), 0, 0, "MICHAEL", 1, 1);
			GlobalFunc_173(&(Local_45.f_484), 3, 0, "LESTER", 1, 1);
			if (GlobalFunc_4938(0))
			{
				if (GlobalFunc_7905(&iLocal_44, 0, 0, 0, 0) == 1)
				{
					MISC::SET_BIT(&uLocal_40, 1);
				}
			}
			if (MISC::IS_BIT_SET(uLocal_40, 1))
			{
				func_190();
				GlobalFunc_585(16, 0);
			}
		}
	}
	else
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4_P1_ALT1"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		if (MISC::IS_BIT_SET(uLocal_40, 10))
		{
			MISC::CLEAR_BIT(&uLocal_40, 10);
		}
	}
}

void func_190()//Position - 0xD80C
{
	func_83(1, 0, 1);
	func_83(2, 0, 1);
	func_198(&Local_45);
	func_67(&Local_45);
}








void func_198(var uParam0)//Position - 0xDB06
{
	if (GlobalFunc_892(2, *uParam0))
	{
		if (MISC::IS_BIT_SET(uParam0->f_449, 1))
		{
			if (MISC::IS_BIT_SET(uParam0->f_449, 2))
			{
				GlobalFunc_8904(uParam0, GlobalFunc_6470(*uParam0));
				func_83(2, *uParam0, 0);
			}
			else
			{
				GlobalFunc_10895(uParam0);
				func_83(2, *uParam0, 0);
			}
		}
	}
}




















void func_218(var uParam0, var uParam1)//Position - 0xE704
{
	GlobalFunc_4447(uParam0, 1, "HEIST_JEWELLERY", "BOARD0", "JHFAUD", "CRWAUD", 2, 2, 7, 8, uParam1, 708.9957f, -965.256f, 31.39533f, 5.5f, 6.25f, 4f);
	GlobalFunc_4446(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 116, 420, 248, 425, 380, 425, 510, 430, 0, 0, 650, 300, 0, 70, 684, 106);
	GlobalFunc_4445(uParam0, 20f, 22f, 28f);
	GlobalFunc_4444(uParam0, "BRD_H_01", "BRD_H_02", "BRD_H_03", "BRD_H_04", "JHFP1", "JHFP4", "JHP11", "JHHUR");
	GlobalFunc_4443(uParam0, 1, "CRW_GM", "");
	GlobalFunc_4443(uParam0, 4, "CRW_NR", "");
	GlobalFunc_4443(uParam0, 6, "CRW_PH", "");
	GlobalFunc_4443(uParam0, 7, "CRW_CF", "");
	GlobalFunc_4443(uParam0, 8, "CRW_ET", "");
	GlobalFunc_4443(uParam0, 9, "CRW_KD", "");
	GlobalFunc_4443(uParam0, 10, "CRW_PM", "CRM_PM");
	GlobalFunc_4443(uParam0, 12, "CRW_RL", "CRM_RL");
	GlobalFunc_4441(uParam0, 0, 0, 0, 0);
	GlobalFunc_4441(uParam0, 6, 0, 0, 0);
	GlobalFunc_4441(uParam0, 1, 0, 0, 0);
	GlobalFunc_4441(uParam0, 3, 1, 0, 0);
	GlobalFunc_4441(uParam0, 11, 2, 0, 0);
	GlobalFunc_4441(uParam0, 5, 3, 0, 0);
	GlobalFunc_4441(uParam0, 9, 3, 0, 0);
	GlobalFunc_4441(uParam0, 2, 4, 0, 0);
	GlobalFunc_4441(uParam0, 7, 9, 0, 0);
	GlobalFunc_4441(uParam0, 10, 10, 0, 0);
	GlobalFunc_4440(uParam0, 2, 2, "H_TD_SEC");
	GlobalFunc_4440(uParam0, 2, 2, "H_TD_PHOTO");
	GlobalFunc_4440(uParam0, 2, 5, "H_TD_PLAN");
	GlobalFunc_4440(uParam0, 2, 6, "H_TD_CREW");
	GlobalFunc_4440(uParam0, 7, 11, "H_TD_CARB");
	GlobalFunc_4440(uParam0, 8, 9, "H_TD_BUGS");
	GlobalFunc_4440(uParam0, 8, 10, "H_TD_GAS");
	GlobalFunc_4439(uParam0, 0, 203, 74);
	GlobalFunc_4439(uParam0, 1, 368, 181);
	GlobalFunc_4439(uParam0, 1, 556, 189);
	GlobalFunc_4439(uParam0, 2, 690, 63);
	GlobalFunc_4439(uParam0, 2, 673, 308);
	GlobalFunc_4439(uParam0, 2, 671, 406);
	GlobalFunc_4439(uParam0, 3, 245, 244);
	GlobalFunc_4439(uParam0, 4, 70, 68);
	GlobalFunc_4438(uParam0, 0, "JHP12", 214, 165, 1);
	GlobalFunc_4438(uParam0, 0, "JHP13", 254, 46, 1);
	GlobalFunc_4438(uParam0, 0, "JHP14", 70, 97, 1);
	GlobalFunc_4438(uParam0, 0, "JHP15", 254, 275, 1);
	GlobalFunc_4438(uParam0, 0, "JHP16", 457, 165, 1);
}












void func_230()//Position - 0xEE09
{
	if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4P2") || CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4_P1_ALT1"))
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	GlobalFunc_585(16, 0);
	GlobalFunc_585(17, 0);
	GlobalFunc_585(18, 0);
	func_83(1, 0, 0);
	func_83(2, 0, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_732, 0);
	if (iLocal_737 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_737))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_737);
		}
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_45.f_1.f_394 - Local_45.f_1.f_397, Local_45.f_1.f_394 + Local_45.f_1.f_397, 1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (iLocal_44 != -1)
	{
		GlobalFunc_1997(&iLocal_44);
	}
	while (!GlobalFunc_10541(&Local_45))
	{
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

