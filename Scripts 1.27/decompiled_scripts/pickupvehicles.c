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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
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
	GlobalFunc_501(21);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 16)
		{
			GlobalFunc_492(21);
		}
		GlobalFunc_491();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("docks_setup")) == 0)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_27 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
				else
				{
					iLocal_27 = 0;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_27))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_27, 0))
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_27, joaat("handler")))
					{
						PAD::SET_INPUT_EXCLUSIVE(0, 51);
						if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_27))
						{
							if (iLocal_31 == 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_28) || (ENTITY::DOES_ENTITY_EXIST(iLocal_28) && OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(iLocal_27, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_28))
								{
									iLocal_28 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(iLocal_27, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_28))
								{
									if (GlobalFunc_2876(&uLocal_29, 1000))
									{
										if (VEHICLE::_IS_HANDLER_FRAME_ABOVE_CONTAINER(iLocal_27, iLocal_28))
										{
											if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
											{
												VEHICLE::_0x6A98C2ECF57FA5D4(iLocal_27, iLocal_28);
												iLocal_30 = 1;
												iLocal_31 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_30 == 1)
							{
								uLocal_29 = MISC::GET_GAME_TIMER();
								iLocal_30 = 0;
								iLocal_31 = 0;
							}
							if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}





