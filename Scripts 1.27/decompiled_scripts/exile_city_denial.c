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
	bool bLocal_28 = 0;
	bool bLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = 0;
	var uLocal_32 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	
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
	iLocal_27 = -1;
	bLocal_31 = true;
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("exile_city_denial")) > 1)
	{
		Global_34878 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	GlobalFunc_501(18);
	func_35();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	iVar0 = 2;
	iVar1 = 0;
	while (!iLocal_30)
	{
		iLocal_30 = 1;
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
		{
			Global_34878 = 0;
			if (!GlobalFunc_485(130))
			{
				GlobalFunc_492(18);
				func_32();
			}
			else if (GlobalFunc_485(131))
			{
				GlobalFunc_492(18);
				func_32();
			}
			switch (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP())
			{
				case 16:
					GlobalFunc_492(18);
					func_32();
					break;
				
				case 2:
					func_32();
					break;
				
				case 1:
					GlobalFunc_7682(1628462442);
					GlobalFunc_7682(1791324372);
					GlobalFunc_7682(-240877892);
					GlobalFunc_7682(1806999335);
					GlobalFunc_7682(2054503592);
					GlobalFunc_7682(-2009081795);
					bLocal_28 = false;
					while (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						SYSTEM::WAIT(1000);
					}
					iLocal_30 = 0;
					break;
				}
		}
	}
	while (true)
	{
		if (iVar1 > 0)
		{
			iVar1 = (iVar1 - SYSTEM::TIMERA());
			SYSTEM::SETTIMERA(0);
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
		}
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		bLocal_28 = func_23(Var2, &bLocal_31);
		if (Global_68514 || Global_68514.f_1)
		{
			bLocal_28 = false;
		}
		bVar5 = false;
		bVar6 = false;
		if (GlobalFunc_485(131))
		{
			bVar5 = true;
		}
		if (!GlobalFunc_485(130))
		{
			bVar5 = true;
		}
		if (bVar5)
		{
			Global_34878 = 0;
			GlobalFunc_492(18);
			func_32();
		}
		if (GlobalFunc_8354() == 1)
		{
			bVar6 = true;
		}
		Global_34878 = bLocal_28;
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					bLocal_28 = false;
				}
			}
		}
		if (bLocal_29 != bLocal_28)
		{
			if (!bLocal_28)
			{
				func_19();
			}
			if (bLocal_28 && !bVar6)
			{
				bVar7 = false;
				bVar8 = true;
				while (bVar8)
				{
					switch (GlobalFunc_7905(&iLocal_27, 6, 12, 0, 0))
					{
						case 0:
							bVar8 = false;
							bVar7 = false;
							break;
						
						case 1:
							bVar8 = false;
							bVar7 = true;
							break;
						
						default:
							SYSTEM::WAIT(0);
							break;
					}
					if (Global_68245)
					{
						SCRIPT::TERMINATE_THIS_THREAD();
					}
				}
				if (bVar7)
				{
					PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						uVar9 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						while (INTERIOR::IS_VALID_INTERIOR(uVar9))
						{
							SYSTEM::WAIT(5000);
							PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
							if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							{
								uVar9 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
							}
						}
					}
					if (GlobalFunc_6782(PLAYER::PLAYER_PED_ID()) == 0)
					{
						if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset, 0))
						{
							GlobalFunc_6831(1628462442, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset, 1))
						{
							GlobalFunc_6831(1791324372, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset, 2))
						{
							GlobalFunc_6831(-240877892, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
					}
					else if (GlobalFunc_6782(PLAYER::PLAYER_PED_ID()) == 2)
					{
						if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset, 3))
						{
							GlobalFunc_6831(1806999335, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset, 4))
						{
							GlobalFunc_6831(2054503592, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Exile_Warning_Bitset, 4))
						{
							GlobalFunc_6831(-2009081795, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
					}
					if (iVar1 == 0 && !bVar6)
					{
						if ((!GlobalFunc_39(0) && !GlobalFunc_39(4)) && !GlobalFunc_39(3))
						{
							if (MISC::_GET_NUM_DISPATCHED_UNITS_FOR_PLAYER(11) < 256)
							{
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								{
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										MISC::CREATE_INCIDENT_WITH_ENTITY(11, PLAYER::PLAYER_PED_ID(), iVar0, 0f, &uLocal_32);
									}
								}
							}
							if (CAM::IS_SCREEN_FADED_IN())
							{
								if (bLocal_31)
								{
									GlobalFunc_159("CITDENAL", -1);
								}
								else
								{
									GlobalFunc_159("CITDENAL_R", -1);
								}
								iVar1 = 120000;
							}
						}
					}
				}
				else
				{
					bLocal_28 = false;
				}
			}
			else
			{
				func_19();
			}
		}
		if (bLocal_28)
		{
			if (!MISC::IS_INCIDENT_VALID(uLocal_32))
			{
				if (MISC::_GET_NUM_DISPATCHED_UNITS_FOR_PLAYER(11) < 256)
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(11, PLAYER::PLAYER_PED_ID(), iVar0, 0f, &uLocal_32);
						}
					}
				}
			}
		}
		if (bLocal_28 && SYSTEM::TIMERB() > 60000)
		{
			SYSTEM::SETTIMERB(0);
			iVar0 = (iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(1, 2));
			if (iVar0 < 8)
			{
				if (MISC::IS_INCIDENT_VALID(uLocal_32))
				{
					MISC::SET_INCIDENT_REQUESTED_UNITS(uLocal_32, 11, iVar0);
				}
				else if (MISC::_GET_NUM_DISPATCHED_UNITS_FOR_PLAYER(11) < 256)
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(11, PLAYER::PLAYER_PED_ID(), iVar0, 0f, &uLocal_32);
						}
					}
				}
			}
			else
			{
				iVar0 = 8;
			}
		}
		bLocal_29 = bLocal_28;
		if (bVar6)
		{
			Global_34878 = 0;
			if (bLocal_28)
			{
				func_19();
			}
			func_4();
			while (GlobalFunc_8354() == 1)
			{
				SYSTEM::WAIT(2000);
			}
			func_35();
			bVar6 = false;
		}
		if (bLocal_28)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			SYSTEM::WAIT(10000);
		}
		if (GlobalFunc_6687(12) && !GlobalFunc_39(12))
		{
			if (bLocal_28)
			{
				func_19();
			}
			while (GlobalFunc_39(0) || GlobalFunc_39(4))
			{
				SYSTEM::WAIT(8000);
			}
		}
	}
	func_4();
}




void func_4()//Position - 0x80B
{
	GlobalFunc_5919(0, 1);
	GlobalFunc_5919(2, 1);
	GlobalFunc_5919(1, 1);
	GlobalFunc_5918(0, 1);
	GlobalFunc_5918(1, 1);
	GlobalFunc_5918(3, 1);
	GlobalFunc_5918(2, 1);
}















void func_19()//Position - 0xEF9
{
	if (iLocal_27 != -1)
	{
		GlobalFunc_1997(&iLocal_27);
	}
	GlobalFunc_7682(1628462442);
	GlobalFunc_7682(1791324372);
	GlobalFunc_7682(-240877892);
	GlobalFunc_7682(1806999335);
	GlobalFunc_7682(2054503592);
	GlobalFunc_7682(-2009081795);
	bLocal_28 = false;
	bLocal_29 = false;
	Global_34878 = 0;
	MISC::DELETE_INCIDENT(uLocal_32);
}




int func_23(struct<2> Param0, var uParam2, int iParam3)//Position - 0x10AC
{
	if (!(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
	{
		return 0;
	}
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					*iParam3 = 1;
					return 1;
				}
			}
		}
	}
	if (Param0 < 1536.35f)
	{
		if (Param0.f_1 > 1016.18f)
		{
			if (Param0.f_1 < 1213.53f)
			{
				if (Param0 > 1278.08f)
				{
					*iParam3 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}









void func_32()//Position - 0x16DB
{
	func_19();
	func_4();
	SCRIPT::TERMINATE_THIS_THREAD();
}



void func_35()//Position - 0x1776
{
	GlobalFunc_5919(0, 0);
	GlobalFunc_5919(2, 0);
	GlobalFunc_5919(1, 0);
	GlobalFunc_5918(0, 0);
	GlobalFunc_5918(1, 0);
	GlobalFunc_5918(3, 0);
	GlobalFunc_5918(2, 0);
}


