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
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
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
	var uLocal_55 = 10;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	struct<4> Local_99 = { 0, 0, 0, 0 } ;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_108 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			HUD::SET_FRONTEND_ACTIVE(0);
			LOADINGSCREEN::_LOADINGSCREEN_SET_LOAD_FREEMODE(1);
			LOADINGSCREEN::_0xFA1E0E893D915215(0);
			MISC::QUEUE_MISSION_REPEAT_LOAD();
		}
		MISC::_SET_PLAYER_ROCKSTAR_EDITOR_DISABLED(0);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if (GlobalFunc_2(0))
		{
			switch (iLocal_97)
			{
				case 0:
					func_665();
					break;
				
				case 1:
					func_640();
					break;
				
				case 2:
					func_538();
					break;
				
				case 3:
					func_62();
					break;
				
				case 4:
					func_61();
					break;
				
				case 5:
					func_1();
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x108
{
	switch (Global_68491.f_1)
	{
		case 1:
			func_4();
			break;
		
		case 7:
			while (GlobalFunc_142())
			{
				SYSTEM::WAIT(0);
			}
			if (GlobalFunc_199())
			{
				while (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&Local_99)) == 0)
				{
					SYSTEM::WAIT(0);
				}
				iLocal_97 = 3;
			}
			else
			{
				func_4();
			}
			break;
		
		default:
			func_4();
			break;
	}
}



void func_4()//Position - 0x1D0
{
	if (Global_68491.f_1 == 1)
	{
		func_7(Global_68491);
		GlobalFunc_1997(&iLocal_108);
	}
	MISC::QUEUE_MISSION_REPEAT_LOAD();
	func_5(0);
}

void func_5(int iParam0)//Position - 0x1FA
{
	Global_SAVE_DATA.isGameflowActive = 1;
	Global_35462 = 0;
	MISC::SET_GAME_PAUSED(0);
	if (iParam0 == 1)
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	MISC::CLEAR_BIT(&Global_68493, 0);
	MISC::CLEAR_BIT(&Global_68493, 1);
	MISC::CLEAR_BIT(&Global_68493, 3);
	MISC::CLEAR_BIT(&Global_68493, 2);
	MISC::_SET_PLAYER_ROCKSTAR_EDITOR_DISABLED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}


void func_7(int iParam0)//Position - 0x29F
{
	var uVar0;
	
	HUD::SET_MISSION_NAME(0, 0);
	if (Global_87289 == iParam0)
	{
		if (iParam0 != 77)
		{
			Global_87293 = 1;
		}
	}
	GlobalFunc_5207("TRIG_FT", 1);
	GlobalFunc_5207("TRIG_F", 1);
	GlobalFunc_5207("TRIG_T", 1);
	GlobalFunc_5207("TRIG_MT", 1);
	GlobalFunc_5207("TRIG_M", 1);
	GlobalFunc_5207("TRIG_T", 1);
	func_55();
	GlobalFunc_5848();
	Global_97344 = (MISC::GET_GAME_TIMER() - 120000);
	func_49(iParam0);
	func_39(GlobalFunc_8315());
	if (Global_86395)
	{
		Global_86395 = 0;
	}
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_5385(1);
	HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	HUD::CLEAR_BRIEF();
	GlobalFunc_53();
	GlobalFunc_8316(0, 1, 1, 0);
	GlobalFunc_3061(30000);
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset, 3))
	{
		GlobalFunc_18();
	}
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 4);
	Global_24491 = MISC::GET_GAME_TIMER();
	Global_SAVE_DATA.COMPONENTS_ARRAY.OVERRIDE_PED = 145;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
	}
	uVar0 = Global_81155[iParam0 /*34*/].f_12;
	if (GlobalFunc_747(uVar0, 1))
	{
		GlobalFunc_3060(0);
		GlobalFunc_3060(4);
		GlobalFunc_3060(8);
		GlobalFunc_3060(9);
		GlobalFunc_3060(10);
	}
	if (GlobalFunc_747(uVar0, 2))
	{
		GlobalFunc_3060(1);
		GlobalFunc_3060(4);
		GlobalFunc_3060(8);
		GlobalFunc_3060(5);
	}
	if (GlobalFunc_747(uVar0, 4))
	{
		GlobalFunc_3060(2);
		GlobalFunc_3060(4);
		GlobalFunc_3060(5);
		GlobalFunc_3060(9);
		GlobalFunc_3060(11);
	}
	if (GlobalFunc_747(uVar0, 8))
	{
		GlobalFunc_3060(19);
	}
	if (GlobalFunc_747(uVar0, 16))
	{
		GlobalFunc_3060(14);
	}
	if (GlobalFunc_747(uVar0, 32))
	{
		GlobalFunc_3060(17);
	}
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("buddyDeathResponse");
	Global_87285 = -15;
	GlobalFunc_9191(0);
	GlobalFunc_748(0);
	GlobalFunc_3002(0);
	GlobalFunc_52(1, 1);
	func_9();
	Global_89752[0 /*65*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[0 /*65*/] };
	Global_89752[1 /*65*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[1 /*65*/] };
	Global_89752[2 /*65*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[2 /*65*/] };
	AUDIO::TRIGGER_MUSIC_EVENT("GLOBAL_KILL_MUSIC");
	GlobalFunc_51();
	Global_24747 = 0;
	Global_68514.f_9 = -1;
	Global_68507 = -1;
}


void func_9()//Position - 0x533
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 198)
	{
		Global_33556[iVar0] = 1;
		iVar0++;
	}
}






























void func_39(int iParam0)//Position - 0xE3B
{
	if (iParam0 == 2)
	{
		if (!GlobalFunc_6687(0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, -1865950624);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1862763509, -1865950624);
		}
	}
	else
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -1865950624);
	}
}










void func_49(int iParam0)//Position - 0x1230
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_3 == iParam0)
		{
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_2, 0))
			{
				MISC::CLEAR_BIT(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_2), 0);
				Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_3 = -1;
				GlobalFunc_6877(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_5));
				Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar0 /*19*/].f_8 = 1;
			}
		}
		iVar0++;
	}
}






void func_55()//Position - 0x1407
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		MISC::CLEAR_BIT(&(Global_87300[iVar0 /*17*/].f_10.f_1), 8);
		iVar0++;
	}
}






void func_61()//Position - 0x17BE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 20000;
	iVar2 = 1;
	if (Global_68491.f_1 == 1)
	{
		iVar3 = Global_68491;
		if (((((iVar3 == 19 || iVar3 == 21) || iVar3 == 22) || iVar3 == 84) || iVar3 == 85) || iVar3 == 90)
		{
			iVar2 = 0;
		}
	}
	if (iVar2 == 1)
	{
		iVar0 = (MISC::GET_GAME_TIMER() + iVar1);
		while ((Global_68505 == 0 && MISC::GET_GAME_TIMER() < iVar0) && !Global_54752)
		{
			SYSTEM::WAIT(0);
		}
		iVar0 = MISC::GET_GAME_TIMER() + 30000;
		while ((Global_68505 || Global_54755) && MISC::GET_GAME_TIMER() < iVar0)
		{
			SYSTEM::WAIT(0);
		}
	}
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(800);
		}
		SYSTEM::WAIT(0);
	}
	func_4();
}

void func_62()//Position - 0x18A8
{
	int iVar0;
	int iVar1;
	
	switch (Global_68491.f_1)
	{
		case 1:
			iVar0 = Global_81155[Global_68491 /*34*/].f_7;
			while (func_63(iVar0, -1) == -1)
			{
				SYSTEM::WAIT(0);
			}
			iVar1 = Global_68491;
			if (iVar1 == 24 || iVar1 == 25)
			{
				if (MISC::IS_BIT_SET(Global_68493, 1))
				{
					iVar0 = Global_81155[28 /*34*/].f_7;
					while (func_63(iVar0, -1) == -1)
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			else if (iVar1 == 26)
			{
				if (MISC::IS_BIT_SET(Global_68493, 1))
				{
					iVar0 = Global_81155[27 /*34*/].f_7;
					while (func_63(iVar0, -1) == -1)
					{
						SYSTEM::WAIT(0);
					}
					iVar0 = Global_81155[28 /*34*/].f_7;
					while (func_63(iVar0, -1) == -1)
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			if (MISC::IS_BIT_SET(Global_68493, 1))
			{
				iLocal_97 = 4;
			}
			else
			{
				iLocal_97 = 5;
			}
			break;
		
		case 7:
			while (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&Local_99)) == 0)
			{
				SYSTEM::WAIT(0);
			}
			while (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&Local_99)) > 0)
			{
				SYSTEM::WAIT(0);
			}
			if (MISC::IS_BIT_SET(Global_68493, 1))
			{
				iLocal_97 = 4;
			}
			else
			{
				iLocal_97 = 5;
			}
			break;
		
		default:
			break;
	}
}

int func_63(int iParam0, int iParam1)//Position - 0x19DF
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = GlobalFunc_2634(iParam0);
	iVar1 = Global_68514.f_109[iParam0 /*4*/];
	iVar2 = Global_81155[iVar1 /*34*/].f_6;
	if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 4))
	{
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"));
	}
	SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iVar2);
	if (GlobalFunc_142())
	{
		return -1;
	}
	else if (Global_89962.f_1 == iParam0)
	{
		if (Global_89962 == 11)
		{
			func_7(iVar1);
			func_517(iParam0, iVar0, 0);
			return Global_68514.f_109[iParam0 /*4*/].f_2;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (iVar0 == -1 || !MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 5))
		{
			return -1;
		}
	}
	if (!GlobalFunc_42(GlobalFunc_8315()))
	{
		return -1;
	}
	if (iVar0 == -1)
	{
		iVar0 = func_516(iParam0);
		if (iVar0 == -1)
		{
			return -1;
		}
	}
	uVar3 = Global_81119[iVar0 /*5*/].f_3;
	if (func_509(iVar1))
	{
		return -1;
	}
	if (!MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 2))
	{
		if (!MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 1))
		{
			if (!MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 3))
			{
				if (GlobalFunc_2(0) || MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 19))
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 5;
				}
				if (iVar4 == 5)
				{
					if (Global_35461 != -1)
					{
						uVar3 = Global_35461;
						Global_35461 = -1;
						iVar5 = 1;
					}
					else
					{
						iVar5 = GlobalFunc_7733(&uVar3, iVar4, 0, 0, 0);
					}
				}
				else
				{
					iVar5 = GlobalFunc_7733(&uVar3, iVar4, 0, 0, 0);
				}
				Global_81119[iVar0 /*5*/].f_3 = uVar3;
				if (iVar5 == 2)
				{
					return -1;
				}
				else if (iVar5 == 0)
				{
					return Global_68514.f_109[iParam0 /*4*/].f_2;
				}
			}
			MISC::SET_BIT(&(Global_81119[iVar0 /*5*/].f_1), 1);
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/])
			{
				MISC::SET_BIT(&(Global_81119[iVar0 /*5*/].f_1), 2);
				MISC::SET_BIT(&(Global_81119[iVar0 /*5*/].f_1), 4);
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
			}
		}
		if (!Global_131420)
		{
			return -1;
		}
		if (iVar1 != 28)
		{
			if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 4))
			{
				if (!Global_54750 && (iVar1 != 27 || !Global_54755))
				{
					if (!MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 7))
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
						{
							GlobalFunc_5224();
							return -1;
						}
						else if (SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("mission_stat_watcher")))
						{
							SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher"), 1828);
							SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_stat_watcher"));
							MISC::SET_BIT(&(Global_81119[iVar0 /*5*/].f_1), 7);
						}
						else
						{
							return -1;
						}
					}
				}
				else if (iVar1 == 27)
				{
					MISC::SET_BIT(&(Global_81119[iVar0 /*5*/].f_1), 7);
				}
			}
		}
		if (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar2))
		{
			return -1;
		}
		Global_81119[iVar0 /*5*/].f_4 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iVar2, 17000);
		SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar2);
		MISC::SET_BIT(&(Global_81119[iVar0 /*5*/].f_1), 2);
		iVar6 = 0;
		if (MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 18))
		{
			iVar6 = 1;
		}
		func_286(iParam0, iVar0, iVar1, iParam1, iVar6);
		return -1;
	}
	bVar7 = MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 5);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_81119[iVar0 /*5*/].f_4))
	{
		if (bVar7)
		{
			if (!MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 1) && Global_89998 == 0)
			{
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	bVar8 = MISC::IS_BIT_SET(Global_81119[iVar0 /*5*/].f_1, 4);
	if (bVar8 && bVar7)
	{
		bVar7 = false;
	}
	if (!bVar8 && !bVar7)
	{
		bVar7 = true;
	}
	if (bVar8)
	{
		return func_98(iParam0, iVar0, iVar1, 0, 0);
	}
	return func_64(iParam0, iVar0, iVar1, 0);
}

int func_64(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1DBC
{
	if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 1) && Global_89998 == 0)
	{
		GlobalFunc_9191(0);
		GlobalFunc_748(0);
		GlobalFunc_3002(0);
		GlobalFunc_52(1, 1);
		func_9();
		Global_89752[0 /*65*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[0 /*65*/] };
		Global_89752[1 /*65*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[1 /*65*/] };
		Global_89752[2 /*65*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[2 /*65*/] };
		Global_81119[iParam1 /*5*/].f_1 = 0;
		func_67(iParam0);
		return -1;
	}
	func_7(iParam2);
	Global_89998 = 0;
	func_517(iParam0, iParam1, bParam3);
	func_65(0, iParam2);
	return Global_68514.f_109[iParam0 /*4*/].f_2;
}

void func_65(bool bParam0, int iParam1)//Position - 0x1E86
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam1 != -1)
	{
		if (GlobalFunc_2016(Global_81155[iParam1 /*34*/].f_11, 0))
		{
			iVar0 = joaat("sp0_missions_failed");
			if (bParam0)
			{
				iVar0 = joaat("sp0_missions_passed");
			}
			STATS::STAT_GET_INT(iVar0, &iVar1, -1);
			iVar1++;
			STATS::STAT_SET_INT(iVar0, iVar1, 1);
		}
		if (GlobalFunc_2016(Global_81155[iParam1 /*34*/].f_11, 1))
		{
			iVar2 = joaat("sp1_missions_failed");
			if (bParam0)
			{
				iVar2 = joaat("sp1_missions_passed");
			}
			STATS::STAT_GET_INT(iVar2, &iVar3, -1);
			iVar3++;
			STATS::STAT_SET_INT(iVar2, iVar3, 1);
		}
		if (GlobalFunc_2016(Global_81155[iParam1 /*34*/].f_11, 2))
		{
			iVar4 = joaat("sp2_missions_failed");
			if (bParam0)
			{
				iVar4 = joaat("sp2_missions_passed");
			}
			STATS::STAT_GET_INT(iVar4, &iVar5, -1);
			iVar5++;
			STATS::STAT_SET_INT(iVar4, iVar5, 1);
		}
	}
}


void func_67(int iParam0)//Position - 0x1F7E
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	char[] cVar9[8];
	
	if (Global_89962 != 12)
	{
		iVar6 = Global_68514.f_109[iParam0 /*4*/];
		Var0 = { Global_81155[iVar6 /*34*/] };
		if (MISC::IS_BIT_SET(Global_81155[iVar6 /*34*/].f_15, 1))
		{
			return;
		}
		if ((MISC::ARE_STRINGS_EQUAL(&Var0, "me_amanda1") || MISC::ARE_STRINGS_EQUAL(&Var0, "me_jimmy1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "me_tracey1"))
		{
			iVar7 = 4;
		}
		else if (MISC::ARE_STRINGS_EQUAL(&Var0, "carsteal4") || MISC::ARE_STRINGS_EQUAL(&Var0, "fbi3"))
		{
			iVar7 = 3;
		}
		else if (!MISC::IS_BIT_SET(Global_81155[iVar6 /*34*/].f_15, 2))
		{
			if (MISC::IS_BIT_SET(Global_81155[iVar6 /*34*/].f_15, 17))
			{
				iVar7 = 1;
			}
			else
			{
				iVar7 = 0;
			}
		}
		else
		{
			iVar7 = 2;
		}
		iVar8 = GlobalFunc_5110(iVar6);
		cVar9 = { Global_81155[iVar6 /*34*/].f_8 };
		if (iVar6 == 90)
		{
			switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7])
			{
				case 1:
					StringConCat(&cVar9, "A", 8);
					break;
				
				case 2:
					StringConCat(&cVar9, "B", 8);
					break;
				}
		}
		STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar9, iVar8, Global_89999, 0);
		func_95(&cVar9, iVar8, Global_89999, 1, 0);
		if (func_68(&Var0, iVar7, iVar6))
		{
			Global_89962.f_1 = iParam0;
		}
	}
}

int func_68(char* sParam0, int iParam1, int iParam2)//Position - 0x20C9
{
	int iVar0;
	struct<32> Var1;
	int iVar33;
	
	GlobalFunc_4909();
	GlobalFunc_141();
	Global_89962 = 0;
	StringCopy(&(Global_89962.f_3), sParam0, 32);
	Global_89962.f_11 = iParam1;
	MISC::PAUSE_DEATH_ARREST_RESTART(1);
	MISC::SET_FADE_OUT_AFTER_ARREST(0);
	MISC::SET_FADE_OUT_AFTER_DEATH(0);
	GlobalFunc_6685(1);
	GlobalFunc_7632(1);
	GlobalFunc_4944(0);
	GlobalFunc_137(1);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 9);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 6);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 20);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 21);
	MISC::CLEAR_BIT(&(Global_89962.f_20), 5);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0))
				{
					MISC::SET_BIT(&(Global_89962.f_20), 5);
				}
			}
		}
	}
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	GlobalFunc_136(0);
	GlobalFunc_12(1);
	Global_89962.f_2 = Global_89999;
	if (GlobalFunc_5737())
	{
		if (GlobalFunc_135())
		{
			if (Global_89999 >= GlobalFunc_7105())
			{
				if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 16))
				{
					if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iParam2 /*6*/].f_1 >= 2)
					{
						Global_84543 = 1;
					}
				}
			}
		}
		else if (Global_89962.f_11 == 6)
		{
			GlobalFunc_6675(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam2 /*6*/].f_4 >= 2)
				{
					Global_84543 = 1;
				}
			}
		}
		else
		{
			iVar33 = GlobalFunc_547(SCRIPT::GET_THIS_SCRIPT_NAME());
			if (iVar33 > -1)
			{
				if (Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar33] >= 2)
				{
					Global_84543 = 1;
				}
			}
		}
	}
	return 1;
}



























void func_95(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4140
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_87437))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(cParam0, &Global_87437, 0, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(cParam0, iParam1, iParam2, iParam3, iParam4, Global_84544);
	StringCopy(&Global_87437, "", 64);
}



var func_98(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x4294
{
	int iVar0;
	char[] cVar1[8];
	struct<2> Var3;
	int iVar5;
	int iVar6;
	
	func_278(iParam2);
	if (!bParam4)
	{
		iVar0 = GlobalFunc_5110(iParam2);
		cVar1 = { Global_81155[iParam2 /*34*/].f_8 };
		if (iParam2 == 90)
		{
			switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7])
			{
				case 1:
					StringConCat(&cVar1, "A", 8);
					break;
				
				case 2:
					StringConCat(&cVar1, "B", 8);
					break;
				}
		}
		STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar1, iVar0, Global_89999, 0);
		func_95(&cVar1, iVar0, Global_89999, 0, 0);
		Global_68509 = iParam2;
		Global_68510 = MISC::GET_GAME_TIMER();
		if (iParam2 == 28)
		{
			GlobalFunc_43(&Global_54765, Global_81155[iParam2 /*34*/].f_12);
		}
		else
		{
			Var3 = { GlobalFunc_125(iParam2) };
			GlobalFunc_43(&Var3, Global_81155[iParam2 /*34*/].f_12);
		}
		func_7(iParam2);
		func_269(iParam2, 0);
		if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 4))
		{
			GlobalFunc_45(0, 0);
			Global_17098.f_17 = 1;
			Global_17098.f_18 = MISC::GET_GAME_TIMER();
		}
		if (!GlobalFunc_2(0))
		{
			if (MISC::IS_ORBIS_VERSION())
			{
				if (iParam2 == 53)
				{
					func_267();
				}
				else if (iParam2 == 44)
				{
					func_266();
				}
				else if (iParam2 == 42)
				{
					func_265();
				}
				else
				{
					func_263(GlobalFunc_8315());
				}
			}
		}
	}
	func_65(1, iParam2);
	func_517(iParam0, iParam1, bParam3);
	GlobalFunc_8649(iParam2, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	Global_84545 = 0;
	GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), iParam2);
	GlobalFunc_9523(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), iParam2);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar5 = GlobalFunc_8315();
		if (GlobalFunc_42(iVar5))
		{
			func_219(PLAYER::PLAYER_PED_ID(), &(Global_89503[iVar5 /*74*/]), &(Global_89734[iVar5 /*3*/]), &(Global_89744[iVar5]), &(Global_89726[iVar5]), &(Global_2544853[iVar5]));
		}
	}
	func_217(iParam2);
	func_104();
	iVar6 = func_103(iParam2);
	if (iVar6 != 0)
	{
		if (!AUDIO::IS_MISSION_NEWS_STORY_UNLOCKED(iVar6))
		{
			AUDIO::UNLOCK_MISSION_NEWS_STORY(iVar6);
		}
	}
	if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 0) && !Global_54750)
	{
		GlobalFunc_4907();
	}
	if (!GlobalFunc_2(0))
	{
		if (iParam2 == 90)
		{
			func_99(0);
		}
		else if (iParam2 == 84 || iParam2 == 85)
		{
			func_99(4);
		}
	}
	Global_68514.f_7 = 1;
	Global_68514.f_6 = 1;
	GlobalFunc_507(iParam2, 0);
	return Global_68514.f_109[iParam0 /*4*/].f_1;
}

void func_99(int iParam0)//Position - 0x451D
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_FACEBOOK_IS_AVAILABLE())
		{
			switch (iParam0)
			{
				case 0:
					if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_290, 6))
					{
						iVar1 = Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[GlobalFunc_656(0)];
						iVar0 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_2[0];
						iVar0 = (iVar0 + Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[0 /*23*/].f_2[1]);
						switch (iVar1)
						{
							case 1:
								NETWORK::_FACEBOOK_SET_HEIST_COMPLETE("JH2A", iVar0, 0);
								break;
							
							case 2:
								NETWORK::_FACEBOOK_SET_HEIST_COMPLETE("JH2B", iVar0, 0);
								break;
						}
						GlobalFunc_2651("FB_J_HEIST");
						MISC::SET_BIT(&(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_290), 6);
					}
					break;
				
				case 4:
					if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_290, 7))
					{
						iVar1 = Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[GlobalFunc_656(4)];
						iVar0 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_2[0];
						iVar0 = (iVar0 + Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_2[1]);
						iVar0 = (iVar0 + Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[4 /*23*/].f_2[2]);
						switch (iVar1)
						{
							case 8:
								NETWORK::_FACEBOOK_SET_HEIST_COMPLETE("FH2A", iVar0, 0);
								break;
							
							case 9:
								NETWORK::_FACEBOOK_SET_HEIST_COMPLETE("FH2B", iVar0, 0);
								break;
						}
						GlobalFunc_2651("FB_BS_HEIST");
						MISC::SET_BIT(&(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_290), 7);
					}
					break;
				}
			}
	}
}




int func_103(int iParam0)//Position - 0x475C
{
	switch (iParam0)
	{
		case 53:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 3;
			break;
		
		case 17:
			return 4;
			break;
		
		case 19:
			return 5;
			break;
		
		case 43:
			return 6;
			break;
		
		case 44:
			return 7;
			break;
		
		case 90:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7] == 1)
			{
				return 8;
			}
			else
			{
				return 9;
			}
			break;
		
		case 63:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 64:
			return 13;
			break;
		
		case 20:
			return 14;
			break;
		
		case 30:
			return 15;
			break;
		
		case 31:
			return 16;
			break;
		
		case 41:
			if (!Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[43])
			{
				return 17;
			}
			else
			{
				return 18;
			}
			break;
		
		case 38:
			return 19;
			break;
		
		case 74:
			return 21;
			break;
		
		case 75:
			return 20;
			break;
		
		case 9:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[76])
			{
				return 23;
			}
			else
			{
				return 22;
			}
			break;
		
		case 59:
			return 24;
			break;
		
		case 45:
			return 25;
			break;
		
		case 10:
			return 26;
			break;
		
		case 14:
			return 27;
			break;
		
		case 93:
			return 28;
			break;
		
		case 16:
			return 29;
			break;
		
		case 39:
			return 30;
			break;
		
		case 46:
			return 31;
			break;
		
		case 60:
			return 32;
			break;
		
		case 22:
			return 33;
			break;
		
		case 69:
			return 34;
			break;
		
		case 70:
			return 35;
			break;
		
		case 48:
			return 36;
			break;
		
		case 61:
			return 37;
			break;
		
		case 49:
			return 38;
			break;
		
		case 84:
			return 39;
			break;
		
		case 85:
			return 40;
			break;
		
		case 27:
			return 41;
			break;
		
		case 3:
			return 56;
			break;
		
		case 4:
			return 57;
			break;
		
		case 5:
			return 58;
			break;
		
		case 6:
			return 59;
			break;
		
		case 7:
			return 60;
			break;
		
		case 58:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[80])
			{
				return 63;
			}
			break;
	}
	return 0;
}

void func_104()//Position - 0x4A2E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_87736[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = GlobalFunc_6674(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (GlobalFunc_10910(iVar1, 14, iVar2))
				{
					GlobalFunc_11298(iVar1, 14, iVar2);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

















































































































void func_217(int iParam0)//Position - 0x20FCC
{
	switch (iParam0)
	{
		case 1:
			GlobalFunc_2642(6, 140);
			GlobalFunc_2642(7, 140);
			break;
		
		case 19:
			GlobalFunc_2642(4, 140);
			break;
		
		case 43:
			GlobalFunc_2642(6, 140);
			GlobalFunc_2642(7, 140);
			break;
		
		case 63:
			GlobalFunc_2642(10, 140);
			break;
	}
}


void func_219(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x2103B
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	iVar0 = 0;
	iVar1 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
				*uParam4 = 2;
			}
			else
			{
				iVar2 = GlobalFunc_6674(iParam0);
				if (!ENTITY::IS_ENTITY_DEAD(Global_89730[iVar2]))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_89730[iVar2], -1))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
						Var6 = { ENTITY::GET_ENTITY_COORDS(Global_89730[iVar2], 1) };
						if (ENTITY::GET_ENTITY_MODEL(Global_89730[iVar2]) == joaat("luxor2"))
						{
							if (SYSTEM::VDIST(Var3, Var6) < 10f)
							{
								*uParam4 = 2;
								iVar1 = Global_89730[iVar2];
								iVar0 = 1;
							}
						}
					}
				}
			}
		}
	}
	func_220(iParam0, iVar1, uParam1, uParam2, uParam3, uParam4, uParam5, iVar0);
}

void func_220(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x2110B
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	int iVar10;
	
	uParam2->f_73 = 0;
	iVar0 = 145;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		if (iVar0 > 3)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			return;
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam1, "GetawayVehicleValid"))
		{
			if (DECORATOR::DECOR_GET_BOOL(iParam1, "GetawayVehicleValid"))
			{
				if ((Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[45] || Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[12]) || Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[34])
				{
					*uParam5 = 0;
					Global_89730[iVar0] = 0;
					return;
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0) || iParam7)
		{
			*uParam5 = 2;
			Global_89730[iVar0] = iParam1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			iParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
			*uParam5 = 2;
			Global_89730[iVar0] = iParam1;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 68)
			{
				if (iParam1 == Global_67138.f_139[iVar1])
				{
					*uParam5 = 0;
					Global_89730[iVar0] = 0;
					return;
				}
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_89730[iVar0]))
			{
				if (!GlobalFunc_5651(Global_89730[iVar0], iVar0, 0) || PED::IS_PED_IN_VEHICLE(iParam0, Global_89730[iVar0], 0))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
					Var5 = { ENTITY::GET_ENTITY_COORDS(Global_89730[iVar0], 1) };
					if (GlobalFunc_2468(iParam0, Global_89730[iVar0], 0))
					{
						if (SYSTEM::VDIST2(Var2, Var5) < 22500f)
						{
							*uParam3 = { Var5 };
							*uParam4 = ENTITY::GET_ENTITY_HEADING(Global_89730[iVar0]);
							*uParam5 = 1;
							Global_89730[iVar0] = iParam1;
							if (SYSTEM::VDIST2(Var2, Var5) < (1.5f * 1.5f))
							{
							}
						}
					}
				}
				else
				{
					*uParam5 = 0;
					Global_89730[iVar0] = 0;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam2 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar9))
		{
			uParam2->f_1 = ENTITY::GET_ENTITY_MODEL(iVar9);
		}
		uParam2->f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam1);
		uParam2->f_3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
		uParam2->f_4 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iParam1);
		if (uParam2->f_4 > -1)
		{
			uParam2->f_9 = 1;
			uParam2->f_5 = -1;
			uParam2->f_6 = -1;
		}
		else
		{
			uParam2->f_9 = 0;
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &(uParam2->f_5), &(uParam2->f_6));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_BOAT(*uParam2))
		{
			uParam2->f_10 = 1;
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam1, &(uParam2->f_7), &(uParam2->f_8));
		}
		else
		{
			uParam2->f_10 = 0;
			uParam2->f_7 = -1;
			uParam2->f_8 = -1;
		}
		StringCopy(&(uParam2->f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam1), 16);
		uParam2->f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1);
		uParam2->f_64 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1);
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &(uParam2->f_60), &(uParam2->f_61), &(uParam2->f_62));
		uParam2->f_63 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1);
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam1, &(uParam2->f_69), &(uParam2->f_70), &(uParam2->f_71));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 2))
		{
			MISC::SET_BIT(&(uParam2->f_68), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_68), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 3))
		{
			MISC::SET_BIT(&(uParam2->f_68), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_68), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 0))
		{
			MISC::SET_BIT(&(uParam2->f_68), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_68), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 1))
		{
			MISC::SET_BIT(&(uParam2->f_68), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_68), 31);
		}
		uParam2->f_65 = VEHICLE::GET_VEHICLE_LIVERY(iParam1);
		uParam2->f_66 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam1);
		iVar8 = 0;
		while (iVar8 < 12)
		{
			uParam2->f_11[iVar8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam1, iVar8 + 1);
			iVar8++;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam1, 0))
		{
			iVar10 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam1);
			if (iVar10 == 0 || iVar10 == 5)
			{
				uParam2->f_24 = 1;
			}
			else
			{
				uParam2->f_24 = 0;
			}
		}
		else
		{
			uParam2->f_24 = 0;
		}
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			uParam2->f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		}
		GlobalFunc_102(&iParam1, &(uParam2->f_31), &(uParam2->f_57));
		uParam2->f_72 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam1);
		uParam2->f_73 = GlobalFunc_86(iParam1);
		*uParam6 = -1;
		switch (iVar0)
		{
			case 0:
				if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[0 /*54*/].f_42 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 12;
				}
				break;
			
			case 1:
				if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[1 /*54*/].f_42 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 13;
				}
				break;
			
			case 2:
				if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[2 /*54*/].f_42 == ENTITY::GET_ENTITY_MODEL(iParam1))
				{
					*uParam6 = 14;
				}
				break;
		}
	}
	else
	{
		*uParam5 = 0;
		*uParam3 = { 0f, 0f, 0f };
		*uParam4 = 0f;
		*uParam2 = 0;
		uParam2->f_1 = 0;
		uParam2->f_2 = 0f;
		uParam2->f_3 = 0;
		uParam2->f_4 = 0;
		uParam2->f_5 = 0;
		uParam2->f_6 = 0;
		uParam2->f_7 = 0;
		uParam2->f_8 = 0;
		uParam2->f_9 = 0;
		uParam2->f_10 = 0;
		iVar8 = 0;
		while (iVar8 < uParam2->f_11)
		{
			uParam2->f_11[iVar8] = 0;
			iVar8++;
		}
		uParam2->f_24 = 0;
		uParam2->f_25 = 0;
		*uParam5 = 0;
		*uParam6 = -1;
		uParam2->f_72 = 0f;
	}
}











































void func_263(int iParam0)//Position - 0x27B90
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(61);
	Global_2408820[iVar0 /*83*/] = 61;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Global_2408820[iVar0 /*83*/].f_1), "AF_MICHAEL", 64);
			break;
		
		case 1:
			StringCopy(&(Global_2408820[iVar0 /*83*/].f_1), "AF_FRANKLIN", 64);
			break;
		
		case 2:
			StringCopy(&(Global_2408820[iVar0 /*83*/].f_1), "AF_TREVOR", 64);
			break;
		
		default:
			break;
	}
}


void func_265()//Position - 0x27C5E
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(59);
	Global_2408820[iVar0 /*83*/] = 59;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_266()//Position - 0x27C8A
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(58);
	Global_2408820[iVar0 /*83*/] = 58;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_267()//Position - 0x27CB6
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(57);
	Global_2408820[iVar0 /*83*/] = 57;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}


void func_269(int iParam0, bool bParam1)//Position - 0x27D2C
{
	switch (iParam0)
	{
		case 53:
			GlobalFunc_7622(5, 1);
			break;
		
		case 0:
			GlobalFunc_7622(1, 1);
			break;
		
		case 1:
			GlobalFunc_7622(20, bParam1);
			break;
		
		case 2:
			GlobalFunc_7622(0, bParam1);
			break;
		
		case 17:
			GlobalFunc_7622(12, bParam1);
			break;
		
		case 18:
			GlobalFunc_7622(26, bParam1);
			break;
		
		case 19:
			GlobalFunc_7622(3, bParam1);
			break;
		
		case 43:
			GlobalFunc_7622(13, bParam1);
			GlobalFunc_7622(23, bParam1);
			break;
		
		case 62:
			GlobalFunc_7622(2, bParam1);
			GlobalFunc_7622(27, bParam1);
			break;
		
		case 63:
			GlobalFunc_7622(18, bParam1);
			break;
		
		case 12:
			GlobalFunc_7622(25, bParam1);
			break;
		
		case 64:
			GlobalFunc_7622(11, bParam1);
			break;
		
		case 20:
			GlobalFunc_7622(14, bParam1);
			GlobalFunc_7622(10, bParam1);
			break;
		
		case 29:
			GlobalFunc_7622(7, bParam1);
			break;
		
		case 30:
			GlobalFunc_7622(22, bParam1);
			break;
		
		case 31:
			GlobalFunc_7622(8, bParam1);
			break;
		
		case 59:
			GlobalFunc_7622(21, bParam1);
			break;
		
		case 45:
			GlobalFunc_7622(19, bParam1);
			break;
		
		case 42:
			GlobalFunc_7622(24, bParam1);
			break;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			GlobalFunc_7622(9, bParam1);
			break;
		
		case 28:
			GlobalFunc_7622(9, 1);
			break;
	}
}









void func_278(int iParam0)//Position - 0x28424
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_15, 14))
	{
		iVar0 = GlobalFunc_3045(iParam0);
		if (iVar0 != -1)
		{
			iVar1 = Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[GlobalFunc_656(iVar0)];
			iVar2 = 0;
			while (iVar2 < Global_86396[iVar1 /*19*/])
			{
				iVar3 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar1 /*6*/][iVar2];
				if (!MISC::IS_BIT_SET(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Dead_Bitset, iVar3))
				{
					Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iVar3 /*3*/].f_1 = Global_86379[iVar2 /*3*/].f_1;
					Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iVar3 /*3*/].f_2 = Global_86379[iVar2 /*3*/].f_2;
					func_279(iVar3);
				}
				iVar2++;
			}
		}
	}
	if (Global_86395)
	{
		Global_86395 = 0;
	}
}

void func_279(int iParam0)//Position - 0x284E4
{
	float fVar0;
	int iVar1;
	
	if (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iParam0 /*3*/] == 2)
	{
		return;
	}
	fVar0 = 0f;
	switch (Global_86242[iParam0 /*5*/])
	{
		case 1:
			iVar1 = 0;
			while (iVar1 < 4)
			{
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(GlobalFunc_5131(iParam0, iVar1)) / SYSTEM::TO_FLOAT(GlobalFunc_655(iVar1))) * 100f));
				iVar1++;
			}
			fVar0 = (fVar0 / 4f);
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < 3)
			{
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(GlobalFunc_5131(iParam0, iVar1)) / SYSTEM::TO_FLOAT(GlobalFunc_654(iVar1))) * 100f));
				iVar1++;
			}
			fVar0 = (fVar0 / 3f);
			break;
		
		case 3:
			iVar1 = 0;
			while (iVar1 < 3)
			{
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(GlobalFunc_5131(iParam0, iVar1)) / SYSTEM::TO_FLOAT(GlobalFunc_654(iVar1))) * 100f));
				iVar1++;
			}
			fVar0 = (fVar0 / 3f);
			break;
	}
	if (fVar0 > 66.6f)
	{
		if (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iParam0 /*3*/] < 2)
		{
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iParam0 /*3*/] = 2;
		}
	}
	else if (fVar0 > 33.3f)
	{
		if (Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iParam0 /*3*/] < 1)
		{
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iParam0 /*3*/] = 1;
		}
	}
}







void func_286(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x287C9
{
	int iVar0;
	int iVar1;
	var uVar2;
	char* sVar3;
	struct<2> Var5;
	
	if (iParam3 != -1)
	{
		Global_68514.f_9 = iParam3;
	}
	if (Global_87287)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	Global_86587.f_8 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 21) && !MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 15))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			PLAYER::START_FIRING_AMNESTY(5000);
			if (PED::IS_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
			}
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
		}
		if (Global_68250 == iParam2)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
		}
		else
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	SCRIPT::REQUEST_SCRIPT("buddyDeathResponse");
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 0);
		if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 21) && !MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 15))
		{
			GlobalFunc_9080();
		}
	}
	func_39(GlobalFunc_8315());
	if (!GlobalFunc_199())
	{
		GlobalFunc_11324(PLAYER::PLAYER_PED_ID(), 1);
	}
	func_9();
	iVar0 = GlobalFunc_8315();
	if (GlobalFunc_42(iVar0))
	{
		func_219(PLAYER::PLAYER_PED_ID(), &(Global_89503[iVar0 /*74*/]), &(Global_89734[iVar0 /*3*/]), &(Global_89744[iVar0]), &(Global_89726[iVar0]), &(Global_2544853[iVar0]));
	}
	GlobalFunc_872();
	Global_2939[0] = 0;
	Global_2939[2] = 0;
	Global_2939[1] = 0;
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.OVERRIDE_PED = func_356(iParam2);
	HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	if (iParam4 && !MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 15))
	{
		GlobalFunc_6685(0);
	}
	Global_68490 = 0;
	func_351();
	func_350();
	if (!GlobalFunc_2(0))
	{
		if (Global_68250 == iParam2)
		{
			if (!MISC::ARE_STRINGS_EQUAL("NONE", &Global_68251))
			{
				CUTSCENE::_0x8D9DF6ECA8768583(Global_81119[iParam1 /*5*/].f_4);
			}
			Global_68250 = -1;
			Global_68249 = 0;
			Global_68263 = 0;
			Global_68257[0] = -1;
			Global_68257[1] = -1;
			Global_68257[2] = -1;
			iVar1 = 0;
			while (iVar1 < Global_68307)
			{
				Global_68308[iVar1 /*4*/] = -1;
				Global_68308[iVar1 /*4*/].f_1 = 0;
				Global_68308[iVar1 /*4*/].f_2 = 0;
				Global_68308[iVar1 /*4*/].f_3 = 0;
				iVar1++;
			}
			Global_68307 = 0;
			iVar1 = 0;
			while (iVar1 < Global_68429)
			{
				Global_68430[iVar1 /*3*/] = -1;
				Global_68430[iVar1 /*3*/].f_1 = 0;
				Global_68430[iVar1 /*3*/].f_2 = -99;
				iVar1++;
			}
			Global_68429 = 0;
			iVar1 = 0;
			while (iVar1 < Global_68443)
			{
				Global_68444[iVar1 /*2*/] = -1;
				Global_68444[iVar1 /*2*/].f_1 = 0;
				iVar1++;
			}
			Global_68443 = 0;
			iVar1 = 0;
			while (iVar1 < Global_68455)
			{
				Global_68456[iVar1 /*4*/] = -1;
				Global_68456[iVar1 /*4*/].f_1 = 0;
				Global_68456[iVar1 /*4*/].f_2 = 0;
				Global_68456[iVar1 /*4*/].f_3 = 0;
				iVar1++;
			}
			Global_68455 = 0;
			GlobalFunc_3047();
			iVar1 = 0;
			while (iVar1 < 3)
			{
				Global_68265[iVar1] = 0;
				iVar1++;
			}
			Global_68248 = 0;
			Global_68264 = 0;
			if (Global_68261 != -1)
			{
				func_347(&Global_68261);
			}
		}
		else
		{
			CUTSCENE::REMOVE_CUTSCENE();
			Global_68262 = 1;
		}
	}
	func_346(iParam2);
	uVar2 = GlobalFunc_5110(iParam2);
	sVar3 = { Global_81155[iParam2 /*34*/].f_8 };
	if (iParam2 == 90)
	{
		switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7])
		{
			case 1:
				StringConCat(&sVar3, "A", 8);
				break;
			
			case 2:
				StringConCat(&sVar3, "B", 8);
				break;
			}
	}
	GlobalFunc_5225(&sVar3, uVar2, 0);
	Var5 = { GlobalFunc_125(iParam2) };
	HUD::SET_MISSION_NAME(1, &Var5);
	if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 3))
	{
		if (!GlobalFunc_199())
		{
			func_344(iParam2);
		}
	}
	if (!MISC::IS_BIT_SET(Global_81155[iParam2 /*34*/].f_15, 1) && !MISC::IS_BIT_SET(Global_81119[iParam1 /*5*/].f_1, 3))
	{
		func_302(iParam0);
	}
	func_288(iParam2);
	func_287(iParam2);
	CAM::STOP_GAMEPLAY_HINT(0);
	Global_68507 = iParam2;
}

void func_287(int iParam0)//Position - 0x28C01
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!Global_86395)
	{
		iVar0 = GlobalFunc_3045(iParam0);
		iVar1 = GlobalFunc_656(iVar0);
		if (iParam0 == 93)
		{
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[9] != 5)
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[9] = 5;
			}
		}
		if (MISC::IS_BIT_SET(Global_81155[iParam0 /*34*/].f_15, 14))
		{
			if (iVar0 != -1)
			{
				iVar2 = Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[iVar1];
				iVar3 = 0;
				while (iVar3 < Global_86396[iVar2 /*19*/])
				{
					iVar4 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar2 /*6*/][iVar3];
					Global_86379[iVar3 /*3*/] = 0;
					Global_86379[iVar3 /*3*/].f_1 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iVar4 /*3*/].f_1;
					Global_86379[iVar3 /*3*/].f_2 = Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iVar4 /*3*/].f_2;
					iVar3++;
				}
				Global_86395 = 1;
			}
		}
	}
}

void func_288(int iParam0)//Position - 0x28CE1
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (iParam0 == 26)
	{
		Global_54771 = 1;
	}
	iVar1 = iParam0;
	if (iVar1 == 28)
	{
		return;
	}
	if (iVar1 == 27)
	{
		iVar1 = 26;
		if (Global_54743)
		{
			return;
		}
		bVar0 = true;
	}
	if (Global_3)
	{
		GlobalFunc_6836();
		return;
	}
	MemCopy(&Global_54765, {GlobalFunc_125(iVar1)}, 4);
	Global_54753 = 0;
	Global_54752 = 0;
	if (MISC::IS_BIT_SET(Global_81155[iVar1 /*34*/].f_15, 4))
	{
		Global_54752 = 1;
	}
	switch (iVar1)
	{
		case 53:
			Global_54743 = 1;
			Global_54752 = 1;
			break;
		
		case 24:
		case 25:
		case 26:
		case 27:
			Global_54743 = 1;
			Global_54752 = 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			Global_54743 = 1;
			Global_54752 = 1;
			break;
		
		case 50:
		case 51:
		case 52:
			Global_54740 = 1;
			Global_54743 = 1;
			Global_54746 = 1;
			break;
		
		case 32:
		case 23:
		case 28:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 77:
			Global_54752 = 1;
			Global_54751 = 1;
			GlobalFunc_6836();
			GlobalFunc_5224();
			return;
			break;
		
		case 90:
		case 74:
		case 75:
		case 93:
		case 69:
		case 70:
		case 84:
		case 85:
			Global_54754 = GlobalFunc_3045(iVar1);
			Global_54753 = 1;
			Global_86587.f_3 = 0;
			break;
	}
	iVar2 = Global_66995;
	Global_66995 = 0;
	iVar3 = Global_66996;
	Global_66996 = iVar1;
	if (!Global_54740)
	{
		if ((Global_66996 != iVar3 || Global_66845 == 0) || iVar2 != Global_66995)
		{
			Global_24693 = 0;
			GlobalFunc_6836();
			func_290(iVar1);
		}
		else
		{
			Global_54743 = 1;
		}
	}
	if (bVar0)
	{
		Global_54747 = 1;
	}
	Global_54778 = MISC::GET_GAME_TIMER();
	Global_54751 = 0;
	GlobalFunc_854();
	Global_54750 = 0;
}


void func_290(int iParam0)//Position - 0x28F90
{
	switch (iParam0)
	{
		case 0:
			GlobalFunc_5222(0);
			GlobalFunc_5222(1);
			GlobalFunc_5222(2);
			GlobalFunc_5222(3);
			GlobalFunc_5222(4);
			GlobalFunc_5222(5);
			GlobalFunc_5222(6);
			GlobalFunc_5222(7);
			GlobalFunc_5222(8);
			return;
		
		case 1:
			GlobalFunc_5222(9);
			GlobalFunc_5222(10);
			GlobalFunc_5222(11);
			GlobalFunc_5222(12);
			GlobalFunc_5222(13);
			GlobalFunc_5222(14);
			GlobalFunc_5222(15);
			GlobalFunc_5222(16);
			GlobalFunc_5222(17);
			GlobalFunc_5222(18);
			GlobalFunc_5222(19);
			GlobalFunc_5222(20);
			return;
		
		case 2:
			GlobalFunc_5222(21);
			GlobalFunc_5222(22);
			GlobalFunc_5222(23);
			GlobalFunc_5222(24);
			GlobalFunc_5222(25);
			GlobalFunc_5222(26);
			GlobalFunc_5222(27);
			GlobalFunc_5222(28);
			GlobalFunc_5222(29);
			return;
		
		case 3:
			GlobalFunc_5222(30);
			GlobalFunc_5222(31);
			GlobalFunc_5222(32);
			GlobalFunc_5222(33);
			GlobalFunc_5222(34);
			GlobalFunc_5222(35);
			GlobalFunc_5222(36);
			GlobalFunc_5222(37);
			GlobalFunc_5222(38);
			GlobalFunc_5222(39);
			GlobalFunc_5222(40);
			GlobalFunc_5222(41);
			GlobalFunc_5222(42);
			return;
		
		case 4:
			GlobalFunc_5222(43);
			GlobalFunc_5222(44);
			GlobalFunc_5222(45);
			GlobalFunc_5222(46);
			GlobalFunc_5222(47);
			GlobalFunc_5222(48);
			GlobalFunc_5222(49);
			GlobalFunc_5222(50);
			GlobalFunc_5222(51);
			GlobalFunc_5222(52);
			GlobalFunc_5222(53);
			GlobalFunc_5222(54);
			GlobalFunc_5222(55);
			GlobalFunc_5222(56);
			return;
		
		case 5:
			GlobalFunc_5222(57);
			GlobalFunc_5222(58);
			GlobalFunc_5222(59);
			GlobalFunc_5222(60);
			GlobalFunc_5222(61);
			GlobalFunc_5222(62);
			GlobalFunc_5222(63);
			GlobalFunc_5222(64);
			GlobalFunc_5222(65);
			GlobalFunc_5222(66);
			GlobalFunc_5222(67);
			GlobalFunc_5222(68);
			GlobalFunc_5222(69);
			GlobalFunc_5222(70);
			return;
		
		case 6:
			GlobalFunc_5222(71);
			GlobalFunc_5222(72);
			GlobalFunc_5222(73);
			GlobalFunc_5222(74);
			GlobalFunc_5222(75);
			GlobalFunc_5222(76);
			GlobalFunc_5222(77);
			GlobalFunc_5222(78);
			GlobalFunc_5222(79);
			GlobalFunc_5222(80);
			GlobalFunc_5222(81);
			GlobalFunc_5222(82);
			GlobalFunc_5222(83);
			GlobalFunc_5222(84);
			GlobalFunc_5222(85);
			return;
		
		case 7:
			GlobalFunc_5222(86);
			GlobalFunc_5222(87);
			GlobalFunc_5222(88);
			GlobalFunc_5222(89);
			GlobalFunc_5222(90);
			GlobalFunc_5222(91);
			GlobalFunc_5222(92);
			GlobalFunc_5222(93);
			GlobalFunc_5222(94);
			GlobalFunc_5222(95);
			GlobalFunc_5222(96);
			GlobalFunc_5222(97);
			GlobalFunc_5222(98);
			GlobalFunc_5222(99);
			GlobalFunc_5222(100);
			GlobalFunc_5222(101);
			return;
		
		case 9:
			GlobalFunc_5222(102);
			GlobalFunc_5222(103);
			GlobalFunc_5222(104);
			GlobalFunc_5222(105);
			GlobalFunc_5222(106);
			GlobalFunc_5222(107);
			GlobalFunc_5222(108);
			GlobalFunc_5222(109);
			GlobalFunc_5222(110);
			return;
		
		case 8:
			GlobalFunc_5222(111);
			GlobalFunc_5222(112);
			GlobalFunc_5222(113);
			GlobalFunc_5222(114);
			GlobalFunc_5222(115);
			GlobalFunc_5222(116);
			GlobalFunc_5222(117);
			GlobalFunc_5222(118);
			GlobalFunc_5222(119);
			return;
		
		case 10:
			GlobalFunc_5222(120);
			GlobalFunc_5222(121);
			GlobalFunc_5222(122);
			GlobalFunc_5222(123);
			GlobalFunc_5222(124);
			GlobalFunc_5222(125);
			GlobalFunc_5222(126);
			GlobalFunc_5222(127);
			GlobalFunc_5222(128);
			return;
		
		case 11:
			GlobalFunc_5222(129);
			GlobalFunc_5222(130);
			GlobalFunc_5222(131);
			GlobalFunc_5222(132);
			GlobalFunc_5222(133);
			GlobalFunc_5222(134);
			GlobalFunc_5222(135);
			return;
		
		case 12:
			GlobalFunc_5222(136);
			GlobalFunc_5222(137);
			GlobalFunc_5222(138);
			GlobalFunc_5222(139);
			GlobalFunc_5222(140);
			GlobalFunc_5222(141);
			GlobalFunc_5222(142);
			GlobalFunc_5222(143);
			GlobalFunc_5222(144);
			GlobalFunc_5222(145);
			GlobalFunc_5222(146);
			GlobalFunc_5222(147);
			return;
		
		case 13:
			GlobalFunc_5222(148);
			GlobalFunc_5222(149);
			GlobalFunc_5222(150);
			GlobalFunc_5222(151);
			GlobalFunc_5222(152);
			GlobalFunc_5222(153);
			GlobalFunc_5222(154);
			GlobalFunc_5222(155);
			GlobalFunc_5222(156);
			GlobalFunc_5222(157);
			GlobalFunc_5222(158);
			GlobalFunc_5222(159);
			GlobalFunc_5222(160);
			return;
		
		case 14:
			GlobalFunc_5222(161);
			GlobalFunc_5222(162);
			GlobalFunc_5222(163);
			GlobalFunc_5222(164);
			GlobalFunc_5222(165);
			GlobalFunc_5222(166);
			GlobalFunc_5222(167);
			GlobalFunc_5222(168);
			GlobalFunc_5222(169);
			GlobalFunc_5222(170);
			GlobalFunc_5222(171);
			return;
		
		case 15:
			GlobalFunc_5222(172);
			GlobalFunc_5222(173);
			GlobalFunc_5222(174);
			GlobalFunc_5222(175);
			GlobalFunc_5222(176);
			GlobalFunc_5222(177);
			GlobalFunc_5222(178);
			GlobalFunc_5222(179);
			GlobalFunc_5222(180);
			GlobalFunc_5222(181);
			GlobalFunc_5222(182);
			GlobalFunc_5222(183);
			GlobalFunc_5222(184);
			return;
		
		case 16:
			GlobalFunc_5222(185);
			GlobalFunc_5222(186);
			GlobalFunc_5222(187);
			GlobalFunc_5222(188);
			GlobalFunc_5222(189);
			GlobalFunc_5222(190);
			GlobalFunc_5222(191);
			GlobalFunc_5222(192);
			GlobalFunc_5222(193);
			GlobalFunc_5222(194);
			GlobalFunc_5222(195);
			return;
		
		case 17:
			GlobalFunc_5222(196);
			GlobalFunc_5222(197);
			GlobalFunc_5222(198);
			GlobalFunc_5222(199);
			GlobalFunc_5222(200);
			GlobalFunc_5222(201);
			GlobalFunc_5222(202);
			GlobalFunc_5222(203);
			GlobalFunc_5222(204);
			return;
		
		case 18:
			GlobalFunc_5222(205);
			GlobalFunc_5222(206);
			GlobalFunc_5222(207);
			GlobalFunc_5222(208);
			GlobalFunc_5222(209);
			GlobalFunc_5222(210);
			GlobalFunc_5222(211);
			GlobalFunc_5222(212);
			GlobalFunc_5222(213);
			GlobalFunc_5222(214);
			GlobalFunc_5222(215);
			GlobalFunc_5222(216);
			return;
		
		case 19:
			GlobalFunc_5222(217);
			GlobalFunc_5222(218);
			GlobalFunc_5222(219);
			GlobalFunc_5222(220);
			GlobalFunc_5222(221);
			GlobalFunc_5222(222);
			GlobalFunc_5222(223);
			GlobalFunc_5222(224);
			GlobalFunc_5222(225);
			GlobalFunc_5222(226);
			GlobalFunc_5222(227);
			GlobalFunc_5222(228);
			return;
		
		case 20:
			GlobalFunc_5222(229);
			GlobalFunc_5222(230);
			GlobalFunc_5222(231);
			GlobalFunc_5222(232);
			GlobalFunc_5222(233);
			GlobalFunc_5222(234);
			GlobalFunc_5222(235);
			GlobalFunc_5222(236);
			GlobalFunc_5222(237);
			GlobalFunc_5222(238);
			return;
		
		case 21:
			GlobalFunc_5222(239);
			GlobalFunc_5222(240);
			GlobalFunc_5222(241);
			GlobalFunc_5222(242);
			GlobalFunc_5222(243);
			GlobalFunc_5222(244);
			GlobalFunc_5222(245);
			GlobalFunc_5222(246);
			GlobalFunc_5222(247);
			GlobalFunc_5222(248);
			return;
		
		case 22:
			GlobalFunc_5222(249);
			GlobalFunc_5222(250);
			GlobalFunc_5222(251);
			GlobalFunc_5222(252);
			GlobalFunc_5222(253);
			GlobalFunc_5222(254);
			GlobalFunc_5222(255);
			GlobalFunc_5222(256);
			return;
		
		case 26:
			GlobalFunc_5222(257);
			GlobalFunc_5222(258);
			GlobalFunc_5222(259);
			GlobalFunc_5222(260);
			GlobalFunc_5222(261);
			GlobalFunc_5222(262);
			GlobalFunc_5222(263);
			GlobalFunc_5222(264);
			GlobalFunc_5222(265);
			GlobalFunc_5222(266);
			GlobalFunc_5222(267);
			GlobalFunc_5222(268);
			GlobalFunc_5222(269);
			GlobalFunc_5222(270);
			GlobalFunc_5222(271);
			GlobalFunc_5222(272);
			return;
		
		case 29:
			GlobalFunc_5222(273);
			GlobalFunc_5222(274);
			GlobalFunc_5222(275);
			GlobalFunc_5222(276);
			GlobalFunc_5222(277);
			GlobalFunc_5222(278);
			GlobalFunc_5222(279);
			GlobalFunc_5222(280);
			GlobalFunc_5222(281);
			GlobalFunc_5222(282);
			return;
		
		case 30:
			GlobalFunc_5222(283);
			GlobalFunc_5222(284);
			GlobalFunc_5222(285);
			GlobalFunc_5222(286);
			GlobalFunc_5222(287);
			GlobalFunc_5222(288);
			GlobalFunc_5222(289);
			GlobalFunc_5222(290);
			GlobalFunc_5222(291);
			GlobalFunc_5222(292);
			GlobalFunc_5222(293);
			return;
		
		case 31:
			GlobalFunc_5222(294);
			GlobalFunc_5222(295);
			GlobalFunc_5222(296);
			GlobalFunc_5222(297);
			GlobalFunc_5222(298);
			GlobalFunc_5222(299);
			GlobalFunc_5222(300);
			GlobalFunc_5222(301);
			GlobalFunc_5222(302);
			GlobalFunc_5222(303);
			GlobalFunc_5222(304);
			GlobalFunc_5222(305);
			return;
		
		case 38:
			GlobalFunc_5222(306);
			GlobalFunc_5222(307);
			GlobalFunc_5222(308);
			GlobalFunc_5222(309);
			GlobalFunc_5222(310);
			GlobalFunc_5222(311);
			GlobalFunc_5222(312);
			GlobalFunc_5222(313);
			GlobalFunc_5222(314);
			GlobalFunc_5222(315);
			GlobalFunc_5222(316);
			return;
		
		case 33:
			GlobalFunc_5222(317);
			GlobalFunc_5222(318);
			GlobalFunc_5222(319);
			GlobalFunc_5222(320);
			GlobalFunc_5222(321);
			return;
		
		case 34:
			GlobalFunc_5222(322);
			GlobalFunc_5222(323);
			GlobalFunc_5222(324);
			GlobalFunc_5222(325);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 39:
			GlobalFunc_5222(326);
			GlobalFunc_5222(327);
			GlobalFunc_5222(328);
			GlobalFunc_5222(329);
			GlobalFunc_5222(330);
			GlobalFunc_5222(331);
			GlobalFunc_5222(332);
			GlobalFunc_5222(333);
			GlobalFunc_5222(334);
			GlobalFunc_5222(335);
			GlobalFunc_5222(336);
			GlobalFunc_5222(337);
			return;
		
		case 40:
			GlobalFunc_5222(338);
			GlobalFunc_5222(339);
			GlobalFunc_5222(340);
			GlobalFunc_5222(341);
			GlobalFunc_5222(342);
			GlobalFunc_5222(343);
			GlobalFunc_5222(344);
			GlobalFunc_5222(345);
			return;
		
		case 41:
			GlobalFunc_5222(346);
			GlobalFunc_5222(347);
			GlobalFunc_5222(348);
			GlobalFunc_5222(349);
			GlobalFunc_5222(350);
			GlobalFunc_5222(351);
			GlobalFunc_5222(352);
			GlobalFunc_5222(353);
			GlobalFunc_5222(354);
			GlobalFunc_5222(355);
			GlobalFunc_5222(356);
			GlobalFunc_5222(357);
			GlobalFunc_5222(358);
			GlobalFunc_5222(359);
			return;
		
		case 42:
			GlobalFunc_5222(360);
			GlobalFunc_5222(361);
			GlobalFunc_5222(362);
			GlobalFunc_5222(363);
			GlobalFunc_5222(364);
			GlobalFunc_5222(365);
			GlobalFunc_5222(366);
			GlobalFunc_5222(367);
			GlobalFunc_5222(368);
			GlobalFunc_5222(369);
			GlobalFunc_5222(370);
			GlobalFunc_5222(371);
			return;
		
		case 43:
			GlobalFunc_5222(372);
			GlobalFunc_5222(373);
			GlobalFunc_5222(374);
			GlobalFunc_5222(375);
			GlobalFunc_5222(376);
			GlobalFunc_5222(377);
			GlobalFunc_5222(378);
			GlobalFunc_5222(379);
			GlobalFunc_5222(380);
			GlobalFunc_5222(381);
			GlobalFunc_5222(382);
			GlobalFunc_5222(383);
			return;
		
		case 44:
			GlobalFunc_5222(384);
			GlobalFunc_5222(385);
			GlobalFunc_5222(386);
			GlobalFunc_5222(387);
			GlobalFunc_5222(388);
			GlobalFunc_5222(389);
			GlobalFunc_5222(390);
			GlobalFunc_5222(391);
			GlobalFunc_5222(392);
			return;
		
		case 45:
			GlobalFunc_5222(393);
			GlobalFunc_5222(394);
			GlobalFunc_5222(395);
			GlobalFunc_5222(396);
			GlobalFunc_5222(397);
			GlobalFunc_5222(398);
			GlobalFunc_5222(399);
			return;
		
		case 46:
			GlobalFunc_5222(400);
			GlobalFunc_5222(401);
			GlobalFunc_5222(402);
			GlobalFunc_5222(403);
			GlobalFunc_5222(404);
			GlobalFunc_5222(405);
			GlobalFunc_5222(406);
			GlobalFunc_5222(407);
			GlobalFunc_5222(408);
			GlobalFunc_5222(409);
			GlobalFunc_5222(410);
			GlobalFunc_5222(411);
			GlobalFunc_5222(412);
			return;
		
		case 47:
			GlobalFunc_5222(413);
			GlobalFunc_5222(414);
			GlobalFunc_5222(415);
			GlobalFunc_5222(416);
			GlobalFunc_5222(417);
			GlobalFunc_5222(418);
			GlobalFunc_5222(419);
			GlobalFunc_5222(420);
			GlobalFunc_5222(421);
			GlobalFunc_5222(422);
			GlobalFunc_5222(423);
			GlobalFunc_5222(424);
			GlobalFunc_5222(425);
			GlobalFunc_5222(426);
			GlobalFunc_5222(427);
			GlobalFunc_5222(428);
			return;
		
		case 48:
			GlobalFunc_5222(429);
			GlobalFunc_5222(430);
			GlobalFunc_5222(431);
			GlobalFunc_5222(432);
			GlobalFunc_5222(433);
			GlobalFunc_5222(434);
			GlobalFunc_5222(435);
			GlobalFunc_5222(436);
			GlobalFunc_5222(437);
			GlobalFunc_5222(438);
			GlobalFunc_5222(439);
			GlobalFunc_5222(440);
			return;
		
		case 49:
			GlobalFunc_5222(441);
			GlobalFunc_5222(442);
			GlobalFunc_5222(443);
			GlobalFunc_5222(444);
			GlobalFunc_5222(445);
			GlobalFunc_5222(446);
			GlobalFunc_5222(447);
			GlobalFunc_5222(448);
			GlobalFunc_5222(449);
			GlobalFunc_5222(450);
			GlobalFunc_5222(451);
			GlobalFunc_5222(452);
			GlobalFunc_5222(453);
			return;
		
		case 53:
			GlobalFunc_5222(454);
			GlobalFunc_5222(455);
			GlobalFunc_5222(456);
			GlobalFunc_5222(457);
			GlobalFunc_5222(458);
			GlobalFunc_5222(459);
			GlobalFunc_5222(460);
			GlobalFunc_5222(461);
			GlobalFunc_5222(462);
			GlobalFunc_5222(463);
			GlobalFunc_5222(464);
			GlobalFunc_5222(465);
			return;
		
		case 60:
			GlobalFunc_5222(466);
			GlobalFunc_5222(467);
			GlobalFunc_5222(468);
			GlobalFunc_5222(469);
			GlobalFunc_5222(470);
			GlobalFunc_5222(471);
			GlobalFunc_5222(472);
			GlobalFunc_5222(473);
			return;
		
		case 61:
			GlobalFunc_5222(474);
			GlobalFunc_5222(475);
			GlobalFunc_5222(476);
			GlobalFunc_5222(477);
			GlobalFunc_5222(478);
			GlobalFunc_5222(479);
			GlobalFunc_5222(480);
			GlobalFunc_5222(481);
			GlobalFunc_5222(482);
			GlobalFunc_5222(483);
			GlobalFunc_5222(484);
			GlobalFunc_5222(485);
			return;
		
		case 62:
			GlobalFunc_5222(486);
			GlobalFunc_5222(487);
			GlobalFunc_5222(488);
			GlobalFunc_5222(489);
			GlobalFunc_5222(490);
			GlobalFunc_5222(491);
			GlobalFunc_5222(492);
			GlobalFunc_5222(493);
			GlobalFunc_5222(494);
			GlobalFunc_5222(495);
			GlobalFunc_5222(496);
			GlobalFunc_5222(497);
			GlobalFunc_5222(498);
			return;
		
		case 63:
			GlobalFunc_5222(499);
			GlobalFunc_5222(500);
			GlobalFunc_5222(501);
			GlobalFunc_5222(502);
			GlobalFunc_5222(503);
			GlobalFunc_5222(504);
			GlobalFunc_5222(505);
			GlobalFunc_5222(506);
			GlobalFunc_5222(507);
			GlobalFunc_5222(508);
			GlobalFunc_5222(509);
			GlobalFunc_5222(510);
			GlobalFunc_5222(511);
			GlobalFunc_5222(512);
			GlobalFunc_5222(513);
			GlobalFunc_5222(514);
			return;
		
		case 64:
			GlobalFunc_5222(515);
			GlobalFunc_5222(516);
			GlobalFunc_5222(517);
			GlobalFunc_5222(518);
			GlobalFunc_5222(519);
			GlobalFunc_5222(520);
			GlobalFunc_5222(521);
			GlobalFunc_5222(522);
			GlobalFunc_5222(523);
			GlobalFunc_5222(524);
			GlobalFunc_5222(525);
			GlobalFunc_5222(526);
			return;
		
		case 66:
			GlobalFunc_5222(527);
			GlobalFunc_5222(528);
			GlobalFunc_5222(529);
			GlobalFunc_5222(530);
			GlobalFunc_5222(531);
			GlobalFunc_5222(532);
			GlobalFunc_5222(533);
			return;
		
		case 67:
			GlobalFunc_5222(534);
			GlobalFunc_5222(535);
			GlobalFunc_5222(536);
			GlobalFunc_5222(537);
			GlobalFunc_5222(538);
			GlobalFunc_5222(539);
			return;
		
		case 68:
			GlobalFunc_5222(540);
			GlobalFunc_5222(541);
			GlobalFunc_5222(542);
			GlobalFunc_5222(543);
			GlobalFunc_5222(544);
			GlobalFunc_5222(545);
			GlobalFunc_5222(546);
			return;
		
		case 69:
			GlobalFunc_5222(547);
			GlobalFunc_5222(548);
			GlobalFunc_5222(549);
			GlobalFunc_5222(550);
			GlobalFunc_5222(551);
			GlobalFunc_5222(552);
			GlobalFunc_5222(553);
			GlobalFunc_5222(554);
			GlobalFunc_5222(555);
			GlobalFunc_5222(556);
			GlobalFunc_5222(557);
			GlobalFunc_5222(558);
			GlobalFunc_5222(559);
			GlobalFunc_5222(560);
			return;
		
		case 70:
			GlobalFunc_5222(561);
			GlobalFunc_5222(562);
			GlobalFunc_5222(563);
			GlobalFunc_5222(564);
			GlobalFunc_5222(565);
			GlobalFunc_5222(566);
			GlobalFunc_5222(567);
			GlobalFunc_5222(568);
			GlobalFunc_5222(569);
			GlobalFunc_5222(570);
			GlobalFunc_5222(571);
			GlobalFunc_5222(572);
			GlobalFunc_5222(573);
			GlobalFunc_5222(574);
			GlobalFunc_5222(575);
			return;
		
		case 71:
			GlobalFunc_5222(576);
			GlobalFunc_5222(577);
			GlobalFunc_5222(578);
			GlobalFunc_5222(579);
			GlobalFunc_5222(580);
			GlobalFunc_5222(581);
			GlobalFunc_5222(582);
			GlobalFunc_5222(583);
			GlobalFunc_5222(584);
			GlobalFunc_5222(585);
			GlobalFunc_5222(586);
			return;
		
		case 72:
			GlobalFunc_5222(587);
			GlobalFunc_5222(588);
			GlobalFunc_5222(589);
			GlobalFunc_5222(590);
			GlobalFunc_5222(591);
			GlobalFunc_5222(592);
			GlobalFunc_5222(593);
			GlobalFunc_5222(594);
			return;
		
		case 73:
			GlobalFunc_5222(595);
			GlobalFunc_5222(596);
			GlobalFunc_5222(597);
			GlobalFunc_5222(598);
			GlobalFunc_5222(599);
			GlobalFunc_5222(600);
			GlobalFunc_5222(601);
			GlobalFunc_5222(602);
			GlobalFunc_5222(603);
			GlobalFunc_5222(604);
			return;
		
		case 74:
			GlobalFunc_5222(605);
			GlobalFunc_5222(606);
			GlobalFunc_5222(607);
			GlobalFunc_5222(608);
			GlobalFunc_5222(609);
			GlobalFunc_5222(610);
			GlobalFunc_5222(611);
			GlobalFunc_5222(612);
			GlobalFunc_5222(613);
			GlobalFunc_5222(614);
			GlobalFunc_5222(615);
			GlobalFunc_5222(616);
			GlobalFunc_5222(617);
			GlobalFunc_5222(618);
			GlobalFunc_5222(619);
			GlobalFunc_5222(620);
			return;
		
		case 75:
			GlobalFunc_5222(621);
			GlobalFunc_5222(622);
			GlobalFunc_5222(623);
			GlobalFunc_5222(624);
			GlobalFunc_5222(625);
			GlobalFunc_5222(626);
			GlobalFunc_5222(627);
			GlobalFunc_5222(628);
			GlobalFunc_5222(629);
			GlobalFunc_5222(630);
			GlobalFunc_5222(631);
			GlobalFunc_5222(632);
			GlobalFunc_5222(633);
			GlobalFunc_5222(634);
			GlobalFunc_5222(635);
			GlobalFunc_5222(636);
			return;
		
		case 76:
			GlobalFunc_5222(637);
			GlobalFunc_5222(638);
			GlobalFunc_5222(639);
			GlobalFunc_5222(640);
			GlobalFunc_5222(641);
			GlobalFunc_5222(642);
			GlobalFunc_5222(643);
			GlobalFunc_5222(644);
			GlobalFunc_5222(645);
			GlobalFunc_5222(646);
			GlobalFunc_5222(647);
			GlobalFunc_5222(648);
			return;
		
		case 78:
			GlobalFunc_5222(649);
			GlobalFunc_5222(650);
			GlobalFunc_5222(651);
			GlobalFunc_5222(652);
			return;
		
		case joaat("mpsv_lp0_31"):
			GlobalFunc_5222(653);
			GlobalFunc_5222(654);
			GlobalFunc_5222(655);
			GlobalFunc_5222(656);
			GlobalFunc_5222(657);
			GlobalFunc_5222(658);
			GlobalFunc_5222(659);
			return;
		
		case 84:
			GlobalFunc_5222(660);
			GlobalFunc_5222(661);
			GlobalFunc_5222(662);
			GlobalFunc_5222(663);
			GlobalFunc_5222(664);
			GlobalFunc_5222(665);
			GlobalFunc_5222(666);
			GlobalFunc_5222(667);
			GlobalFunc_5222(668);
			GlobalFunc_5222(669);
			GlobalFunc_5222(670);
			GlobalFunc_5222(671);
			GlobalFunc_5222(672);
			GlobalFunc_5222(673);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 85:
			GlobalFunc_5222(674);
			GlobalFunc_5222(675);
			GlobalFunc_5222(676);
			GlobalFunc_5222(677);
			GlobalFunc_5222(678);
			GlobalFunc_5222(679);
			GlobalFunc_5222(680);
			GlobalFunc_5222(681);
			GlobalFunc_5222(682);
			GlobalFunc_5222(683);
			GlobalFunc_5222(684);
			GlobalFunc_5222(685);
			GlobalFunc_5222(686);
			GlobalFunc_5222(687);
			GlobalFunc_5222(688);
			return;
		
		case 86:
			GlobalFunc_5222(689);
			GlobalFunc_5222(690);
			GlobalFunc_5222(691);
			GlobalFunc_5222(692);
			GlobalFunc_5222(693);
			GlobalFunc_5222(694);
			GlobalFunc_5222(695);
			return;
		
		case 87:
			GlobalFunc_5222(696);
			GlobalFunc_5222(697);
			GlobalFunc_5222(698);
			GlobalFunc_5222(699);
			GlobalFunc_5222(700);
			GlobalFunc_5222(701);
			return;
		
		case 88:
			GlobalFunc_5222(702);
			GlobalFunc_5222(703);
			GlobalFunc_5222(704);
			GlobalFunc_5222(705);
			GlobalFunc_5222(706);
			GlobalFunc_5222(707);
			GlobalFunc_5222(708);
			return;
		
		case 91:
			GlobalFunc_5222(709);
			GlobalFunc_5222(710);
			GlobalFunc_5222(711);
			GlobalFunc_5222(712);
			GlobalFunc_5222(713);
			GlobalFunc_5222(714);
			GlobalFunc_5222(715);
			GlobalFunc_5222(716);
			GlobalFunc_5222(717);
			return;
		
		case 92:
			GlobalFunc_5222(718);
			GlobalFunc_5222(719);
			GlobalFunc_5222(720);
			GlobalFunc_5222(721);
			GlobalFunc_5222(722);
			GlobalFunc_5222(723);
			GlobalFunc_5222(724);
			GlobalFunc_5222(725);
			GlobalFunc_5222(726);
			GlobalFunc_5222(727);
			GlobalFunc_5222(728);
			return;
		
		case 93:
			GlobalFunc_5222(729);
			GlobalFunc_5222(730);
			GlobalFunc_5222(731);
			GlobalFunc_5222(732);
			GlobalFunc_5222(733);
			GlobalFunc_5222(734);
			GlobalFunc_5222(735);
			GlobalFunc_5222(736);
			GlobalFunc_5222(737);
			GlobalFunc_5222(738);
			GlobalFunc_5222(739);
			GlobalFunc_5222(740);
			return;
		
		case 90:
			GlobalFunc_5222(810);
			GlobalFunc_5222(811);
			GlobalFunc_5222(812);
			GlobalFunc_5222(813);
			GlobalFunc_5222(814);
			GlobalFunc_5222(815);
			GlobalFunc_5222(816);
			GlobalFunc_5222(817);
			GlobalFunc_5222(818);
			GlobalFunc_5222(819);
			return;
		
		case 36:
			GlobalFunc_5222(820);
			GlobalFunc_5222(821);
			GlobalFunc_5222(822);
			GlobalFunc_5222(823);
			return;
		
		case 37:
			GlobalFunc_5222(824);
			GlobalFunc_5222(825);
			GlobalFunc_5222(826);
			GlobalFunc_5222(827);
			return;
		
		case 24:
			GlobalFunc_5222(846);
			GlobalFunc_5222(847);
			GlobalFunc_5222(848);
			GlobalFunc_5222(849);
			GlobalFunc_5222(850);
			GlobalFunc_5222(851);
			return;
		
		case 25:
			GlobalFunc_5222(852);
			GlobalFunc_5222(853);
			GlobalFunc_5222(854);
			GlobalFunc_5222(855);
			GlobalFunc_5222(856);
			GlobalFunc_5222(857);
			GlobalFunc_5222(858);
			GlobalFunc_5222(859);
			GlobalFunc_5222(860);
			return;
		
		case 59:
			GlobalFunc_5222(861);
			GlobalFunc_5222(862);
			GlobalFunc_5222(863);
			GlobalFunc_5222(864);
			GlobalFunc_5222(865);
			GlobalFunc_5222(866);
			GlobalFunc_5222(867);
			GlobalFunc_5222(868);
			GlobalFunc_5222(869);
			return;
		
		case 65:
			GlobalFunc_5222(870);
			GlobalFunc_5222(871);
			GlobalFunc_5222(872);
			GlobalFunc_5222(873);
			GlobalFunc_5222(874);
			return;
		
		case 80:
			GlobalFunc_5222(875);
			GlobalFunc_5222(876);
			GlobalFunc_5222(877);
			GlobalFunc_5222(878);
			GlobalFunc_5222(879);
			GlobalFunc_5222(880);
			GlobalFunc_5222(881);
			GlobalFunc_5222(882);
			return;
		
		case 81:
			GlobalFunc_5222(883);
			GlobalFunc_5222(884);
			GlobalFunc_5222(885);
			GlobalFunc_5222(886);
			GlobalFunc_5222(887);
			GlobalFunc_5222(888);
			GlobalFunc_5222(889);
			GlobalFunc_5222(890);
			return;
		
		case 82:
			GlobalFunc_5222(891);
			GlobalFunc_5222(892);
			GlobalFunc_5222(893);
			GlobalFunc_5222(894);
			GlobalFunc_5222(895);
			GlobalFunc_5222(896);
			GlobalFunc_5222(897);
			GlobalFunc_5222(898);
			return;
		
		case 83:
			GlobalFunc_5222(899);
			GlobalFunc_5222(900);
			GlobalFunc_5222(901);
			GlobalFunc_5222(902);
			GlobalFunc_5222(903);
			GlobalFunc_5222(904);
			GlobalFunc_5222(905);
			return;
		
		case 89:
			GlobalFunc_5222(906);
			GlobalFunc_5222(907);
			GlobalFunc_5222(908);
			GlobalFunc_5222(909);
			GlobalFunc_5222(910);
			GlobalFunc_5222(911);
			GlobalFunc_5222(912);
			return;
		
		default:
	}
}












void func_302(int iParam0)//Position - 0x2AA59
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_68514.f_109[iParam0 /*4*/];
	MISC::CLEAR_BIT(&(Global_89962.f_20), 17);
	func_305(&(Global_81155[iVar0 /*34*/]), 1, 0);
	if ((Global_81155[iVar0 /*34*/].f_13 != -1 && Global_81155[iVar0 /*34*/].f_14 != -1) && !MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 30))
	{
		iVar1 = GlobalFunc_483(Global_91351.f_1);
		iVar2 = Global_81155[iVar0 /*34*/].f_13;
		iVar3 = Global_81155[iVar0 /*34*/].f_14;
		if (!GlobalFunc_740(iVar1, iVar2, iVar3))
		{
			GlobalFunc_94(&(Global_91351.f_1), iVar2);
			GlobalFunc_94(&(Global_93588.f_1), iVar2);
		}
	}
	if (iVar0 == 62)
	{
		Global_91351 = 2;
		Global_93588 = 2;
	}
	if (iVar0 == 20)
	{
		if (Global_91351 == 1)
		{
			Global_91351 = 0;
			Global_93588 = 0;
		}
	}
}



void func_305(char[4] cParam0, int iParam1, int iParam2)//Position - 0x2ABED
{
	if (Global_89962 != 10 && Global_89962 != 9)
	{
		StringCopy(&Global_91343, cParam0, 32);
		func_307(&Global_91351, cParam0, 0, "Start", iParam1, iParam2);
		GlobalFunc_864();
		Global_84545 = 0;
	}
}


void func_307(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2B8C2
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_7626();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_10628(&(uParam0->f_2161), 0);
		GlobalFunc_7705(PLAYER::PLAYER_PED_ID());
		GlobalFunc_7700(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_294[iVar1];
		if (iVar1 == GlobalFunc_8315())
		{
			GlobalFunc_8358(PLAYER::PLAYER_PED_ID(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89752[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89752[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89752[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89752[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89752[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89752[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89752[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89752[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89752[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89752[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51925[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		GlobalFunc_10103(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	GlobalFunc_542(&(uParam0->f_2233));
	sParam3 = sParam3;
	iParam2 = iParam2;
}





































void func_344(int iParam0)//Position - 0x2FD35
{
	if (iParam0 < 94)
	{
		GlobalFunc_53();
		Global_68500 = iParam0;
		Global_68499 = 0;
		Global_68502 = 1;
	}
}


void func_346(int iParam0)//Position - 0x2FD9C
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(1, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPM_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(1, &cVar1);
	}
}

void func_347(var uParam0)//Position - 0x2FDF3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*uParam0 == -1)
	{
		return;
	}
	if (Global_68242 == *uParam0)
	{
		GlobalFunc_3046(*uParam0, 0);
	}
	if (Global_68241 == *uParam0)
	{
		Global_68241 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_68238)
	{
		if (Global_68227[iVar1 /*2*/] == *uParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_68238 - 2))
	{
		Global_68227[iVar2 /*2*/] = Global_68227[iVar2 + 1 /*2*/];
		Global_68227[iVar2 /*2*/].f_1 = Global_68227[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_68227[(Global_68238 - 1) /*2*/] = -1;
	Global_68227[(Global_68238 - 1) /*2*/].f_1 = 3;
	Global_68238 = (Global_68238 - 1);
	Global_68239 = 1;
	Global_68240 = MISC::GET_FRAME_COUNT();
	*uParam0 = -1;
}



void func_350()//Position - 0x2FF46
{
	var uVar0;
	var uVar3;
	int iVar4;
	int iVar5;
	
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar5 = Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar4];
		if (GlobalFunc_506(iVar5, &uVar0, &uVar3))
		{
			if (((iVar5 != 8 && iVar5 != 11) && iVar5 != 9) && iVar5 != 10)
			{
				Global_SAVE_DATA.PLAYER_SCENE_SAVED_DATA[iVar4] = 318;
			}
		}
		iVar4++;
	}
}

void func_351()//Position - 0x2FFAE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 262)
	{
		if (Global_Mission_Blips[iVar0 /*23*/].f_16 == 6)
		{
			iVar1 = iVar0;
			GlobalFunc_5773(iVar1);
		}
		iVar0++;
	}
}





int func_356(int iParam0)//Position - 0x301B8
{
	switch (iParam0)
	{
		case 62:
		case 15:
			return 0;
			break;
		
		case 47:
			return 1;
			break;
	}
	return 145;
}

























































































































































bool func_509(int iParam0)//Position - 0x5BA91
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = GlobalFunc_2014(iVar1);
		iVar3 = GlobalFunc_3050(iVar1);
		if ((iVar2 == 3 || iVar2 == 4) && ((iVar3 == 0 || iVar3 == 1) || iVar3 == 3))
		{
			if (func_510(iParam0, iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0 != 0;
}

int func_510(int iParam0, int iParam1)//Position - 0x5BB05
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == -1 || iParam0 == 94)
	{
		return 0;
	}
	uVar0 = Global_81155[iParam0 /*34*/].f_12;
	GlobalFunc_5984(iParam1, &iVar1, &iVar2);
	if (GlobalFunc_5584(uVar0, iVar1) && GlobalFunc_5584(uVar0, iVar2))
	{
		return 1;
	}
	return 0;
}






int func_516(int iParam0)//Position - 0x5BC93
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = GlobalFunc_2634(iParam0);
	if (!iVar0 == -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	iVar2 = -1;
	bVar3 = true;
	while (bVar3)
	{
		if (Global_81119[iVar1 /*5*/] == -1)
		{
			iVar2 = iVar1;
			bVar3 = false;
		}
		else
		{
			iVar1++;
			if (iVar1 >= 7)
			{
				bVar3 = false;
			}
		}
	}
	if (iVar2 == -1)
	{
		return -1;
	}
	Global_81119[iVar2 /*5*/] = iParam0;
	return iVar2;
}

void func_517(int iParam0, int iParam1, bool bParam2)//Position - 0x5BD06
{
	if (bParam2)
	{
		if (GlobalFunc_6687(0))
		{
			func_536(Global_81119[iParam1 /*5*/].f_2);
		}
		else
		{
			GlobalFunc_7999(Global_81119[iParam1 /*5*/].f_2);
		}
	}
	else
	{
		GlobalFunc_1997(&(Global_81119[iParam1 /*5*/].f_3));
	}
	GlobalFunc_8306();
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_81155[Global_68514.f_109[iParam0 /*4*/] /*34*/].f_6);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mission_stat_watcher"));
	GlobalFunc_5841(iParam0);
	GRAPHICS::ANIMPOSTFX_STOP_ALL();
}



















void func_536(int iParam0)//Position - 0x5C8D7
{
	if (!GlobalFunc_6687(0))
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 7)
	{
		return;
	}
	Global_87297 = 0;
	Global_34913 = 15;
	Global_87300[iParam0 /*17*/].f_7 = -1;
	if (Global_87300[iParam0 /*17*/].f_9 != 262)
	{
		GlobalFunc_2198(Global_87300[iParam0 /*17*/].f_9, 0, 0);
	}
	GlobalFunc_5842(iParam0);
}


void func_538()//Position - 0x5C96A
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	struct<3> Var34;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	MISC::CLEAR_BIT(&Global_68493, 1);
	func_572(uLocal_107);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (Global_68491.f_1)
		{
			case 1:
				Var34 = { func_570() };
				if (!GlobalFunc_100(Var34, 0f, 0f, 0f))
				{
					func_560(Var34, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1);
				}
				iVar37 = Global_68491;
				if ((Global_81155[iVar37 /*34*/].f_13 != -1 && Global_81155[iVar37 /*34*/].f_14 != -1) && !MISC::IS_BIT_SET(Global_81155[iVar37 /*34*/].f_15, 30))
				{
					iVar38 = GlobalFunc_483(GlobalFunc_7626());
					iVar39 = Global_81155[iVar37 /*34*/].f_13;
					iVar40 = Global_81155[iVar37 /*34*/].f_14;
					if (!GlobalFunc_740(iVar38, iVar39, iVar40))
					{
						CLOCK::SET_CLOCK_TIME(iVar39, 0, 0);
					}
				}
				break;
			
			case 7:
				GlobalFunc_6675(Global_68491, &Var2);
				iVar41 = GlobalFunc_7706(&Local_99, 0);
				if (GlobalFunc_100(Var2.f_6, 0f, 0f, 0f))
				{
					if (iVar41 == 60 || iVar41 == 61)
					{
						Var2.f_6 = { -3.2349f, -1469.953f, 29.5503f };
					}
				}
				if (iVar41 == 2 || iVar41 == 3)
				{
					Var2.f_6 = { 188.5123f, -954.8154f, 29.09192f };
				}
				else if (iVar41 == 5)
				{
					Var2.f_6 = { 1205.787f, -1289.228f, 34.2264f };
				}
				else if (iVar41 == 6)
				{
					Var2.f_6 = { -447.0243f, -1704.648f, 17.9004f };
				}
				func_560(Var2.f_6, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1);
				if (Var2.f_27 != 0 || Var2.f_28 != 2359)
				{
					iVar0 = (Var2.f_27 / 100);
					iVar1 = (Var2.f_27 % 100);
					CLOCK::SET_CLOCK_TIME(iVar0, iVar1, 0);
				}
				func_540(iVar41, 0);
				if (iVar41 == 60 || iVar41 == 61)
				{
					SCRIPT::REQUEST_SCRIPT("ambient_Tonya");
					while (!SCRIPT::HAS_SCRIPT_LOADED("ambient_Tonya"))
					{
						SCRIPT::REQUEST_SCRIPT("ambient_Tonya");
						SYSTEM::WAIT(0);
					}
					SYSTEM::START_NEW_SCRIPT("ambient_Tonya", 1424);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("ambient_Tonya");
				}
				else
				{
					BRAIN::_0x0B40ED49D7D6FF84();
				}
				Global_96440[iVar41 /*10*/].f_3 = 0;
				Global_68490 = 1;
				while (!Global_96440[iVar41 /*10*/].f_4)
				{
					Global_96440[iVar41 /*10*/].f_3 = 0;
					SYSTEM::WAIT(0);
				}
				Global_68490 = 0;
				break;
			
			default:
				break;
		}
	}
	else
	{
		func_5(1);
		return;
	}
	func_539(0);
	iLocal_97 = 3;
}

void func_539(int iParam0)//Position - 0x5CBE5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			MISC::SET_BIT(&Global_68493, 3);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			}
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
			}
			else
			{
				if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				}
			}
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
		}
		else if (MISC::IS_BIT_SET(Global_68493, 3))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(ENTITY::GET_ENTITY_ATTACHED_TO(PLAYER::PLAYER_PED_ID()), 0);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
			}
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_68493, 3);
		}
	}
}

void func_540(int iParam0, int iParam1)//Position - 0x5CD15
{
	MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 0);
	MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 1);
	MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/]), 2);
	if (iParam1 == 1)
	{
		GlobalFunc_9620(iParam0, 1);
	}
}




















int func_560(struct<3> Param0, var uParam3, int iParam4)//Position - 0x61997
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		MISC::SET_GAME_PAUSED(0);
		MISC::CLEAR_AREA(Param0, 5f, 1, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 600f, 0);
		SYSTEM::WAIT(0);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		}
		MISC::CLEAR_AREA(Param0, 5000f, 1, 0, 0, 0);
		GlobalFunc_8365(Param0, 5000f, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(Param0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Param0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Param0, 5000f);
		GlobalFunc_2825();
		GlobalFunc_2769();
		SYSTEM::SETTIMERA(0);
		MISC::SET_GAME_PAUSED(1);
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
				if (SYSTEM::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(0);
					return 0;
				}
			}
		}
		SYSTEM::SETTIMERA(0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(0);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				MISC::SET_GAME_PAUSED(0);
				SYSTEM::SETTIMERA(0);
				PED::INSTANTLY_FILL_PED_POPULATION();
				if (iParam4 == 1)
				{
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				}
				else
				{
					SYSTEM::SETTIMERA(990);
				}
				MISC::POPULATE_NOW();
			}
		}
		while (((!VEHICLE::_HAS_FILLED_VEHICLE_POPULATION() || !GlobalFunc_2768()) || SYSTEM::TIMERA() < 10) && SYSTEM::TIMERA() < 1000)
		{
			SYSTEM::WAIT(0);
		}
		if (SYSTEM::TIMERA() > 1000)
		{
			if (iParam4 == 1)
			{
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		MISC::SET_GAME_PAUSED(0);
		return 1;
	}
	MISC::SET_GAME_PAUSED(0);
	return 0;
}










Vector3 func_570()//Position - 0x635DE
{
	struct<3> Var0;
	int iVar3;
	
	Var0 = { 0f, 0f, 0f };
	iVar3 = Global_68491;
	switch (iVar3)
	{
		case 68:
			Var0 = { 354.3055f, -1722.206f, 28.259f };
			break;
		
		case 33:
			Var0 = { 1062.283f, -357.3208f, 66.1474f };
			break;
		
		case 89:
			Global_86863 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
			switch (Global_86863)
			{
				case 1:
					Var0 = { -745.479f, -1118.11f, 9.6798f };
					break;
				
				case 2:
					Var0 = { 895.8368f, -788.0649f, 41.9022f };
					break;
				
				case 3:
					Var0 = { -964.6421f, -336.7097f, 36.8155f };
					break;
			}
			break;
		
		case 88:
			Global_86863 = 1;
			Var0 = { 1261.442f, 589.6306f, 80.5991f };
			break;
		
		case 92:
			Var0 = { 45.73f, 3064.274f, 39.943f };
			break;
		
		case 72:
			Var0 = { 1219.186f, -2977.9f, 4.8653f };
			break;
		
		case 12:
			Var0 = { 1991.076f, 3054.247f, 46.2147f };
			break;
		
		default:
			if (Global_81155[Global_68491 /*34*/].f_10 != 262)
			{
				Var0 = { GlobalFunc_2247(Global_81155[Global_68491 /*34*/].f_10, 0) };
			}
			break;
	}
	return Var0;
}


void func_572(var uParam0)//Position - 0x63783
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = GlobalFunc_6674(PLAYER::PLAYER_PED_ID());
	if (GlobalFunc_2016(uParam0, iVar1))
	{
		iVar0 = GlobalFunc_237(iVar1);
	}
	else if (GlobalFunc_2016(uParam0, 0))
	{
		iVar0 = 0;
	}
	else if (GlobalFunc_2016(uParam0, 1))
	{
		iVar0 = 1;
	}
	else if (GlobalFunc_2016(uParam0, 2))
	{
		iVar0 = 2;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		while (!func_573(iVar0, 1))
		{
			SYSTEM::WAIT(0);
		}
	}
}

int func_573(int iParam0, bool bParam1)//Position - 0x637FD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	Global_17098.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = GlobalFunc_584(iParam0);
	iVar1 = GlobalFunc_4917(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_637(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_612(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	GlobalFunc_10946(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}







































int func_612(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x68DBB
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			GlobalFunc_8364(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			GlobalFunc_11325(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7714(*uParam0);
			GlobalFunc_11336(*uParam0, bParam8);
			GlobalFunc_516(*uParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

























int func_637(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6AAAF
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				GlobalFunc_8364(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				GlobalFunc_11325(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7714(*uParam0);
				GlobalFunc_11336(*uParam0, bParam6);
				GlobalFunc_516(*uParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}



void func_640()//Position - 0x6ABCA
{
	int iVar0;
	char cVar1[32];
	struct<3> Var9;
	
	iVar0 = func_664(Global_68491);
	StringCopy(&cVar1, func_663(Global_68491), 32);
	Var9 = { func_661(iVar0) };
	switch (iVar0)
	{
		case 4:
		case 3:
			if (MISC::IS_BIT_SET(uLocal_109, 13))
			{
				GlobalFunc_9533(13, 0);
			}
		
		case 2:
			if (MISC::IS_BIT_SET(uLocal_109, 11))
			{
				GlobalFunc_9533(11, 0);
			}
		
		case 0:
			if (MISC::IS_BIT_SET(uLocal_109, 10))
			{
				GlobalFunc_9533(10, 0);
			}
			if (MISC::IS_BIT_SET(uLocal_109, 12))
			{
				GlobalFunc_9533(12, 0);
			}
			break;
	}
	SCRIPT::REQUEST_SCRIPT(&cVar1);
	while (!SCRIPT::HAS_SCRIPT_LOADED(&cVar1))
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT(&cVar1, 2050);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_560(Var9, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0);
	}
	func_654(iVar0);
	if (iVar0 == 1)
	{
		GlobalFunc_7621(139, 1, 0, 1, 0);
		GlobalFunc_7621(140, 1, 0, 1, 0);
	}
	else if (iVar0 == 3)
	{
		GlobalFunc_7621(71, 1, 0, 1, 0);
	}
	func_653(iVar0, 0, 1);
	while (Global_86374 == 0)
	{
		SYSTEM::WAIT(0);
	}
	func_539(0);
	SYSTEM::WAIT(500);
	CAM::DO_SCREEN_FADE_IN(500);
	iLocal_98 = 0;
	while (iLocal_98 != 7)
	{
		SYSTEM::WAIT(0);
		switch (iLocal_98)
		{
			case 0:
				iLocal_98 = func_648(iVar0, 0, func_652(iVar0, 1), iLocal_98);
				break;
			
			case 1:
				SYSTEM::WAIT(func_647(iVar0, iLocal_98));
				if (iVar0 == 2)
				{
					GlobalFunc_3026(9, 5);
					func_653(iVar0, 1, 1);
					iLocal_98 = 4;
				}
				else
				{
					iLocal_98 = 2;
				}
				break;
			
			case 2:
				iLocal_98 = func_648(iVar0, 2, func_652(iVar0, 1), iLocal_98);
				if (iLocal_98 != 2)
				{
					func_653(iVar0, 1, 1);
				}
				break;
			
			case 3:
				SYSTEM::WAIT(func_647(iVar0, iLocal_98));
				iLocal_98 = 4;
				break;
			
			case 4:
				iLocal_98 = func_648(iVar0, 1, func_652(iVar0, 0), iLocal_98);
				break;
			
			case 5:
				SYSTEM::WAIT(func_647(iVar0, iLocal_98));
				func_644(iVar0, 0);
				iLocal_98 = 6;
				break;
			
			case 6:
				while (!func_643(iVar0))
				{
					SYSTEM::WAIT(0);
				}
				CAM::DO_SCREEN_FADE_OUT(0);
				iLocal_98 = 7;
				break;
			
			default:
				break;
		}
	}
	while (GlobalFunc_6687(0) == 1)
	{
		SYSTEM::WAIT(0);
	}
	if (iVar0 == 3)
	{
		GlobalFunc_7621(70, 1, 0, 1, 0);
		GlobalFunc_7621(71, 2, 0, 1, 0);
		GlobalFunc_7621(73, 1, 0, 1, 0);
		GlobalFunc_7621(72, 0, 0, 1, 0);
		GlobalFunc_7621(74, 0, 0, 1, 0);
	}
	else if (iVar0 == 1)
	{
		GlobalFunc_7621(139, 0, 0, 1, 0);
		GlobalFunc_7621(140, 0, 0, 1, 0);
	}
	Global_68491 = func_641(iVar0);
	MemCopy(&Local_99, {Global_81155[Global_68491 /*34*/]}, 8);
	uLocal_107 = Global_81155[Global_68491 /*34*/].f_11;
	func_539(1);
	iLocal_97 = 2;
}

int func_641(int iParam0)//Position - 0x6AEA2
{
	switch (iParam0)
	{
		case 0:
			return 90;
			break;
		
		case 1:
			if (GlobalFunc_597(8) == 3)
			{
				return 74;
			}
			else
			{
				return 75;
			}
			break;
		
		case 2:
			return 93;
			break;
		
		case 3:
			if (GlobalFunc_597(10) == 6)
			{
				return 69;
			}
			else
			{
				return 70;
			}
			break;
		
		case 4:
			if (GlobalFunc_597(11) == 8)
			{
				return 84;
			}
			else
			{
				return 85;
			}
			break;
		
		default:
			break;
	}
	return 0;
}


int func_643(int iParam0)//Position - 0x6AF5F
{
	switch (iParam0)
	{
		case 0:
			if (GlobalFunc_485(18) == 1)
			{
				return 0;
			}
			break;
		
		case 1:
			if (GlobalFunc_485(22) == 1)
			{
				return 0;
			}
			break;
		
		case 2:
			if (GlobalFunc_485(40) == 1)
			{
				return 0;
			}
			break;
		
		case 3:
			if (GlobalFunc_485(8) == 1)
			{
				return 0;
			}
			break;
		
		case 4:
			if (GlobalFunc_485(26) == 1)
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 1;
}

void func_644(int iParam0, bool bParam1)//Position - 0x6AFE5
{
	int iVar0;
	
	while (GlobalFunc_111())
	{
		SYSTEM::WAIT(0);
	}
	iVar0 = func_653(iParam0, 2, 1);
	if (iVar0 == 1)
	{
		while (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	GlobalFunc_2196(1, iParam0, bParam1);
	GlobalFunc_2196(2, iParam0, 1);
}



int func_647(int iParam0, int iParam1)//Position - 0x6B0FF
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 3000;
					break;
				
				case 3:
					return 3000;
					break;
				
				case 5:
					return 2250;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 1:
					return 3000;
					break;
				
				case 3:
					return 3500;
					break;
				
				case 5:
					return 2250;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
					return 3000;
					break;
				
				case 3:
					return 1000;
					break;
				
				case 5:
					return 2250;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return 3000;
					break;
				
				case 3:
					return 0;
					break;
				
				case 5:
					return 2250;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 3000;
					break;
				
				case 3:
					return 0;
					break;
				
				case 5:
					return 2250;
					break;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_648(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6B23F
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	if (GlobalFunc_485(0))
	{
		GlobalFunc_585(0, 0);
		return 2;
	}
	iVar0 = GlobalFunc_3051(iParam0);
	iVar1 = GlobalFunc_597(iVar0);
	if (iVar1 < 0 || iVar1 >= 5)
	{
	}
	iVar2 = iVar1;
	bVar3 = true;
	bVar4 = true;
	switch (iParam1)
	{
		case 0:
			if (iVar2 != 1)
			{
				GlobalFunc_3026(iVar0, 1);
				GlobalFunc_2196(3, iParam0, 0);
				GlobalFunc_2196(1, iParam0, bVar3);
			}
			else if (GlobalFunc_892(3, iParam0))
			{
				if (bVar4)
				{
					GlobalFunc_3026(iVar0, 0);
				}
				GlobalFunc_2196(3, iParam0, 0);
				if (iParam2 != 13)
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iParam0]), iParam2);
					MISC::SET_BIT(&Global_86375, iParam0);
				}
				return 1;
			}
			break;
		
		case 1:
			if (iVar2 != 2)
			{
				GlobalFunc_3026(iVar0, 2);
				if (iParam2 != 13)
				{
					MISC::CLEAR_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iParam0]), iParam2);
					MISC::SET_BIT(&Global_86375, iParam0);
				}
				GlobalFunc_2196(4, iParam0, 0);
				GlobalFunc_2196(1, iParam0, bVar3);
			}
			else if (GlobalFunc_892(4, iParam0))
			{
				if (bVar4)
				{
					GlobalFunc_3026(iVar0, 0);
				}
				GlobalFunc_2196(4, iParam0, 0);
				if (iParam2 != 13)
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iParam0]), iParam2);
					MISC::SET_BIT(&Global_86375, iParam0);
				}
				return 5;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					iVar5 = 7;
					break;
				
				case 1:
					iVar5 = 8;
					break;
				
				case 2:
					iVar5 = 9;
					break;
				
				case 3:
					iVar5 = 10;
					break;
				
				case 4:
					iVar5 = 11;
					break;
			}
			if (iVar2 != 3)
			{
				GlobalFunc_3026(iVar0, 3);
				GlobalFunc_3026(iVar5, 0);
				GlobalFunc_2196(5, iParam0, 0);
				if (iParam2 != 13)
				{
					MISC::CLEAR_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iParam0]), iParam2);
					MISC::SET_BIT(&Global_86375, iParam0);
				}
				GlobalFunc_2196(1, iParam0, bVar3);
			}
			else if (GlobalFunc_597(iVar5) != 0 && GlobalFunc_892(5, iParam0))
			{
				if (bVar4)
				{
					GlobalFunc_3026(iVar0, 0);
				}
				GlobalFunc_2196(5, iParam0, 0);
				if (iParam2 != 13)
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iParam0]), iParam2);
					MISC::SET_BIT(&Global_86375, iParam0);
				}
				if (iParam0 == 1)
				{
					return 5;
				}
				return 3;
			}
			break;
	}
	return iParam3;
}




int func_652(int iParam0, int iParam1)//Position - 0x6B568
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 5;
			}
			else
			{
				return 6;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 4;
			}
			else
			{
				return 5;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 2;
			}
			else
			{
				return 3;
			}
			break;
		
		default:
			break;
	}
	return -1;
}

int func_653(int iParam0, int iParam1, int iParam2)//Position - 0x6B5FD
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					GlobalFunc_585(16, iParam2);
					return 1;
					break;
				
				case 1:
					GlobalFunc_585(17, iParam2);
					return 1;
					break;
				
				case 2:
					GlobalFunc_585(18, iParam2);
					return 1;
					break;
				
				case 3:
					GlobalFunc_585(4, iParam2);
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					GlobalFunc_585(20, iParam2);
					return 1;
					break;
				
				case 1:
					GlobalFunc_585(21, iParam2);
					return 1;
					break;
				
				case 2:
					GlobalFunc_585(22, iParam2);
					return 1;
					break;
				
				case 3:
					GlobalFunc_585(1, iParam2);
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					GlobalFunc_585(38, iParam2);
					return 1;
					break;
				
				case 1:
					GlobalFunc_585(39, iParam2);
					return 1;
					break;
				
				case 2:
					GlobalFunc_585(40, iParam2);
					return 1;
					break;
				
				case 3:
					GlobalFunc_585(5, iParam2);
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					GlobalFunc_585(6, iParam2);
					return 1;
					break;
				
				case 1:
					GlobalFunc_585(7, iParam2);
					return 1;
					break;
				
				case 2:
					GlobalFunc_585(8, iParam2);
					return 1;
					break;
				
				case 3:
					GlobalFunc_585(2, iParam2);
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					GlobalFunc_585(24, iParam2);
					return 1;
					break;
				
				case 1:
					GlobalFunc_585(25, iParam2);
					return 1;
					break;
				
				case 2:
					GlobalFunc_585(26, iParam2);
					return 1;
					break;
				
				case 3:
					GlobalFunc_585(3, iParam2);
					return 1;
					break;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

void func_654(int iParam0)//Position - 0x6B7FD
{
	switch (iParam0)
	{
		case 0:
			func_655(0, 0, 1);
			func_655(0, 1, 1);
			func_655(0, 2, 1);
			func_655(0, 3, 1);
			func_655(0, 4, 1);
			func_655(0, 5, 1);
			func_655(0, 6, 1);
			switch (GlobalFunc_597(7))
			{
				case 1:
					func_655(0, 8, 1);
					break;
				
				case 2:
					func_655(0, 7, 1);
					break;
			}
			break;
		
		case 1:
			func_655(1, 0, 1);
			func_655(1, 1, 1);
			break;
		
		case 2:
			func_655(2, 0, 1);
			func_655(2, 1, 1);
			break;
		
		case 3:
			func_655(3, 0, 1);
			func_655(3, 1, 1);
			func_655(3, 2, 1);
			func_655(3, 3, 1);
			break;
		
		case 4:
			func_655(4, 0, 1);
			func_655(4, 1, 1);
			break;
		
		default:
			break;
	}
}

void func_655(int iParam0, int iParam1, int iParam2)//Position - 0x6B8DE
{
	if (iParam2 == 1)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iParam0]), iParam1);
	}
	MISC::SET_BIT(&Global_86375, iParam0);
}






Vector3 func_661(int iParam0)//Position - 0x6BB70
{
	int iVar0;
	
	iVar0 = func_662(iParam0);
	if (iVar0 != 5)
	{
		return Global_Heist_Start_Locations[iVar0 /*15*/].f_3;
	}
	return 0f, 0f, 0f;
}

int func_662(int iParam0)//Position - 0x6BB98
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
	}
	return 5;
}

char* func_663(int iParam0)//Position - 0x6BBE9
{
	switch (iParam0)
	{
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
			return "heist_ctrl_agency";
			break;
		
		case 71:
		case 74:
		case 75:
			return "heist_ctrl_docks";
			break;
		
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
			return "heist_ctrl_finale";
			break;
		
		case 86:
		case 87:
		case 88:
		case 90:
			return "heist_ctrl_jewel";
			break;
		
		case 91:
		case 92:
		case 93:
			return "heist_ctrl_rural";
			break;
		
		default:
			return "NONE";
			break;
	}
	return "NONE";
}

int func_664(int iParam0)//Position - 0x6BCD3
{
	switch (iParam0)
	{
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
			return 3;
			break;
		
		case 71:
		case 74:
		case 75:
			return 1;
			break;
		
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
			return 4;
			break;
		
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 0;
			break;
		
		case 91:
		case 93:
			return 2;
			break;
		
		default:
			return 5;
			break;
	}
	return 5;
}

void func_665()//Position - 0x6BDA3
{
	struct<27> Var0;
	struct<3> Var32;
	
	MISC::SET_GAME_PAUSED(1);
	if (Global_68491 < 0 || Global_68491 >= 94)
	{
		func_5(1);
	}
	if (Global_68491.f_1 == 7)
	{
		Global_68490 = 1;
		GlobalFunc_6675(Global_68491, &Var0);
	}
	switch (Global_68491.f_1)
	{
		case 1:
			MemCopy(&Local_99, {Global_81155[Global_68491 /*34*/]}, 8);
			uLocal_107 = Global_81155[Global_68491 /*34*/].f_11;
			break;
		
		case 7:
			StringCopy(&Local_99, Var0, 32);
			uLocal_107 = Var0.f_26;
			break;
		
		default:
			break;
	}
	MISC::_SET_PLAYER_ROCKSTAR_EDITOR_DISABLED(1);
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
		SYSTEM::WAIT(0);
	}
	GlobalFunc_10869();
	Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x.RP_Velocity_x = { Global_68496 };
	func_813(0, 1, 0);
	MISC::QUEUE_MISSION_REPEAT_SAVE();
	while (MISC::GET_STATUS_OF_MISSION_REPEAT_SAVE() == 1)
	{
		SYSTEM::WAIT(0);
	}
	if (MISC::GET_STATUS_OF_MISSION_REPEAT_SAVE() == 2)
	{
		func_5(1);
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			Var32 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var32, &(Var32.f_2));
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var32, 1, 0, 0, 1);
			if (FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
			{
				FIRE::STOP_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				FIRE::STOP_FIRE_IN_RANGE(Var32, 50f);
			}
			MISC::CLEAR_AREA_OF_PROJECTILES(Var32, 50f, 0);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		}
	}
	func_539(1);
	func_808(0);
	uLocal_109 = Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset;
	func_666(Global_68491, Global_68491.f_1);
	if (Global_68491.f_1 == 1 && MISC::IS_BIT_SET(Global_81155[Global_68491 /*34*/].f_15, 14))
	{
		iLocal_97 = 1;
	}
	else
	{
		iLocal_97 = 2;
	}
}

void func_666(int iParam0, int iParam1)//Position - 0x6BF8B
{
	int iVar0;
	int iVar1;
	struct<2> Var2[157];
	int iVar317;
	int iVar318;
	int iVar319;
	int iVar320;
	int iVar321;
	int iVar322;
	int iVar323;
	int iVar324;
	var uVar325;
	int iVar326;
	int iVar327;
	int iVar328;
	
	if (94 != 94 || 63 != 63)
	{
	}
	iVar317 = -1;
	if (GlobalFunc_892(6, 1))
	{
		iVar324 = 1;
	}
	uVar325 = Global_SAVE_DATA.COMPONENTS_ARRAY.FRANKLIN_ORIGINAL_OUTFIT_ID;
	iVar318 = GlobalFunc_597(7);
	iVar319 = GlobalFunc_485(43);
	iVar320 = GlobalFunc_485(76);
	iVar321 = GlobalFunc_597(10);
	iVar322 = GlobalFunc_597(11);
	iVar323 = GlobalFunc_485(101);
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[24 /*6*/] == 1)
	{
		iVar317 = 24;
	}
	else if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[25 /*6*/] == 1)
	{
		iVar317 = 25;
	}
	else if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[27 /*6*/] == 1)
	{
		iVar317 = 27;
	}
	iVar1 = GlobalFunc_2050(iParam0, iParam1);
	if (iParam1 == 1)
	{
	}
	GlobalFunc_8514(&Var2, 1, 1, 0);
	func_720();
	if (iVar324 == 1)
	{
		GlobalFunc_2196(6, 1, 1);
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.FRANKLIN_ORIGINAL_OUTFIT_ID = uVar325;
	iVar326 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		if (iVar0 == iVar1)
		{
			iVar326 = 1;
		}
		else
		{
			iVar326 = 0;
		}
		switch (Var2[iVar0 /*2*/].f_1)
		{
			case 1:
				func_672(Var2[iVar0 /*2*/], 1, iVar326, iVar317);
				if (iVar0 < iVar1)
				{
					func_672(Var2[iVar0 /*2*/], 0, iVar326, iVar317);
					if (GlobalFunc_2049(Var2[iVar0 /*2*/]))
					{
						if (iVar317 == Var2[iVar0 /*2*/])
						{
							GlobalFunc_57(Var2[iVar0 /*2*/], 0);
						}
					}
					else
					{
						GlobalFunc_57(Var2[iVar0 /*2*/], 0);
					}
				}
				break;
			
			case 7:
				func_667(Var2[iVar0 /*2*/], 1);
				if (iVar0 < iVar1)
				{
					func_667(Var2[iVar0 /*2*/], 0);
					GlobalFunc_57(Var2[iVar0 /*2*/], 1);
				}
				break;
			
			default:
				break;
		}
		iVar0++;
	}
	Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.iMissionsCompleted = 0;
	iVar327 = 0;
	while (iVar327 <= 99)
	{
		Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar327 /*6*/].f_3 = -1;
		iVar327++;
	}
	Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.iRCMissionsCompleted = 0;
	iVar327 = 0;
	while (iVar327 <= (63 - 1))
	{
		Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar327 /*6*/].f_3 = -1;
		iVar327++;
	}
	iVar327 = 0;
	while (iVar327 <= iVar1)
	{
		if (Var2[iVar327 /*2*/].f_1 == 1)
		{
			iVar328 = Var2[iVar327 /*2*/];
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar328 /*6*/].f_3 = iVar327;
			Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.iMissionsCompleted++;
		}
		else if (Var2[iVar327 /*2*/].f_1 == 7)
		{
			iVar328 = Var2[iVar327 /*2*/];
			Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar328 /*6*/].f_3 = iVar327;
			Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.iRCMissionsCompleted++;
		}
		iVar327++;
	}
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[90 /*6*/].f_3 > -1)
	{
		GlobalFunc_3026(7, iVar318);
	}
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[41 /*6*/].f_3 > -1)
	{
		GlobalFunc_585(43, iVar319);
	}
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[9 /*6*/].f_3 > -1)
	{
		GlobalFunc_585(76, iVar320);
	}
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[69 /*6*/].f_3 > -1 || Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[70 /*6*/].f_3 > -1)
	{
		GlobalFunc_3026(10, iVar321);
	}
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[84 /*6*/].f_3 > -1 || Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[85 /*6*/].f_3 > -1)
	{
		GlobalFunc_3026(11, iVar322);
	}
	if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[43 /*6*/].f_3 > -1)
	{
		GlobalFunc_585(101, iVar323);
	}
}

void func_667(int iParam0, int iParam1)//Position - 0x6C332
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(16, 0, 0);
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(16, 0, 0);
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 3:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(49, 1, 0);
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 7:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				GlobalFunc_585(86, 1);
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
				GlobalFunc_585(87, 1);
			}
			else
			{
				GlobalFunc_9621(60, 0, 0);
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				GlobalFunc_585(88, 1);
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				GlobalFunc_585(90, 1);
			}
			else
			{
				GlobalFunc_9621(55, 0, 0);
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				GlobalFunc_585(89, 1);
			}
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				GlobalFunc_585(91, 1);
				GlobalFunc_585(92, 1);
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				GlobalFunc_585(94, 1);
			}
			break;
		
		case 17:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(52, 1, 0);
			}
			break;
		
		case 18:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 19:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(61, 0, 0);
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(61, 2, 0);
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(61, 1, 0);
			}
			break;
		
		case 24:
			break;
		
		case 25:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(54, 2, 0);
			}
			break;
		
		case 26:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(58, 2, 0);
			}
			break;
		
		case 28:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 29:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(22, 1, 0, 1, 0);
			}
			break;
		
		case 30:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 31:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(62, 2, 0);
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(56, 2, 0);
				GlobalFunc_9621(57, 2, 0);
			}
			break;
		
		case 33:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 34:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(59, 2, 0);
			}
			break;
		
		case 35:
			break;
		
		case 36:
			break;
		
		case 37:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(64, 2, 0);
			}
			break;
		
		case 38:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 39:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 45:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 46:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(50, 1, 0);
			}
			break;
		
		case 47:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 50:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 51:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 52:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 53:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 54:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 55:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 56:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 57:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 58:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(103, 1, 0);
			}
			break;
		
		case 59:
			break;
		
		case 60:
			break;
		
		case 61:
			break;
		
		case 62:
			break;
		
		default:
			break;
	}
}





void func_672(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6CAD9
{
	bool bVar0;
	
	bVar0 = true;
	if (iParam1 || iParam2)
	{
		bVar0 = false;
	}
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
			}
			else
			{
				func_712(5, 1, 1);
				func_712(7, 0, 0);
				func_712(8, 0, 0);
				func_712(9, 0, 0);
				GlobalFunc_585(66, 0);
				GlobalFunc_9621(131, 0, 0);
				GlobalFunc_9621(131, 1, 0);
				GlobalFunc_66(58, 0);
				GlobalFunc_66(71, 0);
				GlobalFunc_4927(2, 1);
				GlobalFunc_4927(59, 1);
				func_711(1, 1);
				func_710("controller_taxi", 1424);
				GlobalFunc_66(94, 0);
				GlobalFunc_66(31, 0);
				GlobalFunc_66(32, 0);
				GlobalFunc_66(34, 0);
				GlobalFunc_66(15, 0);
				GlobalFunc_10617(81, 0);
				GlobalFunc_10617(82, 0);
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(79, 1, 0, 1, 0);
				func_709(1);
				func_708(0);
				func_694(joaat("weapon_pistol"), 1);
				func_694(joaat("weapon_microsmg"), 1);
				func_694(joaat("weapon_knife"), 1);
				func_694(joaat("weapon_pumpshotgun"), 1);
				GlobalFunc_7621(179, 1, 0, 1, 0);
				GlobalFunc_66(41, 0);
				GlobalFunc_9621(17, 0, 0);
				GlobalFunc_9621(14, 0, 0);
				GlobalFunc_9621(15, 0, 0);
				GlobalFunc_8596(19, 1, 0);
				GlobalFunc_8596(14, 0, 0);
				GlobalFunc_8596(17, 0, 0);
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
			}
			else
			{
				func_712(0, 1, 1);
				GlobalFunc_4927(0, 1);
				GlobalFunc_4927(36, 1);
				GlobalFunc_7621(179, 1, 0, 1, 0);
				GlobalFunc_7621(174, 1, 0, 1, 0);
				GlobalFunc_7621(178, 1, 0, 1, 0);
				GlobalFunc_7621(175, 1, 0, 1, 0);
				GlobalFunc_7621(176, 1, 0, 1, 0);
				GlobalFunc_7621(177, 1, 0, 1, 0);
				GlobalFunc_66(42, 0);
				GlobalFunc_5671(0, 1);
				GlobalFunc_585(115, 1);
				func_694(joaat("weapon_pistol"), 1);
			}
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				GlobalFunc_585(48, 1);
			}
			else
			{
				GlobalFunc_585(48, 1);
				GlobalFunc_66(45, 0);
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 7:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_585(49, 1);
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				GlobalFunc_7621(77, 1, 0, 1, 0);
				GlobalFunc_10617(79, 0);
				GlobalFunc_10617(80, 0);
				func_683(0, 1, 0, 10);
				func_683(1, 2, 0, 10);
				func_683(2, 0, 0, 10);
			}
			else
			{
				GlobalFunc_7621(8, 1, 0, 1, 0);
				GlobalFunc_7621(9, 1, 0, 1, 0);
				GlobalFunc_7621(127, 1, 0, 1, 0);
				GlobalFunc_7621(128, 1, 0, 1, 0);
				GlobalFunc_7621(126, 1, 0, 1, 0);
				func_694(joaat("weapon_nightstick"), 1);
				GlobalFunc_66(162, 0);
				GlobalFunc_9621(29, 1, 0);
				GlobalFunc_9621(45, 1, 0);
				GlobalFunc_9621(29, 2, 0);
			}
			break;
		
		case 9:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(10, 1, 0, 1, 0);
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(7, 1, 0, 1, 0);
				GlobalFunc_7621(162, 1, 0, 1, 0);
				func_683(1, 19, 0, 11);
				func_683(1, 2, 0, 11);
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(8, 0, 0, 1, 0);
				GlobalFunc_7621(9, 0, 0, 1, 0);
				GlobalFunc_7621(10, 0, 0, 1, 0);
				GlobalFunc_7621(7, 0, 0, 1, 0);
				GlobalFunc_7621(77, 2, 0, 1, 0);
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				GlobalFunc_10617(67, 0);
				GlobalFunc_10617(68, 0);
				GlobalFunc_10617(69, 0);
			}
			else
			{
				func_694(joaat("weapon_grenadelauncher"), 1);
				GlobalFunc_9621(21, 2, 0);
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(50, 1, 0, 1, 0);
				GlobalFunc_7621(51, 1, 0, 1, 0);
				GlobalFunc_7621(52, 1, 0, 1, 0);
				GlobalFunc_7621(53, 1, 0, 1, 0);
				GlobalFunc_7621(54, 2, 0, 1, 0);
				GlobalFunc_7621(55, 2, 0, 1, 0);
				GlobalFunc_66(141, 0);
				func_694(joaat("weapon_sawnoffshotgun"), 1);
				func_694(joaat("weapon_petrolcan"), 1);
			}
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				GlobalFunc_585(130, 1);
				GlobalFunc_585(120, 1);
				GlobalFunc_7621(78, 0, 0, 1, 0);
				GlobalFunc_66(135, 0);
				func_682(1, 0, 1);
				func_682(1, 2, 1);
				func_682(14, 1, 1);
				func_682(19, 2, 1);
			}
			else
			{
				GlobalFunc_5671(0, 1);
				GlobalFunc_5671(2, 1);
				GlobalFunc_7621(78, 2, 0, 1, 0);
				GlobalFunc_7621(6, 1, 0, 1, 0);
				func_694(joaat("gadget_parachute"), 1);
				GlobalFunc_66(70, 0);
				GlobalFunc_66(123, 0);
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
			}
			else
			{
				func_694(joaat("weapon_heavysniper"), 1);
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(65, 1, 0, 1, 0);
				GlobalFunc_7621(66, 1, 0, 1, 0);
				GlobalFunc_7621(0, 0, 0, 1, 0);
				GlobalFunc_4927(0, 1);
			}
			break;
		
		case 17:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_8596(14, 1, 0);
				GlobalFunc_9621(1, 0, 0);
				GlobalFunc_9621(0, 1, 0);
				GlobalFunc_9621(14, 1, 0);
				GlobalFunc_7621(179, 1, 0, 1, 0);
				GlobalFunc_7621(174, 2, 0, 1, 0);
				GlobalFunc_7621(178, 2, 0, 1, 0);
				GlobalFunc_7621(175, 2, 0, 1, 0);
				GlobalFunc_7621(176, 2, 0, 1, 0);
				GlobalFunc_7621(177, 2, 0, 1, 0);
				GlobalFunc_4927(36, 0);
				func_711(0, 1);
				GlobalFunc_66(124, 0);
				GlobalFunc_66(122, 0);
			}
			break;
		
		case 19:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(2, 1, 0, 1, 0);
				GlobalFunc_585(58, 1);
				GlobalFunc_9621(12, 0, 0);
				GlobalFunc_9621(31, 0, 0);
			}
			break;
		
		case 18:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(14, 1, 0, 1, 0);
				GlobalFunc_585(123, 1);
				GlobalFunc_4927(9, 1);
				GlobalFunc_4927(10, 1);
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(14, 2, 0);
				GlobalFunc_8596(14, 2, 0);
				GlobalFunc_9621(31, 0, 0);
				GlobalFunc_7621(2, 2, 0, 1, 0);
				GlobalFunc_7621(135, 1, 0, 1, 0);
				GlobalFunc_7621(138, 1, 0, 1, 0);
				GlobalFunc_7621(144, 1, 0, 1, 0);
				GlobalFunc_7621(122, 1, 0, 1, 0);
				GlobalFunc_9621(0, 2, 0);
				GlobalFunc_9621(2, 0, 0);
				GlobalFunc_8596(0, 2, 0);
				GlobalFunc_7621(116, 1, 0, 1, 0);
				GlobalFunc_5671(1, 1);
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(118, 1, 0, 1, 0);
				GlobalFunc_7621(117, 1, 0, 1, 0);
				GlobalFunc_7621(119, 1, 0, 1, 0);
				GlobalFunc_7621(125, 1, 0, 1, 0);
				GlobalFunc_7621(120, 1, 0, 1, 0);
				GlobalFunc_585(128, 1);
				func_682(17, 0, 1);
				func_682(14, 0, 1);
				GlobalFunc_66(81, 0);
				GlobalFunc_66(133, 0);
				GlobalFunc_66(132, 0);
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_66(148, 0);
				func_682(17, 0, 0);
				func_682(14, 0, 0);
				GlobalFunc_7621(116, 0, 0, 1, 0);
				GlobalFunc_7621(118, 0, 0, 1, 0);
				GlobalFunc_7621(117, 0, 0, 1, 0);
				GlobalFunc_7621(119, 0, 0, 1, 0);
				GlobalFunc_7621(125, 0, 0, 1, 0);
				GlobalFunc_7621(120, 0, 0, 1, 0);
			}
			break;
		
		case 29:
			if (iParam1 == 1)
			{
			}
			else
			{
				func_694(joaat("weapon_combatpistol"), 1);
				GlobalFunc_7621(2, 0, 0, 1, 0);
			}
			break;
		
		case 30:
			if (iParam1 == 1)
			{
			}
			else
			{
				func_694(joaat("weapon_appistol"), 1);
				func_694(joaat("weapon_heavysniper"), 1);
				GlobalFunc_9621(23, 0, 0);
				GlobalFunc_9621(2, 1, 0);
				GlobalFunc_9621(1, 2, 0);
				func_677(0, 1, 1);
				func_677(1, 2, 1);
				func_677(2, 0, 1);
				GlobalFunc_585(44, 0);
				GlobalFunc_66(48, 0);
			}
			break;
		
		case 31:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(142, 1, 0, 1, 0);
				func_677(0, 1, 0);
				func_677(1, 2, 0);
				func_677(2, 0, 0);
				GlobalFunc_9621(23, 1, 0);
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(23, 1, 0);
				GlobalFunc_9621(30, 1, 0);
				GlobalFunc_9621(30, 2, 0);
				func_694(joaat("weapon_rpg"), 1);
				GlobalFunc_66(154, 0);
			}
			break;
		
		case 33:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_4927(40, 1);
				GlobalFunc_585(47, 0);
				GlobalFunc_66(49, 0);
				GlobalFunc_7621(167, 0, 0, 1, 0);
			}
			break;
		
		case 34:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_4927(41, 1);
			}
			break;
		
		case 35:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				GlobalFunc_66(33, 0);
			}
			else
			{
				GlobalFunc_66(33, 0);
				GlobalFunc_7621(167, 1, 0, 1, 0);
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				GlobalFunc_7621(167, 0, 0, 1, 0);
			}
			else
			{
				GlobalFunc_9532(28, 1, 0);
			}
			break;
		
		case 38:
			if (iParam1 == 1)
			{
				GlobalFunc_4927(41, 0);
				GlobalFunc_4927(40, 0);
			}
			else
			{
				GlobalFunc_66(146, 0);
				GlobalFunc_9621(29, 0, 0);
				GlobalFunc_7621(1, 1, 0, 1, 0);
				GlobalFunc_7621(137, 1, 0, 1, 0);
				GlobalFunc_7621(156, 0, 0, 1, 0);
				GlobalFunc_7621(157, 1, 0, 1, 0);
				func_694(joaat("weapon_assaultrifle"), 1);
				func_694(joaat("weapon_assaultshotgun"), 1);
				func_694(joaat("weapon_stickybomb"), 1);
				func_694(joaat("weapon_combatmg"), 1);
			}
			break;
		
		case 39:
			if (iParam1 == 1)
			{
			}
			else
			{
				func_694(joaat("weapon_carbinerifle"), 1);
				func_694(joaat("weapon_stungun"), 1);
				GlobalFunc_11088(GlobalFunc_4917(2), 12, 15, 1, 1);
				GlobalFunc_7621(78, 0, 0, 1, 0);
				GlobalFunc_7621(158, 1, 0, 1, 0);
				GlobalFunc_7621(171, 1, 0, 1, 0);
				GlobalFunc_7621(105, 1, 0, 1, 0);
				GlobalFunc_7621(106, 1, 0, 1, 0);
				GlobalFunc_7621(107, 1, 0, 1, 0);
				GlobalFunc_7621(108, 1, 0, 1, 0);
				GlobalFunc_7621(109, 1, 0, 1, 0);
				GlobalFunc_7621(110, 1, 0, 1, 0);
				GlobalFunc_585(131, 1);
				GlobalFunc_585(120, 1);
				func_682(1, 0, 0);
				func_682(1, 2, 0);
				func_682(14, 1, 0);
				func_682(19, 2, 0);
				func_712(1, 0, 0);
				func_712(0, 1, 1);
				GlobalFunc_4927(0, 1);
				GlobalFunc_4927(1, 0);
				GlobalFunc_7621(134, 0, 0, 1, 0);
				GlobalFunc_7621(132, 0, 0, 1, 0);
				GlobalFunc_7621(133, 0, 0, 1, 0);
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 24:
			if (iParam3 == iParam0 || iParam2 == 1)
			{
				if (iParam1 == 1)
				{
					GlobalFunc_585(134, 1);
				}
				else
				{
					GlobalFunc_7621(56, 1, 0, 1, 0);
					GlobalFunc_7621(57, 0, 0, 1, 0);
					GlobalFunc_7621(58, 0, 0, 1, 0);
					GlobalFunc_7621(59, 0, 0, 1, 0);
				}
			}
			break;
		
		case 25:
			if (iParam3 == iParam0 || iParam2 == 1)
			{
				if (iParam1 == 1)
				{
					GlobalFunc_585(134, 1);
				}
				else
				{
					GlobalFunc_7621(11, 1, 0, 1, 0);
				}
			}
			break;
		
		case 26:
			if (iParam3 == 27 || iParam2 == 1)
			{
				if (iParam1 == 1)
				{
					GlobalFunc_585(134, 1);
				}
			}
			break;
		
		case 27:
			if (iParam3 == iParam0 || iParam2 == 1)
			{
				if (iParam1 == 1)
				{
					func_694(joaat("weapon_advancedrifle"), 1);
				}
				else
				{
					GlobalFunc_585(129, 0);
					func_682(0, 2, 0);
				}
			}
			break;
		
		case 28:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_66(130, 0);
				GlobalFunc_66(207, 0);
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(154, 1, 0, 1, 0);
				GlobalFunc_66(41, 0);
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(155, 1, 0, 1, 0);
				GlobalFunc_8596(19, 2, 0);
				GlobalFunc_9621(19, 2, 0);
				GlobalFunc_7621(3, 0, 0, 1, 0);
				GlobalFunc_4927(35, 0);
				GlobalFunc_7621(4, 0, 0, 1, 0);
				func_682(1, 19, 1);
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(161, 1, 0, 1, 0);
				func_682(1, 19, 0);
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
			}
			else
			{
				func_694(joaat("weapon_sawnoffshotgun"), 1);
				func_694(joaat("weapon_pumpshotgun"), 1);
				GlobalFunc_9621(37, 1, 0);
				func_709(0);
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(12, 0, 0);
				GlobalFunc_11088(GlobalFunc_4917(1), 12, 43, 1, 1);
				GlobalFunc_11088(GlobalFunc_4917(1), 12, 44, 1, 1);
				GlobalFunc_11088(GlobalFunc_4917(1), 12, 45, 1, 1);
				GlobalFunc_11088(GlobalFunc_4917(1), 12, 46, 1, 1);
				GlobalFunc_66(124, 0);
				GlobalFunc_66(88, 0);
				GlobalFunc_66(160, 0);
			}
			break;
		
		case 45:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(130, 1, 0, 1, 0);
				GlobalFunc_7621(129, 1, 0, 1, 0);
				GlobalFunc_7621(131, 1, 0, 1, 0);
				GlobalFunc_7621(134, 1, 0, 1, 0);
				GlobalFunc_7621(132, 1, 0, 1, 0);
				GlobalFunc_7621(133, 1, 0, 1, 0);
				GlobalFunc_585(59, 0);
				GlobalFunc_5671(0, 0);
				GlobalFunc_5671(2, 0);
				func_712(0, 0, 0);
				func_712(3, 0, 0);
				func_712(4, 0, 0);
				func_712(1, 1, 1);
				func_712(2, 1, 1);
				GlobalFunc_4927(0, 0);
				GlobalFunc_4927(1, 1);
				GlobalFunc_4927(7, 0);
				GlobalFunc_4927(6, 1);
				GlobalFunc_4927(8, 0);
				GlobalFunc_9621(31, 0, 0);
				GlobalFunc_9621(31, 2, 0);
			}
			break;
		
		case 46:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_5671(0, 0);
				GlobalFunc_585(129, 1);
				func_682(0, 1, 1);
				func_682(0, 2, 1);
				func_677(1, 2, 1);
				GlobalFunc_9621(35, 2, 0);
				GlobalFunc_11088(GlobalFunc_4917(2), 12, 23, 1, 1);
				GlobalFunc_7621(124, 1, 0, 1, 0);
			}
			break;
		
		case 47:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_5671(0, 1);
				func_682(0, 1, 0);
				GlobalFunc_7621(81, 1, 0, 1, 0);
				GlobalFunc_7621(82, 0, 0, 1, 0);
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(81, 0, 0, 1, 0);
				GlobalFunc_7621(82, 0, 0, 1, 0);
				func_677(1, 2, 0);
				GlobalFunc_66(56, 0);
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(26, 0, 0, 1, 0);
				GlobalFunc_7621(34, 0, 0, 1, 0);
				GlobalFunc_7621(123, 1, 0, 1, 0);
				GlobalFunc_11088(GlobalFunc_4917(0), 12, 16, 1, 1);
				GlobalFunc_11088(GlobalFunc_4917(1), 12, 11, 1, 1);
			}
			break;
		
		case 50:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 51:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 52:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 53:
			if (iParam1 == 1)
			{
				GlobalFunc_585(115, 1);
				GlobalFunc_585(117, 1);
				GlobalFunc_7621(14, 1, 0, 1, 0);
				func_708(1);
				GlobalFunc_66(57, 0);
				func_712(7, 1, 0);
				func_712(8, 1, 0);
				func_712(9, 1, 0);
			}
			else
			{
				GlobalFunc_9621(18, 1, 0);
				GlobalFunc_9621(19, 1, 0);
				GlobalFunc_9621(43, 1, 0);
				GlobalFunc_9621(44, 1, 0);
				GlobalFunc_9621(53, 1, 0);
				GlobalFunc_9621(36, 0, 0);
				GlobalFunc_9621(30, 0, 0);
				GlobalFunc_9621(12, 0, 0);
				GlobalFunc_8596(0, 1, 0);
				GlobalFunc_8596(2, 1, 0);
				GlobalFunc_66(140, 0);
				GlobalFunc_585(124, 1);
				GlobalFunc_585(125, 1);
				GlobalFunc_66(90, 0);
				GlobalFunc_66(91, 0);
				GlobalFunc_585(66, 1);
				GlobalFunc_585(115, 0);
				GlobalFunc_585(117, 0);
				GlobalFunc_585(116, 1);
				GlobalFunc_5671(0, 0);
				GlobalFunc_5671(1, 1);
				GlobalFunc_5671(2, 0);
			}
			break;
		
		case 54:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 55:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 56:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 57:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 58:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 59:
			if (iParam1 == 1)
			{
				GlobalFunc_585(65, 1);
			}
			else
			{
				GlobalFunc_66(143, 0);
				func_694(joaat("weapon_remotesniper"), 1);
				GlobalFunc_9621(26, 0, 0);
			}
			break;
		
		case 60:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_585(66, 1);
			}
			break;
		
		case 61:
			if (iParam1 == 1)
			{
			}
			else
			{
				func_694(joaat("weapon_smg"), 1);
				GlobalFunc_7621(103, 1, 0, 1, 0);
				GlobalFunc_7621(102, 1, 0, 1, 0);
				GlobalFunc_7621(104, 1, 0, 1, 0);
				GlobalFunc_7621(111, 1, 0, 1, 0);
				GlobalFunc_7621(112, 1, 0, 1, 0);
			}
			break;
		
		case 62:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_585(58, 1);
				GlobalFunc_5671(0, 0);
				GlobalFunc_5671(1, 0);
				GlobalFunc_5671(2, 1);
				GlobalFunc_585(117, 1);
				func_712(2, 1, 1);
				GlobalFunc_66(115, 0);
				GlobalFunc_7621(3, 1, 0, 1, 0);
				GlobalFunc_4927(35, 1);
				GlobalFunc_7621(4, 1, 0, 1, 0);
				func_711(2, 1);
				GlobalFunc_4927(6, 1);
				func_694(joaat("weapon_pumpshotgun"), 1);
				GlobalFunc_10617(105, 0);
				GlobalFunc_7621(179, 1, 0, 1, 0);
				GlobalFunc_7621(174, 0, 0, 1, 0);
				GlobalFunc_7621(178, 0, 0, 1, 0);
				GlobalFunc_7621(175, 0, 0, 1, 0);
				GlobalFunc_7621(176, 0, 0, 1, 0);
				GlobalFunc_7621(177, 0, 0, 1, 0);
				GlobalFunc_7621(173, 1, 0, 1, 0);
				GlobalFunc_4927(36, 0);
				GlobalFunc_9532(29, 1, 0);
				GlobalFunc_7621(78, 1, 0, 1, 0);
			}
			break;
		
		case 63:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_66(87, 0);
				GlobalFunc_66(99, 0);
				GlobalFunc_66(161, 0);
				func_694(joaat("weapon_sniperrifle"), 1);
				func_694(joaat("weapon_molotov"), 1);
				GlobalFunc_7621(78, 1, 0, 1, 0);
			}
			break;
		
		case 64:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_9621(131, 2, 0);
				GlobalFunc_7621(38, 1, 0, 1, 0);
				GlobalFunc_7621(39, 1, 0, 1, 0);
				GlobalFunc_7621(40, 1, 0, 1, 0);
				GlobalFunc_7621(41, 1, 0, 1, 0);
				GlobalFunc_7621(42, 1, 0, 1, 0);
				GlobalFunc_7621(43, 1, 0, 1, 0);
				GlobalFunc_7621(44, 1, 0, 1, 0);
				GlobalFunc_7621(45, 1, 0, 1, 0);
				GlobalFunc_7621(46, 1, 0, 1, 0);
				GlobalFunc_7621(47, 1, 0, 1, 0);
				GlobalFunc_7621(37, 1, 0, 1, 0);
				func_712(3, 1, 1);
				func_712(2, 1, 0);
				GlobalFunc_4927(7, 1);
				GlobalFunc_4927(6, 0);
				GlobalFunc_585(59, 1);
				GlobalFunc_5671(0, 1);
				GlobalFunc_5671(1, 1);
				GlobalFunc_585(58, 0);
				func_694(joaat("weapon_stickybomb"), 1);
				GlobalFunc_11088(GlobalFunc_4917(2), 12, 45, 1, 1);
				GlobalFunc_7621(192, 1, 0, 1, 0);
				GlobalFunc_7621(193, 1, 0, 1, 0);
				GlobalFunc_7621(191, 1, 0, 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				GlobalFunc_7621(135, 0, 0, 1, 0);
				GlobalFunc_7621(136, 0, 0, 1, 0);
				GlobalFunc_7621(137, 0, 0, 1, 0);
				GlobalFunc_7621(138, 0, 0, 1, 0);
				GlobalFunc_7621(141, 0, 0, 1, 0);
				GlobalFunc_7621(142, 0, 0, 1, 0);
				GlobalFunc_7621(144, 0, 0, 1, 0);
				GlobalFunc_7621(139, 0, 0, 1, 0);
				GlobalFunc_7621(140, 0, 0, 1, 0);
				GlobalFunc_7621(143, 0, 0, 1, 0);
			}
			else
			{
				GlobalFunc_7621(147, 1, 0, 1, 0);
				GlobalFunc_7621(148, 1, 0, 1, 0);
				GlobalFunc_7621(145, 2, 0, 1, 0);
				func_712(4, 1, 1);
				func_712(3, 0, 0);
				GlobalFunc_4927(7, 0);
				GlobalFunc_4927(8, 1);
				GlobalFunc_585(119, 1);
				GlobalFunc_7621(65, 0, 0, 1, 0);
				GlobalFunc_7621(66, 0, 0, 1, 0);
				GlobalFunc_7621(78, 0, 0, 1, 0);
			}
			break;
		
		case 66:
			if (iParam1 == 1)
			{
			}
			else
			{
				func_655(3, 0, 1);
				func_655(3, 1, 1);
				func_710("buildingSiteAmbience", 128);
				GlobalFunc_7621(165, 1, 0, 1, 0);
				GlobalFunc_585(11, 0);
				GlobalFunc_585(70, 1);
				GlobalFunc_7621(87, 1, 0, 1, 0);
			}
			break;
		
		case 67:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(87, 0, 0, 1, 0);
				func_655(3, 2, 1);
				GlobalFunc_585(70, 0);
				GlobalFunc_7621(166, 1, 0, 1, 0);
			}
			break;
		
		case 68:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(169, 1, 0, 1, 0);
				GlobalFunc_4927(43, 1);
				func_655(3, 7, 1);
				GlobalFunc_10617(62, 0);
				GlobalFunc_10617(63, 0);
			}
			break;
		
		case 69:
			if (iParam1 == 1)
			{
			}
			else
			{
				func_673();
			}
			break;
		
		case 70:
			if (iParam1 == 1)
			{
			}
			else
			{
				func_673();
			}
			break;
		
		case 71:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(145, 1, 0, 1, 0);
				GlobalFunc_7621(146, 0, 0, 1, 0);
				GlobalFunc_7621(141, 1, 0, 1, 0);
				GlobalFunc_7621(139, 0, 0, 1, 0);
				GlobalFunc_7621(140, 0, 0, 1, 0);
				GlobalFunc_7621(143, 1, 0, 1, 0);
			}
			break;
		
		case 72:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_66(119, 0);
				func_655(1, 5, 1);
				func_655(1, 7, 1);
				GlobalFunc_7621(136, 1, 0, 1, 0);
			}
			break;
		
		case 73:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_4927(38, 1);
				func_655(1, 6, 1);
			}
			break;
		
		case 74:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(12, 1, 0, 1, 0);
				GlobalFunc_7621(13, 1, 0, 1, 0);
				func_694(joaat("weapon_assaultshotgun"), 1);
				GlobalFunc_4927(38, 0);
				GlobalFunc_7621(2, 0, 0, 1, 0);
				GlobalFunc_585(1, 1);
			}
			break;
		
		case 75:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_4927(39, 1);
				GlobalFunc_4927(38, 0);
				GlobalFunc_7621(2, 0, 0, 1, 0);
				GlobalFunc_585(1, 1);
			}
			break;
		
		case 76:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_7621(172, 1, 0, 1, 0);
				func_655(4, 1, 1);
				GlobalFunc_66(155, 0);
			}
			break;
		
		case 77:
			if (iParam1 == 1)
			{
			}
			break;
		
		case 78:
			if (iParam1 == 1)
			{
			}
			else
			{
				func_655(4, 5, 1);
				GlobalFunc_66(104, 0);
				func_655(4, 6, 1);
			}
			break;
		
		case 84:
			if (iParam1 == 1)
			{
			}
			else
			{
				func_694(joaat("weapon_appistol"), 1);
				func_694(joaat("weapon_pumpshotgun"), 1);
				GlobalFunc_585(3, 1);
				func_694(joaat("weapon_advancedrifle"), 1);
			}
			break;
		
		case joaat("mpsv_lp0_31"):
			if (iParam1 == 1)
			{
			}
			else
			{
				func_655(4, 7, 1);
				GlobalFunc_66(120, 0);
				GlobalFunc_66(105, 0);
			}
			break;
		
		case 80:
			if (iParam1 == 1)
			{
				GlobalFunc_585(30, 0);
				GlobalFunc_66(102, 0);
			}
			else
			{
				GlobalFunc_66(106, 0);
			}
			break;
		
		case 81:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_66(106, 0);
			}
			break;
		
		case 82:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_66(106, 0);
			}
			break;
		
		case 83:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_66(107, 0);
			}
			break;
		
		case 85:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_585(3, 1);
				func_694(joaat("weapon_advancedrifle"), 1);
			}
			break;
		
		case 86:
			if (iParam1 == 1)
			{
				GlobalFunc_7621(70, 1, 0, 1, 0);
				GlobalFunc_7621(71, 1, 0, 1, 0);
				GlobalFunc_7621(73, 1, 0, 1, 0);
				GlobalFunc_7621(72, 0, 0, 1, 0);
				GlobalFunc_7621(74, 0, 0, 1, 0);
				GlobalFunc_10617(62, 0);
				GlobalFunc_10617(63, 0);
			}
			break;
		
		case 87:
			if (iParam1 == 1)
			{
				GlobalFunc_7621(182, 1, 0, 1, 0);
				GlobalFunc_7621(183, 1, 0, 1, 0);
				GlobalFunc_7621(184, 1, 0, 1, 0);
			}
			else
			{
				func_655(0, 9, 1);
				GlobalFunc_7621(182, 0, 0, 1, 0);
				GlobalFunc_7621(183, 0, 0, 1, 0);
				GlobalFunc_7621(184, 0, 0, 1, 0);
				GlobalFunc_7621(164, 1, 0, 1, 0);
				GlobalFunc_66(117, 0);
			}
			break;
		
		case 89:
			if (iParam1 == 1)
			{
			}
			else
			{
				func_655(0, 11, 1);
			}
			break;
		
		case 88:
			if (iParam1 == 1)
			{
				GlobalFunc_66(118, 0);
			}
			else
			{
				func_655(0, 10, 1);
			}
			break;
		
		case 90:
			if (iParam1 == 1)
			{
				func_655(0, 4, 1);
			}
			else
			{
				GlobalFunc_7621(88, 2, 0, 1, 0);
				GlobalFunc_7621(89, 0, 0, 1, 0);
				GlobalFunc_7621(164, 0, 0, 1, 0);
				GlobalFunc_7621(70, 0, 0, 1, 0);
				GlobalFunc_7621(71, 0, 0, 1, 0);
				GlobalFunc_7621(73, 0, 0, 1, 0);
				GlobalFunc_7621(72, 0, 0, 1, 0);
				GlobalFunc_7621(74, 0, 0, 1, 0);
				GlobalFunc_66(101, 0);
				GlobalFunc_585(4, 1);
				GlobalFunc_585(72, 0);
				GlobalFunc_9621(12, 1, 0);
				GlobalFunc_9621(20, 2, 0);
				GlobalFunc_9621(24, 2, 0);
				GlobalFunc_9621(39, 2, 0);
				GlobalFunc_9621(34, 2, 0);
				GlobalFunc_9621(47, 2, 0);
				GlobalFunc_9621(131, 2, 0);
				func_694(joaat("weapon_carbinerifle"), 1);
				func_694(joaat("weapon_smokegrenade"), 1);
			}
			break;
		
		case 91:
			if (iParam1 == 1)
			{
				GlobalFunc_10617(67, 0);
				GlobalFunc_10617(68, 0);
				GlobalFunc_10617(69, 0);
				GlobalFunc_585(37, 0);
				GlobalFunc_585(38, 0);
			}
			else
			{
				func_655(2, 1, 1);
				GlobalFunc_9621(12, 2, 0);
			}
			break;
		
		case 92:
			if (iParam1 == 1)
			{
			}
			else
			{
				GlobalFunc_4927(42, 1);
				func_655(2, 3, 1);
			}
			break;
		
		case 93:
			if (iParam1 == 1)
			{
				GlobalFunc_7621(168, 1, 0, 1, 0);
			}
			else
			{
				GlobalFunc_7621(5, 1, 0, 1, 0);
				GlobalFunc_7621(196, 1, 0, 1, 0);
				GlobalFunc_4927(42, 0);
				GlobalFunc_585(5, 1);
				func_694(joaat("weapon_mg"), 1);
				func_694(joaat("weapon_minigun"), 1);
				GlobalFunc_11088(GlobalFunc_4917(2), 12, 39, 1, 1);
			}
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (bVar0)
	{
		Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iParam0 /*6*/] = 1;
	}
}

void func_673()//Position - 0x6E3F5
{
	GlobalFunc_585(2, 1);
	GlobalFunc_10617(62, 1);
	GlobalFunc_10617(63, 1);
	GlobalFunc_7621(36, 0, 0, 1, 0);
	GlobalFunc_7621(166, 0, 0, 1, 0);
	GlobalFunc_7621(169, 0, 0, 1, 0);
	GlobalFunc_7621(165, 0, 0, 1, 0);
	GlobalFunc_7621(70, 0, 0, 1, 0);
	GlobalFunc_7621(71, 0, 0, 1, 0);
	GlobalFunc_7621(73, 0, 0, 1, 0);
	GlobalFunc_7621(72, 2, 0, 1, 0);
	GlobalFunc_7621(74, 1, 0, 1, 0);
	GlobalFunc_4927(43, 0);
	GlobalFunc_7621(28, 1, 0, 1, 0);
	GlobalFunc_7621(26, 0, 0, 1, 0);
	GlobalFunc_7621(36, 0, 0, 1, 0);
	GlobalFunc_7621(27, 0, 0, 1, 0);
	GlobalFunc_7621(34, 0, 0, 1, 0);
	GlobalFunc_7621(29, 0, 0, 1, 0);
	GlobalFunc_7621(30, 0, 0, 1, 0);
	GlobalFunc_7621(31, 0, 0, 1, 0);
}




void func_677(int iParam0, int iParam1, bool bParam2)//Position - 0x6E5C2
{
	if (bParam2)
	{
		if (GlobalFunc_5985(iParam0, iParam1, 2))
		{
			return;
		}
		func_683(iParam0, iParam1, 2, -1);
	}
	else
	{
		if (!GlobalFunc_5985(iParam0, iParam1, 2))
		{
			return;
		}
		func_678(iParam0, iParam1, 2);
	}
}

int func_678(int iParam0, int iParam1, int iParam2)//Position - 0x6E606
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	iVar2 = GlobalFunc_768(iVar0, iVar1);
	iVar3 = 0;
	if (iVar2 != 10)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_2, iParam2))
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_2), iParam2);
			iVar3 = 1;
		}
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_2, 0))
		{
			Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_3 = -1;
		}
	}
	return iVar3;
}




void func_682(int iParam0, int iParam1, bool bParam2)//Position - 0x6E8B3
{
	if (bParam2)
	{
		if (GlobalFunc_5985(iParam0, iParam1, 1))
		{
			return;
		}
		func_683(iParam0, iParam1, 1, -1);
	}
	else
	{
		if (!GlobalFunc_5985(iParam0, iParam1, 1))
		{
			return;
		}
		func_678(iParam0, iParam1, 1);
	}
}

int func_683(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6E8F7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GlobalFunc_769(iParam0);
	iVar1 = GlobalFunc_769(iParam1);
	iVar2 = GlobalFunc_768(iVar0, iVar1);
	iVar3 = 0;
	if (iParam2 != 0 && iParam3 != -1)
	{
		return 0;
	}
	if (iParam2 == 0 && iParam3 == 94)
	{
		return 0;
	}
	if (iParam2 == 0 && iParam3 == -1)
	{
		return 0;
	}
	if (iVar2 != 10)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_2, iParam2))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_2), iParam2);
			iVar3 = 1;
		}
		if (iParam2 == 0)
		{
			Global_SAVE_DATA.FRIENDS_SAVED_ARRAY.f_175[iVar2 /*19*/].f_3 = iParam3;
		}
	}
	return iVar3;
}











void func_694(int iParam0, bool bParam1)//Position - 0x6EC3D
{
	func_695(0, iParam0, bParam1, 1);
	func_695(2, iParam0, bParam1, 1);
	func_695(1, iParam0, bParam1, 1);
}

void func_695(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x6EC63
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		iVar0 = GlobalFunc_7173(iParam0, iParam1);
		iVar1 = GlobalFunc_4977(iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar2);
		}
		func_704(iParam0, iParam1, iVar0);
		if (bParam3)
		{
			func_696(iParam0, iParam1);
		}
	}
}

void func_696(int iParam0, int iParam1)//Position - 0x6ECBD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = GlobalFunc_4980(iParam1, iVar0);
	while (iVar1 != 0)
	{
		func_697(iParam0, iParam1, iVar1, 1);
		iVar0++;
		iVar1 = GlobalFunc_4980(iParam1, iVar0);
	}
}

void func_697(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6ECF6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_42(iParam0))
	{
		iVar0 = GlobalFunc_7171(iParam0, iParam1, iParam2);
		iVar1 = GlobalFunc_5846(iParam2, iParam1);
		iVar2 = GlobalFunc_299(iVar1);
		if (bParam3)
		{
			MISC::SET_BIT(&iVar0, iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, iVar2);
		}
		func_698(iParam0, iParam1, iParam2, iVar0);
	}
}

void func_698(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6ED49
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_5846(iParam2, iParam1);
	iVar1 = GlobalFunc_300(iVar0);
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_0"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_0"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_0"), iParam3, 1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_1"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_1"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_1"), iParam3, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_2"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_2"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_2"), iParam3, 1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_3"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_3"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_3"), iParam3, 1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_4"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_4"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_4"), iParam3, 1);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_5"), iParam3, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_5"), iParam3, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_5"), iParam3, 1);
					break;
			}
			break;
		
		default:
			break;
	}
}






void func_704(int iParam0, int iParam1, int iParam2)//Position - 0x6FBB8
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_4977(iParam1);
	iVar1 = GlobalFunc_300(iVar0);
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_unlock_0"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_unlock_0"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_unlock_0"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_unlock_1"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_unlock_1"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_unlock_1"), iParam2, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_weap_unlock_2"), iParam2, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_weap_unlock_2"), iParam2, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_weap_unlock_2"), iParam2, 1);
					break;
			}
			break;
		
		default:
			break;
	}
}




void func_708(int iParam0)//Position - 0x7018E
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("faggio2"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeb"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sanchez"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("vader"), iParam0);
}

void func_709(int iParam0)//Position - 0x701CD
{
	if (iParam0 == 0)
	{
		GlobalFunc_2196(7, 0, 0);
	}
	else
	{
		GlobalFunc_2196(7, 0, 1);
	}
}

void func_710(char* sParam0, int iParam1)//Position - 0x701EC
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sParam0)) > 0)
	{
		return;
	}
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT(sParam0, iParam1);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
}

void func_711(int iParam0, int iParam1)//Position - 0x7022C
{
	if (iParam1 == 1)
	{
		PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(iParam0));
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1611[iParam0] = 1;
	}
	else
	{
		PLAYER::SPECIAL_ABILITY_LOCK(GlobalFunc_4917(iParam0));
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1611[iParam0] = 0;
	}
}

void func_712(int iParam0, bool bParam1, bool bParam2)//Position - 0x70275
{
	GlobalFunc_10944(iParam0, bParam1);
	GlobalFunc_5845(iParam0, bParam2);
}








void func_720()//Position - 0x707A3
{
	Global_68514 = 1;
	func_788();
	func_787();
	Global_35462 = 1;
	Global_35460 = -1;
	func_782();
	func_781();
	func_780();
	func_773();
	func_772();
	func_765();
	func_762();
	GlobalFunc_7514();
	func_744();
	func_742();
	GlobalFunc_6468();
	GlobalFunc_2032(0);
	func_739();
	func_738();
	func_736();
	func_725();
	func_724();
	func_722();
	func_721();
	Global_68514 = 0;
}

void func_721()//Position - 0x70812
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
		}
	}
}

void func_722()//Position - 0x70871
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_35965[iVar0] != -1)
		{
			Global_35965[iVar0] = -1;
		}
		iVar0++;
	}
	Global_35962 = 0;
	Global_35963 = 0;
	Global_35964 = 0;
	iVar0 = 0;
	while (iVar0 < 120)
	{
		Global_39271[iVar0 /*46*/].f_31 = 0;
		Global_39271[iVar0 /*46*/].f_42 = 0;
		Global_39271[iVar0 /*46*/] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 275)
	{
		Global_35970[iVar0 /*12*/].f_10 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_44792[iVar0 /*120*/] = 0;
		iVar0++;
	}
	GlobalFunc_2828();
}


void func_724()//Position - 0x79E1F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_68307)
	{
		Global_68308[iVar0 /*4*/] = -1;
		Global_68308[iVar0 /*4*/].f_1 = 0;
		Global_68308[iVar0 /*4*/].f_2 = 0;
		Global_68308[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
	Global_68307 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68429)
	{
		Global_68430[iVar0 /*3*/] = -1;
		Global_68430[iVar0 /*3*/].f_1 = 0;
		Global_68430[iVar0 /*3*/].f_2 = -99;
		iVar0++;
	}
	Global_68429 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68443)
	{
		Global_68444[iVar0 /*2*/] = -1;
		Global_68444[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	Global_68443 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68455)
	{
		Global_68456[iVar0 /*4*/] = -1;
		Global_68456[iVar0 /*4*/].f_1 = 0;
		Global_68456[iVar0 /*4*/].f_2 = 0;
		Global_68456[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
	Global_68455 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68269)
	{
		StringCopy(&(Global_68270[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	Global_68269 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_68265[iVar0] = 0;
		iVar0++;
	}
	Global_68250 = -1;
	Global_68257[0] = -1;
	Global_68257[1] = -1;
	Global_68257[2] = -1;
	Global_68248 = 0;
	Global_68249 = 0;
	Global_68264 = 0;
	Global_68263 = 0;
	Global_68262 = 1;
}

void func_725()//Position - 0x79F90
{
	GlobalFunc_8912();
}











void func_736()//Position - 0x7A649
{
	int iVar0;
	
	func_737();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.VISIBLE_IN_FOW[iVar0] = 0;
		iVar0++;
	}
}

void func_737()//Position - 0x7A676
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 63)
	{
		Global_96440[iVar0 /*10*/].f_5 = 0;
		Global_96440[iVar0 /*10*/].f_6 = 0;
		Global_96440[iVar0 /*10*/].f_4 = 0;
		Global_96440[iVar0 /*10*/].f_9 = -1;
		Global_96440[iVar0 /*10*/].f_3 = 0;
		Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/] = 0;
		Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/].f_1 = 0;
		Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/].f_4 = 0;
		iVar0++;
	}
	Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.RC_EVENTS = 0;
	Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.iRCMissionsCompleted = 0;
	Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iCurrentEpsilonPayment = 0;
}

void func_738()//Position - 0x7A711
{
	PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_LOCK(GlobalFunc_4917(0));
	PLAYER::SPECIAL_ABILITY_LOCK(GlobalFunc_4917(1));
	PLAYER::SPECIAL_ABILITY_LOCK(GlobalFunc_4917(2));
}

void func_739()//Position - 0x7A73C
{
	int iVar0;
	int iVar1;
	
	Global_67138.f_138 = 0;
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_67138[iVar0] = 0;
		Global_67138.f_69[iVar0] = 0;
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 23)
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[iVar0] = -1f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 312)
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[0 /*939*/].f_626[iVar0] = -15;
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[1 /*939*/].f_626[iVar0] = -15;
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[2 /*939*/].f_626[iVar0] = -15;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4251)
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4251[iVar0 /*54*/].f_42 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = 0;
		while (iVar0 < GlobalFunc_535(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/])))
		{
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar0 /*54*/].f_42 = 0;
			iVar0++;
		}
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4804[iVar1] = 0;
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_42 = 0;
		iVar1++;
	}
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742.f_42 = 0;
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 0;
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = -15;
}



void func_742()//Position - 0x7A933
{
	GlobalFunc_2767();
}


void func_744()//Position - 0x7A997
{
	int iVar0;
	
	SYSTEM::WAIT(0);
	Global_30785 = 1;
	GlobalFunc_7123();
	GlobalFunc_9183(1);
	func_745();
	iVar0 = PLAYER::PLAYER_PED_ID();
	GlobalFunc_6801(GlobalFunc_8315(), &iVar0);
	SYSTEM::WAIT(0);
}

void func_745()//Position - 0x7A9CA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = 0;
		while (iVar1 < Global_34036[iVar0 /*31*/].f_24)
		{
			Global_34036[iVar0 /*31*/].f_25[iVar1] = 0;
			iVar1++;
		}
		Global_34036[iVar0 /*31*/].f_24 = 0;
		iVar0++;
	}
}

















void func_762()//Position - 0x7BEBD
{
	func_763();
}

void func_763()//Position - 0x7BEC9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (iVar1 == 0)
		{
			GlobalFunc_6784(GlobalFunc_329(iVar0), 0, -1, 1);
			GlobalFunc_9532(iVar0, 0, 0);
		}
		else if (iVar1 == 1)
		{
			Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iVar0] = 0;
			GlobalFunc_9532(iVar0, (!Global_SAVE_DATA.isGameflowActive && !GlobalFunc_2(0)), 0);
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		GlobalFunc_9532(28, 1, 0);
		GlobalFunc_9532(30, 1, 0);
		GlobalFunc_9532(31, 1, 0);
		GlobalFunc_9532(33, 1, 0);
		GlobalFunc_9532(34, 1, 0);
		GlobalFunc_6785(77, 1, -1, 1);
	}
	else if (iVar1 == 1)
	{
		GlobalFunc_8914(0, 1);
		GlobalFunc_8914(23, 1);
		GlobalFunc_8914(28, 1);
		GlobalFunc_8914(14, 1);
		GlobalFunc_8914(39, 1);
		Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_678 = 0;
		Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_679 = 0;
		Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_680 = 0;
		Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_681 = 0;
		Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_682 = 0;
		Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683 = 0;
		iVar2 = 0;
		while (iVar2 < Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_73)
		{
			Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_73[iVar2] = 0;
			iVar2++;
		}
		Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_45 = 1;
	}
	Global_90014 = 0;
}


void func_765()//Position - 0x7C064
{
	Global_SAVE_DATA.RESPAWN_LOCATION_DATA.f_25 = 0;
	GlobalFunc_11149();
	Global_SAVE_DATA.RESPAWN_LOCATION_DATA.f_26 = 0;
	GlobalFunc_7533();
	Global_SAVE_DATA.RESPAWN_LOCATION_DATA.f_27 = 0;
	GlobalFunc_7532();
	Global_SAVE_DATA.RESPAWN_LOCATION_DATA.f_28 = 0;
	Global_SAVE_DATA.RESPAWN_LOCATION_DATA.f_29 = 0;
	Global_SAVE_DATA.RESPAWN_LOCATION_DATA.f_30 = 0;
}







void func_772()//Position - 0x7C630
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 262)
	{
		if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar0 /*23*/].f_11, 0))
		{
			MISC::CLEAR_BIT(&(Global_Mission_Blips[iVar0 /*23*/].f_11), 0);
			MISC::CLEAR_BIT(&(Global_Mission_Blips[iVar0 /*23*/].f_11), 15);
			MISC::SET_BIT(&(Global_Mission_Blips[iVar0 /*23*/].f_11), 18);
		}
		iVar0++;
	}
}

void func_773()//Position - 0x7C689
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_SAVE_DATA.HEIST_CHOICE_HELP_DISPLAYED_ARRAY[iVar0] = 0;
		Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_HELP_DISPLAYED_ARRAY[iVar0] = 0;
		Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_DISPLAY_GROUP_VISIBLE_ARRAY[iVar0] = 0;
		Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iVar0 /*23*/] = 0;
		Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iVar0 /*23*/].f_1 = 0;
		Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iVar0 /*23*/].f_10 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iVar0 /*23*/].f_2[iVar1] = 0;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iVar0 /*23*/].f_6[iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iVar0 /*23*/].f_11[iVar1] = 0;
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_END_SCREEN_DATA_STRUCT[iVar0 /*23*/].f_17[iVar1] = 0;
			Global_86379[iVar1 /*3*/] = 0;
			Global_86379[iVar1 /*3*/].f_1 = 0;
			Global_86379[iVar1 /*3*/].f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = 0;
		while (iVar2 < 5)
		{
			Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_SELECTED_CREW_ARRAY[iVar0 /*6*/][iVar2] = 0;
			iVar2++;
		}
		Global_86396[iVar0 /*19*/].f_18 = 0;
		iVar0++;
	}
	MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), 1);
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), 2);
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), 10);
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), 11);
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), 3);
	MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), 4);
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), 5);
	MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), 6);
	MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), 7);
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), 12);
	MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), 8);
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), 13);
	MISC::SET_BIT(&(Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Unlocked_Bitset), 9);
	func_774();
	Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Dead_Bitset = 0;
	Global_SAVE_DATA.HEIST_DATA_STRUCT.Crew_Dialogue_Bitset = 0;
	Global_86374 = 0;
	Global_86395 = 0;
	Global_86587.f_3 = 0;
}

void func_774()//Position - 0x7C899
{
	GlobalFunc_4538(1, 1, 14, 1);
	GlobalFunc_4538(10, 1, 12, 0);
	GlobalFunc_4538(11, 1, 12, 0);
	GlobalFunc_4538(3, 1, 7, 0);
	GlobalFunc_4538(2, 1, 8, 0);
	GlobalFunc_4538(4, 1, 7, 1);
	GlobalFunc_4538(5, 1, 6, 0);
	GlobalFunc_4538(6, 2, 15, 1);
	GlobalFunc_4538(7, 2, 10, 1);
	GlobalFunc_4538(12, 2, 4, 0);
	GlobalFunc_4538(8, 3, 14, 1);
	GlobalFunc_4538(13, 3, 5, 0);
	GlobalFunc_4538(9, 3, 8, 1);
	GlobalFunc_4537(1, joaat("hc_gunman"), 4, 1);
	GlobalFunc_4537(10, joaat("hc_gunman"), 5, 2);
	GlobalFunc_4537(11, joaat("hc_gunman"), 6, 1);
	GlobalFunc_4537(2, joaat("hc_gunman"), 1, 1);
	GlobalFunc_4537(3, joaat("hc_gunman"), 3, 0);
	GlobalFunc_4537(4, joaat("hc_gunman"), 0, 0);
	GlobalFunc_4537(5, joaat("hc_gunman"), 2, 2);
	GlobalFunc_4537(6, joaat("hc_hacker"), 1, 1);
	GlobalFunc_4537(7, joaat("hc_hacker"), 0, 0);
	GlobalFunc_4537(12, joaat("hc_hacker"), 2, 3);
	GlobalFunc_4537(8, joaat("hc_driver"), 0, 1);
	GlobalFunc_4537(13, joaat("hc_driver"), 2, 4);
	GlobalFunc_4537(9, joaat("hc_driver"), 1, 0);
	func_775(1, 2, 700, 79, 83, 77);
	func_775(10, 2, 800, 91, 89, 71);
	func_775(11, 2, 675, 86, 78, 90);
	func_775(2, 0, 275, 40, 28, 52);
	func_775(3, 0, 300, 35, 32, 48);
	func_775(4, 0, 250, 39, 40, 44);
	func_775(5, 0, 200, 42, 35, 46);
	func_775(6, 2, 85, 77, 93, 0);
	func_775(7, 1, 59, 59, 43, 0);
	func_775(12, 0, 36, 45, 39, 0);
	func_775(8, 2, 72, 91, 86, 0);
	func_775(13, 2, 94, 83, 68, 0);
	func_775(9, 0, 60, 54, 24, 0);
}

void func_775(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7CA5A
{
	Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iParam0 /*3*/] = iParam1;
	func_776(iParam0, 0, iParam2);
	func_776(iParam0, 1, iParam3);
	func_776(iParam0, 2, iParam4);
	func_776(iParam0, 3, iParam5);
}

void func_776(int iParam0, int iParam1, int iParam2)//Position - 0x7CA94
{
	GlobalFunc_653(iParam1, iParam2, &(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iParam0 /*3*/].f_1), &(Global_SAVE_DATA.HEIST_DATA_STRUCT.HEIST_CREW_ACTIVE_DATA_ARRAY[iParam0 /*3*/].f_2));
}




void func_780()//Position - 0x7CBE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		iVar1 = iVar0;
		Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar0 /*6*/] = 0;
		Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar0 /*6*/].f_1 = 0;
		Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar0 /*6*/].f_2 = 0;
		GlobalFunc_507(iVar1, 0);
		Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar0 /*6*/].f_3 = -1;
		Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar0 /*6*/].f_4 = 0;
		Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar0 /*6*/].f_5 = 0f;
		if (!GlobalFunc_2(0))
		{
			if (!MISC::IS_BIT_SET(Global_81155[iVar0 /*34*/].f_15, 7))
			{
				if (iVar1 != 90)
				{
					iVar2 = GlobalFunc_3043(iVar1);
					if (iVar2 != joaat("cities_passed"))
					{
						STATS::STAT_SET_INT(iVar2, 0, 1);
					}
				}
				else
				{
					STATS::STAT_SET_INT(joaat("fl_co_jh2a"), 0, 1);
					STATS::STAT_SET_INT(joaat("fl_co_jh2b"), 0, 1);
				}
			}
		}
		iVar0++;
	}
	Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.iMissionsCompleted = 0;
	iVar3 = 0;
	while (iVar3 < 3)
	{
		Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_MISS_FIRST_ACTIVATE_ARRAY[iVar3] = 0;
		iVar3++;
	}
}

void func_781()//Position - 0x7CCF4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 235)
	{
		Global_SAVE_DATA.CODE_CONTROL_RUNFLAG_ARRAY[iVar0] = 0;
		Global_SAVE_DATA.CODE_CONTROL_DATA_STRUCT.CODE_CONTROL_EXECUTE_TIMER_ARRAY[iVar0] = -1;
		iVar0++;
	}
}

void func_782()//Position - 0x7CD29
{
	func_786();
	GlobalFunc_872();
	GlobalFunc_7632(0);
	func_785();
	GlobalFunc_4956();
}



void func_785()//Position - 0x7CD77
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_24 = 0;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_28 = 0;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_99[0] = 0;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_99[1] = 0;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_99[2] = 0;
		iVar0++;
	}
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 0;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_18 = 0;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 0;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_18 = 0;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 0;
	Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_18 = 0;
}

void func_786()//Position - 0x7CE2F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 147)
	{
		if (!Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar0 /*29*/].f_12[0] == 2)
		{
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar0 /*29*/].f_12[0] = 0;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar0 /*29*/].f_12[1] = 0;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar0 /*29*/].f_12[2] = 0;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar0 /*29*/].f_24[0] = 0;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar0 /*29*/].f_24[1] = 0;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar0 /*29*/].f_24[2] = 0;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar0 /*29*/].f_19[0] = 0;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar0 /*29*/].f_19[1] = 0;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar0 /*29*/].f_19[2] = 0;
		}
		iVar0++;
	}
}

void func_787()//Position - 0x7CEF9
{
	struct<15> Var0;
	struct<14> Var15;
	struct<10> Var29;
	struct<165> Var39;
	int iVar204;
	int iVar205;
	
	Var39 = 16;
	Global_35295 = { Var39 };
	iVar204 = MISC::GET_GAME_TIMER();
	Global_35464 = iVar204;
	iVar205 = 0;
	while (iVar205 < 147)
	{
		Global_35465[iVar205] = iVar204;
		iVar205++;
	}
	iVar205 = 0;
	while (iVar205 < 3)
	{
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar205] = 0;
		iVar205++;
	}
	iVar205 = 0;
	while (iVar205 < 9)
	{
		Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar205 /*15*/] = { Var0 };
		iVar205++;
	}
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls = 0;
	iVar205 = 0;
	while (iVar205 < 4)
	{
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_MISSED_CALLS_ARRAY[iVar205 /*15*/] = { Var0 };
		iVar205++;
	}
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Missed_Calls = 0;
	iVar205 = 0;
	while (iVar205 < 30)
	{
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAT_CALLS_ARRAY[iVar205 /*15*/] = { Var0 };
		iVar205++;
	}
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Chat_Calls = 0;
	iVar205 = 0;
	while (iVar205 < 8)
	{
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar205 /*14*/] = { Var15 };
		iVar205++;
	}
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts = 0;
	iVar205 = 0;
	while (iVar205 < 3)
	{
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_SENT_TEXTS_ARRAY[iVar205 /*14*/] = { Var15 };
		iVar205++;
	}
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Sent_Texts = 0;
	iVar205 = 0;
	while (iVar205 < 10)
	{
		Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar205 /*10*/] = { Var29 };
		iVar205++;
	}
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Emails = 0;
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Call = -1;
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Answered = 0;
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Had_Response = 0;
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Call_Response = 0;
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Text = -1;
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Text_Had_Response = 0;
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Text_Response = 0;
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Last_Completed_Email = -1;
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset = 0;
	Global_35462 = 0;
}

void func_788()//Position - 0x7D0F2
{
	int iVar0;
	
	GlobalFunc_7534();
	GlobalFunc_5746();
	func_789();
	Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[9] = 0;
	Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[10] = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_68514.f_10[iVar0] = 0;
		iVar0++;
	}
	Global_SAVE_DATA.FLOW_STRUCT.flowCompleted = 0;
	Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset = 0;
	Global_68514.f_9 = -1;
	Global_68514.f_7 = 0;
	Global_68514.f_6 = 0;
	Global_68514.f_2 = 1;
	Global_68507 = -1;
	Global_90000 = -1;
}

void func_789()//Position - 0x7D17E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar0 /*3*/].f_1 = Global_68514.f_12526[iVar0 /*2*/];
		iVar0++;
	}
}



















void func_808(bool bParam0)//Position - 0x7D718
{
	int iVar0;
	
	MISC::SET_GAME_PAUSED(0);
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
	{
		REPLAY::_0xE058175F8EAFE79A(1);
		Global_96306 = 1;
		while (Global_96306)
		{
			SYSTEM::WAIT(0);
		}
		REPLAY::_0xE058175F8EAFE79A(0);
	}
	PLAYER::FORCE_CLEANUP(8);
	PLAYER::FORCE_CLEANUP(64);
	SYSTEM::WAIT(0);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
	}
	if (bParam0)
	{
		while (Global_68507 != -1)
		{
			GlobalFunc_5746();
			if (Global_68507 != -1)
			{
				PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_81155[Global_68507 /*34*/]), 2);
			}
			if (Global_34876 != 0)
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_34876, 2);
				Global_34876 = 0;
			}
			if (Global_34875 != -1)
			{
				GlobalFunc_1997(&Global_34875);
			}
			Global_87297 = 0;
			Global_34879 = 0;
			Global_68507 = -1;
		}
		MISC::CLEAR_AREA(0f, 0f, 0f, 10000f, 0, 0, 0, 0);
		Global_87297 = 0;
		Global_34879 = 0;
		Global_68507 = -1;
		Global_34875 = -1;
		Global_34876 = 0;
	}
	else
	{
		while ((((Global_87297 || Global_34879) || Global_68507 != -1) || Global_34875 != -1) || Global_34876 != 0)
		{
			GlobalFunc_5746();
			SYSTEM::WAIT(0);
			if (Global_68507 != -1)
			{
				PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_81155[Global_68507 /*34*/]), 2);
			}
			if (Global_34876 != 0)
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_34876, 2);
				Global_34876 = 0;
			}
			if (Global_34875 != -1)
			{
				GlobalFunc_1997(&Global_34875);
			}
			Global_87297 = 0;
			Global_34879 = 0;
			Global_68507 = -1;
			SYSTEM::WAIT(0);
		}
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
	}
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	HUD::THEFEED_FLUSH_QUEUE();
	while (Global_68250 != -1)
	{
		if (!Global_68262)
		{
			Global_68262 = 1;
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = MISC::GET_GAME_TIMER() + 1000;
	while (CUTSCENE::IS_CUTSCENE_ACTIVE() && iVar0 > MISC::GET_GAME_TIMER())
	{
		SYSTEM::WAIT(0);
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (iVar0 > MISC::GET_GAME_TIMER())
	{
	}
	Global_SAVE_DATA.isGameflowActive = 0;
	GlobalFunc_9080();
	GlobalFunc_6685(1);
	func_811();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	HUD::CLEAR_GPS_PLAYER_WAYPOINT();
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[0 /*65*/].f_13[9] == 5)
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[0 /*65*/].f_13[9] = 0;
	}
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[1 /*65*/].f_13[8] == 1)
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[1 /*65*/].f_13[8] = 0;
	}
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[2 /*65*/].f_13[8] == 3)
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[2 /*65*/].f_13[8] = 0;
	}
	while (!GlobalFunc_2376(GlobalFunc_1432()))
	{
		STREAMING::REQUEST_MODEL(joaat("player_zero"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("player_zero")))
		{
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), joaat("player_zero"));
		}
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
}



void func_811()//Position - 0x7DA2E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_812(iVar0);
		iVar0++;
	}
}

void func_812(int iParam0)//Position - 0x7DA4F
{
	if (!GlobalFunc_7702(iParam0, 16, 1))
	{
		GlobalFunc_7969(iParam0, 17, 1);
	}
}

void func_813(bool bParam0, int iParam1, bool bParam2)//Position - 0x7DA6D
{
	var uVar0;
	var uVar3;
	
	GlobalFunc_2292();
	GlobalFunc_7955();
	func_814();
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 4);
	}
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Comms_Game_time = MISC::GET_GAME_TIMER();
	if (Global_68507 == 62 || Global_68508 == 62)
	{
		GlobalFunc_10944(2, 1);
	}
	if (!bParam0)
	{
		Global_90001.f_8 = 0;
		Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut = 0;
		Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut_switch = 0;
	}
	MISC::OVERRIDE_SAVE_HOUSE(iParam1, Global_SAVE_DATA.RP_PLAYER_x, Global_SAVE_DATA.RP_PLAYER.RP_PLAYER_heading, bParam0, &uVar0, &uVar3);
}

void func_814()//Position - 0x7DB10
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<4> Var3;
	struct<3> Var11;
	int iVar14;
	
	GlobalFunc_9133(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_11324(PLAYER::PLAYER_PED_ID(), 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]))
		{
			bVar1 = false;
			iVar2 = 0;
			StringCopy(&Var3, "", 32);
			Var11 = { 0f, 0f, 0f };
			iVar14 = GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Global_87708[iVar0], 1);
			if ((((iVar14 != 10 && iVar14 != 3) && iVar14 != 2) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_87698[iVar0], 0)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Global_87698[iVar0]))
			{
				while (!bVar1 && GlobalFunc_2197(Global_87708[iVar0], iVar2, &Var3, &iVar14))
				{
					if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&Var3, Global_87698[iVar0]))
					{
						bVar1 = true;
						Var11 = { ENTITY::GET_ENTITY_COORDS(Global_87698[iVar0], 0) };
						GlobalFunc_2290(Global_87708[iVar0], iVar2, &Var11);
					}
					iVar2++;
				}
			}
			if (bVar1)
			{
				if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_87718[iVar0]))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][Global_87708[iVar0] /*3*/] = { Var11 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[0 /*4*/][Global_87708[iVar0]] = ENTITY::GET_ENTITY_HEADING(Global_87698[iVar0]);
				}
				else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_87718[iVar0]))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][Global_87708[iVar0] /*3*/] = { Var11 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[1 /*4*/][Global_87708[iVar0]] = ENTITY::GET_ENTITY_HEADING(Global_87698[iVar0]);
				}
			}
			else if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_87718[iVar0]))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][Global_87708[iVar0] /*3*/] = { 0f, 0f, 0f };
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[0 /*4*/][Global_87708[iVar0]] = 0f;
			}
			else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_87718[iVar0]))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][Global_87708[iVar0] /*3*/] = { 0f, 0f, 0f };
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[1 /*4*/][Global_87708[iVar0]] = 0f;
			}
		}
		iVar0++;
	}
}

















