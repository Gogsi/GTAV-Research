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
	int iLocal_44 = 0;
	struct<58> Local_45 = { 0, 0, 0, 1064514355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1148829696, 0, 0, 0, 0, 0 } ;
	int iLocal_103 = 0;
	char* sLocal_104 = NULL;
	char* sLocal_105 = NULL;
	char* sLocal_106 = NULL;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
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
	iLocal_103 = 99;
	sLocal_104 = "";
	sLocal_105 = "";
	sLocal_106 = "";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(194))
	{
		func_464();
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
	{
		func_464();
	}
	func_447();
	while (true)
	{
		if (iLocal_44 == 0)
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_103 = 0;
				iLocal_44 = 1;
			}
			else
			{
				iLocal_44 = 3;
			}
		}
		if (iLocal_44 == 1)
		{
			if (!MISC::IS_BIT_SET(Global_Mission_Fail_State.f_20, 25))
			{
				if ((PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID())) && !PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 0))
				{
					if (!GlobalFunc_39(13) && !GlobalFunc_39(14))
					{
						func_53();
					}
					iLocal_44 = 3;
				}
				else if (!GlobalFunc_39(13) && !GlobalFunc_39(14))
				{
					func_41();
				}
			}
		}
		if (iLocal_44 == 3)
		{
			if (func_1())
			{
				iLocal_44 = 4;
			}
		}
		if (iLocal_44 == 4)
		{
			func_464();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()//Position - 0x16D
{
	bool bVar0;
	
	if (Global_90000 != -1)
	{
		bVar0 = false;
		switch (Global_90000)
		{
			case 0:
				bVar0 = func_10();
				break;
			
			case 1:
				bVar0 = func_9();
				break;
			
			case 3:
				bVar0 = func_8();
				break;
			
			case 4:
				bVar0 = func_7();
				break;
			
			case 6:
				bVar0 = GlobalFunc_6498();
				break;
			
			case 7:
				bVar0 = GlobalFunc_6499();
				break;
			
			case 8:
				bVar0 = func_2();
				break;
			
			default:
				bVar0 = true;
				break;
		}
		if (bVar0)
		{
			Global_90000 = -1;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_2()//Position - 0x20E
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		return 0;
	}
	STREAMING::REMOVE_IPL("airfield");
	return 1;
}





int func_7()//Position - 0x575
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_TORTURE_ZOOM"))
	{
		AUDIO::STOP_AUDIO_SCENE("FBI_3_TORTURE_ZOOM");
	}
	AUDIO::STOP_STREAM();
	return 1;
}

int func_8()//Position - 0x595
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		return 0;
	}
	STREAMING::REMOVE_IPL("smboat");
	return 1;
}

int func_9()//Position - 0x5B1
{
	var uVar0;
	var uVar1;
	
	uVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT(7.25f, -656.98f, 17.14f, 50f, "des_finale_tunnel");
	uVar1 = OBJECT::GET_RAYFIRE_MAP_OBJECT(7.25f, -656.98f, 17.14f, 50f, "des_finale_vault");
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uVar0))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar0, 11);
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uVar1))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar1, 11);
	}
	return 1;
}

int func_10()//Position - 0x618
{
	GlobalFunc_10617(96, 6);
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1104.657f, -1638.481f, 4.6754f, 5f, joaat("prop_map_door_01"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_map_door_01"), -1104.657f, -1638.481f, 4.6754f, 1, 0f, 0);
	}
	return 1;
}































void func_41()//Position - 0x4A43
{
	bool bVar0;
	
	if (func_49())
	{
		iLocal_103 = 99;
		return;
	}
	PED::_0x5A7F62FDA59759BD();
	if (iLocal_103 == 0)
	{
		GlobalFunc_9531(1);
		MISC::SET_FADE_OUT_AFTER_DEATH(0);
		MISC::SET_FADE_OUT_AFTER_ARREST(0);
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		MISC::PAUSE_DEATH_ARREST_RESTART(1);
		HUD::DISPLAY_HUD(0);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			sLocal_104 = "DEATH_SCENE";
			sLocal_105 = "WastedSounds";
			sLocal_106 = "RESPAWN_W";
			AUDIO::START_AUDIO_SCENE(sLocal_104);
		}
		if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 0))
		{
			sLocal_104 = "BUSTED_SCENE";
			sLocal_105 = "BustedSounds";
			sLocal_106 = "RESPAWN_B";
			AUDIO::START_AUDIO_SCENE(sLocal_104);
		}
		SYSTEM::SETTIMERA(0);
		Global_Mission_Fail_State.f_16 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", sLocal_105, 1);
		}
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0);
		iLocal_103 = 1;
	}
	if (iLocal_103 == 1)
	{
		if (!iLocal_108)
		{
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", sLocal_105, 1);
				iLocal_108 = 1;
			}
		}
		if (!iLocal_108)
		{
			if (SYSTEM::TIMERA() > 300)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", sLocal_105, 1);
				iLocal_108 = 1;
			}
		}
		if (IntToFloat(SYSTEM::TIMERA()) > (2000f * 0.2f))
		{
			GlobalFunc_10549(1);
			SYSTEM::SETTIMERB(0);
			iLocal_103 = 2;
		}
	}
	bVar0 = false;
	if (iLocal_103 == 2)
	{
		if (!Global_85625)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_106))
			{
				if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_Mission_Fail_State.f_16))
				{
					Global_Mission_Fail_State.f_16 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
				}
				else
				{
					if (!iLocal_107)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "TextHit", sLocal_105, 1);
						func_44(Global_Mission_Fail_State.f_16, sLocal_106, 0, 2);
						iLocal_107 = 1;
					}
					func_43(Global_Mission_Fail_State.f_16);
					bVar0 = true;
				}
			}
		}
		if (!Global_85624)
		{
			if (IntToFloat(SYSTEM::TIMERB()) > (4000f * 0.075f))
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
				SYSTEM::SETTIMERA(0);
				iLocal_103 = 3;
			}
		}
	}
	if (iLocal_103 == 3)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!bVar0)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_Mission_Fail_State.f_16))
				{
					func_43(Global_Mission_Fail_State.f_16);
				}
			}
		}
	}
	if (iLocal_103 != 99)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		else
		{
			MISC::SET_FADE_OUT_AFTER_DEATH(1);
			MISC::SET_FADE_OUT_AFTER_ARREST(1);
			MISC::PAUSE_DEATH_ARREST_RESTART(0);
			HUD::DISPLAY_HUD(1);
			GlobalFunc_9531(0);
			GlobalFunc_10549(0);
			GlobalFunc_4535(0, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_104))
			{
				AUDIO::STOP_AUDIO_SCENE(sLocal_104);
				sLocal_104 = "";
			}
			iLocal_103 = 99;
		}
	}
}


void func_43(var uParam0)//Position - 0x4CCB
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, 255, 255, 255, 255, 0);
}

void func_44(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x4CE6
{
	char* sVar0;
	
	sVar0 = GlobalFunc_1030(iParam3);
	if (iParam3 != 5)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "RESET_MOVIE");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		GlobalFunc_726(sParam2);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}





int func_49()//Position - 0x4EBD
{
	if (GlobalFunc_39(1))
	{
		return 1;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("bj")) > 0)
	{
		return 1;
	}
	if ((GlobalFunc_Is_Mission_Retry() || GlobalFunc_764()) || GlobalFunc_142())
	{
		return 1;
	}
	return 0;
}




void func_53()//Position - 0x4F79
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_103 != 99)
	{
		MISC::SET_FADE_OUT_AFTER_DEATH(1);
		MISC::SET_FADE_OUT_AFTER_ARREST(1);
		MISC::PAUSE_DEATH_ARREST_RESTART(0);
		HUD::DISPLAY_HUD(1);
		GlobalFunc_9531(0);
		GlobalFunc_10549(0);
		GlobalFunc_4535(0, 1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_104))
		{
			AUDIO::STOP_AUDIO_SCENE(sLocal_104);
			sLocal_104 = "";
		}
		iLocal_103 = 99;
	}
	iVar0 = GlobalFunc_8315();
	func_170();
	func_1();
	if (GlobalFunc_74("AM_H_DISRU"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (GlobalFunc_2017("AM_H_DISRU"))
	{
		GlobalFunc_5696("AM_H_DISRU", 1);
	}
	if (Global_89997 == 0)
	{
		if (func_163())
		{
			if (!GlobalFunc_Is_Mission_Retry() && !GlobalFunc_764())
			{
				func_162();
			}
			iVar1 = GlobalFunc_469(iVar0);
			iVar1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT((iVar1 / 100)) * 5f));
			iVar1 = GlobalFunc_254(iVar1, 0, 5000);
			if (!(Global_Mission_Fail_State == 9 || Global_Mission_Fail_State == 7))
			{
				if (iVar1 > 0)
				{
					func_157(iVar0, iVar1, GlobalFunc_793(GlobalFunc_80(PLAYER::GET_PLAYER_INDEX()), 0));
				}
			}
		}
		if (func_156())
		{
			if (!GlobalFunc_Is_Mission_Retry() && !GlobalFunc_764())
			{
				GlobalFunc_7904(PLAYER::PLAYER_PED_ID(), 0);
				iVar2 = 0;
				while (iVar2 < 44)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar0 /*284*/][iVar2 /*3*/].f_1 = 0;
					iVar2++;
				}
				iVar2 = 0;
				while (iVar2 < 50)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar0 /*284*/].f_133[iVar2 /*3*/].f_1 = 0;
					iVar2++;
				}
				GlobalFunc_7694(PLAYER::PLAYER_PED_ID(), 1, 0);
				func_90();
			}
			iVar3 = GlobalFunc_469(iVar0);
			iVar3 = GlobalFunc_254(iVar3, 0, 300);
			if (iVar3 > 0)
			{
				if (iVar3 > 0)
				{
					func_63(iVar0, iVar3, GlobalFunc_792(GlobalFunc_80(PLAYER::GET_PLAYER_INDEX()), 0));
				}
			}
			Global_89997 = 0;
		}
	}
	iVar4 = 0;
	while (iVar4 < 10)
	{
		GlobalFunc_9130(iVar4);
		iVar4++;
	}
}










void func_63(int iParam0, int iParam1, int iParam2)//Position - 0x5691
{
	int iVar0;
	
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	iVar0 = Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17;
	switch (iVar0)
	{
		case 0:
			GlobalFunc_183(joaat("sp0_money_spent_in_cop_bribes"), iParam1);
			break;
		
		case 1:
			GlobalFunc_183(joaat("sp1_money_spent_in_cop_bribes"), iParam1);
			break;
		
		case 2:
			GlobalFunc_183(joaat("sp2_money_spent_in_cop_bribes"), iParam1);
			break;
	}
	switch (iParam2)
	{
		case 0:
			GlobalFunc_10608(iVar0, 0, 116, iParam1, 1);
			break;
		
		case 1:
			GlobalFunc_10608(iVar0, 0, 117, iParam1, 1);
			break;
		
		case 2:
			GlobalFunc_10608(iVar0, 0, 118, iParam1, 1);
			break;
		
		case 3:
			GlobalFunc_10608(iVar0, 0, 119, iParam1, 1);
			break;
		
		case 4:
			GlobalFunc_10608(iVar0, 0, 120, iParam1, 1);
			break;
		
		case 5:
			GlobalFunc_10608(iVar0, 0, 121, iParam1, 1);
			break;
		
		case 6:
			GlobalFunc_10608(iVar0, 0, 122, iParam1, 1);
			break;
		
		default:
			return;
	}
}



























void func_90()//Position - 0x673F
{
	struct<3> Var0;
	int iVar3;
	char* sVar4;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar3 = GlobalFunc_792(Var0, 0);
	sVar4 = "";
	Local_45.f_26 = "";
	switch (GlobalFunc_8315())
	{
		case 0:
			Local_45.f_26 = "RespawnMichael";
			Local_45.f_16 = "facials@P_M_ZERO@BASE";
			Local_45.f_17 = "mood_angry_1";
			break;
		
		case 1:
			Local_45.f_26 = "RespawnFranklin";
			Local_45.f_16 = "facials@P_M_ONE@BASE";
			Local_45.f_17 = "mood_angry_1";
			break;
		
		case 2:
			Local_45.f_26 = "RespawnTrevor";
			Local_45.f_16 = "facials@P_M_TWO@BASE";
			Local_45.f_17 = "mood_angry_1";
			break;
		
		default:
			return;
			break;
	}
	Local_45.f_27 = "RESPAWN_SOUNDSET";
	Local_45.f_28 = "Hit";
	Local_45.f_29 = "Whoosh";
	switch (iVar3)
	{
		case 0:
			Local_45 = "RESPAWN@POLICE@VESPUCCI";
			Local_45.f_1 = "VESPUCCI";
			Local_45.f_2 = "VESPUCCI_CAM";
			Local_45.f_5 = { -1092.6f, -807.6234f, 19.304f };
			Local_45.f_8 = { 0f, 0f, 37.24f };
			Local_45.f_4 = -668482597;
			Local_45.f_19 = { 0f, 0f, 0f };
			Local_45.f_22 = { 0f, 0f, 0f };
			Local_45.f_52 = 0.8f;
			Local_45.f_53 = { 20f, 0f, 0f };
			Local_45.f_56 = Local_45.f_30;
			Local_45.f_57 = Local_45.f_31;
			break;
		
		case 1:
			Local_45 = "RESPAWN@POLICE@SOUTH_CENTRAL_A";
			Local_45.f_1 = "SOUTH_CENTRAL_A";
			Local_45.f_2 = "SOUTH_CENTRAL_A_CAM";
			Local_45.f_5 = { 361.482f, -1584.968f, 29.293f };
			Local_45.f_8 = { 0f, 0f, 45f };
			Local_45.f_4 = -668482597;
			Local_45.f_19 = { 0f, 0f, 0f };
			Local_45.f_22 = { 0f, 0f, 0f };
			Local_45.f_52 = 0.6f;
			Local_45.f_53 = { 20f, 0f, 0f };
			Local_45.f_56 = 0f;
			Local_45.f_57 = 25.37708f;
			break;
		
		case 3:
			Local_45 = "RESPAWN@POLICE@ROCKFORD";
			Local_45.f_1 = "ROCKFORD";
			Local_45.f_2 = "ROCKFORD_CAM";
			Local_45.f_5 = { -560.368f, -133.891f, 37.052f };
			Local_45.f_8 = { 0f, 0f, 4.2f };
			Local_45.f_4 = -668482597;
			Local_45.f_30 = 0f;
			Local_45.f_31 = 20f;
			Local_45.f_19 = { 0f, 0f, 0f };
			Local_45.f_22 = { 0f, 0f, 0f };
			Local_45.f_52 = 0.8f;
			Local_45.f_53 = { 20f, 0f, 0f };
			Local_45.f_56 = 0f;
			Local_45.f_57 = -30f;
			break;
		
		case 4:
			Local_45 = "RESPAWN@POLICE@SANDY_SHORES";
			Local_45.f_1 = "SANDY_SHORES";
			Local_45.f_2 = "SANDY_SHORES_CAM";
			Local_45.f_5 = { 1854.981f, 3683.84f, 34.268f };
			Local_45.f_8 = { 0f, 0f, -132f };
			Local_45.f_4 = -668482597;
			Local_45.f_19 = { 0f, 0f, 0f };
			Local_45.f_22 = { 0f, 0f, 0f };
			Local_45.f_52 = 0.75f;
			Local_45.f_53 = { 20f, 0f, 0f };
			Local_45.f_56 = Local_45.f_30;
			Local_45.f_57 = Local_45.f_31;
			break;
		
		case 5:
			Local_45 = "RESPAWN@POLICE@PALETO_BAY";
			Local_45.f_1 = "PALETO_BAY";
			Local_45.f_2 = "PALETO_BAY_CAM";
			Local_45.f_5 = { -440.7729f, 6019.289f, 30.49f };
			Local_45.f_8 = { 0f, 0f, -135.069f };
			Local_45.f_4 = -668482597;
			Local_45.f_19 = { 0f, 0f, 0f };
			Local_45.f_22 = { 0f, 0f, 0f };
			Local_45.f_52 = 0.8f;
			Local_45.f_53 = { 20f, 0f, 0f };
			Local_45.f_56 = Local_45.f_30;
			Local_45.f_57 = Local_45.f_31;
			break;
		
		case 6:
			Local_45 = "RESPAWN@POLICE@VINEWOOD";
			Local_45.f_1 = "VINEWOOD";
			Local_45.f_2 = "VINEWOOD_CAM";
			Local_45.f_5 = { 641.5f, -0.3f, 81.803f };
			Local_45.f_8 = { 0f, 0f, -170f };
			Local_45.f_4 = -668482597;
			Local_45.f_19 = { 0f, 0f, 0f };
			Local_45.f_22 = { 0f, 0f, 0f };
			Local_45.f_52 = 0.7f;
			Local_45.f_53 = { 20f, 0f, 0f };
			Local_45.f_56 = Local_45.f_30;
			Local_45.f_57 = Local_45.f_31;
			break;
		
		case 2:
			Local_45 = "RESPAWN@POLICE@DOWN_TOWN";
			Local_45.f_1 = "DOWN_TOWN";
			Local_45.f_2 = "DOWN_TOWN_CAM";
			Local_45.f_5 = { 480.3291f, -976.4094f, 26.992f };
			Local_45.f_8 = { 0f, 0f, 4.931f };
			Local_45.f_4 = -668482597;
			Local_45.f_30 = 999f;
			Local_45.f_31 = 999f;
			Local_45.f_19 = { Vector(27.9336f, -958.3694f, 486.8887f) - Local_45.f_5 };
			Local_45.f_22 = { 10f, 10f, 5f };
			Local_45.f_52 = 0.75f;
			Local_45.f_53 = { 20f, 0f, 0f };
			Local_45.f_56 = -15f;
			Local_45.f_57 = -15f;
			break;
		
		default:
			return;
			break;
	}
	GlobalFunc_9080();
	GlobalFunc_7942(10f);
	StringCopy(&(Local_45.f_11), "", 16);
	Local_45.f_15 = -1f;
	func_91(sVar4, &Local_45, "AM_H_BUSTED");
}

void func_91(char* sParam0, var uParam1, char* sParam2)//Position - 0x6BED
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar174;
	int iVar175;
	char* sVar176;
	char* sVar177;
	char* sVar178;
	int iVar179;
	float fVar180;
	float fVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	float fVar185;
	struct<3> Var186;
	struct<3> Var189;
	float fVar192;
	float fVar193;
	float fVar194;
	struct<3> Var195;
	var uVar198;
	float fVar199;
	float fVar200;
	struct<3> Var201;
	struct<3> Var204;
	float fVar207;
	int iVar208;
	float fVar209;
	float fVar210;
	struct<3> Var211;
	var uVar214;
	float fVar215;
	float fVar216;
	struct<3> Var217;
	struct<3> Var220;
	float fVar223;
	int iVar224;
	bool bVar225;
	bool bVar226;
	int iVar227;
	
	fVar0 = 0f;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	MISC::CLEAR_AREA(uParam1->f_5, 5f, 1, 0, 0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_5, 1, 0, 0, 1);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
	SYSTEM::WAIT(0);
	MISC::SET_GAME_PAUSED(1);
	STREAMING::REQUEST_ANIM_DICT(*uParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_124(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	iVar1 = MISC::GET_GAME_TIMER() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
		STREAMING::REQUEST_ANIM_DICT(*uParam1);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
		{
			bVar2 = false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		SYSTEM::WAIT(0);
	}
	GlobalFunc_9080();
	if (!GlobalFunc_100(uParam1->f_22, 0f, 0f, 0f))
	{
		PATHFIND::SET_ROADS_IN_AREA(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), 0, 0, 0, 0, 0);
		MISC::CLEAR_AREA(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	MISC::SET_GAME_PAUSED(0);
	MISC::CLEAR_AREA(uParam1->f_5, 15f, 1, 0, 0, 0);
	PED::INSTANTLY_FILL_PED_POPULATION();
	VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
	GlobalFunc_5848();
	while (GlobalFunc_142())
	{
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_5, uParam1->f_8, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, 0);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar4, 0);
		uVar5 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != -1871534317)
		{
			iVar6 |= 2;
		}
		func_119(PLAYER::PLAYER_PED_ID(), uParam1->f_18);
		TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
		iVar3 = PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, 1);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uVar5, iVar4, uParam1->f_2, *uParam1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
		{
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			GlobalFunc_159(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
	{
		iVar174 = GlobalFunc_8315();
		iVar175 = -1;
		sVar176 = "";
		switch (iVar174)
		{
			case 0:
				iVar175 = 0;
				sVar176 = "MICHAEL";
				break;
			
			case 1:
				iVar175 = 1;
				sVar176 = "FRANKLIN";
				break;
			
			case 2:
				iVar175 = 2;
				sVar176 = "TREVOR";
				break;
			
			default:
				break;
		}
		GlobalFunc_173(&uVar9, iVar175, PLAYER::PLAYER_PED_ID(), sVar176, 0, 1);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!bVar8)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_26))
					{
						GRAPHICS::ANIMPOSTFX_PLAY(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_27))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_28))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_29))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			GlobalFunc_7629();
			iVar179 = MISC::GET_GAME_TIMER();
			if (iVar179 >= (Global_35464 - 500))
			{
				GlobalFunc_3061(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (GlobalFunc_10607(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar182 = 0;
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar177)))
			{
				iVar183 = (PAD::GET_CONTROL_VALUE(2, 195) - 128);
				iVar184 = (PAD::GET_CONTROL_VALUE(2, 196) - 128);
				if (((iVar183 < 64 && iVar183 > -64) && iVar184 < 64) && iVar184 > -64)
				{
				}
				else
				{
					iVar182 = 1;
				}
			}
			else
			{
				fVar180 = -1f;
				fVar181 = -1f;
				iVar182 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar180 = fVar180;
				fVar181 = fVar181;
			}
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var189 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
						fVar192 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var186, Var189, 1);
						fVar185 = GlobalFunc_253(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						GlobalFunc_669(&(uParam1->f_34), PLAYER::PLAYER_PED_ID(), GlobalFunc_8315(), 1E-06f, 300, 300, 0, 0, 1045220557);
						GlobalFunc_668(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = MISC::GET_GAME_TIMER();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
							uVar198 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
							fVar199 = Var195.f_2;
							fVar200 = uVar198;
							uParam1->f_57 = (fVar199 - fVar200);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar193 = uParam1->f_56;
						fVar194 = uParam1->f_57;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar193, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar194);
						CAM::_SET_GAMEPLAY_CAM_RAW_PITCH(fVar193);
						CAM::_SET_GAMEPLAY_CAM_RAW_YAW(fVar194);
						Var201 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var204 = { CAM::GET_GAMEPLAY_CAM_COORD() };
						fVar207 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var201, Var204, 1);
						iVar208 = SYSTEM::ROUND((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						CAM::_0x59424BD75174C9B1();
						if (GlobalFunc_6815(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar178)) || iVar182)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					switch (uParam1->f_4)
					{
						case -1871534317:
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 1, 0, 0);
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
							break;
						
						case -668482597:
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 0, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0, 1, 0);
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									uVar214 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									fVar215 = Var211.f_2;
									fVar216 = uVar214;
									uParam1->f_31 = (fVar215 - fVar216);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar209 = uParam1->f_30;
								fVar210 = uParam1->f_31;
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar209, 1065353216);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar210);
								Var217 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
								Var220 = { CAM::GET_GAMEPLAY_CAM_COORD() };
								fVar223 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var217, Var220, 1);
								iVar224 = SYSTEM::ROUND((fVar223 * 1000f));
								CAM::RENDER_SCRIPT_CAMS(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iVar4);
						iVar4 = -1;
					}
				}
			}
			SYSTEM::WAIT(0);
		}
	}
	if (!GlobalFunc_100(uParam1->f_22, 0f, 0f, 0f))
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	bVar225 = CAM::_0x3044240D2E0FA842();
	bVar226 = false;
	if (uParam1->f_32)
	{
		CAM::_0x59424BD75174C9B1();
		if (!GlobalFunc_6815(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while (bVar225 || bVar226)
		{
			if (bVar225)
			{
			}
			if (bVar226)
			{
			}
			iVar227 = 2;
			func_94(1, 26, &iVar227);
			func_94(1, 79, &iVar227);
			func_94(1, 1, &iVar227);
			func_94(1, 2, &iVar227);
			func_94(0, 22, &iVar227);
			func_94(0, 36, &iVar227);
			func_94(0, 142, &iVar227);
			func_94(0, 141, &iVar227);
			func_94(0, 140, &iVar227);
			func_94(0, 263, &iVar227);
			func_94(0, 264, &iVar227);
			SYSTEM::WAIT(0);
			bVar225 = CAM::_0x3044240D2E0FA842();
			bVar226 = false;
			if (uParam1->f_32)
			{
				CAM::_0x59424BD75174C9B1();
				if (!GlobalFunc_6815(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam1->f_16);
	}
	STREAMING::REMOVE_ANIM_DICT(*uParam1);
	CAM::DESTROY_CAM(uVar5, 0);
	GlobalFunc_5810(&(uParam1->f_34));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, iVar3);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	sParam0 = sParam0;
}



void func_94(int iParam0, int iParam1, int iParam2)//Position - 0x7686
{
	PAD::DISABLE_CONTROL_ACTION(iParam0, iParam1, 1);
	*iParam2++;
}

























void func_119(int iParam0, var uParam1)//Position - 0x8379
{
	if (GlobalFunc_747(uParam1, 1))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 2))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 4))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 8))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 16))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 32))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 64))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 128))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 256))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 512))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (GlobalFunc_747(uParam1, 0))
	{
	}
}





int func_124(struct<3> Param0, var uParam3, int iParam4, int iParam5)//Position - 0x856D
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		GlobalFunc_2826(0);
		MISC::CLEAR_AREA(Param0, 5f, 1, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0);
		SYSTEM::WAIT(0);
		MISC::CLEAR_AREA(Param0, 5000f, 1, 0, 0, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(Param0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Param0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Param0, 5000f);
		GlobalFunc_2825();
		GlobalFunc_2769();
		SYSTEM::SETTIMERA(0);
		GlobalFunc_2826(1);
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
				if (SYSTEM::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(0);
					return 0;
				}
			}
		}
		SYSTEM::SETTIMERA(0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(0);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				MISC::SET_GAME_PAUSED(0);
				SYSTEM::SETTIMERA(0);
				PED::INSTANTLY_FILL_PED_POPULATION();
				if (iParam5 == 1)
				{
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				}
				else
				{
					SYSTEM::SETTIMERA(5000);
				}
				MISC::POPULATE_NOW();
			}
		}
		while ((!VEHICLE::_HAS_FILLED_VEHICLE_POPULATION() && !GlobalFunc_2768()) && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
		if (iParam4 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2));
			MISC::CLEAR_AREA(Param0, 5f, 1, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3);
				}
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		GlobalFunc_2826(0);
		return 1;
	}
	GlobalFunc_2826(0);
	return 0;
}
































int func_156()//Position - 0xA50F
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::GET_TIME_SINCE_LAST_DEATH();
	iVar1 = PLAYER::GET_TIME_SINCE_LAST_ARREST();
	if (iVar1 != -1)
	{
		if (iVar0 == -1 || iVar1 < iVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_157(int iParam0, int iParam1, int iParam2)//Position - 0xA540
{
	int iVar0;
	
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	iVar0 = Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17;
	switch (iVar0)
	{
		case 0:
			GlobalFunc_183(joaat("sp0_money_spent_on_healthcare"), iParam1);
			break;
		
		case 1:
			GlobalFunc_183(joaat("sp1_money_spent_on_healthcare"), iParam1);
			break;
		
		case 2:
			GlobalFunc_183(joaat("sp2_money_spent_on_healthcare"), iParam1);
			break;
	}
	switch (iParam2)
	{
		case 0:
			GlobalFunc_10608(iVar0, 0, 123, iParam1, 1);
			break;
		
		case 1:
			GlobalFunc_10608(iVar0, 0, 124, iParam1, 1);
			break;
		
		case 2:
			GlobalFunc_10608(iVar0, 0, 125, iParam1, 1);
			break;
		
		case 3:
			GlobalFunc_10608(iVar0, 0, 126, iParam1, 1);
			break;
		
		case 4:
			GlobalFunc_10608(iVar0, 0, 127, iParam1, 1);
			break;
		
		default:
			return;
			break;
	}
}





void func_162()//Position - 0xA74A
{
	struct<3> Var0;
	int iVar3;
	char* sVar4;
	int iVar5;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar3 = GlobalFunc_793(Var0, 0);
	sVar4 = "";
	switch (GlobalFunc_8315())
	{
		case 0:
			Local_45.f_26 = "RespawnMichael";
			Local_45.f_16 = "facials@P_M_ZERO@BASE";
			Local_45.f_17 = "mood_injured_1";
			break;
		
		case 1:
			Local_45.f_26 = "RespawnFranklin";
			Local_45.f_16 = "facials@P_M_ONE@BASE";
			Local_45.f_17 = "mood_injured_1";
			break;
		
		case 2:
			Local_45.f_26 = "RespawnTrevor";
			Local_45.f_16 = "facials@P_M_TWO@BASE";
			Local_45.f_17 = "mood_injured_1";
			break;
		
		default:
			return;
			break;
	}
	Local_45.f_27 = "RESPAWN_SOUNDSET";
	Local_45.f_28 = "Hit";
	Local_45.f_29 = "Whoosh";
	switch (iVar3)
	{
		case 0:
			Local_45 = "RESPAWN@HOSPITAL@ROCKFORD";
			Local_45.f_1 = "ROCKFORD";
			Local_45.f_2 = "ROCKFORD_CAM";
			Local_45.f_5 = { -447.2036f, -342.8395f, 34.502f };
			Local_45.f_8 = { 0f, 0f, 109.1352f };
			Local_45.f_15 = 0.5f;
			Local_45.f_3 = 0.85f;
			Local_45.f_4 = -668482597;
			Local_45.f_30 = 0f;
			Local_45.f_31 = -27f;
			Local_45.f_19 = { 0f, 0f, 0f };
			Local_45.f_22 = { 0f, 0f, 0f };
			Local_45.f_52 = 0.75f;
			Local_45.f_53 = { 15f, 0f, -11f };
			Local_45.f_56 = Local_45.f_30;
			Local_45.f_57 = Local_45.f_31;
			break;
		
		case 1:
			Local_45 = "RESPAWN@HOSPITAL@SOUTH_CENTRAL";
			Local_45.f_1 = "SOUTH_CENTRAL";
			Local_45.f_2 = "SOUTH_CENTRAL_CAM";
			Local_45.f_5 = { 342.7344f, -1397.851f, 32.5092f };
			Local_45.f_8 = { 0f, 0f, 62.516f };
			Local_45.f_15 = 0.5f;
			Local_45.f_4 = -668482597;
			Local_45.f_19 = { -39f, 16.5f, 0f };
			Local_45.f_22 = { 25f, 25f, 5f };
			Local_45.f_52 = 0.65f;
			Local_45.f_53 = { 7.65f, 0f, 2.55f };
			Local_45.f_56 = Local_45.f_30;
			Local_45.f_57 = Local_45.f_31;
			break;
		
		case 2:
			Local_45 = "RESPAWN@HOSPITAL@DOWNTOWN";
			Local_45.f_1 = "DOWNTOWN";
			Local_45.f_2 = "DOWNTOWN_CAM";
			Local_45.f_5 = { 357.3475f, -585.6215f, 28.831f };
			Local_45.f_8 = { 0f, 0f, -95.0926f };
			Local_45.f_15 = 0.5f;
			Local_45.f_4 = -668482597;
			Local_45.f_19 = { 34.5f, -18f, 0f };
			Local_45.f_22 = { 30f, 30f, 7.5f };
			Local_45.f_52 = 0.75f;
			Local_45.f_53 = { 20f, 0f, 0f };
			Local_45.f_56 = Local_45.f_30;
			Local_45.f_57 = Local_45.f_31;
			break;
		
		case 3:
			Local_45 = "RESPAWN@HOSPITAL@SANDY_SHORES";
			Local_45.f_1 = "SANDY_SHORES";
			Local_45.f_2 = "SANDY_SHORES_CAM";
			Local_45.f_5 = { 1837.655f, 3673.5f, 34.308f };
			Local_45.f_8 = { 0f, 0f, -146.16f };
			Local_45.f_15 = 0.5f;
			Local_45.f_4 = -668482597;
			Local_45.f_19 = { 0f, 0f, 0f };
			Local_45.f_22 = { 0f, 0f, 0f };
			Local_45.f_52 = 0.7f;
			Local_45.f_53 = { 13.31f, 0f, 4.32f };
			Local_45.f_56 = Local_45.f_30;
			Local_45.f_57 = Local_45.f_31;
			break;
		
		case 4:
			Local_45 = "RESPAWN@HOSPITAL@PALETO_BAY";
			Local_45.f_1 = "PALETO_BAY";
			Local_45.f_2 = "PALETO_BAY_CAM";
			Local_45.f_5 = { -244.6081f, 6324.963f, 32.426f };
			Local_45.f_8 = { 0f, 0f, -57.7613f };
			Local_45.f_15 = 0.5f;
			Local_45.f_4 = -668482597;
			Local_45.f_19 = { 0f, 0f, 0f };
			Local_45.f_22 = { 0f, 0f, 0f };
			Local_45.f_52 = 0.7f;
			Local_45.f_53 = { 20f, 0f, 0f };
			Local_45.f_56 = Local_45.f_30;
			Local_45.f_57 = Local_45.f_31;
			break;
		
		default:
			return;
			break;
	}
	if (Global_86198 != 145)
	{
		iVar5 = GlobalFunc_8315();
		StringCopy(&(Local_45.f_11), "", 16);
		switch (iVar5)
		{
			case 0:
				StringCopy(&(Local_45.f_11), "MICS_", 16);
				break;
			
			case 1:
				StringCopy(&(Local_45.f_11), "FRAS_", 16);
				break;
			
			case 2:
				StringCopy(&(Local_45.f_11), "TRVS_", 16);
				break;
			
			default:
				StringCopy(&(Local_45.f_11), "", 16);
				break;
		}
		switch (Global_86198)
		{
			case 0:
				StringConCat(&(Local_45.f_11), "DIEM", 16);
				break;
			
			case 1:
				StringConCat(&(Local_45.f_11), "DIEF", 16);
				break;
			
			case 2:
				StringConCat(&(Local_45.f_11), "DIET", 16);
				break;
			
			case 19:
			case 14:
			case 17:
				StringCopy(&(Local_45.f_11), "", 16);
				break;
			
			default:
				StringCopy(&(Local_45.f_11), "", 16);
				break;
			}
	}
	Local_45.f_18 = 0;
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 10))
	{
		case 0:
			Local_45.f_18 = 1;
			break;
		
		case 1:
			Local_45.f_18 = 2;
			break;
		
		case 2:
			Local_45.f_18 = 4;
			break;
		
		case 3:
			Local_45.f_18 = 8;
			break;
		
		case 4:
			Local_45.f_18 = 16;
			break;
		
		case 5:
			Local_45.f_18 = 32;
			break;
		
		case 6:
			Local_45.f_18 = 64;
			break;
		
		case 7:
			Local_45.f_18 = 128;
			break;
		
		case 8:
			Local_45.f_18 = 256;
			break;
		
		case 9:
			Local_45.f_18 = 512;
			break;
	}
	GlobalFunc_9080();
	GlobalFunc_7942(10f);
	func_91(sVar4, &Local_45, "");
	Global_86198 = 145;
}

int func_163()//Position - 0xAC92
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::GET_TIME_SINCE_LAST_DEATH();
	iVar1 = PLAYER::GET_TIME_SINCE_LAST_ARREST();
	if (iVar0 != -1)
	{
		if (iVar1 == -1 || iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}







void func_170()//Position - 0xB086
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (Global_3)
	{
	}
	else if (!GlobalFunc_Is_Mission_Retry() && !GlobalFunc_764())
	{
		func_439(iVar0);
		func_295(iVar0, 0);
		PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(iVar0);
		PED::REMOVE_PED_HELMET(iVar0, 1);
	}
	iVar1 = GlobalFunc_5013(ENTITY::GET_ENTITY_MODEL(iVar0), 8, -1);
	iVar2 = 1;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (iVar1 != -99)
	{
		iVar3 = func_293(iVar0, 8, -1);
		if (iVar4 == joaat("player_zero"))
		{
			if (((((((iVar3 == 2 || iVar3 == 4) || iVar3 == 7) || iVar3 == 8) || iVar3 == 10) || iVar3 == 13) || iVar3 == 16) || iVar3 == 18)
			{
				iVar2 = 0;
			}
		}
		else if (iVar4 == joaat("player_one"))
		{
			if ((((((iVar3 == 0 || iVar3 == 9) || iVar3 == 24) || iVar3 == 25) || (iVar3 >= 27 && iVar3 <= 42)) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
			{
				iVar2 = 0;
			}
		}
		else if (iVar4 == joaat("player_two"))
		{
			if ((((((iVar3 >= 0 && iVar3 <= 1) || iVar3 == 5) || iVar3 == 16) || iVar3 == 18) || iVar3 == 8) || iVar3 == 12)
			{
				iVar2 = 0;
			}
		}
		if (iVar2 == 1)
		{
			func_179(iVar0, 8, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	iVar1 = GlobalFunc_5013(ENTITY::GET_ENTITY_MODEL(iVar0), 9, -1);
	if (iVar1 != -99)
	{
		iVar2 = 1;
		iVar3 = func_293(iVar0, 9, -1);
		if (iVar4 == joaat("player_zero"))
		{
			if (iVar3 == 7 || (iVar3 >= 9 && iVar3 <= 14))
			{
				iVar2 = 0;
			}
		}
		else if (iVar4 == joaat("player_one"))
		{
			if (iVar3 >= 5 && iVar3 <= 10)
			{
				iVar2 = 0;
			}
		}
		else if (iVar4 == joaat("player_two"))
		{
			if ((iVar3 == 6 || (iVar3 >= 9 && iVar3 <= 14)) || (iVar3 >= 15 && iVar3 <= 16))
			{
				iVar2 = 0;
			}
		}
		if (iVar2 == 1)
		{
			func_179(iVar0, 9, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (Global_85622)
	{
		GlobalFunc_7694(iVar0, 1, 0);
		Global_85622 = 0;
	}
	if (Global_85623)
	{
		GlobalFunc_8011(iVar0, 1);
		Global_85623 = 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(iVar0, 1048576000);
	PED::RESET_PED_STRAFE_CLIPSET(iVar0);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(iVar0);
	PED::SET_PED_USING_ACTION_MODE(iVar0, 0, -1, 0);
	PED::SET_PED_STEALTH_MOVEMENT(iVar0, 0, 0);
	PED::SET_PED_CAN_BE_DRAGGED_OUT(iVar0, 1);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iVar0, 0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
	PED::SET_PED_CAN_SMASH_GLASS(iVar0, 1, 1);
	WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iVar0, 1, 1, 1, 0);
	PED::SET_PED_DIES_IN_SINKING_VEHICLE(iVar0, 1);
	PED::SET_PED_MAX_TIME_UNDERWATER(iVar0, -1f);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 1862763509);
	PED::SET_PED_HELMET(iVar0, 1);
	PED::SET_PED_CAN_SWITCH_WEAPON(iVar0, 1);
	PED::RESET_PED_IN_VEHICLE_CONTEXT(iVar0);
	PED::CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(iVar0);
	WEAPON::SET_PED_INFINITE_AMMO_CLIP(iVar0, 0);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iVar0, 1);
	AUDIO::SET_PED_IS_DRUNK(iVar0, 0);
	MISC::CLEAR_BIT(&Global_2264, 2);
	GlobalFunc_4937(0, 0);
	GlobalFunc_2562(0);
	GlobalFunc_7632(0);
	Global_14393.f_1 = 3;
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
	GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), -1);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_87845[iVar5]))
		{
			if (Global_87845[iVar5] != PLAYER::PLAYER_PED_ID())
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_87845[iVar5], 1, 1);
				PED::DELETE_PED(&(Global_87845[iVar5]));
			}
		}
		iVar5++;
	}
	iVar6 = 0;
	while (iVar6 < Global_89952)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_89952[iVar6]))
		{
			if (Global_89952[iVar6] != PLAYER::PLAYER_PED_ID())
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89952[iVar6], 1, 1);
				PED::DELETE_PED(&(Global_89952[iVar6]));
			}
		}
		iVar6++;
	}
	if (!Global_2545347)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		MISC::SET_RANDOM_WEATHER_TYPE();
	}
	Global_2545347 = 0;
	MISC::_CLEAR_CLOUD_HAT();
	if (!GlobalFunc_142())
	{
		GlobalFunc_2225();
	}
}









int func_179(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0xC1AD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8357(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_6669(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6669(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = GlobalFunc_7953(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7953(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7953(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_68149 };
		}
		else
		{
			uVar11 = { GlobalFunc_7617(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, uVar11[iVar0]) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_68165 };
						}
						else
						{
							uVar27 = { GlobalFunc_7616(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11231(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_179(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							GlobalFunc_4911(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
						}
						GlobalFunc_8357(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11231(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_179(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, func_293(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_188(iParam0, iVar10, &iVar4, 1))
							{
								func_179(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_179(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10828(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_179(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_179(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_179(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_179(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_179(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { GlobalFunc_7616(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11231(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_179(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11231(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_179(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11231(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_179(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11027(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (func_188(iParam0, iVar10, &iVar4, 0))
		{
			func_179(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_180(iParam0, iVar10, &iVar4))
		{
			func_179(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_180(var uParam0, int iParam1, int iParam2)//Position - 0xC99A
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!GlobalFunc_10910(uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}








int func_188(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD4DF
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!GlobalFunc_10910(uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}









































































































int func_293(int iParam0, int iParam1, int iParam2)//Position - 0x280E5
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (GlobalFunc_10910(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (GlobalFunc_10910(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return GlobalFunc_7953(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_6669(iParam0, iParam1);
		}
	}
	return -99;
}


int func_295(int iParam0, bool bParam1)//Position - 0x285A0
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_299(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_299(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10910(iParam0, 3, 169))
					{
						func_179(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 6))
			{
				func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 17))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 20))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 21))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 22))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 11))
			{
				func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 10))
			{
				func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 50))
			{
				func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 59))
			{
				func_179(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 22))
			{
				func_179(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 14))
			{
				func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10910(iParam0, 12, 13))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 14))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 15))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 4))
			{
				func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 3))
			{
				func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 82))
			{
				func_179(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 76))
			{
				func_179(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 1))
			{
				func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10910(iParam0, 12, 12))
			{
				func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 15))
			{
				func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10910(iParam0, 3, 71))
				{
					func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 17))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 18))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 19))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 7))
			{
				func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 6))
			{
				func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 88))
			{
				func_179(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 17))
			{
				func_179(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 11))
			{
				func_179(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_299(int iParam0, int iParam1)//Position - 0x28CEF
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		if (GlobalFunc_42(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_293(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_310(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			GlobalFunc_8358(iParam0, &Var2, 1);
			Global_89752[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_8999();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!GlobalFunc_39(0) && !GlobalFunc_39(1)) && !GlobalFunc_39(2)) && !GlobalFunc_39(3)) && !GlobalFunc_39(4)) && !GlobalFunc_39(9)) && !GlobalFunc_39(10)))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/] = { Var2 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}











void func_310(int iParam0, var uParam1, bool bParam2)//Position - 0x29F3F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (GlobalFunc_42(iVar0))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_188(iParam0, iVar1, &iVar2, 0))
			{
				func_179(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_180(iParam0, iVar1, &iVar2))
			{
				func_179(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			GlobalFunc_11290(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				GlobalFunc_11290(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_6784(740, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6784(2035, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6785(161, 1, -1, 1);
		}
	}
}

































































































































void func_439(int iParam0)//Position - 0x54582
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0))
	{
		if (!Global_89948[iVar0])
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] != 0)
			{
				if (GlobalFunc_518(iParam0) != Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0])
				{
					GlobalFunc_521(iVar0);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
				}
			}
		}
		func_310(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = func_293(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = func_293(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_293(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_293(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_310(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








void func_447()//Position - 0x54E48
{
	if (!func_463())
	{
		GlobalFunc_11149();
	}
	if (!func_455())
	{
		GlobalFunc_7532();
	}
	if (!func_452())
	{
		GlobalFunc_7533();
	}
}





bool func_452()//Position - 0x551A4
{
	return Global_SAVE_DATA.RESPAWN_LOCATION_DATA.f_26;
}



bool func_455()//Position - 0x55371
{
	return Global_SAVE_DATA.RESPAWN_LOCATION_DATA.f_27;
}








bool func_463()//Position - 0x5596D
{
	return Global_SAVE_DATA.RESPAWN_LOCATION_DATA.f_25;
}

void func_464()//Position - 0x5597E
{
	if (iLocal_103 != 99)
	{
		if ((GlobalFunc_Is_Mission_Retry() || GlobalFunc_764()) || GlobalFunc_142())
		{
		}
		else
		{
			MISC::SET_FADE_OUT_AFTER_DEATH(1);
			MISC::SET_FADE_OUT_AFTER_ARREST(1);
			MISC::PAUSE_DEATH_ARREST_RESTART(0);
			HUD::DISPLAY_HUD(1);
			GlobalFunc_9531(0);
			GlobalFunc_10549(0);
			GlobalFunc_4535(0, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_104))
			{
				AUDIO::STOP_AUDIO_SCENE(sLocal_104);
				sLocal_104 = "";
			}
		}
		iLocal_103 = 99;
	}
	Global_85624 = 0;
	Global_85625 = 0;
	Global_85626 = 0;
	if (GlobalFunc_489())
	{
		GlobalFunc_778(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}



