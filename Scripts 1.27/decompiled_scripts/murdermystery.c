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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_59 = 0f;
	struct<3> Local_60 = { 0, 0, 0 } ;
	float fLocal_63 = 0f;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	char* sLocal_78 = NULL;
	char* sLocal_79 = NULL;
	int iLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	char* sLocal_87 = NULL;
	char* sLocal_88 = NULL;
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	var uLocal_91 = 0;
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
	fLocal_46 = (175f * 175f);
	fLocal_47 = (5f * 5f);
	fLocal_48 = (5f * 5f);
	fLocal_49 = (2f * 2f);
	Local_50 = { -1011.737f, -480.254f, 39.0734f };
	Local_53 = { -1003.078f, -477.962f, 49.1374f };
	Local_56 = { -1018.376f, -483.9436f, 36.0964f };
	fLocal_59 = 114.7664f;
	Local_60 = { -1005.191f, -478.2104f, 49.0262f };
	fLocal_63 = 80.6659f;
	Local_64 = { 1f, 1f, 2f };
	Local_67 = { -596.05f, 2088.56f, 130.59f };
	sLocal_78 = "FOUND_CLUE";
	sLocal_79 = "NOIR_FILTER_SOUNDS";
	iLocal_84 = 7;
	sLocal_87 = "missmurder";
	sLocal_88 = "idle";
	sLocal_89 = "MM_LETREAD";
	sLocal_90 = "MM_LETCANC";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_82();
	}
	func_75(ScriptParam_0.f_1[0 /*3*/]);
	while (true)
	{
		func_74();
		if (func_69())
		{
			func_1();
		}
		else
		{
			func_82();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x15A
{
	switch (iLocal_84)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (!func_68(iLocal_84))
			{
				if (((func_65() && !func_64()) && func_63()) && !GlobalFunc_2(0))
				{
					if (iLocal_86 != 0)
					{
						if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_86))
						{
							func_60(iLocal_84, 1, 0);
						}
					}
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_777(uLocal_77))
			{
				PED::SET_PED_CAPSULE(uLocal_77, 0.75f);
			}
			if (!func_68(4))
			{
				if ((func_65() && func_63()) && !GlobalFunc_2(0))
				{
					func_60(4, 1, 0);
				}
			}
			break;
		
		case 5:
			if (func_55())
			{
				func_29();
			}
			if (((!func_68(5) && iLocal_72 == 4) && func_63()) && !GlobalFunc_2(0))
			{
				func_60(5, 1, 0);
			}
			break;
		
		case 6:
			if (!func_28(3))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -580.8914f, 2033.12f, 130.5113f, -578.4783f, 2035.029f, 127.5615f, 0.75f, 0, 1, 0))
				{
					func_27(3, 1);
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -580.2305f, 2032.054f, 130.2928f, -577.6669f, 2033.917f, 127.5157f, 0.75f, 0, 1, 0))
			{
				if (func_28(3))
				{
					func_18(-595.1746f, 2085.768f, 136.8813f, -601.5754f, 2106.162f, 125.4619f, 20.5f, -602.8466f, 2115.511f, 126.4209f, 128.0735f, 13.5f, 22.2f, 5.7f, 1, 0, 1, 1, 0);
					func_27(3, 0);
				}
			}
			if (!func_28(2))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -580.2305f, 2032.054f, 130.2928f, -577.6669f, 2033.917f, 127.5157f, 0.75f, 0, 1, 0) || CAM::IS_SCREEN_FADED_OUT())
				{
					ENTITY::CREATE_MODEL_HIDE(Local_67, 200f, joaat("prop_mineshaft_door"), 0);
					func_27(2, 1);
				}
			}
			if (func_65() && !func_64())
			{
				PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
				if (func_16(6))
				{
					if ((!func_68(6) && func_63()) && !GlobalFunc_2(0))
					{
						GlobalFunc_9660(134, 4, 1);
						func_60(6, 1, 0);
						func_27(1, 1);
					}
				}
				if (func_6())
				{
					if (!GlobalFunc_116(0))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
						{
							func_3();
						}
						GlobalFunc_159("MM_TOGGLE", 10);
					}
				}
			}
			if (func_28(1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -594.9976f, 2089.005f, 130.3449f, -597.1125f, 2088.365f, 133.3035f, 1f, 0, 1, 0))
				{
					GlobalFunc_159("MM_HELP", 10000);
					func_27(1, 0);
				}
			}
			break;
	}
}


void func_3()//Position - 0x45D
{
	switch (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.NOIR_EFFECTS_STATUS)
	{
		case 0:
			Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.NOIR_EFFECTS_STATUS = 1;
			break;
		
		case 1:
			Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.NOIR_EFFECTS_STATUS = 2;
			GRAPHICS::_SET_EXTRA_TIMECYCLE_MODIFIER(func_4());
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ON", "NOIR_FILTER_SOUNDS", 1);
			break;
		
		case 2:
			Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.NOIR_EFFECTS_STATUS = 0;
			break;
	}
}

char* func_4()//Position - 0x4C0
{
	switch (Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.NOIR_EFFECTS_STATUS)
	{
		case 1:
			return "NG_filmnoir_BW02";
		
		case 2:
			return "NG_filmnoir_BW01";
		
		default:
	}
	return "";
}


bool func_6()//Position - 0x54B
{
	return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.MURDER_MYSTERY_PROGRESS == 127;
}










bool func_16(int iParam0)//Position - 0x9BE
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0)
	{
		return 1;
	}
	iVar1 = MISC::GET_BITS_IN_RANGE(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.MURDER_MYSTERY_PROGRESS, 0, (iVar0 - 1));
	return iVar1 == (func_17(2, iVar0) - 1);
}

int func_17(int iParam0, int iParam1)//Position - 0x9F7
{
	if (iParam1 == 0)
	{
		return 1;
	}
	return (iParam0 * func_17(iParam0, (iParam1 - 1)));
}

void func_18(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0xA19
{
	GlobalFunc_9248(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}









void func_27(int iParam0, bool bParam1)//Position - 0x13E3
{
	if (bParam1)
	{
		MISC::SET_BIT(&uLocal_91, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&uLocal_91, iParam0);
	}
}

bool func_28(int iParam0)//Position - 0x1403
{
	return MISC::IS_BIT_SET(uLocal_91, iParam0);
}

void func_29()//Position - 0x1413
{
	int iVar0;
	
	switch (iLocal_71)
	{
		case 0:
			if (!MISC::GET_MISSION_FLAG())
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_50, Local_64, 1, 1, 0))
				{
					if (func_54())
					{
						iLocal_71 = 2;
						func_53(0, 800);
					}
				}
			}
			break;
		
		case 1:
			GlobalFunc_187();
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_53, Local_64, 1, 1, 0))
				{
					GlobalFunc_7629();
					iLocal_71 = 3;
					func_53(0, 800);
				}
				func_43();
				if (GlobalFunc_777(PLAYER::PLAYER_PED_ID()))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_unarmed"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
						}
					}
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
				}
			}
			break;
		
		case 2:
			GlobalFunc_187();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				GlobalFunc_7678(24, 0);
				GlobalFunc_2239(PLAYER::PLAYER_PED_ID(), Local_60, fLocal_63);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				func_37(1);
				func_18(-1023.439f, -479.5592f, 35.81806f, -1014.383f, -495.1239f, 40.10796f, 18.5f, -1024.096f, -485.1923f, 35.9779f, 209.0203f, GlobalFunc_625(), 1, 0, 1, 1, 0);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_60, 20f, 0);
				GlobalFunc_6775(24, &iLocal_70);
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_70);
				iLocal_85 = (MISC::GET_GAME_TIMER() + 40000);
				while ((!STREAMING::IS_NEW_LOAD_SCENE_LOADED() || !INTERIOR::IS_INTERIOR_READY(iLocal_70)) && iLocal_85 > MISC::GET_GAME_TIMER())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				if (iLocal_85 <= MISC::GET_GAME_TIMER())
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_70);
					GlobalFunc_2239(PLAYER::PLAYER_PED_ID(), Local_56, fLocal_59);
					func_53(1, 800);
					iLocal_71 = 0;
				}
				else
				{
					func_53(1, 800);
					iLocal_71 = 1;
					func_32();
				}
			}
			break;
		
		case 3:
			GlobalFunc_187();
			GlobalFunc_7629();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				GlobalFunc_2239(PLAYER::PLAYER_PED_ID(), Local_56, fLocal_59);
				GlobalFunc_7678(24, 1);
				INTERIOR::UNPIN_INTERIOR(iLocal_70);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				func_37(0);
				func_31();
				GlobalFunc_8533(Local_56, 30f, 12, 5000, 0, 0);
				func_53(1, 800);
				iLocal_71 = 0;
			}
			break;
	}
}


void func_31()//Position - 0x172F
{
	if (MISC::IS_PC_VERSION())
	{
		if (func_28(0))
		{
			PAD::_RESET_INPUT_MAPPING_SCHEME();
			func_27(0, 0);
		}
	}
}

void func_32()//Position - 0x1750
{
	if (MISC::IS_PC_VERSION())
	{
		if (!func_28(0))
		{
			PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("MYSTERY LETTER CAM");
			func_27(0, 1);
		}
	}
}





void func_37(bool bParam0)//Position - 0x24F0
{
	func_27(5, bParam0);
	CLOCK::PAUSE_CLOCK(bParam0);
}






void func_43()//Position - 0x2661
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { -1007.013f, -478.3662f, 49.02818f };
	Var3 = { -1007.85f, -476.9573f, 51.02807f };
	fVar6 = 1.75f;
	switch (iLocal_72)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, 0, 1, 0) && !GlobalFunc_116(0))
			{
				GlobalFunc_1(sLocal_89);
				iLocal_72++;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, 0, 1, 0) && !GlobalFunc_116(0))
			{
				if (!func_46(PLAYER::PLAYER_PED_ID(), -880529684))
				{
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -1007.995f, -476.8016f, 49.9117f, -1, 0, 2);
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
				{
					func_45(0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1007.351f, -477.5197f, 49.0282f, 1f, -1, 0.5f, 0, 30.4025f);
					GlobalFunc_1(sLocal_90);
					HUD::DISPLAY_RADAR(0);
					CAM::SET_CAM_ACTIVE(uLocal_73, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					iLocal_72++;
				}
			}
			else
			{
				HUD::CLEAR_HELP(1);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				iLocal_72 = (iLocal_72 - 1);
			}
			break;
		
		case 2:
			GlobalFunc_7629();
			func_45(0);
			HUD::DISPLAY_RADAR(0);
			if (!GlobalFunc_74(sLocal_90))
			{
				GlobalFunc_1(sLocal_90);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					iLocal_85 = MISC::GET_GAME_TIMER() + 300;
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				else
				{
					iLocal_85 = 0;
				}
				iLocal_72++;
			}
			break;
		
		case 3:
			GlobalFunc_7629();
			if (iLocal_85 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				HUD::DISPLAY_RADAR(1);
				func_45(1);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_CAM_ACTIVE(uLocal_73, 0);
				iLocal_72++;
			}
			break;
		
		case 4:
			iLocal_72 = 0;
			break;
	}
}


void func_45(bool bParam0)//Position - 0x286F
{
	func_27(6, !bParam0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, 0);
}

bool func_46(var uParam0, int iParam1)//Position - 0x288A
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1);
	return (iVar0 == 1 || iVar0 == 0);
}







void func_53(bool bParam0, int iParam1)//Position - 0x2A01
{
	func_27(4, !bParam0);
	if (bParam0)
	{
		CAM::DO_SCREEN_FADE_IN(iParam1);
	}
	else
	{
		CAM::DO_SCREEN_FADE_OUT(iParam1);
	}
}

int func_54()//Position - 0x2A25
{
	int iVar0;
	
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 21 || iVar0 < 6)
	{
		return 1;
	}
	GlobalFunc_159("MM_SOLBUSY", 5000);
	return 0;
}

int func_55()//Position - 0x2A58
{
	if (iLocal_71 == 1)
	{
		return 1;
	}
	if (!func_63())
	{
		return 0;
	}
	if (!GlobalFunc_230(61))
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_71 == 0)
	{
		return 0;
	}
	if (GlobalFunc_2(0))
	{
		return 0;
	}
	if (GlobalFunc_4612())
	{
		return 0;
	}
	if (GlobalFunc_42(GlobalFunc_8329()))
	{
		if (GlobalFunc_6509(GlobalFunc_8329()) == 4 || GlobalFunc_6509(GlobalFunc_8329()) == 5)
		{
			return 0;
		}
	}
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return 0;
	}
	if (Global_24590)
	{
		return 0;
	}
	return 1;
}





void func_60(int iParam0, bool bParam1, bool bParam2)//Position - 0x2B9E
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.MURDER_MYSTERY_PROGRESS), iParam0);
		if (!bParam2)
		{
			AUDIO::PLAY_SOUND_FRONTEND(uLocal_80, sLocal_78, sLocal_79, 1);
		}
		GlobalFunc_4907();
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.MURDER_MYSTERY_PROGRESS), iParam0);
	}
}



bool func_63()//Position - 0x2C58
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("player_zero");
}

int func_64()//Position - 0x2C6E
{
	if (GlobalFunc_777(PLAYER::PLAYER_PED_ID()))
	{
		return PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	return 0;
}

bool func_65()//Position - 0x2C8E
{
	return SYSTEM::VDIST2(func_67(iLocal_84), Local_81) < func_66(iLocal_84);
}

float func_66(int iParam0)//Position - 0x2CAB
{
	switch (iParam0)
	{
		case 0:
			return fLocal_47;
		
		case 1:
			return fLocal_47;
		
		case 2:
			return fLocal_47;
		
		case 3:
			return fLocal_47;
		
		case 4:
			return fLocal_48;
		
		case 5:
			return fLocal_49;
		
		case 6:
			return 4f;
		
		default:
	}
	return 0f;
}

Vector3 func_67(int iParam0)//Position - 0x2D1C
{
	switch (iParam0)
	{
		case 0:
			return 1.8941f, 309.6565f, 111.0097f;
		
		case 1:
			return 190.1696f, -431.7692f, 42.1372f;
		
		case 2:
			return 283.3024f, 212.6587f, 104.5986f;
		
		case 3:
			return -425.1273f, 1064.801f, 323.8097f;
		
		case 4:
			return -3160.96f, 3005.628f, -39.9701f;
		
		case 5:
			return -1008.142f, -476.2818f, 49.9633f;
		
		case 6:
			return -544.11f, 1986.58f, 127.03f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_68(int iParam0)//Position - 0x2DEB
{
	return MISC::IS_BIT_SET(Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.MURDER_MYSTERY_PROGRESS, iParam0);
}

int func_69()//Position - 0x2E02
{
	switch (iLocal_84)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return (!func_68(iLocal_84) && func_71());
		
		case 4:
			return func_71();
		
		case 5:
			return ((((func_16(iLocal_84) && func_71()) || iLocal_71 == 1) || iLocal_71 == 3) || iLocal_71 == 2);
		
		case 6:
			return (func_71() || (func_28(2) && func_70(Local_67)));
		
		default:
	}
	return 0;
}

var func_70(struct<3> Param0)//Position - 0x2EA5
{
	var uVar0;
	var uVar1;
	
	return GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param0, &uVar0, &uVar1);
}

bool func_71()//Position - 0x2EB9
{
	return SYSTEM::VDIST2(func_73(iLocal_84), Local_81) < func_72(iLocal_84);
}

float func_72(int iParam0)//Position - 0x2ED6
{
	switch (iParam0)
	{
		case 0:
			return fLocal_46;
		
		case 1:
			return fLocal_46;
		
		case 2:
			return fLocal_46;
		
		case 3:
			return fLocal_46;
		
		case 4:
			return fLocal_46;
		
		case 5:
			return fLocal_46;
		
		case 6:
			return fLocal_46;
		
		default:
	}
	return 0f;
}

Vector3 func_73(int iParam0)//Position - 0x2F48
{
	switch (iParam0)
	{
		case 0:
			return 1.8941f, 309.6565f, 111.0097f;
		
		case 1:
			return 190.1696f, -431.7692f, 42.1372f;
		
		case 2:
			return 283.3024f, 212.6587f, 104.5986f;
		
		case 3:
			return -425.1273f, 1064.801f, 323.8097f;
		
		case 4:
			return -3174.901f, 3034.061f, -35.645f;
		
		case 5:
			return -1008.69f, -476.4341f, 49.9544f;
		
		case 6:
			return -544.11f, 1986.58f, 127.03f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_74()//Position - 0x3017
{
	if (GlobalFunc_777(PLAYER::PLAYER_PED_ID()))
	{
		Local_81 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	}
}

void func_75(struct<3> Param0)//Position - 0x3037
{
	int iVar0;
	int iVar1;
	
	if (!GlobalFunc_84())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("murdermystery")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iVar0 = 0;
	while (iVar0 < 7 && iLocal_84 == 7)
	{
		iVar1 = iVar0;
		if (func_80(Param0, func_73(iVar1), 1056964608))
		{
			iLocal_84 = iVar1;
		}
		iVar0++;
	}
	func_76();
}

void func_76()//Position - 0x309A
{
	switch (iLocal_84)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_79(&iLocal_86, func_67(iLocal_84), 0.2f);
			break;
		
		case 4:
			func_78(joaat("u_f_m_drowned_01"));
			func_77(sLocal_87);
			uLocal_77 = PED::CREATE_PED(26, joaat("u_f_m_drowned_01"), func_67(4), 184.5548f, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("u_f_m_drowned_01"));
			TASK::TASK_PLAY_ANIM(uLocal_77, sLocal_87, sLocal_88, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_77, 1);
			PED::SET_PED_KEEP_TASK(uLocal_77, 1);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_77, 1);
			AUDIO::STOP_PED_SPEAKING(uLocal_77, 1);
			AUDIO::DISABLE_PED_PAIN_AUDIO(uLocal_77, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_77, 118, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_77, 208, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(uLocal_77, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_77, 1862763509);
			break;
		
		case 5:
			iLocal_74 = 731806707;
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_74, joaat("v_ilev_sol_off_door01"), -1002.147f, -478.064f, 50.117f, 1, 1, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_74, 1, 1, 0);
			uLocal_73 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1008.056f, -476.7573f, 50.2493f, -89.5003f, 0f, 38.7952f, 50f, 0, 2);
			break;
		
		case 6:
			func_78(joaat("u_m_o_filmnoir"));
			uLocal_75 = PED::CREATE_PED(26, joaat("u_m_o_filmnoir"), func_67(6), 22.9631f, 1, 1);
			PED::SET_PED_PROP_INDEX(uLocal_75, 0, 0, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("u_m_o_filmnoir"));
			AUDIO::STOP_PED_SPEAKING(uLocal_75, 1);
			AUDIO::DISABLE_PED_PAIN_AUDIO(uLocal_75, 1);
			PED::EXPLODE_PED_HEAD(uLocal_75, joaat("weapon_sniperrifle"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_75, 1862763509);
			uLocal_76 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_vintage_filmcan"), -543.71f, 1986.2f, 126.05f, 1, 1, 0);
			break;
	}
}

void func_77(char* sParam0)//Position - 0x3252
{
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	while (!STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_78(int iParam0)//Position - 0x3272
{
	STREAMING::REQUEST_MODEL(iParam0);
	while (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_79(int iParam0, struct<3> Param1, float fParam4)//Position - 0x3292
{
	*iParam0 = GRAPHICS::CREATE_TRACKED_POINT();
	if (*iParam0 == 0)
	{
	}
	else
	{
		GRAPHICS::SET_TRACKED_POINT_INFO(*iParam0, Param1, fParam4);
	}
}

bool func_80(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x32B8
{
	return SYSTEM::VDIST(Param0, Param3) <= fParam6;
}


void func_82()//Position - 0x3352
{
	func_83();
	func_31();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_83()//Position - 0x3366
{
	switch (iLocal_84)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			GRAPHICS::DESTROY_TRACKED_POINT(iLocal_86);
			iLocal_86 = 0;
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_77))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_77);
			}
			STREAMING::REMOVE_ANIM_DICT(sLocal_87);
			break;
		
		case 5:
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_74))
			{
				OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_74);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_73))
			{
				CAM::DESTROY_CAM(uLocal_73, 0);
			}
			if (func_28(4))
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			if (func_28(5))
			{
				CLOCK::PAUSE_CLOCK(false);
			}
			if (func_28(6))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (GlobalFunc_74(sLocal_89) || GlobalFunc_74(sLocal_90))
			{
				HUD::CLEAR_HELP(1);
			}
			break;
		
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_75))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_75);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_76))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_76);
			}
			if (func_28(2))
			{
				ENTITY::REMOVE_MODEL_HIDE(Local_67, 200f, joaat("prop_mineshaft_door"), 0);
			}
			break;
	}
}

