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
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<3> Local_54[32];
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
	sLocal_19 = "NULL";
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_36(ScriptParam_0);
	}
	else
	{
		func_33();
	}
	iLocal_49 = MISC::GET_GAME_TIMER();
	while (true)
	{
		GlobalFunc_906();
		if ((GlobalFunc_7778() || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) || (GlobalFunc_362(PLAYER::PLAYER_ID()) || GlobalFunc_361(PLAYER::PLAYER_ID())))
		{
			func_33();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_2();
			func_1();
			iLocal_50++;
			if (iLocal_50 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				iLocal_50 = 0;
			}
		}
		else
		{
			func_33();
		}
	}
}

void func_1()//Position - 0xEF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if ((iLocal_50 % iVar0) == 0)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					if (Local_54[iVar0 /*3*/].f_2)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_52)
							{
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexlow_veh");
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexnorm_veh");
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
								iLocal_52 = 1;
							}
							if (!MISC::IS_BIT_SET(iLocal_51, iVar0))
							{
								MISC::SET_BIT(&iLocal_51, iVar0);
							}
						}
						else if (MISC::IS_BIT_SET(iLocal_51, iVar0))
						{
							MISC::CLEAR_BIT(&iLocal_51, iVar0);
						}
					}
					else if (MISC::IS_BIT_SET(iLocal_51, iVar0))
					{
						MISC::CLEAR_BIT(&iLocal_51, iVar0);
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_51, iVar0))
				{
					MISC::CLEAR_BIT(&iLocal_51, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_51 == 0 && iLocal_52) && !Local_54[iVar1 /*3*/].f_2)
	{
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
		iLocal_52 = 0;
	}
}

void func_2()//Position - 0x21E
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (iLocal_49 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	bVar3 = false;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar1 = PLAYER::PLAYER_PED_ID();
			if (func_19(&uVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_48)
	{
		case 0:
			if ((GlobalFunc_6722(PLAYER::PLAYER_ID(), 1) || GlobalFunc_895()) || !bVar3)
			{
				iLocal_48 = 4;
			}
			else
			{
				iVar0 = func_12();
				if (iVar0 != func_11(iVar2) && iVar0 != 0)
				{
					func_10(iVar0);
					iLocal_49 = MISC::GET_GAME_TIMER();
					iLocal_48 = 2;
				}
				else
				{
					iLocal_49 = MISC::GET_GAME_TIMER() + 500;
				}
			}
			break;
		
		case 2:
			if (func_3())
			{
				Global_24597 = 0f;
				SCRIPT::REQUEST_SCRIPT("pb_prostitute");
				iLocal_49 = MISC::GET_GAME_TIMER() + 250;
				Local_54[iVar2 /*3*/].f_2 = 0;
				iLocal_48 = 3;
			}
			else
			{
				iLocal_49 = MISC::GET_GAME_TIMER() + 250;
			}
			break;
		
		case 3:
			if ((SCRIPT::HAS_SCRIPT_LOADED("pb_prostitute") && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pb_prostitute")) <= 0) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("pb_prostitute", PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1, 0))
			{
				iVar4 = func_11(iVar2);
				iLocal_53 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("pb_prostitute", &iVar4, 1, 2050);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("pb_prostitute");
				iLocal_48 = 0;
			}
			iLocal_49 = MISC::GET_GAME_TIMER();
			break;
		
		case 4:
			if (func_3())
			{
				Local_54[iVar2 /*3*/].f_2 = 0;
				iLocal_49 = MISC::GET_GAME_TIMER() + 250;
				iLocal_48 = 5;
			}
			else
			{
				iLocal_49 = MISC::GET_GAME_TIMER() + 500;
			}
			break;
		
		case 5:
			if ((!GlobalFunc_6722(PLAYER::PLAYER_ID(), 1) && !GlobalFunc_895()) && bVar3)
			{
				iLocal_49 = MISC::GET_GAME_TIMER() + 250;
				iLocal_48 = 0;
			}
			else
			{
				iLocal_49 = MISC::GET_GAME_TIMER() + 500;
			}
			break;
	}
}

int func_3()//Position - 0x3E9
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pb_prostitute")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("pb_prostitute", PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1, 0))
	{
		return 1;
	}
	if (iLocal_53 == 0)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_4();
	}
	else
	{
		PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("pb_prostitute", 1);
	}
	return 0;
}

void func_4()//Position - 0x437
{
	struct<2> Var0;
	int iVar2;
	
	Var0 = 229;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar2 = func_5(1, 1);
	if (iVar2 != 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iVar2);
	}
}

var func_5(int iParam0, bool bParam1)//Position - 0x463
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (GlobalFunc_1269(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!GlobalFunc_6678(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}





void func_10(int iParam0)//Position - 0x5A4
{
	Local_54[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = iParam0;
}

int func_11(int iParam0)//Position - 0x5B6
{
	if (iParam0 == -1)
	{
		return Local_54[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/];
	}
	return Local_54[iParam0 /*3*/];
}

int func_12()//Position - 0x5D5
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	
	iVar0 = func_13();
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (!ENTITY::DOES_ENTITY_EXIST(func_11(iVar1)))
	{
		func_10(0);
		return iVar0;
	}
	if (iLocal_53 != 0 && SCRIPT::IS_THREAD_ACTIVE(iLocal_53))
	{
		if (Local_54[iVar1 /*3*/].f_2)
		{
			return func_11(iVar1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar2 = PLAYER::PLAYER_PED_ID();
				if (func_19(&uVar2))
				{
					uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(uVar3))
					{
						if (func_11(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar3, 0) || PED::IS_PED_IN_VEHICLE(func_11(iVar1), uVar3, 1))
						{
							Local_54[iVar1 /*3*/].f_2 = 1;
							return func_11(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_11(iVar1);
					}
					Var4 = { ENTITY::GET_ENTITY_COORDS(func_11(iVar1), 0) };
					Var7 = { ENTITY::GET_ENTITY_COORDS(iVar0, 0) };
					Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
					fVar13 = SYSTEM::VDIST(Var4, Var10);
					fVar14 = SYSTEM::VDIST(Var10, Var7);
					if (fVar13 > fVar14)
					{
						if ((fVar13 - fVar14) > 25f)
						{
							return iVar0;
						}
						else if (fVar14 < 6f && fVar13 > 11f)
						{
							return iVar0;
						}
						else
						{
							return func_11(iVar1);
						}
					}
					else
					{
						return func_11(iVar1);
					}
				}
			}
		}
	}
	return iVar0;
}

int func_13()//Position - 0x73A
{
	int iVar0;
	var uVar1[8];
	int iVar10;
	int iVar11;
	
	iVar0 = 0;
	iVar10 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (!PED::IS_PED_INJURED(uVar1[iVar11]))
			{
				if (PED::IS_PED_USING_SCENARIO(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || PED::IS_PED_USING_SCENARIO(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (!func_14(uVar1[iVar11]))
					{
						if (!PED::IS_PED_FLEEING(uVar1[iVar11]))
						{
							return uVar1[iVar11];
						}
					}
				}
			}
			iVar11++;
		}
	}
	return iVar0;
}

int func_14(int iParam0)//Position - 0x7C8
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Local_54[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}





int func_19(var uParam0)//Position - 0x866
{
	if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(*uParam0), -1) == *uParam0)
		{
			return 1;
		}
	}
	return 0;
}














void func_33()//Position - 0xB17
{
	if (iLocal_52)
	{
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
	}
	GlobalFunc_968();
	func_3();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_4();
	}
	else
	{
		PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("pb_prostitute", 1);
	}
	Global_2446554.f_2 = 0;
	GlobalFunc_491();
}



void func_36(struct<20> Param0)//Position - 0xB87
{
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_54, 97);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_4();
	}
	else
	{
		PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("pb_prostitute", 1);
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
}





