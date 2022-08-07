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
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	struct<485> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 21;
	var uLocal_744 = 6;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
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
	iLocal_41 = -1;
	iLocal_48 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_522();
	}
	GlobalFunc_501(1);
	func_512(&(Local_53.f_1), GlobalFunc_3003(Global_86396[3 /*19*/], Global_86396[4 /*19*/]));
	GlobalFunc_4437(&Local_53, 1);
	while (!GlobalFunc_485(1))
	{
		if (!Global_68514)
		{
			if (!GlobalFunc_891(71) && !GlobalFunc_39(14))
			{
				func_497(&Local_53, 24f, 30f);
			}
			else if (MISC::IS_BIT_SET(Local_53.f_449, 0))
			{
				func_493(&Local_53);
			}
			func_491(&Local_53);
			func_475();
			func_146();
			if (GlobalFunc_4938(0) || MISC::IS_BIT_SET(Local_53.f_449, 2))
			{
				func_68(&Local_53);
				GlobalFunc_11016(&Local_53);
				GlobalFunc_4413(&Local_53);
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("docks_heista")) > 0 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("docks_heistb")) > 0)
		{
			GlobalFunc_4412();
		}
		if (MISC::GET_GAME_TIMER() < iLocal_43)
		{
			GlobalFunc_187();
		}
		SYSTEM::WAIT(0);
	}
	GlobalFunc_492(1);
	func_522();
}




































































void func_68(var uParam0)//Position - 0x2618
{
	if (MISC::IS_BIT_SET(uParam0->f_449, 1))
	{
		func_69(uParam0);
	}
}

void func_69(var uParam0)//Position - 0x2633
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
				func_116(uParam0);
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
		func_78(uParam0);
		if (((!bVar7 && uParam0->f_453 > 15) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_35) || PAD::IS_CONTROL_JUST_PRESSED(2, 238))) || MISC::IS_BIT_SET(uParam0->f_449, 8))
		{
			MISC::CLEAR_BIT(&(uParam0->f_449), 8);
			func_70(uParam0, 0);
		}
	}
}

void func_70(var uParam0, bool bParam1)//Position - 0x2850
{
	struct<3> Var0;
	int iVar3;
	
	uParam0->f_453 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		if (!bParam1)
		{
			Var0 = { uParam0->f_401 };
			Var0 = { Var0 + Vector(0f, (1f * SYSTEM::COS((180f - uParam0->f_404))), (1f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 134);
	}
	HUD::DISPLAY_RADAR(1);
	GlobalFunc_7632(0);
	GlobalFunc_139();
	HUD::THEFEED_RESUME();
	HUD::RESET_HUD_COMPONENT_VALUES(17);
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(0);
	func_71(&(uParam0->f_649), 0, 1);
	GlobalFunc_6456(&(uParam0->f_1.f_20[0 /*4*/]), 1);
	GlobalFunc_6456(&(uParam0->f_1.f_20[1 /*4*/]), 1);
	GlobalFunc_6456(&(uParam0->f_1.f_108[0 /*4*/]), 1);
	GlobalFunc_6456(&(uParam0->f_1.f_108[1 /*4*/]), 1);
	HUD::CLEAR_HELP(1);
	while (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
		SYSTEM::WAIT(0);
	}
	iVar3 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_401);
	if (iVar3 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iVar3);
	}
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	GlobalFunc_4424(uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 7);
	MISC::CLEAR_BIT(&(uParam0->f_449), 2);
	Global_86374 = 0;
}

void func_71(var uParam0, int iParam1, bool bParam2)//Position - 0x29D2
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (bParam2)
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, iParam1, 0);
		}
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, 0);
		}
		CAM::DESTROY_CAM(*uParam0, iParam1);
	}
	if (uParam0->f_23)
	{
		HUD::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_23 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
}







void func_78(var uParam0)//Position - 0x2C11
{
	var uVar0;
	bool bVar1;
	struct<3> Var2;
	
	uVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1);
	if (!MISC::ARE_STRINGS_EQUAL(uVar0, uParam0->f_466))
	{
		GlobalFunc_6454(uParam0);
	}
	uParam0->f_466 = sVar0;
	GlobalFunc_5077();
	func_102(uParam0);
	GlobalFunc_10894(uParam0);
	if (uParam0->f_464 == 1)
	{
		GlobalFunc_8905(uParam0);
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
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 134);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var2, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			MISC::SET_BIT(&(uParam0->f_449), 7);
		}
	}
}
























void func_102(var uParam0)//Position - 0x3F98
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
									GlobalFunc_2196(4, *uParam0, 1);
									if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
									{
										GlobalFunc_6467(*uParam0);
									}
								}
								else
								{
									GlobalFunc_2196(5, *uParam0, 1);
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
									GlobalFunc_2196(5, 1, 0);
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
			if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
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
				GlobalFunc_2196(5, *uParam0, 1);
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














void func_116(var uParam0)//Position - 0x5E18
{
	struct<3> Var0;
	int iVar3;
	
	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	MISC::SET_BIT(&(uParam0->f_449), 9);
	GlobalFunc_6455(uParam0, 0);
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_35957 == 1)
			{
				GlobalFunc_8395(PLAYER::PLAYER_PED_ID());
			}
			Var0 = { uParam0->f_401 };
			Var0 = { Var0 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_404))), (2.9f * SYSTEM::SIN((180f - uParam0->f_404)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 134);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
		}
		MISC::SET_BIT(&(uParam0->f_449), 7);
	}
	HUD::DISPLAY_RADAR(0);
	GlobalFunc_7632(1);
	GlobalFunc_138();
	HUD::THEFEED_PAUSE();
	MISC::CLEAR_AREA(uParam0->f_401, 5f, 1, 1, 0, 0);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam0->f_401, 5f);
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(1);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_119(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
	iVar3 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_401);
	if (iVar3 != 0)
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar3);
	}
	INTERIOR::_0xAF348AFCB575A441(&(Global_Heist_Start_Locations[uParam0->f_1.f_1 /*15*/].f_7));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		INTERIOR::_0x405DC2AEF6AF95B9(INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(PLAYER::PLAYER_PED_ID()));
	}
	GlobalFunc_2032(0);
	GlobalFunc_6468();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	uParam0->f_466 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 10, 1);
	MISC::SET_BIT(&(uParam0->f_449), 2);
	Global_86374 = 1;
	GlobalFunc_10812(uParam0, uParam0->f_464, 0);
}



void func_119(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8, int iParam9, int iParam10, var uParam11, int iParam12, int iParam13, float fParam14, bool bParam15)//Position - 0x6083
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = uParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	CAM::SET_CAM_ACTIVE(*uParam0, 1);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}



























void func_146()//Position - 0x7082
{
	struct<6> Var0;
	var uVar6;
	float fVar7;
	var uVar8;
	
	if (iLocal_52)
	{
		if (GlobalFunc_597(8) == 3)
		{
			if (GlobalFunc_111())
			{
				Var0 = { GlobalFunc_2209() };
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "DHP8B_1"))
				{
					GlobalFunc_4935();
					iLocal_52 = 0;
				}
			}
		}
	}
	if (GlobalFunc_485(21))
	{
		if (!MISC::IS_BIT_SET(uLocal_40, 5))
		{
			CUTSCENE::REQUEST_CUTSCENE("LSDHS_MCS_3_P2", 8);
			AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0);
			STREAMING::REQUEST_MODEL(joaat("ig_floyd"));
			MISC::SET_BIT(&uLocal_40, 5);
		}
	}
	if (GlobalFunc_485(22))
	{
		if (GlobalFunc_485(21))
		{
			if (((((CUTSCENE::HAS_CUTSCENE_LOADED() && (MISC::IS_BIT_SET(Global_86396[4 /*19*/].f_18, 4) || MISC::IS_BIT_SET(Global_86396[3 /*19*/].f_18, 4))) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0)) && STREAMING::HAS_MODEL_LOADED(joaat("ig_floyd"))) && Local_53.f_483 == 0) && !GlobalFunc_111())
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "TREVOR", 0, joaat("player_two"), 0);
				}
				GlobalFunc_6808(&iLocal_46, 32, -1146.418f, -1518.062f, 10.2716f, 0f, 1);
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.554f, 0.421f, 0.01f, 0.831f, 1f, 1, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.554f, 0.542f, 0.01f, 0.861f, 0.9f, 1, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.554f, 0.542f, 0.01f, 0.861f, 1f, 5, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.554f, 0.542f, 0.01f, 0.861f, 1f, 2, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.554f, 0.542f, 0.01f, 0.861f, 1f, 1, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.557f, 0.576f, 0f, 0.866f, 1f, 1, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.557f, 0.576f, 0f, 0.866f, 0.9f, 4, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.557f, 0.576f, 0f, 0.866f, 1f, 1, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.557f, 0.576f, 0f, 0.866f, 1f, 1, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.557f, 0.576f, 0f, 0.866f, 0.9f, 2, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.557f, 0.576f, 0f, 0.866f, 1f, 1, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.557f, 0.576f, 0f, 0.866f, 1f, 5, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.557f, 0.576f, 0f, 0.866f, 1f, 3, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.577f, 0.536f, 0f, 0.866f, 1f, 3, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.577f, 0.536f, 0f, 0.866f, 1f, 3, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.577f, 0.536f, 0f, 0.866f, 0.9f, 4, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.577f, 0.536f, 0f, 0.866f, 0.9f, 4, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.577f, 0.536f, 0f, 0.866f, 1f, 1, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.411f, 0.485f, 0f, 1f, 1f, 0, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.411f, 0.485f, 0f, 1f, 1f, 0, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.411f, 0.485f, 0f, 1f, 1f, 2, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.411f, 0.485f, 0f, 1f, 1f, 5, 1, "bruise");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.414f, 0.542f, 0.03f, 0.988f, 1f, 5, 1, "scar");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.414f, 0.542f, 0.03f, 0.988f, 1f, 11, 1, "scar");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.504f, 0.752f, 0.03f, 0.988f, 1f, 10, 1, "scar");
				PED::APPLY_PED_DAMAGE_DECAL(iLocal_46, 1, 0.504f, 0.752f, 0.03f, 0.988f, 1f, 3, 1, "scar");
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_46, "Floyd", 1, joaat("cs_floyd"), 9);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_floyd"));
				GlobalFunc_2032(1);
				GlobalFunc_8316(1, 1, 1, 0);
				GlobalFunc_7632(1);
				CUTSCENE::START_CUTSCENE(0);
				iLocal_52 = 0;
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				}
				if (MISC::IS_BIT_SET(uLocal_40, 3))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
					}
					MISC::CLEAR_BIT(&uLocal_40, 3);
				}
				GlobalFunc_585(21, 0);
			}
		}
		else
		{
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GlobalFunc_5077();
				if (!iLocal_50)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= 35000)
					{
						uLocal_49 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-1193f, -1525f, 4.4f, GlobalFunc_590(9.4f, 0f, -78.8f), 1000f, 12, 127);
						iLocal_50 = 1;
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
					{
						GlobalFunc_11318(PLAYER::PLAYER_PED_ID());
						STREAMING::REQUEST_ANIM_DICT("SWITCH@TREVOR@WATCHING_TV");
						STREAMING::REQUEST_MODEL(joaat("prop_cs_remote_01"));
						AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
						AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_FRANKLIN_SOFA", 0);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						func_180(71, &uLocal_736, 1, 1, 0, 1, 0);
						PAD::_0xF239400E16C23E08(0, 0);
						MISC::SET_BIT(&uLocal_40, 8);
					}
					else
					{
						MISC::SET_BIT(&uLocal_40, 12);
					}
				}
			}
			if (MISC::IS_BIT_SET(uLocal_40, 8))
			{
				if (!iLocal_51)
				{
					if (STREAMING::STREAMVOL_IS_VALID(uLocal_49))
					{
						STREAMING::STREAMVOL_DELETE(uLocal_49);
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1159.273f, -1522.504f, 9.634f, 15f, 0);
					iLocal_51 = 1;
				}
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (!MISC::IS_BIT_SET(uLocal_40, 9))
				{
					if (func_180(71, &uLocal_736, 1, 0, 0, 1, 0))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("SWITCH@TREVOR@WATCHING_TV") && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_remote_01")))
						{
							uLocal_42 = PED::CREATE_SYNCHRONIZED_SCENE(-1159.273f, -1522.504f, 9.634f, 0f, 0f, -147f, 2);
							iLocal_45 = OBJECT::CREATE_OBJECT(joaat("prop_cs_remote_01"), -1159.273f, -1522.504f, 9.634f, 1, 1, 0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_remote_01"));
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_45, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_42, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_42, 1);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_42, "SWITCH@TREVOR@WATCHING_TV", "LOOP", 1000f, -1000f, 0, 0, 1148846080, 0);
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
								PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 1);
							}
							MISC::SET_BIT(&uLocal_40, 9);
						}
					}
				}
				else if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					uVar6 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1160.354f, -1521.708f, 9.6327f, "V_TREVORS");
					INTERIOR::_0x82EBB79E258FA2B7(PLAYER::PLAYER_PED_ID(), uVar6);
					INTERIOR::_0x82EBB79E258FA2B7(iLocal_45, uVar6);
					GlobalFunc_9140(&uLocal_736, 0, 0, 2000, 1, 1, 0, 1);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_42, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_42, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_42, 0f);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_42, "SWITCH@TREVOR@WATCHING_TV", "EXIT", 1000f, -1.5f, 0, 0, 1148846080, 0);
					uLocal_44 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_44, uLocal_42, "EXIT_CAM", "SWITCH@TREVOR@WATCHING_TV");
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
					GlobalFunc_3061(15000);
					MISC::CLEAR_BIT(&uLocal_40, 8);
					MISC::SET_BIT(&uLocal_40, 10);
				}
			}
			else if (MISC::IS_BIT_SET(uLocal_40, 10))
			{
				PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 45, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 55, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				STREAMING::NEW_LOAD_SCENE_STOP();
				if (STREAMING::STREAMVOL_IS_VALID(uLocal_49))
				{
					STREAMING::STREAMVOL_DELETE(uLocal_49);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_42))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_45))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_45))
						{
							if (!ENTITY::FIND_ANIM_EVENT_PHASE("SWITCH@TREVOR@WATCHING_TV", "EXIT", "OBJECTRELEASE", &fVar7, &uVar8))
							{
								fVar7 = 0.4206f;
							}
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_42) >= fVar7)
							{
								ENTITY::DETACH_ENTITY(iLocal_45, 1, 1);
								ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_45);
							}
						}
					}
					if (!ENTITY::FIND_ANIM_EVENT_PHASE("SWITCH@TREVOR@WATCHING_TV", "EXIT", "WALKINTERRUPTABLE", &fVar7, &uVar8))
					{
						fVar7 = 0.9f;
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_42) >= fVar7)
					{
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 1, 0, 0);
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
						STREAMING::REMOVE_ANIM_DICT("SWITCH@TREVOR@WATCHING_TV");
						AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
						AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
						MISC::CLEAR_BIT(&uLocal_40, 10);
						MISC::SET_BIT(&uLocal_40, 12);
					}
				}
			}
			else if (MISC::IS_BIT_SET(uLocal_40, 12))
			{
				if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				else
				{
					Global_54750 = 0;
					iLocal_43 = MISC::GET_GAME_TIMER() + 5000;
					Global_90001 = 0;
					GlobalFunc_4907();
				}
				GlobalFunc_8316(0, 1, 1, 0);
				GlobalFunc_7632(0);
				GlobalFunc_3061(20000);
				GlobalFunc_585(22, 0);
				GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 71);
				GlobalFunc_2642(13, 136);
				GlobalFunc_2642(14, 136);
				func_148(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 71);
				if (STREAMING::STREAMVOL_IS_VALID(uLocal_49))
				{
					STREAMING::STREAMVOL_DELETE(uLocal_49);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				PAD::_0xF239400E16C23E08(0, -1);
				GlobalFunc_1997(&iLocal_41);
				MISC::CLEAR_BIT(&uLocal_40, 2);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_47, 0);
				if (iLocal_48 != -1)
				{
					if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_48))
					{
						PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_48);
					}
				}
				PED::CLEAR_PED_NON_CREATION_AREA();
				PATHFIND::SET_PED_PATHS_IN_AREA(Local_53.f_1.f_394 - Local_53.f_1.f_397, Local_53.f_1.f_394 + Local_53.f_1.f_397, 1, 0);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				MISC::CLEAR_BIT(&(Global_68265[2]), 12);
				MISC::CLEAR_BIT(&(Global_68265[2]), 12 + 1);
			}
		}
	}
	else if (!GlobalFunc_485(21))
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("LSDHS_MCS_3_P2"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
}


void func_148(var uParam0, int iParam1)//Position - 0x7AD0
{
	switch (iParam1)
	{
		case 17:
			func_149(uParam0, 0, 12);
			break;
		
		case 19:
			func_149(uParam0, 1, 13);
			break;
		
		case 29:
			func_149(uParam0, 1, 14);
			break;
		
		case 30:
			func_149(uParam0, 2, 15);
			func_149(uParam0, 1, 29);
			break;
		
		case 32:
			func_149(uParam0, 1, 16);
			func_149(uParam0, 0, 17);
			break;
		
		case 39:
			func_149(uParam0, 0, 21);
			func_149(uParam0, 1, 20);
			break;
		
		case 31:
			func_149(uParam0, 0, 18);
			break;
		
		case 20:
			func_149(uParam0, 2, 22);
			break;
		
		case 66:
			func_149(uParam0, 1, 23);
			break;
		
		case 68:
			func_149(uParam0, 1, 24);
			break;
		
		case 70:
			func_149(uParam0, 1, 67);
			break;
		
		case 8:
			func_149(uParam0, 1, 25);
			func_149(uParam0, 2, 26);
			break;
		
		case 67:
			func_149(uParam0, 1, 27);
			break;
		
		case 9:
			func_149(uParam0, 2, 28);
			break;
		
		case 38:
			func_149(uParam0, 2, 30);
			func_149(uParam0, 1, 19);
			break;
		
		case 83:
			func_149(uParam0, 2, 33);
			break;
		
		case 45:
			func_149(uParam0, 1, 35);
			break;
		
		case 64:
			func_149(uParam0, 0, 36);
			func_149(uParam0, 1, 37);
			break;
		
		case 91:
			func_149(uParam0, 0, 41);
			break;
		
		case 42:
			func_149(uParam0, 0, 58);
			Global_89503[0 /*74*/] = 0;
			func_149(uParam0, 2, 59);
			Global_89503[2 /*74*/] = 0;
			break;
		
		case 41:
			func_149(uParam0, 1, 42);
			func_149(uParam0, 2, 42);
			break;
		
		case 15:
			func_149(uParam0, 0, 46);
			func_149(uParam0, 1, 47);
			break;
		
		case 16:
			func_149(uParam0, 0, 48);
			break;
		
		case 48:
			func_149(uParam0, 1, 50);
			func_149(uParam0, 2, 51);
			break;
		
		case 74:
			func_149(uParam0, 0, 52);
			func_149(uParam0, 1, 66);
			break;
		
		case 76:
			func_149(uParam0, 1, 53);
			func_149(uParam0, 2, 54);
			func_149(uParam0, 0, 62);
			break;
		
		case 75:
			func_149(uParam0, 0, 61);
			func_149(uParam0, 1, 31);
			break;
		
		case 69:
			func_149(uParam0, 1, 63);
			break;
		
		case 84:
			func_149(uParam0, 0, 68);
			func_149(uParam0, 2, 69);
			break;
		
		case 85:
			func_149(uParam0, 0, 64);
			func_149(uParam0, 2, 65);
			break;
		
		case 93:
			func_149(uParam0, 1, 38);
			func_149(uParam0, 2, 39);
			break;
		
		case 11:
			func_149(uParam0, 2, 55);
			break;
		
		case 77:
			func_149(uParam0, 1, 56);
			func_149(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_149(var uParam0, int iParam1, int iParam2)//Position - 0x7E19
{
	int iVar0;
	struct<74> Var1;
	var uVar75;
	var uVar78;
	var uVar79;
	var uVar82;
	
	if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[0], 9))
	{
		iVar0 = Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iParam1] = iParam2;
	uParam0->f_1524[iParam1] = GlobalFunc_7719();
	if (!GlobalFunc_506(iParam2, &(uParam0->f_1528[iParam1 /*3*/]), &(uParam0->f_1538[iParam1])))
	{
		return 0;
	}
	if (!GlobalFunc_100(uParam0->f_1528[iParam1 /*3*/], 0f, 0f, 0f))
	{
		if (!GlobalFunc_100(Global_88538[iParam2 /*3*/], 0f, 0f, 0f))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 25;
			Var1.f_57 = 2;
			if (GlobalFunc_8040(iParam1, iParam2, &Var1, &uVar75, &uVar78, &uVar79, &uVar82))
			{
				Global_89503[iParam1 /*74*/] = { Var1 };
			}
		}
	}
	uParam0->f_1542[iParam1] = 0;
	uParam0->f_1546[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_1556[iParam1] = 0;
	return 1;
}































bool func_180(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xCE67
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_181(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_181(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xCE95
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !GlobalFunc_5183(uParam0->f_8, uParam0->f_7))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
				}
			}
			fVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!GlobalFunc_5183(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				CAM::DESTROY_CAM(uParam0->f_4, 0);
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
					}
					iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 0);
						}
						ENTITY::SET_ENTITY_VISIBLE(iVar2, 0);
					}
				}
				fVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				GlobalFunc_7641(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar4, 0);
				}
			}
			fVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9140(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (GlobalFunc_9141(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
					CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (GlobalFunc_9141(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					GlobalFunc_9141(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4) && CAM::IS_CAM_INTERPOLATING(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > MISC::GET_GAME_TIMER())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}






































































































































































































































































































void func_475()//Position - 0x568AE
{
	if (GlobalFunc_485(20))
	{
		if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			if (!MISC::IS_BIT_SET(uLocal_40, 4))
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("LSDHS_MCS_3_P1_CONCAT", 6, 8);
				GlobalFunc_3027();
				MISC::SET_BIT(&(Global_68265[2]), 12);
				MISC::SET_BIT(&(Global_68265[2]), 12 + 1);
				MISC::SET_BIT(&iLocal_40, 4);
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("WADE", 0, 0, 1, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("WADE", 3, 1, 1, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("WADE", 4, 1, 1, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("WADE", 5, 1, 1, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("WADE", 5, 1, 1, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("WADE", 10, 1, 0, 0);
			}
			if (GlobalFunc_230(71))
			{
				if (GlobalFunc_4938(0))
				{
					if (GlobalFunc_7905(&iLocal_41, 0, 0, 0, 0) == 1)
					{
						if (GlobalFunc_2539(141) != 1)
						{
							GlobalFunc_7621(141, 1, 0, 1, 0);
						}
						if (GlobalFunc_2539(139) != 1)
						{
							GlobalFunc_7621(139, 1, 0, 1, 0);
						}
						uLocal_47 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_53.f_1.f_394 - Local_53.f_1.f_397, Local_53.f_1.f_394 + Local_53.f_1.f_397, 0, 1, 1, 1);
						iLocal_48 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_53.f_1.f_394, Local_53.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
						PED::SET_PED_NON_CREATION_AREA(Local_53.f_1.f_394 - Local_53.f_1.f_397, Local_53.f_1.f_394 + Local_53.f_1.f_397);
						PATHFIND::SET_PED_PATHS_IN_AREA(Local_53.f_1.f_394 - Local_53.f_1.f_397, Local_53.f_1.f_394 + Local_53.f_1.f_397, 0, 0);
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							PLAYER::SET_MAX_WANTED_LEVEL(0);
						}
						MISC::SET_BIT(&iLocal_40, 2);
					}
				}
			}
			if (MISC::IS_BIT_SET(iLocal_40, 2))
			{
				if (GlobalFunc_550("LSDHS_MCS_3_P1_CONCAT"))
				{
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 0, 1);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_86864.f_9[0], "WADE", 1, joaat("ig_wade"), 0);
						}
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "TREVOR", 0, joaat("player_two"), 0);
						GlobalFunc_7632(1);
						GlobalFunc_8316(1, 1, 1, 0);
						MISC::CLEAR_BIT(&iLocal_40, 1);
						if (GlobalFunc_230(30))
						{
							StringCopy(&(Global_86396[3 /*19*/].f_7[4 /*2*/]), "DHP8A", 8);
							StringCopy(&(Global_86396[4 /*19*/].f_7[4 /*2*/]), "DHP8A", 8);
						}
						else
						{
							StringCopy(&(Global_86396[3 /*19*/].f_7[4 /*2*/]), "DHP8B", 8);
							StringCopy(&(Global_86396[4 /*19*/].f_7[4 /*2*/]), "DHP8B", 8);
						}
						GlobalFunc_173(&(Local_53.f_484), 2, 0, "TREVOR", 1, 1);
						GlobalFunc_173(&(Local_53.f_484), 3, 0, "WADE", 1, 1);
						iLocal_52 = 1;
						CUTSCENE::START_CUTSCENE(2048);
					}
					else
					{
						GlobalFunc_5077();
						if (!MISC::IS_BIT_SET(iLocal_40, 11))
						{
							if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							MISC::SET_BIT(&iLocal_40, 11);
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							MISC::SET_BIT(&iLocal_40, 6);
						}
						if (MISC::IS_BIT_SET(iLocal_40, 6))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (!MISC::IS_BIT_SET(iLocal_40, 1))
								{
									GlobalFunc_505(1, 0, 1);
									GlobalFunc_505(1, 1, 1);
									MISC::SET_BIT(&iLocal_40, 1);
								}
								if (!MISC::IS_BIT_SET(iLocal_40, 0))
								{
									GlobalFunc_505(1, 1, 1);
									func_476();
									MISC::SET_BIT(&iLocal_40, 0);
								}
								GlobalFunc_585(20, 0);
							}
						}
						if (!MISC::IS_BIT_SET(iLocal_40, 7))
						{
							MISC::SET_BIT(&iLocal_40, 7);
						}
						if (!MISC::IS_BIT_SET(iLocal_40, 1))
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() >= 60671)
							{
								GlobalFunc_505(1, 0, 1);
								GlobalFunc_505(1, 1, 1);
								MISC::SET_BIT(&iLocal_40, 1);
							}
						}
						if (!MISC::IS_BIT_SET(iLocal_40, 3))
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() >= 53044)
							{
								MISC::SET_BIT(&iLocal_40, 3);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
							}
							if (!MISC::IS_BIT_SET(iLocal_40, 0))
							{
								GlobalFunc_505(1, 1, 1);
								func_476();
								MISC::SET_BIT(&iLocal_40, 0);
							}
							GlobalFunc_585(20, 0);
						}
					}
				}
			}
		}
		else
		{
			if (GlobalFunc_4938(0))
			{
				if (GlobalFunc_7905(&iLocal_41, 0, 0, 0, 0) == 1)
				{
					MISC::SET_BIT(&iLocal_40, 2);
				}
			}
			if (MISC::IS_BIT_SET(iLocal_40, 2))
			{
				GlobalFunc_173(&(Local_53.f_484), 2, 0, "TREVOR", 1, 1);
				GlobalFunc_173(&(Local_53.f_484), 3, 0, "WADE", 1, 1);
				func_476();
				GlobalFunc_585(20, 0);
			}
		}
	}
	else
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("LSDHS_MCS_3_P1_CONCAT"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		if (MISC::IS_BIT_SET(iLocal_40, 4))
		{
			MISC::CLEAR_BIT(&iLocal_40, 4);
		}
	}
}

void func_476()//Position - 0x56D1F
{
	if (!MISC::IS_BIT_SET(Local_53.f_449, 2))
	{
		GlobalFunc_2196(1, 1, 1);
		GlobalFunc_2196(2, 1, 1);
		func_491(&Local_53);
		func_68(&Local_53);
	}
}















void func_491(var uParam0)//Position - 0x5B3D9
{
	if (GlobalFunc_892(2, *uParam0))
	{
		if (MISC::IS_BIT_SET(uParam0->f_449, 1))
		{
			if (MISC::IS_BIT_SET(uParam0->f_449, 2))
			{
				func_70(uParam0, GlobalFunc_6470(*uParam0));
				GlobalFunc_2196(2, *uParam0, 0);
			}
			else
			{
				func_116(uParam0);
				GlobalFunc_2196(2, *uParam0, 0);
			}
		}
	}
}


int func_493(var uParam0)//Position - 0x5B49B
{
	if (MISC::IS_BIT_SET(uParam0->f_449, 1))
	{
		func_495(uParam0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_449, 0))
	{
		GlobalFunc_4428(uParam0);
	}
	return 1;
}


void func_495(var uParam0)//Position - 0x5B535
{
	if (MISC::IS_BIT_SET(uParam0->f_449, 1))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (MISC::IS_BIT_SET(uParam0->f_449, 2))
			{
				func_70(uParam0, 0);
			}
		}
		GlobalFunc_4429(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_449), 1);
		MISC::CLEAR_BIT(&Global_86376, *uParam0);
	}
}


void func_497(var uParam0, float fParam1, float fParam2)//Position - 0x5B5BD
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		fVar0 = SYSTEM::VDIST2(uParam0->f_401, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		if (MISC::IS_BIT_SET(uParam0->f_449, 1))
		{
			GlobalFunc_8252(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || MISC::IS_BIT_SET(Global_86376, *uParam0))
		{
			if (MISC::IS_BIT_SET(uParam0->f_449, 0))
			{
				if (GlobalFunc_4434(uParam0))
				{
					if (MISC::IS_BIT_SET(Global_86376, *uParam0))
					{
						if (MISC::IS_BIT_SET(Global_86378, *uParam0))
						{
							GlobalFunc_10542(uParam0);
						}
					}
					else
					{
						GlobalFunc_10542(uParam0);
					}
				}
			}
			else
			{
				GlobalFunc_4432(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !MISC::IS_BIT_SET(Global_86376, *uParam0))
		{
			if (MISC::IS_BIT_SET(uParam0->f_449, 0))
			{
				if (MISC::IS_BIT_SET(uParam0->f_449, 1))
				{
					func_495(uParam0);
				}
				GlobalFunc_4428(uParam0);
			}
		}
	}
}















void func_512(var uParam0, var uParam1)//Position - 0x5C05B
{
	GlobalFunc_4447(uParam0, 3, "HEIST_DOCKS", "BOARD1", "DHFAUD", "CRWAUD", 1, 1, 3, 4, uParam1, -1157.126f, -1520.959f, 11.1336f, 5f, 5.5f, 4f);
	GlobalFunc_4446(uParam0, 544, 424, 1.41f, 0.93f, 2.75f, 1.55f, 1.45f, 272, 206, 122, 380, 270, 362, 0, 0, 0, 0, 0, 0, 481, 265, 0, 85, 544, 115);
	GlobalFunc_4445(uParam0, 20f, 22f, 28f);
	GlobalFunc_4444(uParam0, "", "", "", "", "DHP1", "", "", "DHP10");
	GlobalFunc_4441(uParam0, 0, 1, 0, 0);
	GlobalFunc_4441(uParam0, 1, 1, 0, 0);
	GlobalFunc_4441(uParam0, 2, 1, 0, 0);
	GlobalFunc_4441(uParam0, 3, 1, 0, 0);
	GlobalFunc_4441(uParam0, 4, 1, 0, 0);
	GlobalFunc_4441(uParam0, 5, 1, 0, 0);
	GlobalFunc_4440(uParam0, 0, 1, "H_TD_PHSH");
	GlobalFunc_4440(uParam0, 0, 1, "H_TD_INVE");
	GlobalFunc_4440(uParam0, 0, 1, "H_TD_SECU");
	GlobalFunc_4440(uParam0, 0, 2, "H_TD_PLAN");
	GlobalFunc_4440(uParam0, 3, 5, "H_TD_SUB");
	GlobalFunc_4440(uParam0, 4, 7, "H_TD_SUB");
	GlobalFunc_4440(uParam0, 4, 6, "H_TD_AIR");
	GlobalFunc_4438(uParam0, 0, "DHP4a", 227, 154, 1);
	GlobalFunc_4438(uParam0, 0, "DHP4b", 264, 237, 0);
	GlobalFunc_4438(uParam0, 0, "DHP5", 59, 134, 1);
	GlobalFunc_4438(uParam0, 0, "DHP6", 227, 154, 1);
	GlobalFunc_4438(uParam0, 0, "DHP7", 346, 39, 1);
}










void func_522()//Position - 0x5C585
{
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_49))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_49);
	}
	while (!func_493(&Local_53))
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_585(20, 0);
	GlobalFunc_585(21, 0);
	GlobalFunc_585(22, 0);
	GlobalFunc_2196(1, 1, 0);
	GlobalFunc_2196(2, 1, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_47, 0);
	if (iLocal_48 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_48))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_48);
		}
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_53.f_1.f_394 - Local_53.f_1.f_397, Local_53.f_1.f_394 + Local_53.f_1.f_397, 1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	CUTSCENE::REMOVE_CUTSCENE();
	PAD::_0xF239400E16C23E08(0, -1);
	if (iLocal_41 != -1)
	{
		GlobalFunc_1997(&iLocal_41);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

