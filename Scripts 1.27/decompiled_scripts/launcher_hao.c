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
	int iVar64[1];
	
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
	uLocal_91 = GlobalFunc_4946(53);
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
		func_239(&Var0, 1);
	}
	iVar64[0] = 24;
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
	if (GlobalFunc_891(41))
	{
		GlobalFunc_143("SP_MISSION_FRANKLIN_1 is available... [TERMINATING]");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		GlobalFunc_143("SP_MISSION_FRANKLIN_1 is not available...");
	}
	while (!func_216(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			GlobalFunc_143("Player out of range [TERMINATING]");
			func_239(&Var0, 1);
		}
	}
	uLocal_93 = PED::ADD_SCENARIO_BLOCKING_AREA(-103.0011f, -1281.636f, 26.3686f, -23.246f, -1241.361f, 30.335f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(Var61, Var0.f_15, 1, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_181(&Var0, 1))
		{
			func_239(&Var0, 1);
		}
		if (GlobalFunc_891(41))
		{
			GlobalFunc_143("SP_MISSION_FRANKLIN_1 became available... [TERMINATING]");
			func_239(&Var0, 1);
		}
		else
		{
			GlobalFunc_143("SP_MISSION_FRANKLIN_1 is not available...");
		}
		if (GlobalFunc_4940(Var0.f_35[0]))
		{
			if (!GlobalFunc_4525(-72.323f, -1258.643f, 28.648f, ENTITY::GET_ENTITY_COORDS(Var0.f_35[0], 1), 1056964608))
			{
				GlobalFunc_143("Player has moved HAO's vehicle [TERMINATING]");
				GlobalFunc_7522(&Var0);
				func_239(&Var0, 1);
			}
		}
		GlobalFunc_9527(Var0);
		GlobalFunc_8257(&iLocal_92, &(Var0.f_9), Var61);
		GlobalFunc_7520(&Var0, Var61, "HAO1AU", "HAO1_HCO", 3, "HAO", 5000, 1101004800);
		if (GlobalFunc_10897(&Var0, 0))
		{
			if (!func_2(&Var0))
			{
				func_239(&Var0, 1);
			}
			if (GlobalFunc_4504(&Var0))
			{
				func_239(&Var0, 0);
			}
		}
	}
}


int func_2(var uParam0)//Position - 0x2E4
{
	struct<4> Var0;
	char* sVar32;
	
	if (!GlobalFunc_199())
	{
		while (!GlobalFunc_9038(*uParam0))
		{
			if (GlobalFunc_4507(*uParam0))
			{
				GlobalFunc_8535();
			}
			if (!func_181(uParam0, *uParam0 != 2))
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
	if (!GlobalFunc_10547(uParam0))
	{
		GlobalFunc_143("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	GlobalFunc_6675(*uParam0, &Var0);
	MemCopy(&sVar32, {GlobalFunc_44(*uParam0)}, 4);
	GlobalFunc_5225(&sVar32, Var0.f_3, 0);
	GlobalFunc_865(*uParam0);
	if (!GlobalFunc_199())
	{
		if (uParam0->f_16 == 2)
		{
			GlobalFunc_11143(&(uParam0->f_1), 0);
		}
		else
		{
			GlobalFunc_11143(&(uParam0->f_1), 1);
		}
	}
	GlobalFunc_8394(*uParam0, Var0);
	return 1;
}



















































































































































































int func_181(var uParam0, bool bParam1)//Position - 0xB3F8
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
		if (!func_189(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_189(uParam0, 0, 0))
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








int func_189(var uParam0, bool bParam1, int iParam2)//Position - 0xBC8A
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
						if (func_191(uParam0->f_28[iVar0], 1126825984))
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


int func_191(int iParam0, float fParam1)//Position - 0xBF7A
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
				if (func_192(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_192(int iParam0, float fParam1)//Position - 0xBFF0
{
	return func_193(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_193(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xC00A
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_201(iParam0, iParam1);
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
		iVar4 = func_196();
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



int func_196()//Position - 0xC2BC
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





int func_201(int iParam0, int iParam1)//Position - 0xC412
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















int func_216(int iParam0)//Position - 0xC9E9
{
	if (!func_217(iParam0))
	{
		return 0;
	}
	GlobalFunc_143("Created initial scene");
	return 1;
}

int func_217(var uParam0)//Position - 0xCA08
{
	int iVar0[4];
	int iVar5;
	var uVar6;
	char* sVar7;
	bool bVar8;
	var uVar9;
	struct<3> Var10;
	
	sVar7 = "special_ped@hao@base";
	iVar0[0] = uLocal_91;
	iVar0[1] = joaat("penumbra");
	iVar0[2] = joaat("prop_npc_phone");
	iVar0[3] = joaat("ruiner");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -72.13491f, -1256.712f, 27.68361f };
			uParam0->f_17[1 /*3*/] = { -72.18015f, -1267.587f, 29.24852f };
			uParam0->f_24 = 25f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 0;
			StringCopy(&(uParam0->f_9), "HAO_MCS_1", 24);
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar5]);
				iVar5++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar7);
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar7))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar8 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!GlobalFunc_7967(&(uParam0->f_28[0]), 53, -71.93684f, -1259.7f, 28.19359f, -177.55f, "HAO LAUNCHER RC - HAO", 1))
				{
					bVar8 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8017(&(uParam0->f_35[0]), iVar0[1], -72.3226f, -1258.643f, 28.1915f, 90.8326f);
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 38, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[0], 91, 0);
				VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_35[0], 0);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 0, 2);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 1, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 2, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 3, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 4, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 6, 0);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 7, 2);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 10, 0);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 23, 20);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 0, 2, 0);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 1, 1, 0);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 2, 1, 0);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 3, 1, 0);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 4, 1, 0);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 6, 0, 0);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 7, 2, 0);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 10, 0, 0);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 23, 20, 0);
				VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_35[0], 18, 1);
				VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_35[0], 17, 1);
				VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_35[0], 22, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
				VEHICLE::ROLL_DOWN_WINDOW(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_35[0], 2);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[1], 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0]);
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				GlobalFunc_8017(&(uParam0->f_35[1]), iVar0[3], -91.07f, -1273.45f, 28.86f, 0.57f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 10);
			}
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				GlobalFunc_5742(&(uParam0->f_41[0]), iVar0[2], -71.93684f, -1259.078f, 28.19359f, -177.55f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
			}
			if (bVar8)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_4924(uParam0->f_28[0]) && GlobalFunc_4940(uParam0->f_35[0]))
			{
				uVar9 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_35[0], "chassis_dummy");
				Var10 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_35[0], uVar9) };
				uVar6 = PED::CREATE_SYNCHRONIZED_SCENE(Var10, ENTITY::GET_ENTITY_ROTATION(uParam0->f_35[0], 2), 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar6, 1);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uVar6, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uVar6, sVar7, "hao_base", 8f, -8f, 9, 16, 1148846080, 0);
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
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






















void func_239(int iParam0, bool bParam1)//Position - 0xD64C
{
	if (bParam1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		GlobalFunc_9165(iParam0, 0, 0, 0);
	}
	if (iLocal_92 != -1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Ending off-mission cutscene request");
		GlobalFunc_6473(&iLocal_92);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_93, 0);
	if (bParam1)
	{
		GlobalFunc_9527(*iParam0);
	}
	GlobalFunc_6484();
	GlobalFunc_143("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

















