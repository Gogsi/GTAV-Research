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
	int iLocal_17[4] = { 0, 0, 0, 0 };
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	int iLocal_30 = 0;
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
	fLocal_26 = 0.72f;
	fLocal_27 = 0.42f;
	fLocal_28 = 0f;
	fLocal_29 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_16758 = 0;
	Global_14550 = 0;
	func_18();
	Global_14393.f_1 = 7;
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_5578(Global_14374, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					if (Global_16758 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
				
				case 8:
					if (Global_16758 == 1)
					{
						func_5();
					}
					break;
				
				case 3:
					SCRIPT::TERMINATE_THIS_THREAD();
					break;
				
				default:
					break;
			}
			if (Global_16758 == 0)
			{
				if (GlobalFunc_2002())
				{
					GlobalFunc_491();
				}
			}
			else if (GlobalFunc_774(2, Global_14361, 0))
			{
				Global_14371 = 1;
				Global_16758 = 0;
				Global_14393.f_1 = 7;
				func_18();
				GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				GlobalFunc_5578(Global_14374, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
			}
		}
		if (GlobalFunc_2001())
		{
			GlobalFunc_491();
		}
	}
}





void func_5()//Position - 0x24A
{
	GRAPHICS::DRAW_RECT(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, 0);
	func_6();
}

void func_6()//Position - 0x274
{
	int iVar0;
	
	fLocal_28 = fLocal_26;
	fLocal_29 = fLocal_27;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(fLocal_28, fLocal_29, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_16980[iLocal_24 /*9*/] /*29*/].f_3), 0);
	fLocal_28 = (fLocal_28 + 0.07f);
	func_10(255, 255, 255, 205);
	if (Global_16980[iLocal_24 /*9*/].f_2.f_1 < 10)
	{
		GlobalFunc_1325(fLocal_28, fLocal_29, "CELL_506", Global_16980[iLocal_24 /*9*/].f_2.f_2, Global_16980[iLocal_24 /*9*/].f_2.f_1);
	}
	else
	{
		GlobalFunc_1325(fLocal_28, fLocal_29, "CELL_503", Global_16980[iLocal_24 /*9*/].f_2.f_2, Global_16980[iLocal_24 /*9*/].f_2.f_1);
	}
	fLocal_28 = (fLocal_28 + 0.07f);
	func_10(255, 255, 255, 205);
	GlobalFunc_1325(fLocal_28, fLocal_29, "CELL_505", Global_16980[iLocal_24 /*9*/].f_2.f_3, Global_16980[iLocal_24 /*9*/].f_2.f_4);
	fLocal_28 = fLocal_26;
	func_10(255, 255, 255, 205);
	fLocal_29 = (fLocal_29 + 0.02f);
	if (Global_16811[Global_16980[iLocal_24 /*9*/].f_1 /*42*/].f_8 == 0)
	{
		func_9();
	}
	HUD::SET_TEXT_WRAP(0f, 0.93f);
	func_8(fLocal_28, fLocal_29, &(Global_16811[Global_16980[iLocal_24 /*9*/].f_1 /*42*/].f_4), 0);
	fLocal_29 = (fLocal_29 + 0.07f);
	iVar0 = 1;
	while (iVar0 <= Global_16811[Global_16980[iLocal_24 /*9*/].f_1 /*42*/].f_9)
	{
		func_10(255, 255, 255, 255);
		fLocal_29 = (fLocal_29 + 0.04f);
		if (Global_16811[Global_16980[iLocal_24 /*9*/].f_1 /*42*/].f_32[iVar0] == -1)
		{
			func_8(fLocal_28, fLocal_29, &(Global_16811[Global_16980[iLocal_24 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), 0);
		}
		else
		{
			GlobalFunc_1325(fLocal_28, fLocal_29, &(Global_16811[Global_16980[iLocal_24 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), Global_16811[Global_16980[iLocal_24 /*9*/].f_1 /*42*/].f_27[iVar0], Global_16811[Global_16980[iLocal_24 /*9*/].f_1 /*42*/].f_32[iVar0]);
		}
		iVar0++;
	}
}


void func_8(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x47C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_9()//Position - 0x494
{
	HUD::SET_TEXT_SCALE(0.4f, 0.4f);
	HUD::SET_TEXT_COLOUR(255, 128, 0, 255);
	HUD::SET_TEXT_DROPSHADOW(1, 0, 78, 255, 255);
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4BE
{
	HUD::SET_TEXT_SCALE(0.3f, 0.3f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(1);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_11()//Position - 0x4FD
{
	if (GlobalFunc_774(2, Global_14362, 0))
	{
		iLocal_24 = iLocal_17[iLocal_23];
		Global_16758 = 1;
		func_12(Global_14374, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287", "CELL_280", "CELL_285", "CELL_284", 0);
		GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		GlobalFunc_5578(Global_14374, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
		Global_14393.f_1 = 8;
		Global_16758 = 1;
	}
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, int iParam9, int iParam10, int iParam11)//Position - 0x57B
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
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		GlobalFunc_256(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		GlobalFunc_256(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		GlobalFunc_256(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		GlobalFunc_256(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		GlobalFunc_256(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_14()//Position - 0x640
{
	if (iLocal_30)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_30 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (GlobalFunc_774(2, 181, 0))
		{
			if (iLocal_23 > 0)
			{
				iLocal_23 = (iLocal_23 - 1);
			}
		}
		if (GlobalFunc_774(2, 180, 0))
		{
			iLocal_23++;
			if (iLocal_23 == iLocal_22)
			{
				iLocal_23 = 0;
			}
		}
	}
	if (iLocal_30 == 0)
	{
		if (GlobalFunc_774(2, Global_14369, 0))
		{
			if (iLocal_23 > 0)
			{
				iLocal_23 = (iLocal_23 - 1);
			}
			iLocal_30 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (GlobalFunc_774(2, Global_14370, 0))
		{
			iLocal_23++;
			if (iLocal_23 == iLocal_22)
			{
				iLocal_23 = 0;
			}
			iLocal_30 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_15()//Position - 0x6DD
{
	int iVar0;
	
	iVar0 = 0;
	fLocal_28 = fLocal_26;
	fLocal_29 = fLocal_27;
	iLocal_25 = iLocal_22;
	while (iVar0 < iLocal_25)
	{
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_23)
		{
			func_9();
		}
		func_8(fLocal_28, fLocal_29, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_16980[iLocal_17[iVar0] /*9*/] /*29*/].f_3), 0);
		fLocal_28 = (fLocal_28 + 0.07f);
		func_10(255, 255, 255, 205);
		if (Global_16980[iLocal_17[iVar0] /*9*/].f_2.f_1 < 10)
		{
			GlobalFunc_1325(fLocal_28, fLocal_29, "CELL_506", Global_16980[iLocal_17[iVar0] /*9*/].f_2.f_2, Global_16980[iLocal_17[iVar0] /*9*/].f_2.f_1);
		}
		else
		{
			GlobalFunc_1325(fLocal_28, fLocal_29, "CELL_503", Global_16980[iLocal_17[iVar0] /*9*/].f_2.f_2, Global_16980[iLocal_17[iVar0] /*9*/].f_2.f_1);
		}
		fLocal_28 = (fLocal_28 + 0.07f);
		func_10(255, 255, 255, 205);
		GlobalFunc_1325(fLocal_28, fLocal_29, "CELL_505", Global_16980[iLocal_17[iVar0] /*9*/].f_2.f_3, Global_16980[iLocal_17[iVar0] /*9*/].f_2.f_4);
		fLocal_28 = fLocal_26;
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_23)
		{
			func_9();
		}
		fLocal_29 = (fLocal_29 + 0.02f);
		HUD::SET_TEXT_WRAP(0f, 0.93f);
		func_8(fLocal_28, fLocal_29, &(Global_16811[Global_16980[iLocal_17[iVar0] /*9*/].f_1 /*42*/]), 0);
		fLocal_29 = (fLocal_29 + 0.05f);
		iVar0++;
	}
}



void func_18()//Position - 0x902
{
	int iVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	
	iLocal_22 = 0;
	iVar5 = 0;
	while (iVar5 < 4)
	{
		iVar6 = 0;
		iVar7 = 3;
		Global_16980[iVar7 /*9*/].f_2 = -1;
		Global_16980[iVar7 /*9*/].f_2.f_1 = 0;
		Global_16980[iVar7 /*9*/].f_2.f_2 = 0;
		Global_16980[iVar7 /*9*/].f_2.f_3 = 0;
		Global_16980[iVar7 /*9*/].f_2.f_5 = 0;
		while (iVar6 < 4)
		{
			if (iVar0[iVar6] == 0)
			{
				if (Global_16980[iVar6 /*9*/].f_8 != 0)
				{
					if (GlobalFunc_1496(Global_16980[iVar6 /*9*/].f_2, Global_16980[iVar7 /*9*/].f_2))
					{
						iVar7 = iVar6;
					}
				}
			}
			iVar6++;
		}
		iLocal_17[iVar5] = iVar7;
		iVar0[iVar7] = 1;
		if (Global_16980[iVar5 /*9*/].f_8 != 0)
		{
			iLocal_22++;
		}
		iVar5++;
	}
	func_12(Global_14374, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287", "CELL_280", 0, 0, 0);
}


