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
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var3;
	
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
	iLocal_84 = -1;
	iLocal_85 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_55();
	}
	if (!func_52())
	{
		func_55();
	}
	if (!GlobalFunc_4950(uLocal_81))
	{
		func_55();
	}
	else
	{
		func_50();
		iLocal_82 = MISC::GET_GAME_TIMER();
		iLocal_84 = func_49();
		iLocal_83 = 0;
		GlobalFunc_2325(1, &uLocal_87);
	}
	while (true)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_4950(uLocal_81))
			{
				func_55();
			}
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			Var3 = { ENTITY::GET_ENTITY_COORDS(uLocal_81, 1) };
			if (SYSTEM::VDIST2(Var0, Var3) >= (100f * 100f))
			{
				func_55();
			}
			switch (iLocal_86)
			{
				case 0:
					func_43(Var3, Var0, 18000, 1101004800);
					if (func_25(&iLocal_81, 0))
					{
						func_24();
						func_16(0);
						func_12(Var3, Var0);
						STREAMING::REQUEST_ANIM_DICT(GlobalFunc_2310());
						iLocal_86 = 1;
					}
					break;
				
				case 1:
					if (func_5(&iLocal_81, &uLocal_78, &iLocal_85))
					{
						iLocal_86 = 2;
					}
					break;
				
				case 2:
					if (!GlobalFunc_7104(iLocal_81, 1805844857) && !PED::IS_PED_FLEEING(iLocal_81))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_81, GlobalFunc_2310(), GlobalFunc_2308(), 3))
						{
							func_1();
						}
					}
					else
					{
						func_55();
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1B0
{
	if (GlobalFunc_4950(iLocal_81))
	{
		func_2(&iLocal_81);
		TASK::TASK_SMART_FLEE_PED(iLocal_81, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_81, 1);
	}
}

void func_2(var uParam0)//Position - 0x1E0
{
	if (GlobalFunc_4950(*uParam0))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 2, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 64, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 128, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 8, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 1, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 32, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, 1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 118, 1);
	}
}



int func_5(var uParam0, var uParam1, int iParam2)//Position - 0x286
{
	int iVar0;
	
	if (GlobalFunc_4950(*uParam0))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, GlobalFunc_2296(), GlobalFunc_2303(), 3))
		{
			if (!PED::IS_PED_RAGDOLL(*uParam0) || TASK::IS_PED_GETTING_UP(*uParam0))
			{
				STREAMING::REQUEST_ANIM_DICT(GlobalFunc_2310());
				if (STREAMING::HAS_ANIM_DICT_LOADED(GlobalFunc_2310()))
				{
					*iParam2 = PED::CREATE_SYNCHRONIZED_SCENE(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(*iParam2, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(*iParam2, 0);
					if (GlobalFunc_7104(*uParam0, 1785177548))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, -1000f, 1);
					}
					TASK::TASK_SYNCHRONIZED_SCENE(*uParam0, *iParam2, GlobalFunc_2310(), GlobalFunc_2308(), 1000f, -4f, 4626, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
					if (GlobalFunc_115(*uParam1))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam1, GlobalFunc_2296(), GlobalFunc_2302(), 3))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(*uParam1, *iParam2, GlobalFunc_2309(), GlobalFunc_2310(), 16f, -4f, iVar0, 1148846080);
					}
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}







void func_12(struct<3> Param0, struct<3> Param3)//Position - 0x429
{
	if (GlobalFunc_4950(iLocal_81))
	{
		if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_81))
		{
			if (SYSTEM::VDIST2(Param3, Param0) < (35f * 35f))
			{
				func_13(&iLocal_81, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x46F
{
	bool bVar0;
	
	if (GlobalFunc_4950(*uParam0))
	{
		bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(*uParam0);
		if (bVar0)
		{
			AUDIO::STOP_PED_SPEAKING(*uParam0, 0);
		}
		GlobalFunc_6500(*uParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			AUDIO::STOP_PED_SPEAKING(*uParam0, 1);
		}
	}
}



void func_16(bool bParam0)//Position - 0x6BA
{
	struct<6> Var0;
	var uVar6;
	
	if (GlobalFunc_111())
	{
		Var0 = { GlobalFunc_560() };
		uVar6 = func_21();
		if (MISC::ARE_STRINGS_EQUAL(&Var0, uVar6))
		{
			if (bParam0)
			{
				GlobalFunc_5105();
			}
			else
			{
				GlobalFunc_4956();
			}
		}
	}
}





char* func_21()//Position - 0x757
{
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, 3))
	{
		return "BB4_loiter";
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, 2))
	{
		return "BB3_loiter";
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, 1))
	{
		return "BB2_loiter";
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}



void func_24()//Position - 0x80A
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_80))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_79))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 0);
	}
}

int func_25(var uParam0, bool bParam1)//Position - 0x832
{
	if (GlobalFunc_4950(*uParam0))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*uParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*uParam0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(*uParam0))
		{
			return 1;
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
			{
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_78))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_78))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_79))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_79))
				{
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_80))
				{
					return 1;
				}
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(*uParam0, 60))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(*uParam0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (PED::HAS_PED_RECEIVED_EVENT(*uParam0, 50))
		{
			return 1;
		}
		if (func_33(*uParam0, 1126825984))
		{
			return 1;
		}
		if (GlobalFunc_8324(*uParam0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 15f))
		{
			return 1;
		}
		if (PED::HAS_PED_RECEIVED_EVENT(*uParam0, 72))
		{
			return 1;
		}
		if (bParam1)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}








int func_33(int iParam0, float fParam1)//Position - 0xD56
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
				if (func_34(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_34(int iParam0, float fParam1)//Position - 0xDCC
{
	return func_35(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_35(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xDE4
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_41(iParam0, iParam1);
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
		iVar4 = func_38();
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



int func_38()//Position - 0x1096
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



int func_41(int iParam0, int iParam1)//Position - 0x118C
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


int func_43(struct<3> Param0, struct<3> Param3, int iParam6, float fParam7)//Position - 0x11F3
{
	var uVar0;
	char[] cVar165[8];
	char* sVar166;
	
	if (iLocal_83 < iLocal_84)
	{
		if (!GlobalFunc_111())
		{
			if (SYSTEM::VDIST2(Param3, Param0) < (fParam7 * fParam7))
			{
				if (MISC::GET_GAME_TIMER() - iLocal_82) > (iParam6 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000))
				{
					uVar0 = 16;
					GlobalFunc_1286(&uVar0, 3, iLocal_81, "MAUDE", 0, 1);
					cVar165 = func_46();
					sVar166 = func_21();
					GlobalFunc_5157(&uVar0, cVar165, sVar166, 7, 0, 0);
					iLocal_82 = MISC::GET_GAME_TIMER();
					iLocal_83++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_82 = MISC::GET_GAME_TIMER();
		}
	}
	return 0;
}



char* func_46()//Position - 0x130E
{
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, 3))
	{
		return "BB4AUD";
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, 2))
	{
		return "BB3AUD";
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, 1))
	{
		return "BB2AUD";
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, 0))
	{
		return "BB1AUD";
	}
	return "MAUDEAU";
}



int func_49()//Position - 0x1502
{
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, 3))
	{
		return 4;
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, 2))
	{
		return 4;
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, 1))
	{
		return 4;
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, 0))
	{
		return 3;
	}
	return 4;
}

void func_50()//Position - 0x1560
{
	struct<3> Var0;
	
	if (GlobalFunc_4950(iLocal_81))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_81))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_81, 1, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_81, 1);
		PED::SET_PED_MONEY(iLocal_81, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_81, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_81, 1862763509);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_81, 0);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_81, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_81, 118, 0);
		Var0 = { 2728.33f, 4145.6f, 43.89f };
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Var0, 10f, joaat("prop_table_03b"), 0))
		{
			iLocal_79 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 10f, joaat("prop_table_03b"), 1, 0, 1);
			if (GlobalFunc_115(iLocal_79))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_79, 2727.4f, 4145.56f, 43.68f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_79, -92.17f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 1);
			}
		}
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Var0, 10f, joaat("prop_laptop_01a"), 0))
		{
			iLocal_80 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 10f, joaat("prop_laptop_01a"), 0, 0, 1);
			if (GlobalFunc_115(iLocal_80))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_80))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_80, 1, 0);
				}
				ENTITY::SET_ENTITY_COORDS(iLocal_80, 2727.686f, 4145.715f, 44.08f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_80, 71f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, 1);
			}
		}
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Var0, 10f, joaat("prop_table_03_chr"), 0))
		{
			iLocal_78 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 10f, joaat("prop_table_03_chr"), 0, 0, 1);
			if (GlobalFunc_115(iLocal_78))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_78))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_78, 1, 0);
				}
				ENTITY::SET_ENTITY_COORDS(iLocal_78, 2728.35f, 4145.59f, 43.3f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_78, -91.28f);
			}
		}
	}
}


int func_52()//Position - 0x172D
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (GlobalFunc_4950(uVar2[iVar1]))
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == GlobalFunc_4946(62))
				{
					iLocal_81 = uVar2[iVar1];
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}



void func_55()//Position - 0x17CB
{
	GlobalFunc_2325(0, &uLocal_87);
	if (GlobalFunc_115(iLocal_80))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, 0);
	}
	GlobalFunc_129(&iLocal_80, 0);
	if (GlobalFunc_115(iLocal_79))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, 0);
	}
	GlobalFunc_129(&iLocal_79, 0);
	if (GlobalFunc_115(iLocal_78))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_78, 0);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_78, "special_ped@maude@base", "base_chair", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(iLocal_78, "base_chair", "special_ped@maude@base", -1000f);
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_78, -1000f, 1);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_78, GlobalFunc_2310(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(iLocal_78, "Female_Flee_Table_Left_Maude_Chair", GlobalFunc_2310(), -1000f);
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_78, -1000f, 1);
		}
	}
	GlobalFunc_129(&iLocal_78, 0);
	if (GlobalFunc_4950(iLocal_81))
	{
		PED::SET_PED_KEEP_TASK(iLocal_81, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_81, 118, 1);
	}
	GlobalFunc_132(&iLocal_81, 1, 0, 1);
	STREAMING::REMOVE_ANIM_DICT(GlobalFunc_2310());
	SCRIPT::TERMINATE_THIS_THREAD();
}



