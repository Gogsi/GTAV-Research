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
		if (GlobalFunc_1549(1))
		{
			func_372(PLAYER::PLAYER_ID(), 0, 98816, 1);
		}
	}
	while (true)
	{
		GlobalFunc_906();
		if (func_361())
		{
			func_379();
		}
		if (!GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
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
						if (GlobalFunc_356(GlobalFunc_1548(1)))
						{
							if (!MISC::IS_BIT_SET(Global_2446554.f_5, 1))
							{
								if (GlobalFunc_218())
								{
									if (MONEY::_NETWORK_CAN_SPEND_MONEY_2(iVar1, 0, 0, 0, &uVar3, -1))
									{
										Global_2446554.f_4456 = iVar1;
										Global_2446554.f_4457 = iVar2;
										Global_2446554.f_4458 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1067030938, 1069547520) };
										GlobalFunc_7831(&(Global_2446554.f_4455), -1135378931, 537254313, 1474183246, 1022400740, Global_2446554.f_4456, 1, 3);
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
					if (GlobalFunc_356(GlobalFunc_1548(1)))
					{
						if (!MISC::IS_BIT_SET(Global_2446554.f_5, 1))
						{
							if (GlobalFunc_218())
							{
								if (MONEY::_NETWORK_CAN_SPEND_MONEY_2(iLocal_799, 0, 0, 0, &uVar3, -1))
								{
									Global_2446554.f_4456 = iLocal_799;
									Global_2446554.f_4457 = iVar2;
									Global_2446554.f_4458 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1067030938, 1069547520) };
									GlobalFunc_7831(&(Global_2446554.f_4455), -1135378931, 537254313, 1474183246, 1022400740, Global_2446554.f_4456, 1, 3);
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
			if (GlobalFunc_1549(1))
			{
				func_372(PLAYER::PLAYER_ID(), 1, 0, 1);
				GlobalFunc_9059();
				GlobalFunc_1547();
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
								if (!GlobalFunc_904(Local_141.f_1))
								{
									GlobalFunc_173(&uLocal_604, 3, NETWORK::NET_TO_PED(Local_141.f_1), &(Local_141.f_38), 1, 0);
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
				GlobalFunc_5240(&(Local_141.f_61));
				if (GlobalFunc_914(&(Local_141.f_61)))
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
						GlobalFunc_356(GlobalFunc_1548(0));
						GlobalFunc_356(GlobalFunc_1548(1));
						GlobalFunc_356(GlobalFunc_1548(2));
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
		if (GlobalFunc_918(Local_141.f_2))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(Local_141.f_2)))
			{
				ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_141.f_2), 1, 1);
				GlobalFunc_909(&(Local_141.f_2));
			}
		}
	}
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
	return GlobalFunc_924(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("freemode", -1, 0));
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
		if (GlobalFunc_904(Local_141.f_1))
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
			if (GlobalFunc_918(Local_141.f_2))
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
		if (Local_141.f_58 > 0 && GlobalFunc_904(Local_141.f_4))
		{
			Local_141.f_58 = 6;
			return 0;
		}
		switch (Local_141.f_58)
		{
			case 0:
				if (!GlobalFunc_5071(&uLocal_795, 10000, 0))
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
										GlobalFunc_173(&uLocal_604, 4, NETWORK::NET_TO_PED(Local_141.f_4), "StoreHero", 1, 0);
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
				if (GlobalFunc_5071(&(Local_141.f_59), 3000, 0) || (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_4), 1227113341) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_141.f_4), 1227113341) != 1))
				{
					GlobalFunc_434(&(Local_141.f_59));
					Local_141.f_58 = 3;
				}
				break;
			
			case 3:
				if (((MISC::IS_BIT_SET(Local_141.f_12, 5) || MISC::IS_BIT_SET(Local_141.f_14, 8)) || MISC::IS_BIT_SET(Local_141.f_14, 9)) || GlobalFunc_5071(&(Local_141.f_59), 5000, 0))
				{
					if (GlobalFunc_745() || GlobalFunc_5071(&(Local_141.f_59), 5000, 0))
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
			if ((((GlobalFunc_918(Local_141.f_1) && !GlobalFunc_904(Local_141.f_1)) && GlobalFunc_918(Local_141.f_5[Local_141.f_16])) && Local_141.f_36 != 8) && Local_141.f_36 != 7)
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
					if (GlobalFunc_5071(&uLocal_785, 100, 0))
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
						if (((fVar0 < fVar2 && fVar0 > fVar1) && GlobalFunc_5071(&uLocal_791, 1000, 0)) || GlobalFunc_5071(&uLocal_791, 3125, 0))
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
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_554) || GlobalFunc_5071(&uLocal_787, 2000, 0))
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_554) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_554) == 1f) || GlobalFunc_5071(&uLocal_787, 2000, 0))
					{
						if ((GlobalFunc_918(Local_141.f_1) && !GlobalFunc_904(Local_141.f_1)) && !MISC::IS_BIT_SET(Local_141.f_12, 9))
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
			GlobalFunc_918(Local_141.f_5[Local_141.f_16]);
			if (GlobalFunc_5071(&uLocal_793, 1000, 0) && GlobalFunc_918(Local_141.f_5[Local_141.f_16]))
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
				GlobalFunc_434(&uLocal_793);
				GlobalFunc_434(&uLocal_787);
				GlobalFunc_434(&uLocal_785);
				GlobalFunc_434(&uLocal_791);
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
		if (((((GlobalFunc_356(func_26(3)) && GlobalFunc_356(func_26(1))) && GlobalFunc_356(func_26(2))) && GlobalFunc_356(func_26(4))) && GlobalFunc_356(func_26(0))) && GlobalFunc_356(func_26(5)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 6, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[3]))
				{
					if (GlobalFunc_910(&(Local_141.f_5[3]), func_26(3), func_21(3), 1, 1, 0, 1))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_141.f_5[3]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_540));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_5[3]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_5[3]), false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[1]))
				{
					if (GlobalFunc_910(&(Local_141.f_5[1]), func_26(1), func_21(1), 1, 1, 0, 1))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_141.f_5[1]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_540));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_5[1]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_5[1]), false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[2]))
				{
					if (GlobalFunc_910(&(Local_141.f_5[2]), func_26(2), func_21(2), 1, 1, 0, 1))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_141.f_5[2]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_540));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_5[2]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_5[2]), false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[4]))
				{
					if (GlobalFunc_910(&(Local_141.f_5[4]), func_26(4), func_21(4), 1, 1, 0, 1))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_141.f_5[4]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_540));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_5[4]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_5[4]), false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[0]))
				{
					if (GlobalFunc_910(&(Local_141.f_5[0]), func_26(0), func_21(0), 1, 1, 0, 1))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_141.f_5[0]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_540));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_141.f_5[0]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_141.f_5[0]), false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_5[5]))
				{
					if (GlobalFunc_910(&(Local_141.f_5[5]), func_26(5), func_21(5), 1, 1, 0, 1))
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
			if ((((GlobalFunc_918(Local_141.f_2) && GlobalFunc_918(Local_141.f_1)) && !GlobalFunc_904(Local_141.f_1)) && Local_141.f_36 != 8) && Local_141.f_36 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_141.f_1)))
				{
					if (!MISC::IS_BIT_SET(iLocal_535, 30))
					{
						TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_141.f_1), Local_141.f_33, 1600);
						MISC::SET_BIT(&iLocal_535, 30);
					}
					if (GlobalFunc_5071(&uLocal_783, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_141.f_1));
						if ((fVar0 > (Local_141.f_33 - 20f) && fVar0 < (Local_141.f_33 + 20f)) || GlobalFunc_5071(&uLocal_789, 1500, 0))
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
			GlobalFunc_918(Local_141.f_1);
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
				GlobalFunc_918(Local_141.f_1);
				if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_2) && GlobalFunc_918(Local_141.f_2)) && GlobalFunc_918(Local_141.f_1))
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
		if (GlobalFunc_904(Local_141.f_1))
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
				if (!GlobalFunc_904(Local_141.f_1))
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
		iVar0 = GlobalFunc_1535(PLAYER::PLAYER_PED_ID());
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
		if (GlobalFunc_5419(&(Local_141.f_25), 50, 0))
		{
			Local_141.f_24 = (Local_141.f_24 - 0.02f);
			if (Local_141.f_24 < 0f)
			{
				Local_141.f_24 = 0f;
			}
			GlobalFunc_434(&(Local_141.f_25));
		}
	}
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
					if (GlobalFunc_918(Local_141.f_2))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_141.f_2), 1, 1);
						GlobalFunc_917(&(Local_141.f_2));
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
		if (GlobalFunc_252(iVar0, 1, 1))
		{
			if (!MISC::IS_BIT_SET(Local_141.f_12, 5))
			{
				if (!GlobalFunc_904(Local_141.f_1))
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
					if (!GlobalFunc_904(Local_141.f_4))
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
		if (GlobalFunc_904(Local_141.f_1))
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
			if (GlobalFunc_252(iVar5, 1, 1))
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
						GlobalFunc_434(&(Local_141.f_25));
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
		if ((GlobalFunc_356(iLocal_539) && GlobalFunc_356(GlobalFunc_1548(1))) && GlobalFunc_356(GlobalFunc_1548(2)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 0, 2, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_1))
				{
					if (GlobalFunc_1482(&(Local_141.f_1), 4, iLocal_539, Local_540 - Vector(1f, 0f, 0f), Local_141.f_33, 1, 1, 1))
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
						GlobalFunc_173(&uLocal_604, 3, NETWORK::NET_TO_PED(Local_141.f_1), &(Local_141.f_38), 1, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_2))
				{
					uVar0 = OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_crate_unfixed_low_glow"), Local_564, 0, GlobalFunc_1548(1));
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
					if (GlobalFunc_910(&(Local_141.f_3), GlobalFunc_1548(2), Local_568 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1))
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
	
	iVar0 = GlobalFunc_886(47);
	Global_2408820[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}


void func_49()//Position - 0x322D
{
	int iVar0;
	
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 1))
	{
		iVar0 = GlobalFunc_6872(1169, -1, 0);
		if (!MISC::IS_BIT_SET(iVar0, iLocal_769))
		{
			func_111(14, 1, -1);
			MISC::SET_BIT(&iVar0, iLocal_769);
			GlobalFunc_6720(1169, iVar0, -1, 1);
			if (GlobalFunc_6854(14, -1) >= 20)
			{
				GlobalFunc_8960(44, 1);
			}
			else
			{
				GlobalFunc_4(44, GlobalFunc_6854(14, -1));
			}
		}
		GlobalFunc_7743(1155, 1, -1);
		GlobalFunc_4908(12, 1, -1, 1);
		func_88(19);
		iLocal_798 = 100;
		iLocal_798 = SYSTEM::ROUND((IntToFloat(iLocal_798) * Global_262145.f_4195));
		func_53(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_798, 1, -1, 0);
		GlobalFunc_4989(12, 0);
	}
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
	
	if (GlobalFunc_361(PLAYER::PLAYER_ID()) || GlobalFunc_362(PLAYER::PLAYER_ID()))
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
	if (GlobalFunc_955(uParam2))
	{
	}
	if (GlobalFunc_82())
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
			iVar1 = GlobalFunc_5251(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					GlobalFunc_6848(0, &iVar1);
					break;
				
				case 3:
					GlobalFunc_6848(1, &iVar1);
					break;
				
				case 1:
					GlobalFunc_6847(&iVar1);
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
			GlobalFunc_7743(1152, iVar1, -1);
			if (iParam1 == 0)
			{
				GlobalFunc_7742((GlobalFunc_6849(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_31.f_2 != -1)
				{
					GlobalFunc_7743(1153, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					GlobalFunc_5374(iVar1);
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
				GlobalFunc_5373((GlobalFunc_5247(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				GlobalFunc_5373((GlobalFunc_5247(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}



























int func_82(int iParam0)//Position - 0x430F
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > GlobalFunc_6849(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_73(PLAYER::PLAYER_ID());
		}
	}
	if (GlobalFunc_948(8000, 0, 0) > 0)
	{
		if (GlobalFunc_948(8000, 0, 0) < (iParam0 + GlobalFunc_6849(PLAYER::PLAYER_ID())))
		{
			iParam0 = (GlobalFunc_948(8000, 0, 0) - GlobalFunc_6849(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
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
			if (Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_1795[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_1795[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1)
			{
				Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1 = 1;
				MISC::SET_BIT(&Global_2445620, (8 + iVar2));
				GlobalFunc_7748(2094, -1);
				func_89(67, -1);
				STATS::PLAYSTATS_ACTIVITY_DONE(1000, iVar1);
				if (iVar3 < 2)
				{
					GlobalFunc_4989(15, 0);
				}
			}
		}
	}
}

void func_89(int iParam0, int iParam1)//Position - 0x44E8
{
	int iVar0;
	
	iVar0 = GlobalFunc_6854(iParam0, GlobalFunc_4990(iParam1));
	iVar0++;
	GlobalFunc_6904(iParam0, iVar0, iParam1);
}






















void func_111(int iParam0, int iParam1, int iParam2)//Position - 0x4C09
{
	int iVar0;
	
	iVar0 = GlobalFunc_6854(iParam0, GlobalFunc_4990(iParam2));
	iVar0 = (iVar0 + iParam1);
	GlobalFunc_6904(iParam0, iVar0, iParam2);
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
		if (GlobalFunc_4998("SNK_MNU", Local_90))
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
			GlobalFunc_9059();
			if (CAM::DOES_CAM_EXIST(Local_90.f_1))
			{
				CAM::DESTROY_CAM(Local_90.f_1, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		}
		GlobalFunc_4988(1, Local_90);
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
			GlobalFunc_5088(Local_587, GlobalFunc_480(30), 0);
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
			GlobalFunc_5089(Local_587, GlobalFunc_480(30), "");
			MISC::SET_BIT(&(Global_2446554.f_5), 0);
		}
	}
	if ((MISC::IS_BIT_SET(Local_141.f_12, 22) || MISC::IS_BIT_SET(Local_141.f_12, 23)) || MISC::IS_BIT_SET(Local_141.f_12, 7))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
}





void func_120()//Position - 0x5144
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	MISC::CLEAR_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 28);
	if (!GlobalFunc_904(Local_141.f_1) && GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
		{
			if (((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball"))
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_141.f_1), 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_141.f_1), 5f, 5f, 2f, 0, 1, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_141.f_1))) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_141.f_1)))
				{
					if (!GlobalFunc_1536())
					{
						if (func_122(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_141.f_1)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
						{
							if (!MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 1))
							{
								func_121(GlobalFunc_924(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
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
			if (!GlobalFunc_904(Local_141.f_4) && GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, 1))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !GlobalFunc_1536())
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
	
	if (GlobalFunc_252(iParam0, 1, 1))
	{
		Var0 = { GlobalFunc_271(iParam0) };
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
	fVar15 = GlobalFunc_168(Var9, Var12);
	if (fVar15 < -0.1f)
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
					GlobalFunc_434(&(Global_2422140.f_3034));
					GlobalFunc_436(&(Global_2422140.f_3034), 0, 0);
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
				if (GlobalFunc_5071(&uLocal_578, 2000, 0) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
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
			else if (GlobalFunc_439(&uLocal_578))
			{
				GlobalFunc_434(&uLocal_578);
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_535, 24))
	{
		if (MISC::IS_BIT_SET(iLocal_535, 31))
		{
			if (GlobalFunc_904(Local_141.f_1))
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


void func_127()//Position - 0x58E0
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!MISC::IS_BIT_SET(iLocal_535, 23) && MISC::IS_BIT_SET(Local_141.f_12, 17))
		{
			if (!GlobalFunc_904(Local_141.f_1))
			{
				iLocal_547 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_141.f_20);
				if (iLocal_547 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_547))
					{
						if ((!MISC::IS_BIT_SET(Global_1675329, 15) && GlobalFunc_472()) && func_130())
						{
							MISC::SET_BIT(&Global_1675329, 15);
						}
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							iVar0 = GlobalFunc_6872(1178, -1, 0);
							if (!MISC::IS_BIT_SET(iVar0, 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_547) < 0.4f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_580)
								{
									GlobalFunc_159("FHU_HELP3", -1);
									MISC::SET_BIT(&iVar0, 3);
									GlobalFunc_6720(1178, iVar0, -1, 1);
								}
							}
							else if (!MISC::IS_BIT_SET(iVar0, 5) || !MISC::IS_BIT_SET(iVar0, 6))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_547) < 0.7f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_580)
								{
									GlobalFunc_159("FHU_HELP4", -1);
									MISC::SET_BIT(&iVar0, 5);
									GlobalFunc_6720(1178, iVar0, -1, 1);
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
				if (((((GlobalFunc_904(Local_141.f_1) || Local_141.f_36 > 7) && !MISC::IS_BIT_SET(Local_141.f_12, 20)) && !MISC::IS_BIT_SET(Local_141.f_12, 11)) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 5)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_548, 1.5f) == 0)
				{
					iVar1 = GlobalFunc_6872(1178, -1, 0);
					if (!MISC::IS_BIT_SET(iVar1, 20) || !MISC::IS_BIT_SET(iVar1, 21))
					{
						GlobalFunc_159("FHU_HELPM", -1);
						if (!MISC::IS_BIT_SET(iVar1, 20))
						{
							MISC::SET_BIT(&iVar1, 20);
						}
						else
						{
							MISC::SET_BIT(&iVar1, 21);
						}
						GlobalFunc_6720(1178, iVar1, -1, 1);
						MISC::SET_BIT(&iLocal_536, 1);
					}
					else
					{
						MISC::SET_BIT(&iLocal_536, 1);
					}
				}
			}
		}
		else if (GlobalFunc_74("FHU_HELPM"))
		{
			if ((MISC::IS_BIT_SET(Local_141.f_12, 20) || MISC::IS_BIT_SET(Local_141.f_12, 11)) || MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 5))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
}



bool func_130()//Position - 0x5B7A
{
	return MISC::IS_BIT_SET(Global_2446554.f_1619, 21);
}


void func_132()//Position - 0x5BA9
{
	float fVar0;
	float fVar1;
	
	if (Local_141.f_36 == 4)
	{
		if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!GlobalFunc_904(Local_141.f_1))
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
							func_133(SYSTEM::ROUND(fVar0), 890, "HUP_PROG", GlobalFunc_1537(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())), 0, 1);
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
	GlobalFunc_5152(iParam0, iParam1, sParam2, uParam3, iParam4, 2, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0);
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
	if (GlobalFunc_1409(PLAYER::PLAYER_ID()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
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






void func_148()//Position - 0x65E7
{
	if (!MISC::IS_BIT_SET(iLocal_535, 24))
	{
		if (Local_141.f_72 == PLAYER::PLAYER_ID() || (MISC::IS_BIT_SET(iLocal_535, 31) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_590, 20f, 20f, 20f, 0, 1, 0)))
		{
			if (GlobalFunc_904(Local_141.f_1))
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
	if (GlobalFunc_904(Local_141.f_4))
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
					if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
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
			if ((!MISC::IS_BIT_SET(Local_141.f_14, 6) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2, 1)) && !GlobalFunc_111())
			{
				GlobalFunc_173(&uLocal_604, 4, NETWORK::NET_TO_PED(Local_141.f_4), "StoreHero", 1, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(NETWORK::NET_TO_PED(Local_141.f_4), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2), 1);
			}
			break;
		
		case 4:
			if ((!MISC::IS_BIT_SET(Local_141.f_14, 7) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2, 2)) && !GlobalFunc_111())
			{
				GlobalFunc_173(&uLocal_604, 4, NETWORK::NET_TO_PED(Local_141.f_4), "StoreHero", 1, 0);
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
				if (GlobalFunc_5071(&uLocal_576, 5000, 0))
				{
					GlobalFunc_434(&uLocal_576);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_141.f_4), PLAYER::PLAYER_PED_ID(), 10000);
				}
			}
			break;
	}
	return 1;
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
					if (!GlobalFunc_904(Local_141.f_1))
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
						OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(GlobalFunc_1548(1), 1);
						MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 11);
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_141.f_2), PLAYER::PLAYER_PED_ID()))
					{
						Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7, &(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7.f_2));
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_141.f_2))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_141.f_2), 1, 1);
							GlobalFunc_917(&(Local_141.f_2));
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
						iVar0 = GlobalFunc_1436(iVar0, 1);
						if (iVar0 > Global_262145.f_144)
						{
							iVar0 = Global_262145.f_144;
						}
						if (GlobalFunc_218())
						{
							func_169(1734805203, iVar0, &uVar1, 0, 0);
						}
						else
						{
							GlobalFunc_7813(iVar0, 1, 1, 1092616192);
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
						GlobalFunc_1435(1, iVar0);
						MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 5);
					}
				}
			}
		}
	}
}


void func_154(int iParam0, int iParam1)//Position - 0x6D91
{
	struct<3> Var0;
	
	Var0 = { GlobalFunc_5371(PLAYER::PLAYER_PED_ID(), 1) };
	if (iParam0 == GlobalFunc_1421(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_1420(1);
	}
	GlobalFunc_5372(Var0, iParam1, 7, 0);
}









void func_163(struct<3> Param0, int iParam3)//Position - 0x7064
{
	GlobalFunc_5372(Param0, iParam3, 6, 0);
}

void func_164(int iParam0)//Position - 0x7078
{
	Global_2422140.f_1309 = iParam0;
}





void func_169(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0x7145
{
	int iVar0;
	
	if (!GlobalFunc_218())
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
				GlobalFunc_7831(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			GlobalFunc_7831(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
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
	if (GlobalFunc_904(Local_141.f_1))
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
						if (GlobalFunc_5071(&uLocal_576, 5000, 0))
						{
							GlobalFunc_434(&uLocal_576);
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
				if (GlobalFunc_5071(&uLocal_576, 5000, 0))
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
					GlobalFunc_434(&uLocal_576);
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
				if (Global_2446554.f_7 != GlobalFunc_314())
				{
					if (GlobalFunc_252(Global_2446554.f_7, 1, 1))
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
				if (GlobalFunc_5071(&uLocal_576, 5000, 0))
				{
					GlobalFunc_434(&uLocal_576);
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
				if (!GlobalFunc_111())
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
					if (!GlobalFunc_111())
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
							if (MISC::IS_BIT_SET(Local_141.f_12, 24) && !GlobalFunc_111())
							{
								func_181(11);
								MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 22);
							}
						}
						if (!MISC::IS_BIT_SET(Local_141.f_12, 23) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 23))
						{
							if (MISC::IS_BIT_SET(Local_141.f_12, 25) && !GlobalFunc_111())
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
					if (!GlobalFunc_111())
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
						GlobalFunc_4956();
						return;
					}
				}
			}
			if (((!MISC::IS_BIT_SET(Local_141.f_12, 30) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 25)) && !MISC::IS_BIT_SET(Local_141.f_12, 7)) && !MISC::IS_BIT_SET(Local_141.f_12, 4))
			{
				if (MISC::IS_BIT_SET(Local_141.f_13, 0) && !GlobalFunc_111())
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
				if (MISC::IS_BIT_SET(Local_141.f_13, 1) && !GlobalFunc_111())
				{
					func_181(14);
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 26);
					return;
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_13, 9) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 31))
			{
				if (MISC::IS_BIT_SET(Local_141.f_13, 8) && !GlobalFunc_111())
				{
					func_181(22);
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 31);
					return;
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_15, 3) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3, 3))
			{
				if (MISC::IS_BIT_SET(Local_141.f_15, 2) && !GlobalFunc_111())
				{
					func_181(24);
					MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3), 3);
					return;
				}
			}
			if (!MISC::IS_BIT_SET(Local_141.f_13, 14) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 20))
			{
				if (MISC::IS_BIT_SET(Local_141.f_13, 13) && !GlobalFunc_111())
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
			if (!GlobalFunc_111())
			{
				func_181(21);
				MISC::SET_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 29);
				return;
			}
		}
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


void func_181(int iParam0)//Position - 0x850A
{
	struct<2> Var0;
	int iVar4;
	
	if (MISC::IS_BIT_SET(Local_141.f_12, 13))
	{
		if (!GlobalFunc_904(Local_141.f_1))
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
							if ((((((iVar4 == joaat("weapon_unarmed") || iVar4 == 0) || iVar4 == joaat("object")) || iVar4 == joaat("weapon_flare")) || iVar4 == joaat("weapon_snowball")) || GlobalFunc_1345(iVar4)) || GlobalFunc_1346(iVar4))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					GlobalFunc_173(&uLocal_604, 3, NETWORK::NET_TO_PED(Local_141.f_1), &(Local_141.f_38), 1, 0);
					switch (iParam0)
					{
						case 0:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_141.f_1), "SHOP_GREET", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							GlobalFunc_10641(&uLocal_604, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							GlobalFunc_10641(&uLocal_604, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							GlobalFunc_10641(&uLocal_604, "RB_12AU", &Var0, 12, 1, 0, 1);
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




















void func_201()//Position - 0x918A
{
	int iVar0;
	
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false);
	if (Local_141.f_34 != iVar0)
	{
		if (Local_141.f_34 < iVar0 || GlobalFunc_6841(Local_141.f_34, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_141.f_34);
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false);
	if (Local_141.f_35 != iVar0)
	{
		if (Local_141.f_35 < iVar0 || GlobalFunc_6840(Local_141.f_35, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_141.f_35);
		}
	}
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
					if (GlobalFunc_105(Local_807))
					{
						Local_807 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_OBJ(Local_141.f_3), 0f, -0.5f, 0f) };
						MISC::SET_BIT(&iLocal_536, 0);
					}
				}
			}
			if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_807, 0.5f, 0.5f, 1f, 0, 1, 0) && (GlobalFunc_904(Local_141.f_1) || Local_141.f_36 > 7)) && !MISC::IS_BIT_SET(Local_141.f_12, 20)) && !MISC::IS_BIT_SET(Local_141.f_12, 11)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_548, 1.5f) == 0)
			{
				if ((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !GlobalFunc_116(0)) && !GlobalFunc_160()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_3))
				{
					GlobalFunc_159("FHU_MANR", -1);
					iLocal_801 = 1;
				}
			}
			break;
		
		case 1:
			if ((((!MISC::IS_BIT_SET(Local_141.f_13, 16) && !MISC::IS_BIT_SET(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 12)) && !MISC::IS_BIT_SET(Local_141.f_12, 20)) && !MISC::IS_BIT_SET(Local_141.f_12, 11)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_807, 0.5f, 0.5f, 1f, 0, 1, 0))
			{
				if (((PAD::IS_CONTROL_JUST_PRESSED(0, 51) && !func_213(0)) && !GlobalFunc_160()) && !HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (GlobalFunc_74("FHU_MANR"))
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
			else if (GlobalFunc_74("FHU_MANR"))
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
							iVar1 = GlobalFunc_1436(iVar1, 1);
							if (iVar1 > (Global_262145.f_144 / 4))
							{
								iVar1 = (Global_262145.f_144 / 4);
							}
							if (GlobalFunc_218())
							{
								func_169(1734805203, iVar1, &uVar9, 0, 0);
							}
							else
							{
								GlobalFunc_7813(iVar1, 1, 1, 1092616192);
								MONEY::NETWORK_EARN_FROM_HOLDUPS(iVar1);
							}
							iLocal_799 = (iLocal_799 + iVar1);
							GlobalFunc_1435(1, iLocal_799);
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
			GlobalFunc_5420(iParam0);
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
	
	if (((Local_141.f_63 >= 1000 || (Local_141.f_63 + iLocal_800) >= 1000) || func_333()) || (GlobalFunc_439(&(Global_2446554.f_8)) && !GlobalFunc_435(Global_2446554.f_8, 300000, 0)))
	{
		if (GlobalFunc_439(&(Global_2446554.f_8)))
		{
			if ((MISC::GET_GAME_TIMER() % 2500) < 50)
			{
			}
		}
		if (!Local_90.f_34)
		{
			Local_90.f_34 = 1;
			if (!GlobalFunc_439(&(Global_2446554.f_8)))
			{
				GlobalFunc_436(&(Global_2446554.f_8), 0, 0);
			}
		}
	}
	else
	{
		if (GlobalFunc_439(&(Global_2446554.f_8)))
		{
			GlobalFunc_434(&(Global_2446554.f_8));
		}
		if (Local_90.f_34)
		{
			Local_90.f_34 = 0;
		}
	}
	if ((MISC::GET_GAME_TIMER() % 5000) < 50)
	{
	}
	if ((((((Local_141.f_36 < 2 && GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1)) && MISC::IS_BIT_SET(iLocal_535, 26)) && !GlobalFunc_1546(-1082130432)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_PED(Local_141.f_1), Local_597, Local_600, uLocal_603, 0, 1, 0)) && !GlobalFunc_904(Local_141.f_1))
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
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Local_90.f_23, 1) < 5f && MISC::ABSF((Var1.f_2 - Var4.f_2)) < 0.25f) || GlobalFunc_1549(1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_90.f_16[0 /*3*/], Local_90.f_16[1 /*3*/], Local_90.f_26, 0, 1, 0) || GlobalFunc_1549(1))
							{
								if (PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_90.f_23, 135f) || GlobalFunc_1549(1))
								{
									if (Local_90.f_34)
									{
										if (GlobalFunc_1549(1))
										{
											GlobalFunc_1547();
										}
										if (((!GlobalFunc_74("SHR_HOLDUP_1") && !GlobalFunc_74("SHR_MENU")) && !GlobalFunc_579()) && GlobalFunc_1545())
										{
											GlobalFunc_159("SHR_SOLD_OUT", -1);
											iLocal_89 = 10;
										}
									}
									else
									{
										if (GlobalFunc_1549(1))
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
					if (GlobalFunc_74("SHR_MENU"))
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
				if ((!PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_90.f_23, 135f) || MISC::ABSF((Var1.f_2 - Var4.f_2)) >= 0.25f) && !GlobalFunc_1549(1))
				{
					if (GlobalFunc_74("SHR_MENU"))
					{
						HUD::CLEAR_HELP(1);
					}
					GlobalFunc_5420(&(Local_90.f_14));
					iLocal_89 = 0;
				}
				if (HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (GlobalFunc_74("SHR_MENU"))
					{
						HUD::CLEAR_HELP(1);
					}
					GlobalFunc_5420(&(Local_90.f_14));
					iLocal_89 = 0;
				}
				if (!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					if (GlobalFunc_5079(Local_90.f_14, 1) || GlobalFunc_1549(1))
					{
						if (GlobalFunc_1549(1))
						{
							GlobalFunc_1547();
						}
						if (GlobalFunc_74("SHR_MENU"))
						{
							HUD::CLEAR_HELP(1);
						}
						GlobalFunc_6877(&(Local_90.f_44));
						GlobalFunc_5420(&(Local_90.f_14));
						GlobalFunc_9060(0);
						func_372(PLAYER::PLAYER_ID(), 0, 66048, 1);
						HUD::THEFEED_FLUSH_QUEUE();
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_904(Local_141.f_1))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_141.f_1), 0);
							MISC::CLEAR_BIT(&(Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3), 1);
						}
						GlobalFunc_1395();
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
				GlobalFunc_262(0);
				GlobalFunc_1317(1, 1, 0, 0, 0);
				GlobalFunc_1316(1, 2, 1, 1, 1);
				GlobalFunc_1318("SNK_ITEM");
				GlobalFunc_5426(1, Local_90.f_37, Local_90.f_37);
				iVar10 = 0;
				while (iVar10 < Local_90.f_13)
				{
					GlobalFunc_7830(iVar10, func_310(iVar10), 0, 1, 0, 0);
					if (Local_141.f_64[iVar10] >= 10 || ((GlobalFunc_439(&(Global_2446554.f_10[iVar10 /*2*/])) && !GlobalFunc_435(Global_2446554.f_10[iVar10 /*2*/], 150000, 0)) && Local_90 == Global_2446554.f_25))
					{
						GlobalFunc_7830(iVar10, "", 1, 1, 0, 0);
						GlobalFunc_8447(15, 0);
						if (GlobalFunc_439(&(Global_2446554.f_10[iVar10 /*2*/])) && !GlobalFunc_435(Global_2446554.f_10[iVar10 /*2*/], 150000, 0))
						{
							Local_141.f_64[iVar10] = 10;
						}
						if (!GlobalFunc_439(&(Global_2446554.f_10[iVar10 /*2*/])))
						{
							Global_2446554.f_25 = Local_90;
							GlobalFunc_436(&(Global_2446554.f_10[iVar10 /*2*/]), 0, 0);
						}
					}
					else if (func_303(iVar10))
					{
						GlobalFunc_7830(iVar10, "SNK_FULL", 0, 1, 0, 0);
					}
					else
					{
						GlobalFunc_7830(iVar10, "ITEM_COST", 1, 1, 0, 0);
						func_299(func_302(iVar10), 0);
					}
					iVar10++;
				}
				GlobalFunc_1543(0);
				GlobalFunc_1355(Local_90.f_12, 1, 1);
				if (Local_90.f_35)
				{
					GlobalFunc_1353("SNK_BOUGHT", 0, 0);
				}
				else if (Local_141.f_64[Local_90.f_12] >= 10)
				{
					GlobalFunc_1353("SNK_SOUT", 0, 0);
				}
				else
				{
					GlobalFunc_1353(func_295(Local_90.f_12), 0, 0);
				}
				GlobalFunc_1354(201, "ITEM_SELECT", -1);
				GlobalFunc_1354(202, "ITEM_BACK", -1);
				GlobalFunc_1354(203, "SNK_LIFT", -1);
				GlobalFunc_8446(1, Local_90, 1, 0, 1, -1082130432, 0, 0);
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
						GlobalFunc_6900(0, 0, 0, 1);
						GlobalFunc_1393(0, -1);
						if (GlobalFunc_1391())
						{
							if (Global_2543381 != Local_90.f_12)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								Local_90.f_12 = Global_2543381;
								GlobalFunc_1355(Local_90.f_12, 1, 1);
								Local_90.f_27 = 0;
								Local_90.f_29 = 0;
								Local_90.f_30 = 0;
								Local_90.f_32 = 0;
								sVar8 = func_295(Local_90.f_12);
								if (HUD::DOES_TEXT_LABEL_EXIST(sVar8))
								{
									GlobalFunc_1353(sVar8, 0, 0);
								}
							}
							else
							{
								iVar7 = 1;
							}
						}
					}
				}
				GlobalFunc_8446(1, Local_90, 1, 0, 1, -1082130432, 0, 0);
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
						GlobalFunc_6877(&(Local_90.f_44));
					}
					if ((Local_90.f_28 && Local_90.f_31) && Local_90.f_33)
					{
						if (GlobalFunc_218())
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
							GlobalFunc_1540(MISC::GET_HASH_KEY(func_295(Local_90.f_12)), func_302(Local_90.f_12), 0);
							GlobalFunc_7677(0, 31, 3);
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
					GlobalFunc_6877(&(Local_90.f_44));
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
					if (GlobalFunc_1549(1))
					{
						GlobalFunc_1547();
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
					GlobalFunc_159("SHR_SOLD_OUT", -1);
				}
				iVar11 = 0;
				while (iVar11 < Local_90.f_13)
				{
					if (GlobalFunc_439(&(Global_2446554.f_10[iVar11 /*2*/])) && GlobalFunc_435(Global_2446554.f_10[iVar11 /*2*/], 150000, 0))
					{
						GlobalFunc_434(&(Global_2446554.f_10[iVar11 /*2*/]));
						Local_141.f_64[iVar11] = 0;
						iLocal_89 = 3;
					}
					iVar11++;
				}
				break;
			
			case 5:
				GlobalFunc_8446(1, Local_90, 1, 0, 1, -1082130432, 0, 0);
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
								GlobalFunc_1540(MISC::GET_HASH_KEY(func_295(Local_90.f_12)), func_302(Local_90.f_12), 0);
								GlobalFunc_7677(0, 31, 3);
								GlobalFunc_5423();
								GlobalFunc_1539();
								iLocal_89 = 11;
							}
							else
							{
								if (GlobalFunc_1549(1))
								{
									GlobalFunc_1547();
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
				GlobalFunc_8446(1, Local_90, 1, 0, 1, -1082130432, 0, 0);
				if (GlobalFunc_218())
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(GlobalFunc_1360(GlobalFunc_5422()));
				}
				switch (Local_90.f_12)
				{
					case 3:
						iVar0 = func_302(Local_90.f_12);
						GlobalFunc_7743(1262, 1, -1);
						GlobalFunc_4908(16, 1, -1, 1);
						MONEY::NETWORK_BUY_ITEM(iVar0, MISC::GET_HASH_KEY("SNK_ITEM1"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 1:
						iVar0 = func_302(Local_90.f_12);
						GlobalFunc_7743(1263, 1, -1);
						GlobalFunc_4908(15, 1, -1, 1);
						MONEY::NETWORK_BUY_ITEM(iVar0, MISC::GET_HASH_KEY("SNK_ITEM2"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 2:
						iVar0 = func_302(Local_90.f_12);
						GlobalFunc_4908(14, 1, -1, 1);
						GlobalFunc_7743(1264, 1, -1);
						MONEY::NETWORK_BUY_ITEM(iVar0, MISC::GET_HASH_KEY("SNK_ITEM3"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 4:
						iVar0 = func_302(Local_90.f_12);
						iLocal_140 = 20;
						if (GlobalFunc_6872(1085, -1, 0) + 20 > 20)
						{
							iLocal_140 = (20 - GlobalFunc_6872(1085, -1, 0));
						}
						GlobalFunc_7743(1085, iLocal_140, -1);
						MONEY::NETWORK_BUY_ITEM(iVar0, MISC::GET_HASH_KEY("SNK_ITEM4"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 0:
						iVar0 = func_302(Local_90.f_12);
						GlobalFunc_7743(62, 1, -1);
						MONEY::NETWORK_BUY_ITEM(iVar0, MISC::GET_HASH_KEY("SNK_ITEM5"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 5:
						iVar0 = func_302(Local_90.f_12);
						GlobalFunc_7743(63, 1, -1);
						MONEY::NETWORK_BUY_ITEM(iVar0, MISC::GET_HASH_KEY("SNK_ITEM6"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
				}
				if (GlobalFunc_218())
				{
					GlobalFunc_5069(GlobalFunc_5422());
				}
				GlobalFunc_6859(-iVar0, 0);
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
					GlobalFunc_159("SHR_SOLD_OUT", -1);
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
				GlobalFunc_1420(1);
				switch (Local_90.f_12)
				{
					case 3:
						GlobalFunc_5421(0, 1f, 3);
						GlobalFunc_7743(1262, 1, -1);
						GlobalFunc_4908(13, 1, -1, 1);
						break;
					
					case 1:
						GlobalFunc_5421(1, 1f, 3);
						GlobalFunc_7743(1263, 1, -1);
						GlobalFunc_4908(13, 1, -1, 1);
						break;
					
					case 2:
						GlobalFunc_5421(2, 1f, 3);
						GlobalFunc_7743(1264, 1, -1);
						GlobalFunc_4908(13, 1, -1, 1);
						break;
					
					case 4:
						iLocal_140 = 20;
						if (GlobalFunc_6872(1085, -1, 0) + 20 > 20)
						{
							iLocal_140 = (20 - GlobalFunc_6872(1085, -1, 0));
						}
						GlobalFunc_5421(5, SYSTEM::TO_FLOAT(iLocal_140), 3);
						GlobalFunc_7743(1085, iLocal_140, -1);
						break;
					
					case 0:
						GlobalFunc_5421(3, 1f, 3);
						GlobalFunc_7743(62, 1, -1);
						break;
					
					case 5:
						GlobalFunc_5421(4, 1f, 3);
						GlobalFunc_7743(63, 1, -1);
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
			GlobalFunc_5420(&(Local_90.f_14));
		}
	}
}










char* func_227()//Position - 0xB202
{
	if (GlobalFunc_745())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
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
					if (GlobalFunc_6940())
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
				if (GlobalFunc_1363(GlobalFunc_5422()))
				{
					if (GlobalFunc_1362(GlobalFunc_5422()) == 2)
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
				GlobalFunc_5069(GlobalFunc_5422());
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





int func_241(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xB874
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!GlobalFunc_218())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(GlobalFunc_5()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
	iVar1 = GlobalFunc_5422();
	if (iVar1 == -1)
	{
		if (!GlobalFunc_6941(&iVar1, iParam0, iParam1, uParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && GlobalFunc_1542(iParam1))
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
		GlobalFunc_235(&(Local_90.f_44));
		Local_90.f_12 = (Local_90.f_12 - 1);
		if (Local_90.f_12 < 0)
		{
			Local_90.f_12 = (Local_90.f_13 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		GlobalFunc_1355(Local_90.f_12, 1, 1);
		sVar0 = func_295(Local_90.f_12);
		Local_90.f_29 = 0;
		Local_90.f_30 = 0;
		Local_90.f_32 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			GlobalFunc_1353(sVar0, 0, 0);
		}
	}
	if (func_252())
	{
		Local_90.f_27 = 0;
		GlobalFunc_235(&(Local_90.f_44));
		Local_90.f_12++;
		if (Local_90.f_12 > (Local_90.f_13 - 1))
		{
			Local_90.f_12 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		GlobalFunc_1355(Local_90.f_12, 1, 1);
		sVar0 = func_295(Local_90.f_12);
		Local_90.f_29 = 0;
		Local_90.f_30 = 0;
		Local_90.f_32 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			GlobalFunc_1353(sVar0, 0, 0);
		}
	}
	if (!Local_90.f_29)
	{
		if (GlobalFunc_470(1) >= func_302(Local_90.f_12))
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
			Local_90.f_31 = GlobalFunc_6872(1262, -1, 0) < 30;
		}
		else if (Local_90.f_12 == 1)
		{
			Local_90.f_31 = GlobalFunc_6872(1263, -1, 0) < 15;
		}
		else if (Local_90.f_12 == 2)
		{
			Local_90.f_31 = GlobalFunc_6872(1264, -1, 0) < 5;
		}
		else if (Local_90.f_12 == 4)
		{
			Local_90.f_31 = GlobalFunc_6872(1085, -1, 0) < 20;
		}
		else if (Local_90.f_12 == 0)
		{
			Local_90.f_31 = GlobalFunc_6872(62, -1, 0) < 10;
		}
		else if (Local_90.f_12 == 5)
		{
			Local_90.f_31 = GlobalFunc_6872(63, -1, 0) < 10;
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
			GlobalFunc_1353("SNK_SOUT", 0, 0);
		}
		Local_90.f_32 = 1;
	}
	if (Local_90.f_27)
	{
		if (GlobalFunc_5425(&(Local_90.f_44)) < 3f)
		{
			if (Local_90.f_35)
			{
				GlobalFunc_1353("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_90.f_28)
			{
				GlobalFunc_1353("SNK_AFFORD", 0, 0);
			}
			else if (!Local_90.f_33)
			{
				GlobalFunc_1353("SNK_SOUT", 0, 0);
			}
			else if (!Local_90.f_31)
			{
				if (Local_90.f_12 == 3)
				{
					GlobalFunc_1353("SNK_SNK1FU", 0, 0);
				}
				else if (Local_90.f_12 == 1)
				{
					GlobalFunc_1353("SNK_SNK2FU", 0, 0);
				}
				else if (Local_90.f_12 == 2)
				{
					GlobalFunc_1353("SNK_SNK3FU", 0, 0);
				}
				else if (Local_90.f_12 == 4)
				{
					GlobalFunc_1353("SNK_SMOKFU", 0, 0);
				}
				else if (Local_90.f_12 == 0)
				{
					GlobalFunc_1353("SNK_DRK1FU", 0, 0);
				}
				else if (Local_90.f_12 == 5)
				{
					GlobalFunc_1353("SNK_DRK2FU", 0, 0);
				}
				else
				{
					GlobalFunc_1353("SNK_NEEDED", 0, 0);
				}
			}
		}
		else
		{
			Local_90.f_27 = 0;
			Local_90.f_35 = 0;
			GlobalFunc_235(&(Local_90.f_44));
			sVar0 = func_295(Local_90.f_12);
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				GlobalFunc_1353(sVar0, 0, 0);
			}
		}
	}
}





int func_252()//Position - 0xBFAC
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		if (!GlobalFunc_226(&(Local_90.f_41)))
		{
			GlobalFunc_7777(&(Local_90.f_41));
			return 1;
		}
		else if (GlobalFunc_5182(&(Local_90.f_41)) > 0.25f)
		{
			GlobalFunc_6877(&(Local_90.f_41));
			return 1;
		}
	}
	else if (GlobalFunc_226(&(Local_90.f_41)))
	{
		GlobalFunc_235(&(Local_90.f_41));
	}
	return 0;
}




int func_256()//Position - 0xC0A0
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		if (!GlobalFunc_226(&(Local_90.f_38)))
		{
			GlobalFunc_7777(&(Local_90.f_38));
			return 1;
		}
		else if (GlobalFunc_5182(&(Local_90.f_38)) > 0.25f)
		{
			GlobalFunc_6877(&(Local_90.f_38));
			return 1;
		}
	}
	else if (GlobalFunc_226(&(Local_90.f_38)))
	{
		GlobalFunc_235(&(Local_90.f_38));
	}
	return 0;
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
		fVar0 = GlobalFunc_7829();
		if (Global_17236.f_4352[Global_17236.f_4493] && Global_17236.f_4998 == Global_17236.f_4996)
		{
			GlobalFunc_6942(26, 1, 0, &fVar1, &uVar2, 0);
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
			fVar3 = GlobalFunc_7828();
			if (fVar3 > Global_17236.f_5000[Global_17236.f_4492])
			{
				Global_17236.f_5000[Global_17236.f_4492] = fVar3;
			}
		}
	}
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
	if (GlobalFunc_6872(func_305(iParam0), -1, 0) >= func_304(iParam0))
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
	GlobalFunc_9059();
	if (GlobalFunc_74("SHR_MENU"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (Local_90.f_14 != -1)
	{
		GlobalFunc_5420(&(Local_90.f_14));
	}
	if (CAM::DOES_CAM_EXIST(Local_90.f_1))
	{
		CAM::DESTROY_CAM(Local_90.f_1, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_546 = 116.5329f;
				iLocal_575 = 1;
				if (GlobalFunc_5183(6, 18))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_546 = 178.8753f;
				iLocal_575 = 1;
				if (GlobalFunc_5183(6, 18))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_546 = 191.594f;
				iLocal_575 = 1;
				if (GlobalFunc_5183(6, 18))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_546 = 228.4295f;
				iLocal_575 = 1;
				if (GlobalFunc_5183(6, 18))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_546 = 197.2994f;
				iLocal_575 = 1;
				if (GlobalFunc_5183(6, 18))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_546 = 296.5427f;
				iLocal_575 = 1;
				if (GlobalFunc_5183(6, 18))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_546 = 130.9518f;
				iLocal_575 = 1;
				if (GlobalFunc_5183(6, 18))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_546 = 73.6245f;
				iLocal_575 = 1;
				if (GlobalFunc_5183(6, 18))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_546 = 110.7699f;
				iLocal_575 = 1;
				if (GlobalFunc_5183(6, 18))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_546 = 52.0064f;
				iLocal_575 = 1;
				if (GlobalFunc_5183(6, 18))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_546 = 136.5945f;
				iLocal_575 = 3;
				if (GlobalFunc_5183(10, 22))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_546 = 176.1174f;
				iLocal_575 = 3;
				if (GlobalFunc_5183(10, 22))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_546 = 43.8031f;
				iLocal_575 = 3;
				if (GlobalFunc_5183(10, 22))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_546 = 269.2587f;
				iLocal_575 = 3;
				if (GlobalFunc_5183(10, 22))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_546 = 36.5415f;
				iLocal_575 = 3;
				if (GlobalFunc_5183(10, 22))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_546 = 24.9178f;
				iLocal_575 = 2;
				if (GlobalFunc_5183(8, 20))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_546 = 291.6504f;
				iLocal_575 = 2;
				if (GlobalFunc_5183(8, 20))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { -40.42f, -1751.423f, 28.421f };
				fLocal_546 = 145.6553f;
				iLocal_575 = 2;
				if (GlobalFunc_5183(8, 20))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_546 = 232.6337f;
				iLocal_575 = 2;
				if (GlobalFunc_5183(8, 20))
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
				iLocal_539 = GlobalFunc_1548(0);
				Local_543 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_546 = 247.1234f;
				iLocal_575 = 2;
				if (GlobalFunc_5183(8, 20))
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
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(GlobalFunc_271(PLAYER::PLAYER_ID()), func_348(iVar2), 1);
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
	if (GlobalFunc_479())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (GlobalFunc_478())
	{
		return 1;
	}
	if (GlobalFunc_477(157))
	{
		if (!GlobalFunc_476())
		{
			return 1;
		}
	}
	if (GlobalFunc_477(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (GlobalFunc_5086() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GlobalFunc_5086()) == 0)
		{
			return 1;
		}
	}
	return 0;
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
		if (GlobalFunc_252(Var0.f_1, 1, 1))
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
		if (!GlobalFunc_5085())
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
				if (!GlobalFunc_453(uVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar23))
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
				GlobalFunc_265();
				GlobalFunc_452();
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
				if (!GlobalFunc_453(uVar23) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar23))
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







void func_379()//Position - 0x15841
{
	int iVar0;
	
	Global_2446554.f_6 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!GlobalFunc_904(Local_141.f_1))
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
					GlobalFunc_917(&(Local_141.f_2));
				}
			}
		}
		if (((MISC::IS_BIT_SET(Local_141.f_12, 3) || !func_9()) || MISC::IS_BIT_SET(iLocal_535, 20)) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_141.f_3))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_141.f_3))
				{
					GlobalFunc_917(&(Local_141.f_3));
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
	if (GlobalFunc_74("SHR_MENU"))
	{
		HUD::CLEAR_HELP(1);
	}
	Global_2446554.f_7 = GlobalFunc_314();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_338(Local_90));
	GlobalFunc_4988(1, Local_90);
	if (Local_90.f_14 != -1)
	{
		GlobalFunc_5420(&(Local_90.f_14));
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
	GlobalFunc_491();
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
			if (GlobalFunc_252(iVar1, 1, 1))
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
	
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(8);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_141, 73);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_214, 321);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!GlobalFunc_5091())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		GlobalFunc_356(GlobalFunc_1548(0));
		GlobalFunc_356(GlobalFunc_1548(1));
		GlobalFunc_356(GlobalFunc_1548(2));
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
		if ((GlobalFunc_745() && !GlobalFunc_247(PLAYER::PLAYER_ID(), 1)) && !GlobalFunc_247(PLAYER::PLAYER_ID(), 2))
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
	OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(GlobalFunc_1548(1), 0);
	uVar0 = GlobalFunc_6872(1178, -1, 0);
	if (MISC::IS_BIT_SET(uVar0, 20) && MISC::IS_BIT_SET(iVar0, 21))
	{
		MISC::SET_BIT(&iLocal_536, 1);
	}
	Local_214[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = 0;
	return 1;
}


int func_385()//Position - 0x15DC7
{
	if (iLocal_769 >= 0 && iLocal_769 <= 9)
	{
		if (GlobalFunc_5183(5, 6) || GlobalFunc_5183(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_769 >= 10 && iLocal_769 <= 14)
	{
		if (GlobalFunc_5183(9, 10) || GlobalFunc_5183(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_769 >= 15 && iLocal_769 <= 19)
	{
		if (GlobalFunc_5183(7, 8) || GlobalFunc_5183(19, 20))
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
		if (GlobalFunc_5183(6, 7) || GlobalFunc_5183(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_769 >= 10 && iLocal_769 <= 14)
	{
		if (GlobalFunc_5183(10, 11) || GlobalFunc_5183(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_769 >= 15 && iLocal_769 <= 19)
	{
		if (GlobalFunc_5183(8, 9) || GlobalFunc_5183(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}






