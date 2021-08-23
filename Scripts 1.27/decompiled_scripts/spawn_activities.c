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
		if (func_82())
		{
			func_80();
		}
		if (func_70())
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
				if (func_14())
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
		if (((!NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !CUTSCENE::IS_CUTSCENE_PLAYING()) && !func_13()) && !func_8(PLAYER::PLAYER_ID()))
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
		if (func_6(PLAYER::PLAYER_ID(), 0, 1))
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
	if (func_5(0))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)//Position - 0x373
{
	if (PAD::_0xD7D22F5592AED8BA(iParam0) < 2000)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)//Position - 0x38C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
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

int func_8(int iParam0)//Position - 0x3FC
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_9())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_9()//Position - 0x43D
{
	return MISC::IS_BIT_SET(Global_2359301, 3);
}

bool func_10(int iParam0, int iParam1)//Position - 0x44E
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_11(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_11(int iParam0, bool bParam1)//Position - 0x499
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_12()//Position - 0x4DA
{
	return Global_1312737;
}

bool func_13()//Position - 0x4E6
{
	return Global_90014.f_291 > 0;
}

int func_14()//Position - 0x4F7
{
	if (Global_2405982.f_18)
	{
		func_19();
		return 1;
	}
	if (Global_2405982 == 0)
	{
		func_19();
		return 1;
	}
	if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405982.f_3)) > 120000)
	{
		func_19();
		return 1;
	}
	if (func_18() || func_17())
	{
		func_19();
		return 1;
	}
	if (func_16())
	{
		func_19();
		return 1;
	}
	if (Global_2405982.f_16 && Global_2405982.f_15)
	{
		return 1;
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("spawn_activities")) == 0)
	{
		if (func_15("spawn_activities", 1424))
		{
		}
	}
	MISC::SET_BIT(&(Global_1692746[1]), 22);
	return 0;
}

int func_15(char* sParam0, int iParam1)//Position - 0x5AE
{
	var uVar0;
	
	if (SCRIPT::DOES_SCRIPT_EXIST(sParam0))
	{
		SCRIPT::REQUEST_SCRIPT(sParam0);
		if (SCRIPT::HAS_SCRIPT_LOADED(sParam0))
		{
			if (iParam1 <= 0)
			{
				iParam1 = 512;
			}
			uVar0 = SYSTEM::START_NEW_SCRIPT(sParam0, iParam1);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
			return 1;
		}
	}
	return 0;
}

bool func_16()//Position - 0x5F1
{
	return Global_2428131.f_716;
}

var func_17()//Position - 0x600
{
	return Global_2435915;
}

var func_18()//Position - 0x60C
{
	return Global_1315896;
}

void func_19()//Position - 0x618
{
	Global_2405982.f_21 = -1;
	Global_2405982.f_22 = -1;
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
			if (!func_33(Global_2405982.f_21, Global_2405982.f_22) || func_31(func_32(Global_2405982.f_21, Global_2405982.f_22), -1, 0) > 0)
			{
				if (func_33(Global_2405982.f_21, Global_2405982.f_22))
				{
					func_26(func_32(Global_2405982.f_21, Global_2405982.f_22), -1);
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
			if ((func_21() || (Global_2535381 == -1 && Global_2535381.f_1 == -1)) || Global_2535381.f_3 == 0)
			{
				Global_2405982.f_23++;
				Global_2405982.f_15 = 1;
			}
		}
	}
}

int func_21()//Position - 0x73A
{
	if (Global_2535381.f_770 == 1)
	{
		return 1;
	}
	return 0;
}

void func_22(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x752
{
	Global_2535381 = iParam0;
	Global_2535381.f_1 = iParam1;
	if (bParam3)
	{
		if (func_25(&Global_2535381))
		{
			func_24(&Global_2535381);
		}
	}
	Global_2535381.f_3 = 1;
	if (iParam4 || func_23(iParam0, iParam1))
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

int func_23(int iParam0, int iParam1)//Position - 0x7D3
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 5:
				case 6:
					return 1;
					break;
				
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
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
				case 24:
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
				case 32:
				case 33:
				case 34:
					return 1;
					break;
				
				case 0:
				default:
					return 0;
					break;
			}
			break;
	}
	return 0;
}

void func_24(var uParam0)//Position - 0x8CE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_31(func_32(2, 26), -1, 0);
	iVar1 = func_31(func_32(2, 25), -1, 0);
	iVar2 = func_31(func_32(2, 24), -1, 0);
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

int func_25(var uParam0)//Position - 0x92D
{
	if (*uParam0 == 2)
	{
		if ((uParam0->f_1 == 24 || uParam0->f_1 == 25) || uParam0->f_1 == 26)
		{
			return 1;
		}
	}
	return 0;
}

void func_26(int iParam0, int iParam1)//Position - 0x965
{
	int iVar0;
	
	iVar0 = func_31(iParam0, func_30(iParam1), 0);
	iVar0++;
	if (!func_29(iParam0))
	{
		func_28(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_27(iParam0, iVar0, iParam1, 1);
	}
}

void func_27(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x9A5
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_30(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 775:
			Global_1335551[func_30(uParam2)] = iParam1;
			break;
		
		case 776:
			Global_1335557[func_30(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1335563[func_30(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1335569[func_30(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1335527[func_30(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1335533[func_30(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1335539[func_30(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1335545[func_30(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1335503[func_30(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335509[func_30(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335515[func_30(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335521[func_30(uParam2)] = iParam1;
			break;
		
		case 745:
			Global_1335575[func_30(uParam2)] = iParam1;
			break;
		
		case 746:
			Global_1335581[func_30(uParam2)] = iParam1;
			break;
		
		case 747:
			Global_1335587[func_30(uParam2)] = iParam1;
			break;
		
		case 748:
			Global_1335593[func_30(uParam2)] = iParam1;
			break;
		
		case 1290:
			Global_1335599[func_30(uParam2)] = iParam1;
			break;
		
		case 627:
			Global_1335605[func_30(uParam2)] = iParam1;
			break;
		
		case 1265:
			Global_1335611[func_30(uParam2)] = iParam1;
			break;
		
		case 1862:
			Global_2476002[0 /*6*/][func_30(uParam2)] = iParam1;
			break;
		
		case 2251:
			Global_2476002[1 /*6*/][func_30(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335617[func_30(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1335623[func_30(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1335629[func_30(uParam2)] = iParam1;
			break;
		
		case 1223:
			Global_1335635[func_30(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_28(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xC1F
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_30(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_29(int iParam0)//Position - 0xC4A
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 775:
			case 776:
			case 777:
			case 778:
			case 765:
			case 766:
			case 767:
			case 768:
			case 755:
			case 756:
			case 757:
			case 758:
			case 745:
			case 746:
			case 747:
			case 748:
			case 1290:
			case 627:
			case 1265:
			case 752:
			case 753:
			case 754:
			case 1223:
			case 1862:
			case 2251:
				return 1;
				break;
			}
	}
	return 0;
}

int func_30(var uParam0)//Position - 0xCFE
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

int func_31(int iParam0, int iParam1, int iParam2)//Position - 0xD32
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_30(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)//Position - 0xD64
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1085;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 21:
					return 1085;
					break;
				
				case 22:
					return 62;
					break;
				
				case 23:
					return 63;
					break;
				
				case 24:
					return 1262;
					break;
				
				case 25:
					return 1263;
					break;
				
				case 26:
					return 1264;
					break;
			}
			break;
	}
	return 0;
}

int func_33(int iParam0, int iParam1)//Position - 0xDFB
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 21:
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
					return 1;
					break;
			}
			break;
	}
	return 0;
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
						if (func_6(PLAYER::PLAYER_ID(), 0, 0))
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
						if (func_6(PLAYER::PLAYER_ID(), 0, 0))
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
				if (func_6(PLAYER::PLAYER_ID(), 0, 0))
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
				if (func_6(PLAYER::PLAYER_ID(), 0, 0))
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
							func_35();
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

void func_35()//Position - 0x1065
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 10024;
	if (((((MISC::IS_BIT_SET(Global_1582429.f_22, 5) || MISC::IS_BIT_SET(Global_1582429.f_22, 6)) || MISC::IS_BIT_SET(Global_1582429.f_22, 8)) || MISC::IS_BIT_SET(Global_1582429.f_22, 7)) || MISC::IS_BIT_SET(Global_1582429.f_22, 9)) || func_59())
	{
		if (!MISC::IS_BIT_SET(Global_1048576.f_4, 0))
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_418, 1, 0))
			{
				SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
				if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
					MISC::SET_BIT(&(Global_1048576.f_4), 0);
				}
			}
		}
	}
	else if (Global_2404548.f_1371)
	{
		if (!MISC::IS_BIT_SET(Global_1048576.f_4, 0))
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_418, 1, 0))
			{
				SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
				if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
					MISC::SET_BIT(&(Global_1048576.f_4), 0);
				}
			}
		}
	}
	else if (Global_1582429.f_19 != 0 && func_58(PLAYER::PLAYER_ID(), 1))
	{
		if (!MISC::IS_BIT_SET(Global_1048576.f_4, 0))
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_418, 1, 0))
			{
				SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
				if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
					MISC::SET_BIT(&(Global_1048576.f_4), 0);
				}
			}
		}
	}
	else if (Global_2435279)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_418, 1, 0))
		{
			SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
			if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
			{
				SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
				MISC::SET_BIT(&(Global_1048576.f_4), 0);
				Global_2435279 = 0;
			}
		}
	}
	else if (((!MISC::IS_BIT_SET(Global_1048576.f_4, 0) && !MISC::IS_BIT_SET(Global_2446554.f_353.f_5, 3)) && (!Global_2404547 || (Global_2404547 && Global_2428891.f_1.f_2823.f_13 > 0))) && !func_57())
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_418, 1, 0))
		{
			if (!func_56(Global_1048576.f_417) && MISC::GET_DISTANCE_BETWEEN_COORDS(func_55(PLAYER::PLAYER_ID()), func_50(Global_1048576.f_417), 1) <= 30f)
			{
				if (func_49(&(Global_1048995[Global_1048576.f_417 /*1425*/]), 1))
				{
					if (!Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_315)
					{
						SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
						if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
						{
							SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
							MISC::SET_BIT(&(Global_1048576.f_4), 0);
							MISC::SET_BIT(&(Global_1582429.f_22), 12);
							return;
						}
					}
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_55(PLAYER::PLAYER_ID()), func_48(2), 1) <= 30f)
			{
				func_47(&Var1, 2);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var1, Var1.f_3, Var1.f_6, 0, 1, 0))
				{
					if (!Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_315)
					{
						SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
						if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
						{
							SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
							MISC::SET_BIT(&(Global_1048576.f_4), 0);
							MISC::SET_BIT(&(Global_1582429.f_22), 12);
							return;
						}
					}
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_55(PLAYER::PLAYER_ID()), func_48(6), 1) <= 30f)
			{
				func_47(&Var1, 6);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var1, Var1.f_3, Var1.f_6, 0, 1, 0))
				{
					if (!Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_315)
					{
						SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
						if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
						{
							SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
							MISC::SET_BIT(&(Global_1048576.f_4), 0);
							MISC::SET_BIT(&(Global_1582429.f_22), 12);
							return;
						}
					}
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_55(PLAYER::PLAYER_ID()), func_48(10), 1) <= 30f)
			{
				func_47(&Var1, 10);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var1, Var1.f_3, Var1.f_6, 0, 1, 0))
				{
					if (!Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_315)
					{
						SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
						if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
						{
							SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
							MISC::SET_BIT(&(Global_1048576.f_4), 0);
							MISC::SET_BIT(&(Global_1582429.f_22), 12);
							return;
						}
					}
				}
			}
			Global_1048576.f_417++;
			if (Global_1048576.f_417 > 72)
			{
				Global_1048576.f_417 = 0;
				if (Global_2428891.f_1.f_2823.f_13 != 0)
				{
					if ((!func_46() && !func_45()) && !NETWORK::NETWORK_IS_IN_TRANSITION())
					{
						if ((!func_44() && !func_43()) && !func_42())
						{
							if ((!func_41() && !func_40()) && !func_39())
							{
								if (!func_38())
								{
									if (!func_37())
									{
										if (!Global_2428891.f_2841.f_157)
										{
											func_36();
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
}

void func_36()//Position - 0x1607
{
	Global_2428891.f_1.f_2823.f_13 = 0;
	Global_2428891.f_1.f_2823 = 0;
	Global_2428891.f_1.f_2823.f_1 = 0;
	Global_2428891.f_1.f_2823.f_2 = 0;
	Global_2428891.f_1.f_2823.f_3 = 0;
	Global_2428891.f_1.f_2823.f_4 = 0;
	Global_2428891.f_1.f_2823.f_5 = 0;
	Global_2428891.f_1.f_2823.f_6 = 0;
	Global_2428891.f_1.f_2823.f_7 = 0;
	Global_2428891.f_1.f_2823.f_8 = 0;
	Global_2428891.f_1.f_2823.f_9 = 0;
	Global_2428891.f_1.f_2823.f_10 = 0;
	Global_2428891.f_1.f_2823.f_11 = 0;
	Global_2428891.f_1.f_2823.f_12 = 0;
}

bool func_37()//Position - 0x16B5
{
	return Global_2428131.f_621;
}

bool func_38()//Position - 0x16C4
{
	return Global_2428131.f_717;
}

bool func_39()//Position - 0x16D3
{
	return MISC::IS_BIT_SET(Global_2428131, 20);
}

bool func_40()//Position - 0x16E5
{
	return MISC::IS_BIT_SET(Global_2428131, 2);
}

bool func_41()//Position - 0x16F6
{
	return MISC::IS_BIT_SET(Global_2428131, 1);
}

bool func_42()//Position - 0x1707
{
	return Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_165 != 0;
}

bool func_43()//Position - 0x171E
{
	return Global_1675400.f_3;
}

bool func_44()//Position - 0x172C
{
	return Global_2428131.f_613;
}

bool func_45()//Position - 0x173B
{
	return Global_2428131.f_565;
}

bool func_46()//Position - 0x174A
{
	return Global_2428131.f_566;
}

struct<8> func_47(var uParam0, int iParam1)//Position - 0x1759
{
	switch (iParam1)
	{
		case 2:
			*uParam0 = { 175.0434f, -998.7965f, -100.2256f };
			uParam0->f_3 = { 175.0878f, -1009.004f, -95.99992f };
			uParam0->f_6 = 14f;
			break;
		
		case 6:
			*uParam0 = { 212.9084f, -999.6776f, -99.99996f };
			uParam0->f_3 = { 189.6844f, -1000.068f, -95.2507f };
			uParam0->f_6 = 16.75f;
			break;
		
		case 10:
			*uParam0 = { 230.0094f, -1009.124f, -100.6539f };
			uParam0->f_3 = { 230.5939f, -965.522f, -94.53618f };
			uParam0->f_6 = 23.5f;
			break;
	}
	return *uParam0;
}

Vector3 func_48(int iParam0)//Position - 0x181B
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 2:
			Var0 = { 172.7787f, -1003.21f, -99.9999f };
			break;
		
		case 6:
			Var0 = { 198.6071f, -1000.536f, -100f };
			break;
		
		case 10:
			Var0 = { 227.8602f, -991.1093f, -99.9999f };
			break;
	}
	return Var0;
}

int func_49(var uParam0, int iParam1)//Position - 0x1882
{
	if (iParam1 == 2)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_55(PLAYER::PLAYER_ID()), uParam0->f_1262.f_114, 1) <= 30f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(func_55(PLAYER::PLAYER_ID()), uParam0->f_1262.f_117, uParam0->f_1262.f_117.f_3, uParam0->f_1262.f_117.f_6, 0, 1))
			{
				return 1;
			}
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_55(PLAYER::PLAYER_ID()), uParam0->f_146.f_47, 1) <= 30f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(func_55(PLAYER::PLAYER_ID()), uParam0->f_146.f_57[0 /*8*/], uParam0->f_146.f_57[0 /*8*/].f_3, uParam0->f_146.f_57[0 /*8*/].f_6, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(func_55(PLAYER::PLAYER_ID()), uParam0->f_146.f_57[1 /*8*/], uParam0->f_146.f_57[1 /*8*/].f_3, uParam0->f_146.f_57[1 /*8*/].f_6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_50(int iParam0)//Position - 0x1972
{
	struct<3> Var0;
	struct<3> Var6;
	
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_51(iParam0, 3, &Var0, -1);
			Var6 = { Var0 };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var6 = { 348.132f, -997.2031f, -100.1741f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var6 = { 264.3808f, -997.7274f, -100.0087f };
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_51(iParam0, 3, &Var0, 61);
			Var6 = { Var0 };
			break;
	}
	return Var6;
}

void func_51(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1AEA
{
	struct<6> Var0[2];
	struct<3> Var13;
	
	Var0[0 /*6*/] = { func_54(iParam3) };
	Var0[1 /*6*/] = { func_54(iParam0) };
	*uParam2 = { func_53(iParam1, iParam3) };
	Var13 = { *uParam2 - Var0[0 /*6*/] };
	Var13 = { func_52(Var13, -Var0[0 /*6*/].f_3.f_2) };
	Var13 = { func_52(Var13, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0[1 /*6*/], 0f, Var13) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
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
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_52(struct<3> Param0, float fParam3)//Position - 0x2346
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.x * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_53(var uParam0, int iParam1)//Position - 0x238A
{
	struct<3> Var0;
	struct<3> Var3;
	bool bVar6;
	struct<6> Var7;
	
	bVar6 = iParam1 == 61;
	MISC::_GET_BASE_ELEMENT_METADATA(&Var0, &Var3, uParam0, bVar6);
	Var7 = { Var0 };
	Var7.f_3 = { Var3 };
	return Var7;
}

struct<6> func_54(int iParam0)//Position - 0x23BC
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

Vector3 func_55(int iParam0)//Position - 0x283A
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_56(int iParam0)//Position - 0x284D
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
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
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
			return 0;
		
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
			return 1;
		
		default:
	}
	return 0;
}

int func_57()//Position - 0x2A1F
{
	if (Global_2428891.f_5529 && !Global_2435278)
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0, bool bParam1)//Position - 0x2A40
{
	if (MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_235.f_4, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_235.f_4, 1))
		{
			return 1;
		}
	}
	return 0;
}

var func_59()//Position - 0x2A80
{
	return Global_2428891.f_1.f_2837;
}

void func_60()//Position - 0x2A91
{
	Global_2405982.f_14 = 0;
}

int func_61(int iParam0)//Position - 0x2AA0
{
	if (iParam0 == func_62())
	{
		return Global_2405982.f_14;
	}
	return 0;
}

int func_62()//Position - 0x2ABB
{
	return Global_2405982;
}

void func_63(int iParam0)//Position - 0x2AC7
{
	if (iParam0 == func_62())
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
	
	iVar0 = func_69();
	if (((((iVar0 > -1 && !Global_2097152[func_68() /*8053*/][iVar0 /*111*/].f_42 == 0) && !MISC::IS_BIT_SET(Global_2097152[func_68() /*8053*/][iVar0 /*111*/].f_72, 1)) && !MISC::IS_BIT_SET(Global_2097152[func_68() /*8053*/][iVar0 /*111*/].f_72, 6)) && !func_67(0)) && !func_67(31))
	{
		return 1;
	}
	return 0;
}

bool func_67(int iParam0)//Position - 0x2BF0
{
	if (iParam0 < 32)
	{
		return MISC::IS_BIT_SET(Global_2422140.f_499.f_1, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2422140.f_499.f_2, (iParam0 - 32));
}

int func_68()//Position - 0x2C26
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

var func_69()//Position - 0x2C33
{
	return Global_2097152[func_68() /*8053*/].f_5756.f_2;
}

int func_70()//Position - 0x2C4B
{
	bool bVar0;
	
	func_77(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_76())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (func_75())
	{
		return 1;
	}
	if (func_74(157))
	{
		if (!func_73())
		{
			return 1;
		}
	}
	if (func_74(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_71() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_71()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_71()//Position - 0x2CDE
{
	switch (func_72())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_72()//Position - 0x2D12
{
	return Global_24444;
}

bool func_73()//Position - 0x2D1D
{
	return Global_2428131.f_572;
}

int func_74(int iParam0)//Position - 0x2D2C
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_75()//Position - 0x2D43
{
	return Global_2435238;
}

bool func_76()//Position - 0x2D4F
{
	return Global_2428131.f_567;
}

void func_77(var uParam0)//Position - 0x2D5E
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 168)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_78(iVar0);
					break;
				
				case 2:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_78(int iParam0)//Position - 0x2DCE
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_6(Var0.f_1, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_79(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_79(var uParam0, var uParam1)//Position - 0x2E4F
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_80()//Position - 0x2E9D
{
	Global_2535381.f_9 = 0;
	func_81();
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
		if (func_6(PLAYER::PLAYER_ID(), 0, 1))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_81()//Position - 0x2EEE
{
	struct<27> Var0;
	
	Var0.f_4 = 1;
	Var0.f_5 = 1;
	Var0.f_18 = 1;
	Var0.f_20 = 1125515264;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Global_2405982 = { Var0 };
}

bool func_82()//Position - 0x2F2D
{
	return Global_1312750;
}

