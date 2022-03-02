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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	char cLocal_37[24] = "";
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	char cLocal_43[24] = "";
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	char cLocal_49[64] = "";
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	char cLocal_65[24] = "";
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	char* sLocal_71 = NULL;
	char cLocal_72[24] = "";
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	char* sLocal_78 = NULL;
	char* sLocal_79 = NULL;
	char* sLocal_80 = NULL;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	char cLocal_84[24] = "";
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	char* sLocal_90 = NULL;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	var uLocal_110[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_141[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_172[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_203[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_234 = 0;
	var uLocal_235 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_33 = 5000;
	iLocal_34 = 5000;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (MISC::IS_BIT_SET(Global_2264, 1))
		{
			if (!MISC::IS_BIT_SET(Global_2263, 20))
			{
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (Global_14381)
					{
						GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_14336)
						{
							GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::CLEAR_BIT(&Global_2264, 1);
				}
			}
		}
		if (MISC::IS_BIT_SET(Global_14558, 0))
		{
			if (!GlobalFunc_111())
			{
				if (!MISC::IS_BIT_SET(Global_14558, 1))
				{
					MISC::SET_BIT(&Global_14558, 1);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uLocal_105 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_101 = MISC::GET_GAME_TIMER();
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_107 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_105);
				}
				else
				{
					iLocal_102 = MISC::GET_GAME_TIMER();
					iLocal_107 = (iLocal_102 - iLocal_101);
				}
				if (iLocal_107 < 3000)
				{
					if (GlobalFunc_10670(&Global_15146, &Global_15762, &Global_15682, Global_15695, Global_16677, Global_16678, 0))
					{
						Global_14558 = 0;
					}
				}
				else
				{
					Global_14558 = 0;
				}
			}
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (Global_15692 != 0)
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					GlobalFunc_110();
				}
			}
		}
		if (iLocal_31 == 1)
		{
			func_97();
		}
		switch (Global_15692)
		{
			case 0:
				break;
			
			case 1:
				if (Global_15698)
				{
					if (Global_15688 == 0)
					{
						func_95();
					}
					else
					{
						func_94();
						func_95();
					}
				}
				else if (Global_15688 == 0)
				{
					func_85();
				}
				else
				{
					func_94();
					func_67();
				}
				break;
			
			case 2:
				func_61();
				break;
			
			case 3:
				func_57();
				break;
			
			case 4:
				if (Global_15698)
				{
					if (Global_15700)
					{
						func_56();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()//Position - 0x23A
{
	Global_15702 = 0;
	Global_14392 = 0;
	func_2();
}

void func_2()//Position - 0x24E
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_15703 = 0;
	Global_15704 = 0;
	Global_15705 = 0;
	Global_15706 = 0;
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
	Global_15696 = 0;
	Global_15697 = 0;
	Global_15739 = 0;
	Global_15740 = 0;
	Global_15743 = 0;
	Global_15745 = 0;
	Global_15744 = 0;
	Global_15747 = 0;
	Global_15746 = 0;
	Global_16709 = 0;
	Global_15749 = 0;
	if (Global_14393.f_1 == 10)
	{
	}
	else if (MISC::IS_BIT_SET(Global_2263, 11))
	{
		GlobalFunc_2023();
	}
	Global_15698 = 0;
	Global_15699 = 0;
	Global_15700 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16682 = 0;
	Global_16689 = 0;
	Global_16688 = 0;
	Global_16685 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16687 = 0;
	Global_15688 = 0;
	Global_15689 = 0;
	Global_15690 = 0;
	Global_15691 = 0;
	Global_15950 = 0;
	Global_16713 = 5000;
	Global_14376 = 0;
	MISC::CLEAR_BIT(&Global_2263, 20);
	MISC::CLEAR_BIT(&Global_2263, 24);
	MISC::CLEAR_BIT(&Global_2264, 23);
	MISC::CLEAR_BIT(&Global_2265, 0);
	MISC::CLEAR_BIT(&Global_2264, 9);
	MISC::CLEAR_BIT(&Global_2264, 31);
	MISC::CLEAR_BIT(&Global_2264, 17);
	MISC::CLEAR_BIT(&Global_2265, 5);
	Global_16676 = 0;
	Global_16675 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Global_15692 = 4;
	}
	else
	{
		Global_15692 = 0;
		Global_16703 = 0;
		Global_16714 = MISC::GET_GAME_TIMER();
	}
}


void func_4()//Position - 0x3EE
{
	Global_15702 = 0;
	Global_14392 = 0;
	func_2();
}

void func_5()//Position - 0x402
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_15748 == 0)
			{
				GlobalFunc_166();
			}
		}
	}
	if (iLocal_32 == 1)
	{
		GlobalFunc_166();
		GlobalFunc_166();
	}
	if (Global_16684 == 0)
	{
		if (iLocal_30 == 0)
		{
			if (Global_16703 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(1);
				iLocal_30 = 1;
			}
		}
		else if (Global_16703 == 0)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_30 = 0;
		}
	}
	else if (Global_16686 > 0)
	{
		iLocal_36 = MISC::GET_GAME_TIMER();
		if ((iLocal_36 - iLocal_35) > Global_16686)
		{
			AUDIO::START_PRELOADED_CONVERSATION();
			Global_16684 = 0;
		}
	}
	if (Global_16703 == 0)
	{
		if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Global_15692 = 6;
		}
	}
}


void func_7()//Position - 0x4BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		if (!MISC::IS_BIT_SET(Global_2263, 11))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (Global_68245 == 0)
					{
						GlobalFunc_5583();
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (Global_68245 == 0)
				{
					GlobalFunc_2023();
				}
			}
		}
	}
	if (Global_68245 == 0)
	{
		func_53();
	}
	if (iLocal_32 == 1)
	{
		GlobalFunc_6685(0);
	}
	if (iLocal_30 == 0)
	{
		if (Global_16703 == 1)
		{
			if (Global_16704 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(1);
				iLocal_30 = 1;
				Global_16704 = 0;
			}
		}
	}
	else if (Global_16703 == 0)
	{
		if (Global_16704 == 1)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_30 = 0;
			Global_16704 = 0;
		}
	}
	if (Global_15745 == 0)
	{
		if (!Global_15705)
		{
			if (!MISC::IS_BIT_SET(Global_2264, 31))
			{
				if (!MISC::IS_BIT_SET(Global_2264, 27))
				{
					if (func_49())
					{
						if (Global_14393.f_1 > 6)
						{
							MISC::SET_BIT(&Global_2264, 24);
							MISC::SET_BIT(&Global_2264, 27);
							MISC::CLEAR_BIT(&Global_2264, 26);
							MISC::CLEAR_BIT(&Global_2264, 25);
						}
					}
				}
			}
		}
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() == 0 && Global_15705 == 0)
	{
		if (Global_15745 == 1)
		{
			MISC::SET_BIT(&Global_2264, 23);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_2264, 23);
		}
		if (Global_15749)
		{
			if (Global_15745 == 0)
			{
				Global_15311 = { Global_15750 };
				Global_15768 = { Global_15756 };
				Global_15702 = 0;
				Global_16709 = 6;
				GlobalFunc_149();
				return;
			}
		}
		if (!Global_15747)
		{
			while (Global_15745 == 1)
			{
				SYSTEM::WAIT(0);
				if (Global_14393.f_1 < 6)
				{
					Global_15745 = 0;
				}
				else
				{
					if (iLocal_29 == 0)
					{
						func_47();
						if (Global_15747)
						{
							iLocal_29 = 1;
							Global_16707 = 1;
							GlobalFunc_5577(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_15834, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
							GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_14381)
							{
								GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								MISC::SET_BIT(&Global_2263, 17);
								GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								MISC::SET_BIT(&Global_2263, 17);
								GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_29 = 1;
							Global_16705 = 1;
							if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] == 0)
							{
								GlobalFunc_5577(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_15834, "CELL_300", &(Global_97[Global_1578 /*10*/].f_4), "CELL_195", 0);
								GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								GlobalFunc_5577(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_15834, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
								GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_14381)
							{
								GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							MISC::CLEAR_BIT(&Global_2263, 17);
						}
					}
					if (GlobalFunc_2010(2, Global_14362, 0))
					{
						func_43();
						Global_14319 = 0.19f;
						Global_15745 = 0;
						GlobalFunc_7017();
						if (Global_15747)
						{
							Global_15311 = { Global_15828 };
							Global_16709 = 5;
						}
						else if (Global_15690 > 0)
						{
							Global_15950 = 1;
							Global_15692 = 0;
							Global_16713 = 0;
							if (MISC::IS_BIT_SET(Global_2264, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_16676 + 1)
								{
									uLocal_110[iVar0] = GlobalFunc_217(&(Global_15951[iVar0 /*6*/]));
									uLocal_141[iVar0] = GlobalFunc_217(&(Global_16313[iVar0 /*6*/]));
									iVar0++;
								}
								func_39(Global_16676, &Global_14981, Global_1578, &Global_15768, &uLocal_110, &uLocal_141, 9, 0, 0, 0, 0);
							}
							else if (Global_15690 == 2)
							{
								func_22(&Global_14981, Global_1578, &Global_15768, &(Global_15846[0 /*6*/]), &(Global_15898[0 /*6*/]), &(Global_15846[1 /*6*/]), &(Global_15898[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16709 = 1;
							Global_16705 = 0;
							Global_16707 = 0;
							Global_15702 = 0;
							GlobalFunc_7018();
							return;
						}
						else
						{
							Global_15311 = { Global_15786 };
							Global_16709 = 1;
						}
						Global_16705 = 0;
						Global_16707 = 0;
						Global_15702 = 0;
						GlobalFunc_7018();
						GlobalFunc_149();
						return;
					}
					if (GlobalFunc_2010(2, Global_14363, 0) || MISC::IS_BIT_SET(Global_2263, 24))
					{
						func_43();
						Global_14319 = 0.19f;
						Global_15745 = 0;
						GlobalFunc_7017();
						if (Global_15747)
						{
							Global_15311 = { Global_15822 };
							Global_16709 = 4;
						}
						else if (Global_15690 > 0)
						{
							Global_15950 = 1;
							Global_15692 = 0;
							Global_16713 = 0;
							if (MISC::IS_BIT_SET(Global_2264, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_16675 + 1)
								{
									uLocal_172[iVar1] = GlobalFunc_217(&(Global_16132[iVar1 /*6*/]));
									uLocal_203[iVar1] = GlobalFunc_217(&(Global_16494[iVar1 /*6*/]));
									iVar1++;
								}
								func_39(Global_16675, &Global_14981, Global_1578, &Global_15768, &uLocal_172, &uLocal_203, 9, 0, 0, 0, 0);
							}
							else if (Global_15690 == 2)
							{
								func_22(&Global_14981, Global_1578, &Global_15768, &(Global_15859[0 /*6*/]), &(Global_15911[0 /*6*/]), &(Global_15859[1 /*6*/]), &(Global_15911[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_16709 = 2;
							Global_16705 = 0;
							Global_16707 = 0;
							Global_15702 = 0;
							GlobalFunc_7018();
							return;
						}
						else
						{
							Global_15311 = { Global_15792 };
							Global_16709 = 2;
						}
						Global_16705 = 0;
						Global_16707 = 0;
						Global_15702 = 0;
						GlobalFunc_7018();
						GlobalFunc_149();
						return;
					}
					if (GlobalFunc_2010(2, Global_14365, 0))
					{
						if (Global_15747)
						{
							Global_14319 = 0.19f;
							Global_15745 = 0;
							GlobalFunc_7017();
							func_43();
							Global_15311 = { Global_15816 };
							Global_16709 = 3;
							Global_16705 = 0;
							Global_16707 = 0;
							Global_15702 = 0;
							GlobalFunc_7018();
							GlobalFunc_149();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_15745)
			{
				SYSTEM::WAIT(0);
				if (Global_14393.f_1 < 6)
				{
					Global_15745 = 0;
				}
				else
				{
					if (iLocal_29 == 0)
					{
						func_47();
						GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						GlobalFunc_5577(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						GlobalFunc_5577(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						GlobalFunc_5577(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						GlobalFunc_5587(Global_14374, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_14381)
						{
							GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_2263, 17);
						iLocal_234 = 0;
						iLocal_29 = 1;
					}
					func_14();
					if (GlobalFunc_2010(2, Global_14362, 0))
					{
						func_43();
						Global_15745 = 0;
						GlobalFunc_7017();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
						uLocal_235 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_235))
						{
							SYSTEM::WAIT(0);
						}
						iVar2 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_235);
						switch (iVar2)
						{
							case 0:
								Global_15311 = { Global_15822 };
								Global_16709 = 4;
								break;
							
							case 1:
								Global_15311 = { Global_15816 };
								Global_16709 = 3;
								break;
							
							case 2:
								Global_15311 = { Global_15828 };
								Global_16709 = 5;
								break;
						}
						Global_16705 = 0;
						Global_16707 = 0;
						Global_15702 = 0;
						GlobalFunc_7018();
						GlobalFunc_149();
						return;
					}
					if (GlobalFunc_2010(2, Global_14363, 0))
					{
						Global_15745 = 0;
						GlobalFunc_7017();
					}
				}
			}
		}
		if (Global_15693 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 900 && Global_14393.f_1 == 9)
			{
				SYSTEM::WAIT(0);
			}
			Global_15692 = 6;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_14382, 1);
		func_13();
		Global_14393.f_1 = Global_14395;
		GlobalFunc_7908();
	}
	else if (Global_14551 == 0)
	{
		if (GlobalFunc_2010(2, Global_14361, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (MISC::IS_BIT_SET(Global_2263, 20))
					{
					}
					else
					{
						Global_14371 = 1;
						GlobalFunc_7017();
						AUDIO::STOP_SCRIPTED_CONVERSATION(0);
						Global_15741 = 1;
						Global_15742 = 1;
						Global_15692 = 6;
						func_13();
						Global_14393.f_1 = Global_14395;
						GlobalFunc_7908();
					}
				}
			}
		}
	}
}






void func_13()//Position - 0x1AE3
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return;
	}
	switch (Global_14395)
	{
		case 5:
			Global_14395 = 6;
			break;
		
		case 6:
			if (MISC::IS_BIT_SET(Global_2264, 5))
			{
				Global_14395 = 6;
				MISC::CLEAR_BIT(&Global_2264, 5);
			}
			else
			{
				Global_14395 = 3;
			}
			break;
		
		case 7:
			Global_14395 = 3;
			break;
		
		case 3:
			if (MISC::IS_BIT_SET(Global_2264, 5))
			{
				Global_14395 = 6;
				MISC::CLEAR_BIT(&Global_2264, 5);
			}
			else
			{
				Global_14395 = 3;
			}
			break;
		
		default:
			Global_14395 = 3;
			break;
	}
}

void func_14()//Position - 0x1B7C
{
	if (iLocal_234)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_234 = 0;
		}
	}
	if (iLocal_234 == 0)
	{
		if (GlobalFunc_2010(2, Global_14369, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			GlobalFunc_7021();
			iLocal_234 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (GlobalFunc_2010(2, Global_14370, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			GlobalFunc_7020();
			iLocal_234 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}








int func_22(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x1EBC
{
	var uVar0;
	var uVar11;
	
	GlobalFunc_513(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	GlobalFunc_2443();
	if (iParam8 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	GlobalFunc_5776(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar11, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x1F1B
{
	int iVar0;
	
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam2 > Global_15694)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
				}
				else
				{
					GlobalFunc_110();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (GlobalFunc_153(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		GlobalFunc_152();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16688 = Global_16689;
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15311.f_370 = Global_16681;
		Global_15688 = Global_15689;
		Global_15690 = Global_15691;
		if (Global_15950 == 0)
		{
			Global_15846[0 /*6*/] = { Global_15872[0 /*6*/] };
			Global_15846[1 /*6*/] = { Global_15872[1 /*6*/] };
			Global_15898[0 /*6*/] = { Global_15924[0 /*6*/] };
			Global_15898[1 /*6*/] = { Global_15924[1 /*6*/] };
			Global_15859[0 /*6*/] = { Global_15885[0 /*6*/] };
			Global_15859[1 /*6*/] = { Global_15885[1 /*6*/] };
			Global_15911[0 /*6*/] = { Global_15937[0 /*6*/] };
			Global_15911[1 /*6*/] = { Global_15937[1 /*6*/] };
		}
		if (Global_15698)
		{
			MISC::CLEAR_BIT(&Global_2263, 20);
			MISC::CLEAR_BIT(&Global_2264, 17);
			MISC::CLEAR_BIT(&Global_2265, 0);
			if (bParam3)
			{
				GlobalFunc_9035();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (GlobalFunc_151())
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (Global_15950 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
						if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
					}
				}
			}
			if (GlobalFunc_72())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			GlobalFunc_150();
			Global_15702 = bParam3;
		}
		Global_15694 = iParam2;
		if (Global_15688 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15688)
			{
				StringCopy(&(Global_15311.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15311.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14558 = 0;
		GlobalFunc_149();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15694 || iParam2 == Global_15694)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		GlobalFunc_110();
	}
	return 0;
}
















int func_39(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x27BC
{
	GlobalFunc_513(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	GlobalFunc_2443();
	if (iParam7 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	GlobalFunc_2442(uParam0);
	return func_23(uParam4, uParam5, iParam6, bParam10);
}




void func_43()//Position - 0x283D
{
	if (GlobalFunc_5582())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!Global_14336)
				{
					if (!MISC::IS_BIT_SET(Global_2263, 11))
					{
						GlobalFunc_5583();
					}
				}
			}
		}
	}
}




void func_47()//Position - 0x2B65
{
	if (GlobalFunc_5582())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!Global_14336)
				{
					if (MISC::IS_BIT_SET(Global_2263, 11))
					{
						GlobalFunc_2023();
					}
				}
			}
		}
	}
}


int func_49()//Position - 0x2BD6
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_107 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_106);
	}
	else
	{
		iLocal_104 = MISC::GET_GAME_TIMER();
		iLocal_107 = (iLocal_104 - iLocal_103);
	}
	return 0;
}




void func_53()//Position - 0x2D40
{
	if (GlobalFunc_2010(2, Global_14370, 0))
	{
		if (Global_16703 == 0)
		{
			if (Global_15698)
			{
				if (MISC::IS_BIT_SET(Global_2264, 17))
				{
				}
				else
				{
					AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
				}
			}
		}
	}
}



void func_56()//Position - 0x2EBA
{
	if (Global_68245 == 0)
	{
		func_53();
	}
	if (iLocal_32 == 1)
	{
		GlobalFunc_6685(0);
	}
	if (iLocal_29 == 0)
	{
		iLocal_29 = 1;
		Global_16705 = 1;
		if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] == 0)
		{
			GlobalFunc_5577(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_15834, "CELL_300", "CELL_195", "CELL_195", 0);
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			GlobalFunc_5577(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_15834, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_14319 = 0.2f;
		if (Global_14381)
		{
			GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_2263, 17);
	}
	if (Global_15745 == 1)
	{
		if (Global_14393.f_1 < 6)
		{
			Global_15745 = 0;
		}
		else
		{
			if (Global_14333 == 0)
			{
				if (GlobalFunc_2010(2, Global_14362, 0))
				{
					Global_14319 = 0.19f;
					Global_15745 = 0;
					GlobalFunc_7017();
					Global_16710 = 1;
					iLocal_31 = 1;
				}
			}
			if (GlobalFunc_2010(2, Global_14363, 0))
			{
				Global_14319 = 0.19f;
				Global_15745 = 0;
				GlobalFunc_7017();
				Global_16710 = 2;
			}
		}
	}
	else if (Global_16710 == 2)
	{
		if (Global_15693 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			Global_15692 = 6;
		}
		func_13();
		Global_14393.f_1 = Global_14395;
		GlobalFunc_7908();
	}
	else if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		iLocal_31 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_14382, 1);
		func_13();
		Global_14393.f_1 = Global_14395;
		GlobalFunc_7908();
	}
}

void func_57()//Position - 0x30FC
{
	if (Global_14559 == 1)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
			{
				Global_14559 = 0;
			}
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Global_14559 = 0;
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			Global_15692 = 6;
		}
	}
	if (SYSTEM::TIMERB() > iLocal_34)
	{
		if (Global_14559 == 1)
		{
			Global_14559 = 0;
		}
	}
	if (SYSTEM::TIMERA() < Global_16713 || Global_14559 == 1)
	{
		if (GlobalFunc_2010(2, Global_14361, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (MISC::IS_BIT_SET(Global_2263, 20))
					{
					}
					else
					{
						Global_14371 = 1;
						GlobalFunc_7017();
						AUDIO::STOP_SCRIPTED_CONVERSATION(0);
						Global_15741 = 1;
						Global_15692 = 6;
						MISC::CLEAR_BIT(&Global_2263, 27);
						if (!Global_15703)
						{
							MISC::SET_BIT(&Global_2264, 5);
						}
						func_13();
						Global_14393.f_1 = Global_14395;
						GlobalFunc_7908();
					}
				}
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 27);
		Global_15692 = 4;
		Global_15749 = 0;
		func_60();
		func_59();
		if (!Global_15705)
		{
			if (Global_16709 == 0)
			{
				if (!MISC::IS_BIT_SET(Global_2265, 5))
				{
					AUDIO::START_PRELOADED_CONVERSATION();
				}
				MISC::CLEAR_BIT(&Global_2265, 5);
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_15311.f_368, Global_15311.f_369);
			}
		}
		func_58();
	}
}

void func_58()//Position - 0x3229
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_106 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_103 = MISC::GET_GAME_TIMER();
	}
}

void func_59()//Position - 0x3247
{
	if (Global_15705)
	{
		if (Global_68245)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374))
			{
				if (!MISC::IS_PC_VERSION())
				{
					GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2446554.f_1619), 15);
				}
			}
		}
	}
}

void func_60()//Position - 0x3295
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374))
	{
		if (!Global_15700)
		{
			GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2263, 17);
			if (MISC::IS_BIT_SET(Global_2263, 20))
			{
				GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				GlobalFunc_5577(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15705)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15707);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GlobalFunc_726("CELL_300");
				GlobalFunc_726("CELL_219");
				GlobalFunc_726("CELL_219");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] == 0)
			{
				GlobalFunc_5577(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				GlobalFunc_5577(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), "CELL_219", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
			}
		}
		GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_61()//Position - 0x3448
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_108 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_94);
		iLocal_109 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_97);
	}
	else
	{
		iLocal_93 = MISC::GET_GAME_TIMER();
		iLocal_108 = (iLocal_93 - iLocal_92);
		iLocal_96 = MISC::GET_GAME_TIMER();
		iLocal_109 = (iLocal_96 - iLocal_95);
	}
	if (Global_15739 == 1)
	{
		if (GlobalFunc_5582())
		{
			if (iLocal_108 > 4000)
			{
				if (MISC::IS_BIT_SET(Global_2263, 14))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374))
					{
						GlobalFunc_7017();
						Global_14392 = 2;
						func_60();
						func_59();
					}
				}
			}
		}
		else if (iLocal_108 > 2000)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374))
				{
					GlobalFunc_7017();
					Global_14392 = 2;
					func_60();
					func_59();
				}
			}
		}
	}
	if (iLocal_109 > 10000)
	{
		Global_14392 = 3;
	}
	if (Global_14392 == 2)
	{
		iLocal_29 = 0;
		Global_15692 = 4;
		GlobalFunc_5583();
		Global_15749 = 0;
		func_60();
		func_59();
		if (!Global_15705)
		{
			if (Global_16709 == 0)
			{
				AUDIO::START_PRELOADED_CONVERSATION();
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_15311.f_368, Global_15311.f_369);
			}
		}
		func_58();
		Global_16708 = 0;
	}
	if (Global_15739 == 0)
	{
		if (Global_14392 == 3)
		{
			if (Global_15705)
			{
				GlobalFunc_7911();
				GlobalFunc_6685(0);
			}
			else
			{
				GlobalFunc_587();
				Global_16708 = 1;
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				Global_15692 = 6;
				func_13();
				Global_14393.f_1 = Global_14395;
				GlobalFunc_7908();
			}
		}
	}
	else if (Global_14392 == 3)
	{
	}
}






void func_67()//Position - 0x370F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_91 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_28 = 0;
	iLocal_30 = 0;
	while (iLocal_91 < Global_15688)
	{
		func_84();
		func_83();
		func_82();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_28 == 0)
		{
			cLocal_43 = { Global_15311.f_6[iLocal_91 /*6*/] };
			StringConCat(&cLocal_43, "A", 24);
			Global_14560[iVar2 /*6*/] = { Global_15311.f_6[iLocal_91 /*6*/] };
			StringConCat(&(Global_14560[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_14560[iVar2 /*6*/]), iVar1, 24);
			cLocal_37 = { Global_14560[iVar2 /*6*/] };
			StringConCat(&cLocal_37, "A", 24);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_37))
			{
				StringCopy(&cLocal_49, HUD::_GET_LABEL_TEXT(&cLocal_37), 64);
				iVar3 = func_81(iVar13);
				iVar4 = func_80(iVar13);
				uVar5 = func_78(iVar13);
				uLocal_81 = func_77();
				uLocal_82 = func_76();
				uLocal_83 = func_75();
				uVar6 = func_74(iVar13);
				uVar7 = func_73(iVar13);
				uVar8 = func_72(iVar13);
				uVar12 = func_71(iVar13);
				uVar9 = func_70(iVar13);
				uVar10 = func_69(iVar13);
				uVar11 = func_68(iVar13);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_14560[iVar2 /*6*/])))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_14560[iVar2 /*6*/]), &(Global_15311.f_187[iLocal_91 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_49, &(Global_14560[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_43))
			{
				StringCopy(&cLocal_49, HUD::_GET_LABEL_TEXT(&cLocal_43), 64);
				iVar3 = func_81(0);
				iVar4 = func_80(0);
				uVar5 = func_78(0);
				uLocal_81 = func_77();
				uLocal_82 = func_76();
				uLocal_83 = func_75();
				uVar6 = func_74(0);
				uVar7 = func_73(0);
				uVar8 = func_72(0);
				uVar12 = func_71(0);
				uVar9 = func_70(0);
				uVar10 = func_69(0);
				uVar11 = func_68(0);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_49, &(Global_15311.f_6[iLocal_91 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_14560[iVar2 /*6*/]), "END", 24);
				iLocal_28 = 1;
			}
			else
			{
				StringCopy(&(Global_14560[iVar2 /*6*/]), "END", 24);
				iLocal_28 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_91++;
		iLocal_28 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_15698 == 0)
	{
		AUDIO::_0x0B568201DD99F0EB(uLocal_82);
		AUDIO::_0x61631F5DF50D1C34(uLocal_83);
		AUDIO::START_SCRIPT_CONVERSATION(Global_15311.f_368, Global_15311.f_369, Global_15311.f_370, uLocal_81);
		Global_15692 = 4;
	}
}

int func_68(int iParam0)//Position - 0x398E
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_84), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_69(int iParam0)//Position - 0x39C3
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_84), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)//Position - 0x39F8
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_84), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_71(int iParam0)//Position - 0x3A2D
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_84), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_72(int iParam0)//Position - 0x3AA3
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_84), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_73(int iParam0)//Position - 0x3AD8
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_84), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)//Position - 0x3B0D
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_84), iParam0 * 7, iParam0 * 7 + 1);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75()//Position - 0x3B40
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_72), 2, 3);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76()//Position - 0x3B6B
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_72), 1, 2);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77()//Position - 0x3B96
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_72), 0, 1);
	if (MISC::ARE_STRINGS_EQUAL(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)//Position - 0x3BC1
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_65), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_79(uVar0);
}

int func_79(var uParam0)//Position - 0x3BE7
{
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "4"))
	{
		return 4;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "5"))
	{
		return 5;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "6"))
	{
		return 6;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "7"))
	{
		return 7;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "8"))
	{
		return 8;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "9"))
	{
		return 9;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "A"))
	{
		return 10;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "B"))
	{
		return 11;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "C"))
	{
		return 12;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "D"))
	{
		return 13;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "E"))
	{
		return 14;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "F"))
	{
		return 15;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "G"))
	{
		return 16;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "H"))
	{
		return 17;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "I"))
	{
		return 18;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "J"))
	{
		return 19;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "K"))
	{
		return 20;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "L"))
	{
		return 21;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "M"))
	{
		return 22;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "N"))
	{
		return 23;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "O"))
	{
		return 24;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "P"))
	{
		return 25;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "Q"))
	{
		return 26;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "R"))
	{
		return 27;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "S"))
	{
		return 28;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "T"))
	{
		return 29;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "U"))
	{
		return 30;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "V"))
	{
		return 31;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "W"))
	{
		return 32;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "X"))
	{
		return 33;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "Y"))
	{
		return 34;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "Z"))
	{
		return 35;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_80(int iParam0)//Position - 0x3E84
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_65), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_79(uVar0);
}

int func_81(int iParam0)//Position - 0x3EAA
{
	var uVar0;
	
	uVar0 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_65), iParam0 * 3, iParam0 * 3 + 1);
	return func_79(uVar0);
}

void func_82()//Position - 0x3ECE
{
	cLocal_84 = { Global_15311.f_6[iLocal_91 /*6*/] };
	StringConCat(&cLocal_84, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_84))
	{
		sLocal_90 = HUD::_GET_LABEL_TEXT(&cLocal_84);
		if (MISC::IS_STRING_NULL(sLocal_90))
		{
		}
	}
}

void func_83()//Position - 0x3F07
{
	cLocal_72 = { Global_15311.f_6[iLocal_91 /*6*/] };
	StringConCat(&cLocal_72, "IF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_72))
	{
		sLocal_78 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_72), 0, 1);
		if (MISC::IS_STRING_NULL(sLocal_78))
		{
		}
		sLocal_79 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_72), 1, 2);
		if (MISC::IS_STRING_NULL(sLocal_79))
		{
		}
		sLocal_80 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_72), 2, 3);
		if (MISC::IS_STRING_NULL(sLocal_80))
		{
		}
	}
}

void func_84()//Position - 0x3F74
{
	cLocal_65 = { Global_15311.f_6[iLocal_91 /*6*/] };
	StringConCat(&cLocal_65, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_65))
	{
		sLocal_71 = HUD::_GET_LABEL_TEXT(&cLocal_65);
		if (MISC::IS_STRING_NULL(sLocal_71))
		{
		}
	}
}

void func_85()//Position - 0x3FAD
{
	func_86();
	AUDIO::_0x0B568201DD99F0EB(uLocal_82);
	AUDIO::_0x61631F5DF50D1C34(uLocal_83);
	if (Global_16684)
	{
		AUDIO::PRELOAD_SCRIPT_CONVERSATION(Global_15311.f_368, Global_15311.f_369, Global_15311.f_370, uLocal_81);
		iLocal_35 = MISC::GET_GAME_TIMER();
	}
	else
	{
		AUDIO::START_SCRIPT_CONVERSATION(Global_15311.f_368, Global_15311.f_369, Global_15311.f_370, uLocal_81);
	}
	Global_15692 = 4;
}

void func_86()//Position - 0x400B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_28 = 0;
	iLocal_30 = 0;
	iLocal_32 = 0;
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_15768))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_15768, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_DURANGO_VERSION())
		{
			if (Global_1572928 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_68245 || GlobalFunc_456())
		{
			if (Global_1572928 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_91())
		{
			iVar14 = 1;
		}
		if (((Global_15694 < 5 || Global_15694 == 10) || Global_15694 == 12) || Global_15694 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				HUD::REQUEST_ADDITIONAL_TEXT(&Global_15768, 7);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_15768, 14);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_15768, 6);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_15768, 13);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(13))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		iLocal_32 = 1;
		return;
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_90();
	func_89();
	func_88();
	func_87();
	Global_16702 = 0;
	while (iVar2 < 70 && iLocal_28 == 0)
	{
		cLocal_43 = { Global_15311 };
		StringConCat(&cLocal_43, "A", 24);
		Global_14560[iVar2 /*6*/] = { Global_15311 };
		StringConCat(&(Global_14560[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_14560[iVar2 /*6*/]), iVar1, 24);
		cLocal_37 = { Global_14560[iVar2 /*6*/] };
		StringConCat(&cLocal_37, "A", 24);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_37))
		{
			StringCopy(&cLocal_49, HUD::_GET_LABEL_TEXT(&cLocal_37), 64);
			iVar3 = func_81(iVar2);
			if (iVar3 == 9)
			{
				if (Global_2544830 == 0)
				{
				}
			}
			iVar4 = func_80(iVar2);
			uVar5 = func_78(iVar2);
			uLocal_81 = func_77();
			uLocal_82 = func_76();
			uLocal_83 = func_75();
			uVar6 = func_74(iVar2);
			uVar7 = func_73(iVar2);
			uVar8 = func_72(iVar2);
			uVar12 = func_71(iVar2);
			uVar9 = func_70(iVar2);
			uVar10 = func_69(iVar2);
			uVar11 = func_68(iVar2);
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_14560[iVar2 /*6*/])))
			{
				if (Global_16682 == 0 && Global_16688 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_49, &(Global_14560[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (MISC::ARE_STRINGS_EQUAL(&(Global_14560[iVar2 /*6*/]), &Global_16690))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_49, &(Global_14560[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_16702 = iVar2;
					if (Global_16688 == 1)
					{
						Global_16688 = 0;
					}
				}
			}
			else if (Global_16688 == 0 && Global_16682 == 0)
			{
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_49, &cLocal_49, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_43))
			{
				StringCopy(&cLocal_49, HUD::_GET_LABEL_TEXT(&cLocal_43), 64);
				iVar3 = func_81(iVar2);
				iVar4 = func_80(iVar2);
				uVar5 = func_78(iVar2);
				uLocal_81 = func_77();
				uLocal_82 = func_76();
				uLocal_83 = func_75();
				uVar6 = func_74(iVar2);
				uVar7 = func_73(iVar2);
				uVar8 = func_72(iVar2);
				uVar12 = func_71(iVar2);
				uVar9 = func_70(iVar2);
				uVar10 = func_69(iVar2);
				uVar11 = func_68(iVar2);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_49, &Global_15311, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_28 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_87()//Position - 0x43FD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_14981[iVar0 /*10*/].f_7 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_14981[iVar0 /*10*/]) || Global_14981[iVar0 /*10*/] == 0)
			{
				AUDIO::ADD_PED_TO_CONVERSATION(iVar0, Global_14981[iVar0 /*10*/], &(Global_14981[iVar0 /*10*/].f_1));
			}
			if (Global_14981.f_161 == iVar0)
			{
				if ((Global_14981.f_162 != 0f && Global_14981.f_162.f_1 != 0f) && Global_14981.f_162.f_2 != 0f)
				{
					SYSTEM::WAIT(0);
					AUDIO::_0x33E3C6C6F2F0B506(Global_14981.f_161, Global_14981.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_2544830 == 1)
	{
		Global_2544830 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_2544649[iVar0 /*9*/].f_7 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2544649[iVar0 /*9*/]) || Global_2544649[iVar0 /*9*/] == 0)
				{
					AUDIO::ADD_PED_TO_CONVERSATION(Global_2544649[iVar0 /*9*/].f_8, Global_2544649[iVar0 /*9*/], &(Global_2544649[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_88()//Position - 0x450D
{
	cLocal_84 = { Global_15311 };
	StringConCat(&cLocal_84, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_84))
	{
		sLocal_90 = HUD::_GET_LABEL_TEXT(&cLocal_84);
		if (MISC::IS_STRING_NULL(sLocal_90))
		{
		}
	}
}

void func_89()//Position - 0x4540
{
	cLocal_72 = { Global_15311 };
	StringConCat(&cLocal_72, "IF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_72))
	{
		sLocal_78 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_72), 0, 1);
		if (MISC::IS_STRING_NULL(sLocal_78))
		{
		}
		sLocal_79 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_72), 1, 2);
		if (MISC::IS_STRING_NULL(sLocal_79))
		{
		}
		sLocal_80 = HUD::_GET_TEXT_SUBSTRING(HUD::_GET_LABEL_TEXT(&cLocal_72), 2, 3);
		if (MISC::IS_STRING_NULL(sLocal_80))
		{
		}
	}
}

void func_90()//Position - 0x45A7
{
	cLocal_65 = { Global_15311 };
	StringConCat(&cLocal_65, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_65))
	{
		sLocal_71 = HUD::_GET_LABEL_TEXT(&cLocal_65);
		if (MISC::IS_STRING_NULL(sLocal_71))
		{
		}
	}
}

int func_91()//Position - 0x45DA
{
	if (Global_2621550)
	{
		if (GlobalFunc_39(0))
		{
			if (Global_3145728 || GlobalFunc_2(0))
			{
				return 1;
			}
		}
	}
	if (Global_2621549)
	{
		if (GlobalFunc_39(0))
		{
			if (Global_3670016 || GlobalFunc_2(0))
			{
				return 1;
			}
		}
	}
	return 0;
}



void func_94()//Position - 0x4664
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (MISC::IS_ORBIS_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		if (Global_1572928 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_68245)
	{
		if (Global_1572928 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_91())
	{
		iVar1 = 1;
	}
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_15768))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_15768, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (((Global_15694 < 5 || Global_15694 == 10) || Global_15694 == 12) || Global_15694 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_15768, 7);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_15768, 14);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_15768, 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_15768, 13);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(13))
		{
			SYSTEM::WAIT(0);
		}
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_87();
}

void func_95()//Position - 0x47B0
{
	while (Global_14376 == 1 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	Global_14376 = 0;
	if (MISC::IS_BIT_SET(Global_2263, 20))
	{
		MISC::SET_BIT(&Global_2264, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2264, 1);
	}
	Global_14377 = 0;
	if (Global_15688 == 0)
	{
		if (!Global_15705)
		{
			func_86();
		}
	}
	else
	{
		func_67();
	}
	Global_14559 = 0;
	if (Global_15702)
	{
		if (Global_16709 == 0)
		{
			if (Global_15705 == 0)
			{
				iLocal_33 = 5000;
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_15311.f_368, Global_15311.f_369);
			}
			else
			{
				iLocal_33 = 0;
			}
		}
		else
		{
			iLocal_33 = 0;
		}
		Global_14559 = 1;
		SYSTEM::SETTIMERB(0);
		while ((Global_14559 == 1 && Global_15692 == 1) && SYSTEM::TIMERB() < iLocal_33)
		{
			SYSTEM::WAIT(0);
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Global_14559 = 0;
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				Global_15692 = 6;
			}
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
				{
					Global_14559 = 0;
				}
			}
		}
		if (SYSTEM::TIMERB() > iLocal_33)
		{
		}
		if (Global_15692 != 1)
		{
		}
		if (Global_14559 == 0)
		{
		}
	}
	Global_14559 = 0;
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 0) || Global_15692 != 1) || Global_14359 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
	}
	else
	{
		if (Global_15700)
		{
			Global_16710 = 0;
			iLocal_31 = 0;
		}
		if (Global_15702 == 0)
		{
			if (Global_15743 == 0)
			{
				Global_14395 = Global_14393.f_1;
				Global_15743 = 1;
			}
			iLocal_29 = 0;
			if (Global_16709 == 0)
			{
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_15311.f_368, Global_15311.f_369);
				SYSTEM::WAIT(0);
				Global_15692 = 3;
				Global_14559 = 1;
				SYSTEM::SETTIMERB(0);
				MISC::SET_BIT(&Global_2263, 27);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				Global_14559 = 0;
				Global_15692 = 4;
			}
			Global_14392 = 0;
			if (Global_15703 == 1)
			{
				if (Global_14393.f_1 == 10)
				{
				}
				if (!Global_14393.f_1 == 9)
				{
					if (Global_14393.f_1 > 4)
					{
						if (Global_14376 == 0)
						{
							Global_14393.f_1 = 9;
							GlobalFunc_7908();
						}
					}
					else
					{
						Global_14393.f_1 = 4;
					}
				}
				else
				{
					GlobalFunc_7908();
				}
			}
			else
			{
				while (Global_14393.f_1 == 4)
				{
					SYSTEM::WAIT(0);
					if (Global_14559 == 1)
					{
						if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
						{
							if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
							{
								Global_14559 = 0;
							}
						}
					}
				}
				if (Global_14393.f_1 == 6)
				{
				}
				if (Global_14393.f_1 == 10)
				{
				}
				if (Global_14393.f_1 == 3)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_15692 = 6;
					Global_14377 = 1;
					return;
				}
				Global_14393.f_1 = 9;
				GlobalFunc_7908();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_100 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_98 = MISC::GET_GAME_TIMER();
			}
			while (Global_14393.f_1 != 9 && Global_14376 == 0)
			{
				SYSTEM::WAIT(0);
				if (Global_14559 == 1)
				{
					if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
						{
							Global_14559 = 0;
						}
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_107 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_100);
				}
				else
				{
					iLocal_99 = MISC::GET_GAME_TIMER();
					iLocal_107 = (iLocal_99 - iLocal_98);
				}
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_107 > 15000)
					{
						Global_16708 = 1;
						Global_14376 = 1;
					}
				}
			}
			if (!MISC::IS_BIT_SET(Global_2263, 11))
			{
				if (GlobalFunc_5582() == 0)
				{
					GlobalFunc_5583();
				}
			}
			if (Global_14376 == 0)
			{
				if (!Global_16709 == 0)
				{
					Global_15749 = 0;
					func_60();
					func_59();
					if (!Global_15705)
					{
						if (Global_16709 == 0)
						{
							AUDIO::START_PRELOADED_CONVERSATION();
						}
						else
						{
							AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_15311.f_368, Global_15311.f_369);
						}
					}
					func_58();
				}
			}
			else
			{
				GlobalFunc_4935();
				Global_14377 = 1;
			}
		}
		else
		{
			Global_14392 = 1;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (Global_14393.f_1 == 3)
					{
					}
				}
				else
				{
					MISC::CLEAR_BIT(&Global_2264, 21);
				}
			}
			if (Global_15743 == 0)
			{
				Global_14395 = Global_14393.f_1;
				Global_15743 = 1;
			}
			if (Global_14393.f_1 == 3)
			{
				Global_14393.f_1 = 4;
			}
			else
			{
				while (Global_14393.f_1 == 4)
				{
					SYSTEM::WAIT(0);
				}
				if (Global_14393.f_1 == 6)
				{
				}
				Global_14393.f_1 = 9;
				GlobalFunc_7908();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_100 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_98 = MISC::GET_GAME_TIMER();
			}
			while (Global_14393.f_1 != 9 && Global_14376 == 0)
			{
				SYSTEM::WAIT(0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_107 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_100);
				}
				else
				{
					iLocal_99 = MISC::GET_GAME_TIMER();
					iLocal_107 = (iLocal_99 - iLocal_98);
				}
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_107 > 20000)
					{
						Global_16708 = 1;
						Global_14376 = 1;
						MISC::CLEAR_BIT(&Global_2264, 21);
					}
				}
			}
			if (Global_14376 == 0)
			{
				Global_15692 = 2;
			}
			else
			{
				GlobalFunc_4935();
				Global_14377 = 1;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_94 = NETWORK::GET_NETWORK_TIME();
				uLocal_97 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_92 = MISC::GET_GAME_TIMER();
				iLocal_95 = MISC::GET_GAME_TIMER();
			}
		}
	}
}


void func_97()//Position - 0x4C55
{
	float fVar0;
	
	fVar0 = func_98(Global_14346[Global_14338 /*3*/], Global_14339[Global_14338 /*3*/], Global_14353, Global_14324, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_16706 == 0)
		{
			HUD::DISPLAY_RADAR(1);
		}
		iLocal_31 = 0;
	}
}

float func_98(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)//Position - 0x4C9D
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








