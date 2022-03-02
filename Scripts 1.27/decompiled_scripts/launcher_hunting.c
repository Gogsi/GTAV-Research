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
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	struct<3> Local_96 = { 0, 0, 0 } ;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
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
	struct<3> Var67;
	
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
	uLocal_91 = GlobalFunc_4946(54);
	iLocal_92 = joaat("dune");
	iLocal_93 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_sniperrifle"));
	iLocal_94 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_at_scope_large"));
	iLocal_95 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_at_ar_supp_02"));
	Local_96 = { -683.8261f, 5840.81f, 16.566f };
	iLocal_100 = -1;
	MISC::_0x6F2135B6129620C1(1);
	GlobalFunc_6486();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	GlobalFunc_4517(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	iVar64[0] = 25;
	iVar64[1] = 26;
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
		func_240(&Var0, 1);
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
	while (!func_215(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			GlobalFunc_143("Player out of range [TERMINATING]");
			func_240(&Var0, 1);
		}
	}
	MISC::CLEAR_AREA(Var61, 3f, 1, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_177(&Var0, 1))
		{
			func_240(&Var0, 1);
		}
		GlobalFunc_9527(Var0);
		GlobalFunc_8257(&iLocal_100, &(Var0.f_9), Var61);
		if (Var0 == 25)
		{
			GlobalFunc_7526(&Var0, Var61, "HUNT1AU", "HUNT1_AMB", 3, "CLETUS", 5000, 1101004800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			Var67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		}
		if (Var0 == 25)
		{
			if (SYSTEM::VDIST2(Var61, Var67) < (10f * 10f))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
			}
		}
		if (GlobalFunc_10898(&Var0, 0) && MISC::ABSF((Var61.f_2 - Var67.f_2)) < 2.5f)
		{
			if (!func_2(&Var0))
			{
				func_240(&Var0, 1);
			}
			if (GlobalFunc_4504(&Var0))
			{
				func_240(&Var0, 0);
			}
		}
	}
}


int func_2(int iParam0)//Position - 0x2EA
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
			if (!func_177(iParam0, *iParam0 != 2))
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















































































































































































int func_177(int iParam0, bool bParam1)//Position - 0xAFF3
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
		if (!func_187(iParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (iParam0->f_16 == 0)
	{
		if (!func_187(iParam0, 0, 0))
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
		func_178(iParam0->f_28[0], &(iParam0->f_48), *iParam0);
	}
	return 1;
}

void func_178(int iParam0, var uParam1, int iParam2)//Position - 0xB266
{
	var uVar0;
	var uVar1;
	
	if (GlobalFunc_115(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (GlobalFunc_2358(uParam1))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
						if (iParam2 != 21)
						{
							if (GlobalFunc_100(uParam1->f_5, 0f, 0f, 0f))
							{
								TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								if (GlobalFunc_4512(uParam1))
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0f, 2, 0);
								}
								else
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0f, 2, 0);
								}
								TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!GlobalFunc_4512(uParam1) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (GlobalFunc_4511(iParam2) && !PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 25f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
						uParam1->f_3 = 5;
					}
					else if ((GlobalFunc_4512(uParam1) && uParam1->f_4 == 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				if (GlobalFunc_100(uParam1->f_5, 0f, 0f, 0f))
				{
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				uParam1->f_4 = 1;
				if (GlobalFunc_4511(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!GlobalFunc_4511(iParam2) || PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 10f))
				{
					if (GlobalFunc_100(uParam1->f_5, 0f, 0f, 0f))
					{
						TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0f, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}









int func_187(var uParam0, bool bParam1, int iParam2)//Position - 0xBBB4
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
						if (func_189(uParam0->f_28[iVar0], 1126825984))
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


int func_189(int iParam0, float fParam1)//Position - 0xBEA4
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
				if (func_190(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_190(int iParam0, float fParam1)//Position - 0xBF1A
{
	return func_191(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_191(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xBF32
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_199(iParam0, iParam1);
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
		iVar4 = func_194();
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



int func_194()//Position - 0xC1E7
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





int func_199(int iParam0, int iParam1)//Position - 0xC33D
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
















int func_215(int iParam0)//Position - 0xC9B1
{
	switch (*iParam0)
	{
		case 25:
			if (!func_224(iParam0))
			{
				return 0;
			}
			break;
		
		case 26:
			if (!func_216(iParam0))
			{
				return 0;
			}
			break;
	}
	GlobalFunc_143("Created initial scene");
	return 1;
}

int func_216(var uParam0)//Position - 0xC9F8
{
	int iVar0[5];
	int iVar6;
	bool bVar7;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = iLocal_92;
	iVar0[2] = iLocal_93;
	iVar0[3] = iLocal_94;
	iVar0[4] = iLocal_95;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "HUN_2_MCS_1", 24);
			uParam0->f_15 = 4f;
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar6]);
				iVar6++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmhunting2");
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmhunting2"))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar7 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 54, -683.3276f, 5841.042f, 17.217f, 8.33f, "RC HUNTER 2", 1))
				{
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("weapon_pumpshotgun"), 0, 1, 1);
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_217(&(uParam0->f_35[0]), -685.2281f, 5833.982f, 16.331f, 313.2204f, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_99))
			{
				iLocal_99 = WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_sniperrifle"), 0, Local_96, 0, 1065353216, 0);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_99, joaat("component_at_scope_large"));
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_99, joaat("component_at_ar_supp_02"));
			}
			if (bVar7)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmhunting2"))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_28[0], "rcmhunting2", "_idle_loop", -683.152f, 5841.281f, 17.32f, 0f, 0f, 17.024f, 1000f, -8f, -1, 790537, 0f, 2, 1);
				}
			}
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 3088, 2);
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_96, 1f, iLocal_93, 0))
			{
				ENTITY::SET_ENTITY_ROTATION(iLocal_99, 0f, -90f, -162.64f, 2, 1);
			}
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

void func_217(var uParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0xCC2B
{
	func_218(uParam0, iLocal_92, Param1, fParam4);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 1, 1);
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 2, 0);
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 3, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*uParam0, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
		if (iParam5 == 1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 2);
		}
	}
}

void func_218(var uParam0, int iParam1, struct<3> Param2, var uParam5)//Position - 0xCC8C
{
	GlobalFunc_6689(uParam0);
	*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, uParam5, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 1000);
	}
}






int func_224(var uParam0)//Position - 0xCEC3
{
	int iVar0[2];
	int iVar3;
	bool bVar4;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = iLocal_92;
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 15f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "CLETUS_MCS_1_concat", 24);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "special_ped@cletus@base", "cletus_base", 0);
			STREAMING::REQUEST_ANIM_DICT("special_ped@cletus@base");
			iLocal_90 = 1;
			break;
		
		case 1:
			if ((!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48))) || !STREAMING::HAS_ANIM_DICT_LOADED("special_ped@cletus@base"))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_7967(&(uParam0->f_28[0]), 54, 1804.33f, 3931.33f, 33.83f, 91.63f, "RC HUNTER 1", 1))
				{
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("weapon_sniperrifle"), 0, 1, 1);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_217(&(uParam0->f_35[0]), 1806.732f, 3934.353f, 33.3275f, 76.1155f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(1804.501f, 3922.917f, 32.8091f, 2f, 0, 0, 0, 0, 0);
			}
			if (bVar4)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_115(uParam0->f_28[0]))
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(uParam0->f_28[0], joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02"));
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 104, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_28[0], joaat("weapon_sniperrifle"), 1);
				if (STREAMING::HAS_ANIM_DICT_LOADED("special_ped@cletus@base"))
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_28[0], "special_ped@cletus@base", "cletus_base", 8f, -8f, -1, 1, 0, 0, 0, 0);
				}
			}
			MISC::CLEAR_AREA_OF_PEDS(1801.159f, 3919.606f, 33.0662f, 5f, 0);
			PED::SET_PED_NON_CREATION_AREA(1803.603f, 3920.191f, 32.9855f, 1798.416f, 3918.291f, 35.0579f);
			MISC::CLEAR_AREA_OF_PEDS(1797.286f, 3927.359f, 33.0176f, 4f, 0);
			PED::SET_PED_NON_CREATION_AREA(1793.765f, 3926.749f, 35.1276f, 1799.73f, 3927.815f, 32.9875f);
			if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HANG_OUT_STREET"))
			{
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HANG_OUT_STREET", 0);
			}
			if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_DRINKING"))
			{
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_DRINKING", 0);
			}
			if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_SMOKING"))
			{
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_SMOKING", 0);
			}
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
















void func_240(int iParam0, bool bParam1)//Position - 0xD6F7
{
	if (bParam1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		GlobalFunc_9165(iParam0, 0, 0, 0);
	}
	if (iLocal_100 != -1)
	{
		GlobalFunc_143("SCRIPT TERMINATING: Ending off-mission cutscene request");
		GlobalFunc_6473(&iLocal_100);
	}
	if (bParam1)
	{
		GlobalFunc_9527(*iParam0);
	}
	GlobalFunc_6484();
	GlobalFunc_143("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

















