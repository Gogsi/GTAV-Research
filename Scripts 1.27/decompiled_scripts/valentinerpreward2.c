#region Local Var
	char* sLocal_0 = NULL;
	var uLocal_1 = 0;
	bool bLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10[5] = { 0, 0, 0, 0, 0 };
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
	sLocal_0 = "BG_NG 1.27.08";
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (func_30())
		{
			func_29();
			if (bLocal_2)
			{
				HUD::SET_TEXT_SCALE(0f, 0.23f);
				HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
				func_28(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (MISC::IS_PC_VERSION())
			{
				func_23();
			}
			else
			{
				func_20();
			}
			func_17();
			func_15();
			func_4();
			func_2();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()//Position - 0xAA
{
	MISC::SET_BIT(&uLocal_1, 9);
	if (Global_1311716[0 /*4*/] > 0)
	{
		if (Global_2391035 > 0)
		{
			if (Global_2359718[0 /*26*/].f_1 == 14)
			{
				if (Global_1602437 == 0)
				{
					if (Global_1602437.f_1 == 2)
					{
						Global_2391035 = 0;
						Global_2391036 = 0;
					}
				}
			}
		}
	}
}

void func_2()//Position - 0xF7
{
	MISC::SET_BIT(&uLocal_1, 8);
	if (func_3() == 10)
	{
		if (!Global_68245)
		{
			Global_68245 = 1;
		}
	}
}

int func_3()//Position - 0x11D
{
	return Global_1315856;
}

void func_4()//Position - 0x129
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	MISC::SET_BIT(&uLocal_1, 7);
	if (Global_1692749[iLocal_18] > 0 && Global_1692749[iLocal_18] < 39)
	{
		func_14(iLocal_18, &iVar3, 1);
		if (iVar3 >= 0)
		{
			if (Global_2097152[func_13() /*8053*/][iVar3 /*111*/].f_42 == 0)
			{
				func_9(iLocal_18, -1, -1);
			}
			else
			{
				iVar2 = Global_2097152[func_13() /*8053*/][iVar3 /*111*/].f_72;
				if (MISC::IS_BIT_SET(iVar2, 1) && !MISC::IS_BIT_SET(iVar2, 2))
				{
					func_9(iLocal_18, -1, -1);
				}
			}
		}
	}
	iLocal_18++;
	if (iLocal_18 >= 39)
	{
		iLocal_18 = 0;
	}
	if (!func_8(&uLocal_16))
	{
		func_7(&uLocal_16, 1, 0);
		return;
	}
	else if (!func_6(&uLocal_16, 5000, 1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = 0;
		while (iVar1 < 39)
		{
			if (iVar0 != iVar1 && Global_1692749[iVar0] > 0)
			{
				if (Global_1692749[iVar0] == Global_1692749[iVar1])
				{
					func_9(iVar1, -1, -1);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	func_5(&uLocal_16);
}

void func_5(var uParam0)//Position - 0x24D
{
	uParam0->f_1 = 0;
}

int func_6(var uParam0, int iParam1, bool bParam2)//Position - 0x25A
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

void func_7(var uParam0, bool bParam1, bool bParam2)//Position - 0x2B8
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

bool func_8(var uParam0)//Position - 0x2FD
{
	return uParam0->f_1;
}

void func_9(int iParam0, int iParam1, int iParam2)//Position - 0x309
{
	iParam1++;
	func_11(func_12(iParam0), iParam1, iParam2, 1);
	if (iParam2 == -1 || iParam2 == func_10())
	{
		Global_1692749[iParam0] = iParam1;
	}
}

int func_10()//Position - 0x345
{
	return Global_1312737;
}

var func_11(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x351
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_10();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_12(int iParam0)//Position - 0x576
{
	return (4036 + iParam0);
}

int func_13()//Position - 0x584
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_14(int iParam0, var uParam1, bool bParam2)//Position - 0x591
{
	if (Global_262145.f_7796)
	{
		*uParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*uParam1 = (Global_1692749[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*uParam1 = -1;
	}
}

void func_15()//Position - 0x5C7
{
	MISC::SET_BIT(&uLocal_1, 6);
	if (!func_16() && Global_1602437 != 2)
	{
		if (NETWORK::_IS_ENTITY_GHOSTED_TO_LOCAL_PLAYER(PLAYER::PLAYER_PED_ID()))
		{
			NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(0);
		}
	}
}

bool func_16()//Position - 0x5F9
{
	return Global_1312418;
}

void func_17()//Position - 0x605
{
	var uVar0;
	
	MISC::SET_BIT(&uLocal_1, 4);
	if (func_19(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_2446554.f_736 && !func_18())
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !Global_2446554.f_737)
			{
				if (!Global_1683626)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) == 1 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) == 0)
					{
						if (!iLocal_4)
						{
							iLocal_4 = 1;
							uLocal_5 = NETWORK::GET_NETWORK_TIME();
						}
						else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_5)) > 7000)
						{
							uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar0) && DECORATOR::DECOR_EXIST_ON(uVar0, "Player_Vehicle"))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0, 0, 1);
								VEHICLE::DELETE_VEHICLE(&uVar0);
							}
						}
						return;
					}
				}
			}
		}
	}
	iLocal_4 = 0;
}

int func_18()//Position - 0x6DC
{
	if (((((((((MISC::IS_BIT_SET(Global_90014.f_1267[39], 6) || MISC::IS_BIT_SET(Global_90014.f_1267[40], 6)) || MISC::IS_BIT_SET(Global_90014.f_1267[41], 6)) || MISC::IS_BIT_SET(Global_90014.f_1267[42], 6)) || MISC::IS_BIT_SET(Global_90014.f_1267[43], 6)) || MISC::IS_BIT_SET(Global_90014.f_1267[39], 25)) || MISC::IS_BIT_SET(Global_90014.f_1267[40], 25)) || MISC::IS_BIT_SET(Global_90014.f_1267[41], 25)) || MISC::IS_BIT_SET(Global_90014.f_1267[42], 25)) || MISC::IS_BIT_SET(Global_90014.f_1267[43], 25))
	{
		return 1;
	}
	return 0;
}

int func_19(var uParam0, bool bParam1, bool bParam2)//Position - 0x7C7
{
	int iVar0;
	
	iVar0 = uParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_PLAYING(uParam0))
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

void func_20()//Position - 0x80B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	MISC::SET_BIT(&uLocal_1, 5);
	if (!iLocal_10[func_10()] && func_19(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar1 = 0;
		while (iVar1 < 39)
		{
			bVar4 = false;
			iVar2 = 0;
			iVar3 = Global_2097152[func_13() /*8053*/][iVar1 /*111*/].f_42;
			if (iVar3 != 0)
			{
				iVar2 = Global_2097152[func_13() /*8053*/][iVar1 /*111*/].f_72;
				if (MISC::IS_BIT_SET(iVar2, 1) && !MISC::IS_BIT_SET(iVar2, 2))
				{
				}
				else
				{
					func_22(iVar1, &iVar0);
					if (iVar0 == -1)
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 39)
						{
							if (!bVar4)
							{
								if (Global_1692749[iVar0] <= 0)
								{
									if (func_21(iVar0) == func_21(iVar1))
									{
										func_9(iVar0, iVar1, -1);
										iVar0 = 39;
										bVar4 = true;
									}
								}
							}
							iVar0++;
						}
					}
				}
			}
			iVar1++;
		}
		iLocal_10[func_10()] = 1;
	}
}

int func_21(int iParam0)//Position - 0x8F2
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
			return 1;
			break;
	}
	return 0;
}

void func_22(int iParam0, var uParam1)//Position - 0x93F
{
	int iVar0;
	
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (iParam0 == (Global_1692749[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

void func_23()//Position - 0x97B
{
	var uVar0;
	
	if (!func_8(&uLocal_8))
	{
		func_7(&uLocal_8, 1, 0);
	}
	else if (func_6(&uLocal_8, 2000, 1))
	{
		if (func_19(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!func_27(PLAYER::PLAYER_ID()))
			{
				if (!iLocal_6 && !MISC::IS_BIT_SET(Global_2097152[func_13() /*8053*/].f_5756.f_651, 30))
				{
					uVar0 = func_25(2378, -1);
					if (MISC::IS_BIT_SET(uVar0, 26))
					{
						func_24("FM_TWO_STRINGS", "FM_TSHIRT_UNLOCK", "CLO_VEM_DEC_47", 0, 0);
						iLocal_6 = 1;
						MISC::SET_BIT(&(Global_2097152[func_13() /*8053*/].f_5756.f_651), 30);
					}
				}
			}
			else if (!iLocal_7 && !MISC::IS_BIT_SET(Global_2097152[func_13() /*8053*/].f_5756.f_651, 31))
			{
				iVar0 = func_25(2398, -1);
				if (MISC::IS_BIT_SET(iVar0, 8))
				{
					func_24("FM_TWO_STRINGS", "FM_TSHIRT_UNLOCK", "CLO_VEF_DEC_47", 0, 0);
					iLocal_7 = 1;
					MISC::SET_BIT(&(Global_2097152[func_13() /*8053*/].f_5756.f_651), 31);
				}
			}
		}
	}
}

void func_24(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xA83
{
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}

int func_25(int iParam0, int iParam1)//Position - 0xAC0
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2454605[iParam0 /*6*/][func_26(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_26(var uParam0)//Position - 0xAEC
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_10();
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

int func_27(var uParam0)//Position - 0xB20
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_28(float fParam0, float fParam1, char* sParam2, char* sParam3)//Position - 0xB3F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_29()//Position - 0xB5C
{
	if (!bLocal_2)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_3)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_3++;
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_3++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_3++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_3++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
					{
						bLocal_2 = true;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_3)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
				{
					iLocal_3++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_3++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_3++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_3++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					bLocal_2 = false;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			}
	}
}

bool func_30()//Position - 0xD2F
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

