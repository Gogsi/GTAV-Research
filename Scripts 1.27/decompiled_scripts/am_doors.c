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
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<17> Local_64[6];
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	struct<10> Local_170 = { 0, 0, 6, 0, 0, 0, 0, 0, 0, 6 } ;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 1;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	int iLocal_200[6] = { 0, 0, 0, 0, 0, 0 };
	struct<2> Local_207[6];
	struct<4> Local_220[32];
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
	iLocal_55 = 15;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_42(ScriptParam_0))
		{
			func_39();
		}
	}
	if (iLocal_55 == 15)
	{
	}
	iLocal_63 = 0;
	func_37();
	while (true)
	{
		func_36();
		if (func_27())
		{
			func_39();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID()) == 32)
			{
				if (ScriptParam_0.f_16 != (50 + PLAYER::PLAYER_ID()))
				{
					func_26(2);
				}
			}
			else if (ScriptParam_0.f_16 != NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID()))
			{
				func_26(2);
			}
		}
		else if (ScriptParam_0.f_16 != -1)
		{
			func_26(2);
		}
		func_25(&uLocal_56, 0, 0);
		switch (func_24(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (Global_1602437 == 2)
				{
					iLocal_62 = 98;
				}
				else
				{
					iLocal_62 = 99;
				}
				if ((!Global_30786 && func_23() != -1) && func_23() != 999)
				{
					if (!iLocal_58)
					{
						if (func_22(&iLocal_63, iLocal_62))
						{
							iLocal_58 = 1;
							iLocal_63 = 0;
						}
					}
					else if (!iLocal_60)
					{
						if (!iLocal_59)
						{
							if (func_20(&iLocal_63, iLocal_62))
							{
								iLocal_63 = 0;
								iLocal_59 = 1;
							}
						}
						else if (func_18(&iLocal_63, iLocal_62))
						{
							iLocal_63 = 0;
							iLocal_60 = 1;
						}
					}
					else if (func_17() >= 2)
					{
						func_26(1);
					}
				}
				break;
			
			case 1:
				func_14();
				Global_2446554.f_4337 = 1;
				func_9();
				break;
			
			case 2:
				func_39();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_17())
			{
				case 0:
					func_8(2);
					break;
				
				case 2:
					if (func_24(NETWORK::PARTICIPANT_ID_TO_INT()) == 1)
					{
						func_1();
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

void func_1()//Position - 0x226
{
	iLocal_168 = 0;
	iLocal_168 = 0;
	while (iLocal_168 < 6)
	{
		if (func_7(PLAYER::INT_TO_PLAYERINDEX(iLocal_167), 0, 1))
		{
			if (MISC::IS_BIT_SET(Local_220[iLocal_167 /*4*/].f_2, iLocal_168))
			{
				MISC::SET_BIT(&(Local_170.f_2[iLocal_168]), iLocal_167);
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_170.f_2[iLocal_168]), iLocal_167);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_170.f_9[iLocal_168]), iLocal_167);
			MISC::CLEAR_BIT(&(Local_170.f_9[iLocal_168]), iLocal_167);
		}
		if (Local_170.f_9[iLocal_168] != 0)
		{
			if (Local_64[iLocal_168 /*17*/][0] != 0)
			{
				func_2(iLocal_168, Local_64[iLocal_168 /*17*/][0], 5);
			}
			if (Local_64[iLocal_168 /*17*/][1] != 0)
			{
				func_2(iLocal_168, Local_64[iLocal_168 /*17*/][1], 5);
			}
		}
		else if (Local_170.f_2[iLocal_168] != 0)
		{
			if (Local_64[iLocal_168 /*17*/][0] != 0)
			{
				func_2(iLocal_168, Local_64[iLocal_168 /*17*/][0], 0);
			}
			if (Local_64[iLocal_168 /*17*/][1] != 0)
			{
				func_2(iLocal_168, Local_64[iLocal_168 /*17*/][1], 0);
			}
		}
		else
		{
			if (Local_64[iLocal_168 /*17*/][0] != 0)
			{
				func_2(iLocal_168, Local_64[iLocal_168 /*17*/][0], 1);
			}
			if (Local_64[iLocal_168 /*17*/][1] != 0)
			{
				func_2(iLocal_168, Local_64[iLocal_168 /*17*/][1], 1);
			}
		}
		iLocal_168++;
	}
	iLocal_167++;
	if (iLocal_167 >= 32)
	{
		iLocal_167 = 0;
	}
}

void func_2(int iParam0, var uParam1, int iParam2)//Position - 0x37D
{
	int iVar0;
	
	iVar0 = 1;
	if (iParam2 == 0)
	{
		iVar0 = 0;
	}
	if (iLocal_200[iParam0] == 0)
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(uParam1) == -1)
		{
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uParam1) != iParam2)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(uParam1))
				{
					MISC::SET_BIT(&(iLocal_200[iParam0]), iVar0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1, iParam2, 1, 1);
					func_25(&(Local_207[iParam0 /*2*/]), 1, 0);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(uParam1);
				}
			}
		}
		else if (OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(uParam1) != iParam2)
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(uParam1))
			{
				MISC::SET_BIT(&(iLocal_200[iParam0]), iVar0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1, iParam2, 1, 1);
				func_25(&(Local_207[iParam0 /*2*/]), 1, 0);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(uParam1);
			}
		}
	}
	if (func_6(&(Local_207[iParam0 /*2*/])))
	{
		if (func_4(&(Local_207[iParam0 /*2*/]), 1000, 1))
		{
			func_3(&(Local_207[iParam0 /*2*/]));
			iLocal_200[iParam0] = 0;
		}
	}
}

void func_3(var uParam0)//Position - 0x457
{
	uParam0->f_1 = 0;
}

int func_4(var uParam0, int iParam1, bool bParam2)//Position - 0x464
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
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

void func_5(var uParam0, bool bParam1, bool bParam2)//Position - 0x4C2
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

bool func_6(var uParam0)//Position - 0x507
{
	return uParam0->f_1;
}

int func_7(var uParam0, bool bParam1, bool bParam2)//Position - 0x513
{
	int iVar0;
	
	iVar0 = uParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_PLAYING(uParam0))
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

void func_8(int iParam0)//Position - 0x557
{
	Local_170 = iParam0;
}

void func_9()//Position - 0x563
{
	float fVar0;
	struct<3> Var1;
	
	Var1 = { func_13(PLAYER::PLAYER_ID()) };
	fVar0 = SYSTEM::VDIST(Var1, Local_64[iLocal_169 /*17*/].f_3);
	if ((MISC::IS_BIT_SET(Global_2452726, iLocal_169) || MISC::IS_BIT_SET(Global_2452726.f_1, iLocal_169)) || MISC::IS_BIT_SET(Global_2452726.f_2, iLocal_169))
	{
		if (MISC::IS_BIT_SET(Global_2452726, iLocal_169))
		{
			MISC::SET_BIT(&(Local_220[PLAYER::PLAYER_ID() /*4*/].f_2), iLocal_169);
		}
		if (MISC::IS_BIT_SET(Global_2452726.f_1, iLocal_169))
		{
			MISC::CLEAR_BIT(&(Local_220[PLAYER::PLAYER_ID() /*4*/].f_2), iLocal_169);
		}
		if (MISC::IS_BIT_SET(Global_2452726.f_2, iLocal_169))
		{
			MISC::SET_BIT(&(Local_220[PLAYER::PLAYER_ID() /*4*/].f_3), iLocal_169);
		}
	}
	else if (fVar0 <= 20f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Local_64[iLocal_169 /*17*/].f_3, Local_64[iLocal_169 /*17*/].f_6, Local_64[iLocal_169 /*17*/].f_9, 0, 1))
		{
			if (!MISC::IS_BIT_SET(Local_220[PLAYER::PLAYER_ID() /*4*/].f_2, iLocal_169))
			{
				MISC::SET_BIT(&(Local_220[PLAYER::PLAYER_ID() /*4*/].f_2), iLocal_169);
			}
		}
		if ((iLocal_169 == 0 || iLocal_169 == 1) || iLocal_169 == 5)
		{
			if (Global_2436022)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Local_64[iLocal_169 /*17*/].f_10, Local_64[iLocal_169 /*17*/].f_13, Local_64[iLocal_169 /*17*/].f_16, 0, 1))
				{
					if (!MISC::IS_BIT_SET(Local_220[PLAYER::PLAYER_ID() /*4*/].f_2, iLocal_169))
					{
						MISC::SET_BIT(&(Local_220[PLAYER::PLAYER_ID() /*4*/].f_2), iLocal_169);
					}
				}
			}
		}
		if ((iLocal_169 == 2 || iLocal_169 == 3) || iLocal_169 == 4)
		{
			if (func_11() >= 0)
			{
				if (func_10(29))
				{
					if (!MISC::IS_BIT_SET(Local_220[PLAYER::PLAYER_ID() /*4*/].f_2, iLocal_169))
					{
						MISC::SET_BIT(&(Local_220[PLAYER::PLAYER_ID() /*4*/].f_2), iLocal_169);
					}
				}
				else if (MISC::IS_BIT_SET(Local_220[PLAYER::PLAYER_ID() /*4*/].f_2, iLocal_169) && !OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Local_64[iLocal_169 /*17*/].f_3, Local_64[iLocal_169 /*17*/].f_6, Local_64[iLocal_169 /*17*/].f_9, 0, 1))
				{
					MISC::CLEAR_BIT(&(Local_220[PLAYER::PLAYER_ID() /*4*/].f_2), iLocal_169);
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_220[PLAYER::PLAYER_ID() /*4*/].f_2, iLocal_169))
	{
		MISC::CLEAR_BIT(&(Local_220[PLAYER::PLAYER_ID() /*4*/].f_2), iLocal_169);
	}
	iLocal_169++;
	if (iLocal_169 >= 6)
	{
		iLocal_169 = 0;
	}
}

bool func_10(int iParam0)//Position - 0x7B8
{
	if (iParam0 < 32)
	{
		return MISC::IS_BIT_SET(Global_2422140.f_499.f_1, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2422140.f_499.f_2, (iParam0 - 32));
}

int func_11()//Position - 0x7EE
{
	return Global_2097152[func_12() /*8053*/].f_5756.f_2;
}

int func_12()//Position - 0x806
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

Vector3 func_13(int iParam0)//Position - 0x813
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

void func_14()//Position - 0x826
{
	if (func_15())
	{
		if (!iLocal_61)
		{
			OBJECT::_0xC7F29CA00F46350E(1);
			iLocal_61 = 1;
		}
	}
	else if (iLocal_61 == 1)
	{
		iLocal_61 = 0;
		OBJECT::_0x701FDA1E82076BA4();
	}
}

int func_15()//Position - 0x853
{
	if (func_16())
	{
		return 1;
	}
	if (func_23() == 2)
	{
		if (Global_1602437 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_16()//Position - 0x87B
{
	if (Global_1602437 == 2 || Global_1602437 == 8)
	{
		return 1;
	}
	return 0;
}

int func_17()//Position - 0x89E
{
	return Local_170;
}

int func_18(int iParam0, int iParam1)//Position - 0x8A8
{
	struct<13> Var0;
	int iVar13;
	
	iVar13 = 0;
	while (iVar13 < 40)
	{
		if (*iParam0 < 294)
		{
			Var0 = { func_19(*iParam0, iParam1) };
			if (Var0.f_1 == 99 || Var0.f_1 == iParam1)
			{
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0))
				{
					return 0;
				}
			}
		}
		*iParam0++;
		iVar13++;
	}
	if (*iParam0 < 294)
	{
		return 0;
	}
	return 1;
}

struct<13> func_19(int iParam0, int iParam1)//Position - 0x915
{
	struct<13> Var0;
	
	switch (iParam0)
	{
		case 176:
			Var0 = -247372382;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_com_gar_door_01");
			Var0.f_3 = { 1204.57f, -3110.4f, 6.57f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			break;
		
		case 1:
			Var0 = -1198408382;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door2");
			Var0.f_3 = { 467.3716f, -1014.452f, 26.5362f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 2:
			Var0 = 1651829484;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door2");
			Var0.f_3 = { 469.9679f, -1014.452f, 26.5362f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 3:
			Var0 = -1209329220;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_gtdoor02");
			Var0.f_3 = { 464.3613f, -984.6779f, 43.8344f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 4:
			Var0 = 534621945;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ph_door01");
			Var0.f_3 = { 434.75f, -980.61f, 30.84f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 5:
			Var0 = -457131900;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ph_door002");
			Var0.f_3 = { 434.75f, -983.22f, 30.84f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 6:
			Var0 = 163748837;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_biolab_g_door");
			Var0.f_3 = { 3589.1f, 3671.5f, 35f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 7:
			Var0 = -1249217678;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_biolab_g_door");
			Var0.f_3 = { 3587.6f, 3663.3f, 35f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 33:
			Var0 = 1984929564;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_shutter2");
			Var0.f_3 = { 3627.71f, 3746.72f, 27.69f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 34:
			Var0 = -1532658745;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_shutter2");
			Var0.f_3 = { 3620.84f, 3751.53f, 27.69f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 36:
			Var0 = 1877357900;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_abbmaindoor");
			Var0.f_3 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 35:
			Var0 = -769623617;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_abbmaindoor2");
			Var0.f_3 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 179:
			Var0 = 738966015;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -1138.47f, -2730.45f, 12.95f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		
		case 178:
			Var0 = 969004395;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -1151.204f, -2723.102f, 12.946f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		
		case 118:
			Var0 = 1036961952;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -977.5174f, -2837.264f, 12.9549f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		
		case 119:
			Var0 = 1864280899;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -990.2963f, -2829.887f, 12.9499f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		
		case 120:
			Var0 = -355737150;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -1213.4f, -2079.3f, 12.907f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		
		case 121:
			Var0 = -1170618471;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -967.4473f, -2778.495f, 14.409f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 122:
			Var0 = -1300449249;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -974.5734f, -2774.381f, 14.4099f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 123:
			Var0 = -1529668404;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -971.1018f, -2776.385f, 14.409f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 124:
			Var0 = 1577455399;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -970.9188f, -2776.491f, 14.409f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 125:
			Var0 = 2142655111;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -935.2114f, -2767.397f, 14.3882f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 126:
			Var0 = 996723181;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -933.1581f, -2763.955f, 14.3882f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 127:
			Var0 = 1830923614;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -933.0535f, -2763.779f, 14.3882f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 128:
			Var0 = -125385686;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -931.0002f, -2760.337f, 14.3882f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 129:
			Var0 = 745417724;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -773.2438f, -2842.677f, 14.2715f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 130:
			Var0 = -1305304906;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -769.7721f, -2844.682f, 14.2715f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 131:
			Var0 = -1543175077;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -769.6071f, -2844.777f, 14.2715f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 132:
			Var0 = -811770997;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -766.1354f, -2846.781f, 14.2715f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 133:
			Var0 = 29310942;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -828.9456f, -2964.304f, 14.2758f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 134:
			Var0 = -247292187;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -907.7999f, -3100.874f, 14.2808f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 135:
			Var0 = 460387137;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -833.4395f, -3186.709f, 14.267f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 136:
			Var0 = 106875165;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -830.0544f, -3391.163f, 14.1972f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 137:
			Var0 = 923052648;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -913.0834f, -3534.97f, 14.1924f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 138:
			Var0 = -1237505857;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -971.6149f, -3549.152f, 14.2727f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 139:
			Var0 = -1938172615;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1017.692f, -3563.217f, 14.2767f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 140:
			Var0 = -810513079;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1146.831f, -3546.638f, 14.2595f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 141:
			Var0 = 69924413;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1260.897f, -3480.764f, 14.1721f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 142:
			Var0 = -152773711;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1351.133f, -3404.162f, 14.1721f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 143:
			Var0 = 681951026;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1409.507f, -3370.461f, 14.2068f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 144:
			Var0 = 877254262;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1831.804f, -3224.966f, 14.3119f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 145:
			Var0 = 1712929328;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1942.289f, -3161.19f, 14.2981f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 146:
			Var0 = 1482661565;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1927.563f, -3076.269f, 14.4569f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 147:
			Var0 = 1782694529;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1951.696f, -3003.846f, 14.4418f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 148:
			Var0 = -1714183772;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1836.875f, -2804.969f, 14.4557f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 149:
			Var0 = -1953037013;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1802.692f, -2745.761f, 14.448f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 150:
			Var0 = -795813070;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -1099.531f, -2020.803f, 12.1745f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 1;
			}
			break;
		
		case 151:
			Var0 = -580979506;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -994.4996f, -2341.648f, 12.9448f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 1;
			}
			break;
		
		case 152:
			Var0 = -1426452475;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -984.0709f, -2348.4f, 12.9448f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 1;
			}
			break;
		
		case 153:
			Var0 = -1178784373;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -1008.071f, -2406.751f, 12.977f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		
		case 154:
			Var0 = 94815597;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -1015.485f, -2419.583f, 12.9586f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		
		case 62:
			Var0 = 208246292;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_lester_doorfront");
			Var0.f_3 = { 1273.82f, -1720.7f, 54.92f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 63:
			Var0 = -1357778570;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_tort_door");
			Var0.f_3 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 74:
			Var0 = -80542775;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_janitor_frontdoor");
			Var0.f_3 = { -107.5373f, -9.0181f, 70.6708f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 72:
			Var0 = 868388666;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_deviantfrontdoor");
			Var0.f_3 = { -128.33f, -1457.17f, 37.94f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 73:
			Var0 = 2137238404;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_po_door");
			Var0.f_3 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 64:
			Var0 = 1494493065;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door3");
			Var0.f_3 = { 1395.92f, 1142.9f, 114.79f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 65:
			Var0 = 1388518119;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door3");
			Var0.f_3 = { 1395.92f, 1140.7f, 114.79f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 66:
			Var0 = -2119698256;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_l");
			Var0.f_3 = { 1390.52f, 1163.44f, 114.38f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 67:
			Var0 = 1935563805;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_r");
			Var0.f_3 = { 1390.52f, 1161.24f, 114.38f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 68:
			Var0 = -271559421;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_l");
			Var0.f_3 = { 1408.07f, 1158.97f, 114.48f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 69:
			Var0 = -1985574735;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_r");
			Var0.f_3 = { 1408.07f, 1161.17f, 114.48f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 70:
			Var0 = -1132368282;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_l");
			Var0.f_3 = { 1409.29f, 1146.25f, 114.49f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 71:
			Var0 = -1508687478;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_r");
			Var0.f_3 = { 1409.29f, 1148.45f, 114.49f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 75:
			Var0 = 689210336;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_door_l");
			Var0.f_3 = { -1387.05f, -586.58f, 30.47f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 76:
			Var0 = 510553748;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_door_r");
			Var0.f_3 = { -1389.24f, -588f, 30.47f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 77:
			Var0 = 313127870;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sec_gate_01c");
			Var0.f_3 = { 25.03f, -664.6f, 31.04f };
			Var0.f_7 = 1;
			Var0.f_8 = 5;
			Var0.f_11 = 1;
			break;
		
		case 78:
			Var0 = 145416128;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sec_gate_01d");
			Var0.f_3 = { -72.75f, -682.17f, 33.27f };
			Var0.f_7 = 1;
			Var0.f_8 = 5;
			Var0.f_11 = 1;
			break;
		
		case 60:
			Var0 = -948170937;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bank4door02");
			Var0.f_3 = { -111.48f, 6463.94f, 31.985f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 61:
			Var0 = -684544332;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bank4door01");
			Var0.f_3 = { -109.65f, 6462.11f, 31.985f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 12:
			Var0 = -1135190791;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_v_ilev_bk_gate_pris");
			Var0.f_3 = { 256.3116f, 220.6579f, 106.4296f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 13:
			Var0 = 1011604710;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_v_ilev_bk_gate2_pris");
			Var0.f_3 = { 262.1981f, 222.5188f, 106.4296f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 14:
			Var0 = -403267826;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { -2965.821f, 481.63f, 16.048f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 15:
			Var0 = -171885917;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { -2965.71f, 484.219f, 16.048f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 16:
			Var0 = 1734755709;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { 1176.49f, 2703.61f, 38.44f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 17:
			Var0 = -1006108989;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { 1173.9f, 2703.61f, 38.44f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 18:
			Var0 = 2012837225;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 19:
			Var0 = 314747645;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 20:
			Var0 = 571329950;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { -1215.39f, -328.52f, 38.13f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 21:
			Var0 = 266021177;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { -1213.07f, -327.35f, 38.13f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 22:
			Var0 = -171153163;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { 149.63f, -1037.23f, 29.72f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 23:
			Var0 = -1163398483;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { 152.06f, -1038.12f, 29.72f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 24:
			Var0 = 1080982134;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { 313.96f, -275.6f, 54.52f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 25:
			Var0 = -775086795;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { 316.39f, -276.49f, 54.52f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 26:
			Var0 = -1819100989;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { -348.8109f, -47.2621f, 49.3876f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 27:
			Var0 = 1787848387;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { -351.2598f, -46.4122f, 49.3876f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 58:
			Var0 = 1598253329;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fibl_door02");
			Var0.f_3 = { 106.38f, -742.7f, 46.18f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 59:
			Var0 = 1369034174;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fibl_door01");
			Var0.f_3 = { 105.76f, -746.65f, 46.18f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 183:
			Var0 = -1814497429;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch3_01_trlrdoor_l");
			Var0.f_3 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 184:
			Var0 = 1526269356;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch3_01_trlrdoor_r");
			Var0.f_3 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 185:
			Var0 = 422781221;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fh_frntdoor");
			Var0.f_3 = { 0.2169f, -1823.303f, 29.6391f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 186:
			Var0 = -1066241800;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_doorel_l");
			Var0.f_3 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 187:
			Var0 = 1959909816;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_doorel_r");
			Var0.f_3 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 188:
			Var0 = 1931749328;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_cs4_05_tdoor");
			Var0.f_3 = { 31.918f, 3666.854f, 40.8586f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 189:
			Var0 = 1624933181;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_magenta_door");
			Var0.f_3 = { 29.102f, 3661.489f, 40.8547f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 290:
			Var0 = -1184370912;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_prop_heist_cutscene_doorb");
			Var0.f_3 = { 776.8f, 4184.64f, 41.91f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 291:
			Var0 = -1023333176;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_prop_heist_cutscene_doora");
			Var0.f_3 = { 722.399f, 4187.952f, 41.231f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 292:
			Var0 = 651841620;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_prop_heist_cutscene_doorc_r");
			Var0.f_3 = { 610.594f, -421.83f, 24.979f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 293:
			Var0 = 1049460666;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_prop_heist_cutscene_doorc_l");
			Var0.f_3 = { 610.874f, -419.365f, 24.979f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
	}
	switch (iParam0)
	{
		case 190:
			Var0 = 1255781408;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { -687.73f, -2458.82f, 12.9f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 191:
			Var0 = 1901756713;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { -697.82f, -1226.5f, 12.91f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 192:
			Var0 = 1719167837;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { -692.77f, -2455.93f, 12.9f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 194:
			Var0 = 389336283;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -891.93f, -2748.71f, 12.95f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 195:
			Var0 = 732598411;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -896.46f, -2746.42f, 12.95f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 196:
			Var0 = 1348295152;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -859.73f, -2683.9f, 12.76f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 197:
			Var0 = 1547432097;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -1019.61f, -1897.02f, 13.37f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 198:
			Var0 = 1231145709;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -160.88f, -2636.2f, 5.03f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 199:
			Var0 = 934782873;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -148.71f, -2636.2f, 5.03f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 200:
			Var0 = 652215786;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 237.78f, -2936.96f, 5.05f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 201:
			Var0 = -1791270241;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_docks_ld");
			Var0.f_3 = { -188.28f, -2204.61f, 9.3f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 202:
			Var0 = -2108474161;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_docks_ld");
			Var0.f_3 = { -127.56f, -2185.29f, 9.3f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 203:
			Var0 = -959673820;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_docks_ld");
			Var0.f_3 = { -33.22f, -2141.27f, 9.3f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 204:
			Var0 = -653316439;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1000.68f, -2454.99f, 27.57f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 205:
			Var0 = -1560558973;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1012.91f, -2456.23f, 27.53f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 206:
			Var0 = 1221988161;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1028.08f, -2364.72f, 29.52f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 207:
			Var0 = 1998121926;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1033.22f, -2299.1f, 29.52f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 208:
			Var0 = 1778504088;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1022.4f, -2417.13f, 28.13f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 209:
			Var0 = -1618264918;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_military_01");
			Var0.f_3 = { 2485.44f, -432.71f, 91.97f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 210:
			Var0 = -1881039529;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 2485.09f, -335.84f, 91.98f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 211:
			Var0 = -1105298992;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 2491.97f, -303.48f, 91.99f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 212:
			Var0 = -734026222;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1944.86f, -957.69f, 78.15f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 213:
			Var0 = 895772842;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1956.74f, -956.86f, 78.15f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 214:
			Var0 = 77825833;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1845f, 2604.81f, 44.64f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 215:
			Var0 = 308880052;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1818.55f, 2604.81f, 44.6f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 216:
			Var0 = -620547091;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1799.74f, 2616.98f, 44.61f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 217:
			Var0 = -1471033717;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1813.4f, 2488.63f, 44.47f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 218:
			Var0 = -1233360160;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1808.82f, 2474.88f, 44.47f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 219:
			Var0 = -2075785612;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1762.19f, 2426.73f, 44.44f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 220:
			Var0 = 1874713956;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1749.22f, 2420.28f, 44.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 221:
			Var0 = 2113436121;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1667.61f, 2408.11f, 44.42f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 222:
			Var0 = 1266488547;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1661.76f, 2748.32f, 44.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 223:
			Var0 = 2060464373;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1653.21f, 2409.71f, 44.42f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 224:
			Var0 = -1207063697;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1558.14f, 2469.87f, 44.4f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 225:
			Var0 = -565839905;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1551.18f, 2482.58f, 44.4f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 226:
			Var0 = -1189958275;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1547.41f, 2576.6f, 44.51f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 227:
			Var0 = -1492973218;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1547.99f, 2591.08f, 44.51f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 228:
			Var0 = 348251354;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1576.19f, 2667.23f, 44.51f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 229:
			Var0 = 40845365;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1584.63f, 2679.02f, 44.51f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 230:
			Var0 = -95047678;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1648.95f, 2741.55f, 44.45f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 231:
			Var0 = -267871384;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1762.58f, 2751.9f, 44.45f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 232:
			Var0 = 1572566732;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1776.26f, 2747.1f, 44.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 233:
			Var0 = 2106931155;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1829.8f, 2702.92f, 44.45f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 234:
			Var0 = -1899079099;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1834.92f, 2689.37f, 44.45f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 235:
			Var0 = -1592787256;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 222.07f, -2013.99f, 18.41f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 236:
			Var0 = -1902159381;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 210.93f, -2022.58f, 17.65f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 237:
			Var0 = -1605042858;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01b");
			Var0.f_3 = { 459.7f, -2002.94f, 22.07f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 238:
			Var0 = -1558510878;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 451.45f, -1994.01f, 22.07f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 239:
			Var0 = -1259755905;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01b");
			Var0.f_3 = { 455.74f, -1944.85f, 23.66f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 240:
			Var0 = -42223710;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 466.76f, -1939.65f, 23.66f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 241:
			Var0 = -687183168;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01b");
			Var0.f_3 = { 539.83f, -1901.88f, 24.22f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 242:
			Var0 = 435613848;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 550.87f, -1896.75f, 24.15f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 243:
			Var0 = 1139523801;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 564.12f, -1903f, 23.71f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 244:
			Var0 = 1126088511;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 567.4f, -1908.22f, 23.71f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 245:
			Var0 = 827399076;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 1081.65f, -1818.42f, 36.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 246:
			Var0 = 1126285129;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 987.52f, -1176.82f, 24.55f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 247:
			Var0 = 829955062;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 705.64f, -1319.67f, 24.96f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 248:
			Var0 = -1633749438;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 712.95f, -1329.42f, 24.99f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 249:
			Var0 = -1934732703;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 796.46f, -921.49f, 24.4f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 250:
			Var0 = 1737951283;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 795.78f, -909.33f, 24.36f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 251:
			Var0 = -703535835;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 795.16f, -896.64f, 24.1f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 252:
			Var0 = -987085992;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 794.48f, -884.48f, 24.06f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 253:
			Var0 = -1736447128;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { 546.17f, -1869.94f, 24.53f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 254:
			Var0 = 1725499419;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 492.33f, -1410.47f, 28.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 255:
			Var0 = 2032577718;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 484.57f, -1408.5f, 28.48f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 256:
			Var0 = 2130786415;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 469.33f, -1272.7f, 28.82f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 257:
			Var0 = -783852294;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 487.87f, -1272.59f, 28.86f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 258:
			Var0 = -493650030;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_08");
			Var0.f_3 = { 488.89f, -1011.67f, 27.14f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 259:
			Var0 = -1403186394;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 527.55f, -1597.33f, 28.39f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 260:
			Var0 = -1105283415;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 544.94f, -1649.75f, 27.49f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 261:
			Var0 = 132270639;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { 151.35f, -1668.64f, 28.77f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 262:
			Var0 = 429714852;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 47.2f, -1448.3f, 28.44f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 263:
			Var0 = 712231657;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1876.37f, 194.85f, 83.33f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 264:
			Var0 = 2136700087;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1868.31f, 183.79f, 83.34f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 265:
			Var0 = 218566672;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1452.43f, 37.03f, 51.75f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 266:
			Var0 = 2061822982;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1483.1f, 46.93f, 53.26f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 267:
			Var0 = 1617901339;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1507.47f, 39.16f, 54.41f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 268:
			Var0 = 1859638252;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1528.36f, 35.77f, 55.78f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 269:
			Var0 = -1008173552;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_02_ld");
			Var0.f_3 = { -1583.28f, 40.14f, 59.32f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 270:
			Var0 = 1403985307;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_02_ld");
			Var0.f_3 = { -1616.23f, 79.78f, 60.78f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 271:
			Var0 = -1988622032;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -924.98f, -9.03f, 43.28f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 272:
			Var0 = 1716077491;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -905.7f, 14.66f, 45.66f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 273:
			Var0 = -1151537699;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_02_ld");
			Var0.f_3 = { -844.05f, 155.96f, 66.03f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case 274:
			Var0 = 1236503176;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_04a");
			Var0.f_3 = { -914.32f, 184.54f, 68.42f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = -1725728509;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_trev_doorfront");
			Var0.f_3 = { -1149.71f, -1521.09f, 10.79f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 80:
			Var0 = -854930290;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ct_door01");
			Var0.f_3 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 81:
			Var0 = -86464467;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ct_door01");
			Var0.f_3 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 0:
			Var0 = 1066535586;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_housedoor1");
			Var0.f_3 = { 347.8678f, -1003.316f, -99.0952f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		
		case 275:
			Var0 = -153506146;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_door");
			Var0.f_3 = { 257.2896f, -1001.255f, -98.8587f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		
		case 276:
			Var0 = -1750863300;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_doorw");
			Var0.f_3 = { 348.2157f, -993.1122f, -99.043f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		
		case 277:
			Var0 = 1022411403;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fh_bedrmdoor");
			Var0.f_3 = { -789.3017f, 332.0119f, 201.5596f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		
		case 82:
			Var0 = -1858596497;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ld_garaged_01");
			Var0.f_3 = { -815.3282f, 185.9571f, 72.99f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 85:
			Var0 = 360545155;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_windowwc");
			Var0.f_3 = { -802.7333f, 167.5041f, 77.5824f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 83:
			Var0 = -1846031173;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_doorm_l");
			Var0.f_3 = { -816.716f, 179.098f, 72.84f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 84:
			Var0 = 1966183215;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_doorm_r");
			Var0.f_3 = { -816.1068f, 177.5109f, 72.8274f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 86:
			Var0 = -452757037;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_bh1_48_backdoor_l");
			Var0.f_3 = { -796.5657f, 177.2214f, 73.0405f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 87:
			Var0 = 422961723;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_bh1_48_backdoor_r");
			Var0.f_3 = { -794.5051f, 178.0124f, 73.0405f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 88:
			Var0 = 113556825;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_bh1_48_backdoor_l");
			Var0.f_3 = { -793.3943f, 180.5075f, 73.0405f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 89:
			Var0 = 1035119412;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_bh1_48_backdoor_r");
			Var0.f_3 = { -794.1853f, 182.568f, 73.0405f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 90:
			Var0 = 929216155;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_door");
			Var0.f_3 = { -806.2817f, 187.0246f, 72.624f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 91:
			Var0 = -2017851706;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_cult_01_l");
			Var0.f_3 = { -1041.268f, 4906.097f, 209.2002f };
			Var0.f_7 = 1;
			Var0.f_8 = 4;
			Var0.f_12 = -1f;
			Var0.f_11 = 1;
			break;
		
		case 92:
			Var0 = -90706816;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_cult_01_r");
			Var0.f_3 = { -1044.749f, 4914.972f, 209.1932f };
			Var0.f_7 = 1;
			Var0.f_8 = 4;
			Var0.f_12 = 1f;
			Var0.f_11 = 1;
			break;
		
		case 93:
			Var0 = -1701678154;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_trevtraildr");
			Var0.f_3 = { 1972.769f, 3815.366f, 33.6633f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 94:
			Var0 = -2129438429;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fa_frontdoor");
			Var0.f_3 = { -14.8689f, -1441.182f, 31.192f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 95:
			Var0 = -670056199;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_door8");
			Var0.f_3 = { 716.7808f, -975.4207f, 25.057f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 96:
			Var0 = 917058539;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_door7");
			Var0.f_3 = { 719.3818f, -975.4185f, 25.0057f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 286:
			Var0 = 505794885;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_door02");
			Var0.f_3 = { 710f, -964f, 31f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 288:
			Var0 = 998060257;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_doorel_l");
			Var0.f_3 = { 3539f, 3673.7f, 20f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 289:
			Var0 = 1685291713;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_doorel_r");
			Var0.f_3 = { 3541.6f, 3673.2f, 20f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 287:
			Var0 = 856811118;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_store_door");
			Var0.f_3 = { 708f, -962f, 31f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 97:
			Var0 = 1579789044;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("p_jewel_door_l");
			Var0.f_3 = { -631.9554f, -236.3333f, 38.2065f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 98:
			Var0 = -740144707;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("p_jewel_door_r1");
			Var0.f_3 = { -630.4265f, -238.4375f, 38.2065f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 99:
			Var0 = 459292593;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_door04");
			Var0.f_3 = { 1395.613f, 3609.327f, 35.1308f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 100:
			Var0 = 699522132;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_doorext");
			Var0.f_3 = { 1388.499f, 3614.828f, 39.0919f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 101:
			Var0 = 919402122;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_doorext");
			Var0.f_3 = { 1399.7f, 3607.763f, 39.0919f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 102:
			Var0 = -1009094475;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_com_gar_door_01");
			Var0.f_3 = { 484.5642f, -1315.574f, 30.2033f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 103:
			Var0 = 1304570179;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_cs_door");
			Var0.f_3 = { 482.8112f, -1311.953f, 29.3506f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 104:
			Var0 = 1374764510;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_epsstoredoor");
			Var0.f_3 = { 241.3621f, 361.0471f, 105.003f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 105:
			Var0 = -1326670325;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fh_frontdoor");
			Var0.f_3 = { 7.5179f, 539.526f, 176.1781f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 106:
			Var0 = -646035010;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch_025c_g_door_01");
			Var0.f_3 = { 18.6504f, 546.3401f, 176.3448f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 8:
			Var0 = -2020886833;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_csr_door_l");
			Var0.f_3 = { -59.893f, -1092.952f, 26.8836f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 9:
			Var0 = 424893020;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_csr_door_r");
			Var0.f_3 = { -60.5458f, -1094.749f, 26.8887f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 10:
			Var0 = -234058813;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_csr_door_l");
			Var0.f_3 = { -38.464f, -1108.446f, 26.7198f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 11:
			Var0 = -513447307;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_csr_door_r");
			Var0.f_3 = { -36.6615f, -1109.102f, 26.7198f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 107:
			Var0 = 777975393;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door3_l");
			Var0.f_3 = { -608.7289f, -1610.315f, 27.1589f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 108:
			Var0 = 2134513686;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door3_r");
			Var0.f_3 = { -611.32f, -1610.089f, 27.1589f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 109:
			Var0 = -1758213847;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door3_l");
			Var0.f_3 = { -592.9376f, -1631.577f, 27.1593f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 110:
			Var0 = -990993250;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door3_r");
			Var0.f_3 = { -592.7109f, -1628.986f, 27.1593f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 111:
			Var0 = -611431917;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_shrf2door");
			Var0.f_3 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 112:
			Var0 = -1988181627;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_shrf2door");
			Var0.f_3 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 113:
			Var0 = 1879085215;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_shrfdoor");
			Var0.f_3 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 114:
			Var0 = -100586674;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_01");
			Var0.f_3 = { -1067.002f, -1665.609f, 4.7898f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 115:
			Var0 = -384071293;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_02");
			Var0.f_3 = { -1064.763f, -1668.762f, 4.8084f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 116:
			Var0 = 1317819491;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_03_ld");
			Var0.f_3 = { -1074.648f, -1676.131f, 4.684f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 117:
			Var0 = -1321526845;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_05");
			Var0.f_3 = { 201.4f, -153.3652f, 57.8522f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 156:
			Var0 = 96518847;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fb_doorshortl");
			Var0.f_3 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 157:
			Var0 = 1355864282;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fb_doorshortr");
			Var0.f_3 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 158:
			Var0 = 1350395200;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fb_door01");
			Var0.f_3 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 159:
			Var0 = -351200663;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fb_door02");
			Var0.f_3 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 160:
			Var0 = 1721932052;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_gtdoor");
			Var0.f_3 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 161:
			Var0 = 659933472;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_roc_door4");
			Var0.f_3 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 162:
			Var0 = 1556853707;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_roc_door4");
			Var0.f_3 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 163:
			Var0 = 9031593;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ron_door_01");
			Var0.f_3 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 164:
			Var0 = -1114322496;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ron_door_01");
			Var0.f_3 = { 1083.547f, -1975.435f, 31.622f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 165:
			Var0 = -1353175737;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ron_door_01");
			Var0.f_3 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 166:
			Var0 = 44182644;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_housedoor1");
			Var0.f_3 = { 86.6624f, -1959.477f, 21.2152f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 167:
			Var0 = -85603376;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_abat_slide");
			Var0.f_3 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 168:
			Var0 = -336931144;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_04");
			Var0.f_3 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 169:
			Var0 = -1850802875;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch3_04_door_01l");
			Var0.f_3 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 170:
			Var0 = -1675259342;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch3_04_door_01r");
			Var0.f_3 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 171:
			Var0 = 682572401;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sc1_12_door");
			Var0.f_3 = { -58.47f, -1530.51f, 34.54f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 172:
			Var0 = 638173652;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch1_07_door_01l");
			Var0.f_3 = { -2255.194f, 322.2593f, 184.9264f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 173:
			Var0 = -657938605;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch1_07_door_01r");
			Var0.f_3 = { -2254.056f, 319.7009f, 184.9264f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 174:
			Var0 = -913405729;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch1_07_door_01l");
			Var0.f_3 = { -2280.597f, 265.432f, 184.926f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 175:
			Var0 = -61510036;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch1_07_door_01r");
			Var0.f_3 = { -2278.039f, 266.57f, 184.926f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 180:
			Var0 = 1741567220;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_08");
			Var0.f_3 = { 413.3649f, -1620.033f, 28.3416f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 181:
			Var0 = -2117572376;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_08");
			Var0.f_3 = { 418.2896f, -1651.396f, 28.2951f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 182:
			Var0 = 1308623196;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_07b");
			Var0.f_3 = { 397.8846f, -1607.384f, 28.3301f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 278:
			Var0 = -1181991670;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sc1_21_g_door_01");
			Var0.f_3 = { -25.28f, -1431.06f, 30.84f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 279:
			Var0 = 655256353;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ss1_14_garage_door");
			Var0.f_3 = { -62.38f, 352.7173f, 113.2499f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		
		case 280:
			Var0 = -1283878568;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_motel_door_09");
			Var0.f_3 = { 549.2567f, -1773.115f, 33.7309f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 283:
			Var0 = -1442263252;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ss1_10_door_l");
			Var0.f_3 = { -720.39f, 256.86f, 80.29f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		
		case 284:
			Var0 = 945482706;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ss1_10_door_r");
			Var0.f_3 = { -718.42f, 257.79f, 80.29f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
	}
	return Var0;
}

int func_20(int iParam0, int iParam1)//Position - 0x4D59
{
	struct<13> Var0;
	int iVar13;
	
	iVar13 = 0;
	while (iVar13 < 40)
	{
		if (*iParam0 < 294)
		{
			Var0 = { func_19(*iParam0, iParam1) };
			if (Var0.f_1 == 99 || Var0.f_1 == iParam1)
			{
				func_21(Var0, 0);
			}
			*iParam0++;
		}
		iVar13++;
	}
	if (*iParam0 < 294)
	{
		return 0;
	}
	return 1;
}

void func_21(struct<13> Param0, int iParam13)//Position - 0x4DC5
{
	if (Param0 != 0)
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(Param0, Param0.f_2, Param0.f_3, 0, iParam13, Param0.f_11);
		if (Param0.f_9)
		{
			OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(Param0, 1);
		}
		if (Param0.f_12 != 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Param0, Param0.f_12, 0, iParam13);
		}
		if (!Param0.f_6)
		{
			if (Param0.f_7)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Param0, Param0.f_8, iParam13, 0);
			}
		}
		if (Param0.f_10)
		{
			OBJECT::_0xA85A21582451E951(Param0, 1);
		}
	}
}

int func_22(int iParam0, int iParam1)//Position - 0x4E38
{
	struct<13> Var0;
	int iVar13;
	
	iVar13 = 0;
	while (iVar13 < 40)
	{
		if (*iParam0 < 294)
		{
			Var0 = { func_19(*iParam0, iParam1) };
			if (Var0.f_1 == 99 || Var0.f_1 == iParam1)
			{
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0))
				{
					OBJECT::REMOVE_DOOR_FROM_SYSTEM(Var0);
					return 0;
				}
			}
		}
		*iParam0++;
		iVar13++;
	}
	if (*iParam0 < 294)
	{
		return 0;
	}
	return 1;
}

int func_23()//Position - 0x4EAA
{
	return Global_24444;
}

int func_24(int iParam0)//Position - 0x4EB5
{
	return Local_220[iParam0 /*4*/];
}

void func_25(var uParam0, bool bParam1, bool bParam2)//Position - 0x4EC3
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

void func_26(int iParam0)//Position - 0x4F00
{
	Local_220[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = iParam0;
}

int func_27()//Position - 0x4F12
{
	bool bVar0;
	
	func_33(&bVar0);
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
	if (func_32())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (func_31())
	{
		return 1;
	}
	if (func_30(157))
	{
		if (!func_29())
		{
			return 1;
		}
	}
	if (func_30(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_28() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_28()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_28()//Position - 0x4FA5
{
	switch (func_23())
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

bool func_29()//Position - 0x4FD9
{
	return Global_2428131.f_572;
}

int func_30(int iParam0)//Position - 0x4FE8
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_31()//Position - 0x4FFF
{
	return Global_2435238;
}

bool func_32()//Position - 0x500B
{
	return Global_2428131.f_567;
}

void func_33(var uParam0)//Position - 0x501A
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
					func_34(iVar0);
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

void func_34(int iParam0)//Position - 0x508A
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_7(Var0.f_1, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_35(uVar4, &bVar5))
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

int func_35(var uParam0, var uParam1)//Position - 0x510B
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_36()//Position - 0x5159
{
	SYSTEM::WAIT(0);
}

void func_37()//Position - 0x5166
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_38(iVar0, &(Local_64[iVar0 /*17*/]));
		iVar0++;
	}
}

void func_38(int iParam0, var uParam1)//Position - 0x518C
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = 1036961952;
			(*uParam1)[1] = 1864280899;
			uParam1->f_3 = { -984.0406f, -2833.845f, 18.29796f };
			uParam1->f_6 = { -990.1995f, -2844.138f, 10.96479f };
			uParam1->f_9 = 15.25f;
			uParam1->f_10 = { -983.7082f, -2833.199f, 12.83979f };
			uParam1->f_13 = { -977.913f, -2823.237f, 19.231f };
			uParam1->f_16 = 15.25f;
			break;
		
		case 1:
			(*uParam1)[0] = 738966015;
			(*uParam1)[1] = 969004395;
			uParam1->f_3 = { -1144.962f, -2726.898f, 18.29805f };
			uParam1->f_6 = { -1151.852f, -2739.109f, 10.9529f };
			uParam1->f_9 = 15.25f;
			uParam1->f_10 = { -1144.678f, -2726.473f, 12.86838f };
			uParam1->f_13 = { -1138.071f, -2714.978f, 18.42801f };
			uParam1->f_16 = 15.25f;
			break;
		
		case 2:
			(*uParam1)[0] = 1741567220;
			uParam1->f_3 = { 415.2436f, -1621.926f, 28.04277f };
			uParam1->f_6 = { 410.3537f, -1628.049f, 34.04278f };
			uParam1->f_9 = 6.5f;
			break;
		
		case 3:
			(*uParam1)[0] = -2117572376;
			uParam1->f_3 = { 416.417f, -1653.291f, 28.04278f };
			uParam1->f_6 = { 410.6726f, -1648.682f, 34.04278f };
			uParam1->f_9 = 6.5f;
			break;
		
		case 4:
			(*uParam1)[0] = 1308623196;
			uParam1->f_3 = { 400.634f, -1609.808f, 28.04278f };
			uParam1->f_6 = { 394.4907f, -1617.194f, 34.04278f };
			uParam1->f_9 = 8.25f;
			break;
		
		case 5:
			(*uParam1)[0] = -1178784373;
			(*uParam1)[1] = 94815597;
			uParam1->f_3 = { -1012.159f, -2412.959f, 12.69468f };
			uParam1->f_6 = { -1026.246f, -2405.063f, 18.75721f };
			uParam1->f_9 = 15.375f;
			uParam1->f_10 = { -1012.159f, -2412.959f, 12.69468f };
			uParam1->f_13 = { -999.976f, -2419.571f, 18.75715f };
			uParam1->f_16 = 15.375f;
			break;
	}
}

void func_39()//Position - 0x53F6
{
	func_41(iLocal_62);
	Global_2446554.f_1530 = 0;
	Global_2446554.f_4337 = 0;
	func_40();
}

void func_40()//Position - 0x5418
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_41(int iParam0)//Position - 0x5424
{
	struct<13> Var0;
	int iVar13;
	
	iVar13 = 0;
	while (iVar13 < 294)
	{
		Var0 = { func_19(iVar13, iParam0) };
		if (Var0.f_1 == 99 || Var0.f_1 == iParam0)
		{
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0))
			{
				if (Var0.f_11)
				{
					OBJECT::REMOVE_DOOR_FROM_SYSTEM(Var0);
				}
			}
		}
		iVar13++;
	}
}

int func_42(struct<20> Param0)//Position - 0x547A
{
	func_46(func_47(Param0), Param0);
	func_44(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_170, 30);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_220, 129);
	if (!func_43())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	iLocal_62 = 1;
	return 1;
}

int func_43()//Position - 0x54BE
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
		if (func_32())
		{
			return 0;
		}
		if (func_30(155))
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

int func_44(int iParam0, int iParam1, bool bParam2)//Position - 0x5517
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_40();
			}
			else
			{
				return 0;
			}
		}
		if (!func_45())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_40();
					}
					else
					{
						return 0;
					}
				}
				if (func_32())
				{
					if (!bParam2)
					{
						func_40();
					}
					else
					{
						return 0;
					}
				}
				if (func_30(155))
				{
					if (!bParam2)
					{
						func_40();
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
					func_40();
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
				func_40();
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
			func_40();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_45()//Position - 0x562C
{
	return Global_1315874;
}

void func_46(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)//Position - 0x5638
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_40();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_47(int iParam0)//Position - 0x5657
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

