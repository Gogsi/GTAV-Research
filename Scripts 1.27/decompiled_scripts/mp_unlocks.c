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
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	int iVar1;
	int iVar2;
	
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
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	iLocal_89 = 50 + 1000;
	iLocal_90 = 58 + 1000;
	iLocal_99 = 39;
	HUD::_LOG_DEBUG_INFO(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if ((MISC::IS_DURANGO_VERSION() || MISC::IS_ORBIS_VERSION()) || MISC::IS_PC_VERSION())
	{
		iLocal_99 = 40;
	}
	switch (iScriptParam_0)
	{
		case 3:
			while (iLocal_91 == 0)
			{
				SYSTEM::WAIT(0);
				func_53();
				if (func_49(202))
				{
					HUD::RELEASE_CONTROL_OF_FRONTEND();
					iLocal_91 = 1;
				}
				if (HUD::_0x2E22FEFA0100275E())
				{
					if (iLocal_98 == 0)
					{
						if (func_48())
						{
							func_45();
						}
					}
					else
					{
						HUD::_GET_PAUSE_MENU_SELECTION_DATA(&uVar0, &iVar1, &iVar2);
						if (iVar1 == 50)
						{
							iLocal_95 = iVar2;
							func_1(&uLocal_97);
						}
					}
				}
			}
			break;
		
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
	HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1871331138);
	HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(337714004);
	HUD::_0x4895BDEA16E7C080(0);
	HUD::RELEASE_CONTROL_OF_FRONTEND();
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

int func_1(var uParam0)//Position - 0x16B
{
	int iVar0;
	int iVar1;
	
	func_44(0, iLocal_95, 0, 1);
	func_43(1);
	iVar0 = 0;
	switch (iLocal_95)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < 13)
			{
				func_37(&iVar0, func_42(iVar1), func_39(iVar1));
				iVar1++;
			}
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < 50)
			{
				func_27(&iVar0, func_28(iVar1));
				iVar1++;
			}
			break;
		
		case 2:
			func_16(&iVar0, "PM_UCON_T21", func_18(31, 0));
			func_16(&iVar0, "PM_UCON_T22", func_18(32, 0));
			func_16(&iVar0, "PM_UCON_T0", func_18(1, 0));
			func_16(&iVar0, "PM_UCON_T1", func_18(2, 0));
			func_16(&iVar0, "PM_UCON_T2", func_18(21, 0));
			func_16(&iVar0, "PM_UCON_T3", func_18(59, 0));
			func_16(&iVar0, "PM_UCON_T4", func_18(30, 0));
			func_16(&iVar0, "PM_UCON_T6", func_18(1, 0));
			func_16(&iVar0, "PM_UCON_T5", func_18(90, 0));
			func_16(&iVar0, "PM_UCON_T8", func_18(13, 0));
			func_16(&iVar0, "PM_UCON_T7", func_18(22, 0));
			func_16(&iVar0, "PM_UCON_T9", func_18(60, 0));
			func_16(&iVar0, "PM_UCON_T11", func_18(23, 0));
			func_16(&iVar0, "PM_UCON_T10", func_18(76, 0));
			func_16(&iVar0, "PM_UCON_T15", func_18(15, 0));
			func_16(&iVar0, "PM_UCON_T14", func_18(14, 0));
			func_16(&iVar0, "PM_UCON_T13", func_18(11, 0));
			func_16(&iVar0, "PM_UCON_T38", func_18(122, 0));
			func_16(&iVar0, "PM_UCON_T16", func_18(27, 0));
			func_16(&iVar0, "PM_UCON_T12", func_18(12, 0));
			func_16(&iVar0, "PM_UCON_T43", func_18(4, 0));
			func_16(&iVar0, "PM_UCON_T17", func_18(19, 0));
			func_16(&iVar0, "PM_UCON_T18", func_18(29, 0));
			func_16(&iVar0, "PM_UCON_T19", func_18(8, 0));
			func_16(&iVar0, "PM_UCON_T20", func_18(61, 0));
			func_16(&iVar0, "PM_UCON_T42", func_18(119, 0));
			func_16(&iVar0, "PM_UCON_T49", func_18(96, 0));
			func_16(&iVar0, "PM_UCON_T48", func_18(78, 0));
			func_16(&iVar0, "PM_UCON_T41", func_18(127, 0));
			func_16(&iVar0, "PM_UCON_T39", func_18(126, 0));
			func_16(&iVar0, "PM_UCON_T40", func_18(124, 0));
			func_16(&iVar0, "PM_UCON_T44", func_18(103, 0));
			func_16(&iVar0, "PM_UCON_T23", func_18(3, 0));
			func_16(&iVar0, "PM_UCON_T24", func_18(74, 0));
			func_16(&iVar0, "PM_UCON_T25", func_18(6, 0));
			func_16(&iVar0, "PM_UCON_T26", func_18(20, 0));
			func_16(&iVar0, "PM_UCON_T27", func_18(62, 0));
			func_16(&iVar0, "PM_UCON_T28", func_18(65, 0));
			func_16(&iVar0, "PM_UCON_T29", func_18(63, 0));
			func_16(&iVar0, "PM_UCON_T45", func_18(104, 0));
			func_16(&iVar0, "PM_UCON_T30", func_18(77, 0));
			func_16(&iVar0, "PM_UCON_T46", func_18(98, 0));
			func_16(&iVar0, "PM_UCON_T31", func_18(81, 0));
			func_16(&iVar0, "PM_UCON_T32", func_18(75, 0));
			func_16(&iVar0, "PM_UCON_T33", func_18(95, 0));
			func_16(&iVar0, "PM_UCON_T47", func_18(105, 0));
			func_16(&iVar0, "PM_UCON_T35", func_18(64, 0));
			func_16(&iVar0, "PM_UCON_T34", func_18(67, 0));
			func_16(&iVar0, "PM_UCON_T37", func_9(func_11(PLAYER::PLAYER_ID(), 1), 0) >= 100);
			func_16(&iVar0, "PM_UCON_T36", func_9(func_11(PLAYER::PLAYER_ID(), 1), 0) >= func_8(4, 170));
			break;
	}
	if (iVar0 > 16)
	{
		iLocal_96 = 1;
		func_7(1, 2, 1, 1, 0, 0);
		func_5(1, 0, iVar0, 0, 0);
		HUD::PAUSE_MENU_ACTIVATE_CONTEXT(-1871331138);
	}
	else
	{
		iLocal_96 = 0;
		func_5(1, -1, -1, 0, 0);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1871331138);
	}
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(337714004);
	HUD::_0x4895BDEA16E7C080(0);
	func_4(1);
	func_2(1);
	*uParam0 = 1;
	return 1;
}

void func_2(int iParam0)//Position - 0x594
{
	func_3(iParam0, 1);
}

void func_3(int iParam0, bool bParam1)//Position - 0x5A3
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SHOW_COLUMN"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam0 == 2)
	{
		if (bParam1)
		{
			MISC::CLEAR_BIT(&Global_1312759, iParam0);
		}
		else
		{
			MISC::SET_BIT(&Global_1312759, iParam0);
		}
	}
}

void func_4(int iParam0)//Position - 0x5E8
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_5(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x605
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(iParam3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		func_6("");
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_6(char* sParam0)//Position - 0x662
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x674
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_8(int iParam0, int iParam1)//Position - 0x6B7
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 134:
				return 0;
				break;
			
			case 136:
				return 1;
				break;
			
			case 137:
				return 1;
				break;
			
			case 169:
				return 1;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 133:
				return 0;
				break;
		}
	}
	else if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 135:
				return 1;
				break;
			
			case 170:
				return 100;
				break;
			}
	}
	switch (iParam1)
	{
		case 148:
			return 5;
			break;
		
		case 149:
			return 10;
			break;
		
		case 150:
			return 25;
			break;
		
		case 151:
			return 50;
			break;
		
		case 155:
			return 5;
			break;
		
		case 156:
			return 10;
			break;
		
		case 157:
			return 25;
			break;
		
		case 158:
			return 50;
			break;
		
		case 152:
			return 5;
			break;
		
		case 153:
			return 10;
			break;
		
		case 154:
			return 25;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 50;
			break;
		
		case 161:
			return 100;
			break;
		
		case 162:
			return 5;
			break;
		
		case 163:
			return 10;
			break;
		
		case 164:
			return 25;
			break;
		
		case 165:
			return 50;
			break;
	}
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 0)
	{
		switch (iParam1)
		{
			case 138:
				return 7;
			
			case 139:
				return 9;
			
			case 140:
				return 11;
			
			case 141:
				return 13;
			
			case 142:
				return 15;
			
			case 143:
				return 17;
			
			case 144:
				return 19;
			
			case 145:
				return 21;
			
			case 146:
				return 23;
			
			case 147:
				return 25;
			
			case 166:
				return 1;
			
			case 167:
				return 1;
			
			case 168:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_9(int iParam0, bool bParam1)//Position - 0x8F5
{
	if (bParam1)
	{
	}
	return func_10(iParam0, 0);
}

int func_10(int iParam0, int iParam1)//Position - 0x909
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

int func_11(int iParam0, bool bParam1)//Position - 0x9C8
{
	if (bParam1)
	{
	}
	return func_12(iParam0);
}

int func_12(int iParam0)//Position - 0x9DB
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1335605[func_14(-1)];
			}
			else if (func_13(iParam0))
			{
				return Global_1582596[iParam0 /*324*/].f_180.f_1;
			}
		}
	}
	else
	{
		return Global_1335605[func_14(-1)];
	}
	return 0;
}

int func_13(int iParam0)//Position - 0xA38
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

int func_14(int iParam0)//Position - 0xA5D
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_15();
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

int func_15()//Position - 0xA91
{
	return Global_1312737;
}

void func_16(int iParam0, char[4] cParam1, bool bParam2)//Position - 0xA9D
{
	func_17(1, *iParam0, iLocal_90, *iParam0, cParam1, bParam2, 1);
	*iParam0++;
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, int iParam5, int iParam6)//Position - 0xABF
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_6(cParam4);
		if (iParam5 == 1)
		{
			if (iParam6 == 0)
			{
				func_6("PM_UJOB_YES");
			}
			else
			{
				func_6("PM_UCON_ULK");
			}
		}
		else if (iParam6 == 0)
		{
			func_6("PM_UJOB_NO");
		}
		else
		{
			func_6("PM_UCON_LCK");
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_18(int iParam0, bool bParam1)//Position - 0xB3E
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6017 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_22(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4821 == 1)
		{
			return 1;
		}
	}
	if (func_21() || func_20())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_19())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return MISC::IS_BIT_SET(Global_1573723[iVar1], iVar0);
}

int func_19()//Position - 0xCA3
{
	var uVar0;
	
	if (Global_1312448)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2446554.f_1618, 23))
	{
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	uVar0 = Global_1335599[func_14(-1)];
	if (MISC::IS_BIT_SET(uVar0, 7))
	{
		MISC::SET_BIT(&(Global_2446554.f_1618), 23);
		return 1;
	}
	return 0;
}

bool func_20()//Position - 0xD09
{
	return Global_1315888;
}

bool func_21()//Position - 0xD15
{
	return Global_1315890;
}

bool func_22(int iParam0, int iParam1)//Position - 0xD21
{
	var uVar0;
	int iVar1;
	
	if (!func_25())
	{
		return 0;
	}
	if (func_24())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_23(iParam1);
	iVar1 = uVar0;
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_300, iVar1);
}

int func_23(int iParam0)//Position - 0xD69
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_24()//Position - 0xDC9
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 3);
}

int func_25()//Position - 0xDE3
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	return func_26(120, -1);
}

int func_26(int iParam0, int iParam1)//Position - 0xE13
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473393[iParam0 /*6*/][func_14(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_27(int iParam0, int iParam1)//Position - 0xE3F
{
	char cVar0[16];
	
	StringCopy(&cVar0, "PM_UJOB_T", 16);
	StringIntConCat(&cVar0, *iParam0, 16);
	func_17(1, *iParam0, iLocal_90, *iParam0, &cVar0, iParam1, 0);
	*iParam0++;
}

int func_28(int iParam0)//Position - 0xE70
{
	switch (iParam0)
	{
		case 0:
			return func_26(78, -1);
		
		case 1:
			return func_26(79, -1);
		
		case 2:
			return func_26(80, -1);
		
		case 3:
			return func_34(30, -1, -1);
		
		case 4:
			return func_26(81, -1);
		
		case 5:
			return func_33(1245, -1, 0) > 0;
		
		case 6:
			return func_33(1247, -1, 0) > 0;
		
		case 7:
			return func_26(83, -1);
		
		case 8:
			return func_34(11, -1, -1);
		
		case 9:
			return func_26(95, -1);
		
		case 10:
			return func_26(96, -1);
		
		case 11:
			return func_26(97, -1);
		
		case 12:
			return func_34(8, -1, -1);
		
		case 13:
			return func_34(9, -1, -1);
		
		case 14:
			return func_26(98, -1);
		
		case 15:
			return func_26(99, -1);
		
		case 16:
			return func_32(27, -1) > 0;
		
		case 17:
			return func_34(3, -1, -1);
		
		case 18:
			return func_34(2, -1, -1);
		
		case 19:
			return func_34(4, -1, -1);
		
		case 20:
			return func_26(100, -1);
		
		case 21:
			return func_34(31, -1, -1);
		
		case 22:
			return func_26(102, -1);
		
		case 23:
			return func_26(103, -1);
		
		case 24:
			return func_26(104, -1);
		
		case 25:
			return func_26(105, -1);
		
		case 26:
			return func_26(107, -1);
		
		case 27:
			return func_26(84, -1);
		
		case 28:
			return func_33(1251, -1, 0) > 0;
		
		case 29:
			return func_26(85, -1);
		
		case 30:
			return func_33(1249, -1, 0) > 0;
		
		case 31:
			return func_33(1253, -1, 0) > 0;
		
		case 32:
			return func_33(1246, -1, 0) > 0;
		
		case 33:
			return func_33(1252, -1, 0) > 0;
		
		case 34:
			return func_33(1235, -1, 0) > 0;
		
		case 35:
			return func_26(86, -1);
		
		case 36:
			if (func_31(joaat("mpply_race_2_point_wins")) > 0 || func_31(joaat("mpply_race_2_point_lost")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 37:
			return func_34(27, -1, -1);
		
		case 38:
			return func_34(26, -1, -1);
		
		case 39:
			return func_33(1244, -1, 0) > 0;
		
		case 40:
			return func_33(1155, -1, 0) > 0;
		
		case 41:
			return func_34(5, -1, -1);
		
		case 42:
			return func_34(1, -1, -1);
		
		case 43:
			return (func_33(1135, -1, 0) > 0 || func_33(1136, -1, 0) > 0);
		
		case 44:
			return func_34(10, -1, -1);
		
		case 45:
			return func_26(90, -1);
		
		case 46:
			return func_32(18, -1) > 0;
		
		case 47:
			return func_34(25, -1, -1);
		
		case 48:
			return func_30();
		
		case 49:
			return func_29();
	}
	return 0;
}

int func_29()//Position - 0x1207
{
	int iVar0;
	
	iVar0 = 0;
	if (func_32(69, -1) > 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_30()//Position - 0x1222
{
	int iVar0;
	
	iVar0 = 0;
	if (func_33(2072, -1, 0) > 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_31(int iParam0)//Position - 0x123F
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

int func_32(int iParam0, int iParam1)//Position - 0x125D
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2475233[iParam0 /*6*/][func_14(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x1289
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_14(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_34(int iParam0, int iParam1, int iParam2)//Position - 0x12BB
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar1 = func_36(iParam0, iParam1);
	uVar2 = func_35(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_35(int iParam0)//Position - 0x12F8
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
	}
	return iVar0;
}

int func_36(int iParam0, int iParam1)//Position - 0x1458
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	return iVar0;
}

void func_37(int iParam0, var uParam1, var uParam2)//Position - 0x15A3
{
	char cVar0[16];
	
	StringCopy(&cVar0, "PM_UGEN_T", 16);
	StringIntConCat(&cVar0, *iParam0, 16);
	func_38(1, *iParam0, iLocal_90, *iParam0, &cVar0, "PM_UGEN_NUM", uParam1, uParam2);
	*iParam0++;
}

void func_38(int iParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char* sParam5, int iParam6, int iParam7)//Position - 0x15D9
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_6(cParam4);
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam5);
		HUD::ADD_TEXT_COMPONENT_INTEGER(uParam6);
		HUD::ADD_TEXT_COMPONENT_INTEGER(uParam7);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_39(int iParam0)//Position - 0x1633
{
	switch (iParam0)
	{
		case 0:
			return Global_794503.f_108485[2];
		
		case 1:
			return Global_794503.f_108485[1];
		
		case 2:
			return Global_794503.f_108485[8];
		
		case 3:
			return Global_794503.f_108485[3];
		
		case 4:
			return Global_794503.f_108485[0];
		
		case 5:
			if ((((func_41() || func_40()) || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION()) || MISC::IS_DURANGO_VERSION())
			{
				return 46;
			}
			else
			{
				return 44;
			}
			break;
		
		case 6:
			if ((NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() || func_41()) || func_40())
			{
				return 278;
			}
			else
			{
				return 278;
			}
			break;
		
		case 7:
			return 205;
		
		case 8:
			return 106;
		
		case 9:
			return 30;
		
		case 10:
			return 180;
		
		case 11:
			return (89 + iLocal_99);
		
		case 12:
			return 10;
	}
	return -1;
}

int func_40()//Position - 0x176A
{
	return 1;
}

int func_41()//Position - 0x1773
{
	return 1;
}

int func_42(int iParam0)//Position - 0x177C
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return Global_794503.f_108499[2];
		
		case 1:
			return Global_794503.f_108499[1];
		
		case 2:
			return Global_794503.f_108499[8];
		
		case 3:
			return Global_794503.f_108499[3];
		
		case 4:
			return Global_794503.f_108499[0];
		
		case 5:
			return func_33(1219, -1, 0);
		
		case 6:
			return func_33(1220, -1, 0);
		
		case 7:
			return (func_33(1229, -1, 0) - 1);
		
		case 8:
			return func_33(1224, -1, 0);
		
		case 9:
			return func_33(1230, -1, 0);
		
		case 10:
			return func_33(1225, -1, 0);
		
		case 11:
			return func_33(1227, -1, 0);
		
		case 12:
			if (func_26(201, -1))
			{
				iVar0++;
			}
			if (func_26(202, -1))
			{
				iVar0++;
			}
			if (func_26(203, -1))
			{
				iVar0++;
			}
			if (func_26(204, -1))
			{
				iVar0++;
			}
			if (func_26(205, -1))
			{
				iVar0++;
			}
			if (func_26(206, -1))
			{
				iVar0++;
			}
			if (func_26(207, -1))
			{
				iVar0++;
			}
			if (func_26(208, -1))
			{
				iVar0++;
			}
			if (func_26(209, -1))
			{
				iVar0++;
			}
			if (func_26(210, -1))
			{
				iVar0++;
			}
			return iVar0;
			break;
	}
	return -1;
}

void func_43(int iParam0)//Position - 0x1924
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_44(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1941
{
	if (iParam1 == -1)
	{
		return;
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam3);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_45()//Position - 0x1979
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	HUD::_GET_PAUSE_MENU_SELECTION_DATA(&uVar0, &uVar1, &uVar2);
	func_43(0);
	iLocal_95 = 0;
	func_47(0, 0, iLocal_89, 0, 1, "PM_UL_D0", 0, 0);
	func_47(0, 1, iLocal_89, 1, 1, "PM_UL_D1", 0, 0);
	func_47(0, 2, iLocal_89, 2, 1, "PM_UL_D2", 0, 0);
	func_2(0);
	func_46(2);
	func_46(3);
	func_46(4);
	func_46(5);
	func_4(0);
	func_1(&uLocal_97);
	HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1871331138);
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(337714004);
	HUD::_0x4895BDEA16E7C080(0);
	iLocal_98 = 1;
}

void func_46(int iParam0)//Position - 0x1A02
{
	func_3(iParam0, 0);
}

void func_47(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7)//Position - 0x1A11
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		if (bParam4)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		}
		func_6(sParam5);
		if (bParam6)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_48()//Position - 0x1A7A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		Global_794503.f_108499[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1100)
	{
		if (MISC::IS_BIT_SET(Global_794503.f_4[iVar0 /*86*/].f_76, 14))
		{
			if (Global_794503.f_4[iVar0 /*86*/].f_65 < 13 && Global_794503.f_4[iVar0 /*86*/].f_70 <= 1000)
			{
				Global_794503.f_108499[Global_794503.f_4[iVar0 /*86*/].f_65]++;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_49(int iParam0)//Position - 0x1B24
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = iParam0;
	iVar1 = func_52(iVar0);
	uVar2 = func_51(iVar0);
	if ((PAD::IS_CONTROL_JUST_RELEASED(2, iParam0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iParam0)) || func_50(iParam0, &(Global_1327593.f_961), 1))
	{
		if (!MISC::IS_BIT_SET(Global_1327593.f_950[iVar1], uVar2))
		{
			MISC::SET_BIT(&(Global_1327593.f_950[iVar1]), iVar2);
			return 1;
		}
	}
	else if (MISC::IS_BIT_SET(Global_1327593.f_950[iVar1], iVar2))
	{
		MISC::CLEAR_BIT(&(Global_1327593.f_950[iVar1]), iVar2);
	}
	return 0;
}

int func_50(int iParam0, var uParam1, int iParam2)//Position - 0x1BBE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (PAD::GET_CONTROL_VALUE(2, 195) - 127);
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 196) - 127);
	iVar2 = (PAD::GET_CONTROL_VALUE(2, 197) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_51(int iParam0)//Position - 0x1D21
{
	return (iParam0 % 32);
}

int func_52(int iParam0)//Position - 0x1D2E
{
	return (iParam0 / 32);
}

void func_53()//Position - 0x1D3B
{
	int iVar0;
	
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = PAD::GET_CONTROL_VALUE(2, 221);
		if (iVar0 > 180)
		{
			if (func_55(&uLocal_92, iLocal_94, 0))
			{
				if (iLocal_96)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_INPUT_EVENT"))
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					iLocal_94 = 250;
					func_54(&uLocal_92);
				}
			}
		}
		else if (iVar0 < 80)
		{
			if (func_55(&uLocal_92, iLocal_94, 0))
			{
				if (iLocal_96)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_INPUT_EVENT"))
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					iLocal_94 = 250;
					func_54(&uLocal_92);
				}
			}
		}
		else if (iLocal_94 != -1)
		{
			iLocal_94 = -1;
		}
	}
}

void func_54(var uParam0)//Position - 0x1DF8
{
	uParam0->f_1 = 0;
}

int func_55(var uParam0, int iParam1, bool bParam2)//Position - 0x1E05
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_56(uParam0, bParam2, 0);
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

void func_56(var uParam0, bool bParam1, bool bParam2)//Position - 0x1E63
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

