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
	struct<2> Local_27 = { 0, 0 } ;
	struct<2> Local_29[94];
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
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
	if (Global_2621550)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-43879923) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(-43879923);
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-43879923))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-43879923, &ScriptParam_0, 4, 1424);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (Global_2621549)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1179280373) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(1179280373);
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(1179280373))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(1179280373, &ScriptParam_0, 4, 1424);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	switch (ScriptParam_0)
	{
		case 1:
			switch (ScriptParam_0.f_1)
			{
				case 75:
					if (ScriptParam_0.f_2 == 5)
					{
						func_81(1, 0, 1);
						func_80();
					}
					else if (ScriptParam_0.f_2 == 76)
					{
						func_80();
					}
					else
					{
						func_81(1, 1, 0);
					}
					break;
				
				case 133:
					if (ScriptParam_0.f_2 == 76)
					{
						func_80();
					}
					else
					{
						func_81(7, 1, 0);
					}
					break;
				
				case 76:
					func_32(ScriptParam_0.f_3, 0);
					break;
				
				case 52:
					if (ScriptParam_0.f_2 == 52)
					{
						HUD::_0x0CF54F20DE43879C(ScriptParam_0.f_3);
					}
					break;
				
				default:
					func_31(1);
					if (ScriptParam_0.f_1 == 26 || ScriptParam_0.f_1 == 25)
					{
						func_29(0, 1);
						func_28(2, 0);
						func_80();
						Global_68494 = 0;
						func_27(-1);
					}
					else if (ScriptParam_0.f_1 == 5)
					{
						if (ScriptParam_0.f_2 == 75 || ScriptParam_0.f_2 == 133)
						{
						}
						else
						{
							func_29(0, 1);
						}
					}
					else
					{
						func_29(0, 1);
						func_28(2, 0);
						if (!ScriptParam_0.f_1 == 52)
						{
							func_28(1, 0);
						}
						Global_68494 = 0;
						func_27(-1);
					}
					break;
			}
			break;
		
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case 5:
					switch (Global_68494)
					{
						case 1:
							func_81(1, 1, 0);
							break;
						
						case 7:
							func_81(7, 1, 0);
							break;
					}
					break;
				
				case 75:
					func_2(1, 0);
					break;
				
				case 133:
					func_2(7, 0);
					break;
				
				case 76:
					if (Global_68511 != -1)
					{
						func_1(Global_68511, Global_68494);
						func_27(-1);
						HUD::SET_FRONTEND_ACTIVE(0);
						CAM::DO_SCREEN_FADE_OUT(0);
						REPLAY::_RESET_EDITOR_VALUES();
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
							{
								Global_68496 = { ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) };
							}
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
						}
					}
					break;
			}
			break;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1(int iParam0, int iParam1)//Position - 0x2E9
{
	Global_68491 = iParam0;
	Global_68491.f_1 = iParam1;
	if (iParam1 == 7)
	{
		if (iParam0 >= 0 && iParam0 < 63)
		{
			Global_96440[iParam0 /*10*/].f_3 = 1;
		}
	}
	MISC::SET_BIT(&Global_68493, 0);
}

void func_2(int iParam0, int iParam1)//Position - 0x32A
{
	if (func_8() == -1)
	{
		if (func_5(iParam0))
		{
			func_4(2);
			func_32(Global_68511, iParam1);
			func_3(1);
		}
	}
}

void func_3(int iParam0)//Position - 0x35E
{
	func_28(1, iParam0);
	func_28(2, iParam0);
}

int func_4(int iParam0)//Position - 0x374
{
	HUD::REQUEST_ADDITIONAL_TEXT("MISHSTA", 8);
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
	{
		return 0;
	}
	iParam0++;
	return 1;
}

int func_5(int iParam0)//Position - 0x399
{
	switch (iParam0)
	{
		case 1:
			return func_7();
			break;
		
		case 7:
			return func_6();
			break;
		
		default:
			break;
	}
	return 0;
}

int func_6()//Position - 0x3CC
{
	if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.iRCMissionsCompleted > 0)
	{
		return 1;
	}
	return 0;
}

int func_7()//Position - 0x3E7
{
	if (Global_2621550)
	{
		if (Global_3145728.f_929.f_21 > 0)
		{
			return 1;
		}
		return 0;
	}
	else if (Global_2621549)
	{
		if (Global_3670016.f_929.f_21 > 0)
		{
			return 1;
		}
		return 0;
	}
	else if (Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.iMissionsCompleted > 0)
	{
		return 1;
	}
	return 0;
}

int func_8()//Position - 0x43F
{
	if (GlobalFunc_756())
	{
		if (GlobalFunc_39(14))
		{
			return 5;
		}
		return 0;
	}
	if (Global_68505 == 1)
	{
		return 0;
	}
	if (Global_2621550)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1516147206) > 0)
		{
			return 0;
		}
	}
	else if (Global_2621549)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(2006115718) > 0)
		{
			return 0;
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("creator")) > 0)
	{
		return 1;
	}
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		return 0;
	}
	if (GlobalFunc_747(Global_96378, 256))
	{
		return 2;
	}
	if (GlobalFunc_2382())
	{
		return 2;
	}
	if (GlobalFunc_2381())
	{
		return 3;
	}
	if (GlobalFunc_2380())
	{
		return 3;
	}
	if (GlobalFunc_331())
	{
		return 3;
	}
	if (GlobalFunc_9169())
	{
		return 3;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || GlobalFunc_488())
	{
		return 2;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				return 3;
			}
		}
	}
	if (Global_68243)
	{
		return 2;
	}
	if (Global_67138.f_577)
	{
		return 4;
	}
	return -1;
}



















void func_27(int iParam0)//Position - 0xB99
{
	Global_68511 = iParam0;
}

void func_28(int iParam0, int iParam1)//Position - 0xBA7
{
	if (iParam1 == 1)
	{
		func_29(0, 1);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SHOW_COLUMN");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_29(int iParam0, int iParam1)//Position - 0xBD6
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SHOW_WARNING_MESSAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam0);
	iVar3 = func_8();
	if (iVar3 != -1)
	{
		iVar2 = 1;
		sVar1 = "PM_RP_HELPT";
		if (iParam1 == 1)
		{
			switch (iVar3)
			{
				case 0:
					sVar0 = "PM_RPB_SM_1";
					break;
				
				case 2:
					sVar0 = "PM_RPB_SM_2";
					break;
				
				case 3:
					sVar0 = "PM_RPB_SM_3";
					break;
				
				case 1:
					sVar0 = "PM_RPB_SM_4";
					break;
				
				case 4:
					sVar0 = "PM_RPB_SM_5";
					break;
				
				case 5:
					sVar0 = "PM_RPB_SM_6";
					break;
				
				default:
					break;
			}
		}
		else
		{
			switch (iVar3)
			{
				case 0:
					sVar0 = "PM_RPB_RC_1";
					break;
				
				case 2:
					sVar0 = "PM_RPB_RC_2";
					break;
				
				case 3:
					sVar0 = "PM_RPB_RC_3";
					break;
				
				case 1:
					sVar0 = "PM_RPB_RC_4";
					break;
				
				case 4:
					sVar0 = "PM_RPB_RC_5";
					break;
				
				case 5:
					sVar0 = "PM_RPB_RC_6";
					break;
				
				default:
					break;
				}
		}
	}
	else if (func_5(iParam1))
	{
		iVar2 = 1;
		if (iParam1 == 1)
		{
			sVar1 = "PM_RP_HELPT";
			sVar0 = "PM_RP_HELP";
		}
		else
		{
			sVar1 = "PM_RP_HELPT3";
			sVar0 = "PM_RP_HELP3";
		}
	}
	else
	{
		iVar2 = 1;
		if (iParam1 == 1)
		{
			sVar1 = "PM_RP_HELPT1";
			sVar0 = "PM_RP_HELP1";
		}
		else
		{
			sVar1 = "PM_RP_HELPT3";
			sVar0 = "PM_RP_HELP4";
		}
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((3 - iVar2));
	GlobalFunc_726(sVar0);
	GlobalFunc_726(sVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GlobalFunc_726("");
	GlobalFunc_726("");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_31(int iParam0)//Position - 0xD69
{
	if (iParam0 == 1)
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(337714004);
	}
	else
	{
		HUD::PAUSE_MENU_ACTIVATE_CONTEXT(337714004);
	}
	HUD::_0x4895BDEA16E7C080(0);
}

void func_32(int iParam0, int iParam1)//Position - 0xD91
{
	if (func_8() == -1)
	{
		if (func_5(Global_68494))
		{
			func_27(iParam0);
			func_46(iParam0);
			if (Global_68495 > 16)
			{
				if (iParam1 == 0)
				{
					func_35();
				}
				func_33(func_34(iParam0), Global_68495);
			}
		}
	}
}

void func_33(int iParam0, int iParam1)//Position - 0xDDF
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_34(int iParam0)//Position - 0xE0A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (94 - 1))
	{
		if (Local_29[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_35()//Position - 0xE38
{
	switch (Global_68494)
	{
		case 1:
			Global_68495 = GlobalFunc_8514(&Local_29, 1, 0, 1);
			break;
		
		case 7:
			Global_68495 = GlobalFunc_8514(&Local_29, 0, 1, 1);
			break;
		
		default:
			break;
	}
}











void func_46(int iParam0)//Position - 0x1530
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	Local_27 = { func_77(iParam0, Global_68494) };
	if (!func_4(2))
	{
		return;
	}
	func_76(2);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GlobalFunc_726("MISSTA");
	GlobalFunc_726(&Local_27);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar1 = -333;
	iVar2 = -333;
	iVar3 = 0;
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 < func_74(iParam0, Global_68494))
	{
		iVar5 = func_72(iParam0, Global_68494, iVar0);
		iVar6 = 1;
		switch (iVar5)
		{
			case 42:
			case 55:
			case 85:
			case 70:
			case 101:
				iVar6 = 0;
				iVar2 = func_71(iVar5);
				if (iVar2 >= 2147483647)
				{
					iVar2 = 1;
				}
				break;
			
			case 84:
			case 100:
			case 69:
			case 41:
			case 54:
				iVar6 = 0;
				iVar1 = func_71(iVar5);
				if (iVar1 >= 2147483647)
				{
					iVar1 = 50;
				}
				break;
		}
		if (!Global_54975[iVar5 /*13*/].f_7 && iVar6)
		{
			if (func_53(iVar5, iVar3, 0))
			{
				iVar4++;
			}
			iVar3++;
		}
		iVar0++;
	}
	func_52(iParam0, &iVar2);
	func_48(iVar4, iVar3, 0, iVar1, iVar2);
	GlobalFunc_3250(2);
}


float func_48(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x1691
{
	float fVar0;
	int iVar1;
	
	fVar0 = GlobalFunc_232(iParam0, iParam1, 0);
	iVar1 = GlobalFunc_231(fVar0);
	if (bParam2)
	{
		fVar0 = 50f;
		iVar1 = 1;
	}
	if (iParam4 > -1)
	{
		iVar1 = iParam4;
	}
	if (iParam3 > -1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iParam3);
	}
	if (iVar1 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
		GlobalFunc_726("MTPHPER");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_49(iVar1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
		switch (func_49(iVar1))
		{
			case 109:
				GlobalFunc_726("MTPHPER_G");
				break;
			
			case 108:
				GlobalFunc_726("MTPHPER_S");
				break;
			
			case 107:
				GlobalFunc_726("MTPHPER_B");
				break;
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	return fVar0;
}

int func_49(int iParam0)//Position - 0x1763
{
	int iVar0;
	
	iVar0 = 107;
	switch (iParam0)
	{
		case 3:
			iVar0 = 109;
			break;
		
		case 2:
			iVar0 = 108;
			break;
		
		case 1:
			iVar0 = 107;
			break;
	}
	return iVar0;
}



void func_52(int iParam0, int iParam1)//Position - 0x1833
{
	int iVar0;
	
	if (Global_68494 == 7)
	{
		iVar0 = iParam0;
		switch (iVar0)
		{
			case 52:
				*iParam1 = Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[0 /*2*/];
				if (*iParam1 == 0)
				{
					*iParam1 = 1;
				}
				break;
			
			case 53:
				*iParam1 = Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[1 /*2*/];
				if (*iParam1 == 0)
				{
					*iParam1 = 1;
				}
				break;
			
			case 54:
				*iParam1 = Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[2 /*2*/];
				if (*iParam1 == 0)
				{
					*iParam1 = 1;
				}
				break;
			
			case 55:
				*iParam1 = Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[3 /*2*/];
				if (*iParam1 == 0)
				{
					*iParam1 = 1;
				}
				break;
			
			case 56:
				*iParam1 = Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[4 /*2*/];
				if (*iParam1 == 0)
				{
					*iParam1 = 1;
				}
				break;
			}
	}
}

int func_53(int iParam0, int iParam1, int iParam2)//Position - 0x18F3
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	char* sVar15;
	
	if (iParam2 != 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam2))
		{
			return 0;
		}
	}
	if (Global_54975[iParam0 /*13*/].f_7)
	{
		return 1;
	}
	Var0 = { Global_54975[iParam0 /*13*/] };
	iVar13 = func_63(iParam0);
	switch (iParam0)
	{
		case 38:
		case 40:
		case 41:
		case 42:
		case 52:
		case 54:
		case 55:
		case 56:
		case 66:
		case 68:
		case 69:
		case 70:
		case 81:
		case 83:
		case 84:
		case 85:
		case 97:
		case 99:
		case 100:
		case 101:
			iVar13 = -1;
			break;
	}
	iVar14 = func_71(iParam0);
	sVar15 = func_62(iParam0);
	if (iVar14 == -1)
	{
		func_61(iVar14, iParam1, 0, sVar15, iParam0, iParam2);
		iVar13 = 0;
	}
	else
	{
		switch (Var0)
		{
			case 1:
				func_60(iVar14, iParam1, iVar13, "MTTIME", iParam0, iParam2);
				break;
			
			case 2:
				func_60(iVar14, iParam1, iVar13, sVar15, iParam0, iParam2);
				break;
			
			case 3:
				func_59(iParam1, iVar13, sVar15, iParam0, iParam2);
				break;
			
			case 17:
			case 4:
				func_60(iVar14, iParam1, iVar13, sVar15, iParam0, iParam2);
				break;
			
			case 5:
				func_58(iVar14, Var0.f_2, iParam1, iVar13, sVar15, iParam0, iParam2);
				break;
			
			case 6:
				func_59(iParam1, iVar13, sVar15, iParam0, iParam2);
				break;
			
			case 7:
				func_57(iVar14, Var0.f_2, iParam1, iVar13, sVar15, iParam0, iParam2);
				break;
			
			case 8:
				func_57(iVar14, Var0.f_2, iParam1, iVar13, sVar15, iParam0, iParam2);
				break;
			
			case 9:
				func_58(iVar14, 100, iParam1, iVar13, sVar15, iParam0, iParam2);
				break;
			
			case 16:
			case 10:
			case 14:
			case 15:
				func_56(iVar14, iParam1, iVar13, sVar15, iParam0, iParam2);
				break;
			
			case 11:
				func_58(iVar14, 100, iParam1, iVar13, sVar15, iParam0, iParam2);
				break;
			
			case 12:
			case 13:
				func_54(iVar14, iParam1, iVar13, sVar15, iParam0, iParam2);
				break;
			
			case 0:
				break;
			}
	}
	if (iVar13 == 0)
	{
		return 0;
	}
	return 1;
}

void func_54(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1B59
{
	if (iParam5 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam5, "SET_DATA_SLOT");
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	if (iParam5 == 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_RP_STATD");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam4));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GlobalFunc_726(sParam3);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_55(int iParam0)//Position - 0x1BC9
{
	switch (iParam0)
	{
		case 0:
			return "MISHSTD0";
		
		case 9:
			return "MISHSTD1";
		
		case 10:
			return "MISHSTD2";
		
		case 21:
			return "MISHSTD3";
		
		case 22:
			return "MISHSTD4";
		
		case 338:
			return "MISHSTD5";
		
		case 339:
			return "MISHSTD6";
		
		case 196:
			return "MISHSTD7";
		
		case 197:
			return "MISHSTD8";
		
		case 205:
			return "MISHSTD9";
		
		case 206:
			return "MISHSTD10";
		
		case 207:
			return "MISHSTD11";
		
		case 218:
			return "MISHSTD12";
		
		case 217:
			return "MISHSTD13";
		
		case 384:
			return "MISHSTD14";
		
		case 385:
			return "MISHSTD15";
		
		case 372:
			return "MISHSTD16";
		
		case 373:
			return "MISHSTD17";
		
		case 375:
			return "MISHSTD18";
		
		case 374:
			return "MISHSTD19";
		
		default:
	}
	switch (iParam0)
	{
		case 486:
			return "MISHSTD20";
		
		case 487:
			return "MISHSTD21";
		
		case 488:
			return "MISHSTD22";
		
		case 489:
			return "MISHSTD23";
		
		case 490:
			return "MISHSTD24";
		
		case 499:
			return "MISHSTD25";
		
		case 500:
			return "MISHSTD26";
		
		case 501:
			return "MISHSTD27";
		
		case 502:
			return "MISHSTD28";
		
		case 515:
			return "MISHSTD25";
		
		case 516:
			return "MISHSTD30";
		
		case 517:
			return "MISHSTD19";
		
		case 518:
			return "MISHSTD32";
		
		case 137:
			return "MISHSTD19";
		
		case 136:
			return "MISHSTD34";
		
		case 148:
			return "MISHSTD17";
		
		case 149:
			return "MISHSTD19";
		
		case 150:
			return "MISHSTD37";
		
		case 229:
			return "MISHSTD38";
		
		default:
	}
	switch (iParam0)
	{
		case 230:
			return "MISHSTD39";
		
		case 273:
			return "MISHSTD40";
		
		case 274:
			return "MISHSTD41";
		
		case 275:
			return "MISHSTD42";
		
		case 276:
			return "MISHSTD43";
		
		case 277:
			return "MISHSTD19";
		
		case 283:
			return "MISHSTD45";
		
		case 284:
			return "MISHSTD16";
		
		case 285:
			return "MISHSTD17";
		
		case 346:
			return "MISHSTD48";
		
		case 239:
			return "MISHSTD49";
		
		case 240:
			return "MISHSTD50";
		
		case 241:
			return "MISHSTD51";
		
		case 242:
			return "MISHSTD52";
		
		case 294:
			return "MISHSTD53";
		
		case 295:
			return "MISHSTD54";
		
		case 296:
			return "MISHSTD55";
		
		case 297:
			return "MISHSTD56";
		
		case 298:
			return "MISHSTD57";
		
		default:
	}
	switch (iParam0)
	{
		case 308:
			return "MISHSTD58";
		
		case 102:
			return "MISHSTD59";
		
		case 115:
			return "MISHSTD60";
		
		case 114:
			return "MISHSTD22";
		
		case 111:
			return "MISHSTD62";
		
		case 112:
			return "MISHSTD63";
		
		case 113:
			return "MISHSTD64";
		
		case 396:
			return "MISHSTD65";
		
		case 393:
			return "MISHSTD66";
		
		case 394:
			return "MISHSTD67";
		
		case 395:
			return "MISHSTD68";
		
		case 120:
			return "MISHSTD69";
		
		case 121:
			return "MISHSTD70";
		
		case 122:
			return "MISHSTD71";
		
		case 123:
			return "MISHSTD72";
		
		case 124:
			return "MISHSTD73";
		
		case 161:
			return "MISHSTD74";
		
		case 172:
			return "MISHSTD40";
		
		case 173:
			return "MISHSTD76";
		
		default:
	}
	switch (iParam0)
	{
		case 174:
			return "MISHSTD77";
		
		case 175:
			return "MISHSTD78";
		
		case 185:
			return "MISHSTD79";
		
		case 186:
			return "MISHSTD66";
		
		case 187:
			return "MISHSTD81";
		
		case 326:
			return "MISHSTD82";
		
		case 129:
			return "MISHSTD22";
		
		case 130:
			return "MISHSTD84";
		
		case 466:
			return "MISHSTD85";
		
		case 400:
			return "MISHSTD86";
		
		case 401:
			return "MISHSTD87";
		
		case 413:
			return "MISHSTD88";
		
		case 414:
			return "MISHSTD40";
		
		case 415:
			return "MISHSTD17";
		
		case 416:
			return "MISHSTD91";
		
		case 417:
			return "MISHSTD92";
		
		case 249:
			return "MISHSTD18";
		
		case 474:
			return "MISHSTD12";
		
		case 257:
			return "MISHSTD95";
		
		default:
	}
	switch (iParam0)
	{
		case 527:
			return "MISHSTD96";
		
		case 528:
			return "MISHSTD97";
		
		case 529:
			return "MISHSTD76";
		
		case 534:
			return "MISHSTD99";
		
		case 709:
			return "MISHSTD100";
		
		case 576:
			return "MISHSTD101";
		
		case 577:
			return "MISHSTD102";
		
		case 578:
			return "MISHSTD103";
		
		case 579:
			return "MISHSTD104";
		
		case 742:
			return "MISHSTD105";
		
		case 741:
			return "MISHSTD19";
		
		case 743:
			return "MISHSTD107";
		
		case 745:
			return "MISHSTD108";
		
		case 748:
			return "MISHSTD109";
		
		case 747:
			return "MISHSTD110";
		
		case 749:
			return "MISHSTD111";
		
		case 750:
			return "MISHSTD112";
		
		case 751:
			return "MISHSTD113";
		
		case 754:
			return "MISHSTD114";
		
		default:
	}
	switch (iParam0)
	{
		case 753:
			return "MISHSTD115";
		
		case 757:
			return "MISHSTD116";
		
		case 756:
			return "MISHSTD117";
		
		case 755:
			return "MISHSTD118";
		
		case 759:
			return "MISHSTD119";
		
		case 758:
			return "MISHSTD120";
		
		case 761:
			return "MISHSTD121";
		
		case 760:
			return "MISHSTD122";
		
		case 762:
			return "MISHSTD123";
		
		case 763:
			return "MISHSTD124";
		
		case 766:
			return "MISHSTD124";
		
		case 769:
			return "MISHSTD126";
		
		case 768:
			return "MISHSTD127";
		
		case 767:
			return "MISHSTD128";
		
		case 771:
			return "MISHSTD129";
		
		case 770:
			return "MISHSTD130";
		
		case 773:
			return "MISHSTD131";
		
		case 772:
			return "MISHSTD132";
		
		case 775:
			return "MISHSTD133";
		
		default:
	}
	switch (iParam0)
	{
		case 774:
			return "MISHSTD134";
		
		case 777:
			return "MISHSTD135";
		
		case 776:
			return "MISHSTD136";
		
		case 779:
			return "MISHSTD137";
		
		case 778:
			return "MISHSTD138";
		
		case 782:
			return "MISHSTD139";
		
		case 780:
			return "MISHSTD140";
		
		case 781:
			return "MISHSTD141";
		
		case 784:
			return "MISHSTD142";
		
		case 783:
			return "MISHSTD143";
		
		case 786:
			return "MISHSTD144";
		
		case 785:
			return "MISHSTD145";
		
		case 788:
			return "MISHSTD146";
		
		case 787:
			return "MISHSTD147";
		
		case 789:
			return "MISHSTD148";
		
		case 792:
			return "MISHSTD149";
		
		case 791:
			return "MISHSTD150";
		
		case 790:
			return "MISHSTD151";
		
		case 793:
			return "MISHSTD152";
		
		default:
	}
	switch (iParam0)
	{
		case 794:
			return "MISHSTD153";
		
		case 795:
			return "MISHSTD154";
		
		case 796:
			return "MISHSTD155";
		
		case 797:
			return "MISHSTD156";
		
		case 798:
			return "MISHSTD157";
		
		case 799:
			return "MISHSTD158";
		
		case 800:
			return "MISHSTD159";
		
		case 801:
			return "MISHSTD160";
		
		case 802:
			return "MISHSTD161";
		
		case 803:
			return "MISHSTD162";
		
		case 804:
			return "MISHSTD163";
		
		case 805:
			return "MISHSTD164";
		
		case 806:
			return "MISHSTD165";
		
		case 807:
			return "MISHSTD166";
		
		case 808:
			return "MISHSTD167";
		
		case 809:
			return "MISHSTD168";
		
		case 429:
			return "MISHSTD48";
		
		case 441:
			return "MISHSTD1";
		
		case 4:
			return "MISHSTD171";
		
		default:
	}
	switch (iParam0)
	{
		case 13:
			return "MISHSTD172";
		
		case 341:
			return "MISHSTD173";
		
		case 5:
			return "MISHSTD174";
		
		case 6:
			return "MISHSTD175";
		
		case 20:
			return "MISHSTD40";
		
		case 169:
			return "MISHSTD177";
		
		case 731:
			return "MISHSTD178";
		
		case 737:
			return "MISHSTD179";
		
		case 145:
			return "MISHSTD180";
		
		case 159:
			return "MISHSTD74";
		
		case 353:
			return "MISHSTD40";
		
		case 357:
			return "MISHSTD21";
		
		case 605:
			return "MISHSTD21";
		
		case 606:
			return "MISHSTD74";
		
		case 613:
			return "MISHSTD186";
		
		case 616:
			return "MISHSTD187";
		
		case 628:
			return "MISHSTD188";
		
		case 309:
			return "MISHSTD21";
		
		case 310:
			return "MISHSTD16";
		
		default:
	}
	switch (iParam0)
	{
		case 313:
			return "MISHSTD191";
		
		case 477:
			return "MISHSTD192";
		
		case 482:
			return "MISHSTD193";
		
		case 484:
			return "MISHSTD194";
		
		case 715:
			return "MISHSTD195";
		
		case 570:
			return "MISHSTD40";
		
		case 566:
			return "MISHSTD87";
		
		case 565:
			return "MISHSTD198";
		
		case 572:
			return "MISHSTD199";
		
		case 574:
			return "MISHSTD200";
		
		case 431:
			return "MISHSTD201";
		
		case 443:
			return "MISHSTD202";
		
		case 446:
			return "MISHSTD21";
		
		case 452:
			return "MISHSTD204";
		
		case 364:
			return "MISHSTD201";
		
		case 365:
			return "MISHSTD40";
		
		case 369:
			return "MISHSTD207";
		
		case 668:
			return "MISHSTD87";
		
		case 670:
			return "MISHSTD209";
		
		default:
	}
	switch (iParam0)
	{
		case 678:
			return "MISHSTD87";
		
		case 265:
			return "MISHSTD87";
		
		case 266:
			return "MISHSTD40";
		
		case 270:
			return "MISHSTD213";
		
		case 271:
			return "MISHSTD214";
		
		case 272:
			return "MISHSTD215";
		
		case 765:
			return "MISHSTD216";
		
		case 764:
			return "MISHSTD217";
		
		case 330:
			return "MISHSTD218";
		
		case 331:
			return "MISHSTD40";
		
		case 643:
			return "MISHSTD220";
		
		case 644:
			return "MISHSTD221";
		
		case 645:
			return "MISHSTD222";
		
		case 646:
			return "MISHSTD223";
		
		case 404:
			return "MISHSTD74";
		
		case 721:
			return "MISHSTD25";
		
		case 752:
			return "MISHSTD226";
		
		case 147:
			return "MISHSTD227";
		
		case 336:
			return "MISHSTD228";
		
		default:
	}
	switch (iParam0)
	{
		case 371:
			return "MISHSTD228";
		
		case 557:
			return "MISHSTD230";
		
		case 575:
			return "MISHSTD231";
		
		case 629:
			return "MISHSTD232";
		
		case 647:
			return "MISHSTD86";
		
		case 685:
			return "MISHSTD234";
		
		case 693:
			return "MISHSTD235";
		
		case 738:
			return "MISHSTD234";
		
		case 650:
			return "MISHSTD237";
		
		case 649:
			return "MISHSTD238";
		
		case 825:
			return "MISHSTD239";
		
		case 824:
			return "MISHSTD240";
		
		case 821:
			return "MISHSTD241";
		
		case 820:
			return "MISHSTD242";
		
		case 319:
			return "MISHSTD243";
		
		case 318:
			return "MISHSTD244";
		
		case 317:
			return "MISHSTD3";
		
		case 322:
			return "MISHSTD85";
		
		case 323:
			return "MISHSTD247";
		
		default:
	}
	switch (iParam0)
	{
		case 324:
			return "MISHSTD248";
		
		case 816:
			return "MISHSTD249";
		
		case 815:
			return "MISHSTD250";
		
		case 814:
			return "MISHSTD251";
		
		case 746:
			return "MISHSTD252";
		
		case 514:
			return "MISHSTD253";
		
		case 744:
			return "MISHSTD254";
		
		case 841:
			return "MISHSTD255";
		
		case 840:
			return "MISHSTD3";
		
		case 838:
			return "MISHSTD255";
		
		case 828:
			return "MISHSTD3";
		
		case 829:
			return "MISHSTD255";
		
		case 831:
			return "MISHSTD12";
		
		case 832:
			return "MISHSTD255";
		
		case 834:
			return "MISHSTD48";
		
		case 835:
			return "MISHSTD255";
		
		case 837:
			return "MISHSTD264";
		
		case 739:
			return "MISHSTD265";
		
		case 619:
			return "MISHSTD266";
		
		default:
	}
	switch (iParam0)
	{
		case 560:
			return "MISHSTD267";
		
		case 559:
			return "MISHSTD268";
		
		case 558:
			return "MISHSTD269";
		
		case 673:
			return "MISHSTD16";
		
		case 688:
			return "MISHSTD16";
		
		case 687:
			return "MISHSTD272";
		
		case 844:
			return "MISHSTD273";
		
		case 845:
			return "MISHSTD274";
		
		case 843:
			return "MISHSTD275";
		
		case 236:
			return "MISHSTD276";
		
		case 29:
			return "MISHSTD277";
		
		case 109:
			return "MISHSTD278";
		
		case 108:
			return "MISHSTD279";
		
		case 135:
			return "MISHSTD280";
		
		case 227:
			return "MISHSTD281";
		
		case 852:
			return "MISHSTD282";
		
		case 846:
			return "MISHSTD283";
		
		case 440:
			return "MISHSTD284";
		
		case 864:
			return "MISHSTD285";
		
		default:
	}
	switch (iParam0)
	{
		case 863:
			return "MISHSTD286";
		
		case 861:
			return "MISHSTD287";
		
		case 862:
			return "MISHSTD288";
		
		case 870:
			return "MISHSTD289";
		
		case 544:
			return "MISHSTD290";
		
		case 543:
			return "MISHSTD291";
		
		case 593:
			return "MISHSTD292";
		
		case 592:
			return "MISHSTD14";
		
		case 603:
			return "MISHSTD12";
		
		case 899:
			return "MISHSTD295";
		
		case 900:
			return "MISHSTD296";
		
		case 883:
			return "MISHSTD297";
		
		case 891:
			return "MISHSTD297";
		
		case 657:
			return "MISHSTD299";
		
		case 875:
			return "MISHSTD297";
		
		case 906:
			return "MISHSTD193";
		
		case 706:
			return "MISHSTD302";
		
		case 699:
			return "MISHSTD303";
		
		case 726:
			return "MISHSTD304";
		
		default:
	}
	switch (iParam0)
	{
		case 237:
			return "MISHSTD305";
		
		case 658:
			return "MISHSTD3";
		
		case 877:
			return "MISHSTD307";
		
		case 885:
			return "MISHSTD307";
		
		case 893:
			return "MISHSTD307";
		
		case 694:
			return "MISHSTD310";
		
		case 881:
			return "MISHSTD311";
		
		case 889:
			return "MISHSTD312";
		
		case 897:
			return "MISHSTD311";
		
		case 633:
			return "MISHSTD314";
		
		case 632:
			return "MISHSTD315";
		
		case 38:
			return "MISHSTD316";
		
		case 41:
			return "MISHSTD317";
		
		case 39:
			return "MISHSTD318";
		
		case 40:
			return "MISHSTD319";
		
		case 42:
			return "MISHSTD320";
		
		case 56:
			return "MISHSTD319";
		
		case 52:
			return "MISHSTD316";
		
		case 53:
			return "MISHSTD323";
		
		default:
	}
	switch (iParam0)
	{
		case 54:
			return "MISHSTD317";
		
		case 55:
			return "MISHSTD320";
		
		case 70:
			return "MISHSTD320";
		
		case 69:
			return "MISHSTD317";
		
		case 67:
			return "MISHSTD328";
		
		case 68:
			return "MISHSTD319";
		
		case 66:
			return "MISHSTD316";
		
		case 81:
			return "MISHSTD316";
		
		case 82:
			return "MISHSTD332";
		
		case 84:
			return "MISHSTD317";
		
		case 83:
			return "MISHSTD319";
		
		case 85:
			return "MISHSTD320";
		
		case 97:
			return "MISHSTD316";
		
		case 98:
			return "MISHSTD337";
		
		case 100:
			return "MISHSTD317";
		
		case 99:
			return "MISHSTD319";
		
		case 101:
			return "MISHSTD320";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

void func_56(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2DA4
{
	if (iParam5 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam5, "SET_DATA_SLOT");
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	if (iParam5 == 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_RP_STATD");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam4));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GlobalFunc_726(sParam3);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x2E14
{
	int iVar0;
	
	if (iParam6 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam6, "SET_DATA_SLOT");
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	}
	iVar0 = iParam0;
	if (iVar0 > iParam1)
	{
		iVar0 = iParam1;
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	if (iParam6 == 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_RP_STATD");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam5));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GlobalFunc_726(sParam4);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x2E99
{
	float fVar0;
	
	fVar0 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
	if (iParam6 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam6, "SET_DATA_SLOT");
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::CEIL(fVar0));
	if (iParam6 == 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_RP_STATD");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam5));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GlobalFunc_726(sParam4);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_59(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x2F22
{
	if (iParam4 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam4, "SET_DATA_SLOT");
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	if (iParam4 == 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_RP_STATD");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam3));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GlobalFunc_726(sParam2);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_60(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2F87
{
	int iVar0;
	int iVar1;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 60000f));
	iVar1 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 1000f)) - iVar0 * 60);
	if (iParam5 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam5, "SET_DATA_SLOT");
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	if (iParam5 == 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_RP_STATD");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam4));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GlobalFunc_726(sParam3);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_61(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3026
{
	if (iParam5 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam5, "SET_DATA_SLOT");
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	if (iParam5 == 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PM_RP_STATD");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_55(iParam4));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GlobalFunc_726(sParam3);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_62(int iParam0)//Position - 0x3096
{
	switch (iParam0)
	{
		case 0:
			return "MISHSTA_0";
		
		case 9:
			return "MISHSTA_1";
		
		case 10:
			return "MISHSTA_2";
		
		case 21:
			return "MISHSTA_1";
		
		case 22:
			return "MISHSTA_3";
		
		case 338:
			return "MISHSTA_0";
		
		case 339:
			return "MISHSTA_4";
		
		case 196:
			return "MISHSTA_5";
		
		case 197:
			return "MISHSTA_0";
		
		case 205:
			return "MISHSTA_6";
		
		case 206:
			return "MISHSTA_7";
		
		case 207:
			return "MISHSTA_8";
		
		case 218:
			return "MISHSTA_1";
		
		case 217:
			return "MISHSTA_0";
		
		case 384:
			return "MISHSTA_1";
		
		case 385:
			return "MISHSTA_9";
		
		case 372:
			return "MISHSTA_10";
		
		case 373:
			return "MISHSTA_11";
		
		case 375:
			return "MISHSTA_1";
		
		case 374:
			return "MISHSTA_12";
		
		case 486:
			return "MISHSTA_13";
		
		case 487:
			return "MISHSTA_11";
		
		case 488:
			return "MISHSTA_1";
		
		case 489:
			return "MISHSTA_14";
		
		case 490:
			return "MISHSTA_15";
		
		case 499:
			return "MISHSTA_11";
		
		case 500:
			return "MISHSTA_1";
		
		case 501:
			return "MISHSTA_16";
		
		case 502:
			return "MISHSTA_17";
		
		case 515:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 516:
			return "MISHSTA_18";
		
		case 517:
			return "MISHSTA_12";
		
		case 518:
			return "MISHSTA_19";
		
		case 137:
			return "MISHSTA_12";
		
		case 136:
			return "MISHSTA_20";
		
		case 148:
			return "MISHSTA_11";
		
		case 149:
			return "MISHSTA_12";
		
		case 150:
			return "MISHSTA_21";
		
		case 229:
			return "MISHSTA_6";
		
		case 230:
			return "MISHSTA_22";
		
		case 273:
			return "MISHSTA_10";
		
		case 274:
			return "MISHSTA_11";
		
		case 275:
			return "MISHSTA_1";
		
		case 276:
			return "MISHSTA_23";
		
		case 277:
			return "MISHSTA_12";
		
		case 283:
			return "MISHSTA_1";
		
		case 284:
			return "MISHSTA_10";
		
		case 285:
			return "MISHSTA_11";
		
		case 346:
			return "MISHSTA_1";
		
		case 239:
			return "MISHSTA_1";
		
		case 240:
			return "MISHSTA_24";
		
		case 241:
			return "MISHSTA_25";
		
		case 242:
			return "MISHSTA_26";
		
		case 294:
			return "MISHSTA_27";
		
		case 295:
			return "MISHSTA_28";
		
		case 296:
			return "MISHSTA_29";
		
		case 297:
			return "MISHSTA_30";
		
		case 298:
			return "MISHSTA_31";
		
		case 308:
			return "MISHSTA_32";
		
		case 102:
			return "MISHSTA_0";
		
		case 115:
			return "MISHSTA_33";
		
		default:
	}
	switch (iParam0)
	{
		case 114:
			return "MISHSTA_1";
		
		case 111:
			return "MISHSTA_34";
		
		case 112:
			return "MISHSTA_35";
		
		case 113:
			return "MISHSTA_36";
		
		case 396:
			return "MISHSTA_1";
		
		case 393:
			return "MISHSTA_37";
		
		case 394:
			return "MISHSTA_38";
		
		case 395:
			return "MISHSTA_39";
		
		case 120:
			return "MISHSTA_0";
		
		case 121:
			return "MISHSTA_6";
		
		case 122:
			return "MISHSTA_40";
		
		case 123:
			return "MISHSTA_41";
		
		case 124:
			return "MISHSTA_42";
		
		case 161:
			return "MISHSTA_43";
		
		case 172:
			return "MISHSTA_43";
		
		case 173:
			return "MISHSTA_1";
		
		case 174:
			return "MISHSTA_11";
		
		case 175:
			return "MISHSTA_44";
		
		case 185:
			return "MISHSTA_1";
		
		case 186:
			return "MISHSTA_6";
		
		case 187:
			return "MISHSTA_45";
		
		case 326:
			return "MISHSTA_46";
		
		case 129:
			return "MISHSTA_1";
		
		case 130:
			return "MISHSTA_0";
		
		case 466:
			return "MISHSTA_1";
		
		case 400:
			return "MISHSTA_1";
		
		case 401:
			return "MISHSTA_47";
		
		case 413:
			return "MISHSTA_48";
		
		case 414:
			return "MISHSTA_10";
		
		case 415:
			return "MISHSTA_11";
		
		case 416:
			return "MISHSTA_49";
		
		default:
	}
	switch (iParam0)
	{
		case 417:
			return "MISHSTA_50";
		
		case 249:
			return "MISHSTA_1";
		
		case 474:
			return "MISHSTA_1";
		
		case 257:
			return "MISHSTA_1";
		
		case 527:
			return "MISHSTA_51";
		
		case 528:
			return "MISHSTA_52";
		
		case 529:
			return "MISHSTA_53";
		
		case 534:
			return "MISHSTA_54";
		
		case 709:
			return "MISHSTA_55";
		
		case 576:
			return "MISHSTA_1";
		
		case 577:
			return "MISHSTA_56";
		
		case 578:
			return "MISHSTA_57";
		
		case 579:
			return "MISHSTA_58";
		
		case 742:
			return "MISHSTA_59";
		
		case 741:
			return "MISHSTA_60";
		
		case 743:
			return "MISHSTA_61";
		
		case 745:
			return "MISHSTA_62";
		
		case 748:
			return "MISHSTA_62";
		
		case 747:
			return "MISHSTA_63";
		
		case 749:
			return "MISHSTA_64";
		
		case 750:
			return "MISHSTA_65";
		
		case 751:
			return "MISHSTA_66";
		
		case 754:
			return "MISHSTA_67";
		
		case 753:
			return "MISHSTA_68";
		
		case 757:
			return "MISHSTA_69";
		
		case 756:
			return "MISHSTA_70";
		
		case 755:
			return "MISHSTA_71";
		
		case 759:
			return "MISHSTA_72";
		
		case 758:
			return "MISHSTA_73";
		
		case 761:
			return "MISHSTA_74";
		
		case 760:
			return "MISHSTA_75";
		
		default:
	}
	switch (iParam0)
	{
		case 762:
			return "MISHSTA_76";
		
		case 763:
			return "MISHSTA_77";
		
		case 766:
			return "MISHSTA_78";
		
		case 769:
			return "MISHSTA_79";
		
		case 768:
			return "MISHSTA_80";
		
		case 767:
			return "MISHSTA_81";
		
		case 771:
			return "MISHSTA_82";
		
		case 770:
			return "MISHSTA_83";
		
		case 773:
			return "MISHSTA_84";
		
		case 772:
			return "MISHSTA_85";
		
		case 775:
			return "MISHSTA_86";
		
		case 774:
			return "MISHSTA_87";
		
		case 777:
			return "MISHSTA_88";
		
		case 776:
			return "MISHSTA_89";
		
		case 779:
			return "MISHSTA_90";
		
		case 778:
			return "MISHSTA_91";
		
		case 782:
			return "MISHSTA_92";
		
		case 780:
			return "MISHSTA_93";
		
		case 781:
			return "MISHSTA_94";
		
		case 784:
			return "MISHSTA_95";
		
		case 783:
			return "MISHSTA_96";
		
		case 786:
			return "MISHSTA_97";
		
		case 785:
			return "MISHSTA_98";
		
		case 788:
			return "MISHSTA_99";
		
		case 787:
			return "MISHSTA_100";
		
		case 789:
			return "MISHSTA_101";
		
		case 792:
			return "MISHSTA_102";
		
		case 791:
			return "MISHSTA_103";
		
		case 790:
			return "MISHSTA_104";
		
		case 793:
			return "MISHSTA_105";
		
		case 794:
			return "MISHSTA_106";
		
		default:
	}
	switch (iParam0)
	{
		case 795:
			return "MISHSTA_0";
		
		case 796:
			return "MISHSTA_107";
		
		case 797:
			return "MISHSTA_108";
		
		case 798:
			return "MISHSTA_109";
		
		case 799:
			return "MISHSTA_110";
		
		case 800:
			return "MISHSTA_111";
		
		case 801:
			return "MISHSTA_112";
		
		case 802:
			return "MISHSTA_113";
		
		case 803:
			return "MISHSTA_114";
		
		case 804:
			return "MISHSTA_115";
		
		case 805:
			return "MISHSTA_116";
		
		case 806:
			return "MISHSTA_117";
		
		case 807:
			return "MISHSTA_118";
		
		case 808:
			return "MISHSTA_119";
		
		case 809:
			return "MISHSTA_120";
		
		case 429:
			return "MISHSTA_1";
		
		case 441:
			return "MISHSTA_1";
		
		case 4:
			return "MISHSTA_121";
		
		case 13:
			return "MISHSTA_11";
		
		case 341:
			return "MISHSTA_122";
		
		case 5:
			return "MISHSTA_123";
		
		case 6:
			return "MISHSTA_124";
		
		case 20:
			return "MISHSTA_10";
		
		case 169:
			return "MISHSTA_125";
		
		case 731:
			return "MISHSTA_126";
		
		case 737:
			return "MISHSTA_10";
		
		case 145:
			return "MISHSTA_127";
		
		case 159:
			return "MISHSTA_10";
		
		case 353:
			return "MISHSTA_10";
		
		case 357:
			return "MISHSTA_11";
		
		case 605:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 606:
			return "MISHSTA_10";
		
		case 613:
			return "MISHSTA_128";
		
		case 616:
			return "MISHSTA_129";
		
		case 628:
			return "MISHSTA_130";
		
		case 309:
			return "MISHSTA_11";
		
		case 310:
			return "MISHSTA_10";
		
		case 313:
			return "MISHSTA_131";
		
		case 477:
			return "MISHSTA_37";
		
		case 482:
			return "MISHSTA_132";
		
		case 484:
			return "MISHSTA_133";
		
		case 715:
			return "MISHSTA_123";
		
		case 570:
			return "MISHSTA_10";
		
		case 566:
			return "MISHSTA_11";
		
		case 565:
			return "MISHSTA_134";
		
		case 572:
			return "MISHSTA_135";
		
		case 574:
			return "MISHSTA_136";
		
		case 431:
			return "MISHSTA_11";
		
		case 443:
			return "MISHSTA_137";
		
		case 446:
			return "MISHSTA_138";
		
		case 452:
			return "MISHSTA_139";
		
		case 364:
			return "MISHSTA_11";
		
		case 365:
			return "MISHSTA_10";
		
		case 369:
			return "MISHSTA_140";
		
		case 668:
			return "MISHSTA_11";
		
		case 670:
			return "MISHSTA_141";
		
		case 678:
			return "MISHSTA_11";
		
		case 265:
			return "MISHSTA_11";
		
		case 266:
			return "MISHSTA_10";
		
		case 270:
			return "MISHSTA_142";
		
		case 271:
			return "MISHSTA_143";
		
		case 272:
			return "MISHSTA_144";
		
		default:
	}
	switch (iParam0)
	{
		case 765:
			return "MISHSTA_145";
		
		case 764:
			return "MISHSTA_146";
		
		case 330:
			return "MISHSTA_11";
		
		case 331:
			return "MISHSTA_10";
		
		case 643:
			return "MISHSTA_147";
		
		case 644:
			return "MISHSTA_148";
		
		case 645:
			return "MISHSTA_149";
		
		case 646:
			return "MISHSTA_150";
		
		case 404:
			return "MISHSTA_10";
		
		case 721:
			return "MISHSTA_151";
		
		case 752:
			return "MISHSTA_152";
		
		case 147:
			return "MISHSTA_1";
		
		case 336:
			return "MISHSTA_1";
		
		case 371:
			return "MISHSTA_1";
		
		case 557:
			return "MISHSTA_1";
		
		case 575:
			return "MISHSTA_1";
		
		case 629:
			return "MISHSTA_1";
		
		case 647:
			return "MISHSTA_1";
		
		case 685:
			return "MISHSTA_1";
		
		case 693:
			return "MISHSTA_1";
		
		case 738:
			return "MISHSTA_1";
		
		case 650:
			return "MISHSTA_0";
		
		case 649:
			return "MISHSTA_153";
		
		case 825:
			return "MISHSTA_154";
		
		case 824:
			return "MISHSTA_155";
		
		case 821:
			return "MISHSTA_156";
		
		case 820:
			return "MISHSTA_157";
		
		case 319:
			return "MISHSTA_158";
		
		case 318:
			return "MISHSTA_159";
		
		case 317:
			return "MISHSTA_1";
		
		case 322:
			return "MISHSTA_1";
		
		default:
	}
	switch (iParam0)
	{
		case 323:
			return "MISHSTA_0";
		
		case 324:
			return "MISHSTA_160";
		
		case 816:
			return "MISHSTA_161";
		
		case 815:
			return "MISHSTA_162";
		
		case 814:
			return "MISHSTA_163";
		
		case 746:
			return "MISHSTA_164";
		
		case 514:
			return "MISHSTA_165";
		
		case 744:
			return "MISHSTA_166";
		
		case 841:
			return "MISHSTA_167";
		
		case 840:
			return "MISHSTA_1";
		
		case 838:
			return "MISHSTA_167";
		
		case 828:
			return "MISHSTA_1";
		
		case 829:
			return "MISHSTA_167";
		
		case 831:
			return "MISHSTA_1";
		
		case 832:
			return "MISHSTA_167";
		
		case 834:
			return "MISHSTA_1";
		
		case 835:
			return "MISHSTA_167";
		
		case 837:
			return "MISHSTA_1";
		
		case 739:
			return "MISHSTA_168";
		
		case 619:
			return "MISHSTA_169";
		
		case 560:
			return "MISHSTA_170";
		
		case 559:
			return "MISHSTA_171";
		
		case 558:
			return "MISHSTA_172";
		
		case 673:
			return "MISHSTA_10";
		
		case 688:
			return "MISHSTA_10";
		
		case 687:
			return "MISHSTA_173";
		
		case 844:
			return "MISHSTA_174";
		
		case 845:
			return "MISHSTA_175";
		
		case 843:
			return "MISHSTA_176";
		
		case 236:
			return "MISHSTA_177";
		
		case 29:
			return "MISHSTA_178";
		
		default:
	}
	switch (iParam0)
	{
		case 109:
			return "MISHSTA_179";
		
		case 108:
			return "MISHSTA_180";
		
		case 135:
			return "MISHSTA_181";
		
		case 227:
			return "MISHSTA_182";
		
		case 852:
			return "MISHSTA_183";
		
		case 846:
			return "MISHSTA_184";
		
		case 440:
			return "MISHSTA_185";
		
		case 864:
			return "MISHSTA_186";
		
		case 863:
			return "MISHSTA_187";
		
		case 861:
			return "MISHSTA_1";
		
		case 862:
			return "MISHSTA_188";
		
		case 870:
			return "MISHSTA_1";
		
		case 544:
			return "MISHSTA_0";
		
		case 543:
			return "MISHSTA_189";
		
		case 593:
			return "MISHSTA_190";
		
		case 592:
			return "MISHSTA_1";
		
		case 603:
			return "MISHSTA_1";
		
		case 899:
			return "MISHSTA_1";
		
		case 900:
			return "MISHSTA_191";
		
		case 883:
			return "MISHSTA_192";
		
		case 891:
			return "MISHSTA_192";
		
		case 657:
			return "MISHSTA_193";
		
		case 875:
			return "MISHSTA_192";
		
		case 906:
			return "MISHSTA_194";
		
		case 706:
			return "MISHSTA_195";
		
		case 699:
			return "MISHSTA_196";
		
		case 726:
			return "MISHSTA_197";
		
		case 237:
			return "MISHSTA_198";
		
		case 658:
			return "MISHSTA_1";
		
		case 877:
			return "MISHSTA_0";
		
		case 885:
			return "MISHSTA_0";
		
		default:
	}
	switch (iParam0)
	{
		case 893:
			return "MISHSTA_0";
		
		case 694:
			return "MISHSTA_110";
		
		case 881:
			return "MISHSTA_199";
		
		case 889:
			return "MISHSTA_199";
		
		case 897:
			return "MISHSTA_199";
		
		case 633:
			return "MISHSTA_200";
		
		case 632:
			return "MISHSTA_201";
		
		case 38:
			return "MISHSTA_202";
		
		case 41:
			return "MISHSTA_203";
		
		case 39:
			return "MISHSTA_204";
		
		case 40:
			return "MISHSTA_205";
		
		case 42:
			return "MISHSTA_206";
		
		case 56:
			return "MISHSTA_205";
		
		case 52:
			return "MISHSTA_202";
		
		case 53:
			return "MISHSTA_207";
		
		case 54:
			return "MISHSTA_203";
		
		case 55:
			return "MISHSTA_206";
		
		case 70:
			return "MISHSTA_206";
		
		case 69:
			return "MISHSTA_203";
		
		case 67:
			return "MISHSTA_132";
		
		case 68:
			return "MISHSTA_205";
		
		case 66:
			return "MISHSTA_202";
		
		case 81:
			return "MISHSTA_202";
		
		case 82:
			return "MISHSTA_208";
		
		case 84:
			return "MISHSTA_203";
		
		case 83:
			return "MISHSTA_205";
		
		case 85:
			return "MISHSTA_206";
		
		case 97:
			return "MISHSTA_202";
		
		case 98:
			return "MISHSTA_209";
		
		case 100:
			return "MISHSTA_203";
		
		case 99:
			return "MISHSTA_205";
		
		default:
	}
	switch (iParam0)
	{
		case 101:
			return "MISHSTA_206";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

int func_63(int iParam0)//Position - 0x4248
{
	if (func_64(iParam0, GlobalFunc_233(Global_54975[iParam0 /*13*/].f_4)))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)//Position - 0x426B
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_54975[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_SAVE_DATA.PROPERTIES_SAVED_DATA[4 /*4*/] == GlobalFunc_8354())
	{
		Global_54975[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_54975[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_54975[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_54975[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}







int func_71(int iParam0)//Position - 0x44E7
{
	int iVar0;
	
	iVar0 = GlobalFunc_233(Global_54975[iParam0 /*13*/].f_4);
	if (iVar0 > -2)
	{
		return iVar0;
	}
	return 0;
}

int func_72(int iParam0, int iParam1, int iParam2)//Position - 0x450C
{
	switch (iParam1)
	{
		case 1:
			return Global_81155[iParam0 /*34*/].f_17[iParam2];
			break;
		
		case 7:
			return func_73(iParam0, iParam2);
			break;
		
		default:
			break;
	}
	return 914;
}

int func_73(int iParam0, int iParam1)//Position - 0x454F
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
				
				case 1:
					return 742;
				
				default:
			}
			return -1;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
				
				case 1:
					return 744;
				
				default:
			}
			return -1;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
				
				case 1:
					return 746;
				
				default:
			}
			return -1;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
				
				case 1:
					return 748;
				
				default:
			}
			return -1;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
				
				default:
			}
			return -1;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
				
				default:
			}
			return -1;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
				
				case 1:
					return 752;
				
				default:
			}
			return -1;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
				
				case 1:
					return 754;
				
				default:
			}
			return -1;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
				
				case 1:
					return 756;
				
				case 2:
					return 757;
				
				default:
			}
			return -1;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
				
				case 1:
					return 759;
				
				default:
			}
			return -1;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
				
				case 1:
					return 761;
				
				default:
			}
			return -1;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
				
				default:
			}
			return -1;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
				
				default:
			}
			return -1;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
				
				case 1:
					return 765;
				
				default:
			}
			return -1;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
				
				default:
			}
			return -1;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
				
				case 1:
					return 768;
				
				case 2:
					return 769;
				
				default:
			}
			return -1;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
				
				case 1:
					return 771;
				
				default:
			}
			return -1;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
				
				case 1:
					return 773;
				
				default:
			}
			return -1;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
				
				case 1:
					return 775;
				
				default:
			}
			return -1;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
				
				case 1:
					return 777;
				
				default:
			}
			return -1;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
				
				case 1:
					return 779;
				
				default:
			}
			return -1;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
				
				case 1:
					return 781;
				
				case 2:
					return 782;
				
				default:
			}
			return -1;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
				
				case 1:
					return 784;
				
				default:
			}
			return -1;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
				
				case 1:
					return 786;
				
				default:
			}
			return -1;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
				
				case 1:
					return 788;
				
				default:
			}
			return -1;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
				
				default:
			}
			return -1;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
				
				case 1:
					return 791;
				
				case 2:
					return 792;
				
				default:
			}
			return -1;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
				
				case 1:
					return 794;
				
				case 2:
					return 795;
				
				default:
			}
			return -1;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
				
				case 1:
					return 797;
				
				default:
			}
			return -1;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
				
				case 1:
					return 799;
				
				default:
			}
			return -1;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
				
				case 1:
					return 801;
				
				default:
			}
			return -1;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
				
				case 1:
					return 803;
				
				default:
			}
			return -1;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
				
				case 1:
					return 805;
				
				default:
			}
			return -1;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
				
				default:
			}
			return -1;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
				
				case 1:
					return 808;
				
				case 2:
					return 809;
				
				default:
			}
			return -1;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
				
				case 1:
					return 829;
				
				case 2:
					return 830;
				
				default:
			}
			return -1;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
				
				case 1:
					return 832;
				
				case 2:
					return 833;
				
				default:
			}
			return -1;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
				
				case 1:
					return 835;
				
				case 2:
					return 836;
				
				default:
			}
			return -1;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
				
				case 1:
					return 838;
				
				case 2:
					return 839;
				
				default:
			}
			return -1;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
				
				case 1:
					return 841;
				
				case 2:
					return 842;
				
				default:
			}
			return -1;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
				
				case 1:
					return 844;
				
				case 2:
					return 845;
				
				default:
			}
			return -1;
		
		default:
	}
	return -1;
}

int func_74(int iParam0, int iParam1)//Position - 0x4C33
{
	switch (iParam1)
	{
		case 1:
			return Global_81155[iParam0 /*34*/].f_16;
			break;
		
		case 7:
			return func_75(iParam0);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x4C6E
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		case 3:
			return 2;
		
		case 5:
			return 2;
		
		case 6:
			return 2;
		
		case 8:
			return 1;
		
		case 12:
			return 1;
		
		case 14:
			return 2;
		
		case 16:
			return 2;
		
		case 17:
			return 3;
		
		case 18:
			return 2;
		
		case 19:
			return 2;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 2;
		
		case 23:
			return 1;
		
		case 25:
			return 3;
		
		case 26:
			return 2;
		
		case 28:
			return 2;
		
		case 29:
			return 2;
		
		case 30:
			return 2;
		
		case 32:
			return 2;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			return 3;
		
		case 34:
			return 2;
		
		case 38:
			return 2;
		
		case 39:
			return 2;
		
		case 40:
			return 1;
		
		case 41:
			return 3;
		
		case 42:
			return 3;
		
		case 43:
			return 2;
		
		case 46:
			return 2;
		
		case 47:
			return 2;
		
		case 49:
			return 2;
		
		case 50:
			return 2;
		
		case 51:
			return 1;
		
		case 57:
			return 3;
		
		case 58:
			return 3;
		
		case 59:
			return 3;
		
		case 60:
			return 3;
		
		case 61:
			return 3;
		
		case 62:
			return 3;
		
		case 24:
			return 3;
		
		default:
	}
	return 0;
}

void func_76(int iParam0)//Position - 0x4E1F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (iParam0 == 1)
	{
		func_80();
	}
}

struct<2> func_77(int iParam0, int iParam1)//Position - 0x4E44
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			if ((iParam0 == 80 || iParam0 == 81) || iParam0 == 82)
			{
				StringConCat(&Var0, &(Global_81155[iParam0 /*34*/].f_8), 8);
				StringConCat(&Var0, "A", 8);
			}
			else
			{
				StringCopy(&Var0, "M_", 8);
				StringConCat(&Var0, &(Global_81155[iParam0 /*34*/].f_8), 8);
				if (iParam0 == 90)
				{
					StringConCat(&Var0, "A", 8);
				}
			}
			break;
		
		case 7:
			Var0 = { GlobalFunc_4918(iParam0) };
			break;
		
		default:
			break;
	}
	return Var0;
}



void func_80()//Position - 0x535F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	GlobalFunc_726("");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_81(int iParam0, int iParam1, int iParam2)//Position - 0x5395
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_68494 != iParam0 || iParam2 == 1)
	{
		iVar0 = 1;
	}
	Global_68494 = iParam0;
	func_4(2);
	if (func_8() != -1 || !func_5(iParam0))
	{
		if (iParam1 == 1)
		{
			func_31(0);
		}
		func_3(0);
		func_29(1, iParam0);
	}
	else
	{
		if (iVar0 == 1)
		{
			func_28(1, 0);
			func_28(2, 0);
			func_76(1);
			func_76(2);
			func_82();
			func_27(Local_29[0 /*2*/]);
		}
		if (iParam1 == 1)
		{
			func_31(1);
		}
		func_2(iParam0, iVar0);
	}
}

void func_82()//Position - 0x542F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	func_35();
	if (Global_68495 > 16)
	{
		func_84();
		func_33(0, Global_68495);
	}
	else
	{
		func_80();
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68495)
	{
		iVar2 = 0;
		iVar3 = 0;
		iVar8 = -1;
		iVar1 = Local_29[iVar0 /*2*/];
		Local_27 = { func_77(iVar1, Global_68494) };
		iVar7 = 0;
		while (iVar7 < func_74(iVar1, Global_68494))
		{
			iVar4 = func_72(iVar1, Global_68494, iVar7);
			if (!Global_54975[iVar4 /*13*/].f_7)
			{
				if (func_63(iVar4) == 1)
				{
					iVar3++;
				}
				switch (iVar4)
				{
					case 42:
					case 55:
					case 85:
					case 70:
					case 101:
						iVar8 = func_71(iVar4);
						break;
				}
				iVar2++;
			}
			iVar7++;
		}
		func_52(iVar1, &iVar8);
		fVar5 = GlobalFunc_232(iVar3, iVar2, 0);
		iVar6 = GlobalFunc_231(fVar5);
		if (iVar8 > -1)
		{
			iVar6 = iVar8;
		}
		func_83(1, iVar0, 1076, iVar1, 1, &Local_27, func_49(iVar6));
		iVar0++;
	}
	GlobalFunc_3250(1);
}

void func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6)//Position - 0x554D
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		if (bParam4)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		GlobalFunc_726(sParam5);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_84()//Position - 0x55A4
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

