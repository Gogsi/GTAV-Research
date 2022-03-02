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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
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
	if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3854 == 0)
	{
		func_10();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_10();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			func_10();
		}
		switch (iLocal_17)
		{
			case 0:
				if (CLOCK::GET_CLOCK_HOURS() == 3 && func_9())
				{
					iLocal_17 = 1;
				}
				break;
			
			case 1:
				GlobalFunc_7621(152, 1, 0, 1, 0);
				iLocal_17 = 2;
				if (!AUDIO::IS_AMBIENT_ZONE_ENABLED("AZ_SPECIAL_UFO_03"))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_SPECIAL_UFO_03", 1, 1);
				}
				break;
			
			case 2:
				if (CLOCK::GET_CLOCK_HOURS() != 3 || !func_9())
				{
					func_10();
				}
				break;
		}
	}
}









int func_9()//Position - 0x43FA
{
	if (((MISC::IS_NEXT_WEATHER_TYPE("RAIN") || MISC::IS_NEXT_WEATHER_TYPE("THUNDER")) || MISC::IS_PREV_WEATHER_TYPE("RAIN")) || MISC::IS_PREV_WEATHER_TYPE("THUNDER"))
	{
		return 1;
	}
	return 0;
}

void func_10()//Position - 0x443C
{
	GlobalFunc_7621(152, 0, 1, 1, 0);
	if (AUDIO::IS_AMBIENT_ZONE_ENABLED("AZ_SPECIAL_UFO_03"))
	{
		AUDIO::SET_AMBIENT_ZONE_STATE("AZ_SPECIAL_UFO_03", 0, 1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

