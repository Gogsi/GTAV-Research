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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<27> Local_55 = { 0, 0, 0, 0, -644710429, 32417469, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_82 = 0;
	struct<3> Local_83[32];
	var uLocal_180 = 0;
	int iLocal_181 = 0;
	var uLocal_182 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_133(ScriptParam_0);
	}
	else
	{
		func_129();
	}
	while (true)
	{
		GlobalFunc_906();
		if (GlobalFunc_7680() || GlobalFunc_7810(15))
		{
			func_129();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_129();
		}
		switch (func_113(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_112() == 1)
				{
					if (GlobalFunc_1437(60000))
					{
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_55.f_2), 0))
							{
								if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
								{
									GlobalFunc_159("PTD_HELP1", -1);
								}
								else
								{
									GlobalFunc_159("PTD_HELP1H", -1);
								}
							}
						}
					}
					Local_83[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (func_112() == 4)
				{
					Local_83[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_112() == 1)
				{
					func_20();
				}
				else if (func_112() == 4)
				{
					Local_83[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				GlobalFunc_5240(&(Local_55.f_24));
				if (GlobalFunc_914(&(Local_55.f_24)))
				{
					Local_83[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_83[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_129();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_112())
			{
				case 0:
					if (func_11())
					{
						Local_55 = 1;
					}
					break;
				
				case 1:
					func_10();
					func_9();
					if (func_1())
					{
						Local_55 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1F2
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x206
{
	struct<14> Var0;
	struct<14> Var14;
	
	if (GlobalFunc_5367(Local_55.f_2))
	{
		if (Local_55.f_22 > 0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_VEH(Local_55.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, 0, 1, 0))
				{
					if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
					{
						Var0.f_2 = 110;
					}
					else
					{
						Var0.f_2 = 113;
					}
					GlobalFunc_1290(Var0, GlobalFunc_5335(1));
					MISC::SET_BIT(&(Local_55.f_1), 1);
					return 1;
				}
			}
		}
	}
	if (Local_55.f_23 == 0)
	{
		if (Local_55 != 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
			{
				if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_55.f_2)))
				{
					if (GlobalFunc_5071(&(Local_55.f_26), 3000, 0))
					{
						if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
						{
							Var14.f_2 = 109;
						}
						else
						{
							Var14.f_2 = 112;
						}
						GlobalFunc_1290(Var14, GlobalFunc_5335(1));
						return 1;
					}
				}
			}
		}
	}
	return 0;
}







void func_9()//Position - 0x480
{
	switch (Local_55.f_23)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_10()//Position - 0x4A3
{
	struct<14> Var0;
	var uVar14;
	
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_55.f_2)))
	{
		if (Local_55 != 4)
		{
			iLocal_181 = 0;
			while (iLocal_181 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_181)))
				{
					uVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_181));
					if (MISC::IS_BIT_SET(Local_83[iLocal_181 /*3*/].f_1, 0))
					{
						if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
						{
							Var0.f_2 = 108;
						}
						else
						{
							Var0.f_2 = 111;
						}
						Var0.f_10 = uVar14;
						GlobalFunc_1290(Var0, GlobalFunc_5335(1));
						Local_55 = 4;
						return;
					}
				}
				iLocal_181++;
			}
		}
	}
}

int func_11()//Position - 0x534
{
	if (GlobalFunc_356(Local_55.f_4) && GlobalFunc_356(Local_55.f_5))
	{
		if (func_14() && func_12())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_55.f_4);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_55.f_5);
			return 1;
		}
	}
	return 0;
}

int func_12()//Position - 0x579
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_3) && GlobalFunc_356(Local_55.f_5)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (GlobalFunc_5367(Local_55.f_2))
		{
			if (GlobalFunc_900(&(Local_55.f_3), Local_55.f_2, 22, Local_55.f_5, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_55.f_3), 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_55.f_3), Global_1574054);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_55.f_3), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_55.f_3), 1);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_3))
	{
		return 0;
	}
	return 1;
}


int func_14()//Position - 0x69B
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (GlobalFunc_356(Local_55.f_4))
		{
			if (GlobalFunc_1460(&(Local_55.f_2), Local_55.f_4, Local_55.f_6, GlobalFunc_830(Local_55.f_6, Local_55.f_9[0 /*3*/]), 1, 1, 1, 0, 1, 1))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_55.f_2), 2);
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_55.f_2), 0);
				ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_55.f_2), 1);
				PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_55.f_2));
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_55.f_2), 30f);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_55.f_2));
				VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_55.f_2), 1, 1);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(NETWORK::NET_TO_VEH(Local_55.f_2), 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_55.f_2), 0);
				if (Local_55.f_4 == joaat("cuban800"))
				{
					VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_55.f_2), 3);
				}
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_55.f_2), "MPBitset"))
					{
						uVar0 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_55.f_2), "MPBitset");
					}
					MISC::SET_BIT(&uVar0, 10);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_55.f_2), "MPBitset", uVar0);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		return 0;
	}
	return 1;
}






void func_20()//Position - 0x8D5
{
	switch (Local_83[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_109();
			func_21();
			if (Local_55.f_23 > 0)
			{
				Local_83[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_129();
			break;
	}
}

void func_21()//Position - 0x91D
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar9;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (!MISC::IS_BIT_SET(Local_83[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_55.f_2), 0))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_55.f_2)))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_55.f_2)))
			{
				if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_55.f_2, &uVar0))
				{
					GlobalFunc_7748(2045, -1);
					iVar1 = GlobalFunc_6872(2045, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_262145.f_6398)
					{
						iVar2 = Global_262145.f_6398;
					}
					iVar3 = (Global_262145.f_6396 * iVar2);
					func_58(0, PLAYER::PLAYER_PED_ID(), "XPT_KAIE", -875716015, -1219286988, iVar3, 1, -1, 0, 0);
					if (iVar1 > Global_262145.f_6397)
					{
						iVar1 = Global_262145.f_6397;
					}
					iVar4 = (Global_262145.f_6395 * iVar1);
					GlobalFunc_7813(iVar4, 1, 1, 1092616192);
					if (GlobalFunc_218())
					{
						GlobalFunc_8416(1780666425, iVar4, &uVar9, 0, 0);
					}
					else
					{
						MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
					}
					GlobalFunc_7764(65, 1, -1);
					if (GlobalFunc_745())
					{
						GlobalFunc_8434(2, "PTD_PASS0", 0, 0, -99);
					}
					else
					{
						GlobalFunc_8434(2, "PTD_PASS1", 0, 0, -99);
					}
					MISC::SET_BIT(&(Local_83[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (Local_55.f_22 < 4)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(Local_55.f_2), Local_55.f_9[Local_55.f_22 /*3*/], 50f, 50f, 500f, 0, 1, 0))
						{
							Local_55.f_22++;
						}
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_55.f_2) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_55.f_2) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					func_25();
					if (func_24())
					{
						if (GlobalFunc_918(Local_55.f_2) && GlobalFunc_918(Local_55.f_3))
						{
							NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_55.f_2), 1, 1, 0);
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_55.f_2))
							{
								GlobalFunc_909(&(Local_55.f_2));
							}
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_55.f_3))
							{
								PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_55.f_3), 1);
								GlobalFunc_909(&(Local_55.f_3));
							}
						}
					}
				}
			}
		}
	}
}



int func_24()//Position - 0xB7D
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_55.f_2), 0, 7000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_55.f_2), 1, 40000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_55.f_2), 3, 30000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_55.f_2), 2, 30000))
		{
			return 1;
		}
	}
	return 0;
}

void func_25()//Position - 0xBEE
{
	struct<3> Var0;
	
	if (GlobalFunc_5367(Local_55.f_2) && !GlobalFunc_904(Local_55.f_3))
	{
		if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_55.f_3), NETWORK::NET_TO_VEH(Local_55.f_2), 0))
		{
			if (Local_55.f_22 < 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_55.f_3), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_55.f_3), -1273030092) != 0)
				{
					if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
					{
						TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_55.f_3), NETWORK::NET_TO_VEH(Local_55.f_2), 0, 0, Local_55.f_9[Local_55.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60);
					}
					else
					{
						TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_55.f_3), NETWORK::NET_TO_VEH(Local_55.f_2), 0, 0, Local_55.f_9[Local_55.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1082130432, 0);
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_55.f_3), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_55.f_3), -1273030092) != 0)
			{
				if (GlobalFunc_918(Local_55.f_2))
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_VEH(Local_55.f_2), 0f, 12000f, 0f) };
					if (Var0.x < -3700f)
					{
						Var0.x = -3700f;
					}
					else if (Var0.x > 4500f)
					{
						Var0.x = 4500f;
					}
					if (Var0.f_1 < -3900f)
					{
						Var0.f_1 = -3900f;
					}
					else if (Var0.f_1 > 8000f)
					{
						Var0.f_1 = 8000f;
					}
					Var0.f_2 = 100f;
					if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
					{
						TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_55.f_3), NETWORK::NET_TO_VEH(Local_55.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100);
					}
					else
					{
						TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_55.f_3), NETWORK::NET_TO_VEH(Local_55.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, -1082130432, 0);
					}
				}
			}
		}
	}
}

































int func_58(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)//Position - 0x17AD
{
	return func_59(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_59(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)//Position - 0x17CD
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_69(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				GlobalFunc_5372(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		GlobalFunc_6918(iParam1, iVar0, sParam8);
	}
	return iVar0;
}










var func_69(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1B14
{
	var uVar0;
	
	uVar0 = func_70(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_70(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1B37
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (GlobalFunc_361(PLAYER::PLAYER_ID()) || GlobalFunc_362(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_7278 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7278;
		}
	}
	else if (Global_262145.f_4972 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_4972;
	}
	if (GlobalFunc_955(uParam2))
	{
	}
	if (GlobalFunc_82())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_101(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = GlobalFunc_5251(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					GlobalFunc_6919(0, &iVar1);
					break;
				
				case 3:
					GlobalFunc_6919(1, &iVar1);
					break;
				
				case 1:
					GlobalFunc_6847(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			GlobalFunc_7743(1152, iVar1, -1);
			if (iParam1 == 0)
			{
				GlobalFunc_7742((GlobalFunc_6849(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_31.f_2 != -1)
				{
					GlobalFunc_7743(1153, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					GlobalFunc_5383(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				GlobalFunc_5373((GlobalFunc_5247(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				GlobalFunc_5373((GlobalFunc_5247(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}































int func_101(int iParam0)//Position - 0x2BE2
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > GlobalFunc_6849(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_90(PLAYER::PLAYER_ID());
		}
	}
	if (GlobalFunc_948(8000, 0, 0) > 0)
	{
		if (GlobalFunc_948(8000, 0, 0) < (iParam0 + GlobalFunc_6849(PLAYER::PLAYER_ID())))
		{
			iParam0 = (GlobalFunc_948(8000, 0, 0) - GlobalFunc_6849(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}








void func_109()//Position - 0x2D49
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_55.f_2)))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_182))
		{
			uLocal_182 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_55.f_2));
			if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
			{
				HUD::SET_BLIP_SPRITE(uLocal_182, 307);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_182, "PTD_BLIPN");
			}
			else
			{
				HUD::SET_BLIP_SPRITE(uLocal_182, 64);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_182, "PTD_BLIPH");
			}
			HUD::SET_BLIP_COLOUR(uLocal_182, 1);
			HUD::SET_BLIP_FLASH_TIMER(uLocal_182, 7000);
			HUD::SET_BLIP_PRIORITY(uLocal_182, 6);
		}
		else if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
		{
			HUD::SET_BLIP_ROTATION(uLocal_182, SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_55.f_2))));
		}
	}
}



int func_112()//Position - 0x2E28
{
	return Local_55;
}

int func_113(int iParam0)//Position - 0x2E32
{
	return Local_83[iParam0 /*3*/];
}
















void func_129()//Position - 0x33A5
{
	if (HUD::DOES_BLIP_EXIST(uLocal_182))
	{
		HUD::REMOVE_BLIP(&uLocal_182);
	}
	if (MISC::IS_BIT_SET(Local_55.f_1, 1))
	{
		GlobalFunc_8434(2, "PTD_FAIL", 0, 0, -99);
	}
	func_132();
	if (func_112() == 4 && Local_55.f_4 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_55.f_4, 0);
	}
	GlobalFunc_461(15, 0);
	GlobalFunc_491();
}



void func_132()//Position - 0x346C
{
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_180);
}

void func_133(struct<20> Param0)//Position - 0x347A
{
	int iVar0;
	
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_55, 28);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_83, 97);
	if (!GlobalFunc_5091())
	{
		func_129();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			switch (iVar0)
			{
				case 0:
					Local_55.f_4 = joaat("cuban800");
					Local_55.f_5 = joaat("a_m_m_skidrow_01");
					break;
				
				case 1:
					Local_55.f_4 = joaat("stunt");
					Local_55.f_5 = joaat("a_m_y_eastsa_02");
					break;
				
				case 2:
					Local_55.f_4 = joaat("duster");
					Local_55.f_5 = joaat("a_m_m_prolhost_01");
					break;
				
				case 3:
					Local_55.f_4 = joaat("mammatus");
					Local_55.f_5 = joaat("a_m_y_vinewood_02");
					break;
				
				case 4:
					Local_55.f_4 = joaat("maverick");
					Local_55.f_5 = joaat("a_m_m_eastsa_02");
					MISC::SET_BIT(&(Local_55.f_1), 0);
					break;
				
				case 5:
					Local_55.f_4 = joaat("swift");
					Local_55.f_5 = joaat("a_m_y_busicas_01");
					MISC::SET_BIT(&(Local_55.f_1), 0);
					break;
			}
			if (Local_55.f_4 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_55.f_4, 1);
			}
			func_140();
			func_134();
		}
		GlobalFunc_461(15, 1);
		Local_83[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	else
	{
		func_129();
	}
}

void func_134()//Position - 0x35C5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		Local_55.f_9[iVar0 /*3*/] = { func_136(iVar1) };
		if (iVar0 > 0)
		{
			if (GlobalFunc_537(Local_55.f_9[iVar0 /*3*/], Local_55.f_9[(iVar0 - 1) /*3*/], 250f))
			{
				Local_55.f_9[iVar0 /*3*/] = { func_136(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}


Vector3 func_136(int iParam0)//Position - 0x367D
{
	if (iParam0 < 0)
	{
		iParam0 = 2;
	}
	else if (iParam0 > 2)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			return func_139();
		
		case 1:
			return func_138();
		
		case 2:
			return func_137();
		
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_137()//Position - 0x36D3
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 1915.902f, 563.9669f, 174.4925f;
		
		case 1:
			return 1402.858f, -2148.418f, 57.9675f;
		
		case 2:
			return 1104.815f, -3142.335f, 4.901f;
		
		case 3:
			return 545.7347f, -3025.327f, 5.0591f;
		
		case 4:
			return 1376.037f, -740.2166f, 66.2331f;
		
		case 5:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 6:
			return -1731.085f, -989.8386f, 4.4152f;
		
		case 7:
			return 728.2132f, -1532.48f, 18.7348f;
		
		case 8:
			return 1140.923f, -1285.639f, 33.6091f;
		
		case 9:
			return 2811.453f, -668.671f, 1.581f;
		
		case 10:
			return -1706.013f, -183.4387f, 56.3712f;
		
		case 11:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 12:
			return 1098.246f, -544.2941f, 56.4061f;
		
		default:
	}
	return 1098.246f, -544.2941f, 56.4061f;
}

Vector3 func_138()//Position - 0x382E
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 2312.707f, 1531.258f, 59.8792f;
		
		case 1:
			return 1069.58f, 2366.363f, 43.0396f;
		
		case 2:
			return -1979.781f, 2584.161f, 2.2587f;
		
		case 3:
			return 1458.393f, 1113.066f, 113.334f;
		
		case 4:
			return 817.5361f, 1316.57f, 362.0491f;
		
		case 5:
			return 1671.232f, 3041.176f, 53.0351f;
		
		case 6:
			return -3163.364f, 756.8276f, 2.1183f;
		
		case 7:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 8:
			return -401.2717f, 1211.677f, 324.9297f;
		
		case 9:
			return 2909.154f, 770.3181f, 21.1684f;
		
		case 10:
			return 2778.909f, 2853.266f, 34.7828f;
		
		case 11:
			return 585.3987f, 2893.778f, 38.5297f;
		
		case 12:
			return -498.3305f, 3006.906f, 27.4341f;
		
		default:
	}
	return -498.3305f, 3006.906f, 27.4341f;
}

Vector3 func_139()//Position - 0x3989
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 1015.599f, 4350.668f, 41.484f;
		
		case 1:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 2:
			return -2436.25f, 4181.913f, 7.7719f;
		
		case 3:
			return 2463.142f, 3769.651f, 40.328f;
		
		case 4:
			return 1888.61f, 4626.815f, 37.4665f;
		
		case 5:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 6:
			return 3800f, 4462f, 5f;
		
		case 7:
			return 3350f, 5152f, 20f;
		
		case 8:
			return 2200f, 5600f, 54f;
		
		case 9:
			return 1410f, 6560f, 20f;
		
		case 10:
			return -330f, 6100f, 32f;
		
		case 11:
			return -1365f, 4380f, 42f;
		
		case 12:
			return 700f, 3900f, 30f;
		
		default:
	}
	return 700f, 3900f, 30f;
}

void func_140()//Position - 0x3AE0
{
	Local_55.f_6 = { func_136(MISC::GET_RANDOM_INT_IN_RANGE(0, 3)) };
	Local_55.f_6 = { Local_55.f_6 + Vector(120f, 0f, 0f) };
}







