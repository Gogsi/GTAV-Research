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
	int iLocal_27 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	
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
	iLocal_27 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_35();
	}
	GlobalFunc_501(20);
	func_33();
	func_32(1);
	func_32(0);
	func_32(2);
	func_32(13);
	func_32(12);
	Global_2268 = 1;
	GlobalFunc_3027();
	if (!GlobalFunc_2647(-1615086084))
	{
		GlobalFunc_5847(-1615086084, 2, 2, 2, 1, -1, 5);
	}
	if (!GlobalFunc_2647(-1970925435))
	{
		GlobalFunc_5847(-1970925435, 2, 0, 0, 1, -1, 5);
	}
	if (!GlobalFunc_2647(-1817481777))
	{
		GlobalFunc_5847(-1817481777, 2, 12, 3, 1, -1, 5);
	}
	bVar0 = false;
	while (GlobalFunc_230(23) && !GlobalFunc_485(134))
	{
		if (GlobalFunc_8354() == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if ((!PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
					{
						if (!bVar0)
						{
							if (!((GlobalFunc_488() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || GlobalFunc_236()))
							{
								if (func_13())
								{
									bVar0 = true;
								}
							}
						}
						else
						{
							if (iLocal_27)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 384);
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
								PAD::ENABLE_CONTROL_ACTION(0, 173, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 172, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 174, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 175, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 176, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 177, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 178, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 179, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 180, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 181, 1);
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							}
							switch (GlobalFunc_2646())
							{
								case -1615086084:
									if (!GlobalFunc_2647(-1989308064))
									{
										GlobalFunc_6822(-1989308064, 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1989308064:
									GlobalFunc_3026(12, 0);
									GlobalFunc_585(134, 1);
									STATS::STAT_SET_INT(joaat("sp_final_decision"), 2, 1);
									break;
								
								case -1970925435:
									if (!GlobalFunc_2647(-1060930305))
									{
										GlobalFunc_6822(-1060930305, 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1060930305:
									GlobalFunc_3026(12, 1);
									GlobalFunc_585(134, 1);
									STATS::STAT_SET_INT(joaat("sp_final_decision"), 1, 1);
									break;
								
								case -1817481777:
									GlobalFunc_3026(12, 2);
									GlobalFunc_585(134, 1);
									STATS::STAT_SET_INT(joaat("sp_final_decision"), 3, 1);
									break;
								
								default:
									if (!GlobalFunc_116(0))
									{
										bVar0 = false;
									}
									else if (iLocal_27)
									{
										if (GlobalFunc_617())
										{
											iLocal_27 = 0;
										}
									}
									break;
								}
							}
						}
					}
				}
		}
		SYSTEM::WAIT(0);
	}
	GlobalFunc_492(20);
	Global_90001 = 0;
	GlobalFunc_4907();
	func_35();
}













int func_13()//Position - 0x76A
{
	MISC::SET_BIT(&Global_2264, 0);
	if (func_14(0, 0, 1, 1))
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x78D
{
	if (Global_68245)
	{
		if (iParam0 != 17 && iParam0 != 3)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Global_2544648, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_2544648, 14);
				MISC::SET_BIT(&Global_2544648, 16);
			}
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_2544648, 14);
				MISC::SET_BIT(&Global_2544648, 15);
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_2544648, 14);
			MISC::CLEAR_BIT(&Global_2544648, 16);
			MISC::CLEAR_BIT(&Global_2544648, 15);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	GlobalFunc_9035();
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


















void func_32(int iParam0)//Position - 0x1398
{
	if (((iParam0 == 144 || iParam0 == 145) || iParam0 == 147) || iParam0 == 148)
	{
		return;
	}
	Global_35465[iParam0] = MISC::GET_GAME_TIMER();
}

void func_33()//Position - 0x13D7
{
	Global_Next_Notification_Time = MISC::GET_GAME_TIMER();
}


void func_35()//Position - 0x1440
{
	GlobalFunc_7682(-1615086084);
	GlobalFunc_7682(-1989308064);
	GlobalFunc_7682(-1970925435);
	GlobalFunc_7682(-1060930305);
	GlobalFunc_7682(-1817481777);
	Global_2268 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}









