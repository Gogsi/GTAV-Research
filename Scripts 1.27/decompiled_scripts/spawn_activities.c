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
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (GlobalFunc_4320())
		{
			func_80();
		}
		if (GlobalFunc_7741())
		{
			func_80();
		}
		switch (iLocal_88)
		{
			case 0:
				if (!Global_2405982.f_16)
				{
					func_34();
				}
				if (!Global_2405982.f_15)
				{
					func_20();
				}
				if (GlobalFunc_6416())
				{
					iLocal_88 = 1;
				}
				break;
			
			case 1:
				if (func_1())
				{
					func_80();
				}
				break;
		}
		if (CAM::DOES_CAM_EXIST(uLocal_86))
		{
		}
	}
}

int func_1()//Position - 0xEF
{
	var uVar0;
	
	if (Global_2405982.f_16)
	{
		if (((!NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !CUTSCENE::IS_CUTSCENE_PLAYING()) && !GlobalFunc_331()) && !GlobalFunc_7624(PLAYER::PLAYER_ID()))
		{
			NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(0);
		}
		if (func_7())
		{
			if (!iLocal_89)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				}
				else
				{
					uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (!ENTITY::IS_ENTITY_DEAD(uVar0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar0, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(uVar0, 1, 0f, 0f, -1f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						TASK::TASK_VEHICLE_DRIVE_WANDER(PLAYER::PLAYER_PED_ID(), uVar0, 20f, 786603);
						iLocal_91 = 1;
					}
				}
				iLocal_89 = 1;
			}
		}
		if (GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!Global_2405982.f_25)
			{
				Global_2405982.f_26 = NETWORK::GET_NETWORK_TIME();
				Global_2405982.f_25 = 1;
			}
			switch (Global_2405982)
			{
				case 0:
					if (!Global_2405982.f_17)
					{
						Global_2405982.f_26 = NETWORK::GET_NETWORK_TIME();
						Global_2405982.f_17 = 1;
					}
					if (func_4() || func_3())
					{
						return 1;
					}
					break;
				
				case 1:
					if ((func_4() || !func_2(-258271821)) || func_3())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							ENTITY::FREEZE_ENTITY_POSITION(uVar0, 0);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uVar0, 1);
						}
						Global_2405982.f_10 = 1;
						iLocal_91 = 0;
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						return 1;
					}
					break;
				
				case 2:
					if ((func_4() || !func_2(-1146898486)) || func_3())
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						iLocal_91 = 0;
						return 1;
					}
					else if (Global_2405982.f_24 > 0)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							TASK::SET_NEXT_DESIRED_MOVE_STATE(1f);
							TASK::TASK_WANDER_STANDARD(PLAYER::PLAYER_PED_ID(), 1193033728, 0);
						}
					}
					break;
				
				case 3:
					return 1;
					break;
				
				case 4:
				case 5:
					if (Global_2405982.f_19)
					{
						return 1;
					}
					break;
				
				default:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_2(int iParam0)//Position - 0x30F
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), iParam0);
	if (!iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x330
{
	if (Global_2405982.f_25)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405982.f_26)) > 6000)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()//Position - 0x35E
{
	if (GlobalFunc_4173(0))
	{
		return 1;
	}
	return 0;
}



int func_7()//Position - 0x3D0
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() > 9)
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}













void func_20()//Position - 0x62E
{
	if (!Global_2405982.f_21 > -1 || !Global_2405982.f_22 > -1)
	{
		Global_2405982.f_15 = 1;
	}
	else
	{
		if (Global_2405982.f_23 == 0)
		{
			if (!GlobalFunc_1964(Global_2405982.f_21, Global_2405982.f_22) || GlobalFunc_6671(GlobalFunc_1963(Global_2405982.f_21, Global_2405982.f_22), -1, 0) > 0)
			{
				if (GlobalFunc_1964(Global_2405982.f_21, Global_2405982.f_22))
				{
					func_26(GlobalFunc_1963(Global_2405982.f_21, Global_2405982.f_22), -1);
				}
				func_22(Global_2405982.f_21, Global_2405982.f_22, 1, 1, 1, 1, 0, 0);
				Global_2405982.f_23++;
			}
			else
			{
				Global_2405982.f_15 = 1;
			}
		}
		if (Global_2405982.f_23 == 1)
		{
			if ((GlobalFunc_1672() || (Global_2535381 == -1 && Global_2535381.f_1 == -1)) || Global_2535381.f_3 == 0)
			{
				Global_2405982.f_23++;
				Global_2405982.f_15 = 1;
			}
		}
	}
}


void func_22(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x752
{
	Global_2535381 = iParam0;
	Global_2535381.f_1 = iParam1;
	if (bParam3)
	{
		if (GlobalFunc_1969(&Global_2535381))
		{
			func_24(&Global_2535381);
		}
	}
	Global_2535381.f_3 = 1;
	if (iParam4 || GlobalFunc_1968(iParam0, iParam1))
	{
		Global_2535381.f_4 = 1;
	}
	Global_2535381.f_9 = iParam2;
	Global_2535381.f_13 = iParam5;
	Global_2535381.f_14 = iParam6;
	Global_2535381.f_15 = iParam7;
	if (MISC::IS_BIT_SET(Global_2265, 3))
	{
		Global_2535381.f_5 = 1;
	}
}


void func_24(var uParam0)//Position - 0x8CE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = GlobalFunc_6671(GlobalFunc_1963(2, 26), -1, 0);
	iVar1 = GlobalFunc_6671(GlobalFunc_1963(2, 25), -1, 0);
	iVar2 = GlobalFunc_6671(GlobalFunc_1963(2, 24), -1, 0);
	if (iVar0 > 0)
	{
		uParam0->f_1 = 26;
	}
	else if (iVar1 > 0)
	{
		uParam0->f_1 = 25;
	}
	else if (iVar2 > 0)
	{
		uParam0->f_1 = 24;
	}
}


void func_26(int iParam0, int iParam1)//Position - 0x965
{
	int iVar0;
	
	iVar0 = GlobalFunc_6671(iParam0, GlobalFunc_4916(iParam1), 0);
	iVar0++;
	if (!GlobalFunc_243(iParam0))
	{
		GlobalFunc_6923(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		GlobalFunc_6922(iParam0, iVar0, iParam1, 1);
	}
}








void func_34()//Position - 0xE63
{
	if (!Global_2405982 > -1)
	{
		Global_2405982.f_16 = 1;
	}
	else
	{
		switch (Global_2405982)
		{
			case 0:
				switch (Global_2405982.f_1)
				{
					case 0:
						if (GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 0))
						{
							Global_2405982.f_16 = 1;
						}
						break;
				}
				break;
			
			case 1:
				if (Global_2405982.f_1 == 0)
				{
					if (func_66())
					{
						Global_2405982.f_2 = 0;
						Global_2405982.f_8 = 1;
						Global_2405982.f_11 = 1;
						Global_2405982.f_12 = 1;
						Global_2405982.f_9 = 1;
						Global_2405982.f_1++;
					}
					else
					{
						Global_2405982.f_16 = 1;
					}
				}
				if (Global_2405982.f_1 == 1)
				{
					if (func_66())
					{
						if (GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 0))
						{
							if (func_64(0))
							{
								Global_2405982.f_1++;
							}
						}
					}
					else
					{
						Global_2405982.f_16 = 1;
					}
				}
				if (Global_2405982.f_1 == 2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						Global_2405982.f_16 = 1;
					}
				}
				break;
			
			case 2:
				if (GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 0))
				{
					if (Global_2405982.f_24 > 0)
					{
						TASK::SET_NEXT_DESIRED_MOVE_STATE(2f);
						TASK::TASK_WANDER_STANDARD(PLAYER::PLAYER_PED_ID(), 1193033728, 0);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(PLAYER::PLAYER_PED_ID(), 1193033728, 0);
					}
					iLocal_91 = 1;
					Global_2405982.f_16 = 1;
				}
				break;
			
			case 3:
			case 4:
			case 5:
				if (GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 0))
				{
					if (Global_2405982.f_1 == 0)
					{
						func_63(Global_2405982);
						Global_2404548.f_1371 = 1;
						uLocal_92 = NETWORK::GET_NETWORK_TIME();
						Global_2405982.f_1++;
					}
					if (Global_2405982.f_1 == 1)
					{
						if (!func_61(Global_2405982) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_92) > 20000)
						{
							Global_2405982.f_16 = 1;
							func_60();
						}
						else
						{
							Global_1318834 = 1;
							GlobalFunc_8236();
							if (!iLocal_90)
							{
								BRAIN::ENABLE_SCRIPT_BRAIN_SET(8);
								BRAIN::ENABLE_SCRIPT_BRAIN_SET(2);
								iLocal_90 = 1;
							}
						}
					}
				}
				break;
			
			default:
				break;
			}
	}
}


























void func_60()//Position - 0x2A91
{
	Global_2405982.f_14 = 0;
}

int func_61(int iParam0)//Position - 0x2AA0
{
	if (iParam0 == GlobalFunc_414())
	{
		return Global_2405982.f_14;
	}
	return 0;
}


void func_63(int iParam0)//Position - 0x2AC7
{
	if (iParam0 == GlobalFunc_414())
	{
		Global_2405982.f_14 = 1;
	}
}

int func_64(int iParam0)//Position - 0x2AE2
{
	if (func_66())
	{
		if (Global_2405982.f_2 == 0)
		{
			Global_2405982.f_6 = 1;
			Global_2405982.f_4 = iParam0;
			Global_2405982.f_2++;
		}
		if (Global_2405982.f_2 == 1)
		{
			if (!Global_2405982.f_6)
			{
				Global_2405982.f_2 = 0;
				func_65();
				return 1;
			}
		}
	}
	return 0;
}

void func_65()//Position - 0x2B3C
{
	Global_2405982.f_8 = 1;
	Global_2405982.f_11 = 0;
	Global_2405982.f_12 = 0;
	Global_2405982.f_4 = 1;
	Global_2405982.f_9 = 0;
	Global_2405982.f_2 = 0;
}

int func_66()//Position - 0x2B6E
{
	int iVar0;
	
	iVar0 = GlobalFunc_5037();
	if (((((iVar0 > -1 && !Global_2097152[GlobalFunc_177() /*8053*/][iVar0 /*111*/].f_42 == 0) && !MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iVar0 /*111*/].f_72, 1)) && !MISC::IS_BIT_SET(Global_2097152[GlobalFunc_177() /*8053*/][iVar0 /*111*/].f_72, 6)) && !GlobalFunc_365(0)) && !GlobalFunc_365(31))
	{
		return 1;
	}
	return 0;
}














void func_80()//Position - 0x2E9D
{
	Global_2535381.f_9 = 0;
	GlobalFunc_4565();
	if (CAM::DOES_CAM_EXIST(uLocal_86))
	{
		CAM::DESTROY_CAM(uLocal_86, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_87))
	{
		CAM::DESTROY_CAM(uLocal_87, 0);
	}
	if (iLocal_91)
	{
		if (GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 1))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}



