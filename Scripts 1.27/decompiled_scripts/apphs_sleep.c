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
	int iLocal_17[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	int iLocal_43 = 0;
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
	fLocal_39 = 0.82f;
	fLocal_40 = 0.42f;
	fLocal_41 = 0f;
	fLocal_42 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	GlobalFunc_9035();
	iLocal_38 = 1;
	func_27();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					func_21();
					if (iLocal_38)
					{
						func_18();
					}
					else
					{
						func_12();
					}
					break;
				
				case 8:
					func_21();
					func_12();
					if (GlobalFunc_774(2, Global_14361, 0))
					{
						GlobalFunc_2011();
						Global_14371 = 1;
						GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
						if (Global_14393.f_1 > 3)
						{
							Global_14393.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (GlobalFunc_2002())
			{
				func_2();
			}
		}
		else
		{
			Global_14395 = 6;
			func_2();
		}
		if (GlobalFunc_2001())
		{
			func_2();
		}
	}
}


void func_2()//Position - 0x153
{
	func_7();
	if (GlobalFunc_6687(0))
	{
		GlobalFunc_872();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}





void func_7()//Position - 0x400
{
	GlobalFunc_9035();
	Global_3068[Global_14393 /*2811*/][0 /*281*/].f_124[2] = 1;
}





void func_12()//Position - 0x53D
{
	if (Global_14371 == 0)
	{
		if (GlobalFunc_774(2, Global_14362, 0))
		{
			GlobalFunc_7017();
			Global_14371 = 1;
			GlobalFunc_9035();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "GET_CURRENT_SELECTION");
			uLocal_35 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_35))
			{
				SYSTEM::WAIT(0);
			}
			Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_259 = iLocal_17[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_35)];
			GlobalFunc_5578(Global_14374, "SET_HEADER", &(Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_7[Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
			{
				GlobalFunc_1493(Global_14374, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else
			{
				GlobalFunc_1493(Global_14374, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			if (GlobalFunc_6687(0))
			{
				GlobalFunc_872();
			}
		}
	}
}






void func_18()//Position - 0x720
{
	Global_14371 = 1;
	iLocal_37 = 0;
	iLocal_38 = 0;
	func_19();
}

void func_19()//Position - 0x736
{
	int iVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;
	
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_9035();
	iLocal_33 = 0;
	iVar16 = 0;
	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_84[iVar18] = 5000;
		while (iVar17 < 9)
		{
			if (Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_124[iVar17] == 1)
			{
				if (iVar0[iVar17] == 0)
				{
					if (Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_84[iVar17] < Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_84[iVar18])
					{
						iVar18 = iVar17;
						GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar16), SYSTEM::TO_FLOAT(Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_104[iVar18]), -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_7[iVar18 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar17++;
		}
		iLocal_17[iVar16] = iVar18;
		iVar0[iVar18] = 1;
		if (Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_124[iVar16] == 1)
		{
			iLocal_33++;
		}
		iVar16++;
	}
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_5578(Global_14374, "SET_HEADER", &(Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_7[Global_3068[Global_14393 /*2811*/][iLocal_37 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
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


void func_21()//Position - 0x9F0
{
	if (iLocal_43)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_43 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (GlobalFunc_774(2, 181, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
			}
			GlobalFunc_7021();
		}
		if (GlobalFunc_774(2, 180, 0))
		{
			iLocal_34++;
			if (iLocal_34 == iLocal_33)
			{
				iLocal_34 = 0;
			}
			GlobalFunc_7020();
		}
	}
	if (iLocal_43 == 0)
	{
		if (GlobalFunc_774(2, Global_14369, 0))
		{
			if (iLocal_34 > 0)
			{
				iLocal_34 = (iLocal_34 - 1);
			}
			GlobalFunc_7021();
			iLocal_43 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (GlobalFunc_774(2, Global_14370, 0))
		{
			iLocal_34++;
			if (iLocal_34 == iLocal_33)
			{
				iLocal_34 = 0;
			}
			GlobalFunc_7020();
			iLocal_43 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}





void func_26()//Position - 0xB59
{
	int iVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;
	
	iLocal_33 = 0;
	iVar16 = 0;
	GlobalFunc_9035();
	while (iVar16 < 9)
	{
		iVar17 = 0;
		iVar18 = 9;
		Global_3068[Global_14393 /*2811*/][iVar18 /*281*/] = 5000;
		while (iVar17 < 9)
		{
			if (Global_3068[Global_14393 /*2811*/][iVar17 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar17] == 0)
				{
					if (iVar17 == 0)
					{
						if (Global_3068[Global_14393 /*2811*/][iVar17 /*281*/] < Global_3068[Global_14393 /*2811*/][iVar18 /*281*/])
						{
							iVar18 = iVar17;
							GlobalFunc_5579(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar16), -1f, -1f, -1f, &(Global_3068[Global_14393 /*2811*/][iVar18 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar17++;
		}
		iLocal_17[iVar16] = iVar18;
		iVar0[iVar18] = 1;
		if (Global_3068[Global_14393 /*2811*/][iVar16 /*281*/].f_280 == 1)
		{
			iLocal_33++;
		}
		iVar16++;
	}
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_5578(Global_14374, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
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

void func_27()//Position - 0xCF4
{
	if (Global_34913 != 15)
	{
		GlobalFunc_9035();
		Global_3068[Global_14393 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}








