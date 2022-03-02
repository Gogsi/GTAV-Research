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
	int iLocal_27 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		GlobalFunc_491();
	}
	if (func_26())
	{
		iLocal_27 = 1;
	}
	while (true)
	{
		switch (iLocal_27)
		{
			case 0:
				if (func_10())
				{
					iLocal_27 = 1;
				}
				break;
			
			case 1:
				if (func_1())
				{
					GlobalFunc_491();
				}
				break;
		}
		SYSTEM::WAIT(1000);
	}
}

int func_1()//Position - 0x9A
{
	switch (GlobalFunc_5216("BLIMP_UNLOCK"))
	{
		case 2:
			GlobalFunc_6677("BLIMP_UNLOCK", 1, 0, 1000, 10000, 7, 0, 0, 0);
			break;
		
		case 1:
			GlobalFunc_651(57);
			GlobalFunc_4907();
			return 1;
			break;
		
		case 0:
			break;
	}
	return 0;
}









int func_10()//Position - 0x518
{
	if ((((GlobalFunc_83() || GlobalFunc_82()) || GlobalFunc_82()) || GlobalFunc_81()) || GlobalFunc_84())
	{
		if ((PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (GlobalFunc_230(0))
			{
				GlobalFunc_9818(48, 4, 0);
				GlobalFunc_4907();
				return 1;
			}
		}
	}
	return 0;
}
















int func_26()//Position - 0xACD
{
	if ((Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[48 /*29*/].f_12[0] == 1 && Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[48 /*29*/].f_12[1] == 1) && Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[48 /*29*/].f_12[2] == 1)
	{
		if ((((GlobalFunc_83() || GlobalFunc_82()) || GlobalFunc_82()) || GlobalFunc_81()) || GlobalFunc_84())
		{
			return 1;
		}
	}
	return 0;
}


