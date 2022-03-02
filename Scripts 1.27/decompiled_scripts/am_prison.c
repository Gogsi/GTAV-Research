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
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<5> Local_83 = { 0, 0, 0, 0, 0 } ;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_39(ScriptParam_0);
	}
	else
	{
		GlobalFunc_5409();
	}
	while (true)
	{
		GlobalFunc_906();
		if (GlobalFunc_7778() || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			GlobalFunc_5409();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_19())
			{
				GlobalFunc_5409();
			}
			if (!GlobalFunc_5504() || GlobalFunc_5361(PLAYER::PLAYER_ID(), 0))
			{
				if (((((!Global_1573335 && !func_15(3)) && !GlobalFunc_6678(PLAYER::PLAYER_ID(), 0)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !GlobalFunc_7624(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 4, 100, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
							{
								if (!GlobalFunc_226(&(Local_83.f_1)))
								{
									GlobalFunc_7731(&(Local_83.f_1));
								}
								else if (GlobalFunc_4981(&(Local_83.f_1)) > 20f)
								{
									if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
									{
										PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
									}
									else
									{
										PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
									}
								}
							}
							else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
							}
							else
							{
								PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
							}
						}
						else if (GlobalFunc_226(&(Local_83.f_1)))
						{
							GlobalFunc_235(&(Local_83.f_1));
						}
					}
				}
			}
		}
		else
		{
			GlobalFunc_5409();
		}
	}
}















bool func_15(int iParam0)//Position - 0x114C
{
	return MISC::IS_BIT_SET(Global_1573334, iParam0);
}




int func_19()//Position - 0x11F4
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_23())
		{
			iVar0 = 1;
		}
	}
	if (func_20())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_20()//Position - 0x121C
{
	switch (Local_83)
	{
		case 0:
			if (Global_1573335 || func_15(3))
			{
				Local_83.f_4 = PED::ADD_SCENARIO_BLOCKING_AREA(1413.703f, 2341.517f, -232.3945f, 2016.209f, 2998.893f, 161.0299f, 0, 1, 1, 1);
			}
			GlobalFunc_5211(&(uLocal_50[NETWORK::PARTICIPANT_ID_TO_INT()]), 1);
			Local_83 = 1;
			break;
		
		case 1:
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1693.164f, 2559.616f, 44.5649f) >= 1030225f)
			{
				Local_83 = 2;
			}
			break;
		
		case 2:
			if (Global_1573335 || func_15(3))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_83.f_4, 0);
			}
			return 1;
			break;
	}
	return 0;
}



int func_23()//Position - 0x12FB
{
	switch (iLocal_48)
	{
		case 0:
			iLocal_48 = 1;
			break;
		
		case 1:
			if (func_24())
			{
				iLocal_48 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_24()//Position - 0x1337
{
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1693.164f, 2559.616f, 44.5649f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}















void func_39(struct<20> Param0)//Position - 0x1633
{
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_48, 2);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_50, 33);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!GlobalFunc_5091())
	{
		GlobalFunc_5409();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_5409();
	}
}






