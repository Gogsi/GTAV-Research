#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	var uLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	char* sLocal_8 = NULL;
	int iLocal_9 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	sLocal_6 = "Poledance_01";
	iLocal_7 = joaat("a_f_y_beach_01");
	sLocal_8 = "MISSSTRIP_CLUB";
	if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uScriptParam_0, 1);
		Local_2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = ENTITY::GET_ENTITY_HEADING(uScriptParam_0);
		ENTITY::SET_ENTITY_COLLISION(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uScriptParam_0))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							ENTITY::SET_ENTITY_COLLISION(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!PED::IS_PED_INJURED(uLocal_1))
						{
							TASK::TASK_COWER(uLocal_1, -1);
							PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
							PED::SET_PED_KEEP_TASK(uLocal_1, 1);
							SCRIPT::TERMINATE_THIS_THREAD();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()//Position - 0xDC
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_1))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_1))
		{
			PED::DELETE_PED(&uLocal_1);
		}
		else
		{
			PED::SET_PED_KEEP_TASK(uLocal_1, 1);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_2()//Position - 0x10C
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(uLocal_1))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_1))
			{
				return 1;
			}
		}
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()//Position - 0x180
{
	if (!PED::IS_PED_INJURED(uLocal_1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1, -2017877118) == 7)
		{
			TASK::TASK_PLAY_ANIM(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (ENTITY::HAS_ENTITY_ANIM_FINISHED(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			TASK::TASK_PLAY_ANIM(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uLocal_1, sLocal_8, sLocal_6, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()//Position - 0x214
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_1))
	{
		uLocal_1 = PED::CREATE_PED(5, iLocal_7, Local_2.x, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(uLocal_1, 0);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1, 1);
	}
}

int func_5()//Position - 0x251
{
	STREAMING::REQUEST_MODEL(iLocal_7);
	STREAMING::REQUEST_ANIM_DICT(sLocal_8);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_7) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_8))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_7);
		STREAMING::REQUEST_ANIM_DICT(sLocal_8);
	}
	return 0;
}

