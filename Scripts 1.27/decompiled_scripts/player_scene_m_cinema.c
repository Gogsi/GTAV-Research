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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67[4] = { 0, 0, 0, 0 };
	int iLocal_72[4] = { 0, 0, 0, 0 };
	int iLocal_77[4] = { 0, 0, 0, 0 };
	struct<4> Local_82[4];
	struct<3> Local_99 = { 0, 0, 0 } ;
	float fLocal_102 = 0f;
	struct<3> Local_103[4];
	float fLocal_116[4] = { 0f, 0f, 0f, 0f };
#endregion

void __EntryFunction__()//Position - 0x0
{
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_56 = { 0f, 0f, 0f };
	Local_59 = { 0f, 0f, 0f };
	iLocal_62 = -1;
	iLocal_65 = 318;
	iLocal_66 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_30();
	}
	SYSTEM::WAIT(0);
	func_18();
	func_17();
	GlobalFunc_576();
	while (iLocal_66 && GlobalFunc_9549(1, iLocal_67[0]))
	{
		SYSTEM::WAIT(0);
		switch (iLocal_64)
		{
			case 0:
				if (func_6())
				{
					iLocal_64 = 1;
				}
				break;
			
			case 1:
				if (func_2())
				{
					iLocal_64 = 2;
				}
				break;
			
			case 2:
				func_1();
				break;
		}
	}
	func_30();
}

void func_1()//Position - 0xFE
{
	iLocal_66 = 0;
}

int func_2()//Position - 0x109
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_67)
	{
		func_3(iLocal_67[iVar0], iVar0);
		iVar0++;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_99) > 100f)
	{
		return 1;
	}
	return 0;
}

int func_3(int iParam0, int iParam1)//Position - 0x150
{
	char* sVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		switch (iLocal_77[iParam1])
		{
			case 0:
				if (GlobalFunc_2927())
				{
					return 0;
				}
				if (PED::IS_PED_INJURED(iParam0))
				{
					iLocal_77[iParam1] = -1;
					return 0;
				}
				if (func_4(iParam0))
				{
					iLocal_77[iParam1] = 2;
					return 0;
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1146898486) != 1)
				{
					TASK::TASK_WANDER_STANDARD(iParam0, 1193033728, 0);
					PED::SET_PED_KEEP_TASK(iLocal_67[iParam1], 1);
				}
				break;
			
			case 1:
				if (PED::IS_PED_INJURED(iParam0))
				{
					iLocal_77[iParam1] = -1;
					return 0;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_82[iParam1 /*4*/])))
				{
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(Local_82[iParam1 /*4*/]), &(iLocal_67[iParam1]), 1, 1424);
					iLocal_77[iParam1] = 4;
					return 0;
				}
				if (func_4(iParam0))
				{
					iLocal_77[iParam1] = 2;
					return 0;
				}
				sVar0 = "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(iParam0))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(iParam0, sVar0, 0, 1);
					PED::SET_PED_KEEP_TASK(iLocal_67[iParam1], 1);
				}
				break;
			
			case 2:
				iVar1 = 0;
				while (iVar1 < iLocal_77)
				{
					if (iParam1 != iVar1)
					{
						if (iLocal_77[iVar1] < 2 && iLocal_77[iParam1] >= 0)
						{
							iLocal_77[iVar1] = 2;
						}
					}
					iVar1++;
				}
				iLocal_77[iParam1] = 3;
				return 0;
				break;
			
			case 3:
				if (PED::IS_PED_INJURED(iParam0))
				{
					iLocal_77[iParam1] = -1;
					return 0;
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1805844857) != 1)
				{
					TASK::CLEAR_PED_TASKS(iParam0);
					TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 50f, 20000, 1, 0);
					return 1;
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (50f * 50f))
				{
					iLocal_77[iParam1] = 0;
					return 1;
				}
				break;
			
			case 4:
				return 0;
				break;
			
			case -1:
				return 0;
				break;
			
			default:
				return 0;
				break;
		}
		return 1;
	}
	return 0;
}

int func_4(int iParam0)//Position - 0x33B
{
	int iVar0;
	
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_67)
	{
		if (iParam0 != iLocal_67[iVar0])
		{
			if (iLocal_77[iVar0] < 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}


int func_6()//Position - 0x3F9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_67)
	{
		func_3(iLocal_67[iVar0], iVar0);
		iVar0++;
	}
	if (!GlobalFunc_2927())
	{
		return 1;
	}
	return 0;
}











void func_17()//Position - 0x736
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < iLocal_72)
		{
			if (iLocal_72[iVar0] != 0)
			{
				STREAMING::REQUEST_MODEL(iLocal_72[iVar0]);
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_72[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_72[iVar0]);
					bVar2 = false;
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_82[iVar0 /*4*/])))
			{
				SCRIPT::REQUEST_SCRIPT(&(Local_82[iVar0 /*4*/]));
				if (!SCRIPT::HAS_SCRIPT_LOADED(&(Local_82[iVar0 /*4*/])))
				{
					bVar2 = false;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_67)
	{
		if (iLocal_72[iVar0] != 0)
		{
			iLocal_67[iVar0] = PED::CREATE_PED(4, iLocal_72[iVar0], Local_99 + Local_103[iVar0 /*3*/], 0, 1, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_67[iVar0], (fLocal_102 + fLocal_116[iVar0]));
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_67[iVar0], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_67[iVar0], 13, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_67[iVar0], 17, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67[iVar0], 1);
			PED::SET_PED_CAN_RAGDOLL(iLocal_67[iVar0], 0);
		}
		iVar0++;
	}
}

void func_18()//Position - 0x863
{
	char[] cVar0[8];
	struct<109> Var8;
	struct<97> Var117;
	
	iLocal_65 = Global_89502;
	GlobalFunc_8273(iLocal_65, &Local_99, &fLocal_102, &cVar0);
	Var8.f_1 = -1;
	Var8.f_17 = 4;
	Var8.f_17.f_8 = 4;
	Var8.f_17.f_13 = 4;
	Var8.f_17.f_18 = 4;
	Var8.f_17.f_24 = 4;
	Var8.f_17.f_29 = 4;
	Var8.f_17.f_34 = 4;
	Var8.f_62 = 8;
	Var8.f_96.f_7 = 21;
	Var8.f_96.f_8 = 6;
	Var117.f_1 = -1;
	Var117.f_17 = 4;
	Var117.f_17.f_8 = 4;
	Var117.f_17.f_13 = 4;
	Var117.f_17.f_18 = 4;
	Var117.f_17.f_24 = 4;
	Var117.f_17.f_29 = 4;
	Var117.f_17.f_34 = 4;
	Var117.f_62 = 8;
	Var117.f_96.f_7 = 21;
	Var117.f_96.f_8 = 6;
	Var8 = 0;
	Var8.f_2 = iLocal_65;
	Var8.f_3 = Global_87845.f_45;
	GlobalFunc_7224(Var8, &Var117);
	switch (iLocal_65)
	{
		case 97:
			Local_103[0 /*3*/] = { Vector(45.5004f, -205.8167f, -1416.54f) - Local_99 };
			Local_103[1 /*3*/] = { Vector(45.5004f, -207.5375f, -1423.898f) - Local_99 };
			Local_103[2 /*3*/] = { Vector(45.5004f, -210.4254f, -1428.501f) - Local_99 };
			Local_103[3 /*3*/] = { Vector(45.5004f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-205.8167f, -210.4254f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1416.54f, -1428.501f)) - Local_99 };
			fLocal_116[0] = (5.8017f - fLocal_102);
			fLocal_116[1] = (2.582f - fLocal_102);
			fLocal_116[2] = (-47.7025f - fLocal_102);
			fLocal_116[3] = (65.2818f - fLocal_102);
			iLocal_72[0] = joaat("a_f_m_tourist_01");
			StringCopy(&(Local_82[0 /*4*/]), "", 16);
			iLocal_72[1] = joaat("a_m_y_hipster_01");
			StringCopy(&(Local_82[1 /*4*/]), "", 16);
			iLocal_72[2] = joaat("a_m_m_bevhills_01");
			StringCopy(&(Local_82[2 /*4*/]), "", 16);
			iLocal_72[3] = joaat("a_m_m_genfat_01");
			StringCopy(&(Local_82[3 /*4*/]), "", 16);
			iLocal_77[0] = 0;
			iLocal_77[1] = 0;
			iLocal_77[2] = 0;
			iLocal_77[3] = 0;
			break;
		
		case 158:
			Local_103[0 /*3*/] = { 1.2712f, 6.071f, -0.75f };
			Local_103[1 /*3*/] = { 3.8061f, 5.7599f, -0.5f };
			Local_103[2 /*3*/] = { 4.541f, 7.8487f, -0.4f };
			Local_103[3 /*3*/] = { 3.1051f, 13.7474f, -0.3463f };
			fLocal_116[0] = 123.059f;
			fLocal_116[1] = 134.0498f;
			fLocal_116[2] = 58.663f;
			fLocal_116[3] = 89.5592f;
			iLocal_72[0] = joaat("s_f_y_hooker_01");
			StringCopy(&(Local_82[0 /*4*/]), "pb_prostitute", 16);
			iLocal_72[1] = joaat("s_f_y_hooker_01");
			StringCopy(&(Local_82[1 /*4*/]), "pb_prostitute", 16);
			iLocal_72[2] = joaat("s_f_y_hooker_01");
			StringCopy(&(Local_82[2 /*4*/]), "pb_prostitute", 16);
			iLocal_72[3] = joaat("s_f_y_hooker_01");
			StringCopy(&(Local_82[3 /*4*/]), "pb_prostitute", 16);
			iLocal_77[0] = 1;
			iLocal_77[1] = 1;
			iLocal_77[2] = 1;
			iLocal_77[3] = 1;
			break;
		
		default:
			Local_103[0 /*3*/] = { 0f, 0f, 0f };
			Local_103[1 /*3*/] = { 0f, 0f, 0f };
			Local_103[2 /*3*/] = { 0f, 0f, 0f };
			Local_103[3 /*3*/] = { 0f, 0f, 0f };
			fLocal_116[0] = 0f;
			fLocal_116[1] = 0f;
			fLocal_116[2] = 0f;
			fLocal_116[3] = 0f;
			iLocal_72[0] = 0;
			iLocal_72[1] = 0;
			iLocal_72[2] = 0;
			iLocal_72[3] = 0;
			break;
	}
}












void func_30()//Position - 0x9086
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_72)
	{
		if (iLocal_72[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_72[iVar0]);
		}
		iVar0++;
	}
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

