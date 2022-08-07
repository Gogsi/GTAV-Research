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
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_55 = 0;
	struct<4> Local_56 = { 0, 0, 0, 0 } ;
	var uLocal_60[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	float fLocal_97 = 0f;
	bool bLocal_98 = 0;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	struct<493> Local_104 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_715 = 12;
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
	var uLocal_728 = 12;
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
	var uLocal_741 = 12;
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
	var uLocal_754 = 9;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 9;
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
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 2;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 2;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
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
	iLocal_17 = 3;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_93 = 207;
	iLocal_96 = AUDIO::GET_SOUND_ID();
	fLocal_97 = -1f;
	fLocal_99 = 0.113f;
	fLocal_100 = 0.255f;
	fLocal_101 = 0.5972f;
	fLocal_102 = 0.255f;
	iLocal_103 = -99;
	Local_104.f_1 = ScriptParam_0.f_1;
	Local_104.f_3 = -1;
	Local_104.f_492 = ScriptParam_0;
	if (!Local_104.f_1)
	{
		MISC::SET_BIT(&(Global_90014.f_1267[ScriptParam_0]), 16);
	}
	Local_104.f_446 = 518475/*func_905*/;
	Local_104.f_447 = 518314/*func_904*/;
	Local_104.f_448 = 462956/*func_860*/;
	Local_104.f_449 = 462914/*func_859*/;
	Local_104.f_450 = 462872/*func_858*/;
	Local_104.f_451 = 455013/*func_850*/;
	Local_104.f_452 = 454971/*func_849*/;
	Local_104.f_453 = 362180/*func_816*/;
	Local_104.f_454 = 336391/*func_799*/;
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, ScriptParam_0);
	if (!GlobalFunc_5092(0, -1, 1))
	{
		func_785(&Local_104, 0);
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_56, 4);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_60, 33);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!GlobalFunc_5091())
	{
		func_785(&Local_104, 0);
	}
	GlobalFunc_5809(Local_104.f_492);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1(&Local_104);
	}
}

void func_1(var uParam0)//Position - 0x17C
{
	int iVar0;
	
	func_782(&(uParam0->f_12));
	if (uParam0->f_7)
	{
		GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
	}
	if (GlobalFunc_2507(uParam0->f_492) && !GlobalFunc_8593(uParam0, uParam0->f_492))
	{
		if (GlobalFunc_5807(uParam0))
		{
			PAD::_0x7F4724035FDCA1DD(2);
			PAD::_0x7F4724035FDCA1DD(0);
			if (!uParam0->f_11 == 2 && !func_770(uParam0))
			{
				iVar0 = 0;
				func_760(uParam0, &iVar0, 0, 0);
			}
			GlobalFunc_10973(uParam0, &(uParam0->f_103));
			if (uParam0->f_9)
			{
				if (!GlobalFunc_8560(*uParam0))
				{
					GlobalFunc_9190(uParam0, &(uParam0->f_103), uParam0->f_561);
				}
				else
				{
					func_743(uParam0);
					if (!uParam0->f_11 == 2 && !func_770(uParam0))
					{
						func_742(uParam0);
					}
				}
			}
			func_741(uParam0);
			func_719(uParam0);
			func_710(uParam0);
			switch (uParam0->f_11)
			{
				case 0:
					func_690(uParam0);
					break;
				
				case 1:
					GlobalFunc_7166(0);
					func_685(uParam0);
					func_684(uParam0);
					if (func_683(uParam0))
					{
						if (uParam0->f_11 == 2)
						{
							uParam0->f_560 = 1;
							func_655(uParam0);
						}
					}
					else
					{
						func_649(uParam0);
					}
					break;
				
				case 2:
					func_655(uParam0);
					GlobalFunc_9218(uParam0, &(uParam0->f_103));
					break;
				
				case 3:
					func_643(uParam0);
					func_649(uParam0);
					func_633(uParam0);
					func_626(uParam0);
					func_615(uParam0);
					break;
				
				case 4:
					func_22(uParam0);
					GlobalFunc_9218(uParam0, &(uParam0->f_103));
					break;
				
				case 5:
					uParam0->f_11 = 3;
					break;
				}
		}
	}
	else
	{
		func_785(uParam0, 0);
	}
	if (GlobalFunc_8548(uParam0))
	{
		func_9(uParam0);
	}
	func_2(uParam0);
}

void func_2(var uParam0)//Position - 0x32B
{
	bool bVar0;
	int iVar1;
	
	if (uParam0->f_9 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_60[PLAYER::PLAYER_ID()] = Global_90014.f_1267[*uParam0];
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			GlobalFunc_5825(*uParam0);
			if (uParam0->f_679)
			{
				if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_680))
				{
					bVar0 = true;
					if ((!MISC::IS_BIT_SET(Global_90014.f_1267[*uParam0], 0) && !MISC::IS_BIT_SET(Global_90014.f_1267[*uParam0], 5)) && (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) || PED::IS_PED_INJURED(uParam0->f_12)))
					{
						iVar1 = 0;
						while (iVar1 < 32)
						{
							if (GlobalFunc_252(PLAYER::INT_TO_PLAYERINDEX(iVar1), 1, 1))
							{
								if (MISC::IS_BIT_SET(uLocal_60[iVar1], 5))
								{
									bVar0 = false;
									iVar1 = 33;
								}
							}
							iVar1++;
						}
					}
					else
					{
						bVar0 = false;
					}
					GlobalFunc_5781(*uParam0, bVar0, 0);
					uParam0->f_679 = 0;
				}
			}
			else
			{
				uParam0->f_680 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 2000);
				uParam0->f_679 = 1;
			}
		}
		else
		{
			uParam0->f_680 = NETWORK::GET_NETWORK_TIME();
			uParam0->f_679 = 1;
		}
	}
}







void func_9(var uParam0)//Position - 0x3D25
{
	func_785(uParam0, 1);
	func_10(uParam0);
}

void func_10(var uParam0)//Position - 0x3D3A
{
	GlobalFunc_2457(&(uParam0->f_103));
	GlobalFunc_2456(uParam0);
	GlobalFunc_2455(&(uParam0->f_258));
	GlobalFunc_2454(&(uParam0->f_170));
	uParam0->f_254 = 0;
	uParam0->f_428.f_1 = 0;
	uParam0->f_428.f_2 = { 0f, 0f, 0f };
	uParam0->f_428.f_10 = { 0f, 0f, 0f };
	uParam0->f_428.f_5 = 0f;
	uParam0->f_428.f_13 = 0f;
	uParam0->f_428.f_14 = 0;
}












void func_22(var uParam0)//Position - 0x437C
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<10> Var12;
	var uVar24;
	var uVar25;
	struct<11> Var29;
	var uVar41;
	float fVar45;
	float fVar46;
	float fVar47;
	var uVar48;
	int iVar49;
	int iVar50;
	
	func_614(1);
	func_613(1);
	if (GlobalFunc_1549(1))
	{
		if (GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 1))
		{
			GlobalFunc_1547();
			GlobalFunc_1539();
		}
		else if (!GlobalFunc_2500())
		{
			GlobalFunc_1539();
		}
		return;
	}
	func_598(uParam0, &(uParam0->f_103));
	GlobalFunc_5800(0, 1, 1);
	GlobalFunc_7629();
	fVar3 = 0f;
	if (!PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_12, uParam0->f_455, "keeper_idle_a", 3))
		{
			fVar1 = 0.29f;
			fVar2 = 0.474f;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_12, uParam0->f_455, "keeper_idle_b", 3))
		{
			fVar1 = 0.33f;
			fVar2 = 0.59f;
		}
		else
		{
			fVar1 = 0.3f;
			fVar2 = 0.5f;
		}
	}
	switch (uParam0->f_103.f_31)
	{
		case 0:
			uParam0->f_472.f_19 = 0;
			uParam0->f_472.f_18 = 0;
			func_591(PLAYER::PLAYER_ID(), uParam0->f_492);
			if (GlobalFunc_5785(1))
			{
				if ((((((((func_643(uParam0) && func_589(uParam0)) && GlobalFunc_4998("HAR_MNU", *uParam0)) && func_586(uParam0)) && GlobalFunc_5798(*uParam0)) && func_584(uParam0, 1)) && GlobalFunc_2497(PLAYER::PLAYER_ID(), uParam0->f_492, 1)) && func_614(1)) && func_613(1))
				{
					GlobalFunc_8584(1);
					if (!Global_68245)
					{
						iVar4 = PLAYER::PLAYER_PED_ID();
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_608.f_2) && !PED::IS_PED_INJURED(uParam0->f_608.f_2))
						{
							iVar4 = uParam0->f_608.f_2;
						}
						iVar4 = iVar4;
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(uParam0->f_12))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 1);
						PED::SET_PED_CAN_RAGDOLL(uParam0->f_12, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_12, Global_1574056);
					}
					GlobalFunc_10536(&(uParam0->f_103));
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					uParam0->f_461 = 0;
					uParam0->f_462 = 0;
					uParam0->f_463 = 0;
					uParam0->f_469 = 0;
					uParam0->f_557 = 0;
					uParam0->f_558 = 1;
					uParam0->f_562 = 0;
					uParam0->f_563 = 0;
					uParam0->f_254 = -1;
					uParam0->f_255 = -1;
					uParam0->f_579 = -1;
					uParam0->f_257 = 1f;
					uParam0->f_103.f_19 = 1;
					uParam0->f_103.f_18 = 0;
					uParam0->f_103.f_15 = 0;
					uParam0->f_103.f_23 = 0;
					uParam0->f_103.f_22 = 0;
					StringCopy(&(uParam0->f_103.f_11), "", 16);
					uParam0->f_103.f_5 = 0;
					uParam0->f_494 = 0;
					uParam0->f_103.f_31 = 1;
					uParam0->f_468 = 0;
				}
				else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_689)) > 8000) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_690) > 8000))
				{
					uParam0->f_103.f_31 = 8;
				}
			}
			break;
		
		case 1:
			func_504(uParam0);
			break;
		
		case 6:
			func_503(uParam0);
			break;
		
		case 5:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
				{
					func_502(uParam0);
				}
			}
			else
			{
				func_502(uParam0);
			}
			break;
		
		case 2:
			func_501();
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				iLocal_93 = 209;
			}
			else
			{
				iLocal_93 = 207;
			}
			iVar5 = PLAYER::PLAYER_PED_ID();
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_608.f_2) && !PED::IS_PED_INJURED(uParam0->f_608.f_2))
			{
				iVar5 = uParam0->f_608.f_2;
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PED::SET_PED_CONFIG_FLAG(iVar5, 240, 1);
			}
			if ((GlobalFunc_5785(1) && !PED::IS_PED_INJURED(iVar5)) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
					{
						if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
						{
							PED::SET_PED_RESET_FLAG(iVar5, 302, 1);
						}
					}
				}
				if (!uParam0->f_103.f_22 && uParam0->f_103.f_15)
				{
					if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979()) && func_495(uParam0))
					{
					}
					else if (!func_494(uParam0, uParam0->f_457))
					{
						func_491(*uParam0, &Var6, &Var9);
						if (GlobalFunc_4405(uParam0))
						{
							uParam0->f_458 = func_489(uParam0);
						}
						else
						{
							uParam0->f_458 = "player_base";
						}
						TASK::TASK_PLAY_ANIM_ADVANCED(iVar5, uParam0->f_455, uParam0->f_458, Var6, Var9, 8f, -8f, -1, 5641, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar5, 0, 0);
						uParam0->f_457 = func_488(uParam0);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_12, uParam0->f_455, uParam0->f_457, Var6, Var9, 1000f, -1000f, -1, 5640, 0f, 2, 1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_12, 0, 0);
							ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_ENT(Local_56.f_1), func_487(uParam0->f_457), uParam0->f_455, 1000f, 0, 1, 1, 0f, 0);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_56.f_1));
							func_486(uParam0);
							func_485(uParam0, 1, 0);
							func_484(uParam0, uParam0->f_12, uParam0->f_457, 69, 4f, -998637568);
							func_484(uParam0, PLAYER::PLAYER_PED_ID(), uParam0->f_458, 64, 4f, -998637568);
							func_483(uParam0, NETWORK::NET_TO_ENT(Local_56.f_1), func_487(uParam0->f_457), 64, 1148846080, -998637568);
							func_482(uParam0);
							if (func_613(1))
							{
								if ((((((uParam0->f_494 == 3 || uParam0->f_494 == 8) || uParam0->f_494 == 10) || uParam0->f_494 == 11) || uParam0->f_494 == 13) || uParam0->f_494 == 14) || uParam0->f_494 == 15)
								{
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_56.f_1), false);
								}
								else
								{
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_56.f_1), true);
								}
							}
						}
						else
						{
							func_481(uParam0, uParam0->f_457, 0, 0, 1, -1056964608);
						}
						func_479(uParam0, func_480(uParam0, 3, uParam0->f_457));
						if (CAM::DOES_CAM_EXIST(uParam0->f_38[1 /*12*/]))
						{
							CAM::SET_CAM_ACTIVE(uParam0->f_38[1 /*12*/], 0);
							CAM::DESTROY_CAM(uParam0->f_38[1 /*12*/], 0);
						}
					}
					else
					{
						HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
						HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
						HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
						HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
						if (func_478(&(uParam0->f_498), &(uParam0->f_500)) == 1f)
						{
							uParam0->f_103.f_15 = 0;
							uParam0->f_103.f_23 = 0;
							uParam0->f_103.f_22 = 0;
							uParam0->f_457 = "";
							uParam0->f_558 = 1;
							uParam0->f_559 = 1;
							if (func_477() || func_476())
							{
								if (uParam0->f_494 == 1)
								{
									uParam0->f_494 = 0;
									uParam0->f_103.f_1 = 0;
								}
								else if (uParam0->f_494 == 2)
								{
									uParam0->f_494 = 0;
									uParam0->f_103.f_1 = 1;
								}
								else if (uParam0->f_494 == 3)
								{
									uParam0->f_494 = 3;
									if (func_477())
									{
										uParam0->f_103.f_1 = 2;
									}
									else
									{
										uParam0->f_103.f_1 = 1;
									}
								}
								else if (func_475(uParam0->f_494))
								{
								}
							}
							func_467(uParam0, iVar5);
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								func_486(uParam0);
								func_485(uParam0, 0, 1);
								func_484(uParam0, uParam0->f_12, "keeper_base", 69, 1148846080, -998637568);
								func_483(uParam0, NETWORK::NET_TO_ENT(Local_56.f_1), func_487("keeper_base"), 64, 1148846080, -998637568);
								func_482(uParam0);
							}
							else
							{
								func_481(uParam0, "keeper_base", 0, 1, 0, -1056964608);
							}
							func_458(uParam0, 0);
						}
						else if (func_478(&(uParam0->f_498), &(uParam0->f_500)) > 0.6f)
						{
							if (!uParam0->f_103.f_23)
							{
								func_422(uParam0);
							}
						}
						else if (func_478(&(uParam0->f_498), &(uParam0->f_500)) > fVar2)
						{
							if (uParam0->f_524 != 0)
							{
								GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_524, 0);
								uParam0->f_524 = 0;
							}
							if (uParam0->f_468)
							{
								uParam0->f_458 = func_489(uParam0);
								func_491(*uParam0, &Var6, &Var9);
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									uParam0->f_499 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var6, Var9, 2, 0, 1, 1065353216, 0, 1065353216);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_499, uParam0->f_455, uParam0->f_458, 8f, -8f, 0, 0, 1148846080, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_499);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&uVar0);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_455, uParam0->f_458, Var6, Var9, 8f, -8f, -1, 5640, 0f, 2, 1);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_455, "player_base", Var6, Var9, 8f, -8f, -1, 5641, 0f, 2, 1);
									TASK::CLOSE_SEQUENCE_TASK(uVar0);
									TASK::TASK_PERFORM_SEQUENCE(iVar5, uVar0);
									TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								}
								AUDIO::STOP_SOUND(uParam0->f_525);
								AUDIO::STOP_SOUND(uParam0->f_526);
								AUDIO::STOP_SOUND(uParam0->f_527);
								uParam0->f_468 = 0;
							}
						}
						else if (func_478(&(uParam0->f_498), &(uParam0->f_500)) > 0.4f)
						{
							if (!uParam0->f_103.f_23)
							{
								func_422(uParam0);
							}
							if (uParam0->f_494 == 1)
							{
								Stack.Push(PLAYER::PLAYER_PED_ID());
								Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
								Stack.Push(Global_2541867[uParam0->f_103.f_1]);
								Call_Loc(uParam0->f_446);
								if (!StackVal)
								{
									Stack.Push(PLAYER::PLAYER_PED_ID());
									Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
									Stack.Push(Global_2541867[uParam0->f_103.f_1]);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(0);
									Call_Loc(uParam0->f_448);
									if (Global_68245)
									{
										GlobalFunc_5019(385, Global_2541867[uParam0->f_103.f_1], -1, 1);
										GlobalFunc_9896(8);
										GlobalFunc_6720(740, Global_2541867[uParam0->f_103.f_1], -1, 1);
										GlobalFunc_6720(2035, Global_2541867[uParam0->f_103.f_1], -1, 1);
									}
								}
								if (PLAYER::PLAYER_PED_ID() != iVar5)
								{
									Stack.Push(iVar5);
									Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
									Stack.Push(Global_2541867[uParam0->f_103.f_1]);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(0);
									Call_Loc(uParam0->f_448);
								}
							}
							else if (uParam0->f_494 == 2)
							{
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									func_403(PLAYER::PLAYER_PED_ID(), 1, (func_404(uParam0->f_103.f_1) - 1), uParam0->f_602, 0, 0, uParam0->f_257, 1);
									if (PLAYER::PLAYER_PED_ID() != iVar5)
									{
										func_403(iVar5, 1, (func_404(uParam0->f_103.f_1) - 1), uParam0->f_602, 0, 0, uParam0->f_257, 1);
									}
									GlobalFunc_9896(8);
									GlobalFunc_5019(448, (func_404(uParam0->f_103.f_1) - 1), -1, 1);
									GlobalFunc_7472(88, 1f, -1, 1);
									uParam0->f_255 = func_404(uParam0->f_103.f_1);
									uParam0->f_257 = 1f;
								}
								else
								{
									Stack.Push(PLAYER::PLAYER_PED_ID());
									Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
									Stack.Push(Global_2541867[uParam0->f_103.f_1]);
									Call_Loc(uParam0->f_446);
									if (!StackVal)
									{
										Stack.Push(PLAYER::PLAYER_PED_ID());
										Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
										Stack.Push(Global_2541867[uParam0->f_103.f_1]);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(0);
										Call_Loc(uParam0->f_448);
										uParam0->f_255 = Global_2541867[uParam0->f_103.f_1];
									}
									if (PLAYER::PLAYER_PED_ID() != iVar5)
									{
										Stack.Push(iVar5);
										Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
										Stack.Push(Global_2541867[uParam0->f_103.f_1]);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(0);
										Call_Loc(uParam0->f_448);
									}
								}
							}
							else if (uParam0->f_494 == 3)
							{
								if (Global_68245)
								{
									uParam0->f_579 = uParam0->f_103.f_1;
									func_403(PLAYER::PLAYER_PED_ID(), 4, (uParam0->f_579 - 1), uParam0->f_602, 0, 0, 1f, 1);
									GlobalFunc_5019(451, (uParam0->f_579 - 1), -1, 1);
									GlobalFunc_7472(91, 1f, -1, 1);
									if ((uParam0->f_579 - 1) == -1 || (uParam0->f_579 - 1) > 15)
									{
										func_403(PLAYER::PLAYER_PED_ID(), 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 1f, 1);
										GlobalFunc_7472(89, 1f, -1, 1);
									}
									else
									{
										func_403(PLAYER::PLAYER_PED_ID(), 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 0f, 1);
										GlobalFunc_7472(89, 0f, -1, 1);
									}
									GlobalFunc_7472(GlobalFunc_289(4), 1f, -1, 1);
									GlobalFunc_9896(8);
									if (PLAYER::PLAYER_PED_ID() != iVar5)
									{
										func_403(iVar5, 4, (uParam0->f_579 - 1), uParam0->f_602, 0, 0, 1f, 1);
										if ((uParam0->f_579 - 1) == -1 || (uParam0->f_579 - 1) > 15)
										{
											func_403(iVar5, 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 1f, 1);
										}
										else
										{
											func_403(iVar5, 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 0f, 1);
										}
									}
								}
							}
							else if (func_475(uParam0->f_494))
							{
								if (func_393(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_494, uParam0->f_103.f_1, &Var12))
								{
									if (Var12.f_9 == 0)
									{
										if (!func_392(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var12, uParam0))
										{
											Stack.Push(PLAYER::PLAYER_PED_ID());
											Stack.Push(2);
											Stack.Push(Var12.f_8);
											Stack.Push(0);
											Stack.Push(-1);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(uParam0->f_602);
											Stack.Push(uParam0->f_603);
											Stack.Push(-1);
											Stack.Push(0);
											Call_Loc(uParam0->f_448);
											if (Global_68245)
											{
												GlobalFunc_5019(385, Var12.f_8, -1, 1);
												GlobalFunc_9896(8);
												GlobalFunc_6720(740, Var12.f_8, -1, 1);
												GlobalFunc_6720(2035, Var12.f_8, -1, 1);
												GlobalFunc_6720(2135, uParam0->f_602, -1, 1);
												GlobalFunc_6720(2142, uParam0->f_603, -1, 1);
											}
										}
										if (PLAYER::PLAYER_PED_ID() != iVar5)
										{
											Stack.Push(iVar5);
											Stack.Push(2);
											Stack.Push(Var12.f_8);
											Stack.Push(0);
											Stack.Push(-1);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(uParam0->f_602);
											Stack.Push(uParam0->f_603);
											Stack.Push(-1);
											Stack.Push(0);
											Call_Loc(uParam0->f_448);
										}
									}
									else if (Var12.f_9 == 1 || Var12.f_9 == 2)
									{
										func_403(PLAYER::PLAYER_PED_ID(), Var12.f_5, Var12.f_6, uParam0->f_602, uParam0->f_603, uParam0->f_605, uParam0->f_607, 1);
										if (Global_68245)
										{
											if (Var12.f_5 == 7)
											{
												GlobalFunc_7472(157, SYSTEM::TO_FLOAT(Var12.f_6), -1, 1);
												uParam0->f_602 = -1;
												uParam0->f_603 = -1;
												uParam0->f_604 = uParam0->f_603;
											}
											else
											{
												GlobalFunc_5019(GlobalFunc_290(Var12.f_5), Var12.f_6, -1, 1);
												if (uParam0->f_602 >= 0)
												{
													func_389(Var12.f_5, uParam0->f_602, uParam0->f_605, -1, 1);
												}
												if (uParam0->f_603 >= 0)
												{
													GlobalFunc_6720(GlobalFunc_286(Var12.f_5), uParam0->f_603, -1, 1);
												}
												GlobalFunc_7472(GlobalFunc_289(Var12.f_5), uParam0->f_607, -1, 1);
											}
										}
										if (PLAYER::PLAYER_PED_ID() != iVar5)
										{
											func_403(iVar5, Var12.f_5, Var12.f_6, uParam0->f_602, uParam0->f_603, uParam0->f_605, uParam0->f_607, 1);
										}
									}
								}
							}
						}
						else if (func_478(&(uParam0->f_498), &(uParam0->f_500)) > fVar1)
						{
							if (uParam0->f_465 && uParam0->f_524 == 0)
							{
								if (uParam0->f_494 == 1)
								{
									uParam0->f_524 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_barbers_haircut", iVar5, 0f, 0f, 0.1f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
								}
							}
							if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_524))
							{
								GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(uParam0->f_524, 0f, 0f, 0f, 0);
							}
							if (!uParam0->f_468)
							{
								if (uParam0->f_494 == 1 || uParam0->f_494 == 6)
								{
									if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_525))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_525, "Scissors", iVar5, "Barber_Sounds", 0, 0);
									}
								}
								else if (((uParam0->f_494 == 2 || uParam0->f_494 == 7) || uParam0->f_494 == 9) || uParam0->f_494 == 8)
								{
									if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_526))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_525, "Scissors", iVar5, "Barber_Sounds", 0, 0);
									}
								}
								else if (uParam0->f_494 == 10)
								{
								}
								else if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_527))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_527, "Makeup", iVar5, "Barber_Sounds", 0, 0);
								}
								uParam0->f_468 = 1;
							}
						}
					}
				}
				if (uParam0->f_558)
				{
					func_383(iVar5);
					func_467(uParam0, iVar5);
				}
				if (!uParam0->f_103.f_22 && !uParam0->f_103.f_15)
				{
					if (PAD::_0x6CD79468A1E595C6(2))
					{
						uVar24 = uParam0->f_103.f_1;
						uParam0->f_558 = 1;
						func_383(iVar5);
						func_467(uParam0, iVar5);
						uParam0->f_103.f_1 = uVar24;
						GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
					}
					else if ((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_90014.f_1318) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
					{
						func_458(uParam0, 1);
						switch (uParam0->f_494)
						{
							case 0:
								func_381(uParam0, iVar5);
								break;
							
							case 4:
								func_380(uParam0, iVar5);
								break;
							
							case 1:
								func_364(uParam0, iVar5);
								break;
							
							case 2:
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									func_322(uParam0, iVar5);
								}
								else
								{
									func_364(uParam0, iVar5);
								}
								break;
							
							case 3:
								func_319(uParam0, iVar5);
								break;
							
							default:
								if (func_475(uParam0->f_494))
								{
									func_205(uParam0, iVar5);
								}
								break;
							}
						}
				}
				if (uParam0->f_461)
				{
					if (uParam0->f_103.f_1 >= 0)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							GlobalFunc_2590(&uVar25);
							if (MISC::GET_HASH_KEY(&uVar25) == 0)
							{
								if (uParam0->f_494 == 1)
								{
									GlobalFunc_1353("HAIR_UNLOCK", 0, 0);
									GlobalFunc_1585(GlobalFunc_7459(Global_2541867[uParam0->f_103.f_1]));
								}
								else if (uParam0->f_494 == 2)
								{
									GlobalFunc_1353("HAIR_UNLOCK", 0, 0);
									GlobalFunc_1585(GlobalFunc_4190(func_198(func_404(uParam0->f_103.f_1))));
								}
								else if (uParam0->f_494 == 3)
								{
									GlobalFunc_1353("HAIR_UNLOCK", 0, 0);
									GlobalFunc_1585(GlobalFunc_4190(func_196(uParam0->f_103.f_1)));
								}
								else if (func_475(uParam0->f_494))
								{
									if (func_393(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_494, uParam0->f_103.f_1, &Var29))
									{
										if (Var29.f_9 == 0)
										{
											GlobalFunc_1353("HAIR_UNLOCK", 0, 0);
											GlobalFunc_1585(GlobalFunc_7459(Var29.f_8));
										}
										else if (Var29.f_9 == 1 || Var29.f_9 == 2)
										{
											if (Var29.f_5 == 1)
											{
												GlobalFunc_1353("HAIR_UNLOCK", 0, 0);
												GlobalFunc_1585(GlobalFunc_4190(Var29.f_10));
											}
											else if (Var29.f_5 == 4)
											{
												GlobalFunc_1353("HAIR_UNLOCK", 0, 0);
												GlobalFunc_1585(GlobalFunc_4190(Var29.f_10));
											}
										}
									}
								}
							}
						}
					}
				}
				else if (uParam0->f_494 == 0)
				{
					if (uParam0->f_103.f_1 >= 0)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							GlobalFunc_2590(&uVar25);
							if (MISC::GET_HASH_KEY(&uVar25) == 0)
							{
								if (uParam0->f_103.f_1 == 0)
								{
									if (func_145(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 1))
									{
										GlobalFunc_1353("HAIR_UNLOCK_M", 0, 0);
									}
								}
								else if (uParam0->f_103.f_1 == 1)
								{
									if (func_145(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 2))
									{
										GlobalFunc_1353("HAIR_UNLOCK_M", 0, 0);
									}
								}
								else if (uParam0->f_103.f_1 == 2)
								{
									if (func_145(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 3))
									{
										GlobalFunc_1353("HAIR_UNLOCK_M", 0, 0);
									}
								}
							}
						}
					}
				}
				else if (uParam0->f_494 == 5)
				{
				}
				else if (uParam0->f_494 == 4)
				{
					if (uParam0->f_682 > -1)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							GlobalFunc_2590(&uVar25);
							if (MISC::GET_HASH_KEY(&uVar25) == 0)
							{
								if (MISC::IS_BIT_SET(uParam0->f_686[(uParam0->f_682 / 32)], (uParam0->f_682 % 32)))
								{
									GlobalFunc_1353("HAIR_UNLOCK_M", 0, 0);
								}
							}
						}
					}
				}
				else if ((uParam0->f_494 != 0 && uParam0->f_462) && !uParam0->f_469)
				{
					if (uParam0->f_103.f_1 >= 0)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							GlobalFunc_2590(&uVar25);
							if (MISC::GET_HASH_KEY(&uVar25) == 0)
							{
								if (uParam0->f_463)
								{
									if (GlobalFunc_2586(&(uParam0->f_534)))
									{
										GlobalFunc_1353("SHOP_UNLOCKDLC", 4000, 0);
										GlobalFunc_1330(GlobalFunc_2591(&(uParam0->f_534), 0));
									}
									else if (GlobalFunc_2585(&(uParam0->f_534)))
									{
										GlobalFunc_1353("SHOP_UNLOCKDLC3", 4000, 0);
										GlobalFunc_1330(GlobalFunc_2591(&(uParam0->f_534), 0));
									}
									else if (GlobalFunc_2584(&(uParam0->f_534)))
									{
										GlobalFunc_1353("SHOP_UNLOCKDLC4", 4000, 0);
										GlobalFunc_1330(GlobalFunc_2591(&(uParam0->f_534), 0));
									}
									else
									{
										GlobalFunc_1353("SHOP_UNLOCKDLC2", 4000, 0);
										GlobalFunc_1330(GlobalFunc_2591(&(uParam0->f_534), 1));
									}
								}
								else
								{
									GlobalFunc_1353("HAIR_UNLOCK_N", 4000, 0);
								}
								uParam0->f_469 = 1;
							}
						}
					}
				}
				if (!uParam0->f_103.f_15 || uParam0->f_103.f_22)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iLocal_95)
					{
						HUD::SET_MULTIPLAYER_WALLET_CASH();
						HUD::SET_MULTIPLAYER_BANK_CASH();
						iLocal_95 = 1;
					}
					if ((uParam0->f_494 == 1 || uParam0->f_494 == 2) || uParam0->f_494 == 3)
					{
						GlobalFunc_2590(&uVar41);
						if (MISC::GET_HASH_KEY(&uVar41) == 0)
						{
							if (uParam0->f_463 && !MISC::IS_STRING_NULL_OR_EMPTY(GlobalFunc_2591(&(uParam0->f_534), 0)))
							{
								if (GlobalFunc_2586(&(uParam0->f_534)))
								{
									GlobalFunc_1353("SHOP_DLC_PACK", 0, 0);
									GlobalFunc_1330(GlobalFunc_2591(&(uParam0->f_534), 0));
								}
								else if (GlobalFunc_2585(&(uParam0->f_534)))
								{
									GlobalFunc_1353("SHOP_DLC_PACK3", 0, 0);
									GlobalFunc_1330(GlobalFunc_2591(&(uParam0->f_534), 0));
								}
								else if (GlobalFunc_2584(&(uParam0->f_534)))
								{
									GlobalFunc_1353("SHOP_DLC_PACK4", 0, 0);
									GlobalFunc_1330(GlobalFunc_2591(&(uParam0->f_534), 0));
								}
								else
								{
									GlobalFunc_1353("SHOP_DLC_PACK2", 0, 0);
									GlobalFunc_1330(GlobalFunc_2591(&(uParam0->f_534), 1));
								}
							}
						}
					}
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
					GlobalFunc_8511(1, *uParam0, 1, 0, 1, -1082130432, 0, 0);
					fVar3 = 0f;
					if (MISC::IS_PC_VERSION())
					{
						if (!func_117(uParam0))
						{
							fVar3 = 0.4f;
						}
						if (MISC::ABSF((GRAPHICS::_GET_ASPECT_RATIO(0) - 1.6f)) < 0.1f)
						{
							fVar45 = 0.0456f;
						}
						else if (MISC::ABSF((GRAPHICS::_GET_ASPECT_RATIO(0) - 1.777778f)) < 0.1f)
						{
							fVar45 = 0f;
						}
						else if (MISC::ABSF((GRAPHICS::_GET_ASPECT_RATIO(0) - 1.333333f)) < 0.1f)
						{
							fVar45 = 0.038f;
						}
						else
						{
							fVar45 = 0f;
						}
					}
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_582, (fLocal_99 + fVar45), (fLocal_100 + GlobalFunc_2480()), Global_17235, fLocal_101, 255, 255, 255, 255, 0);
					GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_592, ((fLocal_99 + fVar45) + fVar3), (fLocal_102 + GlobalFunc_2480()), Global_17235, fLocal_101, 255, 255, 255, 255, 0);
					GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
					if (uParam0->f_494 == 1 || uParam0->f_494 == 2)
					{
						GlobalFunc_2590(&uVar41);
						if (MISC::GET_HASH_KEY(&uVar41) == 0)
						{
							if (uParam0->f_463 && !MISC::IS_STRING_NULL_OR_EMPTY(GlobalFunc_2591(&(uParam0->f_534), 0)))
							{
								if (GlobalFunc_2586(&(uParam0->f_534)))
								{
									GlobalFunc_1353("SHOP_DLC_PACK", 0, 0);
									GlobalFunc_1330(GlobalFunc_2591(&(uParam0->f_534), 0));
								}
								else if (GlobalFunc_2585(&(uParam0->f_534)))
								{
									GlobalFunc_1353("SHOP_DLC_PACK3", 0, 0);
									GlobalFunc_1330(GlobalFunc_2591(&(uParam0->f_534), 0));
								}
								else if (GlobalFunc_2584(&(uParam0->f_534)))
								{
									GlobalFunc_1353("SHOP_DLC_PACK4", 0, 0);
									GlobalFunc_1330(GlobalFunc_2591(&(uParam0->f_534), 0));
								}
								else
								{
									GlobalFunc_1353("SHOP_DLC_PACK2", 0, 0);
									GlobalFunc_1330(GlobalFunc_2591(&(uParam0->f_534), 1));
								}
							}
						}
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						HUD::SET_MULTIPLAYER_WALLET_CASH();
						HUD::SET_MULTIPLAYER_BANK_CASH();
						if (Global_262145.f_2424)
						{
							if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShops"))
							{
								if (GlobalFunc_6942(29, 1, 1, &fVar46, &fVar47, 0))
								{
									GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
									GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
									GRAPHICS::DRAW_SPRITE("MPShops", "ShopUI_Title_Graphics_SALE", 0.112f, 0.045f, Global_17235, fVar47, 0f, 255, 255, 255, 255, 0);
									GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								}
							}
						}
					}
				}
				else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iLocal_95)
				{
					HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
					HUD::REMOVE_MULTIPLAYER_BANK_CASH();
					iLocal_95 = 0;
				}
			}
			break;
		
		case 7:
			PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), 1);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 104, 1);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 60, 1);
			if (uParam0->f_103.f_19)
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_107(uParam0);
				}
				else
				{
					PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				}
				if (!PED::IS_PED_INJURED(uParam0->f_12))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_12);
					func_102(uParam0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, 1);
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_101();
					func_486(uParam0);
				}
				GlobalFunc_4988(1, *uParam0);
				func_97(uParam0);
				GlobalFunc_5782(*uParam0);
				func_94(uParam0);
				GlobalFunc_2463(1);
				uParam0->f_472.f_19 = 0;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!func_80(PLAYER::PLAYER_PED_ID()))
						{
							Stack.Push(PLAYER::PLAYER_PED_ID());
							Stack.Push(2);
							Stack.Push(-1);
							Call_Loc(uParam0->f_447);
							uVar48 = StackVal;
							Stack.Push(PLAYER::PLAYER_PED_ID());
							Stack.Push(2);
							Stack.Push(uVar48);
							Stack.Push(0);
							Stack.Push(-1);
							Stack.Push(0);
							Stack.Push(0);
							Stack.Push(0);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(0);
							Call_Loc(uParam0->f_448);
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								iVar49 = func_79(2135, -1, 0);
								iVar50 = func_79(2142, -1, 0);
								PED::_SET_PED_HAIR_COLOR(PLAYER::PLAYER_PED_ID(), iVar49, iVar50);
							}
							func_383(PLAYER::PLAYER_PED_ID());
						}
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
					HUD::REMOVE_MULTIPLAYER_BANK_CASH();
				}
				GlobalFunc_10535(&(uParam0->f_103), 0, 0, 1);
				GlobalFunc_9185();
				GlobalFunc_8584(0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_9203(PLAYER::PLAYER_PED_ID(), -1);
				}
				if (GlobalFunc_2497(PLAYER::PLAYER_ID(), uParam0->f_492, 1))
				{
					GlobalFunc_2466(PLAYER::PLAYER_ID(), uParam0->f_492);
				}
				if (!Global_68245)
				{
					func_33(PLAYER::PLAYER_PED_ID(), 1);
				}
				if (Global_2540563)
				{
					if (Global_68245)
					{
						GlobalFunc_1691(32, GlobalFunc_7658(1, 1));
					}
				}
				SYSTEM::SETTIMERB(0);
				uParam0->f_103.f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_103.f_19 = 0;
				uParam0->f_103.f_18 = 1;
				uParam0->f_103.f_23 = 0;
				uParam0->f_103.f_22 = 0;
			}
			else if (uParam0->f_103.f_18)
			{
				GlobalFunc_5799(&(uParam0->f_218), 300);
				if (((((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 7 || uParam0->f_218 < -75) || uParam0->f_218 > 75) || uParam0->f_218.f_1 < -75) || uParam0->f_218.f_1 > 75) || MISC::IS_POSITION_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 1.5f, 0f), 0.2f, 0, 1, 1, 0, 0, PLAYER::PLAYER_PED_ID(), 0))
				{
					GlobalFunc_9185();
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(uParam0->f_12)) && func_614(0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 0);
						PED::SET_PED_CAN_RAGDOLL(uParam0->f_12, 1);
						if (uParam0->f_464)
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_12, uParam0->f_493);
						}
					}
					if (uParam0->f_470)
					{
						func_25();
					}
					uParam0->f_560 = 0;
					uParam0->f_103.f_17 = 0;
					uParam0->f_470 = 0;
					uParam0->f_11 = 5;
				}
			}
			else
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(uParam0->f_12)) && func_614(0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 0);
					PED::SET_PED_CAN_RAGDOLL(uParam0->f_12, 1);
					if (uParam0->f_464)
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_12, uParam0->f_493);
					}
				}
				if (uParam0->f_470)
				{
					func_25();
				}
				uParam0->f_560 = 0;
				uParam0->f_103.f_17 = 0;
				uParam0->f_470 = 0;
				uParam0->f_11 = 5;
			}
			break;
		
		case 8:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
				HUD::REMOVE_MULTIPLAYER_BANK_CASH();
			}
			GlobalFunc_2477(&(uParam0->f_38));
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			GlobalFunc_4988(1, *uParam0);
			func_97(uParam0);
			GlobalFunc_5782(*uParam0);
			func_94(uParam0);
			uParam0->f_472.f_19 = 0;
			func_107(uParam0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			GlobalFunc_10535(&(uParam0->f_103), 1, 1, 1);
			GlobalFunc_2463(1);
			GlobalFunc_9185();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_101();
				func_486(uParam0);
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_56.f_1))
				{
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_56.f_1), false);
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_56.f_1), false, 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_56.f_1), true);
				}
			}
			else
			{
				PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_12);
				func_102(uParam0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, 1);
			}
			if (Global_2540563)
			{
				if (Global_68245)
				{
					GlobalFunc_1691(32, GlobalFunc_7658(1, 1));
				}
			}
			GlobalFunc_8584(0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_9203(PLAYER::PLAYER_PED_ID(), -1);
			}
			if (GlobalFunc_2497(PLAYER::PLAYER_ID(), uParam0->f_492, 1))
			{
				GlobalFunc_2466(PLAYER::PLAYER_ID(), uParam0->f_492);
			}
			if (!Global_68245)
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 240, 0);
			}
			uParam0->f_560 = 0;
			uParam0->f_103.f_17 = 0;
			uParam0->f_103.f_19 = 0;
			uParam0->f_11 = 3;
			break;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_608.f_2) && !PED::IS_PED_INJURED(uParam0->f_608.f_2)) && ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_608.f_2))
		{
			NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(0);
		}
	}
	GlobalFunc_2582(&(uParam0->f_472), 1);
}



void func_25()//Position - 0x6183
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(23);
	Global_2408820[iVar0 /*83*/] = 23;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}








void func_33(int iParam0, int iParam1)//Position - 0x6AB4
{
	int iVar0;
	struct<27> Var1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		if (GlobalFunc_42(iVar0))
		{
			Var1 = 12;
			Var1.f_13 = 12;
			Var1.f_26 = 12;
			Var1.f_39 = 9;
			Var1.f_49 = 9;
			GlobalFunc_8576(iParam0, &Var1, 1);
			GlobalFunc_5019(1306, Var1[0], -1, 1);
			GlobalFunc_5019(1307, Var1[1], -1, 1);
			GlobalFunc_5019(1308, Var1[2], -1, 1);
			GlobalFunc_5019(1318, Var1.f_13[0], -1, 1);
			GlobalFunc_5019(1319, Var1.f_13[1], -1, 1);
			GlobalFunc_5019(1320, Var1.f_13[2], -1, 1);
			GlobalFunc_5019(1330, Var1.f_26[0], -1, 1);
			GlobalFunc_5019(1331, Var1.f_26[1], -1, 1);
			GlobalFunc_5019(1332, Var1.f_26[2], -1, 1);
			Global_89752[iVar0 /*65*/][0] = Var1[0];
			Global_89752[iVar0 /*65*/][1] = Var1[1];
			Global_89752[iVar0 /*65*/][2] = Var1[2];
			Global_89752[iVar0 /*65*/].f_13[0] = Var1.f_13[0];
			Global_89752[iVar0 /*65*/].f_13[1] = Var1.f_13[1];
			Global_89752[iVar0 /*65*/].f_13[2] = Var1.f_13[2];
			Global_89752[iVar0 /*65*/].f_26[0] = Var1.f_26[0];
			Global_89752[iVar0 /*65*/].f_26[1] = Var1.f_26[1];
			Global_89752[iVar0 /*65*/].f_26[2] = Var1.f_26[2];
			if (!GlobalFunc_6687(0) || iParam1)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/][0] = Var1[0];
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/][1] = Var1[1];
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/][2] = Var1[2];
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_13[0] = Var1.f_13[0];
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_13[1] = Var1.f_13[1];
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_13[2] = Var1.f_13[2];
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_26[0] = Var1.f_26[0];
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_26[1] = Var1.f_26[1];
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_26[2] = Var1.f_26[2];
			}
		}
	}
}














































int func_79(int iParam0, int iParam1, int iParam2)//Position - 0x8867
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return GlobalFunc_6872(iParam0, iParam1, iParam2);
}

int func_80(int iParam0)//Position - 0x8883
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar2 = iVar1;
			iVar4 = GlobalFunc_7614(iParam0, iVar2);
			if (GlobalFunc_7007(iVar5, 14, iVar4))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			iVar3 = iVar0;
			if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
			{
				iVar4 = func_81(iParam0, iVar3);
				if (GlobalFunc_7007(iVar5, iVar3, iVar4))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar6 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
		if (iVar6 > 0)
		{
			iVar7 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar6, PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("HAT"), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_81(int iParam0, int iParam1)//Position - 0x8954
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	uVar0 = GlobalFunc_33(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, uVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return GlobalFunc_5280(iParam0, iVar1, iVar2, iParam1);
}













void func_94(var uParam0)//Position - 0x97E6
{
	if (uParam0->f_608)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_608.f_1);
		uParam0->f_608 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_608.f_2))
	{
		PED::DELETE_PED(&(uParam0->f_608.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2542603))
	{
		PED::DELETE_PED(&Global_2542603);
	}
}



void func_97(var uParam0)//Position - 0x9A22
{
	GlobalFunc_239(&(uParam0->f_582));
	GlobalFunc_239(&(uParam0->f_592));
}




void func_101()//Position - 0x9BA0
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_56.f_1) && func_613(1))
	{
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_56.f_1), false);
		ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_56.f_1), false, 0);
		ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_56.f_1), true);
	}
}

void func_102(var uParam0, int iParam1)//Position - 0x9BE5
{
	if (func_614(0) || iParam1)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(func_106(uParam0, iParam1), 2106541073) != 1)
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(func_106(uParam0, iParam1), func_105(uParam0, iParam1), 1f, 20000, func_104(uParam0, iParam1), 1056964608);
		}
		if (iParam1 == 0)
		{
			func_103(uParam0, 0);
		}
	}
}

void func_103(var uParam0, int iParam1)//Position - 0x9C44
{
	if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_495))
		{
			uParam0->f_495 = OBJECT::CREATE_OBJECT(joaat("p_cs_scissors_s"), uParam0->f_12.f_2, 0, 0, 0);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_495))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_495));
	}
}

var func_104(var uParam0, int iParam1)//Position - 0x9C90
{
	if (iParam1 == 1)
	{
		return uParam0->f_428.f_5;
	}
	return uParam0->f_12.f_5;
}

Vector3 func_105(var uParam0, int iParam1)//Position - 0x9CB1
{
	if (iParam1 == 1)
	{
		return uParam0->f_428.f_2;
	}
	return uParam0->f_12.f_2;
}

var func_106(var uParam0, int iParam1)//Position - 0x9CD6
{
	if (iParam1 == 1)
	{
		return uParam0->f_428;
	}
	return uParam0->f_12;
}

void func_107(var uParam0)//Position - 0x9CF3
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_108(uParam0);
			if (uParam0->f_514 != -99)
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(14);
				Stack.Push(uParam0->f_514);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_448);
			}
			if (uParam0->f_515 != -99)
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(8);
				Stack.Push(uParam0->f_515);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_448);
			}
			if (uParam0->f_516 != -99)
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(9);
				Stack.Push(uParam0->f_516);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_448);
			}
			if (uParam0->f_517 != -99)
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(2);
				Stack.Push(uParam0->f_517);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_448);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (uParam0->f_518 != -99)
				{
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(1);
					Stack.Push(uParam0->f_518);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_448);
				}
				if (uParam0->f_519 != -99)
				{
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(7);
					Stack.Push(uParam0->f_519);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_448);
				}
				if (uParam0->f_520 != -1 && uParam0->f_521 != -1)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), GlobalFunc_33(5), uParam0->f_520, uParam0->f_521, 0);
				}
			}
		}
	}
	uParam0->f_513 = -99;
	uParam0->f_514 = -99;
	uParam0->f_518 = -99;
	uParam0->f_519 = -99;
	uParam0->f_520 = -1;
	uParam0->f_521 = -1;
	uParam0->f_515 = -99;
	uParam0->f_516 = -99;
	uParam0->f_517 = -99;
}

void func_108(var uParam0)//Position - 0x9E72
{
	var uVar0;
	
	if (uParam0->f_513 != -99)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uVar0 = PLAYER::PLAYER_PED_ID();
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_608.f_2) && !PED::IS_PED_INJURED(uParam0->f_608.f_2))
			{
				uVar0 = uParam0->f_608.f_2;
			}
			if (func_109(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_513, func_81(uVar0, 2)))
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(14);
				Stack.Push(uParam0->f_513);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_448);
			}
			else
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(14);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_448);
			}
		}
		else
		{
			Stack.Push(PLAYER::PLAYER_PED_ID());
			Stack.Push(14);
			Stack.Push(uParam0->f_513);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Call_Loc(uParam0->f_448);
		}
	}
}

int func_109(int iParam0, int iParam1, int iParam2)//Position - 0x9F28
{
	int iVar0;
	
	if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if ((iParam2 >= 60 && iParam2 <= 66) || (iParam2 >= 18 && iParam2 <= 23))
		{
			if (((((((((iParam1 >= 19 && iParam1 <= 26) || (iParam1 >= 27 && iParam1 <= 34)) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 50)) || (iParam1 >= 59 && iParam1 <= 66)) || (iParam1 >= 75 && iParam1 <= 82)) || (iParam1 >= 91 && iParam1 <= 98)) || (iParam1 >= 99 && iParam1 <= 106)) || (iParam1 >= 107 && iParam1 <= 114))
			{
				return 0;
			}
			if (iParam1 >= GlobalFunc_27(iParam0))
			{
				GlobalFunc_10876(iParam0, 14, iParam1);
				if (Global_2621445 == joaat("CU_XMAS_CLOTHES"))
				{
					return 0;
				}
			}
			if (iParam1 >= 327)
			{
				iVar0 = -1;
				iVar0 = GlobalFunc_4913(iParam0, iParam1, 14, 3);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TAT_DECL"), 1))
				{
					return 0;
				}
				switch (Global_2621444)
				{
					case joaat("DLC_MP_BEACH_F_HEAD2_0"):
					case joaat("DLC_MP_BEACH_F_HEAD2_1"):
					case joaat("DLC_MP_BEACH_F_HEAD2_2"):
					case joaat("DLC_MP_BEACH_F_HEAD2_3"):
					case joaat("DLC_MP_BEACH_F_HEAD2_4"):
					case joaat("DLC_MP_BEACH_F_HEAD2_5"):
					case joaat("DLC_MP_BEACH_F_HEAD2_6"):
						return 0;
						break;
					
					case joaat("DLC_MP_BEACH_F_HEAD4_0"):
					case joaat("DLC_MP_BEACH_F_HEAD4_1"):
					case joaat("DLC_MP_BEACH_F_HEAD4_2"):
					case joaat("DLC_MP_BEACH_F_HEAD4_3"):
					case joaat("DLC_MP_BEACH_F_HEAD4_4"):
					case joaat("DLC_MP_BEACH_F_HEAD4_5"):
					case joaat("DLC_MP_BEACH_F_HEAD4_6"):
						return 0;
						break;
					}
			}
		}
		else if ((iParam2 >= 85 && iParam2 <= 91) || (iParam2 >= 30 && iParam2 <= 34))
		{
			if (iParam1 >= 131 && iParam1 <= 154)
			{
				return 0;
			}
		}
	}
	return 1;
}








int func_117(var uParam0)//Position - 0xA780
{
	if (uParam0->f_606 && uParam0->f_494 == 6)
	{
		return 1;
	}
	return 0;
}




























int func_145(var uParam0, int iParam1, int iParam2)//Position - 0xE19B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 1)
	{
		func_178(&(uParam0->f_454), &Global_2541867, 1, GlobalFunc_4405(uParam0), -1, &(uParam0->f_683), &(uParam0->f_686));
		iVar0 = 0;
		while (iVar0 < Global_2541867.f_222)
		{
			Stack.Push(iParam1);
			Stack.Push(Global_2541867.f_111[iVar0]);
			Stack.Push(Global_2541867[iVar0]);
			Call_Loc(uParam0->f_452);
			Stack.Push(iParam1);
			Stack.Push(Global_2541867.f_111[iVar0]);
			Stack.Push(Global_2541867[iVar0]);
			Call_Loc(uParam0->f_449);
			if (StackVal && StackVal)
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (iParam2 == 2)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_178(&(uParam0->f_454), &Global_2541867, 0, GlobalFunc_4405(uParam0), -1, &(uParam0->f_683), &(uParam0->f_686));
			iVar1 = 0;
			while (iVar1 < Global_2541867.f_222)
			{
				Stack.Push(iParam1);
				Stack.Push(Global_2541867.f_111[iVar1]);
				Stack.Push(Global_2541867[iVar1]);
				Call_Loc(uParam0->f_452);
				Stack.Push(iParam1);
				Stack.Push(Global_2541867.f_111[iVar1]);
				Stack.Push(Global_2541867[iVar1]);
				Call_Loc(uParam0->f_449);
				if (StackVal && StackVal)
				{
					return 1;
				}
				iVar1++;
			}
		}
		else
		{
			iVar3 = func_177();
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (func_176(iVar2) && !func_175(iVar2))
				{
					return 1;
				}
				iVar2++;
			}
		}
	}
	else if (iParam2 == 3)
	{
		iVar4 = 0;
		while (iVar4 < uParam0->f_580)
		{
			if (func_169(iVar4))
			{
				if (func_168(iVar4) && !func_165(iVar4))
				{
					return 1;
				}
			}
			iVar4++;
		}
	}
	else if (func_475(iParam2))
	{
		iVar5 = 0;
		while (iVar5 < func_164(iParam1, iParam2))
		{
			if (func_150(uParam0, iParam1, iParam2, iVar5) && !func_146(uParam0, iParam1, iParam2, iVar5))
			{
				return 1;
			}
			iVar5++;
		}
		return 0;
	}
	return 0;
}

int func_146(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE36B
{
	struct<12> Var0;
	
	if (func_393(iParam1, iParam2, iParam3, &Var0))
	{
		if (!func_147(Var0.f_11, 2, -1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

int func_147(int iParam0, int iParam1, int iParam2)//Position - 0xE399
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_68104;
	if (iParam2 != -1)
	{
		iVar0 = iParam2;
	}
	if (func_148(iParam0, iParam1, &iVar2, &iVar1))
	{
		iVar3 = GlobalFunc_6872(iVar2, iVar0, 0);
		return MISC::IS_BIT_SET(iVar3, iVar1);
	}
	return 0;
}

bool func_148(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xE3D7
{
	int iVar0;
	
	*uParam2 = 2903;
	iVar0 = func_149(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 2333;
					break;
				
				case 1:
					*uParam2 = 2334;
					break;
				
				case 2:
					*uParam2 = 2335;
					break;
				
				case 3:
					*uParam2 = 2336;
					break;
				
				case 4:
					*uParam2 = 2337;
					break;
				
				case 5:
					*uParam2 = 2338;
					break;
				
				case 6:
					*uParam2 = 2339;
					break;
				
				case 7:
					*uParam2 = 2340;
					break;
				
				case 8:
					*uParam2 = 2341;
					break;
				
				case 9:
					*uParam2 = 2342;
					break;
				
				case 10:
					*uParam2 = 2343;
					break;
				
				case 11:
					*uParam2 = 2344;
					break;
				
				default:
					return 0;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 2321;
					break;
				
				case 1:
					*uParam2 = 2322;
					break;
				
				case 2:
					*uParam2 = 2323;
					break;
				
				case 3:
					*uParam2 = 2324;
					break;
				
				case 4:
					*uParam2 = 2325;
					break;
				
				case 5:
					*uParam2 = 2326;
					break;
				
				case 6:
					*uParam2 = 2327;
					break;
				
				case 7:
					*uParam2 = 2328;
					break;
				
				case 8:
					*uParam2 = 2329;
					break;
				
				case 9:
					*uParam2 = 2330;
					break;
				
				case 10:
					*uParam2 = 2331;
					break;
				
				case 11:
					*uParam2 = 2332;
					break;
				
				default:
					return 0;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 2903;
}

int func_149(int iParam0)//Position - 0xE5BF
{
	switch (iParam0)
	{
		case 2086722024:
			return 0;
			break;
		
		case -1911587515:
			return 1;
			break;
		
		case -1882357567:
			return 2;
			break;
		
		case -969019995:
			return 3;
			break;
		
		case -411291615:
			return 4;
			break;
		
		case -82979004:
			return 5;
			break;
		
		case 218692410:
			return 6;
			break;
		
		case 511680047:
			return 7;
			break;
		
		case 558867407:
			return 8;
			break;
		
		case 808796570:
			return 9;
			break;
		
		case -1605550121:
			return 10;
			break;
		
		case -1378886948:
			return 11;
			break;
		
		case -1142819072:
			return 12;
			break;
		
		case -899836937:
			return 13;
			break;
		
		case 1454746793:
			return 14;
			break;
		
		case 1677117227:
			return 15;
			break;
		
		case 1931240822:
			return 16;
			break;
		
		case -2125331999:
			return 17;
			break;
		
		case -2146762937:
			return 18;
			break;
		
		case -1919575460:
			return 19;
			break;
		
		case 1867669166:
			return 20;
			break;
		
		case 1562425931:
			return 21;
			break;
		
		case 1271240597:
			return 22;
			break;
		
		case -43115055:
			return 23;
			break;
		
		case -1731373935:
			return 24;
			break;
		
		case -1422100113:
			return 25;
			break;
		
		case -463508556:
			return 26;
			break;
		
		case -963301344:
			return 27;
			break;
		
		case 2063210751:
			return 28;
			break;
		
		case -2003094463:
			return 29;
			break;
		
		case -1888632346:
			return 30;
			break;
		
		case -1384776202:
			return 31;
			break;
		
		case 1107568404:
			return 32;
			break;
		
		case -412069578:
			return 33;
			break;
		
		case 1236833733:
			return 34;
			break;
		
		case 2004250944:
			return 35;
			break;
		
		case 544883529:
			return 36;
			break;
		
		case 1446293181:
			return 37;
			break;
		
		case -1964074960:
			return 38;
			break;
		
		case -1565538382:
			return 39;
			break;
		
		case 1752814407:
			return 40;
			break;
		
		case -1662501853:
			return 41;
			break;
		
		case -1216122527:
			return 42;
			break;
		
		case 1668958248:
			return 43;
			break;
		
		case 813687348:
			return 44;
			break;
		
		case 1121027799:
			return 45;
			break;
		
		case -1437018652:
			return 46;
			break;
		
		case -1133250022:
			return 47;
			break;
		
		case 1974922401:
			return 48;
			break;
		
		case -1751830435:
			return 49;
			break;
		
		case -737105609:
			return 50;
			break;
		
		case -1044282215:
			return 51;
			break;
		
		case 128880754:
			return 52;
			break;
		
		case -1214833480:
			return 53;
			break;
		
		case -853522486:
			return 54;
			break;
		
		case -1811655273:
			return 55;
			break;
		
		case -1040961166:
			return 56;
			break;
		
		case 1888456366:
			return 57;
			break;
		
		case -1639552485:
			return 58;
			break;
		
		case 1348226632:
			return 59;
			break;
		
		case 2125933309:
			return 60;
			break;
		
		case 754026355:
			return 61;
			break;
		
		case 1526948758:
			return 62;
			break;
		
		case -902969915:
			return 63;
			break;
		
		case -69457631:
			return 64;
			break;
		
		case -312701918:
			return 65;
			break;
		
		case 824579000:
			return 66;
			break;
		
		case 585856831:
			return 67;
			break;
		
		case 1226458016:
			return 68;
			break;
		
		case 987998003:
			return 69;
			break;
		
		case 1819413071:
			return 70;
			break;
		
		case 1583246888:
			return 71;
			break;
		
		case -1577847470:
			return 72;
			break;
		
		case -2026650806:
			return 73;
			break;
		
		case -1429665160:
			return 74;
			break;
		
		case -1185994876:
			return 75;
			break;
		
		case -2142554759:
			return 76;
			break;
		
		case -589631845:
			return 77;
			break;
		
		case -1637322333:
			return 78;
			break;
		
		case -1876568802:
			return 79;
			break;
		
		case -851292326:
			return 80;
			break;
		
		case 1859818120:
			return 81;
			break;
		
		case -1515880415:
			return 82;
			break;
		
		case -432930795:
			return 83;
			break;
		
		case 796201630:
			return 84;
			break;
		
		case 1170095920:
			return 85;
			break;
		
		case 1259981287:
			return 86;
			break;
		
		case 1632499279:
			return 87;
			break;
		
		case -1208917743:
			return 88;
			break;
		
		case -1245356871:
			return 89;
			break;
		
		case -567923298:
			return 90;
			break;
		
		case -932249040:
			return 91;
			break;
		
		case -221587773:
			return 92;
			break;
		
		case -845116305:
			return 93;
			break;
		
		case 381918900:
			return 94;
			break;
		
		case 83032851:
			return 95;
			break;
		
		case 705709389:
			return 96;
			break;
		
		case 410559006:
			return 97;
			break;
		
		case -850926612:
			return 98;
			break;
		
		case -1093056753:
			return 99;
			break;
		
		case 1258643301:
			return 100;
			break;
		
		case 865874067:
			return 101;
			break;
		
		case 627151902:
			return 102;
			break;
		
		case -2142352902:
			return 103;
			break;
		
		case -407070503:
			return 104;
			break;
		
		case 1502608510:
			return 105;
			break;
		
		case 827528886:
			return 106;
			break;
		
		case -781461791:
			return 107;
			break;
		
		case -474875027:
			return 108;
			break;
		
		case -1242030086:
			return 109;
			break;
		
		case 137348200:
			return 110;
			break;
		
		case -2121779449:
			return 111;
			break;
		
		case 1876005786:
			return 112;
			break;
		
		case -1641844675:
			return 113;
			break;
		
		case -1939452733:
			return 114;
			break;
		
		case 1595175476:
			return 115;
			break;
		
		case 1888141884:
			return 116;
			break;
		
		case 859096981:
			return 117;
			break;
		
		case 551756530:
			return 118;
			break;
		
		case 1439272126:
			return 119;
			break;
		
		case 1158474565:
			return 120;
			break;
		
		case -109358053:
			return 121;
			break;
		
		case -406605652:
			return 122;
			break;
		
		case 509746672:
			return 123;
			break;
		
		case 244809299:
			return 124;
			break;
		
		case -651750537:
			return 125;
			break;
		
		case 1816410231:
			return 126;
			break;
		
		case -2059015562:
			return 127;
			break;
		
		case 1945094090:
			return 128;
			break;
		
		case -1458261485:
			return 129;
			break;
		
		case -1755738467:
			return 130;
			break;
		
		case -846234872:
			return 131;
			break;
		
		case -1144170620:
			return 132;
			break;
		
		case -251641367:
			return 133;
			break;
		
		case -566158229:
			return 134;
			break;
		
		case -859506285:
			return 135;
			break;
		
		case 1823490339:
			return 136;
			break;
		
		case -2074414980:
			return 137;
			break;
		
		case 748741188:
			return 138;
			break;
		
		case 664000554:
			return 139;
			break;
		
		case 374125980:
			return 140;
			break;
		
		case 1933864846:
			return 141;
			break;
		
		case 1620822589:
			return 142;
			break;
		
		case 1304536201:
			return 143;
			break;
		
		case 1024459558:
			return 144;
			break;
		
		case -1167196704:
			return 145;
			break;
		
		case -1484564469:
			return 146;
			break;
		
		case -1728267522:
			return 147;
			break;
		
		case -2059818253:
			return 148;
			break;
		
		case 1995902574:
			return 149;
			break;
		
		case 1639965688:
			return 150;
			break;
		
		case 1397114629:
			return 151;
			break;
		
		case -1985437042:
			return 152;
			break;
		
		case 2060125395:
			return 153;
			break;
		
		case 1845619521:
			return 154;
			break;
		
		case 1352314995:
			return 155;
			break;
		
		case 1121916156:
			return 156;
			break;
		
		case 890173784:
			return 157;
			break;
		
		case 646995035:
			return 158;
			break;
		
		case 885782742:
			return 159;
			break;
		
		case 645225513:
			return 160;
			break;
		
		case 173548527:
			return 161;
			break;
		
		case -421803070:
			return 162;
			break;
		
		case 1299978497:
			return 163;
			break;
		
		case 1529427035:
			return 164;
			break;
		
		case 342566624:
			return 165;
			break;
		
		case 575062679:
			return 166;
			break;
		
		case -2035840169:
			return 167;
			break;
		
		case -1807833467:
			return 168;
			break;
		
		case 1762447394:
			return 169;
			break;
		
		case 2001923246:
			return 170;
			break;
		
		case 178590600:
			return 171;
			break;
		
		case 1262851572:
			return 172;
			break;
		
		case 537411450:
			return 173;
			break;
		
		case 785046783:
			return 174;
			break;
		
		case -2080536733:
			return 175;
			break;
		
		case -1640317987:
			return 176;
			break;
		
		case 1737477768:
			return 177;
			break;
		
		case 162597385:
			return 178;
			break;
		
		case 223154493:
			return 179;
			break;
		
		case 2140763608:
			return 180;
			break;
		
		case 1886967703:
			return 181;
			break;
		
		case 1237289509:
			return 182;
			break;
		
		case -1236704457:
			return 183;
			break;
		
		case -1467824214:
			return 184;
			break;
		
		case -1595623314:
			return 185;
			break;
		
		case -1829299053:
			return 186;
			break;
		
		case -1581270496:
			return 187;
			break;
		
		case -736238561:
			return 188;
			break;
	}
	switch (iParam0)
	{
		case 1479840145:
			return 189;
			break;
		
		case 356387741:
			return 190;
			break;
		
		case 653766416:
			return 191;
			break;
		
		case -1922761743:
			return 192;
			break;
		
		case -1625383068:
			return 193;
			break;
		
		case 1758409414:
			return 194;
			break;
		
		case 2048251219:
			return 195;
			break;
		
		case -1001100849:
			return 196;
			break;
		
		case -711848886:
			return 197;
			break;
		
		case -1614503760:
			return 198;
			break;
		
		case -1060874703:
			return 199;
			break;
		
		case -1669067343:
			return 200;
			break;
		
		case -1505615571:
			return 201;
			break;
		
		case -136756130:
			return 202;
			break;
		
		case 1503430607:
			return 203;
			break;
		
		case 1909897283:
			return 204;
			break;
		
		case -1005003578:
			return 205;
			break;
		
		case -734266100:
			return 206;
			break;
		
		case 1360852708:
			return 207;
			break;
		
		case 729066388:
			return 208;
			break;
		
		case 914374215:
			return 209;
			break;
		
		case 558502875:
			return 210;
			break;
		
		case -1591241840:
			return 211;
			break;
		
		case -1827014795:
			return 212;
			break;
		
		case -876282585:
			return 213;
			break;
		
		case -1180870440:
			return 214;
			break;
		
		case -1502662020:
			return 215;
			break;
		
		case -1785163569:
			return 216;
			break;
		
		case 80113449:
			return 217;
			break;
		
		case -216740922:
			return 218;
			break;
		
		case -533027310:
			return 219;
			break;
		
		case -829553991:
			return 220;
			break;
		
		case -531257788:
			return 221;
			break;
		
		case -827784469:
			return 222;
			break;
		
		case 744660972:
			return 223;
			break;
		
		case 899625573:
			return 224;
			break;
		
		case 266299110:
			return 225;
			break;
		
		case -1641282671:
			return 226;
			break;
		
		case -195383331:
			return 227;
			break;
		
		case 33245982:
			return 228;
			break;
		
		case -686033552:
			return 229;
			break;
		
		case 1700172263:
			return 230;
			break;
		
		case -1163314037:
			return 231;
			break;
		
		case -939239615:
			return 232;
			break;
		
		case -1579861681:
			return 233;
			break;
		
		case -1237032403:
			return 234;
			break;
		
		case 1942740285:
			return 235;
			break;
		
		case 558544952:
			return 236;
			break;
		
		case 1335891174:
			return 237;
			break;
		
		case 2129064819:
			return 238;
			break;
		
		case -699850186:
			return 239;
			break;
		
		case -864874870:
			return 240;
			break;
		
		case 333978995:
			return 241;
			break;
		
		case 1109522918:
			return 242;
			break;
		
		case -635535959:
			return 243;
			break;
		
		case -966961625:
			return 244;
			break;
		
		case -595983772:
			return 245;
			break;
		
		case 1319397047:
			return 246;
			break;
		
		case 15059771:
			return 247;
			break;
		
		case -679880450:
			return 248;
			break;
		
		case -1968193685:
			return 249;
			break;
		
		case 1656811402:
			return 250;
			break;
		
		case 1409143300:
			return 251;
			break;
		
		case 1047930613:
			return 252;
			break;
		
		case 834145657:
			return 253;
			break;
		
		case 1301103915:
			return 254;
			break;
		
		case 5679807:
			return 255;
			break;
		
		case 1241824794:
			return 256;
			break;
		
		case 1558963176:
			return 257;
			break;
		
		case 1466156191:
			return 258;
			break;
		
		case 1713299989:
			return 259;
			break;
		
		case 1415036551:
			return 260;
			break;
		
		case 1153834856:
			return 261;
			break;
		
		case 1360836629:
			return 262;
			break;
		
		case -1622780825:
			return 263;
			break;
		
		case -1374686726:
			return 264;
			break;
		
		case 2040629534:
			return 265;
			break;
		
		case -1973146973:
			return 266;
			break;
		
		case -657864855:
			return 267;
			break;
		
		case 1377860065:
			return 268;
			break;
		
		case 113042203:
			return 269;
			break;
		
		case -712703828:
			return 270;
			break;
		
		case 200109448:
			return 271;
			break;
		
		case -705035870:
			return 272;
			break;
		
		case -1340787251:
			return 273;
			break;
		
		case -107624231:
			return 274;
			break;
		
		case -784730090:
			return 275;
			break;
		
		case -1628925068:
			return 276;
			break;
		
		case 1496156159:
			return 277;
			break;
		
		case -1247690782:
			return 278;
			break;
		
		case -1569777283:
			return 279;
			break;
		
		case 1939083358:
			return 280;
			break;
		
		case -2050050861:
			return 281;
			break;
		
		case -1086019650:
			return 282;
			break;
		
		case -796734918:
			return 283;
			break;
		
		case -2051001154:
			return 284;
			break;
		
		case -1753327558:
			return 285;
			break;
		
		case -778482577:
			return 286;
			break;
		
		case -487919854:
			return 287;
			break;
		
		case 1063167984:
			return 288;
			break;
		
		case 1352190564:
			return 289;
			break;
		
		case 1918883225:
			return 290;
			break;
		
		case 2140499972:
			return 291;
			break;
		
		case -1622298764:
			return 292;
			break;
		
		case -1384887359:
			return 293;
			break;
		
		case -1451684059:
			return 294;
			break;
		
		case -675288142:
			return 295;
			break;
		
		case -984234274:
			return 296;
			break;
		
		case -258728614:
			return 297;
			break;
		
		case 516356543:
			return 298;
			break;
		
		case 200791073:
			return 299;
			break;
		
		case 976334996:
			return 300;
			break;
		
		case 743642327:
			return 301;
			break;
		
		case 1511583842:
			return 302;
			break;
		
		case 1238290382:
			return 303;
			break;
		
		case -587327163:
			return 304;
			break;
		
		case -1009457421:
			return 305;
			break;
		
		case 1852062739:
			return 306;
			break;
		
		case 1561958782:
			return 307;
			break;
		
		case -1779135693:
			return 308;
			break;
		
		case 2022396001:
			return 309;
			break;
		
		case -1277868344:
			return 310;
			break;
		
		case -1046224283:
			return 311;
			break;
		
		case -1992232544:
			return 312;
			break;
		
		case -1511904542:
			return 313;
			break;
		
		case 338954980:
			return 314;
			break;
		
		case 644853595:
			return 315;
			break;
		
		case 928043293:
			return 316;
			break;
		
		case 1233483142:
			return 317;
			break;
		
		case 455547074:
			return 318;
			break;
		
		case 753187901:
			return 319;
			break;
		
		case -1381379572:
			return 320;
			break;
		
		case -978746865:
			return 321;
			break;
		
		case 946792344:
			return 322;
			break;
		
		case -366195948:
			return 323;
			break;
		
		case -722394978:
			return 324;
			break;
		
		case 216207489:
			return 325;
			break;
		
		case 2124706822:
			return 326;
			break;
		
		case 832559610:
			return 327;
			break;
		
		case -791212145:
			return 328;
			break;
		
		case 1426003941:
			return 329;
			break;
		
		case -2062125037:
			return 330;
			break;
		
		case 2002508958:
			return 331;
			break;
		
		case -1983118982:
			return 332;
			break;
		
		case 825938009:
			return 333;
			break;
		
		case 1670231294:
			return 334;
			break;
		
		case 1439144306:
			return 335;
			break;
		
		case -2008613264:
			return 336;
			break;
		
		case 137657929:
			return 337;
			break;
		
		case 850282205:
			return 338;
			break;
	}
	return -1;
}

int func_150(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF8AB
{
	struct<11> Var0;
	struct<14> Var12;
	
	if (func_393(iParam1, iParam2, iParam3, &Var0))
	{
		if (!func_158(iParam1, iParam2, iParam3))
		{
			return 0;
		}
		if (Var0.f_9 == 0)
		{
			Stack.Push(iParam1);
			Stack.Push(2);
			Stack.Push(Var0.f_8);
			Call_Loc(uParam0->f_453);
			Var12 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			if (!MISC::IS_BIT_SET(Var12.f_6, 1))
			{
				return 0;
			}
			return 1;
		}
		else if (Var0.f_9 == 1 || Var0.f_9 == 2)
		{
			if (Var0.f_10 == -1)
			{
				return 1;
			}
			if (Var0.f_5 == 1)
			{
				if (!func_151(Var0.f_10))
				{
					return 0;
				}
				return 1;
			}
			else if (Var0.f_5 == 4)
			{
				if (!func_151(Var0.f_10))
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 1;
}

bool func_151(var uParam0)//Position - 0xF96A
{
	var uVar0;
	int iVar1;
	
	if (GlobalFunc_1434())
	{
		return 0;
	}
	uVar0 = GlobalFunc_8214(uParam0);
	iVar1 = uParam0;
	return MISC::IS_BIT_SET(uVar0, GlobalFunc_299(iVar1));
}







int func_158(int iParam0, int iParam1, int iParam2)//Position - 0xFAD1
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				if (iParam2 == 22)
				{
					if (GlobalFunc_321() && (Global_262145.f_6114 || GlobalFunc_6708(3606, -1, -1)))
					{
						return 1;
					}
					return 0;
				}
				break;
			
			case 9:
				if (iParam2 == 17)
				{
					return 0;
				}
				break;
			
			case 11:
				if (iParam2 == 13)
				{
					if (GlobalFunc_321() && (Global_262145.f_6114 || GlobalFunc_6708(3607, -1, -1)))
					{
						return 1;
					}
					return 0;
				}
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				if (iParam2 == 20)
				{
					if (GlobalFunc_2488() && Global_262145.f_4937)
					{
						return 1;
					}
					return 0;
				}
				else if (iParam2 == 23)
				{
					if (GlobalFunc_321() && (Global_262145.f_6114 || GlobalFunc_6708(3606, -1, -1)))
					{
						return 1;
					}
					return 0;
				}
				break;
			
			case 11:
				if (iParam2 == 13)
				{
					if (GlobalFunc_321() && (Global_262145.f_6114 || GlobalFunc_6708(3607, -1, -1)))
					{
						return 1;
					}
					return 0;
				}
				break;
			}
	}
	return 1;
}






int func_164(int iParam0, int iParam1)//Position - 0xFF2A
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return 23;
				break;
			
			case 7:
				return 30;
				break;
			
			case 8:
				return 35;
				break;
			
			case 9:
				return 19;
				break;
			
			case 10:
				return 32;
				break;
			
			case 11:
				return 14;
				break;
			
			case 14:
				return 26;
				break;
			
			case 15:
				return 11;
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return 24;
				break;
			
			case 8:
				return 35;
				break;
			
			case 10:
				return 32;
				break;
			
			case 11:
				return 14;
				break;
			
			case 13:
				return 8;
				break;
			
			case 14:
				return 26;
				break;
			
			case 15:
				return 11;
				break;
			}
	}
	return 0;
}

bool func_165(int iParam0)//Position - 0x1002C
{
	return func_166(func_196(iParam0));
}

bool func_166(int iParam0)//Position - 0x1003E
{
	if (iParam0 == -1 || iParam0 == 102)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_39[(iParam0 / 32)], (iParam0 % 32));
}


int func_168(int iParam0)//Position - 0x10089
{
	return func_151(func_196(iParam0));
	return 1;
}

int func_169(int iParam0)//Position - 0x1009F
{
	if (func_174(iParam0))
	{
		if (!GlobalFunc_81())
		{
			return 0;
		}
	}
	else if (func_172(iParam0))
	{
		if (!func_171())
		{
			return 0;
		}
	}
	else if (func_170(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_170(int iParam0)//Position - 0x100E5
{
	int iVar0;
	
	iVar0 = func_196(iParam0);
	if ((((((((iVar0 == 93 || iVar0 == 94) || iVar0 == 95) || iVar0 == 96) || iVar0 == 97) || iVar0 == 98) || iVar0 == 99) || iVar0 == 100) || iVar0 == 101)
	{
		return 1;
	}
	return 0;
}

int func_171()//Position - 0x1015A
{
	if (GlobalFunc_321() && (Global_262145.f_6114 || GlobalFunc_6708(3607, -1, -1)))
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)//Position - 0x10189
{
	int iVar0;
	
	iVar0 = func_196(iParam0);
	if (iVar0 == 92)
	{
		return 1;
	}
	return 0;
}


int func_174(int iParam0)//Position - 0x101AE
{
	int iVar0;
	
	iVar0 = func_196(iParam0);
	if (((iVar0 == 51 || iVar0 == 52) || iVar0 == 53) || iVar0 == 54)
	{
		return 1;
	}
	return 0;
}

bool func_175(int iParam0)//Position - 0x101EC
{
	return func_166(func_198(iParam0));
}

int func_176(int iParam0)//Position - 0x101FE
{
	if (iParam0 >= 19 + 1)
	{
		if (iParam0 >= 27 && iParam0 <= 36)
		{
			return 1;
		}
		return 0;
	}
	return func_151(func_198(iParam0));
	return 1;
}

int func_177()//Position - 0x10237
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	if (iVar0 == joaat("mp_m_freemode_01"))
	{
		return 30;
	}
	return 19;
}

void func_178(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, var uParam6)//Position - 0x1025A
{
	struct<355> Var0;
	
	Var0 = 110;
	Var0.f_111 = 110;
	Var0.f_223 = 110;
	Var0.f_334 = 6;
	Var0.f_341 = 6;
	Var0.f_348 = 6;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_185(uParam0, &Var0, GlobalFunc_2623(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, iParam4, uParam5, uParam6);
	}
	else if (iParam2 == 1)
	{
		func_181(uParam0, &Var0, GlobalFunc_2623(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, bParam3);
	}
	else
	{
		func_179(uParam0, &Var0, GlobalFunc_2623(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, bParam3);
	}
	*uParam1 = { Var0 };
}

void func_179(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x102F5
{
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (GlobalFunc_524(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(GlobalFunc_4917(0));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(4);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (GlobalFunc_524(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(GlobalFunc_4917(0));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(4);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (GlobalFunc_524(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(GlobalFunc_4917(1));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (GlobalFunc_524(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(GlobalFunc_4917(1));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (GlobalFunc_524(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(GlobalFunc_4917(2));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(4);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (GlobalFunc_524(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(GlobalFunc_4917(2));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(4);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(GlobalFunc_4917(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
}


void func_181(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1059D
{
	var uVar0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	FILES::INIT_SHOP_PED_COMPONENT(&uVar0);
	switch (GlobalFunc_8315())
	{
		case 0:
			iVar19 = 6;
			break;
		
		case 1:
			iVar19 = 21;
			break;
		
		case 2:
			iVar19 = 9;
			break;
	}
	iVar18 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(uParam2, 6, -1, 0, 0, 2);
	iVar17 = 0;
	while (iVar17 < iVar18)
	{
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar17, &uVar0);
		if (!FILES::IS_CONTENT_ITEM_LOCKED(uVar0))
		{
			iVar20 = (iVar19 + iVar17);
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(iVar20);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		iVar17++;
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (GlobalFunc_524(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(GlobalFunc_4917(0));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (GlobalFunc_524(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(GlobalFunc_4917(0));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(6);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(8);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(9);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(14);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(15);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (GlobalFunc_524(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(GlobalFunc_4917(1));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(17);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(19);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(7);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(10);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(11);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(12);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(13);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(16);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (GlobalFunc_524(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(GlobalFunc_4917(1));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(17);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(18);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(19);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (GlobalFunc_524(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(GlobalFunc_4917(2));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(3);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (GlobalFunc_524(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(GlobalFunc_4917(2));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(3);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(GlobalFunc_4917(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(6);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
}




void func_185(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)//Position - 0x10B32
{
	struct<10> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	FILES::INIT_SHOP_PED_COMPONENT(&Var0);
	switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
	{
		case joaat("mp_m_freemode_01"):
			iVar19 = 91;
			break;
		
		case joaat("mp_f_freemode_01"):
			iVar19 = 92;
			break;
	}
	iVar22 = 1;
	iVar23 = 0;
	while (iVar23 < *uParam5)
	{
		(*uParam5)[iVar23] = 0;
		(*uParam6)[iVar23] = 0;
		iVar23++;
	}
	Global_2621443 = iParam3;
	Global_2543251 = iParam4 == -1;
	iVar24 = 0;
	iVar18 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(uParam2, 6, -1, 0, 0, 2);
	iVar17 = 0;
	while (iVar17 < iVar18)
	{
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar17, &Var0);
		if (!FILES::IS_CONTENT_ITEM_LOCKED(Var0))
		{
			if (!GlobalFunc_9216(Var0, Var0.f_1, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var0.f_1, joaat("NIGHT_VISION"), 0))
			{
				iVar21 = func_189(&(Var0.f_9));
				if (func_188(iParam4, iVar21))
				{
					MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
					if (!GlobalFunc_7991(Var0.f_1, 2, 1, 1, -1))
					{
						MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
					}
					iVar20 = (iVar19 + iVar24);
					Stack.Push(uParam1);
					Stack.Push(iParam2);
					Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
					Stack.Push(iParam3);
					Stack.Push(0);
					Stack.Push(iVar20);
					Stack.Push(2);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(iVar22);
					Stack.Push(0);
					Stack.Push(0);
					Call_Loc(*uParam0);
				}
			}
			iVar24++;
		}
		iVar17++;
	}
	iVar21 = 14;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 15;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 16;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(7);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(8);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(9);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(10);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(11);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 17;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(13);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(14);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(15);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(16);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(17);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 18;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(19);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(20);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(21);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(22);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(23);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 19;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(26);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(27);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(28);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(29);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(30);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 20;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(32);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(33);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(34);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(35);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(36);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 21;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(38);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(39);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(40);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(41);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(42);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 22;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(45);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(46);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(47);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(48);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(49);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 23;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(50);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(51);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(52);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(53);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(54);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 24;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(57);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(58);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(59);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(60);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(61);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 25;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(63);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(64);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(65);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(66);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(67);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 26;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(69);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(70);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(71);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(72);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(73);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 27;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(74);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(75);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(76);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(77);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(78);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 28;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(80);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(81);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(82);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(83);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(84);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 29;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(85);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(86);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(87);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(88);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(89);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 30;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 31;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 32;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(7);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(8);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(9);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(10);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(11);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 33;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(13);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(14);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(15);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(16);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(17);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 34;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(18);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(19);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(20);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(21);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(22);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 35;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(24);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(25);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(26);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(27);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(28);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 36;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(30);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(31);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(32);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(33);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(34);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 37;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(35);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(36);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(37);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(38);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(39);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 38;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(41);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(42);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(43);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(44);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(45);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 39;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(47);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(48);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(49);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(50);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(51);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 40;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(53);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(54);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(55);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(56);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(57);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 41;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(60);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(61);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(62);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(63);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(64);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 42;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(67);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(68);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(69);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(70);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(71);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 43;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(73);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(74);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(75);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(76);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(77);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 44;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(79);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(80);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(81);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(82);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(83);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
	iVar21 = 45;
	Global_2541866 = 0;
	Global_2541865 = 0;
	if (func_188(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(85);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(86);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(87);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(88);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(89);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2541865)
		{
			MISC::SET_BIT(uParam5[(iVar21 / 32)], (iVar21 % 32));
			if (Global_2541866)
			{
				MISC::SET_BIT(uParam6[(iVar21 / 32)], (iVar21 % 32));
			}
		}
	}
}



int func_188(int iParam0, int iParam1)//Position - 0x12B71
{
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam1 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_189(char* sParam0)//Position - 0x12B8F
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return -2;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	switch (iVar0)
	{
		case 1577121865:
		case 884057515:
		case 2055188806:
		case 1362452146:
		case -1761842625:
		case 665775322:
		case 618391324:
		case 497473714:
		case 123808807:
		case -231538229:
			return 0;
			break;
		
		case 396231341:
		case 1312059353:
		case 980600918:
		case 2040481470:
		case -1485364627:
			return 1;
			break;
		
		case 785834208:
		case 544621599:
		case 1398581739:
		case 1157565744:
		case 1052836024:
			return 2;
			break;
		
		case 885914480:
		case 1110382134:
		case -2025250711:
		case -1223458819:
		case 1806133542:
			return 3;
			break;
		
		case 119592333:
		case -1585051047:
		case -1278497052:
		case -1109736702:
		case -1316574634:
			return 4;
			break;
		
		case -743251029:
		case -1459843521:
		case -283075962:
		case -997243548:
		case -1711837131:
			return 5;
			break;
		
		case 1346719200:
		case -231468525:
		case 76461768:
		case 382786380:
		case 690257907:
			return 6;
			break;
		
		case -529982912:
		case -425711954:
		case -184040579:
		case 187822033:
		case -1722577898:
			return 7;
			break;
		
		case 5888009:
		case 312966308:
		case -672463060:
		case -231851086:
		case -1527144118:
			return 8;
			break;
		
		case 288802011:
		case 1057005678:
		case 901877232:
		case 1679059605:
		case 1510233717:
		case -2016005616:
			return 9;
			break;
		
		case 239253137:
		case 1536545078:
		case 834633098:
		case -10053415:
		case -782254908:
			return 10;
			break;
		
		case 526112963:
		case -655766568:
		case -431298918:
		case 2082181693:
		case -1982485071:
			return 11;
			break;
		
		case -14781889:
		case -2044526518:
		case -1737906985:
		case 1701920483:
		case -1222188463:
			return 12;
			break;
		
		case -2145651656:
		case 1407032252:
		case 478784789:
		case 1849774211:
		case 992406095:
			return 13;
			break;
	}
	return -2;
}







int func_196(int iParam0)//Position - 0x132C3
{
	switch (iParam0)
	{
		case 0:
			return 29;
		
		case 1:
			return 28;
		
		case 2:
			return 30;
		
		case 3:
			return 31;
		
		case 4:
			return 32;
		
		case 5:
			return 33;
		
		case 6:
			return 34;
		
		case 7:
			return 35;
		
		case 8:
			return 36;
		
		case 9:
			return 37;
		
		case 10:
			return 38;
		
		case 11:
			return 39;
		
		case 12:
			return 40;
		
		case 13:
			return 41;
		
		case 14:
			return 42;
		
		case 15:
			return 43;
		
		case 16:
			return 44;
		
		case 17:
			return 45;
		
		case 18:
			return 46;
		
		case 19:
			return 47;
		
		case 20:
			return 48;
		
		case 21:
			return 49;
		
		case 22:
			return 50;
		
		case 23:
			return 51;
		
		case 24:
			return 52;
		
		case 25:
			return 53;
		
		case 26:
			return 54;
		
		case 27:
			return 55;
		
		case 28:
			return 56;
		
		case 29:
			return 57;
		
		case 30:
			return 58;
		
		case 31:
			return 59;
		
		case 32:
			return 60;
		
		case 33:
			return 91;
		
		case 34:
			return 92;
		
		case 35:
			return 93;
		
		case 36:
			return 94;
		
		case 37:
			return 95;
		
		case 38:
			return 96;
		
		case 39:
			return 97;
		
		case 40:
			return 98;
		
		case 41:
			return 99;
		
		case 42:
			return 100;
		
		case 43:
			return 101;
		
		default:
	}
	return 29;
}


int func_198(int iParam0)//Position - 0x13897
{
	switch (iParam0)
	{
		case 0:
			return 61;
		
		case 1:
			return 69;
		
		case 2:
			return 63;
		
		case 3:
			return 64;
		
		case 4:
			return 65;
		
		case 5:
			return 66;
		
		case 6:
			return 67;
		
		case 7:
			return 68;
		
		case 8:
			return 69;
		
		case 9:
			return 70;
		
		case 10:
			return 71;
		
		case 11:
			return 72;
		
		case 12:
			return 73;
		
		case 13:
			return 74;
		
		case 14:
			return 75;
		
		case 15:
			return 76;
		
		case 16:
			return 77;
		
		case 17:
			return 78;
		
		case 18:
			return 79;
		
		case 19:
			return 80;
		
		case 20:
			return 80;
		
		case 27:
			return 81;
		
		case 28:
			return 82;
		
		case 29:
			return 83;
		
		case 30:
			return 84;
		
		case 31:
			return 85;
		
		case 32:
			return 86;
		
		case 33:
			return 87;
		
		case 36:
			return 88;
		
		case 34:
			return 89;
		
		case 35:
			return 90;
		
		default:
	}
	return 61;
}







void func_205(var uParam0, int iParam1)//Position - 0x14163
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	struct<12> Var8;
	struct<2> Var20;
	float fVar32;
	struct<2> Var33;
	struct<2> Var45;
	int iVar57;
	
	if (PED::IS_PED_INJURED(iParam1))
	{
		return;
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || GlobalFunc_2041())
	{
		func_310(iParam1, uParam0);
		func_308(uParam0);
		if ((uParam0->f_494 == 5 || uParam0->f_494 == 12) || uParam0->f_494 == 9)
		{
			uParam0->f_677 = 1;
		}
		else
		{
			uParam0->f_677 = 0;
		}
		func_282(iParam1, uParam0->f_494);
		return;
	}
	iVar0 = 0;
	fVar1 = -1f;
	iVar7 = ENTITY::GET_ENTITY_MODEL(iParam1);
	GlobalFunc_5799(&(uParam0->f_218), 300);
	switch (uParam0->f_494)
	{
		case 5:
			uParam0->f_103.f_15 = 0;
			GlobalFunc_6900(0, 0, 0, 1);
			if (GlobalFunc_1391())
			{
				if (Global_2543381 == uParam0->f_103.f_1)
				{
					iVar0 = 1;
				}
				else
				{
					uParam0->f_103.f_1 = Global_2543381;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
				}
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || (uParam0->f_218.f_1 < -100 && uParam0->f_218.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_218.f_8)) || GlobalFunc_2495(uParam0->f_218.f_8, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_218.f_8 = 0;
				uParam0->f_218.f_4 = 0;
				uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				while (uParam0->f_103.f_1 >= 0 && !func_275(iVar7, func_276(uParam0->f_103.f_1)))
				{
					uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				}
				if (!func_275(iVar7, func_276(uParam0->f_103.f_1)))
				{
					uParam0->f_103.f_1 = 6;
				}
				while (uParam0->f_103.f_1 >= 0 && !func_275(iVar7, func_276(uParam0->f_103.f_1)))
				{
					uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				}
				GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || (uParam0->f_218.f_1 > 100 && uParam0->f_218.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_218.f_9)) || GlobalFunc_2494(uParam0->f_218.f_9, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_218.f_9 = 0;
				uParam0->f_218.f_4 = 0;
				uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_103.f_1++;
				while (uParam0->f_103.f_1 <= 6 && !func_275(iVar7, func_276(uParam0->f_103.f_1)))
				{
					uParam0->f_103.f_1++;
				}
				if (!func_275(iVar7, func_276(uParam0->f_103.f_1)))
				{
					uParam0->f_103.f_1 = 0;
				}
				while (uParam0->f_103.f_1 <= 6 && !func_275(iVar7, func_276(uParam0->f_103.f_1)))
				{
					uParam0->f_103.f_1++;
				}
				GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar0 == 1)
			{
				iVar0 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_682 = -1;
				uParam0->f_494 = func_276(uParam0->f_103.f_1);
				uParam0->f_558 = 1;
				uParam0->f_103.f_1 = 0;
				uParam0->f_606 = 0;
				if (uParam0->f_494 == 9)
				{
					func_282(iParam1, uParam0->f_494);
				}
				if ((uParam0->f_494 == 5 || uParam0->f_494 == 12) || uParam0->f_494 == 9)
				{
					uParam0->f_677 = 1;
				}
				else
				{
					uParam0->f_677 = 0;
				}
				if (uParam0->f_494 == 12)
				{
					while (uParam0->f_103.f_1 <= 2 && !func_275(iVar7, func_273(uParam0->f_103.f_1)))
					{
						uParam0->f_103.f_1++;
					}
				}
			}
			break;
		
		case 12:
			uParam0->f_103.f_15 = 0;
			GlobalFunc_6900(0, 0, 0, 1);
			if (GlobalFunc_1391())
			{
				if (Global_2543381 == uParam0->f_103.f_1)
				{
					iVar0 = 1;
				}
				else
				{
					uParam0->f_103.f_1 = Global_2543381;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
				}
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || (uParam0->f_218.f_1 < -100 && uParam0->f_218.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_218.f_8)) || GlobalFunc_2495(uParam0->f_218.f_8, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_218.f_8 = 0;
				uParam0->f_218.f_4 = 0;
				uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				while (uParam0->f_103.f_1 >= 0 && !func_275(iVar7, func_273(uParam0->f_103.f_1)))
				{
					uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				}
				if (!func_275(iVar7, func_273(uParam0->f_103.f_1)))
				{
					uParam0->f_103.f_1 = 2;
				}
				while (uParam0->f_103.f_1 >= 0 && !func_275(iVar7, func_273(uParam0->f_103.f_1)))
				{
					uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				}
				GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || (uParam0->f_218.f_1 > 100 && uParam0->f_218.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_218.f_9)) || GlobalFunc_2494(uParam0->f_218.f_9, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_218.f_9 = 0;
				uParam0->f_218.f_4 = 0;
				uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_103.f_1++;
				while (uParam0->f_103.f_1 <= 2 && !func_275(iVar7, func_273(uParam0->f_103.f_1)))
				{
					uParam0->f_103.f_1++;
				}
				if (!func_275(iVar7, func_273(uParam0->f_103.f_1)))
				{
					uParam0->f_103.f_1 = 0;
				}
				while (uParam0->f_103.f_1 <= 2 && !func_275(iVar7, func_273(uParam0->f_103.f_1)))
				{
					uParam0->f_103.f_1++;
				}
				GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar0 == 1)
			{
				iVar0 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_494 = func_273(uParam0->f_103.f_1);
				if ((uParam0->f_494 == 5 || uParam0->f_494 == 12) || uParam0->f_494 == 9)
				{
					uParam0->f_677 = 1;
				}
				else
				{
					uParam0->f_677 = 0;
				}
				uParam0->f_558 = 1;
				uParam0->f_103.f_1 = 0;
			}
			break;
		
		default:
			if ((uParam0->f_103.f_1 != -1 && uParam0->f_462) && !uParam0->f_461)
			{
				if (func_393(iVar7, uParam0->f_494, uParam0->f_103.f_1, &Var8))
				{
					func_272(Var8.f_11, 2, -1);
				}
			}
			uParam0->f_103.f_15 = 0;
			GlobalFunc_6900(0, 0, 0, 1);
			if (GlobalFunc_1391())
			{
				if (Global_2543381 == uParam0->f_103.f_1)
				{
					iVar0 = 1;
				}
				else
				{
					uParam0->f_103.f_1 = Global_2543381;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (uParam0->f_462)
					{
						uParam0->f_558 = 1;
						uParam0->f_562 = 1;
						uParam0->f_563 = GlobalFunc_2479();
					}
					uParam0->f_461 = !func_150(uParam0, iVar7, uParam0->f_494, uParam0->f_103.f_1);
					uParam0->f_462 = (!uParam0->f_461 && !func_146(uParam0, iVar7, uParam0->f_494, uParam0->f_103.f_1));
					uParam0->f_463 = 0;
					func_269(uParam0, iParam1, uParam0->f_494, uParam0->f_103.f_1);
					if (uParam0->f_558)
					{
						uParam0->f_676 = 1;
						func_250(uParam0, iParam1, 0, 0);
						uParam0->f_558 = 0;
					}
					else
					{
						func_240(uParam0, iVar7, 1);
					}
					GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
					if (func_393(iVar7, uParam0->f_494, uParam0->f_103.f_1, &Var20))
					{
						uParam0->f_534 = { Var20.f_1 };
					}
					func_238(iVar7, uParam0->f_494, uParam0->f_103.f_1);
				}
			}
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				if (func_117(uParam0))
				{
					if (HUD::_0x632B2940C67F4EA9(uParam0->f_592, &iVar4, &iVar5, &uVar6))
					{
						if (iVar4 == 5)
						{
							if (iVar5 > -1)
							{
								uParam0->f_603 = func_237(iVar7, uParam0->f_494, iVar5);
								uParam0->f_676 = 1;
								func_269(uParam0, iParam1, uParam0->f_494, uParam0->f_103.f_1);
								if (uParam0->f_676)
								{
									uParam0->f_676 = 1;
									func_250(uParam0, iParam1, 0, 0);
									uParam0->f_558 = 0;
								}
							}
							else if (iVar5 == -1)
							{
								PAD::_SET_CONTROL_NORMAL(2, 205, 1f);
							}
							else if (iVar5 == -2)
							{
								PAD::_SET_CONTROL_NORMAL(2, 206, 1f);
							}
						}
					}
				}
				if (func_236(uParam0, iVar7))
				{
					if (HUD::_0x632B2940C67F4EA9(uParam0->f_582, &iVar4, &iVar5, &uVar6))
					{
						if (iVar4 == 5)
						{
							if (iVar5 > -1)
							{
								uParam0->f_602 = func_237(iVar7, uParam0->f_494, iVar5);
								uParam0->f_676 = 1;
								func_269(uParam0, iParam1, uParam0->f_494, uParam0->f_103.f_1);
								if (uParam0->f_676)
								{
									uParam0->f_676 = 1;
									func_250(uParam0, iParam1, 0, 0);
									uParam0->f_558 = 0;
								}
							}
							else if (iVar5 == -1)
							{
								PAD::_SET_CONTROL_NORMAL(2, 207, 1f);
							}
							else if (iVar5 == -2)
							{
								PAD::_SET_CONTROL_NORMAL(2, 208, 1f);
							}
						}
					}
				}
				if (func_235(uParam0, iVar7))
				{
					fVar2 = (fLocal_99 - (Global_17235 / 2f));
					fVar3 = (GlobalFunc_2480() + (fLocal_102 - (fLocal_101 / 2f)));
					fVar1 = GlobalFunc_6449(4, fVar2, fVar3, Global_17235, 0.15f, 1f);
					if (fVar1 >= 0f && fVar1 != fLocal_97)
					{
						if (uParam0->f_494 != 6)
						{
							uParam0->f_607 = fVar1;
							uParam0->f_676 = 1;
							func_269(uParam0, iParam1, uParam0->f_494, uParam0->f_103.f_1);
							func_240(uParam0, iVar7, 1);
						}
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_96, "CONTINUOUS_SLIDER", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					}
					else
					{
						if (uParam0->f_676)
						{
							uParam0->f_676 = 1;
							func_250(uParam0, iParam1, 0, 0);
							uParam0->f_558 = 0;
						}
						AUDIO::STOP_SOUND(iLocal_96);
					}
					fLocal_97 = fVar1;
				}
			}
			fVar32 = ((1f - 0.15f) / 20f);
			if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || (uParam0->f_218.f_1 < -100 && uParam0->f_218.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_218.f_8)) || GlobalFunc_2495(uParam0->f_218.f_8, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_218.f_8 = 0;
				uParam0->f_218.f_4 = 0;
				uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				while (uParam0->f_103.f_1 >= 0 && !func_158(iVar7, uParam0->f_494, uParam0->f_103.f_1))
				{
					uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				}
				if (!func_158(iVar7, uParam0->f_494, uParam0->f_103.f_1))
				{
					uParam0->f_103.f_1 = (func_164(iVar7, uParam0->f_494) - 1);
				}
				while (uParam0->f_103.f_1 >= 0 && !func_158(iVar7, uParam0->f_494, uParam0->f_103.f_1))
				{
					uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				}
				if (uParam0->f_103.f_1 < 0)
				{
					uParam0->f_103.f_1 = (func_164(iVar7, uParam0->f_494) - 1);
				}
				while (uParam0->f_103.f_1 >= 0 && !func_158(iVar7, uParam0->f_494, uParam0->f_103.f_1))
				{
					uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				}
				if (uParam0->f_462)
				{
					uParam0->f_558 = 1;
					uParam0->f_562 = 1;
					uParam0->f_563 = GlobalFunc_2479();
				}
				uParam0->f_461 = !func_150(uParam0, iVar7, uParam0->f_494, uParam0->f_103.f_1);
				uParam0->f_462 = (!uParam0->f_461 && !func_146(uParam0, iVar7, uParam0->f_494, uParam0->f_103.f_1));
				uParam0->f_463 = 0;
				func_269(uParam0, iParam1, uParam0->f_494, uParam0->f_103.f_1);
				if (uParam0->f_558)
				{
					uParam0->f_676 = 1;
					func_250(uParam0, iParam1, 0, 0);
					uParam0->f_558 = 0;
				}
				else
				{
					func_240(uParam0, iVar7, 1);
				}
				GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
				if (func_393(iVar7, uParam0->f_494, uParam0->f_103.f_1, &Var33))
				{
					uParam0->f_534 = { Var33.f_1 };
				}
				func_238(iVar7, uParam0->f_494, uParam0->f_103.f_1);
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || (uParam0->f_218.f_1 > 100 && uParam0->f_218.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_218.f_9)) || GlobalFunc_2494(uParam0->f_218.f_9, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_218.f_9 = 0;
				uParam0->f_218.f_4 = 0;
				uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_103.f_1++;
				while (uParam0->f_103.f_1 <= (func_164(iVar7, uParam0->f_494) - 1) && !func_158(iVar7, uParam0->f_494, uParam0->f_103.f_1))
				{
					uParam0->f_103.f_1++;
				}
				if (!func_158(iVar7, uParam0->f_494, uParam0->f_103.f_1))
				{
					uParam0->f_103.f_1 = 0;
				}
				while (uParam0->f_103.f_1 <= (func_164(iVar7, uParam0->f_494) - 1) && !func_158(iVar7, uParam0->f_494, uParam0->f_103.f_1))
				{
					uParam0->f_103.f_1++;
				}
				if (uParam0->f_103.f_1 >= func_164(iVar7, uParam0->f_494))
				{
					uParam0->f_103.f_1 = 0;
				}
				while (uParam0->f_103.f_1 <= (func_164(iVar7, uParam0->f_494) - 1) && !func_158(iVar7, uParam0->f_494, uParam0->f_103.f_1))
				{
					uParam0->f_103.f_1++;
				}
				if (uParam0->f_462)
				{
					uParam0->f_558 = 1;
					uParam0->f_562 = 1;
					uParam0->f_563 = GlobalFunc_2479();
				}
				uParam0->f_461 = !func_150(uParam0, iVar7, uParam0->f_494, uParam0->f_103.f_1);
				uParam0->f_462 = (!uParam0->f_461 && !func_146(uParam0, iVar7, uParam0->f_494, uParam0->f_103.f_1));
				uParam0->f_463 = 0;
				func_269(uParam0, iParam1, uParam0->f_494, uParam0->f_103.f_1);
				if (uParam0->f_558)
				{
					uParam0->f_676 = 1;
					func_250(uParam0, iParam1, 0, 0);
					uParam0->f_558 = 0;
				}
				else
				{
					func_240(uParam0, iVar7, 1);
				}
				GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
				if (func_393(iVar7, uParam0->f_494, uParam0->f_103.f_1, &Var45))
				{
					uParam0->f_534 = { Var45.f_1 };
				}
				func_238(iVar7, uParam0->f_494, uParam0->f_103.f_1);
			}
			else if ((func_230(uParam0, iVar7) && !(uParam0->f_494 == 11 || uParam0->f_494 == 14)) && (PAD::IS_CONTROL_JUST_PRESSED(2, 207) || (PAD::IS_CONTROL_PRESSED(2, 207) && uParam0->f_218.f_14)))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_218.f_14 = 0;
				uParam0->f_218.f_16 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_218.f_17 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_602 = (uParam0->f_602 - 1);
				while (uParam0->f_602 >= 0 && !func_229(uParam0->f_494, uParam0->f_602))
				{
					uParam0->f_602 = (uParam0->f_602 - 1);
				}
				if (!func_229(uParam0->f_494, uParam0->f_602))
				{
					uParam0->f_602 = (func_228(iVar7, uParam0->f_494) - 1);
				}
				while (uParam0->f_602 >= 0 && !func_229(uParam0->f_494, uParam0->f_602))
				{
					uParam0->f_602 = (uParam0->f_602 - 1);
				}
				if (uParam0->f_602 < 0)
				{
					uParam0->f_602 = (func_228(iVar7, uParam0->f_494) - 1);
				}
				while (uParam0->f_602 >= 0 && !func_229(uParam0->f_494, uParam0->f_602))
				{
					uParam0->f_602 = (uParam0->f_602 - 1);
				}
				if (!uParam0->f_606)
				{
					uParam0->f_603 = PED::_0xAAA6A3698A69E048(uParam0->f_602);
				}
				else
				{
					uParam0->f_604 = uParam0->f_603;
				}
				uParam0->f_676 = 1;
				func_269(uParam0, iParam1, uParam0->f_494, uParam0->f_103.f_1);
				if (uParam0->f_676)
				{
					uParam0->f_676 = 1;
					func_250(uParam0, iParam1, 0, 0);
					uParam0->f_558 = 0;
				}
			}
			else if ((func_230(uParam0, iVar7) && !(uParam0->f_494 == 11 || uParam0->f_494 == 14)) && (PAD::IS_CONTROL_JUST_PRESSED(2, 208) || (PAD::IS_CONTROL_PRESSED(2, 208) && uParam0->f_218.f_15)))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_218.f_15 = 0;
				uParam0->f_218.f_16 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_218.f_17 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_602++;
				while (uParam0->f_602 <= (func_228(iVar7, uParam0->f_494) - 1) && !func_229(uParam0->f_494, uParam0->f_602))
				{
					uParam0->f_602++;
				}
				if (!func_229(uParam0->f_494, uParam0->f_602))
				{
					uParam0->f_602 = 0;
				}
				while (uParam0->f_602 <= (func_228(iVar7, uParam0->f_494) - 1) && !func_229(uParam0->f_494, uParam0->f_602))
				{
					uParam0->f_602++;
				}
				if (uParam0->f_602 >= func_228(iVar7, uParam0->f_494))
				{
					uParam0->f_602 = 0;
				}
				while (uParam0->f_602 <= (func_228(iVar7, uParam0->f_494) - 1) && !func_229(uParam0->f_494, uParam0->f_602))
				{
					uParam0->f_602++;
				}
				if (!uParam0->f_606)
				{
					uParam0->f_603 = PED::_0xAAA6A3698A69E048(uParam0->f_602);
				}
				else
				{
					uParam0->f_604 = uParam0->f_603;
				}
				uParam0->f_676 = 1;
				func_269(uParam0, iParam1, uParam0->f_494, uParam0->f_103.f_1);
				if (uParam0->f_676)
				{
					uParam0->f_676 = 1;
					func_250(uParam0, iParam1, 0, 0);
					uParam0->f_558 = 0;
				}
			}
			else if (func_230(uParam0, iVar7) && (PAD::IS_CONTROL_JUST_PRESSED(2, 205) || (PAD::IS_CONTROL_PRESSED(2, 205) && uParam0->f_218.f_12)))
			{
				if (uParam0->f_494 == 6)
				{
					if (uParam0->f_606)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						uParam0->f_218.f_12 = 0;
						uParam0->f_218.f_16 = MISC::GET_GAME_TIMER();
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uParam0->f_218.f_17 = NETWORK::GET_NETWORK_TIME();
						}
						uParam0->f_603 = (uParam0->f_603 - 1);
						while (uParam0->f_603 >= 0 && !func_229(uParam0->f_494, uParam0->f_603))
						{
							uParam0->f_603 = (uParam0->f_603 - 1);
						}
						if (!func_229(uParam0->f_494, uParam0->f_603))
						{
							uParam0->f_603 = (func_228(iVar7, uParam0->f_494) - 1);
						}
						while (uParam0->f_603 >= 0 && !func_229(uParam0->f_494, uParam0->f_603))
						{
							uParam0->f_603 = (uParam0->f_603 - 1);
						}
						if (uParam0->f_603 < 0)
						{
							uParam0->f_603 = (func_228(iVar7, uParam0->f_494) - 1);
						}
						while (uParam0->f_603 >= 0 && !func_229(uParam0->f_494, uParam0->f_603))
						{
							uParam0->f_603 = (uParam0->f_603 - 1);
						}
						uParam0->f_676 = 1;
					}
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					uParam0->f_218.f_12 = 0;
					uParam0->f_218.f_16 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_218.f_17 = NETWORK::GET_NETWORK_TIME();
					}
					uParam0->f_607 = (uParam0->f_607 - fVar32);
					if (uParam0->f_607 < 0.15f)
					{
						uParam0->f_607 = 0.15f;
					}
					uParam0->f_676 = 1;
				}
				func_269(uParam0, iParam1, uParam0->f_494, uParam0->f_103.f_1);
				if (uParam0->f_676)
				{
					uParam0->f_676 = 1;
					func_250(uParam0, iParam1, 0, 0);
					uParam0->f_558 = 0;
				}
			}
			else if (func_230(uParam0, iVar7) && (PAD::IS_CONTROL_JUST_PRESSED(2, 206) || (PAD::IS_CONTROL_PRESSED(2, 206) && uParam0->f_218.f_13)))
			{
				if (uParam0->f_494 == 6)
				{
					if (uParam0->f_606)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						uParam0->f_218.f_13 = 0;
						uParam0->f_218.f_16 = MISC::GET_GAME_TIMER();
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uParam0->f_218.f_17 = NETWORK::GET_NETWORK_TIME();
						}
						uParam0->f_603++;
						while (uParam0->f_603 <= (func_228(iVar7, uParam0->f_494) - 1) && !func_229(uParam0->f_494, uParam0->f_603))
						{
							uParam0->f_603++;
						}
						if (!func_229(uParam0->f_494, uParam0->f_603))
						{
							uParam0->f_603 = 0;
						}
						while (uParam0->f_603 <= (func_228(iVar7, uParam0->f_494) - 1) && !func_229(uParam0->f_494, uParam0->f_603))
						{
							uParam0->f_603++;
						}
						if (uParam0->f_603 >= func_228(iVar7, uParam0->f_494))
						{
							uParam0->f_603 = 0;
						}
						while (uParam0->f_603 <= (func_228(iVar7, uParam0->f_494) - 1) && !func_229(uParam0->f_494, uParam0->f_603))
						{
							uParam0->f_603++;
						}
						uParam0->f_676 = 1;
					}
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					uParam0->f_218.f_13 = 0;
					uParam0->f_218.f_16 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_218.f_17 = NETWORK::GET_NETWORK_TIME();
					}
					uParam0->f_607 = (uParam0->f_607 + fVar32);
					if (uParam0->f_607 > 1f)
					{
						uParam0->f_607 = 1f;
					}
					uParam0->f_676 = 1;
				}
				func_269(uParam0, iParam1, uParam0->f_494, uParam0->f_103.f_1);
				if (uParam0->f_676)
				{
					uParam0->f_676 = 1;
					func_250(uParam0, iParam1, 0, 0);
					uParam0->f_558 = 0;
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 203))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_606 = !uParam0->f_606;
				if (uParam0->f_494 == 6)
				{
					if (!uParam0->f_606)
					{
						uParam0->f_604 = uParam0->f_603;
						uParam0->f_603 = PED::_0xAAA6A3698A69E048(uParam0->f_602);
					}
					else
					{
						uParam0->f_603 = uParam0->f_604;
					}
				}
				uParam0->f_676 = 1;
				func_269(uParam0, iParam1, uParam0->f_494, uParam0->f_103.f_1);
				if (uParam0->f_676)
				{
					func_240(uParam0, iVar7, 1);
					uParam0->f_676 = 0;
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar0 == 1)
			{
				iVar0 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_393(iVar7, uParam0->f_494, uParam0->f_103.f_1, &iVar57);
				if (func_392(iVar7, &iVar57, uParam0))
				{
					switch (uParam0->f_494)
					{
						case 7:
							GlobalFunc_1353("HAIR_CUR_1", 4000, 0);
							break;
						
						case 6:
							GlobalFunc_1353("HAIR_CUR_2", 4000, 0);
							break;
						
						case 11:
						case 13:
						case 14:
						case 15:
							GlobalFunc_1353("HAIR_CUR_3", 4000, 0);
							break;
						
						default:
							GlobalFunc_1353("HAIR_CUR_9", 4000, 0);
							break;
					}
					uParam0->f_256 = func_404(uParam0->f_103.f_1);
				}
				else if (!func_150(uParam0, iVar7, uParam0->f_494, uParam0->f_103.f_1))
				{
					GlobalFunc_1353("HAIR_LOCK", 4000, 0);
				}
				else if (!GlobalFunc_9187(iVar57))
				{
					switch (uParam0->f_494)
					{
						case 7:
							GlobalFunc_1353("HAIR_AFF_1", 4000, 0);
							break;
						
						case 6:
							GlobalFunc_1353("HAIR_AFF_2", 4000, 0);
							break;
						
						case 11:
						case 13:
						case 14:
						case 15:
							GlobalFunc_1353("HAIR_AFF_3", 4000, 0);
							break;
						
						default:
							GlobalFunc_1353("HAIR_AFF_9", 4000, 0);
							break;
					}
					GlobalFunc_2478(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(*uParam0)));
					GlobalFunc_7677(0, 10, 3);
				}
				else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979()) && !func_211(78225582, func_219(uParam0->f_494), GlobalFunc_7505(uParam0->f_494, uParam0->f_534, 0), 478352891, 1, iVar57, 1, 4, GlobalFunc_4400(uParam0->f_494), 3))
				{
					GlobalFunc_5069(GlobalFunc_5422());
					GlobalFunc_1353("CSHOP_FAIL", 4000, 0);
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
					{
						uParam0->f_103.f_25 = 1;
						uParam0->f_103.f_26 = 0;
					}
					uParam0->f_103.f_15 = 1;
					func_310(iParam1, uParam0);
				}
			}
			break;
	}
}






int func_211(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x15B69
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
		if (!GlobalFunc_6955(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && GlobalFunc_1542(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = uParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = uParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
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








int func_219(int iParam0)//Position - 0x16458
{
	switch (iParam0)
	{
		case 6:
			return -1796535835;
			break;
		
		case 7:
			return -2052814106;
			break;
		
		case 8:
			return -1928802392;
			break;
		
		case 9:
			return 581564040;
			break;
		
		case 10:
			return 23048035;
			break;
		
		case 11:
			return 2117376854;
			break;
		
		case 13:
			return -1377881127;
			break;
		
		case 14:
			return 1701289268;
			break;
		
		case 15:
			return -504675202;
			break;
		
		default:
			break;
	}
	return -1796535835;
}









int func_228(int iParam0, int iParam1)//Position - 0x169BE
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return PED::_GET_NUM_HAIR_COLORS();
				break;
			
			case 7:
				return PED::_GET_NUM_HAIR_COLORS();
				break;
			
			case 8:
				return PED::_GET_NUM_HAIR_COLORS();
				break;
			
			case 9:
				return PED::_GET_NUM_HAIR_COLORS();
				break;
			
			case 10:
				return 0;
				break;
			
			case 11:
				return 0;
				break;
			
			case 14:
				return 0;
				break;
			
			case 15:
				return PED::_GET_NUM_MAKEUP_COLORS();
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return PED::_GET_NUM_HAIR_COLORS();
				break;
			
			case 8:
				return PED::_GET_NUM_HAIR_COLORS();
				break;
			
			case 10:
				return 0;
				break;
			
			case 11:
				return 0;
				break;
			
			case 13:
				return PED::_GET_NUM_MAKEUP_COLORS();
				break;
			
			case 14:
				return 0;
				break;
			
			case 15:
				return PED::_GET_NUM_MAKEUP_COLORS();
				break;
			}
	}
	return 0;
}

int func_229(int iParam0, int iParam1)//Position - 0x16ACA
{
	if (((iParam0 == 6 || iParam0 == 7) || iParam0 == 9) || iParam0 == 8)
	{
		if (!PED::_IS_PED_HAIR_COLOR_VALID(iParam1))
		{
			return 0;
		}
	}
	else if (iParam0 == 15)
	{
		if (!PED::_IS_PED_LIPSTICK_COLOR_VALID(iParam1))
		{
			return 0;
		}
	}
	else if (iParam0 == 13)
	{
		if (!PED::_IS_PED_BLUSH_COLOR_VALID(iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_230(var uParam0, int iParam1)//Position - 0x16B38
{
	switch (uParam0->f_494)
	{
		case 6:
			switch (func_231(iParam1, uParam0->f_103.f_1))
			{
				case 0:
					break;
				
				case -1:
					return 0;
					break;
				
				default:
					break;
			}
			break;
		
		case 10:
			return 0;
			break;
		
		case 14:
		case 11:
			if (uParam0->f_103.f_1 == 0)
			{
				return 0;
			}
			break;
		
		case 13:
		case 15:
		case 7:
		case 8:
		case 9:
			if (uParam0->f_103.f_1 == 0)
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 1;
}

int func_231(int iParam0, int iParam1)//Position - 0x16BDA
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 0:
				return -1;
			
			case 1:
				return 0;
			
			case 2:
				return 0;
			
			case 3:
				return 0;
			
			case 4:
				return 0;
			
			case 5:
				return 0;
			
			case 6:
				return 0;
			
			case 7:
				return 0;
			
			case 8:
				return 0;
			
			case 9:
				return 0;
			
			case 10:
				return 0;
			
			case 11:
				return 0;
			
			case 12:
				return 0;
			
			case 13:
				return 0;
			
			case 14:
				return 0;
			
			case 15:
				return 0;
			
			case 16:
				return 0;
			
			case 17:
				return 0;
			
			case 18:
				return 0;
			
			case 19:
				return 0;
			
			case 20:
				return 0;
			
			case 21:
				return 0;
			
			case 22:
				return 0;
			
			default:
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 0:
				return -1;
			
			case 1:
				return 0;
			
			case 2:
				return 0;
			
			case 3:
				return 0;
			
			case 4:
				return 0;
			
			case 5:
				return 0;
			
			case 6:
				return 0;
			
			case 7:
				return 0;
			
			case 8:
				return 0;
			
			case 9:
				return 0;
			
			case 10:
				return 0;
			
			case 11:
				return 0;
			
			case 12:
				return 0;
			
			case 13:
				return 0;
			
			case 14:
				return 0;
			
			case 15:
				return 0;
			
			case 16:
				return 0;
			
			case 17:
				return 0;
			
			case 18:
				return 0;
			
			case 19:
				return 0;
			
			case 20:
				return 0;
			
			case 21:
				return 0;
			
			case 22:
				return 0;
			
			case 23:
				return 0;
			}
		
		default:
	}
	return -1;
}




int func_235(var uParam0, int iParam1)//Position - 0x17066
{
	if ((((((uParam0->f_494 == 13 || uParam0->f_494 == 14) || uParam0->f_494 == 15) || uParam0->f_494 == 7) || uParam0->f_494 == 8) || uParam0->f_494 == 9) || uParam0->f_494 == 11)
	{
		if (func_230(uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_236(var uParam0, int iParam1)//Position - 0x170DC
{
	if (!(uParam0->f_494 == 11 || uParam0->f_494 == 14))
	{
		if (func_230(uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_237(int iParam0, int iParam1, int iParam2)//Position - 0x1710E
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == -1)
	{
		return -1;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < func_228(iParam0, iParam1))
	{
		if (func_229(iParam1, iVar0))
		{
			iVar1++;
			if (iVar1 == iParam2)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_238(int iParam0, int iParam1, int iParam2)//Position - 0x1715A
{
	struct<2> Var0;
	
	if (func_393(iParam0, iParam1, iParam2, &Var0))
	{
		GlobalFunc_2475(Var0.f_1, Var0, 0, 1, 0);
	}
}


void func_240(var uParam0, int iParam1, bool bParam2)//Position - 0x171BC
{
	char* sVar0;
	char* sVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	var uVar18;
	
	func_586(uParam0);
	sVar0 = "FACE_OPAC";
	sVar1 = "FACE_COLOUR";
	fVar2 = ((uParam0->f_607 - 0.15f) * (1f / (1f - 0.15f)));
	if (fVar2 >= 1f)
	{
		fVar2 = 1f;
	}
	else if (fVar2 <= 0f)
	{
		fVar2 = 0f;
	}
	fVar2 = (fVar2 * 100f);
	iVar3 = func_249(iParam1, uParam0->f_494, uParam0->f_602);
	uParam0->f_678 = 0;
	iVar4 = 0;
	while (iVar4 < func_228(iParam1, uParam0->f_494))
	{
		if (func_229(uParam0->f_494, iVar4))
		{
			uParam0->f_678++;
		}
		iVar4++;
	}
	sVar5 = "";
	iVar6 = -1;
	switch (uParam0->f_494)
	{
		case 6:
			sVar0 = "";
			fVar2 = -1f;
			sVar5 = "FACE_COLHILI";
			if (func_230(uParam0, iParam1))
			{
				if (uParam0->f_602 == -1)
				{
					uParam0->f_602 = func_79(2135, -1, 0);
				}
				if (uParam0->f_603 == -1)
				{
					uParam0->f_603 = func_79(2142, -1, 0);
					uParam0->f_604 = uParam0->f_603;
				}
				uParam0->f_607 = 1f;
				sVar5 = "FACE_COLHILI";
				iVar3 = func_249(iParam1, uParam0->f_494, uParam0->f_602);
				iVar6 = func_249(iParam1, uParam0->f_494, uParam0->f_603);
			}
			else
			{
				sVar0 = "";
				fVar2 = -1f;
				sVar1 = "";
				iVar3 = -1;
				sVar5 = "";
				iVar6 = -1;
				uParam0->f_678 = -1;
			}
			break;
		
		case 10:
			sVar0 = "";
			fVar2 = -1f;
			sVar1 = "";
			iVar3 = -1;
			uParam0->f_678 = -1;
			uParam0->f_602 = func_237(iParam1, uParam0->f_494, iVar3);
			uParam0->f_603 = func_237(iParam1, uParam0->f_494, iVar6);
			uParam0->f_604 = uParam0->f_603;
			uParam0->f_607 = 1f;
			break;
		
		case 14:
		case 11:
			sVar1 = "";
			iVar3 = -1;
			uParam0->f_678 = -1;
			if (uParam0->f_103.f_1 == 0)
			{
				sVar0 = "";
				fVar2 = -1f;
			}
			uParam0->f_602 = func_237(iParam1, uParam0->f_494, iVar3);
			uParam0->f_603 = func_237(iParam1, uParam0->f_494, iVar6);
			uParam0->f_604 = uParam0->f_603;
			break;
		
		case 13:
		case 15:
		case 7:
		case 8:
		case 9:
			if (!func_230(uParam0, iParam1))
			{
				sVar0 = "";
				fVar2 = -1f;
				sVar1 = "";
				iVar3 = -1;
				uParam0->f_678 = -1;
			}
			else
			{
				uParam0->f_602 = func_237(iParam1, uParam0->f_494, iVar3);
				if (uParam0->f_602 == -1)
				{
					uParam0->f_602 = func_245(GlobalFunc_4401(uParam0->f_494), &(uParam0->f_605), -1);
					iVar3 = func_249(iParam1, uParam0->f_494, uParam0->f_602);
				}
			}
			break;
		
		default:
			break;
	}
	func_244(uParam0);
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_582, "SET_IS_PC");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_582, "SET_TITLE"))
	{
		GlobalFunc_726(sVar0);
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar1);
		if (iVar3 != -1 && uParam0->f_678 != -1)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3 + 1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_678);
		}
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		if (fVar2 != -1f)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar2);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		iVar7 = 0;
		while (iVar7 < uParam0->f_678)
		{
			uVar11 = func_237(iParam1, uParam0->f_494, iVar7);
			if (((uParam0->f_494 == 6 || uParam0->f_494 == 7) || uParam0->f_494 == 9) || uParam0->f_494 == 8)
			{
				PED::_GET_PED_HAIR_RGB_COLOR(uVar11, &iVar8, &iVar9, &iVar10);
			}
			else if (uParam0->f_494 == 13 || uParam0->f_494 == 15)
			{
				PED::_GET_PED_MAKEUP_RGB_COLOR(uVar11, &iVar8, &iVar9, &iVar10);
			}
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_582, "SET_DATA_SLOT"))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar10);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar7++;
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_582, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_582, "SET_HIGHLIGHT"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (fVar2 == -1f)
	{
		iVar12 = 0;
		if (!uParam0->f_606)
		{
			iVar13 = 1;
		}
		else
		{
			iVar13 = 0;
		}
	}
	else
	{
		iVar12 = 1;
		iVar13 = 0;
	}
	if (fVar2 == -1f)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_582, "SHOW_OPACITY"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iVar12);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iVar13);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar5) || !uParam0->f_606)
	{
	}
	else
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_592, "SET_IS_PC");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_592, "SET_TITLE"))
		{
			GlobalFunc_726(sVar0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar5);
			if (iVar6 != -1 && uParam0->f_678 != -1)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(iVar6 + 1);
				HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_678);
			}
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			if (fVar2 != -1f)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar2);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_592, "SET_DATA_SLOT_EMPTY"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
			iVar14 = 0;
			while (iVar14 < uParam0->f_678)
			{
				uVar18 = func_237(iParam1, uParam0->f_494, iVar14);
				if (((uParam0->f_494 == 6 || uParam0->f_494 == 7) || uParam0->f_494 == 9) || uParam0->f_494 == 8)
				{
					PED::_GET_PED_HAIR_RGB_COLOR(uVar18, &iVar15, &iVar16, &iVar17);
				}
				else if (uParam0->f_494 == 13 || uParam0->f_494 == 15)
				{
					PED::_GET_PED_MAKEUP_RGB_COLOR(uVar18, &iVar15, &iVar16, &iVar17);
				}
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_592, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar14);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar15);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar16);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar17);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar14++;
			}
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_592, "DISPLAY_VIEW"))
			{
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_592, "SET_HIGHLIGHT"))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
	if (bParam2)
	{
		GlobalFunc_5342(-1);
	}
	if (!func_475(uParam0->f_494))
	{
		GlobalFunc_1354(201, "ITEM_SELECT", -1);
	}
	else if (uParam0->f_494 == 5 || uParam0->f_494 == 12)
	{
		GlobalFunc_1354(201, "ITEM_SELECT", -1);
	}
	else
	{
		GlobalFunc_1354(201, "ITEM_BUY", -1);
	}
	if (uParam0->f_677)
	{
		GlobalFunc_1354(202, "ITEM_BACK", -1);
		GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
		if (!func_475(uParam0->f_494))
		{
			GlobalFunc_1354(iLocal_93, "ITEM_ZOOM", -1);
		}
	}
	else
	{
		GlobalFunc_1354(202, "ITEM_BACK", -1);
		GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || !MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
			if (uParam0->f_606)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					GlobalFunc_260(14, "ITEM_B_OPACITY", -1);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					GlobalFunc_1354(203, "ITEM_X_TINT", -1);
					GlobalFunc_260(14, "ITEM_B_HILI", -1);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					GlobalFunc_260(15, "ITEM_T_HCOL", -1);
				}
				else
				{
					GlobalFunc_260(15, "ITEM_T_COL", -1);
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					GlobalFunc_260(14, "ITEM_B_OPACITY", -1);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					GlobalFunc_1354(203, "ITEM_X_HILI", -1);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					GlobalFunc_260(15, "ITEM_T_HCOL", -1);
				}
				else
				{
					GlobalFunc_260(15, "ITEM_T_COL", -1);
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			GlobalFunc_260(14, "ITEM_B_OPACITY", -1);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
		}
	}
}




void func_244(var uParam0)//Position - 0x17B47
{
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_592, "SET_IS_PC");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_582, "SET_DATA_SLOT_EMPTY"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_582, "SET_TITLE"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_592, "SET_IS_PC");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_592, "SET_DATA_SLOT_EMPTY"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_592, "SET_TITLE"))
	{
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_245(int iParam0, int iParam1, int iParam2)//Position - 0x17BDB
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = GlobalFunc_287(iParam0);
	if (iVar0 == -1)
	{
		*iParam1 = 0;
		return -1;
	}
	iVar1 = GlobalFunc_6872(iVar0, iParam2, 0);
	GlobalFunc_285(iVar1, &uVar2, iParam1);
	return uVar2;
}




int func_249(int iParam0, int iParam1, int iParam2)//Position - 0x17CF7
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == -1)
	{
		return -1;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < func_228(iParam0, iParam1))
	{
		if (func_229(iParam1, iVar0))
		{
			iVar1++;
			if (iVar0 == iParam2)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_250(var uParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x17D43
{
	int iVar0;
	struct<12> Var1;
	int iVar13;
	struct<10> Var14;
	int iVar26;
	int iVar27;
	bool bVar28;
	int iVar29;
	
	func_267(uParam0, 0);
	GlobalFunc_262(0);
	GlobalFunc_7023(*uParam0);
	GlobalFunc_1317(1, 1, 0, 0, 0);
	GlobalFunc_1316(1, 2, 1, 1, 1);
	GlobalFunc_1318(func_260(uParam0->f_494, 1));
	uParam0->f_461 = 0;
	uParam0->f_462 = 0;
	uParam0->f_469 = 0;
	iVar13 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (uParam0->f_676 && iParam3)
	{
		if (!(!uParam0->f_103.f_22 && uParam0->f_103.f_15))
		{
			if (func_393(iVar13, uParam0->f_494, uParam0->f_103.f_1, &Var14))
			{
				if (Var1.f_11 != 0 && func_147(Var1.f_11, 2, -1))
				{
				}
				else if (Var14.f_9 == 0)
				{
					uParam0->f_602 = func_79(2135, -1, 0);
					uParam0->f_603 = func_79(2142, -1, 0);
					uParam0->f_604 = uParam0->f_603;
					uParam0->f_607 = 1f;
				}
				else if (Var14.f_9 == 1)
				{
					if (Var14.f_5 == 4)
					{
						uParam0->f_602 = -1;
						uParam0->f_605 = 0;
					}
					else
					{
						uParam0->f_602 = func_245(Var14.f_5, &(uParam0->f_605), -1);
					}
					iVar26 = GlobalFunc_286(Var14.f_5);
					iVar27 = GlobalFunc_289(Var14.f_5);
					if (iVar26 != -1)
					{
						uParam0->f_603 = func_79(iVar26, -1, 0);
					}
					else
					{
						uParam0->f_603 = 0;
					}
					uParam0->f_604 = uParam0->f_603;
					if (iVar27 != -1)
					{
						uParam0->f_607 = GlobalFunc_6734(iVar27, -1);
						if (uParam0->f_103.f_1 == 0 && uParam0->f_607 == 0f)
						{
							uParam0->f_607 = Var14.f_7;
						}
					}
					else
					{
						uParam0->f_607 = Var14.f_7;
					}
				}
				else if (Var14.f_9 == 2)
				{
					uParam0->f_602 = -1;
					uParam0->f_605 = 0;
					uParam0->f_603 = -1;
					uParam0->f_604 = uParam0->f_603;
					uParam0->f_607 = Var14.f_7;
				}
			}
		}
	}
	bVar28 = false;
	while (func_393(iVar13, uParam0->f_494, iVar0, &Var1))
	{
		if (func_158(iVar13, uParam0->f_494, iVar0))
		{
			if (func_150(uParam0, iVar13, uParam0->f_494, iVar0) && !func_146(uParam0, iVar13, uParam0->f_494, iVar0))
			{
				GlobalFunc_7830(iVar0, &(Var1.f_1), 1, 1, 0, 0);
				GlobalFunc_8447(2, 0);
				if (iVar0 == uParam0->f_103.f_1)
				{
					uParam0->f_462 = 1;
				}
			}
			else
			{
				GlobalFunc_7830(iVar0, &(Var1.f_1), 0, 1, 0, 0);
			}
			if (iVar0 == uParam0->f_103.f_1)
			{
				uParam0->f_534 = { Var1.f_1 };
			}
			if (func_392(iVar13, &Var1, uParam0))
			{
				bVar28 = true;
				if (bParam2)
				{
					if (!(!uParam0->f_103.f_22 && uParam0->f_103.f_15))
					{
						uParam0->f_103.f_1 = iVar0;
					}
				}
				GlobalFunc_7830(iVar0, "", 1, 1, 0, 0);
				if (((uParam0->f_494 == 11 || uParam0->f_494 == 13) || uParam0->f_494 == 14) || uParam0->f_494 == 15)
				{
					GlobalFunc_8447(20, 0);
				}
				else
				{
					GlobalFunc_8447(14, 0);
				}
			}
			else if (!func_150(uParam0, iVar13, uParam0->f_494, iVar0))
			{
				GlobalFunc_7830(iVar0, "", 1, 1, 0, 0);
				GlobalFunc_8447(15, 0);
				if (iVar0 == uParam0->f_103.f_1)
				{
					uParam0->f_461 = 1;
				}
			}
			else if (Var1 > 0)
			{
				GlobalFunc_7830(iVar0, "ITEM_COST", 1, 1, 0, 0);
				GlobalFunc_8495(Var1, 0);
			}
			else
			{
				GlobalFunc_7830(iVar0, "ITEM_FREE", 0, 1, 0, 0);
			}
		}
		iVar0++;
	}
	if (iVar0 == 0)
	{
		GlobalFunc_7830(0, "HAIR_NONE", 0, 1, 0, 0);
	}
	else if (!bVar28)
	{
		if (bParam2)
		{
			if (!(!uParam0->f_103.f_22 && uParam0->f_103.f_15))
			{
				if (uParam0->f_494 == 11 || uParam0->f_494 == 14)
				{
					uParam0->f_607 = 1f;
					uParam0->f_103.f_1 = 0;
					func_269(uParam0, iParam1, uParam0->f_494, uParam0->f_103.f_1);
				}
				else
				{
					uParam0->f_607 = 1f;
					uParam0->f_103.f_1 = 0;
					if (func_393(iVar13, uParam0->f_494, uParam0->f_103.f_1, &Var1))
					{
						if (Var1.f_9 == 0)
						{
							iVar29 = GlobalFunc_6732(385, -1, -1);
							Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar13, 2, iVar29) };
							uParam0->f_103.f_1 = Global_68106[1 /*14*/].f_3;
						}
						else if (Var1.f_9 == 1)
						{
						}
						else if (Var1.f_9 == 2)
						{
						}
					}
				}
			}
		}
	}
	GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
	func_238(iVar13, uParam0->f_494, uParam0->f_103.f_1);
	if (!func_475(uParam0->f_494))
	{
		GlobalFunc_1354(201, "ITEM_SELECT", -1);
	}
	else if (uParam0->f_494 == 5 || uParam0->f_494 == 12)
	{
		GlobalFunc_1354(201, "ITEM_SELECT", -1);
	}
	else
	{
		GlobalFunc_1354(201, "ITEM_BUY", -1);
	}
	if (uParam0->f_677)
	{
		GlobalFunc_1354(202, "ITEM_BACK", -1);
		GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
		if (!func_475(uParam0->f_494))
		{
			GlobalFunc_1354(iLocal_93, "ITEM_ZOOM", -1);
		}
	}
	else
	{
		GlobalFunc_1354(202, "ITEM_BACK", -1);
		GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
	}
	if (uParam0->f_676)
	{
		func_240(uParam0, iVar13, 1);
		uParam0->f_676 = 0;
	}
}










char* func_260(int iParam0, bool bParam1)//Position - 0x18BDE
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				return "HAIR_NG_T0";
			}
			else
			{
				return "HAIR_NG_O0";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "HAIR_NG_T1";
			}
			else
			{
				return "HAIR_NG_O1";
			}
			break;
		
		case 7:
			if (bParam1)
			{
				return "HAIR_NG_T2";
			}
			else
			{
				return "HAIR_NG_O2";
			}
			break;
		
		case 8:
			if (bParam1)
			{
				return "HAIR_NG_T3";
			}
			else
			{
				return "HAIR_NG_O3";
			}
			break;
		
		case 9:
			if (bParam1)
			{
				return "HAIR_NG_T4";
			}
			else
			{
				return "HAIR_NG_O4";
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return "HAIR_NG_T5";
			}
			else
			{
				return "HAIR_NG_O5";
			}
			break;
		
		case 11:
			if (bParam1)
			{
				return "HAIR_NG_T6";
			}
			else
			{
				return "HAIR_NG_O6";
			}
			break;
		
		case 12:
			if (bParam1)
			{
				return "HAIR_NG_T7";
			}
			else
			{
				return "HAIR_NG_O7";
			}
			break;
		
		case 13:
			if (bParam1)
			{
				return "HAIR_NG_T8";
			}
			else
			{
				return "HAIR_NG_O8";
			}
			break;
		
		case 14:
			if (bParam1)
			{
				return "HAIR_NG_T9";
			}
			else
			{
				return "HAIR_NG_O9";
			}
			break;
		
		case 15:
			if (bParam1)
			{
				return "HAIR_NG_T10";
			}
			else
			{
				return "HAIR_NG_O10";
			}
			break;
	}
	return "";
}







void func_267(var uParam0, bool bParam1)//Position - 0x19313
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	
	if (GlobalFunc_5785(1))
	{
		iVar2 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_608.f_2) && !PED::IS_PED_INJURED(uParam0->f_608.f_2))
		{
			iVar2 = uParam0->f_608.f_2;
		}
		iVar0 = ENTITY::GET_ENTITY_MODEL(iVar2);
		if (uParam0->f_494 == 1)
		{
			if (uParam0->f_254 == -1)
			{
				Stack.Push(iVar2);
				Stack.Push(2);
				Stack.Push(-1);
				Call_Loc(uParam0->f_447);
				uParam0->f_254 = StackVal;
			}
		}
		else if (uParam0->f_494 == 2)
		{
			if (uParam0->f_255 == -1)
			{
				Stack.Push(iVar2);
				Stack.Push(1);
				Stack.Push(-1);
				Call_Loc(uParam0->f_447);
				uParam0->f_255 = StackVal;
			}
		}
		else if (func_475(uParam0->f_494))
		{
			if (func_393(ENTITY::GET_ENTITY_MODEL(iVar2), uParam0->f_494, uParam0->f_103.f_1, &Var3))
			{
				if (Var3.f_9 == 0)
				{
					uParam0->f_254 = GlobalFunc_6732(385, -1, -1);
					if (bParam1)
					{
						uParam0->f_602 = func_79(2135, -1, 0);
						uParam0->f_603 = func_79(2142, -1, 0);
						uParam0->f_604 = uParam0->f_603;
					}
				}
				else if (Var3.f_9 == 1 || Var3.f_9 == 2)
				{
					uParam0->f_255 = GlobalFunc_6732(GlobalFunc_290(Var3.f_5), -1, -1);
					if (bParam1)
					{
						uParam0->f_602 = func_245(Var3.f_5, &(uParam0->f_605), -1);
						uParam0->f_603 = func_268(Var3.f_5, -1);
						uParam0->f_604 = uParam0->f_603;
						uParam0->f_607 = GlobalFunc_6734(GlobalFunc_289(Var3.f_5), -1);
					}
				}
			}
			if (bParam1)
			{
			}
		}
		if (bParam1)
		{
			iVar1 = 0;
			while (iVar1 < Global_2541867.f_222)
			{
				Stack.Push(iVar0);
				Stack.Push(Global_2541867.f_111[iVar1]);
				Stack.Push(Global_2541867[iVar1]);
				Call_Loc(uParam0->f_449);
				if (StackVal)
				{
					uParam0->f_103.f_1 = iVar1;
					return;
				}
				iVar1++;
			}
			uParam0->f_103.f_1 = 0;
		}
	}
}

int func_268(int iParam0, int iParam1)//Position - 0x194C2
{
	int iVar0;
	
	iVar0 = GlobalFunc_286(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return GlobalFunc_6872(iVar0, iParam1, 0);
}

void func_269(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x194E5
{
	struct<10> Var0;
	
	func_393(ENTITY::GET_ENTITY_MODEL(iParam1), iParam2, iParam3, &Var0);
	switch (Var0.f_9)
	{
		case 0:
			Stack.Push(iParam1);
			Stack.Push(2);
			Stack.Push(Var0.f_8);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(uParam0->f_602);
			Stack.Push(uParam0->f_603);
			Stack.Push(-1);
			Stack.Push(0);
			Call_Loc(uParam0->f_448);
			break;
		
		case 1:
			func_270(Var0.f_5, &(uParam0->f_605));
			func_403(iParam1, Var0.f_5, Var0.f_6, uParam0->f_602, uParam0->f_603, uParam0->f_605, uParam0->f_607, 1);
			break;
		
		case 2:
			func_270(Var0.f_5, &(uParam0->f_605));
			func_403(iParam1, Var0.f_5, Var0.f_6, uParam0->f_602, uParam0->f_603, uParam0->f_605, uParam0->f_607, 1);
			break;
	}
	func_282(iParam1, iParam2);
}

void func_270(int iParam0, var uParam1)//Position - 0x195A9
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 10:
			if (*uParam1 != 1)
			{
				*uParam1 = 1;
			}
			break;
		
		case 5:
		case 8:
			if (*uParam1 != 2)
			{
				*uParam1 = 2;
			}
			break;
	}
}


void func_272(int iParam0, int iParam1, int iParam2)//Position - 0x19600
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_68104;
	if (iParam2 != -1)
	{
		iVar0 = iParam2;
	}
	if (func_148(iParam0, iParam1, &iVar2, &iVar1))
	{
		iVar3 = GlobalFunc_6872(iVar2, iVar0, 0);
		MISC::SET_BIT(&iVar3, iVar1);
		GlobalFunc_6720(iVar2, iVar3, iVar0, 1);
	}
}

int func_273(int iParam0)//Position - 0x19645
{
	switch (iParam0)
	{
		case 0:
			return 13;
			break;
		
		case 1:
			return 14;
			break;
		
		case 2:
			return 15;
			break;
	}
	return -1;
}


int func_275(int iParam0, int iParam1)//Position - 0x196E4
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 5:
				return 1;
				break;
			
			case 6:
				return 1;
				break;
			
			case 7:
				return 1;
				break;
			
			case 8:
				return 1;
				break;
			
			case 9:
				return 1;
				break;
			
			case 10:
				return 1;
				break;
			
			case 11:
				return 1;
				break;
			
			case 12:
				return 1;
				break;
			
			case 13:
				return 0;
				break;
			
			case 14:
				return 1;
				break;
			
			case 15:
				return 1;
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 5:
				return 1;
				break;
			
			case 6:
				return 1;
				break;
			
			case 7:
				return 0;
				break;
			
			case 8:
				return 1;
				break;
			
			case 9:
				return 0;
				break;
			
			case 10:
				return 1;
				break;
			
			case 11:
				return 1;
				break;
			
			case 12:
				return 1;
				break;
			
			case 13:
				return 1;
				break;
			
			case 14:
				return 1;
				break;
			
			case 15:
				return 1;
				break;
			}
	}
	return 0;
}

int func_276(int iParam0)//Position - 0x19830
{
	switch (iParam0)
	{
		case 0:
			return 6;
			break;
		
		case 1:
			return 7;
			break;
		
		case 2:
			return 8;
			break;
		
		case 3:
			return 9;
			break;
		
		case 4:
			return 10;
			break;
		
		case 5:
			return 11;
			break;
		
		case 6:
			return 12;
			break;
	}
	return -1;
}






void func_282(int iParam0, int iParam1)//Position - 0x19CA9
{
	bool bVar0;
	int iVar1;
	
	if (iParam0 != PLAYER::PLAYER_PED_ID())
	{
		bVar0 = false;
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			if (iParam1 == 9)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) != 15)
				{
					iLocal_103 = func_81(iParam0, 11);
					func_860(iParam0, 11, GlobalFunc_5013(ENTITY::GET_ENTITY_MODEL(iParam0), 11, -1), 0, -1, 0, 0, 0, -1, -1, -1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, 15, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3) != 15)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 15, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) != 15)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, 0, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, 0);
					bVar0 = true;
				}
				if (bVar0)
				{
					func_299(iParam0, 0, 0);
					GlobalFunc_9907(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
				}
			}
			else
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 11))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 11), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 11), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 3))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 3), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 3), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 8))
				{
					iVar1 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 8);
					if (iVar1 == GlobalFunc_279(iParam0, 1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, GlobalFunc_279(PLAYER::PLAYER_PED_ID(), 0), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 8), 0);
						bVar0 = true;
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 8), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 8), 0);
						bVar0 = true;
					}
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 9), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 10))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 10), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 10), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 5), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 7))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 7), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 7), 0);
					bVar0 = true;
				}
				if (bVar0)
				{
					if (iLocal_103 != -99)
					{
						func_860(iParam0, 11, iLocal_103, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iLocal_103 = -99;
					func_299(iParam0, 0, 0);
				}
			}
		}
	}
}

















void func_299(int iParam0, bool bParam1, bool bParam2)//Position - 0x1DD25
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_68104;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar14 = GlobalFunc_303(iParam0);
		bVar15 = func_305(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = func_302(iParam0);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (GlobalFunc_8496(iVar18, iVar0))
			{
				if (GlobalFunc_5123(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9094(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8496(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar20 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar14, iVar19, &Var21))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var21))
				{
					iVar36 = (129 + iVar19);
					if (GlobalFunc_8496(iVar36, iVar0))
					{
						if (GlobalFunc_9094(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var21.f_2, Var21.f_3);
							GlobalFunc_294(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}



int func_302(int iParam0)//Position - 0x1E16D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6872(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar2 = func_904(iParam0, 11, -1);
				if (iVar2 >= 256)
				{
					iVar3 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar2, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_M_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6872(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar4 = func_904(iParam0, 11, -1);
				if (iVar4 >= 256)
				{
					iVar5 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar4, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_F_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}



int func_305(int iParam0)//Position - 0x1E33C
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
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar2 = func_904(iParam0, 11, -1);
						if (iVar2 >= 237)
						{
							iVar3 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar2, 11, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar4 = func_904(iParam0, 8, -1);
						if (iVar4 >= 241)
						{
							iVar5 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar4, 8, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
						case 7:
						case 4:
						case 9:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar6 = func_904(iParam0, 11, -1);
						if (iVar6 >= 256)
						{
							iVar7 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar6, 11, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_904(iParam0, 8, -1);
						if (iVar8 >= 136)
						{
							iVar9 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar8, 8, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
		}
		if (GlobalFunc_302(iParam0))
		{
			return 1;
		}
	}
	return 0;
}



void func_308(var uParam0)//Position - 0x1ED67
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	uParam0->f_103.f_15 = 0;
	uParam0->f_103.f_23 = 0;
	uParam0->f_103.f_22 = 0;
	uParam0->f_558 = 1;
	switch (uParam0->f_494)
	{
		case 5:
			uParam0->f_103.f_31 = 5;
			uParam0->f_103.f_5 = 0;
			break;
		
		case 6:
		case 7:
		case 9:
		case 8:
		case 10:
		case 11:
		case 12:
			uParam0->f_103.f_1 = func_309(uParam0->f_494);
			uParam0->f_494 = 5;
			break;
		
		case 14:
		case 13:
		case 15:
			uParam0->f_103.f_1 = func_309(uParam0->f_494);
			uParam0->f_494 = 12;
			break;
	}
}

int func_309(int iParam0)//Position - 0x1EE26
{
	switch (iParam0)
	{
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 2;
			break;
		
		case 9:
			return 3;
			break;
		
		case 10:
			return 4;
			break;
		
		case 11:
			return 5;
			break;
		
		case 12:
			return 6;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 2;
			break;
	}
	return -1;
}

void func_310(int iParam0, var uParam1)//Position - 0x1EEC5
{
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
	}
	else if (iParam0 == Global_2542603)
	{
	}
	Stack.Push(iParam0);
	Stack.Push(2);
	Stack.Push(GlobalFunc_6732(385, -1, -1));
	Stack.Push(0);
	Stack.Push(-1);
	Stack.Push(0);
	Stack.Push(0);
	Stack.Push(0);
	Stack.Push(-1);
	Stack.Push(-1);
	Stack.Push(-1);
	Stack.Push(0);
	Call_Loc(uParam1->f_448);
	func_311(&iParam0, -1, 0);
}

void func_311(int iParam0, int iParam1, bool bParam2)//Position - 0x1EF09
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = GlobalFunc_292(iVar1);
		if (!bParam2)
		{
			fVar3 = GlobalFunc_6734(iVar2, iParam1);
		}
		else
		{
			fVar3 = GlobalFunc_6733(iVar2, iParam1);
		}
		PED::_SET_PED_FACE_FEATURE(*iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = GlobalFunc_291(iVar4);
		iVar6 = GlobalFunc_290(iVar5);
		iVar7 = GlobalFunc_289(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				iVar10 = GlobalFunc_6732(iVar6, iParam1, -1);
				fVar11 = GlobalFunc_6734(iVar7, iParam1);
			}
			else
			{
				iVar10 = GlobalFunc_5006(iVar6, iParam1);
				fVar11 = GlobalFunc_6733(iVar7, iParam1);
			}
			PED::SET_PED_HEAD_OVERLAY(*iParam0, iVar5, iVar10, fVar11);
			iVar8 = GlobalFunc_287(iVar5);
			iVar9 = GlobalFunc_286(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = GlobalFunc_6872(iVar8, iParam1, 0);
					iVar14 = GlobalFunc_6872(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = GlobalFunc_6731(iVar8, iParam1);
					iVar14 = GlobalFunc_6731(iVar9, iParam1);
				}
				GlobalFunc_285(iVar13, &iVar12, &iVar15);
				PED::_SET_PED_HEAD_OVERLAY_COLOR(*iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	GlobalFunc_7649(iParam0, iParam1, bParam2);
}








void func_319(var uParam0, int iParam1)//Position - 0x1F4A0
{
	int iVar0;
	
	iVar0 = 0;
	GlobalFunc_5799(&(uParam0->f_218), 300);
	if ((uParam0->f_103.f_1 != -1 && uParam0->f_462) && !uParam0->f_461)
	{
		func_320(uParam0->f_103.f_1);
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_103.f_15 = 0;
		GlobalFunc_6900(0, 0, 0, 1);
		if (GlobalFunc_1391())
		{
			if (Global_2543381 == uParam0->f_103.f_1)
			{
				iVar0 = 1;
			}
			else
			{
				uParam0->f_103.f_1 = Global_2543381;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_403(iParam1, 4, uParam0->f_103.f_1, uParam0->f_602, 0, 0, 1f, 1);
				if ((uParam0->f_103.f_1 - 1) == -1 || (uParam0->f_103.f_1 - 1) > 15)
				{
					func_403(iParam1, 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 1f, 1);
				}
				else
				{
					func_403(iParam1, 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 0f, 1);
				}
				if (uParam0->f_558)
				{
					func_467(uParam0, iParam1);
					uParam0->f_558 = 0;
				}
				else
				{
					GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
				}
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || GlobalFunc_2495(uParam0->f_218.f_8, 0, 0)) || (uParam0->f_218.f_1 < -100 && uParam0->f_218.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_218.f_8))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_218.f_8 = 0;
			uParam0->f_218.f_4 = 0;
			uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_103.f_1 > 0)
			{
				uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				while (!func_169(uParam0->f_103.f_1))
				{
					uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				}
			}
			else
			{
				uParam0->f_103.f_1 = (uParam0->f_580 - 1);
				while (!func_169(uParam0->f_103.f_1))
				{
					uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				}
			}
			if (uParam0->f_462)
			{
				uParam0->f_558 = 1;
				uParam0->f_562 = 1;
				uParam0->f_563 = GlobalFunc_2479();
			}
			uParam0->f_461 = !func_168(uParam0->f_103.f_1);
			uParam0->f_462 = (!uParam0->f_461 && !func_165(uParam0->f_103.f_1));
			uParam0->f_463 = 0;
			if (uParam0->f_103.f_1 != -1)
			{
				func_403(iParam1, 4, (uParam0->f_103.f_1 - 1), uParam0->f_602, 0, 0, 1f, 1);
				if ((uParam0->f_103.f_1 - 1) == -1 || (uParam0->f_103.f_1 - 1) > 15)
				{
					func_403(iParam1, 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 1f, 1);
				}
				else
				{
					func_403(iParam1, 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 0f, 1);
				}
				if (uParam0->f_558)
				{
					func_467(uParam0, iParam1);
					uParam0->f_558 = 0;
				}
				else
				{
					GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
				}
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || GlobalFunc_2494(uParam0->f_218.f_9, 0, 0)) || (uParam0->f_218.f_1 > 100 && uParam0->f_218.f_9)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_218.f_9))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_218.f_9 = 0;
			uParam0->f_218.f_4 = 0;
			uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_103.f_1 < (uParam0->f_580 - 1))
			{
				uParam0->f_103.f_1++;
				while (!func_169(uParam0->f_103.f_1))
				{
					uParam0->f_103.f_1++;
				}
				if (!func_169(uParam0->f_103.f_1) || uParam0->f_103.f_1 >= uParam0->f_580)
				{
					uParam0->f_103.f_1 = 0;
					while (!func_169(uParam0->f_103.f_1))
					{
						uParam0->f_103.f_1++;
					}
				}
			}
			else
			{
				uParam0->f_103.f_1 = 0;
				while (!func_169(uParam0->f_103.f_1))
				{
					uParam0->f_103.f_1++;
				}
			}
			if (uParam0->f_462)
			{
				uParam0->f_558 = 1;
				uParam0->f_562 = 1;
				uParam0->f_563 = GlobalFunc_2479();
			}
			uParam0->f_461 = !func_168(uParam0->f_103.f_1);
			uParam0->f_462 = (!uParam0->f_461 && !func_165(uParam0->f_103.f_1));
			uParam0->f_463 = 0;
			if (uParam0->f_103.f_1 != -1)
			{
				func_403(iParam1, 4, (uParam0->f_103.f_1 - 1), uParam0->f_602, 0, 0, 1f, 1);
				if ((uParam0->f_103.f_1 - 1) == -1 || (uParam0->f_103.f_1 - 1) > 15)
				{
					func_403(iParam1, 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 1f, 1);
				}
				else
				{
					func_403(iParam1, 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 0f, 1);
				}
				if (uParam0->f_558)
				{
					func_467(uParam0, iParam1);
					uParam0->f_558 = 0;
				}
				else
				{
					GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
				}
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar0 == 1)
		{
			iVar0 = 0;
			iLocal_94 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			if (uParam0->f_103.f_1 == uParam0->f_579)
			{
				GlobalFunc_1353("HAIR_CUR_3", 4000, 0);
				uParam0->f_578 = uParam0->f_103.f_1;
			}
			else if (!func_168(uParam0->f_103.f_1))
			{
				GlobalFunc_1353("HAIR_LOCK", 4000, 0);
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
			{
				GlobalFunc_5069(GlobalFunc_5422());
				GlobalFunc_1353("CSHOP_FAIL", 4000, 0);
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
				{
					uParam0->f_103.f_25 = 1;
					uParam0->f_103.f_26 = 0;
				}
				func_403(iParam1, 4, (uParam0->f_579 - 1), uParam0->f_602, 0, 0, 1f, 1);
				if ((uParam0->f_579 - 1) == -1 || (uParam0->f_579 - 1) > 15)
				{
					func_403(iParam1, 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 1f, 1);
				}
				else
				{
					func_403(iParam1, 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 0f, 1);
				}
				uParam0->f_103.f_15 = 1;
				uParam0->f_578 = uParam0->f_103.f_1;
			}
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || GlobalFunc_2041())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_403(iParam1, 4, (uParam0->f_578 - 1), uParam0->f_602, 0, 0, 1f, 1);
			if ((uParam0->f_578 - 1) == -1 || (uParam0->f_578 - 1) > 15)
			{
				func_403(iParam1, 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 1f, 1);
			}
			else
			{
				func_403(iParam1, 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 0f, 1);
			}
			uParam0->f_103.f_15 = 0;
			uParam0->f_103.f_23 = 0;
			uParam0->f_103.f_22 = 0;
			if (func_477())
			{
				uParam0->f_103.f_1 = 2;
			}
			else
			{
				uParam0->f_103.f_1 = 1;
			}
			uParam0->f_494 = 0;
			uParam0->f_558 = 1;
		}
	}
}

void func_320(int iParam0)//Position - 0x1FBC9
{
	GlobalFunc_6355(func_196(iParam0));
}


void func_322(var uParam0, int iParam1)//Position - 0x1FC18
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	
	iVar0 = 0;
	GlobalFunc_5799(&(uParam0->f_218), 300);
	if ((uParam0->f_103.f_1 != -1 && uParam0->f_462) && !uParam0->f_461)
	{
		func_363(func_404(uParam0->f_103.f_1));
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_103.f_15 = 0;
		GlobalFunc_6900(0, 0, 0, 1);
		if (GlobalFunc_1391())
		{
			if (Global_2543381 == uParam0->f_103.f_1)
			{
				iVar0 = 1;
			}
			else
			{
				uParam0->f_103.f_1 = Global_2543381;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam0->f_461 = !func_176(uParam0->f_103.f_1);
				uParam0->f_462 = (!uParam0->f_461 && !func_175(uParam0->f_103.f_1));
				uParam0->f_463 = 0;
				func_403(iParam1, 1, func_404(uParam0->f_103.f_1), uParam0->f_602, 0, 0, uParam0->f_257, 1);
				func_326(uParam0);
				if (uParam0->f_558)
				{
					func_467(uParam0, iParam1);
					uParam0->f_558 = 0;
				}
				else
				{
					GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
				}
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || GlobalFunc_2495(uParam0->f_218.f_8, 0, 0)) || (uParam0->f_218.f_1 < -100 && uParam0->f_218.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_218.f_8))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_218.f_8 = 0;
			uParam0->f_218.f_4 = 0;
			uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_103.f_1 > 0)
			{
				uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				while (func_325(func_404(uParam0->f_103.f_1)) && !func_324(func_404(uParam0->f_103.f_1)))
				{
					uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
				}
			}
			else
			{
				uParam0->f_103.f_1 = (func_177() - 1);
			}
			if (uParam0->f_462)
			{
				uParam0->f_558 = 1;
				uParam0->f_562 = 1;
				uParam0->f_563 = GlobalFunc_2479();
			}
			uParam0->f_461 = !func_176(func_404(uParam0->f_103.f_1));
			uParam0->f_462 = (!uParam0->f_461 && !func_175(func_404(uParam0->f_103.f_1)));
			StringCopy(&Var1, "HAIR_BEARD", 16);
			StringIntConCat(&Var1, func_404(uParam0->f_103.f_1), 16);
			uParam0->f_463 = func_323(&Var1, func_404(uParam0->f_103.f_1));
			uParam0->f_534 = { Var1 };
			func_403(iParam1, 1, (func_404(uParam0->f_103.f_1) - 1), uParam0->f_602, 0, 0, uParam0->f_257, 1);
			func_326(uParam0);
			if (uParam0->f_558)
			{
				func_467(uParam0, iParam1);
				uParam0->f_558 = 0;
			}
			else
			{
				GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || GlobalFunc_2494(uParam0->f_218.f_9, 0, 0)) || (uParam0->f_218.f_1 > 100 && uParam0->f_218.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_218.f_9))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_218.f_9 = 0;
			uParam0->f_218.f_4 = 0;
			uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_103.f_1 < (func_177() - 1))
			{
				uParam0->f_103.f_1++;
				while (func_325(func_404(uParam0->f_103.f_1)) && !func_324(func_404(uParam0->f_103.f_1)))
				{
					uParam0->f_103.f_1++;
				}
			}
			else
			{
				uParam0->f_103.f_1 = 0;
			}
			if (uParam0->f_462)
			{
				uParam0->f_558 = 1;
				uParam0->f_562 = 1;
				uParam0->f_563 = GlobalFunc_2479();
			}
			uParam0->f_461 = !func_176(func_404(uParam0->f_103.f_1));
			uParam0->f_462 = (!uParam0->f_461 && !func_175(func_404(uParam0->f_103.f_1)));
			StringCopy(&Var5, "HAIR_BEARD", 16);
			StringIntConCat(&Var5, func_404(uParam0->f_103.f_1), 16);
			uParam0->f_463 = func_323(&Var5, func_404(uParam0->f_103.f_1));
			uParam0->f_534 = { Var5 };
			func_403(iParam1, 1, (func_404(uParam0->f_103.f_1) - 1), uParam0->f_602, 0, 0, uParam0->f_257, 1);
			func_326(uParam0);
			if (uParam0->f_558)
			{
				func_467(uParam0, iParam1);
				uParam0->f_558 = 0;
			}
			else
			{
				GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar0 == 1)
		{
			iVar0 = 0;
			iLocal_94 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			if (func_404(uParam0->f_103.f_1) == uParam0->f_255)
			{
				GlobalFunc_1353("HAIR_CUR_1", 4000, 0);
				uParam0->f_256 = func_404(uParam0->f_103.f_1);
			}
			else if (!func_176(func_404(uParam0->f_103.f_1)))
			{
				GlobalFunc_1353("HAIR_LOCK", 4000, 0);
			}
			else if (!GlobalFunc_9187(uParam0->f_103.f_2))
			{
				GlobalFunc_1353("HAIR_AFF_1", 4000, 0);
				GlobalFunc_2478(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(*uParam0)));
				GlobalFunc_7677(0, 10, 3);
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979()) && !func_211(78225582, func_219(uParam0->f_494), GlobalFunc_7505(uParam0->f_494, uParam0->f_534, 0), 478352891, 1, uParam0->f_103.f_2, 1, 4, GlobalFunc_4400(uParam0->f_494), 3))
			{
				GlobalFunc_5069(GlobalFunc_5422());
				GlobalFunc_1353("CSHOP_FAIL", 4000, 0);
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
				{
					uParam0->f_103.f_25 = 1;
					uParam0->f_103.f_26 = 0;
				}
				func_403(iParam1, 1, (uParam0->f_255 - 1), uParam0->f_602, 0, 0, uParam0->f_257, 1);
				uParam0->f_103.f_15 = 1;
				uParam0->f_256 = func_404(uParam0->f_103.f_1);
			}
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || GlobalFunc_2041())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_403(iParam1, 1, (uParam0->f_256 - 1), uParam0->f_602, 0, 0, uParam0->f_257, 1);
			}
			else
			{
				func_403(iParam1, 1, uParam0->f_255 + 1, uParam0->f_602, 0, 0, uParam0->f_257, 1);
			}
			uParam0->f_103.f_15 = 0;
			uParam0->f_103.f_23 = 0;
			uParam0->f_103.f_22 = 0;
			uParam0->f_103.f_1 = 1;
			uParam0->f_494 = 0;
			uParam0->f_558 = 1;
		}
	}
}

int func_323(char* sParam0, int iParam1)//Position - 0x2029B
{
	if (iParam1 >= 19 + 1)
	{
		if (iParam1 >= 27 && iParam1 <= 36)
		{
			StringCopy(sParam0, "BRD_HP_", 16);
			StringIntConCat(sParam0, (iParam1 - 27), 16);
			return 1;
		}
	}
	return 0;
}

int func_324(int iParam0)//Position - 0x202D4
{
	if (iParam0 >= 19 + 1)
	{
		if (iParam0 >= 27 && iParam0 <= 36)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_325(int iParam0)//Position - 0x20300
{
	int iVar0;
	
	iVar0 = func_198(iParam0);
	if (iVar0 == 79)
	{
		return 1;
	}
	if (iParam0 >= 19 + 1)
	{
		return 1;
	}
	return 0;
}

void func_326(var uParam0)//Position - 0x20329
{
	struct<4> Var0;
	
	if (GlobalFunc_5785(1))
	{
		StringCopy(&Var0, "HAIR_BEARD", 16);
		StringIntConCat(&Var0, func_404(uParam0->f_103.f_1), 16);
		func_323(&Var0, func_404(uParam0->f_103.f_1));
		uParam0->f_103.f_2 = func_327(uParam0, func_404(uParam0->f_103.f_1), &Var0, 1);
		GlobalFunc_2475(Var0, uParam0->f_103.f_2, 0, 1, 0);
	}
}

int func_327(var uParam0, int iParam1, char* sParam2, bool bParam3)//Position - 0x2038A
{
	int iVar0;
	
	iVar0 = 5;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam1)
		{
			case 0:
				iVar0 = 500;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2614));
				break;
			
			case 1:
				iVar0 = 150;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2615));
				break;
			
			case 2:
				iVar0 = 430;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2616));
				break;
			
			case 3:
				iVar0 = 325;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2617));
				break;
			
			case 4:
				iVar0 = 465;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2618));
				break;
			
			case 5:
				iVar0 = 500;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2619));
				break;
			
			case 6:
				iVar0 = 350;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2620));
				break;
			
			case 7:
				iVar0 = 600;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2621));
				break;
			
			case 8:
				iVar0 = 220;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2622));
				break;
			
			case 9:
				iVar0 = 1425;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2623));
				break;
			
			case 10:
				iVar0 = 1700;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2624));
				break;
			
			case 11:
				iVar0 = 290;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2625));
				break;
			
			case 12:
				iVar0 = 185;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2626));
				break;
			
			case 13:
				iVar0 = 255;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2627));
				break;
			
			case 14:
				iVar0 = 1150;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2628));
				break;
			
			case 15:
				iVar0 = 1975;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2629));
				break;
			
			case 16:
				iVar0 = 875;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2630));
				break;
			
			case 17:
				iVar0 = 2000;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2631));
				break;
			
			case 18:
				iVar0 = 725;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2632));
				break;
			
			case 19:
				iVar0 = 395;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2633));
				break;
			
			case 20:
				iVar0 = 395;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2633));
				break;
			
			case 27:
				iVar0 = Global_262145.f_4295;
				break;
			
			case 28:
				iVar0 = Global_262145.f_4296;
				break;
			
			case 29:
				iVar0 = Global_262145.f_4297;
				break;
			
			case 30:
				iVar0 = Global_262145.f_4298;
				break;
			
			case 31:
				iVar0 = Global_262145.f_4299;
				break;
			
			case 32:
				iVar0 = Global_262145.f_4300;
				break;
			
			case 33:
				iVar0 = Global_262145.f_4301;
				break;
			
			case 36:
				iVar0 = Global_262145.f_4302;
				break;
			
			case 34:
				iVar0 = Global_262145.f_4303;
				break;
			
			case 35:
				iVar0 = Global_262145.f_4304;
				break;
			}
	}
	if (bParam3)
	{
		func_328(uParam0, &iVar0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
	{
		iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(GlobalFunc_7505(uParam0->f_494, *sParam2, 0), 1886717078, 1);
	}
	return iVar0;
}

void func_328(var uParam0, int iParam1)//Position - 0x20756
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_10830())
		{
			iVar0 = (iVar0 + Global_262145.f_104);
		}
	}
	if (GlobalFunc_8579(*uParam0, GlobalFunc_8315()))
	{
		iVar0 += 100;
	}
	iVar0 = GlobalFunc_254(iVar0, 0, 100);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f))));
}



































void func_363(int iParam0)//Position - 0x212C4
{
	GlobalFunc_6355(func_198(iParam0));
}

void func_364(var uParam0, int iParam1)//Position - 0x212D6
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	GlobalFunc_5799(&(uParam0->f_218), 300);
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_103.f_15 = 0;
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (MISC::IS_PC_VERSION())
		{
			GlobalFunc_6900(0, 0, 0, 1);
			if (GlobalFunc_1391())
			{
				if (Global_2543381 == uParam0->f_103.f_1)
				{
					iVar1 = 1;
				}
				else
				{
					uParam0->f_103.f_1 = Global_2543381;
					if (GlobalFunc_6450(&Global_2541867, 0, uParam0->f_103.f_1))
					{
						if (uParam0->f_462)
						{
							uParam0->f_558 = 1;
							uParam0->f_562 = 1;
							uParam0->f_563 = GlobalFunc_2479();
						}
						Stack.Push(iVar0);
						Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
						Stack.Push(Global_2541867[uParam0->f_103.f_1]);
						Call_Loc(uParam0->f_449);
						uParam0->f_461 = !StackVal;
						Stack.Push(!uParam0->f_461);
						Stack.Push(iVar0);
						Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
						Stack.Push(Global_2541867[uParam0->f_103.f_1]);
						Call_Loc(uParam0->f_452);
						uParam0->f_462 = (StackVal && StackVal);
						uParam0->f_463 = MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6);
						uParam0->f_534 = { Global_68106[1 /*14*/].f_8 };
						Stack.Push(iParam1);
						Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
						Stack.Push(Global_2541867[uParam0->f_103.f_1]);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(0);
						Call_Loc(uParam0->f_448);
						func_378(uParam0);
						if (uParam0->f_558)
						{
							func_370(uParam0, iParam1, uParam0->f_462);
							uParam0->f_558 = 0;
						}
						else
						{
							GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
						}
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				}
			}
		}
		if ((((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || (uParam0->f_218.f_1 < -100 && uParam0->f_218.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_218.f_8)) || GlobalFunc_2495(uParam0->f_218.f_8, 0, 0)) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_218.f_8 = 0;
			uParam0->f_218.f_4 = 0;
			uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (GlobalFunc_5829(&Global_2541867, 0, uParam0->f_103.f_1, &(uParam0->f_103.f_1), 1))
			{
				if (uParam0->f_462)
				{
					uParam0->f_558 = 1;
					uParam0->f_562 = 1;
					uParam0->f_563 = GlobalFunc_2479();
				}
				Stack.Push(iVar0);
				Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
				Stack.Push(Global_2541867[uParam0->f_103.f_1]);
				Call_Loc(uParam0->f_449);
				uParam0->f_461 = !StackVal;
				Stack.Push(!uParam0->f_461);
				Stack.Push(iVar0);
				Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
				Stack.Push(Global_2541867[uParam0->f_103.f_1]);
				Call_Loc(uParam0->f_452);
				uParam0->f_462 = (StackVal && StackVal);
				uParam0->f_463 = MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6);
				uParam0->f_534 = { Global_68106[1 /*14*/].f_8 };
				Stack.Push(iParam1);
				Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
				Stack.Push(Global_2541867[uParam0->f_103.f_1]);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_448);
				func_378(uParam0);
				if (uParam0->f_558)
				{
					func_370(uParam0, iParam1, uParam0->f_462);
					uParam0->f_558 = 0;
				}
				else
				{
					GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
				}
			}
		}
		else if ((((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || (uParam0->f_218.f_1 > 100 && uParam0->f_218.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_218.f_9)) || GlobalFunc_2494(uParam0->f_218.f_9, 0, 0)) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_218.f_9 = 0;
			uParam0->f_218.f_4 = 0;
			uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (GlobalFunc_5830(&Global_2541867, 0, uParam0->f_103.f_1, &(uParam0->f_103.f_1), 1))
			{
				if (uParam0->f_462)
				{
					uParam0->f_558 = 1;
					uParam0->f_562 = 1;
					uParam0->f_563 = GlobalFunc_2479();
				}
				Stack.Push(iVar0);
				Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
				Stack.Push(Global_2541867[uParam0->f_103.f_1]);
				Call_Loc(uParam0->f_449);
				uParam0->f_461 = !StackVal;
				Stack.Push(!uParam0->f_461);
				Stack.Push(iVar0);
				Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
				Stack.Push(Global_2541867[uParam0->f_103.f_1]);
				Call_Loc(uParam0->f_452);
				uParam0->f_462 = (StackVal && StackVal);
				uParam0->f_463 = MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6);
				uParam0->f_534 = { Global_68106[1 /*14*/].f_8 };
				Stack.Push(iParam1);
				Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
				Stack.Push(Global_2541867[uParam0->f_103.f_1]);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_448);
				func_378(uParam0);
				if (uParam0->f_558)
				{
					func_370(uParam0, iParam1, uParam0->f_462);
					uParam0->f_558 = 0;
				}
				else
				{
					GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
				}
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar1 == 1)
		{
			iVar1 = 0;
			iLocal_94 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			Stack.Push(iVar0);
			Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
			Stack.Push(Global_2541867[uParam0->f_103.f_1]);
			Call_Loc(uParam0->f_449);
			if (!StackVal)
			{
				GlobalFunc_1353("HAIR_LOCK", 4000, 0);
			}
			else if (func_365(uParam0, uParam0->f_103.f_1))
			{
				if (uParam0->f_463 && !MISC::IS_STRING_NULL_OR_EMPTY(GlobalFunc_2591(&(uParam0->f_534), 0)))
				{
					GlobalFunc_1353("HAIR_CUR_2_DLC", 4000, 0);
					GlobalFunc_1330(GlobalFunc_2591(&(uParam0->f_534), 0));
				}
				else
				{
					GlobalFunc_1353("HAIR_CUR_2", 4000, 0);
				}
			}
			else if (!GlobalFunc_9187(uParam0->f_103.f_2))
			{
				GlobalFunc_1353("HAIR_AFF_2", 4000, 0);
				GlobalFunc_2478(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(*uParam0)));
				GlobalFunc_7677(0, 10, 3);
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979()) && !func_211(78225582, func_219(uParam0->f_494), GlobalFunc_7505(uParam0->f_494, uParam0->f_534, 0), 478352891, 1, uParam0->f_103.f_2, 1, 4, GlobalFunc_4400(uParam0->f_494), 3))
			{
				GlobalFunc_5069(GlobalFunc_5422());
				GlobalFunc_1353("CSHOP_FAIL", 4000, 0);
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
				{
					uParam0->f_103.f_25 = 1;
					uParam0->f_103.f_26 = 0;
				}
				if (uParam0->f_494 == 1)
				{
					Stack.Push(iParam1);
					Stack.Push(2);
					Stack.Push(uParam0->f_254);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_448);
					uParam0->f_103.f_15 = 1;
				}
				else if (uParam0->f_494 == 2)
				{
					Stack.Push(iParam1);
					Stack.Push(1);
					Stack.Push(uParam0->f_255);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_448);
					uParam0->f_103.f_15 = 1;
				}
			}
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || GlobalFunc_2041())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_103.f_15 = 0;
			uParam0->f_103.f_23 = 0;
			uParam0->f_103.f_22 = 0;
			if (func_477() || func_476())
			{
				if (uParam0->f_494 == 1)
				{
					Stack.Push(iParam1);
					Stack.Push(2);
					Stack.Push(uParam0->f_254);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_448);
				}
				else if (uParam0->f_494 == 2)
				{
					Stack.Push(iParam1);
					Stack.Push(1);
					Stack.Push(uParam0->f_255);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_448);
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_494 = 4;
					uParam0->f_562 = 1;
					func_178(&(uParam0->f_454), &Global_2541867, 1, GlobalFunc_4405(uParam0), -1, &(uParam0->f_683), &(uParam0->f_686));
				}
				else
				{
					uParam0->f_494 = 0;
				}
				uParam0->f_103.f_1 = 0;
				uParam0->f_558 = 1;
			}
			else
			{
				uParam0->f_103.f_31 = 6;
				uParam0->f_103.f_5 = 0;
			}
		}
	}
}

int func_365(var uParam0, int iParam1)//Position - 0x21A62
{
	if (uParam0->f_494 == 1 || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_2541867[iParam1] == uParam0->f_254)
		{
			return 1;
		}
	}
	else if (Global_2541867[iParam1] == uParam0->f_255)
	{
		return 1;
	}
	return 0;
}





void func_370(var uParam0, int iParam1, int iParam2)//Position - 0x21CE0
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	struct<14> Var10;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	func_267(uParam0, !uParam0->f_562);
	GlobalFunc_262(0);
	GlobalFunc_7023(*uParam0);
	GlobalFunc_1317(1, 1, 0, 0, 0);
	GlobalFunc_1316(1, 2, 1, 1, 1);
	if (uParam0->f_494 == 2)
	{
		GlobalFunc_1318("HAIR_TITLE_1");
	}
	else
	{
		GlobalFunc_1318("HAIR_TITLE_2");
	}
	uParam0->f_461 = 0;
	uParam0->f_462 = 0;
	uParam0->f_463 = 0;
	uParam0->f_469 = 0;
	if (Global_2541867.f_222 == 0)
	{
		GlobalFunc_7830(0, "HAIR_NONE", 0, 1, 0, 0);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < Global_2541867.f_222)
		{
			iVar8 = Global_2541867[iVar5];
			uVar9 = Global_2541867.f_111[iVar5];
			Stack.Push(iVar0);
			Stack.Push(uVar9);
			Stack.Push(iVar8);
			Call_Loc(uParam0->f_453);
			Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			if (GlobalFunc_7163(Global_2541867.f_223[iVar5], &Var1))
			{
				Var10.f_8 = { Var1 };
			}
			if (uParam0->f_103.f_1 == iVar5)
			{
				uParam0->f_534 = { Var10.f_8 };
			}
			if (!MISC::IS_BIT_SET(Var10.f_6, 1))
			{
				GlobalFunc_7830(iVar5, &(Var10.f_8), 0, 1, 0, 0);
				GlobalFunc_7830(iVar5, "", 1, 1, 0, 0);
				GlobalFunc_8447(15, 0);
				if (iVar5 == uParam0->f_103.f_1)
				{
					uParam0->f_461 = 1;
				}
			}
			else if (func_365(uParam0, iVar5))
			{
				GlobalFunc_7830(iVar5, &(Var10.f_8), 0, 1, 0, 0);
				GlobalFunc_7830(iVar5, "", 1, 1, 0, 0);
				GlobalFunc_8447(14, 0);
				iVar6 = iVar5;
			}
			else
			{
				if (MISC::IS_BIT_SET(Var10.f_6, 4) || (iParam2 && iVar5 == uParam0->f_103.f_1))
				{
					GlobalFunc_7830(iVar5, &(Var10.f_8), 1, 1, 0, 0);
					GlobalFunc_8447(2, 0);
					if (iVar5 == uParam0->f_103.f_1)
					{
						uParam0->f_462 = 1;
					}
				}
				else
				{
					GlobalFunc_7830(iVar5, &(Var10.f_8), 0, 1, 0, 0);
				}
				iVar7 = func_372(uParam0, &Var10, iVar0, iVar8, 0);
				if (iVar7 > 0)
				{
					GlobalFunc_7830(iVar5, "ITEM_COST", 1, 1, 0, 0);
					GlobalFunc_8495(iVar7, 0);
				}
				else
				{
					GlobalFunc_7830(iVar5, "ITEM_FREE", 0, 1, 0, 0);
				}
			}
			iVar5++;
		}
	}
	if (uParam0->f_562)
	{
		uParam0->f_562 = 0;
		GlobalFunc_2487(uParam0->f_563);
	}
	else
	{
		uParam0->f_103.f_1 = iVar6;
	}
	GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
	Stack.Push(iParam1);
	Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
	Stack.Push(Global_2541867[uParam0->f_103.f_1]);
	Stack.Push(0);
	Stack.Push(-1);
	Stack.Push(0);
	Stack.Push(0);
	Stack.Push(0);
	Stack.Push(-1);
	Stack.Push(-1);
	Stack.Push(-1);
	Stack.Push(0);
	Call_Loc(uParam0->f_448);
	uParam0->f_463 = MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6);
	func_378(uParam0);
	if (uParam0->f_677)
	{
		GlobalFunc_1354(201, "ITEM_BUY", -1);
		GlobalFunc_1354(202, "ITEM_BACK", -1);
		GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
		if (!func_475(uParam0->f_494))
		{
			GlobalFunc_1354(iLocal_93, "ITEM_ZOOM", -1);
		}
	}
	else
	{
		GlobalFunc_1354(201, "ITEM_BUY", -1);
		GlobalFunc_1354(202, "ITEM_BACK", -1);
		GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
	}
}


int func_372(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x21FCB
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = uParam1->f_7;
		if (uParam0->f_494 == 1)
		{
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_270421.f_5));
		}
		else if (uParam0->f_494 == 2)
		{
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_270421.f_1));
		}
		else if (uParam0->f_494 == 2)
		{
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_270421.f_3));
		}
		switch (MISC::GET_HASH_KEY(&(uParam1->f_8)))
		{
			case 526112963:
				iVar0 = Global_262145.f_5359;
				break;
			
			case -655766568:
				iVar0 = Global_262145.f_5360;
				break;
			
			case -431298918:
				iVar0 = Global_262145.f_5361;
				break;
			
			case 2082181693:
				iVar0 = Global_262145.f_5362;
				break;
			
			case -1982485071:
				iVar0 = Global_262145.f_5363;
				break;
			
			case 239253137:
				iVar0 = Global_262145.f_5364;
				break;
			
			case 1536545078:
				iVar0 = Global_262145.f_5365;
				break;
			
			case 834633098:
				iVar0 = Global_262145.f_5366;
				break;
			
			case -10053415:
				iVar0 = Global_262145.f_5367;
				break;
			
			case -782254908:
				iVar0 = Global_262145.f_5368;
				break;
			
			case 5888009:
				iVar0 = Global_262145.f_5369;
				break;
			
			case 312966308:
				iVar0 = Global_262145.f_5370;
				break;
			
			case -672463060:
				iVar0 = Global_262145.f_5371;
				break;
			
			case -231851086:
				iVar0 = Global_262145.f_5372;
				break;
			
			case -1527144118:
				iVar0 = Global_262145.f_5373;
				break;
			
			case 187822033:
				iVar0 = Global_262145.f_5374;
				break;
			
			case -1722577898:
				iVar0 = Global_262145.f_5375;
				break;
			
			case -184040579:
				iVar0 = Global_262145.f_5376;
				break;
			
			case -529982912:
				iVar0 = Global_262145.f_5377;
				break;
			
			case -425711954:
				iVar0 = Global_262145.f_5378;
				break;
			
			case -2145651656:
				iVar0 = Global_262145.f_5379;
				break;
			
			case 1407032252:
				iVar0 = Global_262145.f_5380;
				break;
			
			case 478784789:
				iVar0 = Global_262145.f_5381;
				break;
			
			case 1849774211:
				iVar0 = Global_262145.f_5382;
				break;
			
			case 992406095:
				iVar0 = Global_262145.f_5383;
				break;
			
			case -14781889:
				iVar0 = Global_262145.f_5384;
				break;
			
			case -2044526518:
				iVar0 = Global_262145.f_5385;
				break;
			
			case -1737906985:
				iVar0 = Global_262145.f_5386;
				break;
			
			case 1701920483:
				iVar0 = Global_262145.f_5387;
				break;
			
			case -1222188463:
				iVar0 = Global_262145.f_5388;
				break;
			
			case 1346719200:
				iVar0 = Global_262145.f_5389;
				break;
			
			case -231468525:
				iVar0 = Global_262145.f_5390;
				break;
			
			case 76461768:
				iVar0 = Global_262145.f_5391;
				break;
			
			case 382786380:
				iVar0 = Global_262145.f_5392;
				break;
			
			case 690257907:
				iVar0 = Global_262145.f_5393;
				break;
			
			case -743251029:
				iVar0 = Global_262145.f_5394;
				break;
			
			case -1459843521:
				iVar0 = Global_262145.f_5395;
				break;
			
			case -283075962:
				iVar0 = Global_262145.f_5396;
				break;
			
			case -997243548:
				iVar0 = Global_262145.f_5397;
				break;
			
			case -1711837131:
				iVar0 = Global_262145.f_5398;
				break;
			
			case 885914480:
				iVar0 = Global_262145.f_5954[0];
				break;
			
			case 1110382134:
				iVar0 = Global_262145.f_5954[1];
				break;
			
			case -2025250711:
				iVar0 = Global_262145.f_5954[2];
				break;
			
			case -1223458819:
				iVar0 = Global_262145.f_5954[3];
				break;
			
			case 1806133542:
				iVar0 = Global_262145.f_5954[4];
				break;
			
			case 119592333:
				iVar0 = Global_262145.f_5954[5];
				break;
			
			case -1585051047:
				iVar0 = Global_262145.f_5954[6];
				break;
			
			case -1278497052:
				iVar0 = Global_262145.f_5954[7];
				break;
			
			case -1109736702:
				iVar0 = Global_262145.f_5954[8];
				break;
			
			case -1316574634:
				iVar0 = Global_262145.f_5954[9];
				break;
			
			case 396231341:
				iVar0 = Global_262145.f_5954[10];
				break;
			
			case 1312059353:
				iVar0 = Global_262145.f_5954[11];
				break;
			
			case 980600918:
				iVar0 = Global_262145.f_5954[12];
				break;
			
			case 2040481470:
				iVar0 = Global_262145.f_5954[13];
				break;
			
			case -1485364627:
				iVar0 = Global_262145.f_5954[14];
				break;
			
			case 785834208:
				iVar0 = Global_262145.f_5954[15];
				break;
			
			case 544621599:
				iVar0 = Global_262145.f_5954[16];
				break;
			
			case 1398581739:
				iVar0 = Global_262145.f_5954[17];
				break;
			
			case 1157565744:
				iVar0 = Global_262145.f_5954[18];
				break;
			
			case 1052836024:
				iVar0 = Global_262145.f_5954[19];
				break;
		}
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_60));
		if (MISC::IS_BIT_SET(uParam1->f_6, 6))
		{
			switch (Global_2621445)
			{
				case joaat("CU_VAL_CLOTHES"):
					iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4936));
					break;
				
				case joaat("CU_INDI_CLOTHES"):
					iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_6130));
					break;
				}
		}
	}
	else if (uParam0->f_494 == 1)
	{
		iVar0 = func_373(uParam0, iParam2, iParam3, 1);
	}
	else if (uParam0->f_494 == 2)
	{
		iVar0 = func_373(uParam0, iParam2, iParam3, 0);
	}
	if (bParam4)
	{
		func_328(uParam0, &iVar0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
	{
		iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(GlobalFunc_7505(uParam0->f_494, uParam1->f_8, 0), 1068386274, 1);
	}
	return iVar0;
}

int func_373(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x22599
{
	int iVar0;
	
	iVar0 = 1;
	if (GlobalFunc_4405(uParam0))
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				if (iParam3 == 1)
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 180;
							break;
						
						case 1:
							iVar0 = 0;
							break;
						
						case 2:
							iVar0 = 200;
							break;
						
						case 3:
							iVar0 = 290;
							break;
						
						case 4:
							iVar0 = 350;
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 50;
							break;
						
						case 1:
							iVar0 = 80;
							break;
						
						case 3:
							iVar0 = 100;
							break;
						
						case 4:
							iVar0 = 0;
							break;
						}
				}
				break;
			
			case joaat("player_one"):
				if (iParam3 == 1)
				{
					switch (iParam2)
					{
						case 2:
							iVar0 = 200;
							break;
						
						case 6:
							iVar0 = 400;
							break;
						
						case 8:
							iVar0 = 250;
							break;
						
						case 9:
							iVar0 = 450;
							break;
						
						case 14:
							iVar0 = 300;
							break;
						
						case 15:
							iVar0 = 350;
							break;
						
						case 17:
							iVar0 = 0;
							break;
						
						case 19:
							iVar0 = 180;
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 50;
							break;
						
						case 1:
							iVar0 = 0;
							break;
						
						case 2:
							iVar0 = 100;
							break;
						}
				}
				break;
			
			case joaat("player_two"):
				if (iParam3 == 1)
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 200;
							break;
						
						case 2:
							iVar0 = 200;
							break;
						
						case 3:
							iVar0 = 0;
							break;
						
						case 5:
							iVar0 = 300;
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 50;
							break;
						
						case 2:
							iVar0 = 60;
							break;
						
						case 3:
							iVar0 = 80;
							break;
						
						case 4:
							iVar0 = 0;
							break;
						}
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				if (iParam3 == 1)
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 40;
							break;
						
						case 1:
							iVar0 = 0;
							break;
						
						case 2:
							iVar0 = 50;
							break;
						
						case 3:
							iVar0 = 60;
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 20;
							break;
						
						case 2:
							iVar0 = 30;
							break;
						
						case 4:
							iVar0 = 0;
							break;
						}
				}
				break;
			
			case joaat("player_one"):
				if (iParam3 == 1)
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 25;
							break;
						
						case 1:
							iVar0 = 28;
							break;
						
						case 3:
							iVar0 = 30;
							break;
						
						case 4:
							iVar0 = 28;
							break;
						
						case 5:
							iVar0 = 25;
							break;
						
						case 7:
							iVar0 = 35;
							break;
						
						case 10:
							iVar0 = 38;
							break;
						
						case 11:
							iVar0 = 40;
							break;
						
						case 12:
							iVar0 = 45;
							break;
						
						case 13:
							iVar0 = 50;
							break;
						
						case 16:
							iVar0 = 95;
							break;
						
						case 17:
							iVar0 = 0;
							break;
						
						case 18:
							iVar0 = 150;
							break;
						
						case 19:
							iVar0 = 20;
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 20;
							break;
						
						case 1:
							iVar0 = 0;
							break;
						
						case 3:
							iVar0 = 65;
							break;
						
						case 4:
							iVar0 = 30;
							break;
						}
				}
				break;
			
			case joaat("player_two"):
				if (iParam3 == 1)
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 20;
							break;
						
						case 3:
							iVar0 = 0;
							break;
						
						case 5:
							iVar0 = 30;
							break;
						
						case 6:
							iVar0 = 60;
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							iVar0 = 20;
							break;
						
						case 4:
							iVar0 = 0;
							break;
						
						case 5:
							iVar0 = 65;
							break;
						}
				}
				break;
			}
	}
	return iVar0;
}





void func_378(var uParam0)//Position - 0x245CA
{
	int iVar0;
	struct<14> Var1;
	
	if (GlobalFunc_5785(1))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		Stack.Push(iVar0);
		Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
		Stack.Push(Global_2541867[uParam0->f_103.f_1]);
		Call_Loc(uParam0->f_453);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
		uParam0->f_103.f_2 = func_372(uParam0, &Var1, iVar0, Global_2541867[uParam0->f_103.f_1], 1);
		GlobalFunc_2475(Var1.f_8, uParam0->f_103.f_2, 0, 1, 0);
	}
}


void func_380(var uParam0, int iParam1)//Position - 0x2466C
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar0 = 0;
	GlobalFunc_5799(&(uParam0->f_218), 300);
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_103.f_15 = 0;
		GlobalFunc_6900(0, 0, 0, 1);
		if (GlobalFunc_1391())
		{
			if (Global_2543381 == uParam0->f_682)
			{
				iVar0 = 1;
			}
			else if (MISC::IS_BIT_SET(uParam0->f_683[(Global_2543381 / 32)], (Global_2543381 % 32)))
			{
				uParam0->f_682 = Global_2543381;
				GlobalFunc_1355(Global_2543381, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_218.f_8)) || (uParam0->f_218.f_1 < -100 && uParam0->f_218.f_4)) || GlobalFunc_2495(uParam0->f_218.f_8, 0, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_218.f_8 = 0;
			uParam0->f_218.f_4 = 0;
			uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			bVar1 = false;
			iVar2 = (uParam0->f_682 - 1);
			while (iVar2 >= 0)
			{
				if (MISC::IS_BIT_SET(uParam0->f_683[(iVar2 / 32)], (iVar2 % 32)))
				{
					bVar1 = true;
					uParam0->f_682 = iVar2;
					iVar2 = -1;
				}
				iVar2 = (iVar2 + -1);
			}
			if (!bVar1)
			{
				iVar2 = 45;
				while (iVar2 >= uParam0->f_682 + 1)
				{
					if (MISC::IS_BIT_SET(uParam0->f_683[(iVar2 / 32)], (iVar2 % 32)))
					{
						bVar1 = true;
						uParam0->f_682 = iVar2;
						iVar2 = -1;
					}
					iVar2 = (iVar2 + -1);
				}
			}
			if (bVar1)
			{
				GlobalFunc_1355(uParam0->f_682, 1, 1);
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_218.f_9)) || (uParam0->f_218.f_1 > 100 && uParam0->f_218.f_4)) || GlobalFunc_2494(uParam0->f_218.f_9, 0, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_218.f_9 = 0;
			uParam0->f_218.f_4 = 0;
			uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			bVar3 = false;
			iVar4 = uParam0->f_682 + 1;
			while (iVar4 <= 45)
			{
				if (MISC::IS_BIT_SET(uParam0->f_683[(iVar4 / 32)], (iVar4 % 32)))
				{
					bVar3 = true;
					uParam0->f_682 = iVar4;
					iVar4 = 47;
				}
				iVar4++;
			}
			if (!bVar3)
			{
				iVar4 = 0;
				while (iVar4 <= (uParam0->f_682 - 1))
				{
					if (MISC::IS_BIT_SET(uParam0->f_683[(iVar4 / 32)], (iVar4 % 32)))
					{
						bVar3 = true;
						uParam0->f_682 = iVar4;
						iVar4 = 47;
					}
					iVar4++;
				}
			}
			if (bVar3)
			{
				GlobalFunc_1355(uParam0->f_682, 1, 1);
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar0 == 1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_494 = 1;
			uParam0->f_558 = 1;
			func_178(&(uParam0->f_454), &Global_2541867, 1, GlobalFunc_4405(uParam0), uParam0->f_682, &(uParam0->f_683), &(uParam0->f_686));
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || GlobalFunc_2041())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_103.f_15 = 0;
			uParam0->f_103.f_23 = 0;
			uParam0->f_103.f_22 = 0;
			if (func_477() || func_476())
			{
				uParam0->f_494 = 0;
				uParam0->f_103.f_1 = 0;
				uParam0->f_558 = 1;
				func_467(uParam0, iParam1);
			}
			else
			{
				uParam0->f_103.f_31 = 6;
				uParam0->f_103.f_5 = 0;
			}
		}
	}
}

void func_381(var uParam0, int iParam1)//Position - 0x24A01
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	GlobalFunc_5799(&(uParam0->f_218), 300);
	iVar1 = 0;
	if (func_477())
	{
		iVar1++;
	}
	if (func_476())
	{
		iVar1++;
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_103.f_15 = 0;
		GlobalFunc_6900(0, 0, 0, 1);
		if (GlobalFunc_1391())
		{
			if (Global_2543381 == uParam0->f_103.f_1)
			{
				iVar0 = 1;
			}
			else
			{
				uParam0->f_103.f_1 = Global_2543381;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || (uParam0->f_218.f_1 < -100 && uParam0->f_218.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 188) && uParam0->f_218.f_8)) || GlobalFunc_2495(uParam0->f_218.f_8, 0, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_218.f_8 = 0;
			uParam0->f_218.f_4 = 0;
			uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_103.f_1 > 0)
			{
				uParam0->f_103.f_1 = (uParam0->f_103.f_1 - 1);
			}
			else
			{
				uParam0->f_103.f_1 = iVar1;
			}
			GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || (uParam0->f_218.f_1 > 100 && uParam0->f_218.f_4)) || (PAD::IS_CONTROL_PRESSED(2, 187) && uParam0->f_218.f_9)) || GlobalFunc_2494(uParam0->f_218.f_9, 0, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_218.f_9 = 0;
			uParam0->f_218.f_4 = 0;
			uParam0->f_218.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_218.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_103.f_1 < iVar1)
			{
				uParam0->f_103.f_1++;
			}
			else
			{
				uParam0->f_103.f_1 = 0;
			}
			GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || iVar0 == 1)
		{
			iVar0 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			if (uParam0->f_103.f_1 == 0)
			{
				uParam0->f_494 = 1;
				uParam0->f_558 = 1;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_494 = 4;
					uParam0->f_682 = -1;
				}
				func_178(&(uParam0->f_454), &Global_2541867, 1, GlobalFunc_4405(uParam0), uParam0->f_682, &(uParam0->f_683), &(uParam0->f_686));
			}
			else if (uParam0->f_103.f_1 == 1)
			{
				if (func_477())
				{
					uParam0->f_494 = 2;
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_178(&(uParam0->f_454), &Global_2541867, 0, GlobalFunc_4405(uParam0), uParam0->f_682, &(uParam0->f_683), &(uParam0->f_686));
					}
				}
				else if (func_476())
				{
					uParam0->f_494 = 3;
				}
				uParam0->f_558 = 1;
			}
			else if (uParam0->f_103.f_1 == 2)
			{
				uParam0->f_494 = 3;
				uParam0->f_558 = 1;
			}
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || GlobalFunc_2041())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			uParam0->f_103.f_15 = 0;
			uParam0->f_103.f_23 = 0;
			uParam0->f_103.f_22 = 0;
			uParam0->f_103.f_31 = 5;
			uParam0->f_103.f_5 = 0;
		}
	}
}


void func_383(int iParam0)//Position - 0x24E82
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (Global_68245)
		{
			func_387(&iParam0, -1, 0, 0);
		}
		else
		{
			GlobalFunc_7707(iParam0);
		}
	}
}




void func_387(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x24FAB
{
	struct<9> Var0;
	int iVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<8> Var20;
	int iVar35;
	
	if (iParam1 == -1)
	{
		iParam1 = GlobalFunc_5();
	}
	if (!bParam3)
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(*iParam0);
	}
	iVar13 = GlobalFunc_303(*iParam0);
	bVar14 = func_305(*iParam0);
	bVar15 = GlobalFunc_5010(*iParam0);
	bVar16 = func_302(*iParam0);
	iVar17 = 0;
	while (iVar17 < 127)
	{
		if (GlobalFunc_8496(iVar17, iParam1))
		{
			if (GlobalFunc_5123(&Var0, iVar17, iVar13, *iParam0, -1))
			{
				if (GlobalFunc_9094(&Var0, Var0.f_8, bVar14, bVar15, bParam2, bVar16))
				{
					if (!bParam3)
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
		}
		iVar17++;
	}
	if (GlobalFunc_8496(123, -1))
	{
		if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
		{
			if (!bParam3)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
	}
	iVar19 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar13);
	iVar18 = 0;
	while (iVar18 < iVar19)
	{
		if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar13, iVar18, &Var20))
		{
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var20))
			{
				iVar35 = (129 + iVar18);
				if (GlobalFunc_8496(iVar35, iParam1))
				{
					if (GlobalFunc_9094(&(Var20.f_7), Var20.f_6, bVar14, bVar15, bParam2, bVar16))
					{
						if (!bParam3)
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, Var20.f_2, Var20.f_3);
							GlobalFunc_294(*iParam0, Var20.f_2, Var20.f_3);
						}
					}
				}
			}
		}
		iVar18++;
	}
}


void func_389(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x25147
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_287(iParam0);
	if (iVar0 != -1)
	{
		iVar1 = func_390(iParam1, uParam2);
		GlobalFunc_6720(iVar0, iVar1, iParam3, iParam4);
	}
}

var func_390(int iParam0, var uParam1)//Position - 0x25176
{
	var uVar0;
	
	uVar0 = (SYSTEM::SHIFT_LEFT(iParam0, 16) || uParam1);
	return uVar0;
}


int func_392(int iParam0, int iParam1, var uParam2)//Position - 0x25239
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	switch (iParam1->f_9)
	{
		case 0:
			if (iParam1->f_6 == GlobalFunc_6732(385, -1, -1))
			{
				if (!func_230(uParam2, iParam0))
				{
					return 1;
				}
				if (uParam2->f_602 == GlobalFunc_6872(2135, -1, 0) && uParam2->f_603 == GlobalFunc_6872(2142, -1, 0))
				{
					return 1;
				}
			}
			break;
		
		case 1:
			iVar0 = iParam1->f_6;
			if (iVar0 == -1)
			{
				iVar0 = 255;
			}
			iVar1 = GlobalFunc_290(iParam1->f_5);
			if (iParam1->f_5 == GlobalFunc_4401(9))
			{
				if (iVar0 == 18)
				{
					iVar0 = 16;
				}
			}
			if (iVar1 != -1 && iVar0 == GlobalFunc_6732(GlobalFunc_290(iParam1->f_5), -1, -1))
			{
				if (!func_230(uParam2, iParam0))
				{
					return 1;
				}
				iVar2 = func_245(iParam1->f_5, &(uParam2->f_605), -1);
				iVar3 = GlobalFunc_286(iParam1->f_5);
				iVar4 = GlobalFunc_289(iParam1->f_5);
				if (iVar4 != -1)
				{
					if (uParam2->f_607 != GlobalFunc_6734(iVar4, -1) && uParam2->f_607 == 0f)
					{
						uParam2->f_607 = GlobalFunc_6734(iVar4, -1);
					}
				}
				if (((iVar2 == -1 || uParam2->f_602 == iVar2) && (iVar3 == -1 || uParam2->f_603 == GlobalFunc_6872(iVar3, -1, 0))) && (iVar4 == -1 || uParam2->f_607 == GlobalFunc_6734(iVar4, -1)))
				{
					return 1;
				}
				else if (iVar0 == 255)
				{
					return 1;
				}
				else
				{
					bVar5 = false;
					if (iVar3 != -1)
					{
						bVar5 = true;
					}
					else
					{
						bVar5 = true;
					}
					if (iVar4 != -1)
					{
						bVar5 = true;
					}
					else
					{
						bVar5 = true;
					}
					if (!bVar5)
					{
						bVar5 = true;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1->f_6 == SYSTEM::ROUND(GlobalFunc_6734(157, -1)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_393(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x25410
{
	char* sVar0;
	int iVar16;
	
	*iParam3 = 0;
	StringCopy(&(iParam3->f_1), "", 16);
	iParam3->f_5 = -1;
	iParam3->f_6 = 0;
	iParam3->f_7 = 0f;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2503[0])), "CC_M_HS_0", 0, 2086722024);
						break;
					
					case 1:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(170) * Global_262145.f_2503[5])), "CC_M_HS_1", 1, -1911587515);
						break;
					
					case 2:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(560) * Global_262145.f_2503[10])), "CC_M_HS_2", 7, -1882357567);
						break;
					
					case 3:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1080) * Global_262145.f_2503[15])), "CC_M_HS_3", 13, -969019995);
						break;
					
					case 4:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2503[20])), "CC_M_HS_4", 19, -411291615);
						break;
					
					case 5:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(275) * Global_262145.f_2503[25])), "CC_M_HS_5", 26, -82979004);
						break;
					
					case 6:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(930) * Global_262145.f_2503[30])), "CC_M_HS_6", 32, 218692410);
						break;
					
					case 7:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(420) * Global_262145.f_2503[35])), "CC_M_HS_7", 38, 511680047);
						break;
					
					case 8:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1130) * Global_262145.f_2503[40])), "CC_M_HS_8", 45, 558867407);
						break;
					
					case 9:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(375) * Global_262145.f_2503[45])), "CC_M_HS_9", 50, 808796570);
						break;
					
					case 10:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(480) * Global_262145.f_2503[50])), "CC_M_HS_10", 57, -1605550121);
						break;
					
					case 11:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1030) * Global_262145.f_2503[55])), "CC_M_HS_11", 63, -1378886948);
						break;
					
					case 12:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(530) * Global_262145.f_2503[60])), "CC_M_HS_12", 69, -1142819072);
						break;
					
					case 13:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1180) * Global_262145.f_2503[65])), "CC_M_HS_13", 74, -899836937);
						break;
					
					case 14:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1980) * Global_262145.f_2503[70])), "CC_M_HS_14", 80, 1454746793);
						break;
					
					case 15:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(455) * Global_262145.f_2503[75])), "CC_M_HS_15", 85, 1677117227);
						break;
					
					case 16:
						GlobalFunc_4404(iParam3, Global_262145.f_5388, "CC_M_HS_16", GlobalFunc_4914(iParam0, joaat("DLC_MP_BEACH_M_HAIR00"), 2, 3), 1931240822);
						break;
					
					case 17:
						GlobalFunc_4404(iParam3, Global_262145.f_5383, "CC_M_HS_17", GlobalFunc_4914(iParam0, joaat("DLC_MP_BEACH_M_HAIR05"), 2, 3), -2125331999);
						break;
					
					case 18:
						GlobalFunc_4404(iParam3, Global_262145.f_5398, "CC_M_HS_18", GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI_M_HAIR0_0"), 2, 3), -2146762937);
						break;
					
					case 19:
						GlobalFunc_4404(iParam3, Global_262145.f_5393, "CC_M_HS_19", GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI_M_HAIR1_0"), 2, 3), -1919575460);
						break;
					
					case 20:
						GlobalFunc_4404(iParam3, Global_262145.f_5954[14], "CC_M_HS_20", GlobalFunc_4914(iParam0, joaat("DLC_MP_HIPS_M_HAIR0_0"), 2, 3), 1867669166);
						break;
					
					case 21:
						GlobalFunc_4404(iParam3, Global_262145.f_5954[19], "CC_M_HS_21", GlobalFunc_4914(iParam0, joaat("DLC_MP_HIPS_M_HAIR1_0"), 2, 3), 1562425931);
						break;
					
					case 22:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4960) * Global_262145.f_6130)), "CC_M_HS_22", GlobalFunc_4914(iParam0, joaat("DLC_MP_IND_M_HAIR0_0"), 2, 3), 1271240597);
						break;
					
					case 23:
						return 0;
						break;
				}
				break;
			
			case 7:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2614)), "HAIR_BEARD0", 1, -1, 1f, 61, -43115055);
						break;
					
					case 1:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(150) * Global_262145.f_2615)), "HAIR_BEARD1", 1, 0, 1f, 62, -1731373935);
						break;
					
					case 2:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(430) * Global_262145.f_2616)), "HAIR_BEARD2", 1, 1, 1f, 63, -1422100113);
						break;
					
					case 3:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(325) * Global_262145.f_2617)), "HAIR_BEARD3", 1, 2, 1f, 64, -463508556);
						break;
					
					case 4:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(465) * Global_262145.f_2618)), "HAIR_BEARD4", 1, 3, 1f, 65, -963301344);
						break;
					
					case 5:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2619)), "HAIR_BEARD5", 1, 4, 1f, 66, 2063210751);
						break;
					
					case 6:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(350) * Global_262145.f_2620)), "HAIR_BEARD6", 1, 5, 1f, 67, -2003094463);
						break;
					
					case 7:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(600) * Global_262145.f_2621)), "HAIR_BEARD7", 1, 6, 1f, 68, -1888632346);
						break;
					
					case 8:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(220) * Global_262145.f_2622)), "HAIR_BEARD8", 1, 7, 1f, 69, -1384776202);
						break;
					
					case 9:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1425) * Global_262145.f_2623)), "HAIR_BEARD9", 1, 8, 1f, 70, 1107568404);
						break;
					
					case 10:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1700) * Global_262145.f_2624)), "HAIR_BEARD10", 1, 9, 1f, 71, -412069578);
						break;
					
					case 11:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(290) * Global_262145.f_2625)), "HAIR_BEARD11", 1, 10, 1f, 72, 1236833733);
						break;
					
					case 12:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(185) * Global_262145.f_2626)), "HAIR_BEARD12", 1, 11, 1f, 73, 2004250944);
						break;
					
					case 13:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(255) * Global_262145.f_2627)), "HAIR_BEARD13", 1, 12, 1f, 74, 544883529);
						break;
					
					case 14:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1150) * Global_262145.f_2628)), "HAIR_BEARD14", 1, 13, 1f, 75, 1446293181);
						break;
					
					case 15:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1975) * Global_262145.f_2629)), "HAIR_BEARD15", 1, 14, 1f, 76, -1964074960);
						break;
					
					case 16:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(875) * Global_262145.f_2630)), "HAIR_BEARD16", 1, 15, 1f, 77, -1565538382);
						break;
					
					case 17:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2000) * Global_262145.f_2631)), "HAIR_BEARD17", 1, 16, 1f, 78, 1752814407);
						break;
					
					case 18:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(725) * Global_262145.f_2632)), "HAIR_BEARD18", 1, 17, 1f, 79, -1662501853);
						break;
					
					case 19:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(395) * Global_262145.f_2633)), "HAIR_BEARD19", 1, 18, 1f, 80, -1216122527);
						break;
					
					case 20:
						GlobalFunc_4403(iParam3, Global_262145.f_4295, "BRD_HP_0", 1, 19, 1f, 81, 1668958248);
						break;
					
					case 21:
						GlobalFunc_4403(iParam3, Global_262145.f_4296, "BRD_HP_1", 1, 20, 1f, 82, 813687348);
						break;
					
					case 22:
						GlobalFunc_4403(iParam3, Global_262145.f_4297, "BRD_HP_2", 1, 21, 1f, 83, 1121027799);
						break;
					
					case 23:
						GlobalFunc_4403(iParam3, Global_262145.f_4298, "BRD_HP_3", 1, 22, 1f, 84, -1437018652);
						break;
					
					case 24:
						GlobalFunc_4403(iParam3, Global_262145.f_4299, "BRD_HP_4", 1, 23, 1f, 85, -1133250022);
						break;
					
					case 25:
						GlobalFunc_4403(iParam3, Global_262145.f_4300, "BRD_HP_5", 1, 24, 1f, 86, 1974922401);
						break;
					
					case 26:
						GlobalFunc_4403(iParam3, Global_262145.f_4301, "BRD_HP_6", 1, 25, 1f, 87, -1751830435);
						break;
					
					case 27:
						GlobalFunc_4403(iParam3, Global_262145.f_4303, "BRD_HP_7", 1, 26, 1f, 89, -737105609);
						break;
					
					case 28:
						GlobalFunc_4403(iParam3, Global_262145.f_4304, "BRD_HP_8", 1, 27, 1f, 90, -1044282215);
						break;
					
					case 29:
						GlobalFunc_4403(iParam3, Global_262145.f_4302, "BRD_HP_9", 1, 28, 1f, 88, 128880754);
						break;
					
					case 30:
						return 0;
						break;
				}
				break;
			
			case 8:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4403(iParam3, Global_262145.f_7000, "NONE", 2, -1, 1f, -1, -1214833480);
						break;
					
					case 1:
						GlobalFunc_4403(iParam3, Global_262145.f_7001, "CC_EYEBRW_0", 2, 0, 1f, -1, -853522486);
						break;
					
					case 2:
						GlobalFunc_4403(iParam3, Global_262145.f_7002, "CC_EYEBRW_1", 2, 1, 1f, -1, -1811655273);
						break;
					
					case 3:
						GlobalFunc_4403(iParam3, Global_262145.f_7003, "CC_EYEBRW_2", 2, 2, 1f, -1, -1040961166);
						break;
					
					case 4:
						GlobalFunc_4403(iParam3, Global_262145.f_7004, "CC_EYEBRW_3", 2, 3, 1f, -1, 1888456366);
						break;
					
					case 5:
						GlobalFunc_4403(iParam3, Global_262145.f_7005, "CC_EYEBRW_4", 2, 4, 1f, -1, -1639552485);
						break;
					
					case 6:
						GlobalFunc_4403(iParam3, Global_262145.f_7006, "CC_EYEBRW_5", 2, 5, 1f, -1, 1348226632);
						break;
					
					case 7:
						GlobalFunc_4403(iParam3, Global_262145.f_7007, "CC_EYEBRW_6", 2, 6, 1f, -1, 2125933309);
						break;
					
					case 8:
						GlobalFunc_4403(iParam3, Global_262145.f_7008, "CC_EYEBRW_7", 2, 7, 1f, -1, 754026355);
						break;
					
					case 9:
						GlobalFunc_4403(iParam3, Global_262145.f_7009, "CC_EYEBRW_8", 2, 8, 1f, -1, 1526948758);
						break;
					
					case 10:
						GlobalFunc_4403(iParam3, Global_262145.f_7010, "CC_EYEBRW_9", 2, 9, 1f, -1, -902969915);
						break;
					
					case 11:
						GlobalFunc_4403(iParam3, Global_262145.f_7011, "CC_EYEBRW_10", 2, 10, 1f, -1, -69457631);
						break;
					
					case 12:
						GlobalFunc_4403(iParam3, Global_262145.f_7012, "CC_EYEBRW_11", 2, 11, 1f, -1, -312701918);
						break;
					
					case 13:
						GlobalFunc_4403(iParam3, Global_262145.f_7013, "CC_EYEBRW_12", 2, 12, 1f, -1, 824579000);
						break;
					
					case 14:
						GlobalFunc_4403(iParam3, Global_262145.f_7014, "CC_EYEBRW_13", 2, 13, 1f, -1, 585856831);
						break;
					
					case 15:
						GlobalFunc_4403(iParam3, Global_262145.f_7015, "CC_EYEBRW_14", 2, 14, 1f, -1, 1226458016);
						break;
					
					case 16:
						GlobalFunc_4403(iParam3, Global_262145.f_7016, "CC_EYEBRW_15", 2, 15, 1f, -1, 987998003);
						break;
					
					case 17:
						GlobalFunc_4403(iParam3, Global_262145.f_7017, "CC_EYEBRW_16", 2, 16, 1f, -1, 1819413071);
						break;
					
					case 18:
						GlobalFunc_4403(iParam3, Global_262145.f_7018, "CC_EYEBRW_17", 2, 17, 1f, -1, 1583246888);
						break;
					
					case 19:
						GlobalFunc_4403(iParam3, Global_262145.f_7019, "CC_EYEBRW_18", 2, 18, 1f, -1, -1577847470);
						break;
					
					case 20:
						GlobalFunc_4403(iParam3, Global_262145.f_7020, "CC_EYEBRW_19", 2, 19, 1f, -1, -2026650806);
						break;
					
					case 21:
						GlobalFunc_4403(iParam3, Global_262145.f_7021, "CC_EYEBRW_20", 2, 20, 1f, -1, -1429665160);
						break;
					
					case 22:
						GlobalFunc_4403(iParam3, Global_262145.f_7022, "CC_EYEBRW_21", 2, 21, 1f, -1, -1185994876);
						break;
					
					case 23:
						GlobalFunc_4403(iParam3, Global_262145.f_7023, "CC_EYEBRW_22", 2, 22, 1f, -1, -2142554759);
						break;
					
					case 24:
						GlobalFunc_4403(iParam3, Global_262145.f_7024, "CC_EYEBRW_23", 2, 23, 1f, -1, -589631845);
						break;
					
					case 25:
						GlobalFunc_4403(iParam3, Global_262145.f_7025, "CC_EYEBRW_24", 2, 24, 1f, -1, -1637322333);
						break;
					
					case 26:
						GlobalFunc_4403(iParam3, Global_262145.f_7026, "CC_EYEBRW_25", 2, 25, 1f, -1, -1876568802);
						break;
					
					case 27:
						GlobalFunc_4403(iParam3, Global_262145.f_7027, "CC_EYEBRW_26", 2, 26, 1f, -1, -851292326);
						break;
					
					case 28:
						GlobalFunc_4403(iParam3, Global_262145.f_7028, "CC_EYEBRW_27", 2, 27, 1f, -1, 1859818120);
						break;
					
					case 29:
						GlobalFunc_4403(iParam3, Global_262145.f_7029, "CC_EYEBRW_28", 2, 28, 1f, -1, -1515880415);
						break;
					
					case 30:
						GlobalFunc_4403(iParam3, Global_262145.f_7030, "CC_EYEBRW_29", 2, 29, 1f, -1, -432930795);
						break;
					
					case 31:
						GlobalFunc_4403(iParam3, Global_262145.f_7031, "CC_EYEBRW_30", 2, 30, 1f, -1, 796201630);
						break;
					
					case 32:
						GlobalFunc_4403(iParam3, Global_262145.f_7032, "CC_EYEBRW_31", 2, 31, 1f, -1, 1170095920);
						break;
					
					case 33:
						GlobalFunc_4403(iParam3, Global_262145.f_7033, "CC_EYEBRW_32", 2, 32, 1f, -1, 1259981287);
						break;
					
					case 34:
						GlobalFunc_4403(iParam3, Global_262145.f_7034, "CC_EYEBRW_33", 2, 33, 1f, -1, 1632499279);
						break;
					
					case 35:
						return 0;
						break;
				}
				break;
			
			case 9:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4403(iParam3, Global_262145.f_7094, "CC_BODY_1_0", 10, -1, 1f, -1, -1208917743);
						break;
					
					case 1:
						GlobalFunc_4403(iParam3, Global_262145.f_7095, "CC_BODY_1_1", 10, 0, 1f, -1, -1245356871);
						break;
					
					case 2:
						GlobalFunc_4403(iParam3, Global_262145.f_7096, "CC_BODY_1_2", 10, 1, 1f, -1, -567923298);
						break;
					
					case 3:
						GlobalFunc_4403(iParam3, Global_262145.f_7097, "CC_BODY_1_3", 10, 2, 1f, -1, -932249040);
						break;
					
					case 4:
						GlobalFunc_4403(iParam3, Global_262145.f_7098, "CC_BODY_1_4", 10, 3, 1f, -1, -221587773);
						break;
					
					case 5:
						GlobalFunc_4403(iParam3, Global_262145.f_7099, "CC_BODY_1_5", 10, 4, 1f, -1, -845116305);
						break;
					
					case 6:
						GlobalFunc_4403(iParam3, Global_262145.f_7100, "CC_BODY_1_6", 10, 5, 1f, -1, 381918900);
						break;
					
					case 7:
						GlobalFunc_4403(iParam3, Global_262145.f_7101, "CC_BODY_1_7", 10, 6, 1f, -1, 83032851);
						break;
					
					case 8:
						GlobalFunc_4403(iParam3, Global_262145.f_7102, "CC_BODY_1_8", 10, 7, 1f, -1, 705709389);
						break;
					
					case 9:
						GlobalFunc_4403(iParam3, Global_262145.f_7103, "CC_BODY_1_9", 10, 8, 1f, -1, 410559006);
						break;
					
					case 10:
						GlobalFunc_4403(iParam3, Global_262145.f_7104, "CC_BODY_1_10", 10, 9, 1f, -1, -850926612);
						break;
					
					case 11:
						GlobalFunc_4403(iParam3, Global_262145.f_7105, "CC_BODY_1_11", 10, 10, 1f, -1, -1093056753);
						break;
					
					case 12:
						GlobalFunc_4403(iParam3, Global_262145.f_7106, "CC_BODY_1_12", 10, 11, 1f, -1, 1258643301);
						break;
					
					case 13:
						GlobalFunc_4403(iParam3, Global_262145.f_7107, "CC_BODY_1_13", 10, 12, 1f, -1, 865874067);
						break;
					
					case 14:
						GlobalFunc_4403(iParam3, Global_262145.f_7108, "CC_BODY_1_14", 10, 13, 1f, -1, 627151902);
						break;
					
					case 15:
						GlobalFunc_4403(iParam3, Global_262145.f_7109, "CC_BODY_1_15", 10, 14, 1f, -1, -2142352902);
						break;
					
					case 16:
						GlobalFunc_4403(iParam3, Global_262145.f_7110, "CC_BODY_1_16", 10, 15, 1f, -1, -407070503);
						break;
					
					case 17:
						return 1;
						break;
					
					case 18:
						GlobalFunc_4403(iParam3, 1100, "CC_BODY_1_17", 10, 17, 1f, -1, 1502608510);
						break;
					
					case 19:
						return 0;
						break;
				}
				break;
			
			case 10:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4403(iParam3, Global_262145.f_7035, "FACE_E_C_0", 7, 0, 1f, -1, 827528886);
						break;
					
					case 1:
						GlobalFunc_4403(iParam3, Global_262145.f_7036, "FACE_E_C_1", 7, 1, 1f, -1, -781461791);
						break;
					
					case 2:
						GlobalFunc_4403(iParam3, Global_262145.f_7037, "FACE_E_C_2", 7, 2, 1f, -1, -474875027);
						break;
					
					case 3:
						GlobalFunc_4403(iParam3, Global_262145.f_7038, "FACE_E_C_3", 7, 3, 1f, -1, -1242030086);
						break;
					
					case 4:
						GlobalFunc_4403(iParam3, Global_262145.f_7039, "FACE_E_C_4", 7, 4, 1f, -1, 137348200);
						break;
					
					case 5:
						GlobalFunc_4403(iParam3, Global_262145.f_7040, "FACE_E_C_5", 7, 5, 1f, -1, -2121779449);
						break;
					
					case 6:
						GlobalFunc_4403(iParam3, Global_262145.f_7041, "FACE_E_C_6", 7, 6, 1f, -1, 1876005786);
						break;
					
					case 7:
						GlobalFunc_4403(iParam3, Global_262145.f_7042, "FACE_E_C_7", 7, 7, 1f, -1, -1641844675);
						break;
					
					case 8:
						GlobalFunc_4403(iParam3, Global_262145.f_7043, "FACE_E_C_8", 7, 8, 1f, -1, -1939452733);
						break;
					
					case 9:
						GlobalFunc_4403(iParam3, Global_262145.f_7044, "FACE_E_C_9", 7, 9, 1f, -1, 1595175476);
						break;
					
					case 10:
						GlobalFunc_4403(iParam3, Global_262145.f_7045, "FACE_E_C_10", 7, 10, 1f, -1, 1888141884);
						break;
					
					case 11:
						GlobalFunc_4403(iParam3, Global_262145.f_7046, "FACE_E_C_11", 7, 11, 1f, -1, 859096981);
						break;
					
					case 12:
						GlobalFunc_4403(iParam3, Global_262145.f_7047, "FACE_E_C_12", 7, 12, 1f, -1, 551756530);
						break;
					
					case 13:
						GlobalFunc_4403(iParam3, Global_262145.f_7048, "FACE_E_C_13", 7, 13, 1f, -1, 1439272126);
						break;
					
					case 14:
						GlobalFunc_4403(iParam3, Global_262145.f_7049, "FACE_E_C_14", 7, 14, 1f, -1, 1158474565);
						break;
					
					case 15:
						GlobalFunc_4403(iParam3, Global_262145.f_7050, "FACE_E_C_15", 7, 15, 1f, -1, -109358053);
						break;
					
					case 16:
						GlobalFunc_4403(iParam3, Global_262145.f_7051, "FACE_E_C_16", 7, 16, 1f, -1, -406605652);
						break;
					
					case 17:
						GlobalFunc_4403(iParam3, Global_262145.f_7052, "FACE_E_C_17", 7, 17, 1f, -1, 509746672);
						break;
					
					case 18:
						GlobalFunc_4403(iParam3, Global_262145.f_7053, "FACE_E_C_18", 7, 18, 1f, -1, 244809299);
						break;
					
					case 19:
						GlobalFunc_4403(iParam3, Global_262145.f_7054, "FACE_E_C_19", 7, 19, 1f, -1, -651750537);
						break;
					
					case 20:
						GlobalFunc_4403(iParam3, Global_262145.f_7055, "FACE_E_C_20", 7, 20, 1f, -1, 1816410231);
						break;
					
					case 21:
						GlobalFunc_4403(iParam3, Global_262145.f_7056, "FACE_E_C_21", 7, 21, 1f, -1, -2059015562);
						break;
					
					case 22:
						GlobalFunc_4403(iParam3, Global_262145.f_7057, "FACE_E_C_22", 7, 22, 1f, -1, 1945094090);
						break;
					
					case 23:
						GlobalFunc_4403(iParam3, Global_262145.f_7058, "FACE_E_C_23", 7, 23, 1f, -1, -1458261485);
						break;
					
					case 24:
						GlobalFunc_4403(iParam3, Global_262145.f_7059, "FACE_E_C_24", 7, 24, 1f, -1, -1755738467);
						break;
					
					case 25:
						GlobalFunc_4403(iParam3, Global_262145.f_7060, "FACE_E_C_25", 7, 25, 1f, -1, -846234872);
						break;
					
					case 26:
						GlobalFunc_4403(iParam3, Global_262145.f_7061, "FACE_E_C_26", 7, 26, 1f, -1, -1144170620);
						break;
					
					case 27:
						GlobalFunc_4403(iParam3, Global_262145.f_7062, "FACE_E_C_27", 7, 27, 1f, -1, -251641367);
						break;
					
					case 28:
						GlobalFunc_4403(iParam3, Global_262145.f_7063, "FACE_E_C_28", 7, 28, 1f, -1, -566158229);
						break;
					
					case 29:
						GlobalFunc_4403(iParam3, Global_262145.f_7064, "FACE_E_C_29", 7, 29, 1f, -1, -859506285);
						break;
					
					case 30:
						GlobalFunc_4403(iParam3, Global_262145.f_7065, "FACE_E_C_30", 7, 30, 1f, -1, 1823490339);
						break;
					
					case 31:
						GlobalFunc_4403(iParam3, Global_262145.f_7066, "FACE_E_C_31", 7, 31, 1f, -1, -2074414980);
						break;
					
					case 32:
						return 0;
						break;
				}
				break;
			
			case 11:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2580)), "NONE", 4, -1, 1f, 28, 748741188);
						break;
					
					case 1:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2597)), "CC_MKUP_16", 4, 16, 1f, 45, 664000554);
						break;
					
					case 2:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_262145.f_2598)), "CC_MKUP_17", 4, 17, 1f, 46, 374125980);
						break;
					
					case 3:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(750) * Global_262145.f_2599)), "CC_MKUP_18", 4, 18, 1f, 47, 1933864846);
						break;
					
					case 4:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5750) * Global_262145.f_2600)), "CC_MKUP_19", 4, 19, 1f, 48, 1620822589);
						break;
					
					case 5:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2601)), "CC_MKUP_20", 4, 20, 1f, 49, 1304536201);
						break;
					
					case 6:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(6000) * Global_262145.f_2602)), "CC_MKUP_21", 4, 21, 1f, 50, 1024459558);
						break;
					
					case 7:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2607)), "CC_MKUP_26", 4, 26, 1f, 55, -1167196704);
						break;
					
					case 8:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5500) * Global_262145.f_2608)), "CC_MKUP_27", 4, 27, 1f, 56, -1484564469);
						break;
					
					case 9:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2609)), "CC_MKUP_28", 4, 28, 1f, 57, -1728267522);
						break;
					
					case 10:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2000) * Global_262145.f_2610)), "CC_MKUP_29", 4, 29, 1f, 58, -2059818253);
						break;
					
					case 11:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(15000) * Global_262145.f_2611)), "CC_MKUP_30", 4, 30, 1f, 59, 1995902574);
						break;
					
					case 12:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_262145.f_2612)), "CC_MKUP_31", 4, 31, 1f, 60, 1639965688);
						break;
					
					case 13:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(25000) * Global_262145.f_6130)), "CC_MKUP_33", 4, 33, 1f, 92, 1397114629);
						break;
					
					case 14:
						return 0;
						break;
				}
				break;
			
			case 14:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2580)), "NONE", 4, -1, 1f, 28, -1985437042);
						break;
					
					case 1:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(225) * Global_262145.f_2581)), "CC_MKUP_0", 4, 0, 1f, 29, 2060125395);
						break;
					
					case 2:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(250) * Global_262145.f_2582)), "CC_MKUP_1", 4, 1, 1f, 30, 1845619521);
						break;
					
					case 3:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(175) * Global_262145.f_2583)), "CC_MKUP_2", 4, 2, 1f, 31, 1352314995);
						break;
					
					case 4:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(610) * Global_262145.f_2584)), "CC_MKUP_3", 4, 3, 1f, 32, 1121916156);
						break;
					
					case 5:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(150) * Global_262145.f_2585)), "CC_MKUP_4", 4, 4, 1f, 33, 890173784);
						break;
					
					case 6:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(200) * Global_262145.f_2586)), "CC_MKUP_5", 4, 5, 1f, 34, 646995035);
						break;
					
					case 7:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(870) * Global_262145.f_2587)), "CC_MKUP_6", 4, 6, 1f, 35, 885782742);
						break;
					
					case 8:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(275) * Global_262145.f_2588)), "CC_MKUP_7", 4, 7, 1f, 36, 645225513);
						break;
					
					case 9:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(480) * Global_262145.f_2589)), "CC_MKUP_8", 4, 8, 1f, 37, 173548527);
						break;
					
					case 10:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2000) * Global_262145.f_2590)), "CC_MKUP_9", 4, 9, 1f, 38, -421803070);
						break;
					
					case 11:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(740) * Global_262145.f_2591)), "CC_MKUP_10", 4, 10, 1f, 39, 1299978497);
						break;
					
					case 12:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(935) * Global_262145.f_2592)), "CC_MKUP_11", 4, 11, 1f, 40, 1529427035);
						break;
					
					case 13:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(675) * Global_262145.f_2593)), "CC_MKUP_12", 4, 12, 1f, 41, 342566624);
						break;
					
					case 14:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_262145.f_2594)), "CC_MKUP_13", 4, 13, 1f, 42, 575062679);
						break;
					
					case 15:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(805) * Global_262145.f_2595)), "CC_MKUP_14", 4, 14, 1f, 43, -2035840169);
						break;
					
					case 16:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(545) * Global_262145.f_2596)), "CC_MKUP_15", 4, 15, 1f, 44, -1807833467);
						break;
					
					case 17:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(300) * Global_262145.f_2613)), "CC_MKUP_32", 4, 32, 1f, 91, 1762447394);
						break;
					
					case 18:
						GlobalFunc_4403(iParam3, Global_262145.f_7067, "CC_MKUP_34", 4, 34, 1f, -1, 2001923246);
						break;
					
					case 19:
						GlobalFunc_4403(iParam3, Global_262145.f_7068, "CC_MKUP_35", 4, 35, 1f, -1, 178590600);
						break;
					
					case 20:
						GlobalFunc_4403(iParam3, Global_262145.f_7069, "CC_MKUP_36", 4, 36, 1f, -1, 1262851572);
						break;
					
					case 21:
						GlobalFunc_4403(iParam3, Global_262145.f_7070, "CC_MKUP_37", 4, 37, 1f, -1, 537411450);
						break;
					
					case 22:
						GlobalFunc_4403(iParam3, Global_262145.f_7071, "CC_MKUP_38", 4, 38, 1f, -1, 785046783);
						break;
					
					case 23:
						GlobalFunc_4403(iParam3, Global_262145.f_7072, "CC_MKUP_39", 4, 39, 1f, -1, -2080536733);
						break;
					
					case 24:
						GlobalFunc_4403(iParam3, Global_262145.f_7073, "CC_MKUP_40", 4, 40, 1f, -1, -1640317987);
						break;
					
					case 25:
						GlobalFunc_4403(iParam3, Global_262145.f_7074, "CC_MKUP_41", 4, 41, 1f, -1, 1737477768);
						break;
					
					case 26:
						return 0;
						break;
				}
				break;
			
			case 15:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4403(iParam3, Global_262145.f_7083, "NONE", 8, -1, 1f, -1, 162597385);
						break;
					
					case 1:
						GlobalFunc_4403(iParam3, Global_262145.f_7084, "CC_LIPSTICK_0", 8, 0, 1f, -1, 223154493);
						break;
					
					case 2:
						GlobalFunc_4403(iParam3, Global_262145.f_7085, "CC_LIPSTICK_1", 8, 1, 1f, -1, 2140763608);
						break;
					
					case 3:
						GlobalFunc_4403(iParam3, Global_262145.f_7086, "CC_LIPSTICK_2", 8, 2, 1f, -1, 1886967703);
						break;
					
					case 4:
						GlobalFunc_4403(iParam3, Global_262145.f_7087, "CC_LIPSTICK_3", 8, 3, 1f, -1, 1237289509);
						break;
					
					case 5:
						GlobalFunc_4403(iParam3, Global_262145.f_7088, "CC_LIPSTICK_4", 8, 4, 1f, -1, -1236704457);
						break;
					
					case 6:
						GlobalFunc_4403(iParam3, Global_262145.f_7089, "CC_LIPSTICK_5", 8, 5, 1f, -1, -1467824214);
						break;
					
					case 7:
						GlobalFunc_4403(iParam3, Global_262145.f_7090, "CC_LIPSTICK_6", 8, 6, 1f, -1, -1595623314);
						break;
					
					case 8:
						GlobalFunc_4403(iParam3, Global_262145.f_7091, "CC_LIPSTICK_7", 8, 7, 1f, -1, -1829299053);
						break;
					
					case 9:
						GlobalFunc_4403(iParam3, Global_262145.f_7092, "CC_LIPSTICK_8", 8, 8, 1f, -1, -1581270496);
						break;
					
					case 10:
						GlobalFunc_4403(iParam3, Global_262145.f_7093, "CC_LIPSTICK_9", 8, 9, 1f, -1, -736238561);
						break;
					
					case 11:
						return 0;
						break;
				}
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2426[0])), "CC_F_HS_0", 0, 1479840145);
						break;
					
					case 1:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(485) * Global_262145.f_2426[4])), "CC_F_HS_1", 1, 356387741);
						break;
					
					case 2:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(425) * Global_262145.f_2426[9])), "CC_F_HS_2", 7, 653766416);
						break;
					
					case 3:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(175) * Global_262145.f_2426[14])), "CC_F_HS_3", 13, -1922761743);
						break;
					
					case 4:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(280) * Global_262145.f_2426[19])), "CC_F_HS_4", 18, -1625383068);
						break;
					
					case 5:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1985) * Global_262145.f_2426[24])), "CC_F_HS_5", 24, 1758409414);
						break;
					
					case 6:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1135) * Global_262145.f_2426[29])), "CC_F_HS_6", 30, 2048251219);
						break;
					
					case 7:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(535) * Global_262145.f_2426[34])), "CC_F_HS_7", 35, -1001100849);
						break;
					
					case 8:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(565) * Global_262145.f_2426[39])), "CC_F_HS_8", 41, -711848886);
						break;
					
					case 9:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1085) * Global_262145.f_2426[44])), "CC_F_HS_9", 47, -1614503760);
						break;
					
					case 10:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(505) * Global_262145.f_2426[49])), "CC_F_HS_10", 53, -1060874703);
						break;
					
					case 11:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(380) * Global_262145.f_2426[54])), "CC_F_HS_11", 60, -1669067343);
						break;
					
					case 12:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1035) * Global_262145.f_2426[59])), "CC_F_HS_12", 67, -1505615571);
						break;
					
					case 13:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1185) * Global_262145.f_2426[64])), "CC_F_HS_13", 73, -136756130);
						break;
					
					case 14:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(460) * Global_262145.f_2426[69])), "CC_F_HS_14", 79, 1503430607);
						break;
					
					case 15:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(935) * Global_262145.f_2426[74])), "CC_F_HS_15", 85, 1909897283);
						break;
					
					case 16:
						GlobalFunc_4404(iParam3, Global_262145.f_5362, "CC_F_HS_17", GlobalFunc_4914(iParam0, joaat("DLC_MP_BEACH_F_HAIR05"), 2, 4), -1005003578);
						break;
					
					case 17:
						GlobalFunc_4404(iParam3, Global_262145.f_5367, "CC_F_HS_16", GlobalFunc_4914(iParam0, joaat("DLC_MP_BEACH_F_HAIR00"), 2, 4), -734266100);
						break;
					
					case 18:
						GlobalFunc_4404(iParam3, Global_262145.f_5377, "CC_F_HS_18", GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI_F_HAIR0_0"), 2, 4), 1360852708);
						break;
					
					case 19:
						GlobalFunc_4404(iParam3, Global_262145.f_5370, "CC_F_HS_19", GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI_F_HAIR1_0"), 2, 4), 729066388);
						break;
					
					case 20:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(980) * Global_262145.f_4936)), "CC_F_HS_23", GlobalFunc_4914(iParam0, joaat("DLC_MP_VAL_F_HAIR0_0"), 2, 4), 914374215);
						break;
					
					case 21:
						GlobalFunc_4404(iParam3, Global_262145.f_5954[3], "CC_F_HS_20", GlobalFunc_4914(iParam0, joaat("DLC_MP_HIPS_F_HAIR0_0"), 2, 4), 558502875);
						break;
					
					case 22:
						GlobalFunc_4404(iParam3, Global_262145.f_5954[8], "CC_F_HS_21", GlobalFunc_4914(iParam0, joaat("DLC_MP_HIPS_F_HAIR1_0"), 2, 4), -1591241840);
						break;
					
					case 23:
						GlobalFunc_4404(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4965) * Global_262145.f_6130)), "CC_F_HS_22", GlobalFunc_4914(iParam0, joaat("DLC_MP_IND_F_HAIR0_0"), 2, 4), -1827014795);
						break;
					
					case 24:
						return 0;
						break;
				}
				break;
			
			case 8:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4403(iParam3, Global_262145.f_7000, "NONE", 2, -1, 1f, -1, -876282585);
						break;
					
					case 1:
						GlobalFunc_4403(iParam3, Global_262145.f_7001, "CC_EYEBRW_0", 2, 0, 1f, -1, -1180870440);
						break;
					
					case 2:
						GlobalFunc_4403(iParam3, Global_262145.f_7002, "CC_EYEBRW_1", 2, 1, 1f, -1, -1502662020);
						break;
					
					case 3:
						GlobalFunc_4403(iParam3, Global_262145.f_7003, "CC_EYEBRW_2", 2, 2, 1f, -1, -1785163569);
						break;
					
					case 4:
						GlobalFunc_4403(iParam3, Global_262145.f_7004, "CC_EYEBRW_3", 2, 3, 1f, -1, 80113449);
						break;
					
					case 5:
						GlobalFunc_4403(iParam3, Global_262145.f_7005, "CC_EYEBRW_4", 2, 4, 1f, -1, -216740922);
						break;
					
					case 6:
						GlobalFunc_4403(iParam3, Global_262145.f_7006, "CC_EYEBRW_5", 2, 5, 1f, -1, -533027310);
						break;
					
					case 7:
						GlobalFunc_4403(iParam3, Global_262145.f_7007, "CC_EYEBRW_6", 2, 6, 1f, -1, -829553991);
						break;
					
					case 8:
						GlobalFunc_4403(iParam3, Global_262145.f_7008, "CC_EYEBRW_7", 2, 7, 1f, -1, -531257788);
						break;
					
					case 9:
						GlobalFunc_4403(iParam3, Global_262145.f_7009, "CC_EYEBRW_8", 2, 8, 1f, -1, -827784469);
						break;
					
					case 10:
						GlobalFunc_4403(iParam3, Global_262145.f_7010, "CC_EYEBRW_9", 2, 9, 1f, -1, 744660972);
						break;
					
					case 11:
						GlobalFunc_4403(iParam3, Global_262145.f_7011, "CC_EYEBRW_10", 2, 10, 1f, -1, 899625573);
						break;
					
					case 12:
						GlobalFunc_4403(iParam3, Global_262145.f_7012, "CC_EYEBRW_11", 2, 11, 1f, -1, 266299110);
						break;
					
					case 13:
						GlobalFunc_4403(iParam3, Global_262145.f_7013, "CC_EYEBRW_12", 2, 12, 1f, -1, -1641282671);
						break;
					
					case 14:
						GlobalFunc_4403(iParam3, Global_262145.f_7014, "CC_EYEBRW_13", 2, 13, 1f, -1, -195383331);
						break;
					
					case 15:
						GlobalFunc_4403(iParam3, Global_262145.f_7015, "CC_EYEBRW_14", 2, 14, 1f, -1, 33245982);
						break;
					
					case 16:
						GlobalFunc_4403(iParam3, Global_262145.f_7016, "CC_EYEBRW_15", 2, 15, 1f, -1, -686033552);
						break;
					
					case 17:
						GlobalFunc_4403(iParam3, Global_262145.f_7017, "CC_EYEBRW_16", 2, 16, 1f, -1, 1700172263);
						break;
					
					case 18:
						GlobalFunc_4403(iParam3, Global_262145.f_7018, "CC_EYEBRW_17", 2, 17, 1f, -1, -1163314037);
						break;
					
					case 19:
						GlobalFunc_4403(iParam3, Global_262145.f_7019, "CC_EYEBRW_18", 2, 18, 1f, -1, -939239615);
						break;
					
					case 20:
						GlobalFunc_4403(iParam3, Global_262145.f_7020, "CC_EYEBRW_19", 2, 19, 1f, -1, -1579861681);
						break;
					
					case 21:
						GlobalFunc_4403(iParam3, Global_262145.f_7021, "CC_EYEBRW_20", 2, 20, 1f, -1, -1237032403);
						break;
					
					case 22:
						GlobalFunc_4403(iParam3, Global_262145.f_7022, "CC_EYEBRW_21", 2, 21, 1f, -1, 1942740285);
						break;
					
					case 23:
						GlobalFunc_4403(iParam3, Global_262145.f_7023, "CC_EYEBRW_22", 2, 22, 1f, -1, 558544952);
						break;
					
					case 24:
						GlobalFunc_4403(iParam3, Global_262145.f_7024, "CC_EYEBRW_23", 2, 23, 1f, -1, 1335891174);
						break;
					
					case 25:
						GlobalFunc_4403(iParam3, Global_262145.f_7025, "CC_EYEBRW_24", 2, 24, 1f, -1, 2129064819);
						break;
					
					case 26:
						GlobalFunc_4403(iParam3, Global_262145.f_7026, "CC_EYEBRW_25", 2, 25, 1f, -1, -699850186);
						break;
					
					case 27:
						GlobalFunc_4403(iParam3, Global_262145.f_7027, "CC_EYEBRW_26", 2, 26, 1f, -1, -864874870);
						break;
					
					case 28:
						GlobalFunc_4403(iParam3, Global_262145.f_7028, "CC_EYEBRW_27", 2, 27, 1f, -1, 333978995);
						break;
					
					case 29:
						GlobalFunc_4403(iParam3, Global_262145.f_7029, "CC_EYEBRW_28", 2, 28, 1f, -1, 1109522918);
						break;
					
					case 30:
						GlobalFunc_4403(iParam3, Global_262145.f_7030, "CC_EYEBRW_29", 2, 29, 1f, -1, -635535959);
						break;
					
					case 31:
						GlobalFunc_4403(iParam3, Global_262145.f_7031, "CC_EYEBRW_30", 2, 30, 1f, -1, -966961625);
						break;
					
					case 32:
						GlobalFunc_4403(iParam3, Global_262145.f_7032, "CC_EYEBRW_31", 2, 31, 1f, -1, -595983772);
						break;
					
					case 33:
						GlobalFunc_4403(iParam3, Global_262145.f_7033, "CC_EYEBRW_32", 2, 32, 1f, -1, 1319397047);
						break;
					
					case 34:
						GlobalFunc_4403(iParam3, Global_262145.f_7034, "CC_EYEBRW_33", 2, 33, 1f, -1, 15059771);
						break;
					
					case 35:
						return 0;
						break;
				}
				break;
			
			case 10:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4403(iParam3, Global_262145.f_7035, "FACE_E_C_0", 7, 0, 1f, -1, -679880450);
						break;
					
					case 1:
						GlobalFunc_4403(iParam3, Global_262145.f_7036, "FACE_E_C_1", 7, 1, 1f, -1, -1968193685);
						break;
					
					case 2:
						GlobalFunc_4403(iParam3, Global_262145.f_7037, "FACE_E_C_2", 7, 2, 1f, -1, 1656811402);
						break;
					
					case 3:
						GlobalFunc_4403(iParam3, Global_262145.f_7038, "FACE_E_C_3", 7, 3, 1f, -1, 1409143300);
						break;
					
					case 4:
						GlobalFunc_4403(iParam3, Global_262145.f_7039, "FACE_E_C_4", 7, 4, 1f, -1, 1047930613);
						break;
					
					case 5:
						GlobalFunc_4403(iParam3, Global_262145.f_7040, "FACE_E_C_5", 7, 5, 1f, -1, 834145657);
						break;
					
					case 6:
						GlobalFunc_4403(iParam3, Global_262145.f_7041, "FACE_E_C_6", 7, 6, 1f, -1, 1301103915);
						break;
					
					case 7:
						GlobalFunc_4403(iParam3, Global_262145.f_7042, "FACE_E_C_7", 7, 7, 1f, -1, 5679807);
						break;
					
					case 8:
						GlobalFunc_4403(iParam3, Global_262145.f_7043, "FACE_E_C_8", 7, 8, 1f, -1, 1241824794);
						break;
					
					case 9:
						GlobalFunc_4403(iParam3, Global_262145.f_7044, "FACE_E_C_9", 7, 9, 1f, -1, 1558963176);
						break;
					
					case 10:
						GlobalFunc_4403(iParam3, Global_262145.f_7045, "FACE_E_C_10", 7, 10, 1f, -1, 1466156191);
						break;
					
					case 11:
						GlobalFunc_4403(iParam3, Global_262145.f_7046, "FACE_E_C_11", 7, 11, 1f, -1, 1713299989);
						break;
					
					case 12:
						GlobalFunc_4403(iParam3, Global_262145.f_7047, "FACE_E_C_12", 7, 12, 1f, -1, 1415036551);
						break;
					
					case 13:
						GlobalFunc_4403(iParam3, Global_262145.f_7048, "FACE_E_C_13", 7, 13, 1f, -1, 1153834856);
						break;
					
					case 14:
						GlobalFunc_4403(iParam3, Global_262145.f_7049, "FACE_E_C_14", 7, 14, 1f, -1, 1360836629);
						break;
					
					case 15:
						GlobalFunc_4403(iParam3, Global_262145.f_7050, "FACE_E_C_15", 7, 15, 1f, -1, -1622780825);
						break;
					
					case 16:
						GlobalFunc_4403(iParam3, Global_262145.f_7051, "FACE_E_C_16", 7, 16, 1f, -1, -1374686726);
						break;
					
					case 17:
						GlobalFunc_4403(iParam3, Global_262145.f_7052, "FACE_E_C_17", 7, 17, 1f, -1, 2040629534);
						break;
					
					case 18:
						GlobalFunc_4403(iParam3, Global_262145.f_7053, "FACE_E_C_18", 7, 18, 1f, -1, -1973146973);
						break;
					
					case 19:
						GlobalFunc_4403(iParam3, Global_262145.f_7054, "FACE_E_C_19", 7, 19, 1f, -1, -657864855);
						break;
					
					case 20:
						GlobalFunc_4403(iParam3, Global_262145.f_7055, "FACE_E_C_20", 7, 20, 1f, -1, 1377860065);
						break;
					
					case 21:
						GlobalFunc_4403(iParam3, Global_262145.f_7056, "FACE_E_C_21", 7, 21, 1f, -1, 113042203);
						break;
					
					case 22:
						GlobalFunc_4403(iParam3, Global_262145.f_7057, "FACE_E_C_22", 7, 22, 1f, -1, -712703828);
						break;
					
					case 23:
						GlobalFunc_4403(iParam3, Global_262145.f_7058, "FACE_E_C_23", 7, 23, 1f, -1, 200109448);
						break;
					
					case 24:
						GlobalFunc_4403(iParam3, Global_262145.f_7059, "FACE_E_C_24", 7, 24, 1f, -1, -705035870);
						break;
					
					case 25:
						GlobalFunc_4403(iParam3, Global_262145.f_7060, "FACE_E_C_25", 7, 25, 1f, -1, -1340787251);
						break;
					
					case 26:
						GlobalFunc_4403(iParam3, Global_262145.f_7061, "FACE_E_C_26", 7, 26, 1f, -1, -107624231);
						break;
					
					case 27:
						GlobalFunc_4403(iParam3, Global_262145.f_7062, "FACE_E_C_27", 7, 27, 1f, -1, -784730090);
						break;
					
					case 28:
						GlobalFunc_4403(iParam3, Global_262145.f_7063, "FACE_E_C_28", 7, 28, 1f, -1, -1628925068);
						break;
					
					case 29:
						GlobalFunc_4403(iParam3, Global_262145.f_7064, "FACE_E_C_29", 7, 29, 1f, -1, 1496156159);
						break;
					
					case 30:
						GlobalFunc_4403(iParam3, Global_262145.f_7065, "FACE_E_C_30", 7, 30, 1f, -1, -1247690782);
						break;
					
					case 31:
						GlobalFunc_4403(iParam3, Global_262145.f_7066, "FACE_E_C_31", 7, 31, 1f, -1, -1569777283);
						break;
					
					case 32:
						return 0;
						break;
				}
				break;
			
			case 11:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2580)), "NONE", 4, -1, 1f, 28, 1939083358);
						break;
					
					case 1:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2597)), "CC_MKUP_16", 4, 16, 1f, 45, -2050050861);
						break;
					
					case 2:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_262145.f_2598)), "CC_MKUP_17", 4, 17, 1f, 46, -1086019650);
						break;
					
					case 3:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(750) * Global_262145.f_2599)), "CC_MKUP_18", 4, 18, 1f, 47, -796734918);
						break;
					
					case 4:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5750) * Global_262145.f_2600)), "CC_MKUP_19", 4, 19, 1f, 48, -2051001154);
						break;
					
					case 5:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2601)), "CC_MKUP_20", 4, 20, 1f, 49, -1753327558);
						break;
					
					case 6:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(6000) * Global_262145.f_2602)), "CC_MKUP_21", 4, 21, 1f, 50, -778482577);
						break;
					
					case 7:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2607)), "CC_MKUP_26", 4, 26, 1f, 55, -487919854);
						break;
					
					case 8:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5500) * Global_262145.f_2608)), "CC_MKUP_27", 4, 27, 1f, 56, 1063167984);
						break;
					
					case 9:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2609)), "CC_MKUP_28", 4, 28, 1f, 57, 1352190564);
						break;
					
					case 10:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2000) * Global_262145.f_2610)), "CC_MKUP_29", 4, 29, 1f, 58, 1918883225);
						break;
					
					case 11:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(15000) * Global_262145.f_2611)), "CC_MKUP_30", 4, 30, 1f, 59, 2140499972);
						break;
					
					case 12:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_262145.f_2612)), "CC_MKUP_31", 4, 31, 1f, 60, -1622298764);
						break;
					
					case 13:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(25000) * Global_262145.f_6130)), "CC_MKUP_33", 4, 33, 1f, 92, -1384887359);
						break;
					
					case 14:
						return 0;
						break;
				}
				break;
			
			case 14:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2580)), "NONE", 4, -1, 1f, 28, -1451684059);
						break;
					
					case 1:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(225) * Global_262145.f_2581)), "CC_MKUP_0", 4, 0, 1f, 29, -675288142);
						break;
					
					case 2:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(250) * Global_262145.f_2582)), "CC_MKUP_1", 4, 1, 1f, 30, -984234274);
						break;
					
					case 3:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(175) * Global_262145.f_2583)), "CC_MKUP_2", 4, 2, 1f, 31, -258728614);
						break;
					
					case 4:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(610) * Global_262145.f_2584)), "CC_MKUP_3", 4, 3, 1f, 32, 516356543);
						break;
					
					case 5:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(150) * Global_262145.f_2585)), "CC_MKUP_4", 4, 4, 1f, 33, 200791073);
						break;
					
					case 6:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(200) * Global_262145.f_2586)), "CC_MKUP_5", 4, 5, 1f, 34, 976334996);
						break;
					
					case 7:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(870) * Global_262145.f_2587)), "CC_MKUP_6", 4, 6, 1f, 35, 743642327);
						break;
					
					case 8:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(275) * Global_262145.f_2588)), "CC_MKUP_7", 4, 7, 1f, 36, 1511583842);
						break;
					
					case 9:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(480) * Global_262145.f_2589)), "CC_MKUP_8", 4, 8, 1f, 37, 1238290382);
						break;
					
					case 10:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2000) * Global_262145.f_2590)), "CC_MKUP_9", 4, 9, 1f, 38, -587327163);
						break;
					
					case 11:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(740) * Global_262145.f_2591)), "CC_MKUP_10", 4, 10, 1f, 39, -1009457421);
						break;
					
					case 12:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(935) * Global_262145.f_2592)), "CC_MKUP_11", 4, 11, 1f, 40, 1852062739);
						break;
					
					case 13:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(675) * Global_262145.f_2593)), "CC_MKUP_12", 4, 12, 1f, 41, 1561958782);
						break;
					
					case 14:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_262145.f_2594)), "CC_MKUP_13", 4, 13, 1f, 42, -1779135693);
						break;
					
					case 15:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(805) * Global_262145.f_2595)), "CC_MKUP_14", 4, 14, 1f, 43, 2022396001);
						break;
					
					case 16:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(545) * Global_262145.f_2596)), "CC_MKUP_15", 4, 15, 1f, 44, -1277868344);
						break;
					
					case 17:
						GlobalFunc_4403(iParam3, SYSTEM::ROUND((SYSTEM::TO_FLOAT(300) * Global_262145.f_2613)), "CC_MKUP_32", 4, 32, 1f, 91, -1046224283);
						break;
					
					case 18:
						GlobalFunc_4403(iParam3, Global_262145.f_7067, "CC_MKUP_34", 4, 34, 1f, -1, -1992232544);
						break;
					
					case 19:
						GlobalFunc_4403(iParam3, Global_262145.f_7068, "CC_MKUP_35", 4, 35, 1f, -1, -1511904542);
						break;
					
					case 20:
						GlobalFunc_4403(iParam3, Global_262145.f_7069, "CC_MKUP_36", 4, 36, 1f, -1, 338954980);
						break;
					
					case 21:
						GlobalFunc_4403(iParam3, Global_262145.f_7070, "CC_MKUP_37", 4, 37, 1f, -1, 644853595);
						break;
					
					case 22:
						GlobalFunc_4403(iParam3, Global_262145.f_7071, "CC_MKUP_38", 4, 38, 1f, -1, 928043293);
						break;
					
					case 23:
						GlobalFunc_4403(iParam3, Global_262145.f_7072, "CC_MKUP_39", 4, 39, 1f, -1, 1233483142);
						break;
					
					case 24:
						GlobalFunc_4403(iParam3, Global_262145.f_7073, "CC_MKUP_40", 4, 40, 1f, -1, 455547074);
						break;
					
					case 25:
						GlobalFunc_4403(iParam3, Global_262145.f_7074, "CC_MKUP_41", 4, 41, 1f, -1, 753187901);
						break;
					
					case 26:
						return 0;
						break;
				}
				break;
			
			case 13:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4403(iParam3, Global_262145.f_7075, "NONE", 5, -1, 1f, -1, -1381379572);
						break;
					
					case 1:
						GlobalFunc_4403(iParam3, Global_262145.f_7076, "CC_BLUSH_0", 5, 0, 1f, -1, -978746865);
						break;
					
					case 2:
						GlobalFunc_4403(iParam3, Global_262145.f_7077, "CC_BLUSH_1", 5, 1, 1f, -1, 946792344);
						break;
					
					case 3:
						GlobalFunc_4403(iParam3, Global_262145.f_7078, "CC_BLUSH_2", 5, 2, 1f, -1, -366195948);
						break;
					
					case 4:
						GlobalFunc_4403(iParam3, Global_262145.f_7079, "CC_BLUSH_3", 5, 3, 1f, -1, -722394978);
						break;
					
					case 5:
						GlobalFunc_4403(iParam3, Global_262145.f_7080, "CC_BLUSH_4", 5, 4, 1f, -1, 216207489);
						break;
					
					case 6:
						GlobalFunc_4403(iParam3, Global_262145.f_7081, "CC_BLUSH_5", 5, 5, 1f, -1, 2124706822);
						break;
					
					case 7:
						GlobalFunc_4403(iParam3, Global_262145.f_7082, "CC_BLUSH_6", 5, 6, 1f, -1, 832559610);
						break;
					
					case 8:
						return 0;
						break;
				}
				break;
			
			case 15:
				switch (iParam2)
				{
					case 0:
						GlobalFunc_4403(iParam3, Global_262145.f_7083, "NONE", 8, -1, 1f, -1, -791212145);
						break;
					
					case 1:
						GlobalFunc_4403(iParam3, Global_262145.f_7084, "CC_LIPSTICK_0", 8, 0, 1f, -1, 1426003941);
						break;
					
					case 2:
						GlobalFunc_4403(iParam3, Global_262145.f_7085, "CC_LIPSTICK_1", 8, 1, 1f, -1, -2062125037);
						break;
					
					case 3:
						GlobalFunc_4403(iParam3, Global_262145.f_7086, "CC_LIPSTICK_2", 8, 2, 1f, -1, 2002508958);
						break;
					
					case 4:
						GlobalFunc_4403(iParam3, Global_262145.f_7087, "CC_LIPSTICK_3", 8, 3, 1f, -1, -1983118982);
						break;
					
					case 5:
						GlobalFunc_4403(iParam3, Global_262145.f_7088, "CC_LIPSTICK_4", 8, 4, 1f, -1, 825938009);
						break;
					
					case 6:
						GlobalFunc_4403(iParam3, Global_262145.f_7089, "CC_LIPSTICK_5", 8, 5, 1f, -1, 1670231294);
						break;
					
					case 7:
						GlobalFunc_4403(iParam3, Global_262145.f_7090, "CC_LIPSTICK_6", 8, 6, 1f, -1, 1439144306);
						break;
					
					case 8:
						GlobalFunc_4403(iParam3, Global_262145.f_7091, "CC_LIPSTICK_7", 8, 7, 1f, -1, -2008613264);
						break;
					
					case 9:
						GlobalFunc_4403(iParam3, Global_262145.f_7092, "CC_LIPSTICK_8", 8, 8, 1f, -1, 137657929);
						break;
					
					case 10:
						GlobalFunc_4403(iParam3, Global_262145.f_7093, "CC_LIPSTICK_9", 8, 9, 1f, -1, 850282205);
						break;
					
					case 11:
						return 0;
						break;
				}
				break;
			}
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(iParam3->f_1)))
	{
		GlobalFunc_6448(&sVar0, iParam1, iParam3->f_1, 0);
		if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar0))
			{
			}
			return !MISC::IS_STRING_NULL_OR_EMPTY(&(iParam3->f_1));
		}
		iVar16 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar0), GlobalFunc_4402(iParam1), 1);
		if (*iParam3 == iVar16)
		{
		}
		*iParam3 = iVar16;
	}
	return !MISC::IS_STRING_NULL_OR_EMPTY(&(iParam3->f_1));
}










void func_403(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)//Position - 0x29182
{
	if (iParam7 == 1)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
	}
	if (iParam1 == 7)
	{
		PED::_SET_PED_EYE_COLOR(iParam0, iParam2);
	}
	else
	{
		if (iParam5 == 1)
		{
		}
		PED::SET_PED_HEAD_OVERLAY(iParam0, iParam1, iParam2, fParam6);
		if (iParam5 != 0)
		{
			if (iParam3 == -1)
			{
				iParam3 = func_245(iParam1, &iParam5, -1);
			}
			if (iParam4 == -1)
			{
				iParam4 = func_268(iParam1, -1);
			}
			PED::_SET_PED_HEAD_OVERLAY_COLOR(iParam0, iParam1, iParam5, iParam3, iParam4);
		}
	}
}

int func_404(int iParam0)//Position - 0x291F5
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return iParam0;
	}
	if (!GlobalFunc_1611())
	{
		return iParam0;
	}
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 27;
		
		case 2:
			return 28;
		
		case 3:
			return 29;
		
		case 4:
			return 30;
		
		case 5:
			return 31;
		
		case 6:
			return 32;
		
		case 7:
			return 33;
		
		case 8:
			return 34;
		
		case 9:
			return 35;
		
		case 10:
			return 36;
		
		case 11:
			return 1;
		
		case 12:
			return 2;
		
		case 13:
			return 3;
		
		case 14:
			return 4;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 7;
		
		case 18:
			return 8;
		
		case 19:
			return 9;
		
		case 20:
			return 10;
		
		case 21:
			return 11;
		
		case 22:
			return 12;
		
		case 23:
			return 13;
		
		case 24:
			return 14;
		
		case 25:
			return 15;
		
		case 26:
			return 16;
		
		case 27:
			return 17;
		
		case 28:
			return 18;
		
		case 29:
			return 19;
		
		default:
	}
	return -1;
}


















void func_422(var uParam0)//Position - 0x2995C
{
	int iVar0;
	struct<12> Var1;
	int iVar13;
	struct<10> Var14;
	
	if (GlobalFunc_5785(1))
	{
		if (Global_68245)
		{
			if (uParam0->f_494 == 2)
			{
			}
			else if (uParam0->f_494 == 1)
			{
				func_455(27, 1, -1);
				if (uParam0->f_103.f_2 > 0)
				{
					GlobalFunc_5790(joaat("mpply_ingamestore_moneyspent"), uParam0->f_103.f_2);
				}
				GlobalFunc_8219(Global_2541867[uParam0->f_103.f_1]);
				Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
				Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
				Stack.Push(Global_2541867[uParam0->f_103.f_1]);
				Stack.Push(1);
				Stack.Push(1);
				Call_Loc(uParam0->f_451);
				iVar0 = MISC::GET_HASH_KEY(&(uParam0->f_534));
				if (((((((((iVar0 == 1577121865 || iVar0 == 884057515) || iVar0 == 2055188806) || iVar0 == 1362452146) || iVar0 == -1761842625) || iVar0 == 665775322) || iVar0 == 618391324) || iVar0 == 497473714) || iVar0 == 123808807) || iVar0 == -231538229)
				{
					GlobalFunc_5217(3606, 1, -1, 1);
				}
				uParam0->f_470 = 1;
			}
			else if (uParam0->f_494 == 3)
			{
				uParam0->f_470 = 1;
			}
			else if (func_475(uParam0->f_494))
			{
				if (func_393(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_494, uParam0->f_103.f_1, &Var1))
				{
					if (Var1.f_9 == 0)
					{
						func_455(27, 1, -1);
						if (uParam0->f_103.f_2 > 0)
						{
							GlobalFunc_5790(joaat("mpply_ingamestore_moneyspent"), uParam0->f_103.f_2);
						}
						GlobalFunc_8219(Global_2541867[uParam0->f_103.f_1]);
						Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
						Stack.Push(Global_2541867.f_111[uParam0->f_103.f_1]);
						Stack.Push(Global_2541867[uParam0->f_103.f_1]);
						Stack.Push(1);
						Stack.Push(1);
						Call_Loc(uParam0->f_451);
						if (Var1.f_11 == 1271240597 || Var1.f_11 == -1827014795)
						{
							GlobalFunc_5217(3606, 1, -1, 1);
						}
						uParam0->f_470 = 1;
					}
					else if (Var1.f_9 == 1 || Var1.f_9 == 2)
					{
						if (((uParam0->f_494 == 11 || uParam0->f_494 == 13) || uParam0->f_494 == 14) || uParam0->f_494 == 15)
						{
							if (Var1.f_11 == 1397114629 || Var1.f_11 == -1384887359)
							{
								GlobalFunc_5217(3607, 1, -1, 1);
							}
						}
						uParam0->f_470 = 1;
					}
				}
				uParam0->f_470 = 1;
			}
		}
		else
		{
			if (uParam0->f_103.f_2 > 0)
			{
				GlobalFunc_10834(GlobalFunc_8315(), GlobalFunc_2471(*uParam0), uParam0->f_103.f_2);
			}
			iVar13 = GlobalFunc_8315();
			if (uParam0->f_494 == 1)
			{
				func_438();
				if (GlobalFunc_892(6, 0))
				{
					if (iVar13 == 1)
					{
						GlobalFunc_2196(6, 1, 1);
					}
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar13 /*65*/].f_59 = Global_2541867[uParam0->f_103.f_1];
			}
			else if (uParam0->f_494 == 2)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar13 /*65*/].f_62 = Global_2541867[uParam0->f_103.f_1];
			}
		}
		Global_2540563 = 1;
		func_424(*uParam0, 1, 4);
		if (GlobalFunc_218())
		{
			GlobalFunc_5069(GlobalFunc_5422());
		}
		if (uParam0->f_494 == 1)
		{
			uParam0->f_254 = Global_2541867[uParam0->f_103.f_1];
		}
		else if (uParam0->f_494 == 2)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_255 = func_404(uParam0->f_103.f_1);
			}
			else
			{
				uParam0->f_255 = Global_2541867[uParam0->f_103.f_1];
			}
			uParam0->f_257 = 1f;
		}
		else if (uParam0->f_494 == 3)
		{
			uParam0->f_579 = uParam0->f_103.f_1;
		}
		else if (func_475(uParam0->f_494))
		{
			if (func_393(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_494, uParam0->f_103.f_1, &Var14))
			{
				if (Var14.f_9 == 0)
				{
					uParam0->f_254 = uParam0->f_103.f_1;
				}
				else if (Var14.f_9 == 1 || Var14.f_9 == 2)
				{
					uParam0->f_255 = uParam0->f_103.f_1;
					if (Var14.f_9 == 2)
					{
						PED::CLONE_PED_TO_TARGET(uParam0->f_608.f_2, PLAYER::PLAYER_PED_ID());
					}
				}
			}
		}
		else
		{
			uParam0->f_254 = uParam0->f_103.f_1;
			uParam0->f_255 = uParam0->f_103.f_1;
		}
		uParam0->f_103.f_23 = 1;
		uParam0->f_558 = 1;
		GlobalFunc_184(136, 1);
	}
}


void func_424(int iParam0, bool bParam1, int iParam2)//Position - 0x29DEE
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (bParam1)
	{
		if (!GlobalFunc_7782(iParam0, 3, 0))
		{
			GlobalFunc_7834(iParam0, 3, 0);
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			switch (GlobalFunc_330(iParam0))
			{
				case 4:
					GlobalFunc_7734(305, 0, 0);
					break;
				
				case 1:
					GlobalFunc_7734(304, 0, 0);
					break;
				
				case 3:
					GlobalFunc_7734(308, 0, 0);
					break;
				
				case 0:
					GlobalFunc_7734(306, 0, 0);
					break;
				
				case 2:
					GlobalFunc_7734(307, 0, 0);
					break;
				}
		}
		if (Global_90014.f_1263 >= 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				bVar0 = true;
				if (iParam2 == 6)
				{
					if (GlobalFunc_4962(1))
					{
						GlobalFunc_4960(1);
						bVar0 = false;
					}
				}
				if (bVar0)
				{
					bVar1 = MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0;
					bVar2 = MONEY::NETWORK_GET_VC_BANK_BALANCE() < Global_90014.f_1263;
					if (GlobalFunc_218())
					{
						if (GlobalFunc_1360(GlobalFunc_5422()) > 0)
						{
							NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(GlobalFunc_1360(GlobalFunc_5422()));
						}
					}
					if (Global_90014.f_1263 > 0)
					{
						if (iParam2 == 1 && Global_90014.f_1264 == -61829581)
						{
							MONEY::NETWORK_BUY_ITEM(Global_90014.f_1263, MISC::GET_HASH_KEY(&(Global_90014.f_1259)), 17, Global_90014.f_1265, bVar1, &(Global_90014.f_1259), MISC::GET_HASH_KEY(GlobalFunc_1988(iParam0)), Global_90014.f_1264, Global_90014.f_1266, bVar2);
						}
						else if (((iParam2 == 0 || iParam2 == 7) || iParam2 == 9) || iParam2 == 11)
						{
							MONEY::NETWORK_BUY_ITEM(Global_90014.f_1263, Global_90014.f_1264, iParam2, Global_90014.f_1265, bVar1, &(Global_90014.f_1259), MISC::GET_HASH_KEY(GlobalFunc_1988(iParam0)), Global_90014.f_1264, Global_90014.f_1266, bVar2);
						}
						else if ((((iParam2 == 1 || iParam2 == 2) || iParam2 == 8) || iParam2 == 16) || iParam2 == 15)
						{
							MONEY::NETWORK_BUY_ITEM(Global_90014.f_1263, Global_90014.f_1264, iParam2, Global_90014.f_1265, bVar1, &(Global_90014.f_1259), MISC::GET_HASH_KEY(GlobalFunc_1988(iParam0)), Global_90014.f_1264, Global_90014.f_1266, bVar2);
						}
						else
						{
							MONEY::NETWORK_BUY_ITEM(Global_90014.f_1263, MISC::GET_HASH_KEY(&(Global_90014.f_1259)), iParam2, Global_90014.f_1265, bVar1, &(Global_90014.f_1259), MISC::GET_HASH_KEY(GlobalFunc_1988(iParam0)), Global_90014.f_1264, Global_90014.f_1266, bVar2);
						}
					}
				}
			}
			else if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_90014.f_1259)))
			{
				if (((iParam2 == 0 || iParam2 == 7) || iParam2 == 9) || iParam2 == 11)
				{
					if (Global_90014.f_1263 >= 0)
					{
						STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(iParam0)), Global_90014.f_1264, Global_90014.f_1266);
					}
				}
				else if ((((iParam2 == 1 || iParam2 == 2) || iParam2 == 8) || iParam2 == 16) || iParam2 == 15)
				{
					if (Global_90014.f_1263 >= 0)
					{
						STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(iParam0)), Global_90014.f_1264, Global_90014.f_1266);
					}
				}
				else if (Global_90014.f_1263 >= 0)
				{
					STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(iParam0)), 0, Global_90014.f_1266);
				}
			}
		}
	}
	else if (GlobalFunc_7782(iParam0, 3, 0))
	{
		GlobalFunc_7833(iParam0, 3, 0);
	}
}














void func_438()//Position - 0x2AD77
{
	int iVar0;
	
	iVar0 = GlobalFunc_6674(PLAYER::PLAYER_PED_ID());
	if (GlobalFunc_42(iVar0))
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1568[iVar0] = MISC::GET_GAME_TIMER();
	}
}

















void func_455(int iParam0, int iParam1, int iParam2)//Position - 0x2BD09
{
	int iVar0;
	
	iVar0 = GlobalFunc_6718(iParam0, GlobalFunc_4990(iParam2));
	iVar0 = (iVar0 + iParam1);
	GlobalFunc_6904(iParam0, iVar0, iParam2);
}



void func_458(var uParam0, bool bParam1)//Position - 0x2BD80
{
	float fVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	if (!CAM::DOES_CAM_EXIST(uParam0->f_38[1 /*12*/]))
	{
		uParam0->f_38[1 /*12*/] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	}
	if (!CAM::IS_CAM_ACTIVE(uParam0->f_38[1 /*12*/]))
	{
		if (GlobalFunc_4405(uParam0))
		{
			uParam0->f_507 = { 0.586f, -1.1006f, -0.1042f };
			uParam0->f_504 = { -816.306f, -182.914f, 37.8927f };
			uParam0->f_503 = 180f;
		}
		else
		{
			uParam0->f_507 = { 1.0109f, -0.8391f, -0.1795f };
			uParam0->f_504 = { 138.4104f, -1709.326f, 29.8074f };
			uParam0->f_503 = 0f;
			GlobalFunc_7133(1, uParam0->f_492, &(uParam0->f_504));
			GlobalFunc_7134(1, uParam0->f_492, &(uParam0->f_503));
		}
		uParam0->f_502 = 0f;
		CAM::SET_CAM_COORD(uParam0->f_38[1 /*12*/], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_504, uParam0->f_503, uParam0->f_507));
		CAM::POINT_CAM_AT_COORD(uParam0->f_38[1 /*12*/], uParam0->f_504);
		CAM::SET_CAM_FOV(uParam0->f_38[1 /*12*/], 47f);
		CAM::SET_CAM_ACTIVE(uParam0->f_38[1 /*12*/], 1);
		CAM::SET_CAM_ACTIVE(uParam0->f_38[0 /*12*/], 0);
		uParam0->f_511 = (uParam0->f_503 + 120f);
		uParam0->f_510 = (uParam0->f_503 - 150f);
		uParam0->f_512 = 0f;
		uParam0->f_677 = 1;
		fVar0 = 47f;
		if (func_475(uParam0->f_494))
		{
			if ((uParam0->f_494 == 5 || uParam0->f_494 == 12) || uParam0->f_494 == 9)
			{
				uParam0->f_677 = 1;
			}
			else
			{
				uParam0->f_677 = 0;
			}
		}
	}
	if (bParam1)
	{
		GlobalFunc_612(&uVar1, &uVar2, &iVar3, &iVar4, 0);
		if ((iVar3 < 32 && iVar3 > -32) && (iVar4 < 32 && iVar4 > -32))
		{
			if (iVar3 < 32 && iVar3 > -32)
			{
				iVar3 = 0;
			}
			else if (iVar3 < 0)
			{
				iVar3 = (iVar3 - 32);
			}
			else
			{
				iVar3 += 32;
			}
			if (iVar4 < 32 && iVar4 > -32)
			{
				iVar4 = 0;
			}
			else if (iVar4 < 0)
			{
				iVar4 = (iVar4 - 32);
			}
			else
			{
				iVar4 += 32;
			}
		}
		iVar3 = (iVar3 * -1);
		if (PAD::IS_LOOK_INVERTED())
		{
			iVar4 = (iVar4 * -1);
		}
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (GlobalFunc_1393(1, uParam0->f_103.f_1))
			{
				uParam0->f_503 = (uParam0->f_503 - (Global_2543379 * 200f));
				uParam0->f_502 = (uParam0->f_502 + (Global_2543380 * 2f));
			}
			else if (bLocal_98)
			{
				HUD::_SET_MOUSE_CURSOR_SPRITE(5);
			}
		}
		else
		{
			uParam0->f_503 = (uParam0->f_503 + (IntToFloat(iVar3) * 0.05f));
			uParam0->f_502 = (uParam0->f_502 + (IntToFloat(iVar4) * 0.0005f));
		}
		if (uParam0->f_503 < uParam0->f_510)
		{
			uParam0->f_503 = uParam0->f_510;
		}
		if (uParam0->f_503 > uParam0->f_511)
		{
			uParam0->f_503 = uParam0->f_511;
		}
		if (uParam0->f_502 > 0.8f)
		{
			uParam0->f_502 = 0.8f;
		}
		else if (uParam0->f_502 < -0.1f)
		{
			uParam0->f_502 = -0.1f;
		}
		fVar5 = 33f;
		if (uParam0->f_677)
		{
			if (!func_475(uParam0->f_494))
			{
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					if (PAD::IS_CONTROL_JUST_RELEASED(2, iLocal_93))
					{
						iLocal_94 = !iLocal_94;
					}
				}
				else
				{
					iLocal_94 = 0;
				}
				if (PAD::IS_CONTROL_PRESSED(2, iLocal_93) || iLocal_94)
				{
					if (uParam0->f_512 < 1f)
					{
						uParam0->f_512 = (uParam0->f_512 + 0.05f);
					}
					if (uParam0->f_512 > 1f)
					{
						uParam0->f_512 = 1f;
					}
				}
				else
				{
					if (uParam0->f_512 > 0f)
					{
						uParam0->f_512 = (uParam0->f_512 - 0.05f);
					}
					if (uParam0->f_512 < 0f)
					{
						uParam0->f_512 = 0f;
					}
				}
			}
			else
			{
				if (uParam0->f_512 > 0f)
				{
					uParam0->f_512 = (uParam0->f_512 - 0.05f);
				}
				if (uParam0->f_512 < 0f)
				{
					uParam0->f_512 = 0f;
				}
			}
		}
		else
		{
			if (uParam0->f_512 < 1f)
			{
				uParam0->f_512 = (uParam0->f_512 + 0.05f);
			}
			if (uParam0->f_512 > 1f)
			{
				uParam0->f_512 = 1f;
			}
		}
		if (uParam0->f_512 != 0f && uParam0->f_103.f_31 == 2)
		{
			fVar0 = GlobalFunc_5180(47f, fVar5, uParam0->f_512);
		}
		else
		{
			fVar0 = 47f;
		}
		CAM::SET_CAM_FOV(uParam0->f_38[1 /*12*/], fVar0);
		CAM::SET_CAM_COORD(uParam0->f_38[1 /*12*/], Vector(uParam0->f_502, 0f, 0f) + OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_504, uParam0->f_503, uParam0->f_507));
	}
	else
	{
		fVar0 = 47f;
		CAM::SET_CAM_FOV(uParam0->f_38[1 /*12*/], fVar0);
	}
}









void func_467(var uParam0, int iParam1)//Position - 0x2CB94
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!uParam0->f_557 || uParam0->f_558)
	{
		switch (uParam0->f_494)
		{
			case 0:
				if (!uParam0->f_558)
				{
					uParam0->f_103.f_1 = 0;
				}
				GlobalFunc_262(0);
				GlobalFunc_7023(*uParam0);
				GlobalFunc_1317(1, 0, 0, 0, 0);
				GlobalFunc_1316(1, 1, 1, 1, 1);
				GlobalFunc_1318("HAIR_TITLE_0");
				uParam0->f_461 = 0;
				uParam0->f_462 = 0;
				uParam0->f_469 = 0;
				if (func_145(uParam0, iVar1, 1))
				{
					GlobalFunc_7830(0, "HAIR_OPTION_1", 1, 1, 0, 0);
					GlobalFunc_8447(2, 0);
				}
				else
				{
					GlobalFunc_7830(0, "HAIR_OPTION_1", 0, 1, 0, 0);
				}
				if (func_477())
				{
					if (func_145(uParam0, iVar1, 2))
					{
						GlobalFunc_7830(1, "HAIR_OPTION_0", 1, 1, 0, 0);
						GlobalFunc_8447(2, 0);
					}
					else
					{
						GlobalFunc_7830(1, "HAIR_OPTION_0", 0, 1, 0, 0);
					}
					if (func_476())
					{
						if (func_145(uParam0, iVar1, 3))
						{
							GlobalFunc_7830(2, "HAIR_OPTION_2", 1, 1, 0, 0);
							GlobalFunc_8447(2, 0);
						}
						else
						{
							GlobalFunc_7830(2, "HAIR_OPTION_2", 0, 1, 0, 0);
						}
					}
				}
				else if (func_476())
				{
					if (func_145(uParam0, iVar1, 3))
					{
						GlobalFunc_7830(1, "HAIR_OPTION_2", 1, 1, 0, 0);
						GlobalFunc_8447(2, 0);
					}
					else
					{
						GlobalFunc_7830(1, "HAIR_OPTION_2", 0, 1, 0, 0);
					}
				}
				GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
				if (!func_475(uParam0->f_494))
				{
					GlobalFunc_1354(201, "ITEM_SELECT", -1);
				}
				else if (uParam0->f_494 == 5 || uParam0->f_494 == 12)
				{
					GlobalFunc_1354(201, "ITEM_SELECT", -1);
				}
				else
				{
					GlobalFunc_1354(201, "ITEM_BUY", -1);
				}
				if (uParam0->f_677)
				{
					GlobalFunc_1354(202, "ITEM_BACK", -1);
					GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
					if (!func_475(uParam0->f_494))
					{
						GlobalFunc_1354(iLocal_93, "ITEM_ZOOM", -1);
					}
				}
				else
				{
					GlobalFunc_1354(202, "ITEM_BACK", -1);
					GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
				}
				break;
			
			case 4:
				func_473(uParam0);
				break;
			
			case 1:
				func_370(uParam0, iParam1, 0);
				break;
			
			case 2:
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_370(uParam0, iParam1, 0);
				}
				else
				{
					func_471(uParam0, !uParam0->f_562);
					func_326(uParam0);
					GlobalFunc_262(0);
					GlobalFunc_7023(*uParam0);
					GlobalFunc_1317(1, 1, 0, 0, 0);
					GlobalFunc_1316(1, 2, 1, 1, 1);
					GlobalFunc_1318("HAIR_TITLE_1");
					uParam0->f_461 = 0;
					uParam0->f_462 = 0;
					uParam0->f_463 = 0;
					uParam0->f_469 = 0;
					iVar4 = func_177();
					iVar3 = 0;
					while (iVar3 < iVar4)
					{
						iVar2 = func_404(iVar3);
						StringCopy(&Var5, "HAIR_BEARD", 16);
						StringIntConCat(&Var5, iVar2, 16);
						if (func_323(&Var5, iVar2))
						{
							if (uParam0->f_103.f_1 == iVar3)
							{
								uParam0->f_463 = 1;
							}
						}
						if (uParam0->f_103.f_1 == iVar3)
						{
							uParam0->f_534 = { Var5 };
						}
						if (!func_325(iVar2) || func_324(iVar2))
						{
							if (func_176(iVar2) && !func_175(iVar2))
							{
								GlobalFunc_7830(iVar3, &Var5, 1, 1, 0, 0);
								GlobalFunc_8447(2, 0);
								if (iVar3 == uParam0->f_103.f_1)
								{
									uParam0->f_462 = 1;
								}
							}
							else
							{
								GlobalFunc_7830(iVar3, &Var5, 0, 1, 0, 0);
							}
							if (iVar2 == uParam0->f_255)
							{
								GlobalFunc_7830(iVar3, "", 1, 1, 0, 0);
								GlobalFunc_8447(14, 0);
							}
							else if (!func_176(iVar2))
							{
								GlobalFunc_7830(iVar3, "", 1, 1, 0, 0);
								GlobalFunc_8447(15, 0);
								if (iVar3 == uParam0->f_103.f_1)
								{
									uParam0->f_461 = 1;
								}
							}
							else
							{
								GlobalFunc_7830(iVar3, "ITEM_COST", 1, 1, 0, 0);
								GlobalFunc_8495(func_327(uParam0, iVar2, &Var5, 1), 0);
							}
						}
						iVar3++;
					}
					if (uParam0->f_103.f_1 > iVar4 || uParam0->f_103.f_1 < 0)
					{
						uParam0->f_103.f_1 = 0;
					}
					func_403(iParam1, 1, (func_404(uParam0->f_103.f_1) - 1), uParam0->f_602, 0, 0, 1f, 1);
					if (uParam0->f_677)
					{
						GlobalFunc_1354(201, "ITEM_BUY", -1);
						GlobalFunc_1354(202, "ITEM_BACK", -1);
						GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
						if (!func_475(uParam0->f_494))
						{
							GlobalFunc_1354(iLocal_93, "ITEM_ZOOM", -1);
						}
					}
					else
					{
						GlobalFunc_1354(201, "ITEM_BUY", -1);
						GlobalFunc_1354(202, "ITEM_BACK", -1);
						GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
					}
					if (uParam0->f_562)
					{
						uParam0->f_562 = 0;
						GlobalFunc_2487(uParam0->f_563);
					}
					GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
				}
				break;
			
			case 3:
				GlobalFunc_262(0);
				GlobalFunc_7023(*uParam0);
				GlobalFunc_1317(1, 1, 0, 0, 0);
				GlobalFunc_1316(1, 2, 1, 1, 1);
				GlobalFunc_1318("HAIR_TITLE_3");
				func_470(uParam0, !uParam0->f_562);
				if (uParam0->f_579 < 0 || uParam0->f_579 >= uParam0->f_580)
				{
					uParam0->f_579 = 0;
				}
				uParam0->f_463 = 0;
				iVar0 = 0;
				while (iVar0 < uParam0->f_580)
				{
					iVar0++;
				}
				if (uParam0->f_562)
				{
					uParam0->f_562 = 0;
					GlobalFunc_2487(uParam0->f_563);
				}
				else
				{
					uParam0->f_103.f_1 = uParam0->f_579;
				}
				GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
				if (uParam0->f_677)
				{
					GlobalFunc_1354(201, "ITEM_BUY", -1);
					GlobalFunc_1354(202, "ITEM_BACK", -1);
					GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
					if (!func_475(uParam0->f_494))
					{
						GlobalFunc_1354(iLocal_93, "ITEM_ZOOM", -1);
					}
				}
				else
				{
					GlobalFunc_1354(201, "ITEM_BUY", -1);
					GlobalFunc_1354(202, "ITEM_BACK", -1);
					GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
				}
				break;
			
			case 5:
				func_469(uParam0, iParam1);
				break;
			
			case 12:
				func_468(uParam0, iParam1);
				break;
			
			default:
				if (func_475(uParam0->f_494))
				{
					uParam0->f_676 = 1;
					func_250(uParam0, iParam1, 1, 1);
				}
				break;
		}
		uParam0->f_557 = 1;
		uParam0->f_558 = 0;
		uParam0->f_676 = 0;
	}
}

void func_468(var uParam0, int iParam1)//Position - 0x2D16E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	func_267(uParam0, !uParam0->f_558);
	GlobalFunc_262(0);
	GlobalFunc_7023(*uParam0);
	uParam0->f_461 = 0;
	uParam0->f_462 = 0;
	uParam0->f_469 = 0;
	GlobalFunc_1317(1, 0, 0, 0, 0);
	GlobalFunc_1316(1, 1, 1, 1, 1);
	GlobalFunc_1318(func_260(12, 1));
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = func_273(iVar1);
		if (func_275(iVar0, iVar2))
		{
			if (func_145(uParam0, iVar0, iVar2))
			{
				GlobalFunc_7830(iVar1, func_260(iVar2, 0), 1, 1, 0, 0);
				GlobalFunc_8447(2, 0);
			}
			else
			{
				GlobalFunc_7830(iVar1, func_260(iVar2, 0), 0, 1, 0, 0);
			}
		}
		iVar1++;
	}
	GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
	if (!func_475(uParam0->f_494))
	{
		GlobalFunc_1354(201, "ITEM_SELECT", -1);
	}
	else if (uParam0->f_494 == 5 || uParam0->f_494 == 12)
	{
		GlobalFunc_1354(201, "ITEM_SELECT", -1);
	}
	else
	{
		GlobalFunc_1354(201, "ITEM_BUY", -1);
	}
	if (uParam0->f_677)
	{
		GlobalFunc_1354(202, "ITEM_BACK", -1);
		GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
		if (!func_475(uParam0->f_494))
		{
			GlobalFunc_1354(iLocal_93, "ITEM_ZOOM", -1);
		}
	}
	else
	{
		GlobalFunc_1354(202, "ITEM_BACK", -1);
		GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
	}
	func_244(uParam0);
}

void func_469(var uParam0, int iParam1)//Position - 0x2D2CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	func_267(uParam0, !uParam0->f_558);
	GlobalFunc_262(0);
	GlobalFunc_7023(*uParam0);
	GlobalFunc_1317(1, 0, 0, 0, 0);
	GlobalFunc_1316(1, 1, 1, 1, 1);
	GlobalFunc_1318(func_260(5, 1));
	uParam0->f_461 = 0;
	uParam0->f_462 = 0;
	uParam0->f_469 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		iVar2 = func_276(iVar1);
		if (func_275(iVar0, iVar2))
		{
			bVar3 = false;
			if (iVar2 == 12)
			{
				if (!bVar3)
				{
					if (func_275(iVar0, 13))
					{
						if (func_145(uParam0, iVar0, 13))
						{
							bVar3 = true;
						}
					}
				}
				if (!bVar3)
				{
					if (func_275(iVar0, 14))
					{
						if (func_145(uParam0, iVar0, 14))
						{
							bVar3 = true;
						}
					}
				}
				if (!bVar3)
				{
					if (func_275(iVar0, 15))
					{
						if (func_145(uParam0, iVar0, 15))
						{
							bVar3 = true;
						}
					}
				}
			}
			else if (func_145(uParam0, iVar0, iVar2))
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				GlobalFunc_7830(iVar1, func_260(iVar2, 0), 1, 1, 0, 0);
				GlobalFunc_8447(2, 0);
			}
			else
			{
				GlobalFunc_7830(iVar1, func_260(iVar2, 0), 0, 1, 0, 0);
			}
		}
		iVar1++;
	}
	GlobalFunc_1355(uParam0->f_103.f_1, 1, 1);
	if (!func_475(uParam0->f_494))
	{
		GlobalFunc_1354(201, "ITEM_SELECT", -1);
	}
	else if (uParam0->f_494 == 5 || uParam0->f_494 == 12)
	{
		GlobalFunc_1354(201, "ITEM_SELECT", -1);
	}
	else
	{
		GlobalFunc_1354(201, "ITEM_BUY", -1);
	}
	if (uParam0->f_677)
	{
		GlobalFunc_1354(202, "ITEM_BACK", -1);
		GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
		if (!func_475(uParam0->f_494))
		{
			GlobalFunc_1354(iLocal_93, "ITEM_ZOOM", -1);
		}
	}
	else
	{
		GlobalFunc_1354(202, "ITEM_BACK", -1);
		GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
	}
	func_244(uParam0);
}

void func_470(var uParam0, bool bParam1)//Position - 0x2D4A7
{
	if (GlobalFunc_5785(1))
	{
		if (uParam0->f_579 == -1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_579 = GlobalFunc_6732(451, -1, -1) + 1;
				if (uParam0->f_579 == 256)
				{
					uParam0->f_579 = 0;
				}
			}
			uParam0->f_578 = uParam0->f_579;
		}
		if (bParam1)
		{
			uParam0->f_103.f_1 = uParam0->f_579;
		}
	}
}

void func_471(var uParam0, bool bParam1)//Position - 0x2D502
{
	if (GlobalFunc_5785(1))
	{
		if (uParam0->f_255 == -1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_255 = GlobalFunc_6732(448, -1, -1) + 1;
				if (uParam0->f_255 == 256)
				{
					uParam0->f_255 = 0;
				}
				uParam0->f_257 = GlobalFunc_6734(88, -1);
			}
			else
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(1);
				Stack.Push(-1);
				Call_Loc(uParam0->f_447);
				uParam0->f_255 = StackVal;
				uParam0->f_257 = 1f;
			}
			uParam0->f_256 = uParam0->f_255;
		}
		if (bParam1)
		{
			uParam0->f_103.f_1 = func_472(uParam0->f_255);
		}
	}
}

int func_472(int iParam0)//Position - 0x2D580
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return iParam0;
	}
	if (!GlobalFunc_1611())
	{
		return iParam0;
	}
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 27:
			return 1;
		
		case 28:
			return 2;
		
		case 29:
			return 3;
		
		case 30:
			return 4;
		
		case 31:
			return 5;
		
		case 32:
			return 6;
		
		case 33:
			return 7;
		
		case 34:
			return 8;
		
		case 35:
			return 9;
		
		case 36:
			return 10;
		
		case 1:
			return 11;
		
		case 2:
			return 12;
		
		case 3:
			return 13;
		
		case 4:
			return 14;
		
		case 5:
			return 15;
		
		case 6:
			return 16;
		
		case 7:
			return 17;
		
		case 8:
			return 18;
		
		case 9:
			return 19;
		
		case 10:
			return 20;
		
		case 11:
			return 21;
		
		case 12:
			return 22;
		
		case 13:
			return 23;
		
		case 14:
			return 24;
		
		case 15:
			return 25;
		
		case 16:
			return 26;
		
		case 17:
			return 27;
		
		case 18:
			return 28;
		
		case 19:
			return 29;
		
		default:
	}
	return -1;
}

void func_473(var uParam0)//Position - 0x2D6EC
{
	int iVar0;
	char* sVar1;
	int iVar5;
	
	iVar0 = -1;
	GlobalFunc_262(0);
	GlobalFunc_7023(*uParam0);
	GlobalFunc_1317(1, 1, 0, 0, 0);
	GlobalFunc_1316(1, 2, 1, 1, 1);
	GlobalFunc_1318("HAIR_TITLE_2");
	uParam0->f_461 = 0;
	uParam0->f_462 = 0;
	uParam0->f_463 = 0;
	uParam0->f_469 = 0;
	iVar5 = 0;
	while (iVar5 < 46)
	{
		if (MISC::IS_BIT_SET(uParam0->f_683[(iVar5 / 32)], (iVar5 % 32)))
		{
			func_474(iVar5, &sVar1);
			if (MISC::IS_BIT_SET(uParam0->f_686[(iVar5 / 32)], (iVar5 % 32)))
			{
				GlobalFunc_7830(iVar5, &sVar1, 1, 1, 0, 0);
				GlobalFunc_8447(2, 0);
			}
			else
			{
				GlobalFunc_7830(iVar5, &sVar1, 0, 1, 0, 0);
			}
			if (iVar0 == -1)
			{
				iVar0 = iVar5;
			}
		}
		iVar5++;
	}
	if (uParam0->f_562)
	{
		uParam0->f_562 = 0;
		GlobalFunc_2487(uParam0->f_563);
	}
	else
	{
		uParam0->f_682 = iVar0;
	}
	GlobalFunc_1355(uParam0->f_682, 1, 1);
	if (!func_475(uParam0->f_494))
	{
		GlobalFunc_1354(201, "ITEM_SELECT", -1);
	}
	else if (uParam0->f_494 == 5 || uParam0->f_494 == 12)
	{
		GlobalFunc_1354(201, "ITEM_SELECT", -1);
	}
	else
	{
		GlobalFunc_1354(201, "ITEM_BUY", -1);
	}
	if (uParam0->f_677)
	{
		GlobalFunc_1354(202, "ITEM_BACK", -1);
		GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
		if (!func_475(uParam0->f_494))
		{
			GlobalFunc_1354(iLocal_93, "ITEM_ZOOM", -1);
		}
	}
	else
	{
		GlobalFunc_1354(202, "ITEM_BACK", -1);
		GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
	}
}

void func_474(int iParam0, char* sParam1)//Position - 0x2D872
{
	StringCopy(sParam1, "HAIR_GROUP", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "HAIR_GROUP_IND1", 16);
			break;
		
		case 1:
			StringCopy(sParam1, "HAIR_GROUP_HIP1", 16);
			break;
		
		case 2:
			StringCopy(sParam1, "HAIR_GROUP_HIP2", 16);
			break;
		
		case 3:
			StringCopy(sParam1, "HAIR_GROUP_HIP3", 16);
			break;
		
		case 4:
			StringCopy(sParam1, "HAIR_GROUP_HIP4", 16);
			break;
		
		case 5:
			StringCopy(sParam1, "HAIR_GROUP_BUS1", 16);
			break;
		
		case 6:
			StringCopy(sParam1, "HAIR_GROUP_BUS2", 16);
			break;
		
		case 7:
			StringCopy(sParam1, "HAIR_GROUP_BUS3", 16);
			break;
		
		case 8:
			StringCopy(sParam1, "HAIR_GROUP_BUS4", 16);
			break;
		
		case 9:
			StringCopy(sParam1, "HAIR_GROUP_VAL1", 16);
			break;
		
		case 10:
			StringCopy(sParam1, "HAIR_GROUP_BCH1", 16);
			break;
		
		case 11:
			StringCopy(sParam1, "HAIR_GROUP_BCH2", 16);
			break;
		
		case 12:
			StringCopy(sParam1, "HAIR_GROUP_BCH3", 16);
			break;
		
		case 13:
			StringCopy(sParam1, "HAIR_GROUP_BCH4", 16);
			break;
		
		case 14:
			StringCopy(sParam1, "HAIR_GROUP_M0", 16);
			break;
		
		case 15:
			StringCopy(sParam1, "HAIR_GROUP_M1", 16);
			break;
		
		case 16:
			StringCopy(sParam1, "HAIR_GROUP_M2", 16);
			break;
		
		case 17:
			StringCopy(sParam1, "HAIR_GROUP_M3", 16);
			break;
		
		case 18:
			StringCopy(sParam1, "HAIR_GROUP_M4", 16);
			break;
		
		case 19:
			StringCopy(sParam1, "HAIR_GROUP_M5", 16);
			break;
		
		case 20:
			StringCopy(sParam1, "HAIR_GROUP_M6", 16);
			break;
		
		case 21:
			StringCopy(sParam1, "HAIR_GROUP_M7", 16);
			break;
		
		case 22:
			StringCopy(sParam1, "HAIR_GROUP_M8", 16);
			break;
		
		case 23:
			StringCopy(sParam1, "HAIR_GROUP_M9", 16);
			break;
		
		case 24:
			StringCopy(sParam1, "HAIR_GROUP_M10", 16);
			break;
		
		case 25:
			StringCopy(sParam1, "HAIR_GROUP_M11", 16);
			break;
		
		case 26:
			StringCopy(sParam1, "HAIR_GROUP_M12", 16);
			break;
		
		case 27:
			StringCopy(sParam1, "HAIR_GROUP_M13", 16);
			break;
		
		case 28:
			StringCopy(sParam1, "HAIR_GROUP_M14", 16);
			break;
		
		case 29:
			StringCopy(sParam1, "HAIR_GROUP_M15", 16);
			break;
		
		case 30:
			StringCopy(sParam1, "HAIR_GROUP_F0", 16);
			break;
		
		case 31:
			StringCopy(sParam1, "HAIR_GROUP_F1", 16);
			break;
		
		case 32:
			StringCopy(sParam1, "HAIR_GROUP_F2", 16);
			break;
		
		case 33:
			StringCopy(sParam1, "HAIR_GROUP_F3", 16);
			break;
		
		case 34:
			StringCopy(sParam1, "HAIR_GROUP_F4", 16);
			break;
		
		case 35:
			StringCopy(sParam1, "HAIR_GROUP_F5", 16);
			break;
		
		case 36:
			StringCopy(sParam1, "HAIR_GROUP_F6", 16);
			break;
		
		case 37:
			StringCopy(sParam1, "HAIR_GROUP_F7", 16);
			break;
		
		case 38:
			StringCopy(sParam1, "HAIR_GROUP_F8", 16);
			break;
		
		case 39:
			StringCopy(sParam1, "HAIR_GROUP_F9", 16);
			break;
		
		case 40:
			StringCopy(sParam1, "HAIR_GROUP_F10", 16);
			break;
		
		case 41:
			StringCopy(sParam1, "HAIR_GROUP_F11", 16);
			break;
		
		case 42:
			StringCopy(sParam1, "HAIR_GROUP_F12", 16);
			break;
		
		case 43:
			StringCopy(sParam1, "HAIR_GROUP_F13", 16);
			break;
		
		case 44:
			StringCopy(sParam1, "HAIR_GROUP_F14", 16);
			break;
		
		case 45:
			StringCopy(sParam1, "HAIR_GROUP_F15", 16);
			break;
	}
}

bool func_475(int iParam0)//Position - 0x2DB97
{
	return iParam0 >= 5;
}

int func_476()//Position - 0x2DBA3
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_3() == 0)
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("mp_f_freemode_01") || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("mp_m_freemode_01"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_477()//Position - 0x2DBE9
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (GlobalFunc_3() == 0)
			{
				if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("mp_m_freemode_01"))
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

float func_478(var uParam0, var uParam1)//Position - 0x2DC28
{
	float fVar0;
	
	fVar0 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(*uParam1);
		if (*uParam0 >= 0)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam0))
			{
				fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam0);
			}
			else
			{
				fVar0 = 1f;
			}
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(*uParam0))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(*uParam0);
	}
	else
	{
		fVar0 = 1f;
	}
	return fVar0;
}

void func_479(var uParam0, var uParam1)//Position - 0x2DC88
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_491(*uParam0, &Var0, &Var3);
	if (CAM::DOES_CAM_EXIST(uParam0->f_38[1 /*12*/]))
	{
		CAM::DESTROY_CAM(uParam0->f_38[1 /*12*/], 0);
	}
	if (!CAM::DOES_CAM_EXIST(uParam0->f_38[0 /*12*/]))
	{
		uParam0->f_38[0 /*12*/] = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
	}
	CAM::PLAY_CAM_ANIM(uParam0->f_38[0 /*12*/], uParam1, uParam0->f_455, Var0, Var3, 0, 2);
	CAM::SET_CAM_ACTIVE(uParam0->f_38[0 /*12*/], 1);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}

char* func_480(var uParam0, int iParam1, char* sParam2)//Position - 0x2DD0A
{
	char* sVar0;
	
	if (GlobalFunc_4405(uParam0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "cam_enterchair";
				break;
			
			case 1:
				sVar0 = "cam_exitchair";
				break;
			
			case 2:
				sVar0 = "cam_intro_-_customer_-_keeper_-_player_-_assistant";
				break;
			
			case 3:
				if (MISC::ARE_STRINGS_EQUAL(sParam2, "keeper_hair_cut_a"))
				{
					sVar0 = "cam_hair_cut_a";
				}
				else
				{
					sVar0 = "cam_hair_cut_b";
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "enterchair_cam";
				break;
			
			case 1:
				sVar0 = "exitchair_cam";
				break;
			
			case 2:
				sVar0 = "tutorial_cam";
				break;
			
			case 3:
				if (MISC::ARE_STRINGS_EQUAL(sParam2, "keeper_idle_a"))
				{
					sVar0 = "idle_a_cam";
				}
				else
				{
					sVar0 = "idle_b_cam";
				}
				break;
			}
	}
	return sVar0;
}

void func_481(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x2DDD0
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	func_491(*uParam0, &Var0, &Var3);
	if (!PED::IS_PED_INJURED(uParam0->f_12) && func_614(0))
	{
		if (iParam2 == 1)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_12);
		}
		if (iParam4 == 1)
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uParam0->f_12);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_12);
		}
		uParam0->f_457 = sParam1;
		uVar6 = func_487(sParam1);
		if (MISC::IS_STRING_NULL_OR_EMPTY(uVar6))
		{
			func_103(uParam0, 0);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_495))
		{
			func_103(uParam0, 1);
		}
		uParam0->f_498 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
		PED::SET_FORCE_FOOTSTEP_UPDATE(uParam0->f_12, 1);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_12, uParam0->f_498, uParam0->f_455, uParam0->f_457, 1000f, iParam5, 0, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_498, !bParam3);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_498, bParam3);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_12, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_495) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_495))
		{
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_495, uParam0->f_498, sVar6, uParam0->f_455, 1000f, -1000f, 0, 1148846080);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uParam0->f_495);
		}
	}
}

void func_482(var uParam0)//Position - 0x2DEFF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_500);
	}
}

void func_483(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2DF17
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1))
		{
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(iParam1, uParam0->f_500, uParam0->f_455, uParam2, iParam4, iParam5, iParam3);
			ENTITY::SET_ENTITY_VISIBLE(iParam1, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1);
		}
	}
}

void func_484(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2DF5B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(iParam1, uParam0->f_500, uParam0->f_455, sParam2, iParam4, iParam5, iParam3, 0, 1148846080, 0);
		}
	}
}

void func_485(var uParam0, int iParam1, int iParam2)//Position - 0x2DF92
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_491(*uParam0, &Var0, &Var3);
		uParam0->f_500 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var0, Var3, 2, iParam1, iParam2, 1065353216, 0, 1065353216);
		uParam0->f_501 = iParam2;
	}
}

void func_486(var uParam0)//Position - 0x2DFD5
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_498 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uParam0->f_500);
		if (uParam0->f_498 >= 0)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_498))
			{
				NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_500);
			}
		}
	}
}

char* func_487(char* sParam0)//Position - 0x2E010
{
	char* sVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_base"))
		{
			sVar0 = "scissors_base";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_enterchair"))
		{
			sVar0 = "scissors_enterchair";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_exitchair"))
		{
			sVar0 = "scissors_exitchair";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_idle_a"))
		{
			sVar0 = "scissors_idle_a";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_idle_b"))
		{
			sVar0 = "scissors_idle_b";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_idle_c"))
		{
			sVar0 = "scissors_idle_c";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_hair_cut_a"))
		{
			sVar0 = "scissors_hair_cut_a";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_hair_cut_b"))
		{
			sVar0 = "scissors_hair_cut_b";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_intro"))
		{
			sVar0 = "scissors_intro";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_tutorial"))
		{
			sVar0 = "scissors_tutorial";
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam0, "keeper_tutorial_base"))
		{
			sVar0 = "scissors_tutorial_base";
		}
	}
	return sVar0;
}

char* func_488(var uParam0)//Position - 0x2E10F
{
	if (GlobalFunc_4405(uParam0))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			return "keeper_hair_cut_a";
		}
		else
		{
			return "keeper_hair_cut_b";
		}
	}
	else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
	{
		return "keeper_idle_a";
	}
	else
	{
		return "keeper_idle_b";
	}
	return "keeper_idle_a";
}

char* func_489(var uParam0)//Position - 0x2E158
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			return "player_idle_a";
			break;
		
		case 1:
			return "player_idle_b";
			break;
		
		case 2:
			return "player_idle_c";
			break;
		
		default:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4405(uParam0))
			{
				return "player_idle_c";
			}
			else
			{
				return "player_idle_d";
			}
			break;
	}
	return "player_idle_a";
}


int func_491(int iParam0, var uParam1, var uParam2)//Position - 0x2E1D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = { 0f, 0f, 0f };
	iVar0 = MISC::GET_HASH_KEY("v_hairdresser");
	iVar1 = MISC::GET_HASH_KEY("v_barbers");
	iVar2 = MISC::GET_HASH_KEY(GlobalFunc_2464(iParam0));
	if (iVar2 == iVar0)
	{
		iVar3 = 0;
		*uParam1 = { -816.22f, -182.97f, 36.57f };
		*uParam2 = { 0f, 0f, (GlobalFunc_569(-2.6f) - 90f) };
	}
	else if (iVar2 == iVar1)
	{
		iVar3 = 1;
		*uParam1 = { 138.3646f, -1709.252f, 28.3182f };
		*uParam2 = { 0f, 0f, (GlobalFunc_569(-5.41f) - 90f) };
	}
	if (!GlobalFunc_100(*uParam1, 0f, 0f, 0f) && !GlobalFunc_100(*uParam2, 0f, 0f, 0f))
	{
		GlobalFunc_7133(iVar3, iParam0, uParam1);
		GlobalFunc_7132(iVar3, iParam0, uParam2);
		return 1;
	}
	if (GlobalFunc_100(*uParam1, 0f, 0f, 0f))
	{
	}
	if (GlobalFunc_100(*uParam2, 0f, 0f, 0f))
	{
	}
	return 0;
}



int func_494(var uParam0, char* sParam1)//Position - 0x2E68C
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (GlobalFunc_4405(uParam0))
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam1, "keeper_hair_cut_a") || MISC::ARE_STRINGS_EQUAL(sParam1, "keeper_hair_cut_b"))
			{
				return 1;
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sParam1, "keeper_idle_a") || MISC::ARE_STRINGS_EQUAL(sParam1, "keeper_idle_b"))
		{
			return 1;
		}
	}
	return 0;
}

int func_495(var uParam0)//Position - 0x2E6EA
{
	if (uParam0->f_103.f_25)
	{
		switch (uParam0->f_103.f_26)
		{
			case 0:
				if (GlobalFunc_6940())
				{
					uParam0->f_103.f_26 = 70;
				}
				else
				{
					uParam0->f_103.f_27 = NETWORK::GET_NETWORK_TIME();
					uParam0->f_103.f_26 = 1;
				}
				break;
			
			case 1:
				if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_103.f_27)) > 1000)
				{
					if (GlobalFunc_6940())
					{
						uParam0->f_103.f_26 = 70;
					}
					else
					{
						uParam0->f_103.f_27 = NETWORK::GET_NETWORK_TIME();
						uParam0->f_103.f_26 = 2;
					}
				}
				break;
			
			case 2:
				if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_103.f_27)) > 1000)
				{
					if (GlobalFunc_6940())
					{
						uParam0->f_103.f_26 = 70;
					}
					else
					{
						uParam0->f_103.f_26 = 90;
					}
				}
				break;
			
			case 70:
				if (GlobalFunc_1363(GlobalFunc_5422()))
				{
					if (GlobalFunc_1362(GlobalFunc_5422()) == 2)
					{
						uParam0->f_103.f_26 = 80;
					}
					else
					{
						uParam0->f_103.f_26 = 90;
					}
				}
				break;
			
			case 80:
				uParam0->f_103.f_25 = 0;
				uParam0->f_103.f_26 = 0;
				break;
			
			case 90:
				GlobalFunc_5069(GlobalFunc_5422());
				uParam0->f_103.f_15 = 0;
				uParam0->f_103.f_25 = 0;
				uParam0->f_103.f_26 = 0;
				break;
		}
		return 1;
	}
	return uParam0->f_103.f_25;
}






void func_501()//Position - 0x2EBA0
{
	if (MISC::IS_PC_VERSION())
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			if (iLocal_20 == 1)
			{
				HUD::_SET_MOUSE_CURSOR_SPRITE(1);
				iLocal_20 = 0;
			}
		}
		else
		{
			iLocal_20 = 1;
		}
	}
}

void func_502(var uParam0)//Position - 0x2EBD4
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_608.f_2) && !PED::IS_PED_INJURED(uParam0->f_608.f_2))
	{
		iVar0 = uParam0->f_608.f_2;
	}
	if (!Global_68245)
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 240, 0);
	}
	if ((GlobalFunc_5785(1) && !PED::IS_PED_INJURED(iVar0)) && !PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_107(uParam0);
			PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
		}
		if (uParam0->f_494 == 1)
		{
			Stack.Push(iVar0);
			Stack.Push(2);
			Stack.Push(uParam0->f_254);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Call_Loc(uParam0->f_448);
		}
		else if (uParam0->f_494 == 2)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_477())
				{
					func_403(iVar0, 1, (uParam0->f_255 - 1), uParam0->f_602, 0, 0, uParam0->f_257, 1);
				}
			}
			else
			{
				Stack.Push(iVar0);
				Stack.Push(1);
				Stack.Push(uParam0->f_255);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_448);
			}
		}
		else if (uParam0->f_494 == 3)
		{
			if (func_476())
			{
				func_403(iVar0, 4, (uParam0->f_579 - 1), uParam0->f_602, 0, 0, 1f, 1);
				if ((uParam0->f_579 - 1) == -1 || (uParam0->f_579 - 1) > 15)
				{
					func_403(iVar0, 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 1f, 1);
				}
				else
				{
					func_403(iVar0, 2, GlobalFunc_6732(449, GlobalFunc_5(), -1), uParam0->f_602, 0, 0, 0f, 1);
				}
			}
		}
		if (!Global_68245)
		{
			iVar1 = GlobalFunc_8315();
			if (GlobalFunc_42(iVar1))
			{
				Global_89752[iVar1 /*65*/].f_13[2] = PED::GET_PED_DRAWABLE_VARIATION(iVar0, 2);
				Global_89752[iVar1 /*65*/][2] = PED::GET_PED_TEXTURE_VARIATION(iVar0, 2);
				Global_89752[iVar1 /*65*/].f_13[0] = PED::GET_PED_DRAWABLE_VARIATION(iVar0, 0);
				Global_89752[iVar1 /*65*/][0] = PED::GET_PED_TEXTURE_VARIATION(iVar0, 0);
				Global_89752[iVar1 /*65*/].f_13[1] = PED::GET_PED_DRAWABLE_VARIATION(iVar0, 1);
				Global_89752[iVar1 /*65*/][1] = PED::GET_PED_TEXTURE_VARIATION(iVar0, 1);
			}
		}
		uParam0->f_103.f_31 = 6;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_108(uParam0);
		}
	}
}

void func_503(var uParam0)//Position - 0x2EDEA
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_608.f_2) && !PED::IS_PED_INJURED(uParam0->f_608.f_2))
	{
		iVar0 = uParam0->f_608.f_2;
	}
	if (!Global_68245)
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 240, 0);
	}
	if ((GlobalFunc_5785(1) && !PED::IS_PED_INJURED(iVar0)) && !PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
			{
				if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
				{
					PED::SET_PED_RESET_FLAG(iVar0, 302, 1);
				}
			}
		}
		switch (uParam0->f_103.f_5)
		{
			case 0:
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_94(uParam0);
					GlobalFunc_2463(1);
					iVar0 = PLAYER::PLAYER_PED_ID();
				}
				GlobalFunc_2462();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
					HUD::REMOVE_MULTIPLAYER_BANK_CASH();
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_107(uParam0);
				}
				func_491(*uParam0, &Var1, &Var4);
				TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, uParam0->f_455, "player_exitchair", Var1, Var4, 1000f, -2f, -1, 37896, 0f, 2, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, 0, 0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_499 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var1, Var4, 2, 0, 0, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_499, uParam0->f_455, "player_exitchair", 1000f, -1f, 263, 0, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_499);
					TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_12, uParam0->f_455, "keeper_exitchair", Var1, Var4, 1000f, -1000f, -1, 5642, 0f, 2, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_12, 0, 0);
					func_486(uParam0);
					func_485(uParam0, 1, 0);
					func_484(uParam0, uParam0->f_12, "keeper_exitchair", 5, 4f, -2f);
					func_483(uParam0, NETWORK::NET_TO_ENT(Local_56.f_1), func_487("keeper_exitchair"), 0, 1148846080, -998637568);
					func_482(uParam0);
				}
				else
				{
					func_481(uParam0, "keeper_exitchair", 0, 0, 1, -1056964608);
				}
				func_479(uParam0, func_480(uParam0, 1, ""));
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
				if (!Global_68245)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 240, 0);
				}
				uParam0->f_472.f_19 = 0;
				uParam0->f_103.f_5++;
				break;
			
			case 1:
				if (GlobalFunc_4405(uParam0))
				{
					fVar7 = 0.807f;
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0)
						{
							uParam0->f_497 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uParam0->f_499);
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_497) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_497) >= 0.7181f)
							{
								TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_170.f_39, 1f, -1, 1193033728, 1056964608);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
							}
						}
					}
				}
				else
				{
					fVar7 = 0.92f;
				}
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_38[0 /*12*/]) >= fVar7)
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(1, 0f, 3, 0);
					uParam0->f_103.f_5++;
				}
				break;
			
			case 2:
				if (GlobalFunc_4405(uParam0))
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						fVar8 = 0.7181f;
					}
					else
					{
						fVar8 = 0.9151f;
					}
				}
				else
				{
					fVar8 = 0.8779f;
				}
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (ENTITY::HAS_ENTITY_ANIM_FINISHED(iVar0, uParam0->f_455, "player_exitchair", 3) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iVar0, uParam0->f_455, "player_exitchair") >= fVar8)
					{
						uParam0->f_103.f_31 = 7;
						PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_170.f_39, 1f, -1, 1193033728, 1056964608);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
					}
				}
				else
				{
					uParam0->f_497 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uParam0->f_499);
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_497) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_497) >= fVar8)
					{
						uParam0->f_103.f_31 = 7;
						PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
						func_101();
						func_486(uParam0);
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0)
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_170.f_39, 1f, -1, 1193033728, 1056964608);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
						}
					}
				}
				break;
			}
	}
}

void func_504(var uParam0)//Position - 0x2F241
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	bool bVar11;
	char* sVar12;
	
	iVar2 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_608.f_2) && !PED::IS_PED_INJURED(uParam0->f_608.f_2))
	{
		iVar2 = uParam0->f_608.f_2;
	}
	if ((GlobalFunc_5785(1) && !PED::IS_PED_INJURED(iVar2)) && !PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
			{
				if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
				{
					PED::SET_PED_RESET_FLAG(iVar2, 302, 1);
				}
			}
		}
		switch (uParam0->f_103.f_5)
		{
			case 0:
				func_383(iVar2);
				uParam0->f_103.f_5++;
				break;
			
			case 1:
				if (!Global_68245)
				{
					PED::SET_PED_CONFIG_FLAG(iVar2, 240, 1);
				}
				if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(uParam0->f_170.f_13[0 /*3*/], 3f) && !Global_68245)
				{
					GlobalFunc_7503(uParam0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_608.f_2) && !PED::IS_PED_INJURED(uParam0->f_608.f_2))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_608.f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_608.f_2, true);
						PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(uParam0->f_608.f_2, 1);
					}
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar2);
				func_491(*uParam0, &Var3, &Var6);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(iVar2, 1), 2.75f, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(iVar2, uParam0->f_455, "player_enterchair", Var3, Var6, 1000f, -1000f, -1, 5642, 0f, 2, 1);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (GlobalFunc_4405(uParam0))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_12, uParam0->f_455, "keeper_enterchair", Var3, Var6, 1000f, -1000f, -1, 5642, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_12, 0, 0);
					}
					func_486(uParam0);
					func_485(uParam0, 1, 0);
					func_484(uParam0, uParam0->f_12, "keeper_enterchair", 69, 1148846080, -998637568);
					func_484(uParam0, PLAYER::PLAYER_PED_ID(), "player_enterchair", 64, 1148846080, -998637568);
					func_483(uParam0, NETWORK::NET_TO_ENT(Local_56.f_1), func_487("keeper_enterchair"), 64, 1148846080, -998637568);
					func_482(uParam0);
				}
				else
				{
					func_481(uParam0, "keeper_enterchair", 0, 0, 1, -1056964608);
				}
				uParam0->f_472.f_19 = 1;
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GlobalFunc_7686(PLAYER::PLAYER_PED_ID(), 0, &iVar0, &uVar1, 1, 145);
				}
				if (iVar0 != -1)
				{
					Stack.Push(iVar2);
					Stack.Push(14);
					Stack.Push(0);
					Call_Loc(uParam0->f_447);
					uParam0->f_513 = StackVal;
				}
				else
				{
					uParam0->f_513 = 0;
				}
				Stack.Push(iVar2);
				Stack.Push(14);
				Stack.Push(1);
				Call_Loc(uParam0->f_447);
				uParam0->f_514 = StackVal;
				iVar9 = ENTITY::GET_ENTITY_MODEL(iVar2);
				Stack.Push(iVar2);
				Stack.Push(8);
				Stack.Push(-1);
				Call_Loc(uParam0->f_447);
				iVar10 = StackVal;
				if (GlobalFunc_7007(iVar9, 8, iVar10))
				{
					uParam0->f_515 = iVar10;
				}
				Stack.Push(iVar2);
				Stack.Push(9);
				Stack.Push(-1);
				Call_Loc(uParam0->f_447);
				iVar10 = StackVal;
				if (GlobalFunc_7007(iVar9, 9, iVar10))
				{
					uParam0->f_516 = iVar10;
				}
				Stack.Push(iVar2);
				Stack.Push(2);
				Stack.Push(-1);
				Call_Loc(uParam0->f_447);
				iVar10 = StackVal;
				if (GlobalFunc_7007(iVar9, 2, iVar10))
				{
					uParam0->f_517 = iVar10;
				}
				PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				func_509(uParam0);
				Stack.Push(iVar2);
				Stack.Push(14);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_448);
				Stack.Push(iVar2);
				Stack.Push(14);
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(uParam0->f_448);
				func_508(iVar2, &(uParam0->f_448));
				GlobalFunc_5474(iVar2);
				bVar11 = false;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(1);
					Stack.Push(-1);
					Call_Loc(uParam0->f_447);
					uParam0->f_518 = StackVal;
					Stack.Push(iVar2);
					Stack.Push(1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_448);
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(7);
					Stack.Push(-1);
					Call_Loc(uParam0->f_447);
					uParam0->f_519 = StackVal;
					if ((iVar9 == joaat("mp_m_freemode_01") && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iVar9, uParam0->f_519, 7, 3), joaat("PILOT_SUIT"), 0)) || (iVar9 == joaat("mp_f_freemode_01") && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iVar9, uParam0->f_519, 7, 4), joaat("PILOT_SUIT"), 0)))
					{
						bVar11 = true;
						Stack.Push(iVar2);
						Stack.Push(7);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(0);
						Call_Loc(uParam0->f_448);
					}
					uParam0->f_520 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), GlobalFunc_33(5));
					uParam0->f_521 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), GlobalFunc_33(5));
					Stack.Push(iVar2);
					Stack.Push(5);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_448);
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(14);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_448);
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(14);
					Stack.Push(1);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_448);
					func_508(PLAYER::PLAYER_PED_ID(), &(uParam0->f_448));
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(uParam0->f_448);
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(8);
					Stack.Push(-1);
					Call_Loc(uParam0->f_447);
					iVar10 = StackVal;
					if (GlobalFunc_5474(PLAYER::PLAYER_PED_ID()))
					{
						uParam0->f_515 = iVar10;
					}
					if (bVar11)
					{
						Stack.Push(PLAYER::PLAYER_PED_ID());
						Stack.Push(7);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(0);
						Call_Loc(uParam0->f_448);
					}
				}
				GlobalFunc_9214(uParam0, 1077936128);
				func_479(uParam0, func_480(uParam0, 0, ""));
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
				uParam0->f_103.f_5++;
				break;
			
			case 2:
				if ((ENTITY::HAS_ENTITY_ANIM_FINISHED(iVar2, uParam0->f_455, "player_enterchair", 3) && func_478(&(uParam0->f_498), &(uParam0->f_500)) == 1f) && CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_38[0 /*12*/]) >= 1f)
				{
					func_491(*uParam0, &Var3, &Var6);
					sVar12 = func_489(uParam0);
					if (GlobalFunc_4405(uParam0))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iVar2, uParam0->f_455, sVar12, Var3, Var6, 1000f, -8f, -1, 5641, 0f, 2, 1);
					}
					else
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iVar2, uParam0->f_455, "player_base", Var3, Var6, 1000f, -8f, -1, 5641, 0f, 2, 1);
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_499 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var3, Var6, 2, 0, 1, 1065353216, 0, 1065353216);
						if (GlobalFunc_4405(uParam0))
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_499, uParam0->f_455, sVar12, 1000f, -8f, 0, 0, 1148846080, 0);
						}
						else
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_499, uParam0->f_455, "player_base", 1000f, -8f, 0, 0, 1148846080, 0);
						}
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_499);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar2, 1, 0);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_486(uParam0);
						func_485(uParam0, 0, 1);
						func_484(uParam0, uParam0->f_12, "keeper_base", 69, 1148846080, -998637568);
						func_483(uParam0, NETWORK::NET_TO_ENT(Local_56.f_1), func_487("keeper_base"), 64, 1148846080, -998637568);
						func_482(uParam0);
					}
					else
					{
						func_481(uParam0, "keeper_base", 0, 1, 0, -1056964608);
					}
					func_458(uParam0, 1);
					func_267(uParam0, 0);
					func_471(uParam0, 0);
					if (func_477() || func_476())
					{
						uParam0->f_494 = 0;
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_494 = 4;
					}
					else
					{
						uParam0->f_494 = 1;
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if ((MISC::IS_ORBIS_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
						{
							uParam0->f_494 = 5;
							uParam0->f_103.f_1 = 0;
							while (uParam0->f_103.f_1 <= 6 && !func_275(iVar9, func_276(uParam0->f_103.f_1)))
							{
								uParam0->f_103.f_1++;
							}
							if (uParam0->f_103.f_1 >= 7)
							{
								uParam0->f_103.f_1 = 0;
							}
						}
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(1);
						uParam0->f_471 = 1;
					}
					GlobalFunc_1395();
					PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
					uParam0->f_103.f_31 = 2;
				}
				break;
			}
	}
}




int func_508(int iParam0, var uParam1)//Position - 0x2FB8C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		iVar2 = iVar1;
		iVar4 = GlobalFunc_7614(iParam0, iVar2);
		if (GlobalFunc_7007(iVar5, 14, iVar4))
		{
			uVar6 = GlobalFunc_5013(iVar5, 14, iVar1);
			Stack.Push(iParam0);
			Stack.Push(14);
			Stack.Push(uVar6);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Call_Loc(*uParam1);
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar3 = iVar0;
		if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
		{
			iVar4 = func_81(iParam0, iVar3);
			if (GlobalFunc_7007(iVar5, iVar3, iVar4))
			{
				uVar6 = GlobalFunc_5013(iVar5, iVar3, -1);
				Stack.Push(iParam0);
				Stack.Push(iVar3);
				Stack.Push(uVar6);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(*uParam1);
			}
		}
		iVar0++;
	}
	return 0;
}

void func_509(var uParam0)//Position - 0x2FC54
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_510(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_513);
		func_510(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_514);
		func_510(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_515);
		func_510(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_516);
		func_510(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_517);
	}
}

void func_510(int iParam0, int iParam1, int iParam2)//Position - 0x2FCAF
{
	struct<14> Var0;
	
	if (iParam1 == 12 || iParam1 == 13)
	{
		return;
	}
	Var0 = { GlobalFunc_10874(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iParam2) };
	if (iParam1 == 14)
	{
		if (Var0.f_3 != -1 && Var0.f_3 != 255)
		{
			PED::SET_PED_PRELOAD_PROP_DATA(iParam0, Var0.f_12, Var0.f_3, Var0.f_4);
		}
	}
	else if (Var0.f_3 != -1 && Var0.f_4 != -1)
	{
		PED::SET_PED_PRELOAD_VARIATION_DATA(iParam0, GlobalFunc_33(iParam1), Var0.f_3, Var0.f_4);
	}
}










































































int func_584(var uParam0, bool bParam1)//Position - 0x45169
{
	if (Global_68245)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_608.f_2))
			{
				if (uParam0->f_681 == -1)
				{
					uParam0->f_681 = MISC::GET_GAME_TIMER();
				}
				uParam0->f_608 = 1;
				uParam0->f_608.f_1 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
				STREAMING::REQUEST_MODEL(uParam0->f_608.f_1);
				if (STREAMING::HAS_MODEL_LOADED(uParam0->f_608.f_1))
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()) || (MISC::GET_GAME_TIMER() - uParam0->f_681) > 5000)
					{
						if (!bParam1)
						{
							return 1;
						}
						else
						{
							uParam0->f_608.f_2 = PED::CLONE_PED(PLAYER::PLAYER_PED_ID(), 0, 0, 0);
							Global_2542603 = uParam0->f_608.f_2;
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_608.f_2, uParam0->f_170.f_31, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(uParam0->f_608.f_2, uParam0->f_170.f_34);
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_608.f_2, false, 0);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_608.f_2, true);
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_608.f_2, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_608.f_2, 1);
							PED::_0x2B694AFCF64E6994(uParam0->f_608.f_2, 1);
						}
					}
				}
				return 0;
			}
			if (!PED::IS_PED_INJURED(uParam0->f_608.f_2))
			{
				if (!PED::HAS_PED_HEAD_BLEND_FINISHED(uParam0->f_608.f_2) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam0->f_608.f_2))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}


var func_586(var uParam0)//Position - 0x452EC
{
	int iVar0;
	int iVar1;
	
	StringCopy(&(uParam0->f_582.f_1), "COLOUR_SWITCHER_01", 24);
	iVar0 = GlobalFunc_263(&(uParam0->f_582));
	StringCopy(&(uParam0->f_592.f_1), "COLOUR_SWITCHER_02", 24);
	iVar1 = GlobalFunc_263(&(uParam0->f_592));
	return (iVar0 && iVar1);
}



int func_589(var uParam0)//Position - 0x454A0
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_455))
	{
		return 0;
	}
	STREAMING::REQUEST_ANIM_DICT(uParam0->f_455);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_455))
	{
		return 0;
	}
	return 1;
}


void func_591(int iParam0, var uParam1)//Position - 0x45501
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!Global_1582596[iParam0 /*324*/].f_176)
		{
			Global_1582596[iParam0 /*324*/].f_177 = uParam1;
			Global_1582596[iParam0 /*324*/].f_176 = 1;
		}
	}
}







void func_598(var uParam0, var uParam1)//Position - 0x4570A
{
	bool bVar0;
	
	if (uParam0->f_9)
	{
		bVar0 = false;
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			bVar0 = true;
		}
		else if (!uParam0->f_7 && (uParam0->f_11 != 4 && uParam1->f_31 >= 6))
		{
			bVar0 = true;
		}
		else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_330(*uParam0) == 4) && uParam0->f_11 == 4)
		{
		}
		else if (!func_600(*uParam0, 0, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)))
		{
			bVar0 = true;
		}
		else if (GlobalFunc_330(*uParam0) == 0 && !GlobalFunc_2497(PLAYER::PLAYER_ID(), *uParam0, 0))
		{
			bVar0 = true;
		}
		else if ((uParam0->f_12.f_14 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_12)) && PED::IS_PED_INJURED(uParam0->f_12))
		{
			bVar0 = true;
		}
		else if (!GlobalFunc_8555(*uParam0))
		{
			bVar0 = true;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_1315828)
		{
			bVar0 = true;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			uParam1->f_31 = 8;
		}
	}
}


int func_600(int iParam0, bool bParam1, bool bParam2)//Position - 0x45831
{
	bool bVar0;
	var uVar1;
	
	if (GlobalFunc_5785(1))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || ((!CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::IS_AIM_CAM_ACTIVE()) && !bParam2))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
			bVar0 = false;
			uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(uVar1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
				{
					if (!ENTITY::IS_ENTITY_UPSIDEDOWN(iVar1))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) == PLAYER::PLAYER_PED_ID())
						{
							if (!PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
							{
								if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar1))
								{
									bVar0 = true;
								}
							}
						}
					}
				}
			}
			if (!bVar0)
			{
				return 0;
			}
		}
		if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !bParam2)) || (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !bParam2)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(PLAYER::PLAYER_PED_ID())) || HUD::IS_HUD_COMPONENT_ACTIVE(19)) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || GlobalFunc_142()) || GlobalFunc_8560(iParam0)) || GlobalFunc_268()) || GlobalFunc_476()) || GlobalFunc_489())
		{
			return 0;
		}
		if ((((GlobalFunc_236() || GlobalFunc_268()) || Global_24446) || Global_1573712) || Global_1573718)
		{
			return 0;
		}
		if ((!GlobalFunc_331() && GlobalFunc_160()) && (GlobalFunc_330(iParam0) != 4 || MISC::GET_HASH_KEY(&(Global_17236.f_1)) != joaat("PIM_TITLE1")))
		{
			return 0;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (Global_1315828)
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_2446554.f_353.f_5, 0))
			{
				return 0;
			}
			if (GlobalFunc_1277())
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}













int func_613(bool bParam0)//Position - 0x45BE9
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_56.f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_56.f_1))
			{
				return 1;
			}
			else if (bParam0)
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_56.f_1);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_614(bool bParam0)//Position - 0x45C2B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_56))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_56))
			{
				return 1;
			}
			else if (bParam0)
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_56);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_615(var uParam0)//Position - 0x45C67
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	char* sVar7;
	struct<3> Var8;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || GlobalFunc_4405(uParam0))
	{
		return;
	}
	func_625(*uParam0, &Var0, &Var3, &uVar6);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_623(uParam0))
		{
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_74("HAIR_SOFA_STAND") || GlobalFunc_74("HAIR_FTRIG_BUSY"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1098463898) != 1)
			{
				if (!PED::IS_ANY_PED_NEAR_POINT(Var0, 0.1f) || !PED::IS_ANY_PED_NEAR_POINT(Var3, 0.1f))
				{
					if (!MISC::IS_BIT_SET(Global_2446554.f_4395, 2))
					{
						if (uParam0->f_3 == -1)
						{
							sVar7 = "HAIR_SOFA_SIT";
							GlobalFunc_7016(&(uParam0->f_3), 3, sVar7, 0, 0);
						}
						PAD::SET_INPUT_EXCLUSIVE(0, 51);
						if (GlobalFunc_5079(uParam0->f_3, 1))
						{
							Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
							if (SYSTEM::VDIST(Var8, Var0) < SYSTEM::VDIST(Var8, Var3))
							{
								if (!PED::IS_ANY_PED_NEAR_POINT(Var0, 0.1f))
								{
									TASK::TASK_START_SCENARIO_AT_POSITION(PLAYER::PLAYER_PED_ID(), "PROP_HUMAN_SEAT_CHAIR_MP_PLAYER", Var0, uVar6, 0, 1, 0);
								}
								else
								{
									TASK::TASK_START_SCENARIO_AT_POSITION(PLAYER::PLAYER_PED_ID(), "PROP_HUMAN_SEAT_CHAIR_MP_PLAYER", Var3, uVar6, 0, 1, 0);
								}
							}
							else if (!PED::IS_ANY_PED_NEAR_POINT(Var3, 0.1f))
							{
								TASK::TASK_START_SCENARIO_AT_POSITION(PLAYER::PLAYER_PED_ID(), "PROP_HUMAN_SEAT_CHAIR_MP_PLAYER", Var3, uVar6, 0, 1, 0);
							}
							else
							{
								TASK::TASK_START_SCENARIO_AT_POSITION(PLAYER::PLAYER_PED_ID(), "PROP_HUMAN_SEAT_CHAIR_MP_PLAYER", Var0, uVar6, 0, 1, 0);
							}
							if (uParam0->f_3 != -1)
							{
								GlobalFunc_5420(&(uParam0->f_3));
							}
						}
					}
				}
			}
			else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_163();
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_Display_Help_Text("HAIR_SOFA_STAND");
				}
				if (!GlobalFunc_160())
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 202))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
				if (MISC::IS_BIT_SET(Global_2446554.f_4395, 2))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					MISC::CLEAR_BIT(&(Global_2446554.f_4395), 2);
				}
			}
		}
		else if (MISC::IS_BIT_SET(Global_2446554.f_4395, 2))
		{
			MISC::CLEAR_BIT(&(Global_2446554.f_4395), 2);
		}
	}
}








int func_623(var uParam0)//Position - 0x46122
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || GlobalFunc_4405(uParam0))
	{
		return 0;
	}
	func_624(*uParam0, &Var0, &Var3, &fVar6);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_624(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x46186
{
	int iVar0;
	
	iVar0 = 1;
	*uParam1 = { 136.8786f, -1711.796f, 28.29161f };
	*uParam2 = { 135.7173f, -1713.231f, 30.29161f };
	*uParam3 = 1.4f;
	GlobalFunc_7133(iVar0, iParam0, uParam1);
	GlobalFunc_7133(iVar0, iParam0, uParam2);
}

void func_625(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x461D3
{
	int iVar0;
	
	iVar0 = 1;
	*uParam1 = { 136.83f, -1712.38f, 28.7754f };
	*uParam2 = { 136.27f, -1713.03f, 28.7754f };
	*uParam3 = 55f;
	GlobalFunc_7133(iVar0, iParam0, uParam1);
	GlobalFunc_7133(iVar0, iParam0, uParam2);
	GlobalFunc_7134(iVar0, iParam0, uParam3);
}

void func_626(var uParam0)//Position - 0x4622A
{
	if (GlobalFunc_5785(1))
	{
		GlobalFunc_9217(uParam0);
		if (!Global_68245)
		{
			PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), 1);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 60, 1);
		}
		if (!uParam0->f_8)
		{
			if (uParam0->f_3 != -1)
			{
				GlobalFunc_5420(&(uParam0->f_3));
			}
			if (GlobalFunc_2497(PLAYER::PLAYER_ID(), uParam0->f_492, 1))
			{
				GlobalFunc_2466(PLAYER::PLAYER_ID(), uParam0->f_492);
			}
			GlobalFunc_2462();
		}
		if (!uParam0->f_7)
		{
			uParam0->f_11 = 1;
		}
	}
}







void func_633(var uParam0)//Position - 0x46989
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	char* sVar5;
	
	bVar2 = false;
	bVar3 = false;
	iVar4 = -1;
	if (GlobalFunc_5785(1) && !PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (GlobalFunc_1549(1) || ((!HUD::IS_PAUSE_MENU_ACTIVE() && func_600(*uParam0, 1, 0)) && !GlobalFunc_8556(*uParam0)))
		{
			if (GlobalFunc_7504(-1))
			{
				bVar0 = true;
			}
			else if (!GlobalFunc_2497(PLAYER::PLAYER_ID(), uParam0->f_492, 0))
			{
				bVar1 = true;
			}
			else
			{
				if (uParam0->f_103 == -1 || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != uParam0->f_581)
				{
					uParam0->f_581 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
					if (func_639(&(uParam0->f_454), *uParam0, &(uParam0->f_170), &Global_2541867, &(uParam0->f_683), &(uParam0->f_686)))
					{
						GlobalFunc_2460("GRABBED LOCATE DATA", -1);
						uParam0->f_103 = 0;
					}
					else
					{
						GlobalFunc_2460("FAILED TO GRAB LOCATE DATA", -1);
						uParam0->f_103 = 99;
					}
				}
				if (uParam0->f_103 == 0)
				{
					if (!bVar2)
					{
						if (GlobalFunc_1549(1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_170.f_13[0 /*3*/], uParam0->f_170.f_13[1 /*3*/], uParam0->f_170.f_26[0], 0, 1, 0))
						{
							if (uParam0->f_3 == -1)
							{
								if (func_477())
								{
									if (func_476())
									{
										sVar5 = "HAIR_BROWSE_MB";
									}
									else
									{
										sVar5 = "HAIR_BROWSE_B";
									}
								}
								else if (func_476())
								{
									sVar5 = "HAIR_BROWSE_M";
								}
								else
								{
									sVar5 = "HAIR_BROWSE";
								}
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									if ((MISC::IS_ORBIS_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
									{
										sVar5 = "HAIR_BROWSE_NG";
									}
								}
								GlobalFunc_7016(&(uParam0->f_3), 3, sVar5, 0, 0);
							}
							bVar3 = true;
							PAD::SET_INPUT_EXCLUSIVE(0, 51);
							if (GlobalFunc_5079(uParam0->f_3, 1) || GlobalFunc_1549(1))
							{
								bVar3 = false;
								bVar2 = true;
							}
						}
					}
				}
			}
		}
		else
		{
			uParam0->f_560 = 0;
			uParam0->f_560 = uParam0->f_560;
		}
	}
	if (bVar0)
	{
		GlobalFunc_5795("SHOP_COPS");
	}
	else if (bVar1)
	{
		if (!func_623(uParam0))
		{
			GlobalFunc_5795("HAIR_FTRIG_BUSY");
		}
	}
	else if (bVar2)
	{
		func_591(PLAYER::PLAYER_ID(), uParam0->f_492);
		GlobalFunc_2462();
		uParam0->f_11 = 4;
		uParam0->f_103.f_31 = 0;
		uParam0->f_690 = MISC::GET_GAME_TIMER();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uParam0->f_689 = NETWORK::GET_NETWORK_TIME();
		}
		uParam0->f_681 = -1;
		GlobalFunc_9218(uParam0, &(uParam0->f_103));
	}
	else if ((iVar4 == 0 && !Global_68245) && !bVar3)
	{
		GlobalFunc_5795(func_634(uParam0->f_170));
	}
	else
	{
		GlobalFunc_2462();
		uParam0->f_103.f_19 = 0;
	}
	if (!bVar3 && !func_623(uParam0))
	{
		if (uParam0->f_3 != -1)
		{
			GlobalFunc_5420(&(uParam0->f_3));
		}
	}
	if (!bVar2)
	{
		if (GlobalFunc_2497(PLAYER::PLAYER_ID(), uParam0->f_492, 1))
		{
			GlobalFunc_2466(PLAYER::PLAYER_ID(), uParam0->f_492);
		}
	}
}

char* func_634(int iParam0)//Position - 0x46C5C
{
	switch (iParam0)
	{
		case 6:
			return "SHOP_L_SEAT";
			break;
		
		case 7:
			return "SHOP_L_SEAT";
			break;
		
		case 9:
			return "SHOP_L_WEAP";
			break;
	}
	return "SHOP_L_ITEMS";
}





bool func_639(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x46D1C
{
	struct<48> Var0;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	
	Var0.f_13 = 4;
	Var0.f_26 = 4;
	iVar49 = 0;
	while (iVar49 < uParam3->f_223)
	{
		uParam3->f_223[iVar49] = 0;
		iVar49++;
	}
	iVar49 = 0;
	while (iVar49 < uParam3->f_334)
	{
		uParam3->f_334[iVar49] = 0;
		uParam3->f_341[iVar49] = 0;
		uParam3->f_348[iVar49] = 0;
		iVar49++;
	}
	uParam3->f_222 = 0;
	iVar50 = MISC::GET_HASH_KEY("v_hairdresser");
	iVar51 = MISC::GET_HASH_KEY("v_barbers");
	iVar52 = MISC::GET_HASH_KEY(GlobalFunc_2464(iParam1));
	if (iVar52 == iVar50)
	{
		iVar48 = 0;
		Var0 = 6;
		Var0.f_1 = { -816.09f, -183.22f, 38f };
		Var0.f_13[0 /*3*/] = { -817.9705f, -184.5802f, 36.56892f };
		Var0.f_13[1 /*3*/] = { -812.0129f, -181.2539f, 38.56892f };
		Var0.f_26[0] = 5.8f;
		Var0.f_31 = { -816.279f, -182.9f, 36.588f };
		Var0.f_42 = { -816.279f, -182.9f, 36.588f };
		Var0.f_45 = { 0f, 0f, 120f };
		Var0.f_4 = { -815.9199f, -183.4406f, 36.56892f };
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_185(uParam0, uParam3, GlobalFunc_2623(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, -1, uParam4, uParam5);
		}
		else
		{
			func_181(uParam0, uParam3, GlobalFunc_2623(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, 1);
		}
	}
	else if (iVar52 == iVar51)
	{
		iVar48 = 1;
		Var0 = 6;
		Var0.f_1 = { 138.45f, -1709.32f, 30f };
		Var0.f_13[0 /*3*/] = { 139.6911f, -1706.982f, 28.29159f };
		Var0.f_13[1 /*3*/] = { 136.3526f, -1710.825f, 30.30162f };
		Var0.f_26[0] = 5.4f;
		Var0.f_31 = { 136.6735f, -1709.513f, 29.2964f };
		Var0.f_42 = { 138.353f, -1709.266f, 28.305f };
		Var0.f_45 = { 0f, 0f, -40f };
		Var0.f_4 = { 138.0074f, -1709.343f, 28.4607f };
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_185(uParam0, uParam3, GlobalFunc_2623(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, -1, uParam4, uParam5);
		}
		else
		{
			func_181(uParam0, uParam3, GlobalFunc_2623(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, 0);
		}
	}
	GlobalFunc_7133(iVar48, iParam1, &(Var0.f_1));
	GlobalFunc_7133(iVar48, iParam1, &(Var0.f_13[0 /*3*/]));
	GlobalFunc_7133(iVar48, iParam1, &(Var0.f_13[1 /*3*/]));
	GlobalFunc_7133(iVar48, iParam1, &(Var0.f_31));
	GlobalFunc_7133(iVar48, iParam1, &(Var0.f_4));
	GlobalFunc_7133(iVar48, iParam1, &(Var0.f_42));
	GlobalFunc_7132(iVar48, iParam1, &(Var0.f_45));
	func_640(iParam1, &(Var0.f_39));
	*uParam2 = { Var0 };
	return (uParam3->f_334[0] != 0 || uParam3->f_334[1] != 0);
}

void func_640(int iParam0, var uParam1)//Position - 0x46FFD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = MISC::GET_HASH_KEY("v_hairdresser");
	iVar2 = MISC::GET_HASH_KEY("v_barbers");
	iVar3 = MISC::GET_HASH_KEY(GlobalFunc_2464(iParam0));
	if (iVar3 == iVar1)
	{
		iVar0 = 0;
		*uParam1 = { -825.9313f, -189.4604f, 36.6014f };
	}
	else if (iVar3 == iVar2)
	{
		iVar0 = 1;
		*uParam1 = { 130.3482f, -1713.974f, 28.2503f };
	}
	GlobalFunc_7133(iVar0, iParam0, uParam1);
}



int func_643(var uParam0)//Position - 0x4721E
{
	if (!uParam0->f_465)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		if (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			return 0;
		}
		uParam0->f_465 = 1;
	}
	if (!uParam0->f_466)
	{
		if (!AUDIO::REQUEST_AMBIENT_AUDIO_BANK(&(uParam0->f_528), 0))
		{
			return 0;
		}
		uParam0->f_466 = 1;
		uParam0->f_525 = AUDIO::GET_SOUND_ID();
		uParam0->f_526 = AUDIO::GET_SOUND_ID();
		uParam0->f_527 = AUDIO::GET_SOUND_ID();
	}
	return 1;
}






void func_649(var uParam0)//Position - 0x4740E
{
	if (GlobalFunc_5785(1))
	{
		if (uParam0->f_12.f_14)
		{
			if (func_614(0))
			{
				func_650(uParam0, 0);
			}
		}
		if (uParam0->f_428.f_14)
		{
			func_650(uParam0, 1);
		}
	}
}

void func_650(var uParam0, int iParam1)//Position - 0x47447
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_106(uParam0, iParam1);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (!func_654(uParam0, iParam1))
		{
			TASK::TASK_LOOK_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			func_653(uParam0, iParam1, 1);
		}
		if (GlobalFunc_4405(uParam0))
		{
			fVar1 = 3f;
		}
		else
		{
			fVar1 = 1.5f;
		}
		if (GlobalFunc_713(iVar0, func_105(uParam0, iParam1), 1) > fVar1)
		{
			func_102(uParam0, iParam1);
		}
		else if (!PED::IS_PED_FACING_PED(iVar0, PLAYER::PLAYER_PED_ID(), 45f))
		{
			func_651(uParam0, iParam1);
		}
	}
}

void func_651(var uParam0, int iParam1)//Position - 0x474D6
{
	if (func_614(0) || iParam1)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(func_106(uParam0, iParam1), -875674219) != 1)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(func_106(uParam0, iParam1), PLAYER::PLAYER_PED_ID(), -1);
			}
		}
		else if (((TASK::GET_SCRIPT_TASK_STATUS(func_106(uParam0, iParam1), -875674219) != 1 && TASK::GET_SCRIPT_TASK_STATUS(func_106(uParam0, iParam1), 2106541073) != 1) && !PED::IS_PED_FACING_PED(func_106(uParam0, iParam1), PLAYER::PLAYER_PED_ID(), 90f)) && uParam0->f_11 == 3)
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(func_106(uParam0, iParam1), PLAYER::PLAYER_PED_ID(), -1);
		}
	}
}


void func_653(var uParam0, int iParam1, int iParam2)//Position - 0x475BD
{
	if (iParam1 == 1)
	{
		uParam0->f_523 = iParam2;
	}
	else
	{
		uParam0->f_522 = iParam2;
	}
}

bool func_654(var uParam0, int iParam1)//Position - 0x475DC
{
	if (iParam1 == 1)
	{
		return uParam0->f_523;
	}
	return uParam0->f_522;
}

void func_655(var uParam0)//Position - 0x475FA
{
	if (func_683(uParam0))
	{
		if (GlobalFunc_5785(1))
		{
			GlobalFunc_7834(*uParam0, 20, 1);
			if (GlobalFunc_4405(uParam0))
			{
				func_680(uParam0);
			}
			else
			{
				func_657(uParam0);
			}
			GlobalFunc_2582(&(uParam0->f_472), 1);
		}
	}
	else
	{
		GlobalFunc_7833(*uParam0, 20, 1);
		func_656(*uParam0, 1);
		uParam0->f_11 = 3;
	}
}

void func_656(int iParam0, bool bParam1)//Position - 0x47659
{
	int iVar0;
	var uVar1;
	
	if (bParam1)
	{
		if (!GlobalFunc_7782(iParam0, 2, 0))
		{
			GlobalFunc_7834(iParam0, 2, 0);
			GlobalFunc_1293(iParam0);
			iVar0 = GlobalFunc_330(iParam0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (GlobalFunc_3() == 0)
				{
					uVar1 = GlobalFunc_6872(814, -1, 0);
					MISC::SET_BIT(&uVar1, iVar0);
					GlobalFunc_6720(814, uVar1, -1, 1);
				}
			}
			else
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_46), iVar0);
			}
		}
	}
	else if (GlobalFunc_7782(iParam0, 2, 0))
	{
		GlobalFunc_7833(iParam0, 2, 0);
	}
}

void func_657(var uParam0)//Position - 0x476DD
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	
	iVar6 = 6;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return;
	}
	if ((GlobalFunc_142() || GlobalFunc_8560(*uParam0)) || SYSTEM::VDIST(uParam0->f_12.f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 30f)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		if (CAM::DOES_CAM_EXIST(uParam0->f_38[0 /*12*/]))
		{
			CAM::DESTROY_CAM(uParam0->f_38[0 /*12*/], 0);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_38[1 /*12*/]))
		{
			CAM::DESTROY_CAM(uParam0->f_38[1 /*12*/], 0);
		}
		return;
	}
	switch (uParam0->f_141.f_28)
	{
		case 0:
			func_679(uParam0);
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			func_491(*uParam0, &Var0, &Var3);
			func_481(uParam0, "keeper_tutorial", 1, 0, 0, -1f);
			func_491(*uParam0, &Var0, &Var3);
			uParam0->f_497 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
			PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_497, uParam0->f_455, "player_intro", 1000f, -1f, 0, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_497, false);
			if (!PED::IS_PED_INJURED(uParam0->f_30))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_30);
				PED::SET_FORCE_FOOTSTEP_UPDATE(uParam0->f_30, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_30, uParam0->f_498, uParam0->f_455, "customer_tutorial", 1000f, -2f, 0, 0, 1148846080, 0);
				uParam0->f_458 = "customer_tutorial";
				GlobalFunc_1286(&(uParam0->f_258.f_5), GlobalFunc_2020("F"), uParam0->f_30, "HairCustomer", 0, 1);
			}
			ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(GlobalFunc_546(*uParam0), 20f, joaat("v_ilev_bs_door"), uParam0->f_498, "DOOR_TUTORIAL", uParam0->f_455, 8f, -1056964608, 0, 1148846080);
			StringCopy(&(uParam0->f_103.f_11), "SHOP_INTRO", 16);
			uParam0->f_103.f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_141.f_28++;
			break;
		
		case 1:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GlobalFunc_7629();
			if (func_673(uParam0))
			{
				uParam0->f_141.f_28 = iVar6;
			}
			if (GlobalFunc_5798(*uParam0))
			{
				GlobalFunc_5801(*uParam0, &(uParam0->f_103.f_11));
			}
			if (!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - uParam0->f_103.f_9) >= 1000)
			{
				GlobalFunc_10607(&(uParam0->f_258.f_5), "hairdau", "haird_bbye", 4, Global_90013, 0, 0);
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_103.f_9) >= 4200)
			{
				StringCopy(&(uParam0->f_103.f_11), "HAIR_INTRO_0", 16);
				uParam0->f_103.f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_141.f_28++;
			}
			break;
		
		case 2:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GlobalFunc_7629();
			if (func_673(uParam0))
			{
				uParam0->f_141.f_28 = iVar6;
			}
			if (GlobalFunc_5798(*uParam0))
			{
				GlobalFunc_5801(*uParam0, &(uParam0->f_103.f_11));
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_103.f_9) >= 1100)
			{
				uParam0->f_103.f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_141.f_28++;
			}
			break;
		
		case 3:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GlobalFunc_7629();
			if (func_673(uParam0))
			{
				uParam0->f_141.f_28 = iVar6;
			}
			if (GlobalFunc_5798(*uParam0))
			{
				GlobalFunc_5801(*uParam0, &(uParam0->f_103.f_11));
				if ((MISC::GET_GAME_TIMER() - uParam0->f_103.f_9) >= 4000)
				{
					StringCopy(&(uParam0->f_103.f_11), "HAIR_INTRO_1", 16);
				}
			}
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_38[0 /*12*/]) >= 0.7525f)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_497))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
				uParam0->f_141.f_28++;
			}
			break;
		
		case 4:
			func_660(*uParam0, &(uParam0->f_141));
			uParam0->f_141.f_28++;
			break;
		
		case 5:
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_38[0 /*12*/]) >= 0.792f)
			{
				if (!PED::IS_PED_INJURED(uParam0->f_12) && !PED::IS_PED_HEADTRACKING_PED(uParam0->f_12, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_12, PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
				}
			}
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_38[0 /*12*/]) >= 0.911f)
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				uParam0->f_141.f_28 = iVar6;
			}
			break;
		
		case 6:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GlobalFunc_7629();
			if (uParam0->f_459 == 1)
			{
				StringCopy(&(uParam0->f_103.f_11), "", 16);
				if (Global_90014.f_5 && Global_90014.f_6 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					HUD::CLEAR_HELP(1);
					Global_90014.f_5 = 0;
				}
				else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(1);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(500);
					}
					return;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_498))
			{
				ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(GlobalFunc_546(*uParam0), 20f, joaat("v_ilev_bs_door"), -1000f);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_497))
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_497, 1f);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_660(*uParam0, &(uParam0->f_141));
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam0->f_141[1 /*3*/], 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_141.f_7[1]);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_498))
				{
					ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(GlobalFunc_546(*uParam0), 20f, joaat("v_ilev_bs_door"), -1000f);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_498, 1f);
				}
				if (CAM::DOES_CAM_EXIST(uParam0->f_38[1 /*12*/]))
				{
					CAM::DESTROY_CAM(uParam0->f_38[1 /*12*/], 0);
				}
				uParam0->f_38[1 /*12*/] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
				CAM::SET_CAM_COORD(uParam0->f_38[1 /*12*/], uParam0->f_141.f_11[0 /*3*/]);
				CAM::SET_CAM_ROT(uParam0->f_38[1 /*12*/], uParam0->f_141.f_18[0 /*3*/], 2);
				CAM::SET_CAM_FOV(uParam0->f_38[1 /*12*/], uParam0->f_141.f_25[0]);
				CAM::SET_CAM_ACTIVE(uParam0->f_38[1 /*12*/], 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_12);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_12, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_12, PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(uParam0->f_12, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_103(uParam0, 0);
				}
				else
				{
					func_651(uParam0, 0);
				}
				uParam0->f_457 = "";
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_30) && !PED::IS_PED_INJURED(uParam0->f_30))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PED::DELETE_PED(&(uParam0->f_30));
				}
				else
				{
					func_640(*uParam0, &(uParam0->f_170.f_39));
					PED::SET_FORCE_FOOTSTEP_UPDATE(uParam0->f_30, 0);
					TASK::CLEAR_PED_TASKS(uParam0->f_30);
					PED::FORCE_PED_MOTION_STATE(uParam0->f_30, -668482597, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(uParam0->f_30, 1f);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_30, true, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_170.f_39, 1f, -1, 1193033728, 1056964608);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_30, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					PED::SET_PED_KEEP_TASK(uParam0->f_30, 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_30));
				}
				uParam0->f_458 = "";
			}
			func_658(uParam0);
			break;
	}
}

void func_658(var uParam0)//Position - 0x47DE0
{
	int iVar0;
	
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_141.f_10))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_141.f_10))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_141.f_10, 0);
		}
		CAM::DESTROY_CAM(uParam0->f_141.f_10, 0);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	}
	GlobalFunc_9185();
	HUD::CLEAR_HELP(1);
	GlobalFunc_2462();
	GlobalFunc_5782(*uParam0);
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			GlobalFunc_2460("END_SHOP_CUTSCENE - fading in screen", -1);
			CAM::DO_SCREEN_FADE_IN(500);
		}
	}
	iVar0 = 0;
	while (iVar0 < 44)
	{
		if (GlobalFunc_330(iVar0) == 0)
		{
			GlobalFunc_8590(iVar0, 1);
		}
		iVar0++;
	}
	uParam0->f_95 = 0;
	uParam0->f_472.f_19 = 0;
	uParam0->f_560 = 0;
	uParam0->f_459 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}


void func_660(int iParam0, var uParam1)//Position - 0x47F20
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = MISC::GET_HASH_KEY("v_hairdresser");
	iVar1 = MISC::GET_HASH_KEY("v_barbers");
	iVar2 = MISC::GET_HASH_KEY(GlobalFunc_2464(iParam0));
	if (iVar2 == iVar0)
	{
		iVar3 = 0;
		*(uParam1[0 /*3*/]) = { -820.49f, -186.87f, 36.5792f };
		uParam1->f_7[0] = 303.2416f;
		*(uParam1[1 /*3*/]) = { -820.4874f, -186.8682f, 36.5689f };
		uParam1->f_7[1] = 297.7427f;
		switch (uParam1->f_28)
		{
			case 0:
				uParam1->f_11[0 /*3*/] = { -821.3704f, -188.6373f, 38.1144f };
				uParam1->f_18[0 /*3*/] = { -9.1377f, 0f, -26.8098f };
				uParam1->f_25[0] = 45f;
				uParam1->f_11[1 /*3*/] = { -821.3514f, -188.5915f, 38.1065f };
				uParam1->f_18[1 /*3*/] = { -9.1377f, 0f, -26.8098f };
				uParam1->f_25[1] = 45f;
				break;
			
			case 1:
				uParam1->f_11[0 /*3*/] = { -821.3514f, -188.5915f, 38.1065f };
				uParam1->f_18[0 /*3*/] = { -9.1377f, 0f, -26.8098f };
				uParam1->f_25[0] = 45f;
				uParam1->f_11[1 /*3*/] = { -821.3514f, -188.5915f, 38.1065f };
				uParam1->f_18[1 /*3*/] = { -9.1377f, 0f, -26.8098f };
				uParam1->f_25[1] = 45f;
				break;
			
			case 2:
				uParam1->f_11[0 /*3*/] = { -816.8626f, -187.4645f, 38.2802f };
				uParam1->f_18[0 /*3*/] = { -12.0164f, 0f, -0.8625f };
				uParam1->f_25[0] = 35f;
				uParam1->f_11[1 /*3*/] = { -816.853f, -187.3602f, 38.258f };
				uParam1->f_18[1 /*3*/] = { -12.0164f, 0f, -0.8625f };
				uParam1->f_25[1] = 35f;
				break;
		}
	}
	else if (iVar2 == iVar1)
	{
		iVar3 = 1;
		*(uParam1[0 /*3*/]) = { 133.3136f, -1711.19f, 28.2916f };
		uParam1->f_7[0] = 316.6123f;
		*(uParam1[1 /*3*/]) = { 134.7426f, -1710.843f, 28.2916f };
		uParam1->f_7[1] = 310.9816f;
		switch (uParam1->f_28)
		{
			case 0:
				uParam1->f_11[0 /*3*/] = { 139.5276f, -1708.974f, 29.7782f };
				uParam1->f_18[0 /*3*/] = { -4.721f, 0.2142f, 119.2654f };
				uParam1->f_25[0] = 40f;
				uParam1->f_11[1 /*3*/] = { 139.39f, -1709.049f, 29.7652f };
				uParam1->f_18[1 /*3*/] = { -4.721f, 0.2142f, 119.2654f };
				uParam1->f_25[1] = 40f;
				break;
			
			case 1:
				uParam1->f_11[0 /*3*/] = { 139.39f, -1709.049f, 29.7652f };
				uParam1->f_18[0 /*3*/] = { -4.721f, 0.2142f, 119.2654f };
				uParam1->f_25[0] = 40f;
				uParam1->f_11[1 /*3*/] = { 139.3498f, -1709.072f, 29.7614f };
				uParam1->f_18[1 /*3*/] = { -4.721f, 0.2142f, 119.2654f };
				uParam1->f_25[1] = 40f;
				break;
			
			case 2:
				uParam1->f_11[0 /*3*/] = { 138.1713f, -1707.761f, 29.7857f };
				uParam1->f_18[0 /*3*/] = { -6.5899f, 0.2142f, -160.3469f };
				uParam1->f_25[0] = 40f;
				uParam1->f_11[1 /*3*/] = { 138.0825f, -1707.512f, 29.8162f };
				uParam1->f_18[1 /*3*/] = { -6.5899f, 0.2142f, -160.3469f };
				uParam1->f_25[1] = 40f;
				break;
			
			case 3:
				break;
			
			case 4:
				uParam1->f_11[0 /*3*/] = { 134.0933f, -1712.444f, 30.0197f };
				uParam1->f_18[0 /*3*/] = { -9.3416f, 0f, -25.3724f };
				uParam1->f_25[0] = 45f;
				uParam1->f_11[1 /*3*/] = { 134.0933f, -1712.444f, 30.0197f };
				uParam1->f_18[1 /*3*/] = { -9.3416f, 0f, -25.3724f };
				uParam1->f_25[1] = 45f;
				break;
			
			case 5:
				break;
			
			case 6:
				uParam1->f_11[0 /*3*/] = { 134.0933f, -1712.444f, 30.0197f };
				uParam1->f_18[0 /*3*/] = { -9.3416f, 0f, -25.3724f };
				uParam1->f_25[0] = 45f;
				uParam1->f_11[1 /*3*/] = { 134.0933f, -1712.444f, 30.0197f };
				uParam1->f_18[1 /*3*/] = { -9.3416f, 0f, -25.3724f };
				uParam1->f_25[1] = 45f;
				break;
			}
	}
	GlobalFunc_7133(iVar3, iParam0, uParam1[0 /*3*/]);
	GlobalFunc_7134(iVar3, iParam0, &(uParam1->f_7[0]));
	GlobalFunc_7133(iVar3, iParam0, uParam1[1 /*3*/]);
	GlobalFunc_7134(iVar3, iParam0, &(uParam1->f_7[1]));
	GlobalFunc_7133(iVar3, iParam0, &(uParam1->f_11[0 /*3*/]));
	GlobalFunc_7132(iVar3, iParam0, &(uParam1->f_18[0 /*3*/]));
	GlobalFunc_7133(iVar3, iParam0, &(uParam1->f_11[1 /*3*/]));
	GlobalFunc_7132(iVar3, iParam0, &(uParam1->f_18[1 /*3*/]));
}













int func_673(var uParam0)//Position - 0x48C9F
{
	if (uParam0->f_459 == 0)
	{
		if (GlobalFunc_7135())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			uParam0->f_459 = 1;
			return 1;
		}
	}
	return 0;
}






void func_679(var uParam0)//Position - 0x490B4
{
	PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(uParam0->f_170.f_31, 3f) && !Global_68245)
	{
		GlobalFunc_7503(uParam0);
	}
	GlobalFunc_9214(uParam0, 1077936128);
	func_660(*uParam0, &(uParam0->f_141));
	GlobalFunc_5798(*uParam0);
	uParam0->f_472.f_19 = 1;
	uParam0->f_472.f_18 = 0;
	GlobalFunc_2582(&(uParam0->f_472), 1);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam0->f_141[0 /*3*/], 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_141.f_7[0]);
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
	GlobalFunc_7629();
	func_479(uParam0, func_480(uParam0, 2, ""));
}

void func_680(var uParam0)//Position - 0x49199
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	
	iVar6 = 4;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return;
	}
	if ((GlobalFunc_142() || GlobalFunc_8560(*uParam0)) || SYSTEM::VDIST(uParam0->f_12.f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 40f)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		if (CAM::DOES_CAM_EXIST(uParam0->f_38[0 /*12*/]))
		{
			CAM::DESTROY_CAM(uParam0->f_38[0 /*12*/], 0);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_38[1 /*12*/]))
		{
			CAM::DESTROY_CAM(uParam0->f_38[1 /*12*/], 0);
		}
		return;
	}
	switch (uParam0->f_141.f_28)
	{
		case 0:
			func_679(uParam0);
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			func_491(*uParam0, &Var0, &Var3);
			uParam0->f_497 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
			PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_497, uParam0->f_455, "player_intro", 1000f, -1f, 0, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_497, false);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_428))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_428))
				{
				}
			}
			func_481(uParam0, "keeper_intro", 1, 0, 0, -1056964608);
			if (!PED::IS_PED_INJURED(uParam0->f_30))
			{
				func_640(*uParam0, &(uParam0->f_170.f_39));
				PED::SET_FORCE_FOOTSTEP_UPDATE(uParam0->f_30, 1);
				TASK::CLEAR_PED_TASKS(uParam0->f_30);
				TASK::OPEN_SEQUENCE_TASK(&uVar7);
				uParam0->f_458 = "customer_intro";
				TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_455, uParam0->f_458, Var0, Var3, 1000f, -4f, -1, 1536, 0, 2, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar7);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_30, uVar7);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_30, 0, 0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar7);
				GlobalFunc_1286(&(uParam0->f_258.f_5), GlobalFunc_2020("F"), uParam0->f_30, "HairCustomer", 0, 1);
			}
			StringCopy(&(uParam0->f_103.f_11), "SHOP_INTRO", 16);
			uParam0->f_103.f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_141.f_28++;
			break;
		
		case 1:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GlobalFunc_7629();
			if (func_673(uParam0))
			{
				uParam0->f_141.f_28 = iVar6;
			}
			if (GlobalFunc_5798(*uParam0))
			{
				GlobalFunc_5801(*uParam0, &(uParam0->f_103.f_11));
			}
			if (!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - uParam0->f_103.f_9) >= 500)
			{
				GlobalFunc_10607(&(uParam0->f_258.f_5), "hairdau", "haird_hbye", 4, Global_90013, 0, 0);
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_103.f_9) >= 4700)
			{
				StringCopy(&(uParam0->f_103.f_11), "HAIR_INTRO_0", 16);
				uParam0->f_103.f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_141.f_28++;
			}
			break;
		
		case 2:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GlobalFunc_7629();
			if (func_673(uParam0))
			{
				uParam0->f_141.f_28 = iVar6;
			}
			if (GlobalFunc_5798(*uParam0))
			{
				GlobalFunc_5801(*uParam0, &(uParam0->f_103.f_11));
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_103.f_9) >= 1100)
			{
				uParam0->f_103.f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_141.f_28++;
			}
			break;
		
		case 3:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GlobalFunc_7629();
			if (func_673(uParam0))
			{
				uParam0->f_141.f_28 = iVar6;
			}
			if (GlobalFunc_5798(*uParam0))
			{
				GlobalFunc_5801(*uParam0, &(uParam0->f_103.f_11));
				if ((MISC::GET_GAME_TIMER() - uParam0->f_103.f_9) >= 4000)
				{
					StringCopy(&(uParam0->f_103.f_11), "HAIR_INTRO_1", 16);
				}
			}
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_38[0 /*12*/]) >= 0.883f)
			{
				uParam0->f_141.f_28 = iVar6;
			}
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_38[0 /*12*/]) >= 0.734f)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_497))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) == 1)
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
			}
			break;
		
		case 4:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GlobalFunc_7629();
			if (uParam0->f_459 == 1)
			{
				StringCopy(&(uParam0->f_103.f_11), "", 16);
				GlobalFunc_2462();
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(1);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(500);
					}
					return;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_497))
				{
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_498))
				{
				}
				GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -820.9124f, -187.2931f, 36.5689f, 319.5678f, 0, 1);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_103(uParam0, 0);
				}
				TASK::CLEAR_PED_TASKS(uParam0->f_12);
				func_651(uParam0, 0);
				uParam0->f_457 = "";
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_30) && !PED::IS_PED_INJURED(uParam0->f_30))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PED::DELETE_PED(&(uParam0->f_30));
				}
				else
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_30);
					PED::FORCE_PED_MOTION_STATE(uParam0->f_30, -668482597, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(uParam0->f_30, 1f);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_30, true, 0);
					TASK::OPEN_SEQUENCE_TASK(&uVar7);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_170.f_39, 1f, -1, 1193033728, 1056964608);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar7);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_30, uVar7);
					TASK::CLEAR_SEQUENCE_TASK(&uVar7);
					PED::SET_PED_KEEP_TASK(uParam0->f_30, 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_30));
				}
				uParam0->f_458 = "";
			}
			func_658(uParam0);
			break;
	}
}



bool func_683(var uParam0)//Position - 0x49747
{
	return uParam0->f_95;
}

void func_684(var uParam0)//Position - 0x49753
{
	if (((GlobalFunc_5785(1) && !GlobalFunc_142()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || GlobalFunc_1549(1))
	{
		GlobalFunc_9217(uParam0);
		if (uParam0->f_8 == 1)
		{
			if ((func_683(uParam0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				return;
			}
			if (!Global_68245 && !uParam0->f_460)
			{
				Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_47++;
				uParam0->f_460 = 1;
			}
			uParam0->f_103.f_17 = 1;
			uParam0->f_103 = -1;
			uParam0->f_11 = 2;
			uParam0->f_103.f_5 = 0;
		}
	}
}

void func_685(var uParam0)//Position - 0x49800
{
	if (uParam0->f_465)
	{
		STREAMING::REMOVE_PTFX_ASSET();
		uParam0->f_465 = 0;
	}
	if (uParam0->f_466)
	{
		AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
		uParam0->f_466 = 0;
	}
}





void func_690(var uParam0)//Position - 0x49996
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	bool bVar7;
	struct<3> Var8;
	int iVar11;
	char cVar12[16];
	char* sVar16;
	char* sVar17;
	
	switch (uParam0->f_103.f_5)
	{
		case 0:
			uParam0->f_513 = -99;
			uParam0->f_514 = -99;
			uParam0->f_518 = -99;
			uParam0->f_519 = -99;
			uParam0->f_520 = -1;
			uParam0->f_521 = -1;
			uParam0->f_515 = -99;
			uParam0->f_516 = -99;
			uParam0->f_517 = -99;
			StringCopy(&(uParam0->f_528), "SCRIPT\Hair_Cut", 24);
			uParam0->f_580 = PED::GET_PED_HEAD_OVERLAY_NUM(4) + 1;
			if (func_707(uParam0, &(uParam0->f_428), uParam0->f_492))
			{
				uParam0->f_103.f_5++;
			}
			else
			{
				func_785(uParam0, 0);
			}
			break;
		
		case 1:
			if (GlobalFunc_8555(*uParam0))
			{
				uParam0->f_103.f_5++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(joaat("p_cs_scissors_s"));
			if ((!GlobalFunc_8557(*uParam0) && !Global_68245) && !GlobalFunc_100(uParam0->f_30.f_2, 0f, 0f, 0f))
			{
				uParam0->f_95 = 1;
			}
			else
			{
				uParam0->f_95 = 0;
			}
			if (!uParam0->f_12.f_14)
			{
				func_705(&(uParam0->f_12), uParam0->f_12.f_2);
				if (uParam0->f_12.f_1 != 0)
				{
					STREAMING::REQUEST_MODEL(uParam0->f_12.f_1);
					uParam0->f_12.f_16 = 1;
				}
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!uParam0->f_428.f_14)
				{
					func_705(&(uParam0->f_428), uParam0->f_428.f_2);
					if (uParam0->f_428.f_1 != 0)
					{
						STREAMING::REQUEST_MODEL(uParam0->f_428.f_1);
						uParam0->f_428.f_16 = 1;
					}
				}
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!uParam0->f_30.f_6)
				{
					func_705(&(uParam0->f_30), uParam0->f_30.f_2);
					if (func_683(uParam0))
					{
						if (uParam0->f_30.f_1 != 0)
						{
							STREAMING::REQUEST_MODEL(uParam0->f_30.f_1);
							uParam0->f_30.f_7 = 1;
						}
					}
				}
			}
			if ((((uParam0->f_12.f_16 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_1)) || (uParam0->f_428.f_16 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_428.f_1))) || (uParam0->f_30.f_7 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_30.f_1))) || !STREAMING::HAS_MODEL_LOADED(joaat("p_cs_scissors_s")))
			{
				return;
			}
			if (func_683(uParam0))
			{
				if (GlobalFunc_4405(uParam0))
				{
					uParam0->f_455 = "misshair_shop@hair_dressers";
				}
				else
				{
					uParam0->f_455 = "misshair_shop@barbers";
				}
				if (!func_589(uParam0))
				{
					return;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) && uParam0->f_12.f_16)
			{
				bVar7 = false;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if ((NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_56)) && !Local_56.f_3)
					{
						bVar7 = true;
					}
				}
				else
				{
					bVar7 = true;
				}
				if (!bVar7)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						GlobalFunc_2460("Using net shop keeper..", -1);
						func_782(&(uParam0->f_12));
						if (!uParam0->f_12.f_15)
						{
							GlobalFunc_2460("Waiting for shop keeper to be initialised", -1);
							return;
						}
					}
				}
				else
				{
					GlobalFunc_2460("Creating shop keeper..", -1);
					MISC::CLEAR_AREA(uParam0->f_12.f_2, 2.5f, 1, 0, 0, 0);
					Var8 = { uParam0->f_12.f_2 };
					if (func_683(uParam0))
					{
						if (!GlobalFunc_4405(uParam0))
						{
							if (func_491(*uParam0, &Var1, &Var4))
							{
								Var8 = { Var1 };
							}
						}
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (!GlobalFunc_2625(&Local_56, 4, uParam0->f_12.f_1, Var8, uParam0->f_12.f_5, 1, 1, 1))
						{
							return;
						}
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							Local_56.f_3 = 1;
						}
						func_782(&(uParam0->f_12));
					}
					else
					{
						uParam0->f_12 = PED::CREATE_PED(4, uParam0->f_12.f_1, Var8, uParam0->f_12.f_5, 0, 0);
					}
					if (func_614(0))
					{
						if (GlobalFunc_4405(uParam0))
						{
							PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_12);
						}
						else
						{
							iVar0 = (*uParam0 - 1);
							switch (iVar0)
							{
								case 0:
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 0, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 2, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 3, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 4, 1, 0, 0);
									break;
								
								case 1:
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 0, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 2, 0, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 3, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 4, 0, 0, 0);
									break;
								
								case 2:
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 0, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 2, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 3, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 4, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 8, 0, 0, 0);
									break;
								
								case 3:
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 0, 1, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 2, 1, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 3, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 4, 0, 0, 0);
									break;
								
								case 4:
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 0, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 2, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 3, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 4, 1, 0, 0);
									break;
								
								case 5:
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 0, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 2, 1, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 3, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 4, 1, 0, 0);
									break;
								}
						}
						if (GlobalFunc_2498(*uParam0))
						{
							INTERIOR::_0x82EBB79E258FA2B7(uParam0->f_12, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(GlobalFunc_546(*uParam0), GlobalFunc_2464(*uParam0)));
						}
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_12, 1);
						ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_12, 300);
						if (GlobalFunc_4405(uParam0))
						{
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_12, 0);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 185, 1);
						}
						PED::SET_PED_CAN_EVASIVE_DIVE(uParam0->f_12, 0);
						PED::_0x2F3C3D9F50681DE4(uParam0->f_12, 1);
						PED::SET_PED_AS_ENEMY(uParam0->f_12, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, 1);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) && !PED::IS_PED_INJURED(uParam0->f_12))
				{
					if (GlobalFunc_4405(uParam0))
					{
						GlobalFunc_200(&(uParam0->f_258.f_5), GlobalFunc_2020("E"));
						GlobalFunc_1286(&(uParam0->f_258.f_5), GlobalFunc_2020("E"), uParam0->f_12, "ShopHairStylist", 0, 1);
					}
					else
					{
						GlobalFunc_200(&(uParam0->f_258.f_5), GlobalFunc_2020("D"));
						GlobalFunc_1286(&(uParam0->f_258.f_5), GlobalFunc_2020("D"), uParam0->f_12, "ShopBarber", 0, 1);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_1);
					uParam0->f_12.f_16 = 0;
					uParam0->f_12.f_14 = 1;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_428) && uParam0->f_428.f_16)
			{
				GlobalFunc_2460("Creating shop receptionist", -1);
				MISC::CLEAR_AREA(uParam0->f_428.f_2, 2.5f, 1, 0, 0, 0);
				uParam0->f_428 = PED::CREATE_PED(5, uParam0->f_428.f_1, uParam0->f_428.f_2, uParam0->f_428.f_5, 0, 0);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_428);
				if (GlobalFunc_2498(*uParam0))
				{
					INTERIOR::_0x82EBB79E258FA2B7(uParam0->f_428, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(GlobalFunc_546(*uParam0), GlobalFunc_2464(*uParam0)));
				}
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_428, 1);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_428, 185, 1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_12, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_428.f_1);
				uParam0->f_428.f_16 = 0;
				PED::SET_PED_AS_ENEMY(uParam0->f_428, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_428, 1);
				uParam0->f_428.f_14 = 1;
				GlobalFunc_200(&(uParam0->f_258.f_5), GlobalFunc_2020("D"));
				GlobalFunc_1286(&(uParam0->f_258.f_5), GlobalFunc_2020("D"), uParam0->f_12, "ShopBarberAssistant", 0, 1);
				if (GlobalFunc_4405(uParam0))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_12, "S_M_M_HAIRDRESSER_01_BLACK_MINI_01");
				}
				else
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_12, "S_F_M_FEMBARBER_BLACK_MINI_01");
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_30) && uParam0->f_30.f_7)
			{
				GlobalFunc_2460("Creating shop customer", -1);
				MISC::CLEAR_AREA(uParam0->f_30.f_2, 2.5f, 1, 0, 0, 0);
				uParam0->f_30 = PED::CREATE_PED(4, uParam0->f_30.f_1, uParam0->f_30.f_2, uParam0->f_30.f_5, 0, 0);
				if (GlobalFunc_4405(uParam0))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_30);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_30, 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_30, 2, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_30, 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_30, 4, 0, 0, 0);
				}
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_30, false, 0);
				if (GlobalFunc_2498(*uParam0))
				{
					INTERIOR::_0x82EBB79E258FA2B7(uParam0->f_30, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(GlobalFunc_546(*uParam0), GlobalFunc_2464(*uParam0)));
				}
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uParam0->f_30, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_30.f_1);
				uParam0->f_30.f_7 = 0;
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@male@generic@react_cowering");
				uParam0->f_30.f_6 = 1;
			}
			if (!uParam0->f_464)
			{
				iVar11 = 1;
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) || PED::IS_PED_INJURED(uParam0->f_12))
				{
					iVar11 = 0;
				}
				if (GlobalFunc_4405(uParam0) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_428))
					{
						iVar11 = 0;
					}
				}
				if (iVar11 == 1)
				{
					StringCopy(&cVar12, "HAIRDRESSER", 16);
					StringIntConCat(&cVar12, *uParam0, 16);
					PED::ADD_RELATIONSHIP_GROUP(&cVar12, &(uParam0->f_493));
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_428))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_428, uParam0->f_493);
					}
					if (func_614(0))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_12, uParam0->f_493);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_493, 1862763509);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, uParam0->f_493);
							PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_12, false);
						}
					}
					uParam0->f_464 = 1;
				}
			}
			if (!func_683(uParam0))
			{
				if (GlobalFunc_4405(uParam0))
				{
					uParam0->f_455 = "misshair_shop@hair_dressers";
				}
				else
				{
					uParam0->f_455 = "misshair_shop@barbers";
				}
				if (!func_589(uParam0))
				{
					return;
				}
			}
			if (func_683(uParam0))
			{
				if (GlobalFunc_4405(uParam0))
				{
					sVar16 = "keeper_base";
					sVar17 = "player_base";
				}
				else
				{
					sVar16 = "keeper_tutorial_base";
					sVar17 = "customer_tutorial_base";
				}
				if (!PED::IS_PED_INJURED(uParam0->f_12))
				{
					func_481(uParam0, sVar16, 0, 0, 0, -1056964608);
				}
				if (!PED::IS_PED_INJURED(uParam0->f_30))
				{
					if (func_491(*uParam0, &Var1, &Var4))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_30, uParam0->f_455, sVar17, Var1, Var4, 1000f, -8f, -1, 5641, 0, 2, 0);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_428))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_428))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(uParam0->f_428, "WORLD_HUMAN_STAND_IMPATIENT_UPRIGHT", 0, 0);
				}
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (Global_262145.f_2424)
				{
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShops", 0);
				}
			}
			GlobalFunc_10875(*uParam0, 0, 0);
			uParam0->f_103.f_5 = 0;
			uParam0->f_11 = 1;
			break;
	}
}















void func_705(var uParam0, struct<3> Param1)//Position - 0x4B877
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if ((PED::IS_PED_INJURED(*uParam0) || PED::IS_PED_FLEEING(*uParam0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), Param1, 1) > 10f)
		{
			GlobalFunc_2460("Marking previous shop ped as no longer needed", -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
			return;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		GlobalFunc_2460("Deleting previous shop ped.", -1);
		PED::DELETE_PED(uParam0);
	}
}


bool func_707(var uParam0, var uParam1, int iParam2)//Position - 0x4B8FA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uParam0->f_9 = 0;
	func_709(uParam0, -1, 0, 0, 0);
	func_708(&(uParam0->f_12), 0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
	func_708(uParam1, 0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
	iVar1 = MISC::GET_HASH_KEY("v_hairdresser");
	iVar2 = MISC::GET_HASH_KEY("v_barbers");
	iVar3 = MISC::GET_HASH_KEY(GlobalFunc_2464(iParam2));
	if (iVar3 == iVar1)
	{
		iVar0 = 0;
		func_709(uParam0, iParam2, MISC::GET_HASH_KEY("Hair_room"), 1, 1);
		func_708(&(uParam0->f_12), joaat("s_m_m_hairdress_01"), -815.86f, -183.75f, 36.5689f, 132.08f, -815.86f, -183.75f, 36.5689f, 132.08f);
		func_708(uParam1, joaat("a_f_y_business_01"), -823.77f, -183.76f, 36.5689f, 209.4933f, 0f, 0f, 0f, 0f);
		uParam0->f_30.f_1 = joaat("a_m_m_business_01");
		uParam0->f_30.f_2 = { -817.786f, -184.7719f, 36.5689f };
		uParam0->f_30.f_5 = 122.6571f;
	}
	else if (iVar3 == iVar2)
	{
		iVar0 = 1;
		func_709(uParam0, iParam2, MISC::GET_HASH_KEY("V_38_BarberRM"), 1, 1);
		func_708(&(uParam0->f_12), joaat("s_f_m_fembarber"), 135.0426f, -1707.733f, 28.2916f, 150.8105f, 137.6816f, -1708.468f, 28.2916f, 134.128f);
		uParam0->f_30.f_1 = joaat("a_m_y_stbla_02");
		uParam0->f_30.f_2 = { 138.353f, -1709.266f, 28.305f };
		uParam0->f_30.f_5 = -40.15f;
	}
	if (uParam0->f_9)
	{
	}
	GlobalFunc_7133(iVar0, iParam2, &(uParam0->f_12.f_2));
	GlobalFunc_7134(iVar0, iParam2, &(uParam0->f_12.f_5));
	GlobalFunc_7133(iVar0, iParam2, &(uParam0->f_12.f_10));
	GlobalFunc_7134(iVar0, iParam2, &(uParam0->f_12.f_13));
	GlobalFunc_7133(iVar0, iParam2, &(uParam1->f_2));
	GlobalFunc_7134(iVar0, iParam2, &(uParam1->f_5));
	GlobalFunc_7133(iVar0, iParam2, &(uParam0->f_30.f_2));
	GlobalFunc_7134(iVar0, iParam2, &(uParam0->f_30.f_5));
	return uParam0->f_9;
}

void func_708(var uParam0, int iParam1, struct<3> Param2, float fParam5, struct<3> Param6, float fParam9)//Position - 0x4BAEF
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = { Param2 };
	uParam0->f_5 = fParam5;
	uParam0->f_10 = { Param6 };
	uParam0->f_13 = fParam9;
}

void func_709(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4BB1D
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_9 = iParam4;
}

void func_710(var uParam0)//Position - 0x4BB3C
{
	if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()) && uParam0->f_11 > 0) && uParam0->f_103.f_31 < 6)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_56.f_1))
		{
			STREAMING::REQUEST_MODEL(joaat("p_cs_scissors_s"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("p_cs_scissors_s")))
			{
				if (func_712())
				{
					if (GlobalFunc_910(&(Local_56.f_1), joaat("p_cs_scissors_s"), uParam0->f_12.f_2, 1, 1, 0, 1))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_56.f_1), false);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_56.f_1), false, 0);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_56.f_1), true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_scissors_s"));
					}
				}
			}
		}
	}
}


int func_712()//Position - 0x4BC44
{
	if (Local_56.f_2 > 0)
	{
		return 1;
	}
	if (GlobalFunc_6840(2, 0, 1))
	{
		NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(2);
		Local_56.f_2 = 2;
		return 1;
	}
	return 0;
}







void func_719(var uParam0)//Position - 0x4BEA5
{
	int iVar0;
	
	if (!uParam0->f_9)
	{
		GlobalFunc_2476(&(uParam0->f_258), -1, 1);
		return;
	}
	if (PED::IS_PED_INJURED(uParam0->f_12))
	{
		return;
	}
	if (uParam0->f_7)
	{
		if (uParam0->f_11 == 3)
		{
			if (!uParam0->f_543)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 5.5f || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!uParam0->f_544)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uParam0->f_542 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
						}
						else
						{
							uParam0->f_541 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
						}
						uParam0->f_544 = 1;
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_542))
						{
							GlobalFunc_2476(&(uParam0->f_258), 0, 2);
							uParam0->f_543 = 1;
						}
					}
					else if ((MISC::GET_GAME_TIMER() - uParam0->f_541) > 0)
					{
						GlobalFunc_2476(&(uParam0->f_258), 0, 2);
						uParam0->f_543 = 1;
					}
				}
			}
		}
		else if (uParam0->f_11 == 4)
		{
			uParam0->f_543 = 1;
		}
	}
	else if (GlobalFunc_2499(*uParam0) > 30f)
	{
		uParam0->f_543 = 0;
		uParam0->f_544 = 0;
	}
	if (uParam0->f_103.f_19)
	{
		uParam0->f_543 = 1;
		if (uParam0->f_103.f_31 == 1)
		{
			GlobalFunc_2476(&(uParam0->f_258), -1, 1);
			if (!uParam0->f_547)
			{
				if (!uParam0->f_548)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_546 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 100);
					}
					else
					{
						uParam0->f_545 = MISC::GET_GAME_TIMER() + 100;
					}
					uParam0->f_548 = 1;
				}
				else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_546))
					{
						GlobalFunc_2476(&(uParam0->f_258), 1, 2);
						uParam0->f_547 = 1;
					}
				}
				else if ((MISC::GET_GAME_TIMER() - uParam0->f_545) > 0)
				{
					GlobalFunc_2476(&(uParam0->f_258), 1, 2);
					uParam0->f_547 = 1;
				}
			}
		}
		else if (uParam0->f_103.f_31 == 2)
		{
			uParam0->f_556 = 1;
			uParam0->f_555 = 0;
			if (uParam0->f_103.f_15 && !uParam0->f_103.f_22)
			{
				if (!uParam0->f_551)
				{
					if (!uParam0->f_552)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uParam0->f_550 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(100, 400));
						}
						else
						{
							uParam0->f_549 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(100, 400));
						}
						uParam0->f_552 = 1;
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_550))
						{
							GlobalFunc_2476(&(uParam0->f_258), 2, 2);
							uParam0->f_551 = 1;
						}
					}
					else if ((MISC::GET_GAME_TIMER() - uParam0->f_549) > 0)
					{
						GlobalFunc_2476(&(uParam0->f_258), 2, 2);
						uParam0->f_551 = 1;
					}
				}
			}
		}
	}
	else
	{
		uParam0->f_547 = 0;
		uParam0->f_548 = 0;
		uParam0->f_551 = 0;
		uParam0->f_552 = 0;
	}
	if (uParam0->f_103.f_31 == 6)
	{
		if (uParam0->f_556)
		{
			if (!uParam0->f_555)
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_554 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
				}
				else
				{
					uParam0->f_553 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
				}
				uParam0->f_555 = 1;
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_554))
				{
					GlobalFunc_2476(&(uParam0->f_258), 3, 2);
					uParam0->f_556 = 0;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_553) > 0)
			{
				GlobalFunc_2476(&(uParam0->f_258), 3, 2);
				uParam0->f_556 = 0;
			}
		}
	}
	if (uParam0->f_258 != -1)
	{
		if (!GlobalFunc_9189(&(uParam0->f_258), *uParam0, 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!uParam0->f_540)
				{
					uParam0->f_539 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 3000);
					uParam0->f_540 = 1;
				}
				else if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_539))
				{
					GlobalFunc_2455(&(uParam0->f_258));
					uParam0->f_540 = 0;
				}
			}
			else if (!uParam0->f_540)
			{
				uParam0->f_538 = MISC::GET_GAME_TIMER();
				uParam0->f_540 = 1;
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_538) > 3000)
			{
				GlobalFunc_2455(&(uParam0->f_258));
				uParam0->f_540 = 0;
			}
		}
		else
		{
			uParam0->f_540 = 0;
			switch (uParam0->f_258)
			{
				case 0:
					if (GlobalFunc_7504(-1))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_NO_COPS", "SPEECH_PARAMS_FORCE", 1);
					}
					else if (GlobalFunc_5459(PLAYER::PLAYER_PED_ID()) || (func_733(PLAYER::PLAYER_PED_ID()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_GREET_UNUSUAL", "SPEECH_PARAMS_FORCE", 1);
					}
					else if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("player_zero")) && (func_721(PLAYER::PLAYER_PED_ID(), 12, 8) || func_721(PLAYER::PLAYER_PED_ID(), 12, 28)))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "KIFFLOM_GREET", "SPEECH_PARAMS_FORCE", 1);
					}
					else
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_GREET", "SPEECH_PARAMS_FORCE", 1);
					}
					break;
				
				case 1:
					switch (*uParam0)
					{
						case 0:
							if (Global_90014.f_1312 == 1)
							{
								AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_HAIR_WHAT_WANT", "SPEECH_PARAMS_FORCE", 1);
							}
							else
							{
								Stack.Push(PLAYER::PLAYER_PED_ID());
								Stack.Push(2);
								Stack.Push(-1);
								Call_Loc(uParam0->f_447);
								iVar0 = StackVal;
								if (iVar0 != 1 && GlobalFunc_8315() == 0)
								{
									AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_HAIR_WHAT_WANT", "SPEECH_PARAMS_FORCE", 1);
								}
							}
							Global_90014.f_1312 = 2;
							break;
						
						default:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_HAIR_WHAT_WANT", "SPEECH_PARAMS_FORCE", 1);
							Global_90014.f_1312 = 0;
							break;
					}
					break;
				
				case 2:
					switch (*uParam0)
					{
						case 0:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_CUTTING_HAIR", "SPEECH_PARAMS_FORCE", 1);
							Global_90014.f_1312 = 3;
							break;
						
						default:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_CUTTING_HAIR", "SPEECH_PARAMS_FORCE", 1);
							Global_90014.f_1312 = 1;
							break;
					}
					break;
				
				case 3:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_GOODBYE", "SPEECH_PARAMS_FORCE", 1);
					break;
				
				default:
					break;
			}
			GlobalFunc_2503(&(uParam0->f_258));
		}
	}
}


int func_721(int iParam0, int iParam1, int iParam2)//Position - 0x4C4C8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10874(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_721(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_721(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10874(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_721(iParam0, 14, iVar4))
										{
											if (!GlobalFunc_8490(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_68106[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_81(iParam0, iVar2);
						Global_68106[2 /*14*/] = { GlobalFunc_10874(iVar0, iVar2, iVar1) };
						if (!GlobalFunc_8490(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_68106[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar32 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_721(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_4 || Global_68106[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
	{
		return 1;
	}
	return 0;
}












int func_733(int iParam0)//Position - 0x4FE6C
{
	int iVar0;
	int iVar1;
	
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar0 = func_81(iParam0, 4);
	return GlobalFunc_517(iVar1, 4, iVar0);
}








void func_741(var uParam0)//Position - 0x500CD
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (uParam0->f_559)
			{
				if (uParam0->f_11 != 4 || uParam0->f_103.f_31 > 6)
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()))
					{
						PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
						uParam0->f_559 = 0;
					}
				}
			}
			else if (uParam0->f_11 == 4 && uParam0->f_103.f_31 <= 6)
			{
				uParam0->f_559 = 1;
			}
		}
	}
	else
	{
		uParam0->f_559 = 0;
	}
}

void func_742(var uParam0)//Position - 0x50148
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	float fVar5;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_106(uParam0, 1)))
	{
		uVar0 = func_106(uParam0, 1);
		if (!PED::IS_PED_INJURED(uVar0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 474215631) != 1)
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 185, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 150, 1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar0, 1);
				TASK::TASK_COWER(iVar0, -1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 0);
				PED::SET_PED_KEEP_TASK(iVar0, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
			}
		}
	}
	if (uParam0->f_95)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_106(uParam0, 0)) && func_614(0))
		{
			uVar1 = func_106(uParam0, 0);
			if (!PED::IS_PED_INJURED(uVar1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, 2112745624) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar1, 474215631) != 1)
				{
					PED::SET_PED_CONFIG_FLAG(iVar1, 185, 0);
					PED::SET_PED_CONFIG_FLAG(iVar1, 150, 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar1, 1);
					TASK::TASK_COWER(iVar1, -1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 0);
					PED::SET_PED_KEEP_TASK(iVar1, 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_30))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_30))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_30, "amb@prop_human_seat_chair@male@generic@react_cowering", "idle_front", 3))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_chair@male@generic@react_cowering"))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_30, 1) };
					if (GlobalFunc_4405(uParam0))
					{
						fVar5 = 0.32f;
					}
					else
					{
						fVar5 = 0.2f;
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_30, 1);
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_30, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_30, "amb@prop_human_seat_chair@male@generic@react_cowering", "idle_front", Var2.x, Var2.f_1, (Var2.f_2 - fVar5), 0f, 0f, ENTITY::GET_ENTITY_HEADING(uParam0->f_30), 4f, -2f, -1, 1, 0, 2, 0);
					PED::SET_PED_KEEP_TASK(uParam0->f_30, 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_30));
				}
			}
		}
	}
}

void func_743(var uParam0)//Position - 0x502FC
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || GlobalFunc_4405(uParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1098463898) == 1 || TASK::IS_PED_ACTIVE_IN_SCENARIO(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_74("HAIR_SOFA_STAND"))
			{
				HUD::CLEAR_HELP(1);
			}
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}

















void func_760(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x50F27
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((((uParam0->f_9 && !uParam0->f_1) && GlobalFunc_5785(1)) && !GlobalFunc_8560(*uParam0)) && !GlobalFunc_8562(*uParam0))
	{
		bVar0 = false;
		bVar1 = false;
		iVar2 = GlobalFunc_330(*uParam0);
		Var3 = { GlobalFunc_546(*uParam0) };
		if ((GlobalFunc_6447(uParam0->f_12) || GlobalFunc_6447(iParam2)) || (Global_68245 == 0 && (MISC::IS_BULLET_IN_AREA(Var3, 5f, 0) || MISC::IS_PROJECTILE_IN_AREA(Var3 - Vector(2.5f, 2.5f, 2.5f), Var3 + Vector(2.5f, 2.5f, 2.5f), 1))))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				*iParam1 = PLAYER::PLAYER_ID();
			}
			bVar0 = true;
			bVar1 = true;
		}
		if (FIRE::GET_CLOSEST_FIRE_POS(&Var6, GlobalFunc_546(*uParam0)))
		{
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Var6))
			{
				bVar0 = true;
				bVar1 = true;
			}
		}
		if (uParam0->f_7 && !bVar1)
		{
			if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uParam0->f_11 == 4) && GlobalFunc_330(*uParam0) == 4)
			{
			}
			else if (((iVar2 != 4 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && (*uParam0 != 21 || (*uParam0 == 21 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 2.5f))) && (iVar2 != 2 || (iVar2 == 2 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 2.5f)))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					*iParam1 = PLAYER::PLAYER_ID();
				}
				bVar1 = true;
			}
			else if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_8561(*uParam0)) && !INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("V_7_ShootRm"))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					*iParam1 = PLAYER::PLAYER_ID();
				}
				bVar0 = true;
				bVar1 = true;
			}
			else if (GlobalFunc_5805())
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					*iParam1 = PLAYER::PLAYER_ID();
				}
				bVar0 = true;
				bVar1 = true;
			}
			else if ((GlobalFunc_1546(-1082130432) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) && iVar2 != 4)
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					*iParam1 = PLAYER::PLAYER_ID();
				}
				bVar1 = true;
			}
			else if ((uParam0->f_11 > 0 && (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || uParam0->f_12.f_15)) && (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) || PED::IS_PED_INJURED(uParam0->f_12)))
			{
				bVar1 = true;
			}
		}
		else if ((((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uParam0->f_11 > 0) && uParam0->f_11 != 4) && uParam0->f_12.f_15) && (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) && PED::IS_PED_INJURED(uParam0->f_12)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			GlobalFunc_8592(*uParam0, 1);
			if (bVar0)
			{
				if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && iVar2 != 3)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
			}
			switch (iVar2)
			{
				case 3:
					break;
				
				default:
					GlobalFunc_6446(iParam2);
					GlobalFunc_6446(iParam3);
					GlobalFunc_6446(uParam0->f_12);
					break;
				}
			}
	}
}










int func_770(var uParam0)//Position - 0x51544
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (uParam0->f_11 != 3 || !GlobalFunc_2497(PLAYER::PLAYER_ID(), uParam0->f_492, 0))
		{
			return 1;
		}
	}
	return 0;
}












void func_782(var uParam0)//Position - 0x518E4
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_56))
		{
			*uParam0 = NETWORK::NET_TO_PED(Local_56);
			uParam0->f_14 = 1;
		}
		else
		{
			*uParam0 = 0;
		}
		uParam0->f_15 = Local_56.f_3;
	}
}



void func_785(var uParam0, bool bParam1)//Position - 0x519D1
{
	int iVar0;
	
	GlobalFunc_7166(1);
	if (uParam0->f_103.f_19)
	{
		if (GlobalFunc_1814())
		{
			GlobalFunc_5423();
			Global_2428131.f_656.f_39 = uParam0->f_103;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
		}
	}
	if (uParam0->f_3 != -1)
	{
		GlobalFunc_5420(&(uParam0->f_3));
	}
	if (GlobalFunc_2497(PLAYER::PLAYER_ID(), uParam0->f_492, 1))
	{
		GlobalFunc_2466(PLAYER::PLAYER_ID(), uParam0->f_492);
	}
	GlobalFunc_10974(uParam0, uParam0->f_492);
	GlobalFunc_2465(&(uParam0->f_38));
	if (!PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (uParam0->f_10)
		{
			if (GlobalFunc_2458(uParam0->f_492) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			else
			{
				PED::DELETE_PED(&(uParam0->f_12));
			}
		}
		else if (bParam1)
		{
			if (GlobalFunc_2458(uParam0->f_492) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			else
			{
				PED::DELETE_PED(&(uParam0->f_12));
			}
		}
		else if (GlobalFunc_2458(uParam0->f_492) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
		}
		else
		{
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_12, 1);
			PED::SET_PED_KEEP_TASK(uParam0->f_12, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
	}
	else
	{
		uParam0->f_12 = 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_scissors_s"));
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_495))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_495));
	}
	if (uParam0->f_12.f_16)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_1);
		uParam0->f_12.f_16 = 0;
	}
	if (!PED::IS_PED_INJURED(uParam0->f_428))
	{
		if (uParam0->f_10)
		{
			PED::DELETE_PED(&(uParam0->f_428));
		}
		else if (bParam1)
		{
			PED::DELETE_PED(&(uParam0->f_428));
		}
		else
		{
			if (func_614(0))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_428, 1);
			}
			PED::SET_PED_KEEP_TASK(uParam0->f_428, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_428));
		}
	}
	else
	{
		uParam0->f_428 = 0;
	}
	if (uParam0->f_428.f_16)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_428.f_1);
		uParam0->f_428.f_16 = 0;
	}
	if (!PED::IS_PED_INJURED(uParam0->f_30))
	{
		if (uParam0->f_10)
		{
			PED::DELETE_PED(&(uParam0->f_30));
		}
		else if (bParam1)
		{
			PED::DELETE_PED(&(uParam0->f_30));
		}
		else
		{
			PED::SET_PED_KEEP_TASK(uParam0->f_30, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_30));
		}
	}
	else
	{
		uParam0->f_30 = 0;
	}
	if (uParam0->f_30.f_7)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_30.f_1);
		uParam0->f_30.f_7 = 0;
	}
	func_787(uParam0);
	if (uParam0->f_465)
	{
		STREAMING::REMOVE_PTFX_ASSET();
		uParam0->f_465 = 0;
	}
	if (uParam0->f_466)
	{
		AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
		uParam0->f_466 = 0;
	}
	if (uParam0->f_464)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(uParam0->f_493);
		uParam0->f_464 = 0;
	}
	STREAMING::REMOVE_ANIM_DICT("amb@prop_human_seat_chair@male@generic@react_cowering");
	iVar0 = 0;
	if (GlobalFunc_8423(uParam0->f_492))
	{
		iVar0 = 1;
	}
	if (Global_91341 == 1)
	{
		if (uParam0->f_11 == 2 || uParam0->f_11 == 4)
		{
			iVar0 = 1;
		}
	}
	func_743(uParam0);
	if (iVar0 == 1)
	{
		if (GlobalFunc_5785(1))
		{
			func_107(uParam0);
		}
		GlobalFunc_10535(&(uParam0->f_103), 1, 1, 1);
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		GlobalFunc_2463(1);
		GlobalFunc_9185();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (Global_262145.f_2424)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShops");
			}
		}
		GlobalFunc_4988(1, *uParam0);
		func_97(uParam0);
		GlobalFunc_5782(*uParam0);
		func_94(uParam0);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Stack.Push(PLAYER::PLAYER_PED_ID());
			Stack.Push(2);
			Stack.Push(uParam0->f_254);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Call_Loc(uParam0->f_448);
			Stack.Push(PLAYER::PLAYER_PED_ID());
			Stack.Push(1);
			Stack.Push(uParam0->f_255);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Call_Loc(uParam0->f_448);
		}
		uParam0->f_472.f_19 = 0;
		GlobalFunc_2582(&(uParam0->f_472), 1);
		GlobalFunc_8584(0);
		if (Global_91341 == 1)
		{
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
		}
		Global_91341 = 0;
		if (uParam0->f_471)
		{
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(0);
			uParam0->f_471 = 0;
		}
	}
	if (bParam1)
	{
		GlobalFunc_2460("Resetting script", -1);
		MISC::SET_BIT(&(Global_90014.f_1267[uParam0->f_492]), 11);
	}
	else
	{
		GlobalFunc_2460("Terminating script", -1);
		MISC::CLEAR_BIT(&(Global_90014.f_1267[uParam0->f_492]), 16);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}


void func_787(var uParam0)//Position - 0x51DE3
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_455))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam0->f_455);
	}
}












void func_799(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0x52207
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if ((((iParam3 != iParam4 && iParam3 != 1) && iParam3 != 0) || iParam1 != GlobalFunc_2623(iParam2)) || iParam5 == -99)
	{
		return;
	}
	if (uParam0->f_222 < 109)
	{
		Global_2541643[uParam0->f_222] = 0;
	}
	bVar1 = true;
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == MISC::GET_HASH_KEY("wardrobe_mp"))
	{
		if (iParam8 == 0)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10876(iParam2, iParam6, iParam5) };
			if ((((iParam6 < 12 && iParam5 >= GlobalFunc_26(iParam2, GlobalFunc_33(iParam6))) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("MULTI_DECAL"), 0)) && uParam0->f_222 < 109) && GlobalFunc_8497(Global_2541421[uParam0->f_222], -1))
			{
			}
			else if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 2))
			{
				bVar1 = false;
			}
		}
	}
	else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("hairdo_shop_mp"))
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10876(iParam2, iParam6, iParam5) };
		if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6))
		{
			if (iParam6 == 12)
			{
			}
			else if (GlobalFunc_7154(iParam6, iParam5))
			{
				GlobalFunc_7152(iParam6, iParam5, &iVar0);
			}
			else
			{
				if (iParam6 == 10 || iParam4 == 3)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = GlobalFunc_7994(iParam6, iParam5);
				}
				if (!GlobalFunc_9215(iParam2, iParam6, iParam5))
				{
					if (iVar0 < 4)
					{
						if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 4))
						{
							MISC::CLEAR_BIT(&(Global_68106[1 /*14*/].f_6), 4);
						}
					}
				}
			}
			if (((iParam8 == 0 && iParam6 != 10) && iParam4 != 3) && iParam6 != 12)
			{
				if (bParam9)
				{
					if (!GlobalFunc_7154(iParam6, iParam5))
					{
						if (iVar0 > GlobalFunc_1343(PLAYER::PLAYER_ID()))
						{
							bVar1 = false;
						}
					}
					else if (iVar0 > GlobalFunc_2592(GlobalFunc_7153(PLAYER::PLAYER_ID()), 0))
					{
						bVar1 = false;
					}
				}
				else if (!GlobalFunc_7154(iParam6, iParam5))
				{
					if (iVar0 <= GlobalFunc_1343(PLAYER::PLAYER_ID()))
					{
						bVar1 = false;
					}
				}
				else if (iVar0 <= GlobalFunc_2592(GlobalFunc_7153(PLAYER::PLAYER_ID()), 0))
				{
					bVar1 = false;
				}
			}
		}
	}
	else
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10876(iParam2, iParam6, iParam5) };
	}
	if ((iParam8 == 0 && iParam4 != 3) && !bParam11)
	{
		if (!HUD::DOES_TEXT_LABEL_EXIST(&(Global_68106[1 /*14*/].f_8)) && !(MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("MULTI_DECAL"), 0)))
		{
			bVar1 = false;
		}
	}
	if (bVar1)
	{
		if (iParam3 == iParam4)
		{
			if (uParam0->f_222 < 109)
			{
				(*uParam0)[uParam0->f_222] = iParam5;
				uParam0->f_111[uParam0->f_222] = iParam6;
				uParam0->f_223[uParam0->f_222] = iParam8;
				Global_2541532[uParam0->f_222] = (Global_68106[1 /*14*/].f_3 * 1000 + Global_68106[1 /*14*/].f_4);
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6))
				{
					Global_2541643[uParam0->f_222] = Global_2621444;
					Global_2541309 = uParam0->f_222;
				}
				Global_2541754[uParam0->f_222] = bParam10;
			}
			if (!bParam7)
			{
				if (iParam3 == 78)
				{
					MISC::SET_BIT(&Global_2542672, GlobalFunc_2610(&(Global_68106[1 /*14*/].f_8)));
				}
				else if (iParam3 == 89)
				{
					MISC::SET_BIT(&Global_2542672, GlobalFunc_2611(&(Global_68106[1 /*14*/].f_8)));
				}
			}
			if (iParam6 == 2 && Global_2543251)
			{
			}
			else
			{
				uParam0->f_222++;
			}
		}
		if (!bParam7)
		{
			MISC::SET_BIT(&(uParam0->f_334[(iParam4 / 32)]), (iParam4 % 32));
			if (Global_2543252)
			{
				MISC::SET_BIT(&(Global_2543253[(iParam4 / 32)]), (iParam4 % 32));
			}
		}
		if (!bParam7)
		{
			if (iParam3 == 78)
			{
				iVar2 = GlobalFunc_2610(&(Global_68106[1 /*14*/].f_8));
				if ((!MISC::IS_BIT_SET(Global_2542673, iVar2) && MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1)) && MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 4))
				{
					MISC::SET_BIT(&Global_2542673, iVar2);
				}
			}
			else if (iParam3 == 89)
			{
				iVar3 = GlobalFunc_2611(&(Global_68106[1 /*14*/].f_8));
				if ((!MISC::IS_BIT_SET(Global_2542673, iVar3) && MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1)) && MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 4))
				{
					MISC::SET_BIT(&Global_2542673, iVar3);
				}
			}
		}
		if (!MISC::IS_BIT_SET(uParam0->f_341[(iParam4 / 32)], (iParam4 % 32)))
		{
			if ((MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 4)) && !GlobalFunc_2629(iParam8))
			{
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("MULTI_DECAL"), 0))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam0->f_341[(iParam4 / 32)]), (iParam4 % 32));
				}
			}
		}
		if (!MISC::IS_BIT_SET(uParam0->f_348[(iParam4 / 32)], (iParam4 % 32)))
		{
			if (bParam10)
			{
				MISC::SET_BIT(&(uParam0->f_348[(iParam4 / 32)]), (iParam4 % 32));
			}
		}
		if (iParam6 == 2)
		{
			Global_2541865 = 1;
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 4))
			{
				Global_2541866 = 1;
			}
		}
	}
}


















































bool func_849(int iParam0, int iParam1, int iParam2)//Position - 0x6F13B
{
	Global_68106[1 /*14*/] = { GlobalFunc_10876(iParam0, iParam1, iParam2) };
	return MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 4);
}

int func_850(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6F165
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar23;
	int iVar33;
	int iVar34;
	int iVar35;
	var uVar36;
	var uVar52;
	int iVar62;
	int iVar63;
	int iVar64[2];
	struct<2> Var67;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87[2];
	struct<2> Var90;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	struct<2> Var111;
	int iVar128;
	int iVar129;
	int iVar130;
	
	Global_68106[1 /*14*/] = { GlobalFunc_10876(iParam0, iParam1, iParam2) };
	if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				if (bParam3)
				{
					GlobalFunc_7807(Global_2621444, 1, 1, 1, -1);
				}
				else
				{
					GlobalFunc_7806(Global_2621444, 1, 1, 1, -1);
				}
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				if (bParam3)
				{
					GlobalFunc_7807(Global_2621444, 1, 1, 1, -1);
				}
				else
				{
					GlobalFunc_7806(Global_2621444, 1, 1, 1, -1);
				}
			}
			else if (bParam3)
			{
				GlobalFunc_7807(Global_2621444, 1, 1, 1, -1);
			}
			else
			{
				GlobalFunc_7806(Global_2621444, 1, 1, 1, -1);
			}
			if (iParam4 == 1 && bParam3 == 1)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2621444);
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					FILES::GET_VARIANT_COMPONENT(Global_2621444, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar2 != 0 && iVar2 != joaat("0"))
					{
						GlobalFunc_7807(iVar2, 1, 1, 1, -1);
					}
					else
					{
						func_850(iParam0, GlobalFunc_33(iVar4), uVar3, 1, 0);
					}
					iVar1++;
				}
			}
			if (iParam1 == 12)
			{
				uVar7 = { GlobalFunc_7617(iParam0, iParam2) };
				iVar5 = 0;
				while (iVar5 <= 14)
				{
					if ((uVar7[iVar5] != -99 && iVar5 != 12) && iVar5 != 14)
					{
						if (iVar5 != 13)
						{
							func_850(iParam0, iVar5, uVar7[iVar5], 1, 1);
							GlobalFunc_10975(iParam0, iVar5, uVar7[iVar5], 1, 0);
						}
						else
						{
							uVar23 = { GlobalFunc_7616(iParam0, uVar7[iVar5]) };
							iVar6 = 0;
							while (iVar6 <= 8)
							{
								if (uVar23[iVar6] >= 10)
								{
									func_850(iParam0, 14, uVar23[iVar6], 1, 1);
									GlobalFunc_10975(iParam0, 14, uVar23[iVar6], 1, 0);
								}
								iVar6++;
							}
						}
					}
					iVar5++;
				}
			}
		}
		else
		{
			if (iParam1 != 5)
			{
				iVar33 = GlobalFunc_6872(GlobalFunc_37(iParam1, Global_68106[1 /*14*/].f_2), Global_68104, 0);
				if (bParam3)
				{
					MISC::SET_BIT(&iVar33, Global_68106[1 /*14*/].f_1);
				}
				else
				{
					MISC::CLEAR_BIT(&iVar33, Global_68106[1 /*14*/].f_1);
				}
				GlobalFunc_6720(GlobalFunc_37(iParam1, Global_68106[1 /*14*/].f_2), iVar33, Global_68104, 1);
			}
			if (iParam1 == 12)
			{
				uVar36 = { GlobalFunc_7617(iParam0, iParam2) };
				iVar34 = 0;
				while (iVar34 <= 14)
				{
					if ((uVar36[iVar34] != -99 && iVar34 != 12) && iVar34 != 14)
					{
						if (iVar34 != 13)
						{
							func_850(iParam0, iVar34, uVar36[iVar34], 1, 1);
							GlobalFunc_10975(iParam0, iVar34, uVar36[iVar34], 1, 0);
						}
						else
						{
							uVar52 = { GlobalFunc_7616(iParam0, uVar36[iVar34]) };
							iVar35 = 0;
							while (iVar35 <= 8)
							{
								func_850(iParam0, 14, uVar52[iVar35], 1, 1);
								GlobalFunc_10975(iParam0, 14, uVar52[iVar35], 1, 0);
								iVar35++;
							}
						}
					}
					iVar34++;
				}
			}
			if (iParam4 == 1 && bParam3 == 1)
			{
				if (iParam0 == joaat("mp_m_freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar62 = (75 + Global_68106[1 /*14*/].f_4);
							func_850(iParam0, 14, iVar62, 1, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar62 = (83 + Global_68106[1 /*14*/].f_4);
							func_850(iParam0, 14, iVar62, 1, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar62 = (64 + Global_68106[1 /*14*/].f_4);
							func_850(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar62 = (48 + Global_68106[1 /*14*/].f_4);
							func_850(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar62 = (112 + Global_68106[1 /*14*/].f_4);
							func_850(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar62 = (96 + Global_68106[1 /*14*/].f_4);
							func_850(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar62 = (160 + Global_68106[1 /*14*/].f_4);
							func_850(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar62 = (176 + Global_68106[1 /*14*/].f_4);
							func_850(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar62 = (0 + Global_68106[1 /*14*/].f_4);
							func_850(iParam0, 11, iVar62, 1, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar62 = (16 + Global_68106[1 /*14*/].f_4);
							func_850(iParam0, 11, iVar62, 1, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar62 = (32 + Global_68106[1 /*14*/].f_4);
							func_850(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar62 = (224 + Global_68106[1 /*14*/].f_4);
							func_850(iParam0, 8, iVar62, 1, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_0");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_0");
									break;
								
								case 221:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_1");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_1");
									break;
								
								case 222:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_2");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_2");
									break;
								
								case 223:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_3");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_3");
									break;
								
								case 224:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_4");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_4");
									break;
								
								case 225:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_5");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_5");
									break;
								
								case 226:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_6");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_6");
									break;
								
								case 227:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_7");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_7");
									break;
								
								case 228:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_8");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_8");
									break;
								
								case 229:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_9");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_9");
									break;
								
								case 230:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_10");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_10");
									break;
								
								case 231:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_11");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_11");
									break;
								
								case 232:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_12");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_12");
									break;
								
								case 233:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_13");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_13");
									break;
								
								case 234:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_14");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_14");
									break;
								
								case 235:
									iVar64[0] = joaat("DLC_MP_BUSI_M_ACCS4_15");
									iVar64[1] = joaat("DLC_MP_BUSI_M_ACCS5_15");
									break;
							}
							FILES::INIT_SHOP_PED_COMPONENT(&Var67);
							iVar86 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(3, 6, -1, 0, -1, 8);
							iVar84 = 0;
							while (iVar84 < iVar86)
							{
								FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar84, &Var67);
								if (!FILES::IS_CONTENT_ITEM_LOCKED(Var67))
								{
									if (Var67.f_1 == iVar64[0] || Var67.f_1 == iVar64[1])
									{
										func_850(iParam0, 8, (241 + iVar85), 1, 0);
									}
									iVar85++;
								}
								iVar84++;
							}
						}
						else if (iParam2 >= 188 && iParam2 <= 203)
						{
							switch (iParam2)
							{
								case 188:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_0");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_0");
									break;
								
								case 189:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_1");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_1");
									break;
								
								case 190:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_2");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_2");
									break;
								
								case 191:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_3");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_3");
									break;
								
								case 192:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_4");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_4");
									break;
								
								case 193:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_5");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_5");
									break;
								
								case 194:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_6");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_6");
									break;
								
								case 195:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_7");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_7");
									break;
								
								case 196:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_8");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_8");
									break;
								
								case 197:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_9");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_9");
									break;
								
								case 198:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_10");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_10");
									break;
								
								case 199:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_11");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_11");
									break;
								
								case 200:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_12");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_12");
									break;
								
								case 201:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_13");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_13");
									break;
								
								case 202:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_14");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_14");
									break;
								
								case 203:
									iVar87[0] = joaat("DLC_MP_HEIST_M_SPECIAL_8_15");
									iVar87[1] = joaat("DLC_MP_HEIST_M_SPECIAL_9_15");
									break;
							}
							FILES::INIT_SHOP_PED_COMPONENT(&Var90);
							iVar109 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(3, 6, -1, 0, -1, 8);
							iVar107 = 0;
							while (iVar107 < iVar109)
							{
								FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar107, &Var90);
								if (!FILES::IS_CONTENT_ITEM_LOCKED(Var90))
								{
									if (Var90.f_1 == iVar87[0] || Var90.f_1 == iVar87[1])
									{
										func_850(iParam0, 8, (241 + iVar108), 1, 0);
									}
									iVar108++;
								}
								iVar107++;
							}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_68106[2 /*14*/].f_4)
							{
								case 0:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 1, 0);
									break;
								
								case 1:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 1, 0);
									break;
								
								case 2:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 1, 0);
									break;
								
								case 3:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 1, 0);
									break;
								
								case 4:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 1, 0);
									break;
								
								case 5:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 1, 0);
									break;
								
								case 6:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 1, 0);
									break;
								
								case 7:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 1, 0);
									break;
								
								case 8:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 1, 0);
									break;
								
								case 9:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 1, 0);
									break;
								
								case 10:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 1, 0);
									break;
								
								case 11:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 1, 0);
									break;
								
								case 12:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 1, 0);
									break;
								
								case 13:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 1, 0);
									break;
								
								case 14:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 1, 0);
									break;
								
								case 15:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 1, 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_68106[2 /*14*/].f_4)
							{
								case 0:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 1, 0);
									break;
								
								case 1:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 1, 0);
									break;
								
								case 2:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 1, 0);
									break;
								
								case 3:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 1, 0);
									break;
								
								case 4:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 1, 0);
									break;
								
								case 5:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 1, 0);
									break;
								
								case 6:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 1, 0);
									break;
								
								case 7:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 1, 0);
									break;
								
								case 8:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 1, 0);
									break;
								
								case 9:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 1, 0);
									break;
								
								case 10:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 1, 0);
									break;
								
								case 11:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 1, 0);
									break;
								
								case 12:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 1, 0);
									break;
								
								case 13:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 1, 0);
									break;
								
								case 14:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 1, 0);
									break;
								
								case 15:
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 1, 0);
									func_850(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 1, 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar62 = (16 + Global_68106[1 /*14*/].f_4);
							func_850(iParam0, 8, iVar62, 1, 0);
						}
					}
				}
				Global_68106[1 /*14*/] = { GlobalFunc_10876(iParam0, iParam1, iParam2) };
				if (iParam1 == 11)
				{
					iVar63 = GlobalFunc_6741(iParam0, iParam2, Global_68106[1 /*14*/].f_4);
					if (iVar63 != -99)
					{
						func_850(iParam0, 8, iVar63, 1, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								iVar110 = joaat("DLC_MP_BUSI_F_ACCS2_0");
								break;
							
							case 200:
								iVar110 = joaat("DLC_MP_BUSI_F_ACCS2_1");
								break;
							
							case 201:
								iVar110 = joaat("DLC_MP_BUSI_F_ACCS2_2");
								break;
						}
						FILES::INIT_SHOP_PED_COMPONENT(&Var111);
						iVar130 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(4, 6, -1, 0, -1, 8);
						iVar128 = 0;
						while (iVar128 < iVar130)
						{
							FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar128, &Var111);
							if (!FILES::IS_CONTENT_ITEM_LOCKED(Var111))
							{
								if (Var111.f_1 == iVar110)
								{
									func_850(iParam0, 8, (136 + iVar129), 1, 0);
									iVar128 = iVar130 + 1;
								}
								iVar129++;
							}
							iVar128++;
						}
					}
				}
				else if (iParam1 == 8)
				{
					iVar63 = GlobalFunc_6736(iParam0, iParam2, Global_68106[1 /*14*/].f_4);
					if (iVar63 != -99)
					{
						func_850(iParam0, 11, iVar63, 1, 0);
					}
				}
			}
		}
		return 1;
	}
	return 0;
}










int func_860(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x7106C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar31;
	var uVar41;
	int iVar57;
	var uVar58;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	float fVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	var uVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1315831 != 4 && Global_1315831 != 5) && Global_1315831 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_219 == 2)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		func_902(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_68149 };
		}
		else
		{
			uVar15 = { GlobalFunc_7617(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar5, 10, 0) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
					}
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
					{
						func_902(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar5, iVar0, uVar15[iVar0]) };
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = { Global_68165 };
							}
							else
							{
								uVar31 = { GlobalFunc_7616(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									func_902(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iParam4 == -1)
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
							}
							else
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
							}
							if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
							{
								func_902(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar5, iVar0, func_904(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_860(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9098();
			if (iVar57 != -1)
			{
				GlobalFunc_9097(iVar57, 0, Global_68104);
			}
			func_898(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				func_902(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_896(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_860(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar68 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar68, joaat("FORCE_PROP"), 0))
		{
			iVar69 = func_81(iParam0, 1);
			iVar3 = func_896(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			func_902(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_896(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_860(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar70 = func_81(iParam0, 11);
				iVar71 = func_81(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = func_81(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = func_896(iParam0, iVar5, 11, iVar70, 3, 0);
					}
					if (iVar73 != -99)
					{
						iVar74 = iVar73;
						iVar75 = 0;
						while (iVar75 < 9)
						{
							if (GlobalFunc_308(iVar5, iVar74, iVar75) == iVar72)
							{
								iVar11 = iVar75;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar75++;
						}
					}
				}
				iVar76 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar70 = func_81(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_860(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar5, iParam1, iParam2) };
						}
					}
				}
				else if (GlobalFunc_6737(iVar5, iParam2))
				{
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (!GlobalFunc_6737(iVar5, iVar70))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_12"), 0)))
						{
						}
						else
						{
							iVar78 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar78 != -99)
							{
								func_860(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_860(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar5, 8, iVar71) };
							iVar81 = Global_68106[1 /*14*/].f_4;
							iVar82 = GlobalFunc_6736(iVar5, iVar71, iVar81);
							if (iVar82 == -99)
							{
								iVar83 = iVar71;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || GlobalFunc_306(GlobalFunc_4913(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar82 = GlobalFunc_5013(iVar5, 11, -1);
										Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar5, 11, iVar82) };
										iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, Global_68106[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, iVar81);
							}
							if (iVar83 != -99)
							{
								func_860(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_860(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10676(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_898(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, func_904(iParam0, 8, -1), iParam2);
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = GlobalFunc_6872(2135, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = GlobalFunc_6872(2142, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_882(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_898(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = func_81(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10676(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, func_81(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = func_81(iParam0, 7);
				if (!func_879(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar87 = GlobalFunc_6872(2082, iParam10, 0);
				iVar88 = GlobalFunc_6872(2083, iParam10, 0);
				iVar89 = GlobalFunc_6872(2084, iParam10, 0);
				fVar90 = GlobalFunc_6734(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar87, iVar88, iVar89, 0f, fVar90, 0f, 0);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar87, iVar88, iVar89, 0f, fVar90, 0f, 0);
				}
				iVar91 = 0;
				while (iVar91 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar91, 0f);
					iVar91++;
				}
			}
			else
			{
				func_878(iParam0, Global_68104);
			}
			iVar92 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar93 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar92, joaat("FORCE_PROP"), 0))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar93, joaat("FORCE_PROP"), 0))
				{
					iVar94 = func_81(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = func_896(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7614(iParam0, iVar95);
						if (iVar3 == iVar96)
						{
							PED::CLEAR_PED_PROP(iParam0, iVar95);
						}
						iVar95++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_896(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_860(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (func_877(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_905(iParam0, 9, iVar97))
						{
							func_860(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_860(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_860(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar98 = GlobalFunc_6872(2024, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, GlobalFunc_5005(iParam0, iVar98), GlobalFunc_282(iParam0, iVar98), GlobalFunc_81(iParam0, iVar98));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, GlobalFunc_5005(PLAYER::PLAYER_PED_ID(), iVar98), GlobalFunc_282(PLAYER::PLAYER_PED_ID(), iVar98), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), GlobalFunc_81(PLAYER::PLAYER_PED_ID(), iVar98));
					GlobalFunc_5004(PLAYER::PLAYER_ID(), iVar98);
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar99 = func_904(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = func_904(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_860(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_860(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				GlobalFunc_5003(iParam0);
				iVar102 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar103 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar104 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar102, iVar103);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar104, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_896(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_860(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = func_896(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_860(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_861(iParam0, &uVar4))
		{
			func_860(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_860(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_860(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_860(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar105 = GlobalFunc_308(iVar5, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), iVar11);
		if (iVar105 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_860(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_861(int iParam0, var uParam1)//Position - 0x72130
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_904(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (GlobalFunc_6872(741, Global_68104, 0) != -99 && GlobalFunc_6714())
	{
		if (GlobalFunc_278() == 4)
		{
			return 1;
		}
		if (GlobalFunc_6872(741, Global_68104, 0) == 0 && GlobalFunc_6872(742, Global_68104, 0) == 0)
		{
			if (GlobalFunc_6725(161, Global_68104))
			{
				if (GlobalFunc_6872(2035, Global_68104, 0) == 0)
				{
					return 0;
				}
			}
			else if (GlobalFunc_6872(740, Global_68104, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = GlobalFunc_6872(741, Global_68104, 0);
		iVar1 = GlobalFunc_6872(742, Global_68104, 0);
		if (!func_905(iParam0, iVar1, iVar0))
		{
			if (GlobalFunc_6725(161, Global_68104))
			{
				*uParam1 = GlobalFunc_6872(2035, Global_68104, 0);
			}
			else
			{
				*uParam1 = GlobalFunc_6872(740, Global_68104, 0);
			}
			GlobalFunc_6720(741, -99, Global_68104, 1);
			GlobalFunc_6720(742, 2, Global_68104, 1);
			return 1;
		}
	}
	return 0;
}
















int func_877(int iParam0)//Position - 0x73A06
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (func_81(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (func_81(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_878(int iParam0, int iParam1)//Position - 0x73A58
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	
	if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0))
	{
	}
	PED::GET_PED_HEAD_BLEND_DATA(iParam0, &Var0);
	iVar10 = GlobalFunc_6872(2079, iParam1, 0);
	iVar11 = GlobalFunc_6872(2080, iParam1, 0);
	iVar12 = GlobalFunc_6872(2081, iParam1, 0);
	iVar13 = GlobalFunc_6872(2082, iParam1, 0);
	iVar14 = GlobalFunc_6872(2083, iParam1, 0);
	iVar15 = GlobalFunc_6872(2084, iParam1, 0);
	fVar16 = GlobalFunc_6734(134, iParam1);
	fVar17 = GlobalFunc_6734(135, iParam1);
	fVar18 = GlobalFunc_6734(136, iParam1);
	iVar19 = GlobalFunc_6725(160, iParam1);
	if (((((((((Var0 != iVar10 || Var0.f_1 != iVar11) || Var0.f_2 != iVar12) || Var0.f_3 != iVar13) || Var0.f_4 != iVar14) || Var0.f_5 != iVar15) || Var0.f_6 != fVar16) || Var0.f_7 != fVar17) || Var0.f_8 != fVar18) || Var0.f_9 != iVar19)
	{
		PED::SET_PED_HEAD_BLEND_DATA(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18, iVar19);
		iVar20 = GlobalFunc_6872(2085, iParam1, 0);
		if (iVar20 > 0)
		{
			func_311(&iParam0, iParam1, 0);
		}
	}
}

int func_879(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x73B98
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
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_2542245 == iParam1)
		{
			iVar2 = Global_2542244;
			iVar1 = Global_2542243;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = GlobalFunc_4913(iParam0, iParam1, 7, 3);
			iVar1 = GlobalFunc_306(iVar2);
			Global_2542245 = iParam1;
			Global_2542244 = iVar2;
			Global_2542243 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_2542248 == iParam3)
		{
			iVar4 = Global_2542247;
			iVar3 = Global_2542246;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = GlobalFunc_4913(iParam0, iParam3, 11, 3);
			iVar3 = GlobalFunc_306(iVar4);
			Global_2542248 = iParam3;
			Global_2542247 = iVar4;
			Global_2542246 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_2542251 == iParam4)
		{
			iVar6 = Global_2542250;
			iVar5 = Global_2542249;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = GlobalFunc_4913(iParam0, iParam4, 8, 3);
			iVar5 = GlobalFunc_306(iVar6);
			Global_2542251 = iParam4;
			Global_2542250 = iVar6;
			Global_2542249 = iVar5;
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SCARF"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_SCARF"), 0))
				{
					if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -698069257, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -476911276, 0))
					{
						return 0;
					}
					else if (GlobalFunc_7650(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (GlobalFunc_7650(iParam0, iParam3))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("CHAIN"), 0))
		{
			if (iParam3 != -99)
			{
				if (iParam3 == 236)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TUX_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PILOT_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1086258388, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -698069257, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_5"), 0))
				{
					return 0;
				}
				else if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("ALT_CHAIN"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13)
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("PILOT_SUIT"), 0))
		{
			if (iParam9 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iParam0, iParam9, 14, 3), joaat("PILOT_SUIT"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iParam0, iParam9, 14, 3), joaat("PILOT_SUIT"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OUTFIT_CHECKS"), 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TIE"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || GlobalFunc_6737(iParam0, iParam3)) || iVar3 == 13)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUX_SHIRT"), 0)))
				{
				}
				else
				{
					iVar0 = func_81(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && GlobalFunc_306(GlobalFunc_4913(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || GlobalFunc_6737(iParam0, iParam3)) || iVar3 == 13) || iVar3 == 11)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("VEST_SHIRT"), 0))) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUX_VEST"), 0))) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUX_SHIRT"), 0)))
				{
				}
				else
				{
					iVar0 = func_81(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && GlobalFunc_306(GlobalFunc_4913(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("VEST_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("VEST_SHIRT"), 0)))
				{
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TUX_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUX_VEST"), 0)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_TIE_ALT"), 0)) || ((iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUX_SHIRT"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_TIE_ALT"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOOSE_BOWTIE"), 0))
		{
			if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_0")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_1")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_2")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_3")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_5")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_6")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_7")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_8")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_9")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_10")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_11")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_12")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_13")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_14")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_15")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("HEIST_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRAW_11"), 0))
				{
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOOSE_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OPEN_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_0")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_1")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_2")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_3")) || iVar6 == joaat("DLC_MP_VAL_M_ACCS0_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_0")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_1")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_2")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_3")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_4")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_5")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_6")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_7")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_8")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_9")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_10")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_11")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_12")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_13")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_14")) || iVar6 == joaat("DLC_MP_BUSI2_M_ACCS1_15")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("HEIST_DRAW_5"), 0))
				{
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SLACK_TIE"), 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OPEN_JACKET"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || GlobalFunc_293(iVar6)) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRAW_12"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SCARF"), 0))
		{
			if (iParam3 != -99)
			{
				if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_4"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_16"), 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PILOT_SUIT"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar7 = -1;
		iVar8 = -1;
		if (iParam1 >= 55)
		{
			iVar8 = GlobalFunc_4913(iParam0, iParam1, 7, 4);
			iVar7 = GlobalFunc_306(iVar8);
		}
		iVar9 = -1;
		iVar10 = -1;
		if (iParam3 >= 256)
		{
			iVar10 = GlobalFunc_4913(iParam0, iParam3, 11, 4);
			iVar9 = GlobalFunc_306(iVar10);
		}
		iVar11 = -1;
		if (iParam9 >= 327)
		{
			iVar11 = GlobalFunc_4913(iParam0, iParam9, 14, 4);
		}
		iVar12 = -1;
		iVar13 = -1;
		if (iParam4 >= 136)
		{
			iVar12 = GlobalFunc_4913(iParam0, iParam4, 8, 4);
			iVar13 = GlobalFunc_306(iVar12);
		}
		if (iParam3 != -99)
		{
			if (iVar8 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("SCARF"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("JACKET_SCARF"), 0))
				{
					if (GlobalFunc_7650(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (GlobalFunc_7650(iParam0, iParam3))
				{
					return 0;
				}
			}
		}
		if (iVar8 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("PILOT_SUIT"), 0))
		{
			if (iParam9 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iParam0, iParam9, 14, 4), joaat("PILOT_SUIT"), 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iParam0, iParam9, 14, 4), joaat("PILOT_SUIT"), 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar8 != -1 && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("TIE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("BOWTIE"), 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_12"), 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar9 == 7)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam2 == 8)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("OPEN_COLLAR"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("CLOSED_COLLAR"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("TIE"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("HEIST_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("HEIST_DRAW_9"), 0))
						{
							if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("ALT_TIE"), 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("ALT_TIE"), 0))
						{
							return 0;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam9 != -99)
		{
			if (iVar11 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("EARRING"), 1))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar7 == 1) || iVar7 == 2) || (iVar8 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("EARRING"), 0)))
				{
					return 0;
				}
			}
		}
		if (iVar8 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("CHAIN"), 0))
		{
			if (iParam3 != -99)
			{
				if (GlobalFunc_6737(iParam0, iParam3))
				{
				}
				else if ((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar9 == 2) || iVar9 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("TAILS_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("LUXE_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, -699183415, 0)) || iVar10 == joaat("DLC_MP_IND_F_JBIB_1_0")) || iVar10 == joaat("DLC_MP_IND_F_JBIB_1_1"))
				{
					if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar9 == 3) || iVar9 == 9) || iVar9 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("DRESS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("VEST_SHIRT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("PILOT_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("COMBAT_SWEAT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("XMAS2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, -1086258388, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_DRAW_15"), 0))
				{
					return 0;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("ALT_CHAIN"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar13 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("OFF_SHOULDER_ACCS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LUXE_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LUXE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LUXE_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LUXE_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LUXE_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LUXE_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LUXE_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LUXE_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LUXE_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LUXE_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("LUXE_DRAW_11"), 0)) || iVar12 == joaat("DLC_MP_HIPS_F_ACCS3_0")) || iVar12 == joaat("DLC_MP_HIPS_F_ACCS3_1")) || iVar12 == joaat("DLC_MP_HIPS_F_ACCS3_2")) || iVar12 == joaat("DLC_MP_HIPS_F_ACCS3_3")) || iVar12 == joaat("DLC_MP_VAL_F_ACCS0_0")) || iVar12 == joaat("DLC_MP_VAL_F_ACCS0_1")) || iVar12 == joaat("DLC_MP_VAL_F_ACCS0_2")) || iVar12 == joaat("DLC_MP_VAL_F_ACCS1_0")) || iVar12 == joaat("DLC_MP_VAL_F_ACCS1_1")) || iVar12 == joaat("DLC_MP_VAL_F_ACCS1_2"))
				{
					if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("VEST_SHIRT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("HEIST_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("HEIST_DRAW_9"), 0))
				{
					return 0;
				}
				else if (GlobalFunc_6736(iParam0, iParam4, 0) != -99)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar7 == 3) || (iVar8 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("CUFF"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar9 == 3) || iVar9 == 7) || iVar9 == 10) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar11 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar7 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar9 == 3) || iVar9 == 7) || iVar9 == 10) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar11 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar7 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar9 == 3) || iVar9 == 7) || iVar9 == 10) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("LONG_SLEEVE"), 0)))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar11 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("CUFF"), 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar7 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar9 == 3) || iVar9 == 9) || iVar9 == 14) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("VEST_SHIRT"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_GEAR"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("LUXE_DRAW_4"), 0)))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar7 == 7) || (iParam1 >= 55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("LONG_NECKLACE"), 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar9 == 2) || iVar9 == 3) || iVar9 == 9) || iVar9 == 14) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("COMBAT_GEAR"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("HEIST_GEAR"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("LUXE_SWEAT"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("LUXE_DRAW_4"), 0)))
				{
					return 0;
				}
				else if ((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar9 == 7) || iVar9 == 10) || iVar9 == 12) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("LONG_SLEEVE"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("VEST"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("TAILS_JACKET"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("COMBAT_GEAR"), 0)))
				{
					if (iParam1 >= 55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("LONG_NECKLACE"), 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iParam0, iParam4, 8, 4), joaat("VEST_SHIRT"), 0))
				{
					if (iParam1 >= 55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("LONG_NECKLACE"), 0))
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar7 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar9 == 0) || iVar9 == 4) || iVar9 == 11) || iVar9 == 12) || iVar9 == 15) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("VEST"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("DRESS"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar7 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar9 == 0) || iVar9 == 4) || iVar9 == 5) || iVar9 == 11) || iVar9 == 12) || iVar9 == 15) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("VEST"), 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("DRESS"), 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}



void func_882(int iParam0, int iParam1, bool bParam2)//Position - 0x76258
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_9907(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9097(iVar1, 1, Global_68104);
	}
	func_299(iParam0, bParam2, 0);
}














int func_896(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7C0F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
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
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	bool bVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	
	iVar0 = -99;
	if (iParam4 == 2)
	{
		func_897(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 8;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 187)
				{
					iVar2 = func_81(iParam0, 8);
					iVar3 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
					iVar4 = GlobalFunc_306(iVar3);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar4 == 6)) || (iVar2 >= 241 && iVar4 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("VEST_SHIRT"), 0)))
					{
						iVar0 = -99;
					}
					else
					{
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 4;
				}
				else if (iParam3 == 236)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 237)
				{
					iVar5 = GlobalFunc_4913(iParam1, iParam3, 11, 3);
					if (iVar5 != -1)
					{
						bVar6 = true;
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("DRAW_11"), 0))
						{
							iVar2 = func_81(iParam0, 8);
							iVar7 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
							iVar8 = GlobalFunc_306(iVar7);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar8 == 6)) || (iVar2 >= 241 && iVar8 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("VEST_SHIRT"), 0)))
							{
								bVar6 = false;
							}
						}
						if (bVar6)
						{
							iVar9 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar5);
							iVar10 = 0;
							while (iVar10 < iVar9)
							{
								FILES::GET_FORCED_COMPONENT(iVar5, iVar10, &iVar11, &iVar12, &iVar13);
								if (iVar13 == 3)
								{
									if (iVar11 != 0 && iVar11 != joaat("0"))
									{
										iVar0 = GlobalFunc_4914(iParam1, iVar11, 3, 3);
									}
									else
									{
										iVar0 = iVar12;
									}
									iVar10 = iVar9 + 1;
								}
								iVar10++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = -99;
				}
				else if (iParam3 == 240)
				{
					iVar0 = 14;
				}
				else if (iParam3 >= 241)
				{
					iVar14 = GlobalFunc_4913(iParam1, iParam3, 8, 3);
					if (iVar14 != -1)
					{
						iVar15 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar16 = 0;
						while (iVar16 < iVar15)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar16, &iVar17, &iVar18, &iVar19);
							if (iVar19 == 3)
							{
								if (iVar17 != 0 && iVar17 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar17, 3, 3);
								}
								else
								{
									iVar0 = iVar18;
									iVar16 = iVar15 + 1;
								}
							}
							iVar16++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				iVar20 = -1;
				if (iParam3 >= 237)
				{
					iVar20 = GlobalFunc_306(GlobalFunc_4913(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar20 == 11)
				{
					iVar2 = func_81(iParam0, 8);
					iVar21 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
					iVar22 = GlobalFunc_306(iVar21);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar22 == 6)) || (iVar2 >= 241 && iVar22 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("VEST_SHIRT"), 0)))
					{
					}
					else
					{
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 236)
				{
					iVar0 = 240;
				}
				else if (iParam3 >= 237)
				{
					iVar23 = GlobalFunc_4913(iParam1, iParam3, 11, 3);
					if (iVar23 != -1)
					{
						iVar24 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar23);
						iVar25 = 0;
						while (iVar25 < iVar24)
						{
							FILES::GET_FORCED_COMPONENT(iVar23, iVar25, &iVar26, &iVar27, &iVar28);
							if (iVar28 == 8)
							{
								if (iVar26 != 0 && iVar26 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar26, 8, 3);
								}
								else
								{
									iVar0 = iVar27;
									iVar25 = iVar24 + 1;
								}
							}
							iVar25++;
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar29 = -1;
				iVar30 = -1;
				if (iParam3 >= 92)
				{
					iVar30 = GlobalFunc_4913(iParam1, iParam3, 7, 3);
					iVar29 = GlobalFunc_306(iVar30);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar29 == 10) || iVar29 == 11) || iVar29 == 12) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("VEST_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("TUX_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("TIE"), 0)))
				{
					iVar2 = func_81(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63)
					{
						iVar1 = (iVar2 - 48);
						iVar0 = (64 + iVar1);
					}
					else if (iVar2 >= 112 && iVar2 <= 127)
					{
						iVar1 = (iVar2 - 112);
						iVar0 = (96 + iVar1);
					}
					else if (iVar2 >= 176 && iVar2 <= 191)
					{
						iVar1 = (iVar2 - 176);
						iVar0 = (160 + iVar1);
					}
					else if (iVar2 >= 241)
					{
						iVar31 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
						iVar32 = GlobalFunc_306(iVar31);
						bVar33 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar31, joaat("TUX_VEST"), 0);
						if (((iVar32 == 3 || iVar32 == 7) || iVar32 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar31, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar31 != -1)
							{
								iVar34 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar31);
								iVar35 = 0;
								while (iVar35 < iVar34)
								{
									FILES::GET_VARIANT_COMPONENT(iVar31, iVar35, &iVar36, &iVar37, &iVar38);
									if ((iVar38 == 8 && !bVar33) || (iVar38 == 10 && bVar33))
									{
										if (iVar36 != 0 && iVar36 != joaat("0"))
										{
											iVar0 = GlobalFunc_4914(iParam1, iVar36, 8, 3);
										}
										else
										{
											iVar0 = iVar37;
										}
										iVar35 = iVar34 + 1;
									}
									iVar35++;
								}
							}
						}
					}
				}
				else if ((iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("LOOSE_TIE"), 0)) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("SLACK_TIE"), 0)))
				{
					iVar39 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
					iVar40 = GlobalFunc_306(iVar39);
					bVar41 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar39, joaat("TUX_VEST"), 0);
					if (((iVar40 == 3 || iVar40 == 7) || iVar40 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar39, joaat("OPEN_COLLAR"), 0))
					{
						if (iVar39 != -1)
						{
							iVar42 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar39);
							iVar43 = 0;
							while (iVar43 < iVar42)
							{
								FILES::GET_VARIANT_COMPONENT(iVar39, iVar43, &iVar44, &iVar45, &iVar46);
								if ((iVar46 == 8 && !bVar41) || (iVar46 == 10 && bVar41))
								{
									if (iVar44 != 0 && iVar44 != joaat("0"))
									{
										iVar0 = GlobalFunc_4914(iParam1, iVar44, 8, 3);
									}
									else
									{
										iVar0 = iVar45;
									}
									iVar43 = iVar42 + 1;
								}
								iVar43++;
							}
						}
					}
				}
				else if (iParam3 >= 92)
				{
					iVar47 = GlobalFunc_4913(iParam1, iParam3, 7, 3);
					if (iVar47 != -1)
					{
						iVar48 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar47);
						iVar49 = 0;
						while (iVar49 < iVar48)
						{
							FILES::GET_FORCED_COMPONENT(iVar47, iVar49, &iVar50, &iVar51, &iVar52);
							if (iVar52 == 8)
							{
								if (iVar50 != 0 && iVar50 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar50, 8, 3);
								}
								else
								{
									iVar0 = iVar51;
									iVar49 = iVar48 + 1;
								}
							}
							iVar49++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 7)
			{
				iVar53 = -1;
				iVar54 = -1;
				if (iParam3 >= 92)
				{
					iVar54 = GlobalFunc_4913(iParam1, iParam3, 7, 3);
					iVar53 = GlobalFunc_306(iVar54);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar53 == 10) || iVar53 == 11) || iVar53 == 12) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar54, joaat("TIE"), 0))
				{
					iVar55 = func_81(iParam0, 11);
					if (iVar55 >= 237)
					{
						iVar56 = GlobalFunc_4913(iParam1, iVar55, 11, 3);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar56, joaat("SHIRT_BRACES"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar56, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar56 != -1)
							{
								iVar57 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar56);
								iVar58 = 0;
								while (iVar58 < iVar57)
								{
									FILES::GET_VARIANT_COMPONENT(iVar56, iVar58, &iVar59, &iVar60, &iVar61);
									if (iVar61 == 11)
									{
										if (iVar59 != 0 && iVar59 != joaat("0"))
										{
											iVar0 = GlobalFunc_4914(iParam1, iVar59, 11, 3);
										}
										else
										{
											iVar0 = iVar60;
										}
										iVar58 = iVar57 + 1;
									}
									iVar58++;
								}
							}
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 11)
			{
				iVar62 = func_81(iParam0, 11);
				if (iVar62 >= 237)
				{
					iVar63 = GlobalFunc_4913(iParam1, iVar62, 11, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar63, joaat("SHIRT_BRACES"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar63, joaat("OPEN_COLLAR"), 0))
					{
						iVar63 = GlobalFunc_4913(iParam1, iParam3, 11, 3);
						if (iVar63 != -1)
						{
							iVar64 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar63);
							iVar65 = 0;
							while (iVar65 < iVar64)
							{
								FILES::GET_FORCED_COMPONENT(iVar63, iVar65, &iVar66, &iVar67, &iVar68);
								if (iVar68 == 7)
								{
									if (iVar66 != 0 && iVar66 != joaat("0"))
									{
										iVar0 = GlobalFunc_4914(iParam1, iVar66, 7, 3);
									}
									else
									{
										iVar0 = iVar67;
										iVar65 = iVar64 + 1;
									}
								}
								iVar65++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar69 = GlobalFunc_4913(iParam1, iParam3, 14, 3);
					if (iVar69 != -1)
					{
						iVar70 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar69);
						iVar71 = 0;
						while (iVar71 < iVar70)
						{
							FILES::GET_FORCED_COMPONENT(iVar69, iVar71, &iVar72, &iVar73, &iVar74);
							if (iVar74 == 7)
							{
								if (iVar72 != 0 && iVar72 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar72, 7, 3);
								}
								else
								{
									iVar0 = iVar73;
									iVar71 = iVar70 + 1;
								}
							}
							iVar71++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar75 = GlobalFunc_4913(iParam1, iParam3, 4, 3);
					if (iVar75 != -1)
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar75);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_FORCED_COMPONENT(iVar75, iVar77, &iVar78, &iVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar78, 6, 3);
								}
								else
								{
									iVar0 = iVar79;
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar81 = GlobalFunc_4913(iParam1, iParam3, 1, 3);
					if (iVar81 != -1)
					{
						iVar82 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar81);
						iVar83 = 0;
						while (iVar83 < iVar82)
						{
							FILES::GET_FORCED_PROP(iVar81, iVar83, &iVar84, &iVar85, &iVar86);
							if (iVar86 == iParam5)
							{
								if (iVar84 != 0 && iVar84 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar84, 14, 3);
									iVar83 = iVar82 + 1;
								}
								else
								{
									iVar0 = iVar85;
									iVar83 = iVar82 + 1;
								}
							}
							iVar83++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 3;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 9;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 7;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 14;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 256)
				{
					iVar87 = GlobalFunc_4913(iParam1, iParam3, 11, 4);
					if (iVar87 != -1)
					{
						iVar88 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar87);
						iVar89 = 0;
						while (iVar89 < iVar88)
						{
							FILES::GET_FORCED_COMPONENT(iVar87, iVar89, &iVar90, &iVar91, &iVar92);
							if (iVar92 == 3)
							{
								if (iVar90 != 0 && iVar90 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar90, 3, 4);
								}
								else
								{
									iVar0 = iVar91;
									iVar89 = iVar88 + 1;
								}
							}
							iVar89++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 223)
				{
					iVar1 = (iParam3 - 208);
					iVar0 = (103 + iVar1);
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 33;
				}
				else if (iParam3 >= 256)
				{
					iVar93 = GlobalFunc_4913(iParam1, iParam3, 11, 4);
					if (iVar93 != -1)
					{
						iVar94 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar93);
						iVar95 = 0;
						while (iVar95 < iVar94)
						{
							FILES::GET_FORCED_COMPONENT(iVar93, iVar95, &iVar96, &iVar97, &iVar98);
							if (iVar98 == 8)
							{
								if (iVar96 != 0 && iVar96 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar96, 8, 4);
								}
								else
								{
									iVar0 = iVar97;
									iVar95 = iVar94 + 1;
								}
							}
							iVar95++;
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar99 = -1;
				if (iParam3 >= 55)
				{
					iVar99 = GlobalFunc_4913(iParam1, iParam3, 7, 4);
				}
				if ((iVar99 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("TIE"), 0)) || (iVar99 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("BOWTIE"), 0)))
				{
					iVar100 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					bVar101 = false;
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("LOOSE_TIE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("LOOSE_BOWTIE"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar100, joaat("CLOSED_COLLAR"), 0))
						{
							bVar101 = true;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar100, joaat("OPEN_COLLAR"), 0))
					{
						bVar101 = true;
					}
					if (bVar101)
					{
						iVar102 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar100);
						iVar103 = 0;
						while (iVar103 < iVar102)
						{
							FILES::GET_VARIANT_COMPONENT(iVar100, iVar103, &iVar104, &iVar105, &iVar106);
							if (iVar106 == 8)
							{
								if (iVar104 != 0 && iVar104 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar104, 8, 4);
								}
								else
								{
									iVar0 = iVar105;
								}
								iVar103 = iVar102 + 1;
							}
							iVar103++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar107 = GlobalFunc_4913(iParam1, iParam3, 4, 4);
					if (iVar107 != -1)
					{
						iVar108 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar107);
						iVar109 = 0;
						while (iVar109 < iVar108)
						{
							FILES::GET_FORCED_COMPONENT(iVar107, iVar109, &iVar110, &iVar111, &iVar112);
							if (iVar112 == 6)
							{
								if (iVar110 != 0 && iVar110 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar110, 6, 4);
								}
								else
								{
									iVar0 = iVar111;
									iVar109 = iVar108 + 1;
								}
							}
							iVar109++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar113 = GlobalFunc_4913(iParam1, iParam3, 11, 4);
					if (iVar113 != -1)
					{
						iVar114 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar113);
						iVar115 = 0;
						while (iVar115 < iVar114)
						{
							FILES::GET_FORCED_COMPONENT(iVar113, iVar115, &iVar116, &iVar117, &iVar118);
							if (iVar118 == 4)
							{
								if (iVar116 != 0 && iVar116 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar116, 4, 4);
								}
								else
								{
									iVar0 = iVar117;
									iVar115 = iVar114 + 1;
								}
							}
							iVar115++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar119 = GlobalFunc_4913(iParam1, iParam3, 14, 4);
					if (iVar119 != -1)
					{
						iVar120 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar119);
						iVar121 = 0;
						while (iVar121 < iVar120)
						{
							FILES::GET_FORCED_COMPONENT(iVar119, iVar121, &iVar122, &iVar123, &iVar124);
							if (iVar124 == 7)
							{
								if (iVar122 != 0 && iVar122 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar122, 7, 4);
								}
								else
								{
									iVar0 = iVar123;
									iVar121 = iVar120 + 1;
								}
							}
							iVar121++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar125 = GlobalFunc_4913(iParam1, iParam3, 1, 4);
					if (iVar125 != -1)
					{
						iVar126 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar125);
						iVar127 = 0;
						while (iVar127 < iVar126)
						{
							FILES::GET_FORCED_PROP(iVar125, iVar127, &iVar128, &iVar129, &iVar130);
							if (iVar130 == iParam5)
							{
								if (iVar128 != 0 && iVar128 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar128, 14, 4);
									iVar127 = iVar126 + 1;
								}
								else
								{
									iVar0 = iVar129;
									iVar127 = iVar126 + 1;
								}
							}
							iVar127++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

int func_897(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7D483
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	
	*iParam4 = -99;
	switch (iParam1)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= GlobalFunc_26(iParam1, 1))
					{
						GlobalFunc_10876(iParam1, 1, iParam3);
						if (Global_2621445 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar0 = func_81(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = GlobalFunc_4913(iParam1, iVar0, 1, 3);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("NIGHT_VISION"), 0))
						{
							iVar1 = GlobalFunc_4913(iParam1, iParam3, 1, 3);
							if (iVar1 != -1)
							{
								iVar2 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									FILES::GET_FORCED_COMPONENT(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != joaat("0"))
										{
											*iParam4 = GlobalFunc_4914(iParam1, iVar4, 2, 3);
										}
										else
										{
											*iParam4 = uVar5;
											iVar3 = iVar2 + 1;
										}
									}
									iVar3++;
								}
							}
						}
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= GlobalFunc_26(iParam1, 1))
					{
						GlobalFunc_10876(iParam1, 1, iParam3);
						if (Global_2621445 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar7 = func_81(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = GlobalFunc_4913(iParam1, iVar7, 1, 4);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("NIGHT_VISION"), 0))
						{
							iVar8 = GlobalFunc_4913(iParam1, iParam3, 1, 4);
							if (iVar8 != -1)
							{
								iVar9 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									FILES::GET_FORCED_COMPONENT(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != joaat("0"))
										{
											*iParam4 = GlobalFunc_4914(iParam1, iVar11, 2, 4);
										}
										else
										{
											*iParam4 = uVar12;
											iVar10 = iVar9 + 1;
										}
									}
									iVar10++;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (*iParam4 != -99)
	{
		GlobalFunc_6720(741, iParam3, Global_68104, 1);
		GlobalFunc_6720(742, iParam2, Global_68104, 1);
		return 1;
	}
	return 0;
}

void func_898(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7D74A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (GlobalFunc_6737(iVar0, iParam2))
				{
					iParam1 = 8;
					iParam2 = func_81(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = func_81(iParam0, 11);
				if (!GlobalFunc_6737(iVar0, iVar1))
				{
					return;
				}
			}
			GlobalFunc_9907(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!GlobalFunc_9908(iVar0, iParam2, 13) && !GlobalFunc_9908(iVar0, iParam2, 14)) && !GlobalFunc_9908(iVar0, iParam2, 15)) && !GlobalFunc_9908(iVar0, iParam2, 16)) && !GlobalFunc_9908(iVar0, iParam2, 71)) && !GlobalFunc_9908(iVar0, iParam2, 72))
				{
					GlobalFunc_9907(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = GlobalFunc_9095(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					GlobalFunc_9096(iParam0, iVar2);
				}
				else
				{
					GlobalFunc_9097(iVar2, 1, Global_68104);
				}
			}
		}
	}
}




void func_902(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7D95D
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9[2];
	struct<2> Var12;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	struct<2> Var33;
	int iVar50;
	int iVar51;
	int iVar52;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_68104 != GlobalFunc_5() || iParam2 == -99)
		{
			return;
		}
		Global_68106[2 /*14*/] = { GlobalFunc_10876(iParam0, iParam1, iParam2) };
		if (MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				GlobalFunc_7807(Global_2621444, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				GlobalFunc_7807(Global_2621444, 2, 1, 1, -1);
			}
			else
			{
				GlobalFunc_7807(Global_2621444, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2621444);
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar1 < Global_2542253)
					{
						Global_2542253[iVar1] = -1;
						Global_2542364[iVar1] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2621444, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10)
					{
						if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							GlobalFunc_7807(iVar2, 2, 1, 1, -1);
							if (iVar1 < Global_2542253)
							{
								Global_2542253[iVar1] = iVar2;
								Global_2542364[iVar1] = iVar4;
							}
						}
						else
						{
							func_902(iParam0, GlobalFunc_33(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_2542252++;
				if (Global_2542252 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar0)
					{
						if (iVar1 < Global_2542253)
						{
							if (Global_2542253[iVar1] != -1)
							{
								if (iParam0 == joaat("mp_m_freemode_01"))
								{
									func_902(iParam0, GlobalFunc_33(Global_2542364[iVar1]), GlobalFunc_4914(iParam0, Global_2542253[iVar1], GlobalFunc_33(Global_2542364[iVar1]), 3), 1);
								}
								else
								{
									func_902(iParam0, GlobalFunc_33(Global_2542364[iVar1]), GlobalFunc_4914(iParam0, Global_2542253[iVar1], GlobalFunc_33(Global_2542364[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_2542252 = (Global_2542252 - 1);
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 1) && !MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 6))
		{
			if (GlobalFunc_36(iParam1, Global_68106[1 /*14*/].f_2, &iVar5))
			{
				iVar6 = GlobalFunc_6872(iVar5, Global_68104, 0);
				MISC::SET_BIT(&iVar6, Global_68106[2 /*14*/].f_1);
				GlobalFunc_6720(iVar5, iVar6, Global_68104, 1);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("mp_m_freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar7 = (75 + Global_68106[2 /*14*/].f_4);
							func_902(iParam0, 14, iVar7, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar7 = (83 + Global_68106[2 /*14*/].f_4);
							func_902(iParam0, 14, iVar7, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar7 = (64 + Global_68106[2 /*14*/].f_4);
							func_902(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar7 = (48 + Global_68106[2 /*14*/].f_4);
							func_902(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar7 = (112 + Global_68106[2 /*14*/].f_4);
							func_902(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar7 = (96 + Global_68106[2 /*14*/].f_4);
							func_902(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar7 = (160 + Global_68106[2 /*14*/].f_4);
							func_902(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar7 = (176 + Global_68106[2 /*14*/].f_4);
							func_902(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar7 = (0 + Global_68106[2 /*14*/].f_4);
							func_902(iParam0, 11, iVar7, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar7 = (16 + Global_68106[2 /*14*/].f_4);
							func_902(iParam0, 11, iVar7, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar7 = (32 + Global_68106[2 /*14*/].f_4);
							func_902(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar7 = (224 + Global_68106[2 /*14*/].f_4);
							func_902(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_0");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_0");
									break;
								
								case 221:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_1");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_1");
									break;
								
								case 222:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_2");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_2");
									break;
								
								case 223:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_3");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_3");
									break;
								
								case 224:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_4");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_4");
									break;
								
								case 225:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_5");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_5");
									break;
								
								case 226:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_6");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_6");
									break;
								
								case 227:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_7");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_7");
									break;
								
								case 228:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_8");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_8");
									break;
								
								case 229:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_9");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_9");
									break;
								
								case 230:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_10");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_10");
									break;
								
								case 231:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_11");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_11");
									break;
								
								case 232:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_12");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_12");
									break;
								
								case 233:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_13");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_13");
									break;
								
								case 234:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_14");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_14");
									break;
								
								case 235:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_15");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_15");
									break;
							}
							FILES::INIT_SHOP_PED_COMPONENT(&Var12);
							iVar31 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(3, 6, -1, 0, -1, 8);
							iVar29 = 0;
							while (iVar29 < iVar31)
							{
								FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar29, &Var12);
								if (!FILES::IS_CONTENT_ITEM_LOCKED(Var12))
								{
									if (Var12.f_1 == iVar9[0] || Var12.f_1 == iVar9[1])
									{
										func_902(iParam0, 8, (241 + iVar30), 0);
										iVar29 = iVar31 + 1;
									}
									iVar30++;
								}
								iVar29++;
							}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_68106[2 /*14*/].f_4)
							{
								case 0:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								
								case 1:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								
								case 2:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								
								case 3:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								
								case 4:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								
								case 5:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								
								case 6:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								
								case 7:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								
								case 8:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								
								case 9:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								
								case 10:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								
								case 11:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								
								case 12:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								
								case 13:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								
								case 14:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								
								case 15:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_68106[2 /*14*/].f_4)
							{
								case 0:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								
								case 1:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								
								case 2:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								
								case 3:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								
								case 4:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								
								case 5:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								
								case 6:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								
								case 7:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								
								case 8:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								
								case 9:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								
								case 10:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								
								case 11:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								
								case 12:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								
								case 13:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								
								case 14:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								
								case 15:
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_902(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar7 = (16 + Global_68106[2 /*14*/].f_4);
							func_902(iParam0, 8, iVar7, 0);
						}
					}
				}
				Global_68106[2 /*14*/] = { GlobalFunc_10876(iParam0, iParam1, iParam2) };
				if (iParam1 == 11)
				{
					iVar8 = GlobalFunc_6741(iParam0, iParam2, Global_68106[2 /*14*/].f_4);
					if (iVar8 != -99)
					{
						func_902(iParam0, 8, iVar8, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_0");
								break;
							
							case 200:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_1");
								break;
							
							case 201:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_2");
								break;
						}
						FILES::INIT_SHOP_PED_COMPONENT(&Var33);
						iVar52 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(4, 6, -1, 0, -1, 8);
						iVar50 = 0;
						while (iVar50 < iVar52)
						{
							FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar50, &Var33);
							if (!FILES::IS_CONTENT_ITEM_LOCKED(Var33))
							{
								if (Var33.f_1 == iVar32)
								{
									func_902(iParam0, 8, (136 + iVar51), 0);
									iVar50 = iVar52 + 1;
								}
								iVar51++;
							}
							iVar50++;
						}
					}
				}
				else if (iParam1 == 8)
				{
					iVar8 = GlobalFunc_6736(iParam0, iParam2, Global_68106[2 /*14*/].f_4);
					if (iVar8 != -99)
					{
						func_902(iParam0, 11, iVar8, 0);
					}
				}
			}
		}
	}
}


int func_904(int iParam0, int iParam1, int iParam2)//Position - 0x7E8AA
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_905(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_905(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return GlobalFunc_7614(iParam0, iParam2);
			}
		}
		else
		{
			return func_81(iParam0, iParam1);
		}
	}
	return -99;
}

int func_905(int iParam0, int iParam1, int iParam2)//Position - 0x7E94B
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar24;
	int iVar34;
	var uVar35;
	var uVar45;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10876(iVar0, iParam1, iParam2) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_905(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar24 = { GlobalFunc_7616(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_905(iParam0, 14, uVar24[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10876(iVar0, 14, iVar6) };
									if (Global_68106[2 /*14*/].f_12 == iVar5)
									{
										if (func_905(iParam0, 14, iVar6))
										{
											if (!GlobalFunc_8490(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_68106[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_81(iParam0, iVar4);
						Global_68106[2 /*14*/] = { GlobalFunc_10876(iVar0, iVar4, iVar1) };
						if (!GlobalFunc_8490(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_68106[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != joaat("0"))
		{
			if (GlobalFunc_6872(1743, Global_68104, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar35 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar34 = 0;
		while (iVar34 <= 8)
		{
			if (!func_905(iParam0, 14, uVar35[iVar34]))
			{
				return 0;
			}
			iVar34++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_4 || Global_68106[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else
	{
		if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			if (GlobalFunc_6729(iVar0, 11, func_81(iParam0, 11)))
			{
				if (GlobalFunc_6727(iVar0, 4, iParam2, &uVar45))
				{
					return func_905(iParam0, 4, uVar45);
				}
			}
			else if (GlobalFunc_6726(iVar0, 4, iParam2, &uVar45))
			{
				return func_905(iParam0, 4, uVar45);
			}
		}
	}
	return 0;
}

