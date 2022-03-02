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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
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
	sLocal_17 = "NULL";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		GlobalFunc_491();
	}
	while (Global_2267)
	{
		func_1();
		SYSTEM::WAIT(0);
	}
	GlobalFunc_491();
}

void func_1()//Position - 0x59
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_20)
		{
			case 0:
				if (GlobalFunc_5747(0))
				{
					GlobalFunc_7629();
					GlobalFunc_6685(0);
					SYSTEM::WAIT(0);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
					GlobalFunc_10869();
					func_10(0, 1, 0);
					iLocal_20 = 1;
					GlobalFunc_7629();
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("respawn_controller")) == 0)
					{
						MISC::SET_SAVE_MENU_ACTIVE(1);
					}
				}
				else
				{
					if (Global_34913 != 15 && Global_34913 != 5)
					{
						func_6();
					}
					Global_2267 = 0;
				}
				break;
			
			case 1:
				func_2();
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				Global_2267 = 0;
				break;
			}
	}
}

void func_2()//Position - 0x120
{
	GlobalFunc_15(&(Global_SAVE_DATA.RP_PLAYER_x));
	GlobalFunc_4910(&(Global_SAVE_DATA.RP_PLAYER.RP_Vehicle_x));
	Global_SAVE_DATA.RP_PLAYER.Mission = -1;
	Global_SAVE_DATA.RP_PLAYER.eRCMissionToBlock = -1;
}




void func_6()//Position - 0x250
{
	if (!GlobalFunc_63(20))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			GlobalFunc_159("AM_H_SAVEAONM", -1);
			GlobalFunc_651(20);
		}
	}
}




void func_10(bool bParam0, int iParam1, bool bParam2)//Position - 0x313
{
	var uVar0;
	var uVar3;
	
	GlobalFunc_2292();
	GlobalFunc_7955();
	func_56();
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 4);
	}
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Comms_Game_time = MISC::GET_GAME_TIMER();
	if (Global_68507 == 62 || Global_68508 == 62)
	{
		GlobalFunc_10944(2, 1);
	}
	if (!bParam0)
	{
		Global_90001.f_8 = 0;
		Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut = 0;
		Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut_switch = 0;
	}
	MISC::OVERRIDE_SAVE_HOUSE(iParam1, Global_SAVE_DATA.RP_PLAYER_x, Global_SAVE_DATA.RP_PLAYER.RP_PLAYER_heading, bParam0, &uVar0, &uVar3);
}














































void func_56()//Position - 0x51EC
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<4> Var3;
	struct<3> Var11;
	int iVar14;
	
	GlobalFunc_9133(PLAYER::PLAYER_PED_ID(), 1);
	GlobalFunc_11324(PLAYER::PLAYER_PED_ID(), 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]))
		{
			bVar1 = false;
			iVar2 = 0;
			StringCopy(&Var3, "", 32);
			Var11 = { 0f, 0f, 0f };
			iVar14 = GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Global_87708[iVar0], 1);
			if ((((iVar14 != 10 && iVar14 != 3) && iVar14 != 2) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_87698[iVar0], 0)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Global_87698[iVar0]))
			{
				while (!bVar1 && GlobalFunc_2197(Global_87708[iVar0], iVar2, &Var3, &iVar14))
				{
					if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&Var3, Global_87698[iVar0]))
					{
						bVar1 = true;
						Var11 = { ENTITY::GET_ENTITY_COORDS(Global_87698[iVar0], 0) };
						GlobalFunc_2290(Global_87708[iVar0], iVar2, &Var11);
					}
					iVar2++;
				}
			}
			if (bVar1)
			{
				if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_87718[iVar0]))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][Global_87708[iVar0] /*3*/] = { Var11 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[0 /*4*/][Global_87708[iVar0]] = ENTITY::GET_ENTITY_HEADING(Global_87698[iVar0]);
				}
				else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_87718[iVar0]))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][Global_87708[iVar0] /*3*/] = { Var11 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[1 /*4*/][Global_87708[iVar0]] = ENTITY::GET_ENTITY_HEADING(Global_87698[iVar0]);
				}
			}
			else if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_87718[iVar0]))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][Global_87708[iVar0] /*3*/] = { 0f, 0f, 0f };
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[0 /*4*/][Global_87708[iVar0]] = 0f;
			}
			else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_87718[iVar0]))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][Global_87708[iVar0] /*3*/] = { 0f, 0f, 0f };
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[1 /*4*/][Global_87708[iVar0]] = 0f;
			}
		}
		iVar0++;
	}
}










































































































































































































































































































































