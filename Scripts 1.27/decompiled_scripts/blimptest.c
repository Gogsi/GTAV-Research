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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_40 = joaat("blimp");
	iLocal_43 = joaat("s_m_m_pilot_02");
	iLocal_45 = joaat("buzzard");
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_18();
	}
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		HUD::SET_TEXT_SCALE(0.75f, 0.9f);
		HUD::SET_TEXT_WRAP(0f, 1f);
		GlobalFunc_2008(0.05f, 0.63f, "PLCHLD_MISS", 0);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		HUD::SET_TEXT_SCALE(0.4f, 0.45f);
		HUD::SET_TEXT_WRAP(0f, 1f);
		GlobalFunc_2008(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x113
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_39))
	{
		if ((ENTITY::IS_ENTITY_DEAD(uLocal_39) || ENTITY::GET_ENTITY_HEALTH(uLocal_39) <= 0) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uLocal_39) <= 0f)
		{
			GlobalFunc_846(&uLocal_41);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_39))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_39);
			}
			if (iLocal_46 == 1)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(uLocal_39, 0) };
				func_8(Var0);
			}
			if (iLocal_46 == 1)
			{
				GlobalFunc_881(&uLocal_42);
				GlobalFunc_6838(&uLocal_39);
			}
			else
			{
				GlobalFunc_132(&uLocal_42, 1, 0, 1);
				GlobalFunc_131(&uLocal_39);
			}
		}
		else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_39))
		{
			VEHICLE::SET_PLAYBACK_SPEED(uLocal_39, 0.25f);
		}
	}
}







void func_8(struct<3> Param0)//Position - 0x35D
{
	int iVar0;
	int iVar1;
	struct<3> Var2[12];
	
	iVar1 = 12;
	Var2[0 /*3*/] = { 5f, 0f, 0f };
	Var2[1 /*3*/] = { 0f, 5f, 0f };
	Var2[2 /*3*/] = { 0f, 0f, 5f };
	Var2[3 /*3*/] = { 5f, 5f, 0f };
	Var2[4 /*3*/] = { 5f, 0f, 5f };
	Var2[5 /*3*/] = { 0f, 5f, 5f };
	Var2[6 /*3*/] = { 20f, 0f, 0f };
	Var2[7 /*3*/] = { 0f, 20f, 0f };
	Var2[8 /*3*/] = { 0f, 0f, 20f };
	Var2[9 /*3*/] = { 20f, 20f, 0f };
	Var2[10 /*3*/] = { 20f, 0f, 20f };
	Var2[11 /*3*/] = { 0f, 20f, 20f };
	FIRE::ADD_EXPLOSION(Param0, 8, 1f, 1, 0, 1065353216);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		FIRE::ADD_EXPLOSION(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216);
		iVar0++;
	}
}



void func_11()//Position - 0x489
{
	GlobalFunc_131(&uLocal_44);
	STREAMING::REQUEST_MODEL(iLocal_45);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_45))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_5230(uLocal_39))
	{
		uLocal_44 = VEHICLE::CREATE_VEHICLE(iLocal_45, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_39, 50f, 0f, 15f), 0f, 1, 1);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(uLocal_44);
		func_12(uLocal_44, uLocal_39);
		if (GlobalFunc_847(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_44, -1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 500f, 1, 0, 0, 0);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_45);
}

void func_12(var uParam0, var uParam1)//Position - 0x523
{
	var uVar0;
	
	uVar0 = GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(uParam0, 1), ENTITY::GET_ENTITY_COORDS(uParam1, 1), 1);
	ENTITY::SET_ENTITY_HEADING(uParam0, uVar0);
}


void func_14()//Position - 0x5AD
{
	GlobalFunc_846(&uLocal_41);
	if (GlobalFunc_5230(uLocal_39))
	{
		uLocal_41 = func_15(uLocal_39, 1, 5);
	}
}

int func_15(var uParam0, int iParam1, int iParam2)//Position - 0x5CE
{
	int iVar0;
	
	iVar0 = 0;
	if (GlobalFunc_847(uParam0))
	{
		iVar0 = HUD::ADD_BLIP_FOR_ENTITY(uParam0);
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, iParam1);
		HUD::SET_BLIP_PRIORITY(iVar0, iParam2);
		HUD::SET_BLIP_SCALE(iVar0, 1f);
	}
	return iVar0;
}

void func_16()//Position - 0x603
{
	STREAMING::REQUEST_MODEL(iLocal_43);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_43))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_5230(uLocal_39))
	{
		uLocal_42 = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_39, 26, iLocal_43, -1, 1, 1);
		if (GlobalFunc_847(uLocal_42))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_42, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_42, 118, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_42, 29, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_42, 116, 0);
		}
	}
	if (GlobalFunc_5230(uLocal_39))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_39, 1, "Blimp_City", 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_43);
}

void func_17()//Position - 0x680
{
	struct<3> Var0;
	
	if (GlobalFunc_5230(uLocal_39) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_39))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_39);
	}
	GlobalFunc_846(&uLocal_41);
	GlobalFunc_881(&uLocal_42);
	GlobalFunc_6838(&uLocal_39);
	STREAMING::REQUEST_MODEL(iLocal_40);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Blimp_City");
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_40) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Blimp_City"))
	{
		SYSTEM::WAIT(0);
	}
	Var0 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f) };
	uLocal_39 = VEHICLE::CREATE_VEHICLE(iLocal_40, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f), Var0.f_2, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_40);
}

void func_18()//Position - 0x715
{
	if (GlobalFunc_5230(uLocal_39) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_39))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_39);
	}
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Blimp_city");
	GlobalFunc_846(&uLocal_41);
	GlobalFunc_132(&uLocal_42, 1, 0, 1);
	GlobalFunc_131(&uLocal_39);
	GlobalFunc_131(&uLocal_44);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_43);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_40);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_45);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	SCRIPT::TERMINATE_THIS_THREAD();
}

