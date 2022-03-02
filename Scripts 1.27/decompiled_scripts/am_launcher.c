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
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	struct<20> Local_86 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	struct<3> Local_110 = { 0, 0, 0 } ;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	struct<3> Local_115[32];
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_109 = 40;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_111(ScriptParam_0))
		{
			func_110();
		}
	}
	while (true)
	{
		GlobalFunc_906();
		if (GlobalFunc_7741())
		{
			func_110();
		}
		switch (func_99(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_98() == 1)
				{
					if (GlobalFunc_82())
					{
						Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 1;
					}
				}
				break;
			
			case 1:
				if (func_98() == 1)
				{
					func_34();
				}
				else if (func_98() == 3)
				{
					Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_110();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_98())
			{
				case 0:
					if (func_31())
					{
						Global_2441732 = 1;
					}
					break;
				
				case 1:
					if (GlobalFunc_81())
					{
						Global_2441732 = 3;
					}
					func_1();
					break;
				
				case 3:
					func_110();
					break;
				}
		}
	}
}

void func_1()//Position - 0x14F
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	switch (Global_2441732.f_2)
	{
		case 0:
			if (!MISC::IS_BIT_SET(Global_2441732.f_1, 1))
			{
				GlobalFunc_434(&(Global_2441732.f_60));
				MISC::SET_BIT(&(Global_2441732.f_1), 1);
			}
			else if (GlobalFunc_5071(&(Global_2441732.f_60), Global_2441732.f_62, 0))
			{
				func_26(1);
				MISC::CLEAR_BIT(&(Global_2441732.f_1), 1);
			}
			break;
		
		case 1:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar0 = 0;
				while (iVar0 < 8)
				{
					iVar1 = iVar0;
					func_25(iVar1, 0f);
					if (!func_24(iVar1))
					{
						if (GlobalFunc_7799(func_23(iVar1), func_22(iVar1), func_21(iVar1), 1, 1))
						{
							if (!func_11(iVar1))
							{
								func_25(iVar1, func_10(iVar1));
							}
						}
					}
					iVar0++;
				}
				func_26(3);
			}
			else
			{
				func_26(0);
			}
			break;
		
		case 3:
			Global_2441732.f_3 = -1;
			iVar2 = func_9();
			if (iVar2 != -1)
			{
				Global_2441732.f_3 = { Global_2441732.f_8[iVar2 /*5*/] };
				func_26(4);
			}
			else
			{
				Global_2441732.f_62 = (Global_262145.f_6409 / 2);
				func_26(0);
			}
			break;
		
		case 4:
			switch (func_8(Global_2441732.f_3))
			{
				case 0:
					break;
				
				case 1:
					switch (Global_2441732.f_3)
					{
						case 1:
							func_6();
							break;
					}
					bVar3 = true;
					if (bVar3)
					{
						if (Global_2441732.f_3 == 1)
						{
							if (MISC::IS_BIT_SET(Global_2441732.f_1, 4))
							{
								func_26(5);
							}
							else
							{
								func_26(6);
							}
						}
						else
						{
							func_26(6);
						}
					}
					else
					{
						func_25(Global_2441732.f_3, 0f);
						func_26(3);
					}
					break;
				
				case 2:
					func_25(Global_2441732.f_3, 0f);
					func_26(3);
					break;
			}
			break;
		
		case 5:
			if (Global_2441732.f_3 == 1)
			{
				if (MISC::IS_BIT_SET(Global_2441732.f_1, 4))
				{
					if (!MISC::IS_BIT_SET(Global_2441732.f_1, 3))
					{
						GlobalFunc_434(&(Global_2441732.f_58));
						MISC::SET_BIT(&(Global_2441732.f_1), 3);
					}
					else if (GlobalFunc_5071(&(Global_2441732.f_58), (Global_262145.f_44 * 120000), 0))
					{
						MISC::CLEAR_BIT(&(Global_2441732.f_1), 3);
						func_26(6);
					}
				}
				else
				{
					func_26(6);
				}
			}
			else
			{
				func_26(6);
			}
			break;
		
		case 6:
			if (Global_2441732.f_3.f_1 == 19)
			{
				func_4(GlobalFunc_924(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_IMP_EXP", -1, 0)), 1);
				Global_2446554.f_1550 = 0;
				func_26(7);
				func_3(Global_2441732.f_3);
			}
			else if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(GlobalFunc_1557(Global_2441732.f_3.f_1), -1, 0, 0))
			{
				func_26(7);
				func_3(Global_2441732.f_3);
			}
			break;
		
		case 7:
			if (Global_2441732.f_3.f_1 == 19)
			{
				if (Global_2446554.f_1550)
				{
					func_26(8);
					Global_2446554.f_1550 = 0;
				}
			}
			else if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(GlobalFunc_1557(Global_2441732.f_3.f_1), -1, 0, 0))
			{
				func_26(8);
			}
			break;
		
		case 8:
			if (MISC::IS_BIT_SET(Global_2441732.f_1, 0))
			{
				func_26(0);
				MISC::CLEAR_BIT(&(Global_2441732.f_1), 0);
			}
			else
			{
				Global_2441732.f_62 = Global_262145.f_6409;
				Global_2441732.f_8[Global_2441732.f_3 /*5*/].f_4 = 1;
				if (MISC::IS_BIT_SET(Global_2441732.f_1, 2))
				{
					MISC::CLEAR_BIT(&(Global_2441732.f_1), 2);
				}
				if (MISC::IS_BIT_SET(Global_2441732.f_1, 4))
				{
					MISC::CLEAR_BIT(&(Global_2441732.f_1), 4);
				}
				Global_2441732.f_3 = -1;
				Global_2441732.f_3.f_1 = 0;
				MISC::SET_BIT(&(Global_2441732.f_1), 0);
			}
			break;
	}
}


void func_3(var uParam0)//Position - 0x84D
{
	int iVar0;
	
	if (Global_262145.f_6408 > 0 && Global_262145.f_6408 <= 8)
	{
		if (!Global_2441732.f_49[(Global_262145.f_6408 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < (Global_262145.f_6408 - 1))
			{
				Global_2441732.f_49[iVar0] = Global_2441732.f_49[iVar0 + 1];
				iVar0++;
			}
		}
		Global_2441732.f_49[(Global_262145.f_6408 - 1)] = uParam0;
	}
}

void func_4(int iParam0, int iParam1)//Position - 0x8CA
{
	struct<3> Var0;
	
	Var0.x = 363;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}


void func_6()//Position - 0x90C
{
	func_7(GlobalFunc_924(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("freemode", -1, 0)), 0);
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < Global_262145.f_108)
	{
		if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() >= Global_262145.f_109)
		{
			func_7(GlobalFunc_924(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("freemode", -1, 0)), 1);
			MISC::SET_BIT(&(Global_2441732.f_1), 4);
		}
	}
}

void func_7(int iParam0, int iParam1)//Position - 0x968
{
	struct<3> Var0;
	
	Var0.x = 364;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

int func_8(struct<4> Param0, var uParam4)//Position - 0x998
{
	int iVar0;
	
	iLocal_106 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			if (MISC::IS_BIT_SET(Local_115[iVar0 /*3*/].f_1, 0))
			{
				iLocal_106++;
				if (Param0.f_1 == 18)
				{
					if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() >= Param0.f_3)
					{
						return 1;
					}
					else
					{
						return 2;
					}
				}
				if (iLocal_106 >= Param0.f_3)
				{
					if (Param0.f_1 == 2)
					{
						if (!MISC::IS_BIT_SET(Global_2441732.f_1, 2))
						{
							MISC::SET_BIT(&(Global_2441732.f_1), 2);
						}
					}
					return 1;
				}
			}
			else if (MISC::IS_BIT_SET(Local_115[iVar0 /*3*/].f_1, 1))
			{
			}
			else if (!MISC::IS_BIT_SET(Local_115[iVar0 /*3*/].f_1, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 2;
}

int func_9()//Position - 0xA53
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		fVar1 = (fVar1 + Global_2441732.f_8[iVar0 /*5*/].f_2);
		iVar0++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		fVar2 = (fVar2 + Global_2441732.f_8[iVar0 /*5*/].f_2);
		if (fVar3 < fVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_10(int iParam0)//Position - 0xABA
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_6446;
		
		case 1:
			return Global_262145.f_6443;
		
		case 2:
			return Global_262145.f_6444;
		
		case 3:
			return Global_262145.f_6445;
		
		case 4:
			return Global_262145.f_6447;
		
		case 5:
			return Global_262145.f_6448;
		
		case 6:
			return Global_262145.f_6449;
		
		case 7:
			return Global_262145.f_6829;
		
		default:
	}
	return 0f;
}

int func_11(int iParam0)//Position - 0xB4A
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_4999;
		
		case 1:
			return Global_262145.f_4996;
		
		case 2:
			return Global_262145.f_4997;
		
		case 3:
			return Global_262145.f_4998;
		
		case 4:
			return Global_262145.f_6497;
		
		case 5:
			return Global_262145.f_6394;
		
		case 6:
			return Global_262145.f_6399;
		
		case 7:
			return Global_262145.f_6404;
		
		default:
	}
	return 0;
}










int func_21(int iParam0)//Position - 0xE70
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
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
		
		default:
	}
	return 0;
}

int func_22(int iParam0)//Position - 0xED0
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_23(int iParam0)//Position - 0xF30
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 4;
		
		case 2:
			return 2;
		
		case 3:
			return 0;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 4;
		
		default:
	}
	return 0;
}

int func_24(int iParam0)//Position - 0xF90
{
	int iVar0;
	
	if (Global_262145.f_6408 > 0 && Global_262145.f_6408 <= 8)
	{
		if (!Global_2441732.f_49[(Global_262145.f_6408 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_6408)
			{
				if (Global_2441732.f_49[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

void func_25(int iParam0, float fParam1)//Position - 0xFF6
{
	Global_2441732.f_8[iParam0 /*5*/].f_2 = fParam1;
}

void func_26(int iParam0)//Position - 0x100C
{
	Global_2441732.f_2 = iParam0;
}





int func_31()//Position - 0x10D5
{
	int iVar0;
	int iVar1;
	
	Global_2441732.f_62 = Global_262145.f_6409;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2441732.f_8[iVar0 /*5*/] = iVar0;
		Global_2441732.f_8[iVar0 /*5*/].f_1 = func_33(iVar0);
		Global_2441732.f_8[iVar0 /*5*/].f_2 = 1f;
		Global_2441732.f_8[iVar0 /*5*/].f_3 = func_32(iVar0);
		iVar0++;
	}
	if (Global_262145.f_6408 > 0 && Global_262145.f_6408 <= 8)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_6408)
		{
			Global_2441732.f_49[iVar1] = -1;
			iVar1++;
		}
	}
	return 1;
}

int func_32(int iParam0)//Position - 0x1179
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return Global_262145.f_4822;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 2;
		
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x11DF
{
	switch (iParam0)
	{
		case 0:
			return 32;
			break;
		
		case 1:
			return 18;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 19;
			break;
		
		case 4:
			return 41;
			break;
		
		case 5:
			return 33;
			break;
		
		case 6:
			return 34;
			break;
		
		case 7:
			return 35;
			break;
	}
	return 0;
}

void func_34()//Position - 0x125E
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	switch (Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			if (Global_2441732.f_2 >= 4 && Global_2441732.f_2 != 8)
			{
				if (MISC::IS_BIT_SET(Global_2441732.f_1, 2))
				{
					MISC::SET_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
				}
				if (!MISC::IS_BIT_SET(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1, 1))
				{
					func_96(4);
				}
				else if (!MISC::IS_BIT_SET(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1, 3))
				{
					GlobalFunc_434(&uLocal_107);
					MISC::SET_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 3);
				}
				else if (GlobalFunc_5071(&uLocal_107, 10000, 0))
				{
					func_96(4);
					MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 3);
				}
			}
			else if (MISC::IS_BIT_SET(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1, 1))
			{
				MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
			}
			break;
		
		case 4:
			if (MISC::IS_BIT_SET(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1, 0))
			{
				if (Global_2441732.f_2 == 8)
				{
					func_96(8);
					MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
				}
				else if (Global_2441732.f_2 == 5)
				{
					func_96(5);
					MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
				}
				else if (Global_2441732.f_2 >= 6)
				{
					func_96(6);
					MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
				}
				else if (Global_2441732.f_2 == 3)
				{
					func_96(0);
					MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
				}
			}
			else
			{
				iVar0 = 0;
				if (((((((((((((!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() && !GlobalFunc_7668(PLAYER::PLAYER_ID())) && !GlobalFunc_895()) && !GlobalFunc_413()) && !GlobalFunc_268()) && !GlobalFunc_1277()) && !GlobalFunc_5380(PLAYER::PLAYER_ID())) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !GlobalFunc_4993(PLAYER::PLAYER_ID())) && GlobalFunc_5085()) && !GlobalFunc_247(PLAYER::PLAYER_ID(), 0)) && !GlobalFunc_247(PLAYER::PLAYER_ID(), 7)) && !GlobalFunc_1559(PLAYER::PLAYER_ID(), 0)) && GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
				{
					iVar1 = func_81(Global_2441732.f_3);
					if (iVar1 < 0 || !func_79(iVar1))
					{
						switch (Global_2441732.f_3)
						{
							case 0:
								if (((func_74(0) && func_72(GlobalFunc_271(PLAYER::PLAYER_ID()), 40f, 40f, 40f)) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 10f) && !func_71())
								{
									iVar0 = 1;
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							case 1:
								if (GlobalFunc_8987(31, 0))
								{
									iVar0 = 1;
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							case 2:
								if (GlobalFunc_8987(20, 0) && !func_60())
								{
									iVar0 = func_52();
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							case 3:
								if (GlobalFunc_8987(19, 0))
								{
									iVar0 = 1;
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							case 4:
								if (((((GlobalFunc_8987(20, 0) && !GlobalFunc_247(PLAYER::PLAYER_ID(), 1)) && !GlobalFunc_247(PLAYER::PLAYER_ID(), 2)) && !GlobalFunc_247(PLAYER::PLAYER_ID(), 3)) && !Global_2422140.f_3033) && !func_50())
								{
									iVar0 = 1;
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							case 5:
								if (GlobalFunc_8987(124, 0))
								{
									iVar0 = 1;
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							case 6:
								if (GlobalFunc_8987(126, 0))
								{
									iVar0 = 1;
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							case 7:
								if (GlobalFunc_8987(127, 0))
								{
									iVar0 = 1;
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							default:
								iVar0 = 2;
								break;
						}
					}
					else
					{
						iVar0 = 2;
					}
				}
				else
				{
					iVar0 = 2;
				}
				if (iVar0 == 1)
				{
					MISC::SET_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
				}
				else if (iVar0 == 2)
				{
					func_96(0);
					MISC::SET_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
				}
			}
			break;
		
		case 5:
			if (Global_2441732.f_2 == 6)
			{
				MISC::CLEAR_BIT(&(Global_2446554.f_200.f_1), 1);
				MISC::CLEAR_BIT(&(Global_2446554.f_200.f_1), 2);
				MISC::CLEAR_BIT(&(Global_2446554.f_200.f_1), 3);
				func_96(6);
			}
			else if (MISC::IS_BIT_SET(Global_2441732.f_1, 3) && GlobalFunc_439(&(Global_2441732.f_58)))
			{
				func_39();
			}
			break;
		
		case 6:
			uVar2 = GlobalFunc_1557(Global_2441732.f_3.f_1);
			if (Global_2441732.f_3.f_1 == 19)
			{
				if (Global_2446554.f_1547)
				{
					if (Global_2441732.f_2 == 7)
					{
						func_96(7);
					}
				}
				else if (Global_2446554.f_1548)
				{
					Global_2446554.f_1548 = 0;
					func_96(0);
					MISC::SET_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
				}
			}
			else if (!MISC::IS_BIT_SET(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1, 2))
			{
				Local_86.f_16 = -1;
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(uVar2)) == 0)
				{
					if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(uVar2, -1, 0, 0) || NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(uVar2, -1, 0) < 32)
					{
						if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(uVar2, -1, 1, 0))
						{
							Local_86 = Global_2441732.f_3.f_1;
							if (GlobalFunc_6946(Local_86, 0))
							{
								MISC::SET_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 2);
							}
						}
					}
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(uVar2)) != 0)
			{
				if (Global_2441732.f_2 == 7)
				{
					func_96(7);
					MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 2);
				}
			}
			break;
		
		case 7:
			if (Global_2441732.f_2 != 7)
			{
				func_96(8);
			}
			break;
		
		case 8:
			func_96(0);
			break;
	}
}





void func_39()//Position - 0x1D0E
{
	if (Global_2411466.f_84.f_2 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_2446554.f_200.f_1, 1))
		{
			if (((Global_262145.f_44 * 120000) - GlobalFunc_1328(&(Global_2441732.f_58), 0, 0)) < 360000)
			{
				if (!MISC::IS_BIT_SET(Global_2446554.f_200.f_1, 1))
				{
					if (GlobalFunc_8987(31, 0) && !GlobalFunc_268())
					{
						if (Global_262145.f_44 < 3)
						{
							func_40("ACD_TSCH", Global_262145.f_44, 1);
						}
						else
						{
							func_40("ACD_TSCH", 3, 1);
						}
					}
					MISC::SET_BIT(&(Global_2446554.f_200.f_1), 1);
				}
			}
			else if (((Global_262145.f_44 * 120000) - GlobalFunc_1328(&(Global_2441732.f_58), 0, 0)) < 600000)
			{
				if (!MISC::IS_BIT_SET(Global_2446554.f_200.f_1, 2))
				{
					if (GlobalFunc_8987(31, 0) && !GlobalFunc_268())
					{
						func_40("ACD_TSCH", 5, 1);
					}
					MISC::SET_BIT(&(Global_2446554.f_200.f_1), 2);
				}
			}
			else if (((Global_262145.f_44 * 120000) - GlobalFunc_1328(&(Global_2441732.f_58), 0, 0)) < 1200000)
			{
				if (!MISC::IS_BIT_SET(Global_2446554.f_200.f_1, 3))
				{
					if (GlobalFunc_8987(31, 0) && !GlobalFunc_268())
					{
						func_40("ACD_TSCH", 10, 1);
					}
					MISC::SET_BIT(&(Global_2446554.f_200.f_1), 3);
				}
			}
		}
	}
}

int func_40(char* sParam0, int iParam1, int iParam2)//Position - 0x1E6B
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_41(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_41(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1EA1
{
	int iVar0;
	
	if ((!GlobalFunc_442() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !GlobalFunc_6678(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = GlobalFunc_5072(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1692405.f_5[iVar0 /*53*/] = iParam0;
		Global_1692405.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1692405.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1692405.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1692405.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1692405.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1692405.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}









int func_50()//Position - 0x2140
{
	if (!GlobalFunc_1342())
	{
		return 0;
	}
	if (Global_2404111.f_2 == Global_262145.f_6842 || Global_2404111.f_2 == Global_262145.f_6866)
	{
		return 1;
	}
	return 0;
}


int func_52()//Position - 0x21E6
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	struct<3> Var5;
	
	iVar1 = 0;
	Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (!bVar0)
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var5, iLocal_109, &Local_110, &uLocal_113, &uVar2, 0, 1077936128, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1367.557f, -3220.598f, 12.9448f, Var5, 1) >= 600f)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var5, Local_110, 1) >= 75f)
				{
					PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT((Var5.x - 250f), (Var5.f_1 - 250f), (Var5.x + 250f), (Var5.f_1 + 250f));
					if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Local_110, &uVar3, &uVar4))
					{
						if (uVar4 & 1 == 0)
						{
							if (iLocal_114 <= 0)
							{
								if (GlobalFunc_8397(Local_110, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
								{
									bVar0 = true;
									iVar1 = 1;
								}
							}
							else
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_109 += 3;
		if (iLocal_109 >= 150)
		{
			iLocal_109 = 40;
			iLocal_114++;
		}
	}
	if (iLocal_114 > 0)
	{
		iVar1 = 2;
	}
	return iVar1;
}








int func_60()//Position - 0x2796
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}











int func_71()//Position - 0x2BDD
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_72(struct<3> Param0, struct<3> Param3)//Position - 0x2CFB
{
	struct<3> Var0;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Param0, &Var0, 0, 1077936128, 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, Param3, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}


int func_74(bool bParam0)//Position - 0x2D45
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (GlobalFunc_895())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!GlobalFunc_8987(19, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (GlobalFunc_7810(9))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	return 1;
}





bool func_79(int iParam0)//Position - 0x30DE
{
	var uVar0;
	
	uVar0 = GlobalFunc_6872(2436, -1, 0);
	return MISC::IS_BIT_SET(uVar0, iParam0);
}


int func_81(int iParam0)//Position - 0x312B
{
	switch (iParam0)
	{
		case 1:
			return 0;
		
		case 2:
			return 1;
		
		case 3:
			return 2;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 6;
		
		case 7:
			return 5;
		
		default:
	}
	return -1;
}















void func_96(int iParam0)//Position - 0x3340
{
	Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_2 = iParam0;
}


int func_98()//Position - 0x335D
{
	return Global_2441732;
}

int func_99(int iParam0)//Position - 0x3369
{
	return Local_115[iParam0 /*3*/];
}











void func_110()//Position - 0x35C7
{
	Global_2446554.f_1547 = 0;
	Global_2446554.f_1548 = 0;
	Global_2446554.f_1550 = 0;
	Global_2446554.f_1549 = 0;
	MISC::CLEAR_BIT(&(Global_2446554.f_200.f_1), 1);
	MISC::CLEAR_BIT(&(Global_2446554.f_200.f_1), 2);
	MISC::CLEAR_BIT(&(Global_2446554.f_200.f_1), 3);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_111(struct<20> Param0)//Position - 0x361A
{
	func_117();
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_2441732, 63);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_115, 97);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 0;
	func_96(0);
	return 1;
}






void func_117()//Position - 0x3A6D
{
	struct<63> Var0;
	
	Var0.f_3 = -1;
	Var0.f_3.f_2 = 1065353216;
	Var0.f_8 = 8;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_1.f_2 = 1065353216;
	Var0.f_8.f_1.f_5 = -1;
	Var0.f_8.f_1.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_49 = 8;
	Global_2441732 = { Var0 };
}

