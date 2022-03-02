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
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
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
	int iVar64[6];
	
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
	uLocal_91 = GlobalFunc_4946(50);
	iLocal_92 = joaat("pcj");
	iLocal_94 = -1;
	MISC::_0x6F2135B6129620C1(1);
	GlobalFunc_6486();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	GlobalFunc_4517(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	iVar64[0] = 46;
	iVar64[1] = 47;
	iVar64[2] = 48;
	iVar64[3] = 49;
	iVar64[4] = 50;
	iVar64[5] = 51;
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
		func_250(&Var0, 1);
	}
	if (!GlobalFunc_8909(&iVar64, &Var0, Var61, 5f))
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
	while (!func_220(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			GlobalFunc_143("Player out of range [TERMINATING]");
			func_250(&Var0, 1);
		}
	}
	if (Var0 == 47)
	{
		uLocal_95 = func_219();
	}
	if (Var0 != 49 && Var0 != 50)
	{
		MISC::CLEAR_AREA(Var61, Var0.f_15, 1, 0, 0, 0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_181(&Var0, 1))
		{
			func_250(&Var0, 1);
		}
		if (Var0 == 47)
		{
			GlobalFunc_7526(&Var0, Var61, "PAP2AUD", "PAP2_AMB", 3, "BEVERLY", 5000, 1101004800);
		}
		else if (Var0 == 51)
		{
			GlobalFunc_7526(&Var0, Var61, "PAP4AUD", "PAP4_AMB", 3, "BEVERLY", 5000, 1101004800);
		}
		GlobalFunc_9527(Var0);
		GlobalFunc_8257(&iLocal_94, &(Var0.f_9), Var61);
		if (GlobalFunc_10897(&Var0, 0))
		{
			if (GlobalFunc_4508(Var0))
			{
				GlobalFunc_7518(Var0, &uLocal_96);
			}
			if (!func_2(&Var0))
			{
				func_250(&Var0, 1);
			}
			if (GlobalFunc_4504(&Var0))
			{
				func_250(&Var0, 0);
			}
		}
	}
}


int func_2(int iParam0)//Position - 0x2B7
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
			if (!func_181(iParam0, *iParam0 != 2))
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



















































































































































































int func_181(var uParam0, bool bParam1)//Position - 0xB51B
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
		if (!func_191(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_191(uParam0, 0, 0))
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










int func_191(var uParam0, bool bParam1, int iParam2)//Position - 0xC0DC
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
						if (func_193(uParam0->f_28[iVar0], 1126825984))
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


int func_193(int iParam0, float fParam1)//Position - 0xC3CC
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
				if (func_194(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_194(int iParam0, float fParam1)//Position - 0xC442
{
	return func_195(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_195(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xC45A
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_203(iParam0, iParam1);
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
		iVar4 = func_198();
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



int func_198()//Position - 0xC70C
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





int func_203(int iParam0, int iParam1)//Position - 0xC862
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
















var func_219()//Position - 0xCED6
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-74.8392f, 300.5241f, 104f, -62.467f, 318.6961f, 109f, 0, 1, 1, 1);
}

int func_220(int iParam0)//Position - 0xCF04
{
	switch (*iParam0)
	{
		case 46:
			if (!func_235(iParam0))
			{
				return 0;
			}
			break;
		
		case 47:
			if (!func_234(iParam0))
			{
				return 0;
			}
			break;
		
		case 48:
			if (!func_233(iParam0))
			{
				return 0;
			}
			break;
		
		case 49:
			if (!func_232(iParam0))
			{
				return 0;
			}
			break;
		
		case 50:
			if (!func_231(iParam0))
			{
				return 0;
			}
			break;
		
		case 51:
			if (!func_221(iParam0))
			{
				return 0;
			}
			break;
	}
	GlobalFunc_143("Created initial scene");
	return 1;
}

int func_221(var uParam0)//Position - 0xCFA7
{
	int iVar0[7];
	char* sVar8;
	int iVar9;
	var uVar10;
	bool bVar11;
	
	sVar8 = "rcmpaparazzo_4";
	iVar0[0] = uLocal_91;
	iVar0[1] = joaat("issi2");
	iVar0[2] = joaat("rumpo");
	iVar0[3] = joaat("s_m_y_grip_01");
	iVar0[4] = joaat("a_f_y_bevhills_02");
	iVar0[5] = joaat("prop_pap_camera_01");
	iVar0[6] = joaat("prop_v_cam_01");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -476.3686f, 229.5744f, 82.07077f };
			uParam0->f_17[1 /*3*/] = { -513.6883f, 234.2165f, 87.28937f };
			uParam0->f_24 = 25f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "PAP_4_RCM", 24);
			iVar9 = 0;
			while (iVar9 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar9]);
				iVar9++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar8);
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar8))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar11 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 50, -490.809f, 232.39f, 82.018f, 33.84f, "PAPARAZZO LAUNCHER RC", 0))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
					uVar10 = PED::CREATE_SYNCHRONIZED_SCENE(-490.809f, 232.39f, 82.018f, 0f, 0f, 33.84f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar10, 1);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uVar10, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uVar10, "rcmpaparazzo_4", "pap_4_rcm_leadin", 8f, -8f, 1, 16, 1148846080, 0);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				GlobalFunc_6479(&(uParam0->f_28[1]), iVar0[3], -498.1656f, 228.6284f, 82.09948f, 292.9763f, 26);
				if (GlobalFunc_4924(uParam0->f_28[1]))
				{
					PED::SET_PED_NAME_DEBUG(uParam0->f_28[1], "Camera Man");
					TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcmpaparazzo_4", "Idle_Camman", 8f, -8f, -1, 57, 0, 0, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], 1);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 0, 1);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[2]))
			{
				GlobalFunc_6479(&(uParam0->f_28[2]), iVar0[4], -498.309f, 227.9112f, 82.106f, 296.4216f, 26);
				if (GlobalFunc_4924(uParam0->f_28[2]))
				{
					PED::SET_PED_NAME_DEBUG(uParam0->f_28[2], "Makeup Woman");
					TASK::TASK_PLAY_ANIM(uParam0->f_28[2], "rcmpaparazzo_4", "Idle_Prod", 8f, -8f, -1, 57, 0, 0, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[2], 1);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 2, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 9, 0, 0, 0);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[1], -497.99f, 224.97f, 82.67f, 266.5f);
				if (GlobalFunc_4940(uParam0->f_35[0]))
				{
					VEHICLE::LOWER_CONVERTIBLE_ROOF(uParam0->f_35[0], 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 2);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				GlobalFunc_8017(&(uParam0->f_35[1]), iVar0[2], -501.55f, 230.7f, 83.1f, 233.93f);
				if (GlobalFunc_4940(uParam0->f_35[1]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[1], 2);
					VEHICLE::SET_VEHICLE_LIVERY(uParam0->f_35[1], 0);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[5], -490.11f, 233.15f, 82.1f, 0f);
				if (GlobalFunc_115(uParam0->f_28[0]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 57005), 0.1561f, -0.003f, -0.0344f, 202.8703f, -124.43f, -121.5398f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				GlobalFunc_5742(&(uParam0->f_41[1]), iVar0[6], -490.11f, 233.15f, 82.1f, 0f);
				if (GlobalFunc_115(uParam0->f_28[1]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[1], PED::GET_PED_BONE_INDEX(uParam0->f_28[1], 57005), 0.1181f, 0.2229f, -0.1535f, 259.2501f, 24.08f, -51.2899f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (bVar11)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
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










int func_231(var uParam0)//Position - 0xD828
{
	uParam0->f_16 = 3;
	uParam0->f_17[0 /*3*/] = { 1040.96f, -534.42f, 60.17f };
	uParam0->f_15 = 90f;
	uParam0->f_27 = 1;
	return 1;
}

int func_232(var uParam0)//Position - 0xD85C
{
	int iVar0[1];
	int iVar2;
	
	iVar0[0] = joaat("jackal");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 3;
			uParam0->f_17[0 /*3*/] = { 301.85f, 138.16f, 102.84f };
			uParam0->f_15 = 90f;
			uParam0->f_27 = 1;
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[0], 307.02f, 143.17f, 103.3f, 250.08f);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 2);
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

int func_233(var uParam0)//Position - 0xD947
{
	int iVar0[5];
	var uVar6[3];
	struct<3> Var10[3];
	struct<3> Var20[3];
	char* sVar30;
	int iVar31;
	bool bVar32;
	
	sVar30 = "rcmpaparazzo_3leadinoutpap_3_rcm";
	iVar0[0] = uLocal_91;
	iVar0[1] = joaat("prop_pap_camera_01");
	iVar0[2] = joaat("prop_cs_dumpster_01a");
	iVar0[3] = joaat("prop_cs_dumpster_lidl");
	iVar0[4] = joaat("prop_cs_dumpster_lidr");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -258.5052f, 287.5976f, 90.17828f };
			uParam0->f_17[1 /*3*/] = { -258.5263f, 298.0905f, 93.69456f };
			uParam0->f_24 = 7f;
			uParam0->f_27 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "PAP_3_RCM", 24);
			iVar31 = 0;
			while (iVar31 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar31]);
				iVar31++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar30);
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar30))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar32 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 50, -261f, 292.22f, 90.89f, 10.53f, "PAPARAZZO LAUNCHER RC", 1))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], 1);
				}
				else
				{
					bVar32 = false;
				}
			}
			if (GlobalFunc_4924(uParam0->f_28[0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
				{
					GlobalFunc_5742(&(uParam0->f_41[3]), iVar0[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 0f, 2.5f), 0f);
					if (GlobalFunc_115(uParam0->f_41[3]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[3], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[1]);
					}
					else
					{
						bVar32 = false;
					}
				}
				else
				{
					bVar32 = false;
				}
			}
			if (bVar32)
			{
				uVar6[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-260.62f, 292.1391f, 90.604f, 10f, joaat("prop_cs_dumpster_01a"), 1, 0, 1);
				Var10[0 /*3*/] = { -260.614f, 292.106f, 91.127f };
				Var20[0 /*3*/] = { 7.2E-05f, -2.500116f, 89.63998f };
				uVar6[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-261.58f, 291.66f, 92.06f, 10f, joaat("prop_cs_dumpster_lidl"), 1, 0, 1);
				Var10[1 /*3*/] = { -261.108f, 292.5062f, 92.03645f };
				Var20[1 /*3*/] = { -0.656039f, -2.50018f, 89.6114f };
				uVar6[2] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-261.5835f, 291.6671f, 92.066f, 10f, joaat("prop_cs_dumpster_lidr"), 1, 0, 1);
				Var10[2 /*3*/] = { -261.1135f, 291.6249f, 91.99765f };
				Var20[2 /*3*/] = { -0.281056f, -2.500049f, 89.62769f };
				iVar31 = 0;
				while (iVar31 <= 2)
				{
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uVar6[iVar31]));
					iVar31++;
				}
				ENTITY::CREATE_MODEL_HIDE(-260.62f, 292.13f, 90.6f, 10f, joaat("prop_cs_dumpster_01a"), 1);
				ENTITY::CREATE_MODEL_HIDE(-261.58f, 291.66f, 92.06f, 10f, joaat("prop_cs_dumpster_lidr"), 1);
				ENTITY::CREATE_MODEL_HIDE(-261.54f, 292.54f, 92.1f, 10f, joaat("prop_cs_dumpster_lidl"), 1);
				uParam0->f_41[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_01a"), Var10[0 /*3*/], 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[0], Var20[0 /*3*/], 2, 1);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[0], 0);
				uParam0->f_41[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_lidl"), Var10[1 /*3*/], 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[1], Var20[1 /*3*/], 2, 1);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[1], 0);
				uParam0->f_41[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_dumpster_lidr"), Var10[2 /*3*/], 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[2], Var20[2 /*3*/], 2, 1);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[2], 0);
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_41[0]))
			{
				uLocal_93 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_41[0], 1), ENTITY::GET_ENTITY_ROTATION(uParam0->f_41[0], 2), 2);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[0], uLocal_93, "idle_closed_pap_3_rcm_dumpster", sVar30, 8f, -8f, 0, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_93, 1);
				if (GlobalFunc_115(uParam0->f_28[0]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_93, sVar30, "idle_closed_pap_3_rcm_beverly", 8f, -8f, 0, 0, 1148846080, 0);
				}
				if (GlobalFunc_115(uParam0->f_41[1]))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[1], uLocal_93, "idle_closed_pap_3_rcm_lid_l", sVar30, 8f, -8f, 0, 1148846080);
				}
				if (GlobalFunc_115(uParam0->f_41[2]))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_41[2], uLocal_93, "idle_closed_pap_3_rcm_lid_r", sVar30, 8f, -8f, 0, 1148846080);
				}
			}
			iVar31 = 0;
			while (iVar31 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar31]);
				iVar31++;
			}
			STREAMING::REMOVE_ANIM_DICT(sVar30);
			return 1;
			break;
	}
	return 0;
}

int func_234(var uParam0)//Position - 0xDE86
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = joaat("fq2");
	iVar0[2] = joaat("prop_pap_camera_01");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -82.64143f, 302.7307f, 104.6349f };
			uParam0->f_17[1 /*3*/] = { -68.78405f, 296.6317f, 107.8958f };
			uParam0->f_24 = 11f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "PAP_2_RCM_P2", 24);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2"))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar5 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 50, -71.283f, 301.557f, 106.711f, 4.659f, "PAPARAZZO LAUNCHER RC", 1))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
				}
				else
				{
					bVar5 = false;
				}
			}
			if (GlobalFunc_4924(uParam0->f_28[0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
				{
					GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 0f, 2.5f), 0f);
					if (GlobalFunc_115(uParam0->f_41[0]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[2]);
					}
					else
					{
						bVar5 = false;
					}
				}
				else
				{
					bVar5 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[1], -78.0873f, 299.0679f, 105.3972f, 249.8696f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 7);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "P4P4R4Z0");
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
			}
			if (bVar5)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				uLocal_93 = PED::CREATE_SYNCHRONIZED_SCENE(-71.283f, 301.557f, 106.711f, 0f, 0f, 4.659f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_93, 1);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_93, "rcmpaparazzo_2", "pap_2_rcm_base", 2f, -4f, 1, 0, 1148846080, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 185, 1);
			}
			STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo_2");
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_PAPARAZZI", 0);
			MISC::CLEAR_AREA_OF_PEDS(-70.12f, 298.33f, 105.25f, 30f, 0);
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

int func_235(var uParam0)//Position - 0xE1C7
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	var uVar6;
	char* sVar7;
	
	sVar7 = "rcmpaparazzo1beckon";
	iVar0[0] = uLocal_91;
	iVar0[1] = iLocal_92;
	iVar0[2] = joaat("prop_pap_camera_01");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -154.9816f, 287.0432f, 96.63823f };
			uParam0->f_17[1 /*3*/] = { -155.4946f, 274.4067f, 90.82359f };
			uParam0->f_24 = 15f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 0;
			StringCopy(&(uParam0->f_9), "PAP_1_RCM", 24);
			uParam0->f_48 = sVar7;
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar7);
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar7))
			{
				return 0;
			}
			func_236(46, 1);
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar5 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 50, -149.75f, 285.81f, 93.67f, 135f, "PAPARAZZO LAUNCHER RC", 1))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
				}
				else
				{
					bVar5 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				if (GlobalFunc_115(uParam0->f_28[0]))
				{
					GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 0f, 2.5f), 0f);
					if (GlobalFunc_115(uParam0->f_41[0]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[2]);
					}
					else
					{
						bVar5 = false;
					}
				}
				else
				{
					bVar5 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[1], -159.56f, 275.41f, 93.14f, 102.75f);
				if (GlobalFunc_4940(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 62, 62);
				}
				else
				{
					bVar5 = false;
				}
			}
			if (bVar5)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo1beckon"))
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar6);
					TASK::TASK_PLAY_ANIM(0, sVar7, "pap_idle_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sVar7, "pap_idle_action_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sVar7, "pap_idle_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sVar7, "pap_idle_action_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uVar6, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar6);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], uVar6);
					TASK::CLEAR_SEQUENCE_TASK(&uVar6);
				}
			}
			STREAMING::REMOVE_ANIM_DICT(sVar7);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				if (iVar4 != 1)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar4]);
				}
				iVar4++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_236(int iParam0, bool bParam1)//Position - 0xE4EA
{
	switch (iParam0)
	{
		case 46:
			if (bParam1)
			{
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-190.0199f, 260.1082f, 85f, -131.572f, 285.8091f, 102f, 0, 1);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-190.0199f, 260.1082f, 85f, -131.572f, 285.8091f, 102f);
			}
			else
			{
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-190.0199f, 260.1082f, 85f, -131.572f, 285.8091f, 102f, 1, 1);
			}
			break;
	}
}














void func_250(int iParam0, bool bParam1)//Position - 0xEA8E
{
	if (bParam1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		switch (*iParam0)
		{
			case 46:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_92);
				GlobalFunc_9165(iParam0, 0, 0, 0);
				break;
			
			case 47:
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_PAPARAZZI", 1);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_95, 0);
				GlobalFunc_9165(iParam0, 0, 0, 0);
				break;
			
			case 48:
				ENTITY::REMOVE_MODEL_HIDE(-260.62f, 292.13f, 90.6f, 10f, joaat("prop_cs_dumpster_01a"), 1);
				ENTITY::REMOVE_MODEL_HIDE(-261.58f, 291.66f, 92.06f, 10f, joaat("prop_cs_dumpster_lidr"), 1);
				ENTITY::REMOVE_MODEL_HIDE(-261.54f, 292.54f, 92.1f, 10f, joaat("prop_cs_dumpster_lidl"), 1);
				GlobalFunc_130(&(iParam0->f_41[3]));
				GlobalFunc_9165(iParam0, 1, 0, 0);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_PAPARAZZI", 1);
				break;
			
			case 51:
				STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo_4");
				GlobalFunc_9165(iParam0, 0, 0, 0);
				break;
			
			default:
				break;
			}
	}
	func_236(*iParam0, 0);
	if (HUD::DOES_BLIP_EXIST(uLocal_96))
	{
		HUD::REMOVE_BLIP(&uLocal_96);
	}
	if (iLocal_94 != -1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Ending off-mission cutscene request");
		GlobalFunc_6473(&iLocal_94);
	}
	GlobalFunc_6487(&(iParam0->f_48));
	if (!bParam1)
	{
		if (*iParam0 == 48)
		{
			GlobalFunc_143("SCRIPT TERMINATING: Holding on to launcher until Paparazzo 3 cleans up...");
			while (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3")) > 0)
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	if (bParam1)
	{
		GlobalFunc_9527(*iParam0);
	}
	GlobalFunc_6484();
	GlobalFunc_143("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

















