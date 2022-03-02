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
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
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
	int iVar64[4];
	struct<3> Var69;
	
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
	iLocal_91 = GlobalFunc_4946(52);
	iLocal_92 = joaat("a_c_retriever");
	iLocal_93 = -1;
	uLocal_95 = AUDIO::GET_SOUND_ID();
	MISC::_0x6F2135B6129620C1(1);
	GlobalFunc_6486();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	GlobalFunc_4517(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	iVar64[0] = 17;
	iVar64[1] = 18;
	iVar64[2] = 19;
	iVar64[3] = 20;
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
		func_252(&Var0, 1);
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
			func_252(&Var0, 1);
		}
	}
	if (Var0 == 17)
	{
		uLocal_96 = PED::ADD_SCENARIO_BLOCKING_AREA(Var61 - Vector(40f, 40f, 40f), Var61 + Vector(40f, 40f, 40f), 0, 1, 1, 1);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_SALTON_DIRT_BIKE", 0);
	}
	else if (Var0 == 18)
	{
		uLocal_96 = PED::ADD_SCENARIO_BLOCKING_AREA(-1040f, -2870f, 0f, -910f, -2740f, 50f, 0, 0, 1, 1);
	}
	MISC::CLEAR_AREA(Var61, Var0.f_15, 1, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_185(&Var0, 1))
		{
			func_252(&Var0, 1);
		}
		GlobalFunc_9527(Var0);
		GlobalFunc_8257(&iLocal_93, &(Var0.f_9), Var61);
		if (Var0 == 18)
		{
			func_176(&Var0);
			GlobalFunc_7526(&Var0, Var61, "EXT2AU", "EXT2_AMB", 3, "DOM", 5000, 1101004800);
		}
		else if (Var0 == 19)
		{
			func_176(&Var0);
			if (AUDIO::HAS_SOUND_FINISHED(uLocal_95))
			{
				GlobalFunc_7526(&Var0, Var61, "EXT3AUD", "EXT_AMB", 3, "DOM", 8000, 1101004800);
			}
			if ((((((!GlobalFunc_111() && GlobalFunc_115(Var0.f_28[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Var0.f_28[0])) && AUDIO::HAS_SOUND_FINISHED(uLocal_95)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXTREME_04_DOM_A", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXTREME_04_DOM_B", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXTREME_04_DOM_C", 0))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_95, "DOM_BREATHING", Var0.f_28[0], "EXTREME_03_SOUNDSET", 0, 0);
			}
			if ((iLocal_94 == 0 && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var61, Var0.f_15, Var0.f_15, Var0.f_15, 0, 0, 0))
			{
				Var69 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (Var69.f_2 < 100f)
				{
					iLocal_94 = 1;
					GlobalFunc_159("TOPMAZE_HELP", -1);
					GlobalFunc_143("Player below mission start location so displaying help text TOPMAZE_HELP");
				}
			}
		}
		if (GlobalFunc_10897(&Var0, 0) || func_151(&Var0))
		{
			if (GlobalFunc_4508(Var0))
			{
				GlobalFunc_7518(Var0, &uLocal_97);
			}
			if (!func_2(&Var0))
			{
				func_252(&Var0, 1);
			}
			else if (Var0 == 19)
			{
				AUDIO::STOP_SOUND(uLocal_95);
			}
			if (GlobalFunc_4504(&Var0))
			{
				func_252(&Var0, 0);
			}
		}
	}
}


int func_2(int iParam0)//Position - 0x402
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
			if (!func_185(iParam0, *iParam0 != 2))
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
	if (!GlobalFunc_10547(iParam0))
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





















































































































































int func_151(var uParam0)//Position - 0x9F4A
{
	if (*uParam0 == 18)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -954.5357f, -2760.553f, 11.91636f, -947.6847f, -2749.719f, 15.63161f, 26f, 0, 1, 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_143("Special launching Extreme 2");
				return 1;
			}
			else if ((!GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), -828834893) && GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 3f, 1, 1056964608, 0, 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		}
	}
	return 0;
}

























void func_176(int iParam0)//Position - 0xB421
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (GlobalFunc_115(iParam0->f_28[0]))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Dom", iParam0->f_28[0], 0);
		}
	}
}









int func_185(var uParam0, bool bParam1)//Position - 0xB785
{
	struct<27> Var0;
	
	if (Global_68245)
	{
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	GlobalFunc_6675(*uParam0, &Var0);
	if ((GlobalFunc_5229(*uParam0) || GlobalFunc_8396(*uParam0)) || Global_68490 == 1)
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (GlobalFunc_9037(*uParam0))
	{
		if (*uParam0 == 19)
		{
			GlobalFunc_6482(uParam0->f_28[0]);
		}
		GlobalFunc_143("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_195(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_195(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!GlobalFunc_7524(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				GlobalFunc_7523(uParam0);
			}
			else
			{
				GlobalFunc_7522(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!GlobalFunc_7524(uParam0, 0, 1))
		{
			GlobalFunc_7522(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!GlobalFunc_7524(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!GlobalFunc_7524(uParam0, 1, 0))
		{
			GlobalFunc_7522(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!GlobalFunc_7524(uParam0, 0, 0))
		{
			GlobalFunc_7522(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (GlobalFunc_115(uParam0->f_35[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, uParam0->f_17[0 /*3*/], 8f))
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
	if (GlobalFunc_2358(&(uParam0->f_48)) && bParam1)
	{
		GlobalFunc_6481(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}










int func_195(var uParam0, bool bParam1, int iParam2)//Position - 0xC347
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
						if (func_197(uParam0->f_28[iVar0], 1126825984))
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


int func_197(int iParam0, float fParam1)//Position - 0xC637
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
				if (func_198(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_198(int iParam0, float fParam1)//Position - 0xC6AD
{
	return func_199(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_199(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xC6C5
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_207(iParam0, iParam1);
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
		iVar4 = func_202();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_36[iVar4 /*4*/].f_1 = iParam0;
		Local_36[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_200(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_36[iVar4 /*4*/].f_3) < iParam4);
}

int func_200(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)//Position - 0xC786
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!GlobalFunc_115(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_201(iParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar7))
	{
		GlobalFunc_115(iVar7);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_77)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		GlobalFunc_115(iVar7);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam4, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(iParam4, 0))
			{
				if (bLocal_77)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_201(int iParam0, int iParam1)//Position - 0xC8B2
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 57005/*func_245*/, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
}

int func_202()//Position - 0xC977
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





int func_207(int iParam0, int iParam1)//Position - 0xCACD
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
















int func_223(int iParam0)//Position - 0xD141
{
	switch (*iParam0)
	{
		case 17:
			if (!func_238(iParam0))
			{
				return 0;
			}
			break;
		
		case 18:
			if (!func_235(iParam0))
			{
				return 0;
			}
			break;
		
		case 19:
			if (!func_231(iParam0))
			{
				return 0;
			}
			break;
		
		case 20:
			if (!func_224(iParam0))
			{
				return 0;
			}
			break;
	}
	GlobalFunc_143("Created initial scene");
	return 1;
}

int func_224(var uParam0)//Position - 0xD1B6
{
	int iVar0[1];
	int iVar2;
	
	iVar0[0] = iLocal_92;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 12f;
			StringCopy(&(uParam0->f_9), "ES_4_RCM_P1", 24);
			uParam0->f_27 = 0;
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "rcmextreme4", "idle_a", "idle_c");
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
			func_225(&(uParam0->f_28[0]), 1732.27f, 96.36f, 170.29f, -98.56f);
			PED::SET_PED_CAN_LEG_IK(uParam0->f_28[0], 1);
			PED::SET_PED_LEG_IK_MODE(uParam0->f_28[0], 2);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_225(var uParam0, struct<3> Param1, float fParam4)//Position - 0xD2BA
{
	func_226(uParam0, iLocal_92, Param1, fParam4, 26);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, 0);
	PED::SET_PED_NAME_DEBUG(*uParam0, "EXTREME LAUNCHER RC");
}

void func_226(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6)//Position - 0xD2EC
{
	GlobalFunc_881(uParam0);
	*uParam0 = PED::CREATE_PED(iParam6, iParam1, Param2, uParam5, 0, 0);
}





int func_231(var uParam0)//Position - 0xD3E3
{
	int iVar0[1];
	int iVar2;
	bool bVar3;
	
	iVar0[0] = iLocal_91;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -63.19179f, -808.9167f, 320.2477f };
			uParam0->f_17[1 /*3*/] = { -68.8908f, -813.6761f, 324.29f };
			uParam0->f_24 = 10f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "ES_3_RCM", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "rcmextreme3", "idle_calm", "fidget_02");
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
			bVar3 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 52, -63.8f, -809.5f, 321.8f, -62f, "EXTREME LAUNCHER RC", 1))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 118, 0);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, 1);
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("gadget_parachute"), 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 1, 0, 0);
				}
				else
				{
					bVar3 = false;
				}
			}
			if (bVar3)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}




int func_235(var uParam0)//Position - 0xD6A5
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	
	iVar0[0] = joaat("blazer");
	iVar0[1] = joaat("flatbed");
	iVar0[2] = iLocal_91;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 8f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "es_2_rcm_concat", 24);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "rcmextreme2", "sitting_idle", "loop_punching");
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
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 52, -954.19f, -2760.05f, 14.64f, -31.79f, "EXTREME LAUNCHER RC", 1))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[0], -954.2f, -2760.05f, 14.04f, 1, 0, 1);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 118, 0);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, 1);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 1);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_28[0], 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 1, 0, 0);
					TASK::TASK_PLAY_ANIM(uParam0->f_28[0], uParam0->f_48, uParam0->f_48.f_1, 8f, -8f, -1, 33281, 0, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 48, 2);
					}
				}
				else
				{
					bVar5 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[0], -950.8f, -2751.98f, 13.21f, 199.05f);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 2);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_35[0], 0f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				GlobalFunc_8017(&(uParam0->f_35[1]), iVar0[0], -950.192f, -2755.96f, 13.3639f, -178.182f);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[1], 2);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 1);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_35[1], 0f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[2]))
			{
				GlobalFunc_8017(&(uParam0->f_35[2]), iVar0[1], -957.23f, -2764.89f, 14.04f, 147.61f);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[2], 2);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[2], 2);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_35[2], 0f);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_35[2], 0);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(uParam0->f_35[2], 0, 0);
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



int func_238(var uParam0)//Position - 0xDA80
{
	int iVar0[1];
	int iVar2;
	
	iVar0[0] = iLocal_92;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			StringCopy(&(uParam0->f_9), "ES_1_RCM_P1", 24);
			uParam0->f_15 = 15f;
			uParam0->f_27 = 0;
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "rcm_extreme1", "idle_a", "idle_c");
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
			func_225(&(uParam0->f_28[0]), -188.22f, 1296.1f, 302.86f, 43.7f);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}














void func_252(int iParam0, bool bParam1)//Position - 0xE086
{
	if (*iParam0 == 18)
	{
		if (GlobalFunc_115(iParam0->f_35[0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0->f_35[0], 1);
		}
		if (GlobalFunc_115(iParam0->f_35[1]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0->f_35[1], 1);
		}
	}
	if (bParam1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		GlobalFunc_9165(iParam0, 0, 0, 0);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_97))
	{
		HUD::REMOVE_BLIP(&uLocal_97);
	}
	GlobalFunc_6487(&(iParam0->f_48));
	if (*iParam0 == 17)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_96, 0);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_SALTON_DIRT_BIKE", 1);
	}
	else if (*iParam0 == 18)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_96, 0);
	}
	else if (*iParam0 == 19)
	{
		AUDIO::STOP_SOUND(uLocal_95);
		STREAMING::REMOVE_ANIM_DICT("rcmextreme3");
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	}
	if (iLocal_93 != -1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Ending off-mission cutscene request");
		GlobalFunc_6473(&iLocal_93);
	}
	if (bParam1)
	{
	}
	GlobalFunc_6484();
	GlobalFunc_143(" SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

















