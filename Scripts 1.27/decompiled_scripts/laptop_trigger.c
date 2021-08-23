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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	bool bVar1;
	char* sVar2;
	var uVar3[25];
	bool bVar29;
	struct<3> Var30;
	int iVar33;
	struct<3> Var34;
	bool bVar37;
	int iVar38;
	int iVar39;
	bool bVar40;
	
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
	iLocal_45 = -1;
	uVar0 = uScriptParam_0;
	if (!ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_16();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_15(13) || func_15(14))
	{
		func_16();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_30776)
	{
		func_16();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_67064)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	bVar1 = false;
	sVar2 = "tvscreen";
	bVar29 = true;
	Var30 = { ENTITY::GET_ENTITY_COORDS(uVar0, 1) - ENTITY::GET_ENTITY_FORWARD_VECTOR(uVar0) * Vector(0.6f, 0.6f, 0.6f) };
	Var30.f_2 = (Var30.f_2 + 0.5f);
	while (bVar29)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			if (Global_1582590)
			{
				if (!bVar1)
				{
					iVar33 = ENTITY::GET_ENTITY_MODEL(uVar0);
					if (iVar33 == joaat("prop_laptop_01a"))
					{
						ENTITY::CREATE_MODEL_HIDE(ENTITY::GET_ENTITY_COORDS(uScriptParam_0, 1), 1f, joaat("prop_laptop_01a"), 0);
						Var34 = { ENTITY::GET_ENTITY_ROTATION(uVar0, 2) };
						uVar0 = OBJECT::CREATE_OBJECT(joaat("prop_laptop_lester2"), ENTITY::GET_ENTITY_COORDS(uVar0, 1), 0, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(uVar0, Var34, 2, 1);
						bVar1 = true;
					}
				}
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(uVar0))
			{
				func_16();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
		if (((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(uVar0)) && !CUTSCENE::IS_CUTSCENE_PLAYING()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY(uVar0))
			{
				bVar37 = false;
				iVar38 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar3, -1);
				iVar39 = 0;
				iVar39 = 0;
				while (iVar39 < iVar38)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar3[iVar39]))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uVar3[iVar39], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar37 = true;
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uVar3[iVar39], "MP_COMMON_MISS", "HACK_LOOP", 3))
						{
							bVar37 = true;
						}
					}
					iVar39++;
				}
				if (Global_16)
				{
					bVar37 = true;
				}
				if (((((((((!bVar37 && !func_14(0)) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)) && !func_13()) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var30, 0.6f, 0.6f, 0.8f, 0, 1, 1)) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar0)) && !MISC::IS_BIT_SET(Global_2359301, 15)) && !func_12()) && !(Global_68245 && func_11())) && !(!Global_68245 && func_10()))
				{
					if (iLocal_45 == -1)
					{
						if (bVar1)
						{
							func_9(&iLocal_45, 1, "MPLA_BILL", 0, 0);
						}
						else
						{
							func_9(&iLocal_45, 1, "BROWSEINPUTTRIG", 0, 0);
						}
					}
					if (func_8(iLocal_45, 1))
					{
						if (iLocal_45 != -1)
						{
							func_6(&iLocal_45);
						}
						if (!bVar1)
						{
							func_5(0);
							if (!iLocal_46)
							{
								func_1();
								iLocal_46 = 1;
							}
							bVar40 = true;
							while (bVar40)
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1.5f, 1.5f, 4f, 0, 1, 1))
								{
									Global_67061 = 1;
								}
								if (Global_67058 || Global_67061)
								{
									bVar40 = false;
								}
								SYSTEM::WAIT(0);
							}
							while (Global_67058)
							{
								SYSTEM::WAIT(0);
							}
							SYSTEM::WAIT(1000);
							iLocal_46 = 0;
						}
					}
				}
				else
				{
					if (iLocal_45 != -1)
					{
						func_6(&iLocal_45);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0))
					{
						if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uScriptParam_0))
						{
							bVar29 = false;
						}
					}
				}
			}
			else if (iLocal_45 != -1)
			{
				func_6(&iLocal_45);
			}
		}
		else
		{
			if (iLocal_45 != -1)
			{
				func_6(&iLocal_45);
			}
			bVar29 = false;
		}
		SYSTEM::WAIT(0);
	}
	if (bVar1)
	{
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar2))
		{
			HUD::RELEASE_NAMED_RENDERTARGET(sVar2);
		}
	}
}

void func_1()//Position - 0x3E8
{
	if (func_4() || func_3())
	{
		func_2();
	}
}

void func_2()//Position - 0x405
{
	Global_2428131.f_629 = 1;
}

var func_3()//Position - 0x415
{
	return Global_2428131.f_608;
}

bool func_4()//Position - 0x424
{
	return MISC::IS_BIT_SET(Global_2428131.f_2, 11);
}

void func_5(int iParam0)//Position - 0x438
{
	Global_67067 = iParam0;
	switch (Global_67067)
	{
		case 3:
			Global_67065 = 0;
			break;
		
		case 4:
			Global_67065 = 3;
			break;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return;
	}
	if (Global_68245 && func_11())
	{
		return;
	}
	if (!Global_68245 && func_10())
	{
		return;
	}
	if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SCRIPT::REQUEST_SCRIPT("appInternet");
	}
	while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT("appInternet", 3584);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
}

void func_6(int iParam0)//Position - 0x4D9
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_7(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_7(int iParam0)//Position - 0x530
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_8(int iParam0, bool bParam1)//Position - 0x56B
{
	int iVar0;
	
	iVar0 = func_7(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_14(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/] == 1 && Global_35613[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35613[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35613[iVar0 /*18*/].f_4 = 1;
			Global_35613[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35613[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35613[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)//Position - 0x623
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_6(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/] = 1;
			Global_35613[iVar0 /*18*/].f_1 = Global_35730;
			Global_35730++;
			Global_35613[iVar0 /*18*/].f_3 = 0;
			Global_35613[iVar0 /*18*/].f_16 = 0;
			Global_35613[iVar0 /*18*/].f_4 = 0;
			Global_35613[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35613[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35613[iVar0 /*18*/].f_5 = iParam3;
			Global_35613[iVar0 /*18*/].f_17 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_35613[iVar0 /*18*/].f_6 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_35613[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35613[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35613[iVar0 /*18*/].f_11 = 0;
			}
			*iParam0 = Global_35613[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

var func_10()//Position - 0x72E
{
	return Global_67059;
}

var func_11()//Position - 0x73A
{
	return Global_1684040;
}

int func_12()//Position - 0x746
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_13()//Position - 0x773
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)//Position - 0x78D
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

bool func_15(int iParam0)//Position - 0x7E7
{
	return Global_34913 == iParam0;
}

void func_16()//Position - 0x7F5
{
	if (iLocal_45 != -1)
	{
		func_6(&iLocal_45);
	}
}

