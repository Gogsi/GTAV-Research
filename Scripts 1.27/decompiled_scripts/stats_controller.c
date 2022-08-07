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
	int iLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
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
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
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
	iLocal_20 = 3;
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_49 = 3;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		func_92();
		switch (iLocal_50)
		{
			case 0:
				func_87();
				break;
			
			case 1:
				func_77();
				func_2();
				Global_87651 = 0;
				break;
			
			case 2:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xC9
{
	iLocal_50 = 0;
}

void func_2()//Position - 0xD4
{
	int iVar0;
	bool bVar1;
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
	bool bVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	
	if (iLocal_56)
	{
		iLocal_56 = 0;
	}
	else
	{
		iLocal_51++;
	}
	bLocal_55 = false;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = GlobalFunc_8329();
	}
	if (iVar0 != iLocal_54)
	{
		iLocal_54 = iVar0;
		bLocal_55 = true;
		iLocal_62 = 0;
		iLocal_63 = 0;
		iLocal_70 = 0;
		iLocal_76 = 0;
	}
	if (iLocal_54 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_51 == 6 && GlobalFunc_1157(64)) || (iLocal_51 == 5 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_56 = 1;
	}
	func_66();
	if (Global_87649 || (Global_87650 && !GlobalFunc_6687(0)))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				GlobalFunc_8251(iLocal_54, iVar2);
				iVar2++;
			}
			Global_87649 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !GlobalFunc_42(iLocal_54))) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || GlobalFunc_236()) || CUTSCENE::IS_CUTSCENE_PLAYING()) || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || Global_68243) || Global_87651) || iLocal_57)
		{
			iLocal_78 = 1;
			iLocal_79 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_80 = NETWORK::GET_NETWORK_TIME();
			}
			return;
		}
		if (iLocal_78)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_79) > 3000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uLocal_80, 3000))))
			{
				iLocal_78 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_52) > 2000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uLocal_53, 2000)))) || bLocal_55)
	{
		if (iLocal_51 >= 8)
		{
			iLocal_51 = 0;
			iLocal_52 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_53 = NETWORK::GET_NETWORK_TIME();
			}
		}
		iVar10 = 1;
		if (bLocal_55)
		{
			iVar10 = 8;
		}
		iVar11 = 0;
		while (iVar11 < iVar10)
		{
			bVar12 = true;
			if (bLocal_55)
			{
				iVar7 = iVar11;
			}
			else
			{
				iVar7 = iLocal_51;
			}
			GlobalFunc_581(iLocal_54, iVar7, &iVar5, &iVar6);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar3 = GlobalFunc_6671(iVar6, -1, 0);
			}
			else if (iVar7 == 0)
			{
				iVar3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1615[iLocal_54];
			}
			else
			{
				STATS::STAT_GET_INT(iVar5, &iVar3, -1);
			}
			iVar3 = GlobalFunc_254(iVar3, 0, 100);
			if (func_47(iLocal_54, iVar7, iVar3, &iVar4))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GlobalFunc_6784(iVar6, iVar4, -1, 1);
				}
				else if (iVar7 == 0)
				{
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1615[iLocal_54] == 0)
					{
						bVar12 = false;
					}
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1615[iLocal_54] = iVar4;
				}
				else
				{
					STATS::STAT_SET_INT(iVar5, iVar4, 1);
				}
				if (iVar4 > GlobalFunc_7717(iLocal_54, iVar7, -1))
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
					}
					else if ((!Global_SAVE_DATA.isGameflowActive && !GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0)) || !MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[27 /*3*/], 2))
					{
						bVar12 = false;
					}
					iVar13 = iVar4;
					iVar14 = (iVar13 - (iVar13 % GlobalFunc_3132(iLocal_54, iVar7)));
					if ((iVar13 % GlobalFunc_3132(iLocal_54, iVar7)) >= 0)
					{
						iVar14 = (iVar14 + GlobalFunc_3132(iLocal_54, iVar7));
					}
					if (iVar13 >= iVar14)
					{
						iVar13 = iVar14;
					}
					else
					{
						iVar13 = (iVar14 - GlobalFunc_3132(iLocal_54, iVar7));
					}
					if (iVar4 > iVar13)
					{
						bVar12 = false;
					}
					if (bVar12)
					{
						if (!bLocal_55)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								if (GlobalFunc_6707(117, -1) == 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_9())
									{
										GlobalFunc_159("STAT_HELP2", -1);
										GlobalFunc_6785(117, 1, -1, 1);
									}
								}
							}
							iLocal_57 = 1;
							iLocal_60 = (iVar4 - iVar3);
							iLocal_60 = (iLocal_60 + (iVar3 % GlobalFunc_3132(iLocal_54, iVar7)));
							iLocal_61 = iVar4;
							iLocal_58 = iLocal_54;
							iLocal_59 = iVar7;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_54, iVar7, &iVar8))
						{
							if (iLocal_54 == 0)
							{
								STATS::STAT_GET_INT(joaat("sp0_total_playing_time"), &iVar9, -1);
								STATS::STAT_SET_INT(iVar8, iVar9, 1);
							}
							else if (iLocal_54 == 1)
							{
								STATS::STAT_GET_INT(joaat("sp1_total_playing_time"), &iVar9, -1);
								STATS::STAT_SET_INT(iVar8, iVar9, 1);
							}
							else if (iLocal_54 == 2)
							{
								STATS::STAT_GET_INT(joaat("sp2_total_playing_time"), &iVar9, -1);
								STATS::STAT_SET_INT(iVar8, iVar9, 1);
							}
							else if (iLocal_54 == 3)
							{
							}
						}
					}
				}
				GlobalFunc_8251(iLocal_54, iVar7);
			}
			else if (iVar4 < iVar3)
			{
				bVar15 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GlobalFunc_6784(iVar6, iVar4, -1, 1);
				}
				else if (iVar7 == 0)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1615[iLocal_54] = iVar4;
					bVar15 = false;
				}
				else
				{
					STATS::STAT_SET_INT(iVar5, iVar4, 1);
				}
				if (bVar15)
				{
					GlobalFunc_8251(iLocal_54, iVar7);
				}
			}
			iVar11++;
		}
	}
	else
	{
		iLocal_56 = 1;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2)//Position - 0x5A5
{
	*uParam2 = joaat("last_playing_time");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability_maxed");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability_maxed");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability_maxed");
					break;
			}
			break;
	}
	return *uParam2 != joaat("last_playing_time");
}






int func_9()//Position - 0x823
{
	if (HUD::IS_HUD_HIDDEN() && HUD::IS_RADAR_HIDDEN())
	{
		return 0;
	}
	if (Global_1683767 == 1)
	{
		return 0;
	}
	if (Global_1683626 == 1)
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_MESSAGE_SHOWING())
	{
		return 0;
	}
	if (Global_1573674 == 1)
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		return 0;
	}
	if (Global_971738)
	{
		return 0;
	}
	if (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_318 == 1)
	{
		return 0;
	}
	if (GlobalFunc_1277())
	{
		return 0;
	}
	if (GlobalFunc_268())
	{
		return 0;
	}
	if (GlobalFunc_84())
	{
		if (!GlobalFunc_268())
		{
			if (!func_37(3, -1))
			{
				if (GlobalFunc_5419(&Global_2437114, 300000, 0) == 1)
				{
					GlobalFunc_434(&Global_2437112);
					func_32(3, -1);
				}
				else if (GlobalFunc_5419(&Global_2437112, 7000, 0) == 0)
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
	if (func_31())
	{
		return 0;
	}
	if (GlobalFunc_5271())
	{
		return 0;
	}
	if (GlobalFunc_5452())
	{
		return 0;
	}
	if (GlobalFunc_1117())
	{
		return 0;
	}
	if (GlobalFunc_1748())
	{
		return 0;
	}
	if (GlobalFunc_1622())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_sniperrifle") || GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (GlobalFunc_153(8, -1))
	{
		return 0;
	}
	if (GlobalFunc_3604(12, -1))
	{
		return 0;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		return 0;
	}
	if (GlobalFunc_3629())
	{
		return 0;
	}
	if (func_20())
	{
		return 0;
	}
	if (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_27)
	{
		return 0;
	}
	if (Global_1573542)
	{
		return 0;
	}
	if (Global_1573546)
	{
		return 0;
	}
	if (Global_1573548)
	{
		return 0;
	}
	if (Global_2422140.f_3185.f_39)
	{
		return 0;
	}
	if (GlobalFunc_116(0))
	{
		return 0;
	}
	if (GlobalFunc_1536())
	{
		return 0;
	}
	if (Global_2446554.f_3801)
	{
		return 0;
	}
	if (Global_2422140.f_3051)
	{
		return 0;
	}
	if (!GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 0;
	}
	if (GlobalFunc_3368(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_2422140.f_3185.f_39 == 1)
	{
		return 0;
	}
	if (Global_2428891.f_2841.f_25 == 1)
	{
		return 0;
	}
	if (GlobalFunc_126(1))
	{
		return 0;
	}
	if (GlobalFunc_5428())
	{
		return 0;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(16))
	{
		return 0;
	}
	if (GlobalFunc_1304())
	{
		return 0;
	}
	if (GlobalFunc_1706())
	{
		return 0;
	}
	if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
	{
		if (GlobalFunc_74("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_302)
	{
		return 0;
	}
	return 1;
}











bool func_20()//Position - 0xC49
{
	return Global_1327593.f_112;
}











int func_31()//Position - 0xDAC
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, int iParam1)//Position - 0xDC6
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = GlobalFunc_5();
	}
	Global_1335484 = 0;
	if (MISC::ARE_PROFILE_SETTINGS_VALID() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x0D01D20616FC73FB(0, iParam1);
			iVar1 = GlobalFunc_4982(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			break;
		
		default:
			iVar1 = GlobalFunc_4982(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::SET_BIT(&iVar0, iParam0);
				STATS::_0x0D01D20616FC73FB(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			GlobalFunc_6785(120, 0, iParam1, 1);
			GlobalFunc_6785(124, 0, iParam1, 1);
			GlobalFunc_6785(115, 0, iParam1, 1);
			GlobalFunc_6785(119, 0, iParam1, 1);
			GlobalFunc_6785(121, 0, iParam1, 1);
			GlobalFunc_6785(122, 0, iParam1, 1);
			GlobalFunc_6785(125, 0, iParam1, 1);
			GlobalFunc_6784(1290, 0, iParam1, 1);
			break;
	}
}





bool func_37(int iParam0, int iParam1)//Position - 0xFC3
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = GlobalFunc_5();
	}
	iVar0 = GlobalFunc_4982(iParam1);
	uVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return MISC::IS_BIT_SET(uVar1, iParam0);
}










int func_47(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x1582
{
	*uParam3 = func_48(iParam0, iParam1, 0, -1);
	if (*uParam3 > iParam2)
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x15A4
{
	float fVar0;
	float fVar1;
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
	float fVar12;
	
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = SYSTEM::TO_FLOAT(GlobalFunc_6671(64, iParam3, 0));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_FLOAT(joaat("sp0_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1583[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_FLOAT(joaat("sp1_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1583[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_FLOAT(joaat("sp2_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1583[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_56(20, iParam3) / 175f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(GlobalFunc_3134(joaat("sp0_time_swimming"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(GlobalFunc_3134(joaat("sp1_time_swimming"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(GlobalFunc_3134(joaat("sp2_time_swimming"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(GlobalFunc_3134(func_54(50, iParam3))));
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(GlobalFunc_3134(joaat("sp0_time_driving_bicycle"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(GlobalFunc_3134(joaat("sp1_time_driving_bicycle"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(GlobalFunc_3134(joaat("sp2_time_driving_bicycle"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(GlobalFunc_3134(func_54(47, iParam3))));
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0.25f);
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(GlobalFunc_3133(joaat("sp0_time_underwater"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (SYSTEM::TO_FLOAT(GlobalFunc_3133(joaat("sp1_time_underwater"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (SYSTEM::TO_FLOAT(GlobalFunc_3133(joaat("sp2_time_underwater"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(GlobalFunc_3133(func_54(52, iParam3))) / 30f);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_unarmed_hits"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_unarmed_hits"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_unarmed_hits"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(GlobalFunc_6671(1486, iParam3, 0)) / 20f);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1591[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1591[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1591[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((GlobalFunc_6671(102, iParam3, 0) / 50)));
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(GlobalFunc_3134(joaat("sp0_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (SYSTEM::TO_FLOAT(GlobalFunc_3134(joaat("sp1_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (SYSTEM::TO_FLOAT(GlobalFunc_3134(joaat("sp2_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(GlobalFunc_3134(func_54(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(GlobalFunc_3134(joaat("sp0_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(GlobalFunc_3134(joaat("sp1_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(GlobalFunc_3134(joaat("sp2_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(GlobalFunc_3134(func_54(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(GlobalFunc_6671(61, iParam3, 0)));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = GlobalFunc_2784(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = GlobalFunc_2784(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = GlobalFunc_2784(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = GlobalFunc_2784(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = GlobalFunc_2784(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = GlobalFunc_2784(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = GlobalFunc_2784(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = GlobalFunc_2784(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = GlobalFunc_2784(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = GlobalFunc_2784(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_FLOAT(joaat("sp0_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_FLOAT(joaat("sp1_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_FLOAT(joaat("sp2_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_56(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1599[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1599[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1599[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = GlobalFunc_6671(34, iParam3, 0);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(iVar3) / 2f) * 1.5f));
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("sp0_hits_mission"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("sp1_hits_mission"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("sp2_hits_mission"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = GlobalFunc_6671(159, iParam3, 0);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (GlobalFunc_214(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						
						case 2:
							iVar9++;
							break;
						
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(GlobalFunc_203(joaat("mpply_shootingrange_wins")) * 1));
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = GlobalFunc_7717(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_49(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(GlobalFunc_3132(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(GlobalFunc_3132(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(GlobalFunc_3132(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(GlobalFunc_3132(iParam0, iParam1)));
		}
	}
	iVar2 = SYSTEM::FLOOR(fVar0);
	iVar2 = GlobalFunc_254(iVar2, 0, 100);
	return iVar2;
}

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x2259
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1475[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return GlobalFunc_6671(72, iParam2, 0);
					break;
				
				case 3:
					return GlobalFunc_6671(74, iParam2, 0);
					break;
				
				case 2:
					return GlobalFunc_6671(73, iParam2, 0);
					break;
				
				case 4:
					return GlobalFunc_6671(75, iParam2, 0);
					break;
				
				case 5:
					return GlobalFunc_6671(76, iParam2, 0);
					break;
				
				case 6:
					return GlobalFunc_6671(77, iParam2, 0);
					break;
				
				case 7:
					return GlobalFunc_6671(78, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}





int func_54(int iParam0, int iParam1)//Position - 0x2418
{
	return Global_2454605[iParam0 /*6*/][GlobalFunc_4916(iParam1)];
}


float func_56(int iParam0, int iParam1)//Position - 0x2463
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2472024[iParam0 /*6*/][GlobalFunc_4916(iParam1)];
	if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}










void func_66()//Position - 0x2A65
{
	func_71();
	func_70();
	func_67();
}

void func_67()//Position - 0x2A79
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_76)
	{
		if (iLocal_54 == 3)
		{
			if (Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_7)
			{
				iLocal_73 = GlobalFunc_3133(func_54(136, -1));
				Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_7 = 0;
			}
			else
			{
				iLocal_73 = Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_6;
			}
			if (Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_4 == 0)
			{
				Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
			}
			iLocal_75 = Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_4;
			iLocal_74 = Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_5;
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1520[iLocal_54])
			{
				switch (iLocal_54)
				{
					case 0:
						iLocal_73 = GlobalFunc_3133(joaat("sp0_total_wheelie_time"));
						break;
					
					case 1:
						iLocal_73 = GlobalFunc_3133(joaat("sp1_total_wheelie_time"));
						break;
					
					case 2:
						iLocal_73 = GlobalFunc_3133(joaat("sp2_total_wheelie_time"));
						break;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1520[iLocal_54] = 0;
			}
			else
			{
				iLocal_73 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1516[iLocal_54];
			}
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1508[iLocal_54] == 0)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1508[iLocal_54] = NETWORK::GET_CLOUD_TIME_AS_INT();
			}
			iLocal_75 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1508[iLocal_54];
			iLocal_74 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1512[iLocal_54];
		}
		iLocal_76 = 1;
		iLocal_77 = 1;
	}
	else if ((NETWORK::GET_CLOUD_TIME_AS_INT() - iLocal_75) > 86400)
	{
		iLocal_76 = 0;
		iLocal_77 = 0;
		iLocal_75 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iLocal_74 = 0;
		if (iLocal_54 == 3)
		{
			Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_7 = 1;
		}
		else
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1520[iLocal_54] = 1;
		}
	}
	if (iLocal_77)
	{
		switch (iLocal_54)
		{
			case 0:
				iVar0 = GlobalFunc_3133(joaat("sp0_total_wheelie_time"));
				break;
			
			case 1:
				iVar0 = GlobalFunc_3133(joaat("sp1_total_wheelie_time"));
				break;
			
			case 2:
				iVar0 = GlobalFunc_3133(joaat("sp2_total_wheelie_time"));
				break;
			
			case 3:
				iVar0 = GlobalFunc_3133(func_54(136, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_73);
		iVar2 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) / 15f)) - iLocal_74);
		if (iVar2 > 0)
		{
			GlobalFunc_8039(iLocal_54, 4, iVar2);
			iLocal_74 = (iLocal_74 + iVar2);
		}
		if (iVar0 > (iLocal_73 + (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() / 1000) * 60))
		{
			iLocal_77 = 0;
		}
	}
	if (iLocal_54 == 3)
	{
		Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_4 = iLocal_75;
		Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_5 = iLocal_74;
	}
	else
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1508[iLocal_54] = iLocal_75;
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1512[iLocal_54] = iLocal_74;
	}
}



void func_70()//Position - 0x2E37
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (iLocal_70)
	{
		bVar0 = true;
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if ((((ENTITY::DOES_ENTITY_EXIST(uVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(uVar1, 0)) && !ENTITY::IS_ENTITY_IN_AIR(uVar1)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar1, -1) == PLAYER::PLAYER_PED_ID()) && (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar1)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uVar1))))
			{
				bVar0 = false;
				if (ENTITY::GET_ENTITY_SPEED(uVar1) >= 53f)
				{
					GlobalFunc_8039(iLocal_54, 4, 2);
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			iLocal_70 = 0;
			iLocal_71 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_72 = NETWORK::GET_NETWORK_TIME();
			}
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar2 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (((ENTITY::DOES_ENTITY_EXIST(uVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(uVar2, 0)) && ENTITY::GET_ENTITY_SPEED(uVar2) < 20f) && !ENTITY::IS_ENTITY_IN_AIR(uVar2))
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_71) > 10000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uLocal_72, 10000))))
			{
				iLocal_70 = 1;
			}
		}
	}
}

void func_71()//Position - 0x2F88
{
	bool bVar0;
	var uVar1;
	char cVar2[64];
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (((ENTITY::DOES_ENTITY_EXIST(uVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(uVar1, 0)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar1, -1) == PLAYER::PLAYER_PED_ID()) && (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uVar1)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar1))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(uVar1))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(uVar1))))
		{
			if (iLocal_62)
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(uVar1))
				{
					if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_64) > 1500) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uLocal_65, 1500))))
					{
						iLocal_66 = MISC::GET_GAME_TIMER();
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uLocal_67 = NETWORK::GET_NETWORK_TIME();
						}
						iLocal_63 = 1;
					}
					iLocal_62 = 0;
				}
			}
			if (iLocal_63)
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(uVar1))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uVar1))
					{
						if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_66) > 20) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_66) == 0)) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uLocal_67, 20)))) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_EQUAL_TO(NETWORK::GET_NETWORK_TIME(), uLocal_67)))
						{
						}
						else
						{
							GlobalFunc_8039(iLocal_54, 4, 1);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, (MISC::GET_GAME_TIMER() - iLocal_66), 64);
						StringConCat(&cVar2, "ms", 64);
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (!iLocal_62 && !iLocal_63)
			{
				if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_68) > 1000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uLocal_69, 1000))))
				{
					if (ENTITY::IS_ENTITY_IN_AIR(uVar1))
					{
						if (!iLocal_62)
						{
							iLocal_64 = MISC::GET_GAME_TIMER();
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								uLocal_65 = NETWORK::GET_NETWORK_TIME();
							}
							iLocal_62 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_62 || iLocal_63)
		{
			bVar0 = true;
		}
	}
	else if (iLocal_62 || iLocal_63)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_68 = MISC::GET_GAME_TIMER();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uLocal_69 = NETWORK::GET_NETWORK_TIME();
		}
		iLocal_62 = 0;
		iLocal_63 = 0;
	}
}






void func_77()//Position - 0x3359
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_57)
	{
		if (iLocal_58 != iLocal_54)
		{
			iLocal_57 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_58)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			
			case 3:
				iVar1 = GlobalFunc_9056(PLAYER::PLAYER_ID());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar1);
				}
				break;
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PS_UPDATE");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_61);
		HUD::END_TEXT_COMMAND_THEFEED_POST_STATS(func_79(iLocal_59), func_78(iLocal_59), iLocal_60, (iLocal_61 - iLocal_60), 0, sVar0, sVar0);
		iLocal_78 = 1;
		iLocal_79 = MISC::GET_GAME_TIMER() + 5000;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uLocal_80 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
		}
		iLocal_57 = 0;
	}
}

int func_78(int iParam0)//Position - 0x341D
{
	switch (iParam0)
	{
		case 0:
			return 23;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 24;
			break;
		
		case 2:
			return 25;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 17;
			break;
		
		case 7:
			return 28;
			break;
	}
	return -1;
}

char* func_79(int iParam0)//Position - 0x349C
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB";
			break;
		
		case 1:
			return "PSF_STAMINA";
			break;
		
		case 3:
			return "PSF_LUNG";
			break;
		
		case 2:
			return "PSF_STRENGTH";
			break;
		
		case 4:
			return "PSF_DRIVING";
			break;
		
		case 5:
			return "PSF_FLYING";
			break;
		
		case 6:
			return "PSF_SHOOTING";
			break;
		
		case 7:
			return "PSF_STEALTH";
			break;
	}
	return "ERROR";
}








void func_87()//Position - 0x3764
{
	float fVar0;
	int iVar1;
	
	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() != 1)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!GlobalFunc_354(PLAYER::PLAYER_ID()))
		{
			return;
		}
		if (GlobalFunc_3() != 0)
		{
			return;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_3() == 0)
		{
			iLocal_49 = 2;
		}
	}
	else
	{
		iLocal_49 = 0;
	}
	if (!func_89())
	{
		func_88();
	}
	iLocal_51 = 0;
	iLocal_52 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_53 = NETWORK::GET_NETWORK_TIME();
	}
	iLocal_68 = MISC::GET_GAME_TIMER();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_69 = NETWORK::GET_NETWORK_TIME();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_651, 2))
		{
			fVar0 = (SYSTEM::TO_FLOAT(GlobalFunc_6671(180, -1, 0)) / 20f);
			iVar1 = SYSTEM::FLOOR(fVar0);
			iVar1 = GlobalFunc_254(iVar1, 0, 100);
			GlobalFunc_8039(3, 2, iVar1);
			MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_651), 2);
		}
	}
	bLocal_55 = true;
	iLocal_50 = 1;
}

void func_88()//Position - 0x384E
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				GlobalFunc_581(3, iVar0, &uVar1, &iVar2);
				GlobalFunc_6784(iVar2, GlobalFunc_7717(3, iVar0, -1), -1, 1);
			}
			iVar0++;
		}
		GlobalFunc_6785(0, 1, -1, 1);
		Global_87649 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					GlobalFunc_581(iVar3, iVar4, &iVar5, &uVar6);
					STATS::STAT_SET_INT(iVar5, GlobalFunc_7717(iVar3, iVar4, -1), 1);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1615[0] = GlobalFunc_7717(0, 0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1615[1] = GlobalFunc_7717(1, 0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1615[2] = GlobalFunc_7717(2, 0, -1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1582 = 1;
		Global_87649 = 1;
	}
}

int func_89()//Position - 0x3941
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1582;
}



void func_92()//Position - 0x3994
{
	if (iLocal_50 != 0 && iLocal_49 != 3)
	{
		if (iLocal_49 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_49 = 3;
			}
			if (!func_89())
			{
				iLocal_49 = 3;
			}
		}
		else if (iLocal_49 == 2)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !GlobalFunc_354(PLAYER::PLAYER_ID())) || GlobalFunc_3() != 0)
			{
				iLocal_49 = 3;
			}
		}
		if (iLocal_49 == 3)
		{
			iLocal_50 = 2;
		}
	}
}

