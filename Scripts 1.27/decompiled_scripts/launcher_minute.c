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
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
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
	iLocal_91 = GlobalFunc_4946(56);
	iLocal_92 = GlobalFunc_4946(57);
	iLocal_93 = GlobalFunc_4946(59);
	iLocal_94 = joaat("pranger");
	iLocal_95 = -1;
	MISC::_0x6F2135B6129620C1(1);
	GlobalFunc_6486();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	GlobalFunc_4517(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	iVar64[0] = 32;
	iVar64[1] = 33;
	iVar64[2] = 34;
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
		func_253(&Var0, 1);
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
	while (!func_226(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			GlobalFunc_143("Player out of range [TERMINATING]");
			func_253(&Var0, 1);
		}
	}
	if (Var0 == 32)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(35f, 3409f, 322f) - Vector(20f, 20f, 20f), Vector(35f, 3409f, 322f) + Vector(20f, 20f, 20f), 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Vector(35f, 3409f, 322f) - Vector(20f, 20f, 20f), Vector(35f, 3409f, 322f) + Vector(20f, 20f, 20f));
		MISC::CLEAR_AREA(Var61, 40f, 1, 0, 0, 0);
	}
	else if (Var0 == 34)
	{
		uLocal_96 = func_225();
	}
	MISC::CLEAR_AREA(Var61, Var0.f_15, 1, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_190(&Var0, 1))
		{
			func_253(&Var0, 1);
		}
		if (Var0 == 32)
		{
			func_189();
			if (GlobalFunc_4940(Var0.f_35[1]))
			{
				if (!GlobalFunc_4525(329.513f, 3402.691f, 36.258f, ENTITY::GET_ENTITY_COORDS(Var0.f_35[1], 1), 1056964608))
				{
					GlobalFunc_143("Player has moved SURFER2 vehicle [TERMINATING]");
					GlobalFunc_7522(&Var0);
					func_253(&Var0, 1);
				}
			}
		}
		GlobalFunc_9527(Var0);
		GlobalFunc_8257(&iLocal_95, &(Var0.f_9), Var61);
		if (Var0 == 32)
		{
			func_172(&Var0, Var61, "MIN1AUD", "MIN1_AMB", 3, "JOE", 4, "JOSEF", &uLocal_98);
		}
		else if (Var0 == 34)
		{
			GlobalFunc_7528(&Var0, Var61, "MIN3AUD", "MIN3_AMB", 3, "MANUEL", 5000, 1101004800);
		}
		if (GlobalFunc_10898(&Var0, 0))
		{
			if (GlobalFunc_4508(Var0))
			{
				GlobalFunc_7518(Var0, &uLocal_97);
			}
			if (!func_2(&Var0))
			{
				func_253(&Var0, 1);
			}
			if (GlobalFunc_4504(&Var0))
			{
				func_253(&Var0, 0);
			}
		}
	}
}


int func_2(int iParam0)//Position - 0x394
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










































































































































































int func_172(int iParam0, struct<3> Param1, char[4] cParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, var uParam10)//Position - 0xB298
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

















void func_189()//Position - 0xBB9A
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Joe", 1, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Josef", 0, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Josef", 1, 0, 0, 0);
	}
}

int func_190(var uParam0, bool bParam1)//Position - 0xBBCD
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
		if (!func_198(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_198(uParam0, 0, 0))
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








int func_198(var uParam0, bool bParam1, int iParam2)//Position - 0xC461
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
						if (func_200(uParam0->f_28[iVar0], 1126825984))
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


int func_200(int iParam0, float fParam1)//Position - 0xC751
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
				if (func_201(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_201(int iParam0, float fParam1)//Position - 0xC7C7
{
	return func_202(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_202(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xC7DF
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_210(iParam0, iParam1);
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
		iVar4 = func_205();
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



int func_205()//Position - 0xCA91
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





int func_210(int iParam0, int iParam1)//Position - 0xCBE7
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















var func_225()//Position - 0xD1BE
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-309.1f, 6205.4f, 30f, -279.33f, 6217.98f, 40f, 0, 1, 1, 1);
}

int func_226(int iParam0)//Position - 0xD1EC
{
	switch (*iParam0)
	{
		case 32:
			if (!func_238(iParam0))
			{
				return 0;
			}
			break;
		
		case 33:
			if (!func_237(iParam0))
			{
				return 0;
			}
			break;
		
		case 34:
			if (!func_227(iParam0))
			{
				return 0;
			}
			break;
	}
	GlobalFunc_143("Created initial scene");
	return 1;
}

int func_227(var uParam0)//Position - 0xD24A
{
	int iVar0[5];
	int iVar6;
	bool bVar7;
	
	iVar0[0] = joaat("sabregt");
	iVar0[1] = joaat("bison");
	iVar0[2] = iLocal_93;
	iVar0[3] = joaat("prop_table_03_chr");
	iVar0[4] = joaat("prop_cs_rolled_paper");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 4;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "MMB_3_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_17[0 /*3*/] = { -303.512f, 6211.81f, 30.48759f };
			uParam0->f_17[1 /*3*/] = { 20f, 20f, 3f };
			GlobalFunc_2360(&(uParam0->f_48), "rcmminute3base", "base", "beckon");
			uParam0->f_48.f_5 = { -303.73f, 6211.56f, 31.49f };
			uParam0->f_48.f_8 = { 0f, 0f, -2.8f };
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar6]);
				iVar6++;
			}
			iLocal_90 = 1;
			return 0;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_90 = 2;
			return 0;
			break;
		
		case 2:
			bVar7 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[3], -303.74f, 6211.56f, 30.49f, -176.77f);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 59, uParam0->f_48.f_5, -2.8f, "RCM MINUTE - MANUEL", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 0, 0, 0, 0);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], 0);
					if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
					}
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[0], -281.93f, 6198.32f, 30.77f, -135.32f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				GlobalFunc_8017(&(uParam0->f_35[1]), iVar0[1], -291.72f, 6208.33f, 30.87f, -134.5016f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[1], 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				GlobalFunc_5742(&(uParam0->f_41[1]), iVar0[4], -303.74f, 6211.56f, 30.49f, -176.77f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 18905), 0.12f, 0f, 0.03f, 90f, 0f, 90f, 0, 0, 0, 0, 2, 1);
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










int func_237(var uParam0)//Position - 0xD82F
{
	int iVar0[1];
	int iVar2;
	
	iVar0[0] = iLocal_94;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 1;
			uParam0->f_15 = 7f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "MMB_2_RCM", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			iLocal_90 = 1;
			return 0;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0))
			{
				return 0;
			}
			iLocal_90 = 2;
			return 0;
			break;
		
		case 2:
			GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[0], 20.8f, 4532.65f, 104.66f, 284.7f);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 2);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(uParam0->f_35[0], 5, 0);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_35[0], 14f);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], 1);
			}
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

int func_238(var uParam0)//Position - 0xD942
{
	int iVar0[4];
	int iVar5;
	bool bVar6;
	
	iVar0[0] = iLocal_94;
	iVar0[1] = joaat("surfer2");
	iVar0[2] = iLocal_91;
	iVar0[3] = iLocal_92;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 15f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "MMB_1_RCM", 24);
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar5]);
				iVar5++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmminute1");
			MISC::CLEAR_AREA(321.69f, 3408.64f, 35.34f, 10f, 1, 0, 0, 0);
			iLocal_90 = 1;
			break;
		
		case 1:
			MISC::CLEAR_AREA(321.69f, 3408.64f, 35.34f, 10f, 1, 0, 0, 0);
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmminute1"))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar6 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 56, 329.3f, 3404.2f, 35.8f, -174.9f, "RCM MINUTE - JOE", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 1, 0, 0, 0);
				}
				else
				{
					bVar6 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[1]), 57, 328.1f, 3403.8f, 35.8f, -149.6f, "RCM MINUTE - JOSEF", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[1], 0, 0, 0, 0);
					PED::SET_PED_PROP_INDEX(uParam0->f_28[1], 1, 0, 0, 0);
				}
				else
				{
					bVar6 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[0], 321.69f, 3408.64f, 35.34f, -105.8f);
				func_239(uParam0->f_35[0], iVar0[0]);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				GlobalFunc_8017(&(uParam0->f_35[1]), iVar0[1], 329.49f, 3402.71f, 36.29f, 284.36f);
				func_239(uParam0->f_35[1], iVar0[1]);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_35[1], 0);
			}
			if (bVar6)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmminute1"))
			{
				if (GlobalFunc_115(uParam0->f_28[0]))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_28[0], "rcmminute1", "base_joe", 3))
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_28[0]);
						TASK::TASK_PLAY_ANIM(uParam0->f_28[0], "rcmminute1", "base_joe", 8f, -8f, -1, 1, 0, 0, 0, 0);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 185, 1);
					}
				}
				if (GlobalFunc_115(uParam0->f_28[1]))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_28[1]);
					TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcmminute1", "base_josef", 8f, -8f, -1, 1, 0, 0, 0, 0);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 185, 1);
				}
			}
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar5]);
				iVar5++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_239(int iParam0, var uParam1)//Position - 0xDC63
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		VEHICLE::SET_VEHICLE_ALARM(iParam0, 0);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(uParam1, 1);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iParam0, 0, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam0, 1);
	}
}














void func_253(int iParam0, bool bParam1)//Position - 0xE1B3
{
	char* sVar0;
	
	if (bParam1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		GlobalFunc_9165(iParam0, 0, 0, 0);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_97))
	{
		HUD::REMOVE_BLIP(&uLocal_97);
	}
	if (*iParam0 == 32)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(35f, 3409f, 322f) - Vector(20f, 20f, 20f), Vector(35f, 3409f, 322f) + Vector(20f, 20f, 20f), 1, 1);
	}
	else if (*iParam0 == 34)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_96, 0);
	}
	GlobalFunc_6487(&(iParam0->f_48));
	if (iLocal_95 != -1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Ending off-mission cutscene request");
		GlobalFunc_6473(&iLocal_95);
	}
	switch (*iParam0)
	{
		case 32:
			sVar0 = "MIN1_AMB";
			break;
		
		case 34:
			sVar0 = "MIN3_AMB";
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





















