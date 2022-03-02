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
	int iLocal_17 = 0;
	int iLocal_18[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	struct<16> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_60[19];
	struct<16> Local_175[19];
	int iLocal_480 = 0;
	struct<3> Local_481 = { 0, 0, 0 } ;
	struct<3> Local_484 = { 0, 0, 0 } ;
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
		func_47();
	}
	func_46();
	Global_16758 = 0;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_18 = 0;
	Global_14550 = 0;
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_43();
	func_41();
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 7;
	}
	iLocal_41 = MISC::GET_GAME_TIMER();
	Global_14397 = 0;
	MOBILE::GET_MOBILE_PHONE_POSITION(&Local_484);
	Local_481 = { Local_484 };
	Local_481.x = (Local_481.x - 10f);
	Local_481.f_1 = (Local_481.f_1 + 20f);
	Global_16725 = 0;
	Global_16726 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_16726 == 0 && Global_16725 == 1)
		{
			func_40();
		}
		if (Global_16726 == 1 && Global_16725 == 0)
		{
			func_35();
		}
		if (iLocal_40 == 0)
		{
			iLocal_42 = MISC::GET_GAME_TIMER();
			if ((iLocal_42 - iLocal_41) > 500)
			{
				iLocal_40 = 1;
			}
		}
		if ((Global_14393.f_1 != 9 && Global_16726 == 0) && Global_16725 == 0)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					if (Global_16758 == 0)
					{
						if (Global_2453243 == 0)
						{
							func_30();
							func_27();
						}
					}
					break;
				
				case 8:
					if (Global_16758 == 1)
					{
						func_5();
						func_30();
					}
					break;
				
				default:
					break;
			}
			if (Global_16758 == 0)
			{
				if (GlobalFunc_2002())
				{
					Global_16725 = 1;
				}
			}
			else if (GlobalFunc_774(2, Global_14361, 0) || MISC::IS_BIT_SET(Global_2264, 12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2543383[iLocal_34 /*104*/]), "CELL_FINV"))
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
						func_47();
					}
					GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_43();
					func_41();
					if (Global_2543383[iLocal_34 /*104*/].f_29 > 0)
					{
						if (Global_2543383[iLocal_34 /*104*/].f_31 == 1)
						{
							Global_2543383[iLocal_34 /*104*/].f_29 = 4;
							Global_2543383[iLocal_34 /*104*/].f_24 = 1;
						}
						else
						{
							Global_2543383[iLocal_34 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_47();
		}
		if (GlobalFunc_2001())
		{
			func_47();
		}
	}
}





void func_5()//Position - 0x393
{
	func_6();
}

void func_6()//Position - 0x39F
{
	if (Global_2543383[iLocal_34 /*104*/].f_24 == 1)
	{
		if (Global_14371 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, Global_14364))
			{
				GlobalFunc_2011();
				Global_14371 = 1;
				GlobalFunc_9035();
				if (Global_2543383[iLocal_34 /*104*/].f_27 == 1)
				{
					Global_2543383[iLocal_34 /*104*/].f_99[0] = 0;
					Global_2543383[iLocal_34 /*104*/].f_99[1] = 0;
					Global_2543383[iLocal_34 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_2543383[iLocal_34 /*104*/].f_99[Global_14393] = 0;
				}
				if (GlobalFunc_564(iLocal_34))
				{
				}
				else
				{
					Global_2543383[iLocal_34 /*104*/].f_24 = 0;
					Global_2543383[iLocal_34 /*104*/].f_28 = 0;
				}
				HUD::THEFEED_REMOVE_ITEM(Global_2543383[iLocal_34 /*104*/].f_16);
				GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				if (iLocal_32 > 0)
				{
					iLocal_32 = (iLocal_32 - 1);
				}
				func_41();
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
			if (iLocal_36 == 1)
			{
				if (Global_14393.f_1 > 3)
				{
					StringCopy(&Global_67042, HUD::_GET_LABEL_TEXT(&Global_16733), 64);
					Global_67067 = 7;
					MISC::SET_BIT(&Global_2264, 10);
					Global_14393.f_1 = 6;
				}
				func_47();
			}
		}
	}
	if (Global_2543383[iLocal_34 /*104*/].f_31 == 1)
	{
		if (Global_14371 == 0)
		{
			if (GlobalFunc_774(2, Global_14365, 0))
			{
				GlobalFunc_7017();
				Global_14371 = 1;
				Global_2543383[iLocal_34 /*104*/].f_29 = 2;
				Global_2543383[iLocal_34 /*104*/].f_24 = 1;
				Global_2543383[iLocal_34 /*104*/].f_31 = 0;
				MISC::CLEAR_BIT(&Global_2263, 17);
				Global_16758 = 0;
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 7;
				}
				GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_41();
			}
		}
	}
	if (Global_14371 == 0 && iLocal_40 == 1)
	{
		if (GlobalFunc_774(2, Global_14362, 0))
		{
			Global_14371 = 1;
			if (Global_2543383[iLocal_34 /*104*/].f_29 > 0)
			{
				GlobalFunc_7017();
				Global_2543383[iLocal_34 /*104*/].f_29 = 3;
				Global_2543383[iLocal_34 /*104*/].f_24 = 1;
				Global_16758 = 0;
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 7;
				}
				GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_41();
			}
			else if (Global_2543383[iLocal_34 /*104*/].f_30 == 1)
			{
				GlobalFunc_7017();
				Global_1578 = 144;
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 10;
					GlobalFunc_5583();
				}
				GlobalFunc_885("appContacts");
				Global_14391 = SYSTEM::START_NEW_SCRIPT("appContacts", 3800);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_1578 = Global_2543383[iLocal_34 /*104*/].f_17;
				if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					GlobalFunc_5401(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					GlobalFunc_5401(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), "CELL_211", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
				}
				GlobalFunc_7923();
				func_47();
			}
		}
	}
}





















void func_27()//Position - 0x1A42
{
	struct<16> Var0;
	
	if (Global_14371 == 0)
	{
		if ((GlobalFunc_774(2, Global_14362, 0) || Global_2544633 == 1) || Global_16752 == 1)
		{
			if (Global_2544633 == 0 && Global_16752 == 0)
			{
				GlobalFunc_7017();
			}
			Global_14371 = 1;
			iLocal_40 = 0;
			GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2263, 17);
			iLocal_34 = iLocal_18[iLocal_32];
			if (Global_2543383[iLocal_34 /*104*/].f_24 != 0)
			{
				if (Global_14393.f_1 > 3)
				{
					Global_14393.f_1 = 8;
				}
				if (Global_2544633 == 1 || Global_16752 == 1)
				{
					iLocal_34 = iLocal_18[0];
					iLocal_33 = 0;
					if (Global_2544633 == 1)
					{
					}
					Global_16752 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_38 = 0;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
					uLocal_43 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_43) && iLocal_38 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_38 = 1;
						}
					}
					if (iLocal_38 == 1)
					{
						iLocal_39 = 0;
					}
					else
					{
						iLocal_39 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_43);
					}
					if (iLocal_39 < 0)
					{
						iLocal_39 = 0;
					}
					iLocal_34 = iLocal_18[iLocal_32];
					iLocal_33 = iLocal_32;
				}
				Global_2543383[iLocal_34 /*104*/].f_28 = 1;
				iLocal_36 = 0;
				StringCopy(&Global_16733, "NO_HYPERLINK", 64);
				Var0 = { Global_2543383[iLocal_34 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_16733 = { Var0 };
					iLocal_36 = 1;
					if (Global_14381)
					{
						GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::SET_BIT(&Global_2263, 17);
					Global_2543383[iLocal_34 /*104*/].f_26 = 1;
					Global_2543383[iLocal_34 /*104*/].f_24 = 2;
				}
				if (Global_2543383[iLocal_34 /*104*/].f_26 == 0)
				{
					Global_2543383[iLocal_34 /*104*/].f_24 = 1;
				}
				func_29();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GlobalFunc_726("CELL_1");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_TO_FIELD");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				if (Global_2543383[iLocal_34 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[iLocal_34 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_FROM_FIELD");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_2543383[iLocal_34 /*104*/].f_17 /*29*/].f_3));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				switch (Global_2543383[iLocal_34 /*104*/].f_32)
				{
					case 0:
						GlobalFunc_726(&(Global_2543383[iLocal_34 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_2543383[iLocal_34 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[iLocal_34 /*104*/].f_33));
						if (Global_2543383[iLocal_34 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_2543383[iLocal_34 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[iLocal_34 /*104*/].f_67));
						}
						if ((Global_2543383[iLocal_34 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_2543383[iLocal_34 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_2543383[iLocal_34 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2543383[iLocal_34 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543383[iLocal_34 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[iLocal_34 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2543383[iLocal_34 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543383[iLocal_34 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[iLocal_34 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_2543383[iLocal_34 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_2543383[iLocal_34 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_2543383[iLocal_34 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[iLocal_34 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_2543383[iLocal_34 /*104*/].f_49);
						if (Global_2543383[iLocal_34 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_2543383[iLocal_34 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[iLocal_34 /*104*/].f_67));
						}
						if ((Global_2543383[iLocal_34 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_2543383[iLocal_34 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_2543383[iLocal_34 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2543383[iLocal_34 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543383[iLocal_34 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[iLocal_34 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2543383[iLocal_34 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543383[iLocal_34 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[iLocal_34 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_28(iLocal_34);
						break;
					
					case 5:
						func_28(iLocal_34);
						break;
					
					case 6:
						func_28(iLocal_34);
						break;
					
					case 7:
						func_28(iLocal_34);
						break;
					
					case 8:
						func_28(iLocal_34);
						break;
					
					case 9:
						func_28(iLocal_34);
						break;
					
					case 10:
						func_28(iLocal_34);
						break;
					
					case 11:
						func_28(iLocal_34);
						break;
				}
				if (Global_2543383[iLocal_34 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[iLocal_34 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GlobalFunc_726(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_2543383[iLocal_34 /*104*/].f_17 /*29*/].f_3));
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				Global_16758 = 1;
				GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				HUD::THEFEED_REMOVE_ITEM(Global_2543383[iLocal_34 /*104*/].f_16);
				if (Global_2543383[iLocal_34 /*104*/].f_29 > 0)
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
				else if (Global_2543383[iLocal_34 /*104*/].f_30 == 1)
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
				if (Global_2543383[iLocal_34 /*104*/].f_29 > 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_2543383[iLocal_34 /*104*/]), "CELL_FINV"))
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
						GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
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
				if (Global_2543383[iLocal_34 /*104*/].f_24 == 2)
				{
					if (Global_2543383[iLocal_34 /*104*/].f_31 == 1)
					{
						iLocal_36 = 0;
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
					else if (iLocal_36 == 0)
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
				Global_2544633 = 0;
			}
			else
			{
				Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_18 = 0;
				Global_2544633 = 0;
			}
		}
		if (Global_2453243 == 0)
		{
			if (Global_68245)
			{
			}
		}
	}
}

void func_28(int iParam0)//Position - 0x227C
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

void func_29()//Position - 0x241D
{
	int iVar0;
	
	if (iLocal_480)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_44);
	}
	iLocal_480 = 0;
	if (Global_2543383[iLocal_34 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2543383[iLocal_34 /*104*/]), &(Local_60[iVar0 /*6*/])))
			{
				Local_44 = { Local_175[iVar0 /*16*/] };
				iLocal_480 = 1;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&Local_44, 0);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&Local_44))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

void func_30()//Position - 0x2497
{
	if (iLocal_37)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_37 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (GlobalFunc_774(2, 181, 0))
		{
			if (iLocal_32 > 0)
			{
				iLocal_32 = (iLocal_32 - 1);
			}
			GlobalFunc_7021();
		}
		if (GlobalFunc_774(2, 180, 0))
		{
			iLocal_32++;
			if (iLocal_32 == iLocal_31)
			{
				iLocal_32 = 0;
			}
			GlobalFunc_7020();
		}
	}
	if (iLocal_37 == 0)
	{
		if (GlobalFunc_774(2, Global_14369, 0))
		{
			if (iLocal_32 > 0)
			{
				iLocal_32 = (iLocal_32 - 1);
			}
			GlobalFunc_7021();
			iLocal_37 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (GlobalFunc_774(2, Global_14370, 0))
		{
			iLocal_32++;
			if (iLocal_32 == iLocal_31)
			{
				iLocal_32 = 0;
			}
			GlobalFunc_7020();
			iLocal_37 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}





void func_35()//Position - 0x2604
{
	float fVar0;
	
	fVar0 = func_36(Local_484, Local_481, Global_14353, -90f, 0f, 90f, 350f, 0);
	MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_16726 = 0;
		iLocal_17 = 0;
	}
}

float func_36(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)//Position - 0x2652
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_2544851 == 0)
	{
		if (MISC::IS_BIT_SET(Global_2263, 14) && Global_14393.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_14346[Global_14338 /*3*/].f_1 == Var0.f_1)
			{
				Global_2544851 = 1;
			}
		}
	}
	if (GlobalFunc_5582() && Global_2544851 == 0)
	{
		return 2f;
	}
	if (iLocal_17 == 0)
	{
		iLocal_17 = MISC::GET_GAME_TIMER();
	}
	fVar3 = GlobalFunc_253((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_17)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SYSTEM::SIN((fVar3 * 90f));
		}
		Global_14321 = { GlobalFunc_2031(Param0, Param3, fVar4) };
		Global_14324 = { GlobalFunc_2031(Param6, Param9, fVar4) };
	}
	else
	{
		Global_14321 = { Param3 };
		Global_14324 = { Param9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_14324, 0);
	return fVar3;
}




void func_40()//Position - 0x29B8
{
	float fVar0;
	
	fVar0 = func_36(Local_481, Local_484, -90f, 0f, 90f, Global_14353, 350f, 0);
	MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_16725 = 0;
		func_47();
		iLocal_17 = 0;
	}
}

void func_41()//Position - 0x2A0C
{
	if (Global_2544633 == 0)
	{
		if (iLocal_33 < 0)
		{
			iLocal_33 = 0;
		}
		GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 8f, SYSTEM::TO_FLOAT(iLocal_33), -1082130432, -1082130432, -1082130432);
		if (Global_14381)
		{
			if (iLocal_31 > 0)
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
			if (iLocal_31 > 0)
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
			GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
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
		iLocal_33 = 0;
	}
}


void func_43()//Position - 0x2B99
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	int iVar15;
	struct<8> Var16;
	
	iLocal_31 = 0;
	GlobalFunc_9035();
	iVar13 = 0;
	while (iVar13 < 11)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_47();
		}
		iVar14 = 0;
		iVar15 = 11;
		Global_2543383[iVar15 /*104*/].f_18 = -1;
		Global_2543383[iVar15 /*104*/].f_18.f_1 = 0;
		Global_2543383[iVar15 /*104*/].f_18.f_2 = 0;
		Global_2543383[iVar15 /*104*/].f_18.f_3 = 0;
		Global_2543383[iVar15 /*104*/].f_18.f_5 = 0;
		while (iVar14 < 12)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_47();
			}
			if (iVar0[iVar14] == 0)
			{
				if (Global_2543383[iVar14 /*104*/].f_24 != 0)
				{
					if (Global_2543383[iVar14 /*104*/].f_99[Global_14393] == 1)
					{
						if (GlobalFunc_1496(Global_2543383[iVar14 /*104*/].f_18, Global_2543383[iVar15 /*104*/].f_18))
						{
							iVar15 = iVar14;
							if (Global_2543383[iVar15 /*104*/].f_28 == 0)
							{
								iLocal_35 = 0;
							}
							else
							{
								iLocal_35 = 1;
							}
						}
					}
				}
			}
			iVar14++;
		}
		iLocal_18[iVar13] = iVar15;
		iVar0[iVar15] = 1;
		if (Global_2543383[iVar15 /*104*/].f_24 != 0)
		{
			if (Global_2543383[iVar15 /*104*/].f_99[Global_14393] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_35);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				if (Global_2543383[iVar15 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543383[iVar15 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GlobalFunc_726(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_2543383[iVar15 /*104*/].f_17 /*29*/].f_3));
				}
				Var16 = { Global_2543383[iVar15 /*104*/] };
				StringConCat(&Var16, "_SUB", 64);
				GlobalFunc_726(&Var16);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		if (Global_2543383[iVar13 /*104*/].f_24 != 0)
		{
			if (Global_2543383[iVar13 /*104*/].f_99[Global_14393] == 1)
			{
				iLocal_31++;
			}
		}
		iVar13++;
	}
}



void func_46()//Position - 0x2ECC
{
	StringCopy(&(Local_60[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_175[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_175[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_175[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_175[3 /*16*/]), "06_a_sext_stripperNikki", 64);
	StringCopy(&(Local_60[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_175[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_60[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_175[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_60[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_175[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_175[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_175[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_175[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_175[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_175[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_175[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_60[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_175[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_60[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_175[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_60[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_175[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_175[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_175[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_175[18 /*16*/]), "executiveproducer", 64);
}

void func_47()//Position - 0x308C
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
	{
		GlobalFunc_6685(0);
	}
	if (iLocal_480)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&Local_44);
	}
	Global_16726 = 0;
	Global_16725 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}





