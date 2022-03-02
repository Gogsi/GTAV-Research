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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	bool bLocal_45 = 0;
	bool bLocal_46 = 0;
	var uLocal_47 = 0;
	struct<11> Local_48[10];
	char* sLocal_159[10] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_36 = 1;
	iLocal_37 = 1;
	iLocal_39 = joaat("prop_time_capsule_01");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_49();
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("epsilontract")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	GlobalFunc_501(9);
	while (true)
	{
		SYSTEM::WAIT(0);
		switch (iLocal_38)
		{
			case 0:
				func_47();
				break;
			
			case 1:
				func_1();
				break;
			
			case 2:
				func_49();
				break;
		}
	}
}

void func_1()//Position - 0xCB
{
	int iVar0;
	int iVar1;
	
	if ((GlobalFunc_847(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_39(14)) && !CAM::IS_SCREEN_FADED_OUT())
	{
		if (iLocal_40 < 10)
		{
			if (iLocal_40 == 0)
			{
				if (!GlobalFunc_63(36) && (MISC::GET_GAME_TIMER() - iLocal_41) > iLocal_42)
				{
					func_43(0, 60, sLocal_159[0], 1, 0, 0, 0, 0, 1);
					GlobalFunc_651(36);
					iLocal_41 = -1;
				}
			}
			else if (iLocal_40 < 10)
			{
				if (!iLocal_41 == -1)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_41) > 15000)
					{
						func_43(0, 60, sLocal_159[iLocal_40], 1, 0, 0, 0, 0, 1);
						iLocal_41 = -1;
					}
				}
			}
			if (Local_48[iLocal_40 /*11*/].f_10)
			{
				if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(Local_48[iLocal_40 /*11*/].f_1) || GlobalFunc_5219(Local_48[iLocal_40 /*11*/].f_1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					GlobalFunc_841(&(Local_48[iLocal_40 /*11*/].f_1));
					Local_48[iLocal_40 /*11*/].f_10 = 0;
					PAD::SET_PAD_SHAKE(0, 200, 250);
					iVar0 = (805 + iLocal_40);
					GlobalFunc_5217(iVar0, 1, -1, 1);
					STATS::STAT_INCREMENT(joaat("num_hidden_packages_2"), 1f);
					bLocal_45 = true;
					if (iLocal_40 < 10)
					{
						iLocal_40++;
						iLocal_41 = MISC::GET_GAME_TIMER();
						GlobalFunc_842(1, 0);
						GlobalFunc_4907();
					}
				}
				else if (OBJECT::DOES_PICKUP_EXIST(Local_48[iLocal_40 /*11*/].f_1))
				{
					func_34(Local_48[iLocal_40 /*11*/].f_3);
					func_33(&(Local_48[iLocal_40 /*11*/].f_1), &(Local_48[iLocal_40 /*11*/].f_10));
				}
			}
			else
			{
				while (func_32(4, iVar1) && iVar1 < 10)
				{
					iVar1++;
				}
				if (iVar1 == iLocal_40)
				{
					func_30(&(Local_48[iLocal_40 /*11*/]), iLocal_39, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bLocal_46 && !bLocal_45)
		{
			func_13();
		}
		func_2(&bLocal_45, &bLocal_46, &uLocal_47, 4, &uLocal_43, &uLocal_44, "TRACT_TITLE", "TRACT_COLLECT");
	}
}

void func_2(bool bParam0, bool bParam1, var uParam2, int iParam3, var uParam4, var uParam5, char* sParam6, char* sParam7)//Position - 0x29D
{
	int iVar0;
	
	GlobalFunc_840(0);
	if (*bParam0)
	{
		switch (*uParam4)
		{
			case 0:
				*uParam5 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
				{
					iVar0 = AUDIO::GET_SOUND_ID();
					if (iParam3 == 6)
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*uParam4++;
				}
				break;
			
			case 1:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam6);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
				HUD::ADD_TEXT_COMPONENT_INTEGER(GlobalFunc_7735(iParam3));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*uParam2 = MISC::GET_GAME_TIMER();
				*uParam4++;
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7000)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam5, "SHARD_ANIM_OUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					*uParam4++;
				}
				else if (!GlobalFunc_489())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
					{
						GlobalFunc_840(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7500)
				{
					*uParam4++;
				}
				else if (!GlobalFunc_489())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
					{
						GlobalFunc_840(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam5))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam5);
				}
				GlobalFunc_840(0);
				*bParam1 = 0;
				*bParam0 = 0;
				*uParam4 = 0;
				break;
			}
	}
}











void func_13()//Position - 0x8D1
{
	GlobalFunc_585(95, 1);
	func_15(27, 84, 0);
	GlobalFunc_492(9);
	iLocal_38 = 2;
}


int func_15(int iParam0, int iParam1, bool bParam2)//Position - 0x94D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GlobalFunc_5723(iParam0, 1);
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
			func_16(Global_45154[iVar0 /*203*/].f_4[iVar1], Global_45154[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_16(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xB49
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
		Var3 = { GlobalFunc_2030(Global_35970[iVar20 /*12*/].f_1) };
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
			Var3 = { GlobalFunc_2030(Global_35970[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_44792[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_17(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_17(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_17(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_17(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_17(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xF1C
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = GlobalFunc_8354();
	bVar1 = false;
	StringCopy(&cVar2, GlobalFunc_2029(iParam1, &bVar1), 64);
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
			GlobalFunc_2027(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, 0, 2, HUD::_GET_LABEL_TEXT(GlobalFunc_2028(iParam1)), 0));
		}
		else
		{
			GlobalFunc_2027(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, HUD::_GET_LABEL_TEXT(GlobalFunc_2028(iParam1)), 0));
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













void func_30(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1D6D
{
	var uVar0;
	
	if (!uParam0->f_10)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_39(13) && !GlobalFunc_39(14))
			{
				if (!OBJECT::DOES_PICKUP_EXIST(uParam0->f_1))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_3) <= (50f * 50f))
					{
						STREAMING::REQUEST_MODEL(iParam1);
						while (!STREAMING::HAS_MODEL_LOADED(iParam1))
						{
							STREAMING::REQUEST_MODEL(iParam1);
							SYSTEM::WAIT(0);
						}
						if (bParam3)
						{
							GlobalFunc_848(uParam0->f_3);
						}
						MISC::CLEAR_AREA(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (bParam4)
						{
							MISC::SET_BIT(&uVar0, 1);
							uParam0->f_1 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, iParam1);
						}
						else
						{
							MISC::SET_BIT(&uVar0, 3);
							MISC::SET_BIT(&uVar0, 4);
							MISC::SET_BIT(&uVar0, 8);
							MISC::SET_BIT(&uVar0, 1);
							uParam0->f_1 = OBJECT::CREATE_PICKUP(iParam2, uParam0->f_3, uVar0, -1, 1, iParam1);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
					}
				}
			}
			if (OBJECT::DOES_PICKUP_EXIST(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}


int func_32(int iParam0, int iParam1)//Position - 0x1EC4
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 1)
	{
		iVar1 = 705;
	}
	else if (iParam0 == 0)
	{
		iVar1 = 755;
	}
	else if (iParam0 == 3)
	{
		iVar1 = 815;
	}
	else if (iParam0 == 4)
	{
		iVar1 = 805;
	}
	else if (iParam0 == 5)
	{
		iVar1 = 845;
	}
	iVar0 = (iVar1 + iParam1);
	return GlobalFunc_6708(iVar0, -1, -1);
}

void func_33(var uParam0, var uParam1)//Position - 0x1F1E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), OBJECT::GET_PICKUP_COORDS(*uParam0), 1) >= 60f)
		{
			GlobalFunc_841(uParam0);
			*uParam0 = 0;
			*uParam1 = 0;
		}
	}
}

void func_34(struct<3> Param0)//Position - 0x1F5E
{
	if (GlobalFunc_882(PLAYER::PLAYER_PED_ID(), Param0, 7f))
	{
		TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, 100, 2048, 1);
	}
}









int func_43(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2375
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 21;
			break;
		
		case 1:
			iVar0 = 22;
			break;
		
		case 2:
			iVar0 = 23;
			break;
		
		default:
			return 0;
			break;
	}
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/]), sParam2, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_17 = iParam1;
	if (iParam3 == 0)
	{
		return 0;
	}
	else
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_24 = iParam3;
	}
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_25 = iParam4;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_26 = iParam5;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_29 = iParam6;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_30 = iParam8;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_31 = iParam7;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_28 = 0;
	return 1;
}




void func_47()//Position - 0x24B7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bStoleEpsilonCash)
	{
		sLocal_159[0] = "TRACT_HINT1B";
		iLocal_42 = 300000;
	}
	else
	{
		sLocal_159[0] = "TRACT_HINT1";
		iLocal_42 = 16000;
	}
	Local_48[0 /*11*/].f_3 = { 501.9415f, 5604.429f, 796.9146f };
	Local_48[1 /*11*/].f_3 = { 2658.18f, -1361.14f, -21.63f };
	sLocal_159[1] = "TRACT_HINT2";
	Local_48[2 /*11*/].f_3 = { 24.7139f, 7644.334f, 18.0792f };
	sLocal_159[2] = "TRACT_HINT3";
	Local_48[3 /*11*/].f_3 = { -263.55f, 4729.6f, 137.37f };
	sLocal_159[3] = "TRACT_HINT4";
	Local_48[4 /*11*/].f_3 = { -771.98f, -685.22f, 28.86f };
	sLocal_159[4] = "TRACT_HINT5";
	Local_48[5 /*11*/].f_3 = { -1605.03f, 5256.55f, 1.08f };
	sLocal_159[5] = "TRACT_HINT6";
	Local_48[6 /*11*/].f_3 = { -1804.546f, 403.9298f, 112.1966f };
	sLocal_159[6] = "TRACT_HINT7";
	Local_48[7 /*11*/].f_3 = { 484.2701f, 5617.175f, 787.4708f };
	sLocal_159[7] = "TRACT_HINT8";
	Local_48[8 /*11*/].f_3 = { -75.1004f, -819.0673f, 325.3656f };
	sLocal_159[8] = "TRACT_HINT9";
	Local_48[9 /*11*/].f_3 = { -1725.34f, -189.95f, 57.52f };
	sLocal_159[9] = "TRACT_HINT10";
	iLocal_41 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = (805 + iVar0);
		if (GlobalFunc_6708(iVar1, -1, -1))
		{
			iLocal_40++;
		}
		iVar0++;
	}
	iLocal_38 = 1;
}


void func_49()//Position - 0x26C3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		GlobalFunc_841(&(Local_48[iVar0 /*11*/].f_1));
		iVar0++;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

