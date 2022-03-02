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
	struct<3> Local_19 = { 0, 0, 0 } ;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
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
	fLocal_26 = 9.99f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	fLocal_29 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_9();
	func_6();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					if (SYSTEM::TIMERA() > 125)
					{
						func_9();
						SYSTEM::SETTIMERA(0);
					}
					if (SYSTEM::TIMERB() > SYSTEM::FLOOR(fLocal_28) * 30 && SYSTEM::TIMERB() > 150)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "APP_FUNCTION");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						SYSTEM::SETTIMERB(0);
					}
					if (SYSTEM::TIMERB() > 2000)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "APP_FUNCTION");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						SYSTEM::SETTIMERB(0);
					}
					break;
				
				case 8:
					if (GlobalFunc_2194(2, Global_14361, 0))
					{
						GlobalFunc_2011();
						Global_14371 = 1;
						func_9();
						func_6();
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


void func_2()//Position - 0x184
{
	MISC::CLEAR_BIT(&Global_2264, 22);
	SCRIPT::TERMINATE_THIS_THREAD();
}




void func_6()//Position - 0x254
{
	if (Global_14381)
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	GlobalFunc_5579(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_2263, 17);
}



void func_9()//Position - 0x3AB
{
	int iVar0;
	bool bVar1;
	
	if (func_17() == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			Local_19 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fLocal_22 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			func_16();
			func_15();
			func_14();
			fLocal_23 = (360f - fLocal_22);
			fLocal_26 = (fLocal_26 - fLocal_23);
			if (fLocal_26 < 0f)
			{
				fLocal_26 = (fLocal_26 + 360f);
			}
			if (iLocal_30 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (MISC::IS_BIT_SET(Global_2264, 30))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_26));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_27));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				if (MISC::IS_BIT_SET(Global_2264, 22))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				if (MISC::IS_BIT_SET(Global_2264, 29))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				if (MISC::IS_BIT_SET(Global_2265, 1))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_29);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			if (fLocal_22 == fLocal_22)
			{
			}
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Local_19 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fLocal_22 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		if (Global_2544847 > 5)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_2544847)
		{
			func_12(iVar0);
			func_11(iVar0);
			func_10(iVar0);
			fLocal_23 = (360f - fLocal_22);
			fLocal_26 = (fLocal_26 - fLocal_23);
			if (fLocal_26 < 0f)
			{
				fLocal_26 = (fLocal_26 + 360f);
			}
			if (iLocal_30 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (MISC::IS_BIT_SET(Global_2544648, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (MISC::IS_BIT_SET(Global_2544648, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (MISC::IS_BIT_SET(Global_2544648, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (MISC::IS_BIT_SET(Global_2544648, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_26));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_27));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				if (MISC::IS_BIT_SET(Global_2264, 22))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				if (MISC::IS_BIT_SET(Global_2264, 29))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				}
				if (MISC::IS_BIT_SET(Global_2265, 1))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_29);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			if (fLocal_22 == fLocal_22)
			{
			}
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_10(int iParam0)//Position - 0x674
{
	fLocal_24 = (Global_2544831[iParam0 /*3*/] - Local_19.x);
	fLocal_25 = (SYSTEM::COS(((3.14159f / 180f) * Local_19.x)) * (Global_2544831[iParam0 /*3*/].f_1 - Local_19.f_1));
	fLocal_26 = MISC::ATAN2(fLocal_24, fLocal_25);
	if (fLocal_26 < 0f)
	{
		fLocal_26 = (fLocal_26 + 360f);
	}
	return fLocal_26;
}

float func_11(int iParam0)//Position - 0x6CA
{
	fLocal_28 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_2544831[iParam0 /*3*/], Local_19));
	fLocal_29 = (Global_2544831[iParam0 /*3*/].f_2 - Local_19.f_2);
	return fLocal_28;
}

float func_12(int iParam0)//Position - 0x6FD
{
	fLocal_27 = SYSTEM::SQRT((((Global_2544831[iParam0 /*3*/] - Local_19.x) * (Global_2544831[iParam0 /*3*/] - Local_19.x)) + ((Global_2544831[iParam0 /*3*/].f_1 - Local_19.f_1) * (Global_2544831[iParam0 /*3*/].f_1 - Local_19.f_1))));
	return fLocal_27;
}


float func_14()//Position - 0x7A7
{
	fLocal_24 = (Global_16798 - Local_19.x);
	fLocal_25 = (SYSTEM::COS(((3.14159f / 180f) * Local_19.x)) * (Global_16798.f_1 - Local_19.f_1));
	fLocal_26 = MISC::ATAN2(fLocal_24, fLocal_25);
	if (fLocal_26 < 0f)
	{
		fLocal_26 = (fLocal_26 + 360f);
	}
	return fLocal_26;
}

float func_15()//Position - 0x7F3
{
	fLocal_28 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_16798, Local_19));
	fLocal_29 = (Global_16798.f_2 - Local_19.f_2);
	return fLocal_28;
}

float func_16()//Position - 0x81C
{
	fLocal_27 = SYSTEM::SQRT((((Global_16798 - Local_19.x) * (Global_16798 - Local_19.x)) + ((Global_16798.f_1 - Local_19.f_1) * (Global_16798.f_1 - Local_19.f_1))));
	return fLocal_27;
}

int func_17()//Position - 0x84F
{
	if (Global_68245 == 1)
	{
		return 1;
	}
	return 0;
}

