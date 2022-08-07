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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_51[25];
	int iLocal_202 = 0;
	struct<3> Local_203 = { 0, 0, 0 } ;
	struct<3> Local_206 = { 0, 0, 0 } ;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
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
	func_27();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_23 == 0)
		{
			if (Global_14393.f_1 != 9)
			{
				switch (Global_14393.f_1)
				{
					case 7:
						if ((iLocal_209 == 0 && iLocal_210 == 0) && Global_16727 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((GlobalFunc_774(2, Global_14361, 0) && iLocal_209 == 0) && iLocal_210 == 0)
						{
							GlobalFunc_2011();
							Global_14371 = 1;
							if (Global_14393.f_1 > 3)
							{
								if (MISC::IS_BIT_SET(Global_2264, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (GlobalFunc_2002())
				{
					func_11();
				}
				if (iLocal_209)
				{
					func_9();
				}
				if (iLocal_210)
				{
					func_8();
				}
			}
			else
			{
				Global_14395 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (GlobalFunc_2001())
		{
			func_11();
		}
	}
}


void func_2()//Position - 0x157
{
	iLocal_24 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
	switch (iLocal_24)
	{
		case 0:
			iLocal_23 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14393.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()//Position - 0x199
{
	int iVar0;
	
	GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_20 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_PHOTOS();
	iLocal_21 = 0;
	iVar0 = 0;
	while (iLocal_21 < iLocal_20)
	{
		if (GRAPHICS::_0xE791DF1F73ED2C8B(iLocal_21))
		{
			GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_51[iLocal_21 /*6*/]), 0, 0, 0, 0);
			iLocal_25[iVar0] = iLocal_21;
			iVar0++;
		}
		iLocal_21++;
	}
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_5578(Global_14374, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_14381)
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_2263, 17);
}





void func_8()//Position - 0x44E
{
	if (iLocal_209 == 0 && iLocal_210 == 1)
	{
		if (iLocal_214)
		{
			Local_206.x = (Local_206.x + 1f);
		}
		if (Local_206.x > Local_203.x || Local_206.x == Local_203.x)
		{
			Local_206.x = Local_203.x;
			iLocal_214 = 0;
		}
		if (iLocal_215)
		{
			Local_206.f_1 = (Local_206.f_1 - 2f);
		}
		if (Local_206.f_1 < Local_203.f_1 || Local_206.f_1 == Local_203.f_1)
		{
			Local_206.f_1 = Local_203.f_1;
			iLocal_215 = 0;
		}
		if (iLocal_216)
		{
			Local_206.f_2 = (Local_206.f_2 - 7f);
		}
		if (Local_206.f_2 < Local_203.f_2 || Local_206.f_2 == Local_203.f_2)
		{
			Local_206.f_2 = Local_203.f_2;
			iLocal_216 = 0;
		}
		if ((iLocal_214 == 0 && iLocal_215 == 0) && iLocal_216 == 0)
		{
			iLocal_210 = 0;
			if (Global_14393.f_1 > 3)
			{
				Global_14393.f_1 = 7;
				HUD::CLEAR_HELP(1);
				Global_16729 = 1;
				func_26();
			}
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_206, 0);
	}
}

void func_9()//Position - 0x536
{
	if ((iLocal_209 == 1 && iLocal_210 == 0) && Global_16727 == 6)
	{
		if (iLocal_211)
		{
			Local_206.x = (Local_206.x - 1f);
		}
		if (Local_206.x < Local_203.x || Local_206.x == Local_203.x)
		{
			Local_206.x = Local_203.x;
			iLocal_211 = 0;
		}
		if (iLocal_212)
		{
			Local_206.f_1 = (Local_206.f_1 - 0.5f);
		}
		if (Local_206.f_1 < Local_203.f_1 || Local_206.f_1 == Local_203.f_1)
		{
			Local_206.f_1 = Local_203.f_1;
			iLocal_212 = 0;
		}
		if (iLocal_213)
		{
			Local_206.f_2 = (Local_206.f_2 + 7f);
		}
		if (Local_206.f_2 > Local_203.f_2 || Local_206.f_2 == Local_203.f_2)
		{
			Local_206.f_2 = Local_203.f_2;
			iLocal_213 = 0;
		}
		if ((iLocal_211 == 0 && iLocal_212 == 0) && iLocal_213 == 0)
		{
			iLocal_209 = 0;
			GlobalFunc_Display_Help_Text("CELL_MSHELP_2");
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_206, 0);
	}
	if (MISC::IS_BIT_SET(Global_2264, 15))
	{
		iLocal_209 = 0;
		iLocal_210 = 0;
		GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_14381)
		{
			GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_2263, 17);
		GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		GlobalFunc_5578(Global_14374, "SET_HEADER", &(Local_51[iLocal_22 /*6*/]), 0, 0, 0, 0);
	}
}


void func_11()//Position - 0x735
{
	Global_16729 = 1;
	HUD::CLEAR_HELP(1);
	SCRIPT::TERMINATE_THIS_THREAD();
}


void func_13()//Position - 0x773
{
	if (iLocal_209 == 0)
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_206, 0);
		Local_203 = { Global_14353 };
		iLocal_210 = 1;
		iLocal_214 = 1;
		iLocal_215 = 1;
		iLocal_216 = 1;
	}
}



void func_16()//Position - 0x82F
{
	if (iLocal_202)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_202 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (GlobalFunc_774(2, 181, 0))
		{
			GlobalFunc_7021();
		}
		if (GlobalFunc_774(2, 180, 0))
		{
			GlobalFunc_7020();
		}
	}
	if (iLocal_202 == 0)
	{
		if (GlobalFunc_774(2, Global_14369, 0))
		{
			GlobalFunc_7021();
			iLocal_202 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (GlobalFunc_774(2, Global_14370, 0))
		{
			GlobalFunc_7020();
			iLocal_202 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}






void func_22()//Position - 0x9A7
{
	int iVar0;
	
	if (Global_14371 == 0)
	{
		if (GlobalFunc_774(2, Global_14362, 0))
		{
			MISC::CLEAR_BIT(&Global_2264, 15);
			GlobalFunc_7017();
			Global_14371 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
			uLocal_19 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_19))
			{
				SYSTEM::WAIT(0);
			}
			iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_19);
			if (iVar0 > -1)
			{
				iLocal_22 = iLocal_25[iVar0];
				if (Global_14393.f_1 > 3)
				{
					if (Global_16727 == 0)
					{
						GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						GlobalFunc_5578(Global_14374, "SET_HEADER", &(Local_51[iLocal_22 /*6*/]), 0, 0, 0, 0);
						if (Global_14381)
						{
							GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_2263, 17);
						Global_16731 = iLocal_22;
						Global_16727 = 12;
						Global_14393.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()//Position - 0xB27
{
	if (iLocal_210 == 0)
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_206, 0);
		Local_203 = { -90.3f, -0.8f, 90f };
		iLocal_209 = 1;
		iLocal_211 = 1;
		iLocal_212 = 1;
		iLocal_213 = 1;
	}
}



void func_26()//Position - 0xB93
{
	if ((MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
	{
		GRAPHICS::_0x4AF92ACD3141D96C();
		if (GRAPHICS::_0x2A893980E96B659A(0))
		{
			iLocal_23 = 1;
		}
		else
		{
			Global_16729 = 1;
			Global_14393.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

void func_27()//Position - 0xBDD
{
	StringCopy(&(Local_51[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_51[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_51[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_51[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_51[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_51[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_51[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_51[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_51[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_51[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_51[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_51[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_51[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_51[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_51[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_51[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_51[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_51[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_51[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_51[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

