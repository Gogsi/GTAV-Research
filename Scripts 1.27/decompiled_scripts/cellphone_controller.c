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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	bool bLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32[4] = { 0, 0, 0, 0 };
	var uLocal_37[4] = { 0, 0, 0, 0 };
	var uLocal_42[4] = { 0, 0, 0, 0 };
	var uLocal_47[4] = { 0, 0, 0, 0 };
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_74 = 0.95f;
	fLocal_75 = 0.07f;
	fLocal_76 = 0.755f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_97295 = MISC::GET_GAME_TIMER();
	GlobalFunc_587();
	GlobalFunc_5232();
	GlobalFunc_5231();
	Global_14393.f_1 = 3;
	Global_14381 = 0;
	Global_14553 = 0;
	Global_16727 = 0;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
			{
				if (Global_14393.f_1 == 6)
				{
					Global_14393.f_1 = 3;
				}
			}
		}
		if (GlobalFunc_665(146))
		{
			if (Global_68245 == 0)
			{
				Global_96301 = 1;
				GlobalFunc_6685(0);
			}
		}
		if (Global_2446554.f_4379 == 1)
		{
			if (Global_14393.f_1 > 3)
			{
				Global_14393.f_1 = 3;
			}
		}
		if (Global_68245 == 1)
		{
			if (Global_14393.f_1 == 3)
			{
				if (MISC::IS_BIT_SET(Global_2544648, 15))
				{
					MISC::SET_BIT(&Global_2544648, 14);
					SYSTEM::WAIT(0);
					while (!func_68(3, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_2544648, 14);
					MISC::CLEAR_BIT(&Global_2544648, 15);
				}
				if (MISC::IS_BIT_SET(Global_2544648, 16))
				{
					MISC::SET_BIT(&Global_2544648, 14);
					SYSTEM::WAIT(0);
					while (!func_68(17, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_2544648, 14);
					MISC::CLEAR_BIT(&Global_2544648, 16);
				}
			}
		}
		if (Global_68245 == 0)
		{
			if (MISC::IS_BIT_SET(Global_2544648, 11))
			{
				if ((Global_14393.f_1 != 10 && Global_14393.f_1 != 9) || GlobalFunc_5582() == 0)
				{
					MISC::CLEAR_BIT(&Global_2544648, 11);
					MISC::SET_BIT(&Global_2264, 11);
				}
			}
			else if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
			{
				if (GlobalFunc_5582())
				{
					MISC::SET_BIT(&Global_2544648, 11);
					MISC::SET_BIT(&Global_2264, 11);
				}
			}
			if (MISC::IS_BIT_SET(Global_2544648, 12))
			{
				MISC::CLEAR_BIT(&Global_2544648, 12);
				MISC::SET_BIT(&Global_2264, 11);
			}
		}
		else if (MISC::IS_BIT_SET(Global_2544648, 12))
		{
			if ((Global_16755 == 0 || Global_16756 == 0) && !Global_16757)
			{
				MISC::CLEAR_BIT(&Global_2544648, 12);
				MISC::SET_BIT(&Global_2264, 11);
			}
		}
		else if (Global_16757 || (Global_16755 > 0 && Global_16756 == 1))
		{
			MISC::SET_BIT(&Global_2544648, 12);
			MISC::SET_BIT(&Global_2264, 11);
		}
		if (MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_IS_LOCAL_TALKING())
			{
				if (!MISC::IS_BIT_SET(Global_2544648, 19))
				{
					MISC::SET_BIT(&Global_2544648, 19);
					MISC::SET_BIT(&Global_2264, 11);
				}
			}
			else if (MISC::IS_BIT_SET(Global_2544648, 19))
			{
				MISC::CLEAR_BIT(&Global_2544648, 19);
				MISC::SET_BIT(&Global_2264, 11);
			}
		}
		if (iLocal_81 == 0)
		{
			if (MISC::IS_BIT_SET(Global_2263, 25))
			{
				STATS::STAT_GET_INT(joaat("sp_cellphone_sleep_time"), &iLocal_80, -1);
				iLocal_78 = MISC::GET_GAME_TIMER();
				iLocal_81 = 1;
			}
		}
		else if (!MISC::IS_BIT_SET(Global_2263, 25))
		{
			STATS::STAT_GET_INT(joaat("sp_cellphone_sleep_time"), &iLocal_80, -1);
			iLocal_79 = MISC::GET_GAME_TIMER();
			iLocal_81 = 0;
			STATS::STAT_SET_INT(joaat("sp_cellphone_sleep_time"), (iLocal_80 + (iLocal_79 - iLocal_78)), 1);
		}
		func_66();
		func_65();
		func_64();
		func_62();
		func_51();
		func_50();
		func_49();
		if (MISC::IS_BIT_SET(Global_2264, 21))
		{
			if (!AUDIO::_0xC8B1B2425604CDD0())
			{
				MISC::CLEAR_BIT(&Global_2264, 21);
			}
		}
		if (MISC::IS_BIT_SET(Global_2263, 7))
		{
			func_42();
			MISC::CLEAR_BIT(&Global_2263, 7);
		}
		if (MISC::IS_BIT_SET(Global_2263, 0))
		{
			GlobalFunc_68();
		}
		if (MISC::IS_BIT_SET(Global_2544648, 0))
		{
			func_40();
		}
		if (MISC::IS_BIT_SET(Global_2264, 11))
		{
			Global_2967 = 0;
			if (MISC::IS_BIT_SET(Global_2263, 25))
			{
				Global_2967++;
			}
			if (MISC::IS_BIT_SET(Global_2544648, 11))
			{
				if (Global_68245 == 0)
				{
					Global_2967++;
				}
			}
			if (MISC::IS_BIT_SET(Global_2544648, 12))
			{
				if (Global_68245 && (Global_16756 || Global_16757))
				{
					Global_2967++;
				}
			}
			if (MISC::IS_BIT_SET(Global_2544648, 19))
			{
				Global_2967++;
			}
			if (Global_2967 == 0)
			{
				MISC::CLEAR_BIT(&Global_2264, 11);
				iLocal_30 = 0;
			}
			else
			{
				iLocal_30 = 1;
			}
		}
		if (!GlobalFunc_72())
		{
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				if (Global_14393.f_1 == 3)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || CUTSCENE::_0x5EDEF0CF8C1DAB3C())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_68245)
								{
									func_31();
								}
								else
								{
									func_31();
								}
							}
						}
					}
				}
			}
			if (Global_14393.f_1 == 4)
			{
				if (MISC::IS_BIT_SET(Global_2264, 21))
				{
					func_31();
				}
			}
			func_21();
		}
		else if (func_14())
		{
		}
		switch (Global_16727)
		{
			case 0:
				func_13();
				if (Global_16729 == 1)
				{
					func_12();
				}
				break;
			
			case 1:
				func_11();
				break;
			
			case 2:
				func_10();
				break;
			
			case 3:
				func_9();
				break;
			
			case 4:
				func_8();
				break;
			
			case 5:
				func_7();
				break;
			
			case 14:
				func_12();
				break;
			
			case 6:
				if (Global_16729 == 1)
				{
					func_12();
				}
				if (Global_16730 == 1)
				{
					Global_16727 = 9;
					Global_16730 = 0;
				}
				break;
			
			case 8:
				func_6();
				break;
			
			case 9:
				func_5();
				break;
			
			case 10:
				func_4();
				break;
			
			case 11:
				func_3();
				break;
			
			case 12:
				func_2();
				break;
			
			case 13:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x5AC
{
	iLocal_58 = GRAPHICS::_RETURN_TWO(Global_16731);
	switch (iLocal_58)
	{
		case 0:
			Global_16727 = 4;
			break;
		
		case 1:
			break;
		
		case 2:
			MISC::SET_BIT(&Global_2264, 15);
			func_12();
			break;
	}
}

void func_2()//Position - 0x5F0
{
	if (GRAPHICS::_0xEC72C258667BE5EA(Global_16731))
	{
		Global_16727 = 13;
	}
	else
	{
		func_12();
	}
}

void func_3()//Position - 0x60E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_57 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_55);
	}
	else
	{
		iLocal_56 = MISC::GET_GAME_TIMER();
		iLocal_57 = (iLocal_56 - iLocal_54);
	}
	if (iLocal_57 > 3000)
	{
		HUD::BUSYSPINNER_OFF();
	}
	if (iLocal_57 > 3200)
	{
		Global_16727 = 6;
	}
}

void func_4()//Position - 0x651
{
	iLocal_58 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
	switch (iLocal_58)
	{
		case 0:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_55 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_54 = MISC::GET_GAME_TIMER();
			}
			Global_16727 = 11;
			SYSTEM::SETTIMERB(0);
			break;
		
		case 1:
			break;
		
		case 2:
			func_12();
			break;
	}
}

void func_5()//Position - 0x6A5
{
	Global_16732 = -1;
	if (GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(Global_16732))
	{
		Global_16727 = 10;
		HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_278");
		HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
	}
	else
	{
		func_12();
	}
}

void func_6()//Position - 0x6D2
{
	iLocal_58 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(1);
	switch (iLocal_58)
	{
		case 0:
			Global_16727 = 9;
			break;
		
		case 1:
			break;
		
		case 2:
			func_12();
			break;
	}
}

void func_7()//Position - 0x70C
{
	iLocal_58 = GRAPHICS::_0xCB82A0BF0E3E3265(iLocal_59);
	switch (iLocal_58)
	{
		case 0:
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(1, 1);
			Global_16727 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			if (iLocal_59 == 3)
			{
				MISC::SET_BIT(&Global_2264, 14);
				GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
				GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
				GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
				Global_16727 = 6;
			}
			if (Global_16727 == 5)
			{
				if (iLocal_59 == 0)
				{
					Global_16727 = 4;
					iLocal_59 = 1;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					SYSTEM::WAIT(0);
				}
			}
			if (Global_16727 == 5)
			{
				if (iLocal_59 == 1)
				{
					Global_16727 = 4;
					iLocal_59 = 2;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					SYSTEM::WAIT(0);
				}
			}
			if (Global_16727 == 5)
			{
				if (iLocal_59 == 2)
				{
					Global_16727 = 4;
					iLocal_59 = 3;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					SYSTEM::WAIT(0);
				}
			}
			break;
	}
}

void func_8()//Position - 0x7C0
{
	if (GRAPHICS::_0x759650634F07B6B4(iLocal_59))
	{
		Global_16727 = 5;
	}
	else
	{
		MISC::SET_BIT(&Global_2264, 15);
		func_12();
	}
}

void func_9()//Position - 0x7E5
{
	iLocal_58 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
	switch (iLocal_58)
	{
		case 0:
			Global_16727 = 4;
			iLocal_59 = 2;
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14393.f_1 = 3;
			func_12();
			break;
	}
}

void func_10()//Position - 0x826
{
	if (GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO())
	{
		Global_16727 = 3;
	}
}

void func_11()//Position - 0x839
{
	if (SYSTEM::TIMERB() > 0)
	{
		Global_16727 = 2;
	}
}

void func_12()//Position - 0x84D
{
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
	GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
	GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
	HUD::BUSYSPINNER_OFF();
	Global_16728 = 0;
	Global_16729 = 0;
	Global_16730 = 0;
	Global_16727 = 0;
}

void func_13()//Position - 0x877
{
	if (Global_16728)
	{
		Global_16727 = 1;
		MISC::CLEAR_BIT(&Global_2264, 14);
		SYSTEM::SETTIMERB(0);
	}
}

int func_14()//Position - 0x897
{
	char* sVar0;
	
	if ((GlobalFunc_2194(2, Global_14360, 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		if (MISC::IS_PC_VERSION())
		{
			if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
			{
				sVar0 = HUD::_GET_LABEL_TEXT("CELL_ANTIH_A");
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_ANTIH");
				HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, sVar0, 0);
			}
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_19(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_AIMING_FROM_COVER(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
		Global_16751 = 0;
		Global_16752 = 0;
		if (HUD::THEFEED_GET_FIRST_VISIBLE_DELETE_REMAINING() == Global_16749 && HUD::THEFEED_GET_FIRST_VISIBLE_DELETE_REMAINING() != -1)
		{
			Global_16751 = Global_16750;
			iLocal_62 = MISC::GET_GAME_TIMER();
			iLocal_64 = 0;
			iLocal_65 = 0;
			while (((func_18(2, Global_14360) && iLocal_64 < 250) && Global_14559 == 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19))
			{
				if (Global_2967 > 0)
				{
					func_15();
				}
				SYSTEM::WAIT(0);
				iLocal_63 = MISC::GET_GAME_TIMER();
				iLocal_64 = (iLocal_63 - iLocal_62);
				if (Global_2967 > 0)
				{
					func_15();
				}
			}
			if ((func_18(2, Global_14360) && Global_14559 == 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19))
			{
				iLocal_65 = 1;
			}
			if (Global_14559 == 0)
			{
				if (iLocal_65 == 1)
				{
					Global_16752 = 1;
					Global_16751 = Global_16750;
					if (Global_16751 == 1)
					{
					}
					if (Global_16751 == 2)
					{
					}
					if (Global_16751 == 3)
					{
					}
					if (Global_16751 == 0)
					{
					}
				}
				else
				{
					Global_16751 = 0;
				}
			}
			else
			{
				Global_16751 = 0;
			}
		}
		else
		{
			Global_16751 = 0;
		}
		if (!HUD::IS_HUD_COMPONENT_ACTIVE(19))
		{
			return 1;
		}
		else
		{
			Global_16751 = 0;
			Global_16752 = 0;
			return 0;
		}
	}
	return 0;
}

void func_15()//Position - 0xA49
{
	if (Global_16757)
	{
		fLocal_75 = -0.055f;
		fLocal_76 = 0.745f;
		fLocal_71 = GRAPHICS::GET_SAFE_ZONE_SIZE();
		fLocal_77 = ((100f * fLocal_74) - (100f * fLocal_71));
		fLocal_72 = (fLocal_75 + (fLocal_77 * 0.005f));
		fLocal_73 = (fLocal_76 - (fLocal_77 * 0.005f));
		if (!GlobalFunc_2561())
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::_0xEFABC7722293DA7C();
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_28, fLocal_72, fLocal_73, 0.27f, 0.45f, 255, 255, 255, 255, 0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		}
	}
	else
	{
		if (MISC::IS_PC_VERSION())
		{
			if (Global_2410481.f_454)
			{
				bLocal_29 = false;
			}
			else if (MISC::IS_BIT_SET(Global_2263, 13))
			{
				if (MISC::IS_BIT_SET(Global_2544648, 19))
				{
					bLocal_29 = false;
				}
				else
				{
					bLocal_29 = true;
				}
			}
			else
			{
				bLocal_29 = false;
			}
		}
		else if (Global_2410481.f_454 || MISC::IS_BIT_SET(Global_2263, 13))
		{
			bLocal_29 = true;
		}
		else
		{
			bLocal_29 = false;
		}
		if (HUD::IS_MINIMAP_RENDERING())
		{
			if (!HUD::IS_RADAR_HIDDEN())
			{
				if (!bLocal_29)
				{
					if (!GlobalFunc_72())
					{
						if (!GlobalFunc_1536())
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
								{
									GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
									if (MISC::IS_PC_VERSION() && Global_2410481.f_454)
									{
										fLocal_75 = 0.165f;
										fLocal_76 = 0.755f;
									}
									else
									{
										fLocal_75 = 0.07f;
										fLocal_76 = 0.755f;
									}
									fLocal_71 = GRAPHICS::GET_SAFE_ZONE_SIZE();
									fLocal_77 = ((100f * fLocal_74) - (100f * fLocal_71));
									fLocal_72 = (fLocal_75 + (fLocal_77 * 0.005f));
									fLocal_73 = (fLocal_76 - (fLocal_77 * 0.005f));
									if (!GlobalFunc_2561())
									{
										if (MISC::IS_PC_VERSION())
										{
											GRAPHICS::_0xEFABC7722293DA7C();
										}
										GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_28, fLocal_72, fLocal_73, 0.27f, 0.45f, 255, 255, 255, 255, 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}



int func_18(int iParam0, int iParam1)//Position - 0xC4E
{
	if (PAD::IS_CONTROL_PRESSED(iParam0, iParam1))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0)
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_19(var uParam0)//Position - 0xC94
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1))
			{
				if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


void func_21()//Position - 0xD57
{
	switch (Global_14393.f_1)
	{
		case 4:
			if (MISC::IS_BIT_SET(Global_2264, 21))
			{
			}
			else
			{
				if (SCRIPT::IS_THREAD_ACTIVE(Global_14390))
				{
				}
				else
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_14390))
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
								if (Global_2967 > 0)
								{
									func_15();
								}
							}
							if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
							{
								Global_14390 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
							}
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
					GlobalFunc_2562(0);
				}
				if (Global_15702 || Global_15703)
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_14390))
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
								if (Global_2967 > 0)
								{
									func_15();
								}
							}
							if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
							{
								Global_14390 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
							}
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374) && Global_14376 == 0)
					{
						SYSTEM::WAIT(0);
						if (Global_2967 > 0)
						{
							func_15();
						}
					}
					if (Global_14376 == 0)
					{
						Global_14393.f_1 = 9;
						GlobalFunc_7908();
					}
				}
				else
				{
					bLocal_70 = false;
					if (Global_68245 && Global_16754)
					{
						bLocal_70 = true;
					}
					if (((Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_18 == 1 || Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 1) || bLocal_70 == 1) || Global_16751 != 0)
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374) && Global_14376 == 0)
						{
							SYSTEM::WAIT(0);
							if (Global_2967 > 0)
							{
								func_15();
							}
						}
						if (Global_14376 == 0)
						{
							if (Global_14393.f_1 > 3)
							{
								Global_14393.f_1 = 6;
								if (Global_16751 == 0)
								{
									if (bLocal_70)
									{
									}
									else if (Global_68245 == 0)
									{
										if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 1)
										{
											func_68(1, 0, 1, 0);
										}
									}
								}
								else
								{
									if (Global_16751 == 3)
									{
									}
									if (Global_16751 == 1)
									{
									}
									if (Global_16751 == 2)
									{
									}
								}
							}
						}
					}
					else
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374) && Global_14376 == 0)
						{
							SYSTEM::WAIT(0);
							if (Global_2967 > 0)
							{
								func_15();
							}
						}
						if (Global_14376 == 0)
						{
							if (Global_14393.f_1 > 3)
							{
								if (Global_15702 || Global_15703)
								{
									Global_14393.f_1 = 9;
								}
								else
								{
									Global_14393.f_1 = 6;
								}
							}
						}
					}
				}
			}
			break;
	}
}










void func_31()//Position - 0x1F51
{
	if (func_14() || MISC::IS_BIT_SET(Global_2263, 8))
	{
		MISC::CLEAR_BIT(&Global_2263, 8);
		GlobalFunc_9035();
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (func_32())
				{
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (MISC::IS_BIT_SET(Global_2264, 21))
					{
						MISC::CLEAR_BIT(&Global_2264, 21);
					}
					if (Global_14559 == 1)
					{
						Global_14559 = 0;
					}
					switch (Global_14393.f_1)
					{
						case 3:
							Global_14393.f_1 = 4;
							break;
						
						default:
							break;
					}
					Global_14549 = 1;
				}
			}
		}
	}
}

int func_32()//Position - 0x1FEB
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1)
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








void func_40()//Position - 0x22A7
{
	char cVar0[64];
	int iVar16;
	char cVar17[64];
	char cVar33[64];
	char cVar49[64];
	char cVar65[64];
	
	MISC::CLEAR_BIT(&Global_2544648, 0);
	if (Global_16753 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_16753))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_16753))
			{
				StringCopy(&cVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_16753), 64);
				Global_16761[Global_16759] = Global_16753;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_16761[Global_2544632] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_16761[Global_2544632] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_2543383[Global_2544632 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_16761[Global_2544632] = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_2543383[Global_2544632 /*104*/].f_32 == 4 || Global_2543383[Global_2544632 /*104*/].f_32 == 5) || Global_2543383[Global_2544632 /*104*/].f_32 == 6) || Global_2543383[Global_2544632 /*104*/].f_32 == 7) || Global_2543383[Global_2544632 /*104*/].f_32 == 8) || Global_2543383[Global_2544632 /*104*/].f_32 == 9) || Global_2543383[Global_2544632 /*104*/].f_32 == 10) || Global_2543383[Global_2544632 /*104*/].f_32 == 11)
	{
		iVar16 = 0;
		switch (Global_2543383[Global_2544632 /*104*/].f_49)
		{
			case 1:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01");
				break;
			
			case 2:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02");
				break;
			
			case 3:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03");
				break;
			
			case 4:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04");
				break;
			
			case 5:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05");
				break;
			
			case 6:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06");
				break;
			
			case 7:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07");
				break;
			
			case 8:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08");
				break;
			
			case 9:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09");
				break;
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543383[Global_2544632 /*104*/]));
		while (iVar16 < Global_2543383[Global_2544632 /*104*/].f_49)
		{
			switch (Global_2543383[Global_2544632 /*104*/].f_32)
			{
				case 4:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2446554.f_1551[iVar16 /*4*/]));
					break;
				
				case 5:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683631[iVar16 /*4*/]));
					break;
				
				case 6:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683672[iVar16 /*4*/]));
					break;
				
				case 7:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683693[iVar16 /*4*/]));
					break;
				
				case 8:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683710[iVar16 /*4*/]));
					break;
				
				case 9:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683723[iVar16 /*4*/]));
					break;
				
				case 10:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683736[iVar16 /*4*/]));
					break;
				
				case 11:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683749[iVar16 /*4*/]));
					break;
			}
			iVar16++;
		}
		StringCopy(&cVar17, HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_2543383[Global_2544632 /*104*/].f_17 /*29*/].f_3)), 64);
		uLocal_53 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 2, &cVar17, 0);
		MISC::SET_BIT(&Global_2544648, 1);
		Global_16750 = 1;
		Global_16749 = uLocal_53;
		Global_16753 = 0;
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Global_2543383[Global_2544632 /*104*/]));
		switch (Global_2543383[Global_2544632 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[Global_2544632 /*104*/].f_33));
				if (Global_2543383[Global_2544632 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_2543383[Global_2544632 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[Global_2544632 /*104*/].f_67));
				}
				if ((Global_2543383[Global_2544632 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_2543383[Global_2544632 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_2543383[Global_2544632 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2543383[Global_2544632 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543383[Global_2544632 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[Global_2544632 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2543383[Global_2544632 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543383[Global_2544632 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[Global_2544632 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_2543383[Global_2544632 /*104*/].f_49);
				break;
			
			case 3:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[Global_2544632 /*104*/].f_33));
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_2543383[Global_2544632 /*104*/].f_49);
				if (Global_2543383[Global_2544632 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_2543383[Global_2544632 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[Global_2544632 /*104*/].f_67));
				}
				if ((Global_2543383[Global_2544632 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_2543383[Global_2544632 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_2543383[Global_2544632 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2543383[Global_2544632 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543383[Global_2544632 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[Global_2544632 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2543383[Global_2544632 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543383[Global_2544632 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[Global_2544632 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_2543383[Global_2544632 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar33, "<C>", 64);
			StringConCat(&cVar33, &Global_2951, 64);
			StringConCat(&cVar33, "</C>", 64);
			uLocal_53 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 2, &cVar33, 0);
			MISC::SET_BIT(&Global_2544648, 1);
			Global_16750 = 1;
			Global_16749 = uLocal_53;
		}
		else
		{
			StringCopy(&cVar49, HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_2543383[Global_2544632 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_2543383[Global_2544632 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar65, &cVar49, 64);
				uLocal_53 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 2, &cVar65, 0);
			}
			else
			{
				uLocal_53 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 2, &cVar49, 0);
			}
			MISC::SET_BIT(&Global_2544648, 1);
			Global_16750 = 1;
			Global_16749 = uLocal_53;
			Global_16753 = 0;
		}
	}
	Global_2543383[Global_2544632 /*104*/].f_16 = uLocal_53;
}


void func_42()//Position - 0x297E
{
	if (MISC::IS_BIT_SET(Global_2263, 1))
	{
		func_48();
		func_43();
		Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_18 = 1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uLocal_42[Global_14393] = NETWORK::GET_NETWORK_TIME();
			iLocal_32[Global_14393] = 1;
		}
		else if (!MISC::IS_BIT_SET(Global_2263, 10))
		{
			uLocal_37[Global_14393] = MISC::GET_GAME_TIMER();
			iLocal_32[Global_14393] = 1;
		}
		else
		{
			uLocal_37[0] = MISC::GET_GAME_TIMER();
			uLocal_37[2] = MISC::GET_GAME_TIMER();
			uLocal_37[1] = MISC::GET_GAME_TIMER();
			iLocal_32[0] = 1;
			iLocal_32[2] = 1;
			iLocal_32[1] = 1;
		}
		MISC::CLEAR_BIT(&Global_2263, 1);
	}
}

void func_43()//Position - 0x2A1D
{
	GlobalFunc_9035();
	if (Global_68245)
	{
		Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_10 = GlobalFunc_6709(1185, -1, 0);
	}
	if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_10 == 1)
	{
		if (!GlobalFunc_116(0))
		{
			PAD::SET_PAD_SHAKE(0, 2000, 100);
		}
	}
}





void func_48()//Position - 0x2B36
{
	char cVar0[64];
	int iVar16;
	char cVar17[64];
	char cVar33[64];
	char cVar49[64];
	char cVar65[64];
	
	if (Global_16753 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_16753))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_16753))
			{
				StringCopy(&cVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_16753), 64);
				Global_16761[Global_16759] = Global_16753;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_16761[Global_16759] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_16761[Global_16759] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_16761[Global_16759] = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 == 4 || Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 == 5) || Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 == 6) || Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 == 7) || Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 == 8) || Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 == 9) || Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 == 10) || Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 == 11)
	{
		iVar16 = 0;
		switch (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_49)
		{
			case 1:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01");
				break;
			
			case 2:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02");
				break;
			
			case 3:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03");
				break;
			
			case 4:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04");
				break;
			
			case 5:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05");
				break;
			
			case 6:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06");
				break;
			
			case 7:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07");
				break;
			
			case 8:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08");
				break;
			
			case 9:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09");
				break;
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/]));
		while (iVar16 < Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_49)
		{
			switch (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32)
			{
				case 4:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2446554.f_1551[iVar16 /*4*/]));
					break;
				
				case 5:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683631[iVar16 /*4*/]));
					break;
				
				case 6:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683672[iVar16 /*4*/]));
					break;
				
				case 7:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683693[iVar16 /*4*/]));
					break;
				
				case 8:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683710[iVar16 /*4*/]));
					break;
				
				case 9:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683723[iVar16 /*4*/]));
					break;
				
				case 10:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683736[iVar16 /*4*/]));
					break;
				
				case 11:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683749[iVar16 /*4*/]));
					break;
			}
			iVar16++;
		}
		StringCopy(&cVar17, HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_17 /*29*/].f_3)), 64);
		uLocal_53 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 1, &cVar17, 0);
		Global_16750 = 3;
		Global_16749 = uLocal_53;
		Global_16753 = 0;
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/]));
		switch (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_33));
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67));
				}
				if ((Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_49);
				break;
			
			case 3:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_33));
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_49);
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67));
				}
				if ((Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar33, "<C>", 64);
			StringConCat(&cVar33, &Global_2951, 64);
			StringConCat(&cVar33, "</C>", 64);
			uLocal_53 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 1, &cVar33, 0);
			Global_16750 = 3;
			Global_16749 = uLocal_53;
		}
		else
		{
			StringCopy(&cVar49, HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar65, &cVar49, 64);
				uLocal_53 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 1, &cVar65, 0);
			}
			else
			{
				uLocal_53 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 1, &cVar49, 0);
			}
			Global_16750 = 3;
			Global_16749 = uLocal_53;
			Global_16753 = 0;
		}
	}
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_16 = uLocal_53;
}

void func_49()//Position - 0x31C5
{
	if (MISC::IS_BIT_SET(Global_2263, 19))
	{
		MISC::CLEAR_BIT(&Global_2263, 19);
		GlobalFunc_9035();
		Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_18 = 0;
		Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_17 = 0;
	}
}

void func_50()//Position - 0x3200
{
	if (iLocal_32[Global_14393] == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_52 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_42[Global_14393]);
		}
		else
		{
			uLocal_47[Global_14393] = MISC::GET_GAME_TIMER();
			iLocal_52 = (uLocal_47[Global_14393] - uLocal_37[Global_14393]);
		}
		if (iLocal_52 > 300000)
		{
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_18 = 0;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 = 0;
			iLocal_32[Global_14393] = 0;
		}
	}
}

void func_51()//Position - 0x3279
{
	GlobalFunc_9035();
	if (Global_68245 == 0)
	{
		if (!GlobalFunc_72())
		{
			switch (Global_14393)
			{
				case 0:
					iLocal_31 = 21;
					break;
				
				case 1:
					iLocal_31 = 22;
					break;
				
				case 2:
					iLocal_31 = 23;
					break;
				
				default:
					iLocal_31 = 21;
					break;
			}
			if (iLocal_68 == 0)
			{
				if (Global_2939[Global_14393])
				{
					iLocal_68 = 1;
					iLocal_69 = Global_14393;
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uLocal_66 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_60 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_67 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_66);
				}
				else
				{
					iLocal_61 = MISC::GET_GAME_TIMER();
					iLocal_67 = (iLocal_61 - iLocal_60);
				}
				if (iLocal_67 > 7000)
				{
					if (GlobalFunc_4938(0))
					{
						Global_2873[1 /*6*/] = { Global_2922[Global_14393 /*4*/] };
						Global_2949 = Global_2944[Global_14393];
						Global_2939[Global_14393] = 0;
						iLocal_68 = 0;
					}
				}
				if (iLocal_69 != Global_14393)
				{
					iLocal_68 = 0;
				}
			}
			if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_31 /*104*/].f_24 != 0)
			{
				if (func_52(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_31 /*104*/].f_17, &(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_31 /*104*/]), Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_31 /*104*/].f_24, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_31 /*104*/].f_25, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_31 /*104*/].f_26, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_31 /*104*/].f_29, 0, 1, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_31 /*104*/].f_31, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_31 /*104*/].f_30))
				{
					Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_31 /*104*/].f_24 = 0;
				}
			}
		}
	}
}

int func_52(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, bool bParam7, var uParam8, var uParam9)//Position - 0x33F2
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_2263, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_53(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, uParam4, uParam5, bParam7, uParam8, uParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			Global_2873[3 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			MISC::SET_BIT(&Global_2263, 1);
			MISC::SET_BIT(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_53(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x348A
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	GlobalFunc_9035();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (GlobalFunc_5406() == 0)
	{
		GlobalFunc_5405();
		return 0;
	}
	GlobalFunc_1500(Global_16759);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/]), sParam1, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_24 = iParam2;
	}
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_25 = iParam7;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_26 = uParam8;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_29 = uParam9;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_30 = uParam12;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_31 = uParam11;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_28 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_33), sParam4, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_50), sParam5, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_2263, 10))
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
		Global_2969 = 4;
		GlobalFunc_1494(0);
		GlobalFunc_1494(2);
		GlobalFunc_1494(1);
	}
	else
	{
		GlobalFunc_9035();
		switch (iParam16)
		{
			case 3:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[Global_14393] = 1;
				break;
			
			case 0:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14393)
			{
				case 0:
					GlobalFunc_1494(0);
					Global_2969 = 0;
					break;
				
				case 1:
					GlobalFunc_1494(1);
					Global_2969 = 1;
					break;
				
				case 2:
					GlobalFunc_1494(2);
					Global_2969 = 2;
					break;
				
				case 3:
					GlobalFunc_1494(3);
					Global_2969 = 3;
					break;
				
				default:
					Global_2969 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_2263, 10))
		{
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16761[Global_16759] = 0;
	if (bParam10)
	{
		GlobalFunc_9035();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!GlobalFunc_268())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			GlobalFunc_7019(1);
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}









void func_62()//Position - 0x3EFB
{
	if (MISC::IS_BIT_SET(Global_2263, 6))
	{
		if (Global_2967 > 0)
		{
			if (MISC::IS_BIT_SET(Global_2264, 11))
			{
				if (iLocal_30)
				{
					GlobalFunc_2013(uLocal_28, "CLEAR_ALL");
					if (MISC::IS_BIT_SET(Global_2263, 25))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_28, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					if (MISC::IS_BIT_SET(Global_2544648, 11))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_28, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(53);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					if (Global_68245 == 1)
					{
						if (MISC::IS_BIT_SET(Global_2544648, 12))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_28, "CREATE_ALERT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(52);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (MISC::IS_BIT_SET(Global_2544648, 19))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_28, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(55);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						if ((MISC::IS_BIT_SET(Global_2544648, 12) || MISC::IS_BIT_SET(Global_2544648, 11)) || MISC::IS_BIT_SET(Global_2263, 25))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(192f);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						}
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					MISC::CLEAR_BIT(&Global_2264, 11);
					iLocal_30 = 0;
				}
			}
		}
		if (Global_2967 < 1)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_28);
			MISC::CLEAR_BIT(&Global_2263, 6);
		}
		else
		{
			func_15();
		}
	}
	else if (Global_2967 > 0)
	{
		uLocal_28 = unk_0x67D02A194A2FC2BD("cellphone_alert_popup");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_28))
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		MISC::SET_BIT(&Global_2263, 6);
	}
}


void func_64()//Position - 0x40B2
{
	if (MISC::IS_BIT_SET(Global_2264, 7))
	{
		MISC::SET_BIT(&Global_2264, 6);
		MISC::CLEAR_BIT(&Global_2264, 7);
		return;
	}
	if (!MISC::IS_BIT_SET(Global_2264, 7))
	{
		MISC::CLEAR_BIT(&Global_2264, 6);
		return;
	}
}

void func_65()//Position - 0x40EF
{
	if (MISC::IS_BIT_SET(Global_2264, 4))
	{
		MISC::SET_BIT(&Global_2264, 3);
		MISC::CLEAR_BIT(&Global_2264, 4);
		return;
	}
	if (!MISC::IS_BIT_SET(Global_2264, 4))
	{
		MISC::CLEAR_BIT(&Global_2264, 3);
		return;
	}
}

void func_66()//Position - 0x412C
{
	if (MISC::IS_BIT_SET(Global_2264, 2))
	{
		if (!Global_14393.f_1 == 1)
		{
			Global_14393.f_1 = 0;
		}
		MISC::CLEAR_BIT(&Global_2264, 2);
		return;
	}
	if (!MISC::IS_BIT_SET(Global_2264, 2))
	{
		if (!Global_14393.f_1 == 1)
		{
			if (Global_14393.f_1 < 4)
			{
				Global_14393.f_1 = 3;
			}
		}
		return;
	}
}


int func_68(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4397
{
	GlobalFunc_9035();
	if (Global_68245 == 0)
	{
		if (GlobalFunc_39(14))
		{
			return 0;
		}
	}
	if (Global_14393.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (GlobalFunc_116(0) == 1)
		{
			return 0;
		}
	}
	if (Global_14359 == 1)
	{
		return 0;
	}
	if (Global_14393.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_14390))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14393.f_1 < 4)
			{
				GlobalFunc_885("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_14390 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_14375)
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_5232();
	GlobalFunc_5231();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[iParam0 /*15*/].f_9) == 0)
	{
		Global_2869 = 0;
		Global_14393.f_1 = 7;
		GlobalFunc_885(&(Global_2270[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[iParam0 /*15*/].f_9) == 0)
			{
				Global_14391 = SYSTEM::START_NEW_SCRIPT(&(Global_2270[iParam0 /*15*/].f_5), 3800);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[iParam0 /*15*/].f_9) == 0)
		{
			Global_14391 = SYSTEM::START_NEW_SCRIPT(&(Global_2270[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_2270[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}










