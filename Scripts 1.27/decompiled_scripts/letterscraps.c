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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<8> Local_43 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	struct<11> Local_56[50];
	int iLocal_607 = 0;
	char* sLocal_608 = NULL;
	int iLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	int iLocal_612 = 0;
	char* sLocal_613[4] = { NULL, NULL, NULL, NULL };
	int iLocal_618 = 0;
	var uLocal_619 = 0;
	int iLocal_620 = 0;
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
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	bLocal_39 = true;
	bLocal_40 = true;
	iLocal_607 = 4;
	sLocal_608 = "id1_11_tunnel6_int";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_73();
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("letterscraps")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	GlobalFunc_501(12);
	if (GlobalFunc_485(106) == 1)
	{
		GlobalFunc_492(12);
		GlobalFunc_7610(287, 0, 0);
		GlobalFunc_585(106, 1);
		GlobalFunc_66(168, 0);
		func_73();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		GlobalFunc_852(PLAYER::PLAYER_PED_ID());
		switch (iLocal_41)
		{
			case 0:
				func_19();
				break;
			
			case 1:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0xF5
{
	switch (iLocal_42)
	{
		case 0:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) > 0)
			{
				iLocal_42 = 2;
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (!GlobalFunc_756())
					{
						if (((!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() && !GlobalFunc_7053()) && !GlobalFunc_4307()) && !GlobalFunc_1985())
						{
							iLocal_618 = 0;
							iLocal_612 = 0;
							sLocal_613[0] = "LETTERS_PAGE_ONE";
							sLocal_613[1] = "LETTERS_PAGE_TWO";
							sLocal_613[2] = "LETTERS_PAGE_THREE";
							sLocal_613[3] = "LETTERS_PAGE_FOUR";
							uLocal_611 = unk_0x67D02A194A2FC2BD("LETTER_SCRAPS");
							while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_611))
							{
								SYSTEM::WAIT(0);
							}
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_611, "SET_LETTER_TEXT");
							GlobalFunc_256(sLocal_613[0]);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
							GlobalFunc_6685(1);
							GlobalFunc_702(1, 1, 1);
							HUD::DISPLAY_HELP_TEXT_THIS_FRAME("LETTERS_HELP2", 0);
							MISC::SET_GAME_PAUSED(1);
							HUD::DISPLAY_RADAR(0);
							iLocal_42 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			GlobalFunc_7629();
			HUD::DISABLE_FRONTEND_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			if (iLocal_612 < 4)
			{
				if (!iLocal_618)
				{
					if (PAD::IS_CONTROL_PRESSED(2, 190))
					{
						if (iLocal_612 >= 0 && iLocal_612 < 3)
						{
							iLocal_612++;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_611, "SET_LETTER_TEXT");
							GlobalFunc_256(sLocal_613[iLocal_612]);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						iLocal_618 = 1;
					}
					else if (PAD::IS_CONTROL_PRESSED(2, 189))
					{
						if (iLocal_612 > 0 && iLocal_612 < 4)
						{
							iLocal_612 = (iLocal_612 - 1);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_611, "SET_LETTER_TEXT");
							GlobalFunc_256(sLocal_613[iLocal_612]);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						iLocal_618 = 1;
					}
					else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
					{
						iLocal_42 = 2;
					}
				}
				else if (!func_2())
				{
					iLocal_618 = 0;
				}
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_611, 255, 255, 255, 255, 0);
			}
			else
			{
				iLocal_42 = 2;
			}
			break;
		
		case 2:
			HUD::DISPLAY_RADAR(1);
			HUD::CLEAR_HELP(1);
			GlobalFunc_702(0, 1, 1);
			GlobalFunc_492(12);
			func_73();
			break;
	}
}

int func_2()//Position - 0x2FE
{
	if ((PAD::IS_CONTROL_PRESSED(2, 190) || PAD::IS_CONTROL_PRESSED(2, 189)) || PAD::IS_CONTROL_PRESSED(2, 202))
	{
		return 1;
	}
	return 0;
}

















void func_19()//Position - 0x6D4
{
	switch (iLocal_42)
	{
		case 0:
			func_62();
			GlobalFunc_851(&Local_43, 1, joaat("prop_ld_scrap"), "LETTERS_COLLECT");
			GlobalFunc_8393(&Local_43, joaat("num_hidden_packages_0"), 705, 50);
			iLocal_42 = 1;
			iLocal_620 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_39(14) && !CAM::IS_SCREEN_FADED_OUT())
			{
				if (func_21(&Local_43, &Local_56) || uLocal_619)
				{
					iLocal_42 = 2;
				}
				if (Local_43.f_1.f_4 == Local_43.f_1.f_3)
				{
					if (GlobalFunc_485(106) == 0)
					{
						GlobalFunc_585(106, 1);
						GlobalFunc_66(168, 0);
					}
				}
			}
			break;
		
		case 2:
			GlobalFunc_585(106, 1);
			GlobalFunc_66(168, 0);
			func_20(1);
			break;
	}
}

void func_20(int iParam0)//Position - 0x78D
{
	iLocal_41 = iParam0;
	iLocal_42 = 0;
}

int func_21(var uParam0, int iParam1)//Position - 0x79C
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	bool bVar5;
	
	bVar5 = (!GlobalFunc_756() && !GlobalFunc_756());
	PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = GlobalFunc_849(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar1)
			{
				if (((((((uParam0->f_10 == 1 || uParam0->f_10 == 5) || uParam0->f_10 == 7) || uParam0->f_10 == 13) || uParam0->f_10 == 18) || uParam0->f_10 == 20) || uParam0->f_10 == 37) || uParam0->f_10 == 42)
				{
					GlobalFunc_5220(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
				}
				else if (uParam0->f_10 == iLocal_607)
				{
					GlobalFunc_5220(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
					if (OBJECT::DOES_PICKUP_EXIST((iParam1[uParam0->f_10 /*11*/])->f_1))
					{
						INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME((iParam1[uParam0->f_10 /*11*/])->f_1, sLocal_608);
					}
				}
				else
				{
					GlobalFunc_5220(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			if (func_38(uParam0, iParam1, Var2))
			{
				if (bVar5)
				{
					if (!GlobalFunc_63(33))
					{
						GlobalFunc_6677("LETTERS_FIRST", 1, 0, -1, 10000, 7, 0, 0, 0);
						GlobalFunc_651(33);
					}
				}
			}
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11)
	{
		if (!Global_68505)
		{
			GlobalFunc_8391(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 1, &iLocal_609, &uLocal_610, "LETTERS_TITLE", "LETTERS_COLLECT");
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

















int func_38(var uParam0, var uParam1, struct<3> Param2)//Position - 0x1354
{
	int iVar0;
	
	iVar0 = uParam0->f_10;
	if ((uParam1[iVar0 /*11*/])->f_10)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED((uParam1[iVar0 /*11*/])->f_1) || GlobalFunc_5219((uParam1[iVar0 /*11*/])->f_1))
			{
				func_40(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (OBJECT::DOES_PICKUP_EXIST((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((SYSTEM::VDIST2(Param2, OBJECT::GET_PICKUP_COORDS((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || GlobalFunc_39(13)) || GlobalFunc_39(14))
		{
			GlobalFunc_841(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}


void func_40(var uParam0, var uParam1, int iParam2)//Position - 0x142A
{
	int iVar0;
	
	iVar0 = (GlobalFunc_837(*uParam0) + iParam2);
	GlobalFunc_841(&((uParam1[iParam2 /*11*/])->f_1));
	GlobalFunc_846(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_10 = 0;
	GlobalFunc_845(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		GlobalFunc_844(*uParam0, iParam2, 1);
	}
	PAD::SET_PAD_SHAKE(0, 200, 250);
	STATS::STAT_INCREMENT(uParam0->f_6, 1f);
	if (bLocal_40)
	{
		func_49(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_47(&(uParam0->f_1));
	}
	GlobalFunc_5218();
	STATS::PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(iVar0);
	GlobalFunc_842(1, 0);
	GlobalFunc_4907();
	uParam0->f_11 = 1;
}







void func_47(var uParam0)//Position - 0x16A8
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_39)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (GlobalFunc_849(uParam0, iVar0))
		{
			iVar1++;
			GlobalFunc_4908((uParam0->f_2 + iVar0), 1, -1, 1);
			if (bLocal_39)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_39)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		GlobalFunc_66(168, 0);
	}
}


void func_49(var uParam0, int iParam1)//Position - 0x1988
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_39)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (GlobalFunc_849(uParam0, iParam1))
	{
		uParam0->f_4++;
		GlobalFunc_4908((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_39)
		{
		}
	}
	if (bLocal_39)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		GlobalFunc_66(168, 0);
	}
}













void func_62()//Position - 0x1E59
{
	int iVar0;
	
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.LETTER_SCRAPS_SAVED_STRUCT.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_56[iVar0 /*11*/].f_3 = { func_63(iVar0, 0) };
		Local_56[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	iLocal_609 = 0;
	Local_56[0 /*11*/].f_9 = 179.4746f;
	Local_56[1 /*11*/].f_6 = { 0f, 0f, 198f };
	Local_56[2 /*11*/].f_9 = 104f;
	Local_56[3 /*11*/].f_9 = 321.5f;
	Local_56[4 /*11*/].f_6 = { 0f, 0f, 49f };
	Local_56[5 /*11*/].f_6 = { 0f, 0f, 286.5f };
	Local_56[6 /*11*/].f_9 = 278.0092f;
	Local_56[7 /*11*/].f_6 = { 5.3f, -1801.4f, 15.57f };
	Local_56[8 /*11*/].f_9 = 80.5f;
	Local_56[9 /*11*/].f_9 = 116f;
	Local_56[10 /*11*/].f_9 = 15f;
	Local_56[11 /*11*/].f_9 = 305.5f;
	Local_56[12 /*11*/].f_9 = 0f;
	Local_56[13 /*11*/].f_9 = 95f;
	Local_56[13 /*11*/].f_6 = { -0.91f, -0.03f, -0.81f };
	Local_56[14 /*11*/].f_9 = 40f;
	Local_56[15 /*11*/].f_9 = 40f;
	Local_56[16 /*11*/].f_9 = 40f;
	Local_56[17 /*11*/].f_9 = 90f;
	Local_56[17 /*11*/].f_6 = { -0.55f, 0f, 0.78f };
	Local_56[18 /*11*/].f_6 = { 0f, 0f, 0f };
	Local_56[19 /*11*/].f_9 = 40f;
	Local_56[20 /*11*/].f_6 = { 0f, 2f, 15f };
	Local_56[21 /*11*/].f_9 = 40f;
	Local_56[22 /*11*/].f_9 = 40f;
	Local_56[23 /*11*/].f_9 = 40f;
	Local_56[24 /*11*/].f_9 = 40f;
	Local_56[25 /*11*/].f_9 = 40f;
	Local_56[26 /*11*/].f_9 = 40f;
	Local_56[26 /*11*/].f_6 = { -6f, 10f, 0f };
	Local_56[27 /*11*/].f_9 = 40f;
	Local_56[27 /*11*/].f_6 = { -4.66f, 8.7f, 67.03f };
	Local_56[28 /*11*/].f_9 = 40f;
	Local_56[28 /*11*/].f_6 = { 1.54f, -8.31f, -19.94f };
	Local_56[29 /*11*/].f_9 = 40f;
	Local_56[30 /*11*/].f_9 = 40f;
	Local_56[30 /*11*/].f_6 = { 27.21f, -3.11f, -2.09f };
	Local_56[31 /*11*/].f_9 = 40f;
	Local_56[32 /*11*/].f_9 = 40f;
	Local_56[33 /*11*/].f_9 = 40f;
	Local_56[33 /*11*/].f_6 = { -9.89f, 0.3f, -0.01f };
	Local_56[34 /*11*/].f_9 = 40f;
	Local_56[35 /*11*/].f_9 = 40f;
	Local_56[36 /*11*/].f_9 = 40f;
	Local_56[36 /*11*/].f_6 = { 6.5f, -4.41f, -0.62f };
	Local_56[37 /*11*/].f_6 = { -9f, 5.3f, -2f };
	Local_56[38 /*11*/].f_9 = 40f;
	Local_56[38 /*11*/].f_6 = { -13.32f, -0.57f, -0.15f };
	Local_56[39 /*11*/].f_9 = 40f;
	Local_56[39 /*11*/].f_6 = { 4.71f, -21.26f, -0.06f };
	Local_56[40 /*11*/].f_9 = 40f;
	Local_56[41 /*11*/].f_9 = 80f;
	Local_56[42 /*11*/].f_6 = { -2f, 9f, 1f };
	Local_56[43 /*11*/].f_9 = 198f;
	Local_56[44 /*11*/].f_9 = 198f;
	Local_56[44 /*11*/].f_6 = { 0f, -20f, 0f };
	Local_56[45 /*11*/].f_9 = 198f;
	Local_56[46 /*11*/].f_9 = 198f;
	Local_56[47 /*11*/].f_9 = 198f;
	Local_56[48 /*11*/].f_9 = 198f;
	Local_56[49 /*11*/].f_9 = 198f;
}

Vector3 func_63(int iParam0, int iParam1)//Position - 0x224F
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034.274f, -3026.275f, 4.90197f;
			}
			else
			{
				return 1026.705f, -3026.052f, 13.3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040.979f, -2743.509f, 12.94983f;
			}
			else
			{
				return -1048.604f, -2734.218f, 12.8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93.9012f, -2711.314f, 5.01752f;
			}
			else
			{
				return -81.1199f, -2726.511f, 7.74f;
			}
			break;
		
		case 3:
			return -917.6909f, -2527.384f, 22.3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746.45f, -2310.32f, 26.03f;
			}
			else
			{
				return 748.922f, -2298.114f, 19.624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509.742f, -2126.038f, 75.21973f;
			}
			else
			{
				return 1509.099f, -2120.551f, 75.61f;
			}
			break;
		
		case 6:
			return 76.0032f, -1970.475f, 20.1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1.82327f, -1732.614f, 28.29367f;
			}
			else
			{
				return 0.067f, -1734.027f, 30.606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377.766f, -1409.837f, 4.63205f;
			}
			else
			{
				return -1380.491f, -1404.374f, 1.7273f;
			}
			break;
		
		case 9:
			return 2864.808f, -1372.84f, 1.3151f;
			break;
		
		case 10:
			return -1035.812f, -1273.077f, 0.8919f;
			break;
		
		case 11:
			return -1821.136f, -1201.36f, 18.1698f;
			break;
		
		case 12:
			return 643.0116f, -1035.65f, 35.8891f;
			break;
		
		case 13:
			return -119.0616f, -977.2228f, 303.23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243.104f, -507.8057f, 30.10775f;
			}
			else
			{
				return -1238.766f, -506.7138f, 37.6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83.79993f, -431.9302f, 36.55315f;
			}
			else
			{
				return 86.4f, -433.9f, 36f;
			}
			break;
		
		case 16:
			return 1095.953f, -210.4642f, 54.9477f;
			break;
		
		case 17:
			return -1724.522f, -196f, 57.2387f;
			break;
		
		case 18:
			return 265.374f, -199.546f, 60.795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020.475f, 36.55431f, 9.11777f;
			}
			else
			{
				return -3021.4f, 38f, 10.2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347.5277f, 53.37161f, 52.97814f;
			}
			else
			{
				return -347.3f, 54.865f, 53.921f;
			}
			break;
		
		case 21:
			return 1052.248f, 167.611f, 87.7406f;
			break;
		
		case 22:
			return -2303.798f, 217.4301f, 166.6017f;
			break;
		
		case 23:
			return -138.9423f, 868.3885f, 231.6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688.1073f, 1204.671f, 323.3438f;
			}
			else
			{
				return 682.4505f, 1204.928f, 344.3322f;
			}
			break;
		
		case 25:
			return -1548.763f, 1380.173f, 125.3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432.14f, 1598.46f, 355.73f;
			}
			else
			{
				return -432.0034f, 1597.129f, 356.613f;
			}
			break;
		
		case 27:
			return 3081.93f, 1648.29f, 2.42f;
			break;
		
		case 28:
			return -594.38f, 2092f, 130.57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069.213f, 2160.988f, 1.1327f;
			}
			else
			{
				return 3063.583f, 2212.63f, 2.5863f;
			}
			break;
		
		case 30:
			return 180.21f, 2263.83f, 91.87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926.96f, 2445.36f, 49.09f;
			}
			else
			{
				return 929.6946f, 2444.115f, 48.43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380.212f, 2655.176f, 0.832f;
			}
			else
			{
				return -2379.948f, 2656.953f, 1.4906f;
			}
			break;
		
		case 33:
			return -861.38f, 2753.3f, 12.867f;
			break;
		
		case 34:
			return -289.0195f, 2848.853f, 53.331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288.8409f, 2871.912f, 42.6422f;
			}
			else
			{
				return 265.7415f, 2866.416f, 73.19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297.378f, 2988.71f, 40.11787f;
			}
			else
			{
				return 1294.2f, 3001.9f, 57.7f;
			}
			break;
		
		case 37:
			return 1568.65f, 3572.8f, 32.294f;
			break;
		
		case 38:
			return -1608.62f, 4274.25f, 102.95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3.51812f, 4332.451f, 31.21602f;
			}
			else
			{
				return -1.9585f, 4334.787f, 32.3702f;
			}
			break;
		
		case 40:
			return 1336.737f, 4307.2f, 37.1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007.103f, 4836.936f, 268.5488f;
			}
			else
			{
				return -1001.48f, 4851.322f, 273.6112f;
			}
			break;
		
		case 42:
			return 1877.09f, 5078.98f, 50.49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366.099f, 5182.461f, 0.68317f;
			}
			else
			{
				return 3436.453f, 5176.911f, 6.386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576.12f, 5472.24f, 59.28f;
			}
			else
			{
				return -578.8057f, 5470.164f, 59.0295f;
			}
			break;
		
		case 45:
			return 444.6518f, 5571.781f, 780.1888f;
			break;
		
		case 46:
			return -402.9948f, 6319.279f, 31.2256f;
			break;
		
		case 47:
			return 1439.599f, 6335.208f, 22.9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466.109f, 6552.266f, 12.95773f;
			}
			else
			{
				return 1469.632f, 6552.174f, 13.6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66.19278f, 6668.888f, 30.80633f;
			}
			else
			{
				return 66.7136f, 6663.198f, 30.7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}










void func_73()//Position - 0x3163
{
	int iVar0;
	
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_611);
	MISC::SET_GAME_PAUSED(0);
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.LETTER_SCRAPS_SAVED_STRUCT.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_56)
	{
		GlobalFunc_846(&(Local_56[iVar0 /*11*/].f_2));
		GlobalFunc_841(&(Local_56[iVar0 /*11*/].f_1));
		Local_56[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (GlobalFunc_485(106) == 1)
	{
		GlobalFunc_585(106, 1);
		func_75();
		GlobalFunc_492(12);
	}
	else if (GlobalFunc_853(&(Local_43.f_1)))
	{
		GlobalFunc_585(106, 1);
		func_75();
		GlobalFunc_492(12);
	}
	else
	{
		GlobalFunc_501(12);
	}
	if (iLocal_620)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_43.f_7);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}


void func_75()//Position - 0x322D
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(64);
	Global_2408820[iVar0 /*83*/] = 64;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}


