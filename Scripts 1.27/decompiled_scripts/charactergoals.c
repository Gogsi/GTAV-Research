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
	int iLocal_18[2] = { 0, 0 };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		GlobalFunc_491();
	}
	while (true)
	{
		SYSTEM::WAIT(250);
		switch (iLocal_17)
		{
			case 0:
				if (iLocal_18[0])
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						Global_16811[3 /*42*/].f_27[0] = GlobalFunc_469(2);
						GlobalFunc_10871(2, 32, Global_16811[3 /*42*/].f_27[0]);
					}
					StringCopy(&(Global_16811[3 /*42*/]), "PA_TREV1", 16);
					StringCopy(&(Global_16811[3 /*42*/].f_4), "PA_TREV1", 16);
					Global_16811[3 /*42*/].f_8 = 0;
					Global_16811[3 /*42*/].f_9 = 1;
					StringCopy(&(Global_16811[3 /*42*/].f_10[1 /*4*/]), "PA_TREV1A", 16);
					Global_16811[3 /*42*/].f_37[1] = 0;
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						Global_16811[3 /*42*/].f_27[1] = GlobalFunc_469(2);
					}
					func_33(2, 3, 1, 1);
					func_30("PA_TREV1A", Global_16811[3 /*42*/].f_27[1]);
					iLocal_17 = 1;
				}
				break;
			
			case 1:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					Global_16811[3 /*42*/].f_27[1] = GlobalFunc_469(2);
					if (func_29(2, 999999))
					{
						func_28("PA_COMPLETE", "PA_TREV1", 2000, 1);
						Global_16811[3 /*42*/].f_37[1] = 1;
						Global_16811[3 /*42*/].f_8 = 1;
						iLocal_23 = MISC::GET_GAME_TIMER();
						iLocal_17 = 2;
					}
					else if (func_29(2, 499999))
					{
						if (!iLocal_21)
						{
							GlobalFunc_527("PA_TREV1", 2000, 1);
							iLocal_21 = 1;
						}
					}
					if (iLocal_18[1])
					{
						GlobalFunc_10844(2, 32, 500000, 0, 0);
						iLocal_18[1] = 0;
					}
				}
				break;
			
			case 2:
				iLocal_22 = MISC::GET_GAME_TIMER();
				if ((iLocal_22 - iLocal_23) < 5000)
				{
					func_30("PA_TREV1A", Global_16811[3 /*42*/].f_27[1]);
				}
				break;
		}
	}
}




























void func_28(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x11D5
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, 0);
}

int func_29(int iParam0, int iParam1)//Position - 0x11F4
{
	if (GlobalFunc_469(iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_30(char* sParam0, var uParam1)//Position - 0x120F
{
	GRAPHICS::DRAW_RECT(0.852f, 0.81f, 0.141f, 0.025f, 0, 0, 0, 175, 0);
	func_32(255, 255, 255, 255);
	func_31(0.81f, 0.8f, sParam0, uParam1, 0);
}

void func_31(float fParam0, float fParam1, var uParam2, var uParam3, int iParam4)//Position - 0x1252
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_32(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1270
{
	HUD::SET_TEXT_SCALE(0.3f, 0.3f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(1);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

int func_33(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x12AF
{
	if (GlobalFunc_72())
	{
		return 0;
	}
	if (func_34(iParam0, iParam1, bParam2, iParam3) == 1)
	{
		return 1;
	}
	return 0;
}

int func_34(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x12DA
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appsidetask")) > 0)
	{
		return 0;
	}
	if (func_37() == 0)
	{
		GlobalFunc_587();
		return 0;
	}
	func_35(Global_16810);
	Global_16980[Global_16810 /*9*/].f_1 = uParam1;
	Global_16980[Global_16810 /*9*/] = uParam0;
	if (iParam3 == 0)
	{
	}
	else
	{
		Global_16980[Global_16810 /*9*/].f_8 = iParam3;
	}
	if (bParam2)
	{
	}
	return 1;
}

void func_35(int iParam0)//Position - 0x133E
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = CLOCK::GET_CLOCK_SECONDS();
	uVar1 = CLOCK::GET_CLOCK_MINUTES();
	uVar2 = CLOCK::GET_CLOCK_HOURS();
	uVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	uVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_16980[iParam0 /*9*/].f_2 = uVar0;
	Global_16980[iParam0 /*9*/].f_2.f_1 = uVar1;
	Global_16980[iParam0 /*9*/].f_2.f_2 = uVar2;
	Global_16980[iParam0 /*9*/].f_2.f_3 = uVar3;
	Global_16980[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_16980[iParam0 /*9*/].f_2.f_5 = uVar5;
}


int func_37()//Position - 0x13C0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_16980[iVar0 /*9*/].f_8 == 0)
		{
			Global_16810 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_16810 = 3;
	Global_16980[Global_16810 /*9*/].f_2 = -1;
	Global_16980[Global_16810 /*9*/].f_2.f_1 = 0;
	Global_16980[Global_16810 /*9*/].f_2.f_2 = 0;
	Global_16980[Global_16810 /*9*/].f_2.f_3 = 0;
	Global_16980[Global_16810 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_16980[iVar0 /*9*/].f_8 == 0 || Global_16980[iVar0 /*9*/].f_8 == 1)
		{
			if (!GlobalFunc_1496(Global_16980[iVar0 /*9*/].f_2, Global_16980[Global_16810 /*9*/].f_2))
			{
				Global_16810 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_16810 == 3)
	{
		return 0;
	}
	return 1;
}






