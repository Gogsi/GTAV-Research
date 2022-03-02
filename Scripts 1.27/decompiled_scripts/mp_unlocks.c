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
			func_16(&iVar0, "PM_UCON_T21", GlobalFunc_8987(31, 0));
			func_16(&iVar0, "PM_UCON_T22", GlobalFunc_8987(32, 0));
			func_16(&iVar0, "PM_UCON_T0", GlobalFunc_8987(1, 0));
			func_16(&iVar0, "PM_UCON_T1", GlobalFunc_8987(2, 0));
			func_16(&iVar0, "PM_UCON_T2", GlobalFunc_8987(21, 0));
			func_16(&iVar0, "PM_UCON_T3", GlobalFunc_8987(59, 0));
			func_16(&iVar0, "PM_UCON_T4", GlobalFunc_8987(30, 0));
			func_16(&iVar0, "PM_UCON_T6", GlobalFunc_8987(1, 0));
			func_16(&iVar0, "PM_UCON_T5", GlobalFunc_8987(90, 0));
			func_16(&iVar0, "PM_UCON_T8", GlobalFunc_8987(13, 0));
			func_16(&iVar0, "PM_UCON_T7", GlobalFunc_8987(22, 0));
			func_16(&iVar0, "PM_UCON_T9", GlobalFunc_8987(60, 0));
			func_16(&iVar0, "PM_UCON_T11", GlobalFunc_8987(23, 0));
			func_16(&iVar0, "PM_UCON_T10", GlobalFunc_8987(76, 0));
			func_16(&iVar0, "PM_UCON_T15", GlobalFunc_8987(15, 0));
			func_16(&iVar0, "PM_UCON_T14", GlobalFunc_8987(14, 0));
			func_16(&iVar0, "PM_UCON_T13", GlobalFunc_8987(11, 0));
			func_16(&iVar0, "PM_UCON_T38", GlobalFunc_8987(122, 0));
			func_16(&iVar0, "PM_UCON_T16", GlobalFunc_8987(27, 0));
			func_16(&iVar0, "PM_UCON_T12", GlobalFunc_8987(12, 0));
			func_16(&iVar0, "PM_UCON_T43", GlobalFunc_8987(4, 0));
			func_16(&iVar0, "PM_UCON_T17", GlobalFunc_8987(19, 0));
			func_16(&iVar0, "PM_UCON_T18", GlobalFunc_8987(29, 0));
			func_16(&iVar0, "PM_UCON_T19", GlobalFunc_8987(8, 0));
			func_16(&iVar0, "PM_UCON_T20", GlobalFunc_8987(61, 0));
			func_16(&iVar0, "PM_UCON_T42", GlobalFunc_8987(119, 0));
			func_16(&iVar0, "PM_UCON_T49", GlobalFunc_8987(96, 0));
			func_16(&iVar0, "PM_UCON_T48", GlobalFunc_8987(78, 0));
			func_16(&iVar0, "PM_UCON_T41", GlobalFunc_8987(127, 0));
			func_16(&iVar0, "PM_UCON_T39", GlobalFunc_8987(126, 0));
			func_16(&iVar0, "PM_UCON_T40", GlobalFunc_8987(124, 0));
			func_16(&iVar0, "PM_UCON_T44", GlobalFunc_8987(103, 0));
			func_16(&iVar0, "PM_UCON_T23", GlobalFunc_8987(3, 0));
			func_16(&iVar0, "PM_UCON_T24", GlobalFunc_8987(74, 0));
			func_16(&iVar0, "PM_UCON_T25", GlobalFunc_8987(6, 0));
			func_16(&iVar0, "PM_UCON_T26", GlobalFunc_8987(20, 0));
			func_16(&iVar0, "PM_UCON_T27", GlobalFunc_8987(62, 0));
			func_16(&iVar0, "PM_UCON_T28", GlobalFunc_8987(65, 0));
			func_16(&iVar0, "PM_UCON_T29", GlobalFunc_8987(63, 0));
			func_16(&iVar0, "PM_UCON_T45", GlobalFunc_8987(104, 0));
			func_16(&iVar0, "PM_UCON_T30", GlobalFunc_8987(77, 0));
			func_16(&iVar0, "PM_UCON_T46", GlobalFunc_8987(98, 0));
			func_16(&iVar0, "PM_UCON_T31", GlobalFunc_8987(81, 0));
			func_16(&iVar0, "PM_UCON_T32", GlobalFunc_8987(75, 0));
			func_16(&iVar0, "PM_UCON_T33", GlobalFunc_8987(95, 0));
			func_16(&iVar0, "PM_UCON_T47", GlobalFunc_8987(105, 0));
			func_16(&iVar0, "PM_UCON_T35", GlobalFunc_8987(64, 0));
			func_16(&iVar0, "PM_UCON_T34", GlobalFunc_8987(67, 0));
			func_16(&iVar0, "PM_UCON_T37", GlobalFunc_5249(GlobalFunc_7788(PLAYER::PLAYER_ID(), 1), 0) >= 100);
			func_16(&iVar0, "PM_UCON_T36", GlobalFunc_5249(GlobalFunc_7788(PLAYER::PLAYER_ID(), 1), 0) >= GlobalFunc_2486(4, 170));
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
	GlobalFunc_3250(1);
	GlobalFunc_6522(1);
	*uParam0 = 1;
	return 1;
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
		GlobalFunc_726("");
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
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
		GlobalFunc_726(cParam4);
		if (iParam5 == 1)
		{
			if (iParam6 == 0)
			{
				GlobalFunc_726("PM_UJOB_YES");
			}
			else
			{
				GlobalFunc_726("PM_UCON_ULK");
			}
		}
		else if (iParam6 == 0)
		{
			GlobalFunc_726("PM_UJOB_NO");
		}
		else
		{
			GlobalFunc_726("PM_UCON_LCK");
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
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
			return GlobalFunc_6725(78, -1);
		
		case 1:
			return GlobalFunc_6725(79, -1);
		
		case 2:
			return GlobalFunc_6725(80, -1);
		
		case 3:
			return GlobalFunc_6708(30, -1, -1);
		
		case 4:
			return GlobalFunc_6725(81, -1);
		
		case 5:
			return GlobalFunc_6872(1245, -1, 0) > 0;
		
		case 6:
			return GlobalFunc_6872(1247, -1, 0) > 0;
		
		case 7:
			return GlobalFunc_6725(83, -1);
		
		case 8:
			return GlobalFunc_6708(11, -1, -1);
		
		case 9:
			return GlobalFunc_6725(95, -1);
		
		case 10:
			return GlobalFunc_6725(96, -1);
		
		case 11:
			return GlobalFunc_6725(97, -1);
		
		case 12:
			return GlobalFunc_6708(8, -1, -1);
		
		case 13:
			return GlobalFunc_6708(9, -1, -1);
		
		case 14:
			return GlobalFunc_6725(98, -1);
		
		case 15:
			return GlobalFunc_6725(99, -1);
		
		case 16:
			return GlobalFunc_6854(27, -1) > 0;
		
		case 17:
			return GlobalFunc_6708(3, -1, -1);
		
		case 18:
			return GlobalFunc_6708(2, -1, -1);
		
		case 19:
			return GlobalFunc_6708(4, -1, -1);
		
		case 20:
			return GlobalFunc_6725(100, -1);
		
		case 21:
			return GlobalFunc_6708(31, -1, -1);
		
		case 22:
			return GlobalFunc_6725(102, -1);
		
		case 23:
			return GlobalFunc_6725(103, -1);
		
		case 24:
			return GlobalFunc_6725(104, -1);
		
		case 25:
			return GlobalFunc_6725(105, -1);
		
		case 26:
			return GlobalFunc_6725(107, -1);
		
		case 27:
			return GlobalFunc_6725(84, -1);
		
		case 28:
			return GlobalFunc_6872(1251, -1, 0) > 0;
		
		case 29:
			return GlobalFunc_6725(85, -1);
		
		case 30:
			return GlobalFunc_6872(1249, -1, 0) > 0;
		
		case 31:
			return GlobalFunc_6872(1253, -1, 0) > 0;
		
		case 32:
			return GlobalFunc_6872(1246, -1, 0) > 0;
		
		case 33:
			return GlobalFunc_6872(1252, -1, 0) > 0;
		
		case 34:
			return GlobalFunc_6872(1235, -1, 0) > 0;
		
		case 35:
			return GlobalFunc_6725(86, -1);
		
		case 36:
			if (GlobalFunc_1028(joaat("mpply_race_2_point_wins")) > 0 || GlobalFunc_1028(joaat("mpply_race_2_point_lost")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 37:
			return GlobalFunc_6708(27, -1, -1);
		
		case 38:
			return GlobalFunc_6708(26, -1, -1);
		
		case 39:
			return GlobalFunc_6872(1244, -1, 0) > 0;
		
		case 40:
			return GlobalFunc_6872(1155, -1, 0) > 0;
		
		case 41:
			return GlobalFunc_6708(5, -1, -1);
		
		case 42:
			return GlobalFunc_6708(1, -1, -1);
		
		case 43:
			return (GlobalFunc_6872(1135, -1, 0) > 0 || GlobalFunc_6872(1136, -1, 0) > 0);
		
		case 44:
			return GlobalFunc_6708(10, -1, -1);
		
		case 45:
			return GlobalFunc_6725(90, -1);
		
		case 46:
			return GlobalFunc_6854(18, -1) > 0;
		
		case 47:
			return GlobalFunc_6708(25, -1, -1);
		
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
	if (GlobalFunc_6854(69, -1) > 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_30()//Position - 0x1222
{
	int iVar0;
	
	iVar0 = 0;
	if (GlobalFunc_6872(2072, -1, 0) > 0)
	{
		iVar0 = 1;
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
		GlobalFunc_726(cParam4);
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
			if ((((GlobalFunc_82() || GlobalFunc_82()) || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION()) || MISC::IS_DURANGO_VERSION())
			{
				return 46;
			}
			else
			{
				return 44;
			}
			break;
		
		case 6:
			if ((NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() || GlobalFunc_82()) || GlobalFunc_82())
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
			return GlobalFunc_6872(1219, -1, 0);
		
		case 6:
			return GlobalFunc_6872(1220, -1, 0);
		
		case 7:
			return (GlobalFunc_6872(1229, -1, 0) - 1);
		
		case 8:
			return GlobalFunc_6872(1224, -1, 0);
		
		case 9:
			return GlobalFunc_6872(1230, -1, 0);
		
		case 10:
			return GlobalFunc_6872(1225, -1, 0);
		
		case 11:
			return GlobalFunc_6872(1227, -1, 0);
		
		case 12:
			if (GlobalFunc_6725(201, -1))
			{
				iVar0++;
			}
			if (GlobalFunc_6725(202, -1))
			{
				iVar0++;
			}
			if (GlobalFunc_6725(203, -1))
			{
				iVar0++;
			}
			if (GlobalFunc_6725(204, -1))
			{
				iVar0++;
			}
			if (GlobalFunc_6725(205, -1))
			{
				iVar0++;
			}
			if (GlobalFunc_6725(206, -1))
			{
				iVar0++;
			}
			if (GlobalFunc_6725(207, -1))
			{
				iVar0++;
			}
			if (GlobalFunc_6725(208, -1))
			{
				iVar0++;
			}
			if (GlobalFunc_6725(209, -1))
			{
				iVar0++;
			}
			if (GlobalFunc_6725(210, -1))
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
	GlobalFunc_6522(0);
	func_46(2);
	func_46(3);
	func_46(4);
	func_46(5);
	GlobalFunc_3250(0);
	func_1(&uLocal_97);
	HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1871331138);
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(337714004);
	HUD::_0x4895BDEA16E7C080(0);
	iLocal_98 = 1;
}

void func_46(int iParam0)//Position - 0x1A02
{
	GlobalFunc_4610(iParam0, 0);
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
		GlobalFunc_726(sParam5);
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
	iVar1 = GlobalFunc_300(iVar0);
	uVar2 = GlobalFunc_299(iVar0);
	if ((PAD::IS_CONTROL_JUST_RELEASED(2, iParam0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iParam0)) || GlobalFunc_1382(iParam0, &(Global_1327593.f_961), 1))
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




void func_53()//Position - 0x1D3B
{
	int iVar0;
	
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = PAD::GET_CONTROL_VALUE(2, 221);
		if (iVar0 > 180)
		{
			if (GlobalFunc_5071(&uLocal_92, iLocal_94, 0))
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
					GlobalFunc_434(&uLocal_92);
				}
			}
		}
		else if (iVar0 < 80)
		{
			if (GlobalFunc_5071(&uLocal_92, iLocal_94, 0))
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
					GlobalFunc_434(&uLocal_92);
				}
			}
		}
		else if (iLocal_94 != -1)
		{
			iLocal_94 = -1;
		}
	}
}




