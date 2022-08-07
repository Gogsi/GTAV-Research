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
	int iLocal_19[94] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119[5] = { 0, 0, 0, 0, 0 };
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	bool bLocal_129 = 0;
	struct<6> Local_130[5];
	int iLocal_161[5] = { 0, 0, 0, 0, 0 };
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
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_31();
	func_30();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					func_25();
					if (iLocal_118 == 0)
					{
						func_15();
					}
					break;
				
				case 8:
					if (iLocal_118 == 2)
					{
						func_25();
						if (bLocal_129)
						{
							func_10();
						}
					}
					if (iLocal_118 == 1)
					{
						func_25();
					}
					if (GlobalFunc_774(2, Global_14361, 0))
					{
						GlobalFunc_2011();
						Global_14371 = 1;
						if (iLocal_118 == 2 || iLocal_118 == 1)
						{
							GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_30();
							if (Global_14393.f_1 > 3)
							{
								Global_14393.f_1 = 7;
							}
						}
						if (iLocal_118 == 3)
						{
							GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_4();
						}
					}
					break;
				
				default:
					break;
			}
			if (GlobalFunc_2002())
			{
				GlobalFunc_491();
			}
		}
		else
		{
			Global_14395 = 6;
			GlobalFunc_491();
		}
		if (GlobalFunc_2001())
		{
			GlobalFunc_491();
		}
	}
}




void func_4()//Position - 0x1DF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	bLocal_129 = false;
	func_31();
	iLocal_114 = 0;
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	if (Global_14389 == 0)
	{
		while (iVar0 < 5)
		{
			GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iLocal_114), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_130[iVar0 /*6*/]), 0, 0, 0, 0);
			iLocal_119[iLocal_114] = iVar0;
			iLocal_114++;
			iVar0++;
		}
	}
	if (Global_14389 == 1)
	{
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 5)
		{
			iLocal_161[iVar2] = 0;
			iVar2++;
		}
		iVar1 = (5 - 1);
		while (iVar0 < 5)
		{
			if (Local_130[iVar1 /*6*/].f_5 > 0)
			{
				if (iLocal_161[iVar1] == 0)
				{
					GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iLocal_114), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_130[iVar1 /*6*/]), 0, 0, 0, 0);
					iLocal_119[iLocal_114] = iVar1;
					iLocal_114++;
					iLocal_161[iVar1] = 1;
				}
			}
			if (iVar1 > 0)
			{
				iVar1 = (iVar1 - 1);
			}
			iVar0++;
		}
	}
	if (iLocal_114 == 0)
	{
		GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3092", 0, 0, 0, 0);
	}
	else
	{
		bLocal_129 = true;
	}
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_5578(Global_14374, "SET_HEADER", "CELL_23", 0, 0, 0, 0);
	if (Global_14381)
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
		MISC::SET_BIT(&Global_2263, 17);
	}
	else
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_2263, 17);
	}
	iLocal_118 = 2;
}






void func_10()//Position - 0x5AF
{
	int iVar0;
	
	if (Global_14371 == 0)
	{
		if (GlobalFunc_774(2, Global_14362, 0))
		{
			GlobalFunc_7017();
			Global_14371 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
			uLocal_128 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_128))
			{
				SYSTEM::WAIT(0);
			}
			iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_128);
			iLocal_116 = iLocal_119[iVar0];
			if (Global_14393.f_1 > 3)
			{
				Global_14393.f_1 = 8;
			}
			GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (iLocal_116 == 1)
			{
			}
			func_11();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_3206");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_125);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_3101");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_126);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			GlobalFunc_5578(Global_14374, "SET_HEADER", &(Local_130[iLocal_116 /*6*/]), 0, 0, 0, 0);
			GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_2263, 17);
			if (Global_14381)
			{
				GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			iLocal_118 = 3;
		}
	}
}

void func_11()//Position - 0x73F
{
	switch (iLocal_116)
	{
		case 0:
			iLocal_125 = Global_97072;
			iLocal_126 = Global_97089;
			break;
		
		case 1:
			iLocal_125 = (Global_97073 + Global_97074);
			iLocal_126 = (Global_97090 + Global_97091);
			break;
		
		case 2:
			iLocal_125 = Global_97075;
			iLocal_126 = Global_97092;
			break;
		
		case 3:
			iLocal_125 = Global_97076;
			iLocal_126 = Global_97093;
			break;
		
		case 4:
			iLocal_125 = (Global_97077 + Global_97078);
			iLocal_126 = (Global_97094 + Global_97095);
			break;
		
		default:
			iLocal_125 = 0;
			iLocal_126 = 0;
			break;
	}
}




void func_15()//Position - 0x853
{
	if (Global_14371 == 0)
	{
		if (GlobalFunc_774(2, Global_14362, 0))
		{
			GlobalFunc_7017();
			Global_14371 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
			uLocal_128 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_128))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_127 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_128);
			if (Global_14393.f_1 > 3)
			{
				Global_14393.f_1 = 8;
				if (iLocal_127 == 0)
				{
					iLocal_118 = 1;
					func_16();
				}
				else
				{
					iLocal_118 = 2;
					func_4();
				}
			}
		}
	}
}

void func_16()//Position - 0x8C8
{
	int iVar0;
	
	iLocal_114 = 0;
	func_20();
	iVar0 = 0;
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (GlobalFunc_6687(0))
	{
		GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_229", 0, 0, 0, 0);
	}
	else
	{
		while (iVar0 < Global_85368)
		{
			GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Global_85159[iVar0 /*4*/]), 0, 0, 0, 0);
			iLocal_114++;
			iLocal_19[iVar0] = iVar0;
			iVar0++;
		}
	}
	if (iLocal_19[1] == 99)
	{
	}
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_5578(Global_14374, "SET_HEADER", "CELL_3301", 0, 0, 0, 0);
	if (GlobalFunc_6687(0) || Global_85368 == 0)
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_2263, 17);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_2263, 17);
		if (Global_14381)
		{
			GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
	else if (Global_14381)
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
	}
	else
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_118 = 1;
}




void func_20()//Position - 0xCDC
{
	int iVar0;
	int iVar1;
	
	Global_85368 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_Running_Missions[iVar0 /*5*/] != -1)
		{
			if (Global_85368 < 52)
			{
				iVar1 = Global_68514.f_109[Global_Running_Missions[iVar0 /*5*/] /*4*/];
				MemCopy(&(Global_85159[Global_85368 /*4*/]), {GlobalFunc_125(iVar1)}, 4);
				Global_85368++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		if ((MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/], 0) && MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/], 1)) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/], 3))
		{
			if (Global_85368 < 52)
			{
				MemCopy(&(Global_85159[Global_85368 /*4*/]), {GlobalFunc_4918(iVar0)}, 4);
				Global_85368++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[0], iVar0))
		{
			if (Global_85368 < 52)
			{
				StringCopy(&(Global_85159[Global_85368 /*4*/]), GlobalFunc_118(iVar0), 16);
				Global_85368++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}





void func_25()//Position - 0x1451
{
	if (iLocal_117)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_117 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (GlobalFunc_774(2, 181, 0))
		{
			if (iLocal_115 > 0)
			{
				iLocal_115 = (iLocal_115 - 1);
			}
			GlobalFunc_7021();
		}
		if (GlobalFunc_774(2, 180, 0))
		{
			iLocal_115++;
			if (iLocal_115 == iLocal_114)
			{
				iLocal_115 = 0;
			}
			GlobalFunc_7020();
		}
	}
	if (iLocal_117 == 0)
	{
		if (GlobalFunc_774(2, Global_14369, 0))
		{
			if (iLocal_115 > 0)
			{
				iLocal_115 = (iLocal_115 - 1);
			}
			GlobalFunc_7021();
			iLocal_117 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (GlobalFunc_774(2, Global_14370, 0))
		{
			iLocal_115++;
			if (iLocal_115 == iLocal_114)
			{
				iLocal_115 = 0;
			}
			GlobalFunc_7020();
			iLocal_117 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}





void func_30()//Position - 0x15BE
{
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3301", 0, 0, 0, 0);
	GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3302", 0, 0, 0, 0);
	iLocal_114 = 2;
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_5578(Global_14374, "SET_HEADER", "CELL_23", 0, 0, 0, 0);
	if (Global_14381)
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
	}
	else
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_118 = 0;
}

void func_31()//Position - 0x16F8
{
	func_32(0, "CELL_3001", 1, Global_97089);
	func_32(1, "CELL_3008", 3, Global_97089);
	func_32(2, "CELL_3004", 7, Global_97092);
	func_32(3, "CELL_3005", 9, Global_97093);
	func_32(4, "CELL_3007", 11, Global_97094);
}

void func_32(int iParam0, char* sParam1, int iParam2, var uParam3)//Position - 0x1748
{
	StringCopy(&(Local_130[iParam0 /*6*/]), sParam1, 16);
	Local_130[iParam0 /*6*/].f_4 = iParam2;
	Local_130[iParam0 /*6*/].f_5 = uParam3;
	if (Local_130[0 /*6*/].f_4 == 1)
	{
	}
}


