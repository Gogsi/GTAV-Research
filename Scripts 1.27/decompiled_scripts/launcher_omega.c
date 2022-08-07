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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
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
	struct<42> Var0;
	struct<3> Var61;
	int iVar64[2];
	
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_81 = 1;
	iLocal_82 = 65;
	iLocal_83 = 49;
	iLocal_84 = 64;
	uLocal_88 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_89 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_91 = GlobalFunc_4946(69);
	iLocal_92 = -1;
	MISC::_0x6F2135B6129620C1(1);
	GlobalFunc_6486();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	GlobalFunc_4517(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	iVar64[0] = 44;
	iVar64[1] = 45;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		if (Var0 != -1)
		{
			if (Global_96440[Var0 /*10*/].f_9 != -1)
			{
				GlobalFunc_143("Relinquishing candidate id...");
				GlobalFunc_54(&(Global_96440[Var0 /*10*/].f_9));
			}
		}
		func_247(&Var0, 1);
	}
	if (!GlobalFunc_8909(&iVar64, &Var0, Var61, 1f))
	{
		GlobalFunc_6484();
		GlobalFunc_143("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!GlobalFunc_10546(Var0))
	{
		GlobalFunc_6484();
		GlobalFunc_143("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_9528(Var0))
	{
		GlobalFunc_6484();
		GlobalFunc_143("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_223(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			GlobalFunc_143("Player out of range [TERMINATING]");
			func_247(&Var0, 1);
		}
	}
	MISC::CLEAR_AREA(Var61, Var0.f_15, 1, 0, 0, 0);
	if (Var0 == 44)
	{
		func_222();
	}
	else if (Var0 == 45)
	{
		func_221();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_183(&Var0, 1))
		{
			func_247(&Var0, 1);
		}
		GlobalFunc_9527(Var0);
		GlobalFunc_8257(&iLocal_92, &(Var0.f_9), Var61);
		if (Var0 == 44)
		{
			func_167(&Var0, Var61, "SCRAPAU", "SCRAP_1_AMB", 3, "OMEGA", &uLocal_93);
			func_166();
		}
		else if (Var0 == 45)
		{
			func_167(&Var0, Var61, "SCRAPAU", "SCRAP_2_AMB", 3, "OMEGA", &uLocal_94);
			func_164(&Var0);
		}
		if (GlobalFunc_10898(&Var0, 0))
		{
			if (!func_2(&Var0))
			{
				func_247(&Var0, 1);
			}
			if (GlobalFunc_4504(&Var0))
			{
				func_247(&Var0, 0);
			}
		}
	}
}


int func_2(int iParam0)//Position - 0x27B
{
	struct<4> Var0;
	char* sVar32;
	
	if (!GlobalFunc_Is_Mission_Retry())
	{
		while (!GlobalFunc_9038(*iParam0))
		{
			if (GlobalFunc_4507(*iParam0))
			{
				GlobalFunc_8535();
			}
			if (!func_183(iParam0, *iParam0 != 2))
			{
				GlobalFunc_143("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			SYSTEM::WAIT(0);
		}
	}
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
	}
	if (!GlobalFunc_10545(iParam0))
	{
		GlobalFunc_143("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	GlobalFunc_6675(*iParam0, &Var0);
	MemCopy(&sVar32, {GlobalFunc_44(*iParam0)}, 4);
	GlobalFunc_5225(&sVar32, Var0.f_3, 0);
	GlobalFunc_865(*iParam0);
	if (!GlobalFunc_Is_Mission_Retry())
	{
		if (iParam0->f_16 == 2)
		{
			GlobalFunc_11143(&(iParam0->f_1), 0);
		}
		else
		{
			GlobalFunc_11143(&(iParam0->f_1), 1);
		}
	}
	GlobalFunc_8394(*iParam0, Var0);
	return 1;
}


































































































































































void func_164(int iParam0)//Position - 0xAA63
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_97) > 1250)
	{
		if (GlobalFunc_115(iParam0->f_28[0]) && !ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_28[0]))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iParam0->f_28[0], 50f))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_28[0], 1) };
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				fVar7 = (Var3.x - Var0.x);
				fVar8 = (Var3.f_1 - Var0.f_1);
				if (fVar8 != 0f)
				{
					fVar6 = MISC::ATAN2(fVar7, fVar8);
				}
				else if (fVar7 < 0f)
				{
					fVar6 = -90f;
				}
				else
				{
					fVar6 = 90f;
				}
				fVar6 = (fVar6 * -1f);
				fVar6 = (fVar6 - 180f);
				if (fVar6 < 0f)
				{
					fVar6 = (fVar6 + 360f);
				}
				ENTITY::SET_ENTITY_HEADING(iParam0->f_28[0], fVar6);
			}
		}
		iLocal_97 = MISC::GET_GAME_TIMER();
	}
}


void func_166()//Position - 0xAB6B
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_95, "SET_COLOUR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_95, "SET_DISTANCE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	HUD::SET_TEXT_RENDER_ID(uLocal_96);
	fVar0 = 0.1f;
	fVar1 = 0.24f;
	fVar2 = 0.21f;
	fVar3 = 0.51f;
	if (MISC::IS_ORBIS_VERSION())
	{
		fVar0 = 0.05f;
		fVar1 = 0.12f;
		fVar2 = 0.105f;
		fVar3 = 0.255f;
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_95, fVar0, fVar1, fVar2, fVar3, 100, 100, 100, 255, 0);
	if ((MISC::GET_GAME_TIMER() - iLocal_97) > 1250)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(uLocal_98, "IDLE_BEEP", 2468.51f, 3437.39f, 49.9f, "EPSILONISM_04_SOUNDSET", 0, 0, 0);
		iLocal_97 = MISC::GET_GAME_TIMER();
	}
}

int func_167(int iParam0, struct<3> Param1, char[4] cParam4, char* sParam5, int iParam6, char* sParam7, var uParam8)//Position - 0xAC5D
{
	var uVar0;
	
	if (!*uParam8 == 3)
	{
		if (GlobalFunc_9039(2))
		{
			if (!GlobalFunc_111())
			{
				if ((GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0->f_28[0])) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Param1, 1) < 20f)
				{
					GlobalFunc_143("start conversation");
					uVar0 = 16;
					if (*uParam8 == 0)
					{
						GlobalFunc_173(&uVar0, iParam6, iParam0->f_28[0], sParam7, 0, 1);
						GlobalFunc_5157(&uVar0, cParam4, sParam5, 7, 0, 0);
						*uParam8 = 2;
					}
					else if (*uParam8 == 2)
					{
						GlobalFunc_143("conversation ended");
						*uParam8 = 3;
						return 1;
					}
				}
			}
			else if (GlobalFunc_5664(sParam5))
			{
				if (!*uParam8 == 1)
				{
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
					{
						if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Param1, 1) >= 20f)
						{
							GlobalFunc_143("pause conversation");
							GlobalFunc_619(1);
							*uParam8 = 1;
						}
					}
				}
			}
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Param1, 1) < 20f && *uParam8 == 1)
			{
				GlobalFunc_143("unpause conversation");
				GlobalFunc_619(0);
				*uParam8 = 2;
			}
		}
	}
	return 0;
}
















int func_183(int iParam0, bool bParam1)//Position - 0xB26C
{
	struct<27> Var0;
	
	if (Global_68245)
	{
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	GlobalFunc_6675(*iParam0, &Var0);
	if ((GlobalFunc_5229(*iParam0) || GlobalFunc_8396(*iParam0)) || Global_68490 == 1)
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (GlobalFunc_9037(*iParam0))
	{
		if (*iParam0 == 19)
		{
			GlobalFunc_6482(iParam0->f_28[0]);
		}
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (iParam0->f_25 == 1)
	{
		if (!func_193(iParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (iParam0->f_16 == 0)
	{
		if (!func_193(iParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*iParam0 == 16 || *iParam0 == 9) || *iParam0 == 18) || *iParam0 == 22) || *iParam0 == 32) || *iParam0 == 51)
	{
		if (!GlobalFunc_7524(iParam0, 1, 1))
		{
			if (*iParam0 == 16)
			{
				GlobalFunc_7523(iParam0);
			}
			else
			{
				GlobalFunc_7522(iParam0);
			}
			return 0;
		}
	}
	else if (*iParam0 == 24)
	{
		if (!GlobalFunc_7524(iParam0, 0, 1))
		{
			GlobalFunc_7522(iParam0);
			return 0;
		}
	}
	else if (*iParam0 == 6)
	{
		if (!GlobalFunc_7524(iParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (iParam0->f_26 == 1)
	{
		if (!GlobalFunc_7524(iParam0, 1, 0))
		{
			GlobalFunc_7522(iParam0);
			return 0;
		}
	}
	else if (iParam0->f_16 == 2 || iParam0->f_16 == 1)
	{
		if (!GlobalFunc_7524(iParam0, 0, 0))
		{
			GlobalFunc_7522(iParam0);
			return 0;
		}
	}
	if (iParam0->f_16 == 2 || iParam0->f_16 == 1)
	{
		if (GlobalFunc_115(iParam0->f_35[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(iParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*iParam0 == 10)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, iParam0->f_17[0 /*3*/], 8f))
		{
			GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!MISC::IS_BIT_SET(Var0.f_26, GlobalFunc_8315()))
		{
			GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (GlobalFunc_2358(&(iParam0->f_48)) && bParam1)
	{
		GlobalFunc_6481(iParam0->f_28[0], &(iParam0->f_48), *iParam0);
	}
	return 1;
}










int func_193(var uParam0, bool bParam1, int iParam2)//Position - 0xBE2D
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_28[iVar0]))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								GlobalFunc_7522(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							if (GlobalFunc_111())
							{
								GlobalFunc_4935();
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[iVar0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_28[iVar0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							GlobalFunc_7522(uParam0);
						}
						else
						{
							GlobalFunc_7523(uParam0);
						}
						GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (PED::IS_PED_RAGDOLL(uParam0->f_28[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								GlobalFunc_7522(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (GlobalFunc_4514(*uParam0))
					{
						if (!GlobalFunc_4507(*uParam0))
						{
							if (GlobalFunc_8640(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									GlobalFunc_7522(uParam0);
								}
								else
								{
									GlobalFunc_7523(uParam0);
								}
								GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								GlobalFunc_7522(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_195(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								GlobalFunc_7522(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!GlobalFunc_4513(*uParam0))
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								GlobalFunc_7522(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (iParam2 == 0)
							{
								GlobalFunc_7522(uParam0);
							}
							else
							{
								GlobalFunc_7523(uParam0);
							}
							GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					GlobalFunc_143("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (GlobalFunc_115(uParam0->f_41[0]))
						{
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 1, 0);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 0);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}


int func_195(int iParam0, float fParam1)//Position - 0xC11F
{
	float fVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_2994(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_196(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_196(int iParam0, float fParam1)//Position - 0xC195
{
	return func_197(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_197(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xC1AD
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_205(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_36[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_200();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_36[iVar4 /*4*/].f_1 = iParam0;
		Local_36[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_4957(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_36[iVar4 /*4*/].f_3) < iParam4);
}



int func_200()//Position - 0xC45F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if ((Local_36[iVar0 /*4*/] == 0 && Local_36[iVar0 /*4*/].f_1 == 0) && Local_36[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_205(int iParam0, int iParam1)//Position - 0xC5B5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if (Local_36[iVar0 /*4*/].f_1 == iParam0 && Local_36[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}
















void func_221()//Position - 0xCC29
{
	iLocal_97 = MISC::GET_GAME_TIMER();
}

void func_222()//Position - 0xCC37
{
	uLocal_95 = unk_0x67D02A194A2FC2BD("digiscanner");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_95))
	{
		SYSTEM::WAIT(0);
	}
	if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("digiscanner"))
	{
		HUD::REGISTER_NAMED_RENDERTARGET("digiscanner", 0);
	}
	HUD::LINK_NAMED_RENDERTARGET(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_digiscanner")));
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("digiscanner"))
	{
		uLocal_96 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("digiscanner");
	}
	uLocal_98 = AUDIO::GET_SOUND_ID();
	iLocal_97 = MISC::GET_GAME_TIMER();
}

int func_223(int iParam0)//Position - 0xCC9F
{
	switch (*iParam0)
	{
		case 44:
			if (!func_233(iParam0))
			{
				return 0;
			}
			break;
		
		case 45:
			if (!func_224(iParam0))
			{
				return 0;
			}
			break;
	}
	GlobalFunc_143("Created initial scene");
	return 1;
}

int func_224(var uParam0)//Position - 0xCCE6
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = joaat("dune2");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 2337.376f, 2585.722f, 45.11065f };
			uParam0->f_17[1 /*3*/] = { 2302.158f, 2586.505f, 47.99957f };
			uParam0->f_24 = 26f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "SCRAP_2_RCM", 24);
			uParam0->f_25 = 1;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmrc_omega_2", "omega_idle_looking_around", 0);
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!GlobalFunc_7967(&(uParam0->f_28[0]), 69, 2319.443f, 2583.588f, 46.7663f, 220f, "OMEGA LAUNCHER RC", 1))
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[1], 2331.08f, 2573.53f, 46.13f, 358.61f);
			}
			if (bVar4)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(2314.546f, 2576.33f, 44.7f, 2326.446f, 2579.608f, 47.6645f, 0, 1);
			MISC::CLEAR_AREA_OF_VEHICLES(2321.252f, 2578.851f, 46.7f, 10f, 0, 0, 0, 0, 0);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}









int func_233(var uParam0)//Position - 0xD150
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_digiscanner"));
	iVar0[2] = joaat("prop_cs_walkie_talkie");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 2463.225f, 3444.113f, 48.59399f };
			uParam0->f_17[1 /*3*/] = { 2475.22f, 3428.098f, 50.99095f };
			uParam0->f_24 = 17f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "SCRAP_1_RCM", 24);
			uParam0->f_25 = 1;
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmrc_omega_1", "omega_idle_geiger_counter", 0);
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar5 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!GlobalFunc_7967(&(uParam0->f_28[0]), 69, 2468.51f, 3437.39f, 49.9f, 180f, "OMEGA LAUNCHER RC", 1))
				{
					bVar5 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				uParam0->f_41[0] = OBJECT::CREATE_OBJECT(iVar0[1], 2468.51f, 3437.39f, 55f, 1, 1, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				uParam0->f_41[1] = OBJECT::CREATE_OBJECT(iVar0[2], 2468.51f, 3437.39f, 57f, 1, 1, 0);
			}
			if ((GlobalFunc_115(uParam0->f_28[0]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0])) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 18905), 0.09f, 0.072f, -0.006f, 298f, 194f, 178f, 0, 0, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 64729), 0.1f, 0.08f, 0f, 162.72f, 5.4f, 1.8f, 0, 0, 0, 0, 2, 1);
			}
			else
			{
				bVar5 = false;
			}
			if (bVar5)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar4]);
				iVar4++;
			}
			return 1;
			break;
	}
	return 0;
}














void func_247(int iParam0, bool bParam1)//Position - 0xD8EC
{
	char* sVar0;
	
	if (*iParam0 == 45)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(2314.546f, 2576.33f, 44.7f, 2326.446f, 2579.608f, 47.6645f, 1, 1);
	}
	if (bParam1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		if (*iParam0 == 44 && ENTITY::DOES_ENTITY_EXIST(iParam0->f_41[1]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_41[1]));
		}
		GlobalFunc_9165(iParam0, 0, 0, 0);
	}
	GlobalFunc_6487(&(iParam0->f_48));
	if (iLocal_92 != -1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Ending off-mission cutscene request");
		GlobalFunc_6473(&iLocal_92);
	}
	switch (*iParam0)
	{
		case 44:
			sVar0 = "SCRAP_1_AMB";
			break;
		
		case 45:
			sVar0 = "SCRAP_2_AMB";
			break;
	}
	GlobalFunc_7527(sVar0);
	if (bParam1)
	{
		GlobalFunc_9527(*iParam0);
	}
	GlobalFunc_6484();
	GlobalFunc_143("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}





















