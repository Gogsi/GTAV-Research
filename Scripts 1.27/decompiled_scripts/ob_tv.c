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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	struct<3> Local_30 = { 0, 0, 0 } ;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	bool bLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	char cLocal_45[64] = "";
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	char cLocal_61[64] = "";
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	int iScriptParam_0 = 0;
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
	iLocal_20 = 3;
	iLocal_24 = 1;
	iLocal_34 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	StringCopy(&cLocal_45, "NULL", 64);
	StringCopy(&cLocal_61, "NULL", 64);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_65();
	}
	if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0))
	{
		iLocal_36 = iScriptParam_0;
		iLocal_39 = iScriptParam_0;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		GlobalFunc_587();
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
		{
			if ((iLocal_42 != -1 && (GlobalFunc_875() && !GlobalFunc_874())) && !GlobalFunc_2799(iLocal_42))
			{
				func_65();
			}
			if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
			{
				func_65();
			}
			if (GlobalFunc_39(13) || GlobalFunc_39(14))
			{
				func_65();
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iScriptParam_0))
			{
				func_65();
			}
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					func_59();
					if (ENTITY::GET_ENTITY_HEALTH(iScriptParam_0) < 950)
					{
						func_65();
					}
					switch (iLocal_28)
					{
						case 0:
							func_56();
							if (iLocal_42 == 5)
							{
								if (GlobalFunc_230(18) == 1 && GlobalFunc_230(20) == 0)
								{
									uLocal_40 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_40))
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_40, 9);
									}
									SCRIPT::TERMINATE_THIS_THREAD();
								}
							}
							if (iLocal_42 == -1)
							{
								func_65();
							}
							else
							{
								GlobalFunc_587();
								AUDIO::HINT_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0);
								AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
								Global_24504[iLocal_42 /*11*/].f_2 = 0;
								Global_24504[iLocal_42 /*11*/].f_6 = 1;
								Global_24504[iLocal_42 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								Global_24504[iLocal_42 /*11*/].f_1 = 0;
								Global_24504[iLocal_42 /*11*/].f_4 = 0;
								Global_24504[iLocal_42 /*11*/].f_7 = 0;
								Global_24504[iLocal_42 /*11*/].f_8 = 0;
								Global_24504[iLocal_42 /*11*/].f_10 = 0;
								fLocal_29 = -4f;
								GlobalFunc_6715(&uLocal_25);
								func_50();
								func_49();
								SYSTEM::WAIT(0);
								iLocal_28 = 1;
							}
							break;
						
						case 1:
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								SYSTEM::WAIT(0);
							}
							else if (ENTITY::IS_ENTITY_STATIC(iLocal_36) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_36, 1119092736))
							{
								if (func_41() || Global_24504[iLocal_42 /*11*/].f_5)
								{
									iLocal_28 = 2;
								}
							}
							else
							{
								GlobalFunc_5084(&iLocal_41);
							}
							break;
						
						case 2:
							func_50();
							if (!GlobalFunc_2799(iLocal_42))
							{
								GlobalFunc_5084(&iLocal_41);
								if (GlobalFunc_74("TV_HLP1"))
								{
									HUD::CLEAR_HELP(1);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
							{
								if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_36))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_36, 1);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
							{
								if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_38))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_38, 1);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
							{
								if (ENTITY::IS_ENTITY_VISIBLE(iLocal_37))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_37, 0);
								}
							}
							if (!MISC::ARE_STRINGS_EQUAL(&cLocal_45, "NULL"))
							{
								AUDIO::SET_STATIC_EMITTER_ENABLED(&cLocal_45, 0);
							}
							GRAPHICS::SET_TV_AUDIO_FRONTEND(0);
							SYSTEM::WAIT(0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
							{
								GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iLocal_39);
							}
							if (!GlobalFunc_2799(iLocal_42))
							{
								if ((Global_24504[iLocal_42 /*11*/] == 3 || Global_24504[iLocal_42 /*11*/] == 2) || Global_24504[iLocal_42 /*11*/] == -1)
								{
									Global_24504[iLocal_42 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								}
								GRAPHICS::SET_TV_CHANNEL(Global_24504[iLocal_42 /*11*/]);
								GRAPHICS::SET_TV_VOLUME(fLocal_29);
							}
							else
							{
								iLocal_43 = Global_24504[iLocal_42 /*11*/];
								iLocal_44 = Global_24504[iLocal_42 /*11*/].f_1;
								GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iLocal_43, GlobalFunc_432(iLocal_44), Global_24504[iLocal_42 /*11*/].f_9);
								GRAPHICS::SET_TV_CHANNEL(iLocal_43);
								if (Global_24504[iLocal_42 /*11*/].f_7)
								{
									Global_24504[iLocal_42 /*11*/].f_5 = 0;
									Global_24504[iLocal_42 /*11*/].f_7 = 0;
								}
							}
							Global_24504[iLocal_42 /*11*/].f_2 = 1;
							GlobalFunc_184(133, 1);
							GlobalFunc_184(131, 1);
							GlobalFunc_184(132, 1);
							iLocal_28 = 3;
							break;
						
						case 3:
							if (Global_24504[iLocal_42 /*11*/].f_4)
							{
								iLocal_28 = 6;
							}
							if (Global_24504[iLocal_42 /*11*/].f_7 && GlobalFunc_2799(iLocal_42))
							{
								Global_24504[iLocal_42 /*11*/].f_7 = 0;
								iLocal_28 = 6;
							}
							if (!func_35(iLocal_42))
							{
								func_34();
								iLocal_28 = 5;
							}
							else
							{
								func_32();
								if (GRAPHICS::GET_TV_CHANNEL() == -1)
								{
									GRAPHICS::SET_TV_CHANNEL(Global_24504[iLocal_42 /*11*/]);
								}
								if (func_14())
								{
									iLocal_28 = 6;
								}
							}
							break;
						
						case 5:
							if (func_35(iLocal_42))
							{
								iLocal_28 = 2;
							}
							if (Global_24504[iLocal_42 /*11*/].f_4)
							{
								iLocal_28 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_41 != -1)
							{
								GlobalFunc_5084(&iLocal_41);
							}
							Global_24504[iLocal_42 /*11*/].f_5 = 0;
							Global_24504[iLocal_42 /*11*/].f_4 = 0;
							Global_24504[iLocal_42 /*11*/].f_1 = 0;
							Global_24504[iLocal_42 /*11*/].f_2 = 0;
							Global_24504[iLocal_42 /*11*/].f_7 = 0;
							Global_24504[iLocal_42 /*11*/].f_8 = 0;
							Global_24504[iLocal_42 /*11*/].f_10 = 0;
							iLocal_28 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_65();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	func_65();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()//Position - 0x4DE
{
	if (iLocal_42 != -1)
	{
		Global_24504[iLocal_42 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	}
	fLocal_29 = GRAPHICS::GET_TV_VOLUME();
	GRAPHICS::SET_TV_CHANNEL(-1);
	func_4();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("family5")) == 0)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_45, "NULL"))
		{
			AUDIO::SET_STATIC_EMITTER_ENABLED(&cLocal_45, 1);
		}
	}
	if (((GlobalFunc_74("TV_HLP1") || GlobalFunc_74("TV_HLP2")) || GlobalFunc_74("TV_HLP5")) || GlobalFunc_74("TV_HLP6"))
	{
		HUD::CLEAR_HELP(1);
	}
	func_3();
	func_49();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_37))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_37, 1);
		}
	}
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
	func_2();
}

void func_2()//Position - 0x587
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_86 == 1)
		{
			PAD::_RESET_INPUT_MAPPING_SCHEME();
			iLocal_86 = 0;
		}
	}
}

void func_3()//Position - 0x5A3
{
	if (!iLocal_34 == -1)
	{
		HUD::SET_TEXT_RENDER_ID(iLocal_34);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
		{
			if (ENTITY::GET_ENTITY_MODEL(iLocal_36) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(iLocal_36) == joaat("v_ilev_mm_scre_off"))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_36, 0);
				if (ENTITY::GET_ENTITY_MODEL(iLocal_36) == joaat("v_ilev_mm_scre_off"))
				{
					GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_38, 0);
	}
}

void func_4()//Position - 0x638
{
	if (iLocal_84)
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		if (CAM::IS_CAM_ACTIVE(uLocal_77))
		{
			CAM::SET_CAM_ACTIVE(uLocal_77, 0);
		}
		CAM::DESTROY_CAM(uLocal_77, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_30, 1, 0, 2);
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (bLocal_35 == 1)
				{
					bLocal_35 = false;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		}
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_61, "NULL"))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_61))
			{
				AUDIO::STOP_AUDIO_SCENE(&cLocal_61);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_38, 1);
		}
		GlobalFunc_8316(0, 1, 0, 0);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
		iLocal_84 = 0;
	}
}










int func_14()//Position - 0x935
{
	if (!GlobalFunc_2799(iLocal_42))
	{
		if (((((((GlobalFunc_4981(&uLocal_25) >= 1f && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_87, 1f, 1f, 1.5f, 0, 1, 0)) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_36) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())) && !GlobalFunc_153(8, -1)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_30, 90f)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (iLocal_41 == -1)
			{
				func_26();
				GlobalFunc_6774(&iLocal_41, 3, "TV_HLP5", 0, 0);
			}
			else if (GlobalFunc_5079(iLocal_41, 1))
			{
				GlobalFunc_5084(&iLocal_41);
				GlobalFunc_6715(&uLocal_25);
				Global_24504[iLocal_42 /*11*/].f_7 = 0;
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_15();
		}
		else
		{
			if (GlobalFunc_74("TV_HLP5"))
			{
				HUD::CLEAR_HELP(1);
			}
			func_2();
			GlobalFunc_5084(&iLocal_41);
		}
	}
	return 0;
}

void func_15()//Position - 0xA3E
{
	if (iLocal_84 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 222);
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 222))
		{
			GlobalFunc_5084(&iLocal_41);
			GlobalFunc_6774(&iLocal_41, 3, "TV_HLP6", 0, 0);
			func_22();
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
		if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (bLocal_35)
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			}
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		GRAPHICS::_0xD1C55B110E4DF534(PLAYER::PLAYER_PED_ID());
		func_20(1, 1);
		PAD::SET_INPUT_EXCLUSIVE(2, 222);
		GlobalFunc_7629();
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 222) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 200)))
		{
			GlobalFunc_5084(&iLocal_41);
			func_4();
		}
	}
}





void func_20(bool bParam0, bool bParam1)//Position - 0xC5A
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (GlobalFunc_4533(0))
		{
			if (!iLocal_21)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
				{
					GRAPHICS::SET_TV_CHANNEL(1);
				}
				else
				{
					GRAPHICS::SET_TV_CHANNEL(0);
				}
				iLocal_21 = 1;
			}
		}
		else if (iLocal_21)
		{
			iLocal_21 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (PAD::GET_CONTROL_VALUE(2, 219) - 127);
		if (!iLocal_22)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_23 = MISC::GET_GAME_TIMER();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_23 = MISC::GET_GAME_TIMER();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_24 = 1;
			}
			else if (iLocal_24)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_24 = 0;
				}
			}
		}
		if (iLocal_22)
		{
			if (iVar1 == 0 || MISC::GET_GAME_TIMER() > iLocal_23 + 24)
			{
				iLocal_22 = 0;
			}
		}
	}
}


void func_22()//Position - 0xDEB
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_84 == 0)
	{
		uLocal_77 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Local_78, Local_81, fVar0, 0, 2);
		CAM::SET_CAM_FAR_CLIP(uLocal_77, 100f);
		CAM::SET_CAM_ACTIVE(uLocal_77, 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_38, 0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				bLocal_35 = true;
			}
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_30, -1, 0, 2);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (!MISC::ARE_STRINGS_EQUAL(&cLocal_61, "NULL"))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_61))
			{
				AUDIO::START_AUDIO_SCENE(&cLocal_61);
			}
		}
		GlobalFunc_8316(1, 1, 0, 0);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
		iLocal_84 = 1;
	}
}




void func_26()//Position - 0x10BB
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_86 == 0)
		{
			PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("TV_Controls");
			iLocal_86 = 1;
		}
	}
}






void func_32()//Position - 0x11BD
{
	float fVar0;
	
	fVar0 = 1f;
	func_33(&fVar0);
	HUD::SET_TEXT_RENDER_ID(iLocal_34);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}

void func_33(float fParam0)//Position - 0x11FE
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_34()//Position - 0x123B
{
	Global_24504[iLocal_42 /*11*/].f_7 = 0;
	Global_24504[iLocal_42 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	fLocal_29 = GRAPHICS::GET_TV_VOLUME();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_61))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_61);
	}
	if (((GlobalFunc_74("TV_HLP1") || GlobalFunc_74("TV_HLP2")) || GlobalFunc_74("TV_HLP5")) || GlobalFunc_74("TV_HLP6"))
	{
		HUD::CLEAR_HELP(1);
	}
	GlobalFunc_5084(&iLocal_41);
	GRAPHICS::SET_TV_CHANNEL(-1);
	SYSTEM::WAIT(0);
	func_3();
	func_49();
}

int func_35(int iParam0)//Position - 0x12BB
{
	struct<3> Var0;
	
	Var0 = { GlobalFunc_271(PLAYER::PLAYER_ID()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}






int func_41()//Position - 0x14E9
{
	if (GlobalFunc_4981(&uLocal_25) < 1f)
	{
		GlobalFunc_5084(&iLocal_41);
		return 0;
	}
	if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_87, 1f, 1f, 1.5f, 0, 1, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_30, 90f)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_5084(&iLocal_41);
		return 0;
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_36) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_5084(&iLocal_41);
		return 0;
	}
	if (GlobalFunc_153(8, -1))
	{
		GlobalFunc_5084(&iLocal_41);
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		GlobalFunc_5084(&iLocal_41);
		return 0;
	}
	if (Global_87295)
	{
		GlobalFunc_5084(&iLocal_41);
		return 0;
	}
	if (Global_24504[iLocal_42 /*11*/].f_8)
	{
		GlobalFunc_5084(&iLocal_41);
		return 0;
	}
	if (iLocal_41 == -1)
	{
		GlobalFunc_6774(&iLocal_41, 3, "TV_HLP1", 0, 0);
		return 0;
	}
	if (GlobalFunc_5079(iLocal_41, 1))
	{
		GlobalFunc_5084(&iLocal_41);
		GlobalFunc_6715(&uLocal_25);
		Global_24504[iLocal_42 /*11*/].f_7 = 1;
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		GlobalFunc_7610(309, 0, 0);
		return 1;
	}
	return 0;
}








void func_49()//Position - 0x1EED
{
	SYSTEM::WAIT(0);
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
		iLocal_34 = -1;
		HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}
}

void func_50()//Position - 0x1F19
{
	int iVar0;
	
	if (iLocal_42 == 4)
	{
		func_51();
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
	}
	SYSTEM::WAIT(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		func_65();
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_36);
	HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", 0);
	HUD::LINK_NAMED_RENDERTARGET(iVar0);
	SYSTEM::WAIT(0);
	if (iLocal_42 != 4)
	{
		while (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_36))
			{
				func_65();
			}
			if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_36))
			{
				func_65();
			}
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", 0);
			}
			if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iVar0))
			{
				HUD::LINK_NAMED_RENDERTARGET(iVar0);
			}
			SYSTEM::WAIT(0);
		}
	}
	iLocal_34 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");
	func_3();
}

void func_51()//Position - 0x1FD7
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_36) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_36 = 0;
	iLocal_36 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2"), Local_30, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_36, uLocal_33);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_36, 1);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_36, 0);
	iLocal_38 = 0;
	iLocal_38 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2_vl"), Local_30, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_38, uLocal_33);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_38, 1);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_38, 0);
}





void func_56()//Position - 0x20C3
{
	Local_30 = { ENTITY::GET_ENTITY_COORDS(iLocal_36, 1) };
	uLocal_33 = ENTITY::GET_ENTITY_HEADING(iLocal_36);
	GlobalFunc_5068();
	if (ENTITY::GET_ENTITY_MODEL(iLocal_36) == joaat("prop_tv_03"))
	{
		if (SYSTEM::VDIST(Local_30, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_42 = 0;
			Local_78 = { -9.8135f, -1440.913f, 31.3654f };
			Local_81 = { 0f, 0f, -134.3211f };
			Local_87 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_45, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_36) == joaat("prop_trev_tv_01"))
	{
		if (SYSTEM::VDIST(Local_30, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_42 = 2;
			Local_78 = { 1978.23f, 3819.65f, 34.2724f };
			Local_81 = { 0f, 0f, -105.15f };
			Local_87 = { 1978.33f, 3819.717f, 32.4501f };
			func_57();
			StringCopy(&cLocal_45, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_36) == joaat("prop_tv_flat_01"))
	{
		if (SYSTEM::VDIST(Local_30, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_42 = 1;
			Local_78 = { 2.5724f, 527.9989f, 176.1619f };
			Local_81 = { 0f, 0f, -29.9488f };
			Local_87 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_45, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_36) == joaat("prop_tv_flat_02"))
	{
		if (SYSTEM::VDIST(Local_30, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_42 = 3;
			Local_78 = { -1160.502f, -1520.76f, 10.7393f };
			Local_81 = { 0f, 0f, 60.061f };
			Local_87 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_45, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_61, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_36) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(iLocal_36) == joaat("v_ilev_mm_scre_off"))
	{
		if (SYSTEM::VDIST(Local_30, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_42 = 4;
			Local_78 = { -802.8972f, 172.537f, 74.5801f };
			Local_81 = { 0f, 0f, -69.0273f };
			Local_87 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_45, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_61, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iLocal_36) == joaat("des_tvsmash_start"))
	{
		if (SYSTEM::VDIST(Local_30, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_42 = 5;
			Local_78 = { -808.3051f, 171.2623f, 77.2822f };
			Local_81 = { 1.8886f, 0f, 110.9232f };
			Local_87 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_45, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_61, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_57()//Position - 0x23B2
{
	iLocal_37 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_tt_screenstatic"), Local_30, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(iLocal_37, uLocal_33);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_37, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_37, 1);
}


void func_59()//Position - 0x2418
{
	if (iLocal_42 == -1)
	{
		return;
	}
	if (Global_24504[iLocal_42 /*11*/].f_10 == 0)
	{
		if (iLocal_85 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_39, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_36, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_38, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_37, 0);
			}
			iLocal_85 = 0;
		}
	}
	else if (iLocal_85 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_39, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_36, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_38, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_37, 1);
		}
		iLocal_85 = 1;
	}
}






void func_65()//Position - 0x2543
{
	if (iLocal_42 == -1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	GlobalFunc_5084(&iLocal_41);
	if (iLocal_42 != -1)
	{
		func_1();
		Global_24504[iLocal_42 /*11*/].f_6 = 0;
		Global_24504[iLocal_42 /*11*/].f_7 = 0;
		Global_24504[iLocal_42 /*11*/].f_8 = 0;
		Global_24504[iLocal_42 /*11*/].f_4 = 0;
		Global_24504[iLocal_42 /*11*/].f_5 = 0;
		Global_24504[iLocal_42 /*11*/].f_2 = 0;
		Global_24504[iLocal_42 /*11*/] = -1;
		Global_24504[iLocal_42 /*11*/].f_1 = 0;
		Global_24504[iLocal_42 /*11*/].f_10 = 0;
	}
	if ((GlobalFunc_74("TV_HLP1") || GlobalFunc_74("TV_HLP5")) || GlobalFunc_74("TV_HLP6"))
	{
		HUD::CLEAR_HELP(1);
	}
	SYSTEM::WAIT(0);
	func_66();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_61))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_61);
	}
	AUDIO::_0x19AF7ED9B9D23058();
	func_2();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_66()//Position - 0x260A
{
	func_49();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_36) == joaat("v_ilev_mm_screen2"))
		{
			OBJECT::DELETE_OBJECT(&iLocal_36);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2"));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		OBJECT::DELETE_OBJECT(&iLocal_38);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2_vl"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
	{
		OBJECT::DELETE_OBJECT(&iLocal_37);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tt_screenstatic"));
	}
}

