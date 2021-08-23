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
	func_41(&uLocal_27);
	func_32();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			func_30(1);
			func_29();
		}
		if (!Global_14393.f_1 == 9 && Global_14393.f_1 > 3)
		{
			func_3();
			if (Global_14393.f_1 != 8)
			{
				if (func_2())
				{
					func_29();
				}
			}
		}
		if (func_1())
		{
			func_29();
		}
	}
}

int func_1()//Position - 0xDB
{
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x11E
{
	if (Global_2869 == 1 || Global_14393.f_1 < 7)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
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
				func_8(37, func_9(1, 1));
				Global_2435168 = 0;
			}
			else
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(1);
				func_8(36, func_9(1, 1));
				Global_2435168 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)//Position - 0x19D
{
	if (Global_14551)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14393.f_1 = 3;
	}
}

int func_5()//Position - 0x20D
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x234
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)//Position - 0x2A8
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

void func_8(int iParam0, int iParam1)//Position - 0x302
{
	struct<3> Var0;
	
	Var0.x = 2;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam1);
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
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_10(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_10(int iParam0, int iParam1)//Position - 0x395
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)//Position - 0x3E0
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()//Position - 0x421
{
	return Global_1312737;
}

int func_13(int iParam0, bool bParam1, bool bParam2)//Position - 0x42D
{
	int iVar0;
	
	iVar0 = uParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0))
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

int func_14()//Position - 0x471
{
	if (!func_20(PLAYER::PLAYER_ID(), 1) && func_15())
	{
		return 1;
	}
	return 0;
}

int func_15()//Position - 0x494
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_19())
	{
		return 1;
	}
	if (func_18())
	{
		return 1;
	}
	return func_16(120, -1);
}

int func_16(int iParam0, int iParam1)//Position - 0x4C4
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473393[iParam0 /*6*/][func_17(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_17(var uParam0)//Position - 0x4F0
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

bool func_18()//Position - 0x524
{
	return Global_1315888;
}

bool func_19()//Position - 0x530
{
	return Global_1315890;
}

bool func_20(int iParam0, bool bParam1)//Position - 0x53C
{
	if (Global_1312449 != 0)
	{
		return func_24(iParam0) != 0;
	}
	return func_21(iParam0, bParam1);
}

int func_21(int iParam0, bool bParam1)//Position - 0x562
{
	if (bParam1)
	{
		if (func_22(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582596[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_22(int iParam0)//Position - 0x58E
{
	return func_23(iParam0);
}

bool func_23(int iParam0)//Position - 0x59C
{
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_13.f_1, 0);
}

int func_24(int iParam0)//Position - 0x5B6
{
	if (func_13(iParam0, 0, 1))
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
	func_26();
	Global_14371 = 1;
	return 1;
}

void func_26()//Position - 0x61E
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14382, 1);
		func_27();
	}
}

void func_27()//Position - 0x642
{
	if (func_28())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

int func_28()//Position - 0x656
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68245)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2544850 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_29()//Position - 0x69D
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_30(bool bParam0)//Position - 0x6A9
{
	if (bParam0)
	{
		func_31();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			MISC::SET_BIT(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_31()//Position - 0x70C
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_32()//Position - 0x735
{
	if (!Global_14393.f_1 == 7)
	{
		Global_14393.f_1 = 7;
	}
	func_40(Global_14374, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
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
	func_40(Global_14374, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
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
		func_35(iParam5, 0);
		return;
	}
	if (Global_14381)
	{
		func_39(Global_14374, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, cParam2, 0, 0, 0, 0);
		MISC::SET_BIT(uParam4, iParam3);
		func_35(iParam5, 1);
		return;
	}
	func_39(Global_14374, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	MISC::SET_BIT(uParam4, iParam3);
	func_35(iParam5, 1);
}

void func_35(int iParam0, bool bParam1)//Position - 0x917
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&Global_2263, iParam0);
		return;
	}
	MISC::CLEAR_BIT(&Global_2263, iParam0);
}

void func_36(char[4] cParam0)//Position - 0x942
{
	func_37(Global_14374, "SET_HEADER", cParam0, 0, 0, 0, 0);
}

void func_37(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x95A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_38(uParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam3))
	{
		func_38(iParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam4))
	{
		func_38(iParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam5))
	{
		func_38(iParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
	{
		func_38(iParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_38(var uParam0)//Position - 0x9B5
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
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
		func_38(cParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_38(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_38(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_38(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_38(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_40(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xA7A
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
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_41(var uParam0)//Position - 0xADD
{
	*uParam0 = 0;
}

