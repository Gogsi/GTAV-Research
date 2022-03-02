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
	struct<46> Local_55 = { 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -808831384, 588969535, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_101 = 0;
	struct<3> Local_102[32];
	int iLocal_199 = 0;
	var uLocal_200 = 0;
	int iLocal_201 = 0;
	var uLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	struct<8> Local_214[3];
	var uLocal_239 = 0;
	var uLocal_240 = 0;
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
	iLocal_203 = 1076369579;
	iLocal_204 = 20;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_152(ScriptParam_0);
	}
	else
	{
		func_148();
	}
	while (true)
	{
		GlobalFunc_906();
		if (GlobalFunc_7680() || GlobalFunc_7810(18))
		{
			func_148();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_148();
		}
		switch (func_132(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_131() == 1)
				{
					func_130();
					func_129();
					if (GlobalFunc_1437(60000))
					{
						if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_55.f_10))
						{
							GlobalFunc_159("DSV_HELP1", -1);
						}
						else
						{
							GlobalFunc_159("DSV_HELP2", -1);
						}
					}
					Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (func_131() == 4)
				{
					Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_131() == 1)
				{
					func_38();
				}
				else if (func_131() == 4)
				{
					Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				GlobalFunc_5240(&(Local_55.f_43));
				if (GlobalFunc_914(&(Local_55.f_43)))
				{
					Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_148();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_131())
			{
				case 0:
					if (func_10())
					{
						func_130();
						Local_55 = 1;
					}
					break;
				
				case 1:
					func_9();
					func_8();
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

int func_1()//Position - 0x1ED
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x201
{
	struct<14> Var0;
	
	if (Local_55.f_42 == 0)
	{
		if (Local_55 != 4)
		{
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_55.f_2)))
			{
				if (GlobalFunc_5071(&(Local_55.f_45), 3000, 0))
				{
					if (Local_55.f_8 == GlobalFunc_314())
					{
						Var0.f_2 = 115;
						GlobalFunc_1290(Var0, GlobalFunc_5335(1));
					}
					else
					{
						Var0.f_2 = 116;
						Var0.f_10 = Local_55.f_8;
						GlobalFunc_1290(Var0, GlobalFunc_5335(1));
					}
					return 1;
				}
			}
		}
	}
	return 0;
}






void func_8()//Position - 0x3AA
{
	switch (Local_55.f_42)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_9()//Position - 0x3CD
{
	struct<14> Var0;
	var uVar14;
	
	if (Local_55 != 4)
	{
		iLocal_201 = 0;
		while (iLocal_201 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_201)))
			{
				uVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_201));
				if (MISC::IS_BIT_SET(Local_102[iLocal_201 /*3*/].f_1, 0))
				{
					Var0.f_2 = 116;
					Var0.f_10 = uVar14;
					Local_55.f_8 = uVar14;
					GlobalFunc_1290(Var0, GlobalFunc_5335(1));
					Local_55 = 4;
					return;
				}
				if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
				{
					if (MISC::IS_BIT_SET(Local_102[iLocal_201 /*3*/].f_1, 1))
					{
						MISC::SET_BIT(&(Local_55.f_1), 0);
					}
					if (MISC::IS_BIT_SET(Local_102[iLocal_201 /*3*/].f_1, 2))
					{
						MISC::SET_BIT(&(Local_55.f_1), 0);
					}
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_55.f_1, 1))
					{
						if (MISC::IS_BIT_SET(Local_102[iLocal_201 /*3*/].f_1, 3))
						{
							MISC::SET_BIT(&(Local_55.f_1), 1);
						}
					}
					if (!MISC::IS_BIT_SET(Local_55.f_1, 2))
					{
						if (MISC::IS_BIT_SET(Local_102[iLocal_201 /*3*/].f_1, 4))
						{
							MISC::SET_BIT(&(Local_55.f_1), 2);
						}
					}
					if (!MISC::IS_BIT_SET(Local_55.f_1, 3))
					{
						if (MISC::IS_BIT_SET(Local_102[iLocal_201 /*3*/].f_1, 5))
						{
							MISC::SET_BIT(&(Local_55.f_1), 3);
						}
					}
					if (!MISC::IS_BIT_SET(Local_55.f_1, 4))
					{
						if (MISC::IS_BIT_SET(Local_102[iLocal_201 /*3*/].f_1, 6))
						{
							MISC::SET_BIT(&(Local_55.f_1), 4);
						}
					}
				}
			}
			iLocal_201++;
		}
	}
}

int func_10()//Position - 0x519
{
	if (GlobalFunc_356(Local_55.f_10) && GlobalFunc_356(Local_55.f_11))
	{
		if ((func_21() && func_19()) && func_11())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_55.f_10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_55.f_11);
			return 1;
		}
	}
	return 0;
}

int func_11()//Position - 0x567
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_55.f_14)
	{
		if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_4[iVar0]) && GlobalFunc_356(Local_55.f_11)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
		{
			if (GlobalFunc_5367(Local_55.f_2))
			{
				if (Local_55.f_12 == 0)
				{
					if (GlobalFunc_900(&(Local_55.f_4[iVar0]), Local_55.f_2, 22, Local_55.f_11, iVar0, 1, 1, 1))
					{
						func_13(&(Local_55.f_4[iVar0]));
					}
				}
				else if (GlobalFunc_1407(&(Local_55.f_4[iVar0]), 22, Local_55.f_11, Local_55.f_28[iVar0 /*3*/], Local_55.f_38[iVar0], 1, 1, 1))
				{
					func_13(&(Local_55.f_4[iVar0]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_55.f_14)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_4[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}


void func_13(var uParam0)//Position - 0x6AD
{
	int iVar0;
	
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(*uParam0), Global_1574054);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(*uParam0), 0);
	PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(*uParam0), 1);
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(*uParam0), func_15(), 25000, 1);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if (iVar0 == 0 || iVar0 == 1)
	{
		PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 0);
	}
	else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
	{
		PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 2);
	}
	else
	{
		PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 1);
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 5, 1);
	}
	else if (iVar0 == 3)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 17, 1);
	}
	else if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 6)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 13, 1);
	}
	if (GlobalFunc_745())
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 20, 1);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 2, 1);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	if (iVar0 == 0)
	{
		PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 2);
	}
	else if (iVar0 == 1)
	{
		PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 1);
	}
	else if (iVar0 == 2)
	{
		PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 3);
	}
	PED::_0x49E50BDB8BA4DAB2(NETWORK::NET_TO_PED(*uParam0), 1);
	PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(*uParam0), 1);
	PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(*uParam0), 29, 1);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(*uParam0), 3);
	ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(*uParam0), SYSTEM::ROUND((200f * Global_262145.f_134)));
}


int func_15()//Position - 0x896
{
	switch (Local_55.f_11)
	{
		case joaat("g_m_y_ballaorig_01"):
		case joaat("g_m_y_ballaeast_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_mexgoon_02"):
		case joaat("g_f_y_vagos_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_lost_01"):
		case joaat("g_f_y_lost_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_chigoon_02"):
		case joaat("g_m_m_chigoon_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_advancedrifle");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_armgoon_01"):
		case joaat("g_m_y_armgoon_02"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("a_m_m_hillbilly_02"):
		case joaat("a_m_m_hillbilly_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case joaat("g_m_y_salvagoon_01"):
		case joaat("g_m_y_salvagoon_02"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_strpunk_01"):
		case joaat("g_m_y_strpunk_02"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		default:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_combatmg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
	}
	return joaat("weapon_pistol");
}




int func_19()//Position - 0xCE0
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_3) && GlobalFunc_356(Local_55.f_11)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (GlobalFunc_5367(Local_55.f_2))
		{
			if (Local_55.f_12 == 1)
			{
				if (GlobalFunc_1407(&(Local_55.f_3), 22, Local_55.f_11, Local_55.f_24, Local_55.f_27, 1, 1, 1))
				{
					func_13(&(Local_55.f_3));
					func_20();
				}
			}
			else if (GlobalFunc_900(&(Local_55.f_3), Local_55.f_2, 22, Local_55.f_11, -1, 1, 1, 1))
			{
				func_13(&(Local_55.f_3));
				func_20();
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_3))
	{
		return 0;
	}
	return 1;
}

void func_20()//Position - 0xD84
{
	if (Local_55.f_12 == 0)
	{
		if (GlobalFunc_745())
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_55.f_3), NETWORK::NET_TO_VEH(Local_55.f_2), MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 18f), 786468);
		}
		else
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_55.f_3), NETWORK::NET_TO_VEH(Local_55.f_2), MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 18f), 786599);
		}
	}
	else if (Local_55.f_12 == 2)
	{
		func_130();
		TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_55.f_3), uLocal_200);
	}
}

int func_21()//Position - 0xE02
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (GlobalFunc_356(Local_55.f_10))
		{
			if (func_23(&(Local_55.f_16), &(Local_55.f_19)))
			{
				if (GlobalFunc_1460(&(Local_55.f_2), Local_55.f_10, Local_55.f_16, Local_55.f_19, 1, 1, 1, 1, 0, 1))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_55.f_2), 0);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_55.f_2), 1);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_55.f_2));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_55.f_2), 1, 1);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_55.f_2), 0);
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
					{
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_55.f_2), "Not_Allow_As_Saved_Veh", 1);
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_55.f_2), "MPBitset"))
						{
							iVar0 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_55.f_2), "MPBitset");
						}
						MISC::SET_BIT(&iVar0, 10);
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_55.f_2), "MPBitset", iVar0);
					}
					if (Local_55.f_12 == 0)
					{
						if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_55.f_2)) < Local_55.f_14)
						{
							Local_55.f_14 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_55.f_2));
						}
					}
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


bool func_23(var uParam0, var uParam1)//Position - 0xFB3
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<3> Var5;
	
	Var5 = { GlobalFunc_271(PLAYER::PLAYER_ID()) };
	if (Local_55.f_12 == 1)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (VEHICLE::_0xA4822F1CF23F4810(&Var5, uParam0, &uVar2, 0f, 180f, 150f, 0, 1, 1))
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1367.557f, -3220.598f, 12.9448f, Var5, 1) >= 600f && MISC::GET_DISTANCE_BETWEEN_COORDS(750f, -3200f, 6f, Var5, 1) >= 700f)
				{
					if (iLocal_205 <= 5)
					{
						if (GlobalFunc_8427(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
						{
							bVar0 = true;
						}
					}
					else
					{
						Local_55 = 4;
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_204 += 4;
		if (iLocal_204 >= 80)
		{
			iLocal_204 = 20;
			iLocal_205++;
		}
	}
	return bVar0;
}















void func_38()//Position - 0x1657
{
	switch (Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_129();
			func_44();
			func_39();
			if (Local_55.f_42 > 0)
			{
				Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_148();
			break;
	}
}

void func_39()//Position - 0x16A3
{
	int iVar0;
	
	func_40(Local_55.f_3, &uLocal_206, -1082130432, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 < Local_55.f_14)
	{
		func_40(Local_55.f_4[iVar0], &(Local_214[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0);
		iVar0++;
	}
	if (MISC::IS_BIT_SET(Local_55.f_1, 0))
	{
		if (!MISC::IS_BIT_SET(Local_55.f_1, 1) && !MISC::IS_BIT_SET(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 3))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_3))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_55.f_3) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_55.f_3) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_55.f_3), Global_1574055);
					MISC::SET_BIT(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 3);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!MISC::IS_BIT_SET(Local_55.f_1, (2 + iVar0)) && !MISC::IS_BIT_SET(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, (4 + iVar0)))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_4[iVar0]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_55.f_4[iVar0]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_55.f_4[iVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_55.f_4[iVar0]), Global_1574055);
						if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_55.f_4[iVar0])))
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_55.f_4[iVar0]), 100f, 0);
						}
						MISC::SET_BIT(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), (4 + iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_40(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x182D
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		if (GlobalFunc_456())
		{
			Global_2422140 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_42(NETWORK::NET_TO_PED(uParam0), uParam1, 1, Global_2422140, iParam4, iParam5, fParam2, iParam6);
		}
		else
		{
			func_42(NETWORK::NET_TO_PED(uParam0), uParam1, -1, Global_2422140, iParam4, iParam5, fParam2, iParam6);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*uParam1))
	{
		GlobalFunc_589(uParam1);
	}
}


int func_42(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, var uParam7)//Position - 0x190A
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(uParam0))
		{
			HUD::SET_PED_HAS_AI_BLIP(uParam0, 1);
			uParam1->f_7 = uParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(uParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(uParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(uParam0, uParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(uParam0, uParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(uParam0);
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("MCUSTBLIP");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam7);
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(uParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}


void func_44()//Position - 0x1A34
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (!MISC::IS_BIT_SET(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0))
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
					func_124(2088, 1, -1);
					func_121(68, 1, -1);
					func_77(0, PLAYER::PLAYER_PED_ID(), "XPT_KAIE", -875716015, 1504756458, Global_262145.f_6402, 1, -1, 0, 0);
					GlobalFunc_7813(Global_262145.f_6403, 1, 1, 1092616192);
					if (GlobalFunc_745())
					{
						GlobalFunc_8434(86, "DSV_PASS0", 0, 0, -99);
					}
					else
					{
						GlobalFunc_8434(86, "DSV_PASS1", 0, 0, -99);
					}
					if (GlobalFunc_218())
					{
						GlobalFunc_8416(-1922554349, Global_262145.f_6403, &uVar1, 0, 0);
					}
					else
					{
						MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_262145.f_6403, "AM_DESTROY_VEH", &uVar2);
					}
					MISC::SET_BIT(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_55.f_1, 0))
				{
					if (!MISC::IS_BIT_SET(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 1))
					{
						if (GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_55.f_2), 1))
						{
							MISC::SET_BIT(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 1);
						}
					}
					if (!MISC::IS_BIT_SET(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 2))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_VEH(Local_55.f_2), PLAYER::PLAYER_PED_ID(), 1))
						{
							MISC::SET_BIT(&(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 2);
						}
					}
				}
				if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1) && GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_55.f_2), 0))
				{
					if (!MISC::IS_BIT_SET(Global_2446554.f_4398, 1))
					{
						MISC::SET_BIT(&(Global_2446554.f_4398), 1);
					}
				}
				else if (MISC::IS_BIT_SET(Global_2446554.f_4398, 1))
				{
					MISC::CLEAR_BIT(&(Global_2446554.f_4398), 1);
				}
				func_45();
			}
		}
	}
}

void func_45()//Position - 0x1C1D
{
	if (!MISC::IS_BIT_SET(uLocal_199, 0))
	{
		if (GlobalFunc_6910(27, -1) == 0)
		{
			if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_55.f_2), 0))
				{
					if (GlobalFunc_5071(&uLocal_239, 300000, 0))
					{
						func_48(27, 1, -1);
						MISC::SET_BIT(&iLocal_199, 0);
					}
				}
				else if (GlobalFunc_439(&uLocal_239))
				{
					GlobalFunc_434(&uLocal_239);
				}
			}
			else if (GlobalFunc_439(&uLocal_239))
			{
				GlobalFunc_434(&uLocal_239);
			}
		}
		else
		{
			MISC::SET_BIT(&iLocal_199, 0);
		}
	}
}



void func_48(int iParam0, int iParam1, int iParam2)//Position - 0x1CC0
{
	var uVar0;
	
	uVar0 = Global_2475762[iParam0 /*6*/][GlobalFunc_4990(iParam2)];
	STATS::STAT_SET_BOOL(uVar0, iParam1, 1);
}





























int func_77(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)//Position - 0x2647
{
	return func_78(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_78(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)//Position - 0x2667
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_88(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
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










var func_88(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x29AE
{
	var uVar0;
	
	uVar0 = func_89(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_89(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x29D1
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
		iVar1 = func_115(iVar1);
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
					GlobalFunc_6848(0, &iVar1);
					break;
				
				case 3:
					GlobalFunc_6848(1, &iVar1);
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
			func_124(1152, iVar1, -1);
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
					func_124(1153, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					GlobalFunc_5374(iVar1);
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


























int func_115(int iParam0)//Position - 0x38F0
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > GlobalFunc_6849(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_108(PLAYER::PLAYER_ID());
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






void func_121(int iParam0, int iParam1, int iParam2)//Position - 0x39E5
{
	int iVar0;
	
	iVar0 = GlobalFunc_6854(iParam0, GlobalFunc_4990(iParam2));
	iVar0 = (iVar0 + iParam1);
	GlobalFunc_6904(iParam0, iVar0, iParam2);
}



void func_124(int iParam0, int iParam1, int iParam2)//Position - 0x3A5C
{
	int iVar0;
	
	iVar0 = func_126(iParam0, GlobalFunc_4990(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!GlobalFunc_243(iParam0))
	{
		GlobalFunc_6720(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		GlobalFunc_6719(iParam0, iVar0, iParam2, 1);
	}
}


int func_126(int iParam0, var uParam1, int iParam2)//Position - 0x3B51
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][GlobalFunc_4990(uParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}



void func_129()//Position - 0x3BB5
{
	if (!HUD::DOES_BLIP_EXIST(uLocal_202))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_55.f_2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_55.f_2)))
			{
				uLocal_202 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_55.f_2));
				if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_55.f_10))
				{
					HUD::SET_BLIP_SPRITE(uLocal_202, 225);
				}
				else
				{
					HUD::SET_BLIP_SPRITE(uLocal_202, 348);
				}
				HUD::SET_BLIP_COLOUR(uLocal_202, 1);
				HUD::SET_BLIP_FLASH_TIMER(uLocal_202, 7000);
				HUD::SET_BLIP_PRIORITY(uLocal_202, 6);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_202, "DSV_BLIP");
			}
		}
	}
}

void func_130()//Position - 0x3C30
{
	if (Local_55.f_12 == 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_55.f_2))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_55.f_2), 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_200);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, NETWORK::NET_TO_VEH(Local_55.f_2), Local_55.f_20, 7f, iLocal_203, 3f);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_55.f_24, 1f, -1, 1048576000, 0, Local_55.f_27);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_200);
			}
		}
	}
}

int func_131()//Position - 0x3C9C
{
	return Local_55;
}

int func_132(int iParam0)//Position - 0x3CA6
{
	return Local_102[iParam0 /*3*/];
}
















void func_148()//Position - 0x421A
{
	if (HUD::DOES_BLIP_EXIST(uLocal_202))
	{
		HUD::REMOVE_BLIP(&uLocal_202);
	}
	func_151();
	if (func_131() == 4 && Local_55.f_10 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_55.f_10, 0);
	}
	MISC::CLEAR_BIT(&(Global_2446554.f_4398), 1);
	GlobalFunc_461(18, 0);
	GlobalFunc_491();
}



void func_151()//Position - 0x42D4
{
	if (Local_55.f_12 == 2)
	{
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_200);
	}
}

void func_152(struct<20> Param0)//Position - 0x42EA
{
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(4);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_55, 47);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_102, 97);
	if (!GlobalFunc_5091())
	{
		func_148();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_153();
			Local_55.f_8 = GlobalFunc_314();
		}
		GlobalFunc_461(18, 1);
		Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	else
	{
		func_148();
	}
}

void func_153()//Position - 0x4365
{
	func_156();
	Local_55.f_12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (Local_55.f_12 == 1 || Local_55.f_12 == 2)
	{
		Local_55.f_15 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		if (Local_55.f_12 == 1)
		{
			func_155(&(Local_55.f_16), &(Local_55.f_19));
		}
		else
		{
			func_155(&(Local_55.f_20), &(Local_55.f_23));
		}
		func_154();
	}
	Local_55.f_14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (Global_262145.f_6406 >= 0 && Global_262145.f_6406 < 5)
	{
		Local_55.f_13 = Global_262145.f_6406;
	}
	else
	{
		Local_55.f_13 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	}
}

void func_154()//Position - 0x43FD
{
	switch (Local_55.f_15)
	{
		case 0:
			Local_55.f_24 = { -2195.782f, -420.2502f, 12.0819f };
			Local_55.f_27 = 117.3927f;
			Local_55.f_28[0 /*3*/] = { -2189.975f, -422.8502f, 12.0709f };
			Local_55.f_38[0] = 152.6699f;
			Local_55.f_28[1 /*3*/] = { -2184.031f, -400.948f, 12.2027f };
			Local_55.f_38[1] = 337.9892f;
			Local_55.f_28[2 /*3*/] = { -2175.282f, -426.3756f, 12.128f };
			Local_55.f_38[2] = 12.2947f;
			break;
		
		case 1:
			Local_55.f_24 = { -981.5774f, -1487.319f, 4.5867f };
			Local_55.f_27 = 300.0815f;
			Local_55.f_28[0 /*3*/] = { -977.8269f, -1494.568f, 4.5867f };
			Local_55.f_38[0] = 0.731f;
			Local_55.f_28[1 /*3*/] = { -977.7324f, -1491.717f, 4.5867f };
			Local_55.f_38[1] = 173.7717f;
			Local_55.f_28[2 /*3*/] = { -954.6693f, -1486.713f, 4.16f };
			Local_55.f_38[2] = 304.8721f;
			break;
		
		case 2:
			Local_55.f_24 = { 697.3923f, -1375.27f, 25.196f };
			Local_55.f_27 = 111.1953f;
			Local_55.f_28[0 /*3*/] = { 717.8624f, -1360.491f, 25.0461f };
			Local_55.f_38[0] = 55.1674f;
			Local_55.f_28[1 /*3*/] = { 703.9843f, -1361.094f, 24.6728f };
			Local_55.f_38[1] = 306.7133f;
			Local_55.f_28[2 /*3*/] = { 707.1707f, -1388.706f, 25.2759f };
			Local_55.f_38[2] = 204.5666f;
			break;
		
		case 3:
			Local_55.f_24 = { -258.5791f, 302.4799f, 91.0086f };
			Local_55.f_27 = 180.4109f;
			Local_55.f_28[0 /*3*/] = { -244.9193f, 299.3712f, 91.0424f };
			Local_55.f_38[0] = 43.0354f;
			Local_55.f_28[1 /*3*/] = { -248.7361f, 305.6155f, 91.1444f };
			Local_55.f_38[1] = 191.8736f;
			Local_55.f_28[2 /*3*/] = { -232.4524f, 299.4706f, 91.2088f };
			Local_55.f_38[2] = 199.8353f;
			break;
		
		case 4:
			Local_55.f_24 = { 862.7026f, 2875.148f, 56.9868f };
			Local_55.f_27 = 206.7217f;
			Local_55.f_28[0 /*3*/] = { 880.2893f, 2862.074f, 55.6697f };
			Local_55.f_38[0] = 191.0122f;
			Local_55.f_28[1 /*3*/] = { 865.2399f, 2853.536f, 56.2583f };
			Local_55.f_38[1] = 305.8056f;
			Local_55.f_28[2 /*3*/] = { 867.6559f, 2841.155f, 56.944f };
			Local_55.f_38[2] = 235.4465f;
			break;
	}
}

void func_155(var uParam0, var uParam1)//Position - 0x46ED
{
	switch (Local_55.f_15)
	{
		case 0:
			*uParam0 = { -2192.39f, -419.3334f, 12.0959f };
			*uParam1 = 71.2404f;
			break;
		
		case 1:
			*uParam0 = { -977.0366f, -1482.866f, 4.0099f };
			*uParam1 = 124.7807f;
			break;
		
		case 2:
			*uParam0 = { 702.5064f, -1370.477f, 25.0573f };
			*uParam1 = 279.9129f;
			break;
		
		case 3:
			*uParam0 = { -253.3582f, 299.4982f, 90.9592f };
			*uParam1 = 184.8169f;
			break;
		
		case 4:
			*uParam0 = { 868.8133f, 2868.439f, 55.9186f };
			*uParam1 = 200.5778f;
			break;
	}
}

void func_156()//Position - 0x47B2
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	if (Global_262145.f_6405 >= 0 && Global_262145.f_6405 < 8)
	{
		iVar0 = Global_262145.f_6405;
	}
	switch (iVar0)
	{
		case 0:
			if (GlobalFunc_745())
			{
				Local_55.f_10 = joaat("baller");
			}
			else
			{
				Local_55.f_10 = joaat("zion");
			}
			if (GlobalFunc_745())
			{
				Local_55.f_11 = joaat("g_m_y_ballaorig_01");
			}
			else
			{
				Local_55.f_11 = joaat("g_m_y_ballaeast_01");
			}
			break;
		
		case 1:
			if (GlobalFunc_745())
			{
				Local_55.f_10 = joaat("emperor");
			}
			else
			{
				Local_55.f_10 = joaat("cavalcade2");
			}
			if (GlobalFunc_745())
			{
				Local_55.f_11 = joaat("g_m_y_mexgoon_02");
			}
			else
			{
				Local_55.f_11 = joaat("g_f_y_vagos_01");
			}
			break;
		
		case 2:
			if (GlobalFunc_745())
			{
				Local_55.f_10 = joaat("daemon");
			}
			else
			{
				Local_55.f_10 = joaat("gburrito");
			}
			if (GlobalFunc_745())
			{
				Local_55.f_11 = joaat("g_m_y_lost_01");
			}
			else
			{
				Local_55.f_11 = joaat("g_f_y_lost_01");
			}
			break;
		
		case 3:
			if (GlobalFunc_745())
			{
				Local_55.f_10 = joaat("pcj");
			}
			else
			{
				Local_55.f_10 = joaat("bjxl");
			}
			if (GlobalFunc_745())
			{
				Local_55.f_11 = joaat("g_m_m_chigoon_02");
			}
			else
			{
				Local_55.f_11 = joaat("g_m_m_chigoon_01");
			}
			break;
		
		case 4:
			if (GlobalFunc_745())
			{
				Local_55.f_10 = joaat("rocoto");
			}
			else
			{
				Local_55.f_10 = joaat("emperor");
			}
			if (GlobalFunc_745())
			{
				Local_55.f_11 = joaat("g_m_m_armgoon_01");
			}
			else
			{
				Local_55.f_11 = joaat("g_m_y_armgoon_02");
			}
			break;
		
		case 5:
			if (GlobalFunc_745())
			{
				Local_55.f_10 = joaat("journey");
			}
			else
			{
				Local_55.f_10 = joaat("sandking");
			}
			if (GlobalFunc_745())
			{
				Local_55.f_11 = joaat("a_m_m_hillbilly_02");
			}
			else
			{
				Local_55.f_11 = joaat("a_m_m_hillbilly_01");
			}
			break;
		
		case 6:
			if (GlobalFunc_745())
			{
				Local_55.f_10 = joaat("habanero");
			}
			else
			{
				Local_55.f_10 = joaat("sanchez2");
			}
			if (GlobalFunc_745())
			{
				Local_55.f_11 = joaat("g_m_y_salvagoon_01");
			}
			else
			{
				Local_55.f_11 = joaat("g_m_y_salvagoon_02");
			}
			break;
		
		case 7:
			if (GlobalFunc_745())
			{
				Local_55.f_10 = joaat("buffalo2");
			}
			else
			{
				Local_55.f_10 = joaat("dubsta");
			}
			if (GlobalFunc_745())
			{
				Local_55.f_11 = joaat("g_m_y_strpunk_01");
			}
			else
			{
				Local_55.f_11 = joaat("g_m_y_strpunk_02");
			}
			break;
	}
}






