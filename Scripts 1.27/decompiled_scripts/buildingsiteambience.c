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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2)
		{
			func_4(19);
		}
		func_3();
	}
	func_2(19);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	while (!AUDIO::LOAD_STREAM("CONSTRUCTION_SITE_STREAM", "FBI_HEIST_SOUNDSET"))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::PLAY_STREAM_FROM_POSITION(-147f, -1005f, 28f);
	while (func_1(70))
	{
		SYSTEM::WAIT(0);
	}
	func_4(19);
	func_3();
}

int func_1(int iParam0)//Position - 0xB3
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[iParam0];
}

int func_2(int iParam0)//Position - 0xE0
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar0], iVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar0]), iVar1);
	return 1;
}

void func_3()//Position - 0x13A
{
	AUDIO::STOP_STREAM();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_4(int iParam0)//Position - 0x14E
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar0], iVar1))
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

