#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uScriptParam_0, 1);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uScriptParam_0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uScriptParam_0))
						{
							STREAMING::REQUEST_ANIM_DICT("MISSMIC2");
							if (STREAMING::HAS_ANIM_DICT_LOADED("MISSMIC2"))
							{
								ENTITY::PLAY_ENTITY_ANIM(uScriptParam_0, "beefsplitter_loop", "MISSMIC2", 1f, 1, 0, 0, 0, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
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

void func_1()//Position - 0xAF
{
	GlobalFunc_6524("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\n");
	STREAMING::REMOVE_ANIM_DICT("MISSMIC2");
	SCRIPT::TERMINATE_THIS_THREAD();
}



