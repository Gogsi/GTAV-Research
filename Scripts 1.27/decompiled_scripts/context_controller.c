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
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	struct<4> Local_57 = { 0, 0, 0, 0 } ;
	struct<4> Local_61 = { 0, 0, 0, 0 } ;
	int iLocal_65 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iVar0 = 0;
	iVar1 = iVar0;
	SYSTEM::SETTIMERA(0);
	Global_35723 = 0;
	func_29();
	StringCopy(&Global_35724, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_68245;
	while (true)
	{
		if (Global_68245)
		{
			func_26();
		}
		else
		{
			func_24();
		}
		func_18();
		if (Global_68245 != iVar8)
		{
			func_17();
			func_29();
			iVar2 = -1;
			iVar8 = Global_68245;
			while (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				SYSTEM::WAIT(2000);
			}
		}
		if (Global_35729)
		{
			if (Global_35731 > -1)
			{
				if (!Global_35613[Global_35731 /*18*/].f_5)
				{
					if (!func_15(Global_35731, 1))
					{
						Global_35731 = -1;
					}
				}
			}
		}
		if (func_11())
		{
			iVar2 = -1;
			func_17();
		}
		if (iVar2 > -1)
		{
			if (!Global_35729)
			{
				if (Global_35731 != iVar2)
				{
					if (func_10(Global_35731))
					{
						func_17();
						if (!Global_35613[iVar2 /*18*/].f_4 && Global_35613[iVar2 /*18*/])
						{
							if (!func_11())
							{
								if (!Global_35613[iVar2 /*18*/].f_6)
								{
									if (!Global_35613[iVar2 /*18*/].f_5)
									{
										if (!Global_35613[iVar2 /*18*/].f_11)
										{
											func_9(Global_35613[iVar2 /*18*/].f_7);
										}
										else
										{
											func_8(Global_35613[iVar2 /*18*/].f_7, Global_35613[iVar2 /*18*/].f_12);
										}
										Global_35731 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_17();
			}
		}
		else
		{
			func_17();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_7();
				if (PAD::IS_CONTROL_RELEASED(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_11())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
						{
							Global_35613[iVar2 /*18*/].f_3 = 1;
							Global_35613[iVar2 /*18*/].f_16 = 0;
							iVar7 = Global_35613[iVar2 /*18*/].f_1;
							iVar0 = 1;
							Global_35722 = 0;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0))
							{
								if (PAD::IS_CONTROL_ENABLED(0, 101))
								{
									bVar5 = true;
									PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
								}
								if (PAD::IS_CONTROL_ENABLED(0, 74))
								{
									bVar4 = true;
									PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							PAD::ENABLE_CONTROL_ACTION(0, 101, 1);
							bVar5 = false;
						}
						if (bVar4)
						{
							PAD::ENABLE_CONTROL_ACTION(0, 74, 1);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_6() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (SYSTEM::TIMERA() > 5000)
					{
						Global_35613[iVar2 /*18*/].f_6 = 1;
						iVar0 = 0;
					}
					else if (func_5(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_35613[iVar2 /*18*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_35613[iVar2 /*18*/].f_6 || Global_35613[iVar2 /*18*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_35722)
				{
					func_17();
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_35613[iVar2 /*18*/].f_16 = 0;
					}
				}
				if (Global_35723)
				{
					Global_35723 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_35613[iVar2 /*18*/].f_3 || Global_35613[iVar2 /*18*/].f_6))
					{
						Global_35723 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_35613[iVar2 /*18*/].f_6 || Global_35613[iVar2 /*18*/] == 0)
					{
						iVar2 = -1;
					}
				}
				if (iVar2 == -1)
				{
					iVar0 = 0;
					iVar6 = 0;
				}
				break;
		}
		if (iVar2 > -1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 46, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			SYSTEM::SETTIMERA(0);
			iVar6 = 0;
		}
		func_4();
		func_2(&iVar2);
		Global_35728 = 0;
		Global_35729 = 0;
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x422
{
	if (!bLocal_55)
	{
		return;
	}
	if (bLocal_56)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(&Local_57);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_35724);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Local_61);
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, 50);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(&Local_57);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_35724);
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, 50);
	}
}

void func_2(int iParam0)//Position - 0x46D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/] && Global_35613[iVar0 /*18*/].f_3)
		{
			if (Global_35613[iVar0 /*18*/].f_17 != 0)
			{
				if (!SCRIPT::IS_THREAD_ACTIVE(Global_35613[iVar0 /*18*/].f_17))
				{
					if (*iParam0 > -1)
					{
						func_3();
					}
					Global_35613[iVar0 /*18*/] = 0;
					Global_35613[iVar0 /*18*/].f_17 = 0;
					Global_35613[iVar0 /*18*/] = 0;
					Global_35613[iVar0 /*18*/].f_3 = 0;
					Global_35613[iVar0 /*18*/].f_4 = 0;
					Global_35613[iVar0 /*18*/].f_2 = 0;
					Global_35613[iVar0 /*18*/].f_6 = 0;
					Global_35613[iVar0 /*18*/].f_5 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_3()//Position - 0x51B
{
	if (Global_35731 != -1 || bLocal_55)
	{
		bLocal_55 = false;
		Global_35731 = -1;
	}
}

void func_4()//Position - 0x53A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/].f_6)
		{
			if (iVar0 == Global_35731)
			{
				func_17();
			}
			Global_35613[iVar0 /*18*/].f_17 = 0;
			Global_35613[iVar0 /*18*/] = 0;
			Global_35613[iVar0 /*18*/].f_3 = 0;
			Global_35613[iVar0 /*18*/].f_4 = 0;
			Global_35613[iVar0 /*18*/].f_2 = 0;
			Global_35613[iVar0 /*18*/].f_6 = 0;
			Global_35613[iVar0 /*18*/].f_5 = 0;
			Global_35613[iVar0 /*18*/].f_1 = -1;
		}
		iVar0++;
	}
}

int func_5(int iParam0)//Position - 0x5BD
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_35613[iParam0 /*18*/].f_4)
	{
		return 1;
	}
	return 0;
}

int func_6()//Position - 0x5E0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/] == 1)
		{
			if (Global_35613[iVar0 /*18*/].f_3 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_17();
	}
	return iVar1;
}

int func_7()//Position - 0x62A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/])
		{
			if (Global_35613[iVar0 /*18*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_35613[iVar0 /*18*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_8(struct<4> Param0, struct<4> Param4)//Position - 0x676
{
	Local_57 = { Param0 };
	Local_61 = { Param4 };
	bLocal_55 = true;
	bLocal_56 = true;
}

void func_9(struct<4> Param0)//Position - 0x694
{
	Local_57 = { Param0 };
	bLocal_55 = true;
	bLocal_56 = false;
}

int func_10(int iParam0)//Position - 0x6AA
{
	if (Global_87296 && Global_87295)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_15(iParam0, 1) || bLocal_55)
		{
			return 1;
		}
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::_0x214CD562A939246A())
	{
		return 0;
	}
	return 1;
}

int func_11()//Position - 0x6F8
{
	if (Global_67058)
	{
		return 1;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	if (func_14(0))
	{
		return 1;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 1;
	}
	if (Global_35728)
	{
		return 1;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		return 1;
	}
	if (func_13(1))
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 1;
	}
	if (func_12(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_12(int iParam0, int iParam1)//Position - 0x76F
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

bool func_13(bool bParam0)//Position - 0x7AA
{
	if (bParam0)
	{
		return (Global_17098.f_4 && Global_17098.f_104 == 4);
	}
	return Global_17098.f_4;
}

int func_14(int iParam0)//Position - 0x7D3
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

int func_15(int iParam0, int iParam1)//Position - 0x82D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_16(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_35613[iVar0 /*18*/].f_5)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_35613[iVar0 /*18*/].f_11)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_35613[iVar0 /*18*/].f_7));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_35724);
		iVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_35613[iVar0 /*18*/].f_7));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_35724);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_35613[iVar0 /*18*/].f_12));
		iVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	return iVar1;
}

int func_16(int iParam0)//Position - 0x8C6
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

void func_17()//Position - 0x901
{
	func_3();
	Global_35731 = -1;
}

void func_18()//Position - 0x911
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !Global_67058)
	{
		if (func_23(0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2428131.f_656.f_12)))
			{
				func_22();
				func_19(6);
			}
		}
	}
}

void func_19(int iParam0)//Position - 0x94D
{
	Global_67067 = iParam0;
	switch (Global_67067)
	{
		case 3:
			Global_67065 = 0;
			break;
		
		case 4:
			Global_67065 = 3;
			break;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return;
	}
	if (Global_68245 && func_21())
	{
		return;
	}
	if (!Global_68245 && func_20())
	{
		return;
	}
	if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SCRIPT::REQUEST_SCRIPT("appInternet");
	}
	while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT("appInternet", 3584);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
}

var func_20()//Position - 0x9EE
{
	return Global_67059;
}

var func_21()//Position - 0x9FA
{
	return Global_1684040;
}

void func_22()//Position - 0xA06
{
	Global_2428131.f_656.f_28 = 0;
}

bool func_23(bool bParam0)//Position - 0xA18
{
	if (bParam0)
	{
		return (Global_2428131.f_656.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2428131.f_656.f_31);
	}
	return Global_2428131.f_656.f_28;
}

void func_24()//Position - 0xA54
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_51925[iVar1] < 0)
		{
			Global_51925[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_25(0);
		func_25(1);
		func_25(2);
	}
}

void func_25(int iParam0)//Position - 0xA9E
{
	var uVar0;
	
	uVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), uVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), uVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), uVar0, 1);
			break;
	}
}

void func_26()//Position - 0xAF8
{
	struct<13> Var0;
	
	if (Global_1572889 != -1)
	{
		Var0 = Global_1572890[0];
		Var0.f_1 = Global_1572890[1];
		Var0.f_2 = Global_1572890[2];
		Var0.f_3 = Global_1572890[3];
		Var0.f_4 = Global_1572890[4];
		Var0.f_5 = Global_1572890[5];
		Var0.f_6 = Global_1572890[6];
		Var0.f_7 = Global_1572890[7];
		Var0.f_8 = Global_1572890[8];
		Var0.f_9 = Global_1572890[9];
		Var0.f_10 = Global_1572890[10];
		Var0.f_11 = Global_1572890[11];
		Var0.f_12 = Global_1572890[12];
		if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
		{
			if (!iLocal_65)
			{
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&Var0))
				{
					iLocal_65 = 1;
				}
			}
			if (iLocal_65)
			{
				if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
				}
				else
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(&(Global_2097152[func_28() /*8053*/].f_7876.f_18[Global_1572889 /*6*/]), NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 24);
					}
					Global_1572889 = -1;
					iLocal_65 = 0;
				}
			}
		}
		else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
		{
			if (func_27(Var0))
			{
				StringCopy(&(Global_2097152[func_28() /*8053*/].f_7876.f_18[Global_1572889 /*6*/]), NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 24);
			}
			Global_1572889 = -1;
			iLocal_65 = 0;
		}
		else
		{
			if (func_27(Var0))
			{
				StringCopy(&(Global_2097152[func_28() /*8053*/].f_7876.f_18[Global_1572889 /*6*/]), NETWORK::NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(&Var0), 24);
			}
			Global_1572889 = -1;
			iLocal_65 = 0;
		}
	}
}

bool func_27(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xC74
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_28()//Position - 0xC84
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_29()//Position - 0xC91
{
	int iVar0;
	
	Global_35722 = 0;
	Global_35728 = 0;
	Global_35729 = 0;
	Global_35730 = 1;
	Global_35731 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_35613[iVar0 /*18*/] = 0;
		iVar0++;
	}
}

