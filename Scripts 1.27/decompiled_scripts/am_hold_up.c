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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 8;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 2;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 8;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	struct<50> Local_90 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	int iLocal_140 = 0;
	struct<73> Local_141 = { 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_214[32];
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	char* sLocal_538 = NULL;
	int iLocal_539 = 0;
	struct<3> Local_540 = { 0, 0, 0 } ;
	struct<3> Local_543 = { 0, 0, 0 } ;
	float fLocal_546 = 0f;
	int iLocal_547 = 0;
	struct<3> Local_548 = { 0, 0, 0 } ;
	struct<3> Local_551 = { 0, 0, 0 } ;
	int iLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	struct<3> Local_564 = { 0, 0, 0 } ;
	var uLocal_567 = 0;
	struct<3> Local_568 = { 0, 0, 0 } ;
	var uLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	struct<3> Local_584 = { 0, 0, 0 } ;
	struct<3> Local_587 = { 0, 0, 0 } ;
	struct<3> Local_590 = { 0, 0, 0 } ;
	struct<3> Local_593 = { 0, 0, 0 } ;
	var uLocal_596 = 0;
	struct<3> Local_597 = { 0, 0, 0 } ;
	struct<3> Local_600 = { 0, 0, 0 } ;
	float fLocal_603 = 0f;
	var uLocal_604 = 16;
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
	int iLocal_769 = 0;
	int iLocal_770[5] = { 0, 0, 0, 0, 0 };
	int iLocal_776[5] = { 0, 0, 0, 0, 0 };
	float fLocal_782 = 0f;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	struct<3> Local_807 = { 0, 0, 0 } ;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
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
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	iLocal_539 = joaat("mp_m_shopkeep_01");
	iLocal_547 = -1;
	iLocal_554 = -1;
	iLocal_572 = joaat("prop_till_01");
	iLocal_573 = SYSTEM::ROUND(Global_262145.f_2392);
	iLocal_574 = SYSTEM::ROUND(Global_262145.f_2388) + 1;
	iLocal_575 = 1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_383(ScriptParam_0))
		{
			func_379();
		}
		if (func_378(1))
		{
			func_372(PLAYER::PLAYER_ID(), 0, 98816, 1);
		}
	}
	while (true)
	{
		func_371();
		if (func_361())
		{
			func_379();
		}
		if (!func_360(PLAYER::PLAYER_ID(), 1, 1))
		{
			iVar0 = 1;
			if (MISC::IS_BIT_SET(iLocal_535, 20))
			{
				iVar1 = MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
				iVar2 = 0;
				MISC::SET_BIT(&iVar2, 8);
				MISC::SET_BIT(&iVar2, 4);
				MISC::SET_BIT(&iVar2, 1);
				if (iLocal_799 > Global_262145.f_144)
				{
					iLocal_799 = Global_262145.f_144;
				}
				if (iVar1 < iLocal_799)
				{
					if (iVar1 > 0)
					{
						if (func_358(func_359(1)))
						{
							if (!MISC::IS_BIT_SET(Global_2446554.f_5, 1))
							{
								if (func_357())
								{
									if (MONEY::_NETWORK_CAN_SPEND_MONEY_2(iVar1, 0, 0, 0, &uVar3, -1))
									{
										Global_2446554.f_4456 = iVar1;
										Global_2446554.f_4457 = iVar2;
										Global_2446554.f_4458 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1067030938, 1069547520) };
										func_354(&(Global_2446554.f_4455), -1135378931, 537254313, 1474183246, 1022400740, Global_2446554.f_4456, 1, 3);
										MISC::SET_BIT(&(Global_2446554.f_5), 1);
										iLocal_799 = 0;
									}
								}
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
				}
				else if (iLocal_799 > 0)
				{
					if (func_358(func_359(1)))
					{
						if (!MISC::IS_BIT_SET(Global_2446554.f_5, 1))
						{
							if (func_357())
							{
								if (MONEY::_NETWORK_CAN_SPEND_MONEY_2(iLocal_799, 0, 0, 0, &uVar3, -1))
								{
									Global_2446554.f_4456 = iLocal_799;
									Global_2446554.f_4457 = iVar2;
									Global_2446554.f_4458 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1067030938, 1069547520) };
									func_354(&(Global_2446554.f_4455), -1135378931, 537254313, 1474183246, 1022400740, Global_2446554.f_4456, 1, 3);
									MISC::SET_BIT(&(Global_2446554.f_5), 1);
									iLocal_799 = 0;
								}
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			if (iVar0 == 1)
			{
				func_379();
			}
			else
			{
				return;
			}
		}
		if (MISC::IS_BIT_SET(Local_141.f_12, 6))
		{
			if (func_378(1))
			{
				func_372(PLAYER::PLAYER_ID(), 1, 0, 1);
				func_351();
				func_350();
			}
		}
		switch (func_349(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
				if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
				{
					if (func_339())
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_338(Local_90), 0);
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_1))
						{
							if (func_337() > 0)
							{
								if (!func_336(Local_141.f_1))
								{
									func_335(&uLocal_604, 3, NETWORK::NET_TO_PED(Local_141.f_1), &(Local_141.f_38), 1, 0);
									func_334();
								}
								MISC::SET_BIT(&iLocal_535, 22);
								Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = 2;
							}
						}
					}
				}
				if (func_337() == 6)
				{
					Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = 5;
				}
				break;
			
			case 2:
				func_217();
				func_209();
				if (func_337() == 2)
				{
					func_115();
				}
				else if (func_337() == 6)
				{
					Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = 5;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_587, 30f, 30f, 30f, 0, 1, 0))
				{
					Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = 6;
				}
				break;
			
			case 5:
				func_114(&(Local_141.f_61));
				if (func_113(&(Local_141.f_61)))
				{
					Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = 6;
				}
				break;
			
			case 4:
				Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = 6;
			
			case 6:
				func_46();
				func_379();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_337())
			{
				case 0:
					if (!MISC::IS_BIT_SET(iLocal_535, 16))
					{
						func_358(func_359(0));
						func_358(func_359(1));
						func_358(func_359(2));
						STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
						if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
						{
							if (func_339())
							{
								MISC::CLEAR_AREA(Local_548, 1.5f, 0, 1, 0, 1);
								MISC::CLEAR_AREA(Local_543, 1.5f, 0, 1, 0, 1);
								MISC::SET_BIT(&iLocal_535, 16);
							}
						}
					}
					else if (func_44())
					{
						Local_141 = 2;
					}
					break;
				
				case 2:
					func_43();
					func_41();
					func_28();
					func_27();
					func_20();
					func_19();
					func_11();
					func_10();
					if (func_4())
					{
						func_1();
						Local_141 = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x505
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_2))
	{
		if (func_3(Local_141.f_2))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(Local_141.f_2)))
			{
				ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_141.f_2), 1, 1);
				func_2(&(Local_141.f_2));
			}
		}
	}
}

void func_2(var uParam0)//Position - 0x548
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

int func_3(var uParam0)//Position - 0x56C
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_4()//Position - 0x58E
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()//Position - 0x5A2
{
	if (MISC::IS_BIT_SET(Local_141.f_12, 2))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_141.f_12, 3))
	{
		return 1;
	}
	if (!func_9())
	{
		if ((MISC::IS_BIT_SET(Local_141.f_12, 11) || MISC::IS_BIT_SET(Local_141.f_12, 19)) || (MISC::IS_BIT_SET(Local_141.f_12, 9) && !MISC::IS_BIT_SET(Local_141.f_12, 20)))
		{
			func_6(iLocal_769, 1, func_7());
			return 1;
		}
		if (MISC::IS_BIT_SET(Local_141.f_12, 18))
		{
			func_6(iLocal_769, 1, func_7());
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Local_141.f_12, 18))
	{
		if (!MISC::IS_BIT_SET(Local_141.f_13, 7))
		{
			func_6(iLocal_769, 1, func_7());
			MISC::SET_BIT(&(Local_141.f_13), 7);
		}
	}
	return 0;
}

void func_6(int iParam0, int iParam1, int iParam2)//Position - 0x66C
{
	struct<4> Var0;
	
	Var0 = 21;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iParam2);
	}
}

int func_7()//Position - 0x6A1
{
	return func_8(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("freemode", -1, 0));
}

int func_8(int iParam0)//Position - 0x6B6
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_9()//Position - 0x6C8
{
	if ((MISC::IS_BIT_SET(Local_141.f_12, 13) || MISC::IS_BIT_SET(Local_141.f_12, 27)) || MISC::IS_BIT_SET(Local_141.f_12, 28))
	{
		return 1;
	}
	return 0;
}

void func_10()//Position - 0x702
{
	var uVar0;
	
	if (!MISC::IS_BIT_SET(Local_141.f_12, 21))
	{
		if (func_336(Local_141.f_1))
		{
			Local_141.f_72 = NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_141.f_1, &uVar0);
			MISC::SET_BIT(&(Local_141.f_12), 21);
		}
	}
	if (!MISC::IS_BIT_SET(Local_141.f_12, 19))
	{
		if (MISC::IS_BIT_SET(Local_141.f_12, 10) && Local_141.f_28 <= 0f)
		{
			MISC::SET_BIT(&(Local_141.f_12), 19);
		}
	}
	if (!MISC::IS_BIT_SET(Local_141.f_13, 17))
	{
		if (MISC::IS_BIT_SET(Local_141.f_12, 20))
		{
			if (func_3(Local_141.f_2))
			{
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_141.f_2), 0, 0);
				MISC::SET_BIT(&(Local_141.f_13), 17);
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_141.f_12, 6))
	{
		if (Global_2446554.f_6 == 1)
		{
			MISC::SET_BIT(&(Local_141.f_12), 6);
			MISC::SET_BIT(&(Local_141.f_12), 16);
		}
	}
}

int func_11()//Position - 0x7D3
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() || !MISC::IS_BIT_SET(Local_141.f_14, 0))
	{
		return 0;
	}
	if (Local_141.f_58 != 6)
	{
		if (Local_141.f_58 > 0 && func_336(Local_141.f_4))
		{
			Local_141.f_58 = 6;
			return 0;
		}
		switch (Local_141.f_58)
		{
			case 0:
				if (!func_17(&uLocal_795, 10000, 0))
				{
					iVar0 = PED::GET_RANDOM_PED_AT_COORD(Local_597, 20f, 20f, 20f, -1);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
						{
							iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !PED::IS_COP_PED_IN_AREA_3D(Local_597, 25f, 25f, 25f)) && !ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_584, 1f, 1f, 2f, 0, 1, 0)) && !WEAPON::IS_PED_ARMED(iVar0, 7)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1)) && PED::IS_PED_HUMAN(iVar0)) && func_16(iVar1))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
								{
									if (func_15(&(Local_141.f_4), iVar0, 1, 0))
									{
										WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_141.f_4), joaat("weapon_pistol"), 25000, 0);
										PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_141.f_4), 1);
										Local_141.f_58 = 1;
										MISC::SET_BIT(&(Local_141.f_14), 1);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_141.f_4), Global_1574057);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_141.f_4), 2);
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_141.f_4), SYSTEM::ROUND((200f * Global_262145.f_134)));
										func_335(&uLocal_604, 4, NETWORK::NET_TO_PED(Local_141.f_4), "StoreHero", 1, 0);
										TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_141.f_4), func_14(), 0, 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((MISC::IS_BIT_SET(Local_141.f_12, 9) || MISC::IS_BIT_SET(Local_141.f_12, 5)) || MISC::IS_BIT_SET(Local_141.f_12, 4))
				{
					Local_141.f_58 = 2;
				}
				break;
			
			case 2:
				if (func_17(&(Local_141.f_59), 3000, 0) || (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_4), 1227113341) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_4), 1227113341) != 1))
				{
					func_13(&(Local_141.f_59));
					Local_141.f_58 = 3;
				}
				break;
			
			case 3:
				if (((MISC::IS_BIT_SET(Local_141.f_12, 5) || MISC::IS_BIT_SET(Local_141.f_14, 8)) || MISC::IS_BIT_SET(Local_141.f_14, 9)) || func_17(&(Local_141.f_59), 5000, 0))
				{
					if (func_12() || func_17(&(Local_141.f_59), 5000, 0))
					{
						Local_141.f_58 = 4;
					}
					else
					{
						Local_141.f_58 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_12()//Position - 0xAB1
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_13(var uParam0)//Position - 0xAD2
{
	uParam0->f_1 = 0;
}

char* func_14()//Position - 0xADF
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_15(var uParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xB1E
{
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, bParam2, iParam3);
	*uParam0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam2)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
		}
		return 1;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0xB55
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_17(var uParam0, int iParam1, bool bParam2)//Position - 0xE53
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2)//Position - 0xEB1
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_19()//Position - 0xEF6
{
	if (Local_141.f_21 == 0)
	{
		if (Local_141.f_36 >= 2 && Local_141.f_36 != 9)
		{
			Local_141.f_21 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(99, PLAYER::PLAYER_PED_ID(), 60000f);
		}
	}
}

void func_20()//Position - 0xF2E
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!MISC::IS_BIT_SET(Local_141.f_15, 5))
	{
		if (Local_141.f_32 > 0)
		{
			func_24();
			if (!MISC::IS_BIT_SET(Local_141.f_15, 5))
			{
				return;
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_141.f_15, 1))
	{
		if (Local_141.f_18 == 3 && !MISC::IS_BIT_SET(Local_141.f_12, 9))
		{
			Local_141.f_18 = 0;
		}
		MISC::CLEAR_BIT(&(Local_141.f_15), 1);
	}
	switch (Local_141.f_18)
	{
		case 0:
			if ((((func_3(Local_141.f_1) && !func_336(Local_141.f_1)) && func_3(Local_141.f_5[Local_141.f_16])) && Local_141.f_36 != 8) && Local_141.f_36 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_141.f_1)))
				{
					if (MISC::IS_BIT_SET(Local_141.f_12, 9) || MISC::IS_BIT_SET(Local_141.f_15, 4))
					{
						Local_141.f_18 = 2;
						return;
					}
					if (!iLocal_537)
					{
						TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_141.f_1), Local_141.f_33, 1600);
						iLocal_537 = 1;
					}
					if (func_17(&uLocal_785, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_141.f_1));
						fVar1 = (Local_141.f_33 - 10f);
						fVar2 = (Local_141.f_33 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_141.f_33 - 10f) + 360f);
							fVar1 = ((Local_141.f_33 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_141.f_33 - 10f) - 360f);
							fVar1 = ((Local_141.f_33 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_17(&uLocal_791, 1000, 0)) || func_17(&uLocal_791, 3125, 0))
						{
							TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_141.f_1));
							Local_141.f_17 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_PED(Local_141.f_1), -0.65f, 0.87f, -0.02f), Local_551, 2, 1, 0, 1065353216, 0, 1065353216);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_141.f_1), Local_141.f_17, "mp_am_hold_up", func_23(Local_141.f_16), 1.5f, -1.5f, 157, 16, 1148846080, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[Local_141.f_16]))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_5[Local_141.f_16]), true);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_141.f_5[Local_141.f_16]), Local_141.f_17, "mp_am_hold_up", func_22(Local_141.f_16), 4f, -4f, 8);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_141.f_17);
							Local_141.f_18 = 1;
							iLocal_554 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_17);
						}
					}
				}
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(Local_141.f_12, 9) || MISC::IS_BIT_SET(Local_141.f_15, 4))
			{
				iLocal_554 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_17);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_554))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_141.f_17);
				}
				Local_141.f_18 = 2;
				return;
			}
			if (iLocal_554 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_554) || func_17(&uLocal_787, 2000, 0))
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_554) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_554) == 1f) || func_17(&uLocal_787, 2000, 0))
					{
						if ((func_3(Local_141.f_1) && !func_336(Local_141.f_1)) && !MISC::IS_BIT_SET(Local_141.f_12, 9))
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_141.f_1));
						}
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_141.f_17);
						Local_141.f_18 = 2;
					}
				}
			}
			else
			{
				iLocal_554 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_17);
			}
			break;
		
		case 2:
			func_3(Local_141.f_5[Local_141.f_16]);
			if (func_17(&uLocal_793, 1000, 0) && func_3(Local_141.f_5[Local_141.f_16]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_OBJ(Local_141.f_5[Local_141.f_16])))
				{
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_5[Local_141.f_16]), false);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_5[Local_141.f_16]), true);
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_141.f_5[Local_141.f_16]), func_21(Local_141.f_16), 1, 0, 0, 1);
				}
				iLocal_554 = -1;
				iLocal_537 = 0;
				if (MISC::IS_BIT_SET(Local_141.f_15, 4))
				{
					MISC::CLEAR_BIT(&(Local_141.f_15), 4);
				}
				func_13(&uLocal_793);
				func_13(&uLocal_787);
				func_13(&uLocal_785);
				func_13(&uLocal_791);
				Local_141.f_18 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_21(int iParam0)//Position - 0x1397
{
	switch (iParam0)
	{
		case 3:
			return Local_568 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return Local_568 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return Local_568 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return Local_568 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return Local_568 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return Local_568 - Vector(1f, -0.2f, -0.1f);
		
		default:
	}
	return Local_568 - Vector(1f, 0f, -0.1f);
}

char* func_22(int iParam0)//Position - 0x1447
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_23(int iParam0)//Position - 0x14A1
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_24()//Position - 0x14FD
{
	if (((((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[3]) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[1])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[2])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[4])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[0])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[5]))
	{
		if (((((func_358(func_26(3)) && func_358(func_26(1))) && func_358(func_26(2))) && func_358(func_26(4))) && func_358(func_26(0))) && func_358(func_26(5)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 6, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[3]))
				{
					if (func_25(&(Local_141.f_5[3]), func_26(3), func_21(3), 1, 1, 0, 1))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_141.f_5[3]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_540));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_5[3]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_5[3]), false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[1]))
				{
					if (func_25(&(Local_141.f_5[1]), func_26(1), func_21(1), 1, 1, 0, 1))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_141.f_5[1]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_540));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_5[1]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_5[1]), false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[2]))
				{
					if (func_25(&(Local_141.f_5[2]), func_26(2), func_21(2), 1, 1, 0, 1))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_141.f_5[2]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_540));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_5[2]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_5[2]), false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[4]))
				{
					if (func_25(&(Local_141.f_5[4]), func_26(4), func_21(4), 1, 1, 0, 1))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_141.f_5[4]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_540));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_5[4]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_5[4]), false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[0]))
				{
					if (func_25(&(Local_141.f_5[0]), func_26(0), func_21(0), 1, 1, 0, 1))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_141.f_5[0]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_540));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_5[0]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_5[0]), false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[5]))
				{
					if (func_25(&(Local_141.f_5[5]), func_26(5), func_21(5), 1, 1, 0, 1))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_141.f_5[5]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_540));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_5[5]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_5[5]), false);
					}
				}
			}
		}
	}
	else
	{
		MISC::SET_BIT(&(Local_141.f_15), 5);
		return 1;
	}
	return 0;
}

int func_25(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1834
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, iParam6, bParam5, iParam7));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_OBJ(*uParam0), iParam8);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x1897
{
	switch (iParam0)
	{
		case 3:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		case 4:
			return joaat("prop_ld_fags_01");
		
		case 0:
			return joaat("prop_ecola_can");
		
		case 5:
			return joaat("prop_amb_beer_bottle");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_27()//Position - 0x18FF
{
	float fVar0;
	
	if (!MISC::IS_BIT_SET(Local_141.f_12, 9))
	{
		if (Global_2446554.f_6 == 1 || MISC::IS_BIT_SET(Local_141.f_12, 6))
		{
			if ((((func_3(Local_141.f_2) && func_3(Local_141.f_1)) && !func_336(Local_141.f_1)) && Local_141.f_36 != 8) && Local_141.f_36 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_141.f_1)))
				{
					if (!MISC::IS_BIT_SET(iLocal_535, 30))
					{
						TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_141.f_1), Local_141.f_33, 1600);
						MISC::SET_BIT(&iLocal_535, 30);
					}
					if (func_17(&uLocal_783, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_141.f_1));
						if ((fVar0 > (Local_141.f_33 - 20f) && fVar0 < (Local_141.f_33 + 20f)) || func_17(&uLocal_789, 1500, 0))
						{
							TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_141.f_1));
							Local_141.f_20 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_548, Local_551, 2, 1, 0, 1065353216, 0, 1065353216);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_141.f_1), Local_141.f_20, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1148846080, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_2))
							{
								ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_2), false);
								ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_141.f_2), 1);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_141.f_2), Local_141.f_20, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_3))
							{
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_141.f_3), Local_141.f_20, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_141.f_20);
							MISC::SET_BIT(&(Local_141.f_12), 9);
						}
					}
				}
				else
				{
					Local_141.f_36 = 8;
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(Local_141.f_12, 17))
	{
		iLocal_547 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_20);
		if (iLocal_547 >= 0)
		{
			func_3(Local_141.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_547))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				MISC::SET_BIT(&(Local_141.f_12), 17);
			}
		}
	}
	else if (!MISC::IS_BIT_SET(Local_141.f_13, 15))
	{
		iLocal_547 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_20);
		if (iLocal_547 >= 0)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_547))
			{
				func_3(Local_141.f_1);
				if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_2) && func_3(Local_141.f_2)) && func_3(Local_141.f_1))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_547) > 0.44f)
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_2), true);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_141.f_2), true, 0);
						MISC::SET_BIT(&(Local_141.f_13), 15);
					}
				}
			}
		}
	}
}

int func_28()//Position - 0x1BA6
{
	int iVar0;
	float fVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	func_39();
	if (Local_141.f_36 != 9)
	{
		if (func_336(Local_141.f_1))
		{
			Local_141.f_36 = 9;
			return 0;
		}
		if ((MISC::IS_BIT_SET(Local_141.f_12, 6) && !MISC::IS_BIT_SET(Local_141.f_12, 9)) && Local_141.f_36 < 8)
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_2) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_3))
			{
				Local_141.f_36 = 8;
			}
		}
		switch (Local_141.f_36)
		{
			case 0:
				if (!func_336(Local_141.f_1))
				{
					Local_141.f_36 = 1;
				}
				break;
			
			case 1:
				if (MISC::IS_BIT_SET(Local_141.f_12, 4))
				{
					Local_141.f_36 = 2;
				}
				else if (MISC::IS_BIT_SET(Local_141.f_12, 6) || MISC::IS_BIT_SET(Local_141.f_12, 9))
				{
					Local_141.f_36 = 4;
				}
				else if (func_37() || func_33(0))
				{
					Local_141.f_36 = 8;
				}
				else if (func_31())
				{
					Local_141.f_36 = 7;
				}
				break;
			
			case 2:
				if (MISC::IS_BIT_SET(Local_141.f_12, 6) || MISC::IS_BIT_SET(Local_141.f_12, 9))
				{
					Local_141.f_36 = 4;
				}
				else if (func_37() || func_33(1))
				{
					Local_141.f_36 = 8;
				}
				else if (func_31())
				{
					Local_141.f_36 = 7;
				}
				break;
			
			case 3:
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), 1920390111) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), 1920390111) != 1)
				{
					Local_141.f_36 = 4;
				}
				else if (func_33(1))
				{
					Local_141.f_36 = 8;
				}
				else if (func_31())
				{
					Local_141.f_36 = 7;
				}
				break;
			
			case 4:
				if (MISC::IS_BIT_SET(Local_141.f_12, 17))
				{
					iVar0 = 0;
					iLocal_547 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_20);
					if (iLocal_547 >= 0)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_547))
						{
							if (MISC::IS_BULLET_IN_AREA(Local_540, 3f, 0))
							{
								if (!MISC::IS_BIT_SET(Local_141.f_12, 25))
								{
									MISC::SET_BIT(&(Local_141.f_12), 25);
								}
								Local_141.f_24 = (Local_141.f_24 + 0.35f);
							}
							fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_547);
							if (fVar1 >= 0.8f)
							{
								Local_141.f_28 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_141.f_28 = 0f;
							}
							else if (fVar1 > Local_141.f_28)
							{
								Local_141.f_28 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_141.f_28 = 1f;
								iVar0 = 1;
							}
						}
						else
						{
							iVar0 = 1;
						}
					}
					else
					{
						iVar0 = 1;
					}
					if (iVar0 == 1)
					{
						Local_141.f_36 = 6;
					}
					else if (func_33(1))
					{
						Local_141.f_36 = 8;
					}
					else if (func_31())
					{
						Local_141.f_36 = 7;
					}
				}
				break;
			
			case 5:
				if (func_37() || func_33(1))
				{
					Local_141.f_36 = 8;
				}
				break;
			
			case 6:
				func_29();
				if (func_37() || func_33(1))
				{
					Local_141.f_36 = 8;
				}
				else if (func_31())
				{
					Local_141.f_36 = 7;
				}
				else if (MISC::IS_BIT_SET(Local_141.f_13, 3))
				{
					if (!MISC::IS_BIT_SET(Local_141.f_13, 4))
					{
						Local_141.f_36 = 7;
					}
				}
				break;
			
			case 8:
				func_29();
				break;
			
			case 7:
				break;
		}
	}
	else if (!MISC::IS_BIT_SET(Local_141.f_13, 10))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_1))
		{
			Local_141.f_34 = (Local_141.f_34 - 1);
			MISC::SET_BIT(&(Local_141.f_13), 10);
		}
	}
	return 1;
}

void func_29()//Position - 0x1F1C
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Local_141.f_13, 2))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		iVar1 = (iLocal_575 + func_30());
		if (iVar0 < iVar1)
		{
			MISC::SET_BIT(&(Local_141.f_13), 3);
		}
		MISC::SET_BIT(&(Local_141.f_13), 2);
	}
}

int func_30()//Position - 0x1F5D
{
	int iVar0;
	
	iVar0 = (Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_46 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_31()//Position - 0x1F81
{
	int iVar0;
	int iVar1;
	
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 24) || PAD::IS_CONTROL_JUST_PRESSED(0, 257))
	{
		iVar0 = func_32(PLAYER::PLAYER_PED_ID());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
			if (((((((WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) == 0 && iVar1 != joaat("GROUP_MELEE")) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != joaat("GROUP_FIREEXTINGUISHER")) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_580)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_32(int iParam0)//Position - 0x2081
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

int func_33(int iParam0)//Position - 0x2095
{
	int iVar0;
	struct<2> Var1;
	int iVar11;
	int iVar12;
	
	if (MISC::IS_BIT_SET(Local_141.f_12, 5))
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_141.f_1)))
	{
		return 1;
	}
	if (func_36() || func_35())
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) == 179)
		{
			if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 10))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var1) && ENTITY::IS_ENTITY_A_PED(Var1))
				{
					iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1);
					if (PED::IS_PED_INJURED(iVar11) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar11) == iLocal_580)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
						{
							iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
							if (iVar12 != NETWORK::NET_TO_PED(Local_141.f_1))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Local_141.f_13, 5))
		{
			if (PED::IS_COP_PED_IN_AREA_3D(Local_590 - Vector(25f, 25f, 25f), Local_590 + Vector(25f, 25f, 25f)))
			{
				MISC::SET_BIT(&(Local_141.f_13), 5);
			}
		}
	}
	return 0;
}

int func_34()//Position - 0x21C5
{
	if (iLocal_769 >= 15 && iLocal_769 <= 19)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(9, Local_590, 40f))
		{
			return 1;
		}
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_590, Local_593, uLocal_596))
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_597, Local_600, uLocal_603))
	{
		return 1;
	}
	return 0;
}

int func_35()//Position - 0x222B
{
	if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_597, Local_600, uLocal_603, joaat("weapon_grenade"), 0) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_597, Local_600, uLocal_603, joaat("weapon_molotov"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_597, Local_600, uLocal_603, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_36()//Position - 0x228C
{
	if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_590, Local_593, uLocal_596, joaat("weapon_grenade"), 0) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_590, Local_593, uLocal_596, joaat("weapon_molotov"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_590, Local_593, uLocal_596, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_37()//Position - 0x22ED
{
	if (func_38() || func_34())
	{
		return 1;
	}
	return 0;
}

int func_38()//Position - 0x230B
{
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_590, Local_593, uLocal_596, 0))
	{
		return 1;
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_597, Local_600, uLocal_603, 0))
	{
		return 1;
	}
	return 0;
}

void func_39()//Position - 0x2346
{
	if (Local_141.f_24 > 0f)
	{
		if (func_40(&(Local_141.f_25), 50, 0))
		{
			Local_141.f_24 = (Local_141.f_24 - 0.02f);
			if (Local_141.f_24 < 0f)
			{
				Local_141.f_24 = 0f;
			}
			func_13(&(Local_141.f_25));
		}
	}
}

int func_40(var uParam0, int iParam1, bool bParam2)//Position - 0x2389
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_13(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_13(uParam0);
		return 1;
	}
	return 0;
}

void func_41()//Position - 0x23F3
{
	int iVar0;
	var uVar1;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_561)))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_561));
		uVar1 = PLAYER::GET_PLAYER_PED(iVar0);
		if (!MISC::IS_BIT_SET(Local_141.f_12, 11))
		{
			if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 5))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_141.f_2))
				{
					if (func_3(Local_141.f_2))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_141.f_2), 1, 1);
						func_42(&(Local_141.f_2));
					}
				}
				else
				{
					Local_141.f_29 = { Local_214[iLocal_561 /*10*/].f_7 };
					Local_141.f_35 = 7;
					MISC::SET_BIT(&(Local_141.f_12), 11);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_141.f_12, 14))
		{
			if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 6))
			{
				MISC::SET_BIT(&(Local_141.f_12), 14);
			}
		}
		if (!MISC::IS_BIT_SET(Local_141.f_12, 15))
		{
			if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 7))
			{
				MISC::SET_BIT(&(Local_141.f_12), 15);
			}
		}
		if (!MISC::IS_BIT_SET(Local_141.f_12, 26))
		{
			if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 24))
			{
				MISC::SET_BIT(&(Local_141.f_12), 26);
			}
		}
		if (!MISC::IS_BIT_SET(Local_141.f_12, 22))
		{
			if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 22))
			{
				MISC::SET_BIT(&(Local_141.f_12), 22);
			}
		}
		if (!MISC::IS_BIT_SET(Local_141.f_12, 23))
		{
			if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 23))
			{
				MISC::SET_BIT(&(Local_141.f_12), 23);
			}
		}
		if (!MISC::IS_BIT_SET(Local_141.f_12, 30))
		{
			if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 25))
			{
				MISC::SET_BIT(&(Local_141.f_12), 30);
			}
		}
		if (!MISC::IS_BIT_SET(Local_141.f_12, 31))
		{
			if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 26))
			{
				MISC::SET_BIT(&(Local_141.f_12), 31);
			}
		}
		if (!MISC::IS_BIT_SET(Local_141.f_13, 6))
		{
			if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 29))
			{
				MISC::SET_BIT(&(Local_141.f_13), 6);
			}
		}
		if (!MISC::IS_BIT_SET(Local_141.f_13, 9))
		{
			if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 31))
			{
				MISC::SET_BIT(&(Local_141.f_13), 9);
			}
		}
		if (!MISC::IS_BIT_SET(Local_141.f_15, 3))
		{
			if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_3, 3))
			{
				MISC::SET_BIT(&(Local_141.f_15), 3);
			}
		}
		if (MISC::IS_BIT_SET(Local_141.f_14, 1))
		{
			if (!MISC::IS_BIT_SET(Local_141.f_14, 6))
			{
				if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_2, 1))
				{
					MISC::SET_BIT(&(Local_141.f_14), 6);
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_14, 7))
			{
				if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_2, 2))
				{
					MISC::SET_BIT(&(Local_141.f_14), 7);
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_14, 5))
			{
				if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_2, 0))
				{
					MISC::SET_BIT(&(Local_141.f_14), 5);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_141.f_12, 20))
		{
			if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 11))
			{
				MISC::SET_BIT(&(Local_141.f_12), 20);
			}
		}
		if (!MISC::IS_BIT_SET(Local_141.f_13, 17))
		{
			if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 13))
			{
				MISC::SET_BIT(&(Local_141.f_13), 17);
			}
		}
		if (func_360(iVar0, 1, 1))
		{
			if (!MISC::IS_BIT_SET(Local_141.f_12, 5))
			{
				if (!func_336(Local_141.f_1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_141.f_1), uVar1, 1))
					{
						MISC::SET_BIT(&(Local_141.f_12), 5);
					}
				}
			}
			if (MISC::IS_BIT_SET(Local_141.f_14, 1))
			{
				if (!MISC::IS_BIT_SET(Local_141.f_14, 8))
				{
					if (!func_336(Local_141.f_4))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_141.f_4), uVar1, 1))
						{
							MISC::SET_BIT(&(Local_141.f_14), 8);
						}
					}
				}
				if (!MISC::IS_BIT_SET(Local_141.f_14, 9))
				{
					if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_2, 3))
					{
						MISC::SET_BIT(&(Local_141.f_14), 9);
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_12, 6))
			{
				if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 1))
				{
					MISC::SET_BIT(&(Local_141.f_12), 6);
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_12, 16))
			{
				if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 8))
				{
					MISC::SET_BIT(&(Local_141.f_12), 16);
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_13, 1))
			{
				if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 27))
				{
					MISC::SET_BIT(&(Local_141.f_13), 1);
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_12, 7))
			{
				if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 0))
				{
					MISC::SET_BIT(&(Local_141.f_12), 7);
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_12, 10))
			{
				if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 4))
				{
					if (Local_141.f_36 != 5 && Local_141.f_36 != 6)
					{
						Local_141.f_36 = 5;
					}
					MISC::SET_BIT(&(Local_141.f_12), 10);
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_15, 2))
			{
				if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_3, 2))
				{
					MISC::SET_BIT(&(Local_141.f_15), 2);
					MISC::SET_BIT(&(Local_141.f_15), 4);
					iLocal_563 = iLocal_561;
				}
			}
			else if (!MISC::IS_BIT_SET(Local_214[iLocal_563 /*10*/].f_3, 2))
			{
				MISC::CLEAR_BIT(&(Local_141.f_15), 2);
				if (MISC::IS_BIT_SET(Local_141.f_15, 3))
				{
					MISC::CLEAR_BIT(&(Local_141.f_15), 3);
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_13, 8))
			{
				if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 30))
				{
					MISC::SET_BIT(&(Local_141.f_13), 8);
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_15, 0))
			{
				if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_3, 0))
				{
					MISC::SET_BIT(&(Local_141.f_15), 0);
					MISC::SET_BIT(&(Local_141.f_15), 1);
					Local_141.f_16 = Local_214[iLocal_561 /*10*/].f_4;
					iLocal_562 = iLocal_561;
				}
			}
			else if (!MISC::IS_BIT_SET(Local_214[iLocal_562 /*10*/].f_3, 0))
			{
				MISC::CLEAR_BIT(&(Local_141.f_15), 0);
			}
			if (!MISC::IS_BIT_SET(Local_141.f_13, 13))
			{
				if (MISC::IS_BIT_SET(Local_214[iLocal_561 /*10*/].f_1, 21))
				{
					MISC::SET_BIT(&(Local_141.f_13), 13);
				}
			}
		}
	}
	iLocal_561++;
	if (iLocal_561 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_561 = 0;
	}
}

void func_42(var uParam0)//Position - 0x29BE
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&uVar0);
	}
}

void func_43()//Position - 0x29F7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	MISC::SET_BIT(&(Local_141.f_12), 2);
	MISC::SET_BIT(&(Local_141.f_12), 3);
	MISC::CLEAR_BIT(&(Local_141.f_12), 13);
	MISC::CLEAR_BIT(&(Local_141.f_12), 27);
	MISC::CLEAR_BIT(&(Local_141.f_12), 28);
	MISC::CLEAR_BIT(&(Local_141.f_13), 4);
	if (!MISC::IS_BIT_SET(Local_141.f_12, 18))
	{
		if (func_336(Local_141.f_1))
		{
			if (Local_141.f_28 <= 0f)
			{
				MISC::SET_BIT(&(Local_141.f_12), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (Local_214[iVar0 /*10*/].f_5 > 0)
			{
				Local_141.f_63 = (Local_141.f_63 + Local_214[iVar0 /*10*/].f_5);
				Local_214[iVar0 /*10*/].f_5 = 0;
			}
			if (MISC::IS_BIT_SET(Local_141.f_12, 3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_587, 30f, 30f, 30f, 0, 1, 0))
				{
					MISC::CLEAR_BIT(&(Local_141.f_12), 3);
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_13, 16))
			{
				if (MISC::IS_BIT_SET(Local_214[iVar0 /*10*/].f_1, 12))
				{
					MISC::SET_BIT(&(Local_141.f_13), 16);
				}
			}
			if (func_360(iVar5, 1, 1))
			{
				if (MISC::IS_BIT_SET(Local_141.f_12, 2))
				{
					MISC::CLEAR_BIT(&(Local_141.f_12), 2);
				}
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar6) == iLocal_580)
				{
					if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_581 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_582)
					{
						iVar2 = 1;
					}
					else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_583)
					{
						MISC::SET_BIT(&(Local_141.f_12), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					MISC::SET_BIT(&(Local_141.f_12), 13);
					iVar4++;
					if (!MISC::IS_BIT_SET(Local_141.f_12, 9) && !MISC::IS_BIT_SET(Local_141.f_12, 21))
					{
						if (!MISC::IS_BIT_SET(Local_141.f_12, 4))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(iVar6, &iVar1, 1))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_141.f_23 == -1)
									{
										Local_141.f_23 = iVar0;
									}
									else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_141.f_23)))
									{
										Local_141.f_23 = -1;
									}
									MISC::SET_BIT(&(Local_141.f_12), 4);
									if (!MISC::IS_BIT_SET(Local_141.f_12, 12))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_540, 2.5f, 2.5f, 3f, 0, 1, 0))
										{
											MISC::SET_BIT(&(Local_141.f_12), 12);
										}
									}
								}
							}
						}
						if (!MISC::IS_BIT_SET(Local_141.f_13, 0))
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar5) > 0)
							{
								MISC::SET_BIT(&(Local_141.f_13), 0);
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_587, 5f, 5f, 2.5f, 0, 1, 0))
				{
					MISC::SET_BIT(&(Local_141.f_12), 28);
					iVar4++;
				}
				if (!MISC::IS_BIT_SET(Local_141.f_13, 4))
				{
					if (MISC::IS_BIT_SET(Local_214[iVar0 /*10*/].f_1, 28))
					{
						MISC::SET_BIT(&(Local_141.f_13), 4);
					}
				}
				if ((MISC::IS_BIT_SET(Local_141.f_12, 9) && !MISC::IS_BIT_SET(Local_141.f_12, 20)) && !MISC::IS_BIT_SET(Local_141.f_12, 19))
				{
					if (Local_214[iLocal_561 /*10*/].f_6 > Local_141.f_24)
					{
						Local_141.f_24 = Local_214[iVar0 /*10*/].f_6;
						func_13(&(Local_141.f_25));
						if (!MISC::IS_BIT_SET(Local_141.f_12, 24))
						{
							if (Local_141.f_24 > (0.55f + 0.2f))
							{
								MISC::SET_BIT(&(Local_141.f_12), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_141.f_32 != iVar4)
	{
		Local_141.f_32 = iVar4;
	}
}

int func_44()//Position - 0x2D7A
{
	var uVar0;
	
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_1) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_2)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_3))
	{
		if ((func_358(iLocal_539) && func_358(func_359(1))) && func_358(func_359(2)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 0, 2, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_1))
				{
					if (func_45(&(Local_141.f_1), 4, iLocal_539, Local_540 - Vector(1f, 0f, 0f), Local_141.f_33, 1, 1, 1))
					{
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_141.f_1), 0, iLocal_770[0], iLocal_776[0], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_141.f_1), 2, iLocal_770[1], iLocal_776[1], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_141.f_1), 3, iLocal_770[2], iLocal_776[2], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_141.f_1), 4, iLocal_770[3], iLocal_776[3], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_141.f_1), 8, iLocal_770[4], iLocal_776[4], 0);
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_PED(Local_141.f_1), INTERIOR::GET_INTERIOR_AT_COORDS(Local_540));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_141.f_1), 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_141.f_1), 1);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_141.f_1), 1, 0);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_141.f_1), 16);
						PED::SET_PED_CAN_EVASIVE_DIVE(NETWORK::NET_TO_PED(Local_141.f_1), 0);
						PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_141.f_1), 1024, 1);
						WEAPON::REMOVE_ALL_PED_WEAPONS(NETWORK::NET_TO_PED(Local_141.f_1), 1);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_141.f_1), SYSTEM::ROUND((200f * Global_262145.f_134)));
						if (!DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_141.f_1), "XP_Blocker"))
						{
							DECORATOR::DECOR_SET_BOOL(NETWORK::NET_TO_PED(Local_141.f_1), "XP_Blocker", 1);
						}
						func_335(&uLocal_604, 3, NETWORK::NET_TO_PED(Local_141.f_1), &(Local_141.f_38), 1, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_2))
				{
					uVar0 = OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_crate_unfixed_low_glow"), Local_564, 0, func_359(1));
					if (ENTITY::DOES_ENTITY_EXIST(uVar0))
					{
						Local_141.f_2 = NETWORK::OBJ_TO_NET(uVar0);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_2), true);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_141.f_2), false, 0);
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_141.f_2), uLocal_567);
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_141.f_2), INTERIOR::GET_INTERIOR_AT_COORDS(Local_540));
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_141.f_2), 1);
						OBJECT::_0xA08FE5E49BDC39DD(NETWORK::NET_TO_OBJ(Local_141.f_2), -0.2f, 1);
						OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_141.f_2), 1, 0);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_2), false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_3))
				{
					if (func_25(&(Local_141.f_3), func_359(2), Local_568 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1))
					{
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_141.f_3), uLocal_571);
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_141.f_3), INTERIOR::GET_INTERIOR_AT_COORDS(Local_540));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_3), true);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_45(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x3072
{
	var uVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	uVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar0, iParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_46()//Position - 0x30D1
{
	if (!MISC::IS_BIT_SET(iLocal_535, 20))
	{
		if (MISC::IS_BIT_SET(Local_141.f_12, 11) || MISC::IS_BIT_SET(Local_141.f_13, 16))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_580 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_587, 5f, 5f, 2.5f, 0, 1, 0))
			{
				func_49();
				func_47();
				func_6(iLocal_769, 1, func_7());
				MISC::SET_BIT(&iLocal_535, 20);
			}
			else
			{
				if ((MISC::IS_BIT_SET(iLocal_535, 31) && (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 1))) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_587, 20f, 20f, 20f, 0, 1, 0))
				{
					func_49();
				}
				MISC::SET_BIT(&iLocal_535, 20);
			}
		}
	}
}

void func_47()//Position - 0x31B3
{
	int iVar0;
	
	iVar0 = func_48(47);
	Global_2408820[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_48(int iParam0)//Position - 0x31E0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2408820[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2408820[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_49()//Position - 0x322D
{
	int iVar0;
	
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 1))
	{
		iVar0 = func_112(1169, -1, 0);
		if (!MISC::IS_BIT_SET(iVar0, iLocal_769))
		{
			func_111(14, 1, -1);
			MISC::SET_BIT(&iVar0, iLocal_769);
			func_110(1169, iVar0, -1, 1);
			if (func_109(14, -1) >= 20)
			{
				func_97(44, 1);
			}
			else
			{
				func_96(44, func_109(14, -1));
			}
		}
		func_95(1155, 1, -1);
		func_94(12, 1, -1, 1);
		func_88(19);
		iLocal_798 = 100;
		iLocal_798 = SYSTEM::ROUND((IntToFloat(iLocal_798) * Global_262145.f_4195));
		func_53(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_798, 1, -1, 0);
		func_50(12, 0);
	}
}

void func_50(int iParam0, int iParam1)//Position - 0x3301
{
	int iVar0;
	
	if (func_52(iParam0, iParam1))
	{
		iVar0 = func_51();
		Global_2435149[iVar0] = iParam0;
	}
}

int func_51()//Position - 0x3324
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435149[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_52(int iParam0, var uParam1)//Position - 0x3359
{
	if (Global_1315888)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315900) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_53(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x33DF
{
	return func_54(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_54(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x33FB
{
	var uVar0;
	
	uVar0 = func_55(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_55(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x341E
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_87(PLAYER::PLAYER_ID()) || func_86(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_7278 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7278;
		}
	}
	else if (Global_262145.f_4972 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_4972;
	}
	if (func_85(uParam2))
	{
	}
	if (func_84())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_82(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_81(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_78(0, &iVar1);
					break;
				
				case 3:
					func_78(1, &iVar1);
					break;
				
				case 1:
					func_74(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_95(1152, iVar1, -1);
			if (iParam1 == 0)
			{
				func_66((func_73(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_31.f_2 != -1)
				{
					func_95(1153, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_60(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_56((func_58(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_56((func_58(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_56(int iParam0)//Position - 0x35D9
{
	if (func_84())
	{
		Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_5 = iParam0;
		func_57(joaat("mpply_globalxp"), iParam0);
	}
}

void func_57(int iParam0, var uParam1)//Position - 0x3604
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_58(int iParam0)//Position - 0x3620
{
	if (iParam0 > -1)
	{
		if (func_360(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_59(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1582596[iParam0 /*324*/].f_180.f_5;
			}
		}
		else
		{
			return func_59(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_59(int iParam0)//Position - 0x3671
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_60(int iParam0)//Position - 0x368F
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_65(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_63(func_64(&Var0));
			if (iVar13 == 0)
			{
				func_62(&Global_1335490, iParam0);
				func_61(joaat("mpply_crew_local_xp_0"), Global_1335490);
			}
			else if (iVar13 == 1)
			{
				func_62(&Global_1335491, iParam0);
				func_61(joaat("mpply_crew_local_xp_1"), Global_1335491);
			}
			else if (iVar13 == 2)
			{
				func_62(&Global_1335492, iParam0);
				func_61(joaat("mpply_crew_local_xp_2"), Global_1335492);
			}
			else if (iVar13 == 3)
			{
				func_62(&Global_1335493, iParam0);
				func_61(joaat("mpply_crew_local_xp_3"), Global_1335493);
			}
			else if (iVar13 == 4)
			{
				func_62(&Global_1335494, iParam0);
				func_61(joaat("mpply_crew_local_xp_4"), Global_1335494);
			}
		}
	}
}

void func_61(int iParam0, var uParam1)//Position - 0x3763
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1335485 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1335487 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1335487 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1335488 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1335489 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1335490 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1335491 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1335492 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1335493 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1335494 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1335495 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1335496 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1335497 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1335498 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1335499 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1335500 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1335501 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_62(var uParam0, int iParam1)//Position - 0x3888
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_63(int iParam0)//Position - 0x3899
{
	if (iParam0 == Global_1335485)
	{
		return 0;
	}
	else if (iParam0 == Global_1335486)
	{
		return 1;
	}
	else if (iParam0 == Global_1335487)
	{
		return 2;
	}
	else if (iParam0 == Global_1335488)
	{
		return 3;
	}
	else if (iParam0 == Global_1335489)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_64(var uParam0)//Position - 0x38F6
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2435171;
		}
	}
	return Global_2435171;
}

struct<13> func_65(int iParam0)//Position - 0x3919
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_66(int iParam0, int iParam1, int iParam2)//Position - 0x3930
{
	if (func_84())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7253 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1335605[func_71(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1335605[func_71(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7252 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7252 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_70(PLAYER::PLAYER_ID()))
		{
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_1 = iParam0;
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_6 = func_68(iParam0, 1);
		}
		func_67(627, iParam0, -1, 1);
		func_110(628, func_68(iParam0, 1), -1, 1);
		Global_1335605[func_71(-1)] = iParam0;
		func_50(7, 0);
	}
}

void func_67(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3A50
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_71(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 775:
			Global_1335551[func_71(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1335557[func_71(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1335563[func_71(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1335569[func_71(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1335527[func_71(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1335533[func_71(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1335539[func_71(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1335545[func_71(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1335503[func_71(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335509[func_71(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335515[func_71(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335521[func_71(iParam2)] = iParam1;
			break;
		
		case 745:
			Global_1335575[func_71(iParam2)] = iParam1;
			break;
		
		case 746:
			Global_1335581[func_71(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1335587[func_71(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1335593[func_71(iParam2)] = iParam1;
			break;
		
		case 1290:
			Global_1335599[func_71(iParam2)] = iParam1;
			break;
		
		case 627:
			Global_1335605[func_71(iParam2)] = iParam1;
			break;
		
		case 1265:
			Global_1335611[func_71(iParam2)] = iParam1;
			break;
		
		case 1862:
			Global_2476002[0 /*6*/][func_71(iParam2)] = iParam1;
			break;
		
		case 2251:
			Global_2476002[1 /*6*/][func_71(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335617[func_71(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1335623[func_71(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1335629[func_71(iParam2)] = iParam1;
			break;
		
		case 1223:
			Global_1335635[func_71(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_68(int iParam0, bool bParam1)//Position - 0x3CCA
{
	if (bParam1)
	{
	}
	return func_69(iParam0, 0);
}

int func_69(int iParam0, int iParam1)//Position - 0x3CDE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_270489[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270489[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_70(int iParam0)//Position - 0x3D9D
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2422140.f_1, iParam0);
	}
	return 1;
}

int func_71(int iParam0)//Position - 0x3DC2
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_72();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

int func_72()//Position - 0x3DF6
{
	return Global_1312737;
}

int func_73(int iParam0)//Position - 0x3E02
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1335605[func_71(-1)];
			}
			else if (func_70(iParam0))
			{
				return Global_1582596[iParam0 /*324*/].f_180.f_1;
			}
		}
	}
	else
	{
		return Global_1335605[func_71(-1)];
	}
	return 0;
}

void func_74(int iParam0)//Position - 0x3E5F
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_77(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_76(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_75(*iParam0, 100) * (10f * Global_262145.f_4187)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_75(*iParam0, 100) * (20f * Global_262145.f_4180)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_75(int iParam0, int iParam1)//Position - 0x3F49
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_76(int iParam0, int iParam1)//Position - 0x3F6A
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2445582 = { func_65(iParam0) };
		Global_2445595 = { func_65(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2445582))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2445595))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2445512, 35, &Global_2445582);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2445547, 35, &Global_2445595);
				if (Global_2445512 == Global_2445547)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1)//Position - 0x3FD7
{
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_78(bool bParam0, int iParam1)//Position - 0x4191
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_360(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_76(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_360(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_79(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_76(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_75(*iParam1, 100) * (10f * Global_262145.f_4187)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_75(*iParam1, 100) * (20f * Global_262145.f_4180)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_79(int iParam0, int iParam1)//Position - 0x42A9
{
	return SYSTEM::VDIST(func_80(iParam0), func_80(iParam1));
	return 0f;
}

Vector3 func_80(int iParam0)//Position - 0x42C5
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_81(int iParam0)//Position - 0x42D8
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_75(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_82(int iParam0)//Position - 0x430F
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_73(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_73(PLAYER::PLAYER_ID());
		}
	}
	if (func_83(8000, 0, 0) > 0)
	{
		if (func_83(8000, 0, 0) < (iParam0 + func_73(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_83(8000, 0, 0) - func_73(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_83(int iParam0, bool bParam1, int iParam2)//Position - 0x4373
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_270489[iParam0];
}

int func_84()//Position - 0x439B
{
	return 1;
}

int func_85(var uParam0)//Position - 0x43A4
{
	if (MISC::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_86(int iParam0)//Position - 0x43DE
{
	return Global_2414009[iParam0 /*254*/].f_114 == 2;
}

bool func_87(int iParam0)//Position - 0x43F2
{
	return Global_2414009[iParam0 /*254*/].f_114 == 7;
}

void func_88(int iParam0)//Position - 0x4406
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6828)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_93() /*8053*/].f_5756.f_1795[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_93() /*8053*/].f_5756.f_1795[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_93() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1)
			{
				Global_2097152[func_93() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1 = 1;
				MISC::SET_BIT(&Global_2445620, (8 + iVar2));
				func_91(2094, -1);
				func_89(67, -1);
				STATS::PLAYSTATS_ACTIVITY_DONE(1000, iVar1);
				if (iVar3 < 2)
				{
					func_50(15, 0);
				}
			}
		}
	}
}

void func_89(int iParam0, int iParam1)//Position - 0x44E8
{
	int iVar0;
	
	iVar0 = func_109(iParam0, func_71(iParam1));
	iVar0++;
	func_90(iParam0, iVar0, iParam1);
}

void func_90(int iParam0, int iParam1, var uParam2)//Position - 0x450E
{
	int iVar0;
	
	iVar0 = Global_2475233[iParam0 /*6*/][func_71(uParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

void func_91(int iParam0, int iParam1)//Position - 0x4532
{
	int iVar0;
	
	iVar0 = func_112(iParam0, func_71(iParam1), 0);
	iVar0++;
	if (!func_92(iParam0))
	{
		func_110(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_67(iParam0, iVar0, iParam1, 1);
	}
}

int func_92(int iParam0)//Position - 0x4572
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 775:
			case 776:
			case 777:
			case 778:
			case 765:
			case 766:
			case 767:
			case 768:
			case 755:
			case 756:
			case 757:
			case 758:
			case 745:
			case 746:
			case 747:
			case 748:
			case 1290:
			case 627:
			case 1265:
			case 752:
			case 753:
			case 754:
			case 1223:
			case 1862:
			case 2251:
				return 1;
				break;
			}
	}
	return 0;
}

int func_93()//Position - 0x4626
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4633
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_72();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_95(int iParam0, int iParam1, int iParam2)//Position - 0x4890
{
	int iVar0;
	
	iVar0 = func_112(iParam0, func_71(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_92(iParam0))
	{
		func_110(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_67(iParam0, iVar0, iParam2, 1);
	}
}

int func_96(int iParam0, int iParam1)//Position - 0x48D1
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

int func_97(int iParam0, int iParam1)//Position - 0x4922
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_98(iParam0, iParam1);
}

int func_98(int iParam0, int iParam1)//Position - 0x493D
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_108(&Global_2544859))
	{
		if (func_106(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_99(&Global_2544859, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_99(var uParam0, int iParam1)//Position - 0x49C1
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_106(uParam0, iParam1))
	{
		return 0;
	}
	func_102(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_100(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_100(var uParam0, int iParam1)//Position - 0x4A47
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_106(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_101(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_101(var uParam0, int iParam1)//Position - 0x4A97
{
	return (*uParam0)[iParam1] == 61;
}

void func_102(var uParam0)//Position - 0x4AA8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_105(uParam0, iVar0);
		iVar0++;
	}
	func_103(&(uParam0->f_62), (8f - 0.5f));
}

void func_103(var uParam0, float fParam1)//Position - 0x4ADF
{
	uParam0->f_1 = (func_104(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_104(bool bParam0)//Position - 0x4B0D
{
	int iVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(iVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_105(var uParam0, int iParam1)//Position - 0x4B55
{
	(*uParam0)[iParam1] = 61;
}

bool func_106(var uParam0, int iParam1)//Position - 0x4B65
{
	return func_107(uParam0, iParam1) != -1;
}

int func_107(var uParam0, int iParam1)//Position - 0x4B77
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_108(var uParam0)//Position - 0x4BA4
{
	return uParam0->f_68 == 1;
}

int func_109(int iParam0, int iParam1)//Position - 0x4BB2
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2475233[iParam0 /*6*/][func_71(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_110(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4BDE
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_71(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_111(int iParam0, int iParam1, int iParam2)//Position - 0x4C09
{
	int iVar0;
	
	iVar0 = func_109(iParam0, func_71(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_90(iParam0, iVar0, iParam2);
}

int func_112(int iParam0, int iParam1, int iParam2)//Position - 0x4C30
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_71(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_113(var uParam0)//Position - 0x4C62
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_114(var uParam0)//Position - 0x4C8B
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_18(uParam0, 0, 0);
		}
	}
}

void func_115()//Position - 0x4CAA
{
	bool bVar0;
	int iVar1;
	
	func_201();
	func_173();
	func_151();
	func_46();
	func_149();
	func_148();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_580)
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_581 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_582)
			{
				bVar0 = true;
			}
			else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_583)
			{
				iVar1 = 1;
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_535, 31))
	{
		if ((bVar0 || iVar1) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_587, (5f / 2f), (5f / 2f), (5f / 2f), 0, 1, 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			MISC::SET_BIT(&iLocal_535, 31);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_535, 26) && bVar0)
	{
		if (func_146("SNK_MNU", Local_90))
		{
			MISC::SET_BIT(&iLocal_535, 26);
		}
	}
	if (!bVar0 && MISC::IS_BIT_SET(iLocal_535, 26))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || (CAM::DOES_CAM_EXIST(Local_90.f_1) && CAM::IS_CAM_ACTIVE(Local_90.f_1)))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			if (iLocal_800 > 0)
			{
				Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5 = iLocal_800;
				iLocal_800 = 0;
			}
			func_351();
			if (CAM::DOES_CAM_EXIST(Local_90.f_1))
			{
				CAM::DESTROY_CAM(Local_90.f_1, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		}
		func_143(1, Local_90);
		MISC::CLEAR_BIT(&iLocal_535, 26);
	}
	if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 21))
	{
		if (iVar1 || func_141(PLAYER::PLAYER_PED_ID(), iLocal_769))
		{
			MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_138();
		func_132();
		func_127();
		func_125(1);
		func_120();
		PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
		PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		if (MISC::IS_BIT_SET(Global_2446554.f_5, 0))
		{
			PLAYER::_0xB45EFF719D8427A6(Local_141.f_71);
			func_118(Local_587, func_119(30), 0);
			MISC::CLEAR_BIT(&(Global_2446554.f_5), 0);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_587, 5f, 5f, 2.5f, 0, 1, 0))
		{
			func_125(0);
		}
		if (!MISC::IS_BIT_SET(Global_2446554.f_5, 0))
		{
			PLAYER::_0x0032A6DBA562C518();
			func_116(Local_587, func_119(30), "");
			MISC::SET_BIT(&(Global_2446554.f_5), 0);
		}
	}
	if ((MISC::IS_BIT_SET(Local_141.f_12, 22) || MISC::IS_BIT_SET(Local_141.f_12, 23)) || MISC::IS_BIT_SET(Local_141.f_12, 7))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
}

int func_116(struct<3> Param0, char* sParam3, char* sParam4)//Position - 0x4F67
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_2446554.f_3802[iVar0 /*26*/].f_4), sParam3))
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2446554.f_3802[iVar0 /*26*/].f_4)))
				{
					Global_2446554.f_3802[iVar0 /*26*/] = 1;
					Global_2446554.f_3802[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2446554.f_3802[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2446554.f_3802[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_117(Global_2446554.f_3802[iVar0 /*26*/].f_1, Param0))
			{
				Global_2446554.f_3802[iVar0 /*26*/] = 1;
				Global_2446554.f_3802[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2446554.f_3802[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2446554.f_3802[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_117(struct<3> Param0, struct<3> Param3)//Position - 0x5067
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_118(struct<3> Param0, char* sParam3, int iParam4)//Position - 0x5090
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2446554.f_3802[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_117(Global_2446554.f_3802[iVar0 /*26*/].f_1, Param0))
				{
					Global_2446554.f_3802[iVar0 /*26*/] = 0;
					Global_2446554.f_3802[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2446554.f_3802[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2446554.f_3802[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_119(int iParam0)//Position - 0x5131
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_120()//Position - 0x5144
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	MISC::CLEAR_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 28);
	if (!func_336(Local_141.f_1) && func_360(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
		{
			if (((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball"))
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_141.f_1), 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_141.f_1), 5f, 5f, 2f, 0, 1, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_141.f_1))) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_141.f_1)))
				{
					if (!func_124())
					{
						if (func_122(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_141.f_1)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
						{
							if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 1))
							{
								func_121(func_8(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
								MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 1);
							}
							if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 8))
							{
								MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 8);
							}
						}
						MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 28);
					}
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_535, 28))
	{
		if (MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 28))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1))
			{
				if (iVar1 != 0 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = WEAPON::GET_WEAPONTYPE_GROUP(iVar1);
					if (iVar2 == joaat("GROUP_PISTOL"))
					{
						sLocal_538 = "hold_up_head_additive_pistol";
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_538, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else if ((((iVar2 == joaat("GROUP_MG") || iVar2 == joaat("GROUP_RIFLE")) || iVar2 == joaat("GROUP_SHOTGUN")) || iVar2 == joaat("GROUP_SNIPER")) || iVar2 == joaat("GROUP_SMG"))
					{
						sLocal_538 = "hold_up_head_additive_rifle";
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_538, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else
					{
						sLocal_538 = "";
					}
					MISC::SET_BIT(&iLocal_535, 28);
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 28) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_538))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_538, 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_538, -1056964608);
			}
		}
		MISC::CLEAR_BIT(&iLocal_535, 28);
	}
	if (MISC::IS_BIT_SET(Local_141.f_14, 1))
	{
		if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2, 3))
		{
			if (!func_336(Local_141.f_4) && func_360(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, 1))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !func_124())
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_141.f_4)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_141.f_4)))
						{
							if (func_122(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_141.f_4)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
							{
								MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_121(int iParam0)//Position - 0x54E4
{
	struct<2> Var0;
	
	Var0 = 24;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_122(int iParam0, int iParam1)//Position - 0x550D
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (func_360(iParam0, 1, 1))
	{
		Var0 = { func_80(iParam0) };
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	Var9 = { Var3 - Var0 };
	if (!PED::IS_PED_INJURED(iParam1))
	{
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 7f, 0f) };
		Var12 = { Var6 - Var3 };
	}
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	fVar15 = func_123(Var9, Var12);
	if (fVar15 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_123(struct<3> Param0, struct<3> Param3)//Position - 0x5598
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_124()//Position - 0x55B9
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0)//Position - 0x55D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!MISC::IS_BIT_SET(iLocal_535, 6))
	{
		if (iParam0 == 1)
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1))
			{
				if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_540, 2.5f, 2.5f, 3f, 0, 1, 0))
					{
						iVar1 = 1;
					}
					iVar0 = 1;
				}
			}
			if ((((iVar1 == 1 || MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 5)) || (iVar0 == 1 && Local_141.f_36 >= 3)) || (iVar0 == 1 && MISC::IS_BIT_SET(Local_141.f_13, 16))) || MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 12))
			{
				if (((!MISC::IS_BIT_SET(Local_141.f_12, 12) || Local_141.f_36 >= 3) || MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 12)) || (iVar0 == 1 && MISC::IS_BIT_SET(Local_141.f_13, 16)))
				{
					Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_46++;
					func_13(&(Global_2422140.f_3034));
					func_18(&(Global_2422140.f_3034), 0, 0);
					if (Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_46 <= 2)
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
					}
					else if (Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_46 >= 5)
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
					}
					if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 1))
					{
						MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 2);
					}
					MISC::SET_BIT(&iLocal_535, 6);
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 25);
				}
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_535, 27) && !MISC::IS_BIT_SET(iLocal_535, 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				if (func_17(&uLocal_578, 2000, 0) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
					MISC::SET_BIT(&iLocal_535, 27);
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 27);
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 25);
					if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 1))
					{
						MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 2);
					}
				}
			}
			else if (func_126(&uLocal_578))
			{
				func_13(&uLocal_578);
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_535, 24))
	{
		if (MISC::IS_BIT_SET(iLocal_535, 31))
		{
			if (func_336(Local_141.f_1))
			{
				PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 13, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
				MISC::SET_BIT(&iLocal_535, 24);
				if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 1))
				{
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 2);
				}
			}
		}
	}
}

bool func_126(var uParam0)//Position - 0x58D4
{
	return uParam0->f_1;
}

void func_127()//Position - 0x58E0
{
	int iVar0;
	int iVar1;
	
	if (func_360(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!MISC::IS_BIT_SET(iLocal_535, 23) && MISC::IS_BIT_SET(Local_141.f_12, 17))
		{
			if (!func_336(Local_141.f_1))
			{
				iLocal_547 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_20);
				if (iLocal_547 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_547))
					{
						if ((!MISC::IS_BIT_SET(Global_1675329, 15) && func_131()) && func_130())
						{
							MISC::SET_BIT(&Global_1675329, 15);
						}
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							iVar0 = func_112(1178, -1, 0);
							if (!MISC::IS_BIT_SET(iVar0, 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_547) < 0.4f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_580)
								{
									func_129("FHU_HELP3", -1);
									MISC::SET_BIT(&iVar0, 3);
									func_110(1178, iVar0, -1, 1);
								}
							}
							else if (!MISC::IS_BIT_SET(iVar0, 5) || !MISC::IS_BIT_SET(iVar0, 6))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_547) < 0.7f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_580)
								{
									func_129("FHU_HELP4", -1);
									MISC::SET_BIT(&iVar0, 5);
									func_110(1178, iVar0, -1, 1);
									MISC::SET_BIT(&iLocal_535, 23);
								}
							}
							else
							{
								MISC::SET_BIT(&iLocal_535, 23);
							}
						}
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_536, 1))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (((((func_336(Local_141.f_1) || Local_141.f_36 > 7) && !MISC::IS_BIT_SET(Local_141.f_12, 20)) && !MISC::IS_BIT_SET(Local_141.f_12, 11)) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 5)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_548, 1.5f) == 0)
				{
					iVar1 = func_112(1178, -1, 0);
					if (!MISC::IS_BIT_SET(iVar1, 20) || !MISC::IS_BIT_SET(iVar1, 21))
					{
						func_129("FHU_HELPM", -1);
						if (!MISC::IS_BIT_SET(iVar1, 20))
						{
							MISC::SET_BIT(&iVar1, 20);
						}
						else
						{
							MISC::SET_BIT(&iVar1, 21);
						}
						func_110(1178, iVar1, -1, 1);
						MISC::SET_BIT(&iLocal_536, 1);
					}
					else
					{
						MISC::SET_BIT(&iLocal_536, 1);
					}
				}
			}
		}
		else if (func_128("FHU_HELPM"))
		{
			if ((MISC::IS_BIT_SET(Local_141.f_12, 20) || MISC::IS_BIT_SET(Local_141.f_12, 11)) || MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 5))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
}

bool func_128(char* sParam0)//Position - 0x5B50
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_129(char* sParam0, int iParam1)//Position - 0x5B63
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_130()//Position - 0x5B7A
{
	return MISC::IS_BIT_SET(Global_2446554.f_1619, 21);
}

bool func_131()//Position - 0x5B8F
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 3);
}

void func_132()//Position - 0x5BA9
{
	float fVar0;
	float fVar1;
	
	if (Local_141.f_36 == 4)
	{
		if (func_360(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!func_336(Local_141.f_1))
			{
				iLocal_547 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_20);
				if (iLocal_547 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_547))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_547);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_133(SYSTEM::ROUND(fVar0), 890, "HUP_PROG", func_137(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())), 0, 1);
						}
						fVar1 = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_133(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5)//Position - 0x5C5B
{
	func_134(iParam0, iParam1, sParam2, uParam3, iParam4, 2, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0);
}

void func_134(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x5C7C
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_136(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_135(0, iVar0);
		Global_1328872.f_769[iVar0] = uParam0;
		Global_1328872.f_769.f_9[iVar0] = uParam1;
		StringCopy(&(Global_1328872.f_769.f_18[iVar0 /*16*/]), sParam2, 64);
		Global_1328872.f_769.f_156[iVar0] = uParam3;
		Global_1328872.f_769.f_147[iVar0] = uParam4;
		Global_1328872.f_769.f_174[iVar0] = iParam5;
		Global_1328872.f_769.f_183[iVar0 /*3*/] = fParam6;
		Global_1328872.f_769.f_183[iVar0 /*3*/].f_1 = fParam7;
		Global_1328872.f_769.f_208[iVar0] = iParam8;
		Global_1328872.f_769.f_217[iVar0] = uParam9;
		Global_1328872.f_769.f_252[iVar0] = iParam10;
		Global_1328872.f_769.f_261[iVar0] = iParam11;
		Global_1328872.f_769.f_270[iVar0] = iParam12;
		Global_1328872.f_769.f_279[iVar0] = iParam13;
		Global_1328872.f_764 = 1;
		Global_1328872.f_769.f_288[iVar0] = iParam14;
	}
}

void func_135(int iParam0, int iParam1)//Position - 0x5DB1
{
	MISC::SET_BIT(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_136(int iParam0, int iParam1)//Position - 0x5DCA
{
	return MISC::IS_BIT_SET(Global_1328872.f_3613[iParam0], iParam1);
}

int func_137(int iParam0)//Position - 0x5DE3
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_138()//Position - 0x5DF3
{
	if (!MISC::IS_BIT_SET(iLocal_536, 2))
	{
		STREAMING::REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
		STREAMING::REQUEST_ANIM_DICT(func_139());
		if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till") && STREAMING::HAS_ANIM_DICT_LOADED(func_139()))
		{
			MISC::SET_BIT(&iLocal_536, 2);
		}
	}
}

char* func_139()//Position - 0x5E37
{
	if (func_140(PLAYER::PLAYER_ID()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_140(int iParam0)//Position - 0x5E55
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2414009[iParam0 /*254*/].f_226;
}

int func_141(int iParam0, int iParam1)//Position - 0x5E76
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar6 = 0f;
	func_142(iParam1, &Var0, &Var3, &fVar6);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Var0, Var3, fVar6, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_142(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x5EB6
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390.033f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.412f, 3607.156f, 36.38288f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041.675f, 583.5931f, 6.908931f };
		*uParam2 = { -3037.284f, 585.0375f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245.184f, 1000.124f, 11.83071f };
		*uParam2 = { -3240.504f, 999.7783f, 14.46645f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549.5332f, 2668.464f, 41.15651f };
		*uParam2 = { 548.9114f, 2673.108f, 43.7766f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554.316f, 380.8569f, 107.623f };
		*uParam2 = { 2558.98f, 380.6908f, 110.2684f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675.476f, 3280.807f, 54.24115f };
		*uParam2 = { 2679.577f, 3278.526f, 56.8955f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729.145f, 6417.834f, 34.03724f };
		*uParam2 = { 1727.07f, 6413.635f, 36.66442f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958.61f, 3742.512f, 31.34376f };
		*uParam2 = { 1960.958f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24.51093f, -1344.449f, 28.49703f };
		*uParam2 = { 24.52224f, -1349.084f, 31.14272f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373.296f, 329.2379f, 102.5664f };
		*uParam2 = { 372.1347f, 324.6985f, 105.214f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168.183f, 2711.203f, 37.06316f };
		*uParam2 = { 1163.144f, 2711.246f, 40.16688f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966.142f, 388.6418f, 14.04331f };
		*uParam2 = { -2965.812f, 393.6473f, 17.17248f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223.599f, -909.8984f, 11.32635f };
		*uParam2 = { -1219.443f, -907.0756f, 14.45929f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.524f, -980.3087f, 45.41582f };
		*uParam2 = { 1134.22f, -985.284f, 48.53235f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.413f, -379.3236f, 39.16341f };
		*uParam2 = { -1487.954f, -375.7666f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699.447f, 4921.57f, 41.06366f };
		*uParam2 = { 1695.64f, 4924.245f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.7026f, -916.374f, 21.33545f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.26995f, -1756.669f, 28.42101f };
		*uParam2 = { -48.26036f, -1760.285f, 31.56342f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164.697f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.0899f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821.205f, 795.8699f, 137.0893f };
		*uParam2 = { -1818.041f, 792.3982f, 140.1836f };
		*fParam3 = 2.25f;
	}
}

void func_143(bool bParam0, int iParam1)//Position - 0x6313
{
	int iVar0;
	
	if (!func_145(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17236.f_7207)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_17236.f_7207 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_17236.f_4886[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_17236.f_4886[iVar0] = 0;
	}
	if (Global_17236.f_4879[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_17236.f_4879[iVar0] = 0;
	}
	if (bParam0)
	{
		func_144(&(Global_17236.f_4918[iVar0 /*10*/]));
		Global_17236.f_4979[iVar0] = 0;
	}
	else
	{
		Global_17236.f_4979[iVar0] = 0;
	}
}

void func_144(var uParam0)//Position - 0x63B1
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_145(var uParam0, bool bParam1, int iParam2)//Position - 0x63DA
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17236.f_4979[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17236.f_4979[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17236.f_4979[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

bool func_146(char* sParam0, int iParam1)//Position - 0x6477
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_145(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17236.f_4893[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17236.f_4893[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_17236.f_4893[iVar0 /*4*/]), 9);
		Global_17236.f_4886[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_17236.f_4893[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_17236.f_4879[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17236.f_4918[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_147(&(Global_17236.f_4918[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_147(var uParam0)//Position - 0x6545
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_148()//Position - 0x65E7
{
	if (!MISC::IS_BIT_SET(iLocal_535, 24))
	{
		if (Local_141.f_72 == PLAYER::PLAYER_ID() || (MISC::IS_BIT_SET(iLocal_535, 31) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_590, 20f, 20f, 20f, 0, 1, 0)))
		{
			if (func_336(Local_141.f_1))
			{
				PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 13, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
				MISC::SET_BIT(&iLocal_535, 24);
				if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 1))
				{
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 2);
				}
			}
		}
	}
}

int func_149()//Position - 0x6680
{
	if (!MISC::IS_BIT_SET(Local_141.f_14, 0))
	{
		return 0;
	}
	if (func_336(Local_141.f_4))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_797))
		{
			HUD::REMOVE_BLIP(&uLocal_797);
		}
		return 0;
	}
	if (Local_141.f_58 == 4)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_797))
		{
			uLocal_797 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_141.f_4));
			HUD::SET_BLIP_COLOUR(uLocal_797, 1);
			HUD::SET_BLIP_SCALE(uLocal_797, 0.7f);
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_141.f_4))
	{
		return 0;
	}
	switch (Local_141.f_58)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_4), 713668775) != 0)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_4), 713668775) != 1)
				{
					if (func_360(PLAYER::PLAYER_ID(), 1, 1))
					{
						TASK::TASK_GO_TO_ENTITY(NETWORK::NET_TO_PED(Local_141.f_4), PLAYER::PLAYER_PED_ID(), -1, 4f, 2f, 1073741824, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!MISC::IS_BIT_SET(Local_141.f_14, 5) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_4), 1227113341) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_4), 1227113341) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_141.f_4), PLAYER::PLAYER_PED_ID(), 10000);
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2), 0);
				}
			}
			if ((!MISC::IS_BIT_SET(Local_141.f_14, 6) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2, 1)) && !func_150())
			{
				func_335(&uLocal_604, 4, NETWORK::NET_TO_PED(Local_141.f_4), "StoreHero", 1, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(NETWORK::NET_TO_PED(Local_141.f_4), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2), 1);
			}
			break;
		
		case 4:
			if ((!MISC::IS_BIT_SET(Local_141.f_14, 7) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2, 2)) && !func_150())
			{
				func_335(&uLocal_604, 4, NETWORK::NET_TO_PED(Local_141.f_4), "StoreHero", 1, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(NETWORK::NET_TO_PED(Local_141.f_4), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2), 2);
			}
			if (MISC::IS_BIT_SET(Local_141.f_14, 7) || MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2, 2))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_4), -1442466670) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_4), -1442466670) != 1)
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_141.f_4));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_141.f_4), Global_1574058);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_141.f_4), 20f, 0);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_141.f_4), 1);
				}
			}
			break;
		
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_4), 242628503) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_4), 242628503) != 1)
			{
				TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_141.f_4));
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_141.f_4), uLocal_556);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_141.f_4), 1);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_4), -875674219) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_4), -875674219) != 0)
			{
				if (func_17(&uLocal_576, 5000, 0))
				{
					func_13(&uLocal_576);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_141.f_4), PLAYER::PLAYER_PED_ID(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_150()//Position - 0x6A04
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_151()//Position - 0x6A26
{
	if (Local_141.f_36 == 4)
	{
		if ((!MISC::IS_BIT_SET(Local_141.f_12, 10) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 4)) && MISC::IS_BIT_SET(Local_141.f_12, 17))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_141.f_2) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_141.f_2) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (!func_336(Local_141.f_1))
					{
						if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_141.f_1)))
						{
							ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_141.f_2), true, 0);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_141.f_2), 1);
							ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_141.f_2), 0f, 0f, -1f);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_141.f_1), 16);
							MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 4);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_141.f_2), true, 0);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_141.f_2), 1);
						ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_141.f_2), 0f, 0f, -1f);
						MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 4);
					}
				}
			}
		}
	}
	func_152();
}

void func_152()//Position - 0x6B38
{
	int iVar0;
	var uVar1;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_141.f_2)))
		{
			if ((!MISC::IS_BIT_SET(Local_141.f_12, 11) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 5)) && Local_141.f_28 > 0f)
			{
				if (((func_172() || func_171(0.87f)) || Local_141.f_36 >= 5) || MISC::IS_BIT_SET(Local_141.f_12, 10))
				{
					if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 11))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_141.f_2))
						{
							OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_141.f_2), 0, 0);
							MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 13);
						}
						OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(func_359(1), 1);
						MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 11);
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_141.f_2), PLAYER::PLAYER_PED_ID()))
					{
						Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7, &(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7.f_2));
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_141.f_2))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_141.f_2), 1, 1);
							func_42(&(Local_141.f_2));
						}
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iLocal_573, iLocal_574);
						if (MISC::IS_BIT_SET(Local_141.f_12, 10))
						{
							iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Local_141.f_28));
						}
						if (Local_141.f_63 > 1000)
						{
							Local_141.f_63 = 1000;
						}
						iVar0 = (iVar0 + Local_141.f_63);
						iVar0 = func_170(iVar0, 1);
						if (iVar0 > Global_262145.f_144)
						{
							iVar0 = Global_262145.f_144;
						}
						if (func_357())
						{
							func_169(1734805203, iVar0, &uVar1, 0, 0);
						}
						else
						{
							func_165(iVar0, 1, 1, 1092616192);
							MONEY::NETWORK_EARN_FROM_HOLDUPS(iVar0);
						}
						iLocal_799 = (iLocal_799 + iVar0);
						func_164(3);
						if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 5))
						{
							func_163(Local_141.f_29, iVar0);
						}
						else
						{
							func_154(PLAYER::PLAYER_PED_ID(), iVar0);
						}
						func_153(1, iVar0);
						MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 5);
					}
				}
			}
		}
	}
}

void func_153(int iParam0, int iParam1)//Position - 0x6D54
{
	if (iParam1 > 0)
	{
		Global_2446554.f_267 = iParam0;
		if (iParam1 > Global_262145.f_4922)
		{
			iParam1 = Global_262145.f_4922;
		}
		Global_2446554.f_268 = iParam1;
		Global_2446554.f_269 = 0;
	}
}

void func_154(int iParam0, int iParam1)//Position - 0x6D91
{
	struct<3> Var0;
	
	Var0 = { func_161(PLAYER::PLAYER_PED_ID(), 1) };
	if (iParam0 == func_160(PLAYER::PLAYER_PED_ID()))
	{
		func_159(1);
	}
	func_155(Var0, iParam1, 7, 0);
}

void func_155(struct<3> Param0, int iParam3, int iParam4, char* sParam5)//Position - 0x6DC4
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2422140.f_726[iVar0 /*29*/].f_6 == 0 || Global_2422140.f_726[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2422140.f_726[iVar1 /*29*/] = { Param0 };
			Global_2422140.f_726[iVar1 /*29*/].f_6 = 1;
			Global_2422140.f_726[iVar1 /*29*/].f_4 = func_158(Global_2422140.f_726[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422140.f_726[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2422140.f_726[iVar1 /*29*/].f_3 = iParam3;
			Global_2422140.f_726[iVar1 /*29*/].f_8 = iParam4;
			Global_2422140.f_726[iVar1 /*29*/].f_9 = func_157();
			Global_2422140.f_726[iVar1 /*29*/].f_10 = func_156();
			StringCopy(&(Global_2422140.f_726[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_156()//Position - 0x6EC4
{
	if (Global_2422140.f_1307)
	{
		Global_2422140.f_1307 = 0;
		return 1;
	}
	Global_2422140.f_1307 = 0;
	return 0;
}

var func_157()//Position - 0x6EEE
{
	var uVar0;
	
	uVar0 = Global_2422140.f_1309;
	Global_2422140.f_1309 = 1;
	return uVar0;
}

float func_158(struct<3> Param0, var uParam3, var uParam4)//Position - 0x6F09
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

void func_159(int iParam0)//Position - 0x6FA2
{
	Global_2422140.f_1307 = iParam0;
}

int func_160(int iParam0)//Position - 0x6FB3
{
	return iParam0;
}

Vector3 func_161(int iParam0, bool bParam1)//Position - 0x6FBD
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_162(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fVar3 = ENTITY::GET_ENTITY_HEADING(iParam0);
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_162(var uParam0)//Position - 0x705A
{
	return uParam0;
}

void func_163(struct<3> Param0, int iParam3)//Position - 0x7064
{
	func_155(Param0, iParam3, 6, 0);
}

void func_164(int iParam0)//Position - 0x7078
{
	Global_2422140.f_1309 = iParam0;
}

void func_165(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x7089
{
	func_166(iParam0, iParam1, iParam2, fParam3);
}

void func_166(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x709D
{
	func_167(iParam0, iParam1, iParam2, fParam3);
}

void func_167(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x70B1
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_4 = iVar1;
	Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_3 = (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_168(iVar1, 0);
	}
}

void func_168(int iParam0, bool bParam1)//Position - 0x7134
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_169(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0x7145
{
	int iVar0;
	
	if (!func_357())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
			if (iParam1 > 0)
			{
				func_354(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
			func_354(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_170(int iParam0, int iParam1)//Position - 0x73DD
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_171(float fParam0)//Position - 0x741E
{
	iLocal_547 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_20);
	if (iLocal_547 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_547))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_547) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_172()//Position - 0x7454
{
	iLocal_547 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_20);
	if (iLocal_547 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_547))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_547) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_173()//Position - 0x7489
{
	func_174();
}

int func_174()//Position - 0x7496
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_141.f_1))
	{
		return 0;
	}
	if (func_336(Local_141.f_1))
	{
		if (!MISC::IS_BIT_SET(iLocal_536, 3))
		{
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_141.f_1));
			MISC::SET_BIT(&iLocal_536, 3);
		}
		return 0;
	}
	switch (Local_141.f_36)
	{
		case 0:
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_141.f_1), 71, 1);
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Local_141.f_12, 4) && !MISC::IS_BIT_SET(Local_141.f_12, 12))
			{
				if (MISC::IS_BIT_SET(Local_141.f_12, 13))
				{
					if (!MISC::IS_BIT_SET(iLocal_535, 17))
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_141.f_1), 16);
						TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_141.f_1), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							func_181(10);
						}
						else if (MISC::IS_BIT_SET(Local_141.f_13, 0))
						{
							if (!MISC::IS_BIT_SET(Local_141.f_13, 11))
							{
								if (!MISC::IS_BIT_SET(Local_141.f_13, 12))
								{
									func_181(13);
								}
								else
								{
									func_181(20);
								}
							}
							else
							{
								func_181(17);
							}
							MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 25);
						}
						else if (!MISC::IS_BIT_SET(Local_141.f_13, 11))
						{
							if (!MISC::IS_BIT_SET(Local_141.f_13, 12))
							{
								func_181(0);
							}
							else
							{
								func_181(18);
							}
						}
						else
						{
							func_181(15);
						}
						MISC::SET_BIT(&iLocal_535, 17);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), -875674219) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), -875674219) != 0)
					{
						if (func_17(&uLocal_576, 5000, 0))
						{
							func_13(&uLocal_576);
							if (!iLocal_537)
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_141.f_1), PLAYER::PLAYER_PED_ID(), 10000);
							}
							TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_141.f_1), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
				}
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_141.f_1), 71, 1);
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Local_141.f_12, 7) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 0))
			{
				uVar1 = PLAYER::PLAYER_PED_ID();
				if (Local_141.f_23 > -1)
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_141.f_23)))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_141.f_23));
						uVar1 = PLAYER::GET_PLAYER_PED(iVar0);
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_141.f_1), uVar1, -1, 0, 2);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_141.f_1), 16);
					TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_141.f_1), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0, 0, 0, 0);
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 0);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), -875674219) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), -875674219) != 0)
			{
				if (func_17(&uLocal_576, 5000, 0))
				{
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_141.f_23 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_141.f_23)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_141.f_23));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					func_13(&uLocal_576);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_141.f_1), iVar1, 10000);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_141.f_1), iVar1, -1, 0, 2);
				}
			}
			if (MISC::IS_BIT_SET(Local_141.f_12, 16))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_141.f_1), 16);
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_141.f_1), 71, 1);
			break;
		
		case 3:
			if (!MISC::IS_BIT_SET(iLocal_535, 25))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), 1920390111) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), 1920390111) != 1)
				{
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_141.f_1), 1);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_141.f_1), 2, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_141.f_1), 8, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_141.f_1), 16, 1);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_141.f_1), 16);
					TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_141.f_1), Local_141.f_33, -1);
					MISC::SET_BIT(&iLocal_535, 25);
				}
			}
			break;
		
		case 4:
			if (!MISC::IS_BIT_SET(Local_141.f_12, 17) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 3))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					Global_2446554.f_6 = 1;
				}
				uVar2 = PLAYER::PLAYER_PED_ID();
				if (Global_2446554.f_7 != func_180())
				{
					if (func_360(Global_2446554.f_7, 1, 1))
					{
						uVar2 = PLAYER::GET_PLAYER_PED(Global_2446554.f_7);
					}
				}
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_141.f_1), uVar2, 30000, 0, 3);
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_141.f_1), "mood_stressed_1", 0);
				MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 3);
			}
			else
			{
				iLocal_547 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_20);
				if (iLocal_547 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_547))
					{
						fLocal_782 = (Local_141.f_24 + 0.6f);
						if (fLocal_782 < 0.75f)
						{
							fLocal_782 = 0.75f;
						}
						if (MISC::IS_BIT_SET(Local_141.f_13, 4))
						{
							fLocal_782 = (fLocal_782 + 0.25f);
						}
						if (fLocal_782 > 1.75f)
						{
							fLocal_782 = 1.75f;
						}
						PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_547, fLocal_782);
					}
				}
			}
			break;
		
		case 5:
			if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 10))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), 242628503) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), 242628503) != 1)
				{
					if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_141.f_1)))
					{
						iLocal_547 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_20);
						if ((iLocal_547 >= 0 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_547)) || iLocal_547 < 0)
						{
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_141.f_1), uLocal_556);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_141.f_1), 16);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_141.f_1), 1);
							MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 10);
						}
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), -875674219) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), -875674219) != 0)
			{
				if (func_17(&uLocal_576, 5000, 0))
				{
					func_13(&uLocal_576);
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_141.f_23 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_141.f_23)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_141.f_23));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_141.f_1), iVar1, 10000);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_141.f_1), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 10))
			{
				if ((iLocal_547 < 0 || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_547)) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_547) >= 0.95f)
				{
					func_179();
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_141.f_23 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_141.f_23)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_141.f_23));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					TASK::TASK_HANDS_UP(NETWORK::NET_TO_PED(Local_141.f_1), -1, iVar1, -1, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_PED(Local_141.f_1), 0, 0);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_141.f_1), 16);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_141.f_1), 1);
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 10);
				}
			}
			break;
		
		case 7:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), -1442466670) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), -1442466670) != 1)
			{
				if (!func_150())
				{
					func_178();
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_141.f_1));
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_141.f_1), 20f, 0);
					func_181(4);
				}
			}
			break;
		
		case 8:
			if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 9))
			{
				func_179();
				iLocal_547 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_20);
				if ((iLocal_547 >= 0 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_547)) || iLocal_547 < 0)
				{
					if ((!MISC::IS_BIT_SET(Local_141.f_12, 27) && !func_36()) && !func_35())
					{
						if (MISC::IS_BIT_SET(Local_141.f_13, 2))
						{
							if (!MISC::IS_BIT_SET(Local_141.f_13, 3))
							{
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_141.f_1), uLocal_558);
								iVar3 = 1;
							}
							else
							{
								func_178();
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_141.f_1), uLocal_559);
								iVar3 = 1;
							}
						}
					}
					else
					{
						TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_141.f_1), Local_543, 250f, -1, 1, 0);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_181(25);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_141.f_1), 1);
						func_6(iLocal_769, 1, func_7());
						MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 9);
					}
				}
			}
			else if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 19))
			{
				iVar4 = TASK::GET_NAVMESH_ROUTE_RESULT(NETWORK::NET_TO_PED(Local_141.f_1));
				if (iVar4 == 3)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_141.f_1));
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 19);
				}
				else if (iVar4 == 2)
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_141.f_1));
					if (!MISC::IS_BIT_SET(Local_141.f_13, 3))
					{
						TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_141.f_1), uLocal_560);
					}
					else
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_141.f_1), 20f, 0);
					}
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 19);
				}
			}
			break;
	}
	func_175();
	return 1;
}

void func_175()//Position - 0x7DED
{
	if ((Local_141.f_36 != 8 && Local_141.f_36 != 7) && Local_141.f_18 == 3)
	{
		if ((((!MISC::IS_BIT_SET(Local_141.f_12, 14) || !MISC::IS_BIT_SET(Local_141.f_12, 15)) || !MISC::IS_BIT_SET(Local_141.f_12, 22)) || !MISC::IS_BIT_SET(Local_141.f_12, 23)) || !MISC::IS_BIT_SET(Local_141.f_12, 30))
		{
			iLocal_547 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_20);
			if (iLocal_547 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_547))
				{
					if (!func_150())
					{
						if (!MISC::IS_BIT_SET(Local_141.f_12, 14) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 6))
						{
							func_181(2);
							MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 6);
						}
						if (!MISC::IS_BIT_SET(Local_141.f_12, 15) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 7))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_547) > 0.87f)
							{
								func_181(3);
								MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 7);
							}
						}
						if (!MISC::IS_BIT_SET(Local_141.f_12, 22) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 22))
						{
							if (MISC::IS_BIT_SET(Local_141.f_12, 24) && !func_150())
							{
								func_181(11);
								MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 22);
							}
						}
						if (!MISC::IS_BIT_SET(Local_141.f_12, 23) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 23))
						{
							if (MISC::IS_BIT_SET(Local_141.f_12, 25) && !func_150())
							{
								func_181(12);
								MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 23);
							}
						}
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_141.f_12, 9))
		{
			if (!MISC::IS_BIT_SET(Local_141.f_12, 26) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 24))
			{
				if (MISC::IS_BIT_SET(Local_141.f_12, 7))
				{
					if (!func_150())
					{
						if (!MISC::IS_BIT_SET(Local_141.f_13, 11))
						{
							if (!MISC::IS_BIT_SET(Local_141.f_13, 12))
							{
								func_181(1);
							}
							else
							{
								func_181(19);
							}
						}
						else
						{
							func_181(16);
						}
						MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 24);
						return;
					}
					else
					{
						func_176();
						return;
					}
				}
			}
			if (((!MISC::IS_BIT_SET(Local_141.f_12, 30) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 25)) && !MISC::IS_BIT_SET(Local_141.f_12, 7)) && !MISC::IS_BIT_SET(Local_141.f_12, 4))
			{
				if (MISC::IS_BIT_SET(Local_141.f_13, 0) && !func_150())
				{
					if ((MISC::IS_BIT_SET(Local_141.f_12, 7) && MISC::IS_BIT_SET(Local_141.f_12, 4)) || (!MISC::IS_BIT_SET(Local_141.f_12, 7) && !MISC::IS_BIT_SET(Local_141.f_12, 4)))
					{
						if (!MISC::IS_BIT_SET(Local_141.f_13, 11))
						{
							if (!MISC::IS_BIT_SET(Local_141.f_13, 12))
							{
								func_181(13);
							}
							else
							{
								func_181(20);
							}
						}
						else
						{
							func_181(17);
						}
						MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 25);
						return;
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_12, 31) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 26))
			{
				if (MISC::IS_BIT_SET(Local_141.f_13, 1) && !func_150())
				{
					func_181(14);
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 26);
					return;
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_13, 9) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 31))
			{
				if (MISC::IS_BIT_SET(Local_141.f_13, 8) && !func_150())
				{
					func_181(22);
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 31);
					return;
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_15, 3) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3, 3))
			{
				if (MISC::IS_BIT_SET(Local_141.f_15, 2) && !func_150())
				{
					func_181(24);
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3), 3);
					return;
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_13, 14) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 20))
			{
				if (MISC::IS_BIT_SET(Local_141.f_13, 13) && !func_150())
				{
					func_181(23);
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 20);
					return;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_141.f_13, 6) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 29))
	{
		if (MISC::IS_BIT_SET(Local_141.f_13, 5))
		{
			if (!func_150())
			{
				func_181(21);
				MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 29);
				return;
			}
		}
	}
}

void func_176()//Position - 0x82B6
{
	Global_14558 = 0;
	func_177();
}

void func_177()//Position - 0x82C6
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
	}
}

void func_178()//Position - 0x82E7
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iVar0 < 3)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_141.f_1), joaat("weapon_pistol"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_141.f_1), MISC::GET_RANDOM_INT_IN_RANGE(10, 35));
	}
	else if (iVar0 < 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_141.f_1), joaat("weapon_combatpistol"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_141.f_1), MISC::GET_RANDOM_INT_IN_RANGE(15, 40));
	}
	else if (iVar0 == 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_141.f_1), joaat("weapon_microsmg"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_141.f_1), MISC::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	else if (iVar0 == 7)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_141.f_1), joaat("weapon_combatmg"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_141.f_1), MISC::GET_RANDOM_INT_IN_RANGE(5, 15));
	}
	else if (iVar0 == 8)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_141.f_1), joaat("weapon_bat"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_141.f_1), MISC::GET_RANDOM_INT_IN_RANGE(20, 40));
	}
	else if (iVar0 == 9)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_141.f_1), joaat("weapon_assaultrifle"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_141.f_1), MISC::GET_RANDOM_INT_IN_RANGE(5, 30));
	}
	else if (iVar0 == 10)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_141.f_1), joaat("weapon_sawnoffshotgun"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_141.f_1), MISC::GET_RANDOM_INT_IN_RANGE(5, 20));
	}
	else
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_141.f_1), joaat("weapon_pumpshotgun"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_141.f_1), MISC::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	func_6(iLocal_769, 1, func_7());
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_141.f_1), Global_1574058);
	PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_141.f_1), 1);
	PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_141.f_1), 1);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_141.f_1), Local_540, 20f, 0, 0);
	PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_141.f_1), 1);
}

void func_179()//Position - 0x84D5
{
	iLocal_547 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_20);
	if (iLocal_547 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_547))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_141.f_20);
		}
	}
}

int func_180()//Position - 0x8501
{
	return -1;
}

void func_181(int iParam0)//Position - 0x850A
{
	struct<2> Var0;
	int iVar4;
	
	if (MISC::IS_BIT_SET(Local_141.f_12, 13))
	{
		if (!func_336(Local_141.f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_141.f_1) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_141.f_1) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_141.f_1)))
				{
					if (Local_141.f_37 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_141.f_37 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_141.f_22, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (MISC::ARE_STRINGS_EQUAL(&Var0, "RB_SH241"))
					{
						if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, 1))
						{
							if ((((((iVar4 == joaat("weapon_unarmed") || iVar4 == 0) || iVar4 == joaat("object")) || iVar4 == joaat("weapon_flare")) || iVar4 == joaat("weapon_snowball")) || func_200(iVar4)) || func_199(iVar4))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_335(&uLocal_604, 3, NETWORK::NET_TO_PED(Local_141.f_1), &(Local_141.f_38), 1, 0);
					switch (iParam0)
					{
						case 0:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_GREET", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							func_182(&uLocal_604, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_182(&uLocal_604, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_182(&uLocal_604, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_BRAVE", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 10:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_REMOVE_VEHICLE", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 11:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_REACT_TO_SHOUT", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 12:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_HURRYING", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 13:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_NO_COPS", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 14:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_THREATENED", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 15:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_GREET_START", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 16:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_SCARED_START", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 17:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_NO_COPS_START", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 18:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_GREET_END", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 19:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_SCARED_END", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 20:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_NO_COPS_END", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 21:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_COPS_ARRIVED", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 22:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_SELL", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 23:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_NO_ENTRY", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 24:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_STEAL", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 25:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SCREAM_PANIC", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						}
					}
				}
			}
	}
}

int func_182(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x88E9
{
	func_198(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_183(sParam2, iParam3, 0);
}

int func_183(char* sParam0, int iParam1, bool bParam2)//Position - 0x8937
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_197();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_196(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_195();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			MISC::CLEAR_BIT(&Global_2263, 20);
			MISC::CLEAR_BIT(&Global_2264, 17);
			MISC::CLEAR_BIT(&Global_2265, 0);
			if (bParam2)
			{
				func_188();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_187())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_186())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_2263, 9))
				{
					return 0;
				}
			}
			func_185();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_184();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_197();
	}
	return 0;
}

void func_184()//Position - 0x8C03
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_15692 = 1;
}

void func_185()//Position - 0x8C35
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	MISC::CLEAR_BIT(&Global_2264, 16);
}

int func_186()//Position - 0x8CCA
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_187()//Position - 0x8CF1
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_188()//Position - 0x8D8A
{
	if (func_194(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_189();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_189()//Position - 0x8E2B
{
	func_190();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_190()//Position - 0x8E44
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_193(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_192(PLAYER::PLAYER_PED_ID());
			if (func_191(iVar0) && (!func_194(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_191(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = iVar0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != 145)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
			}
			return;
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
}

bool func_191(int iParam0)//Position - 0x8F41
{
	return iParam0 < 3;
}

int func_192(int iParam0)//Position - 0x8F4D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_193(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_193(int iParam0)//Position - 0x8F8A
{
	if (func_191(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_194(int iParam0)//Position - 0x8FB4
{
	return Global_34913 == iParam0;
}

void func_195()//Position - 0x8FC2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_196(int iParam0, int iParam1)//Position - 0x901A
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1327593.f_949, iParam0);
}

void func_197()//Position - 0x9055
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

void func_198(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x90AC
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

int func_199(int iParam0)//Position - 0x9102
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
	}
	return 0;
}

int func_200(int iParam0)//Position - 0x9137
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
			return 1;
			break;
	}
	return 0;
}

void func_201()//Position - 0x918A
{
	int iVar0;
	
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false);
	if (Local_141.f_34 != iVar0)
	{
		if (Local_141.f_34 < iVar0 || func_208(Local_141.f_34, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_141.f_34);
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false);
	if (Local_141.f_35 != iVar0)
	{
		if (Local_141.f_35 < iVar0 || func_202(Local_141.f_35, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_141.f_35);
		}
	}
}

int func_202(int iParam0, bool bParam1, bool bParam2)//Position - 0x91F6
{
	return func_203(2, iParam0, 1, bParam1, bParam2);
}

int func_203(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x920A
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_1336615, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_207(iParam0) - func_206(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_206(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_207(iParam0) - func_205(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_206(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_207(iParam0) - func_206(iParam0, 1));
		}
		if (!bParam4 && Global_1582596[PLAYER::PLAYER_ID() /*324*/] != 3)
		{
			iVar1 = (iVar1 - func_204(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_204(int iParam0)//Position - 0x92D3
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_205(int iParam0)//Position - 0x930D
{
	switch (iParam0)
	{
		case 0:
			return Global_1336615.f_1;
			break;
		
		case 1:
			return Global_1336615.f_2;
			break;
		
		case 2:
			return Global_1336615.f_3;
			break;
	}
	return 0;
}

int func_206(int iParam0, bool bParam1)//Position - 0x9353
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2414009[iVar0 /*254*/].f_206;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2414009[iVar0 /*254*/].f_207;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2414009[iVar0 /*254*/].f_208;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1);
			}
			break;
	}
	return 0;
}

int func_207(int iParam0)//Position - 0x93EA
{
	switch (iParam0)
	{
		case 0:
			return Global_1336623;
			break;
		
		case 1:
			return Global_1336624;
			break;
		
		case 2:
			return Global_1336625;
			break;
	}
	return 0;
}

int func_208(int iParam0, bool bParam1, bool bParam2)//Position - 0x942A
{
	return func_203(0, iParam0, 1, bParam1, bParam2);
}

void func_209()//Position - 0x943E
{
	float fVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	switch (iLocal_801)
	{
		case 0:
			if (!MISC::IS_BIT_SET(iLocal_536, 0))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_3))
				{
					if (func_216(Local_807))
					{
						Local_807 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_OBJ(Local_141.f_3), 0f, -0.5f, 0f) };
						MISC::SET_BIT(&iLocal_536, 0);
					}
				}
			}
			if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_807, 0.5f, 0.5f, 1f, 0, 1, 0) && (func_336(Local_141.f_1) || Local_141.f_36 > 7)) && !MISC::IS_BIT_SET(Local_141.f_12, 20)) && !MISC::IS_BIT_SET(Local_141.f_12, 11)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_548, 1.5f) == 0)
			{
				if ((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !func_215(0)) && !func_214()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_3))
				{
					func_129("FHU_MANR", -1);
					iLocal_801 = 1;
				}
			}
			break;
		
		case 1:
			if ((((!MISC::IS_BIT_SET(Local_141.f_13, 16) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 12)) && !MISC::IS_BIT_SET(Local_141.f_12, 20)) && !MISC::IS_BIT_SET(Local_141.f_12, 11)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_807, 0.5f, 0.5f, 1f, 0, 1, 0))
			{
				if (((PAD::IS_CONTROL_JUST_PRESSED(0, 51) && !func_213(0)) && !func_214()) && !HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_128("FHU_MANR"))
					{
						HUD::CLEAR_HELP(1);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 640);
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 12);
					iLocal_801 = 2;
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
					if (iLocal_806 == 0)
					{
						func_210(&iLocal_806, 4, "FHU_MANR", 0, 0);
					}
				}
			}
			else if (func_128("FHU_MANR"))
			{
				HUD::CLEAR_HELP(1);
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Local_807.f_2 = (Var3.f_2 - 1f);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_807, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D((Local_568.x - Local_807.x), (Local_568.f_1 - Local_807.f_1)));
				TASK::CLEAR_SEQUENCE_TASK(&uVar6);
				TASK::OPEN_SEQUENCE_TASK(&uVar6);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar6);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar6);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, 1);
				bVar2 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_805, 1);
				if (bVar2)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (!CAM::DOES_CAM_EXIST(uLocal_802))
				{
					uLocal_802 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_802, PLAYER::PLAYER_PED_ID(), -0.1878f, 3.0635f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_802, PLAYER::PLAYER_PED_ID(), -0.0129f, 0.0927f, 0.3008f, 1);
				CAM::SET_CAM_FOV(uLocal_802, 35f);
				CAM::SHAKE_CAM(uLocal_802, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(uLocal_802, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			iLocal_801 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_803))
				{
					uLocal_803 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_803, PLAYER::PLAYER_PED_ID(), -1.0346f, 2.9183f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_803, PLAYER::PLAYER_PED_ID(), -0.0574f, 0.1074f, 0.3008f, 1);
				CAM::SET_CAM_FOV(uLocal_803, 35f);
				CAM::SHAKE_CAM(uLocal_803, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_803, uLocal_802, 6000, 1, 1);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, 1);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
			}
			iLocal_801 = 4;
			break;
		
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_803))
			{
				iLocal_801 = 5;
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_804)
						{
							iVar7 = SYSTEM::ROUND(((IntToFloat(iLocal_573) * 0.75f) / 4f));
							iVar8 = SYSTEM::ROUND(((IntToFloat(iLocal_574) * 0.75f) / 4f));
							iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(iVar7, iVar8 + 1);
							iVar1 = func_170(iVar1, 1);
							if (iVar1 > (Global_262145.f_144 / 4))
							{
								iVar1 = (Global_262145.f_144 / 4);
							}
							if (func_357())
							{
								func_169(1734805203, iVar1, &uVar9, 0, 0);
							}
							else
							{
								func_165(iVar1, 1, 1, 1092616192);
								MONEY::NETWORK_EARN_FROM_HOLDUPS(iVar1);
							}
							iLocal_799 = (iLocal_799 + iVar1);
							func_153(1, iLocal_799);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
							iLocal_804 = 1;
						}
					}
					else if (iLocal_804)
					{
						iLocal_804 = 0;
					}
				}
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, 1);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
			}
			break;
		
		case 5:
			if (iLocal_805 != joaat("weapon_unarmed") && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_805, 1);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			if (CAM::DOES_CAM_EXIST(uLocal_802))
			{
				CAM::DESTROY_CAM(uLocal_802, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_803))
			{
				CAM::DESTROY_CAM(uLocal_803, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_801 = 7;
			break;
		
		case 6:
			CAM::SET_CAM_ACTIVE(uLocal_803, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			iLocal_801 = 5;
			break;
	}
}

void func_210(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)//Position - 0x9AD1
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_211(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/] = 1;
			Global_35613[iVar0 /*18*/].f_1 = Global_35730;
			Global_35730++;
			Global_35613[iVar0 /*18*/].f_3 = 0;
			Global_35613[iVar0 /*18*/].f_16 = 0;
			Global_35613[iVar0 /*18*/].f_4 = 0;
			Global_35613[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35613[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35613[iVar0 /*18*/].f_5 = iParam3;
			Global_35613[iVar0 /*18*/].f_17 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_35613[iVar0 /*18*/].f_6 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_35613[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35613[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35613[iVar0 /*18*/].f_11 = 0;
			}
			*iParam0 = Global_35613[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_211(var uParam0)//Position - 0x9BDC
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_212(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/].f_6 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_212(int iParam0)//Position - 0x9C33
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_213(int iParam0)//Position - 0x9C6E
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
			{
				if (Global_14392 == 1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_14392 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_14393.f_1 > 3)
	{
		if (Global_14392 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_214()//Position - 0x9CF2
{
	return MISC::GET_GAME_TIMER() <= Global_17236.f_5130 + 100;
}

int func_215(int iParam0)//Position - 0x9D07
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_216(struct<3> Param0)//Position - 0x9D61
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_217()//Position - 0x9D8B
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	char* sVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	
	if (((Local_141.f_63 >= 1000 || (Local_141.f_63 + iLocal_800) >= 1000) || func_333()) || (func_126(&(Global_2446554.f_8)) && !func_332(Global_2446554.f_8, 300000, 0)))
	{
		if (func_126(&(Global_2446554.f_8)))
		{
			if ((MISC::GET_GAME_TIMER() % 2500) < 50)
			{
			}
		}
		if (!Local_90.f_34)
		{
			Local_90.f_34 = 1;
			if (!func_126(&(Global_2446554.f_8)))
			{
				func_18(&(Global_2446554.f_8), 0, 0);
			}
		}
	}
	else
	{
		if (func_126(&(Global_2446554.f_8)))
		{
			func_13(&(Global_2446554.f_8));
		}
		if (Local_90.f_34)
		{
			Local_90.f_34 = 0;
		}
	}
	if ((MISC::GET_GAME_TIMER() % 5000) < 50)
	{
	}
	if ((((((Local_141.f_36 < 2 && func_360(PLAYER::PLAYER_ID(), 1, 1)) && MISC::IS_BIT_SET(iLocal_535, 26)) && !func_331(-1082130432)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_PED(Local_141.f_1), Local_597, Local_600, uLocal_603, 0, 1, 0)) && !func_336(Local_141.f_1))
	{
		iVar7 = 0;
		if ((HUD::IS_PAUSE_MENU_ACTIVE() && iLocal_89 != 0) && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			iLocal_89 = 0;
			func_330();
		}
		switch (iLocal_89)
		{
			case 0:
				if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					if (func_329(Local_90, &Local_548, Local_551.f_2, &(Local_90.f_16[0 /*3*/]), &(Local_90.f_16[1 /*3*/]), &(Local_90.f_23), &(Local_90.f_26)))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_141.f_1), 1) };
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Local_90.f_23, 1) < 5f && MISC::ABSF((Var1.f_2 - Var4.f_2)) < 0.25f) || func_378(1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_90.f_16[0 /*3*/], Local_90.f_16[1 /*3*/], Local_90.f_26, 0, 1, 0) || func_378(1))
							{
								if (PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_90.f_23, 135f) || func_378(1))
								{
									if (Local_90.f_34)
									{
										if (func_378(1))
										{
											func_350();
										}
										if (((!func_128("SHR_HOLDUP_1") && !func_128("SHR_MENU")) && !func_328()) && func_327())
										{
											func_129("SHR_SOLD_OUT", -1);
											iLocal_89 = 10;
										}
									}
									else
									{
										if (func_378(1))
										{
										}
										Local_90.f_14 = -1;
										func_210(&(Local_90.f_14), 4, "SHR_MENU", 0, 0);
										iLocal_89 = 2;
									}
								}
								else if ((MISC::GET_GAME_TIMER() % 8000) < 50)
								{
								}
							}
							else if ((MISC::GET_GAME_TIMER() % 8000) < 50)
							{
							}
						}
						else if ((MISC::GET_GAME_TIMER() % 8000) < 50)
						{
						}
					}
				}
				else
				{
					if (func_128("SHR_MENU"))
					{
						HUD::CLEAR_HELP(1);
					}
					if ((MISC::GET_GAME_TIMER() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_141.f_1), 1) };
				if ((!PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_90.f_23, 135f) || MISC::ABSF((Var1.f_2 - Var4.f_2)) >= 0.25f) && !func_378(1))
				{
					if (func_128("SHR_MENU"))
					{
						HUD::CLEAR_HELP(1);
					}
					func_211(&(Local_90.f_14));
					iLocal_89 = 0;
				}
				if (HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_128("SHR_MENU"))
					{
						HUD::CLEAR_HELP(1);
					}
					func_211(&(Local_90.f_14));
					iLocal_89 = 0;
				}
				if (!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					if (func_326(Local_90.f_14, 1) || func_378(1))
					{
						if (func_378(1))
						{
							func_350();
						}
						if (func_128("SHR_MENU"))
						{
							HUD::CLEAR_HELP(1);
						}
						func_325(&(Local_90.f_44));
						func_211(&(Local_90.f_14));
						func_319(0);
						func_372(PLAYER::PLAYER_ID(), 0, 66048, 1);
						HUD::THEFEED_FLUSH_QUEUE();
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_336(Local_141.f_1))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_141.f_1), 0);
							MISC::CLEAR_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3), 1);
						}
						func_318();
						iLocal_89 = 3;
					}
				}
				break;
			
			case 3:
				if (!CAM::DOES_CAM_EXIST(Local_90.f_1))
				{
					Local_90.f_1 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
					func_317(Local_90, &(Local_90.f_2), &(Local_90.f_5), &uVar9);
					CAM::SET_CAM_COORD(Local_90.f_1, Local_90.f_2);
					CAM::SET_CAM_ROT(Local_90.f_1, Local_90.f_5, 2);
					CAM::SET_CAM_FOV(Local_90.f_1, uVar9);
					CAM::SHAKE_CAM(Local_90.f_1, "HAND_SHAKE", 0.1f);
					CAM::SET_CAM_ACTIVE(Local_90.f_1, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				}
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				Local_90.f_37 = func_338(Local_90);
				Local_90.f_13 = 6;
				func_316(0);
				func_315(1, 1, 0, 0, 0);
				func_314(1, 2, 1, 1, 1);
				func_313("SNK_ITEM");
				func_311(1, Local_90.f_37, Local_90.f_37);
				iVar10 = 0;
				while (iVar10 < Local_90.f_13)
				{
					func_307(iVar10, func_310(iVar10), 0, 1, 0, 0);
					if (Local_141.f_64[iVar10] >= 10 || ((func_126(&(Global_2446554.f_10[iVar10 /*2*/])) && !func_332(Global_2446554.f_10[iVar10 /*2*/], 150000, 0)) && Local_90 == Global_2446554.f_25))
					{
						func_307(iVar10, "", 1, 1, 0, 0);
						func_306(15, 0);
						if (func_126(&(Global_2446554.f_10[iVar10 /*2*/])) && !func_332(Global_2446554.f_10[iVar10 /*2*/], 150000, 0))
						{
							Local_141.f_64[iVar10] = 10;
						}
						if (!func_126(&(Global_2446554.f_10[iVar10 /*2*/])))
						{
							Global_2446554.f_25 = Local_90;
							func_18(&(Global_2446554.f_10[iVar10 /*2*/]), 0, 0);
						}
					}
					else if (func_303(iVar10))
					{
						func_307(iVar10, "SNK_FULL", 0, 1, 0, 0);
					}
					else
					{
						func_307(iVar10, "ITEM_COST", 1, 1, 0, 0);
						func_299(func_302(iVar10), 0);
					}
					iVar10++;
				}
				func_298(0);
				func_297(Local_90.f_12, 1, 1);
				if (Local_90.f_35)
				{
					func_296("SNK_BOUGHT", 0, 0);
				}
				else if (Local_141.f_64[Local_90.f_12] >= 10)
				{
					func_296("SNK_SOUT", 0, 0);
				}
				else
				{
					func_296(func_295(Local_90.f_12), 0, 0);
				}
				func_294(201, "ITEM_SELECT", -1);
				func_294(202, "ITEM_BACK", -1);
				func_294(203, "SNK_LIFT", -1);
				func_263(1, Local_90, 1, 0, 1, -1082130432, 0, 0);
				iLocal_89 = 4;
				break;
			
			case 4:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -875674219) == 7)
				{
					if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3, 1))
					{
						func_372(PLAYER::PLAYER_ID(), 0, 98816, 1);
						MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3), 1);
					}
				}
				iVar7 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
						func_259(0, 0, 0, 1);
						func_258(0, -1);
						if (func_257())
						{
							if (Global_2543381 != Local_90.f_12)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								Local_90.f_12 = Global_2543381;
								func_297(Local_90.f_12, 1, 1);
								Local_90.f_27 = 0;
								Local_90.f_29 = 0;
								Local_90.f_30 = 0;
								Local_90.f_32 = 0;
								sVar8 = func_295(Local_90.f_12);
								if (HUD::DOES_TEXT_LABEL_EXIST(sVar8))
								{
									func_296(sVar8, 0, 0);
								}
							}
							else
							{
								iVar7 = 1;
							}
						}
					}
				}
				func_263(1, Local_90, 1, 0, 1, -1082130432, 0, 0);
				func_247();
				if ((Local_141.f_18 > 2 && MISC::IS_BIT_SET(Local_141.f_15, 0)) && MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3, 0))
				{
					MISC::CLEAR_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3), 0);
				}
				if ((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar7 == 1) || Local_90.f_47)
				{
					if (!Local_90.f_47)
					{
						Local_90.f_27 = 1;
						Local_90.f_29 = 0;
						Local_90.f_30 = 0;
						Local_90.f_32 = 0;
						func_325(&(Local_90.f_44));
					}
					if ((Local_90.f_28 && Local_90.f_31) && Local_90.f_33)
					{
						if (func_357())
						{
							Local_90.f_47 = 1;
							Local_90.f_48 = 0;
							Local_90.f_49 = -1;
							func_236(&(Local_90.f_49), -1303831698, 537254313, func_302(Local_90.f_12));
							iLocal_89 = 5;
						}
						else
						{
							Local_90.f_35 = 1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							Local_141.f_64[Local_90.f_12]++;
							iLocal_89 = 6;
						}
					}
					else
					{
						Local_90.f_35 = 0;
						if (!Local_90.f_28 && !Local_90.f_36)
						{
							func_235(MISC::GET_HASH_KEY(func_295(Local_90.f_12)), func_302(Local_90.f_12), 0);
							func_228(0, 31, 3);
							iLocal_89 = 11;
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					if (!Local_90.f_33)
					{
						iLocal_89 = 3;
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 203) && !Local_90.f_47)
				{
					Local_90.f_27 = 1;
					if (Local_141.f_64[Local_90.f_12] < 10)
					{
						Local_90.f_33 = 1;
					}
					else
					{
						Local_90.f_33 = 0;
					}
					func_325(&(Local_90.f_44));
					if (!Local_90.f_33)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					else if (!Local_90.f_31)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_139(), func_227(), 8f, -8f, -1, 1048576, 0, 0, 0, 0);
						iLocal_89 = 8;
						Local_90.f_15 = MISC::GET_GAME_TIMER();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						func_330();
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					if (func_378(1))
					{
						func_350();
					}
					iLocal_89 = 9;
					Local_90.f_15 = MISC::GET_GAME_TIMER();
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_330();
				}
				if (Local_90.f_34)
				{
					iLocal_89 = 10;
					Local_90.f_15 = MISC::GET_GAME_TIMER();
					func_330();
					func_129("SHR_SOLD_OUT", -1);
				}
				iVar11 = 0;
				while (iVar11 < Local_90.f_13)
				{
					if (func_126(&(Global_2446554.f_10[iVar11 /*2*/])) && func_332(Global_2446554.f_10[iVar11 /*2*/], 150000, 0))
					{
						func_13(&(Global_2446554.f_10[iVar11 /*2*/]));
						Local_141.f_64[iVar11] = 0;
						iLocal_89 = 3;
					}
					iVar11++;
				}
				break;
			
			case 5:
				func_263(1, Local_90, 1, 0, 1, -1082130432, 0, 0);
				if (func_236(&(Local_90.f_49), -1303831698, 537254313, func_302(Local_90.f_12)))
				{
				}
				else
				{
					switch (Local_90.f_49)
					{
						case 0:
							Local_90.f_35 = 0;
							if (!Local_90.f_28 && !Local_90.f_36)
							{
								func_235(MISC::GET_HASH_KEY(func_295(Local_90.f_12)), func_302(Local_90.f_12), 0);
								func_228(0, 31, 3);
								func_226();
								func_225();
								iLocal_89 = 11;
							}
							else
							{
								if (func_378(1))
								{
									func_350();
								}
								iLocal_89 = 9;
								Local_90.f_15 = MISC::GET_GAME_TIMER();
								AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
								func_330();
							}
							break;
						
						case 2:
							Local_90.f_35 = 1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							Local_141.f_64[Local_90.f_12]++;
							iLocal_89 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				func_263(1, Local_90, 1, 0, 1, -1082130432, 0, 0);
				if (func_357())
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_223(func_224()));
				}
				switch (Local_90.f_12)
				{
					case 3:
						iVar0 = func_302(Local_90.f_12);
						func_95(1262, 1, -1);
						func_94(16, 1, -1, 1);
						MONEY::NETWORK_BUY_ITEM(iVar0, MISC::GET_HASH_KEY("SNK_ITEM1"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 1:
						iVar0 = func_302(Local_90.f_12);
						func_95(1263, 1, -1);
						func_94(15, 1, -1, 1);
						MONEY::NETWORK_BUY_ITEM(iVar0, MISC::GET_HASH_KEY("SNK_ITEM2"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 2:
						iVar0 = func_302(Local_90.f_12);
						func_94(14, 1, -1, 1);
						func_95(1264, 1, -1);
						MONEY::NETWORK_BUY_ITEM(iVar0, MISC::GET_HASH_KEY("SNK_ITEM3"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 4:
						iVar0 = func_302(Local_90.f_12);
						iLocal_140 = 20;
						if (func_112(1085, -1, 0) + 20 > 20)
						{
							iLocal_140 = (20 - func_112(1085, -1, 0));
						}
						func_95(1085, iLocal_140, -1);
						MONEY::NETWORK_BUY_ITEM(iVar0, MISC::GET_HASH_KEY("SNK_ITEM4"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 0:
						iVar0 = func_302(Local_90.f_12);
						func_95(62, 1, -1);
						MONEY::NETWORK_BUY_ITEM(iVar0, MISC::GET_HASH_KEY("SNK_ITEM5"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 5:
						iVar0 = func_302(Local_90.f_12);
						func_95(63, 1, -1);
						MONEY::NETWORK_BUY_ITEM(iVar0, MISC::GET_HASH_KEY("SNK_ITEM6"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
				}
				if (func_357())
				{
					func_221(func_224());
				}
				func_220(-iVar0, 0);
				iLocal_800 = (iLocal_800 + iVar0);
				if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 30))
				{
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 30);
				}
				if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3, 0))
				{
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3), 0);
					Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = Local_90.f_12;
				}
				if (Local_90.f_34 || iLocal_800 >= 1000)
				{
					iLocal_89 = 10;
					func_330();
					func_129("SHR_SOLD_OUT", -1);
				}
				else if (Local_141.f_64[Local_90.f_12] >= 10 || func_303(Local_90.f_12))
				{
					iLocal_89 = 3;
				}
				else
				{
					iLocal_89 = 4;
				}
				break;
			
			case 8:
				func_159(1);
				switch (Local_90.f_12)
				{
					case 3:
						func_218(0, 1f, 3);
						func_95(1262, 1, -1);
						func_94(13, 1, -1, 1);
						break;
					
					case 1:
						func_218(1, 1f, 3);
						func_95(1263, 1, -1);
						func_94(13, 1, -1, 1);
						break;
					
					case 2:
						func_218(2, 1f, 3);
						func_95(1264, 1, -1);
						func_94(13, 1, -1, 1);
						break;
					
					case 4:
						iLocal_140 = 20;
						if (func_112(1085, -1, 0) + 20 > 20)
						{
							iLocal_140 = (20 - func_112(1085, -1, 0));
						}
						func_218(5, SYSTEM::TO_FLOAT(iLocal_140), 3);
						func_95(1085, iLocal_140, -1);
						break;
					
					case 0:
						func_218(3, 1f, 3);
						func_95(62, 1, -1);
						break;
					
					case 5:
						func_218(4, 1f, 3);
						func_95(63, 1, -1);
						break;
				}
				func_372(PLAYER::PLAYER_ID(), 1, 0, 1);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 25);
					if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 1))
					{
						MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 2);
					}
				}
				if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3, 2))
				{
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3), 2);
				}
				iLocal_89 = 12;
				break;
			
			case 11:
				if (!Global_90014.f_1318 && !NETWORK::IS_COMMERCE_STORE_OPEN())
				{
					iLocal_89 = 4;
				}
				break;
			
			case 10:
				func_372(PLAYER::PLAYER_ID(), 1, 0, 1);
				if ((MISC::GET_GAME_TIMER() - Local_90.f_15) > 1000)
				{
					iLocal_89 = 12;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2, 203);
					PAD::SET_INPUT_EXCLUSIVE(2, 202);
					PAD::SET_INPUT_EXCLUSIVE(2, 188);
					PAD::SET_INPUT_EXCLUSIVE(2, 187);
					PAD::SET_INPUT_EXCLUSIVE(2, 189);
					PAD::SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 9:
				if ((MISC::GET_GAME_TIMER() - Local_90.f_15) > 1000)
				{
					iLocal_89 = 0;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2, 203);
					PAD::SET_INPUT_EXCLUSIVE(2, 202);
					PAD::SET_INPUT_EXCLUSIVE(2, 188);
					PAD::SET_INPUT_EXCLUSIVE(2, 187);
					PAD::SET_INPUT_EXCLUSIVE(2, 189);
					PAD::SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 12:
				if (MISC::IS_BIT_SET(Local_141.f_15, 3))
				{
					if (MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3, 2))
					{
						MISC::CLEAR_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3), 2);
					}
					if (MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3, 3))
					{
						MISC::CLEAR_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 8000) < 50)
		{
		}
		if (MISC::IS_BIT_SET(Local_141.f_15, 3))
		{
			if (MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3, 2))
			{
				MISC::CLEAR_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3), 2);
			}
			if (MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3, 3))
			{
				MISC::CLEAR_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3), 3);
			}
		}
		if ((iLocal_89 != 12 && MISC::IS_BIT_SET(iLocal_535, 26)) && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			if ((((iLocal_89 == 4 || iLocal_89 == 3) || iLocal_89 == 6) || iLocal_89 == 11) || iLocal_89 == 5)
			{
				func_330();
			}
			iLocal_89 = 12;
		}
		if (Local_90.f_14 != -1)
		{
			func_211(&(Local_90.f_14));
		}
	}
}

void func_218(int iParam0, float fParam1, int iParam2)//Position - 0xAF01
{
	struct<8> Var0;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	
	if (fParam1 > 0f)
	{
		if (func_219(iParam0, &Var0))
		{
			Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
			func_159(1);
			iVar12 = -1;
			iVar11 = 0;
			while (iVar11 < 20)
			{
				if (Global_2422140.f_726[iVar11 /*29*/].f_6 == 0 || Global_2422140.f_726[iVar11 /*29*/].f_6 == 6)
				{
					iVar12 = iVar11;
					iVar11 = 20;
				}
				iVar11++;
			}
			if (iVar12 != -1)
			{
				Global_2422140.f_726[iVar12 /*29*/] = { Var8 };
				Global_2422140.f_726[iVar12 /*29*/].f_6 = 1;
				Global_2422140.f_726[iVar12 /*29*/].f_4 = func_158(Global_2422140.f_726[iVar12 /*29*/], &Global_1312317, &Global_1312318);
				Global_2422140.f_726[iVar12 /*29*/].f_5 = fParam1;
				Global_2422140.f_726[iVar12 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
				Global_2422140.f_726[iVar12 /*29*/].f_8 = iParam2;
				Global_2422140.f_726[iVar12 /*29*/].f_14 = { Var0 };
				Global_2422140.f_726[iVar12 /*29*/].f_9 = func_157();
				Global_2422140.f_726[iVar12 /*29*/].f_10 = func_156();
			}
		}
	}
}

int func_219(int iParam0, char* sParam1)//Position - 0xB023
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1", 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2", 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3", 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1", 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2", 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_220(int iParam0, int iParam1)//Position - 0xB0B1
{
	func_167(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_168(iParam0, 0);
	}
}

void func_221(int iParam0)//Position - 0xB0CF
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_357())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_222(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_2540096[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2540096[iParam0 /*69*/] = { Var1 };
	}
}

int func_222(int iParam0)//Position - 0xB130
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2540096[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

int func_223(int iParam0)//Position - 0xB158
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2540096[iParam0 /*69*/];
	}
	return -1;
}

int func_224()//Position - 0xB17C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_223(iVar0) != 2147483647)
		{
			if (func_222(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_225()//Position - 0xB1B6
{
	Global_2428131.f_656.f_32 = 1;
}

void func_226()//Position - 0xB1C8
{
	Global_2428131.f_656.f_28 = 1;
	Global_2428131.f_656.f_32 = 0;
	Global_2428131.f_656.f_31 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	func_13(&(Global_2428131.f_656.f_29));
}

char* func_227()//Position - 0xB202
{
	if (func_12())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_228(int iParam0, int iParam1, int iParam2)//Position - 0xB21C
{
	int iVar0;
	
	if (!NETWORK::IS_STORE_AVAILABLE_TO_USER())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_232(PLAYER::PLAYER_ID(), 1))
	{
		return;
	}
	if (PAD::IS_CONTROL_PRESSED(2, 199) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 199))
	{
		return;
	}
	if (HUD::GET_PAUSE_MENU_STATE() != 0)
	{
		return;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return;
	}
	if (func_231())
	{
		return;
	}
	if (!func_229())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0)
	{
		if (!Global_90014.f_1318 && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			iVar0 = 18;
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2435859 = iParam1;
			Global_90014.f_1318 = 1;
			Global_90014.f_1319 = iParam2;
		}
	}
}

int func_229()//Position - 0xB2F5
{
	if (func_230())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_230()//Position - 0xB315
{
	return Global_2435308;
}

bool func_231()//Position - 0xB321
{
	return Global_2435880;
}

int func_232(int iParam0, bool bParam1)//Position - 0xB32D
{
	if (bParam1)
	{
		if (func_233(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582596[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_233(int iParam0)//Position - 0xB359
{
	return func_234(iParam0);
}

bool func_234(int iParam0)//Position - 0xB367
{
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_13.f_1, 0);
}

void func_235(int iParam0, int iParam1, int iParam2)//Position - 0xB381
{
	Global_90014.f_1320 = iParam0;
	Global_90014.f_1321 = iParam1;
	Global_90014.f_1322 = iParam2;
}

int func_236(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB3A4
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (Local_90.f_47)
	{
		switch (Local_90.f_48)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
				{
					if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
					{
						if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_310(Local_90.f_12);
				func_245(&sVar4, cVar3, func_246());
				if (func_241(78225582, iParam1, MISC::GET_HASH_KEY(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_239())
					{
						HUD::_0x170F541E1CADD1DE(1);
						HUD::_SET_PLAYER_CASH_CHANGE(-iVar0, -iVar1);
						Local_90.f_48 = 1;
					}
					else
					{
						Local_90.f_48 = 3;
					}
				}
				else
				{
					Local_90.f_48 = 3;
				}
				break;
			
			case 1:
				if (func_238(func_224()))
				{
					if (func_237(func_224()) == 2)
					{
						Local_90.f_48 = 2;
					}
					else
					{
						Local_90.f_48 = 3;
					}
				}
				break;
			
			case 2:
				Local_90.f_47 = 0;
				Local_90.f_48 = 0;
				HUD::_0x170F541E1CADD1DE(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*uParam0 = 2;
				return 0;
				break;
			
			case 3:
				func_221(func_224());
				Local_90.f_47 = 0;
				Local_90.f_48 = 0;
				HUD::_0x170F541E1CADD1DE(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*uParam0 = 0;
				return 0;
				break;
		}
		return 1;
	}
	Local_90.f_48 = 0;
	*uParam0 = -1;
	return 0;
}

int func_237(int iParam0)//Position - 0xB51C
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2540096[iParam0 /*69*/].f_2;
	}
	return 0;
}

int func_238(int iParam0)//Position - 0xB542
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2540096[iParam0 /*69*/].f_2 != 1;
	}
	return 0;
}

int func_239()//Position - 0xB56A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (!func_357())
	{
		bVar0 = true;
	}
	iVar1 = func_224();
	if (iVar1 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_72()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_240(Global_2540096[iVar1 /*69*/].f_6, Global_2540096[iVar1 /*69*/].f_4, Global_2540096[iVar1 /*69*/].f_1) == 1)
			{
				Global_2540557 = 1;
			}
			return 0;
		}
		if (Global_2435880)
		{
			if (Global_2540096[iVar1 /*69*/].f_6 == 1067618600 || Global_2540096[iVar1 /*69*/].f_6 == -1303831698)
			{
				Global_2540558 = 1;
				return 0;
			}
		}
	}
	iVar2 = func_223(iVar1);
	if (iVar2 != 2147483647)
	{
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar2))
		{
			if (bVar0)
			{
				Global_2540096[iVar1 /*69*/].f_62 = 1;
			}
			Global_2540096[iVar1 /*69*/].f_68 = 0;
			Global_2540554 = 1;
			return 1;
		}
	}
	return 0;
}

int func_240(int iParam0, int iParam1, int iParam2)//Position - 0xB65C
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case 1982688246:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case 1349151477:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_241(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xB874
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_357())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_72()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_2540557 = 1;
			return 0;
		}
		if (Global_2435880)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2540558 = 1;
				return 0;
			}
		}
	}
	iVar1 = func_224();
	if (iVar1 == -1)
	{
		if (!func_243(&iVar1, iParam0, iParam1, uParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_242(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_2540096[iVar1 /*69*/].f_66 = Var2;
		Global_2540096[iVar1 /*69*/].f_67 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_242(int iParam0)//Position - 0xB978
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
			return 1;
			break;
	}
	return 0;
}

int func_243(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)//Position - 0xB9DD
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_357())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_72()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_2540557 = 1;
			return 0;
		}
		if (Global_2435880)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2540558 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2540096[iVar1 /*69*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_2540096[iVar1 /*69*/].f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_244(iVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5);
		return 1;
	}
	return 0;
}

int func_244(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8)//Position - 0xBAC0
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2540096[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_357())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2540096[iVar0 /*69*/].f_2 = 1;
			Global_2540096[iVar0 /*69*/].f_1 = iParam5;
			Global_2540096[iVar0 /*69*/].f_3 = uParam1;
			Global_2540096[iVar0 /*69*/].f_4 = iParam2;
			Global_2540096[iVar0 /*69*/].f_7 = uParam3;
			Global_2540096[iVar0 /*69*/].f_5 = 0;
			Global_2540096[iVar0 /*69*/] = iParam0;
			Global_2540096[iVar0 /*69*/].f_6 = iParam4;
			Global_2540096[iVar0 /*69*/].f_65 = uParam8;
			Global_2540096[iVar0 /*69*/].f_64 = uParam7;
			Global_2540096[iVar0 /*69*/].f_68 = 0;
			Global_2540554 = 0;
			if (bParam6)
			{
				Global_2540096[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_245(char* sParam0, char* sParam1, int iParam2)//Position - 0xBB94
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_246()//Position - 0xBBB8
{
	if (iLocal_769 >= 10 && iLocal_769 <= 14)
	{
		return 0;
	}
	else if (iLocal_769 >= 15 && iLocal_769 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

void func_247()//Position - 0xBBFB
{
	char* sVar0;
	
	if (!Local_90.f_29)
	{
	}
	if (func_256())
	{
		Local_90.f_27 = 0;
		func_255(&(Local_90.f_44));
		Local_90.f_12 = (Local_90.f_12 - 1);
		if (Local_90.f_12 < 0)
		{
			Local_90.f_12 = (Local_90.f_13 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_297(Local_90.f_12, 1, 1);
		sVar0 = func_295(Local_90.f_12);
		Local_90.f_29 = 0;
		Local_90.f_30 = 0;
		Local_90.f_32 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_296(sVar0, 0, 0);
		}
	}
	if (func_252())
	{
		Local_90.f_27 = 0;
		func_255(&(Local_90.f_44));
		Local_90.f_12++;
		if (Local_90.f_12 > (Local_90.f_13 - 1))
		{
			Local_90.f_12 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_297(Local_90.f_12, 1, 1);
		sVar0 = func_295(Local_90.f_12);
		Local_90.f_29 = 0;
		Local_90.f_30 = 0;
		Local_90.f_32 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_296(sVar0, 0, 0);
		}
	}
	if (!Local_90.f_29)
	{
		if (func_251(1) >= func_302(Local_90.f_12))
		{
			if (MONEY::NETWORK_CAN_SPEND_MONEY(func_302(Local_90.f_12), 0, 1, 0, -1))
			{
				Local_90.f_28 = 1;
			}
			else
			{
				Local_90.f_28 = 0;
				Local_90.f_36 = 1;
			}
		}
		else
		{
			Local_90.f_28 = 0;
			Local_90.f_36 = 0;
		}
		Local_90.f_29 = 1;
	}
	if (!Local_90.f_30)
	{
		Local_90.f_31 = 1;
		if (Local_90.f_12 == 3)
		{
			Local_90.f_31 = func_112(1262, -1, 0) < 30;
		}
		else if (Local_90.f_12 == 1)
		{
			Local_90.f_31 = func_112(1263, -1, 0) < 15;
		}
		else if (Local_90.f_12 == 2)
		{
			Local_90.f_31 = func_112(1264, -1, 0) < 5;
		}
		else if (Local_90.f_12 == 4)
		{
			Local_90.f_31 = func_112(1085, -1, 0) < 20;
		}
		else if (Local_90.f_12 == 0)
		{
			Local_90.f_31 = func_112(62, -1, 0) < 10;
		}
		else if (Local_90.f_12 == 5)
		{
			Local_90.f_31 = func_112(63, -1, 0) < 10;
		}
		Local_90.f_30 = 1;
	}
	if (!Local_90.f_32)
	{
		if (Local_141.f_64[Local_90.f_12] < 10)
		{
			Local_90.f_33 = 1;
		}
		else
		{
			Local_90.f_33 = 0;
			func_296("SNK_SOUT", 0, 0);
		}
		Local_90.f_32 = 1;
	}
	if (Local_90.f_27)
	{
		if (func_248(&(Local_90.f_44)) < 3f)
		{
			if (Local_90.f_35)
			{
				func_296("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_90.f_28)
			{
				func_296("SNK_AFFORD", 0, 0);
			}
			else if (!Local_90.f_33)
			{
				func_296("SNK_SOUT", 0, 0);
			}
			else if (!Local_90.f_31)
			{
				if (Local_90.f_12 == 3)
				{
					func_296("SNK_SNK1FU", 0, 0);
				}
				else if (Local_90.f_12 == 1)
				{
					func_296("SNK_SNK2FU", 0, 0);
				}
				else if (Local_90.f_12 == 2)
				{
					func_296("SNK_SNK3FU", 0, 0);
				}
				else if (Local_90.f_12 == 4)
				{
					func_296("SNK_SMOKFU", 0, 0);
				}
				else if (Local_90.f_12 == 0)
				{
					func_296("SNK_DRK1FU", 0, 0);
				}
				else if (Local_90.f_12 == 5)
				{
					func_296("SNK_DRK2FU", 0, 0);
				}
				else
				{
					func_296("SNK_NEEDED", 0, 0);
				}
			}
		}
		else
		{
			Local_90.f_27 = 0;
			Local_90.f_35 = 0;
			func_255(&(Local_90.f_44));
			sVar0 = func_295(Local_90.f_12);
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_296(sVar0, 0, 0);
			}
		}
	}
}

float func_248(var uParam0)//Position - 0xBF31
{
	if (func_250(uParam0))
	{
		if (func_249(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_104(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

bool func_249(var uParam0)//Position - 0xBF6D
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_250(var uParam0)//Position - 0xBF7D
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_251(bool bParam0)//Position - 0xBF8D
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = MONEY::NETWORK_GET_VC_BANK_BALANCE();
	}
	iVar0 = (iVar0 + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
	return iVar0;
}

int func_252()//Position - 0xBFAC
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		if (!func_250(&(Local_90.f_41)))
		{
			func_254(&(Local_90.f_41));
			return 1;
		}
		else if (func_253(&(Local_90.f_41)) > 0.25f)
		{
			func_325(&(Local_90.f_41));
			return 1;
		}
	}
	else if (func_250(&(Local_90.f_41)))
	{
		func_255(&(Local_90.f_41));
	}
	return 0;
}

float func_253(var uParam0)//Position - 0xC033
{
	if (func_250(uParam0))
	{
		if (func_249(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_104(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_254(var uParam0)//Position - 0xC072
{
	if (!func_250(uParam0))
	{
		func_325(uParam0);
	}
}

void func_255(var uParam0)//Position - 0xC08A
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_256()//Position - 0xC0A0
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		if (!func_250(&(Local_90.f_38)))
		{
			func_254(&(Local_90.f_38));
			return 1;
		}
		else if (func_253(&(Local_90.f_38)) > 0.25f)
		{
			func_325(&(Local_90.f_38));
			return 1;
		}
	}
	else if (func_250(&(Local_90.f_38)))
	{
		func_255(&(Local_90.f_38));
	}
	return 0;
}

int func_257()//Position - 0xC125
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_2543381 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_258(int iParam0, int iParam1)//Position - 0xC14C
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	if (Global_2543381 == -6)
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2543381 = -1;
			return 0;
		}
	}
	if (((Global_2543381 > -1 || Global_2543381 == -3) || Global_2543381 == -2) || HUD::_0x3D9ACB1EB139E702())
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_2543381 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(4);
			Global_2543381 = -6;
			return 1;
		}
		else
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_MOUSE_CURSOR_SPRITE(1);
	return 0;
}

void func_259(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xC227
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		Global_2543381 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_17233;
	fVar2 = (fVar0 + Global_17235);
	fVar3 = Global_17236.f_4988;
	fVar1 = (Global_17236.f_4988 - (IntToFloat(Global_17236.f_4990) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17236.f_4990 < 1)
	{
		fVar1 = (Global_17236.f_4988 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_262();
	if (Global_2543381 == -6)
	{
		return;
	}
	Global_2543381 = -1;
	fVar7 = Global_2543375;
	fVar8 = Global_2543376;
	if (Global_17236.f_4991 > Global_17236.f_4990)
	{
		if (((Global_2543375 >= fVar0 && Global_2543375 <= fVar2) && Global_2543376 >= fVar3) && Global_2543376 < (fVar3 + fVar6))
		{
			Global_2543381 = -2;
			if (bParam3)
			{
				func_261(0);
			}
			return;
		}
		if (((Global_2543375 >= fVar0 && Global_2543375 <= fVar2) && Global_2543376 >= (fVar3 + fVar6)) && Global_2543376 < (fVar3 + 0.034722f))
		{
			Global_2543381 = -3;
			if (bParam3)
			{
				func_261(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_17236.f_4991 == -1)
		{
			Global_2543381 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17236.f_4990);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_260(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17235, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_2543381 = Global_17236.f_6833[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2543381 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2543381 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2543381 = -4;
		return;
	}
	Global_2543381 = -1;
}

void func_260(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xC4D3
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_261(bool bParam0)//Position - 0xC502
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17233;
	fVar1 = Global_17236.f_4988;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_2543381 == -2)
	{
		func_260(fVar0, fVar1, Global_17235, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2543381 == -3)
	{
		func_260(fVar0, (fVar1 + fVar2), Global_17235, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_262()//Position - 0xC58B
{
	Global_2543377 = Global_2543375;
	Global_2543378 = Global_2543376;
	Global_2543375 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_2543376 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_2543379 = (Global_2543375 - Global_2543377);
	Global_2543380 = (Global_2543376 - Global_2543378);
}

void func_263(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0xC5D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
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
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_145(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_292(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17236)
	{
		if (func_290(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17236 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_17236.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar56 = Global_17234;
	}
	else
	{
		fVar56 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17235;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar57, &iVar58);
		fVar60 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_289())
		{
			iVar57 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) * fVar60));
		}
		fVar61 = (SYSTEM::TO_FLOAT(iVar57) / SYSTEM::TO_FLOAT(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (func_289())
		{
			fVar59 = 1f;
		}
		iVar57 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar57) / fVar59));
		iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) / fVar59));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17236.f_4986)
		{
			if (MISC::GET_HASH_KEY(&(Global_17236.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_17234;
			}
			else
			{
				if (Global_17236)
				{
					GRAPHICS::DRAW_SPRITE(func_288(29), func_286(29, 1), (Global_17233 + (fParam5 * 0.5f)), (Global_17234 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17236.f_7177)
				{
					iVar1 = Global_17236.f_7173;
					iVar2 = Global_17236.f_7174;
					iVar3 = Global_17236.f_7175;
					iVar4 = Global_17236.f_7176;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_260(Global_17233, (Global_17234 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_17236.f_1)) != 0)
				{
					func_285();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17236.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17236.f_68)
					{
						if (Global_17236.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17236.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_14[iVar16], Global_17236.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17236.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_17233 + 0.00390625f), ((Global_17234 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17236.f_4989 > Global_17236.f_4499)
				{
					if (Global_17236.f_4992 != 0)
					{
						func_285();
						func_283((((Global_17233 + fParam5) - 0.00390625f) - func_284("CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991)), ((Global_17234 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991);
					}
				}
			}
			iVar6 = Global_17236.f_4993;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17236.f_7187)
			{
				iVar1 = Global_17236.f_7183;
				iVar2 = Global_17236.f_7184;
				iVar3 = Global_17236.f_7185;
				iVar4 = Global_17236.f_7186;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17236.f_4499 && iVar6 <= Global_17236.f_4492)
			{
				if (iVar6 >= 0)
				{
					if (Global_17236.f_4753[iVar6])
					{
						if (Global_17236.f_4627[iVar6] && iVar6 != Global_17236.f_4993)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar54 = Global_17236.f_5000[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 = (fVar49 + fVar54);
					iVar9++;
					if (Global_17236.f_4492 <= 1)
					{
						Global_17236.f_4492++;
					}
					iVar52 = 1;
				}
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17236.f_4989 > Global_17236.f_4499)
			{
				if (Global_17236.f_7192)
				{
					iVar1 = Global_17236.f_7188;
					iVar2 = Global_17236.f_7189;
					iVar3 = Global_17236.f_7190;
					iVar4 = Global_17236.f_7191;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_260(Global_17233, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var37.x = (Var37.x * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17236.f_7205)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), (Var37.x / IntToFloat(iVar57)), (Var37.f_1 / IntToFloat(iVar58)), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_17236.f_3969)) != 0 && Global_17236.f_4043 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_17236.f_4045 != 0)
				{
					func_290(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_282(fVar41);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar41, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_260(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_282(fVar41);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17236.f_4045 != 0)
				{
					func_290(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					func_281(Global_17236.f_4045, 1, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_288(Global_17236.f_4045), func_286(Global_17236.f_4045, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17236.f_4043 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_17236.f_4044) > Global_17236.f_4043)
					{
						StringCopy(&(Global_17236.f_3969), "", 16);
						Global_17236.f_4043 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_2543305.f_21)) != 0 && Global_2543305.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_2543305.f_67 != 0)
				{
					func_290(Global_2543305.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_282(fVar41);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_2543305.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2543305.f_61)
				{
					if (Global_2543305.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_2543305.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2543305.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_2543305.f_34[iVar16], Global_2543305.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2543305.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar41, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_260(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_282(fVar41);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_2543305.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2543305.f_61)
				{
					if (Global_2543305.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_2543305.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2543305.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_2543305.f_34[iVar16], Global_2543305.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2543305.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2543305.f_67 != 0)
				{
					func_290(Global_2543305.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_281(Global_2543305.f_67, 1, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_288(Global_2543305.f_67), func_286(Global_2543305.f_67, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2543305.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_2543305.f_66) > Global_2543305.f_65)
					{
						StringCopy(&(Global_2543305.f_21), "", 16);
						Global_2543305.f_65 = -1;
					}
				}
			}
			func_274(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17236.f_4986)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar63 = Global_17236.f_4492;
			if (Global_17236.f_4987)
			{
				iVar63 = (Global_17236.f_4990 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17236.f_5000[iVar6] != 0f)
				{
					fVar54 = Global_17236.f_5000[iVar6];
				}
				if (Global_17236.f_4987)
				{
					iVar6 = Global_17236.f_6833[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17236.f_4993 && iVar9 < Global_17236.f_4499)
				{
					bVar32 = true;
					if (Global_17236.f_4994 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17236.f_4627[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17236.f_5131[iVar6] = fVar34;
				fVar33 = (Global_17233 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17236.f_4994 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17236.f_7199)
					{
						HUD::GET_HUD_COLOUR(Global_17236.f_7198, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_17233 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17236.f_5129 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_272(bVar31, 1, 0, 0, 0, 0);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("DFLT_MNU_OPT");
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17236.f_4500)
					{
						if (MISC::IS_BIT_SET(Global_17236.f_4366[iVar6], iVar8) || Global_17236.f_4333[iVar8] == 5)
						{
							if (Global_17236.f_4987)
							{
								iVar19 = Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar20 = Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar21 = Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar22 = Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar23 = Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)];
							}
							else
							{
								Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar19;
								Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar20;
								Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar21;
								Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar22;
								Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17236.f_5260[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17236.f_5260[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17236.f_4339[iVar8] != -1f)
							{
								fVar33 = ((Global_17233 + 0.0046875f) + Global_17236.f_4339[iVar8]);
							}
							if ((iVar8 < 4 && Global_17236.f_4339[iVar8 + 1] != -1f) && fVar33 < Global_17236.f_4339[iVar8 + 1])
							{
								fVar45 = (Global_17236.f_4339[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17233 + Global_17235) - 0.0046875f) - fVar33);
							}
							if ((Global_17236.f_4352[iVar8] && Global_17236.f_5126) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17236.f_4333[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_272(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, iVar70, bVar50);
												HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_17236.f_73[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3340[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												fVar42 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_290(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17236.f_3843[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
											Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_290(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_290(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_281(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_288(26), func_286(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_290(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_290(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_281(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_288(27), func_286(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_272(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, bVar50);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_271(bVar31);
											}
											HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17236.f_73[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3340[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17236.f_3843[(iVar22 + iVar28)] == 2)
												{
													if (func_290(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_290(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_281(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_4360[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_288(Global_17236.f_3843[(iVar22 + iVar28)]), func_286(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_288(Global_17236.f_3843[(iVar22 + iVar28)]), func_286(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_17236.f_4360[iVar8] == 2)
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17236.f_3843[(iVar22 + iVar14)] != 2)
												{
													if (func_290(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_290(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_281(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_3843[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_288(Global_17236.f_3843[(iVar22 + iVar14)]), func_286(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (Global_17233 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17236.f_4360[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_288(Global_17236.f_3843[(iVar22 + iVar14)]), func_286(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_288(Global_17236.f_3843[(iVar22 + iVar14)]), func_286(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											func_272(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_271(bVar31);
											}
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3340[iVar20]);
											fVar42 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_290(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_290(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_281(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_288(26), func_286(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_290(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_290(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_281(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_288(27), func_286(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_272(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										func_270((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3340[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											func_272(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_271(bVar31);
											}
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
											fVar42 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_290(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_290(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_281(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_288(26), func_286(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_290(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_290(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_281(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_288(27), func_286(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_272(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										func_269((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_290(Global_17236.f_3843[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17236.f_4987)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17236.f_4360[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
												Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
												fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
											}
											if (bVar51)
											{
												if (func_290(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17236.f_4360[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_290(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_281(26, 1, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(func_288(26), func_286(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_290(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_290(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_281(27, 1, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(func_288(27), func_286(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_290(Global_17236.f_3843[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_281(Global_17236.f_3843[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_288(Global_17236.f_3843[iVar22]), func_286(Global_17236.f_3843[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_268(Global_17236.f_3843[iVar22])), (fVar36 * func_268(Global_17236.f_3843[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17236.f_4333[iVar8] == 5)
							{
								if (Global_17236.f_4345[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								if (Global_17236.f_4352[iVar8])
								{
									if (func_290(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17236.f_6833[iVar9] = iVar6;
						Global_17236.f_4995 = iVar6;
						iVar9++;
						if (Global_17236.f_4627[iVar6])
						{
							iVar13++;
						}
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17236.f_5000[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17236.f_4986)
					{
						Global_17236.f_4753[iVar6] = 1;
						if (Global_17236.f_4501[iVar6])
						{
							if (bVar31)
							{
								Global_17236.f_4992 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17236.f_4992 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17236.f_4986)
			{
				Global_17236.f_4988 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17236.f_4991 = iVar11;
				Global_17236.f_4989 = iVar10;
				Global_17236.f_4986 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17236.f_4987)
	{
		Global_17236.f_4990 = iVar9;
		Global_17236.f_4987 = 1;
	}
	Global_17236.f_5128 = fVar49;
	Global_17236.f_5130 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_17236.f_5128);
	if (!Global_17236.f_7172)
	{
		func_265();
	}
	Global_17236.f_7172 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_264(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_264(int iParam0)//Position - 0xEEE5
{
	Global_1328872.f_756 = iParam0;
}

void func_265()//Position - 0xEEF6
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_215(0))
		{
			func_266(0);
		}
		MISC::SET_BIT(&Global_2264, 2);
	}
}

void func_266(int iParam0)//Position - 0xEF1E
{
	if (Global_14551)
	{
		func_267(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2264, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 30);
	}
	if (!func_186())
	{
		Global_14393.f_1 = 3;
	}
}

void func_267(bool bParam0, bool bParam1)//Position - 0xEF8E
{
	if (bParam0)
	{
		if (func_215(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14330);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
}

float func_268(int iParam0)//Position - 0xF002
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_269(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)//Position - 0xF06B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_270(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xF08A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_271(bool bParam0)//Position - 0xF0A8
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_17236.f_7200[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_17236.f_7200[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_272(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0xF0EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_273(Global_17236.f_5260[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_273(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xF285
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_274(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0xF50F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_145(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_292(bParam4, bParam8))
	{
		return;
	}
	if (func_279())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_277(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_17236.f_4046 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (Global_17236.f_4303[iVar1] != 332)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_17236.f_4303[iVar1], 1), 64);
				}
				else if (Global_17236.f_4316[iVar1] != 31)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_17236.f_4316[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17236.f_4047 = 0;
		}
		if (!Global_17236.f_4047)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_17236.f_4358 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (MISC::GET_HASH_KEY(&(Global_17236.f_4241[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_276(&(Global_17236.f_4048[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_17236.f_4241[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_276(&(Global_17236.f_4048[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17236.f_4290[iVar1] == -1)
					{
						func_275(&(Global_17236.f_4241[iVar1 /*4*/]));
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17236.f_4241[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_17236.f_4303[iVar1] != 332 && MISC::IS_BIT_SET(Global_17236.f_4329, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_17236.f_4303[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(332);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_2543305.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_17236.f_4046);
				func_276(&Global_2543305);
				if (Global_2543305.f_20 == -1)
				{
					func_275(&(Global_2543305.f_16));
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_2543305.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17236.f_4359)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_17236.f_4047 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17236.f_4046)
		{
			if (Global_17236.f_4290[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17236.f_4241[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_2543305.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_2543305.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17236.f_7207)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_17236.f_7207 = 1;
			}
		}
		else if (Global_17236.f_7207)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_17236.f_7207 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_17236.f_4332)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_17236.f_4918[iVar0 /*10*/], Global_17236.f_4330, Global_17236.f_4331, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_17236.f_4918[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_275(var uParam0)//Position - 0xF9EB
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_276(var uParam0)//Position - 0xF9FD
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

bool func_277(int iParam0, int iParam1)//Position - 0xFA0B
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_278(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_278(int iParam0, bool bParam1)//Position - 0xFA56
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_72();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_279()//Position - 0xFA97
{
	struct<3> Var0;
	
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	if (func_280())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_14338 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_280()//Position - 0xFB05
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_281(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0xFB1F
{
	var uVar0;
	
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_282(float fParam0)//Position - 0xFBD3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_17233 + Global_17235) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_283(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xFC32
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_284(char* sParam0, int iParam1, int iParam2)//Position - 0xFC55
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_285();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_285()//Position - 0xFC97
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17236.f_7182)
	{
		iVar0 = Global_17236.f_7178;
		iVar1 = Global_17236.f_7179;
		iVar2 = Global_17236.f_7180;
		iVar3 = Global_17236.f_7181;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_17233 + 0.0046875f), ((Global_17233 + Global_17235) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

var func_286(int iParam0, bool bParam1)//Position - 0xFD21
{
	char* sVar0[2];
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17236.f_6048[iParam0 /*16*/])))
	{
		return func_287(&(Global_17236.f_6048[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_287(var uParam0)//Position - 0x10104
{
	return uParam0;
}

char* func_288(int iParam0)//Position - 0x1010E
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17236.f_5263[iParam0 /*16*/])))
	{
		return func_287(&(Global_17236.f_5263[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_289()//Position - 0x1013D
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_290(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x1016F
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_288(iParam0);
	sVar1 = func_286(iParam0, bParam1);
	if (MISC::GET_HASH_KEY(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_289())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_289())
			{
				fVar4 = 1f;
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		Var7 = { GRAPHICS::GET_TEXTURE_RESOLUTION(uVar0, sVar1) };
		Var7.x = (Var7.x * (func_291(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_291(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17235)
			{
				*fParam4 = (*fParam4 * (Global_17235 / *fParam3));
				*fParam3 = Global_17235;
			}
		}
		return 1;
	}
	return 0;
}

float func_291(int iParam0)//Position - 0x102D6
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_292(bool bParam0, bool bParam1)//Position - 0x1036F
{
	if (Global_2422140.f_1310.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_196(8, -1) && func_293() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_68505) || Global_17236.f_7206) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_90014.f_1318)
	{
		return 0;
	}
	return 1;
}

int func_293()//Position - 0x1040C
{
	return Global_1315832;
}

void func_294(int iParam0, char* sParam1, int iParam2)//Position - 0x10418
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_17236.f_4046 >= 12)
	{
		StringCopy(&Global_2543305, sVar0, 64);
		StringCopy(&(Global_2543305.f_16), sParam1, 16);
		Global_2543305.f_20 = iParam2;
		return;
		return;
	}
	MISC::SET_BIT(&(Global_17236.f_4329), Global_17236.f_4046);
	StringCopy(&(Global_17236.f_4048[Global_17236.f_4046 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17236.f_4241[Global_17236.f_4046 /*4*/]), sParam1, 16);
	Global_17236.f_4290[Global_17236.f_4046] = iParam2;
	Global_17236.f_4303[Global_17236.f_4046] = iParam0;
	Global_17236.f_4316[Global_17236.f_4046] = 31;
	Global_17236.f_4046++;
}

char* func_295(int iParam0)//Position - 0x104C7
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 6;
	}
	switch (iVar0)
	{
		case 6:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		default:
	}
	return "";
}

void func_296(char* sParam0, int iParam1, int iParam2)//Position - 0x10545
{
	int iVar0;
	
	StringCopy(&(Global_17236.f_3969), sParam0, 16);
	Global_17236.f_4039 = 0;
	Global_17236.f_4040 = 0;
	Global_17236.f_4041 = 0;
	Global_17236.f_4042 = 0;
	Global_17236.f_4043 = iParam1;
	Global_17236.f_4044 = MISC::GET_GAME_TIMER();
	Global_17236.f_4045 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_3973[iVar0] = 0;
		iVar0++;
	}
}

void func_297(var uParam0, bool bParam1, int iParam2)//Position - 0x105AA
{
	int iVar0;
	int iVar1;
	
	Global_17236.f_4994 = uParam0;
	Global_17236.f_5126 = iParam2;
	if (Global_17236.f_4994 < Global_17236.f_4993)
	{
		Global_17236.f_4993 = Global_17236.f_4994;
	}
	else if ((Global_17236.f_4987 && Global_17236.f_4994 > Global_17236.f_4995) || (!Global_17236.f_4987 && Global_17236.f_4994 >= (Global_17236.f_4993 + Global_17236.f_4499)))
	{
		iVar0 = Global_17236.f_4993;
		while (iVar0 <= Global_17236.f_4994)
		{
			if (iVar0 >= 0 && iVar0 < 124)
			{
				if (Global_17236.f_4366[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17236.f_4499 && Global_17236.f_4993 < 125)
		{
			Global_17236.f_4993++;
			iVar1 = 0;
			iVar0 = Global_17236.f_4993;
			while (iVar0 <= Global_17236.f_4994)
			{
				if (iVar0 >= 0 && iVar0 < 124)
				{
					if (Global_17236.f_4366[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17236.f_4986 = 0;
	Global_17236.f_4987 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17236.f_3969), "", 16);
		StringCopy(&(Global_2543305.f_21), "", 16);
	}
}

void func_298(int iParam0)//Position - 0x106FC
{
	Global_17236.f_4993 = iParam0;
}

void func_299(var uParam0, bool bParam1)//Position - 0x1070C
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17236.f_4496 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 >= 4)
	{
		return;
	}
	if (Global_17236.f_4999 != 1)
	{
		return;
	}
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		return;
	}
	Global_17236.f_3340[Global_17236.f_4496] = uParam0;
	Global_17236.f_4496++;
	Global_17236.f_1576[Global_17236.f_4997 /*5*/][Global_17236.f_4998] = 2;
	Global_17236.f_4998++;
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		fVar0 = func_301();
		if (Global_17236.f_4352[Global_17236.f_4493] && Global_17236.f_4998 == Global_17236.f_4996)
		{
			func_290(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17236.f_4345[(Global_17236.f_4493 - 1)])
		{
			Global_17236.f_4345[(Global_17236.f_4493 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17236.f_4998 >= Global_17236.f_4996)
		{
			fVar3 = func_300();
			if (fVar3 > Global_17236.f_5000[Global_17236.f_4492])
			{
				Global_17236.f_5000[Global_17236.f_4492] = fVar3;
			}
		}
	}
}

float func_300()//Position - 0x10846
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17236.f_4998)
	{
		if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17236.f_3843[((Global_17236.f_4498 - iVar1) + iVar0)] != 0)
		{
			if (func_290(Global_17236.f_3843[((Global_17236.f_4498 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_301()//Position - 0x108F9
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17236.f_4998)
	{
		if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_272(0, 1, 0, 0, 0, iVar6 > 0);
	if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_17236.f_73[Global_17236.f_4997 /*4*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17236.f_4998)
	{
		if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(Global_17236.f_4997 + iVar8) /*4*/]));
			}
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(Global_17236.f_4997 + iVar8) /*4*/]));
			}
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3340[((Global_17236.f_4496 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3591[((Global_17236.f_4497 - iVar4) + iVar10)], Global_17236.f_3717[((Global_17236.f_4497 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[((Global_17236.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2435345[((Global_17236.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[((Global_17236.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17236.f_3843[((Global_17236.f_4498 - iVar5) + iVar7)] != 0)
		{
			func_290(Global_17236.f_3843[((Global_17236.f_4498 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_302(int iParam0)//Position - 0x10CD4
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (func_246())
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return 2;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return 2;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_303(int iParam0)//Position - 0x10DCF
{
	if (func_112(func_305(iParam0), -1, 0) >= func_304(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_304(var uParam0)//Position - 0x10DF1
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		default:
	}
	return 0;
}

int func_305(var uParam0)//Position - 0x10E46
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1262;
		
		case 1:
			return 1263;
		
		case 2:
			return 1264;
		
		case 4:
			return 1085;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		default:
	}
	return 2903;
}

void func_306(int iParam0, bool bParam1)//Position - 0x10EA2
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17236.f_4498 >= 125)
	{
		return;
	}
	if (Global_17236.f_4998 >= 4)
	{
		return;
	}
	if (Global_17236.f_4999 != 1)
	{
		return;
	}
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		return;
	}
	Global_17236.f_3843[Global_17236.f_4498] = iParam0;
	Global_17236.f_4498++;
	Global_17236.f_1576[Global_17236.f_4997 /*5*/][Global_17236.f_4998] = 4;
	Global_17236.f_4998++;
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		fVar0 = func_301();
		if (Global_17236.f_4352[Global_17236.f_4493] && Global_17236.f_4998 == Global_17236.f_4996)
		{
			func_290(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17236.f_4345[(Global_17236.f_4493 - 1)])
		{
			Global_17236.f_4345[(Global_17236.f_4493 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17236.f_4998 >= Global_17236.f_4996)
		{
			fVar3 = func_300();
			if (fVar3 > Global_17236.f_5000[Global_17236.f_4492])
			{
				Global_17236.f_5000[Global_17236.f_4492] = fVar3;
			}
		}
	}
}

void func_307(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x10FDC
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17236.f_4492 > iParam0)
	{
		return;
	}
	if (Global_17236.f_4492 >= 125)
	{
		return;
	}
	if (Global_17236.f_4494 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 < Global_17236.f_4996)
	{
		return;
	}
	if (Global_17236.f_4492 != iParam0)
	{
		Global_17236.f_4492 = iParam0;
		Global_17236.f_4493 = 0;
	}
	iVar0 = Global_17236.f_4333[Global_17236.f_4493];
	if (iVar0 != 1)
	{
		while (Global_17236.f_4493 < 4 && iVar0 != 1)
		{
			Global_17236.f_4493++;
			iVar0 = Global_17236.f_4333[Global_17236.f_4493];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17236.f_73[Global_17236.f_4494 /*4*/]), sParam1, 16);
	Global_17236.f_1074[Global_17236.f_4494] = iParam3;
	Global_17236.f_1325[Global_17236.f_4494] = iParam4;
	Global_17236.f_4494++;
	if (iParam2 == 0)
	{
		fVar1 = func_309(sParam1);
		if (Global_17236.f_4352[Global_17236.f_4493])
		{
			func_290(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17236.f_4345[Global_17236.f_4493])
		{
			Global_17236.f_4345[Global_17236.f_4493] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_308(sParam1);
			if (fVar4 > Global_17236.f_5000[iParam0])
			{
				Global_17236.f_5000[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_17236.f_4366[iParam0]), Global_17236.f_4493);
	Global_17236.f_4493++;
	Global_17236.f_4999 = 1;
	Global_17236.f_4997 = (Global_17236.f_4494 - 1);
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = iParam2;
}

float func_308(char* sParam0)//Position - 0x1119C
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_309(char* sParam0)//Position - 0x111B8
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_272(0, 1, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

char* func_310(int iParam0)//Position - 0x111F4
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

void func_311(int iParam0, char* sParam1, char* sParam2)//Position - 0x11259
{
	Global_17236 = iParam0;
	func_312(29, sParam1, sParam2);
}

void func_312(int iParam0, char* sParam1, char* sParam2)//Position - 0x11270
{
	StringCopy(&(Global_17236.f_5263[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17236.f_6048[iParam0 /*16*/]), sParam2, 64);
}

void func_313(char* sParam0)//Position - 0x11294
{
	int iVar0;
	
	StringCopy(&(Global_17236.f_1), sParam0, 16);
	Global_17236.f_68 = 0;
	Global_17236.f_69 = 0;
	Global_17236.f_70 = 0;
	Global_17236.f_71 = 0;
	Global_17236.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_314(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x112DF
{
	Global_17236.f_4360[0] = iParam0;
	Global_17236.f_4360[1] = iParam1;
	Global_17236.f_4360[2] = iParam2;
	Global_17236.f_4360[3] = iParam3;
	Global_17236.f_4360[4] = iParam4;
}

void func_315(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1131E
{
	Global_17236.f_4333[0] = iParam0;
	Global_17236.f_4333[1] = iParam1;
	Global_17236.f_4333[2] = iParam2;
	Global_17236.f_4333[3] = iParam3;
	Global_17236.f_4333[4] = iParam4;
	Global_17236.f_4500 = 0;
	if (iParam0 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam1 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam2 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam3 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam4 != 0)
	{
		Global_17236.f_4500++;
	}
}

void func_316(bool bParam0)//Position - 0x113C8
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 250)
	{
		StringCopy(&(Global_17236.f_73[iVar0 /*4*/]), "", 16);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17236.f_1576[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2435345[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 250)
	{
		Global_17236.f_3340[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_3591[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_3843[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_4366[iVar0] = 0;
		Global_17236.f_4501[iVar0] = 0;
		Global_17236.f_4627[iVar0] = 0;
		Global_17236.f_5131[iVar0] = 0f;
		Global_17236.f_4753[iVar0] = 0;
		Global_17236.f_5000[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17236.f_4333[iVar0] = 0;
		Global_17236.f_4345[iVar0] = 0f;
		Global_17236.f_4339[iVar0] = -1f;
		Global_17236.f_4352[iVar0] = 0;
		Global_17236.f_4360[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17236.f_4241[iVar0 /*4*/]), "", 16);
		Global_17236.f_4290[iVar0] = -1;
		Global_17236.f_4303[iVar0] = 332;
		Global_17236.f_4316[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&(Global_17236.f_5263[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17236.f_6048[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2543305.f_16), "", 16);
	Global_2543305.f_20 = -1;
	Global_17236 = 0;
	Global_17236.f_4492 = 0;
	Global_17236.f_4493 = 0;
	Global_17236.f_4494 = 0;
	Global_17236.f_4496 = 0;
	Global_17236.f_4497 = 0;
	Global_17236.f_4498 = 0;
	Global_17236.f_4495 = 0;
	Global_17236.f_5126 = 0;
	Global_17236.f_4994 = 0;
	Global_17236.f_4993 = 0;
	Global_17236.f_4995 = 0;
	StringCopy(&(Global_17236.f_3969), "", 16);
	Global_17236.f_4039 = 0;
	Global_17236.f_4040 = 0;
	Global_17236.f_4041 = 0;
	Global_17236.f_4042 = 0;
	Global_17236.f_4043 = 0;
	Global_17236.f_4044 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_3973[iVar0] = 0;
		iVar0++;
	}
	Global_17236.f_4045 = 0;
	StringCopy(&(Global_2543305.f_21), "", 16);
	Global_2543305.f_61 = 0;
	Global_2543305.f_62 = 0;
	Global_2543305.f_63 = 0;
	Global_2543305.f_64 = 0;
	Global_2543305.f_65 = 0;
	Global_2543305.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2543305.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2543305.f_67 = 0;
	StringCopy(&(Global_17236.f_1), "", 16);
	Global_17236.f_4351 = 0f;
	Global_17236.f_68 = 0;
	Global_17236.f_69 = 0;
	Global_17236.f_70 = 0;
	Global_17236.f_71 = 0;
	Global_17236.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17236.f_4999 = 0;
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = 0;
	Global_17236.f_4997 = 0;
	Global_17236.f_4046 = 0;
	Global_17236.f_4047 = 0;
	Global_17236.f_4499 = 10;
	Global_17236.f_4500 = 0;
	Global_17236.f_5128 = 0f;
	Global_17236.f_5129 = 0f;
	Global_17236.f_4986 = 0;
	Global_17236.f_4987 = 0;
	Global_17236.f_4988 = 0f;
	Global_17236.f_4989 = 0;
	Global_17236.f_4991 = 0;
	Global_17236.f_4990 = 0;
	Global_17236.f_4992 = 0;
	Global_17236.f_7203 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17236.f_5257[iVar0] = -1;
		Global_17236.f_5260[iVar0] = -1;
		iVar0++;
	}
	Global_17236.f_4358 = 0f;
	Global_17236.f_4329 = 0;
	Global_17236.f_4359 = 0;
	Global_17236.f_7182 = 0;
	Global_17236.f_7177 = 0;
	Global_17236.f_7187 = 0;
	Global_17236.f_7192 = 0;
	Global_17236.f_7197 = 0;
	Global_17236.f_7199 = 0;
	Global_17236.f_7205 = 0;
	Global_17233 = 0.05f;
	Global_17234 = 0.05f;
	Global_17235 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_17235 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17235 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17235 = 0.225f;
	}
}

int func_317(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x11862
{
	struct<3> Var0;
	float fVar3;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			Var0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar3 = -1.15f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			Var0 = { -2967.027f, 390.9038f, 15.02f };
			fVar3 = -94.76f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			Var0 = { -1222.331f, -907.8234f, 12.31f };
			fVar3 = -147.297f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			Var0 = { 1134.811f, -982.3615f, 46.4f };
			fVar3 = 96.68562f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			Var0 = { -1486.673f, -378.4638f, 40.15f };
			fVar3 = -46.229f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			Var0 = { -3244.573f, 1000.658f, 12.83f };
			fVar3 = 175.074f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			Var0 = { -3041.357f, 584.2665f, 7.9f };
			fVar3 = -162.241f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			Var0 = { 548.9015f, 2668.941f, 42.15f };
			fVar3 = -82.5f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			Var0 = { 2554.875f, 381.3857f, 108.62f };
			fVar3 = 177.716f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			Var0 = { 2676.212f, 3280.969f, 55.24f };
			fVar3 = 150.87f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			Var0 = { 1729.329f, 6417.123f, 35.03f };
			fVar3 = 63.641f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			Var0 = { 1959.323f, 3742.29f, 32.34f };
			fVar3 = 120f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			Var0 = { 24.94562f, -1344.954f, 29.49f };
			fVar3 = 90f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			Var0 = { 373.5954f, 328.5892f, 103.56f };
			fVar3 = 75.885f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case -2:
			*uParam1 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_318()//Position - 0x11FFB
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

void func_319(int iParam0)//Position - 0x12019
{
	if (!func_232(PLAYER::PLAYER_ID(), 1))
	{
		if (!func_324())
		{
			Global_1312418.f_1 = 1;
			if (iParam0 == 1)
			{
				Global_1312418.f_2 = 1;
			}
			func_320();
		}
	}
}

void func_320()//Position - 0x12054
{
	if (!func_324())
	{
		Global_1312418 = 1;
		func_323();
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_322()) && !func_321(PLAYER::PLAYER_ID()))
		{
			Global_971736 = 1;
		}
	}
}

int func_321(int iParam0)//Position - 0x12092
{
	if (func_232(iParam0, 1))
	{
		if (Global_1582596[iParam0 /*324*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_322()//Position - 0x120B6
{
	return Global_2428131.f_711;
}

void func_323()//Position - 0x120C5
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_324())
		{
			if (func_360(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 0);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 0);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
			if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
			{
				NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(0);
			}
		}
		else
		{
			if (func_360(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 1);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(1);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(1);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
		}
	}
}

bool func_324()//Position - 0x121AD
{
	return Global_1312418;
}

void func_325(var uParam0)//Position - 0x121B9
{
	func_103(uParam0, 0f);
}

int func_326(int iParam0, bool bParam1)//Position - 0x121C8
{
	int iVar0;
	
	iVar0 = func_212(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_215(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/] == 1 && Global_35613[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35613[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35613[iVar0 /*18*/].f_4 = 1;
			Global_35613[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35613[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35613[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

int func_327()//Position - 0x12280
{
	if (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount > 0)
	{
		return 0;
	}
	return 1;
}

bool func_328()//Position - 0x1229D
{
	return Global_17096;
}

int func_329(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x122A8
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

void func_330()//Position - 0x1248E
{
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	func_372(PLAYER::PLAYER_ID(), 1, 0, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	if (iLocal_800 > 0)
	{
		Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5 = iLocal_800;
		iLocal_800 = 0;
	}
	func_351();
	if (func_128("SHR_MENU"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (Local_90.f_14 != -1)
	{
		func_211(&(Local_90.f_14));
	}
	if (CAM::DOES_CAM_EXIST(Local_90.f_1))
	{
		CAM::DESTROY_CAM(Local_90.f_1, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
}

int func_331(float fParam0)//Position - 0x12514
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (fParam0 <= 0f)
		{
			return PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID()) > 0;
		}
		else
		{
			return PED::_0x336B3D200AB007CB(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), fParam0) > 0;
		}
	}
	return 0;
}

int func_332(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x12565
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_333()//Position - 0x125B8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Local_141.f_64[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_334()//Position - 0x125E4
{
	TASK::OPEN_SEQUENCE_TASK(&uLocal_556);
	TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_556);
	TASK::OPEN_SEQUENCE_TASK(&uLocal_557);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_557);
	TASK::OPEN_SEQUENCE_TASK(&uLocal_558);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_543, 2f, -1, 0.25f, 0, fLocal_546);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	TASK::TASK_SMART_FLEE_COORD(0, Local_543, 250f, -1, 1, 0);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_558);
	TASK::OPEN_SEQUENCE_TASK(&uLocal_560);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_560);
	TASK::OPEN_SEQUENCE_TASK(&uLocal_559);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_543, 2f, -1, 0.25f, 0, (fLocal_546 - 180f));
	TASK::TASK_SWAP_WEAPON(0, 1);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 20f, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_559);
}

void func_335(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1276B
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

int func_336(var uParam0)//Position - 0x12806
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

int func_337()//Position - 0x12825
{
	return Local_141;
}

char* func_338(int iParam0)//Position - 0x1282F
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_339()//Position - 0x128DB
{
	struct<3> Var0;
	
	if (func_347(&iLocal_769))
	{
		func_345(iLocal_769, &iLocal_580, &iLocal_581, &iLocal_582, &iLocal_583, &Local_584, &Local_587);
		func_344(iLocal_769, &Local_590, &Local_593, &uLocal_596);
		func_343(iLocal_769, &Local_597, &Local_600, &fLocal_603);
		switch (iLocal_769)
		{
			case 0:
				Local_548 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				Local_551 = { 0f, 0f, 21.89f };
				iLocal_539 = func_359(0);
				Local_543 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_546 = 116.5329f;
				iLocal_575 = 1;
				if (func_341(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				break;
			
			case 1:
				Local_551 = { 0f, 0f, -160f };
				Local_548 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_539 = func_359(0);
				Local_543 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_546 = 178.8753f;
				iLocal_575 = 1;
				if (func_341(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				break;
			
			case 2:
				Local_548 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				Local_551 = { 0f, 0f, 175.52f };
				iLocal_539 = func_359(0);
				Local_543 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_546 = 191.594f;
				iLocal_575 = 1;
				if (func_341(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				break;
			
			case 3:
				Local_551 = { 0f, 0f, -82.38f };
				Local_548 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_539 = func_359(0);
				Local_543 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_546 = 228.4295f;
				iLocal_575 = 1;
				if (func_341(6, 18))
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				break;
			
			case 4:
				Local_551 = { 0f, 0f, 180f };
				Local_548 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_539 = func_359(0);
				Local_543 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_546 = 197.2994f;
				iLocal_575 = 1;
				if (func_341(6, 18))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				break;
			
			case 5:
				Local_551 = { 0f, 0f, 155f };
				Local_548 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_539 = func_359(0);
				Local_543 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_546 = 296.5427f;
				iLocal_575 = 1;
				if (func_341(6, 18))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				break;
			
			case 6:
				Local_551 = { 0f, 0f, 63.3f };
				Local_548 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_539 = func_359(0);
				Local_543 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_546 = 130.9518f;
				iLocal_575 = 1;
				if (func_341(6, 18))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				break;
			
			case 7:
				Local_551 = { 0f, 0f, 117f };
				Local_548 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_539 = func_359(0);
				Local_543 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_546 = 73.6245f;
				iLocal_575 = 1;
				if (func_341(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				break;
			
			case 8:
				Local_551 = { 0f, 0f, 92f };
				Local_548 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_539 = func_359(0);
				Local_543 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_546 = 110.7699f;
				iLocal_575 = 1;
				if (func_341(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				break;
			
			case 9:
				Local_551 = { 0f, 0f, 75f };
				Local_548 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_539 = func_359(0);
				Local_543 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_546 = 52.0064f;
				iLocal_575 = 1;
				if (func_341(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				break;
			
			case 10:
				Local_551 = { 0f, 0f, 0f };
				Local_548 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_539 = func_359(0);
				Local_543 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_546 = 136.5945f;
				iLocal_575 = 3;
				if (func_341(10, 22))
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 11:
				Local_551 = { 0f, 0f, -92f };
				Local_548 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_539 = func_359(0);
				Local_543 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_546 = 176.1174f;
				iLocal_575 = 3;
				if (func_341(10, 22))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 12:
				Local_551 = { 0f, 0f, -145f };
				Local_548 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_539 = func_359(0);
				Local_543 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_546 = 43.8031f;
				iLocal_575 = 3;
				if (func_341(10, 22))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 13:
				Local_551 = { 0f, 0f, 103f };
				Local_548 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_539 = func_359(0);
				Local_543 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_546 = 269.2587f;
				iLocal_575 = 3;
				if (func_341(10, 22))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 14:
				Local_551 = { 0f, 0f, -41f };
				Local_548 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_539 = func_359(0);
				Local_543 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_546 = 36.5415f;
				iLocal_575 = 3;
				if (func_341(10, 22))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 15:
				Local_551 = { 0f, 0f, 145f };
				Local_548 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_539 = func_359(0);
				Local_543 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_546 = 24.9178f;
				iLocal_575 = 2;
				if (func_341(8, 20))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 16:
				Local_551 = { 0f, 0f, -87f };
				Local_548 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_539 = func_359(0);
				Local_543 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_546 = 291.6504f;
				iLocal_575 = 2;
				if (func_341(8, 20))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 17:
				Local_551 = { 0f, 0f, -125f };
				Local_548 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_539 = func_359(0);
				Local_543 = { -40.42f, -1751.423f, 28.421f };
				fLocal_546 = 145.6553f;
				iLocal_575 = 2;
				if (func_341(8, 20))
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 18:
				Local_551 = { 0f, 0f, -74f };
				Local_548 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_539 = func_359(0);
				Local_543 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_546 = 232.6337f;
				iLocal_575 = 2;
				if (func_341(8, 20))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 19:
				Local_548 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				Local_551 = { 0f, 0f, -47.3f };
				iLocal_539 = func_359(0);
				Local_543 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_546 = 247.1234f;
				iLocal_575 = 2;
				if (func_341(8, 20))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
		}
		Local_548 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_548, Local_551.f_2, 0f, 0.075f, 0f) };
		Local_540 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s", Local_548, Local_551, 0, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s", Local_548, Local_551, 0, 2) };
		Local_141.f_33 = Var0.f_2;
		Local_564 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_bag", Local_548, Local_551, 0, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_bag", Local_548, Local_551, 0, 2) };
		uLocal_567 = Var0.f_2;
		Local_568 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_till", Local_548, Local_551, 0, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_till", Local_548, Local_551, 0, 2) };
		uLocal_571 = Var0.f_2;
		Local_90 = func_340(iLocal_769);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_141.f_37 = iLocal_770[0];
			if (Local_141.f_37 == 0)
			{
				StringCopy(&(Local_141.f_42), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_141.f_38), "StoreOwner2", 16);
			}
			else if (Local_141.f_37 == 1)
			{
				StringCopy(&(Local_141.f_42), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_141.f_38), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_141.f_42), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_141.f_38), "StoreOwner3", 16);
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_535, 29))
		{
			ENTITY::CREATE_MODEL_HIDE(Local_548, 0.5f, iLocal_572, 1);
			MISC::SET_BIT(&iLocal_535, 29);
		}
		return 1;
	}
	return 0;
}

int func_340(int iParam0)//Position - 0x13D58
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return -2;
		
		default:
	}
	return -1;
}

bool func_341(int iParam0, int iParam1)//Position - 0x13E3D
{
	return func_342(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_342(int iParam0, int iParam1, int iParam2)//Position - 0x13E51
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_343(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x13EFA
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393.091f, 3607.383f, 33.9809f };
		*uParam2 = { 1391.178f, 3612.516f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045.013f, 585.9666f, (10.35421f - 0.2f) };
		*uParam2 = { -3048.714f, 584.7961f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247.313f, 1003.657f, (15.27433f - 0.2f) };
		*uParam2 = { -3251.157f, 1003.984f, 11.83501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546.5474f, 2665.642f, (44.60108f - 0.2f) };
		*uParam2 = { 547.054f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552f, 384.2527f, (111.0656f - 0.2f) };
		*uParam2 = { 2548.145f, 384.4133f, 107.6241f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674.946f, 3284.833f, (57.68088f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.699f, 54.24464f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733.119f, 6418.579f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.839f, 6422.032f, 34.03751f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960.224f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.295f, 3749.599f, 31.34522f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27.71382f, -1341.968f, (31.93314f - 0.2f) };
		*uParam2 = { 27.71049f, -1338.109f, 28.49479f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377.0183f, 330.808f, (106.0112f - 0.2f) };
		*uParam2 = { 377.9499f, 334.5523f, 102.567f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167.015f, 2711.601f, (40.66147f - 0.2f) };
		*uParam2 = { 1167.082f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965.705f, 389.6696f, (17.64162f - 0.2f) };
		*uParam2 = { -2957.095f, 389.139f, 13.04323f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222.402f, -909.5575f, (14.92466f - 0.2f) };
		*uParam2 = { -1217.682f, -916.7974f, 10.33735f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.284f, -981.473f, (49.01414f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.883f, -378.2694f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.771f, -372.1664f, 38.16948f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704.556f, 4921.806f, (44.02687f - 0.2f) };
		*uParam2 = { 1708.285f, 4919.196f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709.019f, -907.7159f, (21.17918f - 0.2f) };
		*uParam2 = { -709.0177f, -903.1516f, 18.21618f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.37973f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.09f, 28.42099f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160.825f, -317.4214f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.033f, -312.932f, 68.20509f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826.218f, 796.6393f, (140.1334f - 0.2f) };
		*uParam2 = { -1829.301f, 799.9996f, 137.18f };
		*uParam3 = 4f;
	}
}

void func_344(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x143BD
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395.548f, 3600.575f, 33.98914f };
		*uParam2 = { 1392.08f, 3609.983f, (37.33543f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.476f, 587.4066f, (11.31222f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240.032f, 1004.482f, 11.8307f };
		*uParam2 = { -3247.188f, 1005.107f, (16.25224f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544.2278f, 2672.5f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559.176f, 385.3936f, 107.623f };
		*uParam2 = { 2552.054f, 385.6057f, (112.1638f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681.864f, 3282.603f, 54.24114f };
		*uParam2 = { 2675.586f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731.237f, 6411.557f, 34.03723f };
		*uParam2 = { 1734.383f, 6417.952f, (38.58461f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964.999f, 3740.795f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.89571f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.382f, 27.05614f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376.6309f, 323.5533f, 102.5664f };
		*uParam2 = { 378.3253f, 330.4793f, (107.1095f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166.497f, 2703.756f, 37.06307f };
		*uParam2 = { 1166.525f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973.512f, 390.7873f, 14.04322f };
		*uParam2 = { -2965.288f, 390.2452f, (18.54322f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226.417f, -902.6738f, 11.33496f };
		*uParam2 = { -1221.765f, -909.5887f, (15.82626f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141.35f, -980.9322f, 45.41594f };
		*uParam2 = { 1132.976f, -982.0952f, (49.91574f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490.949f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.006f, -377.6167f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698.98f, 4929.093f, 41.06357f };
		*uParam2 = { 1705.233f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711.77f, -916.4685f, 18.21557f };
		*uParam2 = { -711.7368f, -908.7517f, (22.76488f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52.90452f, -1756.474f, 28.42097f };
		*uParam2 = { -47.92523f, -1750.614f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159.633f, -326.5087f, 68.20507f };
		*uParam2 = { 1158.335f, -318.9123f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822.373f, 788.2851f, 137.1876f };
		*uParam2 = { -1827.484f, 794.0739f, (141.6933f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_345(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1486A
{
	func_346(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_methlab");
			}
			*uParam2 = -1621784842;
			*uParam4 = -924210258;
			*uParam3 = -1;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_shop_247");
			}
			*uParam2 = 1569794095;
			*uParam4 = 462608346;
			*uParam3 = -1;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gen_liquor");
			}
			*uParam2 = -278510267;
			*uParam4 = -1293435817;
			*uParam3 = -1;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gasstation");
			}
			*uParam2 = -1659520475;
			*uParam4 = -1272390353;
			*uParam3 = -835664728;
			break;
	}
}

void func_346(int iParam0, var uParam1, var uParam2)//Position - 0x149B3
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394.169f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.548f, 3600.575f, 33.98914f };
			break;
		
		case 1:
			*uParam1 = { -3038.908f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 2:
			*uParam1 = { -3240.317f, 1004.433f, 11.8307f };
			*uParam2 = { -3240.032f, 1004.482f, 11.8307f };
			break;
		
		case 3:
			*uParam1 = { 544.2802f, 2672.811f, 41.1566f };
			*uParam2 = { 544.2278f, 2672.5f, 41.1565f };
			break;
		
		case 4:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.176f, 385.3936f, 107.623f };
			break;
		
		case 5:
			*uParam1 = { 2682.003f, 3282.543f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.603f, 54.24114f };
			break;
		
		case 6:
			*uParam1 = { 1731.21f, 6411.403f, 34.0372f };
			*uParam2 = { 1731.237f, 6411.557f, 34.03723f };
			break;
		
		case 7:
			*uParam1 = { 1965.054f, 3740.555f, 31.3448f };
			*uParam2 = { 1964.999f, 3740.795f, 31.34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.6309f, 323.5533f, 102.5664f };
			break;
		
		case 10:
			*uParam1 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.497f, 2703.756f, 37.06307f };
			break;
		
		case 11:
			*uParam1 = { -2973.262f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.512f, 390.7873f, 14.04322f };
			break;
		
		case 12:
			*uParam1 = { -1226.464f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.417f, -902.6738f, 11.33496f };
			break;
		
		case 13:
			*uParam1 = { 1141.36f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.35f, -980.9322f, 45.41594f };
			break;
		
		case 14:
			*uParam1 = { -1491.057f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.949f, -383.4771f, 39.16332f };
			break;
		
		case 15:
			*uParam1 = { 1698.808f, 4929.198f, 41.0783f };
			*uParam2 = { 1698.98f, 4929.093f, 41.06357f };
			break;
		
		case 16:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.77f, -916.4685f, 18.21557f };
			break;
		
		case 17:
			*uParam1 = { -53.124f, -1756.405f, 28.421f };
			*uParam2 = { -52.90452f, -1756.474f, 28.42097f };
			break;
		
		case 18:
			*uParam1 = { 1159.542f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.5087f, 68.20507f };
			break;
		
		case 19:
			*uParam1 = { -1822.287f, 788.006f, 137.1859f };
			*uParam2 = { -1822.373f, 788.2851f, 137.1876f };
			break;
	}
}

int func_347(int iParam0)//Position - 0x14D8A
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 9999.9f;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_80(PLAYER::PLAYER_ID()), func_348(iVar2), 1);
		if (fVar0 < fVar1)
		{
			fVar1 = fVar0;
			*iParam0 = iVar2;
		}
		iVar2++;
	}
	return 1;
}

Vector3 func_348(int iParam0)//Position - 0x14DD3
{
	struct<3> Var0;
	var uVar3;
	
	func_346(iParam0, &Var0, &uVar3);
	return Var0;
}

int func_349(int iParam0)//Position - 0x14DE9
{
	return Local_214[iParam0 /*10*/];
}

void func_350()//Position - 0x14DF7
{
	Global_2428131.f_656.f_28 = 0;
}

void func_351()//Position - 0x14E09
{
	if (Global_1312418.f_1 == 1)
	{
		func_352(0);
		Global_1312418.f_1 = 0;
		Global_1312418.f_2 = 0;
	}
}

void func_352(int iParam0)//Position - 0x14E2E
{
	if (func_324())
	{
		if (iParam0 == 1)
		{
			if (Global_2446554.f_4229 == -1)
			{
				Global_2446554.f_4229 = 60000;
			}
			func_353(&(Global_2446554.f_4227), 0, 0);
			if (Global_2446554.f_4232 == -1)
			{
				Global_2446554.f_4232 = 10000;
			}
			func_353(&(Global_2446554.f_4230), 0, 0);
		}
		else
		{
			Global_1312418 = 0;
			func_323();
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_322()) && !func_321(PLAYER::PLAYER_ID()))
		{
			Global_971736 = 0;
		}
	}
}

void func_353(var uParam0, bool bParam1, bool bParam2)//Position - 0x14EB9
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_354(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x14EF6
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_357())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_72()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_2540557 = 1;
			return 0;
		}
		if (Global_2435880)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2540558 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2540096[iVar1 /*69*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			*uParam0 = func_244(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2540096[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2540554 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2540556 = 1;
			Global_2540559 = iParam4;
			Global_2540561 = iParam3;
			Global_2540562 = 1;
			Global_2540560 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2540559 = iParam4;
			Global_2540561 = iParam3;
			Global_2540562 = 1;
			Global_2540560 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_356(1, iParam4);
			Global_2540556 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_355(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_355(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)//Position - 0x1506A
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_221(iParam0);
	}
}

void func_356(int iParam0, var uParam1)//Position - 0x150A1
{
	Global_2437132 = uParam1;
	Global_2437131 = iParam0;
}

int func_357()//Position - 0x150B5
{
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	return 0;
}

int func_358(int iParam0)//Position - 0x150C9
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_359(int iParam0)//Position - 0x150E7
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_m_shopkeep_01");
		
		case 1:
			return joaat("p_poly_bag_01_s");
		
		case 2:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("mp_m_shopkeep_01");
}

int func_360(int iParam0, bool bParam1, bool bParam2)//Position - 0x15125
{
	int iVar0;
	
	iVar0 = iParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422140.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_361()//Position - 0x15169
{
	bool bVar0;
	
	func_368(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_367())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (func_366())
	{
		return 1;
	}
	if (func_365(157))
	{
		if (!func_364())
		{
			return 1;
		}
	}
	if (func_365(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_362() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_362()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_362()//Position - 0x151FC
{
	switch (func_363())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_363()//Position - 0x15230
{
	return Global_24444;
}

bool func_364()//Position - 0x1523B
{
	return Global_2428131.f_572;
}

int func_365(int iParam0)//Position - 0x1524A
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_366()//Position - 0x15261
{
	return Global_2435238;
}

bool func_367()//Position - 0x1526D
{
	return Global_2428131.f_567;
}

void func_368(var uParam0)//Position - 0x1527C
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 168)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_369(iVar0);
					break;
				
				case 2:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_369(int iParam0)//Position - 0x152EC
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_360(Var0.f_1, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_370(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_370(int iParam0, var uParam1)//Position - 0x1536D
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
				*uParam1 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_371()//Position - 0x153BB
{
	SYSTEM::WAIT(0);
}

void func_372(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x153C8
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	var uVar23;
	int iVar24;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		if (!func_376())
		{
			bVar22 = false;
			if (bParam1 == 1)
			{
				bVar22 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar22 = true;
			}
			if (bVar9 == 1)
			{
				bVar22 = true;
			}
			if (bVar22)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			uVar23 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar23, !bVar13);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2414009[iParam0 /*254*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_375(uVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar23))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar23, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar23))
				{
					if (!bVar20)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar23, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar23, 1);
				}
				else if (!bVar20)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar23, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar23, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PED::FINALIZE_HEAD_BLEND(uVar23);
				PED::SET_PED_CAN_RAGDOLL(uVar23, 1);
				func_374();
				func_373();
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2414009[iParam0 /*254*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_375(uVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar23))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar23, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(uVar23))
					{
						if (!bVar20)
						{
							ENTITY::FREEZE_ENTITY_POSITION(uVar23, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar23, 1);
						}
					}
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar23, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(uVar23) && !PED::IS_PED_IN_ANY_VEHICLE(uVar23, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar23);
					}
				}
			}
			iVar24 = 0;
			if (bVar1)
			{
				iVar24 |= 2;
			}
			if (bVar2)
			{
				iVar24 |= 4;
			}
			if (bVar3)
			{
				iVar24 |= 8;
			}
			if (bVar4)
			{
				iVar24 |= 16;
			}
			if (bVar5)
			{
				iVar24 |= 32;
			}
			if (bVar6)
			{
				iVar24 |= 64;
			}
			if (bVar7)
			{
				iVar24 |= 128;
			}
			if (bVar8)
			{
				iVar24 |= 256;
			}
			if (bVar9)
			{
				iVar24 |= 512;
			}
			if (bVar10)
			{
				iVar24 |= 1024;
			}
			if (bVar11)
			{
				iVar24 |= 2048;
			}
			if (bVar12)
			{
				iVar24 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar24);
		}
	}
}

void func_373()//Position - 0x15747
{
	struct<2> Var0;
	
	Global_2422140.f_676 = 0;
	Global_2422140.f_677 = 0;
	Global_2422140.f_678 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404548.f_1376 = { Var0 };
}

void func_374()//Position - 0x15784
{
	Global_2404548.f_538 = 0;
	Global_2404548.f_1417 = 0;
	Global_2404548.f_420 = 0;
	Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_204 = 0;
}

int func_375(int iParam0)//Position - 0x157B1
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_376()//Position - 0x157E2
{
	if (func_377() == 0)
	{
		return 1;
	}
	return 0;
}

int func_377()//Position - 0x157F7
{
	return Global_1312467.f_18;
}

bool func_378(bool bParam0)//Position - 0x15805
{
	if (bParam0)
	{
		return (Global_2428131.f_656.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2428131.f_656.f_31);
	}
	return Global_2428131.f_656.f_28;
}

void func_379()//Position - 0x15841
{
	int iVar0;
	
	Global_2446554.f_6 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_336(Local_141.f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_141.f_1) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_141.f_1) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_141.f_1), 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_141.f_1));
				if (MISC::IS_BIT_SET(iLocal_535, 22))
				{
					if (MISC::IS_BIT_SET(iLocal_535, 20))
					{
						if (Local_141.f_36 != 7)
						{
							if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 9))
							{
								TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_141.f_1));
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_141.f_1), uLocal_558);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_141.f_1), 0);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), -1442466670) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_1), -1442466670) != 1)
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_141.f_1));
							if (!WEAPON::HAS_PED_GOT_WEAPON(NETWORK::NET_TO_PED(Local_141.f_1), joaat("weapon_pistol"), 0))
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_141.f_1), joaat("weapon_pistol"), 25000, 1);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_141.f_1), 30);
							}
							func_181(4);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_141.f_1), 20f, 0);
						}
					}
					else if ((MISC::IS_BIT_SET(Local_141.f_12, 3) || !func_9()) || !func_382())
					{
						if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 9))
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_141.f_1));
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_141.f_1), uLocal_558);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_141.f_1), 0);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_141.f_1));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_141.f_1), 1);
						TASK::TASK_STAND_STILL(NETWORK::NET_TO_PED(Local_141.f_1), -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_141.f_1), 0);
					}
				}
			}
		}
		if ((MISC::IS_BIT_SET(Local_141.f_12, 3) || !func_9()) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_141.f_2))
				{
					ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_141.f_2), 1, 1);
					func_42(&(Local_141.f_2));
				}
			}
		}
		if (((MISC::IS_BIT_SET(Local_141.f_12, 3) || !func_9()) || MISC::IS_BIT_SET(iLocal_535, 20)) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_3))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_141.f_3))
				{
					func_42(&(Local_141.f_3));
				}
			}
		}
		if (Local_141 == 6)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_1))
			{
				if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_141.f_1), "XP_Blocker"))
				{
					DECORATOR::DECOR_REMOVE(NETWORK::NET_TO_PED(Local_141.f_1), "XP_Blocker");
				}
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			EVENT::REMOVE_SHOCKING_EVENT(Local_141.f_21);
		}
	}
	func_381();
	STREAMING::REMOVE_ANIM_DICT("mp_am_hold_up");
	PLAYER::_0x0032A6DBA562C518();
	if (func_128("SHR_MENU"))
	{
		HUD::CLEAR_HELP(1);
	}
	Global_2446554.f_7 = func_180();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_338(Local_90));
	func_143(1, Local_90);
	if (Local_90.f_14 != -1)
	{
		func_211(&(Local_90.f_14));
	}
	Global_2446554.f_25 = Local_90;
	if (MISC::IS_BIT_SET(iLocal_535, 29))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_548, 0.5f, iLocal_572, 1);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Local_141.f_12, 6) || MISC::IS_BIT_SET(Local_141.f_12, 21))
		{
			if (MISC::IS_BIT_SET(Local_141.f_12, 21))
			{
				iVar0 = 1;
			}
			STATS::PLAYSTATS_HOLD_UP_MISSION_DONE(30, iLocal_798, iLocal_799, iVar0);
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_90.f_1))
	{
		if (CAM::IS_CAM_ACTIVE(Local_90.f_1))
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		}
		CAM::DESTROY_CAM(Local_90.f_1, 0);
	}
	func_380();
}

void func_380()//Position - 0x15BE8
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_381()//Position - 0x15BF4
{
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_555);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_556);
}

int func_382()//Position - 0x15C0A
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			uVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (func_360(iVar1, 1, 1))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(uVar2) == iLocal_580)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_383(struct<20> Param0)//Position - 0x15C64
{
	var uVar0;
	
	func_390(func_391(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(8);
	func_388(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_141, 73);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_214, 321);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_387())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_358(func_359(0));
		func_358(func_359(1));
		func_358(func_359(2));
		STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
		STREAMING::REQUEST_ANIM_DICT("mp_missheist_countrybank@cower");
		Local_141.f_35 = 8;
		if (func_386())
		{
			MISC::SET_BIT(&(Local_141.f_13), 11);
		}
		else if (func_385())
		{
			MISC::SET_BIT(&(Local_141.f_13), 12);
		}
		Local_141.f_19 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
		Local_141.f_22 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
		if ((func_12() && !func_384(PLAYER::PLAYER_ID(), 1)) && !func_384(PLAYER::PLAYER_ID(), 2))
		{
			Local_141.f_34 = 2;
			MISC::SET_BIT(&(Local_141.f_14), 0);
		}
		else
		{
			Local_141.f_34 = 1;
		}
		Local_141.f_71 = MISC::GET_RANDOM_FLOAT_IN_RANGE(18f, 28f);
	}
	OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(func_359(1), 0);
	uVar0 = func_112(1178, -1, 0);
	if (MISC::IS_BIT_SET(uVar0, 20) && MISC::IS_BIT_SET(iVar0, 21))
	{
		MISC::SET_BIT(&iLocal_536, 1);
	}
	Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = 0;
	return 1;
}

bool func_384(int iParam0, int iParam1)//Position - 0x15DAF
{
	return MISC::IS_BIT_SET(Global_2414009[iParam0 /*254*/].f_205, iParam1);
}

int func_385()//Position - 0x15DC7
{
	if (iLocal_769 >= 0 && iLocal_769 <= 9)
	{
		if (func_341(5, 6) || func_341(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_769 >= 10 && iLocal_769 <= 14)
	{
		if (func_341(9, 10) || func_341(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_769 >= 15 && iLocal_769 <= 19)
	{
		if (func_341(7, 8) || func_341(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_386()//Position - 0x15E67
{
	if (iLocal_769 >= 0 && iLocal_769 <= 9)
	{
		if (func_341(6, 7) || func_341(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_769 >= 10 && iLocal_769 <= 14)
	{
		if (func_341(10, 11) || func_341(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_769 >= 15 && iLocal_769 <= 19)
	{
		if (func_341(8, 9) || func_341(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_387()//Position - 0x15F07
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_367())
		{
			return 0;
		}
		if (func_365(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_388(int iParam0, int iParam1, bool bParam2)//Position - 0x15F60
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_380();
			}
			else
			{
				return 0;
			}
		}
		if (!func_389())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_380();
					}
					else
					{
						return 0;
					}
				}
				if (func_367())
				{
					if (!bParam2)
					{
						func_380();
					}
					else
					{
						return 0;
					}
				}
				if (func_365(155))
				{
					if (!bParam2)
					{
						func_380();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_380();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_380();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_380();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_389()//Position - 0x16075
{
	return Global_1315874;
}

void func_390(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)//Position - 0x16081
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_380();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_391(int iParam0)//Position - 0x160A0
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

