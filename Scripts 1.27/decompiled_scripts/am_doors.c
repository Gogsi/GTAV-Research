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
		GlobalFunc_906();
		if (GlobalFunc_7814())
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
		GlobalFunc_481(&uLocal_56, 0, 0);
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
				if ((!Global_30786 && GlobalFunc_3() != -1) && GlobalFunc_3() != 999)
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
		if (GlobalFunc_1471(PLAYER::INT_TO_PLAYERINDEX(iLocal_167), 0, 1))
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
					GlobalFunc_481(&(Local_207[iParam0 /*2*/]), 1, 0);
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
				GlobalFunc_481(&(Local_207[iParam0 /*2*/]), 1, 0);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(uParam1);
			}
		}
	}
	if (GlobalFunc_439(&(Local_207[iParam0 /*2*/])))
	{
		if (GlobalFunc_5071(&(Local_207[iParam0 /*2*/]), 1000, 1))
		{
			GlobalFunc_434(&(Local_207[iParam0 /*2*/]));
			iLocal_200[iParam0] = 0;
		}
	}
}






void func_8(int iParam0)//Position - 0x557
{
	Local_170 = iParam0;
}

void func_9()//Position - 0x563
{
	float fVar0;
	struct<3> Var1;
	
	Var1 = { GlobalFunc_271(PLAYER::PLAYER_ID()) };
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
			if (GlobalFunc_5037() >= 0)
			{
				if (GlobalFunc_365(29))
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
	if (GlobalFunc_1472())
	{
		return 1;
	}
	if (GlobalFunc_3() == 2)
	{
		if (Global_1602437 == 2)
		{
			return 1;
		}
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
			Var0 = { GlobalFunc_1473(*iParam0, iParam1) };
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


int func_20(int iParam0, int iParam1)//Position - 0x4D59
{
	struct<13> Var0;
	int iVar13;
	
	iVar13 = 0;
	while (iVar13 < 40)
	{
		if (*iParam0 < 294)
		{
			Var0 = { GlobalFunc_1473(*iParam0, iParam1) };
			if (Var0.f_1 == 99 || Var0.f_1 == iParam1)
			{
				GlobalFunc_1474(Var0, 0);
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


int func_22(int iParam0, int iParam1)//Position - 0x4E38
{
	struct<13> Var0;
	int iVar13;
	
	iVar13 = 0;
	while (iVar13 < 40)
	{
		if (*iParam0 < 294)
		{
			Var0 = { GlobalFunc_1473(*iParam0, iParam1) };
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


int func_24(int iParam0)//Position - 0x4EB5
{
	return Local_220[iParam0 /*4*/];
}


void func_26(int iParam0)//Position - 0x4F00
{
	Local_220[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = iParam0;
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
	GlobalFunc_491();
}


void func_41(int iParam0)//Position - 0x5424
{
	struct<13> Var0;
	int iVar13;
	
	iVar13 = 0;
	while (iVar13 < 294)
	{
		Var0 = { GlobalFunc_1473(iVar13, iParam0) };
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
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_170, 30);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_220, 129);
	if (!GlobalFunc_5091())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	iLocal_62 = 1;
	return 1;
}






