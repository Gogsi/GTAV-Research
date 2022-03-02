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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		GlobalFunc_491();
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("controller_races")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("initial")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	func_29();
	while (true)
	{
		if (GlobalFunc_6687(9) || Global_87287)
		{
			GlobalFunc_491();
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (func_24())
			{
				func_22();
				func_18();
				if (GlobalFunc_8354() == 1)
				{
					switch (iLocal_27)
					{
						case 1:
							break;
						
						case 2:
							func_1();
							break;
						}
					}
				}
		}
		SYSTEM::WAIT(1000);
	}
}

void func_1()//Position - 0xE2
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (GlobalFunc_2652(8))
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			iVar1 = func_10(iVar0);
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceUnlocked, iVar0))
			{
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea, iVar0))
				{
					fVar2 = SYSTEM::VDIST2(GlobalFunc_80(PLAYER::PLAYER_ID()), GlobalFunc_2247(iVar1, 0));
					if (fVar2 > 43681f)
					{
						if (!GlobalFunc_474(iVar1))
						{
							if (!Global_97327[iVar0])
							{
								GlobalFunc_5773(iVar1);
								GlobalFunc_2436(iVar1, 1, 1);
								MISC::CLEAR_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea), iVar0);
							}
							else if ((MISC::GET_GAME_TIMER() - Global_97333[iVar0]) > 60000)
							{
								Global_97327[iVar0] = 0;
								Global_97333[iVar0] = MISC::GET_GAME_TIMER();
								GlobalFunc_5773(iVar1);
								GlobalFunc_2436(iVar1, 1, 1);
								MISC::CLEAR_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea), iVar0);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_SAVE_DATA.STREET_RACE_SAVED_STRUCT.iStreetRaceLeaveArea), iVar0);
						}
					}
					else if (GlobalFunc_474(iVar1))
					{
						GlobalFunc_2436(iVar1, 0, 1);
					}
				}
				else if (!GlobalFunc_474(iVar1))
				{
					if (!Global_97327[iVar0])
					{
						GlobalFunc_5773(iVar1);
						GlobalFunc_2436(iVar1, 1, 1);
					}
					else if ((MISC::GET_GAME_TIMER() - Global_97333[iVar0]) > 60000)
					{
						Global_97327[iVar0] = 0;
						Global_97333[iVar0] = MISC::GET_GAME_TIMER();
						GlobalFunc_5773(iVar1);
						GlobalFunc_2436(iVar1, 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}









int func_10(int iParam0)//Position - 0x5C2
{
	switch (iParam0)
	{
		case 0:
			return 85;
			break;
		
		case 1:
			return 86;
			break;
		
		case 2:
			return 87;
			break;
		
		case 3:
			return 88;
			break;
		
		case 4:
			return 89;
			break;
	}
	return 85;
}








void func_18()//Position - 0x7CC
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (GlobalFunc_2652(7))
	{
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			iVar1 = func_21(iVar0);
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea, iVar0))
			{
				fVar2 = SYSTEM::VDIST2(GlobalFunc_80(PLAYER::PLAYER_ID()), GlobalFunc_2247(iVar1, 0));
				if (fVar2 > 43681f)
				{
					if (!GlobalFunc_474(iVar1))
					{
						if (!Global_97317[iVar0])
						{
							GlobalFunc_5773(iVar1);
							GlobalFunc_2436(iVar1, 1, 1);
							MISC::CLEAR_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea), iVar0);
						}
						else if ((MISC::GET_GAME_TIMER() - Global_97322[iVar0]) > 60000)
						{
							Global_97317[iVar0] = 0;
							Global_97322[iVar0] = MISC::GET_GAME_TIMER();
							GlobalFunc_5773(iVar1);
							GlobalFunc_2436(iVar1, 1, 1);
							MISC::CLEAR_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea), iVar0);
						}
					}
				}
				else if (GlobalFunc_474(iVar1))
				{
					GlobalFunc_2436(iVar1, 0, 1);
				}
			}
			else if (!GlobalFunc_474(iVar1))
			{
				if (!Global_97317[iVar0])
				{
					GlobalFunc_5773(iVar1);
					GlobalFunc_2436(iVar1, 1, 1);
				}
				else if ((MISC::GET_GAME_TIMER() - Global_97322[iVar0]) > 60000)
				{
					Global_97317[iVar0] = 0;
					Global_97322[iVar0] = MISC::GET_GAME_TIMER();
					GlobalFunc_5773(iVar1);
					GlobalFunc_2436(iVar1, 1, 1);
				}
			}
			else if (!Global_SAVE_DATA.bSeaRaceFirstBlip)
			{
				if (iVar1 == 81)
				{
					GlobalFunc_5774(81);
					GlobalFunc_66(65, 1000);
					Global_SAVE_DATA.bSeaRaceFirstBlip = 1;
				}
			}
			iVar0++;
		}
	}
}



int func_21(int iParam0)//Position - 0x9A2
{
	switch (iParam0)
	{
		case 0:
			return 81;
			break;
		
		case 1:
			return 82;
			break;
		
		case 2:
			return 83;
			break;
		
		case 3:
			return 84;
			break;
	}
	return 81;
}

void func_22()//Position - 0x9EB
{
	switch (iLocal_27)
	{
		case 0:
			if (CLOCK::GET_CLOCK_HOURS() < 20 && CLOCK::GET_CLOCK_HOURS() >= 5)
			{
				func_23();
				iLocal_27 = 1;
			}
			else
			{
				iLocal_27 = 2;
			}
			break;
		
		case 1:
			if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 5)
			{
				iLocal_27 = 2;
			}
			break;
		
		case 2:
			if (CLOCK::GET_CLOCK_HOURS() < 20 && CLOCK::GET_CLOCK_HOURS() >= 5)
			{
				func_23();
				iLocal_27 = 1;
			}
			break;
	}
}

void func_23()//Position - 0xA6C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		GlobalFunc_2436(func_10(iVar0), 0, 0);
		iVar0++;
	}
}

int func_24()//Position - 0xA94
{
	if (GlobalFunc_6687(9))
	{
		return 0;
	}
	if (GlobalFunc_488())
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	return 1;
}





void func_29()//Position - 0xCFE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		Global_97317[iVar0] = 0;
		Global_97322[iVar0] = MISC::GET_GAME_TIMER();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		Global_97327[iVar0] = 0;
		iVar0++;
	}
}


