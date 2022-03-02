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
		if (GlobalFunc_442())
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
	if (GlobalFunc_3078() == 10)
	{
		if (!Global_68245)
		{
			Global_68245 = 1;
		}
	}
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
		GlobalFunc_1356(iLocal_18, &iVar3, 1);
		if (iVar3 >= 0)
		{
			if (Global_2097152[GlobalFunc_177() /*8053*/][iVar3 /*111*/].f_42 == 0)
			{
				func_9(iLocal_18, -1, -1);
			}
			else
			{
				iVar2 = Global_2097152[GlobalFunc_177() /*8053*/][iVar3 /*111*/].f_72;
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
	if (!GlobalFunc_439(&uLocal_16))
	{
		GlobalFunc_436(&uLocal_16, 1, 0);
		return;
	}
	else if (!GlobalFunc_5071(&uLocal_16, 5000, 1))
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
	GlobalFunc_434(&uLocal_16);
}





void func_9(int iParam0, int iParam1, int iParam2)//Position - 0x309
{
	iParam1++;
	GlobalFunc_5019(GlobalFunc_327(iParam0), iParam1, iParam2, 1);
	if (iParam2 == -1 || iParam2 == GlobalFunc_5())
	{
		Global_1692749[iParam0] = iParam1;
	}
}






void func_15()//Position - 0x5C7
{
	MISC::SET_BIT(&uLocal_1, 6);
	if (!GlobalFunc_896() && Global_1602437 != 2)
	{
		if (NETWORK::_IS_ENTITY_GHOSTED_TO_LOCAL_PLAYER(PLAYER::PLAYER_PED_ID()))
		{
			NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(0);
		}
	}
}


void func_17()//Position - 0x605
{
	var uVar0;
	
	MISC::SET_BIT(&uLocal_1, 4);
	if (GlobalFunc_1471(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_2446554.f_736 && !GlobalFunc_3822())
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



void func_20()//Position - 0x80B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	MISC::SET_BIT(&uLocal_1, 5);
	if (!iLocal_10[GlobalFunc_5()] && GlobalFunc_1471(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar1 = 0;
		while (iVar1 < 39)
		{
			bVar4 = false;
			iVar2 = 0;
			iVar3 = Global_2097152[GlobalFunc_177() /*8053*/][iVar1 /*111*/].f_42;
			if (iVar3 != 0)
			{
				iVar2 = Global_2097152[GlobalFunc_177() /*8053*/][iVar1 /*111*/].f_72;
				if (MISC::IS_BIT_SET(iVar2, 1) && !MISC::IS_BIT_SET(iVar2, 2))
				{
				}
				else
				{
					GlobalFunc_328(iVar1, &iVar0);
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
									if (GlobalFunc_325(iVar0) == GlobalFunc_325(iVar1))
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
		iLocal_10[GlobalFunc_5()] = 1;
	}
}



void func_23()//Position - 0x97B
{
	var uVar0;
	
	if (!GlobalFunc_439(&uLocal_8))
	{
		GlobalFunc_436(&uLocal_8, 1, 0);
	}
	else if (GlobalFunc_5071(&uLocal_8, 2000, 1))
	{
		if (GlobalFunc_1471(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!GlobalFunc_554(PLAYER::PLAYER_ID()))
			{
				if (!iLocal_6 && !MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_651, 30))
				{
					uVar0 = func_25(2378, -1);
					if (MISC::IS_BIT_SET(uVar0, 26))
					{
						func_24("FM_TWO_STRINGS", "FM_TSHIRT_UNLOCK", "CLO_VEM_DEC_47", 0, 0);
						iLocal_6 = 1;
						MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_651), 30);
					}
				}
			}
			else if (!iLocal_7 && !MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_651, 31))
			{
				iVar0 = func_25(2398, -1);
				if (MISC::IS_BIT_SET(iVar0, 8))
				{
					func_24("FM_TWO_STRINGS", "FM_TSHIRT_UNLOCK", "CLO_VEF_DEC_47", 0, 0);
					iLocal_7 = 1;
					MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_651), 31);
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
	
	uVar0 = Global_2454605[iParam0 /*6*/][GlobalFunc_4916(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
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


