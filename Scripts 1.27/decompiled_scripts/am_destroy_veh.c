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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_161(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_152(ScriptParam_0);
	}
	else
	{
		func_148();
	}
	while (true)
	{
		func_147();
		if (func_137() || func_133(18))
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
					if (func_128(60000))
					{
						if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_55.f_10))
						{
							func_127("DSV_HELP1", -1);
						}
						else
						{
							func_127("DSV_HELP2", -1);
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
				func_37(&(Local_55.f_43));
				if (func_36(&(Local_55.f_43)))
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
				if (func_6(&(Local_55.f_45), 3000, 0))
				{
					if (Local_55.f_8 == func_5())
					{
						Var0.f_2 = 115;
						func_3(Var0, func_4(1));
					}
					else
					{
						Var0.f_2 = 116;
						Var0.f_10 = Local_55.f_8;
						func_3(Var0, func_4(1));
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_3(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x278
{
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_4(int iParam0)//Position - 0x2A1
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_161(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_5()//Position - 0x2FE
{
	return -1;
}

int func_6(var uParam0, int iParam1, bool bParam2)//Position - 0x307
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0, bool bParam1, bool bParam2)//Position - 0x365
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
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
					func_3(Var0, func_4(1));
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
	if (func_35(Local_55.f_10) && func_35(Local_55.f_11))
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
		if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_4[iVar0]) && func_35(Local_55.f_11)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
		{
			if (func_17(Local_55.f_2))
			{
				if (Local_55.f_12 == 0)
				{
					if (func_16(&(Local_55.f_4[iVar0]), Local_55.f_2, 22, Local_55.f_11, iVar0, 1, 1, 1))
					{
						func_13(&(Local_55.f_4[iVar0]));
					}
				}
				else if (func_12(&(Local_55.f_4[iVar0]), 22, Local_55.f_11, Local_55.f_28[iVar0 /*3*/], Local_55.f_38[iVar0], 1, 1, 1))
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

int func_12(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x64E
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, iParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
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
	if (func_14())
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

int func_14()//Position - 0x875
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
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

int func_16(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0xC00
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_17(var uParam0)//Position - 0xC88
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_18(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_18(int iParam0)//Position - 0xCA8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_19()//Position - 0xCE0
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_3) && func_35(Local_55.f_11)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (func_17(Local_55.f_2))
		{
			if (Local_55.f_12 == 1)
			{
				if (func_12(&(Local_55.f_3), 22, Local_55.f_11, Local_55.f_24, Local_55.f_27, 1, 1, 1))
				{
					func_13(&(Local_55.f_3));
					func_20();
				}
			}
			else if (func_16(&(Local_55.f_3), Local_55.f_2, 22, Local_55.f_11, -1, 1, 1, 1))
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
		if (func_14())
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
		if (func_35(Local_55.f_10))
		{
			if (func_23(&(Local_55.f_16), &(Local_55.f_19)))
			{
				if (func_22(&(Local_55.f_2), Local_55.f_10, Local_55.f_16, Local_55.f_19, 1, 1, 1, 1, 0, 1))
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

int func_22(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)//Position - 0xF30
{
	var uVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = VEHICLE::CREATE_VEHICLE(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = NETWORK::VEH_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar0, iParam10);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam8)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
			else
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
			}
		}
		VEHICLE::SET_VEHICLE_IS_STOLEN(iVar0, iParam9);
		return 1;
	}
	return 0;
}

bool func_23(var uParam0, var uParam1)//Position - 0xFB3
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<3> Var5;
	
	Var5 = { func_34(PLAYER::PLAYER_ID()) };
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
						if (func_24(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
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

int func_24(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)//Position - 0x10B3
{
	Global_2404548 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404548++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404548++;
	if (fParam14 > 0f)
	{
		if (func_30(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404548++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_25(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404548++;
	return 1;
}

int func_25(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x11B0
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_161(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_34(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_161(iVar1, 1, 1))
		{
			if (!func_27(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_26(iVar1) || !bParam10) && !Global_2414009[iVar1 /*254*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_34(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_34(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x1366
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2414009[iParam0 /*254*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_27(int iParam0, int iParam1)//Position - 0x1390
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_28(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_28(int iParam0, bool bParam1)//Position - 0x13DB
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_29()//Position - 0x141C
{
	return Global_1312737;
}

int func_30(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)//Position - 0x1428
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_161(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_26(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_31(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_34(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x1524
{
	if (func_33(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2445582 = { func_32(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2445582))
	{
		return 1;
	}
	return 0;
}

struct<13> func_32(int iParam0)//Position - 0x155A
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_33(int iParam0, int iParam1)//Position - 0x1571
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2445582 = { func_32(iParam0) };
		Global_2445595 = { func_32(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2445582))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2445595))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2445512, 35, &Global_2445582);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2445547, 35, &Global_2445595);
				if (Global_2445512 == Global_2445547)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_34(int iParam0)//Position - 0x15DE
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_35(int iParam0)//Position - 0x15F1
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_36(var uParam0)//Position - 0x160F
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_37(var uParam0)//Position - 0x1638
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_7(uParam0, 0, 0);
		}
	}
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
		if (func_43())
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
		func_41(uParam1);
	}
}

void func_41(var uParam0)//Position - 0x189C
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::REMOVE_BLIP(uParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(uParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
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

bool func_43()//Position - 0x1A28
{
	return Global_1315874;
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
					func_73(Global_262145.f_6403, 1, 1, 1092616192);
					if (func_14())
					{
						func_60(86, "DSV_PASS0", 0, 0, -99);
					}
					else
					{
						func_60(86, "DSV_PASS1", 0, 0, -99);
					}
					if (func_59())
					{
						func_52(-1922554349, Global_262145.f_6403, &uVar1, 0, 0);
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
						if (func_51(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_55.f_2), 1))
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
				if (func_161(PLAYER::PLAYER_ID(), 1, 1) && func_51(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_55.f_2), 0))
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
		if (func_50(27, -1) == 0)
		{
			if (func_161(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (func_51(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_55.f_2), 0))
				{
					if (func_6(&uLocal_239, 300000, 0))
					{
						func_48(27, 1, -1);
						MISC::SET_BIT(&iLocal_199, 0);
					}
				}
				else if (func_47(&uLocal_239))
				{
					func_46(&uLocal_239);
				}
			}
			else if (func_47(&uLocal_239))
			{
				func_46(&uLocal_239);
			}
		}
		else
		{
			MISC::SET_BIT(&iLocal_199, 0);
		}
	}
}

void func_46(var uParam0)//Position - 0x1CA7
{
	uParam0->f_1 = 0;
}

bool func_47(var uParam0)//Position - 0x1CB4
{
	return uParam0->f_1;
}

void func_48(int iParam0, int iParam1, int iParam2)//Position - 0x1CC0
{
	var uVar0;
	
	uVar0 = Global_2475762[iParam0 /*6*/][func_49(iParam2)];
	STATS::STAT_SET_BOOL(uVar0, iParam1, 1);
}

int func_49(int iParam0)//Position - 0x1CE4
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

int func_50(int iParam0, int iParam1)//Position - 0x1D18
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2475762[iParam0 /*6*/][func_49(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)//Position - 0x1D44
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_52(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0x1D88
{
	int iVar0;
	
	if (!func_59())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
			if (iParam1 > 0)
			{
				func_53(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
			func_53(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_53(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x2020
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_59())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_29()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_2540557 = 1;
			return 0;
		}
		if (Global_2435880)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2540558 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2540096[iVar1 /*69*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			*uParam0 = func_58(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2540096[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2540554 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2540556 = 1;
			Global_2540559 = iParam4;
			Global_2540561 = iParam3;
			Global_2540562 = 1;
			Global_2540560 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2540559 = iParam4;
			Global_2540561 = iParam3;
			Global_2540562 = 1;
			Global_2540560 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_57(1, iParam4);
			Global_2540556 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_54(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_54(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)//Position - 0x2194
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_55(iParam0);
	}
}

void func_55(int iParam0)//Position - 0x21CB
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_59())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_56(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_2540096[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2540096[iParam0 /*69*/] = { Var1 };
	}
}

int func_56(int iParam0)//Position - 0x222C
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2540096[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_57(int iParam0, var uParam1)//Position - 0x2254
{
	Global_2437132 = uParam1;
	Global_2437131 = iParam0;
}

int func_58(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)//Position - 0x2268
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2540096[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_59())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2540096[iVar0 /*69*/].f_2 = 1;
			Global_2540096[iVar0 /*69*/].f_1 = uParam5;
			Global_2540096[iVar0 /*69*/].f_3 = uParam1;
			Global_2540096[iVar0 /*69*/].f_4 = uParam2;
			Global_2540096[iVar0 /*69*/].f_7 = uParam3;
			Global_2540096[iVar0 /*69*/].f_5 = 0;
			Global_2540096[iVar0 /*69*/] = iParam0;
			Global_2540096[iVar0 /*69*/].f_6 = iParam4;
			Global_2540096[iVar0 /*69*/].f_65 = uParam8;
			Global_2540096[iVar0 /*69*/].f_64 = uParam7;
			Global_2540096[iVar0 /*69*/].f_68 = 0;
			Global_2540554 = 0;
			if (bParam6)
			{
				Global_2540096[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_59()//Position - 0x233C
{
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x2350
{
	func_61(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_61(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x2367
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_62(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_62(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)//Position - 0x2388
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 15)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_71();
	if (iVar0 == -1)
	{
		return;
	}
	func_70(iVar0);
	func_69(iVar0, uParam0);
	func_68(iVar0, uParam2, bParam3);
	func_67(iVar0, sParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_66(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_64(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_63(iVar0, iParam6);
	}
}

void func_63(int iParam0, int iParam1)//Position - 0x2434
{
	Global_1321259.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_64(int iParam0, char* sParam1, bool bParam2)//Position - 0x244A
{
	StringCopy(&(Global_1321259.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_65(iParam0);
}

void func_65(int iParam0)//Position - 0x2471
{
	MISC::SET_BIT(&(Global_1321259.f_59[iParam0 /*16*/]), 5);
}

void func_66(int iParam0)//Position - 0x2488
{
	MISC::SET_BIT(&(Global_1321259.f_59[iParam0 /*16*/]), 4);
}

void func_67(int iParam0, char* sParam1)//Position - 0x249F
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1321259.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_68(int iParam0, var uParam1, bool bParam2)//Position - 0x24BF
{
	Global_1321259.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1321259.f_59[iParam0 /*16*/]), 2);
		MISC::CLEAR_BIT(&(Global_1321259.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		MISC::SET_BIT(&(Global_1321259.f_59[iParam0 /*16*/]), 3);
		MISC::CLEAR_BIT(&(Global_1321259.f_59[iParam0 /*16*/]), 2);
	}
}

void func_69(int iParam0, var uParam1)//Position - 0x2519
{
	Global_1321259.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_70(int iParam0)//Position - 0x252F
{
	MISC::SET_BIT(&(Global_1321259.f_59[iParam0 /*16*/]), 0);
}

int func_71()//Position - 0x2546
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_72(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_72(int iParam0)//Position - 0x2574
{
	return MISC::IS_BIT_SET(Global_1321259.f_59[iParam0 /*16*/], 0);
}

void func_73(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x258B
{
	func_74(iParam0, iParam1, iParam2, fParam3);
}

void func_74(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x259F
{
	func_75(iParam0, iParam1, iParam2, fParam3);
}

void func_75(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x25B3
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_4 = iVar1;
	Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_3 = (Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_76(iVar1, 0);
	}
}

void func_76(int iParam0, bool bParam1)//Position - 0x2636
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
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
				func_84(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_79(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_79(int iParam0, int iParam1, char* sParam2)//Position - 0x26DC
{
	struct<3> Var0;
	
	Var0 = { func_82(iParam0, 1) };
	if (iParam0 == func_81(PLAYER::PLAYER_PED_ID()))
	{
		func_80(1);
	}
	func_84(Var0, iParam1, 0, sParam2);
}

void func_80(int iParam0)//Position - 0x270E
{
	Global_2422140.f_1307 = iParam0;
}

int func_81(var uParam0)//Position - 0x271F
{
	return uParam0;
}

Vector3 func_82(int iParam0, bool bParam1)//Position - 0x2729
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_83(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fVar3 = ENTITY::GET_ENTITY_HEADING(iParam0);
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_83(var uParam0)//Position - 0x27C6
{
	return uParam0;
}

void func_84(struct<3> Param0, int iParam3, int iParam4, char* sParam5)//Position - 0x27D0
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2422140.f_726[iVar0 /*29*/].f_6 == 0 || Global_2422140.f_726[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2422140.f_726[iVar1 /*29*/] = { Param0 };
			Global_2422140.f_726[iVar1 /*29*/].f_6 = 1;
			Global_2422140.f_726[iVar1 /*29*/].f_4 = func_87(Global_2422140.f_726[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422140.f_726[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2422140.f_726[iVar1 /*29*/].f_3 = iParam3;
			Global_2422140.f_726[iVar1 /*29*/].f_8 = iParam4;
			Global_2422140.f_726[iVar1 /*29*/].f_9 = func_86();
			Global_2422140.f_726[iVar1 /*29*/].f_10 = func_85();
			StringCopy(&(Global_2422140.f_726[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_85()//Position - 0x28D0
{
	if (Global_2422140.f_1307)
	{
		Global_2422140.f_1307 = 0;
		return 1;
	}
	Global_2422140.f_1307 = 0;
	return 0;
}

var func_86()//Position - 0x28FA
{
	var uVar0;
	
	uVar0 = Global_2422140.f_1309;
	Global_2422140.f_1309 = 1;
	return uVar0;
}

float func_87(struct<3> Param0, var uParam3, var uParam4)//Position - 0x2915
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
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
	
	if (func_120(PLAYER::PLAYER_ID()) || func_119(PLAYER::PLAYER_ID()))
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
	if (func_118(uParam2))
	{
	}
	if (func_117())
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
			iVar1 = func_114(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_112(0, &iVar1);
					break;
				
				case 3:
					func_112(1, &iVar1);
					break;
				
				case 1:
					func_109(&iVar1);
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
				func_99((func_108(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
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
					func_94(iVar1);
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
				func_90((func_92(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_90((func_92(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_90(int iParam0)//Position - 0x2B8C
{
	if (func_117())
	{
		Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_5 = iParam0;
		func_91(joaat("mpply_globalxp"), iParam0);
	}
}

void func_91(int iParam0, var uParam1)//Position - 0x2BB7
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_92(int iParam0)//Position - 0x2BD3
{
	if (iParam0 > -1)
	{
		if (func_161(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_93(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1582596[iParam0 /*324*/].f_180.f_5;
			}
		}
		else
		{
			return func_93(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x2C24
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_94(int iParam0)//Position - 0x2C42
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_32(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_97(func_98(&Var0));
			if (iVar13 == 0)
			{
				func_96(&Global_1335490, iParam0);
				func_95(joaat("mpply_crew_local_xp_0"), Global_1335490);
			}
			else if (iVar13 == 1)
			{
				func_96(&Global_1335491, iParam0);
				func_95(joaat("mpply_crew_local_xp_1"), Global_1335491);
			}
			else if (iVar13 == 2)
			{
				func_96(&Global_1335492, iParam0);
				func_95(joaat("mpply_crew_local_xp_2"), Global_1335492);
			}
			else if (iVar13 == 3)
			{
				func_96(&Global_1335493, iParam0);
				func_95(joaat("mpply_crew_local_xp_3"), Global_1335493);
			}
			else if (iVar13 == 4)
			{
				func_96(&Global_1335494, iParam0);
				func_95(joaat("mpply_crew_local_xp_4"), Global_1335494);
			}
		}
	}
}

void func_95(int iParam0, var uParam1)//Position - 0x2D16
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1335485 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1335487 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1335487 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1335488 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1335489 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1335490 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1335491 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1335492 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1335493 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1335494 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1335495 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1335496 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1335497 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1335498 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1335499 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1335500 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1335501 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_96(var uParam0, int iParam1)//Position - 0x2E3B
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_97(int iParam0)//Position - 0x2E4C
{
	if (iParam0 == Global_1335485)
	{
		return 0;
	}
	else if (iParam0 == Global_1335486)
	{
		return 1;
	}
	else if (iParam0 == Global_1335487)
	{
		return 2;
	}
	else if (iParam0 == Global_1335488)
	{
		return 3;
	}
	else if (iParam0 == Global_1335489)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_98(var uParam0)//Position - 0x2EA9
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2435171;
		}
	}
	return Global_2435171;
}

void func_99(int iParam0, int iParam1, int iParam2)//Position - 0x2ECC
{
	if (func_117())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7253 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1335605[func_49(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1335605[func_49(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7252 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7252 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_107(PLAYER::PLAYER_ID()))
		{
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_1 = iParam0;
			Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_180.f_6 = func_105(iParam0, 1);
		}
		func_104(627, iParam0, -1, 1);
		func_103(628, func_105(iParam0, 1), -1, 1);
		Global_1335605[func_49(-1)] = iParam0;
		func_100(7, 0);
	}
}

void func_100(int iParam0, int iParam1)//Position - 0x2FEC
{
	int iVar0;
	
	if (func_102(iParam0, iParam1))
	{
		iVar0 = func_101();
		Global_2435149[iVar0] = iParam0;
	}
}

int func_101()//Position - 0x300F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435149[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_102(int iParam0, var uParam1)//Position - 0x3044
{
	if (Global_1315888)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315900) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_103(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x30CA
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_104(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x30F5
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 775:
			Global_1335551[func_49(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1335557[func_49(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1335563[func_49(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1335569[func_49(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1335527[func_49(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1335533[func_49(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1335539[func_49(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1335545[func_49(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1335503[func_49(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335509[func_49(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335515[func_49(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335521[func_49(iParam2)] = iParam1;
			break;
		
		case 745:
			Global_1335575[func_49(iParam2)] = iParam1;
			break;
		
		case 746:
			Global_1335581[func_49(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1335587[func_49(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1335593[func_49(iParam2)] = iParam1;
			break;
		
		case 1290:
			Global_1335599[func_49(iParam2)] = iParam1;
			break;
		
		case 627:
			Global_1335605[func_49(iParam2)] = iParam1;
			break;
		
		case 1265:
			Global_1335611[func_49(iParam2)] = iParam1;
			break;
		
		case 1862:
			Global_2476002[0 /*6*/][func_49(iParam2)] = iParam1;
			break;
		
		case 2251:
			Global_2476002[1 /*6*/][func_49(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335617[func_49(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1335623[func_49(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1335629[func_49(iParam2)] = iParam1;
			break;
		
		case 1223:
			Global_1335635[func_49(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_105(int iParam0, bool bParam1)//Position - 0x336F
{
	if (bParam1)
	{
	}
	return func_106(iParam0, 0);
}

int func_106(int iParam0, int iParam1)//Position - 0x3383
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_270489[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270489[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_107(int iParam0)//Position - 0x3442
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2422140.f_1, iParam0);
	}
	return 1;
}

int func_108(int iParam0)//Position - 0x3467
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1335605[func_49(-1)];
			}
			else if (func_107(iParam0))
			{
				return Global_1582596[iParam0 /*324*/].f_180.f_1;
			}
		}
	}
	else
	{
		return Global_1335605[func_49(-1)];
	}
	return 0;
}

void func_109(int iParam0)//Position - 0x34C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_111(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_33(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_110(*iParam0, 100) * (10f * Global_262145.f_4187)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_110(*iParam0, 100) * (20f * Global_262145.f_4180)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_110(int iParam0, int iParam1)//Position - 0x35AE
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_111(int iParam0, int iParam1)//Position - 0x35CF
{
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_112(bool bParam0, int iParam1)//Position - 0x3785
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_161(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_33(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_161(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_113(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_33(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_110(*iParam1, 100) * (10f * Global_262145.f_4187)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_110(*iParam1, 100) * (20f * Global_262145.f_4180)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_113(int iParam0, int iParam1)//Position - 0x389D
{
	return SYSTEM::VDIST(func_34(iParam0), func_34(iParam1));
	return 0f;
}

int func_114(int iParam0)//Position - 0x38B9
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_110(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_115(int iParam0)//Position - 0x38F0
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_108(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_108(PLAYER::PLAYER_ID());
		}
	}
	if (func_116(8000, 0, 0) > 0)
	{
		if (func_116(8000, 0, 0) < (iParam0 + func_108(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_116(8000, 0, 0) - func_108(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_116(int iParam0, bool bParam1, int iParam2)//Position - 0x3954
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_270489[iParam0];
}

int func_117()//Position - 0x397C
{
	return 1;
}

int func_118(var uParam0)//Position - 0x3985
{
	if (MISC::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_119(int iParam0)//Position - 0x39BD
{
	return Global_2414009[iParam0 /*254*/].f_114 == 2;
}

bool func_120(int iParam0)//Position - 0x39D1
{
	return Global_2414009[iParam0 /*254*/].f_114 == 7;
}

void func_121(int iParam0, int iParam1, int iParam2)//Position - 0x39E5
{
	int iVar0;
	
	iVar0 = func_123(iParam0, func_49(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_122(iParam0, iVar0, iParam2);
}

void func_122(int iParam0, int iParam1, var uParam2)//Position - 0x3A0C
{
	int iVar0;
	
	iVar0 = Global_2475233[iParam0 /*6*/][func_49(uParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_123(int iParam0, int iParam1)//Position - 0x3A30
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2475233[iParam0 /*6*/][func_49(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_124(int iParam0, int iParam1, int iParam2)//Position - 0x3A5C
{
	int iVar0;
	
	iVar0 = func_126(iParam0, func_49(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_125(iParam0))
	{
		func_103(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_104(iParam0, iVar0, iParam2, 1);
	}
}

int func_125(int iParam0)//Position - 0x3A9D
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 775:
			case 776:
			case 777:
			case 778:
			case 765:
			case 766:
			case 767:
			case 768:
			case 755:
			case 756:
			case 757:
			case 758:
			case 745:
			case 746:
			case 747:
			case 748:
			case 1290:
			case 627:
			case 1265:
			case 752:
			case 753:
			case 754:
			case 1223:
			case 1862:
			case 2251:
				return 1;
				break;
			}
	}
	return 0;
}

int func_126(int iParam0, var uParam1, int iParam2)//Position - 0x3B51
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_49(uParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_127(char* sParam0, int iParam1)//Position - 0x3B83
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_128(int iParam0)//Position - 0x3B9A
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2408508, NETWORK::GET_NETWORK_TIME())) > iParam0;
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

bool func_133(int iParam0)//Position - 0x3CB4
{
	return !func_134(iParam0);
}

int func_134(int iParam0)//Position - 0x3CC3
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_4996)
			{
				return 0;
			}
			if (func_136(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_4997)
			{
				return 0;
			}
			if (func_136(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_4998)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_4999)
			{
				return 0;
			}
			if (func_136(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_135(4))
			{
				return 0;
			}
			if (func_136(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 18:
			if (func_135(4))
			{
				return 0;
			}
			if (func_136(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_135(4))
			{
				return 0;
			}
			if (func_136(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_135(int iParam0)//Position - 0x3F5D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_161(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2414009[iVar0 /*254*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_136(int iParam0, int iParam1)//Position - 0x3FA2
{
	return MISC::IS_BIT_SET(Global_2414009[iParam0 /*254*/].f_205, iParam1);
}

int func_137()//Position - 0x3FBA
{
	bool bVar0;
	
	func_144(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_143())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (func_142())
	{
		return 1;
	}
	if (func_141(157))
	{
		if (!func_140())
		{
			return 1;
		}
	}
	if (func_141(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_138() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_138()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_138()//Position - 0x404E
{
	switch (func_139())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_139()//Position - 0x4082
{
	return Global_24444;
}

bool func_140()//Position - 0x408D
{
	return Global_2428131.f_572;
}

int func_141(int iParam0)//Position - 0x409C
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_142()//Position - 0x40B3
{
	return Global_2435238;
}

bool func_143()//Position - 0x40BF
{
	return Global_2428131.f_567;
}

void func_144(var uParam0)//Position - 0x40CE
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 168)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_145(iVar0);
					break;
				
				case 2:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_145(int iParam0)//Position - 0x413E
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_161(Var0.f_1, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_146(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_146(int iParam0, var uParam1)//Position - 0x41BF
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_147()//Position - 0x420D
{
	SYSTEM::WAIT(0);
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
	func_150(18, 0);
	func_149();
}

void func_149()//Position - 0x4269
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_150(int iParam0, bool bParam1)//Position - 0x4275
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_205, iParam0))
		{
			MISC::SET_BIT(&(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_205), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_205, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_205), iParam0);
	}
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
	func_159(func_160(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(4);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_158(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_55, 47);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_102, 97);
	if (!func_157())
	{
		func_148();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_153();
			Local_55.f_8 = func_5();
		}
		func_150(18, 1);
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
			if (func_14())
			{
				Local_55.f_10 = joaat("baller");
			}
			else
			{
				Local_55.f_10 = joaat("zion");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("g_m_y_ballaorig_01");
			}
			else
			{
				Local_55.f_11 = joaat("g_m_y_ballaeast_01");
			}
			break;
		
		case 1:
			if (func_14())
			{
				Local_55.f_10 = joaat("emperor");
			}
			else
			{
				Local_55.f_10 = joaat("cavalcade2");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("g_m_y_mexgoon_02");
			}
			else
			{
				Local_55.f_11 = joaat("g_f_y_vagos_01");
			}
			break;
		
		case 2:
			if (func_14())
			{
				Local_55.f_10 = joaat("daemon");
			}
			else
			{
				Local_55.f_10 = joaat("gburrito");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("g_m_y_lost_01");
			}
			else
			{
				Local_55.f_11 = joaat("g_f_y_lost_01");
			}
			break;
		
		case 3:
			if (func_14())
			{
				Local_55.f_10 = joaat("pcj");
			}
			else
			{
				Local_55.f_10 = joaat("bjxl");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("g_m_m_chigoon_02");
			}
			else
			{
				Local_55.f_11 = joaat("g_m_m_chigoon_01");
			}
			break;
		
		case 4:
			if (func_14())
			{
				Local_55.f_10 = joaat("rocoto");
			}
			else
			{
				Local_55.f_10 = joaat("emperor");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("g_m_m_armgoon_01");
			}
			else
			{
				Local_55.f_11 = joaat("g_m_y_armgoon_02");
			}
			break;
		
		case 5:
			if (func_14())
			{
				Local_55.f_10 = joaat("journey");
			}
			else
			{
				Local_55.f_10 = joaat("sandking");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("a_m_m_hillbilly_02");
			}
			else
			{
				Local_55.f_11 = joaat("a_m_m_hillbilly_01");
			}
			break;
		
		case 6:
			if (func_14())
			{
				Local_55.f_10 = joaat("habanero");
			}
			else
			{
				Local_55.f_10 = joaat("sanchez2");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("g_m_y_salvagoon_01");
			}
			else
			{
				Local_55.f_11 = joaat("g_m_y_salvagoon_02");
			}
			break;
		
		case 7:
			if (func_14())
			{
				Local_55.f_10 = joaat("buffalo2");
			}
			else
			{
				Local_55.f_10 = joaat("dubsta");
			}
			if (func_14())
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

int func_157()//Position - 0x49F6
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_143())
		{
			return 0;
		}
		if (func_141(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_158(int iParam0, int iParam1, bool bParam2)//Position - 0x4A4F
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_149();
			}
			else
			{
				return 0;
			}
		}
		if (!func_43())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_149();
					}
					else
					{
						return 0;
					}
				}
				if (func_143())
				{
					if (!bParam2)
					{
						func_149();
					}
					else
					{
						return 0;
					}
				}
				if (func_141(155))
				{
					if (!bParam2)
					{
						func_149();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_149();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_149();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_149();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_159(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)//Position - 0x4B64
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_149();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_160(int iParam0)//Position - 0x4B83
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

int func_161(int iParam0, bool bParam1, bool bParam2)//Position - 0x4E3C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422140.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

