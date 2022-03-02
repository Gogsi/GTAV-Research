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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<4> Local_48[10];
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
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
	var uVar64;
	struct<2> Var116;
	int iVar126[7];
	bool bVar134;
	
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
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_91 = GlobalFunc_4946(64);
	uLocal_92 = GlobalFunc_4946(63);
	iLocal_93 = joaat("u_m_m_aldinapoli");
	iLocal_94 = joaat("premier");
	iLocal_107 = -1;
	MISC::_0x6F2135B6129620C1(1);
	GlobalFunc_6486();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	uVar64 = 15;
	GlobalFunc_4517(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	Var116.f_1 = -1;
	iVar126[0] = 37;
	iVar126[1] = 38;
	iVar126[2] = 39;
	iVar126[3] = 40;
	iVar126[4] = 41;
	iVar126[5] = 42;
	iVar126[6] = 43;
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
		func_277(&Var0, &Var116, 1);
	}
	if (!GlobalFunc_8909(&iVar126, &Var0, Var61, 1f))
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
	while (!func_230(&Var0, &uVar64))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			GlobalFunc_143("Player out of range [TERMINATING]");
			func_277(&Var0, &Var116, 1);
		}
	}
	if (Var0 == 43)
	{
		Var116 = 0;
	}
	MISC::CLEAR_AREA(Var61, Var0.f_15, 1, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_196(&Var0, 1))
		{
			func_277(&Var0, &Var116, 1);
		}
		GlobalFunc_9527(Var0);
		GlobalFunc_8257(&iLocal_107, &(Var0.f_9), Var61);
		if (Var0 == 42)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(func_187(), 4, 0, 0, func_186());
				GlobalFunc_143("Nigel 2 : set Di Napoli's cutscene trousers variation in launcher");
			}
		}
		if (GlobalFunc_2358(&uLocal_95) && Var0 == 37)
		{
			GlobalFunc_6481(Var0.f_28[1], &uLocal_95, Var0);
		}
		if (Var0 == 37)
		{
			func_178(&Var0, Var61, "NIG1AAU", "NIG1A_AMB", 0, "NIGEL", 1, "MRSTHORNHILL", &uLocal_109);
		}
		else if (Var0 == 42)
		{
			GlobalFunc_7528(&Var0, Var61, "NIG2AUD", "NIG2_AMB", 4, "NIGEL", 5000, 14f);
		}
		else if (Var0 == 43)
		{
			func_171(&Var116, &(Var0.f_35[0]), &(Var0.f_28[1]));
			GlobalFunc_7528(&Var0, -44.75f, -1289.86f, 29.16f, "NIGE3AU", "NIGEL3_AMB", 4, "NIGEL", 8000, 1101004800);
		}
		bVar134 = false;
		if (Var0 == 41)
		{
			if (func_169(&Var0, &uVar64) || func_168(&Var0))
			{
				bVar134 = true;
			}
		}
		else if (GlobalFunc_10898(&Var0, 0))
		{
			bVar134 = true;
		}
		if (bVar134)
		{
			if (Var0 == 42)
			{
				GlobalFunc_702(1, 0, 1);
			}
			if (GlobalFunc_4508(Var0))
			{
				GlobalFunc_7518(Var0, &uLocal_108);
			}
			if (!func_2(&Var0))
			{
				func_277(&Var0, &Var116, 1);
			}
			if (GlobalFunc_4504(&Var0))
			{
				func_277(&Var0, &Var116, 0);
			}
		}
	}
}


int func_2(int iParam0)//Position - 0x399
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
			if (!func_196(iParam0, *iParam0 != 2))
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
	if (!func_97(iParam0))
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































































































int func_97(var uParam0)//Position - 0x8751
{
	var uVar0;
	
	if (GlobalFunc_6480(&(uParam0->f_1)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_9)))
		{
			func_117(1);
			GlobalFunc_4923(uParam0, 1, GlobalFunc_4506(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (GlobalFunc_4505(*uParam0))
			{
				while (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_8535();
					SYSTEM::WAIT(0);
				}
			}
		}
		GlobalFunc_9525(*uParam0);
		uVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(uParam0->f_1), uParam0, 61, 17000);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			GlobalFunc_143("Initial cutscene loaded and passing to RC mission.");
			CUTSCENE::_0x8D9DF6ECA8768583(uVar0);
		}
		else
		{
			GlobalFunc_143("Initial cutscene wasn't loaded in time to pass to RC mission.");
			CUTSCENE::REMOVE_CUTSCENE();
		}
		return 1;
	}
	return 0;
}




















void func_117(bool bParam0)//Position - 0x8E29
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!PLAYER::IS_PLAYER_DEAD(uVar0))
	{
		if (bParam0)
		{
		}
		PLAYER::SET_PLAYER_CONTROL(uVar0, bParam0, 16);
		PLAYER::SET_PLAYER_CONTROL(uVar0, bParam0, 32);
	}
	GlobalFunc_8380(1, 1, 0, 0);
}



















































int func_168(int iParam0)//Position - 0xB0DA
{
	int iVar0;
	
	iVar0 = 0;
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (iParam0->f_28 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_28[iVar0]))
			{
				if (GlobalFunc_115(iParam0->f_28[iVar0]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 1) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0->f_28[iVar0], 1), 7.5f, 1))
					{
						if (GlobalFunc_9039(2))
						{
							GlobalFunc_9526(iParam0->f_27, *iParam0);
							return 1;
						}
						else
						{
							GlobalFunc_143("Player damaged the N1D peds but it's not safe to trigger the mission!");
						}
					}
				}
				else if (GlobalFunc_9039(2))
				{
					GlobalFunc_9526(iParam0->f_27, *iParam0);
					return 1;
				}
				else
				{
					GlobalFunc_143("Player killed a N1D ped but it's not safe to trigger the mission!");
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_169(int iParam0, var uParam1)//Position - 0xB19E
{
	if (GlobalFunc_496(uParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
	{
		if (GlobalFunc_9039(2))
		{
			if (GlobalFunc_7519(iParam0->f_27))
			{
				GlobalFunc_9526(iParam0->f_27, *iParam0);
				return 1;
			}
		}
	}
	return 0;
}


void func_171(int iParam0, var uParam1, var uParam2)//Position - 0xB297
{
	if (GlobalFunc_115(*uParam1))
	{
		switch (*iParam0)
		{
			case 0:
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_TRUNK_THUMPS", 0))
				{
					iParam0->f_1 = AUDIO::GET_SOUND_ID();
					iParam0->f_2 = MISC::GET_GAME_TIMER();
					iParam0->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 12000);
					*iParam0 = 1;
				}
				break;
			
			case 1:
				if ((MISC::GET_GAME_TIMER() - iParam0->f_2) > iParam0->f_3)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(iParam0->f_1, "TRUNK_THUMPS", ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, 0f, -2.2f, 0.5f), 0, 0, 0, 0);
					AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(*uParam2, "NIGE3_CXAA", "DINAPOLI", GlobalFunc_566(0), 0);
					iParam0->f_4 = MISC::GET_RANDOM_INT_IN_RANGE(3, 7);
					iParam0->f_5 = 0;
					iParam0->f_6 = MISC::GET_GAME_TIMER();
					iParam0->f_7 = MISC::GET_RANDOM_INT_IN_RANGE(100, 250);
					*iParam0 = 2;
				}
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - iParam0->f_6) > iParam0->f_7)
				{
					iParam0->f_8 = MISC::GET_RANDOM_INT_IN_RANGE(-200, -120);
					iParam0->f_9 = (0.5f * SYSTEM::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(-2, 3)));
					ENTITY::APPLY_FORCE_TO_ENTITY(*uParam1, 1, 0f, 0f, IntToFloat(iParam0->f_8), iParam0->f_9, -1.5f, 0f, 0, 1, 1, 0, 1, 1);
					iParam0->f_5++;
					if (iParam0->f_5 < iParam0->f_4)
					{
						iParam0->f_6 = MISC::GET_GAME_TIMER();
						iParam0->f_7 = MISC::GET_RANDOM_INT_IN_RANGE(150, 280);
					}
					else
					{
						iParam0->f_2 = MISC::GET_GAME_TIMER();
						iParam0->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 12000);
						*iParam0 = 1;
					}
				}
				break;
			}
	}
}







int func_178(int iParam0, struct<3> Param1, char[4] cParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, var uParam10)//Position - 0xB7E3
{
	var uVar0;
	
	if (!*uParam10 == 3)
	{
		if (GlobalFunc_9039(2))
		{
			if (!GlobalFunc_111())
			{
				if (((GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0->f_28[0])) && GlobalFunc_115(iParam0->f_28[1])) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Param1, 1) < 20f)
				{
					GlobalFunc_143("start conversation");
					uVar0 = 16;
					if (*uParam10 == 0)
					{
						GlobalFunc_173(&uVar0, iParam6, iParam0->f_28[0], sParam7, 0, 1);
						GlobalFunc_173(&uVar0, iParam8, iParam0->f_28[1], sParam9, 0, 1);
						GlobalFunc_5157(&uVar0, cParam4, sParam5, 7, 0, 0);
						*uParam10 = 2;
					}
					else if (*uParam10 == 2)
					{
						GlobalFunc_143("conversation ended");
						*uParam10 = 3;
						return 1;
					}
				}
			}
			else if (((GlobalFunc_5664(sParam5) && !*uParam10 == 1) && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Param1, 1) >= 20f)
			{
				GlobalFunc_143("pause conversation");
				GlobalFunc_619(1);
				*uParam10 = 1;
			}
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Param1, 1) < 20f && *uParam10 == 1)
			{
				GlobalFunc_143("unpause conversation");
				GlobalFunc_619(0);
				*uParam10 = 2;
			}
		}
	}
	return 0;
}








int func_186()//Position - 0xBD31
{
	return joaat("u_m_m_aldinapoli");
}

char* func_187()//Position - 0xBD3E
{
	return "Al_DiNapoli";
}









int func_196(var uParam0, bool bParam1)//Position - 0xC083
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
		if (!func_202(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_202(uParam0, 0, 0))
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






int func_202(var uParam0, bool bParam1, int iParam2)//Position - 0xC892
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
						if (func_204(uParam0->f_28[iVar0], 1126825984))
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


int func_204(int iParam0, float fParam1)//Position - 0xCB82
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
				if (func_205(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_205(int iParam0, float fParam1)//Position - 0xCBF8
{
	return func_206(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_206(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCC10
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_214(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_48[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_209();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_48[iVar4 /*4*/].f_1 = iParam0;
		Local_48[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_6422(&(Local_48[iVar4 /*4*/]), Var1, iParam1, &(Local_48[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_48[iVar4 /*4*/].f_3) < iParam4);
}



int func_209()//Position - 0xCEC2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		if ((Local_48[iVar0 /*4*/] == 0 && Local_48[iVar0 /*4*/].f_1 == 0) && Local_48[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_214(int iParam0, int iParam1)//Position - 0xD018
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		if (Local_48[iVar0 /*4*/].f_1 == iParam0 && Local_48[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}
















int func_230(int iParam0, var uParam1)//Position - 0xD68C
{
	switch (*iParam0)
	{
		case 37:
			if (!func_263(iParam0))
			{
				return 0;
			}
			break;
		
		case 38:
			if (!func_255(iParam0))
			{
				return 0;
			}
			break;
		
		case 39:
			if (!func_251(iParam0))
			{
				return 0;
			}
			break;
		
		case 40:
			if (!func_250(iParam0))
			{
				return 0;
			}
			break;
		
		case 41:
			if (!func_246(iParam0, uParam1))
			{
				return 0;
			}
			break;
		
		case 42:
			if (!func_241(iParam0))
			{
				return 0;
			}
			break;
		
		case 43:
			if (!func_231(iParam0))
			{
				return 0;
			}
			break;
	}
	GlobalFunc_143("Created initial scene");
	return 1;
}

int func_231(var uParam0)//Position - 0xD748
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = iLocal_93;
	iVar0[2] = iLocal_94;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "NMT_3_RCM", 24);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "rcmnigel3", "base", 0);
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
				if (!GlobalFunc_7967(&(uParam0->f_28[0]), 64, -44.6f, -1289.86f, 29.16f, 22.9f, "RC NIGEL", 1))
				{
					bVar5 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8256(&(uParam0->f_35[0]), iLocal_94, -39.9688f, -1285.962f, 28.3505f, 181.02f);
				if (GlobalFunc_115(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 65, 0);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(uParam0->f_35[0], 5, 0);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "28BNT310");
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 10);
					VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_35[0], 0);
				}
			}
			if (!func_232(&(uParam0->f_28[1]), &(uParam0->f_35[0])))
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

int func_232(var uParam0, var uParam1)//Position - 0xD92F
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && STREAMING::HAS_MODEL_LOADED(iLocal_93))
	{
		*uParam0 = PED::CREATE_PED(26, joaat("u_m_m_aldinapoli"), -59.7094f, -1330.129f, 32.1963f, 0f, 1, 1);
		PED::SET_PED_NAME_DEBUG(*uParam0, "NI3_LNCH_CELEB");
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, -0.2f, -1.8f, -1f) };
		fVar6 = (-90f + ENTITY::GET_ENTITY_HEADING(*uParam1));
		Var3 = { 0f, 0f, fVar6 };
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, Var0, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(*uParam0, Var3, 2, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam0, *uParam1, 0, 0.2f, -1.8f, 0f, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
		ENTITY::SET_ENTITY_VISIBLE(*uParam0, 0);
		return 1;
	}
	return 0;
}









int func_241(var uParam0)//Position - 0xDC9F
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = iLocal_94;
	iVar0[2] = joaat("dubsta");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 9f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "NMT_2_RCM", 24);
			func_242(42, 1);
			GlobalFunc_2360(&(uParam0->f_48), "rcmnigel2", "base_nigel", "base_nigel");
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
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
				if (!GlobalFunc_7967(&(uParam0->f_28[0]), 64, -1310.65f, -640.17f, 26.52f, 153.43f, "RC NIGEL", 1))
				{
					bVar5 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8256(&(uParam0->f_35[0]), iLocal_94, -1304.01f, -644.58f, 25.91f, 127.67f);
				if (GlobalFunc_115(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 65, 0);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(uParam0->f_35[0], 5, 0);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "28BNT310");
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 10);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				GlobalFunc_8256(&(uParam0->f_35[1]), iVar0[2], -1290.73f, -634.603f, 26.1004f, 126.961f);
				if (GlobalFunc_115(uParam0->f_35[1]))
				{
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[1], 0, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[1], 10);
				}
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

void func_242(int iParam0, bool bParam1)//Position - 0xDEBA
{
	switch (iParam0)
	{
		case 37:
			if (bParam1)
			{
				uLocal_106 = GlobalFunc_4528();
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
				GlobalFunc_4527();
				MISC::CLEAR_AREA_OF_PEDS(-1100.5f, 789.8f, 164.34f, 20f, 0);
				GlobalFunc_4526(0);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_106, 0);
				PED::CLEAR_PED_NON_CREATION_AREA();
				GlobalFunc_4526(1);
			}
			break;
		
		case 38:
			if (bParam1)
			{
				uLocal_106 = PED::ADD_SCENARIO_BLOCKING_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 0, 1, 1, 1);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
				PED::SET_PED_NON_CREATION_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_doorman_01"), 1);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_bouncer_01"), 1);
				MISC::CLEAR_AREA_OF_PEDS(-558.2858f, 284.4073f, 81.1764f, 15f, 0);
				MISC::CLEAR_AREA_OF_PEDS(-573.394f, 289.3696f, 79.06918f, 15f, 0);
				MISC::CLEAR_AREA(-554.17f, 307.68f, 82.84f, 2f, 1, 0, 0, 0);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 0, 1);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), 1);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_106, 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", 1);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", 1);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
				PED::CLEAR_PED_NON_CREATION_AREA();
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_doorman_01"), 0);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_bouncer_01"), 0);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 1, 1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), 0);
			}
			break;
		
		case 39:
			if (bParam1)
			{
				uLocal_106 = PED::ADD_SCENARIO_BLOCKING_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f, 0, 1, 1, 1);
				PED::SET_PED_NON_CREATION_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f, 0, 1);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f);
				MISC::CLEAR_AREA(-1035.73f, 365.44f, 68.91f, 35f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1035.73f, 365.44f, 68.91f, 27f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(-1035.73f, 365.44f, 68.91f, 27f, 0);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_106, 0);
				PED::CLEAR_PED_NON_CREATION_AREA();
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f, 1, 1);
			}
			break;
		
		case 40:
			break;
		
		case 41:
			if (bParam1)
			{
				uLocal_106 = PED::ADD_SCENARIO_BLOCKING_AREA(-1122.202f, 48.5724f, 51.4652f, -1076.233f, 92.1041f, 60.0617f, 0, 1, 1, 1);
				PED::SET_PED_NON_CREATION_AREA(-1122.202f, 48.5724f, 51.4652f, -1076.233f, 92.1041f, 60.0617f);
				MISC::CLEAR_AREA(-1096.855f, 67.6858f, 52.952f, 15f, 1, 0, 0, 0);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_106, 0);
				PED::CLEAR_PED_NON_CREATION_AREA();
			}
			break;
		
		case 42:
			if (bParam1)
			{
				uLocal_106 = PED::ADD_SCENARIO_BLOCKING_AREA(-1319.566f, -650.077f, 23.53715f, -1301.789f, -634.0721f, 38.18122f, 0, 1, 1, 1);
				PED::SET_PED_NON_CREATION_AREA(-1319.566f, -650.077f, 23.53715f, -1301.789f, -634.0721f, 38.18122f);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_106, 0);
				PED::CLEAR_PED_NON_CREATION_AREA();
			}
			break;
	}
}




int func_246(var uParam0, var uParam1)//Position - 0xE3B4
{
	int iVar0[7];
	char* sVar8;
	int iVar9;
	var uVar10;
	
	sVar8 = "mini@golf";
	iVar0[0] = joaat("s_m_m_highsec_01");
	iVar0[1] = joaat("prop_golf_wood_01");
	iVar0[2] = joaat("prop_golf_wood_01");
	iVar0[3] = joaat("u_m_m_markfost");
	iVar0[4] = joaat("a_m_y_golfer_01");
	iVar0[5] = joaat("caddy");
	iVar0[6] = joaat("prop_golf_bag_01");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_27 = 1;
			uParam0->f_48 = "rcmnigel1d";
			GlobalFunc_500(uParam1);
			GlobalFunc_499(uParam1, -1313.714f, -27.2202f, 48.0314f);
			GlobalFunc_499(uParam1, -1294.066f, -27.0136f, 47.5724f);
			GlobalFunc_499(uParam1, -1069.844f, -143.769f, 39.7493f);
			GlobalFunc_499(uParam1, -925.2529f, -89.9079f, 38.3457f);
			GlobalFunc_499(uParam1, -1010.948f, 40.0643f, 49.9277f);
			GlobalFunc_499(uParam1, -1122.838f, 233.7037f, 64.7587f);
			GlobalFunc_499(uParam1, -1282.578f, 188.8798f, 59.2769f);
			GlobalFunc_499(uParam1, -1328.153f, 192.0178f, 57.8136f);
			GlobalFunc_499(uParam1, -1386.75f, 167.32f, 57.11f);
			GlobalFunc_499(uParam1, -1411.5f, 109.64f, 51.49f);
			GlobalFunc_499(uParam1, -1379.52f, 111.05f, 54.28f);
			GlobalFunc_499(uParam1, -1371.77f, 24.07f, 52.88f);
			GlobalFunc_499(uParam1, -1342.27f, 16.92f, 52.16f);
			GlobalFunc_498(uParam1);
			iVar9 = 0;
			while (iVar9 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar9]);
				iVar9++;
			}
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_48);
			STREAMING::REQUEST_ANIM_DICT(sVar8);
			iLocal_90 = 1;
			break;
		
		case 1:
			if ((!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_48)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar8))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			func_242(41, 1);
			uParam0->f_28[0] = PED::CREATE_PED(26, iVar0[3], -1096.855f, 67.6858f, 52.952f, 112f, 1, 1);
			PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[0], 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_28[0], 1);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], 1);
			uParam0->f_41[0] = OBJECT::CREATE_OBJECT(iVar0[1], -1096.855f, 67.6858f, 52.952f, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			TASK::OPEN_SEQUENCE_TASK(&uVar10);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_48, "swing_a_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_48, "swing_b_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uVar10, 1);
			TASK::CLOSE_SEQUENCE_TASK(uVar10);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uVar10);
			TASK::CLEAR_SEQUENCE_TASK(&uVar10);
			uParam0->f_28[1] = PED::CREATE_PED(26, iVar0[4], -1096.258f, 69.723f, 53.0107f, 163f, 1, 1);
			TASK::TASK_PLAY_ANIM(uParam0->f_28[1], uParam0->f_48, "idle_a_friend_watching", 8f, -8f, -1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], 1);
			uParam0->f_41[1] = OBJECT::CREATE_OBJECT(iVar0[2], -1096.258f, 69.723f, 53.0107f, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[1], PED::GET_PED_BONE_INDEX(uParam0->f_28[1], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			uParam0->f_28[2] = PED::CREATE_PED(26, iVar0[0], -1105.622f, 66.4609f, 53.07f, 118f, 1, 1);
			uParam0->f_28[3] = PED::CREATE_PED(26, iVar0[0], -1090.09f, 64.3905f, 52.5607f, 238f, 1, 1);
			uParam0->f_28[4] = PED::CREATE_PED(26, iVar0[0], -1093.736f, 73.8568f, 53.0388f, 319f, 1, 1);
			iVar9 = 2;
			while (iVar9 <= 4)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[iVar9], 1);
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[iVar9], joaat("weapon_pistol"), -1, 0, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[iVar9], 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[iVar9], 1);
				PED::SET_PED_DIES_WHEN_INJURED(uParam0->f_28[iVar9], 1);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uParam0->f_28[iVar9], 1);
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar0[0], 1);
				iVar9++;
			}
			uParam0->f_35[0] = VEHICLE::CREATE_VEHICLE(iVar0[5], -1099.91f, 61.2608f, 52.8124f, 243f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0]);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_35[0], 1, 1);
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_35[0], 1200);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[5], 1);
			uParam0->f_41[2] = OBJECT::CREATE_OBJECT(iVar0[6], -1099.91f, 63.2608f, 52.8124f, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[2], uParam0->f_35[0], 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			uParam0->f_35[1] = VEHICLE::CREATE_VEHICLE(iVar0[5], -1102.335f, 75.7757f, 53.2591f, 293f, 1, 1);
			uParam0->f_35[2] = VEHICLE::CREATE_VEHICLE(iVar0[5], -1103.023f, 65.6267f, 53.056f, 203f, 1, 1);
			iVar9 = 1;
			while (iVar9 <= 2)
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[iVar9]);
				iVar9++;
			}
			iVar9 = 0;
			while (iVar9 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar9]);
				iVar9++;
			}
			return 1;
			break;
	}
	return 0;
}




int func_250(var uParam0)//Position - 0xEA8B
{
	int iVar0[2];
	int iVar3;
	char* sVar4;
	var uVar5;
	
	sVar4 = "rcmnigel1cnmt_1c";
	iVar0[0] = joaat("ig_kerrymcintosh");
	iVar0[1] = joaat("a_c_rottweiler");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -650.5558f, -217.0627f, 35.55435f };
			uParam0->f_17[1 /*3*/] = { -601.4099f, -300.3887f, 64.24574f };
			uParam0->f_24 = 35f;
			uParam0->f_27 = 1;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar4);
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			uParam0->f_28[0] = PED::CREATE_PED(26, iVar0[0], -626.87f, -268.85f, 38f, 121f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[0], 17, 1);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[0], 1);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], 0);
			AUDIO::STOP_PED_SPEAKING(uParam0->f_28[0], 1);
			TASK::OPEN_SEQUENCE_TASK(&uVar5);
			TASK::TASK_PLAY_ANIM(0, sVar4, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "dexy_stay_there", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "price_tag", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "such_a_good", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "this_looks", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sVar4, "who_would", 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uVar5, 1);
			TASK::CLOSE_SEQUENCE_TASK(uVar5);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uVar5);
			TASK::CLEAR_SEQUENCE_TASK(&uVar5);
			uParam0->f_28[1] = PED::CREATE_PED(26, iVar0[1], -627.4f, -267.12f, 38.23f, -59.95f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 132, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[1], 1);
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

int func_251(var uParam0)//Position - 0xEDB9
{
	int iVar0[6];
	int iVar7;
	char* sVar8;
	float fVar9;
	
	sVar8 = "rcmnigel1b";
	iVar0[0] = joaat("ig_tylerdix");
	iVar0[1] = joaat("a_f_y_beach_01");
	iVar0[2] = joaat("s_m_m_gardener_01");
	iVar0[3] = joaat("speedo");
	iVar0[4] = joaat("comet2");
	iVar0[5] = joaat("prop_nigel_bag_pickup");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -1065.12f, 366.3438f, 97.59101f };
			uParam0->f_17[1 /*3*/] = { -1020.775f, 364.7596f, 65.23878f };
			uParam0->f_24 = 40f;
			uParam0->f_27 = 1;
			uParam0->f_48 = "rcmnigel1bnmt_1b";
			func_242(39, 1);
			iVar7 = 0;
			while (iVar7 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar7]);
				iVar7++;
			}
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_48);
			STREAMING::REQUEST_ANIM_DICT(sVar8);
			iLocal_90 = 1;
			break;
		
		case 1:
			if ((!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_48)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar8))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8256(&(uParam0->f_35[0]), iVar0[3], -1010.97f, 359.91f, 70.65f, 331.46f);
				if (GlobalFunc_115(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0]);
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 97, 97);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_35[0], 13.5f);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(uParam0->f_35[0], 2, 0);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(uParam0->f_35[0], 2, 0, 1);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(uParam0->f_35[0], 2, 0, 1f);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uParam0->f_35[0]);
					return 0;
				}
			}
			if (GlobalFunc_115(uParam0->f_35[0]))
			{
				fVar9 = VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(uParam0->f_35[0], 2);
				if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(uParam0->f_35[0], 2) && fVar9 < 0.8f)
				{
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(uParam0->f_35[0], 2, 0, 1f);
				}
				else
				{
					iLocal_90 = 3;
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_35[0]))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_35[0], sVar8, "idle_speedo", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(sVar8))
					{
						TASK::TASK_VEHICLE_PLAY_ANIM(uParam0->f_35[0], sVar8, "idle_speedo");
						return 0;
					}
					else
					{
						STREAMING::REQUEST_ANIM_DICT(sVar8);
						return 0;
					}
				}
			}
			GlobalFunc_8256(&(uParam0->f_35[1]), iVar0[4], -1018.26f, 357.76f, 70.2f, 339.52f);
			if (GlobalFunc_115(uParam0->f_35[1]))
			{
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[1], 27, 27);
			}
			GlobalFunc_6479(&(uParam0->f_28[0]), iVar0[0], -1054.7f, 355.94f, 68.35f, 23.67f, 26);
			if (GlobalFunc_4924(uParam0->f_28[0]))
			{
				PED::SET_PED_DIES_IN_WATER(uParam0->f_28[0], 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[0], -1054.7f, 355.94f, 68.35f, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_28[0], 23.67f);
				TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar8, "Swimming_Idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			GlobalFunc_6479(&(uParam0->f_28[1]), iVar0[1], -1058.43f, 362.78f, 69.86f, 130.45f, 26);
			if (GlobalFunc_4924(uParam0->f_28[1]))
			{
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 1, 0);
				PED::SET_PED_DIES_IN_WATER(uParam0->f_28[1], 0);
				uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(-1059f, 360.976f, 69f, 0f, 0f, -1.08f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, 1);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_59, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[1], uParam0->f_59, uParam0->f_48, "base_girl", 1000f, -8f, 592, 0, 1148846080, 0);
			}
			GlobalFunc_6479(&(uParam0->f_28[2]), iVar0[2], -1012.57f, 357.48f, 70.62f, -28.55f, 26);
			if (GlobalFunc_4924(uParam0->f_28[2]))
			{
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[2]);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[2], -1012.57f, 357.48f, 70.62f, 0, 0, 1);
				ENTITY::SET_ENTITY_HEALTH(uParam0->f_28[2], 160);
				if (STREAMING::HAS_ANIM_DICT_LOADED(sVar8))
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_28[2], sVar8, "idle_gardener", 1000f, -8f, -1, 270337, 0, 0, 0, 0);
				}
			}
			GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[5], -1050.03f, 368.95f, 69.29f, -11.27f);
			if (GlobalFunc_115(uParam0->f_41[0]))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[0], 0f, 0f, -11.27f, 2, 1);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_41[0], 0);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_41[0], 1);
				ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(uParam0->f_41[0], 0);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[0], 0);
			}
			iVar7 = 0;
			while (iVar7 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar7]);
				iVar7++;
			}
			STREAMING::REMOVE_ANIM_DICT(uParam0->f_48);
			STREAMING::REMOVE_ANIM_DICT(sVar8);
			return 1;
			break;
	}
	return 0;
}




int func_255(var uParam0)//Position - 0xF39C
{
	int iVar0[7];
	int iVar8;
	var uVar9;
	
	iVar0[0] = joaat("u_m_m_willyfist");
	iVar0[1] = joaat("a_f_y_bevhills_03");
	iVar0[2] = joaat("a_f_y_bevhills_03");
	iVar0[3] = joaat("a_f_y_bevhills_03");
	iVar0[4] = joaat("a_m_y_vinewood_04");
	iVar0[5] = joaat("a_m_y_gay_01");
	iVar0[6] = joaat("gauntlet");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -565.5146f, 269.6139f, 81.02081f };
			uParam0->f_17[1 /*3*/] = { -562.2337f, 306.5382f, 94.13258f };
			uParam0->f_24 = 30f;
			uParam0->f_27 = 1;
			GlobalFunc_7934(4, 0);
			GlobalFunc_143(" SetupScene_NIGEL_1A - SET_INTERIOR_CAPPED(INTERIOR_V_ROCKCLUB, FALSE)	");
			uParam0->f_48 = "rcmnigel1aig_1";
			uParam0->f_59 = -1;
			func_242(38, 1);
			uVar9 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-555.5934f, 285.7738f, 81.1763f, "v_rockclub");
			if (INTERIOR::IS_VALID_INTERIOR(uVar9))
			{
				INTERIOR::REFRESH_INTERIOR(iVar9);
			}
			iVar8 = 0;
			while (iVar8 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar8]);
				iVar8++;
			}
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_48);
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_48))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			GlobalFunc_6479(&(uParam0->f_28[0]), iVar0[0], -552.66f, 287.75f, 82.18f, 123.75f, 26);
			GlobalFunc_6479(&(uParam0->f_28[1]), iVar0[1], -553.46f, 287.34f, 82.18f, -65.86f, 26);
			if (GlobalFunc_4924(uParam0->f_28[1]))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[1], 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 1, 0, 0);
			}
			uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(-552.18f, 285.476f, 81.976f, 0f, 0f, 79.5f, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, 1);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_59, 0);
			if (GlobalFunc_4924(uParam0->f_28[0]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, uParam0->f_48, "BASE_02_Willie", 1000f, -8f, 17, 0, 1148846080, 0);
			}
			if (GlobalFunc_4924(uParam0->f_28[1]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[1], uParam0->f_59, uParam0->f_48, "BASE_02_GIRL", 1000f, -8f, 17, 0, 1148846080, 0);
			}
			GlobalFunc_6479(&(uParam0->f_28[2]), iVar0[2], -559.94f, 285.99f, 85.38f, -59.06f, 26);
			GlobalFunc_6479(&(uParam0->f_28[3]), iVar0[3], -558.87f, 289.79f, 85.38f, 162.44f, 26);
			GlobalFunc_6479(&(uParam0->f_28[4]), iVar0[4], -559f, 286.09f, 85.38f, 65.92f, 26);
			GlobalFunc_6479(&(uParam0->f_28[5]), iVar0[5], -558.84f, 288.97f, 85.38f, -7.72f, 26);
			if (GlobalFunc_4924(uParam0->f_28[2]))
			{
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 2, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 7, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 8, 1, 0, 0);
			}
			if (GlobalFunc_4924(uParam0->f_28[3]))
			{
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 0, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 4, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 7, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 8, 1, 0, 0);
			}
			if (GlobalFunc_4924(uParam0->f_28[4]))
			{
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[4], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[4], 2, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[4], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[4], 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[4], 8, 0, 0, 0);
			}
			if (GlobalFunc_4924(uParam0->f_28[5]))
			{
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[5], 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[5], 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[5], 3, 0, 3, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[5], 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[5], 8, 0, 2, 0);
			}
			GlobalFunc_8256(&(uParam0->f_35[0]), iVar0[6], -553.55f, 308.61f, 82.81f, 202.78f);
			if (GlobalFunc_115(uParam0->f_35[0]))
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 1);
				ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(uParam0->f_35[0], 0);
			}
			iVar8 = 0;
			while (iVar8 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar8]);
				iVar8++;
			}
			STREAMING::REMOVE_ANIM_DICT(uParam0->f_48);
			return 1;
			break;
	}
	return 0;
}








int func_263(var uParam0)//Position - 0x107A7
{
	int iVar0[3];
	int iVar4;
	var uVar5;
	bool bVar6;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = uLocal_92;
	iVar0[2] = iLocal_94;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "NMT_1_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
			GlobalFunc_2360(&(uParam0->f_48), "rcmnigel1", "base_nigel", "base_nigel");
			GlobalFunc_2360(&uLocal_95, "rcmnigel1", "base_mrs_thornhill", "base_mrs_thornhill");
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
			bVar6 = true;
			if (!GlobalFunc_7967(&(uParam0->f_28[0]), 64, -1100.5f, 789.8f, 164.34f, 1.82f, "RC: NIGEL", 1))
			{
				bVar6 = false;
			}
			if (!GlobalFunc_7967(&(uParam0->f_28[1]), 63, -1099.35f, 789.15f, 164.47f, 0f, "RC: MRS THORNHILL", 1))
			{
				bVar6 = false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8256(&(uParam0->f_35[0]), iLocal_94, -1077.959f, 793.9361f, 164.6374f, 172.8563f);
				if (GlobalFunc_115(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 65, 0);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(uParam0->f_35[0], 5, 0);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "28BNT310");
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 10);
					VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_35[0], 0);
				}
			}
			if (bVar6)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]) && GlobalFunc_115(uParam0->f_28[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], 1);
				uVar5 = PED::CREATE_SYNCHRONIZED_SCENE(-1100.558f, 789.8862f, 163.3285f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uVar5, "rcmnigel1", "base_nigel", 8f, -8f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[1], uVar5, "rcmnigel1", "base_mrs_thornhill", 8f, -8f, 0, 0, 1148846080, 0);
			}
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar4]);
				iVar4++;
			}
			func_242(37, 1);
			return 1;
			break;
	}
	return 0;
}














void func_277(int iParam0, int iParam1, bool bParam2)//Position - 0x10F62
{
	char* sVar0;
	
	if (*iParam0 == 43)
	{
		GlobalFunc_881(&(iParam0->f_28[1]));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_108))
	{
		HUD::REMOVE_BLIP(&uLocal_108);
	}
	if (bParam2)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		if (*iParam0 == 38)
		{
			GlobalFunc_7934(4, 1);
			func_294(iParam0);
			GlobalFunc_143(" Script_Cleanup - SET_INTERIOR_CAPPED(INTERIOR_V_ROCKCLUB, TRUE)");
		}
		else if (*iParam0 == 39)
		{
			func_292(iParam0);
		}
		GlobalFunc_9165(iParam0, 0, 0, 0);
	}
	func_242(*iParam0, 0);
	switch (*iParam0)
	{
		case 43:
			if (iParam1->f_1 != -1)
			{
				AUDIO::RELEASE_SOUND_ID(iParam1->f_1);
			}
			break;
	}
	GlobalFunc_6487(&(iParam0->f_48));
	if (iLocal_107 != -1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Ending off-mission cutscene request");
		GlobalFunc_6473(&iLocal_107);
	}
	switch (*iParam0)
	{
		case 37:
			sVar0 = "NIG1A_AMB";
			break;
	}
	GlobalFunc_7527(sVar0);
	if (bParam2)
	{
		GlobalFunc_9527(*iParam0);
	}
	GlobalFunc_6484();
	GlobalFunc_143("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}















void func_292(var uParam0)//Position - 0x112A5
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59))
	{
		if (GlobalFunc_4924(uParam0->f_28[1]))
		{
			if (GlobalFunc_7188(uParam0->f_28[1], 1785177548))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_28[1]);
			}
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_28[1], -1000f, 1);
		}
	}
}


void func_294(var uParam0)//Position - 0x11329
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59))
	{
		if (GlobalFunc_4924(uParam0->f_28[0]))
		{
			if (GlobalFunc_7188(uParam0->f_28[0], 1785177548))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_28[0]);
			}
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_28[0], -1000f, 1);
		}
		if (GlobalFunc_4924(uParam0->f_28[1]))
		{
			if (GlobalFunc_7188(uParam0->f_28[1], 1785177548))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_28[1]);
			}
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_28[1], -1000f, 1);
		}
	}
}






