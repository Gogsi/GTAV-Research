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
	struct<3> Local_20 = { 0, 0, 0 } ;
	struct<18> Local_23 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_41 = 0;
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
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_88 = 0;
	struct<178> Local_89[27];
	var uLocal_4896 = 0;
	struct<24> Local_4897[30];
	var uLocal_5618 = 0;
	struct<24> Local_5619[24];
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	float fLocal_6198 = 0f;
	float fLocal_6199 = 0f;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	bool bLocal_6204 = 0;
	bool bLocal_6205 = 0;
	int iLocal_6206 = 0;
	int iLocal_6207 = 0;
	int iLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	bool bLocal_6213 = 0;
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
	iLocal_88 = 29;
	fLocal_6198 = 0.075f;
	fLocal_6199 = 0.725f;
	iLocal_6206 = 1;
	iLocal_6207 = 1;
	bLocal_6213 = true;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_39();
	}
	bLocal_6213 = false;
	CAM::DO_SCREEN_FADE_OUT(0);
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(1);
	GlobalFunc_7632(1);
	CUTSCENE::REQUEST_CUTSCENE("FOS_EP_1_P6", 8);
	func_17(0);
	GlobalFunc_8316(1, 1, 1, 0);
	while (true)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		GlobalFunc_852(PLAYER::PLAYER_PED_ID());
		if (func_2())
		{
			func_39();
		}
		if (bLocal_6205)
		{
			HUD::SET_TEXT_SCALE(0.5f, 0.5f);
			GlobalFunc_1321(0.1f, 0.1f, "NUMBER", 1, 0);
		}
		SYSTEM::WAIT(0);
	}
}


int func_2()//Position - 0xFA
{
	CLOCK::SET_CLOCK_TIME(Local_20.x, Local_20.f_1, Local_20.f_2);
	MISC::SET_WIND(-1f);
	switch (iLocal_6208)
	{
		case 0:
			CAM::DO_SCREEN_FADE_IN(0);
			GlobalFunc_587();
			CAM::DO_SCREEN_FADE_IN(500);
			CUTSCENE::START_CUTSCENE(0);
			iLocal_6208++;
			break;
		
		case 1:
			if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (bLocal_6213)
				{
					func_4();
				}
				HUD::SET_TEXT_RENDER_ID(uLocal_6202);
				GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_6200, 0.2f, 0.34f, 0.410001f, 0.69f, 100, 100, 100, 255, 0);
				HUD::SET_TEXT_RENDER_ID(uLocal_6203);
				if (bLocal_6204)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_6201, "SET_TEXT");
					GlobalFunc_726("KEYNOTE_NAME");
					GlobalFunc_726("KEYNOTE_TITLE");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_6201, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}


void func_4()//Position - 0x1E5
{
	int iVar0;
	int iVar1;
	
	iVar0 = CUTSCENE::GET_CUTSCENE_TIME();
	iVar1 = 0;
	while (iVar1 <= (16 - 1))
	{
		if (Local_23[iVar1] != -1)
		{
			if ((!MISC::IS_BIT_SET(uLocal_57, iVar1) && iVar0 >= Local_23[iVar1]) && iVar0 < Local_23.f_17[iVar1])
			{
				GlobalFunc_587();
				MISC::SET_BIT(&uLocal_57, iVar1);
			}
		}
		iVar1++;
	}
}













void func_17(bool bParam0)//Position - 0x4AB
{
	int iVar0;
	
	if (GlobalFunc_852(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 689.1f, 586.5f, 130.5f, 1, 0, 0, 1);
		MISC::CLEAR_AREA_OF_PEDS(689.1f, 586.5f, 130.5f, 500f, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 1);
	}
	GlobalFunc_2362(0);
	GlobalFunc_5924(&uLocal_6212, 0);
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(689.1f, 586.5f, 130.5f, 80f, 0);
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (bParam0)
	{
		STREAMING::REQUEST_IPL("LInvader");
		while (!STREAMING::IS_IPL_ACTIVE("LInvader"))
		{
			SYSTEM::WAIT(0);
		}
	}
	MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
	iLocal_58[0] = joaat("a_m_y_hipster_01");
	iLocal_58[1] = joaat("a_m_y_hipster_02");
	iLocal_58[2] = joaat("a_m_y_hipster_03");
	iLocal_58[3] = joaat("a_f_y_hipster_01");
	iLocal_58[4] = joaat("a_f_y_hipster_02");
	iLocal_58[5] = joaat("a_f_y_hipster_03");
	iLocal_58[6] = joaat("a_f_y_hipster_04");
	iLocal_58[7] = joaat("a_f_y_bevhills_01");
	iLocal_58[8] = joaat("a_m_m_business_01");
	iLocal_58[9] = joaat("a_m_m_bevhills_02");
	iLocal_58[10] = joaat("a_m_m_skater_01");
	iLocal_58[11] = joaat("a_m_y_beachvesp_01");
	iLocal_58[12] = joaat("a_m_y_bevhills_01");
	iLocal_58[13] = joaat("a_f_m_bevhills_01");
	iLocal_58[14] = joaat("a_m_m_ktown_01");
	iLocal_58[15] = joaat("a_m_y_busicas_01");
	iLocal_58[16] = joaat("a_m_y_business_02");
	iLocal_58[17] = joaat("a_m_y_gay_01");
	iLocal_58[18] = joaat("a_m_y_ktown_02");
	iLocal_58[19] = joaat("a_m_m_bevhills_02");
	iLocal_58[20] = joaat("a_m_y_business_03");
	iLocal_58[21] = joaat("a_m_y_gay_02");
	iLocal_58[22] = joaat("a_m_m_malibu_01");
	iLocal_58[22] = joaat("a_m_y_gay_02");
	iLocal_58[23] = joaat("a_m_y_eastsa_02");
	iLocal_58[24] = joaat("a_m_y_soucent_02");
	iLocal_58[25] = joaat("a_m_y_vinewood_01");
	iLocal_58[26] = joaat("a_m_y_vinewood_02");
	iLocal_58[27] = joaat("a_m_y_vinewood_03");
	iLocal_58[28] = joaat("a_m_y_vinewood_04");
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		GlobalFunc_2355(func_31(iVar0), 1);
		iVar0++;
	}
	GlobalFunc_2355("misslester1b_crowdlow@14@", 1);
	GlobalFunc_2355("misslester1b_crowdlow@24@", 1);
	GlobalFunc_2893("BREAKING_NEWS", &uLocal_6201, 1);
	GlobalFunc_2893("lifeinvader_presentation", &uLocal_6200, 1);
	GlobalFunc_2833("LEST1", 0, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		func_22(&(Local_89[iVar0 /*178*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_21(&(Local_4897[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		func_20(&(Local_5619[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	HUD::REGISTER_NAMED_RENDERTARGET("Big_Disp", 0);
	HUD::LINK_NAMED_RENDERTARGET(joaat("prop_huge_display_01"));
	HUD::LINK_NAMED_RENDERTARGET(joaat("prop_huge_display_02"));
	uLocal_6202 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("Big_Disp");
	uLocal_6203 = HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID();
	while (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::WAIT(2000);
	iLocal_6208 = 0;
	Local_20.x = 12;
	Local_20.f_1 = 0;
	Local_20.f_2 = 0;
	iVar0 = 0;
	while (iVar0 <= (16 - 1))
	{
		func_18(iVar0);
		iVar0++;
	}
	if (bLocal_6205)
	{
	}
}

void func_18(int iParam0)//Position - 0x7DF
{
	switch (iParam0)
	{
		case 0:
			func_19(iParam0, 0, 10000);
			break;
		
		case 1:
			func_19(iParam0, 9000, 10000);
			break;
		
		case 2:
			func_19(iParam0, 27000, 32000);
			break;
		
		case 3:
			func_19(iParam0, 32000, 42000);
			break;
		
		case 4:
			func_19(iParam0, 51000, 63000);
			break;
		
		case 5:
			func_19(iParam0, 63600, 69000);
			break;
		
		case 6:
			func_19(iParam0, 66000, 70200);
			break;
		
		case 7:
			func_19(iParam0, 69600, 79200);
			break;
		
		case 8:
			func_19(iParam0, 77400, 84000);
			break;
		
		case 12:
			func_19(iParam0, 81000, 93600);
			break;
		
		case 9:
			func_19(iParam0, -1, -1);
			break;
		
		case 11:
			func_19(iParam0, 90000, 154200);
			break;
		
		case 10:
			func_19(iParam0, 129600, 133200);
			break;
		
		case 13:
			func_19(iParam0, 144600, 154200);
			break;
		
		case 14:
			func_19(iParam0, 152700, 154200);
			break;
		
		case 15:
			func_19(iParam0, 154200, 154200);
			break;
	}
}

void func_19(int iParam0, int iParam1, int iParam2)//Position - 0x94F
{
	Local_23[iParam0] = iParam1;
	Local_23.f_17[iParam0] = iParam2;
}

void func_20(var uParam0, int iParam1)//Position - 0x969
{
	uParam0->f_22 = 0;
	MISC::CLEAR_BIT(&uLocal_6196, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_21(var uParam0, int iParam1)//Position - 0x991
{
	uParam0->f_22 = 0;
	MISC::CLEAR_BIT(&uLocal_5618, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0)
	{
	}
}

void func_22(var uParam0, int iParam1)//Position - 0x9B9
{
	struct<3> Var0;
	
	GlobalFunc_2892(uParam0);
	MISC::CLEAR_BIT(&uLocal_4896, iParam1);
	switch (iParam1)
	{
		case 0:
			Var0 = { 0f, 0f, (GlobalFunc_569(-4.29f) + 180f) };
			GlobalFunc_5923(uParam0, 82047830, 667.319f, 572.133f, 128.521f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 83248680, 666.312f, 571.675f, 128.521f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 71526810, 665.235f, 571.183f, 128.521f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 49826530, 664.124f, 570.679f, 128.521f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 78575440, 663.029f, 570.181f, 128.521f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 12133230, 661.937f, 569.685f, 128.521f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 89665750, 660.839f, 569.194f, 128.521f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 65990810, 659.537f, 569.392f, 128.521f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 21233450, 658.187f, 569.572f, 128.523f, Var0, 4, 0, 1f);
			GlobalFunc_2890(&(uParam0->f_155[0 /*11*/]), 659.867f, 571.539f, 128.531f, Var0, 0, 0.5f, -1.5f);
			GlobalFunc_2890(&(uParam0->f_155[1 /*11*/]), 660.646f, 567.108f, 128.521f, Var0, 0, 0.5f, -1.5f);
			break;
		
		case 1:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.98f) + 180f) };
			GlobalFunc_5923(uParam0, 21091970, 670.312f, 568.023f, 128.521f, Var0, 5, 0, 0.5f);
			GlobalFunc_5923(uParam0, 97482490, 669.189f, 567.502f, 128.522f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 66764240, 668.28f, 566.688f, 128.522f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 82832850, 667.384f, 565.885f, 128.522f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 33636100, 666.491f, 565.085f, 128.522f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 22769640, 665.595f, 564.282f, 128.522f, Var0, 6, 1, 0);
			break;
		
		case 2:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.78f) + 180f) };
			GlobalFunc_5923(uParam0, 91480760, 673.7f, 564.799f, 128.521f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 64996320, 672.996f, 563.847f, 128.521f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 30855220, 672.271f, 562.865f, 128.521f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 98921990, 671.557f, 561.897f, 128.521f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 73357200, 670.258f, 561.366f, 128.522f, Var0, 6, 1, 0);
			GlobalFunc_2890(&(uParam0->f_155[0 /*11*/]), 669.564f, 563.469f, 128.521f, Var0, 2, -1.5f, -1.5f);
			GlobalFunc_2890(&(uParam0->f_155[1 /*11*/]), 672.34f, 559.914f, 128.522f, Var0, 2, -1.5f, -1.5f);
			break;
		
		case 3:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.38f) + 180f) };
			GlobalFunc_5923(uParam0, 89689390, 681.517f, 555.801f, 128.522f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 71057000, 681.796f, 556.967f, 128.522f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 26206390, 682.076f, 558.137f, 128.522f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 58207860, 682.36f, 559.342f, 128.522f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 43622440, 682.635f, 560.475f, 128.522f, Var0, 6, 1, 0);
			break;
		
		case 4:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.17f) + 180f) };
			GlobalFunc_5923(uParam0, 78555440, 687.841f, 559.785f, 128.522f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 12324420, 687.807f, 558.602f, 128.522f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 4083210, 687.771f, 557.382f, 128.522f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 2021980, 688.465f, 556.159f, 128.522f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 21091970, 688.431f, 554.961f, 128.521f, Var0, 6, 1, 0);
			GlobalFunc_2890(&(uParam0->f_155[0 /*11*/]), 685.931f, 556.306f, 128.522f, Var0, 0, 0.5f, -1.5f);
			GlobalFunc_2890(&(uParam0->f_155[1 /*11*/]), 685.897f, 555.108f, 128.521f, Var0, 1, -1.5f, -1.5f);
			break;
		
		case 5:
			Var0 = { 0f, 0f, (GlobalFunc_569(-2.97f) + 180f) };
			GlobalFunc_5923(uParam0, 31491440, 692.632f, 559.992f, 128.522f, Var0, 5, 2, -0.5f);
			GlobalFunc_5923(uParam0, 34393340, 693.189f, 558.886f, 128.522f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 94762900, 693.396f, 557.684f, 128.522f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 95283980, 693.6f, 556.498f, 128.522f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 92416940, 693.803f, 555.317f, 128.522f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 53597080, 694.007f, 554.131f, 128.522f, Var0, 6, 1, 0);
			break;
		
		case 6:
			Var0 = { 0f, 0f, (GlobalFunc_569(-2.7f) + 180f) };
			GlobalFunc_5923(uParam0, 86170110, 697.492f, 561.188f, 128.522f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 62247860, 697.964f, 560.188f, 128.522f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 43665230, 698.467f, 559.116f, 128.522f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 32906070, 698.988f, 558.013f, 128.522f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 70836820, 699.502f, 556.925f, 128.522f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 67800350, 700.014f, 555.841f, 128.522f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 41115560, 701.184f, 555.063f, 128.521f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 98430790, 701.005f, 553.758f, 128.522f, Var0, 6, 1, 0);
			GlobalFunc_2890(&(uParam0->f_155[0 /*11*/]), 698.861f, 554.048f, 128.521f, Var0, 0, 0.5f, -1.5f);
			GlobalFunc_2890(&(uParam0->f_155[1 /*11*/]), 703.267f, 554.91f, 128.522f, Var0, 0, 0.5f, -1.5f);
			break;
		
		case 7:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.99f) + 180f) };
			GlobalFunc_5923(uParam0, 13168530, 652.833f, 570.052f, 128.529f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 92127780, 652.006f, 569.319f, 128.528f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 51664260, 651.136f, 568.538f, 128.729f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 35914010, 650.242f, 567.746f, 128.729f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 43076060, 649.661f, 566.94f, 128.929f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 21755390, 648.426f, 566.137f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 8:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.9f) + 180f) };
			GlobalFunc_5923(uParam0, 20501110, 656.955f, 565.868f, 128.53f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 10114780, 656.193f, 565.067f, 128.53f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 12664730, 655.358f, 564.19f, 128.73f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 32956570, 654.534f, 563.324f, 128.73f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 11862860, 653.696f, 562.443f, 128.93f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 87809290, 652.862f, 561.566f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 9:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.76f) + 180f) };
			GlobalFunc_5923(uParam0, 75170110, 662.947f, 560.965f, 128.529f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 62246860, 662.306f, 560.065f, 128.529f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 83665250, 661.603f, 559.079f, 128.73f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 22016170, 660.91f, 558.106f, 128.73f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 41846840, 660.204f, 557.116f, 128.929f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 10000350, 659.502f, 556.13f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 10:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.68f) + 180f) };
			GlobalFunc_5923(uParam0, 86878180, 667.872f, 557.785f, 128.53f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 22242820, 667.31f, 556.833f, 128.53f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 93969290, 666.693f, 555.791f, 128.73f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 12101010, 666.086f, 554.762f, 128.73f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 20232220, 665.467f, 553.715f, 128.93f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 57707370, 664.852f, 552.673f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 11:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.53f) + 180f) };
			GlobalFunc_5923(uParam0, 13130110, 674.882f, 554.326f, 128.529f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 97845810, 674.46f, 553.305f, 128.529f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 12345670, 673.997f, 552.186f, 128.73f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 89101110, 673.541f, 551.081f, 128.73f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 12131410, 673.076f, 549.958f, 128.929f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 51617180, 672.613f, 548.839f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 12:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.45f) + 180f) };
			GlobalFunc_5923(uParam0, 60616260, 680.396f, 552.335f, 128.53f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 36465660, 680.063f, 551.281f, 128.53f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 67686970, 679.697f, 550.127f, 128.73f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 71727370, 679.336f, 548.988f, 128.73f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 47576770, 678.969f, 547.829f, 128.93f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 78798080, 678.603f, 546.674f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 13:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.31f) + 180f) };
			GlobalFunc_5923(uParam0, 11511610, 688.034f, 550.483f, 128.529f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 17118110, 687.853f, 549.393f, 128.529f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 91201210, 687.653f, 548.199f, 128.73f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 12212310, 687.457f, 547.02f, 128.73f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 23124120, 687.257f, 545.821f, 128.929f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 51261270, 687.058f, 544.627f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 14:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.22f) + 180f) };
			GlobalFunc_5923(uParam0, 15515610, 693.855f, 549.783f, 128.53f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 57158150, 693.767f, 548.682f, 128.53f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 91601610, 693.67f, 547.474f, 128.73f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 16216310, 693.575f, 546.283f, 128.73f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 64165160, 693.478f, 545.071f, 128.93f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 61671680, 693.381f, 543.865f, 128.93f, Var0, 6, 2, 0);
			break;
		
		case 15:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.08f) + 180f) };
			GlobalFunc_5923(uParam0, 19920020, 701.652f, 549.708f, 128.529f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 1202200, 701.721f, 548.605f, 128.529f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 32042050, 701.795f, 547.396f, 128.729f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 20620720, 701.869f, 546.203f, 128.729f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 8209210, 701.944f, 544.99f, 128.929f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 2112120, 702.019f, 543.781f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 16:
			Var0 = { 0f, 0f, (GlobalFunc_569(-2.99f) + 180f) };
			GlobalFunc_5923(uParam0, 24024120, 707.482f, 550.335f, 128.53f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 43244240, 707.644f, 549.242f, 128.53f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 42452460, 707.821f, 548.044f, 128.73f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 24724820, 707.996f, 546.862f, 128.73f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 48249250, 708.174f, 545.659f, 128.929f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 2512520, 708.351f, 544.461f, 128.929f, Var0, 6, 2, 0);
			break;
		
		case 17:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.98f) + 180f) };
			GlobalFunc_5923(uParam0, 46779100, 646.434f, 564.522f, 128.927f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 93643160, 645.612f, 563.784f, 128.927f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 34729570, 644.71f, 562.975f, 129.127f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 28556490, 643.821f, 562.177f, 129.127f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 75335160, 642.916f, 561.365f, 129.327f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 84872300, 642.015f, 560.557f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 18:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.91f) + 180f) };
			GlobalFunc_5923(uParam0, 65187100, 651.092f, 559.707f, 128.926f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 87514460, 650.325f, 558.912f, 128.926f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 46165810, 649.483f, 558.04f, 128.127f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 12560720, 648.654f, 557.18f, 129.127f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 27854880, 647.809f, 556.306f, 129.326f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 97601360, 646.968f, 555.435f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 19:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.75f) + 180f) };
			GlobalFunc_5923(uParam0, 55178130, 657.925f, 554.108f, 128.927f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 75148880, 657.29f, 553.204f, 128.927f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 88865540, 656.593f, 552.213f, 129.127f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 64916770, 655.906f, 551.235f, 129.127f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 70536220, 655.207f, 550.241f, 129.327f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 17101310, 654.512f, 549.25f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 20:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.68f) + 180f) };
			GlobalFunc_5923(uParam0, 76870120, 663.545f, 550.463f, 128.926f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 32147850, 662.977f, 549.515f, 128.926f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 97662220, 662.353f, 548.477f, 129.127f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 12107070, 661.738f, 547.453f, 129.127f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 60841880, 661.111f, 546.411f, 129.326f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 27803350, 660.489f, 545.373f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 21:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.53f) + 180f) };
			GlobalFunc_5923(uParam0, 19202120, 671.531f, 546.515f, 128.927f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 22232420, 671.116f, 545.491f, 128.927f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 52627280, 670.66f, 544.369f, 129.127f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 29303130, 670.211f, 543.262f, 129.127f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 23334350, 669.753f, 542.135f, 129.327f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 36373830, 669.298f, 541.014f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 22:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.46f) + 180f) };
			GlobalFunc_5923(uParam0, 18283840, 677.828f, 544.227f, 128.926f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 85858680, 677.487f, 543.176f, 128.926f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 78889900, 677.112f, 542.024f, 129.127f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 91929390, 676.744f, 540.888f, 129.127f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 49596970, 676.368f, 539.731f, 129.326f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 98991000, 675.994f, 538.58f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 23:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.3f) + 180f) };
			GlobalFunc_5923(uParam0, 12812910, 686.526f, 542.118f, 128.927f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 30131130, 686.352f, 541.027f, 128.927f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 21331340, 686.16f, 539.831f, 129.127f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 13513610, 685.972f, 538.652f, 129.127f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 37138130, 685.779f, 537.451f, 129.327f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 91401410, 685.588f, 536.256f, 129.327f, Var0, 6, 2, 0);
			break;
		
		case 24:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.23f) + 180f) };
			GlobalFunc_5923(uParam0, 16917010, 693.176f, 541.306f, 128.926f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 71172170, 693.08f, 540.205f, 128.926f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 31741750, 692.975f, 538.998f, 129.127f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 17617810, 692.871f, 537.808f, 129.127f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 79180180, 692.765f, 536.597f, 129.326f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 21831840, 692.66f, 535.391f, 129.326f, Var0, 6, 2, 0);
			break;
		
		case 25:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3.07f) + 180f) };
			GlobalFunc_5923(uParam0, 21321420, 702.065f, 541.218f, 128.927f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 15216210, 702.14f, 540.116f, 128.927f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 72182190, 702.223f, 538.907f, 129.127f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 22022120, 702.304f, 537.715f, 129.127f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 22223220, 702.387f, 536.502f, 129.327f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 42252260, 703.116f, 526.841f, 129.618f, Var0, 6, 2, 0);
			break;
		
		case 26:
			Var0 = { 0f, 0f, (GlobalFunc_569(-3f) + 180f) };
			GlobalFunc_5923(uParam0, 25325420, 708.727f, 541.922f, 128.926f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 55256250, 709.881f, 539.828f, 128.926f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 72582590, 709.05f, 539.628f, 129.127f, Var0, 6, 2, 0);
			GlobalFunc_5923(uParam0, 26026120, 709.217f, 538.445f, 129.127f, Var0, 6, 0, 0);
			GlobalFunc_5923(uParam0, 62263260, 709.386f, 537.241f, 129.326f, Var0, 6, 1, 0);
			GlobalFunc_5923(uParam0, 42652650, 709.555f, 536.043f, 129.326f, Var0, 6, 2, 0);
			break;
		
		default:
			break;
	}
}









char* func_31(int iParam0)//Position - 0x2552
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "misslester1b_crowd@a_";
			break;
		
		case 1:
			sVar0 = "misslester1b_crowd@b_";
			break;
		
		case 2:
			sVar0 = "misslester1b_crowd@c_";
			break;
		
		case 3:
			sVar0 = "misslester1b_crowd@d_";
			break;
		
		case 4:
			sVar0 = "misslester1b_crowd@e_";
			break;
		
		case 5:
			sVar0 = "misslester1b_crowd@f_";
			break;
		
		case 6:
			sVar0 = "misslester1b_crowd@g_";
			break;
		
		case 7:
			sVar0 = "misslester1b_crowd@h_";
			break;
		
		case 8:
			sVar0 = "misslester1b_crowd@i_";
			break;
		
		case 9:
			sVar0 = "misslester1b_crowd@j_";
			break;
		
		case 10:
			sVar0 = "misslester1b_crowd@k_";
			break;
		
		case 11:
			sVar0 = "misslester1b_crowd@l_";
			break;
		
		case 12:
			sVar0 = "misslester1b_crowd@m_";
			break;
	}
	return sVar0;
}








void func_39()//Position - 0x2914
{
	func_40();
	GlobalFunc_8316(0, 1, 1, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_40()//Position - 0x292C
{
	int iVar0;
	
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		}
		CUTSCENE::REMOVE_CUTSCENE();
	}
	GlobalFunc_130(&uLocal_6209);
	HUD::RELEASE_NAMED_RENDERTARGET("Big_Disp");
	STREAMING::REMOVE_IPL("LInvader");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_6200);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_6201);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	iVar0 = 0;
	while (iVar0 < Local_89)
	{
		GlobalFunc_7210(&(Local_89[iVar0 /*178*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_4897)
	{
		GlobalFunc_5925(&(Local_4897[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_5619)
	{
		GlobalFunc_5925(&(Local_5619[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_58)
	{
		GlobalFunc_2895(iLocal_58[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		GlobalFunc_2894(func_31(iVar0));
		iVar0++;
	}
	GlobalFunc_2363(uLocal_6212);
	GlobalFunc_8316(0, 1, 1, 0);
}











