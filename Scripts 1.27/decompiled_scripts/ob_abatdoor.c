#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	struct<3> Local_4 = { 0, 0, 0 } ;
	struct<3> Local_7 = { 0, 0, 0 } ;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_4();
	}
	if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uScriptParam_0, 1);
		Local_4 = { ENTITY::GET_ENTITY_COORDS(uScriptParam_0, 1) };
		Local_7 = { ENTITY::GET_ENTITY_ROTATION(uScriptParam_0, 2) };
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uScriptParam_0))
						{
							STREAMING::REQUEST_MODEL(joaat("p_abat_roller_1_col"));
							if (STREAMING::HAS_MODEL_LOADED(joaat("p_abat_roller_1_col")))
							{
								if (!GlobalFunc_100(Local_4, 0f, 0f, 0f))
								{
									uLocal_3 = OBJECT::CREATE_OBJECT(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									ENTITY::SET_ENTITY_ROTATION(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uScriptParam_0))
						{
							if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
							{
								STREAMING::REQUEST_ANIM_DICT("map_objects");
								if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uScriptParam_0))
						{
							if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
							{
								if (Global_86798)
								{
									if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
									{
										ENTITY::PLAY_ENTITY_ANIM(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_3))
						{
							Var3 = { ENTITY::GET_ENTITY_COORDS(uLocal_3, 1) };
							if (!GlobalFunc_537(Var3, Var0, 0.1f))
							{
								Var6 = { Var0 - Var3 };
								ENTITY::SET_ENTITY_COORDS(uLocal_3, Var3 + GlobalFunc_107(Var6) * FtoV(MISC::GET_FRAME_TIME()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_86799 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}




void func_4()//Position - 0x278
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3))
	{
		OBJECT::DELETE_OBJECT(&uLocal_3);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_abat_roller_1_col"));
	GlobalFunc_6524("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	SCRIPT::TERMINATE_THIS_THREAD();
}



