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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48[4] = { 0, 0, 0, 0 };
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 4;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 4;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 4;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 4;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 4;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 4;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	struct<485> Local_94 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
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
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_93 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_325();
	}
	GlobalFunc_501(0);
	func_312(&(Local_94.f_1), GlobalFunc_3003(Global_86396[6 /*19*/], Global_86396[7 /*19*/]));
	GlobalFunc_4437(&Local_94, 3);
	while (!GlobalFunc_485(2))
	{
		if (!Global_68514)
		{
			func_308();
			if (GlobalFunc_4436(3, 0))
			{
				if (!GlobalFunc_230(66))
				{
					if (!MISC::IS_BIT_SET(uLocal_40, 8))
					{
						Local_94.f_1.f_141[0 /*2*/] = 302;
						Local_94.f_1.f_141[0 /*2*/].f_1 = 191;
						Local_94.f_1.f_141[1 /*2*/] = 309;
						Local_94.f_1.f_141[1 /*2*/].f_1 = 109;
						Local_94.f_1.f_141[2 /*2*/] = 196;
						Local_94.f_1.f_141[2 /*2*/].f_1 = 318;
						Local_94.f_1.f_141[3 /*2*/] = 220;
						Local_94.f_1.f_141[3 /*2*/].f_1 = 227;
						MISC::SET_BIT(&uLocal_40, 8);
					}
				}
				else if (!MISC::IS_BIT_SET(uLocal_40, 9))
				{
					Local_94.f_1.f_141[0 /*2*/] = 0;
					Local_94.f_1.f_141[0 /*2*/].f_1 = 0;
					Local_94.f_1.f_141[1 /*2*/] = 0;
					Local_94.f_1.f_141[1 /*2*/].f_1 = 0;
					Local_94.f_1.f_141[2 /*2*/] = 0;
					Local_94.f_1.f_141[2 /*2*/].f_1 = 0;
					Local_94.f_1.f_141[3 /*2*/] = 0;
					Local_94.f_1.f_141[3 /*2*/].f_1 = 0;
					MISC::SET_BIT(&uLocal_40, 9);
				}
			}
			GlobalFunc_4436(3, 0);
			if (Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_226[71] == 1 && !GlobalFunc_39(14))
			{
				GlobalFunc_10813(&Local_94, 40f, 50f);
				GlobalFunc_11017(&Local_94);
				func_270();
				func_148();
			}
			else if (MISC::IS_BIT_SET(Local_94.f_449, 0))
			{
				GlobalFunc_10541(&Local_94);
			}
			if (GlobalFunc_4938(0) || MISC::IS_BIT_SET(Local_94.f_449, 2))
			{
				func_68(&Local_94);
				GlobalFunc_11016(&Local_94);
				GlobalFunc_4413(&Local_94);
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("agency_heist3a")) > 0 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("agency_heist3b")) > 0)
		{
			GlobalFunc_4412();
		}
		if (GlobalFunc_485(12))
		{
			if (!GlobalFunc_2(0))
			{
				if (!MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[3], 8))
				{
					GlobalFunc_505(3, 8, 1);
				}
			}
			else if (MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[3], 8))
			{
				GlobalFunc_505(3, 8, 0);
			}
		}
		else if (MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[3], 8))
		{
			GlobalFunc_505(3, 8, 0);
		}
		SYSTEM::WAIT(0);
	}
	GlobalFunc_492(0);
	func_325();
}




































































void func_68(var uParam0)//Position - 0x27CB
{
	if (MISC::IS_BIT_SET(uParam0->f_449, 1))
	{
		func_69(uParam0);
	}
}

void func_69(var uParam0)//Position - 0x27E6
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
		func_78(uParam0);
		if (((!bVar7 && uParam0->f_453 > 15) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_35) || PAD::IS_CONTROL_JUST_PRESSED(2, 238))) || MISC::IS_BIT_SET(uParam0->f_449, 8))
		{
			MISC::CLEAR_BIT(&(uParam0->f_449), 8);
			GlobalFunc_8904(uParam0, 0);
		}
	}
}









void func_78(var uParam0)//Position - 0x2DC4
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
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 134);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var2, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			MISC::SET_BIT(&(uParam0->f_449), 7);
		}
	}
}
























void func_102(var uParam0)//Position - 0x414D
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
									if (!GlobalFunc_2(0))
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














































void func_148()//Position - 0x72ED
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_485(7))
	{
		if (!MISC::IS_BIT_SET(uLocal_40, 7))
		{
			CUTSCENE::REQUEST_CUTSCENE("AH_2_EXT_P4", 8);
			SCRIPT::REQUEST_SCRIPT("lesterHandler");
			STREAMING::REQUEST_MODEL(joaat("prop_laptop_01a"));
			MISC::SET_BIT(&uLocal_40, 7);
		}
		else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
		}
	}
	if (GlobalFunc_485(8))
	{
		if (GlobalFunc_485(7))
		{
			if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("AH_2_EXT_P4") && SCRIPT::HAS_SCRIPT_LOADED("lesterHandler")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_laptop_01a")))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (!GlobalFunc_2(0) || GlobalFunc_8315() == 0)
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, joaat("player_zero"), 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_48[0], "MICHAEL", 2, joaat("player_zero"), 0);
						MISC::SET_BIT(&uLocal_40, 12);
					}
				}
				if (GlobalFunc_2(0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_44))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_44, "FRANKLIN", 1, joaat("player_one"), 0);
					}
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_45, "LESTER", 2, joaat("ig_lestercrest"), 0);
				MISC::SET_BIT(&uLocal_40, 10);
				func_269(0);
				GlobalFunc_2032(1);
				GlobalFunc_8316(1, 1, 1, 0);
				GlobalFunc_7632(1);
				iVar0 = 0;
				while (iVar0 < GlobalFunc_5882(3))
				{
					if (GlobalFunc_5133(3, iVar0) == 12)
					{
						GlobalFunc_7682(406771743);
					}
					iVar0++;
				}
				CUTSCENE::START_CUTSCENE(256);
				if (GlobalFunc_2(0))
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				}
				GlobalFunc_585(7, 0);
				iLocal_43 = MISC::GET_GAME_TIMER();
			}
		}
		else if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			GlobalFunc_5077();
			if (MISC::IS_BIT_SET(uLocal_40, 5))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("player_zero"))))
				{
					ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("player_zero")), 1);
				}
				MISC::CLEAR_BIT(&uLocal_40, 5);
			}
			if (GlobalFunc_8315() != 0)
			{
				if (MISC::IS_BIT_SET(uLocal_40, 12))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("player_zero"))))
					{
						uLocal_48[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("player_zero")));
						MISC::CLEAR_BIT(&uLocal_40, 12);
					}
				}
			}
			if (MISC::IS_BIT_SET(uLocal_40, 10))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LESTER", joaat("ig_lestercrest"))))
				{
					iLocal_45 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LESTER", joaat("ig_lestercrest")));
					MISC::CLEAR_BIT(&uLocal_40, 10);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0))
			{
				if (GlobalFunc_8315() != 0)
				{
					iLocal_44 = PLAYER::PLAYER_PED_ID();
					GlobalFunc_9134(&uLocal_48, 0);
					func_184(&uLocal_48, 1, 0, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
					}
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 208, 0);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 118, 1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 213, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
					iLocal_42 = MISC::GET_GAME_TIMER();
				}
			}
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LESTER", joaat("ig_lestercrest")))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_45))
				{
					iVar1 = iLocal_45;
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS("lesterHandler", &iVar1, 1, 1424);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("lesterHandler");
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				func_269(1);
			}
		}
		else
		{
			if (GlobalFunc_2(0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_44))
				{
					PED::DELETE_PED(&iLocal_44);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_45))
				{
					PED::DELETE_PED(&iLocal_45);
				}
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			else
			{
				Global_54750 = 0;
				Global_90001 = 0;
				GlobalFunc_4907();
			}
			GlobalFunc_8316(0, 1, 1, 0);
			GlobalFunc_7632(0);
			GlobalFunc_3061(20000);
			GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 67);
			GlobalFunc_9523(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), 67);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_laptop_01a"));
			GlobalFunc_1997(&iLocal_41);
			MISC::CLEAR_BIT(&uLocal_40, 2);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
			}
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_92, 0);
			if (iLocal_93 != -1)
			{
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_93))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_93);
				}
			}
			PED::CLEAR_PED_NON_CREATION_AREA();
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_94.f_1.f_394 - Local_94.f_1.f_397, Local_94.f_1.f_394 + Local_94.f_1.f_397, 1, 0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			GlobalFunc_8250(3, 0);
			GlobalFunc_585(8, 0);
		}
	}
	else if (!GlobalFunc_485(7))
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("AH_2_EXT_P4"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	if (iLocal_42 != -1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_42) > 2000)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			iLocal_42 = -1;
		}
	}
}




































int func_184(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xCCBC
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar22;
	var uVar23;
	char* sVar24;
	
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = GlobalFunc_8315();
		if (!uParam0->f_23)
		{
			GlobalFunc_9014(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		GlobalFunc_9014((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 0);
		}
		if (GlobalFunc_6687(0) || GlobalFunc_6687(3))
		{
			if (Global_17098.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (MISC::IS_BIT_SET(Global_81119[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_81119[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_81155[Global_68514.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17098.f_13 = 0;
		uParam0->f_5 = GlobalFunc_237(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = GlobalFunc_237(iVar2);
		uParam0->f_7 = 4;
		iVar22 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		GlobalFunc_7709(iVar22);
		PED::_0xE861D0B05C7662B8(iVar22, 0, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)));
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
				GlobalFunc_7709(iVar0);
				PED::_0xE861D0B05C7662B8(iVar0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, 0, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar24 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar23);
			if (!MISC::IS_STRING_NULL(sVar24))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar24, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 0, 1);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_87649 = 1;
		GlobalFunc_5126(PLAYER::PLAYER_PED_ID());
		GlobalFunc_8376();
		GlobalFunc_582(iVar2);
		GlobalFunc_8999();
		GlobalFunc_8907(iVar2);
		GlobalFunc_10840(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), GlobalFunc_485(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), GlobalFunc_485(68));
		}
		GlobalFunc_6801(iVar2, &iVar22);
		if (((GlobalFunc_39(0) || GlobalFunc_39(3)) || GlobalFunc_39(2)) || GlobalFunc_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 0);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 1);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 1);
		}
		if (!GlobalFunc_579())
		{
			GlobalFunc_8311();
		}
		Global_87286 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}





















































































void func_269(bool bParam0)//Position - 0x14CFD
{
	if (!bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
		{
			OBJECT::DELETE_OBJECT(&iLocal_47);
		}
		ENTITY::CREATE_MODEL_HIDE(707.3041f, -967.6456f, 30.376f, 1f, joaat("prop_laptop_01a"), 0);
	}
	else
	{
		ENTITY::REMOVE_MODEL_HIDE(707.3041f, -967.6456f, 30.376f, 1f, joaat("prop_laptop_01a"), 0);
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_laptop_01a")))
		{
			iLocal_47 = OBJECT::CREATE_OBJECT(joaat("prop_laptop_01a"), 707.3041f, -967.6456f, 30.376f, 1, 1, 0);
			ENTITY::SET_ENTITY_HEADING(iLocal_47, 183.14f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_47, 1);
		}
	}
}

void func_270()//Position - 0x14D8C
{
	if (GlobalFunc_485(6))
	{
		if (!GlobalFunc_2(0))
		{
			if (!MISC::IS_BIT_SET(uLocal_40, 6))
			{
				CUTSCENE::REQUEST_CUTSCENE("AH_2_EXT_ALT", 8);
				STREAMING::REQUEST_MODEL(joaat("prop_laptop_01a"));
				Local_94.f_1.f_141[2 /*2*/] = 0;
				Local_94.f_1.f_141[2 /*2*/].f_1 = 0;
				Local_94.f_1.f_141[3 /*2*/] = 0;
				Local_94.f_1.f_141[3 /*2*/].f_1 = 0;
				Local_94.f_1.f_141[7 /*2*/] = 0;
				Local_94.f_1.f_141[7 /*2*/].f_1 = 0;
				Local_94.f_1.f_141[8 /*2*/] = 0;
				Local_94.f_1.f_141[8 /*2*/].f_1 = 0;
				MISC::SET_BIT(&uLocal_40, 6);
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
			}
			if (GlobalFunc_230(67))
			{
				if (!GlobalFunc_6687(0))
				{
					if (GlobalFunc_7905(&iLocal_41, 0, 0, 0, 0) == 1)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						GlobalFunc_3027();
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							PLAYER::SET_MAX_WANTED_LEVEL(0);
						}
						uLocal_92 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_94.f_1.f_394 - Local_94.f_1.f_397, Local_94.f_1.f_394 + Local_94.f_1.f_397, 0, 1, 1, 1);
						iLocal_93 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_94.f_1.f_394, Local_94.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
						PED::SET_PED_NON_CREATION_AREA(Local_94.f_1.f_394 - Local_94.f_1.f_397, Local_94.f_1.f_394 + Local_94.f_1.f_397);
						PATHFIND::SET_PED_PATHS_IN_AREA(Local_94.f_1.f_394 - Local_94.f_1.f_397, Local_94.f_1.f_394 + Local_94.f_1.f_397, 0, 0);
						MISC::SET_BIT(&uLocal_40, 2);
					}
				}
			}
			if (MISC::IS_BIT_SET(uLocal_40, 2))
			{
				if (GlobalFunc_550("AH_2_EXT_ALT") && STREAMING::HAS_MODEL_LOADED(joaat("prop_laptop_01a")))
				{
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && !ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
						{
							iLocal_45 = Global_86864.f_9[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_45, 0, 1);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_45, "LESTER", 1, joaat("ig_lestercrest"), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]) && !ENTITY::IS_ENTITY_DEAD(Global_86864.f_28[0]))
						{
							uLocal_46 = Global_86864.f_28[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[0], 0, 1);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_46, "WALKINGSTICK_LESTER", 1, joaat("prop_cs_walking_stick"), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]) && !ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[1]))
						{
							uLocal_48[0] = Global_86864.f_9[1];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_48[0], 0, 1);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_48[0], "MICHAEL", 0, joaat("player_zero"), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_48[0], "MICHAEL", 2, joaat("player_zero"), 0);
							MISC::SET_BIT(&uLocal_40, 12);
						}
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							iLocal_44 = PLAYER::PLAYER_PED_ID();
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_44, "FRANKLIN", 1, joaat("player_one"), 0);
						}
						GlobalFunc_173(&(Local_94.f_484), 0, 0, "MICHAEL", 1, 1);
						GlobalFunc_173(&(Local_94.f_484), 1, 0, "FRANKLIN", 1, 1);
						GlobalFunc_173(&(Local_94.f_484), 3, 0, "LESTER", 1, 1);
						GlobalFunc_7632(1);
						GlobalFunc_8316(1, 1, 1, 0);
						func_269(0);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(949391213, 3, 1, 0);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(949391213, 0f, 1, 0);
						CUTSCENE::START_CUTSCENE(2048);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						iLocal_43 = MISC::GET_GAME_TIMER();
					}
					else
					{
						GlobalFunc_5077();
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]) && !ENTITY::IS_ENTITY_DEAD(Global_86864[0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 0, 1);
							func_272(Global_86864[0], 0, 1);
							VEHICLE::DELETE_VEHICLE(&(Global_86864[0]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							Global_86864[0] = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 0, 1);
							func_272(Global_86864[0], 0, GlobalFunc_8315());
							VEHICLE::DELETE_VEHICLE(&(Global_86864[0]));
						}
						if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0) == 7)
						{
							PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
						}
						if (!MISC::IS_BIT_SET(uLocal_40, 13))
						{
							if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							MISC::SET_BIT(&uLocal_40, 13);
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							MISC::SET_BIT(&uLocal_40, 14);
						}
						if (MISC::IS_BIT_SET(uLocal_40, 14))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (!MISC::IS_BIT_SET(uLocal_40, 1))
								{
									func_271();
									MISC::SET_BIT(&uLocal_40, 1);
								}
								if (!MISC::IS_BIT_SET(uLocal_40, 3))
								{
									GlobalFunc_505(3, 3, 1);
									MISC::SET_BIT(&uLocal_40, 3);
								}
							}
						}
						if (MISC::IS_BIT_SET(uLocal_40, 12))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("player_zero"))))
							{
								uLocal_48[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", joaat("player_zero")));
								MISC::CLEAR_BIT(&uLocal_40, 12);
							}
						}
						if (!MISC::IS_BIT_SET(uLocal_40, 3))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_43) > 15848)
							{
								GlobalFunc_505(3, 3, 1);
								MISC::SET_BIT(&uLocal_40, 3);
							}
						}
						if (!MISC::IS_BIT_SET(uLocal_40, 1))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_43) > 5000)
							{
								func_271();
								MISC::SET_BIT(&uLocal_40, 1);
							}
						}
						if (!MISC::IS_BIT_SET(uLocal_40, 4))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_43) > 71550)
							{
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0)))
								{
									if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0)))
									{
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0), 0);
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0)))
								{
									if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0)))
									{
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0), 0);
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0)))
									{
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0), 0);
									}
								}
								MISC::SET_BIT(&uLocal_40, 4);
							}
						}
						if (!MISC::IS_BIT_SET(uLocal_40, 5))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_43) > 73900)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[0]))
								{
									ENTITY::SET_ENTITY_VISIBLE(uLocal_48[0], 0);
								}
								MISC::SET_BIT(&uLocal_40, 5);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", joaat("player_zero")))
						{
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_48[0]))
							{
								PED::SET_PED_CONFIG_FLAG(uLocal_48[0], 208, 1);
								PED::SET_PED_CONFIG_FLAG(uLocal_48[0], 118, 0);
								PED::SET_PED_CONFIG_FLAG(uLocal_48[0], 213, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_48[0], 1);
							}
							if (GlobalFunc_8315() != 0)
							{
								GlobalFunc_9134(&uLocal_48, 0);
								func_184(&uLocal_48, 0, 0, 0);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("player_zero"));
								GlobalFunc_173(&(Local_94.f_484), 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 1, 1);
							}
							if (!MISC::IS_BIT_SET(uLocal_40, 1))
							{
								func_271();
								MISC::SET_BIT(&uLocal_40, 1);
							}
							GlobalFunc_585(6, 0);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
						{
							func_269(1);
							if (!MISC::IS_BIT_SET(uLocal_40, 4))
							{
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0)))
								{
									if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0)))
									{
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FRANKLIN", 0), 0);
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0)))
								{
									if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0)))
									{
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("LESTER", 0), 0);
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0)))
								{
									if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0)))
									{
										ENTITY::SET_ENTITY_VISIBLE(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("WALKINGSTICK_LESTER", 0), 0);
									}
								}
								MISC::SET_BIT(&uLocal_40, 4);
							}
							if (!MISC::IS_BIT_SET(uLocal_40, 5))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[0]))
								{
									ENTITY::SET_ENTITY_VISIBLE(uLocal_48[0], 0);
								}
								MISC::SET_BIT(&uLocal_40, 5);
							}
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
					MISC::SET_BIT(&uLocal_40, 2);
				}
			}
			if (MISC::IS_BIT_SET(uLocal_40, 2))
			{
				GlobalFunc_173(&(Local_94.f_484), 0, 0, "MICHAEL", 1, 1);
				GlobalFunc_173(&(Local_94.f_484), 1, 0, "FRANKLIN", 1, 1);
				GlobalFunc_173(&(Local_94.f_484), 3, 0, "LESTER", 1, 1);
				func_271();
				GlobalFunc_585(6, 0);
			}
		}
	}
	else
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("AH_2_EXT_ALT"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		if (MISC::IS_BIT_SET(uLocal_40, 6))
		{
			MISC::CLEAR_BIT(&uLocal_40, 6);
		}
	}
}

void func_271()//Position - 0x15583
{
	GlobalFunc_2196(1, 3, 1);
	GlobalFunc_2196(2, 3, 1);
	GlobalFunc_11017(&Local_94);
	func_68(&Local_94);
}

int func_272(int iParam0, int iParam1, int iParam2)//Position - 0x155A5
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			if (MISC::GET_HASH_KEY(sVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	GlobalFunc_8317(iParam0, iParam2);
	return 1;
}




































void func_308()//Position - 0x16F7A
{
	int iVar0;
	
	iVar0 = GlobalFunc_8315();
	if (GlobalFunc_42(iVar0))
	{
		if (!GlobalFunc_6687(0))
		{
			if (!GlobalFunc_230(69) && !GlobalFunc_230(70))
			{
				if (GlobalFunc_891(69) || GlobalFunc_891(70))
				{
					if (Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_226[70] != 1)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_226[70] = 1;
						Global_31962[70] = 0;
						Global_32161[70] = 1;
					}
					if (Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_226[71] != 2)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_226[71] = 2;
						Global_31962[71] = 0;
						Global_32161[71] = 1;
					}
					if (Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_226[73] != 1)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_226[73] = 1;
						Global_31962[73] = 0;
						Global_32161[73] = 1;
					}
					if (Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_226[72] != 0)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_226[72] = 0;
						Global_31962[72] = 0;
						Global_32161[72] = 1;
					}
					if (Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_226[74] != 0)
					{
						Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_226[74] = 0;
						Global_31962[74] = 0;
						Global_32161[74] = 1;
					}
				}
			}
		}
	}
}




void func_312(var uParam0, var uParam1)//Position - 0x17211
{
	GlobalFunc_4447(uParam0, 1, "HEIST_AGENCY", "BOARD5", "AHFAUD", "CRWAUD", 3, 0, 6, 13, uParam1, 708.9957f, -965.256f, 31.39533f, 5.5f, 6.25f, 2f);
	GlobalFunc_4446(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 136, 411, 268, 415, 401, 418, 482, 413, 0, 0, 670, 350, 0, 85, 684, 106);
	GlobalFunc_4445(uParam0, 20f, 22f, 28f);
	GlobalFunc_4444(uParam0, "", "", "", "", "AHP12", "", "AHP13", "AHLONG");
	GlobalFunc_4443(uParam0, 1, "CRW_GM", "");
	GlobalFunc_4443(uParam0, 3, "CRW_HW", "");
	GlobalFunc_4443(uParam0, 4, "CRW_NR", "");
	GlobalFunc_4443(uParam0, 5, "CRW_DJ", "");
	GlobalFunc_4443(uParam0, 6, "CRW_PH", "");
	GlobalFunc_4443(uParam0, 7, "CRW_CF", "");
	GlobalFunc_4443(uParam0, 8, "CRW_ET", "");
	GlobalFunc_4443(uParam0, 9, "CRW_KD", "");
	GlobalFunc_4443(uParam0, 10, "CRW_PM", "CRM_PM");
	GlobalFunc_4443(uParam0, 12, "CRW_RL", "CRM_RL");
	GlobalFunc_4443(uParam0, 13, "CRW_TM", "CRM_TM");
	GlobalFunc_4442(uParam0, 24, "AHRIC1");
	GlobalFunc_4442(uParam0, 26, "AHKAR1");
	GlobalFunc_4442(uParam0, 18, "AHJH");
	GlobalFunc_4442(uParam0, 19, "AHPAL");
	GlobalFunc_4442(uParam0, 21, "AHBOTH");
	GlobalFunc_4441(uParam0, 3, 0, 0, 0);
	GlobalFunc_4441(uParam0, 2, 0, 0, 0);
	GlobalFunc_4441(uParam0, 7, 0, 0, 0);
	GlobalFunc_4441(uParam0, 8, 0, 0, 0);
	GlobalFunc_4441(uParam0, 5, 2, 0, 0);
	GlobalFunc_4441(uParam0, 6, 2, 0, 0);
	GlobalFunc_4441(uParam0, 4, 2, 0, 0);
	GlobalFunc_4441(uParam0, 9, 2, 0, 0);
	GlobalFunc_4441(uParam0, 0, 3, 0, 0);
	GlobalFunc_4441(uParam0, 1, 3, 0, 0);
	GlobalFunc_4440(uParam0, 0, 1, "H_TD_JANI");
	GlobalFunc_4440(uParam0, 1, 3, "H_TD_BLUP");
	GlobalFunc_4440(uParam0, 2, 4, "H_TD_PLAN");
	GlobalFunc_4440(uParam0, 2, 5, "H_TD_CREW");
	GlobalFunc_4440(uParam0, 6, 7, "H_TD_FIRE");
	GlobalFunc_4440(uParam0, 6, 8, "H_TD_GETA");
	GlobalFunc_4439(uParam0, 2, 70, 71);
	GlobalFunc_4439(uParam0, 2, 44, 174);
	GlobalFunc_4439(uParam0, 2, 45, 209);
	GlobalFunc_4439(uParam0, 3, 178, 68);
	GlobalFunc_4439(uParam0, 3, 321, 65);
	GlobalFunc_4439(uParam0, 2, 538, 52);
	GlobalFunc_4439(uParam0, 2, 470, 82);
	GlobalFunc_4439(uParam0, 2, 455, 207);
	GlobalFunc_4439(uParam0, 2, 566, 207);
	GlobalFunc_4439(uParam0, 2, 673, 339);
	GlobalFunc_4439(uParam0, 2, 679, 442);
	GlobalFunc_4439(uParam0, 2, 689, 63);
	GlobalFunc_4438(uParam0, 2, "AHP8", 55, 197, 1);
	GlobalFunc_4438(uParam0, 2, "AHP9", 252, 150, 1);
	GlobalFunc_4438(uParam0, 2, "AHP10", 70, 97, 1);
	GlobalFunc_4438(uParam0, 2, "AHP11", 504, 106, 1);
}













void func_325()//Position - 0x179B3
{
	while (!GlobalFunc_10541(&Local_94))
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_585(6, 0);
	GlobalFunc_585(8, 0);
	GlobalFunc_585(7, 0);
	GlobalFunc_2196(1, 3, 0);
	GlobalFunc_2196(2, 3, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_92, 0);
	if (iLocal_93 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_93))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_93);
		}
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_94.f_1.f_394 - Local_94.f_1.f_397, Local_94.f_1.f_394 + Local_94.f_1.f_397, 1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	CUTSCENE::REMOVE_CUTSCENE();
	if (iLocal_41 != -1)
	{
		GlobalFunc_1997(&iLocal_41);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

