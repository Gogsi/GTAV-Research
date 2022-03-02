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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_10();
	}
	while (!GlobalFunc_230(18))
	{
		func_1();
		SYSTEM::WAIT(0);
	}
	func_10();
}

void func_1()//Position - 0xA1
{
	switch (iLocal_47)
	{
		case 0:
			if (((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !MISC::IS_AUTO_SAVE_IN_PROGRESS()) && !GlobalFunc_486()) && !GlobalFunc_489())
			{
				SCRIPT::REQUEST_SCRIPT("taxiService");
				iLocal_47 = 1;
			}
			break;
		
		case 1:
			if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
			{
				SYSTEM::START_NEW_SCRIPT("taxiService", 1828);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
				iLocal_47 = 2;
			}
			break;
		
		case 2:
			switch (GlobalFunc_5585("AM_H_TAXI1"))
			{
				case 2:
					GlobalFunc_6677("AM_H_TAXI1", 2, 0, 1000, 10000, 1, 0, 0, 0);
					break;
				
				case 1:
					iLocal_47 = 3;
					break;
			}
			break;
		
		case 3:
			switch (GlobalFunc_5585("AM_H_TAXI2"))
			{
				case 2:
					GlobalFunc_6677("AM_H_TAXI2", 2, 0, 1000, 10000, 1, 0, 0, 0);
					break;
				
				case 1:
					iLocal_47 = 4;
					break;
			}
			break;
		
		case 4:
			func_10();
			break;
	}
}









void func_10()//Position - 0x572
{
	if (GlobalFunc_2017("AM_H_TAXI1"))
	{
		GlobalFunc_5207("AM_H_TAXI1", 1);
	}
	if (GlobalFunc_2017("AM_H_TAXI2"))
	{
		GlobalFunc_5207("AM_H_TAXI2", 1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}





