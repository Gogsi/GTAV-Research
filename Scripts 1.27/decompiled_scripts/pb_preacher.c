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
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<3> Local_47 = { 0, 0, 0 } ;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
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
	SYSTEM::WAIT(0);
	Local_44 = { ScriptParam_0.f_1[0 /*3*/] };
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
						if (iLocal_43 == 1)
						{
							iLocal_42 = 1;
						}
						else
						{
							func_2();
						}
						break;
					
					case 1:
						if (iLocal_50 == 0)
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

void func_1()//Position - 0xE9
{
	if (SYSTEM::TIMERB() > 7000)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_51))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_51, 10f, 10f, 10f, 0, 1, 0) && iLocal_53 == 0)
			{
				SYSTEM::SETTIMERB(0);
				Local_47 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				TASK::OPEN_SEQUENCE_TASK(&uLocal_54);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_47, 0);
				TASK::TASK_PLAY_ANIM(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_54);
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_51))
				{
					TASK::TASK_PERFORM_SEQUENCE(uLocal_51, uLocal_54);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_54);
				iLocal_53 = 1;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_51, 3f, 3f, 3f, 0, 1, 0) && iLocal_52 == 0)
			{
				Local_47 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				SYSTEM::SETTIMERB(0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_54);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_47, 0);
				TASK::TASK_PLAY_ANIM(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_54);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_51, uLocal_54);
			}
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_54);
			iLocal_52 = 1;
		}
	}
}

void func_2()//Position - 0x1F9
{
	STREAMING::REQUEST_MODEL(joaat("s_m_m_strpreach_01"));
	STREAMING::REQUEST_ANIM_DICT("amb@PREACHER");
	while (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_strpreach_01")) || !STREAMING::HAS_ANIM_DICT_LOADED("amb@PREACHER"))
	{
		SYSTEM::WAIT(0);
	}
	Local_47.f_2 = (Local_44.f_2 - 1f);
	uLocal_51 = PED::CREATE_PED(19, joaat("s_m_m_strpreach_01"), Local_44.x, Local_44.f_1, Local_47.f_2, 0f, 1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_51))
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_54);
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_47, 0);
		TASK::TASK_PLAY_ANIM(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_54);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_51, uLocal_54);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_54);
	}
	iLocal_43 = 1;
}





















