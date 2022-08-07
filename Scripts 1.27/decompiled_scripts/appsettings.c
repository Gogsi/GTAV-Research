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
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_9035();
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
			Global_3068[Global_14393 /*2811*/][1 /*281*/].f_259 = GlobalFunc_6671(1186, -1, 0);
			Global_3068[Global_14393 /*2811*/][2 /*281*/].f_259 = GlobalFunc_6671(2012, -1, 0);
			Global_3068[Global_14393 /*2811*/][4 /*281*/].f_259 = GlobalFunc_6671(2011, -1, 0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_11), &(Global_3068[Global_14393 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_3068[Global_14393 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_68245)
	{
		Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_10 = GlobalFunc_6671(1185, -1, 0);
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
		if (GlobalFunc_6671(2074, -1, 0) == 0)
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
						if (GlobalFunc_774(2, Global_14361, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
							}
							iLocal_52 = 0;
							GlobalFunc_2011();
							Global_14371 = 1;
							GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
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
			if (GlobalFunc_2002())
			{
				func_2();
			}
		}
		else
		{
			Global_14395 = 6;
			func_2();
		}
		if (GlobalFunc_2001())
		{
			func_2();
		}
	}
}


void func_2()//Position - 0x48C
{
	func_7();
	if (GlobalFunc_6687(0))
	{
		GlobalFunc_872();
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
		GlobalFunc_872();
	}
	MISC::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}





void func_7()//Position - 0x77F
{
	GlobalFunc_9035();
	Global_3068[Global_14393 /*2811*/][0 /*281*/].f_124[2] = 1;
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
		if ((((GlobalFunc_774(2, Global_14369, 0) || GlobalFunc_774(2, Global_14370, 0)) || iLocal_50) || iLocal_64 == 1) || iLocal_65 == 1)
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
		if (GlobalFunc_774(2, Global_14362, 0))
		{
			GlobalFunc_7017();
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
				GlobalFunc_1493(Global_14374, "SET_THEME", SYSTEM::TO_FLOAT(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_68245)
				{
					Global_2544848 = Global_3068[3 /*2811*/][2 /*281*/].f_259;
					GlobalFunc_6670(2012, Global_3068[3 /*2811*/][2 /*281*/].f_259, -1, 1);
					GlobalFunc_1493(Global_14374, "SET_THEME", SYSTEM::TO_FLOAT(Global_2544848), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					GlobalFunc_1493(Global_14374, "SET_THEME", SYSTEM::TO_FLOAT(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				GlobalFunc_2009();
				GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_44] /*4*/]), 0, 0, 0, 0);
				GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_45] /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iLocal_45;
				GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_45), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_42 == 4)
			{
				Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_9 = Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259;
				if (Global_68245)
				{
					Global_2544849 = Global_3068[3 /*2811*/][4 /*281*/].f_259;
					GlobalFunc_6670(2011, Global_3068[3 /*2811*/][4 /*281*/].f_259, -1, 1);
					if (Global_2544849 == 0)
					{
						Var17 = { GlobalFunc_902(PLAYER::PLAYER_ID()) };
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
							GlobalFunc_1493(Global_14374, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						GlobalFunc_1493(Global_14374, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_2544849), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					GlobalFunc_1493(Global_14374, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_44] /*4*/]), 0, 0, 0, 0);
				GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_45] /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iLocal_45;
				GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_45), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_42 == 1)
			{
				Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_11 = { Global_3068[Global_14393 /*2811*/][1 /*281*/].f_144[Global_3068[Global_14393 /*2811*/][1 /*281*/].f_259 /*6*/] };
				if (Global_68245)
				{
					GlobalFunc_6670(1186, Global_3068[3 /*2811*/][1 /*281*/].f_259, -1, 1);
				}
				GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(18), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_44] /*4*/]), 0, 0, 0, 0);
				GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_45] /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iLocal_45;
				GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_45), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_42 == 3)
			{
				Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_10 = Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259;
				if (Global_68245)
				{
					GlobalFunc_6670(1185, Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_10, -1, 1);
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
					GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(19), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_44] /*4*/]), 0, 0, 0, 0);
					GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iLocal_17[iLocal_45] /*4*/]), 0, 0, 0, 0);
					iLocal_44 = iLocal_45;
					GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_45), -1082130432, -1082130432, -1082130432);
					GlobalFunc_6670(2074, Global_3068[3 /*2811*/][iLocal_42 /*281*/].f_259, -1, 1);
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
								GlobalFunc_Display_Help_Text("CELL_7050");
								if (fLocal_62 == fLocal_63)
								{
								}
								bLocal_55 = true;
							}
							else
							{
								GlobalFunc_1493(Global_14374, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								MISC::SET_BIT(&Global_2263, 25);
								MISC::SET_BIT(&Global_2264, 11);
								if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.SleepIcon_Help_Been_Displayed == 0)
								{
									HUD::CLEAR_HELP(1);
									GlobalFunc_159("CELL_7051", -1);
									Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.SleepIcon_Help_Been_Displayed = 1;
								}
							}
						}
					}
					else
					{
						GlobalFunc_1493(Global_14374, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						MISC::CLEAR_BIT(&Global_2263, 25);
						MISC::SET_BIT(&Global_2264, 11);
					}
				}
			}
			GlobalFunc_5578(Global_14374, "SET_HEADER", &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (GlobalFunc_6687(0))
			{
				GlobalFunc_872();
			}
		}
	}
}














void func_26()//Position - 0x1608
{
	if (Global_14371 == 0)
	{
		if (GlobalFunc_774(2, Global_14362, 0))
		{
			GlobalFunc_7017();
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
								GlobalFunc_Display_Help_Text("CELL_7050");
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
	
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_38 = 0;
	iVar20 = 0;
	if (Global_68245)
	{
		StringCopy(&(Global_3068[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var21 = { GlobalFunc_902(PLAYER::PLAYER_ID()) };
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
						GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar20), SYSTEM::TO_FLOAT(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_104[iVar35]), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
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
				GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar20), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iVar20;
			}
			if (iLocal_42 == 0 && Global_68245 == 1)
			{
				GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar20), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[iVar35 /*4*/]), 0, 0, 0, 0);
				iLocal_44 = iVar20;
			}
		}
		if (Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_124[iVar20] == 1)
		{
			iLocal_38++;
		}
		iVar20++;
	}
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_5578(Global_14374, "SET_HEADER", &(Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_7[Global_3068[Global_14393 /*2811*/][iLocal_42 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_14381)
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
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
		if (GlobalFunc_774(2, 181, 0))
		{
			if (iLocal_39 > 0)
			{
				iLocal_39 = (iLocal_39 - 1);
			}
			GlobalFunc_7021();
		}
		if (GlobalFunc_774(2, 180, 0))
		{
			iLocal_39++;
			if (iLocal_39 == iLocal_38)
			{
				iLocal_39 = 0;
			}
			GlobalFunc_7020();
		}
	}
	if (iLocal_61 == 0)
	{
		if (GlobalFunc_774(2, Global_14369, 0))
		{
			if (iLocal_39 > 0)
			{
				iLocal_39 = (iLocal_39 - 1);
			}
			GlobalFunc_7021();
			iLocal_61 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (GlobalFunc_774(2, Global_14370, 0))
		{
			iLocal_39++;
			if (iLocal_39 == iLocal_38)
			{
				iLocal_39 = 0;
			}
			GlobalFunc_7020();
			iLocal_61 = 1;
			SYSTEM::SETTIMERA(0);
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
								GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
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
								GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar22 == 5)
						{
						}
						else
						{
							iVar23 = iVar22;
							func_41(iVar22, iVar23);
							GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar21), SYSTEM::TO_FLOAT(iLocal_48), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iVar23 /*281*/].f_2), 0, 0, 0, 0);
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
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 13f, SYSTEM::TO_FLOAT(iLocal_43), -1082130432, -1082130432, -1082130432);
	GlobalFunc_5578(Global_14374, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_14381)
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
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
		Global_14393 = GlobalFunc_8354();
	}
	if (Global_14393 > 3)
	{
		Global_14393 = 3;
	}
	return Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_7;
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
		GlobalFunc_9035();
		Global_3068[Global_14393 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}




