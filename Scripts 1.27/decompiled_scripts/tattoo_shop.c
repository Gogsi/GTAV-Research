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
	struct<2> Local_55 = { 0, 0 } ;
	var uLocal_57[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	struct<515> Local_92 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_607 = { 0, 0, 0 } ;
	var uLocal_610 = 12;
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
	var uLocal_623 = 12;
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
	var uLocal_636 = 12;
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
	var uLocal_649 = 9;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 9;
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
	int iLocal_676 = 0;
	int iLocal_677 = 0;
	struct<20> Local_678 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_698 = 0;
	bool bLocal_699 = 0;
	struct<3> Local_700 = { 0, 0, 0 } ;
	struct<3> Local_703 = { 0, 0, 0 } ;
	struct<3> Local_706 = { 0, 0, 0 } ;
	float fLocal_709 = 0f;
	float fLocal_710 = 0f;
	float fLocal_711 = 0f;
	float fLocal_712 = 0f;
	float fLocal_713 = 0f;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
	int iLocal_716 = 0;
	int iLocal_717 = 0;
	char* sLocal_718 = NULL;
	char* sLocal_719 = NULL;
	char* sLocal_720 = NULL;
	char* sLocal_721 = NULL;
	int iLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	var uLocal_727 = 0;
	int iLocal_728 = 0;
	int iLocal_729 = 0;
	int iLocal_730 = 0;
	var uLocal_731 = 0;
	int iLocal_732 = 0;
	int iLocal_733 = 0;
	int iLocal_734 = 0;
	var uLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	bool bLocal_739 = 0;
	int iLocal_740 = 0;
	struct<3> Local_741 = { 0, 0, 0 } ;
	struct<3> Local_744 = { 0, 0, 0 } ;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	struct<16> Local_749 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768 = 0;
	struct<4> Local_769 = { 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
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
	iLocal_17 = 3;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_716 = -1;
	sLocal_721 = "MISSTATTOO_PARLOUR@SHOP_IG_4BPLAYER";
	iLocal_766 = 207;
	StringCopy(&Local_769, "", 16);
	iLocal_90 = uScriptParam_0;
	iLocal_91 = func_759(iLocal_90);
	MISC::SET_BIT(&(Global_90014.f_1267[iLocal_90]), 16);
	func_754();
	GlobalFunc_5809(iLocal_90);
	if (GlobalFunc_1549(1))
	{
		iLocal_738 = 1;
	}
	Local_92.f_3 = -1;
	while (true)
	{
		SYSTEM::WAIT(0);
		func_751(&(Local_92.f_12));
		if (GlobalFunc_2507(iLocal_90) && !func_741(&Local_92, iLocal_90))
		{
			if (GlobalFunc_5807(&Local_92))
			{
				iVar0 = 0;
				func_731(&Local_92, &iVar0, 0, Local_92.f_30);
				func_723(&Local_92, &(Local_92.f_103));
				if (Local_92.f_9)
				{
					if (!GlobalFunc_8624(Local_92))
					{
						func_716(&Local_92, &(Local_92.f_103), 0);
					}
				}
				func_715();
				func_707();
				switch (Local_92.f_11)
				{
					case 0:
						func_697();
						break;
					
					case 1:
						GlobalFunc_7166(0);
						func_692();
						if (Local_92.f_11 == 2)
						{
							func_667();
						}
						break;
					
					case 2:
						func_667();
						func_663(&Local_92, &(Local_92.f_103));
						break;
					
					case 3:
						func_660(&Local_92, func_662(iLocal_91, Local_92));
						func_659();
						func_638();
						func_632();
						break;
					
					case 4:
						func_659();
						func_222();
						func_663(&Local_92, &(Local_92.f_103));
						break;
					
					case 5:
						func_659();
						Local_92.f_11 = 1;
						break;
					}
			}
		}
		else
		{
			func_21(0);
		}
		if (func_14(&Local_92))
		{
			func_8();
		}
		func_1();
	}
}

void func_1()//Position - 0x1E3
{
	bool bVar0;
	int iVar1;
	
	if (Local_92.f_9 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_57[PLAYER::PLAYER_ID()] = Global_90014.f_1267[Local_92];
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			GlobalFunc_5825(Local_92);
			if (Local_92.f_513)
			{
				if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Local_92.f_514))
				{
					bVar0 = true;
					if ((!MISC::IS_BIT_SET(Global_90014.f_1267[Local_92], 0) && !MISC::IS_BIT_SET(Global_90014.f_1267[Local_92], 5)) && (!ENTITY::DOES_ENTITY_EXIST(Local_92.f_12) || PED::IS_PED_INJURED(Local_92.f_12)))
					{
						iVar1 = 0;
						while (iVar1 < 32)
						{
							if (GlobalFunc_252(PLAYER::INT_TO_PLAYERINDEX(iVar1), 1, 1))
							{
								if (MISC::IS_BIT_SET(uLocal_57[iVar1], 5))
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
					GlobalFunc_5781(Local_92, bVar0, 0);
					Local_92.f_513 = 0;
				}
			}
			else
			{
				Local_92.f_514 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 2000);
				Local_92.f_513 = 1;
			}
		}
		else
		{
			Local_92.f_514 = NETWORK::GET_NETWORK_TIME();
			Local_92.f_513 = 1;
		}
	}
}







void func_8()//Position - 0x3BD8
{
	func_21(1);
	func_9(&Local_92);
}

void func_9(var uParam0)//Position - 0x3BEB
{
	int iVar0;
	
	GlobalFunc_2457(&(uParam0->f_103));
	GlobalFunc_2456(uParam0);
	GlobalFunc_2455(&(uParam0->f_218));
	GlobalFunc_2454(&(uParam0->f_170));
	iVar0 = 0;
	while (iVar0 < uParam0->f_424)
	{
		uParam0->f_424[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_429)
	{
		uParam0->f_429[iVar0] = 0;
		iVar0++;
	}
}





int func_14(var uParam0)//Position - 0x3DF9
{
	if (uParam0->f_9)
	{
		if (GlobalFunc_7702(*uParam0, 10, 1))
		{
			return 1;
		}
		if (uParam0->f_1 == 1)
		{
			if (GlobalFunc_7702(*uParam0, 19, 1))
			{
				return 1;
			}
		}
		if (!Global_90014.f_15)
		{
			return 1;
		}
		if (Global_68245)
		{
			if (Global_1312489.f_4)
			{
				return 1;
			}
		}
		else if (uParam0->f_9 && uParam0->f_11 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 82.34222f, -1310.278f, 25.77012f, 142.8917f, -1274.154f, 46.51249f, 62f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}







void func_21(bool bParam0)//Position - 0x42AD
{
	GlobalFunc_7166(1);
	if (Local_92.f_103.f_19)
	{
		if (GlobalFunc_1814())
		{
			GlobalFunc_5423();
			Global_2428131.f_656.f_33[0] = Local_92.f_443;
			Global_2428131.f_656.f_33[1] = Local_92.f_103.f_3;
			Global_2428131.f_656.f_39 = Local_92.f_103;
			Global_2428131.f_656.f_33[2] = Local_92.f_103.f_1;
			Global_2428131.f_656.f_40 = 1;
		}
	}
	if (Local_92.f_3 != -1)
	{
		GlobalFunc_5420(&(Local_92.f_3));
	}
	func_181(&Local_92, iLocal_90);
	GlobalFunc_2465(&(Local_92.f_38));
	if (Local_92.f_103.f_19)
	{
		GlobalFunc_10535(&(Local_92.f_103), 1, 1, 1);
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		GlobalFunc_702(0, 1, 1);
		GlobalFunc_2463(1);
		func_145();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (Global_262145.f_2421)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShops");
			}
		}
		GlobalFunc_4988(1, Local_92);
		GlobalFunc_5782(Local_92);
		func_139();
		if (!Global_68245 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_138();
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
			func_33(PLAYER::PLAYER_PED_ID());
		}
		GlobalFunc_8898(0);
		func_28();
		Local_678.f_19 = 0;
		GlobalFunc_2582(&Local_678, 1);
	}
	if (!PED::IS_PED_INJURED(Local_92.f_12))
	{
		if (func_26(0))
		{
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_92.f_12, 1);
		}
		if (Local_92.f_10)
		{
			if (GlobalFunc_2458(iLocal_90) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			else
			{
				PED::DELETE_PED(&(Local_92.f_12));
			}
		}
		else if (bParam0)
		{
			if (GlobalFunc_2458(iLocal_90) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			else
			{
				PED::DELETE_PED(&(Local_92.f_12));
			}
		}
		else if (GlobalFunc_2458(iLocal_90) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
		}
		else
		{
			PED::SET_PED_KEEP_TASK(Local_92.f_12, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_92.f_12));
		}
	}
	else
	{
		Local_92.f_12 = 0;
	}
	if (Local_92.f_12.f_16)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_92.f_12.f_1);
		Local_92.f_12.f_16 = 0;
	}
	if (!PED::IS_PED_INJURED(Local_92.f_30))
	{
		if (Local_92.f_10)
		{
			PED::DELETE_PED(&(Local_92.f_30));
		}
		else if (bParam0)
		{
			PED::DELETE_PED(&(Local_92.f_30));
		}
		else
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_92.f_30, false);
			PED::SET_PED_KEEP_TASK(Local_92.f_30, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_92.f_30));
		}
	}
	else
	{
		Local_92.f_30 = 0;
	}
	if (Local_92.f_30.f_7)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_92.f_30.f_1);
		Local_92.f_30.f_7 = 0;
	}
	if (iLocal_676)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(uLocal_675);
		iLocal_676 = 0;
	}
	func_23();
	MISC::CLEAR_BIT(&Global_68493, 9);
	if (!Global_68245 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
		PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
	}
	if (bParam0)
	{
		GlobalFunc_2460("Resetting script", -1);
		MISC::SET_BIT(&(Global_90014.f_1267[iLocal_90]), 11);
	}
	else
	{
		GlobalFunc_2460("Terminating script", -1);
		MISC::CLEAR_BIT(&(Global_90014.f_1267[iLocal_90]), 16);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}


void func_23()//Position - 0x45B3
{
	func_24();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uLocal_720))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_720);
	}
}

void func_24()//Position - 0x45D1
{
	if (iLocal_722)
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_718);
		STREAMING::REMOVE_ANIM_DICT(sLocal_719);
	}
}


int func_26(bool bParam0)//Position - 0x4609
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_55))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_55))
			{
				return 1;
			}
			else if (bParam0)
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_55);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}


void func_28()//Position - 0x47F8
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(Local_607.f_2) && !PED::IS_PED_INJURED(Local_607.f_2))
	{
		iVar0 = Local_607.f_2;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 1, 0);
		PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 0, 0);
		PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 4, 0);
		PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 5, 0);
		PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 2, 0);
		PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 3, 0);
	}
}





void func_33(int iParam0)//Position - 0x48F9
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (Global_68245)
		{
			func_48(&iParam0, -1, 0, 0);
		}
		else
		{
			GlobalFunc_7707(iParam0);
		}
	}
}















void func_48(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x7F90
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
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(*uParam0);
	}
	iVar13 = GlobalFunc_303(*uParam0);
	bVar14 = func_135(*uParam0);
	bVar15 = GlobalFunc_5010(*uParam0);
	bVar16 = GlobalFunc_11188(*uParam0);
	iVar17 = 0;
	while (iVar17 < 127)
	{
		if (GlobalFunc_8361(iVar17, iParam1))
		{
			if (GlobalFunc_5123(&Var0, iVar17, iVar13, *uParam0, -1))
			{
				if (GlobalFunc_9001(&Var0, Var0.f_8, bVar14, bVar15, bParam2, bVar16))
				{
					if (!bParam3)
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
		}
		iVar17++;
	}
	if (GlobalFunc_8361(123, -1))
	{
		if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
		{
			if (!bParam3)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
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
				if (GlobalFunc_8361(iVar35, iParam1))
				{
					if (GlobalFunc_9001(&(Var20.f_7), Var20.f_6, bVar14, bVar15, bParam2, bVar16))
					{
						if (!bParam3)
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var20.f_2, Var20.f_3);
							GlobalFunc_294(*uParam0, Var20.f_2, Var20.f_3);
						}
					}
				}
			}
		}
		iVar18++;
	}
}























































































int func_135(int iParam0)//Position - 0x263DD
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
						iVar2 = GlobalFunc_11096(iParam0, 11, -1);
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
						iVar4 = GlobalFunc_11096(iParam0, 8, -1);
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
						iVar6 = GlobalFunc_11096(iParam0, 11, -1);
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
						iVar8 = GlobalFunc_11096(iParam0, 8, -1);
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
		if (func_136(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_136(int iParam0)//Position - 0x2698B
{
	struct<5> Var0;
	bool bVar17;
	int iVar18;
	int iVar19;
	
	bVar17 = ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("mp_m_freemode_01");
	iVar18 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar19 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	if (bVar17)
	{
		FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_JBIB_12_0"), &Var0);
	}
	else
	{
		FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_JBIB_13_0"), &Var0);
	}
	if (iVar18 == Var0.f_3 && iVar19 == Var0.f_4)
	{
		return 1;
	}
	return 0;
}


void func_138()//Position - 0x26A43
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && Local_92.f_509)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (iVar0 != 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), iVar0, Local_92.f_444.f_13[iVar0], Local_92.f_444[iVar0], Local_92.f_444.f_26[iVar0]);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (Local_92.f_444.f_39[iVar0] != -1)
			{
				PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), iVar0, Local_92.f_444.f_39[iVar0], Local_92.f_444.f_49[iVar0], NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
			}
			else
			{
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), iVar0);
			}
			iVar0++;
		}
	}
}

void func_139()//Position - 0x26AF6
{
	if (Local_607.x)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_607.f_1);
		Local_607.x = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_607.f_2))
	{
		PED::DELETE_PED(&(Local_607.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2542603))
	{
		PED::DELETE_PED(&Global_2542603);
	}
}






void func_145()//Position - 0x26E8D
{
	CAM::SET_WIDESCREEN_BORDERS(0, -1);
	GlobalFunc_2462();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
		if (!Global_68245)
		{
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
		}
	}
	Global_91341 = 0;
	GlobalFunc_8380(0, 1, 1, 0);
}




































void func_181(var uParam0, int iParam1)//Position - 0x27A91
{
	if (*uParam0 == iParam1 && uParam0->f_7)
	{
		GlobalFunc_2460("Unable to lock shop doors as player is inside the shop.", -1);
	}
	else
	{
		GlobalFunc_10875(iParam1, 1, 0);
	}
	func_191(iParam1, 0);
	func_190(iParam1, 0);
	GlobalFunc_7929(iParam1, 1, 1);
	GlobalFunc_7929(iParam1, 10, 1);
	GlobalFunc_7929(iParam1, 11, 1);
	GlobalFunc_7929(iParam1, 12, 1);
	GlobalFunc_7929(iParam1, 13, 1);
	GlobalFunc_7929(iParam1, 22, 1);
	GlobalFunc_7929(iParam1, 25, 1);
	if (uParam0->f_1 == 1)
	{
		GlobalFunc_7929(iParam1, 19, 1);
	}
	if (!GlobalFunc_2507(iParam1))
	{
		GlobalFunc_2460("Letting shop controller know to relaunch when in range.", -1);
		GlobalFunc_7930(iParam1, 17, 1);
	}
	GlobalFunc_1293(iParam1);
	GlobalFunc_7128(iParam1);
	GlobalFunc_2466(PLAYER::PLAYER_ID(), iParam1);
	GlobalFunc_2462();
	if (GlobalFunc_2458(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) && !PED::IS_PED_INJURED(uParam0->f_12))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_12))
			{
				PED::SET_PED_KEEP_TASK(uParam0->f_12, 1);
			}
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
		}
		if (func_741(uParam0, iParam1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
			{
				PED::DELETE_PED(&(uParam0->f_12));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
	}
}









void func_190(int iParam0, bool bParam1)//Position - 0x27E1F
{
	if (bParam1)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (!GlobalFunc_7702(iParam0, 6, 1))
		{
			GlobalFunc_7930(iParam0, 6, 1);
			Global_90014.f_291++;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PLAYER::FORCE_CLEANUP(8);
			}
		}
	}
	else if (GlobalFunc_7702(iParam0, 6, 1))
	{
		GlobalFunc_7929(iParam0, 6, 1);
		if (Global_90014.f_291 > 0)
		{
			Global_90014.f_291 = (Global_90014.f_291 - 1);
		}
		BRAIN::_0x6D6840CEE8845831("act_cinema");
	}
}

void func_191(int iParam0, bool bParam1)//Position - 0x27E9F
{
	if (bParam1)
	{
		Global_90014.f_368 = iParam0;
		if (!GlobalFunc_7702(iParam0, 5, 1))
		{
			GlobalFunc_7930(iParam0, 5, 1);
			GlobalFunc_1293(iParam0);
			Global_90014.f_290++;
		}
	}
	else if (GlobalFunc_7702(iParam0, 5, 1))
	{
		GlobalFunc_7929(iParam0, 5, 1);
		GlobalFunc_1293(iParam0);
		if (Global_90014.f_290 > 0)
		{
			Global_90014.f_290 = (Global_90014.f_290 - 1);
		}
	}
}































void func_222()//Position - 0x297ED
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
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
	PAD::_0x7F4724035FDCA1DD(2);
	PAD::_0x7F4724035FDCA1DD(0);
	func_617(&Local_92, &(Local_92.f_103));
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::DOES_ENTITY_EXIST(Local_92.f_12)) && !PED::IS_PED_INJURED(Local_92.f_12))
	{
		NETWORK::SET_ENTITY_LOCALLY_VISIBLE(Local_92.f_12);
	}
	if (Local_92.f_103.f_31 > 0 && Local_92.f_103.f_31 < 6)
	{
		GlobalFunc_5800(0, 1, 1);
		HUD::THEFEED_HIDE_THIS_FRAME();
	}
	GlobalFunc_7629();
	bVar7 = false;
	switch (Local_92.f_103.f_31)
	{
		case 0:
			Local_678.f_19 = 0;
			Local_678.f_18 = 0;
			if (GlobalFunc_5785(1))
			{
				Local_92.f_103.f_19 = 1;
				if ((((GlobalFunc_4998("TAT_MNU", Local_92) && GlobalFunc_5798(Local_92)) && func_605()) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_TATTOO_SHOP", 0)) && func_604())
				{
					if (!Global_68245)
					{
						func_471();
					}
					Local_92.f_103.f_31 = 1;
				}
			}
			break;
		
		case 1:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !GlobalFunc_6708(60, -1, -1))
			{
				GlobalFunc_5217(60, 1, -1, 1);
			}
			MISC::SET_BIT(&Global_68493, 9);
			GlobalFunc_8898(1);
			GlobalFunc_10536(&(Local_92.f_103));
			GlobalFunc_2601(0, 1, 0, 0, 0, 0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				HUD::SET_MULTIPLAYER_WALLET_CASH();
				HUD::SET_MULTIPLAYER_BANK_CASH();
			}
			if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_92.f_170.f_31, 3f) && !Global_68245)
			{
				GlobalFunc_7155(&Local_92);
			}
			if (!PED::IS_PED_INJURED(Local_92.f_12))
			{
				Var4 = { ENTITY::GET_ENTITY_COORDS(Local_92.f_12, 1) };
				Local_92.f_170.f_31.f_2 = Var4.f_2;
			}
			if (!Global_68245)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (((Var0.x < (Local_92.f_170.f_31 - 0.1f) || Var0.x > (Local_92.f_170.f_31 + 0.1f)) || Var0.f_1 < (Local_92.f_170.f_31.f_1 - 0.1f)) || Var0.f_1 > (Local_92.f_170.f_31.f_1 + 0.1f))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), Local_92.f_170.f_31, 0, 0, 1);
					MISC::CLEAR_AREA_OF_OBJECTS(Local_92.f_170.f_31, 1.1f, 0);
				}
				fVar3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
				if (fVar3 < (Local_92.f_170.f_34 - 2f) || fVar3 > (Local_92.f_170.f_34 + 2f))
				{
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_92.f_170.f_34);
				}
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				Local_678.f_19 = 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_607.f_2))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_607.f_2, true);
			}
			Local_700 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (ENTITY::DOES_ENTITY_EXIST(Local_607.f_2))
			{
				if (!PED::IS_PED_INJURED(Local_607.f_2))
				{
					Local_700 = { ENTITY::GET_ENTITY_COORDS(Local_607.f_2, 1) };
				}
			}
			if (iLocal_91 != 22)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_92.f_12))
				{
					if (!PED::IS_PED_INJURED(Local_92.f_12))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(Local_92.f_12, 1) };
						if (((Var0.x < (Local_92.f_12.f_2 - 0.1f) || Var0.x > (Local_92.f_12.f_2 + 0.1f)) || Var0.f_1 < (Local_92.f_12.f_2.f_1 - 0.1f)) || Var0.f_1 > (Local_92.f_12.f_2.f_1 + 0.1f))
						{
							TASK::CLEAR_PED_TASKS(Local_92.f_12);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_92.f_12, Local_92.f_12.f_2, 0, 0, 1);
							if (iLocal_91 == 22)
							{
								ENTITY::SET_ENTITY_HEADING(Local_92.f_12, Local_92.f_12.f_5);
							}
							else
							{
								ENTITY::SET_ENTITY_HEADING(Local_92.f_12, (Local_92.f_12.f_5 - 180f));
							}
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_92.f_12, 0, 0);
							TASK::TASK_LOOK_AT_ENTITY(Local_92.f_12, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
						}
					}
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			func_458(&Local_92, 1f);
			Local_92.f_103.f_5 = 0;
			Local_92.f_103.f_1 = 0;
			Local_92.f_103.f_3 = 0;
			Local_92.f_103.f_4 = 0;
			Local_92.f_103.f_10 = 0;
			Local_92.f_103.f_16 = 0;
			StringCopy(&(Local_92.f_103.f_11), "", 16);
			iLocal_748 = 0;
			Local_92.f_103.f_17 = 0;
			if (iLocal_738)
			{
				Local_92.f_103.f_3 = Global_2428131.f_656.f_33[1];
				if (Global_2428131.f_656.f_40)
				{
					Local_92.f_103.f_5 = 1;
					Local_92.f_443 = Global_2428131.f_656.f_33[0];
					Local_92.f_103.f_1 = Global_2428131.f_656.f_33[2];
					Global_2428131.f_656.f_40 = 0;
					Local_92.f_103.f_17 = 1;
					iLocal_738 = 0;
				}
			}
			func_440(&bVar7);
			func_255(&bVar7);
			GlobalFunc_1395();
			func_248();
			if (!Global_68245 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
				func_247();
			}
			Local_92.f_103.f_31 = 2;
			break;
		
		case 2:
			func_255(&bVar7);
			func_248();
			func_245();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
			}
			break;
		
		case 6:
			if (!bLocal_699)
			{
				if (!Global_68245 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					func_138();
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
					PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
				}
				Local_92.f_103.f_31 = 7;
			}
			else
			{
				func_255(&bVar7);
			}
			break;
		
		case 7:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
				HUD::REMOVE_MULTIPLAYER_BANK_CASH();
			}
			GlobalFunc_2477(&(Local_92.f_38));
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			GlobalFunc_10535(&(Local_92.f_103), 1, 1, 1);
			GlobalFunc_2463(1);
			func_145();
			GlobalFunc_4988(1, Local_92);
			GlobalFunc_5782(Local_92);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			func_139();
			Local_678.f_19 = 0;
			if (Global_2540563)
			{
				if (Global_68245)
				{
					GlobalFunc_1691(32, GlobalFunc_7658(1, 1));
				}
			}
			iVar8 = GlobalFunc_6669(PLAYER::PLAYER_PED_ID(), 11);
			GlobalFunc_10814(PLAYER::PLAYER_PED_ID(), 11, iVar8, 0, 0);
			func_33(PLAYER::PLAYER_PED_ID());
			func_28();
			GlobalFunc_8898(0);
			MISC::CLEAR_BIT(&Global_68493, 9);
			Local_92.f_103.f_19 = 0;
			Local_92.f_11 = 3;
			break;
		
		case 8:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
				HUD::REMOVE_MULTIPLAYER_BANK_CASH();
			}
			GlobalFunc_2477(&(Local_92.f_38));
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			GlobalFunc_702(0, 1, 1);
			GlobalFunc_10535(&(Local_92.f_103), 1, 1, 1);
			if (!Global_68245 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_138();
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
			}
			GlobalFunc_2463(1);
			func_145();
			GlobalFunc_4988(1, Local_92);
			GlobalFunc_5782(Local_92);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			Local_678.f_19 = 0;
			func_139();
			iVar9 = GlobalFunc_6669(PLAYER::PLAYER_PED_ID(), 11);
			GlobalFunc_10814(PLAYER::PLAYER_PED_ID(), 11, iVar9, 0, 0);
			func_33(PLAYER::PLAYER_PED_ID());
			GlobalFunc_8898(0);
			func_28();
			if (Global_2540563)
			{
				if (Global_68245)
				{
					GlobalFunc_1691(32, GlobalFunc_7658(1, 1));
				}
			}
			MISC::CLEAR_BIT(&Global_68493, 9);
			Local_92.f_103.f_19 = 0;
			Local_92.f_11 = 3;
			break;
	}
	if (iLocal_740)
	{
		iVar10 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(Local_607.f_2) && !PED::IS_PED_INJURED(Local_607.f_2))
		{
			iVar10 = Local_607.f_2;
		}
		func_471();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_226(iVar10, Local_92.f_443, 0, -1, 0);
		}
		else
		{
			func_33(iVar10);
		}
		func_223(iVar10, Local_92.f_443);
		iLocal_740 = 0;
	}
	if (bVar7)
	{
		iLocal_740 = 1;
	}
	GlobalFunc_2582(&Local_678, 1);
}

void func_223(int iParam0, int iParam1)//Position - 0x29F53
{
	int iVar0;
	struct<6> Var1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = GlobalFunc_303(iParam0);
			if (GlobalFunc_5123(&Var1, iParam1, iVar0, iParam0, -1))
			{
				if (!func_224(iParam1))
				{
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					GlobalFunc_294(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

int func_224(int iParam0)//Position - 0x29FA9
{
	if (Global_68245)
	{
		return GlobalFunc_8361(iParam0, -1);
	}
	else
	{
		return func_225(GlobalFunc_8315(), iParam0);
	}
	return 0;
}

int func_225(int iParam0, int iParam1)//Position - 0x29FD3
{
	struct<11> Var0;
	
	if (GlobalFunc_42(iParam0))
	{
		if (GlobalFunc_5123(&Var0, iParam1, GlobalFunc_522(iParam0), 0, -1))
		{
			return MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iParam0 /*15*/].f_10[Var0.f_9], Var0.f_10);
		}
	}
	return 0;
}

void func_226(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x2A019
{
	int iVar0;
	struct<12> Var1;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam3 == -1)
	{
		iParam3 = GlobalFunc_5();
	}
	PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar14 = GlobalFunc_303(iParam0);
	GlobalFunc_5123(&Var1, iParam1, iVar14, iParam0, -1);
	iVar15 = func_230(iVar0, &Var1, Var1.f_8);
	bVar17 = false;
	bVar18 = GlobalFunc_5010(iParam0);
	bVar19 = GlobalFunc_11188(iParam0);
	iVar16 = 0;
	while (iVar16 < 127)
	{
		if (GlobalFunc_5123(&Var1, iVar16, iVar14, iParam0, -1))
		{
			if (GlobalFunc_8361(Var1.f_11, iParam3))
			{
				iVar20 = func_230(iVar0, &Var1, Var1.f_8);
				bVar17 = false;
				if (iVar15 != -1 && iVar20 != -1)
				{
					if (Var1.f_11 != iParam1)
					{
						if (func_229(iVar20, iVar15))
						{
							bVar17 = true;
							if (bParam2)
							{
								GlobalFunc_9519(Var1.f_11, 0, -1);
							}
						}
					}
				}
				if (!bVar17 && GlobalFunc_9001(&Var1, Var1.f_8, 0, bVar18, bParam4, bVar19))
				{
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
		iVar16++;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_8361(123, -1))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar38 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar14);
		iVar37 = 0;
		while (iVar37 < iVar38)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar14, iVar37, &Var21))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var21) && Var21.f_6 != 2140335355)
				{
					iVar36 = (129 + iVar37);
					if (GlobalFunc_8361(iVar36, iParam3))
					{
						iVar39 = func_230(iVar0, &(Var21.f_7), Var21.f_6);
						bVar17 = false;
						if (iVar15 != -1 && iVar39 != -1)
						{
							if (iVar36 != iParam1)
							{
								if (Var21.f_6 != 0)
								{
									if (func_229(iVar39, iVar15))
									{
										bVar17 = true;
										if (bParam2)
										{
											GlobalFunc_9519(iVar36, 0, -1);
										}
									}
								}
							}
						}
						if (!bVar17 && GlobalFunc_9001(&(Var21.f_7), Var21.f_6, 0, bVar18, bParam4, bVar19))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var21.f_2, Var21.f_3);
							GlobalFunc_294(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar37++;
		}
	}
}



int func_229(int iParam0, int iParam1)//Position - 0x2A2A7
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (iParam0 == -1 || iParam1 == -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 11:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 3:
				case 4:
				case 5:
				case 11:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 5:
				case 11:
					return 1;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 11:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 6:
				case 8:
				case 11:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 6:
				case 7:
				case 10:
				case 11:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 6:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
				case 6:
				case 8:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 6:
				case 7:
				case 8:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 12:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 23:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 15:
				case 16:
				case 17:
				case 23:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 14:
				case 17:
				case 23:
					return 1;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 14:
				case 23:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 14:
				case 15:
					return 1;
				
				default:
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 18:
				case 19:
				case 20:
				case 23:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 18:
				case 19:
				case 20:
				case 22:
				case 23:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 18:
				case 21:
					return 1;
				
				default:
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 12:
				case 18:
				case 20:
				case 22:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 18:
				case 19:
				case 20:
				case 23:
				case 27:
					return 1;
				
				default:
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 25:
					return 1;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
				case 32:
				case 33:
				case 34:
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 27:
				case 26:
				case 28:
				case 29:
				case 30:
				case 31:
				case 32:
				case 33:
				case 34:
				case 35:
				case 36:
				case 0:
				case 1:
				case 2:
				case 4:
				case 6:
				case 7:
				case 8:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 16:
				case 18:
				case 19:
				case 20:
				case 22:
				case 23:
					return 1;
				
				default:
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
				case 32:
					return 1;
				
				default:
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 30:
				case 31:
				case 32:
					return 1;
				
				default:
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 30:
				case 31:
					return 1;
				
				default:
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 28:
				case 30:
				case 32:
					return 1;
				
				default:
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 33:
				case 34:
				case 35:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 33:
				case 34:
					return 1;
				
				default:
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 33:
				case 35:
					return 1;
				
				default:
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 26:
				case 27:
				case 33:
				case 36:
					return 1;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 42:
				case 44:
				case 47:
				case 48:
				case 49:
				case 50:
					return 1;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 47:
				case 54:
				case 55:
				case 48:
				case 49:
				case 50:
				case 51:
				case 52:
				case 53:
					return 1;
				
				default:
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 39:
				case 37:
				case 40:
				case 41:
					return 1;
				
				default:
			}
			break;
		
		case 42:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 42:
				case 43:
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 39:
				case 37:
				case 42:
				case 43:
					return 1;
				
				default:
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 37:
				case 38:
				case 39:
				case 40:
				case 42:
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 45:
					return 1;
				
				default:
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 46:
					return 1;
				
				default:
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 38:
				case 39:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
				case 52:
				case 53:
				case 54:
				case 55:
					return 1;
				
				default:
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 38:
				case 39:
				case 47:
				case 48:
				case 49:
				case 50:
				case 54:
				case 55:
					return 1;
				
				default:
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 38:
				case 39:
				case 47:
				case 48:
				case 49:
				case 54:
					return 1;
				
				default:
			}
			break;
		
		case 50:
			switch (iParam1)
			{
				case 38:
				case 39:
				case 47:
				case 48:
				case 50:
				case 55:
					return 1;
				
				default:
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 52:
				case 53:
				case 54:
				case 55:
					return 1;
				
				default:
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 52:
				case 54:
					return 1;
				
				default:
			}
			break;
		
		case 53:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 53:
				case 55:
					return 1;
				
				default:
			}
			break;
		
		case 54:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 52:
				case 48:
				case 49:
					return 1;
				
				default:
			}
			break;
		
		case 55:
			switch (iParam1)
			{
				case 39:
				case 47:
				case 51:
				case 53:
				case 48:
				case 50:
					return 1;
				
				default:
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 56:
					return 1;
				
				default:
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 57:
					return 1;
				
				default:
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 58:
					return 1;
				
				default:
			}
			break;
		
		case 59:
			switch (iParam1)
			{
				case 59:
				case 61:
				case 63:
					return 1;
				
				default:
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 60:
					return 1;
				
				default:
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 59:
				case 61:
				case 62:
					return 1;
				
				default:
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 61:
				case 62:
					return 1;
				
				default:
			}
			break;
		
		case 63:
			switch (iParam1)
			{
				case 59:
				case 63:
				case 64:
					return 1;
				
				default:
			}
			break;
		
		case 64:
			switch (iParam1)
			{
				case 63:
				case 64:
					return 1;
				
				default:
			}
			break;
		
		case 65:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
				case 70:
				case 71:
				case 72:
				case 73:
				case 74:
				case 75:
				case 76:
				case 77:
				case 78:
				case joaat("mpsv_lp0_31"):
				case 80:
					return 1;
				
				default:
			}
			break;
		
		case 66:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 68:
				case 69:
				case 71:
				case 72:
				case 73:
				case 74:
				case 76:
				case 77:
				case 78:
				case joaat("mpsv_lp0_31"):
					return 1;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam1)
			{
				case 65:
				case 67:
				case 68:
				case 70:
				case 71:
				case 72:
				case 73:
				case 75:
				case 76:
				case 77:
				case joaat("mpsv_lp0_31"):
				case 80:
					return 1;
				
				default:
			}
			break;
		
		case 68:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
				case 70:
				case 71:
				case 72:
				case 78:
					return 1;
				
				default:
			}
			break;
		
		case 69:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 68:
				case 69:
				case 71:
				case 72:
				case 78:
					return 1;
				
				default:
			}
			break;
		
		case 70:
			switch (iParam1)
			{
				case 65:
				case 67:
				case 68:
				case 70:
				case 71:
				case 72:
					return 1;
				
				default:
			}
			break;
		
		case 71:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
				case 70:
				case 71:
					return 1;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
				case 70:
				case 72:
					return 1;
				
				default:
			}
			break;
		
		case 73:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 73:
				case 74:
				case 75:
				case 76:
				case 77:
				case 78:
				case joaat("mpsv_lp0_31"):
				case 80:
					return 1;
				
				default:
			}
			break;
		
		case 74:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 73:
				case 74:
				case 76:
				case 77:
				case 78:
				case joaat("mpsv_lp0_31"):
					return 1;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam1)
			{
				case 65:
				case 67:
				case 73:
				case 75:
				case 76:
				case 77:
				case joaat("mpsv_lp0_31"):
				case 80:
					return 1;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 73:
				case 74:
				case 75:
				case 76:
				case 80:
					return 1;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 73:
				case 74:
				case 75:
				case 77:
				case 80:
					return 1;
				
				default:
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 65:
				case 66:
				case 68:
				case 69:
				case 73:
				case 74:
				case 78:
					return 1;
				
				default:
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			switch (iParam1)
			{
				case 65:
				case 66:
				case 67:
				case 73:
				case 74:
				case 75:
				case joaat("mpsv_lp0_31"):
					return 1;
				
				default:
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 65:
				case 67:
				case 73:
				case 75:
				case 76:
				case 77:
				case 80:
					return 1;
				
				default:
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 87:
				case 88:
				case 89:
				case 90:
				case 91:
				case 92:
				case 93:
				case 94:
				case 95:
				case 96:
					return 1;
				
				default:
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 84:
				case 85:
				case 87:
				case 88:
				case 89:
				case 90:
				case 92:
				case 93:
				case 94:
				case 95:
					return 1;
				
				default:
			}
			break;
		
		case 83:
			switch (iParam1)
			{
				case 81:
				case 83:
				case 84:
				case 86:
				case 87:
				case 88:
				case 89:
				case 91:
				case 92:
				case 93:
				case 95:
				case 96:
					return 1;
				
				default:
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 87:
				case 88:
				case 94:
					return 1;
				
				default:
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 84:
				case 85:
				case 87:
				case 88:
				case 94:
					return 1;
				
				default:
			}
			break;
		
		case 86:
			switch (iParam1)
			{
				case 81:
				case 83:
				case 84:
				case 86:
				case 87:
				case 88:
					return 1;
				
				default:
			}
			break;
		
		case 87:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 87:
					return 1;
				
				default:
			}
			break;
		
		case 88:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 88:
					return 1;
				
				default:
			}
			break;
		
		case 89:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 89:
				case 90:
				case 91:
				case 92:
				case 93:
				case 94:
				case 95:
				case 96:
					return 1;
				
				default:
			}
			break;
		
		case 90:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 89:
				case 90:
				case 92:
				case 93:
				case 94:
				case 95:
					return 1;
				
				default:
			}
			break;
		
		case 91:
			switch (iParam1)
			{
				case 81:
				case 83:
				case 89:
				case 91:
				case 92:
				case 93:
				case 95:
				case 96:
					return 1;
				
				default:
			}
			break;
		
		case 92:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 89:
				case 90:
				case 91:
				case 92:
				case 96:
					return 1;
				
				default:
			}
			break;
		
		case 93:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 89:
				case 90:
				case 91:
				case 93:
				case 96:
					return 1;
				
				default:
			}
			break;
		
		case 94:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 84:
				case 85:
				case 89:
				case 90:
				case 94:
					return 1;
				
				default:
			}
			break;
		
		case 95:
			switch (iParam1)
			{
				case 81:
				case 82:
				case 83:
				case 89:
				case 90:
				case 91:
				case 95:
					return 1;
				
				default:
			}
			break;
		
		case 96:
			switch (iParam1)
			{
				case 81:
				case 83:
				case 89:
				case 91:
				case 92:
				case 93:
				case 96:
					return 1;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam1)
			{
				case 97:
					return 1;
				
				default:
			}
			break;
		
		case 98:
			switch (iParam1)
			{
				case 98:
					return 1;
				
				default:
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_230(int iParam0, char* sParam1, int iParam2)//Position - 0x2BA74
{
	switch (iParam2)
	{
		case 1019352240:
		case 2140335355:
		case 277073536:
			return -1;
			break;
	}
	switch (iParam2)
	{
		case joaat("ARM_LEFT_FULL_SLEEVE"):
			return 0;
			break;
		
		case joaat("ARM_LEFT_SHORT_SLEEVE"):
			return 1;
			break;
		
		case joaat("ARM_LEFT_LOWER_SLEEVE"):
			return 2;
			break;
		
		case joaat("ARM_LEFT_LOWER_INNER"):
			return 3;
			break;
		
		case joaat("ARM_LEFT_LOWER_OUTER"):
			return 4;
			break;
		
		case joaat("ARM_LEFT_WRIST"):
			return 5;
			break;
		
		case joaat("ARM_LEFT_UPPER_SLEEVE"):
			return 6;
			break;
		
		case joaat("ARM_LEFT_UPPER_TRICEP"):
			return 7;
			break;
		
		case joaat("ARM_LEFT_UPPER_SIDE"):
			return 8;
			break;
		
		case joaat("ARM_LEFT_UPPER_BICEP"):
			return 9;
			break;
		
		case joaat("ARM_LEFT_SHOULDER"):
			return 10;
			break;
		
		case joaat("ARM_LEFT_ELBOW"):
			return 11;
			break;
		
		case joaat("ARM_RIGHT_FULL_SLEEVE"):
			return 12;
			break;
		
		case joaat("ARM_RIGHT_SHORT_SLEEVE"):
			return 13;
			break;
		
		case joaat("ARM_RIGHT_LOWER_SLEEVE"):
			return 14;
			break;
		
		case joaat("ARM_RIGHT_LOWER_INNER"):
			return 15;
			break;
		
		case joaat("ARM_RIGHT_LOWER_OUTER"):
			return 16;
			break;
		
		case joaat("ARM_RIGHT_WRIST"):
			return 17;
			break;
		
		case joaat("ARM_RIGHT_UPPER_SLEEVE"):
			return 18;
			break;
		
		case joaat("ARM_RIGHT_UPPER_TRICEP"):
			return 19;
			break;
		
		case joaat("ARM_RIGHT_UPPER_SIDE"):
			return 20;
			break;
		
		case joaat("ARM_RIGHT_UPPER_BICEP"):
			return 21;
			break;
		
		case joaat("ARM_RIGHT_SHOULDER"):
			return 22;
			break;
		
		case joaat("ARM_RIGHT_ELBOW"):
			return 23;
			break;
		
		case joaat("HAND_LEFT"):
			return 24;
			break;
		
		case joaat("HAND_RIGHT"):
			return 25;
			break;
		
		case joaat("BACK_FULL"):
			return 26;
			break;
		
		case joaat("BACK_FULL_ARMS_FULL_BACK"):
			return 27;
			break;
		
		case joaat("BACK_FULL_SHORT"):
			return 28;
			break;
		
		case joaat("BACK_MID"):
			return 29;
			break;
		
		case joaat("BACK_UPPER"):
			return 30;
			break;
		
		case joaat("BACK_UPPER_LEFT"):
			return 31;
			break;
		
		case joaat("BACK_UPPER_RIGHT"):
			return 32;
			break;
		
		case joaat("BACK_LOWER"):
			return 33;
			break;
		
		case joaat("BACK_LOWER_LEFT"):
			return 34;
			break;
		
		case joaat("BACK_LOWER_MID"):
			return 35;
			break;
		
		case joaat("BACK_LOWER_RIGHT"):
			return 36;
			break;
		
		case joaat("CHEST_FULL"):
			return 37;
			break;
		
		case joaat("CHEST_STOM"):
			return 38;
			break;
		
		case joaat("CHEST_STOM_FULL"):
			return 39;
			break;
		
		case joaat("CHEST_LEFT"):
			return 40;
			break;
		
		case joaat("CHEST_UPPER_LEFT"):
			return 41;
			break;
		
		case joaat("CHEST_RIGHT"):
			return 42;
			break;
		
		case joaat("CHEST_UPPER_RIGHT"):
			return 43;
			break;
		
		case joaat("CHEST_MID"):
			return 44;
			break;
		
		case joaat("TORSO_SIDE_RIGHT"):
			return 45;
			break;
		
		case joaat("TORSO_SIDE_LEFT"):
			return 46;
			break;
		
		case joaat("STOMACH_FULL"):
			return 47;
			break;
		
		case joaat("STOMACH_UPPER"):
			return 48;
			break;
		
		case joaat("STOMACH_UPPER_LEFT"):
			return 49;
			break;
		
		case joaat("STOMACH_UPPER_RIGHT"):
			return 50;
			break;
		
		case joaat("STOMACH_LOWER"):
			return 51;
			break;
		
		case joaat("STOMACH_LOWER_LEFT"):
			return 52;
			break;
		
		case joaat("STOMACH_LOWER_RIGHT"):
			return 53;
			break;
		
		case joaat("STOMACH_LEFT"):
			return 54;
			break;
		
		case joaat("STOMACH_RIGHT"):
			return 55;
			break;
		
		case joaat("FACE"):
			return 56;
			break;
		
		case joaat("HEAD_LEFT"):
			return 57;
			break;
		
		case joaat("HEAD_RIGHT"):
			return 58;
			break;
		
		case joaat("NECK_FRONT"):
			return 59;
			break;
		
		case joaat("NECK_BACK"):
			return 60;
			break;
		
		case joaat("NECK_LEFT_FULL"):
			return 61;
			break;
		
		case joaat("NECK_LEFT_BACK"):
			return 62;
			break;
		
		case joaat("NECK_RIGHT_FULL"):
			return 63;
			break;
		
		case joaat("NECK_RIGHT_BACK"):
			return 64;
			break;
		
		case joaat("LEG_LEFT_FULL_SLEEVE"):
			return 65;
			break;
		
		case joaat("LEG_LEFT_FULL_FRONT"):
			return 66;
			break;
		
		case joaat("LEG_LEFT_FULL_BACK"):
			return 67;
			break;
		
		case joaat("LEG_LEFT_UPPER_SLEEVE"):
			return 68;
			break;
		
		case joaat("LEG_LEFT_UPPER_FRONT"):
			return 69;
			break;
		
		case joaat("LEG_LEFT_UPPER_BACK"):
			return 70;
			break;
		
		case joaat("LEG_LEFT_UPPER_OUTER"):
			return 71;
			break;
		
		case joaat("LEG_LEFT_UPPER_INNER"):
			return 72;
			break;
		
		case joaat("LEG_LEFT_LOWER_SLEEVE"):
			return 73;
			break;
		
		case joaat("LEG_LEFT_LOWER_FRONT"):
			return 74;
			break;
		
		case joaat("LEG_LEFT_LOWER_BACK"):
			return 75;
			break;
		
		case joaat("LEG_LEFT_LOWER_OUTER"):
			return 76;
			break;
		
		case joaat("LEG_LEFT_LOWER_INNER"):
			return 77;
			break;
		
		case joaat("LEG_LEFT_KNEE"):
			return 78;
			break;
		
		case joaat("LEG_LEFT_ANKLE"):
			return 79;
			break;
		
		case joaat("LEG_LEFT_CALF"):
			return 80;
			break;
		
		case joaat("LEG_RIGHT_FULL_SLEEVE"):
			return 81;
			break;
		
		case joaat("LEG_RIGHT_FULL_FRONT"):
			return 82;
			break;
		
		case joaat("LEG_RIGHT_FULL_BACK"):
			return 83;
			break;
		
		case joaat("LEG_RIGHT_UPPER_SLEEVE"):
			return 84;
			break;
		
		case joaat("LEG_RIGHT_UPPER_FRONT"):
			return 85;
			break;
		
		case joaat("LEG_RIGHT_UPPER_BACK"):
			return 86;
			break;
		
		case joaat("LEG_RIGHT_UPPER_OUTER"):
			return 87;
			break;
		
		case joaat("LEG_RIGHT_UPPER_INNER"):
			return 88;
			break;
		
		case joaat("LEG_RIGHT_LOWER_SLEEVE"):
			return 89;
			break;
		
		case joaat("LEG_RIGHT_LOWER_FRONT"):
			return 90;
			break;
		
		case joaat("LEG_RIGHT_LOWER_BACK"):
			return 91;
			break;
		
		case joaat("LEG_RIGHT_LOWER_OUTER"):
			return 92;
			break;
		
		case joaat("LEG_RIGHT_LOWER_INNER"):
			return 93;
			break;
		
		case joaat("LEG_RIGHT_KNEE"):
			return 94;
			break;
		
		case joaat("LEG_RIGHT_ANKLE"):
			return 95;
			break;
		
		case joaat("LEG_RIGHT_CALF"):
			return 96;
			break;
		
		case joaat("FOOT_LEFT"):
			return 97;
			break;
		
		case joaat("FOOT_RIGHT"):
			return 98;
			break;
	}
	switch (MISC::GET_HASH_KEY(sParam1))
	{
		case 1948764112:
			return -1;
			break;
		
		case joaat("TAT_FM_204"):
			return 12;
			break;
		
		case joaat("TAT_FM_205"):
			return 12;
			break;
		
		case joaat("TAT_FM_209"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 75;
			}
			else
			{
				return 65;
			}
			break;
		
		case joaat("TAT_FM_221"):
			return 26;
			break;
		
		case joaat("TAT_FM_219"):
			return 47;
			break;
		
		case joaat("TAT_FM_201"):
			return 1;
			break;
		
		case joaat("TAT_FM_222"):
			return 75;
			break;
		
		case joaat("TAT_FM_202"):
			return 1;
			break;
		
		case joaat("TAT_FM_210"):
			return 89;
			break;
		
		case joaat("TAT_FM_211"):
			return 73;
			break;
		
		case joaat("TAT_FM_247"):
			return 22;
			break;
		
		case joaat("TAT_FM_223"):
			return 91;
			break;
		
		case joaat("TAT_FM_213"):
			return 26;
			break;
		
		case joaat("TAT_FM_224"):
			return 73;
			break;
		
		case joaat("TAT_FM_225"):
			return 38;
			break;
		
		case joaat("TAT_FM_218"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case joaat("TAT_FM_214"):
			return 31;
			break;
		
		case joaat("TAT_FM_226"):
			return 42;
			break;
		
		case joaat("TAT_FM_220"):
			return 47;
			break;
		
		case joaat("TAT_FM_227"):
			return 75;
			break;
		
		case joaat("TAT_FM_228"):
			return 20;
			break;
		
		case joaat("TAT_FM_215"):
			return 32;
			break;
		
		case joaat("TAT_FM_229"):
			return 14;
			break;
		
		case joaat("TAT_FM_230"):
			return 52;
			break;
		
		case joaat("TAT_FM_231"):
			return 30;
			break;
		
		case joaat("TAT_FM_232"):
			return 6;
			break;
		
		case joaat("TAT_FM_233"):
			return 80;
			break;
		
		case joaat("TAT_FM_207"):
			return 13;
			break;
		
		case joaat("TAT_FM_234"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 67;
			}
			else
			{
				return 75;
			}
			break;
		
		case joaat("TAT_FM_235"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case joaat("TAT_FM_236"):
			return 73;
			break;
		
		case joaat("TAT_FM_237"):
			return 47;
			break;
		
		case joaat("TAT_FM_238"):
			return 73;
			break;
		
		case joaat("TAT_FM_203"):
			return 10;
			break;
		
		case joaat("TAT_FM_216"):
			return 26;
			break;
		
		case joaat("TAT_FM_011"):
			return 42;
			break;
		
		case joaat("TAT_FM_212"):
			return 89;
			break;
		
		case joaat("TAT_FM_239"):
			return 16;
			break;
		
		case joaat("TAT_FM_240"):
			return 91;
			break;
		
		case joaat("TAT_FM_241"):
			return 82;
			break;
		
		case joaat("TAT_FM_208"):
			return 13;
			break;
		
		case joaat("TAT_FM_017"):
			return 75;
			break;
		
		case joaat("TAT_FM_217"):
			return 26;
			break;
		
		case joaat("TAT_FM_242"):
			return 10;
			break;
		
		case joaat("TAT_FM_243"):
			return 90;
			break;
		
		case joaat("TAT_FM_244"):
			return 89;
			break;
		
		case joaat("TAT_FM_245"):
			return 38;
			break;
		
		case joaat("TAT_FM_010"):
			return 20;
			break;
		
		case joaat("TAT_FM_246"):
			return 26;
			break;
		
		case joaat("TAT_FM_206"):
			return 18;
			break;
		
		case joaat("TAT_FM_008"):
			return 56;
			break;
		
		case joaat("TAT_FM_009"):
			return 3;
			break;
		
		case joaat("TAT_FM_012"):
			return 47;
			break;
		
		case joaat("TAT_FM_013"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case joaat("TAT_FM_014"):
			return 89;
			break;
		
		case joaat("TAT_FM_015"):
			return 6;
			break;
		
		case joaat("TAT_FM_016"):
			return 33;
			break;
		
		case joaat("TAT_FM_018"):
			return 16;
			break;
		
		case joaat("TAT_FM_019"):
			return 40;
			break;
		
		case joaat("TAT_FM_020"):
			return 40;
			break;
		
		case joaat("TAT_FM_021"):
			return 40;
			break;
		
		case joaat("TAT_FM_022"):
			return 33;
			break;
		
		case joaat("TAT_FM_023"):
			return 6;
			break;
		
		case joaat("TAT_FM_024"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case joaat("TAT_FM_025"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case joaat("TAT_FM_026"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case joaat("TAT_FM_027"):
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case -1516865571:
			return 44;
			break;
		
		case 2130586285:
			return 32;
			break;
		
		case 386521802:
			return 3;
			break;
		
		case 579924440:
			return 33;
			break;
		
		case 741770527:
			return 31;
			break;
		
		case 1173403795:
			return 33;
			break;
		
		case -569087776:
			return 45;
			break;
		
		case -1344959389:
			return 89;
			break;
		
		case -211217527:
			return 64;
			break;
		
		case 86488838:
			return 53;
			break;
		
		case 705494964:
			return 52;
			break;
		
		case -137684175:
			return 30;
			break;
		
		case -979388709:
			return 41;
			break;
		
		case 324653646:
			return 43;
			break;
		
		case -518820414:
			return 52;
			break;
		
		case -1361737401:
			return 20;
			break;
		
		case 2010946386:
			return 8;
			break;
		
		case -894811920:
			return 10;
			break;
		
		case 165068612:
			return 28;
			break;
		
		case 1549427782:
			return 40;
			break;
		
		case -927613913:
			return 42;
			break;
		
		case 385144996:
			return 56;
			break;
		
		case -814626401:
			return 57;
			break;
		
		case -1248225809:
			return 52;
			break;
		
		case 1910378101:
			return 8;
			break;
		
		case -2124501642:
			return 91;
			break;
		
		case -1943747838:
			return 20;
			break;
		
		case -1570115700:
			return 75;
			break;
		
		case 931699147:
			return 62;
			break;
		
		case 1019520067:
			return 63;
			break;
		
		case joaat("TORSO_P2_4_4"):
			return 20;
			break;
		
		case joaat("TORSO_P2_4_5"):
			return 58;
			break;
		
		case joaat("TORSO_P2_4_6"):
			return 47;
			break;
		
		case -1628534963:
			return 37;
			break;
		
		case -1051898870:
			return 33;
			break;
		
		case 1334929540:
			return 80;
			break;
		
		case 1097124907:
			return 64;
			break;
		
		case 747545215:
			return 62;
			break;
		
		case 61892743:
			return 96;
			break;
		
		case 501548332:
			return 15;
			break;
		
		case -244169717:
			return 48;
			break;
		
		case 421886905:
			return 37;
			break;
		
		case -1398791504:
			return 33;
			break;
		
		case -106152761:
			return 3;
			break;
		
		case 125491300:
			return 41;
			break;
		
		case -1576950557:
			return 52;
			break;
		
		case -1815115649:
			return 53;
			break;
		
		case -1043396870:
			return 59;
			break;
		
		case -1388618285:
			return 3;
			break;
		
		case -948484638:
			return 48;
			break;
		
		case 643387405:
			return 33;
			break;
		
		case 979630098:
			return 64;
			break;
		
		case 211688583:
			return 62;
			break;
		
		case 1343791995:
			return 60;
			break;
		
		case 576309246:
			return 20;
			break;
		
		case 949154944:
			return 40;
			break;
		
		case -622511834:
			return 42;
			break;
		
		case -275651969:
			return 11;
			break;
		
		case -1256283855:
			return 15;
			break;
		
		case 955525350:
			return 40;
			break;
		
		case 1252641873:
			return 22;
			break;
		
		case -2034766264:
			return 40;
			break;
		
		case 1748021562:
			return 22;
			break;
		
		case -657146050:
			return 30;
			break;
		
		case -955835485:
			return 19;
			break;
		
		case -1269959119:
			return 40;
			break;
		
		case -1478763187:
			return 4;
			break;
		
		case -1881592504:
			return 15;
			break;
		
		case 2115996117:
			return 62;
			break;
		
		case 1824417551:
			return 45;
			break;
		
		case 1502068898:
			return 24;
			break;
		
		case -2019287742:
			return 22;
			break;
		
		case -1780827729:
			return 80;
			break;
		
		case -1966497207:
			return 25;
			break;
		
		case -2126999769:
			return 30;
			break;
		
		case 2014772448:
			return 30;
			break;
		
		case 1705760778:
			return 44;
			break;
		
		case 497993745:
			return 15;
			break;
		
		case 1142887665:
			return 9;
			break;
		
		case 22777707:
			return 3;
			break;
		
		case 799173624:
			return 16;
			break;
		
		case -410297401:
			return 17;
			break;
		
		case 214410819:
			return 75;
			break;
		
		case -2098342992:
			return 23;
			break;
		
		case -1280920283:
			return 64;
			break;
		
		case -1501455653:
			return 16;
			break;
		
		case 2117454408:
			return 25;
			break;
		
		case -1945704982:
			return 32;
			break;
		
		case -1581870771:
			return 31;
			break;
		
		case -1350521631:
			return 10;
			break;
		
		case -954508266:
			return 5;
			break;
		
		case -716244867:
			return 4;
			break;
		
		case 185361399:
			return 52;
			break;
		
		case -1208107213:
			return 35;
			break;
		
		case -812421538:
			return 30;
			break;
		
		case -566096965:
			return 32;
			break;
		
		case -316757644:
			return 38;
			break;
		
		case -103496992:
			return 24;
			break;
		
		case 391708136:
			return 52;
			break;
		
		case 616667309:
			return 20;
			break;
		
		case 870102755:
			return 10;
			break;
		
		case 1093030262:
			return 92;
			break;
		
		case 1378218869:
			return 0;
			break;
		
		case 332555747:
			return 80;
			break;
		
		case 1077526193:
			return 34;
			break;
		
		case 1332632858:
			return 91;
			break;
		
		case 1556379590:
			return 10;
			break;
		
		case 1780093553:
			return 22;
			break;
		
		case 2001284303:
			return 14;
			break;
		
		case -2059941716:
			return 30;
			break;
		
		case -1759875983:
			return 40;
			break;
		
		case -1521153818:
			return 24;
			break;
	}
	if (iParam2 == 0 && MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return -1;
	}
	return -1;
}















void func_245()//Position - 0x2FE1C
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	int iVar16;
	int iVar17;
	char* sVar18;
	char* sVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	struct<4> Var23;
	float fVar27;
	struct<4> Var28;
	char cVar32[16];
	int iVar36;
	struct<6> Var37;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = 0;
	iVar1 = 7;
	iVar2 = -1;
	func_246(Local_92.f_103.f_3, &iVar1, &iVar2, 0, 0);
	if (iVar1 == 2 || iVar1 == 3)
	{
		iVar16 = GlobalFunc_303(PLAYER::PLAYER_PED_ID());
		if (GlobalFunc_5123(&Var3, Local_92.f_443, iVar16, PLAYER::PLAYER_PED_ID(), -1))
		{
			iVar17 = func_230(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var3, Var3.f_8);
			if ((iVar17 == 5 || iVar17 == 9) || iVar17 == 3)
			{
				iVar0 = 1;
			}
			if ((iVar17 == 17 || iVar17 == 21) || iVar17 == 15)
			{
				iVar0 = 2;
			}
		}
	}
	if (iVar0 != iLocal_768)
	{
		if (!STREAMING::DOES_ANIM_DICT_EXIST(sLocal_721))
		{
			return;
		}
		STREAMING::REQUEST_ANIM_DICT(sLocal_721);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_721))
		{
			return;
		}
		sVar18 = "";
		sVar19 = "";
		switch (iVar0)
		{
			case 0:
				switch (iLocal_768)
				{
					case 1:
						sVar18 = "LEFT_ARM_OUTRO";
						break;
					
					case 2:
						sVar18 = "RIGHT_ARM_OUTRO";
						break;
				}
				sVar19 = "";
				break;
			
			case 1:
				switch (iLocal_768)
				{
					case 0:
						sVar18 = "LEFT_ARM_INTRO";
						break;
					
					case 2:
						sVar18 = "LEFT_ARM_INTRO";
						break;
				}
				sVar19 = "LEFT_ARM_BASE";
				break;
			
			case 2:
				switch (iLocal_768)
				{
					case 0:
						sVar18 = "RIGHT_ARM_INTRO";
						break;
					
					case 1:
						sVar18 = "RIGHT_ARM_INTRO";
						break;
				}
				sVar19 = "RIGHT_ARM_BASE";
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar18))
		{
			if (!MISC::ARE_STRINGS_EQUAL(&Local_769, sVar18))
			{
				fVar20 = 4f;
				fVar21 = -2f;
				TASK::TASK_PLAY_ANIM(Local_607.f_2, sLocal_721, sVar18, fVar20, fVar21, -1, 2, 0, 0, 0, 0);
				StringCopy(&Local_769, sVar18, 16);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_607.f_2, sLocal_721, sVar18, 3))
			{
				fVar22 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_607.f_2, sLocal_721, sVar18);
				if (fVar22 >= 0.95f)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar19))
					{
						TASK::TASK_PLAY_ANIM(Local_607.f_2, sLocal_721, sVar19, 8f, -8f, -1, 1, 0, 0, 0, 0);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_607.f_2);
						STREAMING::REMOVE_ANIM_DICT(sLocal_721);
					}
					StringCopy(&Local_769, sVar19, 16);
					iLocal_768 = iVar0;
				}
			}
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_769))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_607.f_2, sLocal_721, &Local_769, 3))
		{
			Var23 = { Local_769 };
			fVar27 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_607.f_2, sLocal_721, &Var23);
			iVar36 = (HUD::GET_LENGTH_OF_LITERAL_STRING(&Var23) - HUD::GET_LENGTH_OF_LITERAL_STRING("_INTRO"));
			StringCopy(&cVar32, HUD::_GET_TEXT_SUBSTRING(&Var23, iVar36, HUD::GET_LENGTH_OF_LITERAL_STRING(&Var23)), 16);
			if (MISC::ARE_STRINGS_EQUAL(&cVar32, "_INTRO"))
			{
				StringCopy(&Var28, HUD::_GET_TEXT_SUBSTRING(&Var23, 0, iVar36), 16);
				if (fVar27 >= 0.95f && iLocal_768 == 0)
				{
					if (iVar1 == 2 || MISC::ARE_STRINGS_EQUAL(&Var28, "LEFT_ARM"))
					{
						iLocal_768 = 1;
					}
					else if (iVar1 == 3 || MISC::ARE_STRINGS_EQUAL(&Var28, "RIGHT_ARM"))
					{
						iLocal_768 = 2;
					}
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(&cVar32, "_OUTRO"))
			{
				StringCopy(&Var28, HUD::_GET_TEXT_SUBSTRING(&Var23, 0, iVar36), 16);
				if (fVar27 >= 0.95f && iLocal_768 != 0)
				{
					iLocal_768 = 0;
				}
			}
			else
			{
				iVar36 = (HUD::GET_LENGTH_OF_LITERAL_STRING(&Var23) - HUD::GET_LENGTH_OF_LITERAL_STRING("_BASE"));
				StringCopy(&cVar32, HUD::_GET_TEXT_SUBSTRING(&Var23, iVar36, HUD::GET_LENGTH_OF_LITERAL_STRING(&Var23)), 16);
				if (!MISC::ARE_STRINGS_EQUAL(&cVar32, "_BASE"))
				{
					iVar36 = (HUD::GET_LENGTH_OF_LITERAL_STRING(&Var23) - HUD::GET_LENGTH_OF_LITERAL_STRING("_IDLE_A"));
					StringCopy(&cVar32, HUD::_GET_TEXT_SUBSTRING(&Var23, iVar36, HUD::GET_LENGTH_OF_LITERAL_STRING(&Var23)), 16);
				}
				StringCopy(&Var28, HUD::_GET_TEXT_SUBSTRING(&Var23, 0, iVar36), 16);
				if (fVar27 >= 0.95f)
				{
					MemCopy(&Var37, {Var28}, 6);
					if (!MISC::ARE_STRINGS_EQUAL(&cVar32, "_BASE"))
					{
						StringConCat(&Var37, "_BASE", 24);
					}
					else
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								StringConCat(&Var37, "_IDLE_A", 24);
								break;
							
							case 1:
								StringConCat(&Var37, "_IDLE_B", 24);
								break;
							
							case 2:
								StringConCat(&Var37, "_IDLE_C", 24);
								break;
							}
					}
					MemCopy(&Local_769, {Var37}, 4);
					TASK::TASK_PLAY_ANIM(Local_607.f_2, sLocal_721, &Var37, 8f, -8f, -1, 1, 0, 0, 0, 0);
				}
			}
		}
	}
}

int func_246(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x30252
{
	*iParam1 = 7;
	*iParam2 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			*iParam2 = 0;
			return 1;
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return iParam4;
			}
			*iParam1 = 0;
			*iParam2 = 1;
			return 1;
			break;
		
		case 2:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return iParam4;
			}
			*iParam1 = 0;
			*iParam2 = 2;
			return 1;
			break;
		
		case 3:
			*iParam1 = 1;
			return 1;
			break;
		
		case 4:
			*iParam1 = 2;
			return 1;
			break;
		
		case 5:
			*iParam1 = 3;
			return 1;
			break;
		
		case 6:
			*iParam1 = 4;
			return 1;
			break;
		
		case 7:
			*iParam1 = 5;
			return 1;
			break;
	}
	if (!bParam3)
	{
	}
	return 0;
}

void func_247()//Position - 0x3031E
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && Local_92.f_509)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (iVar0 != 0)
			{
				PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), iVar0, Local_92.f_444.f_13[iVar0], Local_92.f_444[iVar0]);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (Local_92.f_444.f_39[iVar0] != -1)
			{
				PED::SET_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID(), iVar0, Local_92.f_444.f_39[iVar0], Local_92.f_444.f_49[iVar0]);
			}
			iVar0++;
		}
	}
}

void func_248()//Position - 0x303B7
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	var uVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	struct<13> Var13;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	struct<3> Var30;
	float fVar33;
	
	bVar0 = ((((!HUD::IS_PAUSE_MENU_ACTIVE() && Local_92.f_103.f_31 != 6) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_90014.f_1318);
	if (!bVar0)
	{
		return;
	}
	Var1 = { -0.1f, 1.3129f, 0.5072f };
	iVar4 = 7;
	iVar5 = -1;
	func_246(Local_92.f_103.f_3, &iVar4, &iVar5, 0, 0);
	switch (iVar4)
	{
		case 4:
			Var1 = { Var1 + Vector(-0.8058f, 0f, 0f) };
			break;
		
		case 5:
			Var1 = { Var1 + Vector(-0.8058f, 0f, 0f) };
			break;
	}
	Var6 = { Local_703 };
	switch (iVar4)
	{
		case 4:
			Var6 = { Var6 + Vector(-0.8058f, 0f, 0f) };
			break;
		
		case 5:
			Var6 = { Var6 + Vector(-0.8058f, 0f, 0f) };
			break;
	}
	if (!CAM::DOES_CAM_EXIST(Local_92.f_38[0 /*12*/]))
	{
		Local_92.f_38[0 /*12*/] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	}
	if (!CAM::IS_CAM_ACTIVE(Local_92.f_38[0 /*12*/]))
	{
		Local_92.f_38[0 /*12*/].f_7 = 52f;
		fLocal_709 = 0f;
		fLocal_710 = 0f;
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Local_92.f_38[0 /*12*/].f_4.f_2 = (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - 0f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_607.f_2))
		{
			if (!PED::IS_PED_INJURED(Local_607.f_2))
			{
				Local_92.f_38[0 /*12*/].f_4.f_2 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 0f);
			}
		}
		while (Local_92.f_38[0 /*12*/].f_4.f_2 < -180f)
		{
			Local_92.f_38[0 /*12*/].f_4.f_2 = (Local_92.f_38[0 /*12*/].f_4.f_2 + 360f);
		}
		while (Local_92.f_38[0 /*12*/].f_4.f_2 > 180f)
		{
			Local_92.f_38[0 /*12*/].f_4.f_2 = (Local_92.f_38[0 /*12*/].f_4.f_2 - 360f);
		}
		fLocal_713 = Local_92.f_38[0 /*12*/].f_4.f_2;
		Local_92.f_38[0 /*12*/].f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_700, Local_92.f_38[0 /*12*/].f_4.f_2, Var1) };
		Local_92.f_38[0 /*12*/].f_11 = 0;
		Local_703 = { Local_700 + Vector(0.25f, 0f, 0f) };
		Local_706 = { Local_703 };
	}
	else
	{
		Local_706 = { Local_706 + Var6 - Local_706 * Vector(0.25f, 0.25f, 0.25f) };
	}
	if (fLocal_710 == 0f || fLocal_710 == 1f)
	{
		GlobalFunc_612(&uVar9, &uVar10, &iVar11, &iVar12, 0);
		if ((iVar11 < 32 && iVar11 > -32) && (iVar12 < 32 && iVar12 > -32))
		{
			if (iVar11 < 32 && iVar11 > -32)
			{
				iVar11 = 0;
			}
			else if (iVar11 < 0)
			{
				iVar11 = (iVar11 - 32);
			}
			else
			{
				iVar11 += 32;
			}
			if (iVar12 < 32 && iVar12 > -32)
			{
				iVar12 = 0;
			}
			else if (iVar12 < 0)
			{
				iVar12 = (iVar12 - 32);
			}
			else
			{
				iVar12 += 32;
			}
		}
		iVar11 = (iVar11 * -1);
		if (PAD::IS_LOOK_INVERTED())
		{
			iVar12 = (iVar12 * -1);
		}
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (GlobalFunc_1393(1, -1))
			{
				Local_92.f_38[0 /*12*/].f_4.f_2 = (Local_92.f_38[0 /*12*/].f_4.f_2 - (Global_2543379 * 400f));
			}
		}
		else
		{
			Local_92.f_38[0 /*12*/].f_4.f_2 = (Local_92.f_38[0 /*12*/].f_4.f_2 + (IntToFloat(iVar11) * 0.05f));
		}
	}
	while (Local_92.f_38[0 /*12*/].f_4.f_2 < -180f)
	{
		Local_92.f_38[0 /*12*/].f_4.f_2 = (Local_92.f_38[0 /*12*/].f_4.f_2 + 360f);
	}
	while (Local_92.f_38[0 /*12*/].f_4.f_2 > 180f)
	{
		Local_92.f_38[0 /*12*/].f_4.f_2 = (Local_92.f_38[0 /*12*/].f_4.f_2 - 360f);
	}
	while (fLocal_711 < -180f)
	{
		fLocal_711 = (fLocal_711 + 360f);
	}
	while (fLocal_711 > 180f)
	{
		fLocal_711 = (fLocal_711 - 360f);
	}
	iVar26 = GlobalFunc_303(PLAYER::PLAYER_PED_ID());
	if (((iVar4 == 0 || iVar4 == 2) || iVar4 == 3) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_5123(&Var13, Local_92.f_443, iVar26, PLAYER::PLAYER_PED_ID(), -1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!iLocal_714)
				{
					if (Var13.f_12 == 1)
					{
						if (fLocal_710 == 0f)
						{
							fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
							if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								fLocal_712 = (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - 190f);
							}
							else if (ENTITY::DOES_ENTITY_EXIST(Local_607.f_2))
							{
								if (!PED::IS_PED_INJURED(Local_607.f_2))
								{
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 190f);
								}
							}
						}
						fLocal_710 = (fLocal_710 + 0.05f);
						if (fLocal_710 >= 1f)
						{
							fLocal_710 = 1f;
							iLocal_714 = 1;
						}
						else
						{
							Local_92.f_38[0 /*12*/].f_4.f_2 = GlobalFunc_5180(fLocal_711, fLocal_712, fLocal_710);
						}
					}
					else if (fLocal_710 != 0f && fLocal_710 != 1f)
					{
						fLocal_710 = 1f;
						iLocal_714 = 1;
					}
				}
				else if (Var13.f_12 != 1)
				{
					if (fLocal_710 == 1f)
					{
						fLocal_711 = fLocal_713;
						fLocal_712 = Local_92.f_38[0 /*12*/].f_4.f_2;
					}
					fLocal_710 = (fLocal_710 - 0.05f);
					if (fLocal_710 <= 0f)
					{
						fLocal_710 = 0f;
						iLocal_714 = 0;
					}
					else
					{
						Local_92.f_38[0 /*12*/].f_4.f_2 = GlobalFunc_5180(fLocal_711, fLocal_712, fLocal_710);
					}
				}
				else if (fLocal_710 != 0f && fLocal_710 != 1f)
				{
					fLocal_710 = 0f;
					iLocal_714 = 0;
				}
			}
			else
			{
				if (iVar26 == 4)
				{
					if (Var13.f_12 == 4)
					{
						Var13.f_12 = 2;
					}
					if (Var13.f_12 == 6)
					{
						Var13.f_12 = 3;
					}
					iVar27 = Var13.f_12;
					switch (MISC::GET_HASH_KEY(&Var13))
					{
						case 1334929540:
							iVar27 = 1;
							break;
						
						case joaat("TAT_FM_017"):
							iVar27 = 1;
							break;
						
						case joaat("TAT_FM_222"):
							iVar27 = 1;
							break;
						
						case joaat("TAT_FM_227"):
							iVar27 = 1;
							break;
						
						case joaat("TAT_FM_234"):
							iVar27 = 1;
							break;
						
						case joaat("TAT_FM_236"):
							iVar27 = 1;
							break;
						
						case joaat("TAT_FM_238"):
							iVar27 = 1;
							break;
						
						case -1780827729:
							iVar27 = 1;
							break;
						
						case 214410819:
							iVar27 = 1;
							break;
						
						case 332555747:
							iVar27 = 1;
							break;
						
						case 61892743:
							iVar27 = 1;
							break;
						
						case joaat("TAT_FM_014"):
							iVar27 = 1;
							break;
						
						case joaat("TAT_FM_223"):
							iVar27 = 1;
							break;
						
						case joaat("TAT_FM_240"):
							iVar27 = 1;
							break;
						
						case joaat("TAT_FM_241"):
							iVar27 = 0;
							break;
						
						case joaat("TAT_FM_243"):
							iVar27 = 2;
							break;
						
						case joaat("TAT_FM_244"):
							iVar27 = 1;
							break;
						
						case 1093030262:
							iVar27 = 3;
							break;
						
						case 1332632858:
							iVar27 = 1;
							break;
						
						case -569087776:
							iVar27 = 3;
							break;
						
						case joaat("TAT_FM_235"):
							iVar27 = 0;
							break;
						
						case 1824417551:
							iVar27 = 3;
							break;
						
						case 391708136:
							iVar27 = 2;
							break;
						
						case 747545215:
							iVar27 = 2;
							break;
						
						case 1097124907:
							iVar27 = 3;
							break;
						
						case -1478763187:
							iVar27 = 1;
							break;
						
						case -1350521631:
							iVar27 = 2;
							break;
						
						case -716244867:
							iVar27 = 1;
							break;
						
						case 22777707:
							iVar27 = 0;
							break;
						
						case 1142887665:
							iVar27 = 0;
							break;
						
						case joaat("TAT_FM_229"):
							iVar27 = 3;
							break;
						
						case joaat("TAT_FM_247"):
							iVar27 = 3;
							break;
						
						case -955835485:
							iVar27 = 1;
							break;
						
						case -1881592504:
							iVar27 = 0;
							break;
						
						case 497993745:
							iVar27 = 0;
							break;
						
						case 799173624:
							iVar27 = 1;
							break;
						
						case -2098342992:
							iVar27 = 1;
							break;
					}
					if (iVar27 != Var13.f_12)
					{
						Var13.f_12 = iVar27;
					}
				}
				else if (iVar26 == 3)
				{
					if (Var13.f_12 == 4)
					{
						Var13.f_12 = 2;
					}
					if (Var13.f_12 == 6)
					{
						Var13.f_12 = 3;
					}
					iVar28 = Var13.f_12;
					switch (MISC::GET_HASH_KEY(&Var13))
					{
						case -1570115700:
							iVar28 = 1;
							break;
						
						case joaat("TAT_FM_017"):
							iVar28 = 1;
							break;
						
						case joaat("TAT_FM_209"):
							iVar28 = 1;
							break;
						
						case joaat("TAT_FM_222"):
							iVar28 = 1;
							break;
						
						case joaat("TAT_FM_224"):
							iVar28 = 1;
							break;
						
						case joaat("TAT_FM_227"):
							iVar28 = 1;
							break;
						
						case joaat("TAT_FM_233"):
							iVar28 = 1;
							break;
						
						case joaat("TAT_FM_234"):
							iVar28 = 1;
							break;
						
						case joaat("TAT_FM_236"):
							iVar28 = 1;
							break;
						
						case joaat("TAT_FM_238"):
							iVar28 = 1;
							break;
						
						case -1780827729:
							iVar28 = 1;
							break;
						
						case 214410819:
							iVar28 = 1;
							break;
						
						case 332555747:
							iVar28 = 1;
							break;
						
						case 1824417551:
							iVar28 = 3;
							break;
						
						case 979630098:
							iVar28 = 3;
							break;
						
						case 211688583:
							iVar28 = 2;
							break;
						
						case 1343791995:
							iVar28 = 1;
							break;
						
						case -2124501642:
							iVar28 = 1;
							break;
						
						case joaat("TAT_FM_014"):
							iVar28 = 1;
							break;
						
						case joaat("TAT_FM_223"):
							iVar28 = 1;
							break;
						
						case joaat("TAT_FM_240"):
							iVar28 = 1;
							break;
						
						case joaat("TAT_FM_244"):
							iVar28 = 1;
							break;
						
						case 1093030262:
							iVar28 = 3;
							break;
						
						case 1332632858:
							iVar28 = 1;
							break;
						
						case -1388618285:
							iVar28 = 0;
							break;
						
						case -275651969:
							iVar28 = 1;
							break;
						
						case -1478763187:
							iVar28 = 1;
							break;
						
						case 1142887665:
							iVar28 = 0;
							break;
						
						case 22777707:
							iVar28 = 0;
							break;
						
						case -1350521631:
							iVar28 = 2;
							break;
						
						case -716244867:
							iVar28 = 1;
							break;
						
						case joaat("TAT_FM_229"):
							iVar28 = 3;
							break;
						
						case joaat("TAT_FM_247"):
							iVar28 = 3;
							break;
						
						case 799173624:
							iVar28 = 1;
							break;
						
						case -1256283855:
							iVar28 = 0;
							break;
					}
					if (iVar28 != Var13.f_12)
					{
						Var13.f_12 = iVar28;
					}
				}
				if (fLocal_710 == 0f)
				{
					iLocal_717 = 0;
					iLocal_716 = Var13.f_12;
				}
				else if (fLocal_710 == 1f)
				{
				}
				else if (iLocal_715 != Var13.f_12)
				{
					iLocal_716 = Var13.f_12;
				}
				else if (!iLocal_717)
				{
					iLocal_715 = iLocal_716;
					fLocal_710 = 0f;
					iLocal_717 = 1;
				}
				switch (iLocal_715)
				{
					case 0:
						switch (Var13.f_12)
						{
							case 0:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 0f);
								}
								if (fLocal_710 != 0f || iLocal_717)
								{
									fLocal_710 = (fLocal_710 + 0.05f);
									if (fLocal_710 >= 1f)
									{
										fLocal_710 = 0f;
										iLocal_715 = Var13.f_12;
									}
									else
									{
										Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
									}
								}
								break;
							
							case 1:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 190f);
								}
								fLocal_710 = (fLocal_710 + 0.05f);
								if (fLocal_710 >= 1f)
								{
									fLocal_710 = 1f;
									iLocal_715 = Var13.f_12;
								}
								else
								{
									Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
								}
								break;
							
							case 2:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 310f);
								}
								fLocal_710 = (fLocal_710 + 0.05f);
								if (fLocal_710 >= 1f)
								{
									fLocal_710 = 1f;
									iLocal_715 = Var13.f_12;
								}
								else
								{
									Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
								}
								break;
							
							case 3:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 70f);
								}
								fLocal_710 = (fLocal_710 + 0.05f);
								if (fLocal_710 >= 1f)
								{
									fLocal_710 = 1f;
									iLocal_715 = Var13.f_12;
								}
								else
								{
									Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
								}
								break;
							
							default:
								break;
						}
						break;
					
					case 1:
						switch (Var13.f_12)
						{
							case 0:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 0f);
								}
								fLocal_710 = (fLocal_710 + 0.05f);
								if (fLocal_710 >= 1f)
								{
									fLocal_710 = 1f;
									iLocal_715 = Var13.f_12;
								}
								else
								{
									Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
								}
								break;
							
							case 1:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 190f);
								}
								if (fLocal_710 != 0f || iLocal_717)
								{
									fLocal_710 = (fLocal_710 + 0.05f);
									if (fLocal_710 >= 1f)
									{
										fLocal_710 = 0f;
										iLocal_715 = Var13.f_12;
									}
									else
									{
										Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
									}
								}
								break;
							
							case 2:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 310f);
								}
								fLocal_710 = (fLocal_710 + 0.05f);
								if (fLocal_710 >= 1f)
								{
									fLocal_710 = 1f;
									iLocal_715 = Var13.f_12;
								}
								else
								{
									Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
								}
								break;
							
							case 3:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 70f);
								}
								fLocal_710 = (fLocal_710 + 0.05f);
								if (fLocal_710 >= 1f)
								{
									fLocal_710 = 1f;
									iLocal_715 = Var13.f_12;
								}
								else
								{
									Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
								}
								break;
							
							default:
								break;
						}
						break;
					
					case 2:
						switch (Var13.f_12)
						{
							case 0:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 0f);
								}
								fLocal_710 = (fLocal_710 + 0.05f);
								if (fLocal_710 >= 1f)
								{
									fLocal_710 = 1f;
									iLocal_715 = Var13.f_12;
								}
								else
								{
									Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
								}
								break;
							
							case 1:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 190f);
								}
								fLocal_710 = (fLocal_710 + 0.05f);
								if (fLocal_710 >= 1f)
								{
									fLocal_710 = 1f;
									iLocal_715 = Var13.f_12;
								}
								else
								{
									Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
								}
								break;
							
							case 2:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 310f);
								}
								if (fLocal_710 != 0f || iLocal_717)
								{
									fLocal_710 = (fLocal_710 + 0.05f);
									if (fLocal_710 >= 1f)
									{
										fLocal_710 = 0f;
										iLocal_715 = Var13.f_12;
									}
									else
									{
										Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
									}
								}
								break;
							
							case 3:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 70f);
								}
								fLocal_710 = (fLocal_710 + 0.05f);
								if (fLocal_710 >= 1f)
								{
									fLocal_710 = 1f;
									iLocal_715 = Var13.f_12;
								}
								else
								{
									Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
								}
								break;
							
							default:
								break;
						}
						break;
					
					case 3:
						switch (Var13.f_12)
						{
							case 0:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 0f);
								}
								fLocal_710 = (fLocal_710 + 0.05f);
								if (fLocal_710 >= 1f)
								{
									fLocal_710 = 1f;
									iLocal_715 = Var13.f_12;
								}
								else
								{
									Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
								}
								break;
							
							case 1:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 190f);
								}
								fLocal_710 = (fLocal_710 + 0.05f);
								if (fLocal_710 >= 1f)
								{
									fLocal_710 = 1f;
									iLocal_715 = Var13.f_12;
								}
								else
								{
									Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
								}
								break;
							
							case 2:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 310f);
								}
								fLocal_710 = (fLocal_710 + 0.05f);
								if (fLocal_710 >= 1f)
								{
									fLocal_710 = 1f;
									iLocal_715 = Var13.f_12;
								}
								else
								{
									Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
								}
								break;
							
							case 3:
								if (fLocal_710 == 0f)
								{
									fLocal_711 = Local_92.f_38[0 /*12*/].f_4.f_2;
									fLocal_712 = (ENTITY::GET_ENTITY_HEADING(Local_607.f_2) - 70f);
								}
								if (fLocal_710 != 0f || iLocal_717)
								{
									fLocal_710 = (fLocal_710 + 0.05f);
									if (fLocal_710 >= 1f)
									{
										fLocal_710 = 0f;
										iLocal_715 = Var13.f_12;
									}
									else
									{
										Local_92.f_38[0 /*12*/].f_4.f_2 = func_249(fLocal_711, fLocal_712, fLocal_710);
									}
								}
								break;
							
							default:
								break;
						}
						break;
					
					default:
						if (iLocal_715 == -1)
						{
							switch (Var13.f_12)
							{
								case 0:
									iLocal_715 = 1;
									break;
								
								case 1:
									iLocal_715 = 0;
									break;
								
								case 2:
									iLocal_715 = 3;
									break;
								
								case 3:
									iLocal_715 = 2;
									break;
								
								default:
									break;
							}
						}
						else
						{
							switch (Var13.f_12)
							{
								case 0:
									break;
								
								case 1:
									break;
								
								case 2:
									break;
								
								case 3:
									break;
								
								default:
									break;
								}
						}
						break;
					}
				}
		}
	}
	else
	{
		iLocal_717 = 0;
		fLocal_710 = 0f;
		iLocal_714 = 0;
		iLocal_715 = 0;
		iLocal_716 = Var13.f_12;
	}
	fVar29 = 34f;
	switch (iVar4)
	{
		case 4:
			fVar29 = 38f;
			break;
		
		case 5:
			fVar29 = 38f;
			break;
		
		case 3:
			fVar29 = 36f;
			break;
		
		case 2:
			fVar29 = 36f;
			break;
		
		case 1:
			fVar29 = 30f;
			break;
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2, iLocal_766))
		{
			iLocal_767 = !iLocal_767;
		}
	}
	else
	{
		iLocal_767 = 0;
	}
	if (PAD::IS_CONTROL_PRESSED(2, iLocal_766) || iLocal_767)
	{
		if (fLocal_709 < 1f)
		{
			fLocal_709 = (fLocal_709 + 0.05f);
		}
		if (fLocal_709 > 1f)
		{
			fLocal_709 = 1f;
		}
	}
	else
	{
		if (fLocal_709 > 0f)
		{
			fLocal_709 = (fLocal_709 - 0.05f);
		}
		if (fLocal_709 < 0f)
		{
			fLocal_709 = 0f;
		}
	}
	Var30 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_700, Local_92.f_38[0 /*12*/].f_4.f_2, Var1) };
	Local_92.f_38[0 /*12*/].f_1 = Var30.x;
	Local_92.f_38[0 /*12*/].f_1.f_1 = Var30.f_1;
	Local_92.f_38[0 /*12*/].f_1.f_2 = (Local_92.f_38[0 /*12*/].f_1.f_2 + ((Var30.f_2 - Local_92.f_38[0 /*12*/].f_1.f_2) * 0.25f));
	if (fLocal_709 != 0f)
	{
		if (iVar4 == 1)
		{
			fVar33 = 0.07f;
			Local_92.f_38[0 /*12*/].f_1.f_2 = GlobalFunc_5180(Local_92.f_38[0 /*12*/].f_1.f_2, (Local_92.f_38[0 /*12*/].f_1.f_2 + fVar33), fLocal_709);
			Local_706.f_2 = GlobalFunc_5180(Local_706.f_2, (Local_706.f_2 + fVar33), fLocal_709);
		}
		Local_92.f_38[0 /*12*/].f_7 = GlobalFunc_5180(52f, fVar29, fLocal_709);
	}
	CAM::SET_CAM_COORD(Local_92.f_38[0 /*12*/], Local_92.f_38[0 /*12*/].f_1);
	CAM::SET_CAM_FOV(Local_92.f_38[0 /*12*/], Local_92.f_38[0 /*12*/].f_7);
	CAM::POINT_CAM_AT_COORD(Local_92.f_38[0 /*12*/], Local_706);
	CAM::SET_CAM_NEAR_CLIP(Local_92.f_38[0 /*12*/], 0.7f);
	if (!Local_92.f_38[0 /*12*/].f_11)
	{
		CAM::SET_CAM_ACTIVE(Local_92.f_38[0 /*12*/], 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		Local_92.f_38[0 /*12*/].f_11 = 1;
		GlobalFunc_702(1, 1, 1);
	}
}

float func_249(float fParam0, float fParam1, float fParam2)//Position - 0x31774
{
	if (fParam0 > 360f)
	{
		fParam0 = (fParam0 - 360f);
	}
	else if (fParam0 < 0f)
	{
		fParam0 = (fParam0 + 360f);
	}
	if (fParam1 > (fParam0 + 180f))
	{
		fParam1 = (fParam1 - 360f);
	}
	else if (fParam1 < (fParam0 - 180f))
	{
		fParam1 = (fParam1 + 360f);
	}
	return GlobalFunc_5180(fParam0, fParam1, fParam2);
}






void func_255(int iParam0)//Position - 0x319EF
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	var uVar12;
	struct<9> Var16;
	int iVar29;
	float fVar30;
	float fVar31;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(Local_607.f_2) && !PED::IS_PED_INJURED(Local_607.f_2))
	{
		iVar0 = Local_607.f_2;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !PED::IS_PED_INJURED(iVar0))
	{
		if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
		{
			if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
			{
				PED::SET_PED_RESET_FLAG(iVar0, 302, 1);
			}
		}
	}
	bVar1 = false;
	if (bLocal_739)
	{
		bVar1 = true;
		bLocal_739 = false;
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iLocal_766 = 209;
	}
	else
	{
		iLocal_766 = 207;
	}
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		iLocal_698 = 1;
	}
	GlobalFunc_5799(&(Local_92.f_388), 300);
	GlobalFunc_612(&iVar2, &iVar3, &uVar4, &uVar5, 0);
	if (Local_92.f_103.f_10 != 0)
	{
		if (SYSTEM::TIMERA() > 200 || (((iVar3 > -64 && iVar3 < 64) && iVar2 > -64) && iVar2 < 64))
		{
			Local_92.f_103.f_10 = 0;
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
		}
	}
	bVar6 = PAD::IS_CONTROL_JUST_PRESSED(2, 201);
	bVar7 = (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202));
	if (bVar6 || bVar7)
	{
		Local_92.f_388.f_8 = 0;
		Local_92.f_388.f_9 = 0;
	}
	bVar8 = ((iVar3 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2, 188)) || (PAD::IS_CONTROL_PRESSED(2, 188) && Local_92.f_388.f_8));
	bVar9 = ((iVar3 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2, 187)) || (PAD::IS_CONTROL_PRESSED(2, 187) && Local_92.f_388.f_9));
	bVar10 = (iVar3 < -64 || iVar3 > 64);
	bVar11 = ((((((!HUD::IS_PAUSE_MENU_ACTIVE() && Local_92.f_103.f_31 != 1) && Local_92.f_103.f_31 != 6) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_90014.f_1318) && !bVar1);
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		bVar6 = false;
		bVar7 = false;
		bVar8 = false;
		bVar9 = false;
		bVar10 = false;
	}
	func_438();
	if (bVar11 || Local_92.f_103.f_25)
	{
		if ((MISC::IS_PC_VERSION() && bVar11) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			GlobalFunc_6900(0, 0, 0, 1);
		}
		switch (Local_92.f_103.f_5)
		{
			case 0:
				if (MISC::IS_PC_VERSION())
				{
					if (GlobalFunc_1391())
					{
						if (Global_2543381 == Local_92.f_103.f_3)
						{
							bVar6 = true;
						}
						else
						{
							Local_92.f_103.f_3 = Global_2543381;
							GlobalFunc_1355(Local_92.f_103.f_3, 1, 1);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
							Local_92.f_388.f_8 = 0;
							Local_92.f_388.f_9 = 0;
						}
					}
					if (GlobalFunc_2041())
					{
						bVar7 = true;
						Local_92.f_388.f_8 = 0;
						Local_92.f_388.f_9 = 0;
					}
					if (GlobalFunc_2495(Local_92.f_388.f_8, 0, 0))
					{
						bVar8 = true;
					}
					if (GlobalFunc_2494(Local_92.f_388.f_9, 0, 0))
					{
						bVar9 = true;
					}
				}
				if (bVar8)
				{
					if (func_429(&(Local_92.f_103.f_3), 1))
					{
						GlobalFunc_1355(Local_92.f_103.f_3, 1, 1);
					}
					if (bVar10)
					{
						SYSTEM::SETTIMERA(0);
						Local_92.f_103.f_10 = 1;
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
					Local_92.f_388.f_8 = 0;
					Local_92.f_388.f_4 = 0;
					Local_92.f_388.f_20 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Local_92.f_388.f_24 = NETWORK::GET_NETWORK_TIME();
					}
				}
				else if (bVar9)
				{
					if (func_427(&(Local_92.f_103.f_3), 1))
					{
						GlobalFunc_1355(Local_92.f_103.f_3, 1, 1);
					}
					if (bVar10)
					{
						SYSTEM::SETTIMERA(0);
						Local_92.f_103.f_10 = 1;
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
					Local_92.f_388.f_9 = 0;
					Local_92.f_388.f_4 = 0;
					Local_92.f_388.f_20 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Local_92.f_388.f_24 = NETWORK::GET_NETWORK_TIME();
					}
				}
				else if (bVar6)
				{
					if (Local_92.f_103.f_3 != -1)
					{
						Local_92.f_103.f_5++;
						StringCopy(&(Local_92.f_103.f_11), "", 16);
						iLocal_748 = 0;
						bVar1 = true;
						*iParam0 = 1;
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
				}
				else if (bVar7)
				{
					Local_92.f_103.f_31 = 6;
					iLocal_767 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
				}
				break;
			
			case 1:
				if (!func_425(Local_92.f_443) && func_422(Local_92.f_443, ""))
				{
					func_415(Local_92.f_443, 1);
					Local_92.f_103.f_17 = 1;
					iLocal_737 = 1;
				}
				if (MISC::IS_PC_VERSION() && bVar11)
				{
					if (GlobalFunc_1391())
					{
						if (Global_2543381 == Local_92.f_103.f_1)
						{
							bVar6 = true;
						}
						else
						{
							if (func_414(&(Local_92.f_443)))
							{
								Local_92.f_103.f_1 = Global_2543381;
								*iParam0 = 1;
								iLocal_698 = 1;
								GlobalFunc_1355(Local_92.f_103.f_1, 1, 1);
								Local_92.f_103.f_2 = GlobalFunc_2479();
								if (func_412() > 1)
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
								}
							}
							if (iLocal_737 == 1)
							{
								bVar1 = true;
								iLocal_737 = 0;
							}
						}
					}
					if (GlobalFunc_2041())
					{
						bVar7 = true;
					}
					if (GlobalFunc_2495(Local_92.f_388.f_8, 0, 0))
					{
						bVar8 = true;
					}
					if (GlobalFunc_2494(Local_92.f_388.f_9, 0, 0))
					{
						bVar9 = true;
					}
				}
				if (bVar6 || Local_92.f_103.f_25)
				{
					if (Local_92.f_443 != -1)
					{
						if (!func_224(Local_92.f_443))
						{
							if (!func_422(Local_92.f_443, ""))
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
								GlobalFunc_1353("TAT_LOCK", 4000, 0);
							}
							else if (func_353() && !Local_92.f_103.f_25)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Tattooing_Oneshot", "TATTOOIST_SOUNDS", 1);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
								func_352(Local_92.f_443);
								if (Global_68245)
								{
									GlobalFunc_9519(Local_92.f_443, 1, -1);
									func_351(Local_92.f_443, 1, -1);
								}
								else
								{
									func_350(GlobalFunc_8315(), Local_92.f_443, 1);
								}
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									if (func_349())
									{
										GlobalFunc_2460("HUMAN CANVAS", -1);
										func_348(21, 1, -1);
									}
									func_346();
								}
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									func_226(iVar0, Local_92.f_443, 1, -1, 0);
								}
								else
								{
									func_33(iVar0);
								}
								Global_2540563 = 1;
								iLocal_765 = 0;
								if (iVar0 != PLAYER::PLAYER_PED_ID())
								{
									if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
									{
										func_226(PLAYER::PLAYER_PED_ID(), Local_92.f_443, 1, -1, 0);
									}
									else
									{
										func_33(PLAYER::PLAYER_PED_ID());
									}
								}
								GlobalFunc_2476(&(Local_92.f_218), 2, 2);
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_92.f_443 >= 129)
								{
									StringCopy(&(Local_92.f_103.f_11), "TAT_BUYDLC", 16);
									iLocal_748 = 1;
								}
								else
								{
									StringCopy(&(Local_92.f_103.f_11), "TAT_BUY", 16);
									iLocal_748 = 0;
								}
								Local_92.f_103.f_17 = 1;
								bLocal_739 = true;
								iLocal_737 = 0;
							}
							else if (!Local_92.f_103.f_25)
							{
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_749))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
									GlobalFunc_1353("TAT_LOCK", 4000, 0);
								}
								else if (Local_92.f_103.f_24)
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
									GlobalFunc_1353("TAT_LOCK", 4000, 0);
								}
								else
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
									GlobalFunc_1353("TAT_AFF", 4000, 0);
									GlobalFunc_2478(MISC::GET_HASH_KEY(&(Global_90014.f_1259)), Global_90014.f_1263, MISC::GET_HASH_KEY(GlobalFunc_1988(Local_92)));
									GlobalFunc_7677(0, 10, 3);
								}
							}
						}
						else
						{
							if (Global_68245)
							{
								GlobalFunc_9519(Local_92.f_443, 0, -1);
							}
							else
							{
								func_350(GlobalFunc_8315(), Local_92.f_443, 0);
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Tattooing_Oneshot_Remove", "TATTOOIST_SOUNDS", 1);
							func_33(iVar0);
							Global_2540563 = 1;
							iLocal_765 = 0;
							if (iVar0 != PLAYER::PLAYER_PED_ID())
							{
								func_33(PLAYER::PLAYER_PED_ID());
							}
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_92.f_443 >= 129)
							{
								StringCopy(&(Local_92.f_103.f_11), "TAT_REMDLC", 16);
								iLocal_748 = 1;
							}
							else
							{
								StringCopy(&(Local_92.f_103.f_11), "TAT_REM", 16);
								iLocal_748 = 0;
							}
							Local_92.f_103.f_17 = 1;
							bVar1 = true;
						}
					}
					iLocal_767 = 0;
				}
				else if (bVar9)
				{
					if (func_337(Local_92.f_443, &(Local_92.f_443), &(Local_92.f_103.f_1), 1))
					{
						*iParam0 = 1;
						iLocal_698 = 1;
						GlobalFunc_1355(Local_92.f_103.f_1, 1, 1);
						Local_92.f_103.f_2 = GlobalFunc_2479();
						if (func_412() > 1)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
						}
					}
					if (bVar10)
					{
						SYSTEM::SETTIMERA(0);
						Local_92.f_103.f_10 = 1;
					}
					if (iLocal_737 == 1)
					{
						bVar1 = true;
						iLocal_737 = 0;
					}
					Local_92.f_388.f_9 = 0;
					Local_92.f_388.f_4 = 0;
					Local_92.f_388.f_20 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Local_92.f_388.f_24 = NETWORK::GET_NETWORK_TIME();
					}
				}
				else if (bVar8)
				{
					if (func_335(Local_92.f_443, &(Local_92.f_443), &(Local_92.f_103.f_1), 1))
					{
						*iParam0 = 1;
						iLocal_698 = 1;
						GlobalFunc_1355(Local_92.f_103.f_1, 1, 1);
						Local_92.f_103.f_2 = GlobalFunc_2479();
						if (func_412() > 1)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
						}
					}
					if (bVar10)
					{
						SYSTEM::SETTIMERA(0);
						Local_92.f_103.f_10 = 1;
					}
					if (iLocal_737 == 1)
					{
						bVar1 = true;
						iLocal_737 = 0;
					}
					Local_92.f_388.f_8 = 0;
					Local_92.f_388.f_4 = 0;
					Local_92.f_388.f_20 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Local_92.f_388.f_24 = NETWORK::GET_NETWORK_TIME();
					}
				}
				else if (bVar7)
				{
					bVar1 = true;
					Local_92.f_443 = -1;
					func_471();
					func_33(iVar0);
					if (iVar0 != PLAYER::PLAYER_PED_ID())
					{
						func_33(PLAYER::PLAYER_PED_ID());
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
					fLocal_710 = 0f;
					Local_92.f_103.f_17 = 1;
					Local_92.f_103.f_5 = (Local_92.f_103.f_5 - 1);
				}
				break;
			}
	}
	if (bVar1)
	{
		if (!bLocal_739)
		{
			func_440(iParam0);
		}
	}
	func_295();
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
	HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_92.f_103.f_31 == 6)
	{
		HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
		HUD::REMOVE_MULTIPLAYER_BANK_CASH();
	}
	if (iLocal_698)
	{
		GlobalFunc_5342(-1);
		if (Local_92.f_103.f_5 == 0)
		{
			if (Local_92.f_103.f_3 != -1)
			{
				GlobalFunc_1354(201, "ITEM_SELECT", -1);
			}
			GlobalFunc_1354(202, "ITEM_BACK", -1);
			if (Local_92.f_103.f_3 != -1)
			{
			}
			GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
			GlobalFunc_1354(iLocal_766, "ITEM_ZOOM", -1);
		}
		else if (Local_92.f_103.f_5 == 1)
		{
			if (Local_92.f_103.f_1 != -1)
			{
				if (func_224(Local_92.f_443))
				{
					GlobalFunc_1354(201, "ITEM_REM", -1);
				}
				else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_291(Local_92.f_443, -1))
				{
					GlobalFunc_1354(201, "ITEM_SELECT", -1);
				}
				else
				{
					GlobalFunc_1354(201, "ITEM_BUY", -1);
				}
			}
			GlobalFunc_1354(202, "ITEM_BACK", -1);
			if (Local_92.f_103.f_1 != -1)
			{
			}
			GlobalFunc_260(21, "ITEM_MOV_CAM", -1);
			GlobalFunc_1354(iLocal_766, "ITEM_ZOOM", -1);
		}
		iLocal_698 = 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Local_92.f_103.f_5 != 0)
		{
			GlobalFunc_2590(&uVar12);
			if (MISC::GET_HASH_KEY(&uVar12) == 0)
			{
				if (Local_92.f_443 >= 129)
				{
					iVar29 = GlobalFunc_303(iVar0);
					GlobalFunc_5123(&Var16, Local_92.f_443, iVar29, iVar0, -1);
					if (Var16.f_8 == joaat("HEAD_RIGHT") || Var16.f_8 == joaat("HEAD_LEFT"))
					{
						GlobalFunc_1353("BB_PACK_HEADTAT", 0, 0);
					}
					else if (func_289(&Var16))
					{
						GlobalFunc_1353("TAT_LCKCREW", 0, 0);
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(GlobalFunc_2591(&Var16, 0)))
					{
						if (GlobalFunc_2586(&Var16))
						{
							GlobalFunc_1353("SHOP_DLC_PACK", 0, 0);
							GlobalFunc_1330(GlobalFunc_2591(&Var16, 0));
						}
						else if (GlobalFunc_2585(&Var16))
						{
							GlobalFunc_1353("SHOP_DLC_PACK3", 0, 0);
							GlobalFunc_1330(GlobalFunc_2591(&Var16, 0));
						}
						else if (GlobalFunc_2584(&Var16))
						{
							GlobalFunc_1353("SHOP_DLC_PACK4", 0, 0);
							GlobalFunc_1330(GlobalFunc_2591(&Var16, 0));
						}
						else
						{
							GlobalFunc_1353("SHOP_DLC_PACK2", 0, 0);
							GlobalFunc_1330(GlobalFunc_2591(&Var16, 1));
						}
					}
				}
			}
		}
	}
	GlobalFunc_8446(1, Local_92, 1, 0, 1, -1082130432, 0, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_262145.f_2421)
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShops"))
			{
				if (GlobalFunc_6942(29, 1, 1, &fVar30, &fVar31, 0))
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
					GRAPHICS::DRAW_SPRITE("MPShops", "ShopUI_Title_Graphics_SALE", 0.112f, 0.045f, Global_17235, fVar31, 0f, 255, 255, 255, 255, 0);
					GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				}
			}
		}
	}
}


































int func_289(char* sParam0)//Position - 0x36644
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (((MISC::ARE_STRINGS_EQUAL(sParam0, "TAT_BUS_012") || MISC::ARE_STRINGS_EQUAL(sParam0, "TAT_BUS_013")) || MISC::ARE_STRINGS_EQUAL(sParam0, "TAT_BUS_F_014")) || MISC::ARE_STRINGS_EQUAL(sParam0, "TAT_BUS_F_015"))
		{
			return 1;
		}
	}
	return 0;
}


int func_291(int iParam0, int iParam1)//Position - 0x366AC
{
	int iVar0;
	
	iVar0 = (3112 + iParam0);
	return GlobalFunc_6708(iVar0, iParam1, -1);
}




void func_295()//Position - 0x368CC
{
	var uVar0;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<4> Var10;
	struct<4> Var14;
	bool bVar27;
	char* sVar28;
	int iVar44;
	var uVar45;
	char* sVar49;
	char* sVar62;
	var uVar66;
	
	if (Local_92.f_103.f_31 == 6)
	{
	}
	else if (Local_92.f_103.f_5 == 0)
	{
		GlobalFunc_2590(&uVar0);
		if (MISC::GET_HASH_KEY(&uVar0) == 0)
		{
			if (Local_92.f_103.f_3 != -1)
			{
				iVar4 = 7;
				iVar5 = -1;
				func_246(Local_92.f_103.f_3, &iVar4, &iVar5, 0, 0);
				if (!func_326(iVar4, iVar5))
				{
					GlobalFunc_1353("TAT_UNLOCK_M", 0, 0);
				}
			}
		}
	}
	else if (!func_422(Local_92.f_443, ""))
	{
		GlobalFunc_2590(&uVar6);
		if (MISC::GET_HASH_KEY(&uVar6) == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (Local_92.f_443)
				{
					case 13:
					case 14:
					case 15:
					case 16:
						if (GlobalFunc_1974(PLAYER::PLAYER_ID()))
						{
							GlobalFunc_1353("TAT_CREW", 0, 0);
						}
						else
						{
							GlobalFunc_1353("TAT_CREWT", 0, 0);
						}
						GlobalFunc_1344(32);
						break;
					
					case 9:
						GlobalFunc_1353("TAT_RANK1", 0, 0);
						break;
					
					case 10:
						GlobalFunc_1353("TAT_RANK2", 0, 0);
						break;
					
					case 11:
						GlobalFunc_1353("TAT_RANK3", 0, 0);
						break;
					
					case 0:
						GlobalFunc_1353("TAT_RHB", 0, 0);
						break;
					
					case 1:
						GlobalFunc_1353("TAT_RDM", 0, 0);
						break;
					
					case 2:
						GlobalFunc_1353("TAT_RGR", 0, 0);
						break;
					
					case 3:
						GlobalFunc_1353("TAT_RHU", 0, 0);
						break;
					
					case 4:
						GlobalFunc_1353("TAT_RFM", 0, 0);
						break;
					
					case 54:
						GlobalFunc_1353("TAT_RAL", 0, 0);
						break;
					
					case 5:
						GlobalFunc_1353("TAT_RBH", 0, 0);
						break;
					
					case 6:
						GlobalFunc_1353("TAT_RWR", 0, 0);
						break;
					
					case 55:
						GlobalFunc_1353("TAT_RSU", 0, 0);
						break;
					
					case 7:
						GlobalFunc_1353("TAT_RRK", 0, 0);
						break;
					
					case 8:
						GlobalFunc_1353("TAT_RRD", 0, 0);
						break;
					
					case 56:
						GlobalFunc_1353("TAT_RKC", 0, 0);
						break;
					
					case 12:
						GlobalFunc_1353("TAT_RTC", 0, 0);
						break;
					
					case 57:
						GlobalFunc_1353("TAT_HU1", 0, 0);
						break;
					
					case 58:
						GlobalFunc_1353("TAT_HU2", 0, 0);
						break;
					
					case 59:
						GlobalFunc_1353("TAT_HU3", 0, 0);
						break;
					
					case 60:
						GlobalFunc_1353("TAT_HU4", 0, 0);
						break;
					
					case 34:
					case 45:
					case 65:
					case 48:
					case 49:
					case 46:
					case 25:
						GlobalFunc_1353(GlobalFunc_1430(Local_92.f_443, GlobalFunc_303(PLAYER::PLAYER_PED_ID())), 0, 0);
						break;
					
					default:
						if (GlobalFunc_5123(&Var14, Local_92.f_443, GlobalFunc_303(PLAYER::PLAYER_PED_ID()), PLAYER::PLAYER_PED_ID(), -1))
						{
							Var10 = { Var14 };
						}
						if (func_289(&Var10))
						{
							if (GlobalFunc_1974(PLAYER::PLAYER_ID()))
							{
								GlobalFunc_1353("TAT_CREW", 0, 0);
							}
							else
							{
								GlobalFunc_1353("TAT_CREWT", 0, 0);
							}
							GlobalFunc_1344(32);
						}
						else
						{
							bVar27 = false;
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
							{
								GlobalFunc_215(&sVar28, Var10, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, 0, 0, -1, -1);
								if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar28))
								{
									bVar27 = true;
								}
							}
							if (bVar27)
							{
								GlobalFunc_1353("TAT_LCKPC", 0, 0);
							}
							else
							{
								iVar44 = GlobalFunc_4189(Local_92.f_443);
								if (iVar44 > 0)
								{
									GlobalFunc_1353("TAT_UNLOCK", 0, 0);
									GlobalFunc_1344(iVar44);
								}
								else
								{
									GlobalFunc_1353("TAT_UNLOCK", 0, 0);
								}
							}
						}
						break;
					}
				}
		}
	}
	else if (!func_425(Local_92.f_443))
	{
		GlobalFunc_2590(&uVar45);
		if (MISC::GET_HASH_KEY(&uVar45) == 0)
		{
			if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_92.f_443 >= 129) && GlobalFunc_5123(&sVar49, Local_92.f_443, GlobalFunc_303(PLAYER::PLAYER_PED_ID()), PLAYER::PLAYER_PED_ID(), -1)) && !func_289(&sVar49))
			{
				if (GlobalFunc_2587(&sVar49, &sVar62))
				{
					GlobalFunc_1353(&sVar62, 4000, 0);
				}
				else if (GlobalFunc_2586(&sVar49))
				{
					GlobalFunc_1353("SHOP_UNLOCKDLC", 4000, 0);
					GlobalFunc_1330(GlobalFunc_2591(&sVar49, 0));
				}
				else if (GlobalFunc_2585(&sVar49))
				{
					GlobalFunc_1353("SHOP_UNLOCKDLC3", 4000, 0);
					GlobalFunc_1330(GlobalFunc_2591(&sVar49, 0));
				}
				else if (GlobalFunc_2584(&sVar49))
				{
					GlobalFunc_1353("SHOP_UNLOCKDLC4", 4000, 0);
					GlobalFunc_1330(GlobalFunc_2591(&sVar49, 0));
				}
				else
				{
					GlobalFunc_1353("SHOP_UNLOCKDLC2", 4000, 0);
					GlobalFunc_1330(GlobalFunc_2591(&sVar49, 1));
				}
			}
			else
			{
				GlobalFunc_1353("TAT_UNLOCK_N", 4000, 0);
			}
		}
	}
	else if (func_296() != 0)
	{
		GlobalFunc_2590(&uVar66);
		if (MISC::GET_HASH_KEY(&uVar66) == 0)
		{
			GlobalFunc_1353("TAT_DISC", 0, 0);
			GlobalFunc_1344(func_296());
		}
	}
}

int func_296()//Position - 0x36D6E
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
	return iVar0;
}






























int func_326(int iParam0, int iParam1)//Position - 0x383A2
{
	int iVar0;
	int iVar1;
	struct<12> Var2;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<8> Var20;
	int iVar35;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar15 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		iVar16 = GlobalFunc_303(PLAYER::PLAYER_PED_ID());
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar19 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar16);
			iVar18 = 0;
			while (iVar18 < iVar19)
			{
				if (((FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar16, iVar18, &Var20) && !func_332(Var20.f_2, Var20.f_3)) && Var20.f_6 != 2140335355) && Var20.f_6 != 277073536)
				{
					if (!FILES::IS_CONTENT_ITEM_LOCKED(Var20))
					{
						if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var20.f_2, Var20.f_3) == iParam0 && func_331(iVar15, &(Var20.f_7), Var20.f_6, iParam0, iParam1))
						{
							iVar35 = (129 + iVar18);
							if ((!func_330(iVar35, iVar16) && func_329(iVar35, iVar16)) && !func_425(iVar35))
							{
								return 0;
							}
						}
					}
				}
				iVar18++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar17 = GlobalFunc_523(iVar0, iVar1);
				if (GlobalFunc_5123(&Var2, GlobalFunc_523(iVar0, iVar1), iVar16, PLAYER::PLAYER_PED_ID(), -1))
				{
					if (((!func_330(iVar17, iVar16) && !func_329(iVar17, iVar16)) && Var2.f_8 != 2140335355) && Var2.f_8 != 277073536)
					{
						if (func_327(Var2.f_11) && !func_425(Var2.f_11))
						{
							if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var2.f_4, Var2.f_5) == iParam0 && func_331(iVar15, &Var2, Var2.f_8, iParam0, iParam1))
							{
								return 0;
							}
						}
					}
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_327(int iParam0)//Position - 0x38550
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 >= 129)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GlobalFunc_8362(iParam0, -1);
	}
	else
	{
		return func_328(GlobalFunc_8315(), iParam0);
	}
	return 0;
}

int func_328(int iParam0, int iParam1)//Position - 0x3858F
{
	struct<11> Var0;
	
	if (GlobalFunc_42(iParam0))
	{
		if (iParam0 == 0)
		{
			if (iParam1 >= 21)
			{
				return 1;
			}
		}
		else if (iParam0 == 1)
		{
			if (iParam1 >= 40)
			{
				return 1;
			}
		}
		else if (iParam0 == 2)
		{
			if (iParam1 >= 34)
			{
				return 1;
			}
		}
		if (GlobalFunc_5123(&Var0, iParam1, GlobalFunc_522(iParam0), 0, -1))
		{
			return MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iParam0 /*15*/][Var0.f_9], Var0.f_10);
		}
	}
	return 0;
}

int func_329(int iParam0, int iParam1)//Position - 0x3860C
{
	return ((iParam1 == 3 || iParam1 == 4) && iParam0 >= 129);
	if (iParam1 == iParam1 && iParam0 == iParam0)
	{
	}
	return 0;
}

int func_330(int iParam0, int iParam1)//Position - 0x38642
{
	switch (iParam1)
	{
		case 3:
		case 4:
			switch (iParam0)
			{
				case 13:
				case 14:
				case 15:
				case 16:
				case 71:
				case 72:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_331(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x38693
{
	int iVar0;
	
	if (iParam3 == 0)
	{
		if (iParam4 == -1)
		{
			return 0;
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam4 == 0)
			{
				return 1;
			}
			return 0;
		}
		iVar0 = func_230(iParam0, sParam1, iParam2);
		switch (iVar0)
		{
			case 26:
			case 27:
			case 28:
			case 29:
			case 30:
			case 31:
			case 32:
			case 33:
			case 34:
			case 35:
			case 36:
				if (iParam4 == 0)
				{
					return 1;
				}
				return 0;
				break;
			
			case 37:
			case 38:
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 44:
			case 45:
			case 46:
				if (iParam4 == 1)
				{
					return 1;
				}
				return 0;
				break;
			
			case 47:
			case 48:
			case 49:
			case 50:
			case 51:
			case 52:
			case 53:
			case 54:
			case 55:
				if (iParam4 == 2)
				{
					return 1;
				}
				return 0;
				break;
		}
		return 0;
	}
	if (iParam4 != -1)
	{
		return 0;
	}
	return 1;
}

int func_332(int iParam0, int iParam1)//Position - 0x387CD
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case joaat("mpHeist_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Award_M_Tshirt_004"):
				case joaat("MP_Award_M_Tshirt_005"):
				case joaat("MP_Award_M_Tshirt_006"):
				case joaat("MP_Award_M_Tshirt_007"):
				case joaat("MP_Award_M_Tshirt_008"):
				case joaat("MP_Award_M_Tshirt_009"):
				case joaat("MP_Award_M_Tshirt_010"):
				case joaat("MP_Award_M_Tshirt_011"):
				case joaat("MP_Award_M_Tshirt_012"):
				case joaat("MP_Award_M_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_M_Tshirt_004"))
					{
						if (GlobalFunc_6708(3770, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_005"))
					{
						if (GlobalFunc_6708(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_006"))
					{
						if (GlobalFunc_6708(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_007"))
					{
						if (GlobalFunc_6708(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_008"))
					{
						if (GlobalFunc_6708(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_009"))
					{
						if (GlobalFunc_6708(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_010"))
					{
						if (GlobalFunc_6708(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_011"))
					{
						if (GlobalFunc_6708(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_012"))
					{
						if (GlobalFunc_6708(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_013"))
					{
						if (GlobalFunc_6708(3779, -1, -1))
						{
							return 0;
						}
					}
					return !GlobalFunc_8362(GlobalFunc_5011(iParam1, 3), -1);
					break;
				
				case joaat("MP_Award_F_Tshirt_004"):
				case joaat("MP_Award_F_Tshirt_005"):
				case joaat("MP_Award_F_Tshirt_006"):
				case joaat("MP_Award_F_Tshirt_007"):
				case joaat("MP_Award_F_Tshirt_008"):
				case joaat("MP_Award_F_Tshirt_009"):
				case joaat("MP_Award_F_Tshirt_010"):
				case joaat("MP_Award_F_Tshirt_011"):
				case joaat("MP_Award_F_Tshirt_012"):
				case joaat("MP_Award_F_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_F_Tshirt_004"))
					{
						if (GlobalFunc_6708(3770, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_005"))
					{
						if (GlobalFunc_6708(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_006"))
					{
						if (GlobalFunc_6708(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_007"))
					{
						if (GlobalFunc_6708(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_008"))
					{
						if (GlobalFunc_6708(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_009"))
					{
						if (GlobalFunc_6708(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_010"))
					{
						if (GlobalFunc_6708(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_011"))
					{
						if (GlobalFunc_6708(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_012"))
					{
						if (GlobalFunc_6708(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_013"))
					{
						if (GlobalFunc_6708(3779, -1, -1))
						{
							return 0;
						}
					}
					return !GlobalFunc_8362(GlobalFunc_5011(iParam1, 4), -1);
					break;
				
				case joaat("MP_Elite_M_Tshirt"):
				case joaat("MP_Elite_M_Tshirt_1"):
				case joaat("MP_Elite_F_Tshirt"):
				case joaat("MP_Elite_F_Tshirt_1"):
					if ((((GlobalFunc_6708(3765, -1, -1) && GlobalFunc_6708(3766, -1, -1)) && GlobalFunc_6708(3767, -1, -1)) && GlobalFunc_6708(3768, -1, -1)) && GlobalFunc_6708(3769, -1, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		
		case -1093459369:
			switch (iParam1)
			{
				case joaat("FM_Ind_M_Award_000"):
				case joaat("FM_Ind_F_Award_000"):
					return !GlobalFunc_6708(3593, -1, -1);
					break;
			}
			break;
		
		case joaat("mpHipster_overlays"):
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				
				case 196632624:
				case -1644428107:
				case 1108198688:
				case 810099095:
					return 1;
					break;
				
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				
				case 1980445908:
				case -1882429354:
				case -1235341889:
				case -1544517404:
					return 1;
					break;
				
				case joaat("FM_Hip_M_Retro_010"):
				case joaat("FM_Hip_F_Retro_010"):
					return !GlobalFunc_6707(152, -1);
					break;
				
				case joaat("FM_Hip_M_Retro_003"):
				case joaat("FM_Hip_F_Retro_003"):
					return !GlobalFunc_6707(151, -1);
					break;
				
				case joaat("FM_Hip_M_Retro_000"):
				case joaat("FM_Hip_M_Retro_001"):
				case joaat("FM_Hip_M_Retro_002"):
				case joaat("FM_Hip_M_Retro_004"):
				case joaat("FM_Hip_M_Retro_005"):
				case joaat("FM_Hip_M_Retro_006"):
				case joaat("FM_Hip_M_Retro_007"):
				case joaat("FM_Hip_M_Retro_008"):
				case joaat("FM_Hip_M_Retro_009"):
				case joaat("FM_Hip_M_Retro_011"):
				case joaat("FM_Hip_M_Retro_012"):
				case joaat("FM_Hip_M_Retro_013"):
					return !GlobalFunc_8362(GlobalFunc_5011(iParam1, 3), -1);
					break;
				
				case joaat("FM_Hip_F_Retro_000"):
				case joaat("FM_Hip_F_Retro_001"):
				case joaat("FM_Hip_F_Retro_002"):
				case joaat("FM_Hip_F_Retro_004"):
				case joaat("FM_Hip_F_Retro_005"):
				case joaat("FM_Hip_F_Retro_006"):
				case joaat("FM_Hip_F_Retro_007"):
				case joaat("FM_Hip_F_Retro_008"):
				case joaat("FM_Hip_F_Retro_009"):
				case joaat("FM_Hip_F_Retro_011"):
				case joaat("FM_Hip_F_Retro_012"):
				case joaat("FM_Hip_F_Retro_013"):
					return !GlobalFunc_8362(GlobalFunc_5011(iParam1, 4), -1);
					break;
				
				case joaat("FM_Rstar_M_Tshirt_000"):
				case joaat("FM_Rstar_M_Tshirt_001"):
				case joaat("FM_Rstar_M_Tshirt_002"):
				case joaat("FM_Rstar_F_Tshirt_000"):
				case joaat("FM_Rstar_F_Tshirt_001"):
				case joaat("FM_Rstar_F_Tshirt_002"):
					return !GlobalFunc_442();
					break;
			}
			break;
		
		case joaat("mpPilot_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Fli_M_Tshirt_000"):
				case joaat("MP_Fli_F_Tshirt_000"):
					return !GlobalFunc_6708(3608, -1, -1);
					break;
			}
			break;
		
		case joaat("mpLTS_overlays"):
			switch (iParam1)
			{
				case joaat("FM_LTS_M_Tshirt_000"):
				case joaat("FM_LTS_F_Tshirt_000"):
					return !GlobalFunc_6708(3615, -1, -1);
					break;
			}
			break;
		
		case joaat("mpLuxe_overlays"):
			switch (iParam1)
			{
				case joaat("MP_FAKE_DIS_000_M"):
				case joaat("MP_FAKE_DIS_000_F"):
					return !GlobalFunc_6708(3783, -1, -1);
					break;
				
				case joaat("MP_FAKE_DIS_001_M"):
				case joaat("MP_FAKE_DIS_001_F"):
					return !GlobalFunc_6708(3784, -1, -1);
					break;
				
				case joaat("MP_FAKE_DS_000_M"):
				case joaat("MP_FAKE_DS_000_F"):
					return !GlobalFunc_6708(3785, -1, -1);
					break;
				
				case joaat("MP_FAKE_ENEMA_000_M"):
				case joaat("MP_FAKE_ENEMA_000_F"):
					return !GlobalFunc_6708(3786, -1, -1);
					break;
				
				case joaat("MP_FAKE_LB_000_M"):
				case joaat("MP_FAKE_LB_000_F"):
					return !GlobalFunc_6708(3787, -1, -1);
					break;
				
				case joaat("MP_FAKE_LC_000_M"):
				case joaat("MP_FAKE_LC_000_F"):
					return !GlobalFunc_6708(3788, -1, -1);
					break;
				
				case joaat("MP_FAKE_SC_000_M"):
				case joaat("MP_FAKE_SC_000_F"):
					return !GlobalFunc_6708(3789, -1, -1);
					break;
				
				case joaat("MP_FAKE_Vap_000_M"):
				case joaat("MP_FAKE_Vap_000_F"):
					return !GlobalFunc_6708(3790, -1, -1);
					break;
				
				case joaat("MP_FAKE_Per_000_M"):
				case joaat("MP_FAKE_Per_000_F"):
					return !GlobalFunc_6708(3791, -1, -1);
					break;
				
				case joaat("MP_FAKE_SN_000_M"):
				case joaat("MP_FAKE_SN_000_F"):
					return !GlobalFunc_6708(3792, -1, -1);
					break;
				
				case joaat("MP_FILM_000_F"):
				case joaat("MP_FILM_000_M"):
					return !GlobalFunc_6708(3793, -1, -1);
					break;
				
				case joaat("MP_FILM_001_F"):
				case joaat("MP_FILM_001_M"):
					return !GlobalFunc_6708(3794, -1, -1);
					break;
				
				case joaat("MP_FILM_002_F"):
				case joaat("MP_FILM_002_M"):
					return !GlobalFunc_6708(3795, -1, -1);
					break;
				
				case joaat("MP_FILM_003_F"):
				case joaat("MP_FILM_003_M"):
					return !GlobalFunc_6708(3796, -1, -1);
					break;
				
				case joaat("MP_FILM_004_F"):
				case joaat("MP_FILM_004_M"):
					return !GlobalFunc_6708(3797, -1, -1);
					break;
				
				case joaat("MP_FILM_005_F"):
				case joaat("MP_FILM_005_M"):
					return !GlobalFunc_6708(3798, -1, -1);
					break;
				
				case joaat("MP_FILM_006_F"):
				case joaat("MP_FILM_006_M"):
					return !GlobalFunc_6708(3799, -1, -1);
					break;
				
				case joaat("MP_FILM_007_F"):
				case joaat("MP_FILM_007_M"):
					return !GlobalFunc_6708(3800, -1, -1);
					break;
				
				case joaat("MP_FILM_008_F"):
				case joaat("MP_FILM_008_M"):
					if (iParam1 == joaat("MP_FILM_008_F"))
					{
						iVar0 = GlobalFunc_6671(2398, -1, 0);
						if (MISC::IS_BIT_SET(iVar0, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_008_M"))
					{
						iVar1 = GlobalFunc_6671(2378, -1, 0);
						if (MISC::IS_BIT_SET(iVar1, 26))
						{
							return 0;
						}
					}
					return !GlobalFunc_6708(3801, -1, -1);
					break;
				
				case joaat("MP_FILM_009_F"):
				case joaat("MP_FILM_009_M"):
					return !GlobalFunc_6708(3802, -1, -1);
					break;
				
				case joaat("MP_LUXE_TAT_030_M"):
				case joaat("MP_LUXE_TAT_031_M"):
					return 1;
					break;
				
				case joaat("MP_LUXE_TAT_030_F"):
				case joaat("MP_LUXE_TAT_031_F"):
					return 1;
					break;
			}
			break;
		
		case joaat("multiplayer_overlays"):
			switch (iParam1)
			{
				case joaat("MP_FM_OGA_000_m"):
				case joaat("MP_FM_OGA_001_m"):
				case joaat("MP_FM_OGA_002_m"):
				case joaat("MP_FM_OGA_003_m"):
				case joaat("MP_FM_OGA_000_f"):
				case joaat("MP_FM_OGA_001_f"):
				case joaat("MP_FM_OGA_002_f"):
				case joaat("MP_FM_OGA_003_f"):
					return !GlobalFunc_84();
					break;
			}
			break;
	}
	return 0;
}



int func_335(int iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x390C2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	iVar1 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = (384 - 1);
		while (iVar2 >= 0)
		{
			iVar3 = (iVar2 / 32);
			iVar4 = (iVar2 % 32);
			if (MISC::IS_BIT_SET(Local_92.f_429[iVar3], iVar4))
			{
				iVar5 = (129 + iVar2);
				if (iParam0 == iVar5 && iVar0 != -1)
				{
					*uParam2 = iVar0;
					*uParam1 = iVar1;
					return 1;
				}
				iVar0++;
				iVar1 = iVar5;
			}
			iVar2 = (iVar2 + -1);
		}
	}
	iVar2 = (71 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = (iVar2 / 32);
		iVar4 = (iVar2 % 32);
		if (MISC::IS_BIT_SET(Local_92.f_424[iVar3], iVar4))
		{
			if (iParam0 == GlobalFunc_523(iVar3, iVar4) && iVar0 != -1)
			{
				*uParam2 = iVar0;
				*uParam1 = iVar1;
				return 1;
			}
			iVar0++;
			iVar1 = GlobalFunc_523(iVar3, iVar4);
		}
		iVar2 = (iVar2 + -1);
	}
	if (bParam3)
	{
		return func_336(uParam1, uParam2);
	}
	return 0;
}

int func_336(var uParam0, var uParam1)//Position - 0x391B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam1 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = (384 - 1);
		while (iVar0 >= 0)
		{
			iVar1 = (iVar0 / 32);
			iVar2 = (iVar0 % 32);
			if (MISC::IS_BIT_SET(Local_92.f_429[iVar1], iVar2))
			{
				*uParam1++;
				*uParam0 = (129 + iVar0);
			}
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = (71 - 1);
	while (iVar0 >= 0)
	{
		iVar1 = (iVar0 / 32);
		iVar2 = (iVar0 % 32);
		if (MISC::IS_BIT_SET(Local_92.f_424[iVar1], iVar2))
		{
			*uParam1++;
			*uParam0 = GlobalFunc_523(iVar1, iVar2);
		}
		iVar0 = (iVar0 + -1);
	}
	if (*uParam1 == -1)
	{
		*uParam0 = -1;
		return 0;
	}
	return 1;
}

int func_337(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x39269
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	iVar1 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = (384 - 1);
		while (iVar2 >= 0)
		{
			iVar3 = (iVar2 / 32);
			iVar4 = (iVar2 % 32);
			if (MISC::IS_BIT_SET(Local_92.f_429[iVar3], iVar4))
			{
				iVar5 = (129 + iVar2);
				if (iParam0 == iVar1)
				{
					iVar0++;
					iVar1 = iVar5;
					*iParam2 = iVar0;
					*iParam1 = iVar1;
					return 1;
				}
				iVar0++;
				iVar1 = iVar5;
			}
			iVar2 = (iVar2 + -1);
		}
	}
	iVar2 = (71 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = (iVar2 / 32);
		iVar4 = (iVar2 % 32);
		if (MISC::IS_BIT_SET(Local_92.f_424[iVar3], iVar4))
		{
			if (iParam0 == iVar1)
			{
				iVar0++;
				iVar1 = GlobalFunc_523(iVar3, iVar4);
				*iParam2 = iVar0;
				*iParam1 = iVar1;
				return 1;
			}
			iVar0++;
			iVar1 = GlobalFunc_523(iVar3, iVar4);
		}
		iVar2 = (iVar2 + -1);
	}
	if (bParam3)
	{
		return func_338(iParam1, iParam2);
	}
	return 0;
}

int func_338(var uParam0, var uParam1)//Position - 0x3935F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam1 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = (384 - 1);
		while (iVar0 >= 0)
		{
			iVar1 = (iVar0 / 32);
			iVar2 = (iVar0 % 32);
			if (MISC::IS_BIT_SET(Local_92.f_429[iVar1], iVar2))
			{
				*uParam1++;
				*uParam0 = (129 + iVar0);
				return 1;
			}
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = (71 - 1);
	while (iVar0 >= 0)
	{
		iVar1 = (iVar0 / 32);
		iVar2 = (iVar0 % 32);
		if (MISC::IS_BIT_SET(Local_92.f_424[iVar1], iVar2))
		{
			*uParam1++;
			*uParam0 = GlobalFunc_523(iVar1, iVar2);
			return 1;
		}
		iVar0 = (iVar0 + -1);
	}
	*uParam0 = -1;
	return 0;
}








void func_346()//Position - 0x3984C
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(14);
	Global_2408820[iVar0 /*83*/] = 14;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}


void func_348(int iParam0, int iParam1, int iParam2)//Position - 0x398C6
{
	int iVar0;
	
	iVar0 = Global_2475762[iParam0 /*6*/][GlobalFunc_4916(iParam2)];
	STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}

bool func_349()//Position - 0x398EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<7> Var20;
	int iVar35;
	
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 0);
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 4);
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 5);
	MISC::SET_BIT(&iVar0, 1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar16 = GlobalFunc_303(PLAYER::PLAYER_PED_ID());
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar19 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar16);
			iVar18 = 0;
			while (iVar18 < iVar19)
			{
				if ((FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar16, iVar18, &Var20) && Var20.f_6 != 2140335355) && Var20.f_6 != 277073536)
				{
					iVar35 = (129 + iVar18);
					if (GlobalFunc_8361(iVar35, -1))
					{
						MISC::CLEAR_BIT(&iVar0, PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var20.f_2, Var20.f_3));
					}
				}
				iVar18++;
			}
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar17 = GlobalFunc_523(iVar1, iVar2);
				if (!func_330(iVar17, iVar16) && !func_329(iVar17, iVar16))
				{
					if ((GlobalFunc_5123(&Var3, GlobalFunc_523(iVar1, iVar2), iVar16, PLAYER::PLAYER_PED_ID(), -1) && Var3.f_8 != 2140335355) && Var3.f_8 != 277073536)
					{
						if (Global_68245)
						{
							if (GlobalFunc_8361(Var3.f_11, -1))
							{
								MISC::CLEAR_BIT(&iVar0, PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var3.f_4, Var3.f_5));
							}
						}
						else if (func_225(GlobalFunc_8315(), Var3.f_11))
						{
							return 1;
						}
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	return iVar0 == 0;
}

void func_350(int iParam0, int iParam1, bool bParam2)//Position - 0x39A63
{
	struct<11> Var0;
	
	if (GlobalFunc_42(iParam0))
	{
		if (GlobalFunc_5123(&Var0, iParam1, GlobalFunc_522(iParam0), 0, -1))
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iParam0 /*15*/].f_10[Var0.f_9]), Var0.f_10);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iParam0 /*15*/].f_10[Var0.f_9]), Var0.f_10);
			}
		}
	}
}

void func_351(int iParam0, int iParam1, int iParam2)//Position - 0x39ACB
{
	int iVar0;
	
	iVar0 = (3112 + iParam0);
	GlobalFunc_5217(iVar0, iParam1, iParam2, 1);
}

void func_352(int iParam0)//Position - 0x39AE7
{
	struct<12> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	int iVar37;
	int iVar38;
	
	iVar13 = GlobalFunc_303(PLAYER::PLAYER_PED_ID());
	iVar14 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	if (GlobalFunc_5123(&Var0, iParam0, iVar13, PLAYER::PLAYER_PED_ID(), -1))
	{
		if (Var0.f_8 != 0)
		{
			iVar15 = -1;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar15 = func_230(iVar14, &Var0, Var0.f_8);
			}
			iVar16 = Var0.f_8;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar20 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar13);
				iVar19 = 0;
				while (iVar19 < iVar20)
				{
					if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar13, iVar19, &Var21))
					{
						if (!FILES::IS_CONTENT_ITEM_LOCKED(Var21))
						{
							iVar36 = (129 + iVar19);
							iVar37 = func_230(iVar14, &(Var21.f_7), Var21.f_6);
							if (func_229(iVar37, iVar15) && iVar36 != iParam0)
							{
								GlobalFunc_9519(iVar36, 0, -1);
							}
						}
					}
					iVar19++;
				}
			}
			iVar17 = 0;
			while (iVar17 < 4)
			{
				iVar18 = 0;
				while (iVar18 < 32)
				{
					if (!func_329(iParam0, iVar13))
					{
						if (GlobalFunc_5123(&Var0, GlobalFunc_523(iVar17, iVar18), iVar13, PLAYER::PLAYER_PED_ID(), -1))
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								iVar38 = func_230(iVar14, &Var0, Var0.f_8);
								if (func_229(iVar38, iVar15) && Var0.f_11 != iParam0)
								{
									if (Global_68245)
									{
										GlobalFunc_9519(Var0.f_11, 0, -1);
									}
									else
									{
										func_350(GlobalFunc_8315(), Var0.f_11, 0);
									}
								}
							}
							else if (Var0.f_8 == iVar16 && Var0.f_11 != iParam0)
							{
								if (Global_68245)
								{
									GlobalFunc_9519(Var0.f_11, 0, -1);
								}
								else
								{
									func_350(GlobalFunc_8315(), Var0.f_11, 0);
								}
							}
						}
					}
					iVar18++;
				}
				iVar17++;
			}
		}
	}
}

int func_353()//Position - 0x39C78
{
	struct<8> Var0;
	int iVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	struct<16> Var17;
	
	if (GlobalFunc_5785(1))
	{
		StringCopy(&Local_749, "", 64);
		Local_92.f_103.f_24 = 0;
		iVar13 = GlobalFunc_303(PLAYER::PLAYER_PED_ID());
		if (GlobalFunc_5123(&Var0, Local_92.f_443, iVar13, PLAYER::PLAYER_PED_ID(), -1))
		{
			bVar14 = true;
			bVar15 = false;
			iVar16 = func_410(Var0.f_7, Var0);
			if (iVar16 == -1)
			{
				MemCopy(&Local_749, {Var0}, 16);
				return 0;
			}
			if (iVar16 != Var0.f_7)
			{
				Var0.f_7 = iVar16;
			}
			func_409(&(Var0.f_7), Var0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_291(Local_92.f_443, -1))
			{
				Var0.f_7 = Global_262145.f_6116;
				bVar14 = true;
				bVar15 = true;
			}
			if (Local_92.f_103.f_25)
			{
				if (!func_404(Var0.f_7))
				{
					Local_92.f_103.f_24 = 1;
					return 0;
				}
				else if (!Local_92.f_103.f_25)
				{
					GlobalFunc_5217(3, 1, -1, 1);
					GlobalFunc_5790(joaat("mpply_ingamestore_moneyspent"), Var0.f_7);
					func_394(Local_92, 1, 6);
					func_392(7);
					GlobalFunc_5069(GlobalFunc_5422());
				}
				return 1;
			}
			func_387(Var0, Var0.f_7, 0, 1, 0);
			if (Global_68245)
			{
				if (Var0.f_7 == 0 || MONEY::NETWORK_CAN_SPEND_MONEY(Var0.f_7, 0, 1, 0, -1))
				{
					if (GlobalFunc_4962(1) || iLocal_765)
					{
						iLocal_765 = 1;
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
					{
						GlobalFunc_215(&Var17, Var0, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, 0, 0, -1, -1);
						if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&Var17))
						{
							Local_749 = { Var17 };
							return 0;
						}
						if (GlobalFunc_7912(78225582, 1315680121, MISC::GET_HASH_KEY(&Var17), 537254313, 1, Var0.f_7, 1, 4, 0, 3))
						{
							if (bVar15)
							{
								if (GlobalFunc_7912(78225582, 1315680121, 814101910, 537254313, 1, Var0.f_7, 1, 4, MISC::GET_HASH_KEY(&Var17), 3))
								{
								}
								else
								{
									GlobalFunc_5069(GlobalFunc_5422());
									HUD::_0x170F541E1CADD1DE(0);
									HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
									Local_92.f_103.f_24 = 1;
									return 0;
								}
							}
							if (iLocal_765)
							{
								if (GlobalFunc_7912(78225582, 1315680121, -1914951697, 537254313, 1, 0, 1, 4, MISC::GET_HASH_KEY(&Var17), 3))
								{
								}
								else
								{
									GlobalFunc_5069(GlobalFunc_5422());
									HUD::_0x170F541E1CADD1DE(0);
									HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
									Local_92.f_103.f_24 = 1;
									return 0;
								}
							}
							Local_92.f_103.f_24 = 0;
							Local_92.f_103.f_25 = 1;
							Local_92.f_103.f_26 = 0;
							return 1;
						}
						else
						{
							GlobalFunc_5069(GlobalFunc_5422());
							HUD::_0x170F541E1CADD1DE(0);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
							return 0;
						}
					}
					if (Var0.f_7 > 0)
					{
					}
					if (bVar14)
					{
						GlobalFunc_5217(3, 1, -1, 1);
						GlobalFunc_5790(joaat("mpply_ingamestore_moneyspent"), Var0.f_7);
						func_394(Local_92, 1, 6);
					}
					func_392(7);
					GlobalFunc_5069(GlobalFunc_5422());
					return 1;
				}
			}
			else if (GlobalFunc_469(GlobalFunc_8315()) >= Var0.f_7)
			{
				if (Var0.f_7 > 0)
				{
					GlobalFunc_10834(GlobalFunc_8315(), GlobalFunc_2471(Local_92), Var0.f_7);
				}
				func_354();
				func_394(Local_92, 1, 6);
				return 1;
			}
		}
	}
	return 0;
}

void func_354()//Position - 0x39F76
{
	int iVar0;
	
	iVar0 = GlobalFunc_6674(PLAYER::PLAYER_PED_ID());
	if (GlobalFunc_42(iVar0))
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1572[iVar0] = MISC::GET_GAME_TIMER();
	}
}

































void func_387(struct<4> Param0, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0x3B28E
{
	Global_90014.f_1259 = { Param0 };
	Global_90014.f_1263 = uParam4;
	Global_90014.f_1264 = iParam5;
	Global_90014.f_1265 = iParam6;
	Global_90014.f_1266 = iParam7;
}





int func_392(int iParam0)//Position - 0x3B3AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Global_68245)
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
	{
		return 0;
	}
	if (!GlobalFunc_6714())
	{
		return 0;
	}
	iVar2 = GlobalFunc_6671(744, -1, 0);
	MISC::SET_BIT(&iVar2, iParam0);
	GlobalFunc_6784(744, iVar2, -1, 1);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (GlobalFunc_1010(iVar2, iVar0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		GlobalFunc_8960(45, 1);
	}
	return 1;
}


void func_394(int iParam0, bool bParam1, int iParam2)//Position - 0x3B4B6
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (bParam1)
	{
		if (!GlobalFunc_7702(iParam0, 3, 0))
		{
			GlobalFunc_7930(iParam0, 3, 0);
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
	else if (GlobalFunc_7702(iParam0, 3, 0))
	{
		GlobalFunc_7929(iParam0, 3, 0);
	}
}










int func_404(var uParam0)//Position - 0x3C2CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_92.f_103.f_25)
	{
		switch (Local_92.f_103.f_26)
		{
			case 0:
				if (GlobalFunc_6940())
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = uParam0;
					if (iLocal_765)
					{
						iVar2 = 0;
					}
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
					HUD::_0x170F541E1CADD1DE(1);
					HUD::_SET_PLAYER_CASH_CHANGE(-iVar0, -iVar1);
					Local_92.f_103.f_26 = 70;
				}
				else
				{
					Local_92.f_103.f_26 = 90;
				}
				break;
			
			case 70:
				if (GlobalFunc_1363(GlobalFunc_5422()))
				{
					if (GlobalFunc_1362(GlobalFunc_5422()) == 2)
					{
						Local_92.f_103.f_26 = 80;
					}
					else
					{
						Local_92.f_103.f_26 = 90;
					}
				}
				break;
			
			case 80:
				HUD::_0x170F541E1CADD1DE(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				Local_92.f_103.f_25 = 0;
				Local_92.f_103.f_26 = 0;
				break;
			
			case 90:
				GlobalFunc_5069(GlobalFunc_5422());
				HUD::_0x170F541E1CADD1DE(0);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				Local_92.f_103.f_25 = 0;
				Local_92.f_103.f_26 = 0;
				return 0;
				break;
			}
	}
	return 1;
}





void func_409(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x3C76B
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (MISC::GET_HASH_KEY(&uParam1))
		{
			case -1516865571:
				*uParam0 = Global_262145.f_5432;
				break;
			
			case 2130586285:
				*uParam0 = Global_262145.f_5433;
				break;
			
			case 386521802:
				*uParam0 = Global_262145.f_5434;
				break;
			
			case 579924440:
				*uParam0 = Global_262145.f_5435;
				break;
			
			case 741770527:
				*uParam0 = Global_262145.f_5436;
				break;
			
			case 1173403795:
				*uParam0 = Global_262145.f_5437;
				break;
			
			case -569087776:
				*uParam0 = Global_262145.f_5438;
				break;
			
			case -1344959389:
				*uParam0 = Global_262145.f_5439;
				break;
			
			case -211217527:
				*uParam0 = Global_262145.f_5440;
				break;
			
			case 86488838:
				*uParam0 = Global_262145.f_5441;
				break;
			
			case 705494964:
				*uParam0 = Global_262145.f_5442;
				break;
			
			case -137684175:
				*uParam0 = Global_262145.f_5443;
				break;
			
			case -979388709:
				*uParam0 = Global_262145.f_5444;
				break;
			
			case 324653646:
				*uParam0 = Global_262145.f_5444;
				break;
			
			case -518820414:
				*uParam0 = Global_262145.f_5445;
				break;
			
			case -1361737401:
				*uParam0 = Global_262145.f_5446;
				break;
			
			case 2010946386:
				*uParam0 = Global_262145.f_5447;
				break;
			
			case -1628534963:
				*uParam0 = Global_262145.f_5448;
				break;
			
			case -1051898870:
				*uParam0 = Global_262145.f_5449;
				break;
			
			case 1334929540:
				*uParam0 = Global_262145.f_5450;
				break;
			
			case 1097124907:
				*uParam0 = Global_262145.f_5451;
				break;
			
			case 747545215:
				*uParam0 = Global_262145.f_5452;
				break;
			
			case 61892743:
				*uParam0 = Global_262145.f_5453;
				break;
			
			case 501548332:
				*uParam0 = Global_262145.f_5454;
				break;
			
			case -244169717:
				*uParam0 = Global_262145.f_5455;
				break;
			
			case 421886905:
				*uParam0 = Global_262145.f_5456;
				break;
			
			case -1398791504:
				*uParam0 = Global_262145.f_5457;
				break;
			
			case -106152761:
				*uParam0 = Global_262145.f_5458;
				break;
			
			case 125491300:
				*uParam0 = Global_262145.f_5459;
				break;
			
			case -1576950557:
				*uParam0 = Global_262145.f_5460;
				break;
			
			case -1815115649:
				*uParam0 = Global_262145.f_5461;
				break;
			
			case -2034766264:
				*uParam0 = Global_262145.f_5462;
				break;
			
			case 1748021562:
				*uParam0 = Global_262145.f_5463;
				break;
			
			case -894811920:
				*uParam0 = Global_262145.f_5464;
				break;
			
			case 165068612:
				*uParam0 = Global_262145.f_5465;
				break;
			
			case 1549427782:
				*uParam0 = Global_262145.f_5466;
				break;
			
			case -927613913:
				*uParam0 = Global_262145.f_5467;
				break;
			
			case 385144996:
				*uParam0 = Global_262145.f_5468;
				break;
			
			case -814626401:
				*uParam0 = Global_262145.f_5469;
				break;
			
			case -1248225809:
				*uParam0 = Global_262145.f_5470;
				break;
			
			case 1910378101:
				*uParam0 = Global_262145.f_5471;
				break;
			
			case -2124501642:
				*uParam0 = Global_262145.f_5472;
				break;
			
			case -1943747838:
				*uParam0 = Global_262145.f_5473;
				break;
			
			case -1570115700:
				*uParam0 = Global_262145.f_5474;
				break;
			
			case 931699147:
				*uParam0 = Global_262145.f_5475;
				break;
			
			case 1019520067:
				*uParam0 = Global_262145.f_5476;
				break;
			
			case joaat("TORSO_P2_4_4"):
				*uParam0 = Global_262145.f_5477;
				break;
			
			case joaat("TORSO_P2_4_5"):
				*uParam0 = Global_262145.f_5478;
				break;
			
			case joaat("TORSO_P2_4_6"):
				*uParam0 = Global_262145.f_5479;
				break;
			
			case -1043396870:
				*uParam0 = Global_262145.f_5480;
				break;
			
			case -1388618285:
				*uParam0 = Global_262145.f_5481;
				break;
			
			case -948484638:
				*uParam0 = Global_262145.f_5482;
				break;
			
			case 643387405:
				*uParam0 = Global_262145.f_5483;
				break;
			
			case 979630098:
				*uParam0 = Global_262145.f_5484;
				break;
			
			case 211688583:
				*uParam0 = Global_262145.f_5485;
				break;
			
			case 1343791995:
				*uParam0 = Global_262145.f_5486;
				break;
			
			case 576309246:
				*uParam0 = Global_262145.f_5487;
				break;
			
			case 949154944:
				*uParam0 = Global_262145.f_5488;
				break;
			
			case -622511834:
				*uParam0 = Global_262145.f_5489;
				break;
			
			case -275651969:
				*uParam0 = Global_262145.f_5490;
				break;
			
			case -1256283855:
				*uParam0 = Global_262145.f_5491;
				break;
			
			case 955525350:
				*uParam0 = Global_262145.f_5492;
				break;
			
			case 1252641873:
				*uParam0 = Global_262145.f_5493;
				break;
			
			case 1505482034:
				*uParam0 = Global_262145.f_7188;
				break;
			
			case 1684269698:
				*uParam0 = Global_262145.f_7189;
				break;
			
			case 1983811127:
				*uParam0 = Global_262145.f_7190;
				break;
			
			case -406884045:
				*uParam0 = Global_262145.f_7191;
				break;
			
			case -112389050:
				*uParam0 = Global_262145.f_7192;
				break;
			
			case 84487102:
				*uParam0 = Global_262145.f_7193;
				break;
			
			case 382193467:
				*uParam0 = Global_262145.f_7194;
				break;
			
			case 547152613:
				*uParam0 = Global_262145.f_7195;
				break;
			
			case 845317744:
				*uParam0 = Global_262145.f_7196;
				break;
			
			case 1578163660:
				*uParam0 = Global_262145.f_7197;
				break;
			
			case 2031294192:
				*uParam0 = Global_262145.f_7198;
				break;
			
			case -1257730342:
				*uParam0 = Global_262145.f_7199;
				break;
			
			case -698953354:
				*uParam0 = Global_262145.f_7200;
				break;
			
			case 274646413:
				*uParam0 = Global_262145.f_7201;
				break;
			
			case -1044305845:
				*uParam0 = Global_262145.f_7202;
				break;
			
			case 1385548270:
				*uParam0 = Global_262145.f_7203;
				break;
			
			case 72658285:
				*uParam0 = Global_262145.f_7204;
				break;
			
			case 773259505:
				*uParam0 = Global_262145.f_7205;
				break;
			
			case 1600250758:
				*uParam0 = Global_262145.f_7206;
				break;
			
			case -1686414408:
				*uParam0 = Global_262145.f_7207;
				break;
			
			case -1971865383:
				*uParam0 = Global_262145.f_7208;
				break;
			
			case -1808184228:
				*uParam0 = Global_262145.f_7209;
				break;
			
			case -1494453822:
				*uParam0 = Global_262145.f_7210;
				break;
			
			case -1360985685:
				*uParam0 = Global_262145.f_7211;
				break;
			
			case -1063344858:
				*uParam0 = Global_262145.f_7212;
				break;
			
			case 225394382:
				*uParam0 = Global_262145.f_7213;
				break;
			
			case -550903236:
				*uParam0 = Global_262145.f_7214;
				break;
			
			case -836157369:
				*uParam0 = Global_262145.f_7215;
				break;
			
			case -56320715:
				*uParam0 = Global_262145.f_7216;
				break;
			
			case 760970914:
				*uParam0 = Global_262145.f_7217;
				break;
		}
		*uParam0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam0) * Global_262145.f_61));
	}
	iVar0 = func_296();
	*uParam0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam0) * (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f))));
}

int func_410(int iParam0, struct<4> Param1)//Position - 0x3CEA4
{
	char* sVar0;
	
	if (GlobalFunc_4979())
	{
		GlobalFunc_215(&sVar0, Param1, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, 0, 0, -1, -1);
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar0))
		{
			return NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar0), 1315680121, 1);
		}
		else
		{
			return -1;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (MISC::GET_HASH_KEY(&Param1))
		{
			case -1516865571:
				iParam0 = Global_262145.f_5432;
				break;
			
			case 2130586285:
				iParam0 = Global_262145.f_5433;
				break;
			
			case 386521802:
				iParam0 = Global_262145.f_5434;
				break;
			
			case 579924440:
				iParam0 = Global_262145.f_5435;
				break;
			
			case 741770527:
				iParam0 = Global_262145.f_5436;
				break;
			
			case 1173403795:
				iParam0 = Global_262145.f_5437;
				break;
			
			case -569087776:
				iParam0 = Global_262145.f_5438;
				break;
			
			case -1344959389:
				iParam0 = Global_262145.f_5439;
				break;
			
			case -211217527:
				iParam0 = Global_262145.f_5440;
				break;
			
			case 86488838:
				iParam0 = Global_262145.f_5441;
				break;
			
			case 705494964:
				iParam0 = Global_262145.f_5442;
				break;
			
			case -137684175:
				iParam0 = Global_262145.f_5443;
				break;
			
			case -979388709:
				iParam0 = Global_262145.f_5444;
				break;
			
			case 324653646:
				iParam0 = Global_262145.f_5444;
				break;
			
			case -518820414:
				iParam0 = Global_262145.f_5445;
				break;
			
			case -1361737401:
				iParam0 = Global_262145.f_5446;
				break;
			
			case 2010946386:
				iParam0 = Global_262145.f_5447;
				break;
			
			case -1628534963:
				iParam0 = Global_262145.f_5448;
				break;
			
			case -1051898870:
				iParam0 = Global_262145.f_5449;
				break;
			
			case 1334929540:
				iParam0 = Global_262145.f_5450;
				break;
			
			case 1097124907:
				iParam0 = Global_262145.f_5451;
				break;
			
			case 747545215:
				iParam0 = Global_262145.f_5452;
				break;
			
			case 61892743:
				iParam0 = Global_262145.f_5453;
				break;
			
			case 501548332:
				iParam0 = Global_262145.f_5454;
				break;
			
			case -244169717:
				iParam0 = Global_262145.f_5455;
				break;
			
			case 421886905:
				iParam0 = Global_262145.f_5456;
				break;
			
			case -1398791504:
				iParam0 = Global_262145.f_5457;
				break;
			
			case -106152761:
				iParam0 = Global_262145.f_5458;
				break;
			
			case 125491300:
				iParam0 = Global_262145.f_5459;
				break;
			
			case -1576950557:
				iParam0 = Global_262145.f_5460;
				break;
			
			case -1815115649:
				iParam0 = Global_262145.f_5461;
				break;
			
			case -2034766264:
				iParam0 = Global_262145.f_5462;
				break;
			
			case 1748021562:
				iParam0 = Global_262145.f_5463;
				break;
			
			case -894811920:
				iParam0 = Global_262145.f_5464;
				break;
			
			case 165068612:
				iParam0 = Global_262145.f_5465;
				break;
			
			case 1549427782:
				iParam0 = Global_262145.f_5466;
				break;
			
			case -927613913:
				iParam0 = Global_262145.f_5467;
				break;
			
			case 385144996:
				iParam0 = Global_262145.f_5468;
				break;
			
			case -814626401:
				iParam0 = Global_262145.f_5469;
				break;
			
			case -1248225809:
				iParam0 = Global_262145.f_5470;
				break;
			
			case 1910378101:
				iParam0 = Global_262145.f_5471;
				break;
			
			case -2124501642:
				iParam0 = Global_262145.f_5472;
				break;
			
			case -1943747838:
				iParam0 = Global_262145.f_5473;
				break;
			
			case -1570115700:
				iParam0 = Global_262145.f_5474;
				break;
			
			case 931699147:
				iParam0 = Global_262145.f_5475;
				break;
			
			case 1019520067:
				iParam0 = Global_262145.f_5476;
				break;
			
			case joaat("TORSO_P2_4_4"):
				iParam0 = Global_262145.f_5477;
				break;
			
			case joaat("TORSO_P2_4_5"):
				iParam0 = Global_262145.f_5478;
				break;
			
			case joaat("TORSO_P2_4_6"):
				iParam0 = Global_262145.f_5479;
				break;
			
			case -1043396870:
				iParam0 = Global_262145.f_5480;
				break;
			
			case -1388618285:
				iParam0 = Global_262145.f_5481;
				break;
			
			case -948484638:
				iParam0 = Global_262145.f_5482;
				break;
			
			case 643387405:
				iParam0 = Global_262145.f_5483;
				break;
			
			case 979630098:
				iParam0 = Global_262145.f_5484;
				break;
			
			case 211688583:
				iParam0 = Global_262145.f_5485;
				break;
			
			case 1343791995:
				iParam0 = Global_262145.f_5486;
				break;
			
			case 576309246:
				iParam0 = Global_262145.f_5487;
				break;
			
			case 949154944:
				iParam0 = Global_262145.f_5488;
				break;
			
			case -622511834:
				iParam0 = Global_262145.f_5489;
				break;
			
			case -275651969:
				iParam0 = Global_262145.f_5490;
				break;
			
			case -1256283855:
				iParam0 = Global_262145.f_5491;
				break;
			
			case 955525350:
				iParam0 = Global_262145.f_5492;
				break;
			
			case 1252641873:
				iParam0 = Global_262145.f_5493;
				break;
			
			case -657146050:
				iParam0 = Global_262145.f_5903[0];
				break;
			
			case -955835485:
				iParam0 = Global_262145.f_5903[1];
				break;
			
			case -1269959119:
				iParam0 = Global_262145.f_5903[2];
				break;
			
			case -1478763187:
				iParam0 = Global_262145.f_5903[3];
				break;
			
			case -1881592504:
				iParam0 = Global_262145.f_5903[4];
				break;
			
			case 2115996117:
				iParam0 = Global_262145.f_5903[5];
				break;
			
			case 1824417551:
				iParam0 = Global_262145.f_5903[6];
				break;
			
			case 1502068898:
				iParam0 = Global_262145.f_5903[7];
				break;
			
			case -2019287742:
				iParam0 = Global_262145.f_5903[8];
				break;
			
			case -1780827729:
				iParam0 = Global_262145.f_5903[9];
				break;
			
			case -1966497207:
				iParam0 = Global_262145.f_5903[10];
				break;
			
			case -2126999769:
				iParam0 = Global_262145.f_5903[11];
				break;
			
			case 2014772448:
				iParam0 = Global_262145.f_5903[12];
				break;
			
			case 1705760778:
				iParam0 = Global_262145.f_5903[13];
				break;
			
			case 497993745:
				iParam0 = Global_262145.f_5903[14];
				break;
			
			case 1142887665:
				iParam0 = Global_262145.f_5903[15];
				break;
			
			case 22777707:
				iParam0 = Global_262145.f_5903[16];
				break;
			
			case 799173624:
				iParam0 = Global_262145.f_5903[17];
				break;
			
			case -410297401:
				iParam0 = Global_262145.f_5903[18];
				break;
			
			case 214410819:
				iParam0 = Global_262145.f_5903[19];
				break;
			
			case -2098342992:
				iParam0 = Global_262145.f_5903[20];
				break;
			
			case -1280920283:
				iParam0 = Global_262145.f_5903[21];
				break;
			
			case -1501455653:
				iParam0 = Global_262145.f_5903[22];
				break;
			
			case 2117454408:
				iParam0 = Global_262145.f_5903[23];
				break;
			
			case -1945704982:
				iParam0 = Global_262145.f_5903[24];
				break;
			
			case -1581870771:
				iParam0 = Global_262145.f_5903[25];
				break;
			
			case -1350521631:
				iParam0 = Global_262145.f_5903[26];
				break;
			
			case -954508266:
				iParam0 = Global_262145.f_5903[27];
				break;
			
			case -716244867:
				iParam0 = Global_262145.f_5903[28];
				break;
			
			case 185361399:
				iParam0 = Global_262145.f_5903[29];
				break;
			
			case -1208107213:
				iParam0 = Global_262145.f_5903[30];
				break;
			
			case -812421538:
				iParam0 = Global_262145.f_5903[31];
				break;
			
			case -566096965:
				iParam0 = Global_262145.f_5903[32];
				break;
			
			case -316757644:
				iParam0 = Global_262145.f_5903[33];
				break;
			
			case -103496992:
				iParam0 = Global_262145.f_5903[34];
				break;
			
			case 391708136:
				iParam0 = Global_262145.f_5903[35];
				break;
			
			case 616667309:
				iParam0 = Global_262145.f_5903[36];
				break;
			
			case 870102755:
				iParam0 = Global_262145.f_5903[37];
				break;
			
			case 1093030262:
				iParam0 = Global_262145.f_5903[38];
				break;
			
			case 1378218869:
				iParam0 = Global_262145.f_5903[39];
				break;
			
			case 332555747:
				iParam0 = Global_262145.f_5903[40];
				break;
			
			case 1077526193:
				iParam0 = Global_262145.f_5903[41];
				break;
			
			case 1332632858:
				iParam0 = Global_262145.f_5903[42];
				break;
			
			case 1556379590:
				iParam0 = Global_262145.f_5903[43];
				break;
			
			case 1780093553:
				iParam0 = Global_262145.f_5903[44];
				break;
			
			case 2001284303:
				iParam0 = Global_262145.f_5903[45];
				break;
			
			case -2059941716:
				iParam0 = Global_262145.f_5903[46];
				break;
			
			case -1759875983:
				iParam0 = Global_262145.f_5903[47];
				break;
			
			case -1521153818:
				iParam0 = Global_262145.f_5903[48];
				break;
			
			case -878906519:
				iParam0 = Global_262145.f_8244;
				break;
			
			case -1176252425:
				iParam0 = Global_262145.f_8245;
				break;
			
			case -712472768:
				iParam0 = Global_262145.f_8246;
				break;
			
			case 1391002107:
				iParam0 = Global_262145.f_8247;
				break;
			
			case -1353368870:
				iParam0 = Global_262145.f_8248;
				break;
			
			case -1667033738:
				iParam0 = Global_262145.f_8249;
				break;
			
			case 1043028100:
				iParam0 = Global_262145.f_8250;
				break;
			
			case 1809953776:
				iParam0 = Global_262145.f_8251;
				break;
			
			case 1182362116:
				iParam0 = Global_262145.f_8252;
				break;
			
			case 836452552:
				iParam0 = Global_262145.f_8253;
				break;
			
			case 1660756747:
				iParam0 = Global_262145.f_8254;
				break;
			
			case -1978109635:
				iParam0 = Global_262145.f_8255;
				break;
			
			case 1887252863:
				iParam0 = Global_262145.f_8256;
				break;
			
			case -1932760547:
				iParam0 = Global_262145.f_8257;
				break;
			
			case -1715960787:
				iParam0 = Global_262145.f_8258;
				break;
			
			case 1505482034:
				iParam0 = Global_262145.f_7188;
				break;
			
			case 1684269698:
				iParam0 = Global_262145.f_7189;
				break;
			
			case 1983811127:
				iParam0 = Global_262145.f_7190;
				break;
			
			case -406884045:
				iParam0 = Global_262145.f_7191;
				break;
			
			case -112389050:
				iParam0 = Global_262145.f_7192;
				break;
			
			case 84487102:
				iParam0 = Global_262145.f_7193;
				break;
			
			case 382193467:
				iParam0 = Global_262145.f_7194;
				break;
			
			case 547152613:
				iParam0 = Global_262145.f_7195;
				break;
			
			case 845317744:
				iParam0 = Global_262145.f_7196;
				break;
			
			case 1578163660:
				iParam0 = Global_262145.f_7197;
				break;
			
			case 2031294192:
				iParam0 = Global_262145.f_7198;
				break;
			
			case -1257730342:
				iParam0 = Global_262145.f_7199;
				break;
			
			case -698953354:
				iParam0 = Global_262145.f_7200;
				break;
			
			case 274646413:
				iParam0 = Global_262145.f_7201;
				break;
			
			case -1044305845:
				iParam0 = Global_262145.f_7202;
				break;
			
			case 1385548270:
				iParam0 = Global_262145.f_7203;
				break;
			
			case 72658285:
				iParam0 = Global_262145.f_7204;
				break;
			
			case 773259505:
				iParam0 = Global_262145.f_7205;
				break;
			
			case 1600250758:
				iParam0 = Global_262145.f_7206;
				break;
			
			case -1686414408:
				iParam0 = Global_262145.f_7207;
				break;
			
			case -1971865383:
				iParam0 = Global_262145.f_7208;
				break;
			
			case -1808184228:
				iParam0 = Global_262145.f_7209;
				break;
			
			case -1494453822:
				iParam0 = Global_262145.f_7210;
				break;
			
			case -1360985685:
				iParam0 = Global_262145.f_7211;
				break;
			
			case -1063344858:
				iParam0 = Global_262145.f_7212;
				break;
			
			case 225394382:
				iParam0 = Global_262145.f_7213;
				break;
			
			case -550903236:
				iParam0 = Global_262145.f_7214;
				break;
			
			case -836157369:
				iParam0 = Global_262145.f_7215;
				break;
			
			case -56320715:
				iParam0 = Global_262145.f_7216;
				break;
			
			case 760970914:
				iParam0 = Global_262145.f_7217;
				break;
		}
		return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) * Global_262145.f_61));
	}
	return iParam0;
}


int func_412()//Position - 0x3DB43
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar1 = 0;
		while (iVar1 < 384)
		{
			iVar2 = (iVar1 / 32);
			iVar3 = (iVar1 % 32);
			if (MISC::IS_BIT_SET(Local_92.f_429[iVar2], iVar3))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 71)
	{
		iVar2 = (iVar1 / 32);
		iVar3 = (iVar1 % 32);
		if (MISC::IS_BIT_SET(Local_92.f_424[iVar2], iVar3))
		{
			iVar0++;
			if (GlobalFunc_523(iVar2, iVar3) == -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return iVar0;
}


int func_414(var uParam0)//Position - 0x3DBE9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar1 = (384 - 1);
		while (iVar1 >= 0)
		{
			iVar2 = (iVar1 / 32);
			iVar3 = (iVar1 % 32);
			if (MISC::IS_BIT_SET(Local_92.f_429[iVar2], iVar3))
			{
				iVar0++;
				if (iVar0 == Global_2543381)
				{
					*uParam0 = (129 + iVar1);
					return 1;
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	iVar1 = (71 - 1);
	while (iVar1 >= 0)
	{
		iVar2 = (iVar1 / 32);
		iVar3 = (iVar1 % 32);
		if (MISC::IS_BIT_SET(Local_92.f_424[iVar2], iVar3))
		{
			iVar0++;
			if (iVar0 == Global_2543381)
			{
				*uParam0 = GlobalFunc_523(iVar2, iVar3);
				return 1;
			}
		}
		iVar1 = (iVar1 + -1);
	}
	*uParam0 = -1;
	return 0;
}

void func_415(int iParam0, bool bParam1)//Position - 0x3DCA4
{
	if (Global_68245)
	{
		func_417(iParam0, bParam1, -1);
	}
	else
	{
		func_416(GlobalFunc_8315(), iParam0, bParam1);
	}
}

void func_416(int iParam0, int iParam1, bool bParam2)//Position - 0x3DCCB
{
	struct<11> Var0;
	
	if (GlobalFunc_42(iParam0))
	{
		if (GlobalFunc_5123(&Var0, iParam1, GlobalFunc_522(iParam0), 0, -1))
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iParam0 /*15*/].f_5[Var0.f_9]), Var0.f_10);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iParam0 /*15*/].f_5[Var0.f_9]), Var0.f_10);
			}
		}
	}
}

void func_417(var uParam0, bool bParam1, int iParam2)//Position - 0x3DD33
{
	if (bParam1)
	{
		if (!func_421(uParam0))
		{
			func_418(uParam0, 1, iParam2);
		}
	}
	else if (func_421(uParam0))
	{
		func_418(uParam0, 0, iParam2);
	}
}

void func_418(var uParam0, bool bParam1, int iParam2)//Position - 0x3DD68
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_420(uParam0);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, GlobalFunc_299(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, GlobalFunc_299(iVar1));
		}
		GlobalFunc_6784(GlobalFunc_5375(uParam0), iVar0, iParam2, 1);
	}
}


int func_420(var uParam0)//Position - 0x3DF01
{
	int iVar0;
	
	iVar0 = GlobalFunc_6671(GlobalFunc_5375(uParam0), -1, 0);
	return iVar0;
}

bool func_421(var uParam0)//Position - 0x3DF19
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_420(uParam0);
	iVar1 = uParam0;
	return MISC::IS_BIT_SET(iVar0, GlobalFunc_299(iVar1));
}

int func_422(int iParam0, char* sParam1)//Position - 0x3DF39
{
	struct<4> Var0;
	struct<4> Var4;
	
	StringCopy(&Var0, sParam1, 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (GlobalFunc_5123(&Var4, iParam0, GlobalFunc_303(PLAYER::PLAYER_PED_ID()), PLAYER::PLAYER_PED_ID(), -1))
		{
			Var0 = { Var4 };
		}
	}
	if (func_289(&Var0))
	{
		if (!GlobalFunc_5449() || !Global_2543260)
		{
			return 0;
		}
	}
	return func_327(iParam0);
}



int func_425(int iParam0)//Position - 0x3DFF3
{
	if (Global_68245)
	{
		return func_421(iParam0);
	}
	else
	{
		return func_426(GlobalFunc_8315(), iParam0);
	}
	return 0;
}

int func_426(int iParam0, int iParam1)//Position - 0x3E01C
{
	struct<11> Var0;
	
	if (GlobalFunc_42(iParam0))
	{
		if (GlobalFunc_5123(&Var0, iParam1, GlobalFunc_522(iParam0), 0, -1))
		{
			return MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iParam0 /*15*/].f_5[Var0.f_9], Var0.f_10);
		}
	}
	return 0;
}

int func_427(var uParam0, bool bParam1)//Position - 0x3E062
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = *uParam0;
	while (func_246(iVar2, &iVar0, &iVar1, 1, 1))
	{
		iVar2++;
		func_246(iVar2, &iVar0, &iVar1, 1, 1);
		if (func_428(iVar0, iVar1))
		{
			*uParam0 = iVar2;
			return 1;
		}
	}
	if (bParam1)
	{
		iVar2 = 0;
		while (func_246(iVar2, &iVar0, &iVar1, 1, 1))
		{
			if (func_428(iVar0, iVar1))
			{
				*uParam0 = iVar2;
				return 1;
			}
			iVar2++;
		}
	}
	return 0;
}

int func_428(int iParam0, int iParam1)//Position - 0x3E0DD
{
	int iVar0;
	int iVar1;
	struct<12> Var2;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<8> Var20;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar15 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		iVar16 = GlobalFunc_303(PLAYER::PLAYER_PED_ID());
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar19 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar16);
			iVar18 = 0;
			while (iVar18 < iVar19)
			{
				if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar16, iVar18, &Var20))
				{
					if ((!FILES::IS_CONTENT_ITEM_LOCKED(Var20) && Var20.f_6 != 2140335355) && Var20.f_6 != 277073536)
					{
						if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var20.f_2, Var20.f_3) == iParam0 && func_331(iVar15, &(Var20.f_7), Var20.f_6, iParam0, iParam1))
						{
							return 1;
						}
					}
				}
				iVar18++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar17 = GlobalFunc_523(iVar0, iVar1);
				if (GlobalFunc_5123(&Var2, GlobalFunc_523(iVar0, iVar1), iVar16, PLAYER::PLAYER_PED_ID(), -1))
				{
					if (((!func_330(iVar17, iVar16) && !func_329(iVar17, iVar16)) && Var2.f_8 != 2140335355) && Var2.f_8 != 277073536)
					{
						if (func_327(Var2.f_11) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_3() == 0))
						{
							if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var2.f_4, Var2.f_5) == iParam0 && func_331(iVar15, &Var2, Var2.f_8, iParam0, iParam1))
							{
								return 1;
							}
						}
					}
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_429(var uParam0, bool bParam1)//Position - 0x3E254
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = *uParam0;
	while (func_246(iVar2, &iVar0, &iVar1, 1, 1))
	{
		iVar2 = (iVar2 - 1);
		func_246(iVar2, &iVar0, &iVar1, 1, 1);
		if (func_428(iVar0, iVar1))
		{
			*uParam0 = iVar2;
			return 1;
		}
	}
	if (bParam1)
	{
		iVar2 = 7;
		while (func_246(iVar2, &iVar0, &iVar1, 1, 1))
		{
			if (func_428(iVar0, iVar1))
			{
				*uParam0 = iVar2;
				return 1;
			}
			iVar2 = (iVar2 - 1);
		}
	}
	return 0;
}









void func_438()//Position - 0x3E8AC
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


void func_440(int iParam0)//Position - 0x3EFA3
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<4> Var19;
	struct<16> Var23;
	
	if (Local_92.f_103.f_5 == 0)
	{
		GlobalFunc_262(0);
		GlobalFunc_7023(Local_92);
		GlobalFunc_1317(1, 0, 0, 0, 0);
		GlobalFunc_1318("TAT_TITLE_0");
		if (!Local_92.f_103.f_17)
		{
			Local_92.f_103.f_3 = -1;
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_428(0, 0))
			{
				if (func_326(0, 0))
				{
					GlobalFunc_7830(0, "TAT_ZONE_0", 0, 1, 0, 0);
				}
				else
				{
					GlobalFunc_7830(0, "TAT_ZONE_0a", 1, 1, 0, 0);
					GlobalFunc_8447(2, 0);
				}
				if (Local_92.f_103.f_3 == -1)
				{
					Local_92.f_103.f_3 = 0;
				}
			}
		}
		else
		{
			if (func_428(0, 0))
			{
				if (func_326(0, 0))
				{
					GlobalFunc_7830(0, "TAT_ZONE_0a", 0, 1, 0, 0);
				}
				else
				{
					GlobalFunc_7830(0, "TAT_ZONE_0a", 1, 1, 0, 0);
					GlobalFunc_8447(2, 0);
				}
				if (Local_92.f_103.f_3 == -1)
				{
					Local_92.f_103.f_3 = 0;
				}
			}
			if (func_428(0, 1))
			{
				if (func_326(0, 1))
				{
					GlobalFunc_7830(1, "TAT_ZONE_0b", 0, 1, 0, 0);
				}
				else
				{
					GlobalFunc_7830(1, "TAT_ZONE_0b", 1, 1, 0, 0);
					GlobalFunc_8447(2, 0);
				}
				if (Local_92.f_103.f_3 == -1)
				{
					Local_92.f_103.f_3 = 1;
				}
			}
			if (func_428(0, 2))
			{
				if (func_326(0, 2))
				{
					GlobalFunc_7830(2, "TAT_ZONE_0c", 0, 1, 0, 0);
				}
				else
				{
					GlobalFunc_7830(2, "TAT_ZONE_0c", 1, 1, 0, 0);
					GlobalFunc_8447(2, 0);
				}
				if (Local_92.f_103.f_3 == -1)
				{
					Local_92.f_103.f_3 = 2;
				}
			}
		}
		if (func_428(1, -1))
		{
			if (func_326(1, -1))
			{
				GlobalFunc_7830(3, "TAT_ZONE_1", 0, 1, 0, 0);
			}
			else
			{
				GlobalFunc_7830(3, "TAT_ZONE_1", 1, 1, 0, 0);
				GlobalFunc_8447(2, 0);
			}
			if (Local_92.f_103.f_3 == -1)
			{
				Local_92.f_103.f_3 = 3;
			}
		}
		if (func_428(2, -1))
		{
			if (func_326(2, -1))
			{
				GlobalFunc_7830(4, "TAT_ZONE_2", 0, 1, 0, 0);
			}
			else
			{
				GlobalFunc_7830(4, "TAT_ZONE_2", 1, 1, 0, 0);
				GlobalFunc_8447(2, 0);
			}
			if (Local_92.f_103.f_3 == -1)
			{
				Local_92.f_103.f_3 = 4;
			}
		}
		if (func_428(3, -1))
		{
			if (func_326(3, -1))
			{
				GlobalFunc_7830(5, "TAT_ZONE_3", 0, 1, 0, 0);
			}
			else
			{
				GlobalFunc_7830(5, "TAT_ZONE_3", 1, 1, 0, 0);
				GlobalFunc_8447(2, 0);
			}
			if (Local_92.f_103.f_3 == -1)
			{
				Local_92.f_103.f_3 = 5;
			}
		}
		if (func_428(4, -1))
		{
			if (func_326(4, -1))
			{
				GlobalFunc_7830(6, "TAT_ZONE_4", 0, 1, 0, 0);
			}
			else
			{
				GlobalFunc_7830(6, "TAT_ZONE_4", 1, 1, 0, 0);
				GlobalFunc_8447(2, 0);
			}
			if (Local_92.f_103.f_3 == -1)
			{
				Local_92.f_103.f_3 = 6;
			}
		}
		if (func_428(5, -1))
		{
			if (func_326(5, -1))
			{
				GlobalFunc_7830(7, "TAT_ZONE_5", 0, 1, 0, 0);
			}
			else
			{
				GlobalFunc_7830(7, "TAT_ZONE_5", 1, 1, 0, 0);
				GlobalFunc_8447(2, 0);
			}
			if (Local_92.f_103.f_3 == -1)
			{
				Local_92.f_103.f_3 = 7;
			}
		}
		if (Local_92.f_103.f_3 == -1)
		{
			if (func_447())
			{
				GlobalFunc_7830(0, "TAT_NONE_OUT", 0, 1, 0, 0);
			}
			else
			{
				GlobalFunc_7830(0, "TAT_NONE", 0, 1, 0, 0);
			}
		}
		GlobalFunc_1355(Local_92.f_103.f_3, 1, 1);
		Local_92.f_103.f_17 = 0;
	}
	else if (Local_92.f_103.f_5 == 1)
	{
		GlobalFunc_262(0);
		GlobalFunc_7023(Local_92);
		GlobalFunc_1317(1, 1, 0, 0, 0);
		GlobalFunc_1316(1, 2, 1, 1, 1);
		if (Global_68245)
		{
			GlobalFunc_1318("TAT_TITLE_1_0");
		}
		else
		{
			GlobalFunc_1318("TAT_TITLE_1_0");
		}
		iVar16 = GlobalFunc_303(PLAYER::PLAYER_PED_ID());
		iVar17 = 7;
		iVar18 = -1;
		func_246(Local_92.f_103.f_3, &iVar17, &iVar18, 0, 0);
		func_445(iVar16, &(Local_92.f_424), &(Local_92.f_429), iVar17, iVar18);
		if (func_338(&iVar2, &iVar0) && GlobalFunc_5123(&Var3, iVar2, iVar16, PLAYER::PLAYER_PED_ID(), -1))
		{
			iVar1 = func_410(Var3.f_7, Var3);
			if (iVar1 == -1)
			{
				MemCopy(&Local_749, {Var3}, 16);
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
			{
				GlobalFunc_215(&Var23, Var3, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, 0, 0, -1, -1);
				if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&Var23))
				{
					Local_749 = { Var23 };
				}
			}
			if (!func_425(Var3.f_11) && func_422(Var3.f_11, &Var3))
			{
				GlobalFunc_7830(iVar0, &Var3, 1, 1, 0, 0);
				GlobalFunc_8447(2, 0);
			}
			else
			{
				GlobalFunc_7830(iVar0, &Var3, 0, 1, 0, 0);
			}
			if (!func_422(Var3.f_11, &Var3) || !MISC::IS_STRING_NULL_OR_EMPTY(&Local_749))
			{
				GlobalFunc_7830(iVar0, "", 1, 1, 0, 0);
				GlobalFunc_8447(15, 0);
			}
			else if (func_224(Var3.f_11))
			{
				GlobalFunc_7830(iVar0, "", 1, 1, 0, 0);
				GlobalFunc_8447(11, 0);
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_291(Var3.f_11, -1))
			{
				GlobalFunc_7830(iVar0, "ITEM_COST", 1, 1, 0, 0);
				GlobalFunc_8495(Global_262145.f_6116, 0);
			}
			else if (iVar1 > 0)
			{
				GlobalFunc_7830(iVar0, "ITEM_COST", 1, 1, 0, 0);
				GlobalFunc_8495(iVar1, 0);
			}
			else
			{
				GlobalFunc_7830(iVar0, "ITEM_FREE", 0, 1, 0, 0);
			}
			if (iVar2 == Local_92.f_443)
			{
				Var19 = { Var3 };
			}
			while (func_337(iVar2, &iVar2, &iVar0, 0))
			{
				if (GlobalFunc_5123(&Var3, iVar2, iVar16, PLAYER::PLAYER_PED_ID(), -1))
				{
					iVar1 = func_410(Var3.f_7, Var3);
					if (iVar1 == -1)
					{
						MemCopy(&Local_749, {Var3}, 16);
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_4979())
					{
						GlobalFunc_215(&Var23, Var3, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, 0, 0, -1, -1);
						if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&Var23))
						{
							Local_749 = { Var23 };
						}
					}
					if (!func_425(Var3.f_11) && func_422(Var3.f_11, &Var3))
					{
						GlobalFunc_7830(iVar0, &Var3, 1, 1, 0, 0);
						GlobalFunc_8447(2, 0);
					}
					else
					{
						GlobalFunc_7830(iVar0, &Var3, 0, 1, 0, 0);
					}
					if (!func_422(Var3.f_11, &Var3) || !MISC::IS_STRING_NULL_OR_EMPTY(&Local_749))
					{
						GlobalFunc_7830(iVar0, "", 1, 1, 0, 0);
						GlobalFunc_8447(15, 0);
					}
					else if (func_224(Var3.f_11))
					{
						GlobalFunc_7830(iVar0, "", 1, 1, 0, 0);
						GlobalFunc_8447(11, 0);
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_291(Var3.f_11, -1))
					{
						GlobalFunc_7830(iVar0, "ITEM_COST", 1, 1, 0, 0);
						GlobalFunc_8495(Global_262145.f_6116, 0);
					}
					else if (iVar1 > 0)
					{
						GlobalFunc_7830(iVar0, "ITEM_COST", 1, 1, 0, 0);
						GlobalFunc_8495(iVar1, 0);
					}
					else
					{
						GlobalFunc_7830(iVar0, "ITEM_FREE", 0, 1, 0, 0);
					}
					if (iVar2 == Local_92.f_443)
					{
						Var19 = { Var3 };
					}
				}
			}
		}
		else if (func_447())
		{
			GlobalFunc_7830(0, "TAT_NONE_OUT", 0, 1, 0, 0);
		}
		else
		{
			GlobalFunc_7830(0, "TAT_NONE", 0, 1, 0, 0);
		}
		if (Local_92.f_103.f_17)
		{
			GlobalFunc_2487(Local_92.f_103.f_2);
			GlobalFunc_1355(Local_92.f_103.f_1, 0, 1);
		}
		else
		{
			func_338(&(Local_92.f_443), &(Local_92.f_103.f_1));
			GlobalFunc_1355(Local_92.f_103.f_1, 1, 1);
		}
		Local_92.f_103.f_2 = GlobalFunc_2479();
		Local_92.f_103.f_17 = 0;
		*iParam0 = 1;
		iLocal_716 = -1;
		if (MISC::GET_HASH_KEY(&(Local_92.f_103.f_11)) != 0)
		{
			if (!func_289(&Var19))
			{
				GlobalFunc_1353(&(Local_92.f_103.f_11), 4000, 0);
				if (iLocal_748 && !MISC::IS_STRING_NULL_OR_EMPTY(GlobalFunc_2591(&Var19, 0)))
				{
					GlobalFunc_1330(GlobalFunc_2591(&Var19, 0));
				}
			}
			else
			{
				GlobalFunc_1353("TAT_LCKCREW", 4000, 0);
			}
			StringCopy(&(Local_92.f_103.f_11), "", 16);
			iLocal_748 = 0;
		}
	}
	iLocal_698 = 1;
}





void func_445(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x3FCDD
{
	int iVar0;
	int iVar1;
	struct<12> Var2;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<8> Var18;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar17 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iParam0);
		iVar16 = 0;
		while (iVar16 < *uParam2)
		{
			(*uParam2)[iVar16] = 0;
			iVar16++;
		}
		if (iVar17 > 384)
		{
			iVar17 = 384;
		}
		iVar16 = 0;
		while (iVar16 < iVar17)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iParam0, iVar16, &Var18))
			{
				if (((!FILES::IS_CONTENT_ITEM_LOCKED(Var18) && !func_332(Var18.f_2, Var18.f_3)) && Var18.f_6 != 2140335355) && Var18.f_6 != 277073536)
				{
					if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var18.f_2, Var18.f_3) == iParam3 && func_331(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &(Var18.f_7), Var18.f_6, iParam3, iParam4))
					{
						MISC::SET_BIT(uParam2[(iVar16 / 32)], (iVar16 % 32));
					}
				}
			}
			iVar16++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam1)[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar15 = GlobalFunc_523(iVar0, iVar1);
			if (GlobalFunc_5123(&Var2, iVar15, iParam0, PLAYER::PLAYER_PED_ID(), -1))
			{
				if (((!func_330(iVar15, iParam0) && !func_329(iVar15, iParam0)) && Var2.f_8 != 2140335355) && Var2.f_8 != 277073536)
				{
					if (func_327(Var2.f_11) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_3() == 0))
					{
						if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(Var2.f_4, Var2.f_5) == iParam3 && func_331(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var2, Var2.f_8, iParam3, iParam4))
						{
							MISC::SET_BIT(uParam1[iVar0], iVar1);
						}
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}


int func_447()//Position - 0x3FECF
{
	int iVar0;
	char* sVar1;
	int iVar14;
	
	iVar14 = GlobalFunc_303(PLAYER::PLAYER_PED_ID());
	iVar0 = 0;
	while (iVar0 < 71)
	{
		if (GlobalFunc_5123(&sVar1, iVar0, iVar14, PLAYER::PLAYER_PED_ID(), -1))
		{
			if (func_327(iVar0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}











void func_458(var uParam0, float fParam1)//Position - 0x4084D
{
	struct<3> Var0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!Global_68245)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("family1")) == 0)
			{
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Var0, 50f);
				if (GlobalFunc_330(*uParam0) != 3)
				{
					MISC::CLEAR_AREA_OF_OBJECTS(Var0, fParam1, 0);
				}
				MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 5f, 0);
				MISC::CLEAR_AREA_OF_PEDS(Var0, 1.5f, 1);
			}
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		}
	}
	CAM::SET_WIDESCREEN_BORDERS(1, -1);
	WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
	Global_2435893 = 0;
	HUD::THEFEED_FLUSH_QUEUE();
	Global_91341 = 1;
	GlobalFunc_8380(1, 1, 0, 0);
}













void func_471()//Position - 0x4168F
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 358242/*func_555*/;
	}
	else
	{
		iVar0 = 348247/*func_537*/;
	}
	if (GlobalFunc_5785(1))
	{
		iVar1 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(Local_607.f_2) && !PED::IS_PED_INJURED(Local_607.f_2))
		{
			iVar1 = Local_607.f_2;
		}
		switch (ENTITY::GET_ENTITY_MODEL(iVar1))
		{
			case joaat("player_zero"):
				func_537(iVar1, 3, 169, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				if (!GlobalFunc_7685(iVar1))
				{
					func_537(iVar1, 4, 72, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				func_537(iVar1, 6, 6, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 5, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 10, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 11, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_533(iVar1, &iVar0);
				PED::REMOVE_PED_HELMET(iVar1, 1);
				break;
			
			case joaat("player_one"):
				func_537(iVar1, 3, 260, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				if (!GlobalFunc_7685(iVar1))
				{
					func_537(iVar1, 4, 72, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				func_537(iVar1, 6, 17, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 5, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 10, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 11, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_533(iVar1, &iVar0);
				PED::REMOVE_PED_HELMET(iVar1, 1);
				break;
			
			case joaat("player_two"):
				func_537(iVar1, 3, 96, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				if (!GlobalFunc_7685(iVar1))
				{
					func_537(iVar1, 4, 81, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				func_537(iVar1, 6, 8, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 5, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 10, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_537(iVar1, 11, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_533(iVar1, &iVar0);
				PED::REMOVE_PED_HELMET(iVar1, 1);
				break;
			
			case joaat("mp_m_freemode_01"):
				if (((Local_92.f_443 == 13 || Local_92.f_443 == 14) || Local_92.f_443 == 15) || Local_92.f_443 == 16)
				{
					func_472(iVar1, &(Local_92.f_444), 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 11, 15, 0, 0);
					if (PED::GET_PED_DRAWABLE_VARIATION(iVar1, 3) != 15)
					{
						PED::SET_PED_COMPONENT_VARIATION(iVar1, 3, 15, 0, 0);
					}
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 8, 15, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 9, 0, 0, 0);
				}
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 5, 0, 0, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iVar1, 6) != 5)
				{
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 6, 5, 0, 0);
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iVar1, 4) != 14)
				{
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 4, 14, 0, 0);
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iVar1, 7) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iVar1, 7, 0, 0, 0);
				}
				PED::CLEAR_ALL_PED_PROPS(iVar1);
				func_533(iVar1, &iVar0);
				if (GlobalFunc_6707(161, -1))
				{
					func_555(iVar1, 2, GlobalFunc_6671(2035, -1, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				else
				{
					func_555(iVar1, 2, GlobalFunc_6671(740, -1, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				break;
			
			case joaat("mp_f_freemode_01"):
				if (((Local_92.f_443 == 13 || Local_92.f_443 == 14) || Local_92.f_443 == 15) || Local_92.f_443 == 16)
				{
					func_472(iVar1, &(Local_92.f_444), 0);
				}
				else
				{
					func_555(iVar1, 11, 240, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					func_555(iVar1, 3, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					func_555(iVar1, 8, 120, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					func_555(iVar1, 9, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				func_555(iVar1, 10, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				func_555(iVar1, 5, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				func_555(iVar1, 4, 240, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				func_555(iVar1, 6, 80, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				func_555(iVar1, 7, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				PED::CLEAR_ALL_PED_PROPS(iVar1);
				func_533(iVar1, &iVar0);
				if (GlobalFunc_6707(161, -1))
				{
					func_555(iVar1, 2, GlobalFunc_6671(2035, -1, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				else
				{
					func_555(iVar1, 2, GlobalFunc_6671(740, -1, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar1, 1, 1);
			PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar1, 0, 1);
			PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar1, 4, 1);
			PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar1, 5, 1);
			PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar1, 2, 1);
			PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar1, 3, 1);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iVar1, 0, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iVar1, 4, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iVar1, 5, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iVar1, 2, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iVar1, 3, "ALL");
				GlobalFunc_10537(MISC::GET_HASH_KEY("torsoDecal"), iVar1);
			}
		}
	}
}

void func_472(int iParam0, var uParam1, bool bParam2)//Position - 0x41C0C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (GlobalFunc_42(iVar0))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (GlobalFunc_11037(iParam0, iVar1, &iVar2, 0))
			{
				func_537(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11035(iParam0, iVar1, &iVar2))
			{
				func_537(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_555(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_555(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_6784(740, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6784(2035, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6785(161, 1, -1, 1);
		}
	}
}





























































int func_533(int iParam0, int iParam1)//Position - 0x54A6A
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
		iVar4 = GlobalFunc_7953(iParam0, iVar2);
		if (GlobalFunc_6666(iVar5, 14, iVar4))
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
			Call_Loc(*iParam1);
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar3 = iVar0;
		if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
		{
			iVar4 = GlobalFunc_6669(iParam0, iVar3);
			if (GlobalFunc_6666(iVar5, iVar3, iVar4))
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
				Call_Loc(*iParam1);
			}
		}
		iVar0++;
	}
	return 0;
}




int func_537(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x55057
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
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8613(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_6669(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6669(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = GlobalFunc_7953(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7953(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7953(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_68149 };
		}
		else
		{
			uVar11 = { GlobalFunc_7617(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, uVar11[iVar0]) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_68165 };
						}
						else
						{
							uVar27 = { GlobalFunc_7616(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8613(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11222(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_537(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							GlobalFunc_4911(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
						}
						GlobalFunc_8613(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11222(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_537(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11095(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11037(iParam0, iVar10, &iVar4, 1))
							{
								func_537(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_537(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10836(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_537(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_537(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_537(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_537(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_537(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { GlobalFunc_7616(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8613(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11222(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_537(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8613(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11222(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_537(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11222(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_537(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11036(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11037(iParam0, iVar10, &iVar4, 0))
		{
			func_537(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11035(iParam0, iVar10, &iVar4))
		{
			func_537(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}


















int func_555(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x57762
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
	var uVar90;
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
		Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		func_602(iVar5, iParam1, iParam2, 1);
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
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 10, 0) };
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
						func_602(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, uVar15[iVar0]) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									func_602(iVar5, iVar0, uVar15[iVar0], 1);
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
								func_602(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, GlobalFunc_11096(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_555(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9005();
			if (iVar57 != -1)
			{
				GlobalFunc_9519(iVar57, 0, Global_68104);
			}
			GlobalFunc_10814(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				func_602(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11040(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_555(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar69 = GlobalFunc_6669(iParam0, 1);
			iVar3 = GlobalFunc_11040(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			func_602(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_555(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar70 = GlobalFunc_6669(iParam0, 11);
				iVar71 = GlobalFunc_6669(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_6669(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = GlobalFunc_11040(iParam0, iVar5, 11, iVar70, 3, 0);
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
					iVar70 = GlobalFunc_6669(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_555(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
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
								func_555(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_555(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 8, iVar71) };
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
										Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar82) };
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
								func_555(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_555(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10810(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			GlobalFunc_10814(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11096(iParam0, 8, -1), iParam2);
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = GlobalFunc_6671(2135, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = GlobalFunc_6671(2142, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_590(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10814(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10810(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_6669(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_6669(iParam0, 7);
				if (!GlobalFunc_8360(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar87 = GlobalFunc_6671(2082, iParam10, 0);
				iVar88 = GlobalFunc_6671(2083, iParam10, 0);
				iVar89 = GlobalFunc_6671(2084, iParam10, 0);
				uVar90 = GlobalFunc_6788(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar87, iVar88, iVar89, 0f, uVar90, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar87, iVar88, iVar89, 0f, fVar90, 0f, false);
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
				GlobalFunc_9000(iParam0, Global_68104);
			}
			iVar92 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar93 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar92, joaat("FORCE_PROP"), 0))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar93, joaat("FORCE_PROP"), 0))
				{
					iVar94 = GlobalFunc_6669(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7953(iParam0, iVar95);
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
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_555(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7688(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!GlobalFunc_10918(iParam0, 9, iVar97))
						{
							func_555(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_555(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_555(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar98 = GlobalFunc_6671(2024, -1, 0);
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
					iVar99 = GlobalFunc_11096(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11096(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_555(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_555(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_555(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_555(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11187(iParam0, &uVar4))
		{
			func_555(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_555(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_555(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_555(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_555(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}



































void func_590(int iParam0, int iParam1, bool bParam2)//Position - 0x5D192
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_10537(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9519(iVar1, 1, Global_68104);
	}
	func_591(iParam0, bParam2, 0);
}

void func_591(int iParam0, bool bParam1, bool bParam2)//Position - 0x5D1D4
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
		bVar15 = func_135(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = GlobalFunc_11188(iParam0);
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
			if (GlobalFunc_8361(iVar18, iVar0))
			{
				if (GlobalFunc_5123(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9001(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8361(123, iVar0))
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
					if (GlobalFunc_8361(iVar36, iVar0))
					{
						if (GlobalFunc_9001(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
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











void func_602(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x62042
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
		Global_68106[2 /*14*/] = { GlobalFunc_10837(iParam0, iParam1, iParam2) };
		if (MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				GlobalFunc_8014(Global_2621444, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				GlobalFunc_8014(Global_2621444, 2, 1, 1, -1);
			}
			else
			{
				GlobalFunc_8014(Global_2621444, 2, 1, 1, -1);
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
							GlobalFunc_8014(iVar2, 2, 1, 1, -1);
							if (iVar1 < Global_2542253)
							{
								Global_2542253[iVar1] = iVar2;
								Global_2542364[iVar1] = iVar4;
							}
						}
						else
						{
							func_602(iParam0, GlobalFunc_33(iVar4), uVar3, 0);
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
									func_602(iParam0, GlobalFunc_33(Global_2542364[iVar1]), GlobalFunc_4914(iParam0, Global_2542253[iVar1], GlobalFunc_33(Global_2542364[iVar1]), 3), 1);
								}
								else
								{
									func_602(iParam0, GlobalFunc_33(Global_2542364[iVar1]), GlobalFunc_4914(iParam0, Global_2542253[iVar1], GlobalFunc_33(Global_2542364[iVar1]), 4), 1);
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
				iVar6 = GlobalFunc_6671(iVar5, Global_68104, 0);
				MISC::SET_BIT(&iVar6, Global_68106[2 /*14*/].f_1);
				GlobalFunc_6784(iVar5, iVar6, Global_68104, 1);
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
							func_602(iParam0, 14, iVar7, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar7 = (83 + Global_68106[2 /*14*/].f_4);
							func_602(iParam0, 14, iVar7, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar7 = (64 + Global_68106[2 /*14*/].f_4);
							func_602(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar7 = (48 + Global_68106[2 /*14*/].f_4);
							func_602(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar7 = (112 + Global_68106[2 /*14*/].f_4);
							func_602(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar7 = (96 + Global_68106[2 /*14*/].f_4);
							func_602(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar7 = (160 + Global_68106[2 /*14*/].f_4);
							func_602(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar7 = (176 + Global_68106[2 /*14*/].f_4);
							func_602(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar7 = (0 + Global_68106[2 /*14*/].f_4);
							func_602(iParam0, 11, iVar7, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar7 = (16 + Global_68106[2 /*14*/].f_4);
							func_602(iParam0, 11, iVar7, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar7 = (32 + Global_68106[2 /*14*/].f_4);
							func_602(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar7 = (224 + Global_68106[2 /*14*/].f_4);
							func_602(iParam0, 8, iVar7, 0);
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
										func_602(iParam0, 8, (241 + iVar30), 0);
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
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								
								case 1:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								
								case 2:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								
								case 3:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								
								case 4:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								
								case 5:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								
								case 6:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								
								case 7:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								
								case 8:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								
								case 9:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								
								case 10:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								
								case 11:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								
								case 12:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								
								case 13:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								
								case 14:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								
								case 15:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_68106[2 /*14*/].f_4)
							{
								case 0:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								
								case 1:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								
								case 2:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								
								case 3:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								
								case 4:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								
								case 5:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								
								case 6:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								
								case 7:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								
								case 8:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								
								case 9:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								
								case 10:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								
								case 11:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								
								case 12:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								
								case 13:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								
								case 14:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								
								case 15:
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_602(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_602(iParam0, 8, iVar7, 0);
						}
					}
				}
				Global_68106[2 /*14*/] = { GlobalFunc_10837(iParam0, iParam1, iParam2) };
				if (iParam1 == 11)
				{
					iVar8 = GlobalFunc_6741(iParam0, iParam2, Global_68106[2 /*14*/].f_4);
					if (iVar8 != -99)
					{
						func_602(iParam0, 8, iVar8, 0);
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
									func_602(iParam0, 8, (136 + iVar51), 0);
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
						func_602(iParam0, 11, iVar8, 0);
					}
				}
			}
		}
	}
}


int func_604()//Position - 0x63233
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

int func_605()//Position - 0x63255
{
	if (Global_68245)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_607.f_2))
			{
				if (iLocal_747 == -1)
				{
					iLocal_747 = MISC::GET_GAME_TIMER();
				}
				Local_607.x = 1;
				Local_607.f_1 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
				STREAMING::REQUEST_MODEL(Local_607.f_1);
				if (STREAMING::HAS_MODEL_LOADED(Local_607.f_1))
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()) || (MISC::GET_GAME_TIMER() - iLocal_747) > 5000)
					{
						Local_607.f_2 = PED::CLONE_PED(PLAYER::PLAYER_PED_ID(), 0, 0, 0);
						Global_2542603 = Local_607.f_2;
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_607.f_2, Local_92.f_170.f_31, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_607.f_2, Local_92.f_170.f_34);
						ENTITY::SET_ENTITY_COLLISION(Local_607.f_2, false, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_607.f_2, true);
						ENTITY::SET_ENTITY_VISIBLE(Local_607.f_2, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_607.f_2, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_607.f_2, 1);
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_607.f_2, func_606(Global_1582596[PLAYER::PLAYER_ID() /*324*/]), 0);
						PED::_0x2B694AFCF64E6994(Local_607.f_2, 1);
						func_471();
						func_48(&(Local_607.f_2), -1, 0, 0);
					}
				}
				return 0;
			}
			if (!PED::IS_PED_INJURED(Local_607.f_2))
			{
				if (!PED::HAS_PED_HEAD_BLEND_FINISHED(Local_607.f_2) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_607.f_2))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_606(int iParam0)//Position - 0x633AA
{
	switch (iParam0)
	{
		case 1:
			return GlobalFunc_971(GlobalFunc_6671(1261, -1, 0));
			break;
		
		case 2:
			return GlobalFunc_971(GlobalFunc_6671(1260, -1, 0));
			break;
		
		default:
			return GlobalFunc_971(GlobalFunc_6671(1259, -1, 0));
			break;
	}
	return "";
}











void func_617(var uParam0, var uParam1)//Position - 0x637F5
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
		else if (!func_620(*uParam0, 0, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)))
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
		else if (!GlobalFunc_8371(*uParam0))
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



int func_620(int iParam0, bool bParam1, bool bParam2)//Position - 0x6395A
{
	bool bVar0;
	int iVar1;
	
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
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
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
		if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !bParam2)) || (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !bParam2)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(PLAYER::PLAYER_PED_ID())) || HUD::IS_HUD_COMPONENT_ACTIVE(19)) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || GlobalFunc_142()) || GlobalFunc_8624(iParam0)) || GlobalFunc_268()) || GlobalFunc_476()) || GlobalFunc_489())
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












void func_632()//Position - 0x63CD6
{
	if (GlobalFunc_5785(1))
	{
		func_633(&Local_92);
		if (!Local_92.f_8)
		{
			if (Local_92.f_3 != -1)
			{
				GlobalFunc_5420(&(Local_92.f_3));
			}
			GlobalFunc_2462();
		}
		if (!Local_92.f_7)
		{
			Local_92.f_11 = 1;
		}
	}
}

void func_633(var uParam0)//Position - 0x63D15
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	var uVar5;
	
	if (uParam0->f_1)
	{
		uParam0->f_7 = GlobalFunc_7702(*uParam0, 5, 1);
		uParam0->f_8 = uParam0->f_7;
		return;
	}
	iVar0 = uParam0->f_7;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	if (GlobalFunc_5785(1))
	{
		Var1 = { GlobalFunc_546(*uParam0) };
		fVar4 = GlobalFunc_2499(*uParam0);
		if (fVar4 < 50f)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uParam0->f_95)
			{
				if (GlobalFunc_2499(*uParam0) < 3.5f)
				{
					uParam0->f_7 = 1;
					uParam0->f_8 = 1;
				}
			}
			uVar5 = GlobalFunc_2464(*uParam0);
			if (GlobalFunc_2498(*uParam0) && !MISC::IS_STRING_NULL_OR_EMPTY(uVar5))
			{
				if (uParam0->f_87 == 0)
				{
					uParam0->f_87 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, sVar5);
				}
				if (Global_90014.f_288 == uParam0->f_87 && Global_90014.f_288 != 0)
				{
					uParam0->f_7 = 1;
					if (Global_90014.f_289 == uParam0->f_4 || uParam0->f_4 == 0)
					{
						uParam0->f_8 = 1;
					}
				}
			}
			else if (*uParam0 == 21 && fVar4 < 4.5f)
			{
				uParam0->f_7 = 1;
				uParam0->f_8 = 1;
			}
			else if (fVar4 < 3f)
			{
				uParam0->f_7 = 1;
				uParam0->f_8 = 1;
			}
		}
	}
	if (iVar0 != uParam0->f_7)
	{
		if (uParam0->f_7)
		{
		}
		func_191(*uParam0, uParam0->f_7);
	}
}





void func_638()//Position - 0x64676
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	bVar2 = false;
	if (GlobalFunc_1549(1))
	{
		if (Local_92.f_103 == -1)
		{
			Local_92.f_103 = Global_2428131.f_656.f_39;
			func_654(Local_92, &(Local_92.f_170));
		}
	}
	if (GlobalFunc_5785(1))
	{
		if (GlobalFunc_1549(1) || (((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_90014.f_1318) && func_620(Local_92, 1, 0)) && !func_653(Local_92)))
		{
			if (Local_92.f_103 == -1)
			{
				func_654(Local_92, &(Local_92.f_170));
				Local_92.f_103 = 0;
			}
			if (GlobalFunc_7136(-1))
			{
				bVar0 = true;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_92.f_170.f_13[0 /*3*/], Local_92.f_170.f_13[1 /*3*/], Local_92.f_170.f_26[0], 0, 1, 1) || GlobalFunc_1549(1))
			{
				func_650();
				bVar1 = true;
			}
		}
	}
	if (bVar0)
	{
		GlobalFunc_5839("SHOP_COPS");
	}
	else if (bVar1)
	{
		bVar2 = true;
		if (Local_92.f_3 == -1)
		{
			GlobalFunc_7016(&(Local_92.f_3), 3, "TAT_TRY_TAT", 0, 0);
		}
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
		PAD::SET_INPUT_EXCLUSIVE(0, 51);
		if (GlobalFunc_5079(Local_92.f_3, 1) || GlobalFunc_1549(1))
		{
			Local_92.f_11 = 4;
			Local_92.f_103.f_31 = 0;
			iLocal_747 = -1;
			func_663(&Local_92, &(Local_92.f_103));
			func_639();
			Local_92.f_443 = -1;
			bVar2 = false;
		}
	}
	if (!bVar2)
	{
		if (Local_92.f_3 != -1)
		{
			GlobalFunc_5420(&(Local_92.f_3));
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
}

void func_639()//Position - 0x64802
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_8358(PLAYER::PLAYER_PED_ID(), &(Local_92.f_444), 1);
		Local_92.f_509 = 1;
	}
}











void func_650()//Position - 0x653A5
{
	int iVar0;
	
	if (GlobalFunc_5785(1) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(Local_607.f_2) && !PED::IS_PED_INJURED(Local_607.f_2))
		{
			iVar0 = Local_607.f_2;
		}
		switch (ENTITY::GET_ENTITY_MODEL(iVar0))
		{
			case joaat("player_zero"):
				GlobalFunc_10927(iVar0, 3, 169);
				if (!GlobalFunc_7685(iVar0))
				{
					GlobalFunc_10927(iVar0, 4, 72);
				}
				GlobalFunc_10927(iVar0, 6, 6);
				GlobalFunc_10927(iVar0, 5, 0);
				GlobalFunc_10927(iVar0, 8, 0);
				GlobalFunc_10927(iVar0, 9, 0);
				GlobalFunc_10927(iVar0, 10, 0);
				GlobalFunc_10927(iVar0, 11, 0);
				break;
			
			case joaat("player_one"):
				GlobalFunc_10927(iVar0, 3, 260);
				if (!GlobalFunc_7685(iVar0))
				{
					GlobalFunc_10927(iVar0, 4, 72);
				}
				GlobalFunc_10927(iVar0, 6, 17);
				GlobalFunc_10927(iVar0, 5, 0);
				GlobalFunc_10927(iVar0, 8, 26);
				GlobalFunc_10927(iVar0, 9, 0);
				GlobalFunc_10927(iVar0, 10, 0);
				GlobalFunc_10927(iVar0, 11, 0);
				break;
			
			case joaat("player_two"):
				GlobalFunc_10927(iVar0, 3, 96);
				if (!GlobalFunc_7685(iVar0))
				{
					GlobalFunc_10927(iVar0, 4, 81);
				}
				GlobalFunc_10927(iVar0, 6, 8);
				GlobalFunc_10927(iVar0, 5, 0);
				GlobalFunc_10927(iVar0, 8, 15);
				GlobalFunc_10927(iVar0, 9, 0);
				GlobalFunc_10927(iVar0, 10, 0);
				GlobalFunc_10927(iVar0, 11, 0);
				break;
			}
	}
}



bool func_653(int iParam0)//Position - 0x6572D
{
	return GlobalFunc_7702(iParam0, 8, 1);
}

void func_654(int iParam0, var uParam1)//Position - 0x6573E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uParam1->f_1 = { 0f, 0f, 0f };
	uParam1->f_31 = { 0f, 0f, 0f };
	uParam1->f_34 = 0f;
	uParam1->f_35 = { 0f, 0f, 0f };
	uParam1->f_38 = 0f;
	iVar0 = MISC::GET_HASH_KEY("v_tattoo");
	iVar1 = MISC::GET_HASH_KEY("v_tattoo2");
	iVar2 = MISC::GET_HASH_KEY(GlobalFunc_2464(iParam0));
	if (iVar2 == iVar0)
	{
		*uParam1 = 7;
		uParam1->f_13[0 /*3*/] = { 325.2891f, 182.5561f, 102.5921f };
		uParam1->f_13[1 /*3*/] = { 323.9109f, 177.9154f, 104.5865f };
		uParam1->f_26[0] = 4.55f;
		uParam1->f_31 = { 323.5805f, 179.8582f, 103.5915f };
		uParam1->f_34 = 78.9718f;
		uParam1->f_35 = { 323.0614f, 180.4159f, 103.5915f };
		uParam1->f_38 = 42.4545f;
		uParam1->f_39 = { 319.7213f, 176.2593f, 103.5915f };
	}
	else if (iVar2 == iVar1)
	{
		*uParam1 = 7;
		uParam1->f_13[0 /*3*/] = { 1866.537f, 3747.879f, 32.03186f };
		uParam1->f_13[1 /*3*/] = { 1862.89f, 3745.79f, 34.06118f };
		uParam1->f_26[0] = 4.55f;
		uParam1->f_31 = { 1864.399f, 3747.767f, 33.0364f };
		uParam1->f_34 = 27.5523f;
		uParam1->f_35 = { 1863.972f, 3748.19f, 33.0364f };
		uParam1->f_38 = 350.0413f;
		uParam1->f_39 = { 1857.354f, 3747.635f, 33.0364f };
	}
	if (iVar2 == iVar0)
	{
		iVar3 = 22;
	}
	else if (iVar2 == iVar1)
	{
		iVar3 = 23;
	}
	GlobalFunc_7133(iVar3, iParam0, &(uParam1->f_13[0 /*3*/]));
	GlobalFunc_7133(iVar3, iParam0, &(uParam1->f_13[1 /*3*/]));
	GlobalFunc_7133(iVar3, iParam0, &(uParam1->f_31));
	GlobalFunc_7133(iVar3, iParam0, &(uParam1->f_35));
	GlobalFunc_7133(iVar3, iParam0, &(uParam1->f_39));
	GlobalFunc_7134(iVar3, iParam0, &(uParam1->f_34));
	GlobalFunc_7134(iVar3, iParam0, &(uParam1->f_38));
}





void func_659()//Position - 0x66166
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	
	if ((!PED::IS_PED_INJURED(Local_92.f_12) && GlobalFunc_5785(1)) && func_26(0))
	{
		if (Local_92.f_7)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!PED::IS_PED_HEADTRACKING_PED(Local_92.f_12, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_92.f_12, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
				}
				if (!PED::IS_PED_RAGDOLL(Local_92.f_12) && !TASK::IS_PED_GETTING_UP(Local_92.f_12))
				{
					if (!PED::IS_PED_FACING_PED(Local_92.f_12, PLAYER::PLAYER_PED_ID(), 120f))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_92.f_12, -875674219) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_92.f_12, PLAYER::PLAYER_PED_ID(), 0);
						}
					}
				}
			}
			else
			{
				iVar0 = PLAYER::PLAYER_PED_ID();
				if (ENTITY::DOES_ENTITY_EXIST(Local_607.f_2) && !PED::IS_PED_INJURED(Local_607.f_2))
				{
					iVar0 = Local_607.f_2;
				}
				if (!PED::IS_PED_HEADTRACKING_PED(Local_92.f_12, iVar0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_92.f_12, iVar0, -1, 2048, 4);
				}
				if (!PED::IS_PED_RAGDOLL(Local_92.f_12) && !TASK::IS_PED_GETTING_UP(Local_92.f_12))
				{
					if (!PED::IS_PED_FACING_PED(Local_92.f_12, iVar0, 130f))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_92.f_12, -875674219) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_92.f_12, iVar0, 0);
						}
					}
					else
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(Local_92.f_12, 1) };
						Var4 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
						uVar7 = MISC::GET_HEADING_FROM_VECTOR_2D((Var4.x - Var1.x), (Var4.f_1 - Var1.f_1));
						if (!PED::IS_PED_FACING_PED(Local_92.f_12, iVar0, 180f))
						{
							ENTITY::SET_ENTITY_HEADING(Local_92.f_12, uVar7);
						}
					}
				}
			}
		}
	}
}

void func_660(var uParam0, struct<3> Param1)//Position - 0x662E8
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1), Param1, 1) > 5f)
		{
			func_661(*uParam0, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
	}
}

void func_661(int iParam0, bool bParam1)//Position - 0x66322
{
	if (bParam1)
	{
		if (!GlobalFunc_7702(iParam0, 1, 1))
		{
			GlobalFunc_7930(iParam0, 1, 1);
		}
	}
	else if (GlobalFunc_7702(iParam0, 1, 1))
	{
		GlobalFunc_7929(iParam0, 1, 1);
	}
}

Vector3 func_662(int iParam0, int iParam1)//Position - 0x66359
{
	struct<3> Var0;
	
	if (iParam0 == 22)
	{
		Var0 = { 319.62f, 181.52f, 103.59f };
	}
	else
	{
		Var0 = { 1863.19f, 3747.52f, 33.03f };
	}
	GlobalFunc_7133(iParam0, iParam1, &Var0);
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
	return Var0;
}

void func_663(var uParam0, var uParam1)//Position - 0x663AC
{
	if (uParam0->f_9)
	{
		if (uParam1->f_19)
		{
		}
		if (uParam0->f_11 == 4 || (uParam0->f_11 == 2 && uParam1->f_5 > 1))
		{
			func_666(*uParam0, 1);
			func_190(*uParam0, 1);
			GlobalFunc_53();
		}
		else
		{
			func_664(*uParam0, 0);
			func_190(*uParam0, 0);
		}
	}
}

void func_664(int iParam0, bool bParam1)//Position - 0x66409
{
	if (bParam1)
	{
		if (!GlobalFunc_7702(iParam0, 15, 1))
		{
			GlobalFunc_7930(iParam0, 15, 1);
		}
	}
	else if (GlobalFunc_7702(iParam0, 15, 1))
	{
		GlobalFunc_7929(iParam0, 15, 1);
	}
}


void func_666(int iParam0, bool bParam1)//Position - 0x6647C
{
	if (bParam1)
	{
		if (!GlobalFunc_7702(iParam0, 9, 0))
		{
			GlobalFunc_7930(iParam0, 9, 0);
		}
	}
	else if (GlobalFunc_7702(iParam0, 9, 0))
	{
		GlobalFunc_7929(iParam0, 9, 0);
	}
}

void func_667()//Position - 0x664B7
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	if ((GlobalFunc_142() || GlobalFunc_8624(Local_92)) || !func_690(&Local_92))
	{
		return;
	}
	if (Local_92.f_95)
	{
		if (GlobalFunc_5785(1))
		{
			if (Local_92.f_103.f_5 > 0)
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				GlobalFunc_7629();
				if (Local_92.f_103.f_5 < 5)
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						if (GlobalFunc_7135())
						{
							StringCopy(&(Local_92.f_103.f_11), "", 16);
							iLocal_748 = 0;
							GlobalFunc_2462();
							HUD::CLEAR_HELP(1);
							CAM::DO_SCREEN_FADE_OUT(500);
							Local_92.f_103.f_9 = MISC::GET_GAME_TIMER();
							Local_92.f_103.f_5 = 4;
						}
					}
				}
			}
			if ((Local_92.f_103.f_5 >= 1 && Local_92.f_103.f_5 < 4) && GlobalFunc_5798(Local_92))
			{
				GlobalFunc_5801(Local_92, &(Local_92.f_103.f_11));
			}
			switch (Local_92.f_103.f_5)
			{
				case 0:
					STREAMING::REQUEST_MODEL(joaat("v_ilev_ta_tatgun"));
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_ta_tatgun")))
					{
						GlobalFunc_7930(Local_92, 20, 1);
						if (iLocal_91 == 22)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
							{
								iVar0 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_ta_tatgun"), func_684(iLocal_91, Local_92), 1, 1, 0);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_ta_tatgun"));
							}
						}
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
						Local_92.f_141.f_28 = 0;
						func_682(iLocal_91, Local_92, &(Local_92.f_141));
						func_654(Local_92, &(Local_92.f_170));
						if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_92.f_170.f_13[0 /*3*/], 8f) && !Global_68245)
						{
							GlobalFunc_7155(&Local_92);
						}
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(func_681(iLocal_91, Local_92), 20f, func_680(iLocal_91), 0))
						{
							OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(func_680(iLocal_91), func_681(iLocal_91, Local_92), &uVar2, &uVar1);
						}
						MISC::CLEAR_AREA_OF_PEDS(Local_744, 4f, 0);
						MISC::CLEAR_AREA_OF_PROJECTILES(Local_744, 50f, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
						if (iLocal_91 != 22)
						{
							Local_744.f_2 = (Local_744.f_2 - 0.032f);
						}
						uLocal_724 = PED::CREATE_SYNCHRONIZED_SCENE(Local_744, Local_741, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_724, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_724, sLocal_718, func_679(iLocal_91), 1000f, -1f, 0, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(func_681(iLocal_91, Local_92), 5f, func_680(iLocal_91), uLocal_724, func_678(iLocal_91), sLocal_718, 1000f, -1056964608, 0, 1148846080);
						uLocal_723 = PED::CREATE_SYNCHRONIZED_SCENE(Local_744, Local_741, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_723, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_92.f_30))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_92.f_30))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_92.f_30, uLocal_723, sLocal_719, func_677(iLocal_91), 1000f, -1000f, 0, 0, 1148846080, 0);
								ENTITY::FREEZE_ENTITY_POSITION(Local_92.f_30, false);
								ENTITY::SET_ENTITY_PROOFS(Local_92.f_30, 1, 1, 1, 1, 1, 0, 0, 0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_92.f_12))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_92.f_12))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_92.f_12, uLocal_723, sLocal_719, func_676(iLocal_91), 1000f, -1f, 0, 0, 1148846080, 0);
								if (iLocal_91 == 22)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar0))
									{
										ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iVar0, uLocal_723, func_675(iLocal_91), sLocal_719, 1000f, -2f, 0, 1148846080);
										ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iVar0);
									}
								}
							}
						}
						if (!CAM::DOES_CAM_EXIST(Local_92.f_141.f_10))
						{
							Local_92.f_141.f_10 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
						}
						CAM::SET_CAM_ACTIVE(Local_92.f_141.f_10, 1);
						if (iLocal_91 == 22)
						{
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(Local_92.f_141.f_10, uLocal_724, "shop_ig_4_b_cam", sLocal_718);
						}
						else
						{
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(Local_92.f_141.f_10, uLocal_724, "shop_ig_5_b_cam", sLocal_718);
						}
						INTERIOR::_0x405DC2AEF6AF95B9(Local_92.f_4);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						func_458(&Local_92, 1f);
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_92.f_12, "SHOP_TATTOO_APPLIED", "SPEECH_PARAMS_FORCE", 1);
						Local_678.f_19 = 1;
						StringCopy(&(Local_92.f_103.f_11), "SHOP_INTRO", 16);
						iLocal_748 = 0;
						Local_92.f_103.f_9 = MISC::GET_GAME_TIMER();
						Local_92.f_103.f_5++;
					}
					break;
				
				case 1:
					if ((MISC::GET_GAME_TIMER() - Local_92.f_103.f_9) >= 5750)
					{
						if (!PED::IS_PED_INJURED(Local_92.f_30))
						{
							GlobalFunc_5130(Local_92.f_30, "GENERIC_THANKS", 24);
						}
						StringCopy(&(Local_92.f_103.f_11), "TAT_INTRO_0", 16);
						iLocal_748 = 0;
						Local_92.f_103.f_9 = MISC::GET_GAME_TIMER();
						Local_92.f_103.f_5++;
					}
					break;
				
				case 2:
					if ((MISC::GET_GAME_TIMER() - Local_92.f_103.f_9) >= 5750)
					{
						if (!PED::IS_PED_INJURED(Local_92.f_12))
						{
							GlobalFunc_5130(Local_92.f_12, "GENERIC_BYE", 24);
						}
						ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(func_681(iLocal_91, Local_92), 5f, func_680(iLocal_91), -1000f);
						ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(func_681(iLocal_91, Local_92), 5f, func_680(iLocal_91), uLocal_723, func_672(iLocal_91), sLocal_719, 1000f, -1056964608, 0, 1148846080);
						StringCopy(&(Local_92.f_103.f_11), "TAT_INTRO_1", 16);
						iLocal_748 = 0;
						Local_92.f_103.f_9 = MISC::GET_GAME_TIMER();
						Local_92.f_103.f_5++;
					}
					break;
				
				case 3:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_724))
					{
						Local_92.f_103.f_5 = 5;
					}
					if (iLocal_91 == 22)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_724) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_724) >= 0.62f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) == 1)
							{
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_92.f_12, 4000, 0, 2);
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
						}
					}
					else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_724) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_724) >= 0.877f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) == 1)
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_723))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_723) >= 0.955f)
						{
							ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(func_681(iLocal_91, Local_92), 5f, func_680(iLocal_91), -1000f);
							if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(func_681(iLocal_91, Local_92), 20f, func_680(iLocal_91), 0))
							{
								OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(func_680(iLocal_91), func_681(iLocal_91, Local_92), 0, 0f, 0);
							}
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_723) >= 0.9f)
						{
							if (!iLocal_725)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_92.f_12, 1785177548) == 1)
								{
									TASK::CLEAR_PED_TASKS(Local_92.f_12);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_92.f_12, 0, 0);
									if (GlobalFunc_5459(PLAYER::PLAYER_PED_ID()) || (GlobalFunc_7685(PLAYER::PLAYER_PED_ID()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
									{
										AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_92.f_12, "SHOP_GREET_UNUSUAL", "SPEECH_PARAMS_FORCE", 1);
									}
									else if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("player_zero")) && (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 8) || GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 28)))
									{
										AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_92.f_12, "KIFFLOM_GREET", "SPEECH_PARAMS_FORCE", 1);
									}
									else
									{
										AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_92.f_12, "SHOP_GREET", "SPEECH_PARAMS_FORCE", 1);
									}
									iLocal_725 = 1;
								}
							}
						}
					}
					break;
				
				case 4:
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(func_681(iLocal_91, Local_92), 5f, func_680(iLocal_91), -1000f);
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(func_681(iLocal_91, Local_92), 20f, func_680(iLocal_91), 0))
						{
							OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(func_680(iLocal_91), func_681(iLocal_91, Local_92), 0, 0f, 0);
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_724))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_724, sLocal_718, func_679(iLocal_91), 1000f, -1000f, 0, 0, 1148846080, 0);
							}
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_724, 1f);
						}
						if (!PED::IS_PED_INJURED(Local_92.f_12))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_723))
							{
								PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_723, 1f);
							}
						}
						Local_92.f_103.f_5++;
					}
					break;
				
				case 5:
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (CAM::DOES_CAM_EXIST(Local_92.f_141.f_10))
					{
						if (CAM::IS_CAM_ACTIVE(Local_92.f_141.f_10))
						{
							CAM::SET_CAM_ACTIVE(Local_92.f_141.f_10, 0);
						}
						CAM::DESTROY_CAM(Local_92.f_141.f_10, 0);
					}
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					HUD::CLEAR_HELP(1);
					GlobalFunc_10535(&(Local_92.f_103), 1, 1, 1);
					if (ENTITY::DOES_ENTITY_EXIST(Local_92.f_30) && !PED::IS_PED_INJURED(Local_92.f_30))
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_92.f_30, 1f);
						ENTITY::SET_ENTITY_PROOFS(Local_92.f_30, 0, 0, 0, 0, 0, 0, 0, 0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_92.f_30));
					}
					func_145();
					GlobalFunc_2462();
					GlobalFunc_5782(Local_92);
					func_24();
					if (!CAM::IS_SCREEN_FADED_IN())
					{
						if (!CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
					}
					iVar3 = 0;
					while (iVar3 < 44)
					{
						if (GlobalFunc_330(iVar3) == 2)
						{
							GlobalFunc_8625(iVar3, 1);
						}
						iVar3++;
					}
					Local_92.f_95 = 0;
					Local_678.f_19 = 0;
					break;
				}
		}
	}
	else
	{
		GlobalFunc_7929(Local_92, 20, 1);
		func_668(Local_92, 1);
		Local_92.f_11 = 3;
	}
	GlobalFunc_2582(&Local_678, 1);
}

void func_668(int iParam0, bool bParam1)//Position - 0x66DC3
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (!GlobalFunc_7702(iParam0, 2, 0))
		{
			GlobalFunc_7930(iParam0, 2, 0);
			GlobalFunc_1293(iParam0);
			iVar0 = GlobalFunc_330(iParam0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (GlobalFunc_3() == 0)
				{
					iVar1 = GlobalFunc_6671(814, -1, 0);
					MISC::SET_BIT(&iVar1, iVar0);
					GlobalFunc_6784(814, iVar1, -1, 1);
				}
			}
			else
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_46), iVar0);
			}
		}
	}
	else if (GlobalFunc_7702(iParam0, 2, 0))
	{
		GlobalFunc_7929(iParam0, 2, 0);
	}
}




char* func_672(int iParam0)//Position - 0x66EE8
{
	if (iParam0 == 22)
	{
		return "shop_ig_4_door";
	}
	return "artist_finishes_up_his_tattoo_door";
}



char* func_675(int iParam0)//Position - 0x67138
{
	if (iParam0 == 22)
	{
		return "shop_ig_4_tattoogun";
	}
	return "shop_ig_4_tattoogun";
}

char* func_676(int iParam0)//Position - 0x67157
{
	if (iParam0 == 22)
	{
		return "shop_ig_4_tattooist";
	}
	return "artist_finishes_up_his_tattoo_artist";
}

char* func_677(int iParam0)//Position - 0x67176
{
	if (iParam0 == 22)
	{
		return "shop_ig_4_customer";
	}
	return "artist_finishes_up_his_tattoo_player";
}

char* func_678(int iParam0)//Position - 0x67195
{
	if (iParam0 == 22)
	{
		return "shop_ig_4_b_door";
	}
	return "shop_ig_5_b_door";
}

char* func_679(int iParam0)//Position - 0x671B4
{
	if (iParam0 == 22)
	{
		return "shop_ig_4_b_player";
	}
	return "shop_ig_5_b_player";
}

int func_680(int iParam0)//Position - 0x671D3
{
	if (iParam0 == 22)
	{
		return joaat("v_ilev_ta_door");
	}
	return joaat("v_ilev_ml_door1");
}

Vector3 func_681(int iParam0, int iParam1)//Position - 0x671F2
{
	struct<3> Var0;
	
	if (iParam0 == 22)
	{
		Var0 = { 321.81f, 178.36f, 103.68f };
	}
	else
	{
		Var0 = { 1859.89f, 3749.79f, 33.18f };
	}
	GlobalFunc_7133(iParam0, iParam1, &Var0);
	return Var0;
}

void func_682(int iParam0, int iParam1, var uParam2)//Position - 0x67238
{
	if (iParam0 == 22)
	{
		switch (uParam2->f_28)
		{
			case 0:
				uParam2->f_11[0 /*3*/] = { 320.0082f, 184.6191f, 106.4468f };
				uParam2->f_18[0 /*3*/] = { -35.1591f, 0.2702f, -156.5826f };
				uParam2->f_25[0] = 42.0858f;
				uParam2->f_11[1 /*3*/] = { 320.0082f, 184.6191f, 106.4468f };
				uParam2->f_18[1 /*3*/] = { -35.1591f, 0.2702f, -156.5826f };
				uParam2->f_25[1] = 42.0858f;
				break;
			
			case 1:
				uParam2->f_11[0 /*3*/] = { 323.3365f, 178.0721f, 104.0448f };
				uParam2->f_18[0 /*3*/] = { -11.8398f, 0f, -12.8859f };
				uParam2->f_25[0] = 41.6715f;
				uParam2->f_11[1 /*3*/] = { 323.4999f, 178.7863f, 103.8912f };
				uParam2->f_18[1 /*3*/] = { -11.8398f, 0f, -12.8859f };
				uParam2->f_25[1] = 41.6715f;
				break;
			
			case 2:
				uParam2->f_11[0 /*3*/] = { 323.8286f, 182.0626f, 104.6501f };
				uParam2->f_18[0 /*3*/] = { -18.0641f, 0.2702f, 102.4422f };
				uParam2->f_25[0] = 42.0858f;
				uParam2->f_11[1 /*3*/] = { 322.5048f, 181.7705f, 104.3379f };
				uParam2->f_18[1 /*3*/] = { -11.1765f, 0.2702f, 102.4422f };
				uParam2->f_25[1] = 42.0858f;
				break;
		}
	}
	else
	{
		switch (uParam2->f_28)
		{
			case 0:
				uParam2->f_11[0 /*3*/] = { 1864.031f, 3752.093f, 34.7299f };
				uParam2->f_18[0 /*3*/] = { -19.1933f, 0f, 157.3466f };
				uParam2->f_25[0] = 51.8344f;
				uParam2->f_11[1 /*3*/] = { 1864.031f, 3752.093f, 34.7299f };
				uParam2->f_18[1 /*3*/] = { -19.1933f, 0f, 157.3466f };
				uParam2->f_25[1] = 51.8344f;
				break;
			
			case 1:
				uParam2->f_11[0 /*3*/] = { 1865.221f, 3748.138f, 33.4306f };
				uParam2->f_18[0 /*3*/] = { -17.1882f, 0f, 154.0068f };
				uParam2->f_25[0] = 39.4671f;
				uParam2->f_11[1 /*3*/] = { 1863.536f, 3748.309f, 33.3994f };
				uParam2->f_18[1 /*3*/] = { -17.1882f, 0f, -168.6809f };
				uParam2->f_25[1] = 39.4671f;
				break;
			
			case 2:
				uParam2->f_11[0 /*3*/] = { 1861.522f, 3750.145f, 33.34003f };
				uParam2->f_18[0 /*3*/] = { -0.962345f, 0f, -140.0089f };
				uParam2->f_25[0] = 39.4671f;
				uParam2->f_11[1 /*3*/] = { 1861.313f, 3749.976f, 33.34003f };
				uParam2->f_18[1 /*3*/] = { -0.962345f, 0f, -140.0089f };
				uParam2->f_25[1] = 39.4671f;
				break;
			}
	}
	GlobalFunc_7133(iParam0, iParam1, &(uParam2->f_11[0 /*3*/]));
	GlobalFunc_7132(iParam0, iParam1, &(uParam2->f_18[0 /*3*/]));
	GlobalFunc_7133(iParam0, iParam1, &(uParam2->f_11[1 /*3*/]));
	GlobalFunc_7132(iParam0, iParam1, &(uParam2->f_18[1 /*3*/]));
}


Vector3 func_684(int iParam0, int iParam1)//Position - 0x67662
{
	struct<3> Var0;
	
	if (iParam0 == 22)
	{
		Var0 = { 324.17f, 182.28f, 103.4f };
	}
	else
	{
		Var0 = { 324.17f, 182.28f, 103.4f };
	}
	GlobalFunc_7133(iParam0, iParam1, &Var0);
	return Var0;
}






int func_690(int iParam0)//Position - 0x6793B
{
	if ((iParam0->f_9 && !iParam0->f_1) && GlobalFunc_330(*iParam0) != 4)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !GlobalFunc_1546(-1082130432))
		{
			return 1;
		}
	}
	return 0;
}


void func_692()//Position - 0x679D4
{
	if (GlobalFunc_5785(1))
	{
		func_633(&Local_92);
		if (Local_92.f_8 == 1)
		{
			if (!Global_68245 && !iLocal_677)
			{
				Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_49++;
				iLocal_677 = 1;
			}
			Local_92.f_103 = -1;
			Local_92.f_11 = 2;
			Local_92.f_103.f_5 = 0;
		}
	}
}





void func_697()//Position - 0x67B96
{
	bool bVar0;
	char cVar1[16];
	
	switch (Local_92.f_103.f_5)
	{
		case 0:
			if (func_705(&Local_92, iLocal_90))
			{
				Local_92.f_103.f_5++;
			}
			else
			{
				func_21(0);
			}
			break;
		
		case 1:
			if (GlobalFunc_8371(Local_92))
			{
				Local_92.f_103.f_5++;
			}
			break;
		
		case 2:
			if ((!GlobalFunc_8899(Local_92) && !Global_68245) && !GlobalFunc_100(Local_92.f_30.f_2, 0f, 0f, 0f))
			{
				Local_92.f_95 = 1;
			}
			else
			{
				Local_92.f_95 = 0;
			}
			if (Local_92.f_95 == 1)
			{
				if (!func_703() || !OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(func_702(iLocal_91, Local_92), 5f, joaat("v_ret_ta_stool"), 0))
				{
					return;
				}
				OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(func_702(iLocal_91, Local_92), 5f, joaat("v_ret_ta_stool"), &Local_744, &Local_741, 2);
			}
			if (!GlobalFunc_2458(iLocal_90) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!Local_92.f_12.f_14)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_92.f_12))
					{
						if ((PED::IS_PED_INJURED(Local_92.f_12) || PED::IS_PED_FLEEING(Local_92.f_12)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_92.f_12, 1), Local_92.f_12.f_2, 1) > 10f)
						{
							GlobalFunc_2460("Marking previous shop keeper as no longer needed", -1);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_92.f_12));
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_92.f_12))
					{
						PED::DELETE_PED(&(Local_92.f_12));
					}
				}
			}
			if (!Local_92.f_30.f_6)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_92.f_30))
				{
					if ((PED::IS_PED_INJURED(Local_92.f_30) || PED::IS_PED_FLEEING(Local_92.f_30)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_92.f_30, 1), Local_92.f_30.f_2, 1) > 10f)
					{
						GlobalFunc_2460("Marking previous shop customer as no longer needed", -1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_92.f_30));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_92.f_30))
				{
					PED::DELETE_PED(&(Local_92.f_30));
				}
			}
			if (Local_92.f_12.f_1 != 0)
			{
				STREAMING::REQUEST_MODEL(Local_92.f_12.f_1);
				Local_92.f_12.f_16 = 1;
			}
			if (Local_92.f_95)
			{
				if (Local_92.f_30.f_1 != 0)
				{
					STREAMING::REQUEST_MODEL(Local_92.f_30.f_1);
					Local_92.f_30.f_7 = 1;
				}
			}
			if ((Local_92.f_12.f_16 && !STREAMING::HAS_MODEL_LOADED(Local_92.f_12.f_1)) || (Local_92.f_30.f_7 && !STREAMING::HAS_MODEL_LOADED(Local_92.f_30.f_1)))
			{
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_92.f_12) && Local_92.f_12.f_16)
			{
				bVar0 = false;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if ((NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_55)) && !Local_55.f_1)
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
				if (!bVar0)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						GlobalFunc_2460("Using net shop keeper..", -1);
						func_751(&(Local_92.f_12));
						if (!Local_92.f_12.f_15)
						{
							GlobalFunc_2460("Waiting for shop keeper to be initialised", -1);
							return;
						}
					}
				}
				else
				{
					GlobalFunc_2460("Creating shop keeper", -1);
					MISC::CLEAR_AREA(Local_92.f_12.f_2, 2.5f, 1, 0, 0, 0);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (!GlobalFunc_2625(&Local_55, 4, Local_92.f_12.f_1, Local_92.f_12.f_2, Local_92.f_12.f_5, 1, 1, 1))
						{
							return;
						}
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							Local_55.f_1 = 1;
						}
						func_751(&(Local_92.f_12));
					}
					else
					{
						Local_92.f_12 = PED::CREATE_PED(5, Local_92.f_12.f_1, Local_92.f_12.f_2, Local_92.f_12.f_5, 0, 0);
					}
					if (func_26(0))
					{
						if (Local_92 == 22)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 2, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 3, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 6, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 10, 0, 1, 0);
						}
						else if (Local_92 == 23)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 2, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 3, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 6, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 10, 0, 0, 0);
						}
						else if (Local_92 == 24)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 2, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 3, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 6, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 10, 0, 1, 0);
						}
						else if (Local_92 == 25)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 2, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 3, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 6, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 10, 0, 1, 0);
						}
						else if (Local_92 == 26)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 2, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 3, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 6, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 10, 0, 1, 0);
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 0, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 2, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 3, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 6, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_92.f_12, 10, 0, 0, 0);
						}
						if (GlobalFunc_2498(Local_92))
						{
							INTERIOR::_0x82EBB79E258FA2B7(Local_92.f_12, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(GlobalFunc_546(Local_92), GlobalFunc_2464(Local_92)));
						}
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_92.f_12, 1);
						ENTITY::SET_ENTITY_LOD_DIST(Local_92.f_12, 300);
						PED::SET_PED_LEG_IK_MODE(Local_92.f_12, 0);
						if (!iLocal_676)
						{
							StringCopy(&cVar1, "TATARTIST", 16);
							StringIntConCat(&cVar1, Local_92, 16);
							PED::ADD_RELATIONSHIP_GROUP(&cVar1, &uLocal_675);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_92.f_12, uLocal_675);
							iLocal_676 = 1;
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_92.f_12, 1);
						PED::SET_PED_CONFIG_FLAG(Local_92.f_12, 185, 1);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_92.f_12, 0);
						PED::SET_PED_CAN_EVASIVE_DIVE(Local_92.f_12, 0);
						PED::_0x2F3C3D9F50681DE4(Local_92.f_12, 1);
					}
				}
			}
			if ((ENTITY::DOES_ENTITY_EXIST(Local_92.f_12) && !PED::IS_PED_INJURED(Local_92.f_12)) && func_26(0))
			{
				GlobalFunc_200(&(Local_92.f_218.f_5), GlobalFunc_2020("D"));
				GlobalFunc_173(&(Local_92.f_218.f_5), GlobalFunc_2020("D"), Local_92.f_12, "ShopTattooArtist", 0, 1);
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_92.f_12, "U_M_Y_TATTOO_01_WHITE_MINI_01");
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_92.f_12.f_1);
				Local_92.f_12.f_16 = 0;
				Local_92.f_12.f_14 = 1;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_92.f_30) && Local_92.f_30.f_7)
			{
				GlobalFunc_2460("Creating shop customer", -1);
				MISC::CLEAR_AREA(Local_92.f_30.f_2, 2.5f, 1, 0, 0, 0);
				Local_92.f_30 = PED::CREATE_PED(4, Local_92.f_30.f_1, Local_92.f_30.f_2, Local_92.f_30.f_5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_92.f_30, 0, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_92.f_30, 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_92.f_30, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_92.f_30, 8, 0, 1, 0);
				PED::CLEAR_ALL_PED_PROPS(Local_92.f_30);
				if (GlobalFunc_2498(Local_92))
				{
					INTERIOR::_0x82EBB79E258FA2B7(Local_92.f_30, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(GlobalFunc_546(Local_92), GlobalFunc_2464(Local_92)));
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_92.f_30.f_1);
				Local_92.f_30.f_7 = 0;
				Local_92.f_30.f_6 = 1;
				TASK::TASK_PLAY_ANIM_ADVANCED(Local_92.f_30, sLocal_719, "customer_loop", func_702(iLocal_91, Local_92), Local_741, 4f, -1f, -1, 7689, 0, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(Local_92.f_12, sLocal_719, "tattooist_loop", func_702(iLocal_91, Local_92), Local_741, 4f, -1f, -1, 7689, 0, 2, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_92.f_30, true);
				if (iLocal_91 != 22)
				{
					STREAMING::REMOVE_ANIM_DICT(sLocal_719);
					sLocal_719 = sLocal_718;
				}
			}
			if (!Local_92.f_95)
			{
				if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_92.f_12)) && func_26(0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_92.f_12, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
				}
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (Global_262145.f_2421)
				{
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShops", 0);
				}
			}
			GlobalFunc_10875(Local_92, 0, 0);
			Local_92.f_103.f_5 = 0;
			Local_92.f_11 = 1;
			break;
	}
}





Vector3 func_702(int iParam0, int iParam1)//Position - 0x68761
{
	struct<3> Var0;
	
	if (iParam0 == 22)
	{
		Var0 = { 323.67f, 182.06f, 102.59f };
	}
	else
	{
		Var0 = { 1864.89f, 3746.32f, 32.04f };
	}
	GlobalFunc_7133(iParam0, iParam1, &Var0);
	return Var0;
}

int func_703()//Position - 0x687A7
{
	if (iLocal_91 == 22)
	{
		sLocal_719 = "misstattoo_parlour@shop_ig_4";
		sLocal_718 = "misstattoo_parlour@shop_ig_4b";
	}
	else
	{
		sLocal_719 = "misstattoo_parlour@shop_ig_4";
		sLocal_718 = "misstattoo_parlour@shop_ig_5_b";
	}
	if (Local_92.f_95)
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_718);
		STREAMING::REQUEST_ANIM_DICT(sLocal_719);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_718) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_719))
		{
			iLocal_722 = 1;
		}
	}
	if (iLocal_722 || !Local_92.f_95)
	{
		return 1;
	}
	return 0;
}


bool func_705(var uParam0, int iParam1)//Position - 0x6882E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uParam0->f_9 = 0;
	GlobalFunc_2626(uParam0, -1, 0, 0, 0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0f, 0f, 0f, 0f, 0);
	iVar0 = MISC::GET_HASH_KEY("v_tattoo");
	iVar1 = MISC::GET_HASH_KEY("v_tattoo2");
	iVar2 = MISC::GET_HASH_KEY(GlobalFunc_2464(iParam1));
	if (iVar2 == iVar0)
	{
		GlobalFunc_2626(uParam0, iParam1, MISC::GET_HASH_KEY("MainTatRm"), 1, joaat("u_m_y_tattoo_01"), 322.5702f, 182.0852f, 102.5865f, 196.6765f, 319.618f, 181.5184f, 102.5865f, 246.6867f, joaat("g_m_y_mexgoon_03"), 324.1968f, 181.3282f, 103.266f, 78.9718f, 1);
		Global_87640[0] = 52.17f;
	}
	else if (iVar2 == iVar1)
	{
		GlobalFunc_2626(uParam0, iParam1, MISC::GET_HASH_KEY("V_49_Tat2_Room"), 1, joaat("u_m_y_tattoo_01"), 1862.844f, 3748.159f, 33.03185f, 60.912f, 1862.844f, 3748.159f, 33.03185f, 60.912f, joaat("g_m_y_mexgoon_03"), 1862.486f, 3748.47f, 32.0319f, 35.457f, 1);
		Global_87640[0] = -13.17f;
	}
	Global_87640[1] = (Global_87640[0] + 180f);
	Global_87640[2] = (Global_87640[0] - 90f);
	Global_87640[3] = (Global_87640[0] + 90f);
	Global_87640[4] = (Global_87640[0] - 45f);
	Global_87640[5] = ((Global_87640[0] - 90f) - 45f);
	Global_87640[6] = (Global_87640[0] + 45f);
	Global_87640[7] = ((Global_87640[0] + 90f) + 45f);
	if (iVar2 == iVar0)
	{
		iVar3 = 22;
	}
	else if (iVar2 == iVar1)
	{
		iVar3 = 23;
	}
	GlobalFunc_7133(iVar3, iParam1, &(uParam0->f_12.f_2));
	GlobalFunc_7134(iVar3, iParam1, &(uParam0->f_12.f_5));
	GlobalFunc_7133(iVar3, iParam1, &(uParam0->f_30.f_2));
	GlobalFunc_7134(iVar3, iParam1, &(uParam0->f_30.f_5));
	GlobalFunc_7134(iVar3, iParam1, &(Global_87640[0]));
	GlobalFunc_7134(iVar3, iParam1, &(Global_87640[1]));
	GlobalFunc_7134(iVar3, iParam1, &(Global_87640[2]));
	GlobalFunc_7134(iVar3, iParam1, &(Global_87640[3]));
	GlobalFunc_7134(iVar3, iParam1, &(Global_87640[4]));
	GlobalFunc_7134(iVar3, iParam1, &(Global_87640[5]));
	GlobalFunc_7134(iVar3, iParam1, &(Global_87640[6]));
	GlobalFunc_7134(iVar3, iParam1, &(Global_87640[7]));
	return uParam0->f_9;
}


void func_707()//Position - 0x68B20
{
	if (!Local_92.f_9)
	{
		GlobalFunc_2476(&(Local_92.f_218), -1, 1);
		return;
	}
	if (PED::IS_PED_INJURED(Local_92.f_12))
	{
		return;
	}
	if (!func_26(0))
	{
		return;
	}
	if (GlobalFunc_5840())
	{
		if (Local_92.f_7)
		{
			if (Local_92.f_11 == 3)
			{
				if (!iLocal_725)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_92.f_12, 1) < 5f)
					{
						if (PED::IS_PED_FACING_PED(Local_92.f_12, PLAYER::PLAYER_PED_ID(), 45f))
						{
							GlobalFunc_2476(&(Local_92.f_218), 0, 2);
							TASK::TASK_LOOK_AT_ENTITY(Local_92.f_12, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
							iLocal_725 = 1;
						}
					}
				}
			}
		}
		else if (GlobalFunc_2499(Local_92) > 30f)
		{
			iLocal_725 = 0;
		}
		if (Local_92.f_103.f_19 && Local_92.f_103.f_5 != 0)
		{
			iLocal_725 = 1;
			if (Local_92.f_103.f_31 == 2)
			{
				iLocal_733 = 1;
				if (!iLocal_728)
				{
					if (!iLocal_729)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uLocal_727 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
						}
						else
						{
							iLocal_726 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
						}
						iLocal_729 = 1;
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_727))
						{
							GlobalFunc_2476(&(Local_92.f_218), 1, 2);
							iLocal_728 = 1;
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_726) > 0)
					{
						GlobalFunc_2476(&(Local_92.f_218), 1, 2);
						iLocal_728 = 1;
					}
				}
			}
		}
		else
		{
			iLocal_728 = 0;
			iLocal_729 = 0;
		}
		if (!Local_92.f_103.f_19)
		{
			if (iLocal_733)
			{
				if (!iLocal_732)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uLocal_731 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(0, 100));
					}
					else
					{
						iLocal_730 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 100));
					}
					iLocal_732 = 1;
				}
				else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_731))
					{
						GlobalFunc_2476(&(Local_92.f_218), 3, 2);
						uLocal_731 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
						iLocal_733 = 0;
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_730) > 0)
				{
					GlobalFunc_2476(&(Local_92.f_218), 3, 2);
					iLocal_730 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
					iLocal_733 = 0;
				}
			}
		}
	}
	if (Local_92.f_218 != -1)
	{
		if (!func_709(&(Local_92.f_218), Local_92, 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!iLocal_736)
				{
					uLocal_735 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 3000);
					iLocal_736 = 1;
				}
				else if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uLocal_735))
				{
					GlobalFunc_2455(&(Local_92.f_218));
					iLocal_736 = 0;
				}
			}
			else if (!iLocal_736)
			{
				iLocal_734 = MISC::GET_GAME_TIMER();
				iLocal_736 = 1;
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_734) > 3000)
			{
				GlobalFunc_2455(&(Local_92.f_218));
				iLocal_736 = 0;
			}
		}
		else
		{
			iLocal_736 = 0;
			switch (Local_92.f_218)
			{
				case 0:
					if (GlobalFunc_7136(-1))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_92.f_12, "SHOP_NO_COPS", "SPEECH_PARAMS_FORCE", 1);
					}
					else if (GlobalFunc_5459(PLAYER::PLAYER_PED_ID()) || (GlobalFunc_7685(PLAYER::PLAYER_PED_ID()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_92.f_12, "SHOP_GREET_UNUSUAL", "SPEECH_PARAMS_FORCE", 1);
					}
					else if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("player_zero")) && (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 8) || GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 28)))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_92.f_12, "KIFFLOM_GREET", "SPEECH_PARAMS_FORCE", 1);
					}
					else
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_92.f_12, "SHOP_GREET", "SPEECH_PARAMS_FORCE", 1);
					}
					break;
				
				case 1:
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_92.f_12, "SHOP_BANTER", "SPEECH_PARAMS_FORCE", 1);
					}
					else
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_92.f_12, "SHOP_BROWSE_TATTOO_MENU", "SPEECH_PARAMS_FORCE", 1);
					}
					break;
				
				case 2:
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_92.f_12, "SHOP_SELL", "SPEECH_PARAMS_FORCE", 1);
					}
					else
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_92.f_12, "SHOP_TATTOO_APPLIED", "SPEECH_PARAMS_FORCE", 1);
					}
					break;
				
				case 3:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_92.f_12, "SHOP_GOODBYE", "SPEECH_PARAMS_FORCE", 1);
					break;
				
				default:
					break;
			}
			GlobalFunc_2503(&(Local_92.f_218));
		}
	}
}


int func_709(var uParam0, int iParam1, bool bParam2)//Position - 0x68F6A
{
	if (iParam1 != -1)
	{
		if (func_712(iParam1))
		{
			return 0;
		}
		if (!bParam2 && !GlobalFunc_8371(iParam1))
		{
			return 0;
		}
	}
	if (GlobalFunc_111() || GlobalFunc_620())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (*uParam0 == -1)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_6678(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		if ((Global_24446 || Global_1573712) || Global_1573718)
		{
			return 0;
		}
	}
	return 1;
}



bool func_712(int iParam0)//Position - 0x6903F
{
	return GlobalFunc_7702(iParam0, 14, 1);
}



void func_715()//Position - 0x690F6
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (bLocal_699)
			{
				if (Local_92.f_11 != 4 || Local_92.f_103.f_31 > 2)
				{
					GlobalFunc_2460("We are here 1", -1);
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
						bLocal_699 = false;
					}
					else
					{
						GlobalFunc_2460("TK - HAS_PED_HEAD_BLEND_FINISHED = FALSE", -1);
					}
				}
			}
			else if (Local_92.f_11 == 4 && Local_92.f_103.f_31 <= 2)
			{
				bLocal_699 = true;
			}
		}
	}
	else
	{
		bLocal_699 = false;
	}
}

void func_716(int iParam0, var uParam1, int iParam2)//Position - 0x6918D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	
	if (iParam0->f_11 == 4)
	{
		if (iParam2 == 0)
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
		}
		PAD::SET_INPUT_EXCLUSIVE(2, 202);
		PAD::SET_INPUT_EXCLUSIVE(2, 188);
		PAD::SET_INPUT_EXCLUSIVE(2, 187);
		PAD::SET_INPUT_EXCLUSIVE(2, 189);
		PAD::SET_INPUT_EXCLUSIVE(2, 190);
		if (Global_68505)
		{
			PAD::DISABLE_CONTROL_ACTION(2, 201, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 189, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 190, 1);
		}
	}
	else if (uParam1->f_30)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam1->f_29, 1500)))
			{
				PAD::SET_INPUT_EXCLUSIVE(2, 202);
				PAD::DISABLE_CONTROL_ACTION(0, 25, 0);
			}
			else
			{
				uParam1->f_30 = 0;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - uParam1->f_28) < 1500)
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 202);
			PAD::DISABLE_CONTROL_ACTION(0, 25, 0);
		}
		else
		{
			uParam1->f_30 = 0;
		}
	}
	if (((((iParam0->f_7 && *iParam0 != 21) && !GlobalFunc_1546(15f)) && !GlobalFunc_1157(64)) && !GlobalFunc_8900(*iParam0)) && !func_719(*iParam0))
	{
		if (GlobalFunc_5361(PLAYER::PLAYER_ID(), 0) && GlobalFunc_330(*iParam0) == 3)
		{
			return;
		}
		if (!GlobalFunc_331())
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
			{
				if (iVar0 != joaat("object"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
			}
		}
		bVar1 = true;
		iVar2 = GlobalFunc_2508(*iParam0, 0);
		if (iVar2 != 225)
		{
			Var3 = { GlobalFunc_511(iVar2) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 1.5f)
			{
				bVar1 = false;
			}
		}
		if (bVar1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
		}
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		if (GlobalFunc_330(*iParam0) == 3)
		{
			HUD::_HUD_WEAPON_WHEEL_IGNORE_SELECTION();
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.35f);
		PAD::DISABLE_CONTROL_ACTION(0, 157, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 158, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 159, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 160, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 161, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 162, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 163, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 164, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 165, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 14, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 15, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 16, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 17, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 53, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 54, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 140, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 141, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 142, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 47, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 38, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 92, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 99, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 115, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 46, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 25, 0);
		PAD::DISABLE_CONTROL_ACTION(0, 36, 0);
	}
	if (!iParam0->f_7)
	{
		if ((*iParam0 == 28 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 15.0545f, -1115.276f, 28.23367f, 18.64721f, -1116.584f, 30.60867f, 2.1875f, 0, 1, 0)) || (*iParam0 == 38 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 813.5249f, -2147.429f, 27.93063f, 809.9389f, -2147.442f, 30.1772f, 2.1875f, 0, 1, 0)))
		{
			if (((!GlobalFunc_1546(15f) && !GlobalFunc_1157(64)) && !GlobalFunc_8900(*iParam0)) && !func_719(*iParam0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.35f);
			}
		}
	}
}



bool func_719(int iParam0)//Position - 0x695BC
{
	return GlobalFunc_7702(iParam0, 15, 1);
}




void func_723(var uParam0, var uParam1)//Position - 0x695FE
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	if (uParam0->f_9)
	{
		if (!uParam0->f_96)
		{
			if ((GlobalFunc_7702(*uParam0, 12, 1) || GlobalFunc_7702(*uParam0, 13, 1)) || GlobalFunc_7702(*uParam0, 2, 1))
			{
				uParam0->f_96 = 1;
			}
		}
		if (uParam0->f_11 != 6 && !MISC::IS_BIT_SET(Global_90014.f_1267[*uParam0], 11))
		{
			if (!GlobalFunc_8371(*uParam0) || (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || uParam0->f_12.f_15) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_12)) && PED::IS_PED_INJURED(uParam0->f_12)))
			{
				if (uParam0->f_11 == 4)
				{
					uParam1->f_31 = 8;
				}
				else
				{
					uParam0->f_11 = 6;
				}
			}
			if (uParam0->f_11 == 6)
			{
				GlobalFunc_2462();
			}
		}
		if (uParam0->f_11 == 6)
		{
			func_633(uParam0);
			if (!uParam0->f_1)
			{
				if (uParam0->f_3 != -1)
				{
					GlobalFunc_5420(&(uParam0->f_3));
				}
				bVar0 = false;
				bVar1 = false;
				bVar2 = false;
				if (uParam0->f_7 || ((GlobalFunc_8624(*uParam0) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && GlobalFunc_330(*uParam0) != 4))
				{
					bVar1 = true;
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if ((!GlobalFunc_2505(*uParam0) || !GlobalFunc_7702(*uParam0, 0, 0)) || GlobalFunc_1117())
					{
						bVar0 = true;
					}
				}
				else if (!GlobalFunc_2504(*uParam0) || !GlobalFunc_7702(*uParam0, 0, 0))
				{
					bVar0 = true;
				}
				if (!bVar0)
				{
					if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || ((uParam0->f_7 && !uParam0->f_8) && GlobalFunc_330(*uParam0) == 3))
					{
						bVar0 = true;
					}
				}
				if (!bVar0)
				{
					if (!uParam0->f_7)
					{
						if (GlobalFunc_7702(*uParam0, 0, 1) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !GlobalFunc_330(*uParam0) == 4))
						{
							bVar0 = true;
						}
						if (!bVar0)
						{
							fVar3 = 2.5f;
							if (*uParam0 == 9)
							{
								fVar3 = 4f;
							}
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								fVar3 = 7.5f;
							}
							fVar4 = GlobalFunc_2499(*uParam0);
							if (fVar4 > fVar3)
							{
								bVar0 = true;
							}
						}
					}
					else if (!uParam0->f_8 && GlobalFunc_330(*uParam0) == 3)
					{
						bVar0 = true;
					}
				}
				if (GlobalFunc_8900(*uParam0))
				{
					bVar0 = true;
					bVar1 = true;
				}
				if (*uParam0 == 22 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("family6")) != 0)
				{
					bVar2 = true;
					if (!bVar0)
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					GlobalFunc_2462();
				}
				else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || GlobalFunc_2502("SHOP_CLOSED", GlobalFunc_1988(*uParam0)))
				{
					GlobalFunc_5802("SHOP_CLOSED", GlobalFunc_1988(*uParam0));
				}
				if (!bVar2)
				{
					if (bVar1)
					{
						if (GlobalFunc_5803(*uParam0))
						{
							GlobalFunc_10875(*uParam0, 0, 1);
						}
						GlobalFunc_10875(*uParam0, 0, 0);
					}
					else
					{
						GlobalFunc_10875(*uParam0, 1, 0);
					}
				}
			}
			if (GlobalFunc_5785(1))
			{
				if (Global_90014.f_62[*uParam0])
				{
					if ((uParam0->f_96 && !GlobalFunc_6722(PLAYER::PLAYER_ID(), 1)) && !GlobalFunc_8624(*uParam0))
					{
						GlobalFunc_8522(*uParam0);
					}
				}
				else if ((((((uParam0->f_96 && !GlobalFunc_39(11)) && !GlobalFunc_39(9)) && !GlobalFunc_39(0)) && !GlobalFunc_39(3)) && !MISC::IS_BIT_SET(Global_90014.f_1267[*uParam0], 1)) && !MISC::IS_BIT_SET(Global_90014.f_1267[*uParam0], 2))
				{
					if (GlobalFunc_330(*uParam0) == 3)
					{
						GlobalFunc_8522(*uParam0);
					}
					else if (!uParam0->f_7 && GlobalFunc_2499(*uParam0) > 50f)
					{
						GlobalFunc_8522(*uParam0);
					}
				}
			}
		}
	}
}








void func_731(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x69CF5
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((((uParam0->f_9 && !uParam0->f_1) && GlobalFunc_5785(1)) && !GlobalFunc_8624(*uParam0)) && !func_739(*uParam0))
	{
		bVar0 = false;
		bVar1 = false;
		iVar2 = GlobalFunc_330(*uParam0);
		Var3 = { GlobalFunc_546(*uParam0) };
		if ((GlobalFunc_5806(uParam0->f_12) || GlobalFunc_5806(iParam2)) || (Global_68245 == 0 && (MISC::IS_BULLET_IN_AREA(Var3, 5f, 0) || MISC::IS_PROJECTILE_IN_AREA(Var3 - Vector(2.5f, 2.5f, 2.5f), Var3 + Vector(2.5f, 2.5f, 2.5f), 1))))
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
			else if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !func_737(*uParam0)) && !INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("V_7_ShootRm"))
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
			func_661(*uParam0, 1);
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
					GlobalFunc_5804(iParam2);
					GlobalFunc_5804(iParam3);
					GlobalFunc_5804(uParam0->f_12);
					break;
				}
			}
	}
}






bool func_737(int iParam0)//Position - 0x6A14A
{
	return GlobalFunc_7702(iParam0, 3, 1);
}


bool func_739(int iParam0)//Position - 0x6A2CA
{
	return GlobalFunc_7702(iParam0, 18, 1);
}


int func_741(var uParam0, int iParam1)//Position - 0x6A378
{
	if (Global_3)
	{
		uParam0->f_10 = 1;
		return 1;
	}
	if (Global_68245)
	{
		if (GlobalFunc_7680())
		{
			uParam0->f_10 = 1;
			return 1;
		}
		if (!Global_90014.f_62[iParam1])
		{
			uParam0->f_10 = 1;
			return 1;
		}
	}
	else if (Global_90014.f_62[iParam1])
	{
		uParam0->f_10 = 1;
		return 1;
	}
	if (GlobalFunc_7702(iParam1, 9, 1))
	{
		uParam0->f_10 = 1;
		return 1;
	}
	return 0;
}










void func_751(var uParam0)//Position - 0x6A649
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_55))
		{
			*uParam0 = NETWORK::NET_TO_PED(Local_55);
			uParam0->f_14 = 1;
		}
		else
		{
			*uParam0 = 0;
		}
		uParam0->f_15 = Local_55.f_1;
	}
}



void func_754()//Position - 0x6A719
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, iLocal_90);
		if (!GlobalFunc_5092(0, -1, 1))
		{
			func_21(0);
		}
		NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_55, 2);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_57, 33);
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (!GlobalFunc_5091())
		{
			func_21(0);
		}
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(66))
	{
		func_21(0);
	}
}





int func_759(int iParam0)//Position - 0x6A8FE
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY("v_tattoo");
	iVar1 = MISC::GET_HASH_KEY(GlobalFunc_2464(iParam0));
	if (iVar1 == iVar0)
	{
		return 22;
	}
	return 23;
}

