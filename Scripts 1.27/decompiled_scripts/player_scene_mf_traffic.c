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
	int iLocal_72[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_85[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_98[12];
	var uLocal_135[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_148[4] = { 0, 0, 0, 0 };
	int iLocal_153[4] = { 0, 0, 0, 0 };
	struct<3> Local_158[4];
	var uLocal_171[4] = { 0, 0, 0, 0 };
	int iLocal_176[4] = { 0, 0, 0, 0 };
	int iLocal_181[4] = { 0, 0, 0, 0 };
	struct<3> Local_186[4];
	var uLocal_199[4] = { 0, 0, 0, 0 };
	int iLocal_204[4] = { 0, 0, 0, 0 };
	int iLocal_209[4] = { 0, 0, 0, 0 };
	struct<3> Local_214[4];
	var uLocal_227[4] = { 0, 0, 0, 0 };
	struct<3> Local_232 = { 0, 0, 0 } ;
	float fLocal_235 = 0f;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
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
		func_52();
	}
	SYSTEM::WAIT(0);
	func_33();
	func_29();
	GlobalFunc_576();
	while (iLocal_66 && GlobalFunc_9549(3, 0))
	{
		if (func_16())
		{
			func_52();
		}
		SYSTEM::WAIT(0);
		switch (iLocal_64)
		{
			case 0:
				if (func_11())
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(2);
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
	func_52();
}

void func_1()//Position - 0x10A
{
	iLocal_66 = 0;
}

int func_2()//Position - 0x115
{
	int iVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	
	if (func_5(&uLocal_236, 0f))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72[iVar0]))
		{
			uVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72[iVar0], -1);
			if (!PED::IS_PED_INJURED(uVar1))
			{
				fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 1f);
				fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f);
				VEHICLE::START_VEHICLE_HORN(iLocal_72[iVar0], SYSTEM::ROUND((fVar2 * 1000f)), 0, 0);
				func_3(&uLocal_236, fVar3);
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_232, 1) > 100f)
	{
		return 1;
	}
	return 0;
}

void func_3(var uParam0, float fParam1)//Position - 0x1AD
{
	uParam0->f_1 = (GlobalFunc_179(MISC::IS_BIT_SET(*uParam0, 4)) + fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}


int func_5(var uParam0, float fParam1)//Position - 0x223
{
	if (func_9(uParam0))
	{
		if (func_6(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_6(var uParam0)//Position - 0x245
{
	if (func_9(uParam0))
	{
		if (func_7(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (uParam0->f_1 - GlobalFunc_179(MISC::IS_BIT_SET(*uParam0, 4)));
		}
	}
	return uParam0->f_1;
}

bool func_7(var uParam0)//Position - 0x284
{
	return GlobalFunc_225(uParam0);
}


bool func_9(var uParam0)//Position - 0x2A2
{
	return GlobalFunc_226(uParam0);
}


int func_11()//Position - 0x2C0
{
	int iVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	
	if (func_5(&uLocal_236, 0f))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72[iVar0]))
		{
			uVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72[iVar0], -1);
			if (!PED::IS_PED_INJURED(uVar1))
			{
				fVar2 = (MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 1f) * 2f);
				fVar3 = (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f) * 2f);
				VEHICLE::START_VEHICLE_HORN(iLocal_72[iVar0], SYSTEM::ROUND((fVar2 * 1000f)), 0, 0);
				func_3(&uLocal_236, fVar3);
			}
		}
	}
	if (!GlobalFunc_2927())
	{
		func_13();
		func_12(&uLocal_236, MISC::GET_RANDOM_FLOAT_IN_RANGE(1.75f, 2.25f));
		return 1;
	}
	if (!func_9(&uLocal_236))
	{
		func_12(&uLocal_236, (MISC::GET_RANDOM_FLOAT_IN_RANGE(1.75f, 2.25f) * 2f));
	}
	return 0;
}

void func_12(var uParam0, float fParam1)//Position - 0x381
{
	if (!func_9(uParam0))
	{
		func_3(uParam0, fParam1);
	}
}

void func_13()//Position - 0x39B
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72[iVar0]))
		{
			uVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72[iVar0], -1);
			if (!PED::IS_PED_INJURED(uVar1))
			{
				func_14(uVar1, iLocal_72[iVar0], 10f, 786603);
				PED::SET_PED_KEEP_TASK(uVar1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_148[iVar0]))
		{
			uVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_148[iVar0], -1);
			if (!PED::IS_PED_INJURED(uVar2))
			{
				func_14(uVar2, iLocal_148[iVar0], 5f, 786603);
				PED::SET_PED_KEEP_TASK(uVar2, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_176[iVar0]))
		{
			uVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_176[iVar0], -1);
			if (!PED::IS_PED_INJURED(uVar3))
			{
				func_14(uVar3, iLocal_176[iVar0], 5f, 786603);
				PED::SET_PED_KEEP_TASK(uVar3, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[iVar0]))
		{
			uVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_204[iVar0], -1);
			if (!PED::IS_PED_INJURED(uVar4))
			{
				func_14(uVar4, iLocal_204[iVar0], 5f, 786603);
				PED::SET_PED_KEEP_TASK(uVar4, 1);
			}
		}
		iVar0++;
	}
}

void func_14(var uParam0, var uParam1, float fParam2, int iParam3)//Position - 0x4E4
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	Var0 = { 0f, fParam2, 0f };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1, Var0) };
	TASK::OPEN_SEQUENCE_TASK(&uVar6);
	TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uParam1, Var3, fParam2, 0, ENTITY::GET_ENTITY_MODEL(uParam1), iParam3, 2f, 5f);
	TASK::TASK_VEHICLE_DRIVE_WANDER(0, uParam1, fParam2, iParam3);
	TASK::CLOSE_SEQUENCE_TASK(uVar6);
	TASK::TASK_PERFORM_SEQUENCE(uParam0, uVar6);
	TASK::CLEAR_SEQUENCE_TASK(&uVar6);
}


int func_16()//Position - 0x594
{
	var uVar0;
	
	if (Global_3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uVar0))
					{
						return 0;
					}
				}
			}
		}
	}
	if ((GlobalFunc_39(0) || GlobalFunc_39(3)) || GlobalFunc_39(2))
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !GlobalFunc_488())
		{
			return 1;
		}
	}
	if (GlobalFunc_153(8, -1))
	{
		return 1;
	}
	if (Global_2422140.f_72)
	{
		return 1;
	}
	if (Global_87845.f_44 == 1)
	{
		if (Global_87845.f_46 == 0)
		{
			return 1;
		}
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}













void func_29()//Position - 0x9C8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
	iVar0 = 0;
	while (iVar0 < iLocal_67)
	{
		STREAMING::REQUEST_MODEL(iLocal_67[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_85)
	{
		STREAMING::REQUEST_MODEL(iLocal_85[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_153)
	{
		STREAMING::REQUEST_MODEL(iLocal_153[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_181)
	{
		STREAMING::REQUEST_MODEL(iLocal_181[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_209)
	{
		STREAMING::REQUEST_MODEL(iLocal_209[iVar0]);
		iVar0++;
	}
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < iLocal_67)
		{
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_67[iVar0]))
			{
				STREAMING::REQUEST_MODEL(iLocal_67[iVar0]);
				bVar2 = false;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_72[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_85[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_85[iVar0]);
					bVar2 = false;
				}
				else
				{
					MISC::CLEAR_AREA(Local_232 + Local_98[iVar0 /*3*/], 10f, 1, 0, 0, 0);
					iLocal_72[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_85[iVar0], Local_232 + Local_98[iVar0 /*3*/], (fLocal_235 + uLocal_135[iVar0]), 1, 1);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_72[iVar0], 250);
					VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_72[iVar0], 2f);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_72[iVar0], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_148[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_153[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_153[iVar0]);
					bVar2 = false;
				}
				else
				{
					MISC::CLEAR_AREA(Local_232 + Local_158[iVar0 /*3*/], 10f, 1, 0, 0, 0);
					iLocal_148[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_153[iVar0], Local_232 + Local_158[iVar0 /*3*/], (fLocal_235 + uLocal_171[iVar0]), 1, 1);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_148[iVar0], 250);
					VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_148[iVar0], 2f);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_148[iVar0], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_181[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_181[iVar0]);
					bVar2 = false;
				}
				else
				{
					MISC::CLEAR_AREA(Local_232 + Local_186[iVar0 /*3*/], 10f, 1, 0, 0, 0);
					iLocal_176[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_181[iVar0], Local_232 + Local_186[iVar0 /*3*/], (fLocal_235 + uLocal_199[iVar0]), 1, 1);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_176[iVar0], 250);
					VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_176[iVar0], 2f);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_176[iVar0], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_204[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_209[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_209[iVar0]);
					bVar2 = false;
				}
				else
				{
					MISC::CLEAR_AREA(Local_232 + Local_214[iVar0 /*3*/], 10f, 1, 0, 0, 0);
					iLocal_204[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_209[iVar0], Local_232 + Local_214[iVar0 /*3*/], (fLocal_235 + uLocal_227[iVar0]), 1, 1);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_204[iVar0], 250);
					VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_204[iVar0], 2f);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_204[iVar0], 1);
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
	while (iVar0 < 12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72[iVar0]))
		{
			uVar3 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_72[iVar0], 4, iLocal_67[func_32()], -1, 1, 1);
			func_30(uVar3);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_72[iVar0], 1);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar3, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_85[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_148[iVar0]))
		{
			if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_148[iVar0]) > 0)
			{
				uVar4 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_148[iVar0], 4, iLocal_67[func_32()], -1, 1, 1);
				func_30(uVar4);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_72[iVar0], 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar4, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_153[iVar0]);
			}
		}
		iVar0++;
	}
	if (!VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_148[2]) > 0)
	{
		VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_148[0], iLocal_148[2], 1065353216);
	}
	if (!VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_148[3]) > 0)
	{
		VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_148[1], iLocal_148[3], 1065353216);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_176[iVar0]))
		{
			if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_176[iVar0]) > 0)
			{
				uVar5 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_176[iVar0], 4, iLocal_67[func_32()], -1, 1, 1);
				func_30(uVar5);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_72[iVar0], 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar5, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_181[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_204[iVar0]))
		{
			if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_204[iVar0]) > 0)
			{
				uVar6 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_204[iVar0], 4, iLocal_67[func_32()], -1, 1, 1);
				func_30(uVar6);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_72[iVar0], 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar6, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_209[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_67)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_67[iVar0]);
		iVar0++;
	}
}

void func_30(int iParam0)//Position - 0xF3F
{
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(uParam0, 0);
	if (ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("a_m_m_salton_01"))
	{
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3) == 1)
		{
			if (GlobalFunc_745())
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 3), 0);
			}
			else
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 3), 0);
			}
		}
	}
}


int func_32()//Position - 0xFB2
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	int iVar7;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iLocal_67);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_67[iVar0]))
	{
		return iVar0;
	}
	iVar7 = 0;
	iVar6 = 0;
	while (iVar6 < iLocal_67)
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_67[iVar6]))
		{
			uVar1[iVar7] = iLocal_67[iVar6];
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 <= 0)
	{
		return 0;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
	iVar6 = 0;
	while (iVar6 < iLocal_67)
	{
		if (uVar1[iVar0] == iLocal_67[iVar6])
		{
			return iVar6;
		}
		iVar6++;
	}
	return iVar0;
}

void func_33()//Position - 0x104B
{
	char[] cVar0[8];
	
	iLocal_65 = Global_89502;
	GlobalFunc_8273(iLocal_65, &Local_232, &fLocal_235, &cVar0);
	func_34(iLocal_65, &iLocal_67, &iLocal_85, &Local_98, &uLocal_135, &iLocal_153, &Local_158, &uLocal_171, &iLocal_181, &Local_186, &uLocal_199, &iLocal_209, &Local_214, &uLocal_227);
}

void func_34(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7, int iParam8, var uParam9, var uParam10, int iParam11, var uParam12, var uParam13)//Position - 0x1086
{
	struct<3> Var0;
	float fVar3;
	char[] cVar4[8];
	struct<3> Var12;
	float fVar15;
	char[] cVar16[8];
	int iVar24;
	
	switch (iParam0)
	{
		case 105:
			func_44(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
			func_43(iParam1, iParam2, iParam5, iParam8, iParam11);
			GlobalFunc_8273(iParam0, &Var0, &fVar3, &cVar4);
			*(uParam12[0 /*3*/]) = { Vector(38.0807f, -1565.916f, -453.6f) - Var0 };
			(*uParam13)[0] = (171.8581f - fVar3);
			*(uParam12[1 /*3*/]) = { Vector(38.094f, -1599.477f, -467.9528f) - Var0 };
			(*uParam13)[1] = (151.2346f - fVar3);
			*(uParam12[2 /*3*/]) = { Vector(38.1786f, -1566.734f, -442.0422f) - Var0 };
			(*uParam13)[2] = (170.751f - fVar3);
			*(uParam12[3 /*3*/]) = { Vector(32.4872f, -1614.501f, -486.7076f) - Var0 };
			(*uParam13)[3] = (146.9473f - fVar3);
			break;
		
		case 106:
			func_42(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
			func_43(iParam1, iParam2, iParam5, iParam8, iParam11);
			*(uParam12[0 /*3*/]) = { Vector(0f, 0f, -7.5f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[0] = (0f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*(uParam12[1 /*3*/]) = { Vector(12f, -21.6f, 0f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[1] = (-8.1f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*(uParam12[2 /*3*/]) = { Vector(0f, -6.3f, 2.4f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[2] = (0f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*(uParam12[3 /*3*/]) = { Vector(0f, -5.4f, 9.3f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[3] = (0f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			break;
		
		case 107:
			func_40(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
			func_39(iParam1, iParam2, iParam5, iParam8, iParam11);
			*(uParam12[0 /*3*/]) = { Vector(0f, -18.7658f, 17.4294f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[0] = (-82.86f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*(uParam12[1 /*3*/]) = { Vector(0f, -0.2185f, -8.4f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[1] = (326.88f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*(uParam12[2 /*3*/]) = { Vector(0f, 11.1031f, -1.0773f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[2] = (-16.56f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*(uParam12[3 /*3*/]) = { Vector(0f, 6.6924f, 3.6826f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[3] = (-21.4898f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			break;
		
		case 208:
		case 23:
			func_44(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
			func_43(iParam1, iParam2, iParam5, iParam8, iParam11);
			GlobalFunc_8273(iParam0, &Var12, &fVar15, &cVar16);
			*(uParam12[0 /*3*/]) = { Vector(38.0807f, -1565.916f, -453.6f) - Var12 };
			(*uParam13)[0] = (171.8581f - fVar15);
			*(uParam12[1 /*3*/]) = { Vector(38.094f, -1599.477f, -467.9528f) - Var12 };
			(*uParam13)[1] = (151.2346f - fVar15);
			*(uParam12[2 /*3*/]) = { Vector(38.1786f, -1566.734f, -442.0422f) - Var12 };
			(*uParam13)[2] = (170.751f - fVar15);
			*(uParam12[3 /*3*/]) = { Vector(32.4872f, -1614.501f, -486.7076f) - Var12 };
			(*uParam13)[3] = (146.9473f - fVar15);
			break;
		
		case 209:
			func_38(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
			func_37(iParam1, iParam2, iParam5, iParam8, iParam11);
			*(uParam12[0 /*3*/]) = { Vector(0f, -18.4198f, 12.4248f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[0] = (-42.9526f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*(uParam12[1 /*3*/]) = { Vector(0f, 6.1436f, -6.4904f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[1] = (0f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*(uParam12[2 /*3*/]) = { Vector(0f, -46.6f, 15.2f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[2] = (74.0878f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*(uParam12[3 /*3*/]) = { Vector(0f, -43.7f, 9f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[3] = (-102.24f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			break;
		
		case 210:
			func_36(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
			func_35(iParam1, iParam2, iParam5, iParam8, iParam11);
			*(uParam12[0 /*3*/]) = { Vector(0f, -8.466f, -3.4877f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[0] = (-10.26f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*(uParam12[1 /*3*/]) = { Vector(0f, 5.6192f, -2.7229f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[1] = (2.3194f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*(uParam12[2 /*3*/]) = { Vector(0f, 5.1081f, 6.8717f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[2] = (350.1767f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*(uParam12[3 /*3*/]) = { Vector(0f, -9.6576f, 0.997f) + func_41(-1090519040, 1056964608) };
			(*uParam13)[3] = (349.0776f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			break;
		
		default:
			func_44(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
			func_43(iParam1, iParam2, iParam5, iParam8, iParam11);
			iVar24 = 0;
			while (iVar24 < *uParam12)
			{
				(*iParam11)[iVar24] = 0;
				*(uParam12[iVar24 /*3*/]) = { 0f, 0f, 0f };
				(*uParam13)[iVar24] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				iVar24++;
			}
			break;
	}
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1682
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	(*uParam0)[0] = joaat("a_m_m_salton_01");
	(*uParam0)[1] = joaat("a_m_m_prolhost_01");
	(*uParam0)[2] = (*uParam0)[1];
	(*uParam0)[3] = (*uParam0)[2];
	(*uParam1)[0] = joaat("taxi");
	(*uParam1)[2] = joaat("issi2");
	(*uParam1)[3] = joaat("washington");
	(*uParam1)[7] = joaat("peyote");
	(*uParam1)[8] = joaat("surge");
	(*uParam1)[11] = joaat("adder");
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			iVar0 = joaat("carbonizzare");
			break;
		
		case 1:
			iVar0 = joaat("rocoto");
			break;
		
		case 2:
			iVar0 = joaat("asterope");
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			iVar1 = joaat("fq2");
			break;
		
		case 1:
			iVar1 = joaat("landstalker");
			break;
		
		case 2:
			iVar1 = joaat("emperor");
			break;
	}
	(*uParam1)[10] = iVar0;
	(*uParam1)[9] = iVar0;
	(*uParam1)[1] = iVar0;
	(*uParam1)[6] = iVar1;
	(*uParam1)[4] = iVar1;
	(*uParam1)[5] = iVar1;
	(*uParam2)[0] = joaat("stretch");
	(*uParam2)[1] = joaat("boxville2");
	(*uParam2)[2] = joaat("bus");
	(*uParam2)[3] = joaat("trash");
	(*uParam3)[0] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[1] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[2] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[3] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	iVar2 = 0;
	while (iVar2 < *uParam4)
	{
		(*uParam4)[iVar2] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
		iVar2++;
	}
}

void func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1824
{
	*(uParam0[0 /*3*/]) = { 16.332f, -30.08f, 0f };
	(*uParam1)[0] = -90.4349f;
	*(uParam0[1 /*3*/]) = { 22.782f, -37.68f, 0f };
	(*uParam1)[1] = -90.4349f;
	*(uParam0[2 /*3*/]) = { 28.272f, -29.22f, 0f };
	(*uParam1)[2] = -90.7451f;
	*(uParam0[3 /*3*/]) = { 22.282f, -32.05f, 0f };
	(*uParam1)[3] = -97.2851f;
	*(uParam0[4 /*3*/]) = { 15.012f, -34.53f, 0f };
	(*uParam1)[4] = -94.9851f;
	*(uParam0[5 /*3*/]) = { -14.088f, -53.31f, 0f };
	(*uParam1)[5] = 174.4849f;
	*(uParam0[6 /*3*/]) = { -8.618f, -54.68f, 0f };
	(*uParam1)[6] = 176.0549f;
	*(uParam0[7 /*3*/]) = { 4.432f, -2.42f, 0f };
	(*uParam1)[7] = -4.3151f;
	*(uParam0[8 /*3*/]) = { 1.422f, 5.53f, 0f };
	(*uParam1)[8] = -4.3151f;
	*(uParam0[9 /*3*/]) = { 28.922f, -34.42f, 0f };
	(*uParam1)[9] = -96.0151f;
	*(uParam0[10 /*3*/]) = { 34.012f, -36.51f, 0f };
	(*uParam1)[10] = -99.9451f;
	*(uParam0[11 /*3*/]) = { -4.888f, -0.68f, 0f };
	(*uParam1)[11] = -5.7f;
	*(uParam2[0 /*3*/]) = { -0.818f, -16.7f, 0f };
	(*uParam3)[0] = 7.2f;
	*(uParam2[1 /*3*/]) = { 21.212f, -26.79f, 0f };
	(*uParam3)[1] = -97.2851f;
	*(uParam2[2 /*3*/]) = { -31.208f, -27.73f, 0f };
	(*uParam3)[2] = 83.7149f;
	*(uParam2[3 /*3*/]) = { 36.182f, -32.35f, 0f };
	(*uParam3)[3] = -99.9451f;
	*(uParam4[0 /*3*/]) = { -8.798f, -15.99f, 0f };
	(*uParam5)[0] = -54.0451f;
	*(uParam4[1 /*3*/]) = { -16.408f, -17.59f, 0f };
	(*uParam5)[1] = -96.0451f;
	*(uParam4[2 /*3*/]) = { -18.108f, -12.54f, 0f };
	(*uParam5)[2] = -88.5451f;
	*(uParam4[3 /*3*/]) = { 52.11f, -3.18f, 0f };
	(*uParam5)[3] = -86.76f;
}

void func_37(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1A64
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	(*uParam0)[0] = joaat("a_m_m_salton_01");
	(*uParam0)[1] = joaat("a_m_m_prolhost_01");
	(*uParam0)[2] = joaat("a_m_m_afriamer_01");
	(*uParam0)[3] = (*uParam0)[2];
	(*uParam1)[0] = joaat("camper");
	(*uParam1)[2] = joaat("futo");
	(*uParam1)[3] = joaat("blista");
	(*uParam1)[4] = joaat("regina");
	(*uParam1)[7] = joaat("sadler");
	(*uParam1)[9] = joaat("manana");
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			iVar0 = joaat("dilettante");
			break;
		
		case 1:
			iVar0 = joaat("surfer");
			break;
		
		case 2:
			iVar0 = joaat("sultan");
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			iVar1 = joaat("asterope");
			break;
		
		case 1:
			iVar1 = joaat("phoenix");
			break;
		
		case 2:
			iVar1 = joaat("picador");
			break;
	}
	(*uParam1)[1] = iVar0;
	(*uParam1)[8] = iVar0;
	(*uParam1)[5] = iVar0;
	(*uParam1)[6] = iVar1;
	(*uParam1)[11] = iVar1;
	(*uParam1)[10] = iVar1;
	(*uParam2)[0] = joaat("benson");
	(*uParam2)[1] = joaat("bus");
	(*uParam2)[2] = joaat("coach");
	(*uParam2)[3] = joaat("mule");
	(*uParam3)[0] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[1] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[2] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[3] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	iVar2 = 0;
	while (iVar2 < *uParam4)
	{
		(*uParam4)[iVar2] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
		iVar2++;
	}
}

void func_38(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1C06
{
	*(uParam0[0 /*3*/]) = { 1.34f, -37.14f, 0f };
	(*uParam1)[0] = -91.57f;
	*(uParam0[1 /*3*/]) = { 7.99f, -38.55f, 0f };
	(*uParam1)[1] = -91.57f;
	*(uParam0[2 /*3*/]) = { 11.35f, -25.5f, 0f };
	(*uParam1)[2] = -87.74f;
	*(uParam0[3 /*3*/]) = { 19.16f, -25.28f, 0f };
	(*uParam1)[3] = -94.86f;
	*(uParam0[4 /*3*/]) = { 40.1f, -8.519f, 0f };
	(*uParam1)[4] = -108.59f;
	*(uParam0[5 /*3*/]) = { 35.52f, -12.35f, 0f };
	(*uParam1)[5] = -108.59f;
	*(uParam0[6 /*3*/]) = { 23.22f, -21.68f, 0f };
	(*uParam1)[6] = -105.31f;
	*(uParam0[7 /*3*/]) = { 21.56f, -38.68f, 0f };
	(*uParam1)[7] = 90.43f;
	*(uParam0[8 /*3*/]) = { 12.05f, -10.24f, 0f };
	(*uParam1)[8] = -4.32f;
	*(uParam0[9 /*3*/]) = { 6.32f, -5.309f, 0f };
	(*uParam1)[9] = -4.32f;
	*(uParam0[10 /*3*/]) = { 51.94f, -36.66f, 0f };
	(*uParam1)[10] = -177.9f;
	*(uParam0[11 /*3*/]) = { 57.47f, -41.3f, 0f };
	(*uParam1)[11] = -177.9f;
	*(uParam2[0 /*3*/]) = { 29.53f, -17.97f, 0f };
	(*uParam3)[0] = -103.07f;
	*(uParam2[1 /*3*/]) = { 35.68f, 0.27f, 0f };
	(*uParam3)[1] = -66.81f;
	*(uParam2[2 /*3*/]) = { 11.74f, -31.94f, 0f };
	(*uParam3)[2] = -126.95f;
	*(uParam2[3 /*3*/]) = { 45.13f, -2.58f, 0f };
	(*uParam3)[3] = -89.89f;
	*(uParam4[0 /*3*/]) = { 26.69f, -41.23f, 0f };
	(*uParam5)[0] = 87.02f;
	*(uParam4[1 /*3*/]) = { 22.21f, -46.2f, 0f };
	(*uParam5)[1] = 90.07f;
	*(uParam4[2 /*3*/]) = { 45.62f, -10.14f, 0f };
	(*uParam5)[2] = -86.76f;
	*(uParam4[3 /*3*/]) = { 52.11f, -3.18f, 0f };
	(*uParam5)[3] = -86.76f;
}

void func_39(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1E46
{
	int iVar0;
	
	(*uParam0)[0] = joaat("a_m_m_salton_02");
	(*uParam0)[1] = (*uParam0)[0];
	(*uParam0)[2] = joaat("a_m_m_prolhost_01");
	(*uParam0)[3] = joaat("a_m_m_afriamer_01");
	(*uParam1)[0] = joaat("camper");
	(*uParam1)[1] = joaat("dilettante");
	(*uParam1)[2] = joaat("futo");
	(*uParam1)[3] = joaat("blista");
	(*uParam1)[4] = joaat("regina");
	(*uParam1)[5] = joaat("sultan");
	(*uParam1)[6] = joaat("asterope");
	(*uParam1)[7] = joaat("sadler");
	(*uParam1)[8] = joaat("surfer");
	(*uParam1)[9] = joaat("dubsta");
	(*uParam1)[10] = joaat("picador");
	(*uParam1)[11] = joaat("phoenix");
	(*uParam2)[0] = joaat("bus");
	(*uParam2)[1] = joaat("boxville");
	(*uParam2)[2] = joaat("bus");
	(*uParam2)[3] = joaat("boxville2");
	(*uParam3)[0] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[1] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[2] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[3] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		(*uParam4)[iVar0] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
		iVar0++;
	}
}

void func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1F84
{
	*(uParam0[0 /*3*/]) = { -29.899f, -48.6f, 0f };
	(*uParam1)[0] = 296f;
	*(uParam0[1 /*3*/]) = { -17.809f, -40.73f, 0f };
	(*uParam1)[1] = 274.46f;
	*(uParam0[2 /*3*/]) = { -18.339f, -26.16f, 0f };
	(*uParam1)[2] = 309.22f;
	*(uParam0[3 /*3*/]) = { -12.76f, -37.72f, 0f };
	(*uParam1)[3] = 273f;
	*(uParam0[4 /*3*/]) = { -7.669f, -34.99f, 0f };
	(*uParam1)[4] = 270f;
	*(uParam0[5 /*3*/]) = { 4.461f, -23.85f, 0f };
	(*uParam1)[5] = 270f;
	*(uParam0[6 /*3*/]) = { -2.609f, -32.32f, 0f };
	(*uParam1)[6] = 270f;
	*(uParam0[7 /*3*/]) = { 3.591f, -30.44f, 0f };
	(*uParam1)[7] = 266f;
	*(uParam0[8 /*3*/]) = { 9.701f, -22.01f, 0f };
	(*uParam1)[8] = 259f;
	*(uParam0[9 /*3*/]) = { 34.851f, -18.68f, 0f };
	(*uParam1)[9] = 259f;
	*(uParam0[10 /*3*/]) = { 2.311f, -7.35f, 0f };
	(*uParam1)[10] = 353.49f;
	*(uParam0[11 /*3*/]) = { 7.721f, -5.22f, 0f };
	(*uParam1)[11] = 353.49f;
	*(uParam2[0 /*3*/]) = { -21.429f, -36.16f, 0f };
	(*uParam3)[0] = -40.2806f;
	*(uParam2[1 /*3*/]) = { -32.949f, -44.24f, 0f };
	(*uParam3)[1] = 296f;
	*(uParam2[2 /*3*/]) = { -5.419f, -28.52f, 0f };
	(*uParam3)[2] = 268.79f;
	*(uParam2[3 /*3*/]) = { -16.149f, -34.45f, 0f };
	(*uParam3)[3] = 269.44f;
	*(uParam4[0 /*3*/]) = { 9.911f, -27.02f, 0f };
	(*uParam5)[0] = 265f;
	*(uParam4[1 /*3*/]) = { 15.671f, -24.5f, 0f };
	(*uParam5)[1] = 262f;
	*(uParam4[2 /*3*/]) = { 20.341f, -22.64f, 0f };
	(*uParam5)[2] = 260f;
	*(uParam4[3 /*3*/]) = { 28.061f, -20.67f, 0f };
	(*uParam5)[3] = 269f;
}

Vector3 func_41(float fParam0, float fParam1)//Position - 0x21C4
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam1), MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam1), 0f;
}

void func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x21DD
{
	*(uParam0[0 /*3*/]) = { -38.3005f, 8.5562f, 0f };
	(*uParam1)[0] = -16.0462f;
	*(uParam0[1 /*3*/]) = { -29.9505f, 8.6162f, 0f };
	(*uParam1)[1] = -18.0565f;
	*(uParam0[2 /*3*/]) = { -23.7805f, 13.1962f, 0f };
	(*uParam1)[2] = -18.3452f;
	*(uParam0[3 /*3*/]) = { -29.6605f, 16.1762f, 0f };
	(*uParam1)[3] = -21.835f;
	*(uParam0[4 /*3*/]) = { -14.3505f, 6.5462f, 0f };
	(*uParam1)[4] = -20.3657f;
	*(uParam0[5 /*3*/]) = { -18.3605f, 0.5062f, 0f };
	(*uParam1)[5] = -18.8008f;
	*(uParam0[6 /*3*/]) = { -29.4805f, 2.2262f, 0f };
	(*uParam1)[6] = -20.524f;
	*(uParam0[7 /*3*/]) = { -24.1905f, 4.6262f, 0f };
	(*uParam1)[7] = -21.9109f;
	*(uParam0[8 /*3*/]) = { -24.3405f, -2.2238f, 0f };
	(*uParam1)[8] = -17.9999f;
	*(uParam0[9 /*3*/]) = { -13.5805f, -4.2538f, 0f };
	(*uParam1)[9] = -17.9017f;
	*(uParam0[10 /*3*/]) = { -19.6705f, -6.3938f, 0f };
	(*uParam1)[10] = -15.6317f;
	*(uParam0[11 /*3*/]) = { -15.2805f, -10.5438f, 0f };
	(*uParam1)[11] = -21.7654f;
	*(uParam2[0 /*3*/]) = { -47.51f, 23.097f, 0f };
	(*uParam3)[0] = -50.2806f;
	*(uParam2[1 /*3*/]) = { -44.64f, 28.267f, 0f };
	(*uParam3)[1] = -8.5494f;
	*(uParam2[2 /*3*/]) = { -43.8405f, 19.3262f, 0f };
	(*uParam3)[2] = -15.1402f;
	*(uParam2[3 /*3*/]) = { -8.2179f, -30.6764f, 0f };
	(*uParam3)[3] = -21.3636f;
	*(uParam4[0 /*3*/]) = { -7.25f, -9.213f, 0f };
	(*uParam5)[0] = 2.174f;
	*(uParam4[1 /*3*/]) = { -9.14f, -15.643f, 0f };
	(*uParam5)[1] = -8.9755f;
	*(uParam4[2 /*3*/]) = { 1.83f, -16.063f, 0f };
	(*uParam5)[2] = -29.2004f;
	*(uParam4[3 /*3*/]) = { -3.76f, -20.593f, 0f };
	(*uParam5)[3] = -27.8686f;
}

void func_43(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x241D
{
	int iVar0;
	
	(*uParam0)[0] = joaat("a_m_m_salton_02");
	(*uParam0)[1] = (*uParam0)[0];
	(*uParam0)[2] = joaat("a_m_m_prolhost_01");
	(*uParam0)[3] = joaat("a_m_m_afriamer_01");
	(*uParam1)[0] = joaat("camper");
	(*uParam1)[1] = joaat("dilettante");
	(*uParam1)[2] = joaat("futo");
	(*uParam1)[3] = joaat("blista");
	(*uParam1)[4] = joaat("regina");
	(*uParam1)[5] = joaat("sultan");
	(*uParam1)[6] = joaat("asterope");
	(*uParam1)[7] = joaat("sadler");
	(*uParam1)[8] = joaat("surfer");
	(*uParam1)[9] = joaat("dubsta");
	(*uParam1)[10] = joaat("picador");
	(*uParam1)[11] = joaat("phoenix");
	(*uParam2)[0] = joaat("packer");
	(*uParam2)[1] = joaat("hauler");
	(*uParam2)[2] = joaat("tanker");
	(*uParam2)[3] = joaat("trailerlogs");
	(*uParam3)[0] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[1] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[2] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[3] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		(*uParam4)[iVar0] = (*uParam1)[MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
		iVar0++;
	}
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x255B
{
	struct<3> Var0;
	int iVar3;
	
	Var0 = { Vector(0f, 7f, 5f) * Vector(0.7f, 0.7f, 0.7f) };
	*(uParam0[0 /*3*/]) = { Vector(0f, -22.7769f, -9.2247f) + func_41(-1090519040, 1056964608) };
	*(uParam0[1 /*3*/]) = { Vector(0f, -21.4697f, -0.889f) + func_41(-1090519040, 1056964608) };
	iVar3 = 2;
	while (iVar3 <= (*uParam0 - 1))
	{
		*(uParam0[iVar3 /*3*/]) = { *(uParam0[(iVar3 - 2) /*3*/]) };
		*(uParam0[iVar3 /*3*/]) = { *(uParam0[iVar3 /*3*/]) + Var0 * FtoV((1f + (SYSTEM::TO_FLOAT(iVar3) / SYSTEM::TO_FLOAT((*uParam0 + 1 - 2))))) };
		*(uParam0[iVar3 /*3*/]) = { *(uParam0[iVar3 /*3*/]) + func_41(-1090519040, 1056964608) };
		(*uParam1)[iVar3] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
		iVar3++;
	}
	*(uParam2[0 /*3*/]) = { -19.4623f, -36.7339f, 0f };
	*(uParam2[1 /*3*/]) = { -11.7179f, -35.5764f, 0f };
	*(uParam2[2 /*3*/]) = { *(uParam2[0 /*3*/]) + Var0 };
	*(uParam2[3 /*3*/]) = { *(uParam2[1 /*3*/]) + Var0 };
	*(uParam4[0 /*3*/]) = { Vector(0f, 8.1f, 2.1f) + func_41(-1090519040, 1056964608) };
	*(uParam4[1 /*3*/]) = { Vector(0f, 15.3f, 4.4f) + func_41(-1090519040, 1056964608) };
	*(uParam4[2 /*3*/]) = { Vector(-11.4f, -15.3f, -23.7f) + func_41(-1090519040, 1056964608) };
	*(uParam4[3 /*3*/]) = { Vector(-12.7f, -10.9f, -13.4f) + func_41(-1090519040, 1056964608) };
	(*uParam1)[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam1)[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam1)[2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam1)[3] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam1)[4] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam1)[5] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam1)[6] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam3)[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam3)[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam3)[2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam3)[3] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam5)[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-6f, 4f);
	(*uParam5)[1] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-16f, -6f);
	(*uParam5)[2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-38f, -28f);
	(*uParam5)[3] = MISC::GET_RANDOM_FLOAT_IN_RANGE(-28f, -18f);
}








void func_52()//Position - 0x788D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_72)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_72[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_148)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_148[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_176)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_176[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_204)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_204[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_67)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_67[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_85)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_85[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_153)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_153[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_181)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_181[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_209)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_209[iVar0]);
		iVar0++;
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

