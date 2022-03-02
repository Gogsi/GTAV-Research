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
	int iLocal_18[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	struct<16> Local_67 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_83[19];
	struct<16> Local_198[19];
	int iLocal_503 = 0;
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_42();
	}
	func_41();
	Global_16758 = 0;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_18 = 0;
	Global_14550 = 0;
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_38();
	func_37();
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 7;
	}
	iLocal_64 = MISC::GET_GAME_TIMER();
	Global_14397 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_63 == 0)
		{
			iLocal_65 = MISC::GET_GAME_TIMER();
			if ((iLocal_65 - iLocal_64) > 500)
			{
				iLocal_63 = 1;
			}
		}
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					if (Global_16758 == 0)
					{
						if (Global_2453243 == 0)
						{
							func_32();
							func_28();
						}
					}
					break;
				
				case 8:
					if (Global_16758 == 1)
					{
						func_5();
						func_32();
					}
					break;
				
				default:
					break;
			}
			if (Global_16758 == 0)
			{
				if (GlobalFunc_2002())
				{
					func_42();
				}
			}
			else if (GlobalFunc_2010(2, Global_14361, 0) || MISC::IS_BIT_SET(Global_2264, 12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					MISC::CLEAR_BIT(&Global_2264, 12);
					GlobalFunc_2011();
					Global_14371 = 1;
					Global_16758 = 0;
					if (Global_14393.f_1 > 3)
					{
						Global_14393.f_1 = 7;
					}
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
					{
						func_42();
					}
					GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_38();
					func_37();
					if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_29 > 0)
					{
						if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_31 == 1)
						{
							Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_29 = 4;
							Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_24 = 1;
						}
						else
						{
							Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_29 = 4;
							Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_42();
		}
		if (GlobalFunc_2001())
		{
			func_42();
		}
	}
}





void func_5()//Position - 0x335
{
	func_6();
}

void func_6()//Position - 0x341
{
	if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_24 == 1)
	{
		if (Global_14371 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_14364))
			{
				GlobalFunc_2011();
				Global_14371 = 1;
				GlobalFunc_9035();
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_27 == 1)
				{
					Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_99[0] = 0;
					Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_99[1] = 0;
					Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_99[Global_14393] = 0;
				}
				if (GlobalFunc_564(iLocal_57))
				{
				}
				else
				{
					Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_24 = 0;
					Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_28 = 0;
				}
				HUD::THEFEED_REMOVE_ITEM(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_16);
				GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				if (iLocal_55 > 0)
				{
					iLocal_55 = (iLocal_55 - 1);
				}
				func_37();
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 7;
					Global_16758 = 0;
				}
			}
		}
	}
	else if (Global_14371 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, Global_14365))
		{
			if (iLocal_59 == 1)
			{
				if (Global_14393.f_1 > 3)
				{
					StringCopy(&Global_67042, HUD::_GET_LABEL_TEXT(&Global_16733), 64);
					Global_67067 = 7;
					MISC::SET_BIT(&Global_2264, 10);
					Global_14393.f_1 = 6;
				}
				func_42();
			}
		}
	}
	if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_31 == 1)
	{
		if (Global_14371 == 0)
		{
			if (GlobalFunc_2010(2, Global_14365, 0))
			{
				GlobalFunc_7017();
				Global_14371 = 1;
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_29 = 2;
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_24 = 1;
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_31 = 0;
				MISC::CLEAR_BIT(&Global_2263, 17);
				Global_16758 = 0;
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 7;
				}
				GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
		}
	}
	if (Global_14371 == 0 && iLocal_63 == 1)
	{
		if (GlobalFunc_2010(2, Global_14362, 0))
		{
			Global_14371 = 1;
			if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_29 > 0)
			{
				GlobalFunc_7017();
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_29 = 3;
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_24 = 1;
				Global_16758 = 0;
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 7;
				}
				GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
			else if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_30 == 1)
			{
				GlobalFunc_7017();
				Global_1578 = 144;
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 10;
					if (GlobalFunc_5582() == 0)
					{
						GlobalFunc_5583();
					}
				}
				GlobalFunc_885("appContacts");
				Global_14391 = SYSTEM::START_NEW_SCRIPT("appContacts", 3800);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_1578 = Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_17;
				if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					GlobalFunc_5401(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					GlobalFunc_5401(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), "CELL_211", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
				}
				GlobalFunc_7923();
				func_42();
			}
		}
	}
}






















void func_28()//Position - 0x1C29
{
	struct<16> Var0;
	char* sVar16;
	int iVar17;
	
	if (Global_14371 == 0)
	{
		if ((GlobalFunc_2010(2, Global_14362, 0) || Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 1) || Global_16752 == 1)
		{
			if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 0 && Global_16752 == 0)
			{
				GlobalFunc_7017();
			}
			Global_14371 = 1;
			iLocal_63 = 0;
			iLocal_57 = iLocal_18[iLocal_55];
			if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_24 != 0)
			{
				if (Global_14393.f_1 > 3)
				{
					GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_2263, 17);
					Global_14393.f_1 = 8;
				}
				if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 1 || Global_16752 == 1)
				{
					iLocal_57 = iLocal_18[0];
					iLocal_56 = 0;
					if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 1)
					{
					}
					Global_16752 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_61 = 0;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
					uLocal_66 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_66) && iLocal_61 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_61 = 1;
						}
					}
					if (iLocal_61 == 1)
					{
						iLocal_62 = 0;
					}
					else
					{
						iLocal_62 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_66);
					}
					if (iLocal_62 < 0)
					{
						iLocal_62 = 0;
					}
					iLocal_57 = iLocal_18[iLocal_62];
					iLocal_56 = iLocal_62;
				}
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_28 = 1;
				iLocal_59 = 0;
				StringCopy(&Global_16733, "NO_HYPERLINK", 64);
				Var0 = { Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_16733 = { Var0 };
					iLocal_59 = 1;
					if (Global_14381)
					{
						GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::SET_BIT(&Global_2263, 17);
					Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_26 = 1;
					Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_24 = 2;
				}
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_26 == 0)
				{
					Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_24 = 1;
				}
				func_31();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GlobalFunc_726(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_32)
				{
					case 0:
						GlobalFunc_726(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_33));
						if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_67));
						}
						if ((Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_49);
						if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_67));
						}
						if ((Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_30(iLocal_57);
						break;
					
					case 5:
						func_30(iLocal_57);
						break;
					
					case 6:
						func_30(iLocal_57);
						break;
					
					case 7:
						func_30(iLocal_57);
						break;
					
					case 8:
						func_30(iLocal_57);
						break;
					
					case 9:
						func_30(iLocal_57);
						break;
					
					case 10:
						func_30(iLocal_57);
						break;
					
					case 11:
						func_30(iLocal_57);
						break;
				}
				if (Global_16761[iLocal_57] == 0)
				{
					GlobalFunc_726(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_17 /*29*/].f_7));
				}
				else
				{
					if (PED::IS_PEDHEADSHOT_VALID(Global_16761[iLocal_57]))
					{
						if (PED::IS_PEDHEADSHOT_READY(Global_16761[iLocal_57]))
						{
							sVar16 = PED::GET_PEDHEADSHOT_TXD_STRING(Global_16761[iLocal_57]);
						}
						else
						{
							sVar16 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar16 = "CHAR_DEFAULT";
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar16);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				Global_16758 = 1;
				GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				HUD::THEFEED_REMOVE_ITEM(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_16);
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_29 > 0)
				{
					if (Global_14381)
					{
						GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_30 == 1)
				{
					if (Global_14381)
					{
						GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_29 > 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/]), "CELL_FINV"))
					{
						if (Global_14381)
						{
							GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14381)
					{
						GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14381)
				{
					GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_24 == 2)
				{
					if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_31 == 1)
					{
						iLocal_59 = 0;
						if (Global_14381)
						{
							GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						MISC::SET_BIT(&Global_2263, 17);
					}
					else if (iLocal_59 == 0)
					{
						GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_2263, 17);
					}
				}
				else if (Global_14381)
				{
					GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					MISC::SET_BIT(&Global_2263, 17);
				}
				else
				{
					GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_2263, 17);
				}
				Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_18 = 0;
				Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 1 || Global_16752 == 1)
				{
					if (Global_16752)
					{
					}
					iVar17 = 1;
				}
				Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_18 = 0;
				Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_14393.f_1 = 3;
				}
			}
		}
		if (Global_2453243 == 0)
		{
			if (Global_68245)
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_14365);
				if (GlobalFunc_2010(2, Global_14365, 0))
				{
					Global_14371 = 1;
					Global_2453243 = 1;
				}
			}
		}
	}
}


void func_30(int iParam0)//Position - 0x2603
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_49)
	{
		case 1:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL01");
			break;
		
		case 2:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL02");
			break;
		
		case 3:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL03");
			break;
		
		case 4:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL04");
			break;
		
		case 5:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL05");
			break;
		
		case 6:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL06");
			break;
		
		case 7:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL07");
			break;
		
		case 8:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL08");
			break;
		
		case 9:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL09");
			break;
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/]));
	while (iVar0 < Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_49)
	{
		switch (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_32)
		{
			case 4:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2446554.f_1551[iVar0 /*4*/]));
				break;
			
			case 5:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683631[iVar0 /*4*/]));
				break;
			
			case 6:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683672[iVar0 /*4*/]));
				break;
			
			case 7:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683693[iVar0 /*4*/]));
				break;
			
			case 8:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683710[iVar0 /*4*/]));
				break;
			
			case 9:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683723[iVar0 /*4*/]));
				break;
			
			case 10:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683736[iVar0 /*4*/]));
				break;
			
			case 11:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1683749[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_31()//Position - 0x27A4
{
	int iVar0;
	
	if (iLocal_503)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_67);
	}
	iLocal_503 = 0;
	if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iLocal_57 /*104*/]), &(Local_83[iVar0 /*6*/])))
			{
				Local_67 = { Local_198[iVar0 /*16*/] };
				iLocal_503 = 1;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&Local_67, 0);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Local_67))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

void func_32()//Position - 0x2824
{
	if (iLocal_60)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_60 = 0;
		}
	}
	if (iLocal_60 == 0)
	{
		if (GlobalFunc_2010(2, Global_14369, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			if (iLocal_55 > 0)
			{
				iLocal_55 = (iLocal_55 - 1);
			}
			GlobalFunc_7021();
			iLocal_60 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (GlobalFunc_2010(2, Global_14370, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			iLocal_55++;
			if (iLocal_55 == iLocal_54)
			{
				iLocal_55 = 0;
			}
			GlobalFunc_7020();
			iLocal_60 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}





void func_37()//Position - 0x2969
{
	if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 0)
	{
		if (iLocal_56 < 0)
		{
			iLocal_56 = 0;
		}
		GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 6f, SYSTEM::TO_FLOAT(iLocal_56), -1082130432, -1082130432, -1082130432);
		GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_14381)
		{
			if (iLocal_54 > 0)
			{
				GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_54 > 0)
			{
				GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_68245)
		{
			GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2263, 17);
		}
		else
		{
			GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2263, 17);
		}
	}
	else
	{
		iLocal_56 = 0;
	}
}

void func_38()//Position - 0x2AA5
{
	int iVar0[35];
	int iVar36;
	int iVar37;
	int iVar38;
	
	iLocal_54 = 0;
	GlobalFunc_9035();
	iVar36 = 0;
	while (iVar36 < 34)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_42();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_18 = -1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_18.f_1 = 0;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_18.f_2 = 0;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_18.f_3 = 0;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_42();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar37 /*104*/].f_24 != 0)
				{
					if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar37 /*104*/].f_99[Global_14393] == 1)
					{
						if (GlobalFunc_1496(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar37 /*104*/].f_18, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_18))
						{
							iVar38 = iVar37;
							if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_28 == 0)
							{
								iLocal_58 = 33;
							}
							else
							{
								iLocal_58 = 34;
							}
						}
					}
				}
			}
			iVar37++;
		}
		iLocal_18[iVar36] = iVar38;
		iVar0[iVar38] = 1;
		if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_24 != 0)
		{
			if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_99[Global_14393] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar36);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_18.f_2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_18.f_1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_58);
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GlobalFunc_726(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_32)
				{
					case 0:
						GlobalFunc_726(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_33));
						if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_67));
						}
						if ((Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_49);
						if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_67));
						}
						if ((Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar38 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_30(iVar38);
						break;
					
					case 5:
						func_30(iVar38);
						break;
					
					case 6:
						func_30(iVar38);
						break;
					
					case 7:
						func_30(iVar38);
						break;
					
					case 8:
						func_30(iVar38);
						break;
					
					case 9:
						func_30(iVar38);
						break;
					
					case 10:
						func_30(iVar38);
						break;
					
					case 11:
						func_30(iVar38);
						break;
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar36 /*104*/].f_24 != 0)
		{
			if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar36 /*104*/].f_99[Global_14393] == 1)
			{
				iLocal_54++;
			}
		}
		iVar36++;
	}
}



void func_41()//Position - 0x3139
{
	StringCopy(&(Local_83[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_198[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_83[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_198[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_83[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_198[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_83[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_198[3 /*16*/]), "06_a_sext_stripperNikki", 64);
	StringCopy(&(Local_83[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_198[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_83[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_198[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_83[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_198[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_83[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_198[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_83[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_198[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_83[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_198[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_83[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_198[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_83[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_198[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_83[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_198[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_83[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_198[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_83[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_198[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_83[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_198[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_83[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_198[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_83[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_198[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_83[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_198[18 /*16*/]), "executiveproducer", 64);
}

void func_42()//Position - 0x32F9
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
	{
		GlobalFunc_6685(0);
	}
	if (iLocal_503)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_67);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}





