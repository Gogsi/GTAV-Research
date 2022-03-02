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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	struct<3> Local_46 = { 0, 0, 0 } ;
	struct<3> Local_49 = { 0, 0, 0 } ;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_46 = { ScriptParam_0.f_1[0 /*3*/] };
	iLocal_43 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	GlobalFunc_491();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		GlobalFunc_491();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (GlobalFunc_10581(3))
			{
				switch (iLocal_42)
				{
					case 0:
						if (iLocal_44 == 1)
						{
							iLocal_42 = 1;
						}
						else
						{
							func_7();
						}
						break;
					
					case 1:
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_53))
						{
							if (iLocal_45 == 0)
							{
								if (func_2(iLocal_53, 0, 1056964608, 0, 0, 0))
								{
									iLocal_45 = 1;
								}
							}
						}
						if (iLocal_55 == 0)
						{
							func_1();
						}
						break;
				}
			}
			else
			{
				GlobalFunc_491();
			}
		}
		else
		{
			GlobalFunc_491();
		}
	}
}

void func_1()//Position - 0x115
{
	if (SYSTEM::TIMERB() > 10000)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_46, 10f, 10f, 10f, 0, 1, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			SYSTEM::SETTIMERB(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_53))
			{
				if (iLocal_43 == 0)
				{
					if (iLocal_45 == 0)
					{
					}
					TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_56);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(uLocal_54))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_53, iLocal_54, 0);
					if (iLocal_45 == 0)
					{
					}
					TASK::TASK_WANDER_STANDARD(iLocal_54, 1193033728, 0);
					iLocal_43 = 0;
				}
			}
		}
	}
}

int func_2(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1DB
{
	float fVar0;
	
	if (iParam4 == 2)
	{
		fVar0 = 150f;
	}
	else if (iParam4 == 1)
	{
		fVar0 = 100f;
	}
	else if (iParam4 == 0)
	{
		fVar0 = 40f;
	}
	switch (iParam3)
	{
		case 2:
			if (func_3(uParam0, func_6(iParam1, 2, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 3, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 5, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 6, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 7, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(uParam0, func_6(iParam1, 8, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
		
		case 1:
			if (func_3(uParam0, func_6(iParam1, 1, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
		
		case 0:
			if (func_3(uParam0, func_6(iParam1, 0, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_3(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6)//Position - 0x30E
{
	float fVar0;
	struct<3> Var1;
	
	if (fParam5 < 1f)
	{
		fVar0 = (1f + 0.5f);
	}
	else
	{
		fVar0 = (fParam5 + 0.5f);
	}
	Var1 = { (fParam5 + 0.2f), (fParam5 + 0.2f), fVar0 };
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, Param1), Var1, 0, 1, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uParam0, 1), fParam4)) && func_5(bParam6)) && !PED::IS_PED_RAGDOLL(uParam0)) && !TASK::IS_PED_GETTING_UP(uParam0))
		{
			func_4(uParam0, 1);
			return 1;
		}
		else
		{
			func_4(uParam0, 0);
		}
	}
	return 0;
}

void func_4(int iParam0, bool bParam1)//Position - 0x3C1
{
	if (bParam1)
	{
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
	}
}

int func_5(bool bParam0)//Position - 0x3D8
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (bParam0)
		{
			if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) == 1f || TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) == 0f)
			{
				return 1;
			}
		}
		else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) == 1f)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_6(int iParam0, int iParam1, float fParam2)//Position - 0x426
{
	struct<3> Var0;
	
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				Var0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 1:
			if (iParam0 == 3)
			{
				Var0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 2:
			if (iParam0 == 2)
			{
				Var0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 3:
			if (iParam0 == 1)
			{
				Var0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 5:
			if (iParam0 == 1)
			{
				Var0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				Var0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 7:
			if (iParam0 == 3)
			{
				Var0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				Var0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 8:
			if (iParam0 == 2)
			{
				Var0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				Var0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				Var0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				Var0 = { -fParam2, -fParam2, 0f };
			}
			break;
	}
	if (fParam2 < 0f)
	{
		fParam2 = (fParam2 * -1f);
	}
	return Var0;
}

void func_7()//Position - 0x6BE
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_46, 50f, 50f, 50f, 0, 1, 0))
	{
		STREAMING::REQUEST_MODEL(joaat("a_m_o_tramp_01"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_strpunk_01"));
		STREAMING::REQUEST_ANIM_DICT("amb@drug_dealer");
		while ((!STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_tramp_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_strpunk_01"))) || !STREAMING::HAS_ANIM_DICT_LOADED("amb@drug_dealer"))
		{
			SYSTEM::WAIT(0);
		}
		PED::ADD_RELATIONSHIP_GROUP("homeless", &uLocal_52);
		Local_49.f_2 = (Local_46.f_2 - 1f);
		iLocal_53 = PED::CREATE_PED(19, joaat("a_m_o_tramp_01"), Local_46.x, Local_46.f_1, Local_49.f_2, 0f, 1, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, uLocal_52);
		if (iLocal_43 == 1)
		{
			Local_49 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_53, 0.8f, 0.8f, -1f) };
			iLocal_54 = PED::CREATE_PED(5, joaat("g_m_y_strpunk_01"), Local_49, 0f, 1, 1);
			PED::ADD_RELATIONSHIP_GROUP("homeless", &uLocal_52);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_54, uLocal_52);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_53))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_49, 0);
				TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_53, uLocal_56);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_54))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_56);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_46, 0);
				TASK::TASK_PLAY_ANIM(0, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_56);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54, uLocal_56);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_56);
			}
		}
		iLocal_44 = 1;
	}
}





















