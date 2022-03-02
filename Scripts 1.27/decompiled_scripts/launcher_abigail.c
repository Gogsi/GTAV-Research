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
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	var uLocal_97 = 0;
	char[] cLocal_98[8] = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
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
	struct<2> Var64;
	int iVar231[2];
	
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
	Local_91 = { -1593.813f, 5221.235f, 1.94482f };
	Local_94 = { -1603.986f, 5243.624f, 4.940323f };
	uLocal_97 = GlobalFunc_4946(16);
	cLocal_98 = "rcmabigail";
	iLocal_99 = -1;
	MISC::_0x6F2135B6129620C1(1);
	GlobalFunc_6486();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	Var64.f_1 = 16;
	GlobalFunc_4517(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
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
		func_251(&Var0, 1);
	}
	iVar231[0] = 0;
	iVar231[1] = 1;
	if (!GlobalFunc_8909(&iVar231, &Var0, Var61, 1f))
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
	while (!func_228(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			GlobalFunc_143("Player out of range [TERMINATING]");
			func_251(&Var0, 1);
		}
	}
	MISC::CLEAR_AREA(Var61, Var0.f_15, 1, 0, 0, 0);
	switch (Var0)
	{
		case 0:
			Var64 = 0;
			break;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_190(&Var0, 1))
		{
			func_251(&Var0, 1);
		}
		GlobalFunc_9527(Var0);
		GlobalFunc_8257(&iLocal_99, &(Var0.f_9), Var61);
		switch (Var0)
		{
			case 0:
				func_173(&Var64, &(Var0.f_28[0]), "SONAR_PRE");
				break;
			
			case 1:
				GlobalFunc_7520(&Var0, Var61, "SONARAU", "SONAR_CALL", 3, "ABIGAIL", 10000, 1101004800);
				break;
		}
		if (GlobalFunc_10897(&Var0, 0))
		{
			if (GlobalFunc_4508(Var0))
			{
				GlobalFunc_7518(Var0, &uLocal_100);
			}
			if (!func_2(&Var0))
			{
				func_251(&Var0, 1);
			}
			if (GlobalFunc_4504(&Var0))
			{
				func_251(&Var0, 0);
			}
		}
	}
}


int func_2(int iParam0)//Position - 0x2B8
{
	struct<4> Var0;
	char* sVar32;
	
	if (!GlobalFunc_199())
	{
		while (!GlobalFunc_9038(*iParam0))
		{
			if (GlobalFunc_4507(*iParam0))
			{
				GlobalFunc_8535();
			}
			if (!func_190(iParam0, *iParam0 != 2))
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
	if (!GlobalFunc_199())
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











































































































































































void func_173(int iParam0, var uParam1, char* sParam2)//Position - 0xB1E4
{
	if (GlobalFunc_115(*uParam1) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		switch (*iParam0)
		{
			case 0:
				iParam0->f_166 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
				GlobalFunc_1286(&(iParam0->f_1), 3, *uParam1, "ABIGAIL", 0, 1);
				TASK::TASK_PLAY_ANIM(*uParam1, cLocal_98, "base", 1000f, -8f, -1, 1, 0, 0, 0, 0);
				*iParam0 = 1;
				break;
			
			case 1:
				if (MISC::GET_GAME_TIMER() > iParam0->f_166)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_91, Local_94, 8f, 0, 1, 0))
					{
						TASK::TASK_PLAY_ANIM(*uParam1, cLocal_98, "intro", 8f, -8f, -1, 2, 0, 0, 0, 0);
						*iParam0 = 3;
					}
					else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), *uParam1, 1) < 15f)
					{
						*iParam0 = 4;
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam1, cLocal_98, "outro", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam1, cLocal_98, "outro") > 0.99f)
				{
					TASK::TASK_PLAY_ANIM(*uParam1, cLocal_98, "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
				}
				break;
			
			case 3:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam1, cLocal_98, "intro", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam1, cLocal_98, "intro") > 0.99f)
				{
					*iParam0 = 4;
				}
				break;
			
			case 4:
				if (GlobalFunc_10618(&(iParam0->f_1), "SONARAU", sParam2, 4, 0, 0, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_91, Local_94, 8f, 0, 1, 0))
					{
						TASK::TASK_PLAY_ANIM(*uParam1, cLocal_98, "loop_talk", 8f, -8f, -1, 1, 0, 0, 0, 0);
					}
					*iParam0 = 5;
				}
				break;
			
			case 5:
				if (!GlobalFunc_111())
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam1, cLocal_98, "loop_talk", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam1, cLocal_98, "loop_talk") > 0.99f)
						{
							iParam0->f_166 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000));
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_91, Local_94, 8f, 0, 1, 0))
							{
								TASK::TASK_PLAY_ANIM(*uParam1, cLocal_98, "outro", 8f, -8f, -1, 2, 0, 0, 0, 0);
								*iParam0 = 1;
							}
							else
							{
								TASK::TASK_PLAY_ANIM(*uParam1, cLocal_98, "loop_look", 8f, -8f, -1, 1, 0, 0, 0, 0);
								*iParam0 = 2;
							}
						}
					}
					else
					{
						iParam0->f_166 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000));
						*iParam0 = 1;
					}
				}
				break;
			
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam1, cLocal_98, "loop_look", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam1, cLocal_98, "loop_look") > 0.99f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_91, Local_94, 8f, 0, 1, 0))
					{
						if (MISC::GET_GAME_TIMER() > iParam0->f_166)
						{
							*iParam0 = 4;
						}
					}
					else
					{
						TASK::TASK_PLAY_ANIM(*uParam1, cLocal_98, "outro", 8f, -8f, -1, 2, 0, 0, 0, 0);
						*iParam0 = 1;
					}
				}
				break;
			}
	}
}

















int func_190(int iParam0, bool bParam1)//Position - 0xBDE6
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
		if (!func_200(iParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (iParam0->f_16 == 0)
	{
		if (!func_200(iParam0, 0, 0))
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










int func_200(var uParam0, bool bParam1, int iParam2)//Position - 0xC9A1
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
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
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
						if (func_202(uParam0->f_28[iVar0], 1126825984))
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


int func_202(int iParam0, float fParam1)//Position - 0xCC91
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
				if (func_203(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_203(int iParam0, float fParam1)//Position - 0xCD07
{
	return func_204(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_204(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCD1F
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_212(iParam0, iParam1);
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
		iVar4 = func_207();
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



int func_207()//Position - 0xCFD1
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





int func_212(int iParam0, int iParam1)//Position - 0xD127
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
















int func_228(int iParam0)//Position - 0xD79B
{
	switch (*iParam0)
	{
		case 0:
			if (!func_237(iParam0))
			{
				return 0;
			}
			break;
		
		case 1:
			if (!func_229(iParam0))
			{
				return 0;
			}
			break;
	}
	GlobalFunc_143("Created initial scene");
	return 1;
}

int func_229(var uParam0)//Position - 0xD7E2
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_97;
	iVar0[1] = joaat("asea");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -1588.664f, 5210.44f, 2.488135f };
			uParam0->f_17[1 /*3*/] = { -1596.975f, 5228.684f, 5.966843f };
			uParam0->f_24 = 8f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "ABIGAIL_MCS_2", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			STREAMING::REQUEST_ANIM_DICT(cLocal_98);
			GlobalFunc_2800(&(uParam0->f_48), cLocal_98, "base", 0);
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(cLocal_98))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!GlobalFunc_7967(&(uParam0->f_28[0]), 16, -1596.09f, 5218.102f, 3.045f, 125.5f, "RC ABIGAIL 2", 1))
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[1], -1584.013f, 5158.539f, 18.6057f, 210.5309f);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(uParam0->f_35[0], 1);
			}
			if (bVar4)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
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








int func_237(var uParam0)//Position - 0xDC07
{
	int iVar0;
	bool bVar1;
	
	iVar0 = uLocal_97;
	bVar1 = false;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -1598.57f, 5231.605f, 1.969029f };
			uParam0->f_17[1 /*3*/] = { -1610.413f, 5257.687f, 5.965584f };
			uParam0->f_24 = 8f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "ABIGAIL_MCS_1_CONCAT", 24);
			STREAMING::REQUEST_MODEL(iVar0);
			STREAMING::REQUEST_ANIM_DICT(cLocal_98);
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(cLocal_98))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar1 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!GlobalFunc_7967(&(uParam0->f_28[0]), 16, -1607.918f, 5243.162f, 3.045f, 125.5f, "RC ABIGAIL 1", 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			return 1;
			break;
	}
	return 0;
}














void func_251(int iParam0, bool bParam1)//Position - 0xE22C
{
	char* sVar0;
	
	if (bParam1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		GlobalFunc_9165(iParam0, 0, 0, 0);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_100))
	{
		HUD::REMOVE_BLIP(&uLocal_100);
	}
	if (iLocal_99 != -1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Ending off-mission cutscene request");
		GlobalFunc_6473(&iLocal_99);
	}
	switch (*iParam0)
	{
		case 0:
			sVar0 = "SONAR_PRE";
			break;
		
		case 1:
			sVar0 = "SONAR_CALL";
			break;
	}
	GlobalFunc_7525(sVar0);
	if (bParam1)
	{
		GlobalFunc_9527(*iParam0);
	}
	GlobalFunc_6484();
	GlobalFunc_143("SCRIPT TERMINATING: ");
	SCRIPT::TERMINATE_THIS_THREAD();
}






















