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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2) || REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_1();
}

void func_1()//Position - 0x4C
{
	struct<3> Var0;
	var uVar3;
	
	while (!func_8(&iLocal_19))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(iLocal_19))
	{
		if (!Global_86862)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_19, 1, 1);
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_19, 1435919172) != 7)
			{
				TASK::CLEAR_PED_TASKS(iLocal_19);
			}
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_19, 1);
			TASK::OPEN_SEQUENCE_TASK(&uVar3);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_19, 0))
			{
				if (!PED::IS_PED_IN_COMBAT(iLocal_19, 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_19, 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, Var0, 6000);
				}
			}
			TASK::TASK_LOOK_AT_COORD(0, Var0, 6000, 0, 2);
			TASK::CLOSE_SEQUENCE_TASK(uVar3);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_19, uVar3);
		}
		func_2(iLocal_19);
	}
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		SYSTEM::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_19))
	{
		if (!PED::IS_PED_INJURED(iLocal_19))
		{
			PED::SET_PED_KEEP_TASK(iLocal_19, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_19);
	}
	Global_86862 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2(int iParam0)//Position - 0x139
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER() + 1000;
	while (MISC::GET_GAME_TIMER() < iVar0 && !CAM::IS_SCREEN_FADED_OUT())
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (iLocal_18 == 1)
		{
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 2:
					GlobalFunc_5117(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					GlobalFunc_5117(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_18 == 2)
		{
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 1:
					GlobalFunc_5117(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					GlobalFunc_5117(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_18 == 0)
		{
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 2:
					GlobalFunc_5117(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					GlobalFunc_5117(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}






int func_8(var uParam0)//Position - 0x4AC
{
	int iVar0;
	
	iLocal_17 = 0;
	while (iLocal_17 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87736[iLocal_17]) && !PED::IS_PED_INJURED(Global_87736[iLocal_17]))
		{
			if (Global_87736[iLocal_17] != PLAYER::PLAYER_PED_ID())
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_87736[iLocal_17]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Global_87736[iLocal_17], 0) || !ENTITY::IS_ENTITY_ATTACHED(Global_87736[iLocal_17]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_87736[iLocal_17], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 10f)
						{
							iLocal_18 = GlobalFunc_6674(Global_87736[iLocal_17]);
							if ((iLocal_18 == 0 || iLocal_18 == 2) || iLocal_18 == 1)
							{
								if (iLocal_18 != GlobalFunc_8315())
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_87736[iLocal_17], PLAYER::PLAYER_PED_ID(), 17))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(Global_87736[iLocal_17], 0))
										{
											iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_87736[iLocal_17], 0);
										}
										if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) || !ENTITY::DOES_ENTITY_EXIST(iVar0))
										{
											*uParam0 = Global_87736[iLocal_17];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_17++;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	return 0;
}




