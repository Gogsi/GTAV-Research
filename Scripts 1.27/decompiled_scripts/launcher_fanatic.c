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
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
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
	int iVar64[3];
	
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
	uLocal_91 = GlobalFunc_4946(61);
	iLocal_93 = -1;
	iLocal_96 = -1;
	MISC::_0x6F2135B6129620C1(1);
	GlobalFunc_6486();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	GlobalFunc_4517(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	iVar64[0] = 21;
	iVar64[1] = 22;
	iVar64[2] = 23;
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
		func_254(&Var0, 1);
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
	while (!func_225(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			GlobalFunc_143("Player out of range [TERMINATING]");
			func_254(&Var0, 1);
		}
	}
	MISC::CLEAR_AREA(Var61, Var0.f_15, 1, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_187(&Var0, 1))
		{
			func_254(&Var0, 1);
		}
		GlobalFunc_9527(Var0);
		GlobalFunc_8257(&iLocal_93, &(Var0.f_9), Var61);
		if (iLocal_94 == 0)
		{
			if (Var0 == 22)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (GlobalFunc_115(Var0.f_28[1]))
					{
						GlobalFunc_143("Trying to set Mary Ann boyfriend component variation");
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("MaryAnnes_Friend", Var0.f_28[1], 0);
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("MaryAnnes_Friend", 0, 0, 0, 0);
						iLocal_94 = 1;
					}
				}
			}
		}
		if (Var0 == 21)
		{
			func_175(&Var0, Var61, "FAN1AU", "FAN1_AMB", 3, "MARYANN", 1500);
		}
		else if (Var0 == 22)
		{
			GlobalFunc_7528(&Var0, Var61, "FAN2AU", "FAN2_AMB", 3, "MARYANN", 5000, 1101004800);
		}
		else if (Var0 == 23)
		{
			if (iLocal_95 == 0)
			{
				if (func_175(&Var0, Var61, "FAN3AUD", "FAN3_AMB", 3, "MARYANN", 50))
				{
					iLocal_95 = 1;
				}
			}
			else
			{
				func_167(&Var0);
			}
		}
		if (GlobalFunc_10898(&Var0, 0))
		{
			if (GlobalFunc_4508(Var0))
			{
				GlobalFunc_7518(Var0, &uLocal_97);
			}
			if (!func_2(&Var0))
			{
				func_254(&Var0, 1);
			}
			if (GlobalFunc_4504(&Var0))
			{
				func_254(&Var0, 0);
			}
		}
	}
}


int func_2(int iParam0)//Position - 0x2F5
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
			if (!func_187(iParam0, *iParam0 != 2))
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





































































































































































void func_167(int iParam0)//Position - 0xB015
{
	if (iLocal_96 == -1)
	{
		iLocal_96 = MISC::GET_GAME_TIMER();
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_96) >= 900)
	{
		if (GlobalFunc_115(iParam0->f_28[0]))
		{
			if (!GlobalFunc_111())
			{
				GlobalFunc_5117(iParam0->f_28[0], "PUSHUP_BREATH", "MARYANN", 6);
				iLocal_96 = MISC::GET_GAME_TIMER();
			}
		}
	}
}








int func_175(int iParam0, struct<3> Param1, char[4] cParam4, char* sParam5, int iParam6, char* sParam7, int iParam8)//Position - 0xB460
{
	var uVar0;
	
	if (GlobalFunc_9039(2))
	{
		if (!GlobalFunc_111())
		{
			if (((GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0->f_28[0])) && (MISC::GET_GAME_TIMER() - iParam0->f_60) > iParam8) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Param1, 1) < 20f)
			{
				uVar0 = 16;
				GlobalFunc_173(&uVar0, iParam6, iParam0->f_28[0], sParam7, 0, 1);
				GlobalFunc_5157(&uVar0, cParam4, sParam5, 7, 0, 0);
				iParam0->f_60 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		else if (GlobalFunc_5664(sParam5))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Param1, 1) >= 20f)
				{
					GlobalFunc_4935();
				}
			}
		}
	}
	return 0;
}












int func_187(var uParam0, bool bParam1)//Position - 0xB8BD
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
		if (!func_197(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_197(uParam0, 0, 0))
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










int func_197(var uParam0, bool bParam1, int iParam2)//Position - 0xC47F
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
						if (func_199(uParam0->f_28[iVar0], 1126825984))
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


int func_199(int iParam0, float fParam1)//Position - 0xC76F
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
				if (func_200(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_200(int iParam0, float fParam1)//Position - 0xC7E5
{
	return func_201(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_201(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xC7FD
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_209(iParam0, iParam1);
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
		iVar4 = func_204();
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



int func_204()//Position - 0xCAAF
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





int func_209(int iParam0, int iParam1)//Position - 0xCC05
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
















int func_225(int iParam0)//Position - 0xD279
{
	switch (*iParam0)
	{
		case 21:
			if (!func_240(iParam0))
			{
				return 0;
			}
			break;
		
		case 22:
			if (!func_234(iParam0))
			{
				return 0;
			}
			break;
		
		case 23:
			if (!func_227(iParam0))
			{
				return 0;
			}
			break;
	}
	if (*iParam0 == 22)
	{
		uLocal_92 = func_226();
		MISC::CLEAR_AREA_OF_PEDS(816.3f, 1275.61f, 359.5f, 75f, 0);
	}
	GlobalFunc_143("Created initial scene");
	return 1;
}

var func_226()//Position - 0xD2FE
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(744.7144f, 1254.726f, 357.0291f, 847.8754f, 1342.243f, 370.0352f, 0, 1, 1, 1);
}

int func_227(var uParam0)//Position - 0xD32C
{
	int iVar0[5];
	int iVar6;
	bool bVar7;
	struct<3> Var8;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = joaat("prop_beach_towel_01");
	iVar0[2] = joaat("prop_energy_drink");
	iVar0[3] = joaat("prop_freeweight_01");
	iVar0[4] = joaat("prop_freeweight_02");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			StringCopy(&(uParam0->f_9), "EF_3_RCM_CONCAT", 24);
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar6]);
				iVar6++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmfanatic3", "ef_3_rcm_loop_maryann", 0);
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
			bVar7 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 61, -915.6f, 6139.192f, 5.525f, 111.24f, "FANATIC LAUNCHER RC", 1))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[0], -915.6f, 6139.192f, 5.525f, 1, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_28[0], 2.52f, 0f, 111.24f, 0, 0);
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				Var8 = { -916.6389f, 6137.046f, 4.7157f };
				uParam0->f_41[0] = OBJECT::CREATE_OBJECT(iVar0[1], Var8, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_41[0], -916.6389f, 6137.046f, 4.7157f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[0], 1.7f, 19.1067f, 79.515f, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_41[0], -0.0949f, 0.1369f, 0.6325f, 0.7564f);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				Var8 = { -917.7f, 6138.89f, 4.72f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var8, &(Var8.f_2));
				uParam0->f_41[1] = OBJECT::CREATE_OBJECT(iVar0[2], Var8, 1, 1, 0);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], 1);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[1], -6.625818f, 1.30159f, -1.248891f, 0, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[2]))
			{
				Var8 = { -915.6122f, 6137.662f, 4.6129f };
				uParam0->f_41[2] = OBJECT::CREATE_OBJECT(iVar0[3], Var8, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_41[2], -915.6122f, 6137.662f, 4.6129f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[2], -1.6843f, 2.1363f, -0.0913f, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_41[2], -0.0147f, 0.0187f, -0.0011f, 0.9997f);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
			{
				Var8 = { -915.4199f, 6137.855f, 4.6221f };
				uParam0->f_41[3] = OBJECT::CREATE_OBJECT(iVar0[4], Var8, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_41[3], -915.4199f, 6137.855f, 4.6221f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[3], -5.793f, 1.496f, -36.333f, 2, 1);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_41[3], -0.0439f, 0.0281f, -0.312f, 0.9487f);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], 1);
			}
			if (bVar7)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar6]);
				iVar6++;
			}
			return 1;
			break;
	}
	return 0;
}







int func_234(var uParam0)//Position - 0xD8B0
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = joaat("u_m_y_cyclist_01");
	iVar0[2] = joaat("scorcher");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "EF_2_RCM", 24);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcm_fanatic2", "ef_2_rcm__maryann_biking_maryann", 0);
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
				if (!GlobalFunc_7967(&(uParam0->f_28[0]), 61, 809.66f, 1279.76f, 360.49f, 122.53f, "FANATIC LAUNCHER RC", 1))
				{
					bVar5 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				GlobalFunc_6479(&(uParam0->f_28[1]), iVar0[1], 808.43f, 1279.16f, 360.47f, -79.11f, 26);
				if (GlobalFunc_115(uParam0->f_28[1]))
				{
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 1, 0, 0);
					PED::SET_PED_PROP_INDEX(uParam0->f_28[1], 0, 0, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], 1);
					PED::SET_PED_LOD_MULTIPLIER(uParam0->f_28[1], 3.5f);
				}
				else
				{
					bVar5 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[2], 808.35f, 1277.2f, 360.15f, 216.5f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				GlobalFunc_8017(&(uParam0->f_35[1]), iVar0[2], 807.89f, 1275.73f, 360.18f, 208.2f);
			}
			if (bVar5)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			iVar4 = 0;
			while (iVar4 <= 1)
			{
				if (GlobalFunc_115(uParam0->f_35[iVar4]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[iVar4], iVar4);
				}
				iVar4++;
			}
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[2], 1);
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcm_fanatic2"))
			{
				if (GlobalFunc_115(uParam0->f_28[1]))
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcm_fanatic2", "ef_2_rcm__maryann_biking_cyclist", 8f, -8f, -1, 1, 0, 0, 0, 0);
					GlobalFunc_143("Playing Mary Ann's friend anim...");
				}
			}
			func_235();
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

int func_235()//Position - 0xDB62
{
	int iVar0;
	
	iVar0 = 0;
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_facgate_03_l"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_facgate_03_l"), 801.7148f, 1270.138f, 359.2855f, 1, 0f, 0);
		iVar0++;
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9195f, 1280.92f, 360.7272f, 6f, joaat("prop_facgate_03_r"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_facgate_03_r"), 802.9195f, 1280.92f, 360.7272f, 1, 0f, 0);
		iVar0++;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}





int func_240(var uParam0)//Position - 0xDD2B
{
	int iVar0[1];
	int iVar2;
	bool bVar3;
	
	iVar0[0] = uLocal_91;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			StringCopy(&(uParam0->f_9), "EF_1_RCM", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base", 0);
			uParam0->f_48.f_5 = { -1878.223f, -440.5181f, 46.03983f };
			uParam0->f_48.f_8 = { 0f, 0f, 159.97f };
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
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 61, -1878.27f, -440.55f, 46.23f, 165.94f, "FANATIC LAUNCHER RC", 1))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_28[0], 1);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], 1);
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














void func_254(int iParam0, bool bParam1)//Position - 0xE39F
{
	char* sVar0;
	
	if (bParam1)
	{
		GlobalFunc_9165(iParam0, 0, 0, 0);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_97))
	{
		HUD::REMOVE_BLIP(&uLocal_97);
	}
	GlobalFunc_6487(&(iParam0->f_48));
	if (*iParam0 == 22)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_92, 0);
	}
	if (iLocal_93 != -1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Ending off-mission cutscene request");
		GlobalFunc_6473(&iLocal_93);
	}
	switch (*iParam0)
	{
		case 21:
			sVar0 = "FAN1_AMB";
			break;
		
		case 22:
			sVar0 = "FAN2_AMB";
			break;
		
		case 23:
			sVar0 = "FAN3_AMB";
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




















