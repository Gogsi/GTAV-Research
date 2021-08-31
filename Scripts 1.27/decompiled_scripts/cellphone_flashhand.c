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
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	struct<2> Local_32 = { 0, 0 } ;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<3> Local_38 = { 0, 0, 0 } ;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	char cLocal_49[16] = "";
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	bool bLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	struct<3> Local_74 = { 0, 0, 0 } ;
	int iLocal_77 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	struct<13> Var16;
	int iVar29;
	float fVar30;
	float fVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	
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
	fLocal_21 = 0.73f;
	fLocal_22 = 0.55f;
	fLocal_23 = 0.73f;
	fLocal_24 = 0.45f;
	fLocal_25 = 0f;
	fLocal_26 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_14548 = 145;
	MISC::CLEAR_BIT(&Global_2264, 8);
	MISC::CLEAR_BIT(&Global_2263, 14);
	MISC::CLEAR_BIT(&Global_2544648, 3);
	MISC::CLEAR_BIT(&Global_2264, 10);
	MISC::CLEAR_BIT(&Global_2263, 17);
	MISC::CLEAR_BIT(&Global_2263, 9);
	MISC::CLEAR_BIT(&Global_2263, 26);
	MISC::CLEAR_BIT(&Global_2263, 23);
	MISC::CLEAR_BIT(&Global_2264, 24);
	MISC::CLEAR_BIT(&Global_2264, 25);
	MISC::CLEAR_BIT(&Global_2264, 27);
	MISC::CLEAR_BIT(&Global_2264, 26);
	MISC::CLEAR_BIT(&Global_2263, 30);
	Global_2453243 = 0;
	iLocal_77 = 0;
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
	Global_14359 = 0;
	iLocal_29 = 0;
	Global_14337 = 0;
	Global_14377 = 0;
	Global_14378 = 0;
	func_103();
	Global_14324 = { Global_14356 };
	Global_14397 = 4;
	Global_14398 = 0;
	Global_2868 = 1;
	Global_14373 = Global_14397;
	if (Global_14375 == 0)
	{
		Global_14376 = 0;
		if (Global_68245)
		{
			Global_14374 = unk_0x67D02A194A2FC2BD("cellphone_ifruit");
			iLocal_43 = 1;
			if (iLocal_43 == 1)
			{
			}
		}
		else if (Global_14336)
		{
			Global_14381 = 1;
			Global_14374 = unk_0x67D02A194A2FC2BD("cellphone_prologue");
		}
		else
		{
			Global_14374 = unk_0x67D02A194A2FC2BD(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/]));
		}
		SYSTEM::SETTIMERA(0);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374) && Global_14376 == 0)
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				Global_14376 = 1;
			}
			if (MISC::IS_PC_VERSION())
			{
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
				{
					if (SYSTEM::TIMERA() > 2000)
					{
						Global_14376 = 1;
					}
				}
			}
			if (Global_14392 == 1)
			{
				func_102();
			}
		}
		if (Global_14376 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374))
			{
				func_101(Global_14374, "SHUTDOWN_MOVIE");
			}
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_14374);
			Global_14334 = 0;
			Global_14375 = 0;
			Global_14549 = 0;
			if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Sleep_Reminder_Been_Displayed == 1)
			{
				Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Sleep_Reminder_Been_Displayed = 0;
				HUD::CLEAR_FLOATING_HELP(0, 1);
			}
			Global_14337 = 1;
			Global_14393.f_1 = 3;
			func_100();
			Global_14381 = 0;
			MOBILE::DESTROY_MOBILE_PHONE();
			MISC::CLEAR_BIT(&Global_2263, 9);
			MISC::CLEAR_BIT(&Global_2263, 27);
			MISC::CLEAR_BIT(&Global_2263, 30);
			MISC::CLEAR_BIT(&Global_2264, 5);
			MISC::CLEAR_BIT(&Global_2264, 21);
			MISC::CLEAR_BIT(&Global_2265, 2);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			Global_14551 = 0;
			Global_16752 = 0;
			Global_16751 = 0;
			Global_15705 = 0;
			func_98();
			func_96();
			Global_2544851 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		Global_14317 = 0.1f;
		Global_14318 = 0.38f;
		Global_14319 = 0.195f;
		Global_14320 = 0.05f;
		if ((MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(18, &uLocal_63, &uLocal_64, &uLocal_65, &uLocal_66);
			func_95(Global_14374, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(uLocal_63), SYSTEM::TO_FLOAT(uLocal_64), SYSTEM::TO_FLOAT(uLocal_65), -1082130432);
			HUD::GET_HUD_COLOUR(9, &iLocal_63, &iLocal_64, &iLocal_65, &uLocal_66);
			func_95(Global_14374, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_63), SYSTEM::TO_FLOAT(iLocal_64), SYSTEM::TO_FLOAT(iLocal_65), -1082130432);
			HUD::GET_HUD_COLOUR(6, &iLocal_63, &iLocal_64, &iLocal_65, &uLocal_66);
			func_95(Global_14374, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_63), SYSTEM::TO_FLOAT(iLocal_64), SYSTEM::TO_FLOAT(iLocal_65), -1082130432);
		}
		else
		{
			HUD::GET_HUD_COLOUR(9, &iLocal_63, &iLocal_64, &iLocal_65, &uLocal_66);
			func_95(Global_14374, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_63), SYSTEM::TO_FLOAT(iLocal_64), SYSTEM::TO_FLOAT(iLocal_65), -1082130432);
			HUD::GET_HUD_COLOUR(126, &iLocal_63, &iLocal_64, &iLocal_65, &uLocal_66);
			func_95(Global_14374, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_63), SYSTEM::TO_FLOAT(iLocal_64), SYSTEM::TO_FLOAT(iLocal_65), -1082130432);
			HUD::GET_HUD_COLOUR(6, &iLocal_63, &iLocal_64, &iLocal_65, &uLocal_66);
			func_95(Global_14374, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_63), SYSTEM::TO_FLOAT(iLocal_64), SYSTEM::TO_FLOAT(iLocal_65), -1082130432);
		}
		if (Global_14376 == 0)
		{
		}
		func_94();
		if (Global_68245)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
		}
		Global_14375 = 1;
	}
	Global_2266 = 99;
	func_93();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_55 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}
	if (HUD::IS_RADAR_HIDDEN())
	{
		Global_16706 = 1;
	}
	else
	{
		Global_16706 = 0;
	}
	func_95(Global_14374, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_14335 = 1;
	if (Global_68245)
	{
		Global_14553 = 0;
		Global_2544848 = func_90(2012, -1, 0);
		if (Global_2544848 < 1 || Global_2544848 > 7)
		{
			Global_2544848 = 1;
		}
		func_95(Global_14374, "SET_THEME", SYSTEM::TO_FLOAT(Global_2544848), -1082130432, -1082130432, -1082130432, -1082130432);
		func_89();
		Global_2544849 = func_90(2011, -1, 0);
		if (Global_2544849 == 0)
		{
			Var16 = { func_88(PLAYER::PLAYER_ID()) };
			iVar29 = 0;
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
			{
			}
			if (Global_2544852 == 1)
			{
			}
			if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var16) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) && Global_2544852 == 0)
			{
				if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0))
				{
				}
				else
				{
					iVar29 = 1;
				}
				if (iVar29 == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar0);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					func_95(Global_14374, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_95(Global_14374, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_95(Global_14374, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_2544849), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_14336)
		{
			Global_14553 = 0;
		}
		else if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Is_Sniper_App_Available == 1 || Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Is_Trackify_App_Available == 1)
		{
			Global_14553 = 0;
		}
		else
		{
			Global_14553 = 0;
		}
		func_95(Global_14374, "SET_THEME", SYSTEM::TO_FLOAT(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_3067 == 0)
		{
			func_95(Global_14374, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
		}
		func_89();
	}
	iLocal_44 = func_87();
	if (Global_14336 == 0)
	{
		func_76();
	}
	Global_14371 = 0;
	Global_14552 = 0;
	MISC::CLEAR_BIT(&Global_2263, 9);
	Global_2435234 = 0;
	if (func_74(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		Global_2435234 = 1;
	}
	func_95(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_73();
	func_71();
	func_70(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_14382, 1);
	SYSTEM::SETTIMERB(0);
	while (Global_14393.f_1 < 6 && Global_14376 == 0)
	{
		SYSTEM::WAIT(0);
		if (SYSTEM::TIMERB() > 10000)
		{
			Global_14376 = 1;
		}
		if (Global_14393.f_1 < 4)
		{
			Global_14376 = 1;
		}
	}
	if (Global_14393.f_1 == 5 || Global_14393.f_1 == 6)
	{
		if (func_69(14))
		{
			func_95(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_95(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14397), -1082130432, -1082130432, -1082130432);
		}
		if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_95(Global_14374, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_95(Global_14374, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_14381)
		{
			func_68(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else
		{
			func_68(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14381)
		{
			func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14553 == 0)
		{
			func_68(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2263, 17);
		}
		else if (Global_68245)
		{
			func_68(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2263, 17);
		}
		else
		{
			if (Global_14552 == 1)
			{
				if (Global_14381)
				{
					func_68(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_68(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_14381)
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			MISC::SET_BIT(&Global_2263, 17);
		}
	}
	Global_14379 = 1;
	func_67();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_61 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_56 = MISC::GET_GAME_TIMER();
	}
	if (Global_14549 == 1)
	{
		if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Sleep_Reminder_Been_Displayed == 0)
			{
				Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Sleep_Reminder_Been_Displayed = 1;
				if (Global_14338 == 0)
				{
					fVar30 = 0.75f;
					fVar31 = 0.8f;
				}
				else
				{
					fVar30 = 0.65f;
					fVar31 = 0.77f;
				}
				if (fVar30 == fVar31)
				{
				}
				func_66("CELL_7052", 10000);
			}
		}
	}
	if (Global_68245 == 0)
	{
		iLocal_17 = MISC::GET_GAME_TIMER() + 375;
	}
	if (func_65())
	{
		iLocal_35 = 1;
	}
	else
	{
		iLocal_35 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_36 = 1;
			if (func_65())
			{
				func_64();
			}
		}
		else
		{
			iLocal_36 = 0;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (Global_68245 == 0)
		{
			iLocal_58 = MISC::GET_GAME_TIMER();
			iLocal_60 = 0;
		}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_63())
		{
			PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
		}
		if (Global_68245 == 0)
		{
			if (iLocal_31)
			{
				if (Global_14393.f_1 == 6 || Global_14393.f_1 == 7)
				{
					iLocal_31 = 0;
				}
			}
			if (Global_14393.f_1 > 4)
			{
				if ((MISC::IS_BIT_SET(Global_2263, 14) && Global_2544851 == 0) && Global_14333 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						if (func_62())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_32);
							if (Global_14339[Global_14338 /*3*/].f_1 != Local_32.f_1)
							{
								func_60();
							}
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_32);
							if (Global_14346[Global_14338 /*3*/].f_1 != Local_32.f_1)
							{
								if (!func_63())
								{
								}
								if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
								{
									func_58();
								}
							}
						}
						if (iLocal_36 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
							{
								iLocal_36 = 1;
								func_58();
								func_64();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_36 = 0;
							func_60();
							if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
							{
								if (Global_15692 != 2)
								{
									func_57();
								}
							}
						}
						if (iLocal_35 == 0)
						{
							if (func_65())
							{
								iLocal_35 = 1;
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
								{
									func_64();
								}
								func_60();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
								{
									PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
								}
							}
							if (func_65() == 0)
							{
								iLocal_35 = 0;
								func_58();
							}
						}
					}
				}
			}
		}
		if (Global_2435234 == 1)
		{
			if (!func_74(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					if (Global_14393.f_1 > 3)
					{
						Global_14378 = 1;
						func_56();
						func_53(0);
						Global_2435234 = 0;
					}
				}
			}
		}
		if (Global_14554 == 0)
		{
			if ((Global_34913 != 15 || Global_2268 == 1) || func_52(0))
			{
				if (!Global_14552)
				{
					if (Global_14393.f_1 == 6)
					{
						Global_2269 = 42;
						func_95(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_73();
						func_71();
						func_70(1);
						func_95(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_14554 = 1;
			}
		}
		else if ((Global_34913 == 15 && func_52(0) == 0) && Global_2268 == 0)
		{
			if (!Global_14552)
			{
				if (Global_14393.f_1 == 6)
				{
					Global_2269 = 255;
					func_95(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_73();
					func_71();
					func_70(1);
					func_95(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_14554 = 0;
		}
		if (Global_14555 == 0)
		{
			if (MISC::IS_BIT_SET(Global_2264, 3))
			{
				if (!Global_14552)
				{
					if (Global_14393.f_1 == 6)
					{
						func_95(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_73();
						func_71();
						func_70(1);
						func_95(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_14555 = 1;
			}
		}
		else if (!MISC::IS_BIT_SET(Global_2264, 3))
		{
			if (!Global_14552)
			{
				if (Global_14393.f_1 == 6)
				{
					func_95(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_73();
					func_71();
					func_70(1);
					func_95(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_14555 = 0;
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_14321.f_1 != Global_14339[Global_14338 /*3*/].f_1 || func_65())
			{
				if (Global_14393.f_1 > 3)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) == 0)
					{
						if (Global_68245)
						{
							if (Global_14393.f_1 == 9)
							{
								if (Global_15745 == 1 || MISC::IS_BIT_SET(Global_2264, 23))
								{
									PAD::SET_INPUT_EXCLUSIVE(0, Global_14362);
								}
							}
							else
							{
								PAD::SET_INPUT_EXCLUSIVE(0, Global_14362);
							}
						}
						else
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_14362);
						}
					}
					PAD::SET_INPUT_EXCLUSIVE(0, Global_14363);
					if (MISC::IS_BIT_SET(Global_2263, 17))
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_14364);
					}
					if (!func_51())
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_14365);
					}
				}
			}
			if (Global_14321.f_1 == Global_14339[Global_14338 /*3*/].f_1)
			{
			}
		}
		if (!PAD::_IS_USING_KEYBOARD(2))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_67058)
			{
				if (!func_63())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, 180);
					PAD::SET_INPUT_EXCLUSIVE(0, 181);
					PAD::ENABLE_CONTROL_ACTION(0, 180, 1);
					PAD::ENABLE_CONTROL_ACTION(0, 181, 1);
				}
				PAD::SET_INPUT_EXCLUSIVE(0, Global_14367);
				if (!func_51())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_14368);
				}
				if (Global_14393.f_1 > 4)
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_14370);
				}
			}
		}
		if (func_50(2, Global_14361, 0))
		{
			iLocal_53 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_30 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(2, Global_14362))
			{
				Global_2267 = 1;
				iLocal_30 = 0;
			}
			if (!Global_14393.f_1 > 3)
			{
				iLocal_30 = 0;
			}
		}
		if (iLocal_53)
		{
			if (PAD::IS_CONTROL_PRESSED(2, Global_14361))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_14393.f_1 = 3;
					func_48();
				}
			}
			else
			{
				iLocal_53 = 0;
			}
		}
		Global_2871 = MISC::GET_GAME_TIMER();
		if (Global_14380)
		{
			func_67();
			Global_14379 = 1;
			Global_14380 = 0;
		}
		if (Global_14551 == 0)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			func_42();
			func_41();
			HUD::SET_TEXT_RENDER_ID(iLocal_41);
			if (Global_14379 == 1)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				if (Global_14336)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_14374, Global_14313, Global_14314, Global_14315, Global_14316, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_14374, Global_14313, Global_14314, Global_14315, Global_14316, 255, 255, 255, 255, 0);
				}
				func_93();
			}
			if (Global_14333 == 1)
			{
				if (Global_14393.f_1 > 3)
				{
					func_40();
				}
			}
			else if (Global_14393.f_1 > 3)
			{
				if (Global_2544851 == 1)
				{
					func_39();
				}
				if (MISC::IS_BIT_SET(Global_2264, 25))
				{
					if (Global_68245 == 1)
					{
						func_38();
					}
				}
				else if (!MISC::IS_BIT_SET(Global_2264, 24))
				{
					if (MISC::IS_BIT_SET(Global_2264, 26))
					{
						if (func_50(2, Global_14360, 0))
						{
							MISC::SET_BIT(&Global_2264, 25);
							MISC::CLEAR_BIT(&Global_2264, 26);
							MISC::CLEAR_BIT(&Global_2265, 2);
						}
					}
				}
				else if (Global_68245 == 1)
				{
					func_37();
				}
			}
		}
		if (iLocal_29)
		{
			if (Global_14393.f_1 == 6)
			{
				func_33();
			}
		}
		else if (!MISC::IS_BIT_SET(Global_2263, 23))
		{
			if (Global_14393.f_1 == 5 || Global_14393.f_1 == 6)
			{
				if (Global_14551 == 0)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) < 1 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
					{
						if (Global_14336 == 0)
						{
							if (MISC::IS_BIT_SET(Global_2263, 14))
							{
								if (!Global_68245)
								{
									if (iLocal_30 == 0)
									{
										if (!func_69(14))
										{
											func_32();
										}
									}
								}
								else
								{
									func_22();
								}
							}
						}
						if (MISC::IS_BIT_SET(Global_2263, 9))
						{
							func_19(0, 0, 1, 1);
						}
						else if (Global_16751 == 0)
						{
							if (!MISC::IS_BIT_SET(Global_2544648, 3))
							{
								if (Global_68245)
								{
									func_18();
								}
								func_17();
								func_15();
							}
						}
						else
						{
							if (Global_68245)
							{
								func_18();
							}
							if (!MISC::IS_BIT_SET(Global_2544648, 3))
							{
								if (Global_16751 == 1)
								{
									if (MISC::IS_BIT_SET(Global_2544648, 1))
									{
										if (MISC::IS_BIT_SET(Global_2263, 14))
										{
											if (Global_68245)
											{
												func_19(7, 0, 1, 0);
											}
											else
											{
												Global_16752 = 0;
											}
											Global_16751 = 0;
											MISC::CLEAR_BIT(&Global_2544648, 1);
										}
									}
									else if (MISC::IS_BIT_SET(Global_2263, 14))
									{
										func_19(7, 0, 1, 0);
										Global_16751 = 0;
									}
								}
								else
								{
									if (Global_16751 == 3)
									{
										func_19(1, 0, 1, 0);
										Global_16751 = 0;
									}
									if (Global_16751 == 2)
									{
										func_19(14, 0, 1, 0);
										Global_16751 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_2270[Global_14396 /*15*/].f_5)))
		{
			if (Global_14396 == 0)
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[Global_14396 /*15*/].f_9) == 0)
				{
					Global_14391 = SYSTEM::START_NEW_SCRIPT(&(Global_2270[Global_14396 /*15*/].f_5), 3800);
				}
			}
			else if (Global_14396 == 2)
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[Global_14396 /*15*/].f_9) == 0)
				{
					Global_14391 = SYSTEM::START_NEW_SCRIPT(&(Global_2270[Global_14396 /*15*/].f_5), 3584);
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[Global_14396 /*15*/].f_9) == 0)
			{
				Global_14391 = SYSTEM::START_NEW_SCRIPT(&(Global_2270[Global_14396 /*15*/].f_5), 2552);
			}
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_2270[Global_14396 /*15*/].f_5));
			Global_2266 = 99;
			MISC::CLEAR_BIT(&Global_2263, 23);
		}
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
			}
		}
		if (Global_14393.f_1 == 1)
		{
			func_6();
		}
		if (Global_14393.f_1 == 0)
		{
			func_6();
		}
		if (Global_14393.f_1 == 3)
		{
			func_6();
		}
		else
		{
			if (Global_15705)
			{
				if (Global_14393.f_1 == 9)
				{
					if (Global_68245)
					{
						if (!MISC::IS_BIT_SET(Global_2264, 31))
						{
							if (!MISC::IS_BIT_SET(Global_2264, 27))
							{
								if (func_5())
								{
									if (!MISC::IS_BIT_SET(Global_2263, 9))
									{
										if (func_50(2, Global_14365, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!Global_14392 == 1)
												{
													if (Global_14393.f_1 > 6)
													{
														MISC::SET_BIT(&Global_2264, 24);
														MISC::SET_BIT(&Global_2264, 27);
														MISC::CLEAR_BIT(&Global_2264, 26);
														MISC::CLEAR_BIT(&Global_2264, 25);
														MISC::SET_BIT(&(Global_2446554.f_1619), 17);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (Global_14376 == 1)
			{
				Global_14378 = 1;
				func_53(0);
			}
			if (Global_14377 == 1)
			{
				Global_14378 = 1;
				func_53(0);
			}
			if (Global_68245)
			{
				if (!MISC::IS_BIT_SET(Global_2265, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE())
					{
						if (Global_2451015.f_1 == 1)
						{
						}
						else
						{
							func_56();
							func_53(0);
						}
					}
				}
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						MISC::SET_BIT(&Global_2264, 4);
					}
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						Global_14378 = 1;
						func_56();
						func_53(0);
					}
				}
				if (((((((((((((PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael1")) > 0) || Global_68506 == 1) || func_3(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || GRAPHICS::GET_USINGNIGHTVISION())
				{
					if (!Global_14336)
					{
						MISC::SET_BIT(&Global_2264, 4);
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					if (Global_68245 == 0)
					{
						if (iLocal_60 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
								{
									iLocal_58 = MISC::GET_GAME_TIMER();
									iLocal_60 = 1;
								}
							}
						}
						else
						{
							iLocal_59 = MISC::GET_GAME_TIMER();
							iLocal_62 = (iLocal_59 - iLocal_58);
							if (iLocal_62 < 4000)
							{
								MISC::SET_BIT(&Global_2264, 4);
							}
							else
							{
								iLocal_60 = 0;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					if (Global_68245)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_68, 1);
						if (iLocal_68 != joaat("weapon_unarmed") && Global_14393.f_1 < 7)
						{
							MISC::SET_BIT(&Global_2264, 4);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					uLocal_69 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_MODEL(uLocal_69) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(uLocal_69) == joaat("submersible2"))
					{
						iLocal_72 = 1;
					}
					else
					{
						iLocal_72 = 0;
					}
					if (((ENTITY::GET_ENTITY_MODEL(uLocal_69) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(uLocal_69) == joaat("cutter")) || iLocal_72) || VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_69, 0) == 0)
					{
						MISC::SET_BIT(&Global_2264, 4);
					}
					if ((((ENTITY::GET_ENTITY_MODEL(uLocal_69) == joaat("valkyrie") || ENTITY::GET_ENTITY_MODEL(uLocal_69) == joaat("insurgent")) || ENTITY::GET_ENTITY_MODEL(uLocal_69) == joaat("technical")) || ENTITY::GET_ENTITY_MODEL(uLocal_69) == joaat("trash")) || ENTITY::GET_ENTITY_MODEL(uLocal_69) == joaat("trash2"))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_69))
						{
							iVar32 = func_2(PLAYER::PLAYER_PED_ID(), uLocal_69);
							if (iVar32 != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(uLocal_69) == joaat("insurgent"))
								{
									if (iVar32 == 3)
									{
										MISC::SET_BIT(&Global_2264, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(uLocal_69) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(uLocal_69) == joaat("trash2"))
								{
									if (iVar32 == 2 || iVar32 == 1)
									{
										MISC::SET_BIT(&Global_2264, 4);
									}
								}
								if (VEHICLE::IS_TURRET_SEAT(uLocal_69, iVar32))
								{
									MISC::SET_BIT(&Global_2264, 4);
								}
							}
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 69))
					{
						if (Global_68245 == 0)
						{
							if (Global_14393.f_1 == 6 || Global_14393.f_1 == 7)
							{
								bVar33 = true;
								if (ENTITY::GET_ENTITY_MODEL(uLocal_69) == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(uLocal_69))
								{
									bVar33 = false;
								}
								if (((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_69)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_69))) || ENTITY::GET_ENTITY_MODEL(iLocal_69) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_69) == joaat("submersible2"))
								{
									bVar33 = false;
								}
								if (bVar33)
								{
									func_53(0);
								}
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 24))
					{
						if (Global_68245 == 0)
						{
							if (Global_14393.f_1 == 6 || Global_14393.f_1 == 7)
							{
								func_53(0);
							}
						}
					}
					iLocal_72 = 0;
				}
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					Global_14378 = 1;
					func_56();
					func_53(0);
				}
				if (Global_68245 == 0)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_55)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							Global_14378 = 1;
							func_56();
							func_53(0);
						}
					}
					if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_14378 = 1;
							func_56();
							func_53(0);
						}
					}
				}
				else if (func_63())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_55)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							Global_14378 = 1;
							func_56();
							func_53(0);
						}
					}
				}
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_63())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_68, 1);
							if ((iLocal_68 == joaat("weapon_sniperrifle") || iLocal_68 == joaat("weapon_heavysniper")) || iLocal_68 == joaat("weapon_remotesniper"))
							{
								bLocal_67 = true;
							}
							else
							{
								bLocal_67 = false;
							}
							if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_67)
								{
									Global_14378 = 1;
									func_56();
									func_53(0);
								}
							}
						}
					}
				}
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_14378 = 1;
					func_56();
					func_53(0);
				}
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_14378 = 1;
					func_56();
					func_53(0);
				}
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
				{
					Global_14378 = 1;
					func_56();
					func_53(0);
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_68245 == 0)
					{
						Global_14378 = 1;
						func_56();
						func_53(0);
					}
				}
			}
			else
			{
				iVar34 = 0;
				if (((Global_68245 && Global_2451015.f_1) && Global_2451015.f_37) && Global_14393.f_1 == 9)
				{
					iVar34 = 1;
					if (!MISC::IS_BIT_SET(Global_2264, 24))
					{
						if (MISC::IS_BIT_SET(Global_2264, 26))
						{
							MISC::SET_BIT(&Global_2264, 25);
							MISC::CLEAR_BIT(&Global_2264, 26);
							MISC::CLEAR_BIT(&Global_2265, 2);
						}
					}
				}
				if (iVar34 == 0)
				{
					Global_14378 = 1;
					func_56();
					func_53(0);
				}
			}
		}
		if (Global_14371 == 1)
		{
			func_1();
		}
		if (Global_14392 == 2)
		{
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_14362);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_14363);
				PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_1()//Position - 0x1A45
{
	if (!PAD::IS_CONTROL_PRESSED(2, Global_14362) && !PAD::IS_CONTROL_PRESSED(2, Global_14361))
	{
		Global_14371 = 0;
	}
}

int func_2(int iParam0, int iParam1)//Position - 0x1A6B
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(uParam1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2) == iParam0)
			{
				return 2;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 3) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 4) == iParam0)
			{
				return 4;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 5) == iParam0)
			{
				return 5;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 6) == iParam0)
			{
				return 6;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 7) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 8) == iParam0)
			{
				return 4;
			}
		}
	}
	return -2;
}

int func_3(int iParam0)//Position - 0x1B38
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_4(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_4(int iParam0)//Position - 0x1B59
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

bool func_5()//Position - 0x1BA2
{
	return Global_2451015.f_1;
}

void func_6()//Position - 0x1BB0
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_16751 = 0;
	Global_16752 = 0;
	PAD::SET_INPUT_EXCLUSIVE(0, Global_14363);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	if (Global_14359 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
		if (func_62())
		{
			iLocal_17 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_17 = 0;
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(1);
		Global_14359 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Sleep_Reminder_Been_Displayed == 1)
	{
		Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Sleep_Reminder_Been_Displayed = 0;
		HUD::CLEAR_FLOATING_HELP(0, 1);
	}
	fVar0 = 350f;
	if (MISC::IS_BIT_SET(Global_2263, 30) || MISC::IS_BIT_SET(Global_2265, 2))
	{
		fVar0 = 25f;
	}
	Var1 = { Global_14353 };
	if (Global_14378 == 1)
	{
		Var1 = { -45f, 45f, 25f };
	}
	if ((MISC::IS_BIT_SET(Global_2264, 26) || MISC::IS_BIT_SET(Global_2263, 30)) || MISC::IS_BIT_SET(Global_2265, 2))
	{
		Local_74 = { Global_14339[Global_14338 /*3*/] };
	}
	else
	{
		Local_74 = { Global_14346[Global_14338 /*3*/] };
	}
	fVar4 = func_12(Local_74, Global_14339[Global_14338 /*3*/], Global_14353, Var1, fVar0, 0);
	if (!iLocal_42 && fVar4 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		iLocal_42 = 1;
	}
	if (iLocal_42 && (MISC::GET_GAME_TIMER() - iLocal_17) > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_14363);
		if (Global_14393.f_1 == 3)
		{
		}
		if (Global_14393.f_1 == 1)
		{
		}
		if (Global_14393.f_1 == 0)
		{
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
		Global_14334 = 0;
		Global_14375 = 0;
		Global_14549 = 0;
		if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Sleep_Reminder_Been_Displayed == 1)
		{
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Sleep_Reminder_Been_Displayed = 0;
			HUD::CLEAR_FLOATING_HELP(0, 1);
		}
		Global_14337 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
		if (Global_16706 == 0)
		{
		}
		Global_14551 = 0;
		if (func_9(0))
		{
			func_8();
		}
		MISC::CLEAR_BIT(&Global_2264, 8);
		MISC::CLEAR_BIT(&Global_2263, 14);
		MISC::CLEAR_BIT(&Global_2263, 9);
		MISC::CLEAR_BIT(&Global_2263, 27);
		MISC::CLEAR_BIT(&Global_2263, 30);
		MISC::CLEAR_BIT(&Global_2264, 5);
		MISC::CLEAR_BIT(&Global_2264, 19);
		MISC::CLEAR_BIT(&Global_2264, 21);
		MISC::CLEAR_BIT(&Global_2264, 24);
		MISC::CLEAR_BIT(&Global_2264, 25);
		MISC::CLEAR_BIT(&Global_2264, 27);
		MISC::CLEAR_BIT(&Global_2264, 26);
		MISC::CLEAR_BIT(&Global_2265, 2);
		Global_2453243 = 0;
		iLocal_77 = 0;
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_7();
		}
		SYSTEM::SETTIMERA(0);
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[2 /*15*/].f_9) == 0)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_14391))
			{
				SYSTEM::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_14363);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374))
				{
					HUD::SET_TEXT_RENDER_ID(iLocal_41);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_14374, Global_14313, Global_14314, Global_14315, Global_14316, 255, 255, 255, 255, 0);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					SCRIPT::TERMINATE_THREAD(Global_14391);
				}
			}
		}
		Global_14381 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374))
		{
			func_101(Global_14374, "SHUTDOWN_MOVIE");
		}
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_14374);
		Global_14359 = 0;
		PAD::SET_INPUT_EXCLUSIVE(0, Global_14363);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_2451015.f_1)
			{
				if (Global_68245)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_14382, 1);
				}
			}
		}
		func_98();
		func_96();
		Global_15705 = 0;
		Global_2544851 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_7()//Position - 0x1F34
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

void func_8()//Position - 0x1F8B
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

int func_9(int iParam0)//Position - 0x2008
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_10(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_10(int iParam0)//Position - 0x202A
{
	return func_11(iParam0, Global_34913);
}

int func_11(int iParam0, int iParam1)//Position - 0x203B
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

float func_12(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)//Position - 0x221C
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
	if (func_62() && Global_2544851 == 0)
	{
		return 2f;
	}
	if (iLocal_17 == 0)
	{
		iLocal_17 = MISC::GET_GAME_TIMER();
	}
	fVar3 = func_14((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_17)) / fParam12), 0f, 1f);
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
		Global_14321 = { func_13(Param0, Param3, fVar4) };
		Global_14324 = { func_13(Param6, Param9, fVar4) };
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

Vector3 func_13(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x232E
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_14(float fParam0, float fParam1, float fParam2)//Position - 0x2348
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_15()//Position - 0x236F
{
	if (Global_14371 == 0)
	{
		if (func_50(2, Global_14365, 0))
		{
			if (Global_68245 == 0)
			{
				if (Global_14553)
				{
					if (Global_14552 == 0)
					{
						Global_14552 = 1;
						func_95(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_70(2);
						func_16();
						func_95(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14398), -1082130432, -1082130432, -1082130432);
						Global_14373 = Global_14398;
					}
					else
					{
						Global_14552 = 0;
						func_95(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_70(1);
						func_16();
						func_95(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14397), -1082130432, -1082130432, -1082130432);
						Global_14373 = Global_14397;
					}
				}
			}
		}
	}
}

void func_16()//Position - 0x2448
{
	if (Global_14553 == 0)
	{
		func_68(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_2263, 17);
	}
	else if (Global_68245)
	{
		func_68(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_2263, 17);
	}
	else
	{
		if (Global_14552 == 1)
		{
			if (Global_14381)
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_14381)
		{
			func_68(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else
		{
			func_68(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		MISC::SET_BIT(&Global_2263, 17);
	}
}

void func_17()//Position - 0x2521
{
	if (MISC::IS_BIT_SET(Global_2264, 10) || iLocal_77 == 1)
	{
		Global_2870 = MISC::GET_GAME_TIMER();
		Global_2869 = 0;
		Global_14371 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
		uLocal_28 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		iLocal_29 = 1;
	}
	else if (Global_14371 == 0)
	{
		if (func_50(2, Global_14362, 0))
		{
			if (iLocal_30 == 0)
			{
				Global_2870 = MISC::GET_GAME_TIMER();
				Global_2869 = 0;
				Global_14371 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
				uLocal_28 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				iLocal_29 = 1;
			}
		}
	}
}

void func_18()//Position - 0x25A3
{
	if (Global_14371 == 0)
	{
		if (func_50(2, Global_14360, 1))
		{
			if (func_90(2074, -1, 0) == 1)
			{
				if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 0)
				{
					if (!MISC::IS_BIT_SET(Global_2264, 3))
					{
						if (!Global_14336)
						{
							if (!MISC::IS_BIT_SET(Global_2544648, 3))
							{
								if (!MISC::IS_BIT_SET(Global_2263, 14))
								{
									Global_14371 = 1;
									MISC::SET_BIT(&Global_2544648, 3);
									func_19(3, 0, 1, 0);
									Global_16751 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_19(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2624
{
	func_103();
	if (Global_68245 == 0)
	{
		if (func_69(14))
		{
			return 0;
		}
	}
	if (Global_14393.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_21(0) == 1)
		{
			return 0;
		}
	}
	if (Global_14359 == 1)
	{
		return 0;
	}
	if (Global_14393.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_14390))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14393.f_1 < 4)
			{
				func_20("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_14390 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_14375)
	{
		SYSTEM::WAIT(0);
	}
	func_73();
	func_71();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[iParam0 /*15*/].f_9) == 0)
	{
		Global_2869 = 0;
		Global_14393.f_1 = 7;
		func_20(&(Global_2270[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[iParam0 /*15*/].f_9) == 0)
			{
				Global_14391 = SYSTEM::START_NEW_SCRIPT(&(Global_2270[iParam0 /*15*/].f_5), 3800);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[iParam0 /*15*/].f_9) == 0)
		{
			Global_14391 = SYSTEM::START_NEW_SCRIPT(&(Global_2270[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_2270[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_20(char* sParam0)//Position - 0x2774
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

int func_21(int iParam0)//Position - 0x2794
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_22()//Position - 0x27EE
{
	if (Global_14372)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_14372 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_14373)
			{
				case 0:
					if (Global_2832[1])
					{
						func_30();
						Global_14373 = 1;
					}
					break;
				
				case 1:
					if (Global_2832[2])
					{
						func_30();
						Global_14373 = 2;
					}
					break;
				
				case 2:
					if (Global_2832[3])
					{
						func_30();
						func_28();
						Global_14373 = 3;
					}
					else
					{
						func_26();
						func_28();
						Global_14373 = 4;
					}
					break;
				
				case 3:
					if (Global_2832[4])
					{
						func_30();
						Global_14373 = 4;
					}
					break;
				
				case 4:
					if (Global_2832[5])
					{
						func_30();
						Global_14373 = 5;
					}
					break;
				
				case 5:
					if (Global_2832[6])
					{
						func_30();
						func_28();
						Global_14373 = 6;
					}
					break;
				
				case 6:
					if (Global_2832[7])
					{
						func_30();
						Global_14373 = 7;
					}
					break;
				
				case 7:
					if (Global_2832[8])
					{
						func_30();
						Global_14373 = 8;
					}
					else
					{
						func_26();
						func_28();
						Global_14373 = 0;
					}
					break;
				
				case 8:
					if (Global_2832[0])
					{
						func_30();
						func_28();
						Global_14373 = 0;
					}
					else
					{
						func_26();
						func_28();
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_14373)
			{
				case 0:
					if (Global_2832[8])
					{
						func_26();
						func_23();
						Global_14373 = 8;
					}
					else
					{
						func_30();
						func_23();
						Global_14373 = 7;
					}
					break;
				
				case 1:
					if (Global_2832[0])
					{
						func_26();
						Global_14373 = 0;
					}
					else if (Global_2832[8])
					{
						func_23();
						func_30();
					}
					else
					{
						func_23();
					}
					break;
				
				case 2:
					if (Global_2832[1])
					{
						func_26();
						Global_14373 = 1;
					}
					break;
				
				case 3:
					if (Global_2832[2])
					{
						func_26();
						func_23();
						Global_14373 = 2;
					}
					break;
				
				case 4:
					if (Global_2832[3])
					{
						func_26();
						Global_14373 = 3;
					}
					else
					{
						func_23();
						func_30();
						Global_14556 = 1;
						Global_14373 = 2;
					}
					break;
				
				case 5:
					if (Global_2832[4])
					{
						func_26();
						Global_14373 = 4;
					}
					break;
				
				case 6:
					if (Global_2832[5])
					{
						func_23();
						func_26();
						Global_14373 = 5;
					}
					break;
				
				case 7:
					if (Global_2832[6])
					{
						func_26();
						Global_14373 = 6;
					}
					break;
				
				case 8:
					if (Global_2832[7])
					{
						func_26();
						Global_14373 = 7;
					}
					break;
				}
			}
	}
	if (Global_14372 == 0)
	{
		if (func_50(2, Global_14368, 0))
		{
			Global_14556 = 0;
			switch (Global_14373)
			{
				case 2:
					if (Global_2832[0] == 1)
					{
						Global_14373 = 0;
					}
					else
					{
						Global_14373 = 1;
						Global_14556 = 1;
					}
					break;
				
				case 5:
					Global_14373 = 3;
					break;
				
				case 6:
					Global_14373 = 7;
					break;
				
				case 7:
					if (Global_2832[Global_14373 + 1] == 1)
					{
						Global_14373 = 8;
					}
					else
					{
						Global_14373 = 6;
						Global_14556 = 1;
					}
					break;
				
				case 8:
					Global_14373 = 6;
					break;
				
				default:
					Global_14373++;
					break;
			}
			if (Global_14556 == 1)
			{
				func_26();
			}
			else
			{
				func_30();
			}
			Global_14372 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_50(2, Global_14367, 0))
		{
			Global_14556 = 0;
			switch (Global_14373)
			{
				case 0:
					Global_14373 = 2;
					break;
				
				case 1:
					if (Global_2832[0] == 1)
					{
						Global_14373 = 0;
					}
					else
					{
						Global_14373 = 2;
						Global_14556 = 1;
					}
					break;
				
				case 3:
					Global_14373 = 5;
					break;
				
				case 6:
					if (Global_2832[8] == 1)
					{
						Global_14373 = 8;
					}
					else
					{
						Global_14373 = 7;
						Global_14556 = 1;
					}
					break;
				
				default:
					Global_14373 = (Global_14373 - 1);
					break;
			}
			if (Global_14556 == 1)
			{
				func_30();
			}
			else
			{
				func_26();
			}
			Global_14372 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_50(2, Global_14369, 0))
		{
			Global_14556 = 0;
			switch (Global_14373)
			{
				case 0:
					if (Global_2832[6])
					{
						Global_14373 = 6;
					}
					break;
				
				case 1:
					if (Global_2832[7])
					{
						Global_14373 = 7;
					}
					else
					{
						Global_14556 = 1;
						Global_14373 = 4;
					}
					break;
				
				case 2:
					if (Global_2832[8])
					{
						Global_14373 = 8;
					}
					else
					{
						Global_14556 = 1;
						Global_14373 = 5;
					}
					break;
				
				case 3:
					if (Global_2832[0])
					{
						Global_14373 = 0;
					}
					else
					{
						Global_14556 = 1;
						Global_14373 = 6;
					}
					break;
				
				case 4:
					if (Global_2832[1])
					{
						Global_14373 = 1;
					}
					break;
				
				case 5:
					if (Global_2832[2])
					{
						Global_14373 = 2;
					}
					break;
				
				case 6:
					if (Global_2832[3])
					{
						Global_14373 = 3;
					}
					break;
				
				case 7:
					if (Global_2832[4])
					{
						Global_14373 = 4;
					}
					break;
				
				case 8:
					if (Global_2832[5])
					{
						Global_14373 = 5;
					}
					break;
			}
			if (Global_14556 == 1)
			{
				func_28();
			}
			else
			{
				func_23();
			}
			Global_14372 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_50(2, Global_14370, 0))
		{
			Global_14556 = 0;
			switch (Global_14373)
			{
				case 0:
					if (Global_2832[3])
					{
						Global_14373 = 3;
					}
					break;
				
				case 1:
					if (Global_2832[4])
					{
						Global_14373 = 4;
					}
					break;
				
				case 2:
					if (Global_2832[5])
					{
						Global_14373 = 5;
					}
					break;
				
				case 3:
					if (Global_2832[6])
					{
						Global_14373 = 6;
					}
					break;
				
				case 4:
					if (Global_2832[7])
					{
						Global_14373 = 7;
					}
					else
					{
						Global_14556 = 1;
						Global_14373 = 1;
					}
					break;
				
				case 5:
					if (Global_2832[8])
					{
						Global_14373 = 8;
					}
					else
					{
						Global_14556 = 1;
						Global_14373 = 2;
					}
					break;
				
				case 6:
					if (Global_2832[0])
					{
						Global_14373 = 0;
					}
					else
					{
						Global_14556 = 1;
						Global_14373 = 3;
					}
					break;
				
				case 7:
					if (Global_2832[1])
					{
						Global_14373 = 1;
					}
					break;
				
				case 8:
					if (Global_2832[2])
					{
						Global_14373 = 2;
					}
					break;
			}
			if (Global_14556 == 1)
			{
				func_23();
			}
			else
			{
				func_28();
			}
			Global_14372 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_23()//Position - 0x2E17
{
	func_95(Global_14374, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
	func_24();
}

void func_24()//Position - 0x2E54
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

int func_25()//Position - 0x2E77
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

void func_26()//Position - 0x2EBE
{
	func_95(Global_14374, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
	func_27();
}

void func_27()//Position - 0x2EFB
{
	if (func_25())
	{
		if (Global_14556 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(3);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(4);
		}
	}
}

void func_28()//Position - 0x2F1E
{
	func_95(Global_14374, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
	func_29();
}

void func_29()//Position - 0x2F5B
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

void func_30()//Position - 0x2F7E
{
	func_95(Global_14374, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
	func_31();
}

void func_31()//Position - 0x2FBB
{
	if (func_25())
	{
		if (Global_14556 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(4);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(3);
		}
	}
}

void func_32()//Position - 0x2FDE
{
	if (Global_14372)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_14372 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_14373)
			{
				case 0:
					if (Global_2832[1])
					{
						func_30();
						Global_14373 = 1;
					}
					break;
				
				case 1:
					if (Global_2832[2])
					{
						func_30();
						Global_14373 = 2;
					}
					break;
				
				case 2:
					if (Global_2832[3])
					{
						func_30();
						func_28();
						Global_14373 = 3;
					}
					else
					{
						func_26();
						func_28();
						Global_14373 = 4;
					}
					break;
				
				case 3:
					if (Global_2832[4])
					{
						func_30();
						Global_14373 = 4;
					}
					break;
				
				case 4:
					if (Global_2832[5])
					{
						func_30();
						Global_14373 = 5;
					}
					break;
				
				case 5:
					if (Global_2832[6])
					{
						func_30();
						func_28();
						Global_14373 = 6;
					}
					break;
				
				case 6:
					if (Global_2832[7])
					{
						func_30();
						Global_14373 = 7;
					}
					break;
				
				case 7:
					if (Global_2832[8])
					{
						func_30();
						Global_14373 = 8;
					}
					else
					{
						func_26();
						func_28();
						Global_14373 = 0;
					}
					break;
				
				case 8:
					if (Global_2832[0])
					{
						func_30();
						func_28();
						Global_14373 = 0;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_14373)
			{
				case 0:
					if (Global_2832[8])
					{
						func_26();
						func_23();
						Global_14373 = 8;
					}
					else
					{
						func_30();
						func_23();
						Global_14373 = 7;
					}
					break;
				
				case 1:
					if (Global_2832[0])
					{
						func_26();
						Global_14373 = 0;
					}
					break;
				
				case 2:
					if (Global_2832[1])
					{
						func_26();
						Global_14373 = 1;
					}
					break;
				
				case 3:
					if (Global_2832[2])
					{
						func_26();
						func_23();
						Global_14373 = 2;
					}
					break;
				
				case 4:
					if (Global_2832[3])
					{
						func_26();
						Global_14373 = 3;
					}
					else
					{
						func_23();
						func_30();
						Global_14556 = 1;
						Global_14373 = 2;
					}
					break;
				
				case 5:
					if (Global_2832[4])
					{
						func_26();
						Global_14373 = 4;
					}
					break;
				
				case 6:
					if (Global_2832[5])
					{
						func_23();
						func_26();
						Global_14373 = 5;
					}
					break;
				
				case 7:
					if (Global_2832[6])
					{
						func_26();
						Global_14373 = 6;
					}
					break;
				
				case 8:
					if (Global_2832[7])
					{
						func_26();
						Global_14373 = 7;
					}
					break;
				}
			}
	}
	if (Global_14372 == 0)
	{
		if (func_50(2, Global_14368, 0))
		{
			Global_14556 = 0;
			switch (Global_14373)
			{
				case 2:
					Global_14373 = 0;
					break;
				
				case 5:
					Global_14373 = 3;
					break;
				
				case 7:
					if (Global_2832[Global_14373 + 1] == 1)
					{
						Global_14373 = 8;
					}
					else
					{
						Global_14373 = 6;
						Global_14556 = 1;
					}
					break;
				
				case 8:
					Global_14373 = 6;
					break;
				
				default:
					Global_14373++;
					break;
			}
			if (Global_14556 == 1)
			{
				func_26();
			}
			else
			{
				func_30();
			}
			Global_14372 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_50(2, Global_14367, 0))
		{
			Global_14556 = 0;
			switch (Global_14373)
			{
				case 0:
					Global_14373 = 2;
					break;
				
				case 3:
					Global_14373 = 5;
					break;
				
				case 6:
					if (Global_2832[8] == 1)
					{
						Global_14373 = 8;
					}
					else
					{
						Global_14373 = 7;
						Global_14556 = 1;
					}
					break;
				
				default:
					Global_14373 = (Global_14373 - 1);
					break;
			}
			if (Global_14556 == 1)
			{
				func_30();
			}
			else
			{
				func_26();
			}
			Global_14372 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_50(2, Global_14369, 0))
		{
			Global_14556 = 0;
			switch (Global_14373)
			{
				case 0:
					if (Global_2832[6])
					{
						Global_14373 = 6;
					}
					break;
				
				case 1:
					if (Global_2832[7])
					{
						Global_14373 = 7;
					}
					break;
				
				case 2:
					if (Global_2832[8])
					{
						Global_14373 = 8;
					}
					else
					{
						Global_14556 = 1;
						Global_14373 = 5;
					}
					break;
				
				case 3:
					if (Global_2832[0])
					{
						Global_14373 = 0;
					}
					break;
				
				case 4:
					if (Global_2832[1])
					{
						Global_14373 = 1;
					}
					break;
				
				case 5:
					if (Global_2832[2])
					{
						Global_14373 = 2;
					}
					break;
				
				case 6:
					if (Global_2832[3])
					{
						Global_14373 = 3;
					}
					break;
				
				case 7:
					if (Global_2832[4])
					{
						Global_14373 = 4;
					}
					break;
				
				case 8:
					if (Global_2832[5])
					{
						Global_14373 = 5;
					}
					break;
			}
			if (Global_14556 == 1)
			{
				func_28();
			}
			else
			{
				func_23();
			}
			Global_14372 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_50(2, Global_14370, 0))
		{
			Global_14556 = 0;
			switch (Global_14373)
			{
				case 0:
					if (Global_2832[3])
					{
						Global_14373 = 3;
					}
					break;
				
				case 1:
					if (Global_2832[4])
					{
						Global_14373 = 4;
					}
					break;
				
				case 2:
					if (Global_2832[5])
					{
						Global_14373 = 5;
					}
					break;
				
				case 3:
					if (Global_2832[6])
					{
						Global_14373 = 6;
					}
					break;
				
				case 4:
					if (Global_2832[7])
					{
						Global_14373 = 7;
					}
					break;
				
				case 5:
					if (Global_2832[8])
					{
						Global_14373 = 8;
					}
					else
					{
						Global_14556 = 1;
						Global_14373 = 2;
					}
					break;
				
				case 6:
					if (Global_2832[0])
					{
						Global_14373 = 0;
					}
					break;
				
				case 7:
					if (Global_2832[1])
					{
						Global_14373 = 1;
					}
					break;
				
				case 8:
					if (Global_2832[2])
					{
						Global_14373 = 2;
					}
					break;
			}
			if (Global_14556 == 1)
			{
				func_23();
			}
			else
			{
				func_28();
			}
			Global_14372 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_33()//Position - 0x3570
{
	int iVar0;
	var uVar1;
	
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_28))
	{
		iLocal_29 = 0;
		iLocal_27 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_28);
		if (Global_14552 == 0)
		{
			Global_14397 = iLocal_27;
		}
		else
		{
			Global_14398 = iLocal_27;
		}
		if (iLocal_27 < 0)
		{
			iLocal_27 = 0;
		}
		Global_14396 = Global_2796[iLocal_27];
		if (MISC::IS_BIT_SET(Global_2264, 10))
		{
			Global_14396 = 2;
			MISC::CLEAR_BIT(&Global_2264, 10);
		}
		if (iLocal_77 == 1)
		{
			Global_14397 = 1;
			Global_14396 = 0;
			Global_2453243 = 0;
			iLocal_77 = 0;
		}
		iVar0 = 0;
		if (SCRIPT::IS_THREAD_ACTIVE(Global_14391))
		{
			iVar0 = 1;
		}
		if (Global_14396 == 3)
		{
			if (MISC::IS_BIT_SET(Global_2264, 3))
			{
				iVar0 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (((((((PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0)) || GRAPHICS::GET_USINGNIGHTVISION())
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) == 0)
					{
						iVar0 = 1;
					}
					uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(uVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
				{
					iVar0 = 1;
				}
				if (Global_68245)
				{
					if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_68, 1);
						if (iLocal_68 != joaat("weapon_unarmed"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_14396 == 2)
		{
			if (MISC::IS_BIT_SET(Global_2264, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_68245)
		{
			if (Global_14396 == 15 || Global_14396 == 5)
			{
			}
			else
			{
				if (Global_14396 == 23)
				{
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						if (Global_14396 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (iVar0 == 0)
				{
					func_68(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_2263, 17);
					Global_14393.f_1 = 7;
					if (MISC::IS_BIT_SET(Global_2263, 23))
					{
					}
					else
					{
						func_35();
						SCRIPT::REQUEST_SCRIPT(&(Global_2270[Global_14396 /*15*/].f_5));
						MISC::SET_BIT(&Global_2263, 23);
					}
				}
				else
				{
					if (Global_14396 == 2 || Global_14396 == 3)
					{
					}
					func_34();
				}
			}
		}
		else
		{
			switch (Global_14396)
			{
				case 3:
					if (Global_96406 == 1)
					{
						iVar0 = 1;
					}
					break;
				
				case 8:
					iVar0 = 1;
					break;
				
				case 15:
					iVar0 = 1;
					break;
				
				case 16:
					iVar0 = 1;
					MISC::SET_BIT(&Global_2263, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_14554 == 0)
					{
						if ((Global_2267 == 0 && iLocal_30 == 0) && Global_34913 == 15)
						{
							iLocal_30 = 1;
							func_35();
							if (!Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.QuickSave_Help_Been_Displayed)
							{
							}
						}
					}
					else
					{
						func_34();
					}
					break;
				
				default:
					break;
			}
			if (CUTSCENE::_0x5EDEF0CF8C1DAB3C())
			{
				if (Global_14396 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_69(14))
			{
				if (Global_14396 != 3)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_35();
				func_68(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2263, 17);
				Global_14393.f_1 = 7;
				if (MISC::IS_BIT_SET(Global_2263, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_2270[Global_14396 /*15*/].f_5));
					MISC::SET_BIT(&Global_2263, 23);
				}
			}
			else if (Global_14396 != 20)
			{
				if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.TranslucentIcon_Help_Been_Displayed == 0)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_14396 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
								{
									func_66("CELL_38", -1);
									Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.TranslucentIcon_Help_Been_Displayed = 1;
								}
							}
						}
					}
				}
				func_34();
			}
		}
	}
}

void func_34()//Position - 0x394C
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14382, 1);
	}
}

void func_35()//Position - 0x396D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14382, 1);
		func_36();
	}
}

void func_36()//Position - 0x3992
{
	if (func_25())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

void func_37()//Position - 0x39A6
{
	if (Global_14359 == 0)
	{
		if (func_12(Global_14346[Global_14338 /*3*/], Global_14339[Global_14338 /*3*/], Global_14353, Global_14353, 350f, 0) >= 1f)
		{
			iLocal_17 = 0;
			MISC::CLEAR_BIT(&Global_2264, 24);
			MISC::SET_BIT(&Global_2264, 26);
		}
	}
}

void func_38()//Position - 0x39F7
{
	if (Global_14359 == 0)
	{
		if (func_12(Global_14339[Global_14338 /*3*/], Global_14346[Global_14338 /*3*/], Global_14353, Global_14353, 350f, 1) >= 1f)
		{
			iLocal_17 = 0;
			MISC::CLEAR_BIT(&Global_2264, 25);
			if (Global_15705)
			{
				MISC::CLEAR_BIT(&Global_2264, 27);
			}
		}
	}
}

void func_39()//Position - 0x3A4E
{
	if (Global_14359 == 0 && Global_14333 == 0)
	{
		if (func_12(Global_14346[Global_14338 /*3*/], Global_14339[Global_14338 /*3*/], Global_14353, Global_14353, 350f, 0) >= 1f)
		{
			iLocal_17 = 0;
			Global_2544851 = 0;
		}
	}
}

void func_40()//Position - 0x3A9D
{
	float fVar0;
	float fVar1;
	
	if (MISC::IS_BIT_SET(Global_2265, 2))
	{
		MISC::SET_BIT(&Global_2264, 8);
		MISC::SET_BIT(&Global_2263, 14);
		Global_14333 = 0;
		iLocal_17 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_14353, 0);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
	{
		fVar0 = func_12(Global_14339[Global_14338 /*3*/], Global_14346[Global_14338 /*3*/], Global_14356, Global_14353, 450f, 1);
		if (fVar0 >= 1f)
		{
			MISC::SET_BIT(&Global_2264, 8);
			MISC::SET_BIT(&Global_2263, 14);
			Global_14333 = 0;
			iLocal_17 = 0;
			MISC::CLEAR_BIT(&Global_2265, 2);
			iLocal_37 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			MISC::SET_BIT(&Global_2264, 8);
		}
	}
	else
	{
		if (iLocal_37 == 0)
		{
			Local_38 = { Global_14346[Global_14338 /*3*/] };
			Local_38.x = (Local_38.x - 10f);
			Local_38.f_1 = (Local_38.f_1 + 20f);
			iLocal_37 = 1;
		}
		fVar1 = func_12(Global_14339[Global_14338 /*3*/], Local_38, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			MISC::SET_BIT(&Global_2264, 8);
			MISC::SET_BIT(&Global_2263, 14);
			Global_14333 = 0;
			iLocal_17 = 0;
			MISC::CLEAR_BIT(&Global_2265, 2);
			iLocal_37 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			MISC::SET_BIT(&Global_2264, 8);
		}
	}
}

void func_41()//Position - 0x3BF3
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_62 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_61);
	}
	else
	{
		iLocal_57 = MISC::GET_GAME_TIMER();
		iLocal_62 = (iLocal_57 - iLocal_56);
	}
	if (iLocal_62 > 4000)
	{
		iLocal_44 = func_87();
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uLocal_61 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			iLocal_56 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_42()//Position - 0x3C49
{
	if (Global_14392 == 1)
	{
		func_102();
		if (Global_14371 == 0)
		{
			if (func_50(2, Global_14363, 0))
			{
				if (MISC::IS_BIT_SET(Global_2264, 8))
				{
					if (Global_15739 == 0)
					{
						func_34();
						Global_14371 = 1;
						Global_14392 = 3;
						Global_15741 = 1;
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
		}
		if (Global_14371 == 0)
		{
			if (func_50(2, Global_14362, 0))
			{
				if (MISC::IS_BIT_SET(Global_2264, 8))
				{
					func_35();
					Global_14371 = 1;
					Global_14392 = 2;
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					}
					func_47();
					func_46();
				}
			}
		}
	}
	else
	{
		if (iLocal_54 == 0)
		{
			if (MISC::IS_BIT_SET(Global_2263, 27))
			{
				iLocal_54 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_14393.f_1 > 3)
			{
				if (SYSTEM::TIMERB() > 1500)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_14336)
							{
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
							}
							else if (!MISC::IS_BIT_SET(Global_2265, 5))
							{
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
							}
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(Global_2263, 27))
			{
				iLocal_54 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (Global_14392 == 0)
		{
			if (Global_14371 == 0)
			{
				if (func_50(2, Global_14361, 0) || Global_2453243 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (MISC::IS_BIT_SET(Global_2264, 8))
							{
								switch (Global_14393.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_14551 == 0)
										{
											if (Global_14552 == 1)
											{
												func_34();
												Global_14552 = 0;
												func_95(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_73();
												func_71();
												func_70(1);
												func_95(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14397), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
												{
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_14382, 1);
												}
												iLocal_17 = 0;
												Global_14393.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_14393.f_1 = 3;
										break;
									
									case 7:
										if (MISC::IS_BIT_SET(Global_2263, 23) == 1)
										{
										}
										if ((Global_2871 - Global_2870) > Global_2872 && MISC::IS_BIT_SET(Global_2263, 23) == 0)
										{
											if (MISC::IS_BIT_SET(Global_2264, 0))
											{
											}
											else
											{
												func_34();
												Global_2869 = 1;
												Global_14393.f_1 = 6;
												Global_2266 = 99;
												if (Global_2453243 == 0)
												{
													func_43();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_1578 == 132)
										{
											if (Global_2451015.f_1 || MISC::IS_BIT_SET(Global_2264, 20))
											{
												func_34();
												func_64();
											}
										}
										else
										{
											func_34();
											func_64();
											Global_15741 = 1;
										}
										break;
									
									case 9:
										if (Global_15692 == 0)
										{
											Global_14393.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_2453243 == 1)
								{
									iLocal_77 = 1;
									Global_2453243 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_43()//Position - 0x3F62
{
	struct<3> Var0;
	
	if (Global_14376 == 1)
	{
		return;
	}
	if (Global_14393.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374))
	{
		SYSTEM::WAIT(0);
	}
	switch (Global_14393.f_1)
	{
		case 6:
			func_95(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_70(Global_2868);
			if (Global_2868 == 1)
			{
				func_95(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14397), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14397;
			}
			else
			{
				func_95(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14398;
			}
			if (Global_14381)
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14553 == 0)
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2263, 17);
			}
			else if (Global_68245)
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2263, 17);
			}
			else
			{
				if (Global_14552 == 1)
				{
					if (Global_14381)
					{
						func_68(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_68(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14381)
				{
					func_68(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_68(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_2263, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_95(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_68(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_68(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2263, 17);
			if (MISC::IS_BIT_SET(Global_2263, 20))
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14392 == 1)
			{
				func_89();
				func_95(Global_14374, "SET_THEME", SYSTEM::TO_FLOAT(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15705)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15707);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_45("CELL_300");
					func_45("CELL_217");
					func_45("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					func_68(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_68(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), "CELL_217", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
				}
				func_95(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15692 == 4 || Global_15692 == 3)
			{
				func_95(Global_14374, "SET_THEME", SYSTEM::TO_FLOAT(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_89();
				if (Global_15705)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15707);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_45("CELL_300");
					func_45("CELL_219");
					func_45("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_15950)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] == 0)
					{
						func_95(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_68(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_95(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_68(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), &Var0, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
					}
				}
				func_95(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_44();
			break;
		
		default:
			break;
	}
}

void func_44()//Position - 0x4521
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374))
	{
		if (Global_14392 == 1)
		{
			if (Global_14381)
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15739)
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_2263, 20))
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_68(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2263, 17);
		}
		else
		{
			func_68(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_68(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2263, 17);
			if (MISC::IS_BIT_SET(Global_2263, 20))
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_45(char* sParam0)//Position - 0x46A4
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_46()//Position - 0x46B6
{
	if (Global_15705)
	{
		if (Global_68245)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_68(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2446554.f_1619), 15);
				}
			}
		}
	}
}

void func_47()//Position - 0x4705
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14374))
	{
		if (!Global_15700)
		{
			func_68(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_68(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2263, 17);
			if (MISC::IS_BIT_SET(Global_2263, 20))
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_68(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
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
				func_45("CELL_300");
				func_45("CELL_219");
				func_45("CELL_219");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_24[Global_14393] == 0)
			{
				func_68(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_68(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_7), "CELL_219", &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_1578 /*29*/].f_3), 0);
			}
		}
		func_95(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_48()//Position - 0x48CA
{
	Global_14558 = 0;
	func_49();
}

void func_49()//Position - 0x48DA
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14392 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_16703 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
		Global_14393.f_1 = Global_14395;
		return;
	}
}

int func_50(int iParam0, int iParam1, int iParam2)//Position - 0x4911
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
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

int func_51()//Position - 0x4983
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_52(bool bParam0)//Position - 0x49A0
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

void func_53(int iParam0)//Position - 0x49CB
{
	if (Global_14551)
	{
		func_55(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2264, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 30);
	}
	if (!func_54())
	{
		Global_14393.f_1 = 3;
	}
}

int func_54()//Position - 0x4A3B
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_55(bool bParam0, bool bParam1)//Position - 0x4A62
{
	if (bParam0)
	{
		if (func_21(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14330);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
}

void func_56()//Position - 0x4AD6
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_57()//Position - 0x4AFF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_65() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			if (Global_68245)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_14336)
			{
				if (Global_1578 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
							}
							else
							{
								if (Global_68245)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 0);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 0);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 0);
								}
								MISC::SET_BIT(&Global_2263, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

void func_58()//Position - 0x4C21
{
	if ((MISC::IS_BIT_SET(Global_2263, 14) && Global_2544851 == 0) && Global_14333 == 0)
	{
		if (func_63())
		{
		}
		else
		{
			func_59();
		}
		if (Global_14393.f_1 == 9)
		{
			if (Global_15705 == 0)
			{
				iLocal_31 = 1;
			}
		}
	}
}

void func_59()//Position - 0x4C6C
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_14346[Global_14338 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_14333 = 1;
	}
}

void func_60()//Position - 0x4C93
{
	if ((MISC::IS_BIT_SET(Global_2263, 14) && Global_2544851 == 0) && Global_14333 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (MISC::IS_BIT_SET(Global_2264, 26))
			{
				MISC::CLEAR_BIT(&Global_2264, 24);
				MISC::CLEAR_BIT(&Global_2264, 25);
				MISC::CLEAR_BIT(&Global_2264, 27);
				MISC::CLEAR_BIT(&Global_2264, 26);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						func_59();
					}
					else if (func_62() == 0)
					{
						func_59();
					}
				}
			}
		}
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			if (func_62())
			{
				func_61();
			}
		}
		else if (func_63())
		{
		}
		else if (func_62())
		{
			func_61();
		}
		if (Global_14393.f_1 == 9)
		{
			if (Global_15705 == 0)
			{
				iLocal_31 = 1;
			}
		}
	}
}

void func_61()//Position - 0x4D6E
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_14339[Global_14338 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_2544851 = 1;
	}
}

int func_62()//Position - 0x4D96
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			if (Global_14336 == 0)
			{
				if (Global_1578 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_15692 != 2)
						{
						}
					}
				}
			}
		}
		if (func_69(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_96401)
		{
			return 0;
		}
	}
	if (Global_68245)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2544850 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Is_Trackify_App_Available)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_63()//Position - 0x4FA9
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_64()//Position - 0x4FC6
{
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (MISC::IS_BIT_SET(Global_2263, 11))
			{
				if (!Global_14336)
				{
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
				}
				if (Global_68245)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 1);
				}
				MISC::CLEAR_BIT(&Global_2263, 11);
			}
		}
	}
}

int func_65()//Position - 0x5030
{
	var uVar0;
	int iVar1;
	
	uVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_66(char* sParam0, int iParam1)//Position - 0x5054
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_67()//Position - 0x506B
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_41);
	if (iLocal_41 == -1)
	{
	}
}

void func_68(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x507F
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
	if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam7))
	{
		func_45(cParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_45(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_45(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_45(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_45(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_69(int iParam0)//Position - 0x5132
{
	return Global_34913 == iParam0;
}

void func_70(int iParam0)//Position - 0x5140
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_69(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_45(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_68(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68245)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2543383[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2543383[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2543383[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_68(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35962;
											break;
										
										case 1:
											iVar6 = Global_35963;
											break;
										
										case 2:
											iVar6 = Global_35964;
											break;
										
										default:
											break;
									}
									func_68(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_68(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_45(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2269);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_45(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_45(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_45(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								func_68(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_71()//Position - 0x55D6
{
	if (Global_68245 == 0)
	{
		Global_2270[14 /*15*/].f_4 = -99;
		Global_2270[4 /*15*/].f_4 = -99;
		if (Global_2435234)
		{
			func_72(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
		}
		else
		{
			func_72(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_72(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x5630
{
	StringCopy(&(Global_2270[iParam0 /*15*/]), sParam1, 16);
	Global_2270[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2270[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2270[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_2270[iParam0 /*15*/].f_10 = iParam4;
	Global_2270[iParam0 /*15*/].f_11 = iParam5;
	Global_2270[iParam0 /*15*/].f_12 = iParam6;
	Global_2270[iParam0 /*15*/].f_13 = iParam7;
	Global_2270[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2270[iParam0 /*15*/].f_12 == 0)
	{
		Global_2270[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2270[iParam0 /*15*/].f_13 == 0)
	{
		Global_2270[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2270[iParam0 /*15*/].f_14 == 0)
	{
		Global_2270[iParam0 /*15*/].f_14 = 0;
	}
}

void func_73()//Position - 0x56E6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2270[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_68245 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 147)
		{
			if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iVar2 /*29*/].f_19[Global_14393] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_72(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_72(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_72(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_34913 == 15 && func_52(0) == 0) && Global_2268 == 0)
		{
			func_72(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14554 = 0;
			Global_2269 = 255;
		}
		else
		{
			func_72(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14554 = 1;
			Global_2269 = 42;
		}
		if (iVar1 == 1)
		{
			func_72(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_72(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_72(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_72(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_72(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Is_Trackify_App_Available == 1)
		{
			func_72(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Is_Sniper_App_Available == 1)
		{
			func_72(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_72(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_72(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_72(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_72(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_72(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_72(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_72(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_72(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_72(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_72(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_72(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_72(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_72(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_72(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_72(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_72(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_72(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (MISC::IS_BIT_SET(Global_2544648, 4) == 1)
		{
			func_72(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_72(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_72(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_72(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_72(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_72(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_72(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_72(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_72(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_72(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_72(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_72(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_72(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_72(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_72(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_72(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_72(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!MISC::IS_BIT_SET(Global_2544648, 4) == 1)
		{
			if (Global_1573284)
			{
				func_72(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
		}
	}
}

int func_74(int iParam0)//Position - 0x5BA3
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_75() == 0)
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0) && MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0))
	{
		if (iVar0 == 6)
		{
			return 1;
		}
		else if (iVar0 == 7)
		{
			return 1;
		}
		else if (iVar0 == 8)
		{
			return 1;
		}
		else if (iVar0 == 9)
		{
			return 1;
		}
		else if (iVar0 == 11)
		{
			return 1;
		}
		else if (iVar0 == 12)
		{
			return 1;
		}
		else if (iVar0 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_75()//Position - 0x5C46
{
	if (MISC::IS_ORBIS_VERSION())
	{
		if (!NETWORK::_0xBD545D44CCE70597())
		{
			if (NETWORK::_0x74FB3E29E6D10FA9() == 4)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 2)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 1)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_76()//Position - 0x5C8E
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_70 = ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)));
	}
	switch (iLocal_70)
	{
		case 0:
			iLocal_45 = 5;
			break;
		
		case 1:
			iLocal_45 = 5;
			break;
		
		case 2:
			iLocal_45 = 4;
			break;
		
		case 3:
			iLocal_45 = 4;
			break;
		
		case 4:
			iLocal_45 = 3;
			break;
		
		case 5:
			iLocal_45 = 2;
			break;
		
		default:
			iLocal_45 = 3;
			break;
	}
	iLocal_71 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	if (iLocal_71 < 2)
	{
		if (iLocal_45 > 2)
		{
			iLocal_45 = (iLocal_45 - 1);
		}
	}
	if (iLocal_72 == 1 || func_77())
	{
		iLocal_45 = 0;
	}
	func_95(Global_14374, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(iLocal_45), -1082130432, -1082130432, -1082130432);
}

int func_77()//Position - 0x5D5E
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = func_83();
		if (func_82(iVar0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			iVar4 = 0;
			while (iVar4 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls)
			{
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar4 /*15*/].Player_Char_Bitset, iVar0))
				{
					if (func_80(Var1, func_81(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts)
			{
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar4 /*14*/].Player_Char_Bitset, iVar0))
				{
					if (func_80(Var1, func_79(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Emails)
			{
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar4 /*10*/].Player_Char_Bitset, iVar0))
				{
					if (func_80(Var1, func_78(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x5E66
{
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iParam0 /*10*/].Restricted_Area_ID;
}

int func_79(int iParam0)//Position - 0x5E7E
{
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iParam0 /*14*/].Restricted_Area_ID;
}

int func_80(struct<3> Param0, int iParam3)//Position - 0x5E96
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_Restricted_Areas)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Param0, Global_Restricted_Areas[iParam3 /*5*/]) <= (Global_Restricted_Areas[iParam3 /*5*/].f_3 * Global_Restricted_Areas[iParam3 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_Restricted_Areas[iParam3 /*5*/].f_4 != -1)
		{
			return func_80(Param0, Global_Restricted_Areas[iParam3 /*5*/].f_4);
		}
	}
	return 0;
}

int func_81(int iParam0)//Position - 0x5F01
{
	return Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iParam0 /*15*/].Restricted_Area_ID;
}

bool func_82(int iParam0)//Position - 0x5F16
{
	return iParam0 < 3;
}

var func_83()//Position - 0x5F22
{
	func_84();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_84()//Position - 0x5F3B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_86(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_85(PLAYER::PLAYER_PED_ID());
			if (func_82(iVar0) && (!func_69(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_82(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
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

int func_85(int iParam0)//Position - 0x6038
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_86(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_86(int iParam0)//Position - 0x6075
{
	if (func_82(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_87()//Position - 0x609F
{
	func_103();
	return Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_8;
}

struct<13> func_88(var uParam0)//Position - 0x60B9
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

void func_89()//Position - 0x60D0
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

int func_90(int iParam0, int iParam1, int iParam2)//Position - 0x6346
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_91(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_91(var uParam0)//Position - 0x6378
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_92();
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

var func_92()//Position - 0x63AC
{
	return Global_1312737;
}

void func_93()//Position - 0x63B8
{
	if (func_69(14))
	{
		if (Global_14393.f_1 == 6)
		{
			func_95(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_47 = CLOCK::GET_CLOCK_MINUTES();
	if (iLocal_47 != Global_2266)
	{
		Global_2266 = iLocal_47;
		iLocal_46 = CLOCK::GET_CLOCK_HOURS();
		iLocal_48 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		switch (iLocal_48)
		{
			case 0:
				StringCopy(&cLocal_49, "CELL_920", 16);
				break;
			
			case 1:
				StringCopy(&cLocal_49, "CELL_921", 16);
				break;
			
			case 2:
				StringCopy(&cLocal_49, "CELL_922", 16);
				break;
			
			case 3:
				StringCopy(&cLocal_49, "CELL_923", 16);
				break;
			
			case 4:
				StringCopy(&cLocal_49, "CELL_924", 16);
				break;
			
			case 5:
				StringCopy(&cLocal_49, "CELL_925", 16);
				break;
			
			case 6:
				StringCopy(&cLocal_49, "CELL_926", 16);
				break;
			
			default:
				StringCopy(&cLocal_49, "CELL_206", 16);
				break;
		}
		func_68(Global_14374, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_46), SYSTEM::TO_FLOAT(iLocal_47), -1f, -1f, -1f, &cLocal_49, 0, 0, 0, 0);
		if (Global_14336 == 0)
		{
			func_76();
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iLocal_55 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_94()//Position - 0x64D8
{
	if (Global_68245)
	{
		StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_14336)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_14393)
		{
			case 0:
				StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			
			case 2:
				StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
			
			case 1:
				StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
			
			default:
				StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			}
	}
	Global_14356 = { -90f, -130f, 0f };
	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_14338 = 0;
		Global_14339[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f), -113f };
		Global_14346[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f), -113f };
	}
	else
	{
		Global_14338 = 0;
		Global_14339[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f), -91.5f };
		Global_14346[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f), -91.5f };
	}
	Global_14321 = { Global_14339[Global_14338 /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_14339[Global_14338 /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_14356, 0);
	Global_14333 = 1;
}

void func_95(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x663D
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

void func_96()//Position - 0x66A0
{
	Global_2451015.f_1 = 0;
	Global_2451015 = 0;
	Global_2451015.f_2 = 0;
	Global_2451015.f_33 = -1;
	Global_2451015.f_34 = -1;
	StringCopy(&(Global_2451015.f_4), "", 64);
	StringCopy(&(Global_2451015.f_39[0 /*16*/]), "", 64);
	Global_2451015.f_38 = 0;
	Global_2451015.f_56 = 0;
	Global_2451015.f_57 = 0;
	Global_2451015.f_58 = -2;
	Global_2451015.f_3 = 0;
	func_97(&(Global_2451015.f_20));
}

void func_97(var uParam0)//Position - 0x6713
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_98()//Position - 0x675B
{
	Global_2451015.f_2 = 1;
	Global_2451015.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2451015 = 0;
			Global_2451015.f_2 = 0;
		}
		else if (func_99(Global_2451015.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2451015.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2451015.f_20)))
				{
					func_96();
				}
			}
		}
		else
		{
			func_96();
		}
	}
	else
	{
		func_96();
	}
	if (Global_2451015.f_37)
	{
		func_53(0);
	}
	Global_2451015.f_37 = 0;
	Global_2451015.f_3 = 0;
}

bool func_99(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x67FB
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_100()//Position - 0x680B
{
	Global_14558 = 0;
	func_7();
}

void func_101(var uParam0, char* sParam1)//Position - 0x681B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_102()//Position - 0x6830
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_14362);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_14363);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	}
	if (Global_68245)
	{
		Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[3 /*20*/].f_10 = func_90(1185, -1, 0);
	}
	if (MISC::IS_PC_VERSION())
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
		{
		}
		else if (((MISC::GET_GAME_TIMER() - iLocal_73) >= 300 || iLocal_73 == 0) || iLocal_73 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_PAD_SHAKE(0, 100, 100);
			iLocal_73 = MISC::GET_GAME_TIMER();
		}
	}
	else if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_10 == 1)
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_73) >= 300 || iLocal_73 == 0) || iLocal_73 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_PAD_SHAKE(0, 100, 100);
			iLocal_73 = MISC::GET_GAME_TIMER();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_68245)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(Global_3068[3 /*2811*/][1 /*281*/].f_144[func_90(1186, -1, 0) /*6*/]), "Silent Ringtone Dummy"))
				{
					AUDIO::PLAY_PED_RINGTONE(&(Global_3068[3 /*2811*/][1 /*281*/].f_144[func_90(1186, -1, 0) /*6*/]), PLAYER::PLAYER_PED_ID(), 1);
				}
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), 1);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), 1);
					}
				}
			}
		}
	}
}

void func_103()//Position - 0x69F0
{
	if (func_69(14))
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
		Global_14393 = func_83();
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

