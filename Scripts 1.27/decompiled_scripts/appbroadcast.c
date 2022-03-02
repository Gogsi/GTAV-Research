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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	char cLocal_29[16] = "";
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	char cLocal_33[16] = "";
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	char cLocal_37[16] = "";
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	char cLocal_41[16] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	char cLocal_45[16] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	char cLocal_49[16] = "";
	var uLocal_51 = 0;
	var uLocal_52 = 0;
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
	StringCopy(&cLocal_29, "CELL_212", 16);
	StringCopy(&cLocal_33, "CELL_213", 16);
	StringCopy(&cLocal_37, "CELL_39", 16);
	StringCopy(&cLocal_41, "CELL_MP_300", 16);
	StringCopy(&cLocal_45, "CELL_MP_301", 16);
	StringCopy(&cLocal_49, "CELL_MP_302", 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	GlobalFunc_1665(&uLocal_27);
	func_32();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			GlobalFunc_7632(1);
			GlobalFunc_491();
		}
		if (!Global_14393.f_1 == 9 && Global_14393.f_1 > 3)
		{
			func_3();
			if (Global_14393.f_1 != 8)
			{
				if (GlobalFunc_2002())
				{
					GlobalFunc_491();
				}
			}
		}
		if (GlobalFunc_2001())
		{
			GlobalFunc_491();
		}
	}
}



void func_3()//Position - 0x147
{
	if (func_25(&uLocal_27))
	{
		if (func_14())
		{
			if (Global_2435168)
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(0);
				GlobalFunc_1691(37, func_9(1, 1));
				Global_2435168 = 0;
			}
			else
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(1);
				GlobalFunc_1691(36, func_9(1, 1));
				Global_2435168 = 1;
			}
			GlobalFunc_6685(0);
			return;
		}
	}
}






int func_9(int iParam0, bool bParam1)//Position - 0x330
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





int func_14()//Position - 0x471
{
	if (!func_20(PLAYER::PLAYER_ID(), 1) && GlobalFunc_7906())
	{
		return 1;
	}
	return 0;
}






bool func_20(int iParam0, bool bParam1)//Position - 0x53C
{
	if (Global_1312449 != 0)
	{
		return func_24(iParam0) != 0;
	}
	return GlobalFunc_6722(iParam0, bParam1);
}




int func_24(int iParam0)//Position - 0x5B6
{
	if (GlobalFunc_1269(iParam0, 0, 1))
	{
		return Global_2414009[iParam0 /*254*/].f_1;
	}
	return 0;
}

int func_25(var uParam0)//Position - 0x5D7
{
	if (!MISC::IS_BIT_SET(*uParam0, 0))
	{
		return 0;
	}
	if (Global_14371)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2, Global_14362))
	{
		return 0;
	}
	GlobalFunc_7017();
	Global_14371 = 1;
	return 1;
}







void func_32()//Position - 0x735
{
	if (!Global_14393.f_1 == 7)
	{
		Global_14393.f_1 = 7;
	}
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_14())
	{
		if (Global_2435168)
		{
			func_39(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &cLocal_45, 0, 0, 0, 0);
		}
		else
		{
			func_39(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &cLocal_41, 0, 0, 0, 0);
		}
	}
	else
	{
		func_39(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &cLocal_49, 0, 0, 0, 0);
	}
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_36(&cLocal_37);
	if (func_14())
	{
		func_33(13, &cLocal_29, 1, "", 4, &cLocal_33, &uLocal_27);
	}
	else
	{
		func_33(1, "", 1, "", 4, &cLocal_33, &uLocal_27);
	}
}

void func_33(int iParam0, char[4] cParam1, int iParam2, char[4] cParam3, int iParam4, char[4] cParam5, var uParam6)//Position - 0x845
{
	func_34(2, iParam0, cParam1, 0, uParam6, -1);
	func_34(1, iParam2, cParam3, 1, uParam6, 17);
	func_34(3, iParam4, cParam5, 2, uParam6, -1);
}

void func_34(int iParam0, int iParam1, char[4] cParam2, int iParam3, var uParam4, int iParam5)//Position - 0x875
{
	if (iParam1 == 1)
	{
		func_39(Global_14374, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(uParam4, iParam3);
		GlobalFunc_2004(iParam5, 0);
		return;
	}
	if (Global_14381)
	{
		func_39(Global_14374, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, cParam2, 0, 0, 0, 0);
		MISC::SET_BIT(uParam4, iParam3);
		GlobalFunc_2004(iParam5, 1);
		return;
	}
	func_39(Global_14374, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	MISC::SET_BIT(uParam4, iParam3);
	GlobalFunc_2004(iParam5, 1);
}


void func_36(char[4] cParam0)//Position - 0x942
{
	func_37(Global_14374, "SET_HEADER", cParam0, 0, 0, 0, 0);
}

void func_37(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x95A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GlobalFunc_256(uParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam3))
	{
		GlobalFunc_256(iParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam4))
	{
		GlobalFunc_256(iParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam5))
	{
		GlobalFunc_256(iParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
	{
		GlobalFunc_256(iParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_39(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x9C7
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam7))
	{
		GlobalFunc_256(cParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		GlobalFunc_256(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		GlobalFunc_256(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		GlobalFunc_256(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		GlobalFunc_256(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}



