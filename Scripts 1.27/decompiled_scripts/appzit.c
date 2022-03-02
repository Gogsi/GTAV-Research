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
	struct<26> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	char cLocal_51[32] = "";
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
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
	iLocal_50 = -99;
	StringCopy(&cLocal_51, "TRACKID", 32);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	HUD::REQUEST_ADDITIONAL_TEXT(&cLocal_51, 1);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1))
	{
		SYSTEM::WAIT(0);
	}
	func_15();
	func_14();
	func_11();
	SYSTEM::SETTIMERA(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_60)
		{
			if (iLocal_62 < 101)
			{
				if (SYSTEM::TIMERA() > 30)
				{
					iLocal_62++;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GlobalFunc_726("CELL_4005");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_62);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GlobalFunc_726("CELL_4006");
				GlobalFunc_726("CELL_4007");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
				iLocal_61 = 1;
				iLocal_60 = 0;
			}
		}
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					func_8();
					if (iLocal_59 == 0)
					{
						func_6();
					}
					break;
				
				case 8:
					if (GlobalFunc_2194(2, Global_14361, 0))
					{
						GlobalFunc_2011();
						iLocal_60 = 0;
						iLocal_61 = 0;
						Global_14371 = 1;
						func_14();
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


void func_2()//Position - 0x206
{
	iLocal_60 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}




void func_6()//Position - 0x2D0
{
	if (SYSTEM::TIMERA() > 2200)
	{
		if (Global_14381)
		{
			GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		iLocal_59 = 1;
	}
}


void func_8()//Position - 0x3D3
{
	if (Global_14371 == 0)
	{
		if (GlobalFunc_2194(2, Global_14362, 0))
		{
			if ((iLocal_59 && iLocal_61 == 0) && iLocal_60 == 0)
			{
				iLocal_62 = 0;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GlobalFunc_726("CELL_4005");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_62);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
				if (Global_14381)
				{
					GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
				}
				else
				{
					GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_2263, 17);
				iLocal_60 = 1;
				SYSTEM::SETTIMERA(0);
			}
		}
	}
}



void func_11()//Position - 0x55E
{
	int iVar0;
	
	GlobalFunc_184(134, 1);
	iVar0 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
	switch (func_12(iVar0))
	{
		case 1:
			GlobalFunc_184(82, 1);
			break;
		
		case 2:
			GlobalFunc_184(81, 1);
			break;
		
		default:
			GlobalFunc_184(83, 1);
			break;
	}
}

int func_12(int iParam0)//Position - 0x5A8
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}


void func_14()//Position - 0x691
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GlobalFunc_726("CELL_4001");
	GlobalFunc_726(&Local_19);
	GlobalFunc_726(&(Local_19.f_16));
	GlobalFunc_726("CELL_4002");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_19.f_24);
	GlobalFunc_726("CELL_4003");
	GlobalFunc_726(&(Local_19.f_25));
	GlobalFunc_726("CELL_4004");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	if (Global_14381)
	{
		if (iLocal_59)
		{
			GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		if (iLocal_59)
		{
			GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else
		{
			GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	GlobalFunc_5401(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_2263, 17);
}

void func_15()//Position - 0x7E1
{
	iLocal_50 = AUDIO::GET_AUDIBLE_MUSIC_TRACK_TEXT_ID();
	StringCopy(&Local_19, "", 64);
	StringIntConCat(&Local_19, iLocal_50, 64);
	StringConCat(&Local_19, "S", 64);
	StringCopy(&(Local_19.f_16), "", 32);
	StringIntConCat(&(Local_19.f_16), iLocal_50, 32);
	StringConCat(&(Local_19.f_16), "A", 32);
	StringCopy(&(Local_19.f_25), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 24);
	if (!HUD::DOES_TEXT_LABEL_EXIST(&Local_19))
	{
		StringCopy(&Local_19, "CELL_195", 64);
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(&(Local_19.f_16)))
	{
		StringCopy(&(Local_19.f_16), "CELL_195", 32);
		StringCopy(&(Local_19.f_25), "CELL_195", 24);
	}
}

