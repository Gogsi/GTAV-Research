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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	iLocal_27 = 76;
	iLocal_28 = 194;
	iLocal_29 = 52;
	iLocal_27 = 76;
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("rampage_controller")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_36();
	}
	if (!GlobalFunc_485(108))
	{
		func_36();
	}
	GlobalFunc_501(23);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		GlobalFunc_7610((iLocal_28 + iVar0), 0, 0);
		MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[(iLocal_29 + iVar0) /*6*/]), 3);
		iVar0++;
	}
	func_18(1);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!GlobalFunc_63(40))
		{
			switch (GlobalFunc_5216("RAMP_NEW_ALL"))
			{
				case 2:
					GlobalFunc_6677("RAMP_NEW_ALL", 1, 0, 2000, 10000, 4, 0, 0, 0);
					break;
				
				case 1:
					GlobalFunc_651(40);
					break;
				}
		}
		if (func_1())
		{
			func_18(0);
			while (func_1())
			{
				SYSTEM::WAIT(0);
			}
			while (MISC::IS_AUTO_SAVE_IN_PROGRESS())
			{
				SYSTEM::WAIT(0);
			}
			func_18(1);
		}
	}
}

bool func_1()//Position - 0x139
{
	return (((GlobalFunc_6687(9) || Global_24446) || GlobalFunc_8354() != 2) || Global_96440[56 /*10*/].f_3);
}

















void func_18(bool bParam0)//Position - 0x912
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = (iLocal_27 + iVar0);
		GlobalFunc_2436(iVar1, bParam0, 0);
		GlobalFunc_5986(iVar1, 1, 2, 0);
		GlobalFunc_2201(iVar1, 1);
		GlobalFunc_4328(iVar1, 44);
		if (((Global_SAVE_DATA.RAMPAGE_SAVED_ARRAY[iVar0 /*2*/] >= 1 || GlobalFunc_485(108) == 1) || GlobalFunc_433((iLocal_28 + iVar0), 0)) || MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[(iLocal_29 + iVar0) /*6*/], 3))
		{
			GlobalFunc_2416(iVar1, 1);
		}
		iVar0++;
	}
}


















void func_36()//Position - 0x1707
{
	func_18(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

