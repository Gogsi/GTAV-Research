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
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_51[25];
	int iLocal_202 = 0;
	struct<3> Local_203 = { 0, 0, 0 } ;
	struct<3> Local_206 = { 0, 0, 0 } ;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_27();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_23 == 0)
		{
			if (Global_14393.f_1 != 9)
			{
				switch (Global_14393.f_1)
				{
					case 7:
						if ((iLocal_209 == 0 && iLocal_210 == 0) && Global_16727 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_14361, 0) && iLocal_209 == 0) && iLocal_210 == 0)
						{
							func_14();
							Global_14371 = 1;
							if (Global_14393.f_1 > 3)
							{
								if (MISC::IS_BIT_SET(Global_2264, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_209)
				{
					func_9();
				}
				if (iLocal_210)
				{
					func_8();
				}
			}
			else
			{
				Global_14395 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
		}
	}
}

int func_1()//Position - 0x114
{
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x157
{
	iLocal_24 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
	switch (iLocal_24)
	{
		case 0:
			iLocal_23 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14393.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()//Position - 0x199
{
	int iVar0;
	
	func_7(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_20 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_PHOTOS();
	iLocal_21 = 0;
	iVar0 = 0;
	while (iLocal_21 < iLocal_20)
	{
		if (GRAPHICS::_0xE791DF1F73ED2C8B(iLocal_21))
		{
			func_6(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_51[iLocal_21 /*6*/]), 0, 0, 0, 0);
			iLocal_25[iVar0] = iLocal_21;
			iVar0++;
		}
		iLocal_21++;
	}
	func_7(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_14374, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_14381)
	{
		func_6(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_2263, 17);
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2CB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_5(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam3))
	{
		func_5(iParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam4))
	{
		func_5(iParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam5))
	{
		func_5(iParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
	{
		func_5(iParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_5(var uParam0)//Position - 0x326
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x338
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
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_5(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_5(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_5(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_5(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_5(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x3EB
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

void func_8()//Position - 0x44E
{
	if (iLocal_209 == 0 && iLocal_210 == 1)
	{
		if (iLocal_214)
		{
			Local_206.x = (Local_206.x + 1f);
		}
		if (Local_206.x > Local_203.x || Local_206.x == Local_203.x)
		{
			Local_206.x = Local_203.x;
			iLocal_214 = 0;
		}
		if (iLocal_215)
		{
			Local_206.f_1 = (Local_206.f_1 - 2f);
		}
		if (Local_206.f_1 < Local_203.f_1 || Local_206.f_1 == Local_203.f_1)
		{
			Local_206.f_1 = Local_203.f_1;
			iLocal_215 = 0;
		}
		if (iLocal_216)
		{
			Local_206.f_2 = (Local_206.f_2 - 7f);
		}
		if (Local_206.f_2 < Local_203.f_2 || Local_206.f_2 == Local_203.f_2)
		{
			Local_206.f_2 = Local_203.f_2;
			iLocal_216 = 0;
		}
		if ((iLocal_214 == 0 && iLocal_215 == 0) && iLocal_216 == 0)
		{
			iLocal_210 = 0;
			if (Global_14393.f_1 > 3)
			{
				Global_14393.f_1 = 7;
				HUD::CLEAR_HELP(1);
				Global_16729 = 1;
				func_26();
			}
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_206, 0);
	}
}

void func_9()//Position - 0x536
{
	if ((iLocal_209 == 1 && iLocal_210 == 0) && Global_16727 == 6)
	{
		if (iLocal_211)
		{
			Local_206.x = (Local_206.x - 1f);
		}
		if (Local_206.x < Local_203.x || Local_206.x == Local_203.x)
		{
			Local_206.x = Local_203.x;
			iLocal_211 = 0;
		}
		if (iLocal_212)
		{
			Local_206.f_1 = (Local_206.f_1 - 0.5f);
		}
		if (Local_206.f_1 < Local_203.f_1 || Local_206.f_1 == Local_203.f_1)
		{
			Local_206.f_1 = Local_203.f_1;
			iLocal_212 = 0;
		}
		if (iLocal_213)
		{
			Local_206.f_2 = (Local_206.f_2 + 7f);
		}
		if (Local_206.f_2 > Local_203.f_2 || Local_206.f_2 == Local_203.f_2)
		{
			Local_206.f_2 = Local_203.f_2;
			iLocal_213 = 0;
		}
		if ((iLocal_211 == 0 && iLocal_212 == 0) && iLocal_213 == 0)
		{
			iLocal_209 = 0;
			func_10("CELL_MSHELP_2");
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_206, 0);
	}
	if (MISC::IS_BIT_SET(Global_2264, 15))
	{
		iLocal_209 = 0;
		iLocal_210 = 0;
		func_7(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_14381)
		{
			func_6(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_2263, 17);
		func_7(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_14374, "SET_HEADER", &(Local_51[iLocal_22 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)//Position - 0x71F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_11()//Position - 0x735
{
	Global_16729 = 1;
	HUD::CLEAR_HELP(1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_12()//Position - 0x74A
{
	if (Global_2869 == 1 || Global_14393.f_1 < 7)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_13()//Position - 0x773
{
	if (iLocal_209 == 0)
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_206, 0);
		Local_203 = { Global_14353 };
		iLocal_210 = 1;
		iLocal_214 = 1;
		iLocal_215 = 1;
		iLocal_216 = 1;
	}
}

void func_14()//Position - 0x79D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14382, 1);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)//Position - 0x7BD
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_USING_KEYBOARD(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_16()//Position - 0x82F
{
	if (iLocal_202)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_202 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (iLocal_202 == 0)
	{
		if (func_15(2, Global_14369, 0))
		{
			func_20();
			iLocal_202 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_15(2, Global_14370, 0))
		{
			func_17();
			iLocal_202 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_17()//Position - 0x8A4
{
	func_7(Global_14374, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
	func_18();
}

void func_18()//Position - 0x8DF
{
	if (func_19())
	{
		if (Global_14556 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
	}
}

int func_19()//Position - 0x902
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

void func_20()//Position - 0x949
{
	func_7(Global_14374, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
	func_21();
}

void func_21()//Position - 0x984
{
	if (func_19())
	{
		if (Global_14556 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
	}
}

void func_22()//Position - 0x9A7
{
	int iVar0;
	
	if (Global_14371 == 0)
	{
		if (func_15(2, Global_14362, 0))
		{
			MISC::CLEAR_BIT(&Global_2264, 15);
			func_24();
			Global_14371 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
			uLocal_19 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_19))
			{
				SYSTEM::WAIT(0);
			}
			iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_19);
			if (iVar0 > -1)
			{
				iLocal_22 = iLocal_25[iVar0];
				if (Global_14393.f_1 > 3)
				{
					if (Global_16727 == 0)
					{
						func_7(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_14374, "SET_HEADER", &(Local_51[iLocal_22 /*6*/]), 0, 0, 0, 0);
						if (Global_14381)
						{
							func_6(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_2263, 17);
						Global_16731 = iLocal_22;
						Global_16727 = 12;
						Global_14393.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()//Position - 0xB27
{
	if (iLocal_210 == 0)
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_206, 0);
		Local_203 = { -90.3f, -0.8f, 90f };
		iLocal_209 = 1;
		iLocal_211 = 1;
		iLocal_212 = 1;
		iLocal_213 = 1;
	}
}

void func_24()//Position - 0xB5B
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14382, 1);
		func_25();
	}
}

void func_25()//Position - 0xB7F
{
	if (func_19())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

void func_26()//Position - 0xB93
{
	if ((MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
	{
		GRAPHICS::_0x4AF92ACD3141D96C();
		if (GRAPHICS::_0x2A893980E96B659A(0))
		{
			iLocal_23 = 1;
		}
		else
		{
			Global_16729 = 1;
			Global_14393.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

void func_27()//Position - 0xBDD
{
	StringCopy(&(Local_51[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_51[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_51[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_51[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_51[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_51[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_51[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_51[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_51[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_51[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_51[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_51[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_51[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_51[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_51[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_51[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_51[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_51[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_51[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_51[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

