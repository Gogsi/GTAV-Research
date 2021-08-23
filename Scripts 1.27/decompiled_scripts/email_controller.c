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
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0[120];
	int iVar121;
	int iVar122;
	int iVar123;
	bool bVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	bool bVar131;
	bool bVar132;
	bool bVar133;
	int iVar134;
	bool bVar135;
	bool bVar136;
	int iVar137;
	
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_67();
	}
	func_66();
	func_65();
	Global_35959 = 0;
	iVar121 = func_58();
	iVar122 = func_58();
	iVar123 = 2000;
	Global_35961 = 1;
	bVar124 = true;
	while (true)
	{
		iVar125 = 0;
		if (bVar124)
		{
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, (4 - 1)))
			{
				func_57(26);
				bVar124 = false;
			}
		}
		if (!Global_35960 && MISC::GET_GAME_TIMER() > Global_35464)
		{
			iVar125 = 0;
			while (iVar125 < 120)
			{
				if ((Global_39271[iVar125 /*46*/] && !Global_39271[iVar125 /*46*/].f_1) && !Global_39271[iVar125 /*46*/].f_45)
				{
					iVar0[iVar125] = (iVar0[iVar125] + iVar123);
					if (iVar0[iVar125] > Global_39271[iVar125 /*46*/].f_43)
					{
						if (func_33(7, 144, 2, -1, 0))
						{
							func_31(iVar125, 0);
							iVar0[iVar125] = 0;
							Global_35961 = 1;
						}
					}
				}
				SYSTEM::WAIT(0);
				iVar125++;
			}
			iVar121 = func_58();
			iVar126 = 0;
			iVar127 = 0;
			iVar128 = 0;
			func_19(iVar121, iVar122, &iVar127, &iVar127, &iVar126, &iVar127, &iVar127, &iVar127);
			if (iVar126 < 0)
			{
				iVar126 = (iVar126 * -1);
			}
			if (iVar126 > 0 && Global_14393.f_1 == 3)
			{
				iVar122 = iVar121;
				if (Global_46576 > 0)
				{
					iVar129 = Global_46576;
					iVar130 = 0;
					while (iVar129 != 0)
					{
						if ((Global_46577[iVar130 /*53*/].f_52 != 0 && iVar130 < 8) && Global_46577[iVar130 /*53*/].f_4)
						{
							Global_46577[iVar130 /*53*/].f_2 = (Global_46577[iVar130 /*53*/].f_2 - iVar126);
							bVar131 = false;
							bVar132 = false;
							bVar133 = false;
							iVar134 = 0;
							while (!bVar133)
							{
								if (Global_45154[iVar134 /*203*/].f_1 != Global_46577[iVar130 /*53*/].f_52)
								{
									iVar134++;
								}
								else
								{
									bVar132 = true;
									bVar133 = true;
								}
								if (iVar134 == 7)
								{
									bVar133 = true;
									Global_46577[iVar130 /*53*/].f_52 = 0;
									bVar131 = true;
								}
							}
							if (!bVar132)
							{
								bVar131 = true;
								Global_46577[iVar130 /*53*/].f_4 = 0;
							}
							else if (Global_46577[iVar130 /*53*/].f_2 < 1)
							{
								if (func_33(7, 145, 2, -1, 0))
								{
									bVar135 = false;
									if (Global_46577[iVar130 /*53*/].f_5 || Global_46577[iVar130 /*53*/].f_10 > 0)
									{
										bVar135 = true;
									}
									if (func_16(Global_46577[iVar130 /*53*/], Global_46577[iVar130 /*53*/].f_1, bVar135))
									{
										bVar136 = true;
										if (Global_46577[iVar130 /*53*/].f_10 > 0)
										{
											bVar136 = false;
										}
										if (Global_46577[iVar130 /*53*/].f_5)
										{
											func_15(Global_46577[iVar130 /*53*/], &(Global_46577[iVar130 /*53*/].f_6), bVar136);
										}
										if (Global_46577[iVar130 /*53*/].f_10 > 0)
										{
											iVar128 = 0;
											iVar128 = 0;
											while (iVar128 < Global_46577[iVar130 /*53*/].f_10)
											{
												func_14(Global_46577[iVar130 /*53*/], &(Global_46577[iVar130 /*53*/].f_11[iVar128 /*4*/]));
												iVar128++;
											}
										}
										if (bVar135 && !bVar136)
										{
											func_1(Global_46577[iVar130 /*53*/]);
										}
										func_57(Global_46577[iVar130 /*53*/]);
									}
									Global_46577[iVar130 /*53*/].f_52 = 0;
									Global_46577[iVar130 /*53*/].f_5 = 0;
									Global_46577[iVar130 /*53*/].f_2 = 0;
									bVar131 = true;
									Global_46577[iVar130 /*53*/].f_4 = 0;
								}
							}
							if (bVar131)
							{
								Global_46576 = (Global_46576 - 1);
							}
							iVar129 = (iVar129 - 1);
						}
						iVar130++;
						if (iVar130 == 8)
						{
							iVar129 = 0;
						}
						SYSTEM::WAIT(0);
					}
				}
			}
		}
		SYSTEM::WAIT(iVar123);
		Global_35962 = 0;
		Global_35963 = 0;
		Global_35964 = 0;
		iVar137 = Global_44792[0 /*120*/];
		if (iVar137 > 16)
		{
			iVar137 = 16;
		}
		iVar125 = 0;
		while (iVar125 < iVar137)
		{
			if (!Global_44792[0 /*120*/].f_69[iVar125])
			{
				Global_35962++;
			}
			iVar125++;
		}
		iVar137 = Global_44792[1 /*120*/];
		if (iVar137 > 16)
		{
			iVar137 = 16;
		}
		iVar125 = 0;
		while (iVar125 < iVar137)
		{
			if (!Global_44792[1 /*120*/].f_69[iVar125])
			{
				Global_35963++;
			}
			iVar125++;
		}
		iVar137 = Global_44792[2 /*120*/];
		if (iVar137 > 16)
		{
			iVar137 = 16;
		}
		iVar125 = 0;
		while (iVar125 < iVar137)
		{
			if (!Global_44792[2 /*120*/].f_69[iVar125])
			{
				Global_35964++;
			}
			iVar125++;
		}
		SYSTEM::WAIT(iVar123);
	}
}

void func_1(int iParam0)//Position - 0x439
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_45154[iVar0 /*203*/].f_9 - 1);
	if (!Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_12(Global_35970[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		func_2(1, Global_35970[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_35970[iVar1 /*12*/].f_3)
		{
			case 0:
				func_2(0, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_2(1, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_2(2, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_2(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x7A5
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_6();
	bVar1 = false;
	StringCopy(&cVar2, func_5(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1");
				break;
			
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3");
				break;
			
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2");
				break;
			
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_3(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, 0, 2, HUD::_GET_LABEL_TEXT(func_4(iParam1)), 0));
		}
		else
		{
			func_3(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, HUD::_GET_LABEL_TEXT(func_4(iParam1)), 0));
		}
		switch (Global_14393)
		{
			case 0:
				StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
				Global_35962++;
				if (Global_35962 > 16)
				{
					Global_35962 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
				Global_35964++;
				if (Global_35964 > 16)
				{
					Global_35964 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
				Global_35963++;
				if (Global_35963 > 16)
				{
					Global_35963 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_14382, 1);
	}
}

void func_3(var uParam0)//Position - 0x983
{
	Global_35965[Global_35969] = uParam0;
	Global_16750 = 1;
	Global_16749 = uParam0;
	Global_35969++;
	if (Global_35969 == 3)
	{
		Global_35969 = 0;
	}
}

char* func_4(int iParam0)//Position - 0x9B1
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_5(int iParam0, int iParam1)//Position - 0xD17
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/].f_7));
		
		case 1:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/].f_7));
		
		case 2:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/].f_7));
		
		case 7:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[12 /*29*/].f_7));
		
		case 4:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[60 /*29*/].f_7));
		
		case 6:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[62 /*29*/].f_7));
		
		case 3:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[14 /*29*/].f_7));
		
		case 16:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[97 /*29*/].f_7));
		
		case 19:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[99 /*29*/].f_7));
		
		case 15:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[15 /*29*/].f_7));
		
		case 26:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[30 /*29*/].f_7));
		
		case 27:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[17 /*29*/].f_7));
		
		case 29:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[20 /*29*/].f_7));
		
		case 30:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[43 /*29*/].f_7));
		
		case 31:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[44 /*29*/].f_7));
		
		case 32:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[19 /*29*/].f_7));
		
		case 34:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[40 /*29*/].f_7));
		
		case 36:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[22 /*29*/].f_7));
		
		case 38:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[122 /*29*/].f_7));
		
		case 40:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[125 /*29*/].f_7));
		
		case 41:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[113 /*29*/].f_7));
		
		case 42:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[126 /*29*/].f_7));
		
		case 43:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[127 /*29*/].f_7));
		
		case 44:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[124 /*29*/].f_7));
		
		case 45:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[114 /*29*/].f_7));
		
		case 46:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[115 /*29*/].f_7));
		
		case 47:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[116 /*29*/].f_7));
		
		case 48:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[123 /*29*/].f_7));
		
		case 49:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[117 /*29*/].f_7));
		
		case 50:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[118 /*29*/].f_7));
		
		case 51:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[119 /*29*/].f_7));
		
		case 52:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[120 /*29*/].f_7));
		
		case 53:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

int func_6()//Position - 0x1173
{
	func_7();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_7()//Position - 0x118C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_11(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_10(PLAYER::PLAYER_PED_ID());
			if (func_9(iVar0) && (!func_8(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_9(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
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

bool func_8(int iParam0)//Position - 0x1289
{
	return Global_34913 == iParam0;
}

bool func_9(int iParam0)//Position - 0x1297
{
	return iParam0 < 3;
}

int func_10(int iParam0)//Position - 0x12A3
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)//Position - 0x12E0
{
	if (func_9(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

struct<16> func_12(int iParam0)//Position - 0x130A
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_13(int iParam0)//Position - 0x133B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_45154[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_45154[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_45154[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_14(int iParam0, char* sParam1)//Position - 0x139F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

void func_15(int iParam0, char* sParam1, bool bParam2)//Position - 0x1454
{
	int iVar0;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_1(iParam0);
	}
}

int func_16(int iParam0, int iParam1, bool bParam2)//Position - 0x157B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_18(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_45154[iVar0 /*203*/].f_2 = iParam0;
	Global_45154[iVar0 /*203*/].f_10[Global_45154[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_45154[iVar0 /*203*/].f_10[Global_45154[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_45154[iVar0 /*203*/].f_10[Global_45154[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_45154[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45154[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45154[iVar0 /*203*/].f_4[iVar1] == Global_35970[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45154[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45154[iVar0 /*203*/].f_4[Global_45154[iVar0 /*203*/].f_3] = Global_35970[iParam1 /*12*/].f_3;
			Global_45154[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45154[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45154[iVar0 /*203*/].f_4[iVar1] == Global_35970[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45154[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45154[iVar0 /*203*/].f_4[Global_45154[iVar0 /*203*/].f_3] = Global_35970[iParam1 /*12*/].f_2;
			Global_45154[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_45154[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_45154[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_17(Global_45154[iVar0 /*203*/].f_4[iVar1], Global_45154[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1777
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_39271[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_39271[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_12(Global_35970[iVar20 /*12*/].f_1) };
		if (Global_35970[iVar20 /*12*/].f_2 == iParam0 && !Global_35970[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_35970[iVar20 /*12*/].f_2;
		iVar0 = Global_44792[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_44792[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_35962 = (Global_35962 - 1);
						if (Global_35962 < 0)
						{
							Global_35962 = 0;
						}
						break;
					
					case 1:
						Global_35963 = (Global_35963 - 1);
						if (Global_35963 < 0)
						{
							Global_35963 = 0;
						}
						break;
					
					case 2:
						Global_35964 = (Global_35964 - 1);
						if (Global_35964 < 0)
						{
							Global_35964 = 0;
						}
						break;
					}
				}
		}
		Global_44792[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_44792[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_44792[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_44792[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_44792[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_44792[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_35962 = (Global_35962 - 1);
						if (Global_35962 < 0)
						{
							Global_35962 = 0;
						}
						break;
					
					case 1:
						Global_35963 = (Global_35963 - 1);
						if (Global_35963 < 0)
						{
							Global_35963 = 0;
						}
						break;
					
					case 2:
						Global_35964 = (Global_35964 - 1);
						if (Global_35964 < 0)
						{
							Global_35964 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_45154[iVar24 /*203*/].f_1 == iParam1 && Global_45154[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_44792[iParam0 /*120*/].f_18[iVar0] = Global_45154[iVar23 /*203*/].f_1;
		Global_44792[iParam0 /*120*/].f_1[iVar0] = (Global_45154[iVar23 /*203*/].f_9 - 1);
		Global_44792[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_44792[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_44792[iParam0 /*120*/]++;
		iVar25 = Global_44792[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_45154[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_35970[iVar26 /*12*/].f_2;
		if (Global_45154[iVar23 /*203*/].f_10[(Global_45154[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_45154[iVar23 /*203*/].f_10[(Global_45154[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_12(Global_35970[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_44792[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_2(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_2(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_2(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_2(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_18(int iParam0, bool bParam1)//Position - 0x1B4A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_13(iParam0);
	if (iVar0 > -1)
	{
		if (Global_45154[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45154[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45154[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_45154[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_45154[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_45154[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_45154[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_45154[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_44792[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_44792[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_44792[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_44792[iVar6 /*120*/].f_18[iVar8] == Global_45154[iVar4 /*203*/].f_1)
							{
								if (Global_44792[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_35962 = (Global_35962 - 1);
											break;
										
										case 1:
											Global_35963 = (Global_35963 - 1);
											break;
										
										case 2:
											Global_35964 = (Global_35964 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_45154[iVar4 /*203*/].f_2 = iParam0;
	Global_45154[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_45154[iVar4 /*203*/] = 1;
	}
	Global_SAVE_DATA.EMAIL_DATA.f_310++;
	if (Global_SAVE_DATA.EMAIL_DATA.f_310 == 0)
	{
		Global_SAVE_DATA.EMAIL_DATA.f_310 = 1;
	}
	Global_45154[iVar4 /*203*/].f_1 = Global_SAVE_DATA.EMAIL_DATA.f_310;
	Global_45154[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_19(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1D62
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_29(iParam0, iParam1))
	{
		iVar0 = func_28(iParam1);
		iVar1 = func_26(iParam0);
		iVar2 = (func_26(iParam0) - func_26(iParam1));
		iVar3 = (func_28(iParam0) - func_28(iParam1));
		iVar4 = (func_25(iParam0) - func_25(iParam1));
		iVar5 = (func_24(iParam0) - func_24(iParam1));
		iVar6 = (func_23(iParam0) - func_23(iParam1));
		iVar7 = (func_22(iParam0) - func_22(iParam1));
	}
	else
	{
		iVar0 = func_28(iParam0);
		iVar1 = func_26(iParam1);
		iVar2 = (func_26(iParam1) - func_26(iParam0));
		iVar3 = (func_28(iParam1) - func_28(iParam0));
		iVar4 = (func_25(iParam1) - func_25(iParam0));
		iVar5 = (func_24(iParam1) - func_24(iParam0));
		iVar6 = (func_23(iParam1) - func_23(iParam0));
		iVar7 = (func_22(iParam1) - func_22(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_21(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_20(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

float func_20(float fParam0, float fParam1, float fParam2)//Position - 0x1F63
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_21(int iParam0, int iParam1)//Position - 0x1FA5
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_22(int iParam0)//Position - 0x2047
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_23(int iParam0)//Position - 0x205A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_24(int iParam0)//Position - 0x206D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_25(int iParam0)//Position - 0x2080
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_26(int iParam0)//Position - 0x2092
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_27(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_27(bool bParam0, int iParam1, int iParam2)//Position - 0x20B7
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_28(int iParam0)//Position - 0x20CE
{
	return iParam0 & 15;
}

int func_29(int iParam0, int iParam1)//Position - 0x20DB
{
	int iVar0;
	int iVar1;
	
	if (!func_30(iParam1) || !func_30(iParam0))
	{
		return 1;
	}
	iVar0 = func_26(iParam0);
	iVar1 = func_26(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_28(iParam0);
	iVar1 = func_28(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_23(iParam0);
	iVar1 = func_23(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_22(iParam0);
	iVar1 = func_22(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x21E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_22(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_23(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_24(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_26(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_28(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_25(iParam0);
	if (iVar5 < 1 || iVar5 > func_21(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_31(int iParam0, bool bParam1)//Position - 0x22C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_39271[iParam0 /*46*/] && !Global_39271[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_39271[iParam0 /*46*/].f_31 == Global_39271[iParam0 /*46*/].f_30)
	{
		iVar0 = (Global_39271[iParam0 /*46*/].f_42 - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_35970[Global_39271[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_39271[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_39271[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_39271[iParam0 /*46*/].f_8[Global_39271[iParam0 /*46*/].f_31];
	Global_39271[iParam0 /*46*/].f_31++;
	func_32(iParam0, iVar1);
	Global_39271[iParam0 /*46*/].f_45 = Global_35970[iVar1 /*12*/].f_10;
	Global_39271[iParam0 /*46*/].f_43 = Global_35970[iVar1 /*12*/].f_11;
	iVar2 = Global_39271[iParam0 /*46*/].f_2;
	func_17(Global_35970[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_39271[iParam0 /*46*/].f_3[iVar3] != Global_35970[iVar1 /*12*/].f_2 && Global_39271[iParam0 /*46*/].f_3[iVar3] != Global_35970[iVar1 /*12*/].f_3)
		{
			func_17(Global_39271[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_39271[iParam0 /*46*/].f_31 == Global_39271[iParam0 /*46*/].f_30)
	{
		if (Global_35970[Global_39271[iParam0 /*46*/].f_32[(Global_39271[iParam0 /*46*/].f_42 - 1)] /*12*/].f_4 == 0)
		{
			Global_39271[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

int func_32(int iParam0, var uParam1)//Position - 0x245F
{
	if (Global_39271[iParam0 /*46*/].f_42 >= 9)
	{
		return 0;
	}
	Global_39271[iParam0 /*46*/].f_32[Global_39271[iParam0 /*46*/].f_42] = uParam1;
	Global_39271[iParam0 /*46*/].f_42++;
	return 1;
}

int func_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x24A4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[16];
	int iVar22[2];
	int iVar25;
	int iVar26;
	int iVar27;
	
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_56())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 0;
	}
	if (func_55() && iParam2 < 4)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_53(PLAYER::PLAYER_PED_ID()))
		{
			if (MISC::IS_BIT_SET(iParam0, func_52()) && !MISC::IS_BIT_SET(iParam4, 19))
			{
				return 0;
			}
		}
	}
	if (Global_68243)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (Global_86374)
	{
		return 0;
	}
	if ((func_51() || (Global_17098.f_4 && Global_17098.f_104 == 4)) || func_50())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 18))
	{
		if (!MISC::IS_BIT_SET(iParam0, func_52()))
		{
			return 0;
		}
	}
	iVar0 = 1;
	if (((Global_89962 == 13 || Global_89962 == 10) || Global_89962 == 11) || Global_89962 == 12)
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	else if (iParam2 != 5)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
		{
			return 0;
		}
		if (MISC::IS_AUTO_SAVE_IN_PROGRESS())
		{
			return 0;
		}
		if (Global_87295)
		{
			return 0;
		}
		if (func_43(50f, 1) != -1)
		{
			return 0;
		}
		if (((((iParam1 == 17 || iParam1 == 19) || iParam1 == 14) || iParam1 == 0) || iParam1 == 1) || iParam1 == 2)
		{
			if (MISC::IS_BIT_SET(iParam0, func_52()))
			{
				iVar1 = func_42(func_6());
				iVar2 = func_42(iParam1);
				iVar3 = func_41(iVar1, iVar2);
				if (iVar3 < 9)
				{
					if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar3 /*19*/].f_8 == 1 || Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar3 /*19*/].f_8 == 2)
					{
						if (func_40(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar3 /*19*/].f_5)))
						{
							if (func_37(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar3 /*19*/].f_5)) < 30f)
							{
								return 0;
							}
						}
					}
				}
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 2)
	{
		return 0;
	}
	if (func_36())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 3))
	{
		if (Global_96400)
		{
			return 0;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return 0;
			}
		}
		if (Global_96066.f_19 != 0)
		{
			return 0;
		}
		if (Global_34913 == 5)
		{
			return 0;
		}
	}
	if (iParam3 != -1)
	{
		if (func_35(PLAYER::PLAYER_PED_ID(), iParam3, 0))
		{
			return 0;
		}
	}
	iVar4 = func_6();
	if (func_9(iVar4))
	{
		PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		switch (iParam1)
		{
			case 4:
				switch (iVar4)
				{
					case 0:
						iVar22[0] = func_11(1);
						iVar22[1] = func_11(2);
						break;
					
					case 1:
						iVar22[0] = func_11(0);
						iVar22[1] = func_11(2);
						break;
					
					case 2:
						iVar22[0] = func_11(0);
						iVar22[1] = func_11(1);
						break;
				}
				break;
			
			case 5:
				iVar22[0] = func_11(1);
				iVar22[1] = func_11(2);
				break;
			
			case 6:
				iVar22[0] = func_34(12);
				iVar22[1] = func_11(1);
				break;
			
			case 7:
				iVar22[0] = func_34(12);
				iVar22[1] = func_11(0);
				break;
			
			case 8:
				iVar22[0] = func_11(0);
				iVar22[1] = func_11(1);
				break;
			
			case 9:
				iVar22[0] = func_11(0);
				iVar22[1] = func_11(2);
				break;
			
			case 10:
				iVar22[0] = func_34(23);
				iVar22[1] = func_11(0);
				break;
			
			case 11:
				iVar22[0] = func_34(23);
				iVar22[1] = func_11(0);
				break;
			
			default:
				if (func_9(iParam1))
				{
					iVar22[0] = func_11(iParam1);
				}
				else
				{
					iVar22[0] = func_34(iParam1);
				}
				iVar22[1] = 0;
				break;
		}
		iVar25 = 0;
		while (iVar25 < 2)
		{
			if (iVar22[iVar25] != 0)
			{
				iVar26 = 0;
				while (iVar26 < 16)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar5[iVar26]))
					{
						if (ENTITY::GET_ENTITY_MODEL(uVar5[iVar26]) == iVar22[iVar25])
						{
							if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar26]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar5[iVar26], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 6400f)
									{
										return 0;
									}
								}
							}
							else
							{
								return 0;
							}
						}
					}
					iVar26++;
				}
				iVar27 = 0;
				switch (iVar22[iVar25])
				{
					case joaat("player_zero"):
						iVar27 = Global_87845[0];
						break;
					
					case joaat("player_one"):
						iVar27 = Global_87845[1];
						break;
					
					case joaat("player_two"):
						iVar27 = Global_87845[2];
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar27))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar27, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 6400f)
						{
							return 0;
						}
					}
				}
				switch (iVar22[iVar25])
				{
					case joaat("player_zero"):
						iVar27 = Global_89952[0];
						break;
					
					case joaat("player_one"):
						iVar27 = Global_89952[1];
						break;
					
					case joaat("player_two"):
						iVar27 = Global_89952[2];
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar27))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar27, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 6400f)
						{
							return 0;
						}
					}
				}
			}
			iVar25++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_34(int iParam0)//Position - 0x2A9E
{
	if (!func_9(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_35(int iParam0, int iParam1, float fParam2)//Position - 0x2AC9
{
	struct<5> Var0;
	float fVar5;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { Global_34914[iParam1 /*5*/] };
		fVar5 = Var0.f_3;
		if (fParam2 > 0f)
		{
			fVar5 = fParam2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Var0, 1) < fVar5)
		{
			return 1;
		}
		else if (Var0.f_4 != -1)
		{
			return func_35(iParam0, Var0.f_4, fParam2);
		}
	}
	return 0;
}

int func_36()//Position - 0x2B2E
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

float func_37(var uParam0)//Position - 0x2B58
{
	if (func_40(uParam0))
	{
		if (func_39(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_38(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_38(bool bParam0)//Position - 0x2B97
{
	int iVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(iVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_39(var uParam0)//Position - 0x2BDF
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_40(var uParam0)//Position - 0x2BEF
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_41(int iParam0, int iParam1)//Position - 0x2BFF
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_42(int iParam0)//Position - 0x2D89
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < 147)
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_11;
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == 147)
	{
		return 6;
	}
	if (iParam0 == 148)
	{
		return 6;
	}
	return 6;
}

int func_43(float fParam0, bool bParam1)//Position - 0x2DE4
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar36 = func_49();
		iVar37 = 0;
		iVar37 = 0;
		while (iVar37 < 63)
		{
			iVar32 = iVar37;
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 3))
			{
				func_44(iVar32, &Var0);
				fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
				if (fVar35 < fVar34)
				{
					bVar38 = true;
					if (bParam1)
					{
						if (iVar36 != Var0.f_26)
						{
							bVar38 = false;
						}
					}
					if (bVar38)
					{
						iVar33 = iVar32;
						fVar34 = fVar35;
					}
				}
			}
			iVar37++;
		}
	}
	return iVar33;
}

void func_44(int iParam0, var uParam1)//Position - 0x2E90
{
	switch (iParam0)
	{
		case 0:
			func_45(uParam1, "Abigail1", func_47(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 1:
			func_45(uParam1, "Abigail2", func_47(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 2:
			func_45(uParam1, "Barry1", func_47(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 3:
			func_45(uParam1, "Barry2", func_47(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 4:
			func_45(uParam1, "Barry3", func_47(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 5:
			func_45(uParam1, "Barry3A", func_47(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 6:
			func_45(uParam1, "Barry3C", func_47(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 7:
			func_45(uParam1, "Barry4", func_47(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_46(iParam0), 0, 0);
			break;
		
		case 8:
			func_45(uParam1, "Dreyfuss1", func_47(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 9:
			func_45(uParam1, "Epsilon1", func_47(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 10:
			func_45(uParam1, "Epsilon2", func_47(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 11:
			func_45(uParam1, "Epsilon3", func_47(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 12:
			func_45(uParam1, "Epsilon4", func_47(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 13:
			func_45(uParam1, "Epsilon5", func_47(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 14:
			func_45(uParam1, "Epsilon6", func_47(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 15:
			func_45(uParam1, "Epsilon7", func_47(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 16:
			func_45(uParam1, "Epsilon8", func_47(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 17:
			func_45(uParam1, "Extreme1", func_47(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 18:
			func_45(uParam1, "Extreme2", func_47(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 19:
			func_45(uParam1, "Extreme3", func_47(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 20:
			func_45(uParam1, "Extreme4", func_47(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 21:
			func_45(uParam1, "Fanatic1", func_47(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_46(iParam0), 1, 0);
			break;
		
		case 22:
			func_45(uParam1, "Fanatic2", func_47(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_46(iParam0), 1, 0);
			break;
		
		case 23:
			func_45(uParam1, "Fanatic3", func_47(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_46(iParam0), 0, 1);
			break;
		
		case 24:
			func_45(uParam1, "Hao1", func_47(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_46(iParam0), 0, 1);
			break;
		
		case 25:
			func_45(uParam1, "Hunting1", func_47(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 26:
			func_45(uParam1, "Hunting2", func_47(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 27:
			func_45(uParam1, "Josh1", func_47(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 28:
			func_45(uParam1, "Josh2", func_47(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 29:
			func_45(uParam1, "Josh3", func_47(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 30:
			func_45(uParam1, "Josh4", func_47(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 31:
			func_45(uParam1, "Maude1", func_47(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 32:
			func_45(uParam1, "Minute1", func_47(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 33:
			func_45(uParam1, "Minute2", func_47(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 34:
			func_45(uParam1, "Minute3", func_47(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 35:
			func_45(uParam1, "MrsPhilips1", func_47(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 36:
			func_45(uParam1, "MrsPhilips2", func_47(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 37:
			func_45(uParam1, "Nigel1", func_47(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 38:
			func_45(uParam1, "Nigel1A", func_47(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 39:
			func_45(uParam1, "Nigel1B", func_47(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_46(iParam0), 1, 1);
			break;
		
		case 40:
			func_45(uParam1, "Nigel1C", func_47(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_46(iParam0), 1, 1);
			break;
		
		case 41:
			func_45(uParam1, "Nigel1D", func_47(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_46(iParam0), 1, 1);
			break;
		
		case 42:
			func_45(uParam1, "Nigel2", func_47(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 43:
			func_45(uParam1, "Nigel3", func_47(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 44:
			func_45(uParam1, "Omega1", func_47(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 45:
			func_45(uParam1, "Omega2", func_47(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 46:
			func_45(uParam1, "Paparazzo1", func_47(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 47:
			func_45(uParam1, "Paparazzo2", func_47(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 48:
			func_45(uParam1, "Paparazzo3", func_47(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 49:
			func_45(uParam1, "Paparazzo3A", func_47(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 50:
			func_45(uParam1, "Paparazzo3B", func_47(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 51:
			func_45(uParam1, "Paparazzo4", func_47(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 52:
			func_45(uParam1, "Rampage1", func_47(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 54:
			func_45(uParam1, "Rampage3", func_47(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 55:
			func_45(uParam1, "Rampage4", func_47(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 56:
			func_45(uParam1, "Rampage5", func_47(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 53:
			func_45(uParam1, "Rampage2", func_47(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 57:
			func_45(uParam1, "TheLastOne", func_47(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 58:
			func_45(uParam1, "Tonya1", func_47(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 59:
			func_45(uParam1, "Tonya2", func_47(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 60:
			func_45(uParam1, "Tonya3", func_47(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 61:
			func_45(uParam1, "Tonya4", func_47(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 62:
			func_45(uParam1, "Tonya5", func_47(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_45(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x40D8
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_46(int iParam0)//Position - 0x4169
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_47(int iParam0)//Position - 0x44AF
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_48(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_48(int iParam0)//Position - 0x44E7
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_49()//Position - 0x4934
{
	func_7();
	switch (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_50()//Position - 0x497A
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_51()//Position - 0x4994
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

var func_52()//Position - 0x49B0
{
	func_7();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

int func_53(int iParam0)//Position - 0x49C9
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_54(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_54(int iParam0)//Position - 0x49EA
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_35760[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35760[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55()//Position - 0x4A33
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	return 1;
}

int func_56()//Position - 0x4A48
{
	if (Global_14393.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_57(int iParam0)//Position - 0x4A61
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_45154[iVar0 /*203*/] = 0;
}

var func_58()//Position - 0x4A9E
{
	var uVar0;
	
	func_64(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_63(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_62(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_61(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_60(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_59(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_59(var uParam0, int iParam1)//Position - 0x4AE4
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_60(var uParam0, int iParam1)//Position - 0x4B6A
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_61(var uParam0, int iParam1)//Position - 0x4B9D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_28(*uParam0);
	iVar1 = func_26(*uParam0);
	if (iParam1 < 1 || iParam1 > func_21(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_62(var uParam0, int iParam1)//Position - 0x4BEE
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_63(var uParam0, int iParam1)//Position - 0x4C28
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_64(var uParam0, int iParam1)//Position - 0x4C63
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_65()//Position - 0x4C9F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_44792[iVar0 /*120*/] = Global_SAVE_DATA.EMAIL_DATA[iVar0 /*103*/];
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_44792[iVar0 /*120*/].f_1[iVar1] = Global_SAVE_DATA.EMAIL_DATA[iVar0 /*103*/].f_1[iVar1];
			Global_44792[iVar0 /*120*/].f_18[iVar1] = Global_SAVE_DATA.EMAIL_DATA[iVar0 /*103*/].f_18[iVar1];
			Global_44792[iVar0 /*120*/].f_35[iVar1] = Global_SAVE_DATA.EMAIL_DATA[iVar0 /*103*/].f_35[iVar1];
			Global_44792[iVar0 /*120*/].f_52[iVar1] = Global_SAVE_DATA.EMAIL_DATA[iVar0 /*103*/].f_52[iVar1];
			Global_44792[iVar0 /*120*/].f_69[iVar1] = Global_SAVE_DATA.EMAIL_DATA[iVar0 /*103*/].f_69[iVar1];
			Global_44792[iVar0 /*120*/].f_86[iVar1] = Global_SAVE_DATA.EMAIL_DATA[iVar0 /*103*/].f_86[iVar1];
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_45154[iVar0 /*203*/].f_2 = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/];
		Global_45154[iVar0 /*203*/] = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_2;
		Global_45154[iVar0 /*203*/].f_3 = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_3;
		Global_45154[iVar0 /*203*/].f_1 = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_1;
		Global_45154[iVar0 /*203*/].f_9 = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_9;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_45154[iVar0 /*203*/].f_4[iVar1] = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_4[iVar1];
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_45154[iVar0 /*203*/].f_10[iVar1 /*48*/] = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/];
			Global_45154[iVar0 /*203*/].f_10[iVar1 /*48*/].f_1 = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_1;
			Global_45154[iVar0 /*203*/].f_10[iVar1 /*48*/].f_2 = { Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_2 };
			Global_45154[iVar0 /*203*/].f_10[iVar1 /*48*/].f_6 = Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_6;
			iVar2 = 0;
			while (iVar2 < 10)
			{
				Global_45154[iVar0 /*203*/].f_10[iVar1 /*48*/].f_7[iVar2 /*4*/] = { Global_SAVE_DATA.EMAIL_DATA.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_7[iVar2 /*4*/] };
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 120)
	{
		Global_39271[iVar0 /*46*/] = Global_SAVE_DATA.EMAIL_DATA.f_1733[iVar0 /*14*/];
		Global_39271[iVar0 /*46*/].f_1 = Global_SAVE_DATA.EMAIL_DATA.f_1733[iVar0 /*14*/].f_1;
		Global_39271[iVar0 /*46*/].f_45 = Global_SAVE_DATA.EMAIL_DATA.f_1733[iVar0 /*14*/].f_2;
		Global_39271[iVar0 /*46*/].f_31 = Global_SAVE_DATA.EMAIL_DATA.f_1733[iVar0 /*14*/].f_3;
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (Global_SAVE_DATA.EMAIL_DATA.f_1733[iVar0 /*14*/].f_4[iVar1] > 0)
			{
				Global_39271[iVar0 /*46*/].f_32[iVar1] = (Global_SAVE_DATA.EMAIL_DATA.f_1733[iVar0 /*14*/].f_4[iVar1] - 1);
				Global_39271[iVar0 /*46*/].f_42++;
			}
			iVar1++;
		}
		iVar0++;
	}
	Global_46576 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_46577[iVar0 /*53*/] = Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/];
		Global_46577[iVar0 /*53*/].f_1 = Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/].f_1;
		Global_46577[iVar0 /*53*/].f_2 = Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/].f_2;
		Global_46577[iVar0 /*53*/].f_5 = Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/].f_5;
		Global_46577[iVar0 /*53*/].f_6 = { Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/].f_6 };
		Global_46577[iVar0 /*53*/].f_10 = Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/].f_10;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			Global_46577[iVar0 /*53*/].f_11[iVar1 /*4*/] = { Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/].f_11[iVar1 /*4*/] };
			iVar1++;
		}
		Global_46577[iVar0 /*53*/].f_52 = Global_SAVE_DATA.EMAIL_DATA.f_3414[iVar0 /*53*/].f_52;
		if (Global_46577[iVar0 /*53*/].f_52 != 0)
		{
			Global_46576++;
		}
		iVar0++;
	}
}

void func_66()//Position - 0x5122
{
	Global_35970[0 /*12*/] = 15;
	Global_35970[0 /*12*/].f_1 = 16;
	Global_35970[0 /*12*/].f_2 = 4;
	Global_35970[0 /*12*/].f_3 = 0;
	Global_35970[0 /*12*/].f_10 = 1;
	Global_35970[0 /*12*/].f_11 = 0;
	Global_35970[0 /*12*/].f_4 = 0;
	Global_35970[1 /*12*/] = 17;
	Global_35970[1 /*12*/].f_1 = 16;
	Global_35970[1 /*12*/].f_2 = 4;
	Global_35970[1 /*12*/].f_3 = 0;
	Global_35970[1 /*12*/].f_10 = 1;
	Global_35970[1 /*12*/].f_11 = 0;
	Global_35970[1 /*12*/].f_4 = 0;
	Global_35970[2 /*12*/] = 18;
	Global_35970[2 /*12*/].f_1 = 16;
	Global_35970[2 /*12*/].f_2 = 4;
	Global_35970[2 /*12*/].f_3 = 0;
	Global_35970[2 /*12*/].f_10 = 1;
	Global_35970[2 /*12*/].f_11 = 0;
	Global_35970[2 /*12*/].f_4 = 0;
	Global_35970[3 /*12*/] = 19;
	Global_35970[3 /*12*/].f_1 = 16;
	Global_35970[3 /*12*/].f_2 = 4;
	Global_35970[3 /*12*/].f_3 = 0;
	Global_35970[3 /*12*/].f_10 = 1;
	Global_35970[3 /*12*/].f_11 = 0;
	Global_35970[3 /*12*/].f_4 = 0;
	Global_35970[4 /*12*/] = 20;
	Global_35970[4 /*12*/].f_1 = 16;
	Global_35970[4 /*12*/].f_2 = 4;
	Global_35970[4 /*12*/].f_3 = 0;
	Global_35970[4 /*12*/].f_10 = 1;
	Global_35970[4 /*12*/].f_11 = 0;
	Global_35970[4 /*12*/].f_4 = 0;
	Global_35970[5 /*12*/] = 21;
	Global_35970[5 /*12*/].f_1 = 16;
	Global_35970[5 /*12*/].f_2 = 4;
	Global_35970[5 /*12*/].f_3 = 0;
	Global_35970[5 /*12*/].f_10 = 1;
	Global_35970[5 /*12*/].f_11 = 0;
	Global_35970[5 /*12*/].f_4 = 0;
	Global_35970[6 /*12*/] = 22;
	Global_35970[6 /*12*/].f_1 = 16;
	Global_35970[6 /*12*/].f_2 = 4;
	Global_35970[6 /*12*/].f_3 = 0;
	Global_35970[6 /*12*/].f_10 = 0;
	Global_35970[6 /*12*/].f_11 = 0;
	Global_35970[6 /*12*/].f_4 = 0;
	Global_35970[7 /*12*/] = 23;
	Global_35970[7 /*12*/].f_1 = 24;
	Global_35970[7 /*12*/].f_2 = 4;
	Global_35970[7 /*12*/].f_3 = 0;
	Global_35970[7 /*12*/].f_10 = 0;
	Global_35970[7 /*12*/].f_11 = 0;
	Global_35970[7 /*12*/].f_4 = 0;
	Global_35970[8 /*12*/] = 25;
	Global_35970[8 /*12*/].f_1 = 26;
	Global_35970[8 /*12*/].f_2 = 4;
	Global_35970[8 /*12*/].f_3 = 0;
	Global_35970[8 /*12*/].f_10 = 0;
	Global_35970[8 /*12*/].f_11 = 0;
	Global_35970[8 /*12*/].f_4 = 0;
	Global_35970[9 /*12*/] = 27;
	Global_35970[9 /*12*/].f_1 = 28;
	Global_35970[9 /*12*/].f_2 = 4;
	Global_35970[9 /*12*/].f_3 = 0;
	Global_35970[9 /*12*/].f_10 = 0;
	Global_35970[9 /*12*/].f_11 = 0;
	Global_35970[9 /*12*/].f_4 = 0;
	Global_35970[10 /*12*/] = 32;
	Global_35970[10 /*12*/].f_1 = 33;
	Global_35970[10 /*12*/].f_2 = 5;
	Global_35970[10 /*12*/].f_3 = 0;
	Global_35970[10 /*12*/].f_10 = 0;
	Global_35970[10 /*12*/].f_11 = 0;
	Global_35970[10 /*12*/].f_4 = 0;
	Global_35970[11 /*12*/] = 34;
	Global_35970[11 /*12*/].f_1 = 35;
	Global_35970[11 /*12*/].f_2 = 5;
	Global_35970[11 /*12*/].f_3 = 0;
	Global_35970[11 /*12*/].f_10 = 0;
	Global_35970[11 /*12*/].f_11 = 0;
	Global_35970[11 /*12*/].f_4 = 0;
	Global_35970[12 /*12*/] = 42;
	Global_35970[12 /*12*/].f_1 = 43;
	Global_35970[12 /*12*/].f_2 = 7;
	Global_35970[12 /*12*/].f_3 = 1;
	Global_35970[12 /*12*/].f_10 = 0;
	Global_35970[12 /*12*/].f_11 = 0;
	Global_35970[12 /*12*/].f_4 = 0;
	Global_35970[13 /*12*/] = 44;
	Global_35970[13 /*12*/].f_1 = 45;
	Global_35970[13 /*12*/].f_2 = 7;
	Global_35970[13 /*12*/].f_3 = 1;
	Global_35970[13 /*12*/].f_10 = 0;
	Global_35970[13 /*12*/].f_11 = 0;
	Global_35970[13 /*12*/].f_4 = 0;
	Global_35970[14 /*12*/] = 46;
	Global_35970[14 /*12*/].f_1 = 47;
	Global_35970[14 /*12*/].f_2 = 7;
	Global_35970[14 /*12*/].f_3 = 1;
	Global_35970[14 /*12*/].f_10 = 0;
	Global_35970[14 /*12*/].f_11 = 0;
	Global_35970[14 /*12*/].f_4 = 0;
	Global_35970[15 /*12*/] = 48;
	Global_35970[15 /*12*/].f_1 = 49;
	Global_35970[15 /*12*/].f_2 = 7;
	Global_35970[15 /*12*/].f_3 = 1;
	Global_35970[15 /*12*/].f_10 = 0;
	Global_35970[15 /*12*/].f_11 = 0;
	Global_35970[15 /*12*/].f_4 = 0;
	Global_35970[16 /*12*/] = 50;
	Global_35970[16 /*12*/].f_1 = 51;
	Global_35970[16 /*12*/].f_2 = 4;
	Global_35970[16 /*12*/].f_3 = 0;
	Global_35970[16 /*12*/].f_10 = 0;
	Global_35970[16 /*12*/].f_11 = 0;
	Global_35970[16 /*12*/].f_4 = 0;
	Global_35970[17 /*12*/] = 61;
	Global_35970[17 /*12*/].f_1 = 62;
	Global_35970[17 /*12*/].f_2 = 8;
	Global_35970[17 /*12*/].f_3 = 0;
	Global_35970[17 /*12*/].f_10 = 1;
	Global_35970[17 /*12*/].f_11 = 0;
	Global_35970[17 /*12*/].f_4 = 0;
	Global_35970[18 /*12*/] = 63;
	Global_35970[18 /*12*/].f_1 = 64;
	Global_35970[18 /*12*/].f_2 = 9;
	Global_35970[18 /*12*/].f_3 = 1;
	Global_35970[18 /*12*/].f_10 = 1;
	Global_35970[18 /*12*/].f_11 = 0;
	Global_35970[18 /*12*/].f_4 = 0;
	Global_35970[19 /*12*/] = 61;
	Global_35970[19 /*12*/].f_1 = 65;
	Global_35970[19 /*12*/].f_2 = 8;
	Global_35970[19 /*12*/].f_3 = 0;
	Global_35970[19 /*12*/].f_10 = 1;
	Global_35970[19 /*12*/].f_11 = 0;
	Global_35970[19 /*12*/].f_4 = 0;
	Global_35970[20 /*12*/] = 61;
	Global_35970[20 /*12*/].f_1 = 66;
	Global_35970[20 /*12*/].f_2 = 8;
	Global_35970[20 /*12*/].f_3 = 0;
	Global_35970[20 /*12*/].f_10 = 1;
	Global_35970[20 /*12*/].f_11 = 0;
	Global_35970[20 /*12*/].f_4 = 0;
	Global_35970[21 /*12*/] = 61;
	Global_35970[21 /*12*/].f_1 = 67;
	Global_35970[21 /*12*/].f_2 = 8;
	Global_35970[21 /*12*/].f_3 = 0;
	Global_35970[21 /*12*/].f_10 = 1;
	Global_35970[21 /*12*/].f_11 = 0;
	Global_35970[21 /*12*/].f_4 = 0;
	Global_35970[22 /*12*/] = 61;
	Global_35970[22 /*12*/].f_1 = 68;
	Global_35970[22 /*12*/].f_2 = 8;
	Global_35970[22 /*12*/].f_3 = 0;
	Global_35970[22 /*12*/].f_10 = 0;
	Global_35970[22 /*12*/].f_11 = 0;
	Global_35970[22 /*12*/].f_4 = 0;
	Global_35970[23 /*12*/] = 69;
	Global_35970[23 /*12*/].f_1 = 70;
	Global_35970[23 /*12*/].f_2 = 10;
	Global_35970[23 /*12*/].f_3 = 2;
	Global_35970[23 /*12*/].f_10 = 1;
	Global_35970[23 /*12*/].f_11 = 0;
	Global_35970[23 /*12*/].f_4 = 0;
	Global_35970[24 /*12*/] = 63;
	Global_35970[24 /*12*/].f_1 = 74;
	Global_35970[24 /*12*/].f_2 = 9;
	Global_35970[24 /*12*/].f_3 = 1;
	Global_35970[24 /*12*/].f_10 = 1;
	Global_35970[24 /*12*/].f_11 = 0;
	Global_35970[24 /*12*/].f_4 = 0;
	Global_35970[25 /*12*/] = 63;
	Global_35970[25 /*12*/].f_1 = 75;
	Global_35970[25 /*12*/].f_2 = 9;
	Global_35970[25 /*12*/].f_3 = 1;
	Global_35970[25 /*12*/].f_10 = 1;
	Global_35970[25 /*12*/].f_11 = 0;
	Global_35970[25 /*12*/].f_4 = 0;
	Global_35970[26 /*12*/] = 63;
	Global_35970[26 /*12*/].f_1 = 76;
	Global_35970[26 /*12*/].f_2 = 9;
	Global_35970[26 /*12*/].f_3 = 1;
	Global_35970[26 /*12*/].f_10 = 1;
	Global_35970[26 /*12*/].f_11 = 0;
	Global_35970[26 /*12*/].f_4 = 0;
	Global_35970[27 /*12*/] = 63;
	Global_35970[27 /*12*/].f_1 = 77;
	Global_35970[27 /*12*/].f_2 = 9;
	Global_35970[27 /*12*/].f_3 = 1;
	Global_35970[27 /*12*/].f_10 = 0;
	Global_35970[27 /*12*/].f_11 = 0;
	Global_35970[27 /*12*/].f_4 = 0;
	Global_35970[28 /*12*/] = 69;
	Global_35970[28 /*12*/].f_1 = 73;
	Global_35970[28 /*12*/].f_2 = 10;
	Global_35970[28 /*12*/].f_3 = 2;
	Global_35970[28 /*12*/].f_10 = 1;
	Global_35970[28 /*12*/].f_11 = 0;
	Global_35970[28 /*12*/].f_4 = 0;
	Global_35970[29 /*12*/] = 69;
	Global_35970[29 /*12*/].f_1 = 72;
	Global_35970[29 /*12*/].f_2 = 10;
	Global_35970[29 /*12*/].f_3 = 2;
	Global_35970[29 /*12*/].f_10 = 1;
	Global_35970[29 /*12*/].f_11 = 0;
	Global_35970[29 /*12*/].f_4 = 0;
	Global_35970[30 /*12*/] = 69;
	Global_35970[30 /*12*/].f_1 = 71;
	Global_35970[30 /*12*/].f_2 = 10;
	Global_35970[30 /*12*/].f_3 = 2;
	Global_35970[30 /*12*/].f_10 = 0;
	Global_35970[30 /*12*/].f_11 = 0;
	Global_35970[30 /*12*/].f_4 = 0;
	Global_35970[31 /*12*/] = 90;
	Global_35970[31 /*12*/].f_1 = 91;
	Global_35970[31 /*12*/].f_2 = 11;
	Global_35970[31 /*12*/].f_3 = 1;
	Global_35970[31 /*12*/].f_10 = 0;
	Global_35970[31 /*12*/].f_11 = 0;
	Global_35970[31 /*12*/].f_4 = 0;
	Global_35970[32 /*12*/] = 90;
	Global_35970[32 /*12*/].f_1 = 92;
	Global_35970[32 /*12*/].f_2 = 11;
	Global_35970[32 /*12*/].f_3 = 0;
	Global_35970[32 /*12*/].f_10 = 0;
	Global_35970[32 /*12*/].f_11 = 0;
	Global_35970[32 /*12*/].f_4 = 0;
	Global_35970[33 /*12*/] = 90;
	Global_35970[33 /*12*/].f_1 = 93;
	Global_35970[33 /*12*/].f_2 = 11;
	Global_35970[33 /*12*/].f_3 = 2;
	Global_35970[33 /*12*/].f_10 = 0;
	Global_35970[33 /*12*/].f_11 = 0;
	Global_35970[33 /*12*/].f_4 = 0;
	Global_35970[34 /*12*/] = 94;
	Global_35970[34 /*12*/].f_1 = 95;
	Global_35970[34 /*12*/].f_2 = 13;
	Global_35970[34 /*12*/].f_3 = 0;
	Global_35970[34 /*12*/].f_10 = 0;
	Global_35970[34 /*12*/].f_11 = 0;
	Global_35970[34 /*12*/].f_4 = 0;
	Global_35970[35 /*12*/] = 94;
	Global_35970[35 /*12*/].f_1 = 96;
	Global_35970[35 /*12*/].f_2 = 13;
	Global_35970[35 /*12*/].f_3 = 1;
	Global_35970[35 /*12*/].f_10 = 0;
	Global_35970[35 /*12*/].f_11 = 0;
	Global_35970[35 /*12*/].f_4 = 0;
	Global_35970[36 /*12*/] = 94;
	Global_35970[36 /*12*/].f_1 = 97;
	Global_35970[36 /*12*/].f_2 = 13;
	Global_35970[36 /*12*/].f_3 = 2;
	Global_35970[36 /*12*/].f_10 = 0;
	Global_35970[36 /*12*/].f_11 = 0;
	Global_35970[36 /*12*/].f_4 = 0;
	Global_35970[37 /*12*/] = 94;
	Global_35970[37 /*12*/].f_1 = 98;
	Global_35970[37 /*12*/].f_2 = 14;
	Global_35970[37 /*12*/].f_3 = 0;
	Global_35970[37 /*12*/].f_10 = 0;
	Global_35970[37 /*12*/].f_11 = 0;
	Global_35970[37 /*12*/].f_4 = 0;
	Global_35970[38 /*12*/] = 94;
	Global_35970[38 /*12*/].f_1 = 99;
	Global_35970[38 /*12*/].f_2 = 14;
	Global_35970[38 /*12*/].f_3 = 1;
	Global_35970[38 /*12*/].f_10 = 0;
	Global_35970[38 /*12*/].f_11 = 0;
	Global_35970[38 /*12*/].f_4 = 0;
	Global_35970[39 /*12*/] = 94;
	Global_35970[39 /*12*/].f_1 = 100;
	Global_35970[39 /*12*/].f_2 = 14;
	Global_35970[39 /*12*/].f_3 = 2;
	Global_35970[39 /*12*/].f_10 = 0;
	Global_35970[39 /*12*/].f_11 = 0;
	Global_35970[39 /*12*/].f_4 = 0;
	Global_35970[40 /*12*/] = 94;
	Global_35970[40 /*12*/].f_1 = 101;
	Global_35970[40 /*12*/].f_2 = 12;
	Global_35970[40 /*12*/].f_3 = 0;
	Global_35970[40 /*12*/].f_10 = 0;
	Global_35970[40 /*12*/].f_11 = 0;
	Global_35970[40 /*12*/].f_4 = 0;
	Global_35970[41 /*12*/] = 94;
	Global_35970[41 /*12*/].f_1 = 102;
	Global_35970[41 /*12*/].f_2 = 12;
	Global_35970[41 /*12*/].f_3 = 1;
	Global_35970[41 /*12*/].f_10 = 0;
	Global_35970[41 /*12*/].f_11 = 0;
	Global_35970[41 /*12*/].f_4 = 0;
	Global_35970[42 /*12*/] = 94;
	Global_35970[42 /*12*/].f_1 = 103;
	Global_35970[42 /*12*/].f_2 = 12;
	Global_35970[42 /*12*/].f_3 = 2;
	Global_35970[42 /*12*/].f_10 = 0;
	Global_35970[42 /*12*/].f_11 = 0;
	Global_35970[42 /*12*/].f_4 = 0;
	Global_35970[43 /*12*/] = 104;
	Global_35970[43 /*12*/].f_1 = 105;
	Global_35970[43 /*12*/].f_2 = 7;
	Global_35970[43 /*12*/].f_3 = 0;
	Global_35970[43 /*12*/].f_10 = 1;
	Global_35970[43 /*12*/].f_11 = 0;
	Global_35970[43 /*12*/].f_4 = 0;
	Global_35970[44 /*12*/] = 108;
	Global_35970[44 /*12*/].f_1 = 109;
	Global_35970[44 /*12*/].f_2 = 15;
	Global_35970[44 /*12*/].f_3 = 0;
	Global_35970[44 /*12*/].f_10 = 1;
	Global_35970[44 /*12*/].f_11 = 0;
	Global_35970[44 /*12*/].f_4 = 0;
	Global_35970[45 /*12*/] = 110;
	Global_35970[45 /*12*/].f_1 = 111;
	Global_35970[45 /*12*/].f_2 = 15;
	Global_35970[45 /*12*/].f_3 = 0;
	Global_35970[45 /*12*/].f_10 = 1;
	Global_35970[45 /*12*/].f_11 = 0;
	Global_35970[45 /*12*/].f_4 = 0;
	Global_35970[46 /*12*/] = 112;
	Global_35970[46 /*12*/].f_1 = 113;
	Global_35970[46 /*12*/].f_2 = 15;
	Global_35970[46 /*12*/].f_3 = 0;
	Global_35970[46 /*12*/].f_10 = 1;
	Global_35970[46 /*12*/].f_11 = 0;
	Global_35970[46 /*12*/].f_4 = 0;
	Global_35970[47 /*12*/] = 117;
	Global_35970[47 /*12*/].f_1 = 118;
	Global_35970[47 /*12*/].f_2 = 16;
	Global_35970[47 /*12*/].f_3 = 0;
	Global_35970[47 /*12*/].f_10 = 1;
	Global_35970[47 /*12*/].f_11 = 0;
	Global_35970[47 /*12*/].f_4 = 0;
	Global_35970[48 /*12*/] = 119;
	Global_35970[48 /*12*/].f_1 = 120;
	Global_35970[48 /*12*/].f_2 = 16;
	Global_35970[48 /*12*/].f_3 = 0;
	Global_35970[48 /*12*/].f_10 = 1;
	Global_35970[48 /*12*/].f_11 = 0;
	Global_35970[48 /*12*/].f_4 = 0;
	Global_35970[49 /*12*/] = 131;
	Global_35970[49 /*12*/].f_1 = 132;
	Global_35970[49 /*12*/].f_2 = 16;
	Global_35970[49 /*12*/].f_3 = 0;
	Global_35970[49 /*12*/].f_10 = 1;
	Global_35970[49 /*12*/].f_11 = 0;
	Global_35970[49 /*12*/].f_4 = 0;
	Global_35970[50 /*12*/] = 129;
	Global_35970[50 /*12*/].f_1 = 130;
	Global_35970[50 /*12*/].f_2 = 16;
	Global_35970[50 /*12*/].f_3 = 0;
	Global_35970[50 /*12*/].f_10 = 0;
	Global_35970[50 /*12*/].f_11 = 0;
	Global_35970[50 /*12*/].f_4 = 0;
	Global_35970[51 /*12*/] = 127;
	Global_35970[51 /*12*/].f_1 = 128;
	Global_35970[51 /*12*/].f_2 = 16;
	Global_35970[51 /*12*/].f_3 = 0;
	Global_35970[51 /*12*/].f_10 = 1;
	Global_35970[51 /*12*/].f_11 = 0;
	Global_35970[51 /*12*/].f_4 = 0;
	Global_35970[52 /*12*/] = 125;
	Global_35970[52 /*12*/].f_1 = 126;
	Global_35970[52 /*12*/].f_2 = 16;
	Global_35970[52 /*12*/].f_3 = 0;
	Global_35970[52 /*12*/].f_10 = 1;
	Global_35970[52 /*12*/].f_11 = 0;
	Global_35970[52 /*12*/].f_4 = 0;
	Global_35970[53 /*12*/] = 123;
	Global_35970[53 /*12*/].f_1 = 124;
	Global_35970[53 /*12*/].f_2 = 16;
	Global_35970[53 /*12*/].f_3 = 0;
	Global_35970[53 /*12*/].f_10 = 1;
	Global_35970[53 /*12*/].f_11 = 0;
	Global_35970[53 /*12*/].f_4 = 0;
	Global_35970[54 /*12*/] = 121;
	Global_35970[54 /*12*/].f_1 = 122;
	Global_35970[54 /*12*/].f_2 = 16;
	Global_35970[54 /*12*/].f_3 = 0;
	Global_35970[54 /*12*/].f_10 = 1;
	Global_35970[54 /*12*/].f_11 = 0;
	Global_35970[54 /*12*/].f_4 = 0;
	Global_35970[55 /*12*/] = 133;
	Global_35970[55 /*12*/].f_1 = 134;
	Global_35970[55 /*12*/].f_2 = 12;
	Global_35970[55 /*12*/].f_3 = 0;
	Global_35970[55 /*12*/].f_10 = 0;
	Global_35970[55 /*12*/].f_11 = 0;
	Global_35970[55 /*12*/].f_4 = 0;
	Global_35970[56 /*12*/] = 135;
	Global_35970[56 /*12*/].f_1 = 136;
	Global_35970[56 /*12*/].f_2 = 14;
	Global_35970[56 /*12*/].f_3 = 0;
	Global_35970[56 /*12*/].f_10 = 0;
	Global_35970[56 /*12*/].f_11 = 0;
	Global_35970[56 /*12*/].f_4 = 0;
	Global_35970[57 /*12*/] = 137;
	Global_35970[57 /*12*/].f_1 = 138;
	Global_35970[57 /*12*/].f_2 = 12;
	Global_35970[57 /*12*/].f_3 = 0;
	Global_35970[57 /*12*/].f_10 = 0;
	Global_35970[57 /*12*/].f_11 = 0;
	Global_35970[57 /*12*/].f_4 = 0;
	Global_35970[58 /*12*/] = 133;
	Global_35970[58 /*12*/].f_1 = 139;
	Global_35970[58 /*12*/].f_2 = 12;
	Global_35970[58 /*12*/].f_3 = 1;
	Global_35970[58 /*12*/].f_10 = 0;
	Global_35970[58 /*12*/].f_11 = 0;
	Global_35970[58 /*12*/].f_4 = 0;
	Global_35970[59 /*12*/] = 133;
	Global_35970[59 /*12*/].f_1 = 140;
	Global_35970[59 /*12*/].f_2 = 12;
	Global_35970[59 /*12*/].f_3 = 2;
	Global_35970[59 /*12*/].f_10 = 0;
	Global_35970[59 /*12*/].f_11 = 0;
	Global_35970[59 /*12*/].f_4 = 0;
	Global_35970[60 /*12*/] = 135;
	Global_35970[60 /*12*/].f_1 = 136;
	Global_35970[60 /*12*/].f_2 = 14;
	Global_35970[60 /*12*/].f_3 = 1;
	Global_35970[60 /*12*/].f_10 = 0;
	Global_35970[60 /*12*/].f_11 = 0;
	Global_35970[60 /*12*/].f_4 = 0;
	Global_35970[61 /*12*/] = 135;
	Global_35970[61 /*12*/].f_1 = 136;
	Global_35970[61 /*12*/].f_2 = 14;
	Global_35970[61 /*12*/].f_3 = 2;
	Global_35970[61 /*12*/].f_10 = 0;
	Global_35970[61 /*12*/].f_11 = 0;
	Global_35970[61 /*12*/].f_4 = 0;
	Global_35970[62 /*12*/] = 137;
	Global_35970[62 /*12*/].f_1 = 141;
	Global_35970[62 /*12*/].f_2 = 12;
	Global_35970[62 /*12*/].f_3 = 1;
	Global_35970[62 /*12*/].f_10 = 0;
	Global_35970[62 /*12*/].f_11 = 0;
	Global_35970[62 /*12*/].f_4 = 0;
	Global_35970[63 /*12*/] = 137;
	Global_35970[63 /*12*/].f_1 = 138;
	Global_35970[63 /*12*/].f_2 = 12;
	Global_35970[63 /*12*/].f_3 = 2;
	Global_35970[63 /*12*/].f_10 = 0;
	Global_35970[63 /*12*/].f_11 = 0;
	Global_35970[63 /*12*/].f_4 = 0;
	Global_35970[64 /*12*/] = 148;
	Global_35970[64 /*12*/].f_1 = 149;
	Global_35970[64 /*12*/].f_2 = 7;
	Global_35970[64 /*12*/].f_3 = 0;
	Global_35970[64 /*12*/].f_10 = 0;
	Global_35970[64 /*12*/].f_11 = 0;
	Global_35970[64 /*12*/].f_4 = 0;
	Global_35970[65 /*12*/] = 148;
	Global_35970[65 /*12*/].f_1 = 151;
	Global_35970[65 /*12*/].f_2 = 7;
	Global_35970[65 /*12*/].f_3 = 0;
	Global_35970[65 /*12*/].f_10 = 0;
	Global_35970[65 /*12*/].f_11 = 0;
	Global_35970[65 /*12*/].f_4 = 0;
	Global_35970[66 /*12*/] = 148;
	Global_35970[66 /*12*/].f_1 = 150;
	Global_35970[66 /*12*/].f_2 = 7;
	Global_35970[66 /*12*/].f_3 = 0;
	Global_35970[66 /*12*/].f_10 = 0;
	Global_35970[66 /*12*/].f_11 = 0;
	Global_35970[66 /*12*/].f_4 = 0;
	Global_35970[67 /*12*/] = 155;
	Global_35970[67 /*12*/].f_1 = 156;
	Global_35970[67 /*12*/].f_2 = 63;
	Global_35970[67 /*12*/].f_3 = 2;
	Global_35970[67 /*12*/].f_10 = 0;
	Global_35970[67 /*12*/].f_11 = 0;
	Global_35970[67 /*12*/].f_4 = 0;
	Global_35970[68 /*12*/] = 125;
	Global_35970[68 /*12*/].f_1 = 160;
	Global_35970[68 /*12*/].f_2 = 16;
	Global_35970[68 /*12*/].f_3 = 0;
	Global_35970[68 /*12*/].f_10 = 1;
	Global_35970[68 /*12*/].f_11 = 0;
	Global_35970[68 /*12*/].f_4 = 0;
	Global_35970[69 /*12*/] = 161;
	Global_35970[69 /*12*/].f_1 = 162;
	Global_35970[69 /*12*/].f_2 = 64;
	Global_35970[69 /*12*/].f_3 = 2;
	Global_35970[69 /*12*/].f_10 = 0;
	Global_35970[69 /*12*/].f_11 = 0;
	Global_35970[69 /*12*/].f_4 = 0;
	Global_35970[70 /*12*/] = 161;
	Global_35970[70 /*12*/].f_1 = 162;
	Global_35970[70 /*12*/].f_2 = 64;
	Global_35970[70 /*12*/].f_3 = 1;
	Global_35970[70 /*12*/].f_10 = 0;
	Global_35970[70 /*12*/].f_11 = 0;
	Global_35970[70 /*12*/].f_4 = 0;
	Global_35970[71 /*12*/] = 161;
	Global_35970[71 /*12*/].f_1 = 162;
	Global_35970[71 /*12*/].f_2 = 64;
	Global_35970[71 /*12*/].f_3 = 2;
	Global_35970[71 /*12*/].f_10 = 0;
	Global_35970[71 /*12*/].f_11 = 0;
	Global_35970[71 /*12*/].f_4 = 0;
	Global_35970[72 /*12*/] = 166;
	Global_35970[72 /*12*/].f_1 = 16;
	Global_35970[72 /*12*/].f_2 = 21;
	Global_35970[72 /*12*/].f_3 = 0;
	Global_35970[72 /*12*/].f_10 = 0;
	Global_35970[72 /*12*/].f_11 = 0;
	Global_35970[72 /*12*/].f_4 = 0;
	Global_35970[73 /*12*/] = 166;
	Global_35970[73 /*12*/].f_1 = 16;
	Global_35970[73 /*12*/].f_2 = 21;
	Global_35970[73 /*12*/].f_3 = 1;
	Global_35970[73 /*12*/].f_10 = 0;
	Global_35970[73 /*12*/].f_11 = 0;
	Global_35970[73 /*12*/].f_4 = 0;
	Global_35970[74 /*12*/] = 166;
	Global_35970[74 /*12*/].f_1 = 16;
	Global_35970[74 /*12*/].f_2 = 21;
	Global_35970[74 /*12*/].f_3 = 2;
	Global_35970[74 /*12*/].f_10 = 0;
	Global_35970[74 /*12*/].f_11 = 0;
	Global_35970[74 /*12*/].f_4 = 0;
	Global_35970[75 /*12*/] = 167;
	Global_35970[75 /*12*/].f_1 = 16;
	Global_35970[75 /*12*/].f_2 = 6;
	Global_35970[75 /*12*/].f_3 = 2;
	Global_35970[75 /*12*/].f_10 = 0;
	Global_35970[75 /*12*/].f_11 = 0;
	Global_35970[75 /*12*/].f_4 = 0;
	Global_35970[76 /*12*/] = 168;
	Global_35970[76 /*12*/].f_1 = 16;
	Global_35970[76 /*12*/].f_2 = 6;
	Global_35970[76 /*12*/].f_3 = 2;
	Global_35970[76 /*12*/].f_10 = 0;
	Global_35970[76 /*12*/].f_11 = 0;
	Global_35970[76 /*12*/].f_4 = 0;
	Global_35970[77 /*12*/] = 169;
	Global_35970[77 /*12*/].f_1 = 16;
	Global_35970[77 /*12*/].f_2 = 6;
	Global_35970[77 /*12*/].f_3 = 2;
	Global_35970[77 /*12*/].f_10 = 0;
	Global_35970[77 /*12*/].f_11 = 0;
	Global_35970[77 /*12*/].f_4 = 0;
	Global_35970[78 /*12*/] = 170;
	Global_35970[78 /*12*/].f_1 = 16;
	Global_35970[78 /*12*/].f_2 = 6;
	Global_35970[78 /*12*/].f_3 = 2;
	Global_35970[78 /*12*/].f_10 = 0;
	Global_35970[78 /*12*/].f_11 = 0;
	Global_35970[78 /*12*/].f_4 = 0;
	Global_35970[79 /*12*/] = 171;
	Global_35970[79 /*12*/].f_1 = 16;
	Global_35970[79 /*12*/].f_2 = 6;
	Global_35970[79 /*12*/].f_3 = 2;
	Global_35970[79 /*12*/].f_10 = 0;
	Global_35970[79 /*12*/].f_11 = 0;
	Global_35970[79 /*12*/].f_4 = 0;
	Global_35970[80 /*12*/] = 172;
	Global_35970[80 /*12*/].f_1 = 173;
	Global_35970[80 /*12*/].f_2 = 6;
	Global_35970[80 /*12*/].f_3 = 2;
	Global_35970[80 /*12*/].f_10 = 0;
	Global_35970[80 /*12*/].f_11 = 0;
	Global_35970[80 /*12*/].f_4 = 0;
	Global_35970[81 /*12*/] = 174;
	Global_35970[81 /*12*/].f_1 = 175;
	Global_35970[81 /*12*/].f_2 = 6;
	Global_35970[81 /*12*/].f_3 = 2;
	Global_35970[81 /*12*/].f_10 = 0;
	Global_35970[81 /*12*/].f_11 = 0;
	Global_35970[81 /*12*/].f_4 = 0;
	Global_35970[82 /*12*/] = 176;
	Global_35970[82 /*12*/].f_1 = 177;
	Global_35970[82 /*12*/].f_2 = 6;
	Global_35970[82 /*12*/].f_3 = 2;
	Global_35970[82 /*12*/].f_10 = 0;
	Global_35970[82 /*12*/].f_11 = 0;
	Global_35970[82 /*12*/].f_4 = 0;
	Global_35970[83 /*12*/] = 178;
	Global_35970[83 /*12*/].f_1 = 179;
	Global_35970[83 /*12*/].f_2 = 6;
	Global_35970[83 /*12*/].f_3 = 2;
	Global_35970[83 /*12*/].f_10 = 0;
	Global_35970[83 /*12*/].f_11 = 0;
	Global_35970[83 /*12*/].f_4 = 0;
	Global_35970[84 /*12*/] = 180;
	Global_35970[84 /*12*/].f_1 = 181;
	Global_35970[84 /*12*/].f_2 = 4;
	Global_35970[84 /*12*/].f_3 = 0;
	Global_35970[84 /*12*/].f_10 = 0;
	Global_35970[84 /*12*/].f_11 = 3000;
	Global_35970[84 /*12*/].f_4 = 0;
	Global_35970[85 /*12*/] = 185;
	Global_35970[85 /*12*/].f_1 = 186;
	Global_35970[85 /*12*/].f_2 = 22;
	Global_35970[85 /*12*/].f_3 = 0;
	Global_35970[85 /*12*/].f_10 = 0;
	Global_35970[85 /*12*/].f_11 = 0;
	Global_35970[85 /*12*/].f_4 = 0;
	Global_35970[86 /*12*/] = 193;
	Global_35970[86 /*12*/].f_1 = 194;
	Global_35970[86 /*12*/].f_2 = 24;
	Global_35970[86 /*12*/].f_3 = 0;
	Global_35970[86 /*12*/].f_10 = 1;
	Global_35970[86 /*12*/].f_11 = 0;
	Global_35970[86 /*12*/].f_4 = 1;
	Global_35970[86 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[86 /*12*/].f_5[0 /*4*/].f_1 = 87;
	Global_35970[86 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[86 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[87 /*12*/] = 195;
	Global_35970[87 /*12*/].f_1 = 196;
	Global_35970[87 /*12*/].f_2 = 0;
	Global_35970[87 /*12*/].f_3 = 24;
	Global_35970[87 /*12*/].f_10 = 0;
	Global_35970[87 /*12*/].f_11 = 0;
	Global_35970[87 /*12*/].f_4 = 1;
	Global_35970[87 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[87 /*12*/].f_5[0 /*4*/].f_1 = 88;
	Global_35970[87 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[87 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[88 /*12*/] = 197;
	Global_35970[88 /*12*/].f_1 = 198;
	Global_35970[88 /*12*/].f_2 = 24;
	Global_35970[88 /*12*/].f_3 = 0;
	Global_35970[88 /*12*/].f_10 = 0;
	Global_35970[88 /*12*/].f_11 = 120000;
	Global_35970[88 /*12*/].f_4 = 0;
	Global_35970[89 /*12*/] = 200;
	Global_35970[89 /*12*/].f_1 = 201;
	Global_35970[89 /*12*/].f_2 = 24;
	Global_35970[89 /*12*/].f_3 = 0;
	Global_35970[89 /*12*/].f_10 = 1;
	Global_35970[89 /*12*/].f_11 = 0;
	Global_35970[89 /*12*/].f_4 = 1;
	Global_35970[89 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[89 /*12*/].f_5[0 /*4*/].f_1 = 90;
	Global_35970[89 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[89 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[90 /*12*/] = 202;
	Global_35970[90 /*12*/].f_1 = 203;
	Global_35970[90 /*12*/].f_2 = 0;
	Global_35970[90 /*12*/].f_3 = 24;
	Global_35970[90 /*12*/].f_10 = 0;
	Global_35970[90 /*12*/].f_11 = 0;
	Global_35970[90 /*12*/].f_4 = 1;
	Global_35970[90 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[90 /*12*/].f_5[0 /*4*/].f_1 = 91;
	Global_35970[90 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[90 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[91 /*12*/] = 204;
	Global_35970[91 /*12*/].f_1 = 205;
	Global_35970[91 /*12*/].f_2 = 24;
	Global_35970[91 /*12*/].f_3 = 0;
	Global_35970[91 /*12*/].f_10 = 0;
	Global_35970[91 /*12*/].f_11 = 120000;
	Global_35970[91 /*12*/].f_4 = 0;
	Global_35970[92 /*12*/] = 209;
	Global_35970[92 /*12*/].f_1 = 210;
	Global_35970[92 /*12*/].f_2 = 25;
	Global_35970[92 /*12*/].f_3 = 0;
	Global_35970[92 /*12*/].f_10 = 1;
	Global_35970[92 /*12*/].f_11 = 0;
	Global_35970[92 /*12*/].f_4 = 1;
	Global_35970[92 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[92 /*12*/].f_5[0 /*4*/].f_1 = 93;
	Global_35970[92 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[92 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[93 /*12*/] = 211;
	Global_35970[93 /*12*/].f_1 = 212;
	Global_35970[93 /*12*/].f_2 = 0;
	Global_35970[93 /*12*/].f_3 = 25;
	Global_35970[93 /*12*/].f_10 = 0;
	Global_35970[93 /*12*/].f_11 = 0;
	Global_35970[93 /*12*/].f_4 = 1;
	Global_35970[93 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[93 /*12*/].f_5[0 /*4*/].f_1 = 94;
	Global_35970[93 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[93 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[94 /*12*/] = 213;
	Global_35970[94 /*12*/].f_1 = 214;
	Global_35970[94 /*12*/].f_2 = 25;
	Global_35970[94 /*12*/].f_3 = 0;
	Global_35970[94 /*12*/].f_10 = 1;
	Global_35970[94 /*12*/].f_11 = 60000;
	Global_35970[94 /*12*/].f_4 = 1;
	Global_35970[94 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[94 /*12*/].f_5[0 /*4*/].f_1 = 95;
	Global_35970[94 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[94 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[95 /*12*/] = 215;
	Global_35970[95 /*12*/].f_1 = 216;
	Global_35970[95 /*12*/].f_2 = 0;
	Global_35970[95 /*12*/].f_3 = 25;
	Global_35970[95 /*12*/].f_10 = 0;
	Global_35970[95 /*12*/].f_11 = 0;
	Global_35970[95 /*12*/].f_4 = 1;
	Global_35970[95 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[95 /*12*/].f_5[0 /*4*/].f_1 = 96;
	Global_35970[95 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[95 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[96 /*12*/] = 217;
	Global_35970[96 /*12*/].f_1 = 218;
	Global_35970[96 /*12*/].f_2 = 25;
	Global_35970[96 /*12*/].f_3 = 0;
	Global_35970[96 /*12*/].f_10 = 0;
	Global_35970[96 /*12*/].f_11 = 60000;
	Global_35970[96 /*12*/].f_4 = 0;
	Global_35970[97 /*12*/] = 222;
	Global_35970[97 /*12*/].f_1 = 223;
	Global_35970[97 /*12*/].f_2 = 26;
	Global_35970[97 /*12*/].f_3 = 0;
	Global_35970[97 /*12*/].f_10 = 1;
	Global_35970[97 /*12*/].f_11 = 0;
	Global_35970[97 /*12*/].f_4 = 1;
	Global_35970[97 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[97 /*12*/].f_5[0 /*4*/].f_1 = 98;
	Global_35970[97 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[97 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[98 /*12*/] = 224;
	Global_35970[98 /*12*/].f_1 = 225;
	Global_35970[98 /*12*/].f_2 = 0;
	Global_35970[98 /*12*/].f_3 = 26;
	Global_35970[98 /*12*/].f_10 = 0;
	Global_35970[98 /*12*/].f_11 = 0;
	Global_35970[98 /*12*/].f_4 = 0;
	Global_35970[99 /*12*/] = 229;
	Global_35970[99 /*12*/].f_1 = 230;
	Global_35970[99 /*12*/].f_2 = 27;
	Global_35970[99 /*12*/].f_3 = 0;
	Global_35970[99 /*12*/].f_10 = 1;
	Global_35970[99 /*12*/].f_11 = 0;
	Global_35970[99 /*12*/].f_4 = 1;
	Global_35970[99 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[99 /*12*/].f_5[0 /*4*/].f_1 = 100;
	Global_35970[99 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[99 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[100 /*12*/] = 231;
	Global_35970[100 /*12*/].f_1 = 232;
	Global_35970[100 /*12*/].f_2 = 0;
	Global_35970[100 /*12*/].f_3 = 27;
	Global_35970[100 /*12*/].f_10 = 0;
	Global_35970[100 /*12*/].f_11 = 0;
	Global_35970[100 /*12*/].f_4 = 0;
	Global_35970[101 /*12*/] = 236;
	Global_35970[101 /*12*/].f_1 = 237;
	Global_35970[101 /*12*/].f_2 = 28;
	Global_35970[101 /*12*/].f_3 = 0;
	Global_35970[101 /*12*/].f_10 = 0;
	Global_35970[101 /*12*/].f_11 = 0;
	Global_35970[101 /*12*/].f_4 = 0;
	Global_35970[102 /*12*/] = 238;
	Global_35970[102 /*12*/].f_1 = 239;
	Global_35970[102 /*12*/].f_2 = 26;
	Global_35970[102 /*12*/].f_3 = 0;
	Global_35970[102 /*12*/].f_10 = 1;
	Global_35970[102 /*12*/].f_11 = 0;
	Global_35970[102 /*12*/].f_4 = 1;
	Global_35970[102 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[102 /*12*/].f_5[0 /*4*/].f_1 = 103;
	Global_35970[102 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[102 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[103 /*12*/] = 240;
	Global_35970[103 /*12*/].f_1 = 241;
	Global_35970[103 /*12*/].f_2 = 0;
	Global_35970[103 /*12*/].f_3 = 26;
	Global_35970[103 /*12*/].f_10 = 0;
	Global_35970[103 /*12*/].f_11 = 0;
	Global_35970[103 /*12*/].f_4 = 0;
	Global_35970[104 /*12*/] = 245;
	Global_35970[104 /*12*/].f_1 = 246;
	Global_35970[104 /*12*/].f_2 = 29;
	Global_35970[104 /*12*/].f_3 = 0;
	Global_35970[104 /*12*/].f_10 = 1;
	Global_35970[104 /*12*/].f_11 = 0;
	Global_35970[104 /*12*/].f_4 = 1;
	Global_35970[104 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[104 /*12*/].f_5[0 /*4*/].f_1 = 105;
	Global_35970[104 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[104 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[105 /*12*/] = 247;
	Global_35970[105 /*12*/].f_1 = 248;
	Global_35970[105 /*12*/].f_2 = 0;
	Global_35970[105 /*12*/].f_3 = 29;
	Global_35970[105 /*12*/].f_10 = 0;
	Global_35970[105 /*12*/].f_11 = 0;
	Global_35970[105 /*12*/].f_4 = 0;
	Global_35970[106 /*12*/] = 252;
	Global_35970[106 /*12*/].f_1 = 253;
	Global_35970[106 /*12*/].f_2 = 30;
	Global_35970[106 /*12*/].f_3 = 1;
	Global_35970[106 /*12*/].f_10 = 1;
	Global_35970[106 /*12*/].f_11 = 120000;
	Global_35970[106 /*12*/].f_4 = 1;
	Global_35970[106 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[106 /*12*/].f_5[0 /*4*/].f_1 = 107;
	Global_35970[106 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[106 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[107 /*12*/] = 254;
	Global_35970[107 /*12*/].f_1 = 255;
	Global_35970[107 /*12*/].f_2 = 1;
	Global_35970[107 /*12*/].f_3 = 30;
	Global_35970[107 /*12*/].f_10 = 0;
	Global_35970[107 /*12*/].f_11 = 0;
	Global_35970[107 /*12*/].f_4 = 1;
	Global_35970[107 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[107 /*12*/].f_5[0 /*4*/].f_1 = 108;
	Global_35970[107 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[107 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[108 /*12*/] = 256;
	Global_35970[108 /*12*/].f_1 = 257;
	Global_35970[108 /*12*/].f_2 = 30;
	Global_35970[108 /*12*/].f_3 = 1;
	Global_35970[108 /*12*/].f_10 = 1;
	Global_35970[108 /*12*/].f_11 = 120000;
	Global_35970[108 /*12*/].f_4 = 1;
	Global_35970[108 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[108 /*12*/].f_5[0 /*4*/].f_1 = 109;
	Global_35970[108 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[108 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[109 /*12*/] = 258;
	Global_35970[109 /*12*/].f_1 = 259;
	Global_35970[109 /*12*/].f_2 = 1;
	Global_35970[109 /*12*/].f_3 = 30;
	Global_35970[109 /*12*/].f_10 = 0;
	Global_35970[109 /*12*/].f_11 = 0;
	Global_35970[109 /*12*/].f_4 = 1;
	Global_35970[109 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[109 /*12*/].f_5[0 /*4*/].f_1 = 110;
	Global_35970[109 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[109 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[110 /*12*/] = 260;
	Global_35970[110 /*12*/].f_1 = 261;
	Global_35970[110 /*12*/].f_2 = 30;
	Global_35970[110 /*12*/].f_3 = 1;
	Global_35970[110 /*12*/].f_10 = 0;
	Global_35970[110 /*12*/].f_11 = 60000;
	Global_35970[110 /*12*/].f_4 = 0;
	Global_35970[111 /*12*/] = 265;
	Global_35970[111 /*12*/].f_1 = 266;
	Global_35970[111 /*12*/].f_2 = 31;
	Global_35970[111 /*12*/].f_3 = 1;
	Global_35970[111 /*12*/].f_10 = 1;
	Global_35970[111 /*12*/].f_11 = 0;
	Global_35970[111 /*12*/].f_4 = 1;
	Global_35970[111 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[111 /*12*/].f_5[0 /*4*/].f_1 = 112;
	Global_35970[111 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[111 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[112 /*12*/] = 267;
	Global_35970[112 /*12*/].f_1 = 268;
	Global_35970[112 /*12*/].f_2 = 1;
	Global_35970[112 /*12*/].f_3 = 31;
	Global_35970[112 /*12*/].f_10 = 0;
	Global_35970[112 /*12*/].f_11 = 0;
	Global_35970[112 /*12*/].f_4 = 0;
	Global_35970[113 /*12*/] = 272;
	Global_35970[113 /*12*/].f_1 = 273;
	Global_35970[113 /*12*/].f_2 = 32;
	Global_35970[113 /*12*/].f_3 = 1;
	Global_35970[113 /*12*/].f_10 = 1;
	Global_35970[113 /*12*/].f_11 = 0;
	Global_35970[113 /*12*/].f_4 = 1;
	Global_35970[113 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[113 /*12*/].f_5[0 /*4*/].f_1 = 114;
	Global_35970[113 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[113 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[114 /*12*/] = 274;
	Global_35970[114 /*12*/].f_1 = 275;
	Global_35970[114 /*12*/].f_2 = 1;
	Global_35970[114 /*12*/].f_3 = 32;
	Global_35970[114 /*12*/].f_10 = 0;
	Global_35970[114 /*12*/].f_11 = 0;
	Global_35970[114 /*12*/].f_4 = 1;
	Global_35970[114 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[114 /*12*/].f_5[0 /*4*/].f_1 = 115;
	Global_35970[114 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[114 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[115 /*12*/] = 276;
	Global_35970[115 /*12*/].f_1 = 277;
	Global_35970[115 /*12*/].f_2 = 32;
	Global_35970[115 /*12*/].f_3 = 1;
	Global_35970[115 /*12*/].f_10 = 0;
	Global_35970[115 /*12*/].f_11 = 30000;
	Global_35970[115 /*12*/].f_4 = 0;
	Global_35970[116 /*12*/] = 278;
	Global_35970[116 /*12*/].f_1 = 279;
	Global_35970[116 /*12*/].f_2 = 32;
	Global_35970[116 /*12*/].f_3 = 1;
	Global_35970[116 /*12*/].f_10 = 1;
	Global_35970[116 /*12*/].f_11 = 0;
	Global_35970[116 /*12*/].f_4 = 1;
	Global_35970[116 /*12*/].f_5[0 /*4*/] = 282;
	Global_35970[116 /*12*/].f_5[0 /*4*/].f_1 = 117;
	Global_35970[116 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[116 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[117 /*12*/] = 280;
	Global_35970[117 /*12*/].f_1 = 281;
	Global_35970[117 /*12*/].f_2 = 1;
	Global_35970[117 /*12*/].f_3 = 32;
	Global_35970[117 /*12*/].f_10 = 0;
	Global_35970[117 /*12*/].f_11 = 0;
	Global_35970[117 /*12*/].f_4 = 0;
	Global_35970[118 /*12*/] = 283;
	Global_35970[118 /*12*/].f_1 = 284;
	Global_35970[118 /*12*/].f_2 = 32;
	Global_35970[118 /*12*/].f_3 = 1;
	Global_35970[118 /*12*/].f_10 = 1;
	Global_35970[118 /*12*/].f_11 = 0;
	Global_35970[118 /*12*/].f_4 = 1;
	Global_35970[118 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[118 /*12*/].f_5[0 /*4*/].f_1 = 119;
	Global_35970[118 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[118 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[119 /*12*/] = 285;
	Global_35970[119 /*12*/].f_1 = 286;
	Global_35970[119 /*12*/].f_2 = 1;
	Global_35970[119 /*12*/].f_3 = 32;
	Global_35970[119 /*12*/].f_10 = 0;
	Global_35970[119 /*12*/].f_11 = 0;
	Global_35970[119 /*12*/].f_4 = 0;
	Global_35970[120 /*12*/] = 287;
	Global_35970[120 /*12*/].f_1 = 288;
	Global_35970[120 /*12*/].f_2 = 32;
	Global_35970[120 /*12*/].f_3 = 1;
	Global_35970[120 /*12*/].f_10 = 1;
	Global_35970[120 /*12*/].f_11 = 0;
	Global_35970[120 /*12*/].f_4 = 1;
	Global_35970[120 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[120 /*12*/].f_5[0 /*4*/].f_1 = 121;
	Global_35970[120 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[120 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[121 /*12*/] = 289;
	Global_35970[121 /*12*/].f_1 = 290;
	Global_35970[121 /*12*/].f_2 = 1;
	Global_35970[121 /*12*/].f_3 = 32;
	Global_35970[121 /*12*/].f_10 = 0;
	Global_35970[121 /*12*/].f_11 = 0;
	Global_35970[121 /*12*/].f_4 = 1;
	Global_35970[121 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[121 /*12*/].f_5[0 /*4*/].f_1 = 122;
	Global_35970[121 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[121 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[122 /*12*/] = 291;
	Global_35970[122 /*12*/].f_1 = 292;
	Global_35970[122 /*12*/].f_2 = 32;
	Global_35970[122 /*12*/].f_3 = 1;
	Global_35970[122 /*12*/].f_10 = 1;
	Global_35970[122 /*12*/].f_11 = 30000;
	Global_35970[122 /*12*/].f_4 = 1;
	Global_35970[122 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[122 /*12*/].f_5[0 /*4*/].f_1 = 123;
	Global_35970[122 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[122 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[123 /*12*/] = 293;
	Global_35970[123 /*12*/].f_1 = 294;
	Global_35970[123 /*12*/].f_2 = 1;
	Global_35970[123 /*12*/].f_3 = 32;
	Global_35970[123 /*12*/].f_10 = 0;
	Global_35970[123 /*12*/].f_11 = 0;
	Global_35970[123 /*12*/].f_4 = 0;
	Global_35970[124 /*12*/] = 295;
	Global_35970[124 /*12*/].f_1 = 296;
	Global_35970[124 /*12*/].f_2 = 27;
	Global_35970[124 /*12*/].f_3 = 1;
	Global_35970[124 /*12*/].f_10 = 1;
	Global_35970[124 /*12*/].f_11 = 0;
	Global_35970[124 /*12*/].f_4 = 1;
	Global_35970[124 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[124 /*12*/].f_5[0 /*4*/].f_1 = 125;
	Global_35970[124 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[124 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[125 /*12*/] = 297;
	Global_35970[125 /*12*/].f_1 = 298;
	Global_35970[125 /*12*/].f_2 = 1;
	Global_35970[125 /*12*/].f_3 = 27;
	Global_35970[125 /*12*/].f_10 = 0;
	Global_35970[125 /*12*/].f_11 = 0;
	Global_35970[125 /*12*/].f_4 = 0;
	Global_35970[126 /*12*/] = 299;
	Global_35970[126 /*12*/].f_1 = 300;
	Global_35970[126 /*12*/].f_2 = 2;
	Global_35970[126 /*12*/].f_3 = 1;
	Global_35970[126 /*12*/].f_10 = 1;
	Global_35970[126 /*12*/].f_11 = 0;
	Global_35970[126 /*12*/].f_4 = 1;
	Global_35970[126 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[126 /*12*/].f_5[0 /*4*/].f_1 = 127;
	Global_35970[126 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[126 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[127 /*12*/] = 301;
	Global_35970[127 /*12*/].f_1 = 302;
	Global_35970[127 /*12*/].f_2 = 1;
	Global_35970[127 /*12*/].f_3 = 2;
	Global_35970[127 /*12*/].f_10 = 0;
	Global_35970[127 /*12*/].f_11 = 0;
	Global_35970[127 /*12*/].f_4 = 1;
	Global_35970[127 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[127 /*12*/].f_5[0 /*4*/].f_1 = 128;
	Global_35970[127 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[127 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[128 /*12*/] = 303;
	Global_35970[128 /*12*/].f_1 = 304;
	Global_35970[128 /*12*/].f_2 = 2;
	Global_35970[128 /*12*/].f_3 = 1;
	Global_35970[128 /*12*/].f_10 = 1;
	Global_35970[128 /*12*/].f_11 = 60000;
	Global_35970[128 /*12*/].f_4 = 1;
	Global_35970[128 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[128 /*12*/].f_5[0 /*4*/].f_1 = 129;
	Global_35970[128 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[128 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[129 /*12*/] = 305;
	Global_35970[129 /*12*/].f_1 = 306;
	Global_35970[129 /*12*/].f_2 = 1;
	Global_35970[129 /*12*/].f_3 = 2;
	Global_35970[129 /*12*/].f_10 = 0;
	Global_35970[129 /*12*/].f_11 = 0;
	Global_35970[129 /*12*/].f_4 = 1;
	Global_35970[129 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[129 /*12*/].f_5[0 /*4*/].f_1 = 130;
	Global_35970[129 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[129 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[130 /*12*/] = 307;
	Global_35970[130 /*12*/].f_1 = 308;
	Global_35970[130 /*12*/].f_2 = 2;
	Global_35970[130 /*12*/].f_3 = 1;
	Global_35970[130 /*12*/].f_10 = 0;
	Global_35970[130 /*12*/].f_11 = 30000;
	Global_35970[130 /*12*/].f_4 = 0;
	Global_35970[131 /*12*/] = 309;
	Global_35970[131 /*12*/].f_1 = 310;
	Global_35970[131 /*12*/].f_2 = 0;
	Global_35970[131 /*12*/].f_3 = 1;
	Global_35970[131 /*12*/].f_10 = 1;
	Global_35970[131 /*12*/].f_11 = 0;
	Global_35970[131 /*12*/].f_4 = 1;
	Global_35970[131 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[131 /*12*/].f_5[0 /*4*/].f_1 = 132;
	Global_35970[131 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[131 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[132 /*12*/] = 311;
	Global_35970[132 /*12*/].f_1 = 312;
	Global_35970[132 /*12*/].f_2 = 1;
	Global_35970[132 /*12*/].f_3 = 0;
	Global_35970[132 /*12*/].f_10 = 0;
	Global_35970[132 /*12*/].f_11 = 0;
	Global_35970[132 /*12*/].f_4 = 1;
	Global_35970[132 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[132 /*12*/].f_5[0 /*4*/].f_1 = 133;
	Global_35970[132 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[132 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[133 /*12*/] = 313;
	Global_35970[133 /*12*/].f_1 = 314;
	Global_35970[133 /*12*/].f_2 = 0;
	Global_35970[133 /*12*/].f_3 = 1;
	Global_35970[133 /*12*/].f_10 = 0;
	Global_35970[133 /*12*/].f_11 = 25000;
	Global_35970[133 /*12*/].f_4 = 0;
	Global_35970[134 /*12*/] = 315;
	Global_35970[134 /*12*/].f_1 = 316;
	Global_35970[134 /*12*/].f_2 = 0;
	Global_35970[134 /*12*/].f_3 = 1;
	Global_35970[134 /*12*/].f_10 = 1;
	Global_35970[134 /*12*/].f_11 = 0;
	Global_35970[134 /*12*/].f_4 = 1;
	Global_35970[134 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[134 /*12*/].f_5[0 /*4*/].f_1 = 135;
	Global_35970[134 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[134 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[135 /*12*/] = 317;
	Global_35970[135 /*12*/].f_1 = 318;
	Global_35970[135 /*12*/].f_2 = 1;
	Global_35970[135 /*12*/].f_3 = 0;
	Global_35970[135 /*12*/].f_10 = 0;
	Global_35970[135 /*12*/].f_11 = 0;
	Global_35970[135 /*12*/].f_4 = 0;
	Global_35970[136 /*12*/] = 322;
	Global_35970[136 /*12*/].f_1 = 323;
	Global_35970[136 /*12*/].f_2 = 33;
	Global_35970[136 /*12*/].f_3 = 2;
	Global_35970[136 /*12*/].f_10 = 1;
	Global_35970[136 /*12*/].f_11 = 0;
	Global_35970[136 /*12*/].f_4 = 1;
	Global_35970[136 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[136 /*12*/].f_5[0 /*4*/].f_1 = 137;
	Global_35970[136 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[136 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[137 /*12*/] = 324;
	Global_35970[137 /*12*/].f_1 = 325;
	Global_35970[137 /*12*/].f_2 = 2;
	Global_35970[137 /*12*/].f_3 = 33;
	Global_35970[137 /*12*/].f_10 = 0;
	Global_35970[137 /*12*/].f_11 = 0;
	Global_35970[137 /*12*/].f_4 = 0;
	Global_35970[138 /*12*/] = 326;
	Global_35970[138 /*12*/].f_1 = 327;
	Global_35970[138 /*12*/].f_2 = 33;
	Global_35970[138 /*12*/].f_3 = 2;
	Global_35970[138 /*12*/].f_10 = 1;
	Global_35970[138 /*12*/].f_11 = 0;
	Global_35970[138 /*12*/].f_4 = 1;
	Global_35970[138 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[138 /*12*/].f_5[0 /*4*/].f_1 = 139;
	Global_35970[138 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[138 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[139 /*12*/] = 328;
	Global_35970[139 /*12*/].f_1 = 329;
	Global_35970[139 /*12*/].f_2 = 2;
	Global_35970[139 /*12*/].f_3 = 33;
	Global_35970[139 /*12*/].f_10 = 0;
	Global_35970[139 /*12*/].f_11 = 0;
	Global_35970[139 /*12*/].f_4 = 1;
	Global_35970[139 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[139 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_35970[139 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[139 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[140 /*12*/] = 330;
	Global_35970[140 /*12*/].f_1 = 331;
	Global_35970[140 /*12*/].f_2 = 2;
	Global_35970[140 /*12*/].f_3 = 33;
	Global_35970[140 /*12*/].f_10 = 0;
	Global_35970[140 /*12*/].f_11 = 0;
	Global_35970[140 /*12*/].f_4 = 0;
	Global_35970[141 /*12*/] = 332;
	Global_35970[141 /*12*/].f_1 = 333;
	Global_35970[141 /*12*/].f_2 = 29;
	Global_35970[141 /*12*/].f_3 = 2;
	Global_35970[141 /*12*/].f_10 = 0;
	Global_35970[141 /*12*/].f_11 = 0;
	Global_35970[141 /*12*/].f_4 = 1;
	Global_35970[141 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[141 /*12*/].f_5[0 /*4*/].f_1 = 142;
	Global_35970[141 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[141 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[142 /*12*/] = 334;
	Global_35970[142 /*12*/].f_1 = 335;
	Global_35970[142 /*12*/].f_2 = 2;
	Global_35970[142 /*12*/].f_3 = 29;
	Global_35970[142 /*12*/].f_10 = 0;
	Global_35970[142 /*12*/].f_11 = 0;
	Global_35970[142 /*12*/].f_4 = 0;
	Global_35970[143 /*12*/] = 336;
	Global_35970[143 /*12*/].f_1 = 337;
	Global_35970[143 /*12*/].f_2 = 3;
	Global_35970[143 /*12*/].f_3 = 2;
	Global_35970[143 /*12*/].f_10 = 0;
	Global_35970[143 /*12*/].f_11 = 0;
	Global_35970[143 /*12*/].f_4 = 1;
	Global_35970[143 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[143 /*12*/].f_5[0 /*4*/].f_1 = 144;
	Global_35970[143 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[143 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[144 /*12*/] = 338;
	Global_35970[144 /*12*/].f_1 = 339;
	Global_35970[144 /*12*/].f_2 = 2;
	Global_35970[144 /*12*/].f_3 = 3;
	Global_35970[144 /*12*/].f_10 = 0;
	Global_35970[144 /*12*/].f_11 = 0;
	Global_35970[144 /*12*/].f_4 = 0;
	Global_35970[145 /*12*/] = 343;
	Global_35970[145 /*12*/].f_1 = 344;
	Global_35970[145 /*12*/].f_2 = 34;
	Global_35970[145 /*12*/].f_3 = 2;
	Global_35970[145 /*12*/].f_10 = 0;
	Global_35970[145 /*12*/].f_11 = 0;
	Global_35970[145 /*12*/].f_4 = 1;
	Global_35970[145 /*12*/].f_5[0 /*4*/] = 199;
	Global_35970[145 /*12*/].f_5[0 /*4*/].f_1 = 146;
	Global_35970[145 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[145 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[146 /*12*/] = 345;
	Global_35970[146 /*12*/].f_1 = 346;
	Global_35970[146 /*12*/].f_2 = 2;
	Global_35970[146 /*12*/].f_3 = 34;
	Global_35970[146 /*12*/].f_10 = 0;
	Global_35970[146 /*12*/].f_11 = 0;
	Global_35970[146 /*12*/].f_4 = 0;
	Global_35970[147 /*12*/] = 319;
	Global_35970[147 /*12*/].f_1 = 347;
	Global_35970[147 /*12*/].f_2 = 26;
	Global_35970[147 /*12*/].f_3 = 2;
	Global_35970[147 /*12*/].f_10 = 0;
	Global_35970[147 /*12*/].f_11 = 0;
	Global_35970[147 /*12*/].f_4 = 0;
	Global_35970[148 /*12*/] = 351;
	Global_35970[148 /*12*/].f_1 = 352;
	Global_35970[148 /*12*/].f_2 = 35;
	Global_35970[148 /*12*/].f_3 = 2;
	Global_35970[148 /*12*/].f_10 = 0;
	Global_35970[148 /*12*/].f_11 = 0;
	Global_35970[148 /*12*/].f_4 = 0;
	Global_35970[149 /*12*/] = 351;
	Global_35970[149 /*12*/].f_1 = 352;
	Global_35970[149 /*12*/].f_2 = 35;
	Global_35970[149 /*12*/].f_3 = 0;
	Global_35970[149 /*12*/].f_10 = 0;
	Global_35970[149 /*12*/].f_11 = 0;
	Global_35970[149 /*12*/].f_4 = 0;
	Global_35970[150 /*12*/] = 351;
	Global_35970[150 /*12*/].f_1 = 352;
	Global_35970[150 /*12*/].f_2 = 35;
	Global_35970[150 /*12*/].f_3 = 1;
	Global_35970[150 /*12*/].f_10 = 0;
	Global_35970[150 /*12*/].f_11 = 0;
	Global_35970[150 /*12*/].f_4 = 0;
	Global_35970[151 /*12*/] = 355;
	Global_35970[151 /*12*/].f_1 = 356;
	Global_35970[151 /*12*/].f_2 = 36;
	Global_35970[151 /*12*/].f_3 = 2;
	Global_35970[151 /*12*/].f_10 = 0;
	Global_35970[151 /*12*/].f_11 = 0;
	Global_35970[151 /*12*/].f_4 = 0;
	Global_35970[152 /*12*/] = 355;
	Global_35970[152 /*12*/].f_1 = 356;
	Global_35970[152 /*12*/].f_2 = 36;
	Global_35970[152 /*12*/].f_3 = 0;
	Global_35970[152 /*12*/].f_10 = 0;
	Global_35970[152 /*12*/].f_11 = 0;
	Global_35970[152 /*12*/].f_4 = 0;
	Global_35970[153 /*12*/] = 355;
	Global_35970[153 /*12*/].f_1 = 356;
	Global_35970[153 /*12*/].f_2 = 36;
	Global_35970[153 /*12*/].f_3 = 1;
	Global_35970[153 /*12*/].f_10 = 0;
	Global_35970[153 /*12*/].f_11 = 0;
	Global_35970[153 /*12*/].f_4 = 0;
	Global_35970[154 /*12*/] = 363;
	Global_35970[154 /*12*/].f_1 = 364;
	Global_35970[154 /*12*/].f_2 = 38;
	Global_35970[154 /*12*/].f_3 = 2;
	Global_35970[154 /*12*/].f_10 = 0;
	Global_35970[154 /*12*/].f_11 = 0;
	Global_35970[154 /*12*/].f_4 = 0;
	Global_35970[155 /*12*/] = 365;
	Global_35970[155 /*12*/].f_1 = 366;
	Global_35970[155 /*12*/].f_2 = 11;
	Global_35970[155 /*12*/].f_3 = 0;
	Global_35970[155 /*12*/].f_10 = 0;
	Global_35970[155 /*12*/].f_11 = 0;
	Global_35970[155 /*12*/].f_4 = 0;
	Global_35970[156 /*12*/] = 365;
	Global_35970[156 /*12*/].f_1 = 366;
	Global_35970[156 /*12*/].f_2 = 11;
	Global_35970[156 /*12*/].f_3 = 1;
	Global_35970[156 /*12*/].f_10 = 0;
	Global_35970[156 /*12*/].f_11 = 0;
	Global_35970[156 /*12*/].f_4 = 0;
	Global_35970[157 /*12*/] = 365;
	Global_35970[157 /*12*/].f_1 = 366;
	Global_35970[157 /*12*/].f_2 = 11;
	Global_35970[157 /*12*/].f_3 = 2;
	Global_35970[157 /*12*/].f_10 = 0;
	Global_35970[157 /*12*/].f_11 = 0;
	Global_35970[157 /*12*/].f_4 = 0;
	Global_35970[158 /*12*/] = 367;
	Global_35970[158 /*12*/].f_1 = 368;
	Global_35970[158 /*12*/].f_2 = 29;
	Global_35970[158 /*12*/].f_3 = 2;
	Global_35970[158 /*12*/].f_10 = 0;
	Global_35970[158 /*12*/].f_11 = 0;
	Global_35970[158 /*12*/].f_4 = 0;
	Global_35970[159 /*12*/] = 372;
	Global_35970[159 /*12*/].f_1 = 373;
	Global_35970[159 /*12*/].f_2 = 39;
	Global_35970[159 /*12*/].f_3 = 0;
	Global_35970[159 /*12*/].f_10 = 0;
	Global_35970[159 /*12*/].f_11 = 0;
	Global_35970[159 /*12*/].f_4 = 0;
	Global_35970[160 /*12*/] = 374;
	Global_35970[160 /*12*/].f_1 = 375;
	Global_35970[160 /*12*/].f_2 = 39;
	Global_35970[160 /*12*/].f_3 = 1;
	Global_35970[160 /*12*/].f_10 = 0;
	Global_35970[160 /*12*/].f_11 = 0;
	Global_35970[160 /*12*/].f_4 = 0;
	Global_35970[161 /*12*/] = 417;
	Global_35970[161 /*12*/].f_1 = 418;
	Global_35970[161 /*12*/].f_2 = 40;
	Global_35970[161 /*12*/].f_3 = 1;
	Global_35970[161 /*12*/].f_10 = 0;
	Global_35970[161 /*12*/].f_11 = 0;
	Global_35970[161 /*12*/].f_4 = 0;
	Global_35970[162 /*12*/] = 419;
	Global_35970[162 /*12*/].f_1 = 420;
	Global_35970[162 /*12*/].f_2 = 43;
	Global_35970[162 /*12*/].f_3 = 0;
	Global_35970[162 /*12*/].f_10 = 0;
	Global_35970[162 /*12*/].f_11 = 0;
	Global_35970[162 /*12*/].f_4 = 0;
	Global_35970[163 /*12*/] = 421;
	Global_35970[163 /*12*/].f_1 = 422;
	Global_35970[163 /*12*/].f_2 = 43;
	Global_35970[163 /*12*/].f_3 = 2;
	Global_35970[163 /*12*/].f_10 = 0;
	Global_35970[163 /*12*/].f_11 = 0;
	Global_35970[163 /*12*/].f_4 = 0;
	Global_35970[164 /*12*/] = 423;
	Global_35970[164 /*12*/].f_1 = 424;
	Global_35970[164 /*12*/].f_2 = 43;
	Global_35970[164 /*12*/].f_3 = 1;
	Global_35970[164 /*12*/].f_10 = 0;
	Global_35970[164 /*12*/].f_11 = 0;
	Global_35970[164 /*12*/].f_4 = 0;
	Global_35970[165 /*12*/] = 425;
	Global_35970[165 /*12*/].f_1 = 426;
	Global_35970[165 /*12*/].f_2 = 44;
	Global_35970[165 /*12*/].f_3 = 1;
	Global_35970[165 /*12*/].f_10 = 0;
	Global_35970[165 /*12*/].f_11 = 0;
	Global_35970[165 /*12*/].f_4 = 0;
	Global_35970[166 /*12*/] = 427;
	Global_35970[166 /*12*/].f_1 = 428;
	Global_35970[166 /*12*/].f_2 = 45;
	Global_35970[166 /*12*/].f_3 = 0;
	Global_35970[166 /*12*/].f_10 = 0;
	Global_35970[166 /*12*/].f_11 = 0;
	Global_35970[166 /*12*/].f_4 = 0;
	Global_35970[167 /*12*/] = 429;
	Global_35970[167 /*12*/].f_1 = 430;
	Global_35970[167 /*12*/].f_2 = 46;
	Global_35970[167 /*12*/].f_3 = 0;
	Global_35970[167 /*12*/].f_10 = 0;
	Global_35970[167 /*12*/].f_11 = 0;
	Global_35970[167 /*12*/].f_4 = 0;
	Global_35970[168 /*12*/] = 431;
	Global_35970[168 /*12*/].f_1 = 432;
	Global_35970[168 /*12*/].f_2 = 49;
	Global_35970[168 /*12*/].f_3 = 0;
	Global_35970[168 /*12*/].f_10 = 0;
	Global_35970[168 /*12*/].f_11 = 0;
	Global_35970[168 /*12*/].f_4 = 0;
	Global_35970[169 /*12*/] = 433;
	Global_35970[169 /*12*/].f_1 = 434;
	Global_35970[169 /*12*/].f_2 = 49;
	Global_35970[169 /*12*/].f_3 = 2;
	Global_35970[169 /*12*/].f_10 = 0;
	Global_35970[169 /*12*/].f_11 = 0;
	Global_35970[169 /*12*/].f_4 = 0;
	Global_35970[170 /*12*/] = 435;
	Global_35970[170 /*12*/].f_1 = 436;
	Global_35970[170 /*12*/].f_2 = 49;
	Global_35970[170 /*12*/].f_3 = 1;
	Global_35970[170 /*12*/].f_10 = 0;
	Global_35970[170 /*12*/].f_11 = 0;
	Global_35970[170 /*12*/].f_4 = 0;
	Global_35970[171 /*12*/] = 437;
	Global_35970[171 /*12*/].f_1 = 438;
	Global_35970[171 /*12*/].f_2 = 50;
	Global_35970[171 /*12*/].f_3 = 1;
	Global_35970[171 /*12*/].f_10 = 0;
	Global_35970[171 /*12*/].f_11 = 0;
	Global_35970[171 /*12*/].f_4 = 0;
	Global_35970[172 /*12*/] = 439;
	Global_35970[172 /*12*/].f_1 = 440;
	Global_35970[172 /*12*/].f_2 = 51;
	Global_35970[172 /*12*/].f_3 = 0;
	Global_35970[172 /*12*/].f_10 = 0;
	Global_35970[172 /*12*/].f_11 = 0;
	Global_35970[172 /*12*/].f_4 = 0;
	Global_35970[173 /*12*/] = 441;
	Global_35970[173 /*12*/].f_1 = 442;
	Global_35970[173 /*12*/].f_2 = 51;
	Global_35970[173 /*12*/].f_3 = 2;
	Global_35970[173 /*12*/].f_10 = 0;
	Global_35970[173 /*12*/].f_11 = 0;
	Global_35970[173 /*12*/].f_4 = 0;
	Global_35970[174 /*12*/] = 443;
	Global_35970[174 /*12*/].f_1 = 444;
	Global_35970[174 /*12*/].f_2 = 51;
	Global_35970[174 /*12*/].f_3 = 1;
	Global_35970[174 /*12*/].f_10 = 0;
	Global_35970[174 /*12*/].f_11 = 0;
	Global_35970[174 /*12*/].f_4 = 0;
	Global_35970[175 /*12*/] = 445;
	Global_35970[175 /*12*/].f_1 = 446;
	Global_35970[175 /*12*/].f_2 = 52;
	Global_35970[175 /*12*/].f_3 = 0;
	Global_35970[175 /*12*/].f_10 = 0;
	Global_35970[175 /*12*/].f_11 = 0;
	Global_35970[175 /*12*/].f_4 = 0;
	Global_35970[176 /*12*/] = 447;
	Global_35970[176 /*12*/].f_1 = 448;
	Global_35970[176 /*12*/].f_2 = 52;
	Global_35970[176 /*12*/].f_3 = 2;
	Global_35970[176 /*12*/].f_10 = 0;
	Global_35970[176 /*12*/].f_11 = 0;
	Global_35970[176 /*12*/].f_4 = 0;
	Global_35970[177 /*12*/] = 449;
	Global_35970[177 /*12*/].f_1 = 450;
	Global_35970[177 /*12*/].f_2 = 52;
	Global_35970[177 /*12*/].f_3 = 1;
	Global_35970[177 /*12*/].f_10 = 0;
	Global_35970[177 /*12*/].f_11 = 0;
	Global_35970[177 /*12*/].f_4 = 0;
	Global_35970[178 /*12*/] = 451;
	Global_35970[178 /*12*/].f_1 = 452;
	Global_35970[178 /*12*/].f_2 = 53;
	Global_35970[178 /*12*/].f_3 = 2;
	Global_35970[178 /*12*/].f_10 = 0;
	Global_35970[178 /*12*/].f_11 = 0;
	Global_35970[178 /*12*/].f_4 = 0;
	Global_35970[179 /*12*/] = 453;
	Global_35970[179 /*12*/].f_1 = 454;
	Global_35970[179 /*12*/].f_2 = 53;
	Global_35970[179 /*12*/].f_3 = 0;
	Global_35970[179 /*12*/].f_10 = 0;
	Global_35970[179 /*12*/].f_11 = 0;
	Global_35970[179 /*12*/].f_4 = 0;
	Global_35970[180 /*12*/] = 455;
	Global_35970[180 /*12*/].f_1 = 456;
	Global_35970[180 /*12*/].f_2 = 53;
	Global_35970[180 /*12*/].f_3 = 1;
	Global_35970[180 /*12*/].f_10 = 0;
	Global_35970[180 /*12*/].f_11 = 0;
	Global_35970[180 /*12*/].f_4 = 0;
	Global_35970[181 /*12*/] = 457;
	Global_35970[181 /*12*/].f_1 = 458;
	Global_35970[181 /*12*/].f_2 = 4;
	Global_35970[181 /*12*/].f_3 = 0;
	Global_35970[181 /*12*/].f_10 = 0;
	Global_35970[181 /*12*/].f_11 = 0;
	Global_35970[181 /*12*/].f_4 = 0;
	Global_35970[182 /*12*/] = 459;
	Global_35970[182 /*12*/].f_1 = 460;
	Global_35970[182 /*12*/].f_2 = 37;
	Global_35970[182 /*12*/].f_3 = 0;
	Global_35970[182 /*12*/].f_10 = 0;
	Global_35970[182 /*12*/].f_11 = 0;
	Global_35970[182 /*12*/].f_4 = 0;
	Global_35970[183 /*12*/] = 461;
	Global_35970[183 /*12*/].f_1 = 462;
	Global_35970[183 /*12*/].f_2 = 37;
	Global_35970[183 /*12*/].f_3 = 2;
	Global_35970[183 /*12*/].f_10 = 0;
	Global_35970[183 /*12*/].f_11 = 0;
	Global_35970[183 /*12*/].f_4 = 0;
	Global_35970[184 /*12*/] = 463;
	Global_35970[184 /*12*/].f_1 = 464;
	Global_35970[184 /*12*/].f_2 = 37;
	Global_35970[184 /*12*/].f_3 = 1;
	Global_35970[184 /*12*/].f_10 = 0;
	Global_35970[184 /*12*/].f_11 = 0;
	Global_35970[184 /*12*/].f_4 = 0;
	Global_35970[185 /*12*/] = 471;
	Global_35970[185 /*12*/].f_1 = 472;
	Global_35970[185 /*12*/].f_2 = 54;
	Global_35970[185 /*12*/].f_3 = 1;
	Global_35970[185 /*12*/].f_10 = 0;
	Global_35970[185 /*12*/].f_11 = 0;
	Global_35970[185 /*12*/].f_4 = 0;
	Global_35970[186 /*12*/] = 473;
	Global_35970[186 /*12*/].f_1 = 474;
	Global_35970[186 /*12*/].f_2 = 54;
	Global_35970[186 /*12*/].f_3 = 0;
	Global_35970[186 /*12*/].f_10 = 0;
	Global_35970[186 /*12*/].f_11 = 0;
	Global_35970[186 /*12*/].f_4 = 0;
	Global_35970[187 /*12*/] = 475;
	Global_35970[187 /*12*/].f_1 = 476;
	Global_35970[187 /*12*/].f_2 = 55;
	Global_35970[187 /*12*/].f_3 = 1;
	Global_35970[187 /*12*/].f_10 = 0;
	Global_35970[187 /*12*/].f_11 = 0;
	Global_35970[187 /*12*/].f_4 = 0;
	Global_35970[188 /*12*/] = 477;
	Global_35970[188 /*12*/].f_1 = 478;
	Global_35970[188 /*12*/].f_2 = 54;
	Global_35970[188 /*12*/].f_3 = 2;
	Global_35970[188 /*12*/].f_10 = 0;
	Global_35970[188 /*12*/].f_11 = 0;
	Global_35970[188 /*12*/].f_4 = 0;
	Global_35970[189 /*12*/] = 479;
	Global_35970[189 /*12*/].f_1 = 480;
	Global_35970[189 /*12*/].f_2 = 55;
	Global_35970[189 /*12*/].f_3 = 0;
	Global_35970[189 /*12*/].f_10 = 0;
	Global_35970[189 /*12*/].f_11 = 0;
	Global_35970[189 /*12*/].f_4 = 0;
	Global_35970[190 /*12*/] = 481;
	Global_35970[190 /*12*/].f_1 = 482;
	Global_35970[190 /*12*/].f_2 = 55;
	Global_35970[190 /*12*/].f_3 = 2;
	Global_35970[190 /*12*/].f_10 = 0;
	Global_35970[190 /*12*/].f_11 = 0;
	Global_35970[190 /*12*/].f_4 = 0;
	Global_35970[191 /*12*/] = 483;
	Global_35970[191 /*12*/].f_1 = 484;
	Global_35970[191 /*12*/].f_2 = 12;
	Global_35970[191 /*12*/].f_3 = 0;
	Global_35970[191 /*12*/].f_10 = 0;
	Global_35970[191 /*12*/].f_11 = 0;
	Global_35970[191 /*12*/].f_4 = 0;
	Global_35970[192 /*12*/] = 485;
	Global_35970[192 /*12*/].f_1 = 486;
	Global_35970[192 /*12*/].f_2 = 12;
	Global_35970[192 /*12*/].f_3 = 1;
	Global_35970[192 /*12*/].f_10 = 0;
	Global_35970[192 /*12*/].f_11 = 0;
	Global_35970[192 /*12*/].f_4 = 0;
	Global_35970[193 /*12*/] = 487;
	Global_35970[193 /*12*/].f_1 = 488;
	Global_35970[193 /*12*/].f_2 = 12;
	Global_35970[193 /*12*/].f_3 = 2;
	Global_35970[193 /*12*/].f_10 = 0;
	Global_35970[193 /*12*/].f_11 = 0;
	Global_35970[193 /*12*/].f_4 = 0;
	Global_35970[194 /*12*/] = 510;
	Global_35970[194 /*12*/].f_1 = 511;
	Global_35970[194 /*12*/].f_2 = 56;
	Global_35970[194 /*12*/].f_3 = 0;
	Global_35970[194 /*12*/].f_10 = 0;
	Global_35970[194 /*12*/].f_11 = 0;
	Global_35970[194 /*12*/].f_4 = 0;
	Global_35970[195 /*12*/] = 512;
	Global_35970[195 /*12*/].f_1 = 513;
	Global_35970[195 /*12*/].f_2 = 56;
	Global_35970[195 /*12*/].f_3 = 0;
	Global_35970[195 /*12*/].f_10 = 0;
	Global_35970[195 /*12*/].f_11 = 0;
	Global_35970[195 /*12*/].f_4 = 0;
	Global_35970[196 /*12*/] = 514;
	Global_35970[196 /*12*/].f_1 = 515;
	Global_35970[196 /*12*/].f_2 = 56;
	Global_35970[196 /*12*/].f_3 = 0;
	Global_35970[196 /*12*/].f_10 = 0;
	Global_35970[196 /*12*/].f_11 = 0;
	Global_35970[196 /*12*/].f_4 = 0;
	Global_35970[197 /*12*/] = 516;
	Global_35970[197 /*12*/].f_1 = 517;
	Global_35970[197 /*12*/].f_2 = 56;
	Global_35970[197 /*12*/].f_3 = 0;
	Global_35970[197 /*12*/].f_10 = 0;
	Global_35970[197 /*12*/].f_11 = 0;
	Global_35970[197 /*12*/].f_4 = 0;
	Global_35970[198 /*12*/] = 518;
	Global_35970[198 /*12*/].f_1 = 519;
	Global_35970[198 /*12*/].f_2 = 56;
	Global_35970[198 /*12*/].f_3 = 0;
	Global_35970[198 /*12*/].f_10 = 0;
	Global_35970[198 /*12*/].f_11 = 0;
	Global_35970[198 /*12*/].f_4 = 0;
	Global_35970[199 /*12*/] = 520;
	Global_35970[199 /*12*/].f_1 = 521;
	Global_35970[199 /*12*/].f_2 = 57;
	Global_35970[199 /*12*/].f_3 = 0;
	Global_35970[199 /*12*/].f_10 = 1;
	Global_35970[199 /*12*/].f_11 = 60000;
	Global_35970[199 /*12*/].f_4 = 1;
	Global_35970[199 /*12*/].f_5[0 /*4*/] = 536;
	Global_35970[199 /*12*/].f_5[0 /*4*/].f_1 = 200;
	Global_35970[199 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[199 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[200 /*12*/] = 522;
	Global_35970[200 /*12*/].f_1 = 523;
	Global_35970[200 /*12*/].f_2 = 0;
	Global_35970[200 /*12*/].f_3 = 57;
	Global_35970[200 /*12*/].f_10 = 0;
	Global_35970[200 /*12*/].f_11 = 0;
	Global_35970[200 /*12*/].f_4 = 1;
	Global_35970[200 /*12*/].f_5[0 /*4*/] = 537;
	Global_35970[200 /*12*/].f_5[0 /*4*/].f_1 = 201;
	Global_35970[200 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[200 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[201 /*12*/] = 524;
	Global_35970[201 /*12*/].f_1 = 525;
	Global_35970[201 /*12*/].f_2 = 57;
	Global_35970[201 /*12*/].f_3 = 0;
	Global_35970[201 /*12*/].f_10 = 1;
	Global_35970[201 /*12*/].f_11 = 60000;
	Global_35970[201 /*12*/].f_4 = 1;
	Global_35970[201 /*12*/].f_5[0 /*4*/] = 538;
	Global_35970[201 /*12*/].f_5[0 /*4*/].f_1 = 202;
	Global_35970[201 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[201 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[202 /*12*/] = 526;
	Global_35970[202 /*12*/].f_1 = 527;
	Global_35970[202 /*12*/].f_2 = 0;
	Global_35970[202 /*12*/].f_3 = 57;
	Global_35970[202 /*12*/].f_10 = 0;
	Global_35970[202 /*12*/].f_11 = 0;
	Global_35970[202 /*12*/].f_4 = 1;
	Global_35970[202 /*12*/].f_5[0 /*4*/] = 539;
	Global_35970[202 /*12*/].f_5[0 /*4*/].f_1 = 203;
	Global_35970[202 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[202 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[203 /*12*/] = 528;
	Global_35970[203 /*12*/].f_1 = 529;
	Global_35970[203 /*12*/].f_2 = 57;
	Global_35970[203 /*12*/].f_3 = 0;
	Global_35970[203 /*12*/].f_10 = 1;
	Global_35970[203 /*12*/].f_11 = 60000;
	Global_35970[203 /*12*/].f_4 = 1;
	Global_35970[203 /*12*/].f_5[0 /*4*/] = 540;
	Global_35970[203 /*12*/].f_5[0 /*4*/].f_1 = 204;
	Global_35970[203 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[203 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[204 /*12*/] = 530;
	Global_35970[204 /*12*/].f_1 = 531;
	Global_35970[204 /*12*/].f_2 = 0;
	Global_35970[204 /*12*/].f_3 = 57;
	Global_35970[204 /*12*/].f_10 = 0;
	Global_35970[204 /*12*/].f_11 = 0;
	Global_35970[204 /*12*/].f_4 = 1;
	Global_35970[204 /*12*/].f_5[0 /*4*/] = 541;
	Global_35970[204 /*12*/].f_5[0 /*4*/].f_1 = 205;
	Global_35970[204 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[204 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[205 /*12*/] = 532;
	Global_35970[205 /*12*/].f_1 = 533;
	Global_35970[205 /*12*/].f_2 = 57;
	Global_35970[205 /*12*/].f_3 = 0;
	Global_35970[205 /*12*/].f_10 = 1;
	Global_35970[205 /*12*/].f_11 = 60000;
	Global_35970[205 /*12*/].f_4 = 1;
	Global_35970[205 /*12*/].f_5[0 /*4*/] = 542;
	Global_35970[205 /*12*/].f_5[0 /*4*/].f_1 = 206;
	Global_35970[205 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[205 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[206 /*12*/] = 534;
	Global_35970[206 /*12*/].f_1 = 535;
	Global_35970[206 /*12*/].f_2 = 0;
	Global_35970[206 /*12*/].f_3 = 57;
	Global_35970[206 /*12*/].f_10 = 0;
	Global_35970[206 /*12*/].f_11 = 0;
	Global_35970[206 /*12*/].f_4 = 0;
	Global_35970[207 /*12*/] = 543;
	Global_35970[207 /*12*/].f_1 = 544;
	Global_35970[207 /*12*/].f_2 = 58;
	Global_35970[207 /*12*/].f_3 = 0;
	Global_35970[207 /*12*/].f_10 = 1;
	Global_35970[207 /*12*/].f_11 = 60000;
	Global_35970[207 /*12*/].f_4 = 1;
	Global_35970[207 /*12*/].f_5[0 /*4*/] = 557;
	Global_35970[207 /*12*/].f_5[0 /*4*/].f_1 = 208;
	Global_35970[207 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[207 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[208 /*12*/] = 545;
	Global_35970[208 /*12*/].f_1 = 546;
	Global_35970[208 /*12*/].f_2 = 0;
	Global_35970[208 /*12*/].f_3 = 58;
	Global_35970[208 /*12*/].f_10 = 0;
	Global_35970[208 /*12*/].f_11 = 0;
	Global_35970[208 /*12*/].f_4 = 1;
	Global_35970[208 /*12*/].f_5[0 /*4*/] = 558;
	Global_35970[208 /*12*/].f_5[0 /*4*/].f_1 = 209;
	Global_35970[208 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[208 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[209 /*12*/] = 547;
	Global_35970[209 /*12*/].f_1 = 548;
	Global_35970[209 /*12*/].f_2 = 58;
	Global_35970[209 /*12*/].f_3 = 0;
	Global_35970[209 /*12*/].f_10 = 1;
	Global_35970[209 /*12*/].f_11 = 60000;
	Global_35970[209 /*12*/].f_4 = 1;
	Global_35970[209 /*12*/].f_5[0 /*4*/] = 559;
	Global_35970[209 /*12*/].f_5[0 /*4*/].f_1 = 210;
	Global_35970[209 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[209 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[210 /*12*/] = 549;
	Global_35970[210 /*12*/].f_1 = 550;
	Global_35970[210 /*12*/].f_2 = 0;
	Global_35970[210 /*12*/].f_3 = 58;
	Global_35970[210 /*12*/].f_10 = 0;
	Global_35970[210 /*12*/].f_11 = 0;
	Global_35970[210 /*12*/].f_4 = 1;
	Global_35970[210 /*12*/].f_5[0 /*4*/] = 560;
	Global_35970[210 /*12*/].f_5[0 /*4*/].f_1 = 211;
	Global_35970[210 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[210 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[211 /*12*/] = 551;
	Global_35970[211 /*12*/].f_1 = 552;
	Global_35970[211 /*12*/].f_2 = 58;
	Global_35970[211 /*12*/].f_3 = 0;
	Global_35970[211 /*12*/].f_10 = 1;
	Global_35970[211 /*12*/].f_11 = 60000;
	Global_35970[211 /*12*/].f_4 = 1;
	Global_35970[211 /*12*/].f_5[0 /*4*/] = 561;
	Global_35970[211 /*12*/].f_5[0 /*4*/].f_1 = 212;
	Global_35970[211 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[211 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[212 /*12*/] = 553;
	Global_35970[212 /*12*/].f_1 = 554;
	Global_35970[212 /*12*/].f_2 = 0;
	Global_35970[212 /*12*/].f_3 = 58;
	Global_35970[212 /*12*/].f_10 = 0;
	Global_35970[212 /*12*/].f_11 = 0;
	Global_35970[212 /*12*/].f_4 = 1;
	Global_35970[212 /*12*/].f_5[0 /*4*/] = 562;
	Global_35970[212 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_35970[212 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[212 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[213 /*12*/] = 555;
	Global_35970[213 /*12*/].f_1 = 556;
	Global_35970[213 /*12*/].f_2 = 58;
	Global_35970[213 /*12*/].f_3 = 0;
	Global_35970[213 /*12*/].f_10 = 1;
	Global_35970[213 /*12*/].f_11 = 60000;
	Global_35970[213 /*12*/].f_4 = 0;
	Global_35970[214 /*12*/] = 563;
	Global_35970[214 /*12*/].f_1 = 564;
	Global_35970[214 /*12*/].f_2 = 59;
	Global_35970[214 /*12*/].f_3 = 0;
	Global_35970[214 /*12*/].f_10 = 1;
	Global_35970[214 /*12*/].f_11 = 60000;
	Global_35970[214 /*12*/].f_4 = 1;
	Global_35970[214 /*12*/].f_5[0 /*4*/] = 579;
	Global_35970[214 /*12*/].f_5[0 /*4*/].f_1 = 215;
	Global_35970[214 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[214 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[215 /*12*/] = 565;
	Global_35970[215 /*12*/].f_1 = 566;
	Global_35970[215 /*12*/].f_2 = 0;
	Global_35970[215 /*12*/].f_3 = 59;
	Global_35970[215 /*12*/].f_10 = 0;
	Global_35970[215 /*12*/].f_11 = 0;
	Global_35970[215 /*12*/].f_4 = 1;
	Global_35970[215 /*12*/].f_5[0 /*4*/] = 580;
	Global_35970[215 /*12*/].f_5[0 /*4*/].f_1 = 216;
	Global_35970[215 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[215 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[216 /*12*/] = 567;
	Global_35970[216 /*12*/].f_1 = 568;
	Global_35970[216 /*12*/].f_2 = 59;
	Global_35970[216 /*12*/].f_3 = 0;
	Global_35970[216 /*12*/].f_10 = 1;
	Global_35970[216 /*12*/].f_11 = 60000;
	Global_35970[216 /*12*/].f_4 = 1;
	Global_35970[216 /*12*/].f_5[0 /*4*/] = 581;
	Global_35970[216 /*12*/].f_5[0 /*4*/].f_1 = 217;
	Global_35970[216 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[216 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[217 /*12*/] = 569;
	Global_35970[217 /*12*/].f_1 = 570;
	Global_35970[217 /*12*/].f_2 = 0;
	Global_35970[217 /*12*/].f_3 = 59;
	Global_35970[217 /*12*/].f_10 = 0;
	Global_35970[217 /*12*/].f_11 = 0;
	Global_35970[217 /*12*/].f_4 = 1;
	Global_35970[217 /*12*/].f_5[0 /*4*/] = 582;
	Global_35970[217 /*12*/].f_5[0 /*4*/].f_1 = 218;
	Global_35970[217 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[217 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[218 /*12*/] = 571;
	Global_35970[218 /*12*/].f_1 = 572;
	Global_35970[218 /*12*/].f_2 = 59;
	Global_35970[218 /*12*/].f_3 = 0;
	Global_35970[218 /*12*/].f_10 = 1;
	Global_35970[218 /*12*/].f_11 = 60000;
	Global_35970[218 /*12*/].f_4 = 1;
	Global_35970[218 /*12*/].f_5[0 /*4*/] = 583;
	Global_35970[218 /*12*/].f_5[0 /*4*/].f_1 = 219;
	Global_35970[218 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[218 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[219 /*12*/] = 573;
	Global_35970[219 /*12*/].f_1 = 574;
	Global_35970[219 /*12*/].f_2 = 0;
	Global_35970[219 /*12*/].f_3 = 59;
	Global_35970[219 /*12*/].f_10 = 0;
	Global_35970[219 /*12*/].f_11 = 0;
	Global_35970[219 /*12*/].f_4 = 1;
	Global_35970[219 /*12*/].f_5[0 /*4*/] = 584;
	Global_35970[219 /*12*/].f_5[0 /*4*/].f_1 = 220;
	Global_35970[219 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[219 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[220 /*12*/] = 575;
	Global_35970[220 /*12*/].f_1 = 576;
	Global_35970[220 /*12*/].f_2 = 59;
	Global_35970[220 /*12*/].f_3 = 0;
	Global_35970[220 /*12*/].f_10 = 1;
	Global_35970[220 /*12*/].f_11 = 60000;
	Global_35970[220 /*12*/].f_4 = 1;
	Global_35970[220 /*12*/].f_5[0 /*4*/] = 585;
	Global_35970[220 /*12*/].f_5[0 /*4*/].f_1 = 221;
	Global_35970[220 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[220 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[221 /*12*/] = 577;
	Global_35970[221 /*12*/].f_1 = 578;
	Global_35970[221 /*12*/].f_2 = 0;
	Global_35970[221 /*12*/].f_3 = 59;
	Global_35970[221 /*12*/].f_10 = 0;
	Global_35970[221 /*12*/].f_11 = 0;
	Global_35970[221 /*12*/].f_4 = 0;
	Global_35970[222 /*12*/] = 586;
	Global_35970[222 /*12*/].f_1 = 587;
	Global_35970[222 /*12*/].f_2 = 60;
	Global_35970[222 /*12*/].f_3 = 2;
	Global_35970[222 /*12*/].f_10 = 1;
	Global_35970[222 /*12*/].f_11 = 60000;
	Global_35970[222 /*12*/].f_4 = 1;
	Global_35970[222 /*12*/].f_5[0 /*4*/] = 600;
	Global_35970[222 /*12*/].f_5[0 /*4*/].f_1 = 223;
	Global_35970[222 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[222 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[223 /*12*/] = 588;
	Global_35970[223 /*12*/].f_1 = 589;
	Global_35970[223 /*12*/].f_2 = 2;
	Global_35970[223 /*12*/].f_3 = 60;
	Global_35970[223 /*12*/].f_10 = 0;
	Global_35970[223 /*12*/].f_11 = 0;
	Global_35970[223 /*12*/].f_4 = 1;
	Global_35970[223 /*12*/].f_5[0 /*4*/] = 601;
	Global_35970[223 /*12*/].f_5[0 /*4*/].f_1 = 224;
	Global_35970[223 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[223 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[224 /*12*/] = 590;
	Global_35970[224 /*12*/].f_1 = 591;
	Global_35970[224 /*12*/].f_2 = 60;
	Global_35970[224 /*12*/].f_3 = 2;
	Global_35970[224 /*12*/].f_10 = 1;
	Global_35970[224 /*12*/].f_11 = 60000;
	Global_35970[224 /*12*/].f_4 = 1;
	Global_35970[224 /*12*/].f_5[0 /*4*/] = 602;
	Global_35970[224 /*12*/].f_5[0 /*4*/].f_1 = 225;
	Global_35970[224 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[224 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[225 /*12*/] = 592;
	Global_35970[225 /*12*/].f_1 = 593;
	Global_35970[225 /*12*/].f_2 = 2;
	Global_35970[225 /*12*/].f_3 = 60;
	Global_35970[225 /*12*/].f_10 = 0;
	Global_35970[225 /*12*/].f_11 = 0;
	Global_35970[225 /*12*/].f_4 = 1;
	Global_35970[225 /*12*/].f_5[0 /*4*/] = 603;
	Global_35970[225 /*12*/].f_5[0 /*4*/].f_1 = 226;
	Global_35970[225 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[225 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[226 /*12*/] = 594;
	Global_35970[226 /*12*/].f_1 = 595;
	Global_35970[226 /*12*/].f_2 = 60;
	Global_35970[226 /*12*/].f_3 = 2;
	Global_35970[226 /*12*/].f_10 = 1;
	Global_35970[226 /*12*/].f_11 = 60000;
	Global_35970[226 /*12*/].f_4 = 1;
	Global_35970[226 /*12*/].f_5[0 /*4*/] = 604;
	Global_35970[226 /*12*/].f_5[0 /*4*/].f_1 = 227;
	Global_35970[226 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[226 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[227 /*12*/] = 596;
	Global_35970[227 /*12*/].f_1 = 597;
	Global_35970[227 /*12*/].f_2 = 2;
	Global_35970[227 /*12*/].f_3 = 60;
	Global_35970[227 /*12*/].f_10 = 1;
	Global_35970[227 /*12*/].f_11 = 60000;
	Global_35970[227 /*12*/].f_4 = 1;
	Global_35970[227 /*12*/].f_5[0 /*4*/] = 605;
	Global_35970[227 /*12*/].f_5[0 /*4*/].f_1 = 228;
	Global_35970[227 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[227 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[228 /*12*/] = 598;
	Global_35970[228 /*12*/].f_1 = 599;
	Global_35970[228 /*12*/].f_2 = 2;
	Global_35970[228 /*12*/].f_3 = 60;
	Global_35970[228 /*12*/].f_10 = 0;
	Global_35970[228 /*12*/].f_11 = 0;
	Global_35970[228 /*12*/].f_4 = 0;
	Global_35970[229 /*12*/] = 606;
	Global_35970[229 /*12*/].f_1 = 607;
	Global_35970[229 /*12*/].f_2 = 61;
	Global_35970[229 /*12*/].f_3 = 2;
	Global_35970[229 /*12*/].f_10 = 1;
	Global_35970[229 /*12*/].f_11 = 60000;
	Global_35970[229 /*12*/].f_4 = 1;
	Global_35970[229 /*12*/].f_5[0 /*4*/] = 610;
	Global_35970[229 /*12*/].f_5[0 /*4*/].f_1 = 230;
	Global_35970[229 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[229 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[230 /*12*/] = 608;
	Global_35970[230 /*12*/].f_1 = 609;
	Global_35970[230 /*12*/].f_2 = 2;
	Global_35970[230 /*12*/].f_3 = 61;
	Global_35970[230 /*12*/].f_10 = 0;
	Global_35970[230 /*12*/].f_11 = 0;
	Global_35970[230 /*12*/].f_4 = 1;
	Global_35970[230 /*12*/].f_5[0 /*4*/] = 617;
	Global_35970[230 /*12*/].f_5[0 /*4*/].f_1 = 231;
	Global_35970[230 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[230 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[231 /*12*/] = 611;
	Global_35970[231 /*12*/].f_1 = 612;
	Global_35970[231 /*12*/].f_2 = 61;
	Global_35970[231 /*12*/].f_3 = 2;
	Global_35970[231 /*12*/].f_10 = 1;
	Global_35970[231 /*12*/].f_11 = 60000;
	Global_35970[231 /*12*/].f_4 = 1;
	Global_35970[231 /*12*/].f_5[0 /*4*/] = 618;
	Global_35970[231 /*12*/].f_5[0 /*4*/].f_1 = 232;
	Global_35970[231 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[231 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[232 /*12*/] = 613;
	Global_35970[232 /*12*/].f_1 = 614;
	Global_35970[232 /*12*/].f_2 = 2;
	Global_35970[232 /*12*/].f_3 = 61;
	Global_35970[232 /*12*/].f_10 = 0;
	Global_35970[232 /*12*/].f_11 = 0;
	Global_35970[232 /*12*/].f_4 = 1;
	Global_35970[232 /*12*/].f_5[0 /*4*/] = 619;
	Global_35970[232 /*12*/].f_5[0 /*4*/].f_1 = 233;
	Global_35970[232 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[232 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[233 /*12*/] = 615;
	Global_35970[233 /*12*/].f_1 = 616;
	Global_35970[233 /*12*/].f_2 = 61;
	Global_35970[233 /*12*/].f_3 = 2;
	Global_35970[233 /*12*/].f_10 = 1;
	Global_35970[233 /*12*/].f_11 = 60000;
	Global_35970[233 /*12*/].f_4 = 1;
	Global_35970[233 /*12*/].f_5[0 /*4*/] = 622;
	Global_35970[233 /*12*/].f_5[0 /*4*/].f_1 = 234;
	Global_35970[233 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[233 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[234 /*12*/] = 620;
	Global_35970[234 /*12*/].f_1 = 621;
	Global_35970[234 /*12*/].f_2 = 2;
	Global_35970[234 /*12*/].f_3 = 61;
	Global_35970[234 /*12*/].f_10 = 0;
	Global_35970[234 /*12*/].f_11 = 0;
	Global_35970[234 /*12*/].f_4 = 0;
	Global_35970[235 /*12*/] = 623;
	Global_35970[235 /*12*/].f_1 = 624;
	Global_35970[235 /*12*/].f_2 = 62;
	Global_35970[235 /*12*/].f_3 = 2;
	Global_35970[235 /*12*/].f_10 = 1;
	Global_35970[235 /*12*/].f_11 = 60000;
	Global_35970[235 /*12*/].f_4 = 1;
	Global_35970[235 /*12*/].f_5[0 /*4*/] = 635;
	Global_35970[235 /*12*/].f_5[0 /*4*/].f_1 = 236;
	Global_35970[235 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[235 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[236 /*12*/] = 625;
	Global_35970[236 /*12*/].f_1 = 626;
	Global_35970[236 /*12*/].f_2 = 2;
	Global_35970[236 /*12*/].f_3 = 62;
	Global_35970[236 /*12*/].f_10 = 0;
	Global_35970[236 /*12*/].f_11 = 0;
	Global_35970[236 /*12*/].f_4 = 1;
	Global_35970[236 /*12*/].f_5[0 /*4*/] = 636;
	Global_35970[236 /*12*/].f_5[0 /*4*/].f_1 = 237;
	Global_35970[236 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[236 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[237 /*12*/] = 627;
	Global_35970[237 /*12*/].f_1 = 628;
	Global_35970[237 /*12*/].f_2 = 62;
	Global_35970[237 /*12*/].f_3 = 2;
	Global_35970[237 /*12*/].f_10 = 1;
	Global_35970[237 /*12*/].f_11 = 60000;
	Global_35970[237 /*12*/].f_4 = 1;
	Global_35970[237 /*12*/].f_5[0 /*4*/] = 637;
	Global_35970[237 /*12*/].f_5[0 /*4*/].f_1 = 238;
	Global_35970[237 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[237 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[238 /*12*/] = 629;
	Global_35970[238 /*12*/].f_1 = 630;
	Global_35970[238 /*12*/].f_2 = 2;
	Global_35970[238 /*12*/].f_3 = 62;
	Global_35970[238 /*12*/].f_10 = 0;
	Global_35970[238 /*12*/].f_11 = 0;
	Global_35970[238 /*12*/].f_4 = 1;
	Global_35970[238 /*12*/].f_5[0 /*4*/] = 638;
	Global_35970[238 /*12*/].f_5[0 /*4*/].f_1 = 239;
	Global_35970[238 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[238 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[239 /*12*/] = 631;
	Global_35970[239 /*12*/].f_1 = 632;
	Global_35970[239 /*12*/].f_2 = 62;
	Global_35970[239 /*12*/].f_3 = 2;
	Global_35970[239 /*12*/].f_10 = 1;
	Global_35970[239 /*12*/].f_11 = 60000;
	Global_35970[239 /*12*/].f_4 = 1;
	Global_35970[239 /*12*/].f_5[0 /*4*/] = 639;
	Global_35970[239 /*12*/].f_5[0 /*4*/].f_1 = 240;
	Global_35970[239 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_35970[239 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_35970[240 /*12*/] = 633;
	Global_35970[240 /*12*/].f_1 = 634;
	Global_35970[240 /*12*/].f_2 = 2;
	Global_35970[240 /*12*/].f_3 = 62;
	Global_35970[240 /*12*/].f_10 = 0;
	Global_35970[240 /*12*/].f_11 = 0;
	Global_35970[240 /*12*/].f_4 = 0;
	Global_35970[241 /*12*/] = 646;
	Global_35970[241 /*12*/].f_1 = 647;
	Global_35970[241 /*12*/].f_2 = 36;
	Global_35970[241 /*12*/].f_3 = 2;
	Global_35970[241 /*12*/].f_10 = 0;
	Global_35970[241 /*12*/].f_11 = 0;
	Global_35970[241 /*12*/].f_4 = 0;
	Global_35970[242 /*12*/] = 648;
	Global_35970[242 /*12*/].f_1 = 649;
	Global_35970[242 /*12*/].f_2 = 36;
	Global_35970[242 /*12*/].f_3 = 0;
	Global_35970[242 /*12*/].f_10 = 0;
	Global_35970[242 /*12*/].f_11 = 0;
	Global_35970[242 /*12*/].f_4 = 0;
	Global_35970[243 /*12*/] = 650;
	Global_35970[243 /*12*/].f_1 = 651;
	Global_35970[243 /*12*/].f_2 = 36;
	Global_35970[243 /*12*/].f_3 = 1;
	Global_35970[243 /*12*/].f_10 = 0;
	Global_35970[243 /*12*/].f_11 = 0;
	Global_35970[243 /*12*/].f_4 = 0;
	Global_35970[244 /*12*/] = 655;
	Global_35970[244 /*12*/].f_1 = 656;
	Global_35970[244 /*12*/].f_2 = 65;
	Global_35970[244 /*12*/].f_3 = 1;
	Global_35970[244 /*12*/].f_10 = 0;
	Global_35970[244 /*12*/].f_11 = 0;
	Global_35970[244 /*12*/].f_4 = 0;
	Global_35970[245 /*12*/] = 657;
	Global_35970[245 /*12*/].f_1 = 658;
	Global_35970[245 /*12*/].f_2 = 65;
	Global_35970[245 /*12*/].f_3 = 1;
	Global_35970[245 /*12*/].f_10 = 0;
	Global_35970[245 /*12*/].f_11 = 0;
	Global_35970[245 /*12*/].f_4 = 0;
	Global_35970[246 /*12*/] = 659;
	Global_35970[246 /*12*/].f_1 = 660;
	Global_35970[246 /*12*/].f_2 = 65;
	Global_35970[246 /*12*/].f_3 = 1;
	Global_35970[246 /*12*/].f_10 = 0;
	Global_35970[246 /*12*/].f_11 = 0;
	Global_35970[246 /*12*/].f_4 = 0;
	Global_35970[247 /*12*/] = 661;
	Global_35970[247 /*12*/].f_1 = 662;
	Global_35970[247 /*12*/].f_2 = 65;
	Global_35970[247 /*12*/].f_3 = 1;
	Global_35970[247 /*12*/].f_10 = 0;
	Global_35970[247 /*12*/].f_11 = 0;
	Global_35970[247 /*12*/].f_4 = 0;
	Global_35970[248 /*12*/] = 663;
	Global_35970[248 /*12*/].f_1 = 664;
	Global_35970[248 /*12*/].f_2 = 33;
	Global_35970[248 /*12*/].f_3 = 2;
	Global_35970[248 /*12*/].f_10 = 0;
	Global_35970[248 /*12*/].f_11 = 40000;
	Global_35970[248 /*12*/].f_4 = 0;
	Global_35970[249 /*12*/] = 665;
	Global_35970[249 /*12*/].f_1 = 666;
	Global_35970[249 /*12*/].f_2 = 19;
	Global_35970[249 /*12*/].f_3 = 1;
	Global_35970[249 /*12*/].f_10 = 1;
	Global_35970[249 /*12*/].f_11 = 0;
	Global_35970[249 /*12*/].f_4 = 0;
	Global_35970[250 /*12*/] = 667;
	Global_35970[250 /*12*/].f_1 = 668;
	Global_35970[250 /*12*/].f_2 = 19;
	Global_35970[250 /*12*/].f_3 = 1;
	Global_35970[250 /*12*/].f_10 = 1;
	Global_35970[250 /*12*/].f_11 = 0;
	Global_35970[250 /*12*/].f_4 = 0;
	Global_35970[251 /*12*/] = 669;
	Global_35970[251 /*12*/].f_1 = 670;
	Global_35970[251 /*12*/].f_2 = 19;
	Global_35970[251 /*12*/].f_3 = 1;
	Global_35970[251 /*12*/].f_10 = 1;
	Global_35970[251 /*12*/].f_11 = 0;
	Global_35970[251 /*12*/].f_4 = 0;
	Global_35970[252 /*12*/] = 671;
	Global_35970[252 /*12*/].f_1 = 672;
	Global_35970[252 /*12*/].f_2 = 19;
	Global_35970[252 /*12*/].f_3 = 1;
	Global_35970[252 /*12*/].f_10 = 1;
	Global_35970[252 /*12*/].f_11 = 0;
	Global_35970[252 /*12*/].f_4 = 0;
	Global_35970[253 /*12*/] = 673;
	Global_35970[253 /*12*/].f_1 = 674;
	Global_35970[253 /*12*/].f_2 = 19;
	Global_35970[253 /*12*/].f_3 = 1;
	Global_35970[253 /*12*/].f_10 = 1;
	Global_35970[253 /*12*/].f_11 = 0;
	Global_35970[253 /*12*/].f_4 = 0;
	Global_35970[254 /*12*/] = 675;
	Global_35970[254 /*12*/].f_1 = 676;
	Global_35970[254 /*12*/].f_2 = 19;
	Global_35970[254 /*12*/].f_3 = 1;
	Global_35970[254 /*12*/].f_10 = 1;
	Global_35970[254 /*12*/].f_11 = 0;
	Global_35970[254 /*12*/].f_4 = 0;
	Global_35970[255 /*12*/] = 679;
	Global_35970[255 /*12*/].f_1 = 680;
	Global_35970[255 /*12*/].f_2 = 19;
	Global_35970[255 /*12*/].f_3 = 1;
	Global_35970[255 /*12*/].f_10 = 1;
	Global_35970[255 /*12*/].f_11 = 0;
	Global_35970[255 /*12*/].f_4 = 0;
	Global_35970[256 /*12*/] = 677;
	Global_35970[256 /*12*/].f_1 = 678;
	Global_35970[256 /*12*/].f_2 = 19;
	Global_35970[256 /*12*/].f_3 = 1;
	Global_35970[256 /*12*/].f_10 = 1;
	Global_35970[256 /*12*/].f_11 = 0;
	Global_35970[256 /*12*/].f_4 = 0;
	Global_35970[257 /*12*/] = 681;
	Global_35970[257 /*12*/].f_1 = 682;
	Global_35970[257 /*12*/].f_2 = 19;
	Global_35970[257 /*12*/].f_3 = 1;
	Global_35970[257 /*12*/].f_10 = 1;
	Global_35970[257 /*12*/].f_11 = 0;
	Global_35970[257 /*12*/].f_4 = 0;
	Global_35970[258 /*12*/] = 683;
	Global_35970[258 /*12*/].f_1 = 684;
	Global_35970[258 /*12*/].f_2 = 19;
	Global_35970[258 /*12*/].f_3 = 1;
	Global_35970[258 /*12*/].f_10 = 1;
	Global_35970[258 /*12*/].f_11 = 0;
	Global_35970[258 /*12*/].f_4 = 0;
	Global_35970[259 /*12*/] = 685;
	Global_35970[259 /*12*/].f_1 = 686;
	Global_35970[259 /*12*/].f_2 = 19;
	Global_35970[259 /*12*/].f_3 = 1;
	Global_35970[259 /*12*/].f_10 = 1;
	Global_35970[259 /*12*/].f_11 = 0;
	Global_35970[259 /*12*/].f_4 = 0;
	Global_35970[260 /*12*/] = 687;
	Global_35970[260 /*12*/].f_1 = 688;
	Global_35970[260 /*12*/].f_2 = 19;
	Global_35970[260 /*12*/].f_3 = 1;
	Global_35970[260 /*12*/].f_10 = 1;
	Global_35970[260 /*12*/].f_11 = 0;
	Global_35970[260 /*12*/].f_4 = 0;
	Global_35970[261 /*12*/] = 691;
	Global_35970[261 /*12*/].f_1 = 692;
	Global_35970[261 /*12*/].f_2 = 19;
	Global_35970[261 /*12*/].f_3 = 1;
	Global_35970[261 /*12*/].f_10 = 1;
	Global_35970[261 /*12*/].f_11 = 0;
	Global_35970[261 /*12*/].f_4 = 0;
	Global_35970[262 /*12*/] = 689;
	Global_35970[262 /*12*/].f_1 = 690;
	Global_35970[262 /*12*/].f_2 = 19;
	Global_35970[262 /*12*/].f_3 = 1;
	Global_35970[262 /*12*/].f_10 = 1;
	Global_35970[262 /*12*/].f_11 = 0;
	Global_35970[262 /*12*/].f_4 = 0;
	Global_35970[263 /*12*/] = 693;
	Global_35970[263 /*12*/].f_1 = 694;
	Global_35970[263 /*12*/].f_2 = 19;
	Global_35970[263 /*12*/].f_3 = 1;
	Global_35970[263 /*12*/].f_10 = 1;
	Global_35970[263 /*12*/].f_11 = 0;
	Global_35970[263 /*12*/].f_4 = 0;
	Global_35970[264 /*12*/] = 695;
	Global_35970[264 /*12*/].f_1 = 696;
	Global_35970[264 /*12*/].f_2 = 19;
	Global_35970[264 /*12*/].f_3 = 1;
	Global_35970[264 /*12*/].f_10 = 1;
	Global_35970[264 /*12*/].f_11 = 0;
	Global_35970[264 /*12*/].f_4 = 0;
	Global_35970[265 /*12*/] = 697;
	Global_35970[265 /*12*/].f_1 = 698;
	Global_35970[265 /*12*/].f_2 = 19;
	Global_35970[265 /*12*/].f_3 = 1;
	Global_35970[265 /*12*/].f_10 = 1;
	Global_35970[265 /*12*/].f_11 = 0;
	Global_35970[265 /*12*/].f_4 = 0;
	Global_35970[266 /*12*/] = 699;
	Global_35970[266 /*12*/].f_1 = 700;
	Global_35970[266 /*12*/].f_2 = 19;
	Global_35970[266 /*12*/].f_3 = 1;
	Global_35970[266 /*12*/].f_10 = 1;
	Global_35970[266 /*12*/].f_11 = 0;
	Global_35970[266 /*12*/].f_4 = 0;
	Global_35970[267 /*12*/] = 701;
	Global_35970[267 /*12*/].f_1 = 702;
	Global_35970[267 /*12*/].f_2 = 19;
	Global_35970[267 /*12*/].f_3 = 1;
	Global_35970[267 /*12*/].f_10 = 1;
	Global_35970[267 /*12*/].f_11 = 0;
	Global_35970[267 /*12*/].f_4 = 0;
	Global_35970[268 /*12*/] = 703;
	Global_35970[268 /*12*/].f_1 = 704;
	Global_35970[268 /*12*/].f_2 = 19;
	Global_35970[268 /*12*/].f_3 = 1;
	Global_35970[268 /*12*/].f_10 = 1;
	Global_35970[268 /*12*/].f_11 = 0;
	Global_35970[268 /*12*/].f_4 = 0;
	Global_35970[269 /*12*/] = 705;
	Global_35970[269 /*12*/].f_1 = 706;
	Global_35970[269 /*12*/].f_2 = 19;
	Global_35970[269 /*12*/].f_3 = 1;
	Global_35970[269 /*12*/].f_10 = 1;
	Global_35970[269 /*12*/].f_11 = 0;
	Global_35970[269 /*12*/].f_4 = 0;
	Global_35970[270 /*12*/] = 707;
	Global_35970[270 /*12*/].f_1 = 708;
	Global_35970[270 /*12*/].f_2 = 16;
	Global_35970[270 /*12*/].f_3 = 0;
	Global_35970[270 /*12*/].f_10 = 1;
	Global_35970[270 /*12*/].f_11 = 0;
	Global_35970[270 /*12*/].f_4 = 0;
	Global_35970[271 /*12*/] = 709;
	Global_35970[271 /*12*/].f_1 = 710;
	Global_35970[271 /*12*/].f_2 = 16;
	Global_35970[271 /*12*/].f_3 = 0;
	Global_35970[271 /*12*/].f_10 = 1;
	Global_35970[271 /*12*/].f_11 = 0;
	Global_35970[271 /*12*/].f_4 = 0;
	Global_35970[272 /*12*/] = 711;
	Global_35970[272 /*12*/].f_1 = 712;
	Global_35970[272 /*12*/].f_2 = 16;
	Global_35970[272 /*12*/].f_3 = 0;
	Global_35970[272 /*12*/].f_10 = 1;
	Global_35970[272 /*12*/].f_11 = 0;
	Global_35970[272 /*12*/].f_4 = 0;
	Global_35970[273 /*12*/] = 713;
	Global_35970[273 /*12*/].f_1 = 714;
	Global_35970[273 /*12*/].f_2 = 16;
	Global_35970[273 /*12*/].f_3 = 0;
	Global_35970[273 /*12*/].f_10 = 1;
	Global_35970[273 /*12*/].f_11 = 0;
	Global_35970[273 /*12*/].f_4 = 0;
	Global_35970[274 /*12*/] = 715;
	Global_35970[274 /*12*/].f_1 = 716;
	Global_35970[274 /*12*/].f_2 = 16;
	Global_35970[274 /*12*/].f_3 = 0;
	Global_35970[274 /*12*/].f_10 = 1;
	Global_35970[274 /*12*/].f_11 = 0;
	Global_35970[274 /*12*/].f_4 = 0;
	Global_39271[0 /*46*/].f_45 = 0;
	Global_39271[0 /*46*/].f_31 = 0;
	Global_39271[0 /*46*/].f_42 = 0;
	Global_39271[0 /*46*/].f_43 = 0;
	Global_39271[0 /*46*/].f_2 = 2;
	Global_39271[0 /*46*/].f_3[0] = 0;
	Global_39271[0 /*46*/].f_3[1] = 4;
	Global_39271[0 /*46*/].f_30 = 8;
	Global_39271[0 /*46*/].f_8[0] = 0;
	Global_39271[0 /*46*/].f_8[1] = 1;
	Global_39271[0 /*46*/].f_8[2] = 2;
	Global_39271[0 /*46*/].f_8[3] = 3;
	Global_39271[0 /*46*/].f_8[4] = 4;
	Global_39271[0 /*46*/].f_8[5] = 5;
	Global_39271[0 /*46*/].f_8[6] = 6;
	Global_39271[0 /*46*/].f_8[7] = 9;
	Global_39271[1 /*46*/].f_45 = 0;
	Global_39271[1 /*46*/].f_31 = 0;
	Global_39271[1 /*46*/].f_42 = 0;
	Global_39271[1 /*46*/].f_43 = 0;
	Global_39271[1 /*46*/].f_2 = 3;
	Global_39271[1 /*46*/].f_3[0] = 5;
	Global_39271[1 /*46*/].f_3[1] = 0;
	Global_39271[1 /*46*/].f_3[2] = 4;
	Global_39271[1 /*46*/].f_30 = 3;
	Global_39271[1 /*46*/].f_8[0] = 10;
	Global_39271[1 /*46*/].f_8[1] = 11;
	Global_39271[1 /*46*/].f_8[2] = 16;
	Global_39271[2 /*46*/].f_45 = 0;
	Global_39271[2 /*46*/].f_31 = 0;
	Global_39271[2 /*46*/].f_42 = 0;
	Global_39271[2 /*46*/].f_43 = 0;
	Global_39271[2 /*46*/].f_2 = 2;
	Global_39271[2 /*46*/].f_3[0] = 7;
	Global_39271[2 /*46*/].f_3[1] = 1;
	Global_39271[2 /*46*/].f_30 = 1;
	Global_39271[2 /*46*/].f_8[0] = 12;
	Global_39271[3 /*46*/].f_45 = 0;
	Global_39271[3 /*46*/].f_31 = 0;
	Global_39271[3 /*46*/].f_42 = 0;
	Global_39271[3 /*46*/].f_43 = 0;
	Global_39271[3 /*46*/].f_2 = 2;
	Global_39271[3 /*46*/].f_3[0] = 7;
	Global_39271[3 /*46*/].f_3[1] = 1;
	Global_39271[3 /*46*/].f_30 = 1;
	Global_39271[3 /*46*/].f_8[0] = 14;
	Global_39271[4 /*46*/].f_45 = 0;
	Global_39271[4 /*46*/].f_31 = 0;
	Global_39271[4 /*46*/].f_42 = 0;
	Global_39271[4 /*46*/].f_43 = 0;
	Global_39271[4 /*46*/].f_2 = 2;
	Global_39271[4 /*46*/].f_3[0] = 7;
	Global_39271[4 /*46*/].f_3[1] = 1;
	Global_39271[4 /*46*/].f_30 = 1;
	Global_39271[4 /*46*/].f_8[0] = 13;
	Global_39271[5 /*46*/].f_45 = 0;
	Global_39271[5 /*46*/].f_31 = 0;
	Global_39271[5 /*46*/].f_42 = 0;
	Global_39271[5 /*46*/].f_43 = 0;
	Global_39271[5 /*46*/].f_2 = 2;
	Global_39271[5 /*46*/].f_3[0] = 7;
	Global_39271[5 /*46*/].f_3[1] = 1;
	Global_39271[5 /*46*/].f_30 = 1;
	Global_39271[5 /*46*/].f_8[0] = 15;
	Global_39271[6 /*46*/].f_45 = 0;
	Global_39271[6 /*46*/].f_31 = 0;
	Global_39271[6 /*46*/].f_42 = 0;
	Global_39271[6 /*46*/].f_43 = 0;
	Global_39271[6 /*46*/].f_2 = 2;
	Global_39271[6 /*46*/].f_3[0] = 0;
	Global_39271[6 /*46*/].f_3[1] = 8;
	Global_39271[6 /*46*/].f_30 = 5;
	Global_39271[6 /*46*/].f_8[0] = 17;
	Global_39271[6 /*46*/].f_8[1] = 19;
	Global_39271[6 /*46*/].f_8[2] = 20;
	Global_39271[6 /*46*/].f_8[3] = 21;
	Global_39271[6 /*46*/].f_8[4] = 22;
	Global_39271[7 /*46*/].f_45 = 0;
	Global_39271[7 /*46*/].f_31 = 0;
	Global_39271[7 /*46*/].f_42 = 0;
	Global_39271[7 /*46*/].f_43 = 0;
	Global_39271[7 /*46*/].f_2 = 2;
	Global_39271[7 /*46*/].f_3[0] = 1;
	Global_39271[7 /*46*/].f_3[1] = 9;
	Global_39271[7 /*46*/].f_30 = 5;
	Global_39271[7 /*46*/].f_8[0] = 18;
	Global_39271[7 /*46*/].f_8[1] = 24;
	Global_39271[7 /*46*/].f_8[2] = 25;
	Global_39271[7 /*46*/].f_8[3] = 26;
	Global_39271[7 /*46*/].f_8[4] = 27;
	Global_39271[8 /*46*/].f_45 = 0;
	Global_39271[8 /*46*/].f_31 = 0;
	Global_39271[8 /*46*/].f_42 = 0;
	Global_39271[8 /*46*/].f_43 = 0;
	Global_39271[8 /*46*/].f_2 = 2;
	Global_39271[8 /*46*/].f_3[0] = 2;
	Global_39271[8 /*46*/].f_3[1] = 10;
	Global_39271[8 /*46*/].f_30 = 4;
	Global_39271[8 /*46*/].f_8[0] = 23;
	Global_39271[8 /*46*/].f_8[1] = 28;
	Global_39271[8 /*46*/].f_8[2] = 29;
	Global_39271[8 /*46*/].f_8[3] = 30;
	Global_39271[9 /*46*/].f_45 = 0;
	Global_39271[9 /*46*/].f_31 = 0;
	Global_39271[9 /*46*/].f_42 = 0;
	Global_39271[9 /*46*/].f_43 = 0;
	Global_39271[9 /*46*/].f_2 = 1;
	Global_39271[9 /*46*/].f_3[0] = 11;
	Global_39271[9 /*46*/].f_30 = 3;
	Global_39271[9 /*46*/].f_8[0] = 31;
	Global_39271[9 /*46*/].f_8[1] = 32;
	Global_39271[9 /*46*/].f_8[2] = 33;
	Global_39271[10 /*46*/].f_45 = 0;
	Global_39271[10 /*46*/].f_31 = 0;
	Global_39271[10 /*46*/].f_42 = 0;
	Global_39271[10 /*46*/].f_43 = 0;
	Global_39271[10 /*46*/].f_2 = 1;
	Global_39271[10 /*46*/].f_3[0] = 13;
	Global_39271[10 /*46*/].f_30 = 3;
	Global_39271[10 /*46*/].f_8[0] = 34;
	Global_39271[10 /*46*/].f_8[1] = 35;
	Global_39271[10 /*46*/].f_8[2] = 36;
	Global_39271[11 /*46*/].f_45 = 0;
	Global_39271[11 /*46*/].f_31 = 0;
	Global_39271[11 /*46*/].f_42 = 0;
	Global_39271[11 /*46*/].f_43 = 0;
	Global_39271[11 /*46*/].f_2 = 1;
	Global_39271[11 /*46*/].f_3[0] = 14;
	Global_39271[11 /*46*/].f_30 = 3;
	Global_39271[11 /*46*/].f_8[0] = 37;
	Global_39271[11 /*46*/].f_8[1] = 38;
	Global_39271[11 /*46*/].f_8[2] = 39;
	Global_39271[12 /*46*/].f_45 = 0;
	Global_39271[12 /*46*/].f_31 = 0;
	Global_39271[12 /*46*/].f_42 = 0;
	Global_39271[12 /*46*/].f_43 = 0;
	Global_39271[12 /*46*/].f_2 = 1;
	Global_39271[12 /*46*/].f_3[0] = 12;
	Global_39271[12 /*46*/].f_30 = 6;
	Global_39271[12 /*46*/].f_8[0] = 40;
	Global_39271[12 /*46*/].f_8[1] = 41;
	Global_39271[12 /*46*/].f_8[2] = 42;
	Global_39271[12 /*46*/].f_8[3] = 191;
	Global_39271[12 /*46*/].f_8[4] = 192;
	Global_39271[12 /*46*/].f_8[5] = 193;
	Global_39271[13 /*46*/].f_45 = 0;
	Global_39271[13 /*46*/].f_31 = 0;
	Global_39271[13 /*46*/].f_42 = 0;
	Global_39271[13 /*46*/].f_43 = 0;
	Global_39271[13 /*46*/].f_2 = 2;
	Global_39271[13 /*46*/].f_3[0] = 7;
	Global_39271[13 /*46*/].f_3[1] = 0;
	Global_39271[13 /*46*/].f_30 = 1;
	Global_39271[13 /*46*/].f_8[0] = 43;
	Global_39271[14 /*46*/].f_45 = 0;
	Global_39271[14 /*46*/].f_31 = 0;
	Global_39271[14 /*46*/].f_42 = 0;
	Global_39271[14 /*46*/].f_43 = 0;
	Global_39271[14 /*46*/].f_2 = 4;
	Global_39271[14 /*46*/].f_3[0] = 15;
	Global_39271[14 /*46*/].f_3[1] = 0;
	Global_39271[14 /*46*/].f_3[2] = 1;
	Global_39271[14 /*46*/].f_3[3] = 2;
	Global_39271[14 /*46*/].f_30 = 3;
	Global_39271[14 /*46*/].f_8[0] = 44;
	Global_39271[14 /*46*/].f_8[1] = 45;
	Global_39271[14 /*46*/].f_8[2] = 46;
	Global_39271[15 /*46*/].f_45 = 0;
	Global_39271[15 /*46*/].f_31 = 0;
	Global_39271[15 /*46*/].f_42 = 0;
	Global_39271[15 /*46*/].f_43 = 0;
	Global_39271[15 /*46*/].f_2 = 4;
	Global_39271[15 /*46*/].f_3[0] = 16;
	Global_39271[15 /*46*/].f_3[1] = 0;
	Global_39271[15 /*46*/].f_3[2] = 1;
	Global_39271[15 /*46*/].f_3[3] = 2;
	Global_39271[15 /*46*/].f_30 = 1;
	Global_39271[15 /*46*/].f_8[0] = 47;
	Global_39271[16 /*46*/].f_45 = 0;
	Global_39271[16 /*46*/].f_31 = 0;
	Global_39271[16 /*46*/].f_42 = 0;
	Global_39271[16 /*46*/].f_43 = 0;
	Global_39271[16 /*46*/].f_2 = 4;
	Global_39271[16 /*46*/].f_3[0] = 16;
	Global_39271[16 /*46*/].f_3[1] = 0;
	Global_39271[16 /*46*/].f_3[2] = 1;
	Global_39271[16 /*46*/].f_3[3] = 2;
	Global_39271[16 /*46*/].f_30 = 1;
	Global_39271[16 /*46*/].f_8[0] = 48;
	Global_39271[17 /*46*/].f_45 = 0;
	Global_39271[17 /*46*/].f_31 = 0;
	Global_39271[17 /*46*/].f_42 = 0;
	Global_39271[17 /*46*/].f_43 = 0;
	Global_39271[17 /*46*/].f_2 = 4;
	Global_39271[17 /*46*/].f_3[0] = 0;
	Global_39271[17 /*46*/].f_3[1] = 1;
	Global_39271[17 /*46*/].f_3[2] = 2;
	Global_39271[17 /*46*/].f_3[3] = 16;
	Global_39271[17 /*46*/].f_30 = 1;
	Global_39271[17 /*46*/].f_8[0] = 49;
	Global_39271[18 /*46*/].f_45 = 0;
	Global_39271[18 /*46*/].f_31 = 0;
	Global_39271[18 /*46*/].f_42 = 0;
	Global_39271[18 /*46*/].f_43 = 0;
	Global_39271[18 /*46*/].f_2 = 4;
	Global_39271[18 /*46*/].f_3[0] = 0;
	Global_39271[18 /*46*/].f_3[1] = 1;
	Global_39271[18 /*46*/].f_3[2] = 2;
	Global_39271[18 /*46*/].f_3[3] = 16;
	Global_39271[18 /*46*/].f_30 = 1;
	Global_39271[18 /*46*/].f_8[0] = 50;
	Global_39271[19 /*46*/].f_45 = 0;
	Global_39271[19 /*46*/].f_31 = 0;
	Global_39271[19 /*46*/].f_42 = 0;
	Global_39271[19 /*46*/].f_43 = 0;
	Global_39271[19 /*46*/].f_2 = 4;
	Global_39271[19 /*46*/].f_3[0] = 0;
	Global_39271[19 /*46*/].f_3[1] = 1;
	Global_39271[19 /*46*/].f_3[2] = 2;
	Global_39271[19 /*46*/].f_3[3] = 16;
	Global_39271[19 /*46*/].f_30 = 1;
	Global_39271[19 /*46*/].f_8[0] = 51;
	Global_39271[20 /*46*/].f_45 = 0;
	Global_39271[20 /*46*/].f_31 = 0;
	Global_39271[20 /*46*/].f_42 = 0;
	Global_39271[20 /*46*/].f_43 = 0;
	Global_39271[20 /*46*/].f_2 = 4;
	Global_39271[20 /*46*/].f_3[0] = 0;
	Global_39271[20 /*46*/].f_3[1] = 1;
	Global_39271[20 /*46*/].f_3[2] = 2;
	Global_39271[20 /*46*/].f_3[3] = 16;
	Global_39271[20 /*46*/].f_30 = 1;
	Global_39271[20 /*46*/].f_8[0] = 52;
	Global_39271[21 /*46*/].f_45 = 0;
	Global_39271[21 /*46*/].f_31 = 0;
	Global_39271[21 /*46*/].f_42 = 0;
	Global_39271[21 /*46*/].f_43 = 0;
	Global_39271[21 /*46*/].f_2 = 4;
	Global_39271[21 /*46*/].f_3[0] = 16;
	Global_39271[21 /*46*/].f_3[1] = 0;
	Global_39271[21 /*46*/].f_3[2] = 1;
	Global_39271[21 /*46*/].f_3[3] = 2;
	Global_39271[21 /*46*/].f_30 = 1;
	Global_39271[21 /*46*/].f_8[0] = 53;
	Global_39271[22 /*46*/].f_45 = 0;
	Global_39271[22 /*46*/].f_31 = 0;
	Global_39271[22 /*46*/].f_42 = 0;
	Global_39271[22 /*46*/].f_43 = 0;
	Global_39271[22 /*46*/].f_2 = 4;
	Global_39271[22 /*46*/].f_3[0] = 0;
	Global_39271[22 /*46*/].f_3[1] = 1;
	Global_39271[22 /*46*/].f_3[2] = 2;
	Global_39271[22 /*46*/].f_3[3] = 16;
	Global_39271[22 /*46*/].f_30 = 1;
	Global_39271[22 /*46*/].f_8[0] = 54;
	Global_39271[23 /*46*/].f_45 = 0;
	Global_39271[23 /*46*/].f_31 = 0;
	Global_39271[23 /*46*/].f_42 = 0;
	Global_39271[23 /*46*/].f_43 = 0;
	Global_39271[23 /*46*/].f_2 = 1;
	Global_39271[23 /*46*/].f_3[0] = 12;
	Global_39271[23 /*46*/].f_30 = 3;
	Global_39271[23 /*46*/].f_8[0] = 55;
	Global_39271[23 /*46*/].f_8[1] = 58;
	Global_39271[23 /*46*/].f_8[2] = 59;
	Global_39271[24 /*46*/].f_45 = 0;
	Global_39271[24 /*46*/].f_31 = 0;
	Global_39271[24 /*46*/].f_42 = 0;
	Global_39271[24 /*46*/].f_43 = 0;
	Global_39271[24 /*46*/].f_2 = 1;
	Global_39271[24 /*46*/].f_3[0] = 14;
	Global_39271[24 /*46*/].f_30 = 3;
	Global_39271[24 /*46*/].f_8[0] = 56;
	Global_39271[24 /*46*/].f_8[1] = 60;
	Global_39271[24 /*46*/].f_8[2] = 61;
	Global_39271[25 /*46*/].f_45 = 0;
	Global_39271[25 /*46*/].f_31 = 0;
	Global_39271[25 /*46*/].f_42 = 0;
	Global_39271[25 /*46*/].f_43 = 0;
	Global_39271[25 /*46*/].f_2 = 1;
	Global_39271[25 /*46*/].f_3[0] = 12;
	Global_39271[25 /*46*/].f_30 = 3;
	Global_39271[25 /*46*/].f_8[0] = 57;
	Global_39271[25 /*46*/].f_8[1] = 62;
	Global_39271[25 /*46*/].f_8[2] = 63;
	Global_39271[26 /*46*/].f_45 = 0;
	Global_39271[26 /*46*/].f_31 = 0;
	Global_39271[26 /*46*/].f_42 = 0;
	Global_39271[26 /*46*/].f_43 = 0;
	Global_39271[26 /*46*/].f_2 = 4;
	Global_39271[26 /*46*/].f_3[0] = 1;
	Global_39271[26 /*46*/].f_3[1] = 0;
	Global_39271[26 /*46*/].f_3[2] = 2;
	Global_39271[26 /*46*/].f_3[3] = 20;
	Global_39271[26 /*46*/].f_30 = 1;
	Global_39271[26 /*46*/].f_8[0] = 64;
	Global_39271[27 /*46*/].f_45 = 0;
	Global_39271[27 /*46*/].f_31 = 0;
	Global_39271[27 /*46*/].f_42 = 0;
	Global_39271[27 /*46*/].f_43 = 0;
	Global_39271[27 /*46*/].f_2 = 4;
	Global_39271[27 /*46*/].f_3[0] = 17;
	Global_39271[27 /*46*/].f_3[1] = 0;
	Global_39271[27 /*46*/].f_3[2] = 1;
	Global_39271[27 /*46*/].f_3[3] = 2;
	Global_39271[27 /*46*/].f_30 = 1;
	Global_39271[27 /*46*/].f_8[0] = 66;
	Global_39271[28 /*46*/].f_45 = 0;
	Global_39271[28 /*46*/].f_31 = 0;
	Global_39271[28 /*46*/].f_42 = 0;
	Global_39271[28 /*46*/].f_43 = 0;
	Global_39271[28 /*46*/].f_2 = 4;
	Global_39271[28 /*46*/].f_3[0] = 18;
	Global_39271[28 /*46*/].f_3[1] = 0;
	Global_39271[28 /*46*/].f_3[2] = 1;
	Global_39271[28 /*46*/].f_3[3] = 2;
	Global_39271[28 /*46*/].f_30 = 1;
	Global_39271[28 /*46*/].f_8[0] = 65;
	Global_39271[29 /*46*/].f_45 = 0;
	Global_39271[29 /*46*/].f_31 = 0;
	Global_39271[29 /*46*/].f_42 = 0;
	Global_39271[29 /*46*/].f_43 = 0;
	Global_39271[29 /*46*/].f_2 = 2;
	Global_39271[29 /*46*/].f_3[0] = 2;
	Global_39271[29 /*46*/].f_3[1] = 63;
	Global_39271[29 /*46*/].f_30 = 1;
	Global_39271[29 /*46*/].f_8[0] = 67;
	Global_39271[30 /*46*/].f_45 = 0;
	Global_39271[30 /*46*/].f_31 = 0;
	Global_39271[30 /*46*/].f_42 = 0;
	Global_39271[30 /*46*/].f_43 = 0;
	Global_39271[30 /*46*/].f_2 = 3;
	Global_39271[30 /*46*/].f_3[0] = 0;
	Global_39271[30 /*46*/].f_3[1] = 1;
	Global_39271[30 /*46*/].f_3[2] = 2;
	Global_39271[30 /*46*/].f_30 = 1;
	Global_39271[30 /*46*/].f_8[0] = 68;
	Global_39271[31 /*46*/].f_45 = 0;
	Global_39271[31 /*46*/].f_31 = 0;
	Global_39271[31 /*46*/].f_42 = 0;
	Global_39271[31 /*46*/].f_43 = 0;
	Global_39271[31 /*46*/].f_2 = 2;
	Global_39271[31 /*46*/].f_3[0] = 0;
	Global_39271[31 /*46*/].f_3[1] = 64;
	Global_39271[31 /*46*/].f_30 = 1;
	Global_39271[31 /*46*/].f_8[0] = 69;
	Global_39271[32 /*46*/].f_45 = 0;
	Global_39271[32 /*46*/].f_31 = 0;
	Global_39271[32 /*46*/].f_42 = 0;
	Global_39271[32 /*46*/].f_43 = 0;
	Global_39271[32 /*46*/].f_2 = 2;
	Global_39271[32 /*46*/].f_3[0] = 1;
	Global_39271[32 /*46*/].f_3[1] = 64;
	Global_39271[32 /*46*/].f_30 = 1;
	Global_39271[32 /*46*/].f_8[0] = 70;
	Global_39271[33 /*46*/].f_45 = 0;
	Global_39271[33 /*46*/].f_31 = 0;
	Global_39271[33 /*46*/].f_42 = 0;
	Global_39271[33 /*46*/].f_43 = 0;
	Global_39271[33 /*46*/].f_2 = 2;
	Global_39271[33 /*46*/].f_3[0] = 2;
	Global_39271[33 /*46*/].f_3[1] = 64;
	Global_39271[33 /*46*/].f_30 = 1;
	Global_39271[33 /*46*/].f_8[0] = 71;
	Global_39271[34 /*46*/].f_45 = 0;
	Global_39271[34 /*46*/].f_31 = 0;
	Global_39271[34 /*46*/].f_42 = 0;
	Global_39271[34 /*46*/].f_43 = 0;
	Global_39271[34 /*46*/].f_2 = 1;
	Global_39271[34 /*46*/].f_3[0] = 21;
	Global_39271[34 /*46*/].f_30 = 1;
	Global_39271[34 /*46*/].f_8[0] = 72;
	Global_39271[35 /*46*/].f_45 = 0;
	Global_39271[35 /*46*/].f_31 = 0;
	Global_39271[35 /*46*/].f_42 = 0;
	Global_39271[35 /*46*/].f_43 = 0;
	Global_39271[35 /*46*/].f_2 = 1;
	Global_39271[35 /*46*/].f_3[0] = 21;
	Global_39271[35 /*46*/].f_30 = 1;
	Global_39271[35 /*46*/].f_8[0] = 73;
	Global_39271[36 /*46*/].f_45 = 0;
	Global_39271[36 /*46*/].f_31 = 0;
	Global_39271[36 /*46*/].f_42 = 0;
	Global_39271[36 /*46*/].f_43 = 0;
	Global_39271[36 /*46*/].f_2 = 1;
	Global_39271[36 /*46*/].f_3[0] = 21;
	Global_39271[36 /*46*/].f_30 = 1;
	Global_39271[36 /*46*/].f_8[0] = 74;
	Global_39271[37 /*46*/].f_45 = 0;
	Global_39271[37 /*46*/].f_31 = 0;
	Global_39271[37 /*46*/].f_42 = 0;
	Global_39271[37 /*46*/].f_43 = 0;
	Global_39271[37 /*46*/].f_2 = 2;
	Global_39271[37 /*46*/].f_3[0] = 6;
	Global_39271[37 /*46*/].f_3[1] = 2;
	Global_39271[37 /*46*/].f_30 = 9;
	Global_39271[37 /*46*/].f_8[0] = 75;
	Global_39271[37 /*46*/].f_8[1] = 76;
	Global_39271[37 /*46*/].f_8[2] = 77;
	Global_39271[37 /*46*/].f_8[3] = 78;
	Global_39271[37 /*46*/].f_8[4] = 79;
	Global_39271[37 /*46*/].f_8[5] = 80;
	Global_39271[37 /*46*/].f_8[6] = 81;
	Global_39271[37 /*46*/].f_8[7] = 82;
	Global_39271[37 /*46*/].f_8[8] = 83;
	Global_39271[38 /*46*/].f_45 = 0;
	Global_39271[38 /*46*/].f_31 = 0;
	Global_39271[38 /*46*/].f_42 = 0;
	Global_39271[38 /*46*/].f_43 = 0;
	Global_39271[38 /*46*/].f_2 = 2;
	Global_39271[38 /*46*/].f_3[0] = 0;
	Global_39271[38 /*46*/].f_3[1] = 4;
	Global_39271[38 /*46*/].f_30 = 1;
	Global_39271[38 /*46*/].f_8[0] = 84;
	Global_39271[39 /*46*/].f_45 = 0;
	Global_39271[39 /*46*/].f_31 = 0;
	Global_39271[39 /*46*/].f_42 = 0;
	Global_39271[39 /*46*/].f_43 = 0;
	Global_39271[39 /*46*/].f_2 = 4;
	Global_39271[39 /*46*/].f_3[0] = 22;
	Global_39271[39 /*46*/].f_3[1] = 0;
	Global_39271[39 /*46*/].f_3[2] = 1;
	Global_39271[39 /*46*/].f_3[3] = 2;
	Global_39271[39 /*46*/].f_30 = 1;
	Global_39271[39 /*46*/].f_8[0] = 85;
	Global_39271[40 /*46*/].f_45 = 0;
	Global_39271[40 /*46*/].f_31 = 0;
	Global_39271[40 /*46*/].f_42 = 0;
	Global_39271[40 /*46*/].f_43 = 0;
	Global_39271[40 /*46*/].f_2 = 2;
	Global_39271[40 /*46*/].f_3[0] = 0;
	Global_39271[40 /*46*/].f_3[1] = 24;
	Global_39271[40 /*46*/].f_30 = 3;
	Global_39271[40 /*46*/].f_8[0] = 86;
	Global_39271[40 /*46*/].f_8[1] = 87;
	Global_39271[40 /*46*/].f_8[2] = 88;
	Global_39271[41 /*46*/].f_45 = 0;
	Global_39271[41 /*46*/].f_31 = 0;
	Global_39271[41 /*46*/].f_42 = 0;
	Global_39271[41 /*46*/].f_43 = 0;
	Global_39271[41 /*46*/].f_2 = 2;
	Global_39271[41 /*46*/].f_3[0] = 0;
	Global_39271[41 /*46*/].f_3[1] = 24;
	Global_39271[41 /*46*/].f_30 = 3;
	Global_39271[41 /*46*/].f_8[0] = 89;
	Global_39271[41 /*46*/].f_8[1] = 90;
	Global_39271[41 /*46*/].f_8[2] = 91;
	Global_39271[42 /*46*/].f_45 = 0;
	Global_39271[42 /*46*/].f_31 = 0;
	Global_39271[42 /*46*/].f_42 = 0;
	Global_39271[42 /*46*/].f_43 = 0;
	Global_39271[42 /*46*/].f_2 = 2;
	Global_39271[42 /*46*/].f_3[0] = 0;
	Global_39271[42 /*46*/].f_3[1] = 25;
	Global_39271[42 /*46*/].f_30 = 5;
	Global_39271[42 /*46*/].f_8[0] = 92;
	Global_39271[42 /*46*/].f_8[1] = 93;
	Global_39271[42 /*46*/].f_8[2] = 94;
	Global_39271[42 /*46*/].f_8[3] = 95;
	Global_39271[42 /*46*/].f_8[4] = 96;
	Global_39271[43 /*46*/].f_45 = 0;
	Global_39271[43 /*46*/].f_31 = 0;
	Global_39271[43 /*46*/].f_42 = 0;
	Global_39271[43 /*46*/].f_43 = 0;
	Global_39271[43 /*46*/].f_2 = 2;
	Global_39271[43 /*46*/].f_3[0] = 26;
	Global_39271[43 /*46*/].f_3[1] = 0;
	Global_39271[43 /*46*/].f_30 = 2;
	Global_39271[43 /*46*/].f_8[0] = 97;
	Global_39271[43 /*46*/].f_8[1] = 98;
	Global_39271[44 /*46*/].f_45 = 0;
	Global_39271[44 /*46*/].f_31 = 0;
	Global_39271[44 /*46*/].f_42 = 0;
	Global_39271[44 /*46*/].f_43 = 0;
	Global_39271[44 /*46*/].f_2 = 2;
	Global_39271[44 /*46*/].f_3[0] = 27;
	Global_39271[44 /*46*/].f_3[1] = 0;
	Global_39271[44 /*46*/].f_30 = 2;
	Global_39271[44 /*46*/].f_8[0] = 99;
	Global_39271[44 /*46*/].f_8[1] = 100;
	Global_39271[45 /*46*/].f_45 = 0;
	Global_39271[45 /*46*/].f_31 = 0;
	Global_39271[45 /*46*/].f_42 = 0;
	Global_39271[45 /*46*/].f_43 = 0;
	Global_39271[45 /*46*/].f_2 = 3;
	Global_39271[45 /*46*/].f_3[0] = 0;
	Global_39271[45 /*46*/].f_3[1] = 2;
	Global_39271[45 /*46*/].f_3[2] = 28;
	Global_39271[45 /*46*/].f_30 = 1;
	Global_39271[45 /*46*/].f_8[0] = 101;
	Global_39271[46 /*46*/].f_45 = 0;
	Global_39271[46 /*46*/].f_31 = 0;
	Global_39271[46 /*46*/].f_42 = 0;
	Global_39271[46 /*46*/].f_43 = 0;
	Global_39271[46 /*46*/].f_2 = 2;
	Global_39271[46 /*46*/].f_3[0] = 0;
	Global_39271[46 /*46*/].f_3[1] = 26;
	Global_39271[46 /*46*/].f_30 = 2;
	Global_39271[46 /*46*/].f_8[0] = 102;
	Global_39271[46 /*46*/].f_8[1] = 103;
	Global_39271[47 /*46*/].f_45 = 0;
	Global_39271[47 /*46*/].f_31 = 0;
	Global_39271[47 /*46*/].f_42 = 0;
	Global_39271[47 /*46*/].f_43 = 0;
	Global_39271[47 /*46*/].f_2 = 2;
	Global_39271[47 /*46*/].f_3[0] = 0;
	Global_39271[47 /*46*/].f_3[1] = 29;
	Global_39271[47 /*46*/].f_30 = 2;
	Global_39271[47 /*46*/].f_8[0] = 104;
	Global_39271[47 /*46*/].f_8[1] = 105;
	Global_39271[48 /*46*/].f_45 = 0;
	Global_39271[48 /*46*/].f_31 = 0;
	Global_39271[48 /*46*/].f_42 = 0;
	Global_39271[48 /*46*/].f_43 = 0;
	Global_39271[48 /*46*/].f_2 = 2;
	Global_39271[48 /*46*/].f_3[0] = 1;
	Global_39271[48 /*46*/].f_3[1] = 30;
	Global_39271[48 /*46*/].f_30 = 5;
	Global_39271[48 /*46*/].f_8[0] = 106;
	Global_39271[48 /*46*/].f_8[1] = 107;
	Global_39271[48 /*46*/].f_8[2] = 108;
	Global_39271[48 /*46*/].f_8[3] = 109;
	Global_39271[48 /*46*/].f_8[4] = 110;
	Global_39271[49 /*46*/].f_45 = 0;
	Global_39271[49 /*46*/].f_31 = 0;
	Global_39271[49 /*46*/].f_42 = 0;
	Global_39271[49 /*46*/].f_43 = 0;
	Global_39271[49 /*46*/].f_2 = 2;
	Global_39271[49 /*46*/].f_3[0] = 1;
	Global_39271[49 /*46*/].f_3[1] = 31;
	Global_39271[49 /*46*/].f_30 = 2;
	Global_39271[49 /*46*/].f_8[0] = 111;
	Global_39271[49 /*46*/].f_8[1] = 112;
	Global_39271[50 /*46*/].f_45 = 0;
	Global_39271[50 /*46*/].f_31 = 0;
	Global_39271[50 /*46*/].f_42 = 0;
	Global_39271[50 /*46*/].f_43 = 0;
	Global_39271[50 /*46*/].f_2 = 2;
	Global_39271[50 /*46*/].f_3[0] = 1;
	Global_39271[50 /*46*/].f_3[1] = 32;
	Global_39271[50 /*46*/].f_30 = 3;
	Global_39271[50 /*46*/].f_8[0] = 113;
	Global_39271[50 /*46*/].f_8[1] = 114;
	Global_39271[50 /*46*/].f_8[2] = 115;
	Global_39271[51 /*46*/].f_45 = 0;
	Global_39271[51 /*46*/].f_31 = 0;
	Global_39271[51 /*46*/].f_42 = 0;
	Global_39271[51 /*46*/].f_43 = 0;
	Global_39271[51 /*46*/].f_2 = 2;
	Global_39271[51 /*46*/].f_3[0] = 1;
	Global_39271[51 /*46*/].f_3[1] = 32;
	Global_39271[51 /*46*/].f_30 = 2;
	Global_39271[51 /*46*/].f_8[0] = 116;
	Global_39271[51 /*46*/].f_8[1] = 117;
	Global_39271[52 /*46*/].f_45 = 0;
	Global_39271[52 /*46*/].f_31 = 0;
	Global_39271[52 /*46*/].f_42 = 0;
	Global_39271[52 /*46*/].f_43 = 0;
	Global_39271[52 /*46*/].f_2 = 2;
	Global_39271[52 /*46*/].f_3[0] = 1;
	Global_39271[52 /*46*/].f_3[1] = 32;
	Global_39271[52 /*46*/].f_30 = 2;
	Global_39271[52 /*46*/].f_8[0] = 118;
	Global_39271[52 /*46*/].f_8[1] = 119;
	Global_39271[53 /*46*/].f_45 = 0;
	Global_39271[53 /*46*/].f_31 = 0;
	Global_39271[53 /*46*/].f_42 = 0;
	Global_39271[53 /*46*/].f_43 = 0;
	Global_39271[53 /*46*/].f_2 = 2;
	Global_39271[53 /*46*/].f_3[0] = 1;
	Global_39271[53 /*46*/].f_3[1] = 32;
	Global_39271[53 /*46*/].f_30 = 4;
	Global_39271[53 /*46*/].f_8[0] = 120;
	Global_39271[53 /*46*/].f_8[1] = 121;
	Global_39271[53 /*46*/].f_8[2] = 122;
	Global_39271[53 /*46*/].f_8[3] = 123;
	Global_39271[54 /*46*/].f_45 = 0;
	Global_39271[54 /*46*/].f_31 = 0;
	Global_39271[54 /*46*/].f_42 = 0;
	Global_39271[54 /*46*/].f_43 = 0;
	Global_39271[54 /*46*/].f_2 = 2;
	Global_39271[54 /*46*/].f_3[0] = 1;
	Global_39271[54 /*46*/].f_3[1] = 27;
	Global_39271[54 /*46*/].f_30 = 2;
	Global_39271[54 /*46*/].f_8[0] = 124;
	Global_39271[54 /*46*/].f_8[1] = 125;
	Global_39271[55 /*46*/].f_45 = 0;
	Global_39271[55 /*46*/].f_31 = 0;
	Global_39271[55 /*46*/].f_42 = 0;
	Global_39271[55 /*46*/].f_43 = 0;
	Global_39271[55 /*46*/].f_2 = 2;
	Global_39271[55 /*46*/].f_3[0] = 1;
	Global_39271[55 /*46*/].f_3[1] = 2;
	Global_39271[55 /*46*/].f_30 = 5;
	Global_39271[55 /*46*/].f_8[0] = 126;
	Global_39271[55 /*46*/].f_8[1] = 127;
	Global_39271[55 /*46*/].f_8[2] = 128;
	Global_39271[55 /*46*/].f_8[3] = 129;
	Global_39271[55 /*46*/].f_8[4] = 130;
	Global_39271[56 /*46*/].f_45 = 0;
	Global_39271[56 /*46*/].f_31 = 0;
	Global_39271[56 /*46*/].f_42 = 0;
	Global_39271[56 /*46*/].f_43 = 0;
	Global_39271[56 /*46*/].f_2 = 2;
	Global_39271[56 /*46*/].f_3[0] = 1;
	Global_39271[56 /*46*/].f_3[1] = 0;
	Global_39271[56 /*46*/].f_30 = 3;
	Global_39271[56 /*46*/].f_8[0] = 131;
	Global_39271[56 /*46*/].f_8[1] = 132;
	Global_39271[56 /*46*/].f_8[2] = 133;
	Global_39271[57 /*46*/].f_45 = 0;
	Global_39271[57 /*46*/].f_31 = 0;
	Global_39271[57 /*46*/].f_42 = 0;
	Global_39271[57 /*46*/].f_43 = 0;
	Global_39271[57 /*46*/].f_2 = 2;
	Global_39271[57 /*46*/].f_3[0] = 0;
	Global_39271[57 /*46*/].f_3[1] = 1;
	Global_39271[57 /*46*/].f_30 = 2;
	Global_39271[57 /*46*/].f_8[0] = 134;
	Global_39271[57 /*46*/].f_8[1] = 135;
	Global_39271[58 /*46*/].f_45 = 0;
	Global_39271[58 /*46*/].f_31 = 0;
	Global_39271[58 /*46*/].f_42 = 0;
	Global_39271[58 /*46*/].f_43 = 0;
	Global_39271[58 /*46*/].f_2 = 2;
	Global_39271[58 /*46*/].f_3[0] = 2;
	Global_39271[58 /*46*/].f_3[1] = 33;
	Global_39271[58 /*46*/].f_30 = 2;
	Global_39271[58 /*46*/].f_8[0] = 136;
	Global_39271[58 /*46*/].f_8[1] = 137;
	Global_39271[59 /*46*/].f_45 = 0;
	Global_39271[59 /*46*/].f_31 = 0;
	Global_39271[59 /*46*/].f_42 = 0;
	Global_39271[59 /*46*/].f_43 = 0;
	Global_39271[59 /*46*/].f_2 = 2;
	Global_39271[59 /*46*/].f_3[0] = 2;
	Global_39271[59 /*46*/].f_3[1] = 33;
	Global_39271[59 /*46*/].f_30 = 3;
	Global_39271[59 /*46*/].f_8[0] = 138;
	Global_39271[59 /*46*/].f_8[1] = 139;
	Global_39271[59 /*46*/].f_8[2] = 248;
	Global_39271[60 /*46*/].f_45 = 0;
	Global_39271[60 /*46*/].f_31 = 0;
	Global_39271[60 /*46*/].f_42 = 0;
	Global_39271[60 /*46*/].f_43 = 0;
	Global_39271[60 /*46*/].f_2 = 2;
	Global_39271[60 /*46*/].f_3[0] = 2;
	Global_39271[60 /*46*/].f_3[1] = 33;
	Global_39271[60 /*46*/].f_30 = 1;
	Global_39271[60 /*46*/].f_8[0] = 140;
	Global_39271[61 /*46*/].f_45 = 0;
	Global_39271[61 /*46*/].f_31 = 0;
	Global_39271[61 /*46*/].f_42 = 0;
	Global_39271[61 /*46*/].f_43 = 0;
	Global_39271[61 /*46*/].f_2 = 2;
	Global_39271[61 /*46*/].f_3[0] = 2;
	Global_39271[61 /*46*/].f_3[1] = 29;
	Global_39271[61 /*46*/].f_30 = 2;
	Global_39271[61 /*46*/].f_8[0] = 141;
	Global_39271[61 /*46*/].f_8[1] = 142;
	Global_39271[62 /*46*/].f_45 = 0;
	Global_39271[62 /*46*/].f_31 = 0;
	Global_39271[62 /*46*/].f_42 = 0;
	Global_39271[62 /*46*/].f_43 = 0;
	Global_39271[62 /*46*/].f_2 = 2;
	Global_39271[62 /*46*/].f_3[0] = 3;
	Global_39271[62 /*46*/].f_3[1] = 2;
	Global_39271[62 /*46*/].f_30 = 2;
	Global_39271[62 /*46*/].f_8[0] = 143;
	Global_39271[62 /*46*/].f_8[1] = 144;
	Global_39271[63 /*46*/].f_45 = 0;
	Global_39271[63 /*46*/].f_31 = 0;
	Global_39271[63 /*46*/].f_42 = 0;
	Global_39271[63 /*46*/].f_43 = 0;
	Global_39271[63 /*46*/].f_2 = 2;
	Global_39271[63 /*46*/].f_3[0] = 2;
	Global_39271[63 /*46*/].f_3[1] = 34;
	Global_39271[63 /*46*/].f_30 = 2;
	Global_39271[63 /*46*/].f_8[0] = 145;
	Global_39271[63 /*46*/].f_8[1] = 146;
	Global_39271[64 /*46*/].f_45 = 0;
	Global_39271[64 /*46*/].f_31 = 0;
	Global_39271[64 /*46*/].f_42 = 0;
	Global_39271[64 /*46*/].f_43 = 0;
	Global_39271[64 /*46*/].f_2 = 2;
	Global_39271[64 /*46*/].f_3[0] = 2;
	Global_39271[64 /*46*/].f_3[1] = 26;
	Global_39271[64 /*46*/].f_30 = 1;
	Global_39271[64 /*46*/].f_8[0] = 147;
	Global_39271[65 /*46*/].f_45 = 0;
	Global_39271[65 /*46*/].f_31 = 0;
	Global_39271[65 /*46*/].f_42 = 0;
	Global_39271[65 /*46*/].f_43 = 0;
	Global_39271[65 /*46*/].f_2 = 1;
	Global_39271[65 /*46*/].f_3[0] = 35;
	Global_39271[65 /*46*/].f_30 = 3;
	Global_39271[65 /*46*/].f_8[0] = 148;
	Global_39271[65 /*46*/].f_8[1] = 149;
	Global_39271[65 /*46*/].f_8[2] = 150;
	Global_39271[66 /*46*/].f_45 = 0;
	Global_39271[66 /*46*/].f_31 = 0;
	Global_39271[66 /*46*/].f_42 = 0;
	Global_39271[66 /*46*/].f_43 = 0;
	Global_39271[66 /*46*/].f_2 = 1;
	Global_39271[66 /*46*/].f_3[0] = 36;
	Global_39271[66 /*46*/].f_30 = 3;
	Global_39271[66 /*46*/].f_8[0] = 151;
	Global_39271[66 /*46*/].f_8[1] = 152;
	Global_39271[66 /*46*/].f_8[2] = 153;
	Global_39271[67 /*46*/].f_45 = 0;
	Global_39271[67 /*46*/].f_31 = 0;
	Global_39271[67 /*46*/].f_42 = 0;
	Global_39271[67 /*46*/].f_43 = 0;
	Global_39271[67 /*46*/].f_2 = 2;
	Global_39271[67 /*46*/].f_3[0] = 4;
	Global_39271[67 /*46*/].f_3[1] = 0;
	Global_39271[67 /*46*/].f_30 = 1;
	Global_39271[67 /*46*/].f_8[0] = 7;
	Global_39271[68 /*46*/].f_45 = 0;
	Global_39271[68 /*46*/].f_31 = 0;
	Global_39271[68 /*46*/].f_42 = 0;
	Global_39271[68 /*46*/].f_43 = 0;
	Global_39271[68 /*46*/].f_2 = 2;
	Global_39271[68 /*46*/].f_3[0] = 4;
	Global_39271[68 /*46*/].f_3[1] = 0;
	Global_39271[68 /*46*/].f_30 = 1;
	Global_39271[68 /*46*/].f_8[0] = 8;
	Global_39271[69 /*46*/].f_45 = 0;
	Global_39271[69 /*46*/].f_31 = 0;
	Global_39271[69 /*46*/].f_42 = 0;
	Global_39271[69 /*46*/].f_43 = 0;
	Global_39271[69 /*46*/].f_2 = 2;
	Global_39271[69 /*46*/].f_3[0] = 2;
	Global_39271[69 /*46*/].f_3[1] = 38;
	Global_39271[69 /*46*/].f_30 = 1;
	Global_39271[69 /*46*/].f_8[0] = 154;
	Global_39271[70 /*46*/].f_45 = 0;
	Global_39271[70 /*46*/].f_31 = 0;
	Global_39271[70 /*46*/].f_42 = 0;
	Global_39271[70 /*46*/].f_43 = 0;
	Global_39271[70 /*46*/].f_2 = 1;
	Global_39271[70 /*46*/].f_3[0] = 11;
	Global_39271[70 /*46*/].f_30 = 3;
	Global_39271[70 /*46*/].f_8[0] = 155;
	Global_39271[70 /*46*/].f_8[1] = 156;
	Global_39271[70 /*46*/].f_8[2] = 157;
	Global_39271[71 /*46*/].f_45 = 0;
	Global_39271[71 /*46*/].f_31 = 0;
	Global_39271[71 /*46*/].f_42 = 0;
	Global_39271[71 /*46*/].f_43 = 0;
	Global_39271[71 /*46*/].f_2 = 2;
	Global_39271[71 /*46*/].f_3[0] = 2;
	Global_39271[71 /*46*/].f_3[1] = 29;
	Global_39271[71 /*46*/].f_30 = 1;
	Global_39271[71 /*46*/].f_8[0] = 158;
	Global_39271[72 /*46*/].f_45 = 0;
	Global_39271[72 /*46*/].f_31 = 0;
	Global_39271[72 /*46*/].f_42 = 0;
	Global_39271[72 /*46*/].f_43 = 0;
	Global_39271[72 /*46*/].f_2 = 1;
	Global_39271[72 /*46*/].f_3[0] = 0;
	Global_39271[72 /*46*/].f_30 = 1;
	Global_39271[72 /*46*/].f_8[0] = 159;
	Global_39271[73 /*46*/].f_45 = 0;
	Global_39271[73 /*46*/].f_31 = 0;
	Global_39271[73 /*46*/].f_42 = 0;
	Global_39271[73 /*46*/].f_43 = 0;
	Global_39271[73 /*46*/].f_2 = 1;
	Global_39271[73 /*46*/].f_3[0] = 1;
	Global_39271[73 /*46*/].f_30 = 1;
	Global_39271[73 /*46*/].f_8[0] = 160;
	Global_39271[74 /*46*/].f_45 = 0;
	Global_39271[74 /*46*/].f_31 = 0;
	Global_39271[74 /*46*/].f_42 = 0;
	Global_39271[74 /*46*/].f_43 = 0;
	Global_39271[74 /*46*/].f_2 = 1;
	Global_39271[74 /*46*/].f_3[0] = 1;
	Global_39271[74 /*46*/].f_30 = 1;
	Global_39271[74 /*46*/].f_8[0] = 161;
	Global_39271[75 /*46*/].f_45 = 0;
	Global_39271[75 /*46*/].f_31 = 0;
	Global_39271[75 /*46*/].f_42 = 0;
	Global_39271[75 /*46*/].f_43 = 0;
	Global_39271[75 /*46*/].f_2 = 1;
	Global_39271[75 /*46*/].f_3[0] = 0;
	Global_39271[75 /*46*/].f_30 = 1;
	Global_39271[75 /*46*/].f_8[0] = 162;
	Global_39271[76 /*46*/].f_45 = 0;
	Global_39271[76 /*46*/].f_31 = 0;
	Global_39271[76 /*46*/].f_42 = 0;
	Global_39271[76 /*46*/].f_43 = 0;
	Global_39271[76 /*46*/].f_2 = 1;
	Global_39271[76 /*46*/].f_3[0] = 2;
	Global_39271[76 /*46*/].f_30 = 1;
	Global_39271[76 /*46*/].f_8[0] = 163;
	Global_39271[77 /*46*/].f_45 = 0;
	Global_39271[77 /*46*/].f_31 = 0;
	Global_39271[77 /*46*/].f_42 = 0;
	Global_39271[77 /*46*/].f_43 = 0;
	Global_39271[77 /*46*/].f_2 = 1;
	Global_39271[77 /*46*/].f_3[0] = 1;
	Global_39271[77 /*46*/].f_30 = 1;
	Global_39271[77 /*46*/].f_8[0] = 164;
	Global_39271[78 /*46*/].f_45 = 0;
	Global_39271[78 /*46*/].f_31 = 0;
	Global_39271[78 /*46*/].f_42 = 0;
	Global_39271[78 /*46*/].f_43 = 0;
	Global_39271[78 /*46*/].f_2 = 1;
	Global_39271[78 /*46*/].f_3[0] = 1;
	Global_39271[78 /*46*/].f_30 = 1;
	Global_39271[78 /*46*/].f_8[0] = 165;
	Global_39271[79 /*46*/].f_45 = 0;
	Global_39271[79 /*46*/].f_31 = 0;
	Global_39271[79 /*46*/].f_42 = 0;
	Global_39271[79 /*46*/].f_43 = 0;
	Global_39271[79 /*46*/].f_2 = 1;
	Global_39271[79 /*46*/].f_3[0] = 0;
	Global_39271[79 /*46*/].f_30 = 1;
	Global_39271[79 /*46*/].f_8[0] = 166;
	Global_39271[80 /*46*/].f_45 = 0;
	Global_39271[80 /*46*/].f_31 = 0;
	Global_39271[80 /*46*/].f_42 = 0;
	Global_39271[80 /*46*/].f_43 = 0;
	Global_39271[80 /*46*/].f_2 = 1;
	Global_39271[80 /*46*/].f_3[0] = 0;
	Global_39271[80 /*46*/].f_30 = 1;
	Global_39271[80 /*46*/].f_8[0] = 167;
	Global_39271[81 /*46*/].f_45 = 0;
	Global_39271[81 /*46*/].f_31 = 0;
	Global_39271[81 /*46*/].f_42 = 0;
	Global_39271[81 /*46*/].f_43 = 0;
	Global_39271[81 /*46*/].f_2 = 1;
	Global_39271[81 /*46*/].f_3[0] = 0;
	Global_39271[81 /*46*/].f_30 = 1;
	Global_39271[81 /*46*/].f_8[0] = 168;
	Global_39271[82 /*46*/].f_45 = 0;
	Global_39271[82 /*46*/].f_31 = 0;
	Global_39271[82 /*46*/].f_42 = 0;
	Global_39271[82 /*46*/].f_43 = 0;
	Global_39271[82 /*46*/].f_2 = 1;
	Global_39271[82 /*46*/].f_3[0] = 2;
	Global_39271[82 /*46*/].f_30 = 1;
	Global_39271[82 /*46*/].f_8[0] = 169;
	Global_39271[83 /*46*/].f_45 = 0;
	Global_39271[83 /*46*/].f_31 = 0;
	Global_39271[83 /*46*/].f_42 = 0;
	Global_39271[83 /*46*/].f_43 = 0;
	Global_39271[83 /*46*/].f_2 = 1;
	Global_39271[83 /*46*/].f_3[0] = 1;
	Global_39271[83 /*46*/].f_30 = 1;
	Global_39271[83 /*46*/].f_8[0] = 170;
	Global_39271[84 /*46*/].f_45 = 0;
	Global_39271[84 /*46*/].f_31 = 0;
	Global_39271[84 /*46*/].f_42 = 0;
	Global_39271[84 /*46*/].f_43 = 0;
	Global_39271[84 /*46*/].f_2 = 1;
	Global_39271[84 /*46*/].f_3[0] = 1;
	Global_39271[84 /*46*/].f_30 = 1;
	Global_39271[84 /*46*/].f_8[0] = 171;
	Global_39271[85 /*46*/].f_45 = 0;
	Global_39271[85 /*46*/].f_31 = 0;
	Global_39271[85 /*46*/].f_42 = 0;
	Global_39271[85 /*46*/].f_43 = 0;
	Global_39271[85 /*46*/].f_2 = 1;
	Global_39271[85 /*46*/].f_3[0] = 0;
	Global_39271[85 /*46*/].f_30 = 1;
	Global_39271[85 /*46*/].f_8[0] = 172;
	Global_39271[86 /*46*/].f_45 = 0;
	Global_39271[86 /*46*/].f_31 = 0;
	Global_39271[86 /*46*/].f_42 = 0;
	Global_39271[86 /*46*/].f_43 = 0;
	Global_39271[86 /*46*/].f_2 = 1;
	Global_39271[86 /*46*/].f_3[0] = 2;
	Global_39271[86 /*46*/].f_30 = 1;
	Global_39271[86 /*46*/].f_8[0] = 173;
	Global_39271[87 /*46*/].f_45 = 0;
	Global_39271[87 /*46*/].f_31 = 0;
	Global_39271[87 /*46*/].f_42 = 0;
	Global_39271[87 /*46*/].f_43 = 0;
	Global_39271[87 /*46*/].f_2 = 1;
	Global_39271[87 /*46*/].f_3[0] = 1;
	Global_39271[87 /*46*/].f_30 = 1;
	Global_39271[87 /*46*/].f_8[0] = 174;
	Global_39271[88 /*46*/].f_45 = 0;
	Global_39271[88 /*46*/].f_31 = 0;
	Global_39271[88 /*46*/].f_42 = 0;
	Global_39271[88 /*46*/].f_43 = 0;
	Global_39271[88 /*46*/].f_2 = 1;
	Global_39271[88 /*46*/].f_3[0] = 0;
	Global_39271[88 /*46*/].f_30 = 1;
	Global_39271[88 /*46*/].f_8[0] = 175;
	Global_39271[89 /*46*/].f_45 = 0;
	Global_39271[89 /*46*/].f_31 = 0;
	Global_39271[89 /*46*/].f_42 = 0;
	Global_39271[89 /*46*/].f_43 = 0;
	Global_39271[89 /*46*/].f_2 = 1;
	Global_39271[89 /*46*/].f_3[0] = 2;
	Global_39271[89 /*46*/].f_30 = 1;
	Global_39271[89 /*46*/].f_8[0] = 176;
	Global_39271[90 /*46*/].f_45 = 0;
	Global_39271[90 /*46*/].f_31 = 0;
	Global_39271[90 /*46*/].f_42 = 0;
	Global_39271[90 /*46*/].f_43 = 0;
	Global_39271[90 /*46*/].f_2 = 1;
	Global_39271[90 /*46*/].f_3[0] = 1;
	Global_39271[90 /*46*/].f_30 = 1;
	Global_39271[90 /*46*/].f_8[0] = 177;
	Global_39271[91 /*46*/].f_45 = 0;
	Global_39271[91 /*46*/].f_31 = 0;
	Global_39271[91 /*46*/].f_42 = 0;
	Global_39271[91 /*46*/].f_43 = 0;
	Global_39271[91 /*46*/].f_2 = 1;
	Global_39271[91 /*46*/].f_3[0] = 0;
	Global_39271[91 /*46*/].f_30 = 1;
	Global_39271[91 /*46*/].f_8[0] = 179;
	Global_39271[92 /*46*/].f_45 = 0;
	Global_39271[92 /*46*/].f_31 = 0;
	Global_39271[92 /*46*/].f_42 = 0;
	Global_39271[92 /*46*/].f_43 = 0;
	Global_39271[92 /*46*/].f_2 = 1;
	Global_39271[92 /*46*/].f_3[0] = 2;
	Global_39271[92 /*46*/].f_30 = 1;
	Global_39271[92 /*46*/].f_8[0] = 178;
	Global_39271[93 /*46*/].f_45 = 0;
	Global_39271[93 /*46*/].f_31 = 0;
	Global_39271[93 /*46*/].f_42 = 0;
	Global_39271[93 /*46*/].f_43 = 0;
	Global_39271[93 /*46*/].f_2 = 1;
	Global_39271[93 /*46*/].f_3[0] = 1;
	Global_39271[93 /*46*/].f_30 = 1;
	Global_39271[93 /*46*/].f_8[0] = 180;
	Global_39271[94 /*46*/].f_45 = 0;
	Global_39271[94 /*46*/].f_31 = 0;
	Global_39271[94 /*46*/].f_42 = 0;
	Global_39271[94 /*46*/].f_43 = 0;
	Global_39271[94 /*46*/].f_2 = 2;
	Global_39271[94 /*46*/].f_3[0] = 4;
	Global_39271[94 /*46*/].f_3[1] = 0;
	Global_39271[94 /*46*/].f_30 = 1;
	Global_39271[94 /*46*/].f_8[0] = 181;
	Global_39271[95 /*46*/].f_45 = 0;
	Global_39271[95 /*46*/].f_31 = 0;
	Global_39271[95 /*46*/].f_42 = 0;
	Global_39271[95 /*46*/].f_43 = 0;
	Global_39271[95 /*46*/].f_2 = 1;
	Global_39271[95 /*46*/].f_3[0] = 37;
	Global_39271[95 /*46*/].f_30 = 1;
	Global_39271[95 /*46*/].f_8[0] = 182;
	Global_39271[96 /*46*/].f_45 = 0;
	Global_39271[96 /*46*/].f_31 = 0;
	Global_39271[96 /*46*/].f_42 = 0;
	Global_39271[96 /*46*/].f_43 = 0;
	Global_39271[96 /*46*/].f_2 = 1;
	Global_39271[96 /*46*/].f_3[0] = 37;
	Global_39271[96 /*46*/].f_30 = 1;
	Global_39271[96 /*46*/].f_8[0] = 183;
	Global_39271[97 /*46*/].f_45 = 0;
	Global_39271[97 /*46*/].f_31 = 0;
	Global_39271[97 /*46*/].f_42 = 0;
	Global_39271[97 /*46*/].f_43 = 0;
	Global_39271[97 /*46*/].f_2 = 1;
	Global_39271[97 /*46*/].f_3[0] = 37;
	Global_39271[97 /*46*/].f_30 = 1;
	Global_39271[97 /*46*/].f_8[0] = 184;
	Global_39271[98 /*46*/].f_45 = 0;
	Global_39271[98 /*46*/].f_31 = 0;
	Global_39271[98 /*46*/].f_42 = 0;
	Global_39271[98 /*46*/].f_43 = 0;
	Global_39271[98 /*46*/].f_2 = 1;
	Global_39271[98 /*46*/].f_3[0] = 54;
	Global_39271[98 /*46*/].f_30 = 3;
	Global_39271[98 /*46*/].f_8[0] = 185;
	Global_39271[98 /*46*/].f_8[1] = 186;
	Global_39271[98 /*46*/].f_8[2] = 188;
	Global_39271[99 /*46*/].f_45 = 0;
	Global_39271[99 /*46*/].f_31 = 0;
	Global_39271[99 /*46*/].f_42 = 0;
	Global_39271[99 /*46*/].f_43 = 0;
	Global_39271[99 /*46*/].f_2 = 1;
	Global_39271[99 /*46*/].f_3[0] = 55;
	Global_39271[99 /*46*/].f_30 = 3;
	Global_39271[99 /*46*/].f_8[0] = 187;
	Global_39271[99 /*46*/].f_8[1] = 189;
	Global_39271[99 /*46*/].f_8[2] = 190;
	Global_39271[100 /*46*/].f_45 = 0;
	Global_39271[100 /*46*/].f_31 = 0;
	Global_39271[100 /*46*/].f_42 = 0;
	Global_39271[100 /*46*/].f_43 = 0;
	Global_39271[100 /*46*/].f_2 = 3;
	Global_39271[100 /*46*/].f_3[0] = 56;
	Global_39271[100 /*46*/].f_3[1] = 0;
	Global_39271[100 /*46*/].f_3[2] = 2;
	Global_39271[100 /*46*/].f_30 = 5;
	Global_39271[100 /*46*/].f_8[0] = 194;
	Global_39271[100 /*46*/].f_8[1] = 195;
	Global_39271[100 /*46*/].f_8[2] = 196;
	Global_39271[100 /*46*/].f_8[3] = 197;
	Global_39271[100 /*46*/].f_8[4] = 198;
	Global_39271[101 /*46*/].f_45 = 0;
	Global_39271[101 /*46*/].f_31 = 0;
	Global_39271[101 /*46*/].f_42 = 0;
	Global_39271[101 /*46*/].f_43 = 0;
	Global_39271[101 /*46*/].f_2 = 2;
	Global_39271[101 /*46*/].f_3[0] = 57;
	Global_39271[101 /*46*/].f_3[1] = 0;
	Global_39271[101 /*46*/].f_30 = 8;
	Global_39271[101 /*46*/].f_8[0] = 199;
	Global_39271[101 /*46*/].f_8[1] = 200;
	Global_39271[101 /*46*/].f_8[2] = 201;
	Global_39271[101 /*46*/].f_8[3] = 202;
	Global_39271[101 /*46*/].f_8[4] = 203;
	Global_39271[101 /*46*/].f_8[5] = 204;
	Global_39271[101 /*46*/].f_8[6] = 205;
	Global_39271[101 /*46*/].f_8[7] = 206;
	Global_39271[102 /*46*/].f_45 = 0;
	Global_39271[102 /*46*/].f_31 = 0;
	Global_39271[102 /*46*/].f_42 = 0;
	Global_39271[102 /*46*/].f_43 = 0;
	Global_39271[102 /*46*/].f_2 = 2;
	Global_39271[102 /*46*/].f_3[0] = 58;
	Global_39271[102 /*46*/].f_3[1] = 0;
	Global_39271[102 /*46*/].f_30 = 7;
	Global_39271[102 /*46*/].f_8[0] = 207;
	Global_39271[102 /*46*/].f_8[1] = 208;
	Global_39271[102 /*46*/].f_8[2] = 209;
	Global_39271[102 /*46*/].f_8[3] = 210;
	Global_39271[102 /*46*/].f_8[4] = 211;
	Global_39271[102 /*46*/].f_8[5] = 212;
	Global_39271[102 /*46*/].f_8[6] = 213;
	Global_39271[103 /*46*/].f_45 = 0;
	Global_39271[103 /*46*/].f_31 = 0;
	Global_39271[103 /*46*/].f_42 = 0;
	Global_39271[103 /*46*/].f_43 = 0;
	Global_39271[103 /*46*/].f_2 = 2;
	Global_39271[103 /*46*/].f_3[0] = 59;
	Global_39271[103 /*46*/].f_3[1] = 0;
	Global_39271[103 /*46*/].f_30 = 8;
	Global_39271[103 /*46*/].f_8[0] = 214;
	Global_39271[103 /*46*/].f_8[1] = 215;
	Global_39271[103 /*46*/].f_8[2] = 216;
	Global_39271[103 /*46*/].f_8[3] = 217;
	Global_39271[103 /*46*/].f_8[4] = 218;
	Global_39271[103 /*46*/].f_8[5] = 219;
	Global_39271[103 /*46*/].f_8[6] = 220;
	Global_39271[103 /*46*/].f_8[7] = 221;
	Global_39271[104 /*46*/].f_45 = 0;
	Global_39271[104 /*46*/].f_31 = 0;
	Global_39271[104 /*46*/].f_42 = 0;
	Global_39271[104 /*46*/].f_43 = 0;
	Global_39271[104 /*46*/].f_2 = 2;
	Global_39271[104 /*46*/].f_3[0] = 60;
	Global_39271[104 /*46*/].f_3[1] = 2;
	Global_39271[104 /*46*/].f_30 = 7;
	Global_39271[104 /*46*/].f_8[0] = 222;
	Global_39271[104 /*46*/].f_8[1] = 223;
	Global_39271[104 /*46*/].f_8[2] = 224;
	Global_39271[104 /*46*/].f_8[3] = 225;
	Global_39271[104 /*46*/].f_8[4] = 226;
	Global_39271[104 /*46*/].f_8[5] = 227;
	Global_39271[104 /*46*/].f_8[6] = 228;
	Global_39271[105 /*46*/].f_45 = 0;
	Global_39271[105 /*46*/].f_31 = 0;
	Global_39271[105 /*46*/].f_42 = 0;
	Global_39271[105 /*46*/].f_43 = 0;
	Global_39271[105 /*46*/].f_2 = 2;
	Global_39271[105 /*46*/].f_3[0] = 61;
	Global_39271[105 /*46*/].f_3[1] = 2;
	Global_39271[105 /*46*/].f_30 = 6;
	Global_39271[105 /*46*/].f_8[0] = 229;
	Global_39271[105 /*46*/].f_8[1] = 230;
	Global_39271[105 /*46*/].f_8[2] = 231;
	Global_39271[105 /*46*/].f_8[3] = 232;
	Global_39271[105 /*46*/].f_8[4] = 233;
	Global_39271[105 /*46*/].f_8[5] = 234;
	Global_39271[106 /*46*/].f_45 = 0;
	Global_39271[106 /*46*/].f_31 = 0;
	Global_39271[106 /*46*/].f_42 = 0;
	Global_39271[106 /*46*/].f_43 = 0;
	Global_39271[106 /*46*/].f_2 = 2;
	Global_39271[106 /*46*/].f_3[0] = 62;
	Global_39271[106 /*46*/].f_3[1] = 2;
	Global_39271[106 /*46*/].f_30 = 6;
	Global_39271[106 /*46*/].f_8[0] = 235;
	Global_39271[106 /*46*/].f_8[1] = 236;
	Global_39271[106 /*46*/].f_8[2] = 237;
	Global_39271[106 /*46*/].f_8[3] = 238;
	Global_39271[106 /*46*/].f_8[4] = 239;
	Global_39271[106 /*46*/].f_8[5] = 240;
	Global_39271[107 /*46*/].f_45 = 0;
	Global_39271[107 /*46*/].f_31 = 0;
	Global_39271[107 /*46*/].f_42 = 0;
	Global_39271[107 /*46*/].f_43 = 0;
	Global_39271[107 /*46*/].f_2 = 1;
	Global_39271[107 /*46*/].f_3[0] = 36;
	Global_39271[107 /*46*/].f_30 = 1;
	Global_39271[107 /*46*/].f_8[0] = 241;
	Global_39271[108 /*46*/].f_45 = 0;
	Global_39271[108 /*46*/].f_31 = 0;
	Global_39271[108 /*46*/].f_42 = 0;
	Global_39271[108 /*46*/].f_43 = 0;
	Global_39271[108 /*46*/].f_2 = 1;
	Global_39271[108 /*46*/].f_3[0] = 36;
	Global_39271[108 /*46*/].f_30 = 1;
	Global_39271[108 /*46*/].f_8[0] = 242;
	Global_39271[109 /*46*/].f_45 = 0;
	Global_39271[109 /*46*/].f_31 = 0;
	Global_39271[109 /*46*/].f_42 = 0;
	Global_39271[109 /*46*/].f_43 = 0;
	Global_39271[109 /*46*/].f_2 = 1;
	Global_39271[109 /*46*/].f_3[0] = 36;
	Global_39271[109 /*46*/].f_30 = 1;
	Global_39271[109 /*46*/].f_8[0] = 243;
	Global_39271[110 /*46*/].f_45 = 0;
	Global_39271[110 /*46*/].f_31 = 0;
	Global_39271[110 /*46*/].f_42 = 0;
	Global_39271[110 /*46*/].f_43 = 0;
	Global_39271[110 /*46*/].f_2 = 1;
	Global_39271[110 /*46*/].f_3[0] = 65;
	Global_39271[110 /*46*/].f_30 = 1;
	Global_39271[110 /*46*/].f_8[0] = 244;
	Global_39271[111 /*46*/].f_45 = 0;
	Global_39271[111 /*46*/].f_31 = 0;
	Global_39271[111 /*46*/].f_42 = 0;
	Global_39271[111 /*46*/].f_43 = 0;
	Global_39271[111 /*46*/].f_2 = 1;
	Global_39271[111 /*46*/].f_3[0] = 65;
	Global_39271[111 /*46*/].f_30 = 1;
	Global_39271[111 /*46*/].f_8[0] = 245;
	Global_39271[112 /*46*/].f_45 = 0;
	Global_39271[112 /*46*/].f_31 = 0;
	Global_39271[112 /*46*/].f_42 = 0;
	Global_39271[112 /*46*/].f_43 = 0;
	Global_39271[112 /*46*/].f_2 = 1;
	Global_39271[112 /*46*/].f_3[0] = 65;
	Global_39271[112 /*46*/].f_30 = 1;
	Global_39271[112 /*46*/].f_8[0] = 246;
	Global_39271[113 /*46*/].f_45 = 0;
	Global_39271[113 /*46*/].f_31 = 0;
	Global_39271[113 /*46*/].f_42 = 0;
	Global_39271[113 /*46*/].f_43 = 0;
	Global_39271[113 /*46*/].f_2 = 1;
	Global_39271[113 /*46*/].f_3[0] = 65;
	Global_39271[113 /*46*/].f_30 = 1;
	Global_39271[113 /*46*/].f_8[0] = 247;
	Global_39271[114 /*46*/].f_45 = 0;
	Global_39271[114 /*46*/].f_31 = 0;
	Global_39271[114 /*46*/].f_42 = 0;
	Global_39271[114 /*46*/].f_43 = 0;
	Global_39271[114 /*46*/].f_2 = 2;
	Global_39271[114 /*46*/].f_3[0] = 19;
	Global_39271[114 /*46*/].f_3[1] = 1;
	Global_39271[114 /*46*/].f_30 = 21;
	Global_39271[114 /*46*/].f_8[0] = 249;
	Global_39271[114 /*46*/].f_8[1] = 250;
	Global_39271[114 /*46*/].f_8[2] = 251;
	Global_39271[114 /*46*/].f_8[3] = 252;
	Global_39271[114 /*46*/].f_8[4] = 253;
	Global_39271[114 /*46*/].f_8[5] = 254;
	Global_39271[114 /*46*/].f_8[6] = 255;
	Global_39271[114 /*46*/].f_8[7] = 256;
	Global_39271[114 /*46*/].f_8[8] = 257;
	Global_39271[114 /*46*/].f_8[9] = 258;
	Global_39271[114 /*46*/].f_8[10] = 259;
	Global_39271[114 /*46*/].f_8[11] = 260;
	Global_39271[114 /*46*/].f_8[12] = 261;
	Global_39271[114 /*46*/].f_8[13] = 262;
	Global_39271[114 /*46*/].f_8[14] = 263;
	Global_39271[114 /*46*/].f_8[15] = 264;
	Global_39271[114 /*46*/].f_8[16] = 265;
	Global_39271[114 /*46*/].f_8[17] = 266;
	Global_39271[114 /*46*/].f_8[18] = 267;
	Global_39271[114 /*46*/].f_8[19] = 268;
	Global_39271[114 /*46*/].f_8[20] = 269;
	Global_39271[115 /*46*/].f_45 = 0;
	Global_39271[115 /*46*/].f_31 = 0;
	Global_39271[115 /*46*/].f_42 = 0;
	Global_39271[115 /*46*/].f_43 = 0;
	Global_39271[115 /*46*/].f_2 = 4;
	Global_39271[115 /*46*/].f_3[0] = 0;
	Global_39271[115 /*46*/].f_3[1] = 1;
	Global_39271[115 /*46*/].f_3[2] = 2;
	Global_39271[115 /*46*/].f_3[3] = 16;
	Global_39271[115 /*46*/].f_30 = 1;
	Global_39271[115 /*46*/].f_8[0] = 270;
	Global_39271[116 /*46*/].f_45 = 0;
	Global_39271[116 /*46*/].f_31 = 0;
	Global_39271[116 /*46*/].f_42 = 0;
	Global_39271[116 /*46*/].f_43 = 0;
	Global_39271[116 /*46*/].f_2 = 4;
	Global_39271[116 /*46*/].f_3[0] = 0;
	Global_39271[116 /*46*/].f_3[1] = 1;
	Global_39271[116 /*46*/].f_3[2] = 2;
	Global_39271[116 /*46*/].f_3[3] = 16;
	Global_39271[116 /*46*/].f_30 = 1;
	Global_39271[116 /*46*/].f_8[0] = 271;
	Global_39271[117 /*46*/].f_45 = 0;
	Global_39271[117 /*46*/].f_31 = 0;
	Global_39271[117 /*46*/].f_42 = 0;
	Global_39271[117 /*46*/].f_43 = 0;
	Global_39271[117 /*46*/].f_2 = 4;
	Global_39271[117 /*46*/].f_3[0] = 0;
	Global_39271[117 /*46*/].f_3[1] = 1;
	Global_39271[117 /*46*/].f_3[2] = 2;
	Global_39271[117 /*46*/].f_3[3] = 16;
	Global_39271[117 /*46*/].f_30 = 1;
	Global_39271[117 /*46*/].f_8[0] = 272;
	Global_39271[118 /*46*/].f_45 = 0;
	Global_39271[118 /*46*/].f_31 = 0;
	Global_39271[118 /*46*/].f_42 = 0;
	Global_39271[118 /*46*/].f_43 = 0;
	Global_39271[118 /*46*/].f_2 = 4;
	Global_39271[118 /*46*/].f_3[0] = 0;
	Global_39271[118 /*46*/].f_3[1] = 1;
	Global_39271[118 /*46*/].f_3[2] = 2;
	Global_39271[118 /*46*/].f_3[3] = 16;
	Global_39271[118 /*46*/].f_30 = 1;
	Global_39271[118 /*46*/].f_8[0] = 273;
	Global_39271[119 /*46*/].f_45 = 0;
	Global_39271[119 /*46*/].f_31 = 0;
	Global_39271[119 /*46*/].f_42 = 0;
	Global_39271[119 /*46*/].f_43 = 0;
	Global_39271[119 /*46*/].f_2 = 4;
	Global_39271[119 /*46*/].f_3[0] = 0;
	Global_39271[119 /*46*/].f_3[1] = 1;
	Global_39271[119 /*46*/].f_3[2] = 2;
	Global_39271[119 /*46*/].f_3[3] = 16;
	Global_39271[119 /*46*/].f_30 = 1;
	Global_39271[119 /*46*/].f_8[0] = 274;
}

void func_67()//Position - 0xE629
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

