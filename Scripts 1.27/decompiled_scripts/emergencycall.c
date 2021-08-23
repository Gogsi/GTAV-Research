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
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		iLocal_42 = 5;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			switch (iLocal_42)
			{
				case 0:
					func_5();
					break;
				
				case 1:
					break;
				
				case 2:
					func_4();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(7, PLAYER::PLAYER_PED_ID(), 2, 3f, &uLocal_48))
						{
							iLocal_47 = MISC::GET_GAME_TIMER();
							iLocal_42 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(7, Local_44, 2, 3f, &uLocal_48))
					{
						iLocal_47 = MISC::GET_GAME_TIMER();
						iLocal_42 = 5;
					}
					break;
				
				case 3:
					func_4();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(5, PLAYER::PLAYER_PED_ID(), 2, 3f, &uLocal_48))
						{
							iLocal_47 = MISC::GET_GAME_TIMER();
							iLocal_42 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(5, Local_44, 2, 3f, &uLocal_48))
					{
						iLocal_47 = MISC::GET_GAME_TIMER();
						iLocal_42 = 5;
					}
					break;
				
				case 4:
					func_4();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(3, PLAYER::PLAYER_PED_ID(), 4, 3f, &uLocal_48))
						{
							iLocal_47 = MISC::GET_GAME_TIMER();
							iLocal_42 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(3, Local_44, 4, 3f, &uLocal_48))
					{
						if (Global_86864.f_358 == MISC::GET_HASH_KEY("AGENCY_PREP_1") || (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("agency_prep1")) > 0 && func_3(0)))
						{
							Global_86864.f_358 = MISC::GET_HASH_KEY("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_86794 = 1;
						}
						iLocal_47 = MISC::GET_GAME_TIMER();
						iLocal_42 = 5;
					}
					break;
				
				case 5:
					if (MISC::GET_GAME_TIMER() > (iLocal_47 + 60000) || !MISC::IS_INCIDENT_VALID(uLocal_48))
					{
						func_1();
					}
					else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (MISC::IS_INCIDENT_VALID(uLocal_48))
							{
								MISC::DELETE_INCIDENT(uLocal_48);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()//Position - 0x234
{
	iLocal_42 = 0;
	iLocal_43 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0)//Position - 0x246
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iParam0 /*6*/];
}

bool func_3(bool bParam0)//Position - 0x272
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

void func_4()//Position - 0x29D
{
	if (MISC::GET_GAME_TIMER() > iLocal_47 + 30000)
	{
		iLocal_42 = 5;
	}
}

void func_5()//Position - 0x2B4
{
	var uVar0;
	
	switch (iLocal_43)
	{
		case 0:
			iLocal_43 = 1;
			iLocal_47 = MISC::GET_GAME_TIMER();
			break;
		
		case 1:
			while (!func_13())
			{
				SYSTEM::WAIT(0);
				if (func_12() == 3)
				{
					iLocal_42 = 3;
				}
				if (func_12() == 4)
				{
					iLocal_42 = 4;
				}
				if (func_12() == 5)
				{
					iLocal_42 = 2;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_47 + 30000)
				{
					iLocal_47 = MISC::GET_GAME_TIMER();
					func_8(0);
				}
			}
			if (iLocal_42 == 0)
			{
				iLocal_42 = 5;
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_6(PLAYER::PLAYER_PED_ID(), &Local_44, &uVar0);
			}
			iLocal_47 = MISC::GET_GAME_TIMER();
			break;
	}
}

void func_6(var uParam0, var uParam1, var uParam2)//Position - 0x34D
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	var uVar20;
	int iVar21;
	var uVar22;
	struct<3> Var25;
	var uVar28;
	
	fVar18 = 5f;
	iVar0 = 1;
	iVar19 = 0;
	while (iVar19 < 2)
	{
		switch (iVar19)
		{
			case 0:
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), iVar0, uParam1, &fVar16, &iVar1, 5, 1077936128, 0);
				PATHFIND::GET_CLOSEST_ROAD(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, 0);
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
				fVar14 = MISC::GET_HEADING_FROM_VECTOR_2D(Var10.x, Var10.f_1);
				fVar15 = (fVar16 + 180f);
				if (fVar15 > 360f)
				{
					fVar15 = (fVar15 - 360f);
				}
				if (func_7(fVar14, fVar16, 90f))
				{
					*uParam2 = fVar16;
				}
				else
				{
					*uParam2 = fVar15;
				}
				if (fVar13 < 0f)
				{
					fVar17 = 0f;
				}
				else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar17 = 0f;
				}
				else
				{
					fVar17 = (fVar18 * SYSTEM::TO_FLOAT((iVar1 / 2)));
					if (fVar17 == 0f)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (iVar1 == 5)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 294f, -895f, 28f, 1) < 25f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
					{
						fVar17 = (fVar17 + 5f);
					}
					else
					{
						fVar17 = (fVar17 + 3.75f);
					}
					fVar17 = (fVar17 + (fVar13 / 2f));
				}
				if (SYSTEM::VDIST(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, *uParam2, fVar17, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > SYSTEM::VDIST(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, *uParam2, -fVar17, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, *uParam2, fVar17, 0f, 0f) };
				uVar20 = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar20, &iVar21, &Var25, &uVar22, &uVar28) == 2)
					{
						if (iVar21 != 0)
						{
							if (Var25.f_2 > (uParam1->f_2 + 8.5f))
							{
								iVar19++;
							}
							else
							{
								iVar0++;
								iVar19 = 0;
							}
						}
						else
						{
							iVar19++;
						}
					}
				}
				else
				{
					iVar19++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_7(float fParam0, float fParam1, float fParam2)//Position - 0x5F3
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_8(int iParam0)//Position - 0x668
{
	if (Global_14551)
	{
		func_10(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2264, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 30);
	}
	if (!func_9())
	{
		Global_14393.f_1 = 3;
	}
}

int func_9()//Position - 0x6D8
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_10(bool bParam0, bool bParam1)//Position - 0x6FF
{
	if (bParam0)
	{
		if (func_11(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14330);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
}

int func_11(int iParam0)//Position - 0x773
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_12()//Position - 0x7CD
{
	return Global_16709;
}

int func_13()//Position - 0x7D8
{
	if (Global_15692 == 0)
	{
		return 1;
	}
	return 0;
}

