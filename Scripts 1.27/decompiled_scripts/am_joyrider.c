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
	var uLocal_55 = 8;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 2;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 8;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	struct<11> Local_85 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_96 = 0;
	struct<3> Local_97[32];
	int iLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
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
	iLocal_199 = 20;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_55(ScriptParam_0);
	}
	else
	{
		func_51();
	}
	while (true)
	{
		GlobalFunc_906();
		if (GlobalFunc_7741() || GlobalFunc_7810(9))
		{
			func_51();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_51();
		}
		switch (func_35(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_34() == 1)
				{
					func_33();
					Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (func_34() == 4)
				{
					Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_34() == 1)
				{
					func_31();
				}
				else if (func_34() == 4)
				{
					Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				GlobalFunc_5240(&(Local_85.f_10));
				if (GlobalFunc_914(&(Local_85.f_10)))
				{
					Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_51();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_34())
			{
				case 0:
					if (func_27())
					{
						if (func_8())
						{
							Local_85 = 1;
						}
					}
					break;
				
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_85 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1BC
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x1D0
{
	if (Local_85.f_9 == 0)
	{
		if (!GlobalFunc_5239(Local_85.f_2))
		{
			return 1;
		}
		else if (GlobalFunc_904(Local_85.f_3))
		{
			return 1;
		}
		else
		{
			if (iLocal_202 == 1)
			{
				if (MISC::IS_BIT_SET(Local_85.f_1, 0))
				{
					return 1;
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_85.f_3), NETWORK::NET_TO_VEH(Local_85.f_2), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}




void func_6()//Position - 0x2B0
{
	switch (Local_85.f_9)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_7()//Position - 0x2D3
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iLocal_201 == 0)
	{
		iLocal_202 = 0;
		MISC::SET_BIT(&(Local_85.f_1), 0);
	}
	if (GlobalFunc_5239(Local_85.f_2))
	{
		iVar0 = 1;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_201)))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_201));
		uVar2 = PLAYER::GET_PLAYER_PED(iVar1);
		if (GlobalFunc_252(iVar1, 1, 1))
		{
			if (MISC::IS_BIT_SET(Local_85.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(uVar2, NETWORK::NET_TO_VEH(Local_85.f_2), 250f, 250f, 250f, 0, 1, 0))
					{
						MISC::CLEAR_BIT(&(Local_85.f_1), 0);
					}
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_85.f_1), 0);
				}
			}
		}
	}
	iLocal_201++;
	if (iLocal_201 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_201 = 0;
		iLocal_202 = 1;
	}
}

int func_8()//Position - 0x386
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 1, 0, 0))
	{
		if (GlobalFunc_356(Local_85.f_4) && GlobalFunc_356(Local_85.f_5))
		{
			if (func_12() && func_9())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9()//Position - 0x3C6
{
	int iVar0;
	
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_3) && GlobalFunc_356(Local_85.f_5)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_2))
	{
		if (GlobalFunc_5239(Local_85.f_2))
		{
			if (GlobalFunc_900(&(Local_85.f_3), Local_85.f_2, 22, Local_85.f_5, -1, 1, 1, 1))
			{
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_85.f_3), 0);
				if (GlobalFunc_745())
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_85.f_3), Global_1574054);
				}
				else
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_85.f_3), Global_1574057);
				}
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_85.f_3), 1);
				if (GlobalFunc_745())
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					if (iVar0 < 5)
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_85.f_3), joaat("weapon_pistol"), 25000, GlobalFunc_745());
					}
					else if (iVar0 > 6)
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_85.f_3), joaat("weapon_microsmg"), 25000, GlobalFunc_745());
					}
					else
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_85.f_3), joaat("weapon_pumpshotgun"), 25000, GlobalFunc_745());
					}
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_85.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_85.f_3), 2);
				}
				else
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_85.f_3), 1);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				if (iVar0 == 0)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_85.f_3), 5, 1);
				}
				else if (iVar0 == 1)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_85.f_3), 17, 1);
				}
				else if (iVar0 == 2)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_85.f_3), 13, 1);
				}
				if (GlobalFunc_745())
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_85.f_3), 20, 1);
				}
				if (GlobalFunc_745())
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_85.f_3), 2, 1);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				if (iVar0 == 0)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_85.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_85.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_85.f_3), 3);
				}
				PED::_0x49E50BDB8BA4DAB2(NETWORK::NET_TO_PED(Local_85.f_3), 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(Local_85.f_3), 1);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_85.f_3), 29, 1);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_85.f_3), 3);
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_85.f_3), SYSTEM::ROUND((200f * Global_262145.f_134)));
				AUDIO::SET_VEHICLE_RADIO_LOUD(NETWORK::NET_TO_VEH(Local_85.f_2), 1);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(NETWORK::NET_TO_VEH(Local_85.f_2), 1);
				func_33();
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_85.f_3), uLocal_195);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_85.f_5);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_3))
	{
		return 0;
	}
	return 1;
}



int func_12()//Position - 0x726
{
	struct<3> Var0;
	var uVar3;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_2))
	{
		if (GlobalFunc_356(Local_85.f_4))
		{
			if (func_14(&Var0, &uVar3))
			{
				if (GlobalFunc_901(&(Local_85.f_2), Local_85.f_4, Var0, uVar3, 1, 1, 1, 0, 1, 1))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_85.f_2), 1, 1);
					VEHICLE::SET_VEHICLE_IS_WANTED(NETWORK::NET_TO_VEH(Local_85.f_2), 1);
					VEHICLE::SET_VEHICLE_IS_STOLEN(NETWORK::NET_TO_VEH(Local_85.f_2), 1);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(NETWORK::NET_TO_VEH(Local_85.f_2), "JOYRIDER_GROUP", 0f);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_85.f_4);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_2))
	{
		return 0;
	}
	return 1;
}


bool func_14(var uParam0, var uParam1)//Position - 0x83E
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!bVar0)
	{
		if (VEHICLE::_0xA4822F1CF23F4810(&(Local_85.f_6), uParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1 || ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(*uParam0) == -289320599)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1367.557f, -3220.598f, 12.9448f, Local_85.f_6, 1) >= 600f && MISC::GET_DISTANCE_BETWEEN_COORDS(750f, -3200f, 6f, Local_85.f_6, 1) >= 700f)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(GlobalFunc_271(PLAYER::PLAYER_ID()), *uParam0, 1) <= (250f - 50f))
					{
						if (iLocal_200 <= 5)
						{
							if (GlobalFunc_8397(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_85 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_199 += 4;
		if (iLocal_199 >= 80)
		{
			iLocal_199 = 20;
			iLocal_200++;
		}
	}
	return bVar0;
}













bool func_27()//Position - 0xEC0
{
	if (!MISC::IS_BIT_SET(uLocal_194, 1))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(GlobalFunc_271(PLAYER::PLAYER_ID()), iLocal_198, &(Local_85.f_6), 4, 1077936128, 0))
		{
			MISC::SET_BIT(&iLocal_194, 1);
		}
		else
		{
			iLocal_198++;
		}
	}
	return MISC::IS_BIT_SET(iLocal_194, 1);
}




void func_31()//Position - 0xF93
{
	switch (Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_33();
			func_32();
			if (Local_85.f_9 > 0)
			{
				Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_51();
			break;
	}
}

void func_32()//Position - 0xFDB
{
	int iVar0;
	float fVar1;
	
	if (!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0))
	{
		if (GlobalFunc_5239(Local_85.f_2) && !GlobalFunc_904(Local_85.f_3))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_85.f_2));
			fVar1 = ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(Local_85.f_2));
			if (iVar0 < 200)
			{
				func_33();
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_85.f_3), uLocal_197);
				MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
			}
			else if (fVar1 < 3f)
			{
				if ((((ENTITY::IS_ENTITY_UPSIDEDOWN(NETWORK::NET_TO_VEH(Local_85.f_2)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_85.f_2), 3, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_85.f_2), 1, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_85.f_2), 0, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_85.f_2), 2, 10000))
				{
					func_33();
					TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_85.f_3), uLocal_196);
					MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
				}
			}
		}
	}
}

void func_33()//Position - 0x10E5
{
	if (!MISC::IS_BIT_SET(iLocal_194, 0))
	{
		if (GlobalFunc_5239(Local_85.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_195);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, NETWORK::NET_TO_VEH(Local_85.f_2), Local_85.f_6, 14, 30f, 786468, 15f, 1f, 0);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, NETWORK::NET_TO_VEH(Local_85.f_2), 30f, 786468);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_195);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_196);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_196);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_197);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, NETWORK::NET_TO_VEH(Local_85.f_2), Local_85.f_6, 5, 30f, 786468, 99999f, 1f, 0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_197);
			MISC::SET_BIT(&iLocal_194, 0);
		}
	}
}

int func_34()//Position - 0x119E
{
	return Local_85;
}

int func_35(int iParam0)//Position - 0x11A8
{
	return Local_97[iParam0 /*3*/];
}
















void func_51()//Position - 0x171B
{
	func_54();
	if (func_34() == 4 && Local_85.f_4 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_85.f_4, 0);
	}
	if (GlobalFunc_5239(Local_85.f_2))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(NETWORK::NET_TO_VEH(Local_85.f_2), 0f);
	}
	AUDIO::STOP_AUDIO_SCENE("JOYRIDER_RADIO_SCENE");
	GlobalFunc_461(9, 0);
	GlobalFunc_491();
}



void func_54()//Position - 0x17D9
{
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_195);
}

void func_55(struct<20> Param0)//Position - 0x17E7
{
	int iVar0;
	
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_85, 12);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_97, 97);
	if (!GlobalFunc_5091())
	{
		func_51();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Global_2446554.f_4220 == 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
				switch (iVar0)
				{
					case 0:
						Local_85.f_4 = joaat("stingergt");
						break;
					
					case 1:
						Local_85.f_4 = joaat("entityxf");
						break;
					
					case 2:
						Local_85.f_4 = joaat("feltzer2");
						break;
					
					case 3:
						Local_85.f_4 = joaat("monroe");
						break;
					
					case 4:
						Local_85.f_4 = joaat("cogcabrio");
						break;
					
					case 5:
						Local_85.f_4 = joaat("superd");
						break;
					
					case 6:
						Local_85.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_85.f_4 = Global_2446554.f_4220;
				Global_2446554.f_4220 = 0;
			}
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_85.f_4, 1);
			Local_85.f_5 = func_56(1);
		}
		GlobalFunc_461(9, 1);
		AUDIO::START_AUDIO_SCENE("JOYRIDER_RADIO_SCENE");
		Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	else
	{
		func_51();
	}
}

int func_56(bool bParam0)//Position - 0x191E
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 32);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_m_m_eastsa_01");
			
			case 1:
				return joaat("a_m_m_bevhills_01");
			
			case 2:
				return joaat("a_m_m_bevhills_02");
			
			case 3:
				return joaat("a_m_m_business_01");
			
			case 4:
				return joaat("a_m_m_malibu_01");
			
			case 5:
				return joaat("a_m_m_eastsa_02");
			
			case 6:
				return joaat("a_m_m_hillbilly_01");
			
			case 7:
				return joaat("a_m_m_hillbilly_02");
			
			case 8:
				return joaat("a_m_m_og_boss_01");
			
			case 9:
				return joaat("a_m_m_stlat_02");
			
			case 10:
				return joaat("a_m_y_beachvesp_01");
			
			case 11:
				return joaat("a_m_y_epsilon_01");
			
			case 12:
				return joaat("a_m_m_prolhost_01");
			
			case 13:
				return joaat("a_m_m_salton_01");
			
			case 14:
				return joaat("a_m_m_skater_01");
			
			case 15:
				return joaat("a_m_y_skater_02");
			
			case 16:
				return joaat("a_m_y_methhead_01");
			
			case 17:
				return joaat("a_m_m_skidrow_01");
			
			case 18:
				return joaat("a_m_m_soucent_01");
			
			case 19:
				return joaat("a_m_m_soucent_02");
			
			case 20:
				return joaat("a_m_m_soucent_03");
			
			case 21:
				return joaat("a_m_y_genstreet_02");
			
			case 22:
				return joaat("a_m_y_roadcyc_01");
			
			case 23:
				return joaat("a_m_m_afriamer_01");
			
			case 24:
				return joaat("a_m_m_beach_01");
			
			case 25:
				return joaat("a_m_m_farmer_01");
			
			case 26:
				return joaat("a_m_m_fatlatin_01");
			
			case 27:
				return joaat("a_m_m_genfat_01");
			
			case 28:
				return joaat("a_m_m_indian_01");
			
			case 29:
				return joaat("a_m_m_ktown_01");
			
			case 30:
				return joaat("a_m_m_socenlat_01");
			
			case 31:
				return joaat("a_m_m_mexlabor_01");
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_f_m_bevhills_01");
			
			case 1:
				return joaat("a_f_m_bevhills_02");
			
			case 2:
				return joaat("a_f_m_beach_01");
			
			case 3:
				return joaat("a_f_m_ktown_02");
			
			case 4:
				return joaat("a_f_m_prolhost_01");
			
			case 5:
				return joaat("a_f_m_bodybuild_01");
			
			case 6:
				return joaat("a_f_m_business_02");
			
			case 7:
				return joaat("a_f_m_downtown_01");
			
			case 8:
				return joaat("a_f_m_eastsa_01");
			
			case 9:
				return joaat("a_f_m_eastsa_02");
			
			case 10:
				return joaat("a_f_m_fatwhite_01");
			
			case 11:
				return joaat("a_f_m_ktown_01");
			
			case 12:
				return joaat("a_f_m_ktown_02");
			
			case 13:
				return joaat("a_f_m_salton_01");
			
			case 14:
				return joaat("a_f_m_skidrow_01");
			
			case 15:
				return joaat("a_f_m_soucent_01");
			
			case 16:
				return joaat("a_f_m_soucent_02");
			
			case 17:
				return joaat("a_f_m_soucentmc_01");
			
			case 18:
				return joaat("a_f_m_tramp_01");
			
			case 19:
				return joaat("a_f_m_trampbeac_01");
			
			case 20:
				return joaat("a_f_y_yoga_01");
			
			case 21:
				return joaat("a_f_y_vinewood_02");
			
			case 22:
				return joaat("a_f_y_vinewood_03");
			
			case 23:
				return joaat("a_f_y_vinewood_04");
			
			case 24:
				return joaat("a_f_y_tennis_01");
			
			case 25:
				return joaat("a_f_y_tourist_01");
			
			case 26:
				return joaat("a_f_y_hipster_01");
			
			case 27:
				return joaat("a_f_y_golfer_01");
			
			case 28:
				return joaat("a_f_y_fitness_01");
			
			case 29:
				return joaat("a_f_y_scdressy_01");
			
			case 30:
				return joaat("a_f_y_epsilon_01");
			
			case 31:
				return joaat("a_f_y_hiker_01");
			
			default:
		}
	}
	return joaat("a_f_m_bevhills_01");
}







