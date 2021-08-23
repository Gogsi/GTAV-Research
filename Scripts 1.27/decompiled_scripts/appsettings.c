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
	int iLocal_17[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	fLocal_57 = 0.82f;
	fLocal_58 = 0.42f;
	fLocal_59 = 0f;
	fLocal_60 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_45(Global_14374, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_44();
	if (Global_14338 == 0)
	{
		fLocal_62 = 0.75f;
		fLocal_63 = 0.8f;
	}
	else
	{
		fLocal_62 = 0.65f;
		fLocal_63 = 0.77f;
	}
	Global_3068[Global_14393 /*2811*/][2 /*281*/].f_259 = Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_6;
	Global_3068[Global_14393 /*2811*/][4 /*281*/].f_259 = Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_68245)
		{
			Global_3068[Global_14393 /*2811*/][1 /*281*/].f_259 = func_43(1186, -1, 0);
			Global_3068[Global_14393 /*2811*/][2 /*281*/].f_259 = func_43(2012, -1, 0);
			Global_3068[Global_14393 /*2811*/][4 /*281*/].f_259 = func_43(2011, -1, 0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_11), &(Global_3068[Global_14393 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_3068[Global_14393 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_68245)
	{
		Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_10 = func_43(1185, -1, 0);
	}
	Global_3068[Global_14393 /*2811*/][3 /*281*/].f_259 = Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_10;
	func_42();
	if (Global_68245)
	{
		Global_3068[3 /*2811*/][0 /*281*/] = 190;
		Global_3068[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_3068[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_3068[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_3068[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&(Global_3068[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_3068[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_3068[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_3068[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&(Global_3068[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_3068[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_3068[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_3068[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&(Global_3068[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_3068[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_3068[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_3068[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (func_43(2074, -1, 0) == 0)
		{
			Global_3068[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else
		{
			Global_3068[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_33();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_49)
		{
			if (SYSTEM::TIMERB() > 3500)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
				iLocal_49 = 0;
			}
		}
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				
				case 8:
					if (bLocal_55 || iLocal_56)
					{
						if (bLocal_55)
						{
							bLocal_55 = false;
							SYSTEM::SETTIMERB(0);
							Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Sleep_Warning_Been_Displayed = 1;
							iLocal_56 = 1;
						}
						else if (SYSTEM::TIMERB() > 7500)
						{
							iLocal_56 = 0;
							HUD::CLEAR_HELP(1);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_52)
						{
							func_11();
						}
						if (func_10(2, Global_14361, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
							}
							iLocal_52 = 0;
							func_9();
							Global_14371 = 1;
							func_45(Global_14374, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
							if (Global_14393.f_1 > 3)
							{
								Global_14393.f_1 = 7;
							}
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_14395 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0x449
{
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x48C
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
	}
	if (bLocal_55)
	{
		HUD::CLEAR_HELP(1);
	}
	if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.SleepIcon_Help_Been_Displayed == 0 || Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Sleep_Warning_Been_Displayed == 0)
	{
		func_3();
	}
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3()//Position - 0x4EE
{
	if (Global_3068[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_2263, 25);
	MISC::SET_BIT(&Global_2264, 11);
}

int func_4(int iParam0)//Position - 0x56B
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)//Position - 0x58D
{
	return func_6(iParam0, Global_34913);
}

int func_6(int iParam0, int iParam1)//Position - 0x59E
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_7()//Position - 0x77F
{
	func_44();
	Global_3068[Global_14393 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()//Position - 0x79E
{
	if (Global_2869 == 1 || Global_14393.f_1 < 7)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_9()//Position - 0x7C7
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14382, 1);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)//Position - 0x7E7
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

void func_11()//Position - 0x859
{
	int iVar0;
	
	iLocal_53 = MISC::GET_GAME_TIMER();
	iVar0 = (iLocal_53 - iLocal_54);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		PAD::SET_PAD_SHAKE(0, 100, 100);
	}
}

void func_12()//Position - 0x88E
{
	int iVar0;
	var uVar1;
	struct<13> Var17;
	int iVar30;
	
	if (iLocal_42 == 1)
	{
		if (iLocal_51)
		{
			iLocal_53 = MISC::GET_GAME_TIMER();
			if ((iLocal_53 - iLocal_54) > 1000)
			{
				iLocal_50 = 1;
				iLocal_51 = 0;
			}
		}
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
			{
				iLocal_64 = 1;
				iLocal_65 = 0;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
			{
				iLocal_64 = 0;
				iLocal_65 = 1;
			}
		}
		if ((((func_10(2, Global_14369, 0) || func_10(2, Global_14370, 0)) || iLocal_50) || iLocal_64 == 1) || iLocal_65 == 1)
		{
			iLocal_64 = 0;
			iLocal_65 = 0;
			iLocal_50 = 0;
			iLocal_51 = 0;
			SYSTEM::SETTIMERB(0);
			iLocal_49 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
			uLocal_40 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_40))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_46 = iLocal_17[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_40)];
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				SYSTEM::WAIT(100);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (MISC::ARE_STRINGS_EQUAL(&(Global_3068[Global_14393 /*2811*/][1 /*281*/].f_144[iLocal_46 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_3068[Global_14393 /*2811*/][1 /*281*/].f_144[iLocal_46 /*6*/]), PLAYER::PLAYER_PED_ID(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_14371 == 0)
	{
		if (func_10(2, Global_14362, 0))
		{
			func_23();
			Global_14371 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
			uLocal_40 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_40))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_45 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_40);
			if (iLocal_45 < 0)
			{
				iLocal_45 = 0;
			}
			Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259 = iLocal_17[iLocal_45];
			if (iLocal_42 == 2)
			{
				iVar0 = Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259;
				Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_6 = Global_3068[Global_14393 /*2811*/][2 /*281*/].f_260[iVar0];
				func_45(Global_14374, "SET_THEME", SYSTEM::TO_FLOAT(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_68245)
				{
					Global_2544848 = Global_3068[3 /*2811*/][2 /*281*/].f_259;
					func_20(2012, Global_3068[3 /*2811*/][2 /*281*/].f_259, -1, 1);
					func_45(Global_14374, "SET_THEME", SYSTEM::TO_FLOAT(Global_2544848), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_45(Global_14374, "SET_THEME", SYSTEM::TO_FLOAT(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_44] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_45] /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iLocal_45;
				func_45(Global_14374, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_45), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_42 == 4)
			{
				Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_9 = Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259;
				if (Global_68245)
				{
					Global_2544849 = Global_3068[3 /*2811*/][4 /*281*/].f_259;
					func_20(2011, Global_3068[3 /*2811*/][4 /*281*/].f_259, -1, 1);
					if (Global_2544849 == 0)
					{
						Var17 = { func_17(PLAYER::PLAYER_ID()) };
						iVar30 = 0;
						if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
						{
						}
						if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var17) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) && Global_2544852 == 0)
						{
							SYSTEM::SETTIMERA(0);
							while (!NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var17, &uVar1) && SYSTEM::TIMERA() < 3000)
							{
								SYSTEM::WAIT(0);
								if (SYSTEM::TIMERA() > 2999)
								{
									iVar30 = 1;
								}
							}
							if (iVar30 == 0)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_BACKGROUND_CREW_IMAGE");
								GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar1);
								GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						}
						else
						{
							func_45(Global_14374, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_45(Global_14374, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_2544849), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_45(Global_14374, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_44] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_45] /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iLocal_45;
				func_45(Global_14374, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_45), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_42 == 1)
			{
				Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_11 = { Global_3068[Global_14393 /*2811*/][1 /*281*/].f_144[Global_3068[Global_14393 /*2811*/][1 /*281*/].f_259 /*6*/] };
				if (Global_68245)
				{
					func_20(1186, Global_3068[3 /*2811*/][1 /*281*/].f_259, -1, 1);
				}
				func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(18), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_44] /*4*/]), 0, 0, 0, 0);
				func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_45] /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iLocal_45;
				func_45(Global_14374, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_45), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_42 == 3)
			{
				Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_10 = Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259;
				if (Global_68245)
				{
					func_20(1185, Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_10, -1, 1);
				}
				if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_10 == 1)
				{
					iLocal_52 = 1;
					iLocal_54 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_52 = 0;
				}
			}
			if (iLocal_42 == 0)
			{
				if (Global_68245 == 1)
				{
					Global_3068[3 /*2811*/][iLocal_42 /*281*/].f_259 = iLocal_17[iLocal_45];
					func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(19), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_44] /*4*/]), 0, 0, 0, 0);
					func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_45] /*4*/]), 0, 0, 0, 0);
					iLocal_44 = iLocal_45;
					func_45(Global_14374, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_45), -1082130432, -1082130432, -1082130432);
					func_20(2074, Global_3068[3 /*2811*/][iLocal_42 /*281*/].f_259, -1, 1);
				}
				else
				{
					Global_3068[0 /*2811*/][iLocal_42 /*281*/].f_259 = iLocal_17[iLocal_45];
					Global_3068[1 /*2811*/][iLocal_42 /*281*/].f_259 = iLocal_17[iLocal_45];
					Global_3068[2 /*2811*/][iLocal_42 /*281*/].f_259 = iLocal_17[iLocal_45];
					if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_34913 == 15)
						{
							if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Sleep_Warning_Been_Displayed == 0)
							{
								HUD::CLEAR_HELP(1);
								func_16("CELL_7050");
								if (fLocal_62 == fLocal_63)
								{
								}
								bLocal_55 = true;
							}
							else
							{
								func_45(Global_14374, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								MISC::SET_BIT(&Global_2263, 25);
								MISC::SET_BIT(&Global_2264, 11);
								if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.SleepIcon_Help_Been_Displayed == 0)
								{
									HUD::CLEAR_HELP(1);
									func_15("CELL_7051", -1);
									Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.SleepIcon_Help_Been_Displayed = 1;
								}
							}
						}
					}
					else
					{
						func_45(Global_14374, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						MISC::CLEAR_BIT(&Global_2263, 25);
						MISC::SET_BIT(&Global_2264, 11);
					}
				}
			}
			func_13(Global_14374, "SET_HEADER", &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1144
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_14(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam3))
	{
		func_14(iParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam4))
	{
		func_14(iParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam5))
	{
		func_14(iParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
	{
		func_14(iParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_14(char* sParam0)//Position - 0x119F
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_15(char* sParam0, int iParam1)//Position - 0x11B1
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_16(char* sParam0)//Position - 0x11C8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

struct<13> func_17(var uParam0)//Position - 0x11DE
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

void func_18(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x11F5
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
		func_14(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_14(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_14(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_14(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_14(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_19()//Position - 0x12A8
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_14393 == 0)
		{
			switch (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 1)
		{
			switch (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 2)
		{
			switch (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 3)
		{
			switch (Global_2544848)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_20(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x151E
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_21(var uParam0)//Position - 0x1549
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
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

var func_22()//Position - 0x157D
{
	return Global_1312737;
}

void func_23()//Position - 0x1589
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14382, 1);
		func_24();
	}
}

void func_24()//Position - 0x15AD
{
	if (func_25())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

int func_25()//Position - 0x15C1
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

void func_26()//Position - 0x1608
{
	if (Global_14371 == 0)
	{
		if (func_10(2, Global_14362, 0))
		{
			func_23();
			Global_14371 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
			uLocal_40 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_40))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_43 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_40);
			iLocal_42 = iLocal_17[iLocal_43];
			switch (iLocal_42)
			{
				case 0:
					if (Global_68245 == 0)
					{
						if (Global_34913 == 15)
						{
							if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Sleep_Warning_Been_Displayed == 0)
							{
								HUD::CLEAR_HELP(1);
								func_16("CELL_7050");
								if (fLocal_62 == fLocal_63)
								{
								}
								bLocal_55 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_14393.f_1 > 3)
			{
				Global_14393.f_1 = 8;
			}
			func_27();
			iLocal_51 = 1;
			iLocal_54 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_27()//Position - 0x16DA
{
	int iVar0[19];
	int iVar20;
	struct<13> Var21;
	int iVar34;
	int iVar35;
	
	func_45(Global_14374, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_38 = 0;
	iVar20 = 0;
	if (Global_68245)
	{
		StringCopy(&(Global_3068[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var21 = { func_17(PLAYER::PLAYER_ID()) };
		if (!NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var21))
		{
			StringCopy(&(Global_3068[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar20 < 19)
	{
		iVar34 = 0;
		iVar35 = 18;
		Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_84[iVar35] = 5000;
		while (iVar34 < 19)
		{
			if (Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_124[iVar34] == 1)
			{
				if (iVar0[iVar34] == 0)
				{
					if (Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_84[iVar34] < Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_84[iVar35])
					{
						iVar35 = iVar34;
						func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar20), SYSTEM::TO_FLOAT(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_104[iVar35]), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar34++;
		}
		iLocal_17[iVar20] = iVar35;
		iVar0[iVar35] = 1;
		if (MISC::ARE_STRINGS_EQUAL(&(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259 /*4*/]), &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iVar35 /*4*/])))
		{
			iLocal_47 = iVar20;
			if (iLocal_47 < 0)
			{
				iLocal_47 = 0;
			}
			if ((iLocal_42 == 1 || iLocal_42 == 4) || iLocal_42 == 2)
			{
				func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar20), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iVar20;
			}
			if (iLocal_42 == 0 && Global_68245 == 1)
			{
				func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar20), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iVar20;
			}
		}
		if (Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_124[iVar20] == 1)
		{
			iLocal_38++;
		}
		iVar20++;
	}
	func_45(Global_14374, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14374, "SET_HEADER", &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_14381)
	{
		func_18(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_2263, 17);
}

void func_28()//Position - 0x1A1F
{
	if (iLocal_61)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_61 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_39 > 0)
			{
				iLocal_39 = (iLocal_39 - 1);
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_39++;
			if (iLocal_39 == iLocal_38)
			{
				iLocal_39 = 0;
			}
			func_29();
		}
	}
	if (iLocal_61 == 0)
	{
		if (func_10(2, Global_14369, 0))
		{
			if (iLocal_39 > 0)
			{
				iLocal_39 = (iLocal_39 - 1);
			}
			func_31();
			iLocal_61 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_10(2, Global_14370, 0))
		{
			iLocal_39++;
			if (iLocal_39 == iLocal_38)
			{
				iLocal_39 = 0;
			}
			func_29();
			iLocal_61 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_29()//Position - 0x1ACC
{
	func_45(Global_14374, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
	func_30();
}

void func_30()//Position - 0x1B09
{
	if (func_25())
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

void func_31()//Position - 0x1B2C
{
	func_45(Global_14374, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
	func_32();
}

void func_32()//Position - 0x1B69
{
	if (func_25())
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

void func_33()//Position - 0x1B8C
{
	int iVar0[20];
	int iVar21;
	int iVar22;
	int iVar23;
	
	iLocal_38 = 0;
	iVar21 = 0;
	while (iVar21 < 9)
	{
		iVar22 = 0;
		iVar23 = 9;
		Global_3068[Global_14393 /*2811*/][iVar23 /*281*/] = 5000;
		if (MISC::GET_PROFILE_SETTING(2) == 0)
		{
			Global_3068[Global_14393 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else
		{
			Global_3068[Global_14393 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar22 < 9)
		{
			if (Global_3068[Global_14393 /*2811*/][iVar22 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar22] == 0)
				{
					if (Global_3068[Global_14393 /*2811*/][iVar22 /*281*/] < Global_3068[Global_14393 /*2811*/][iVar23 /*281*/])
					{
						if (Global_68245)
						{
							if (iVar22 == 0)
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (iVar22 == 4 || iVar22 == 5)
							{
							}
							else
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar22 == 5)
						{
						}
						else
						{
							iVar23 = iVar22;
							func_41(iVar22, iVar23);
							func_18(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar22++;
		}
		iLocal_17[iVar21] = iVar23;
		iVar0[iVar23] = 1;
		if (Global_3068[Global_14393 /*2811*/][iVar21 /*281*/].f_280 == 1)
		{
			iLocal_38++;
		}
		iVar21++;
	}
	func_45(Global_14374, "DISPLAY_VIEW", 13f, SYSTEM::TO_FLOAT(iLocal_43), -1082130432, -1082130432, -1082130432);
	func_13(Global_14374, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_14381)
	{
		func_18(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_2263, 17);
}

int func_34()//Position - 0x1E58
{
	if (Global_68245)
	{
		Global_14393 = 3;
	}
	else
	{
		Global_14393 = func_35();
	}
	if (Global_14393 > 3)
	{
		Global_14393 = 3;
	}
	return Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_7;
}

var func_35()//Position - 0x1E8E
{
	func_36();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_36()//Position - 0x1EA7
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_40(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_39(PLAYER::PLAYER_PED_ID());
			if (func_38(iVar0) && (!func_37(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_38(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = iVar0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != 145)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
			}
			return;
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
}

bool func_37(int iParam0)//Position - 0x1FA4
{
	return Global_34913 == iParam0;
}

bool func_38(int iParam0)//Position - 0x1FB2
{
	return iParam0 < 3;
}

int func_39(var uParam0)//Position - 0x1FBE
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)//Position - 0x1FFB
{
	if (func_38(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41(int iParam0, int iParam1)//Position - 0x2025
{
	switch (iParam0)
	{
		case 0:
			if (Global_68245)
			{
				iLocal_48 = 19;
			}
			else if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
			{
				iLocal_48 = 26;
			}
			else
			{
				iLocal_48 = 25;
			}
			break;
		
		case 3:
			if (Global_3068[Global_14393 /*2811*/][3 /*281*/].f_259 == 1)
			{
				iLocal_48 = 20;
			}
			else
			{
				iLocal_48 = 21;
			}
			break;
		
		default:
			iLocal_48 = Global_3068[Global_14393 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_42()//Position - 0x20A7
{
	if (Global_34913 != 15)
	{
		func_44();
		Global_3068[Global_14393 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

int func_43(int iParam0, int iParam1, int iParam2)//Position - 0x20CE
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_21(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_44()//Position - 0x2100
{
	if (func_37(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_35();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_45(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x21A1
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

