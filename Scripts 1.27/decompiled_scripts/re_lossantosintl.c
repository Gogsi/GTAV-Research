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
	var uLocal_47 = 0;
	var uLocal_48[4] = { 0, 0, 0, 0 };
	var uLocal_53 = 0;
	var uLocal_54[4] = { 0, 0, 0, 0 };
	var uLocal_59 = 0;
	struct<3> Local_60[4];
	struct<3> Local_73 = { 0, 0, 0 } ;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	bool bLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
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
	bLocal_77 = true;
	iLocal_83 = joaat("s_m_m_pilot_01");
	iLocal_98 = 500;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_12();
	}
	uLocal_96 = PLAYER::PLAYER_PED_ID();
	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(uLocal_96))
		{
			iLocal_97 = 5;
		}
		switch (iLocal_97)
		{
			case 0:
				iLocal_97 = 1;
				break;
			
			case 1:
				GlobalFunc_587();
				iLocal_97 = 2;
				break;
			
			case 2:
				if (GlobalFunc_82())
				{
					iLocal_97 = 3;
				}
				break;
			
			case 3:
				GlobalFunc_587();
				iLocal_97 = 4;
				break;
			
			case 4:
				if (Global_87295)
				{
					iLocal_97 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		SYSTEM::WAIT(iLocal_98);
	}
}

void func_1()//Position - 0x116
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[iVar0]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_48[iVar0]) || (!ENTITY::IS_ENTITY_DEAD(uLocal_48[iVar0]) && !ENTITY::IS_ENTITY_VISIBLE(uLocal_48[iVar0])))
			{
				VEHICLE::DELETE_VEHICLE(&(uLocal_48[iVar0]));
				PED::DELETE_PED(&(uLocal_54[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				GlobalFunc_4711(&(uLocal_48[iVar0]), &(uLocal_54[iVar0]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_48[iVar0]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_54[iVar0]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_53))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_53))
		{
			VEHICLE::DELETE_VEHICLE(&uLocal_53);
			PED::DELETE_PED(&uLocal_59);
		}
		else
		{
			GlobalFunc_4711(&uLocal_53, &uLocal_59);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_53);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_59);
		}
	}
	if (bLocal_81)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "EastWestFlight");
	}
}


void func_3(bool bParam0)//Position - 0x2AB
{
	if (bLocal_77)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[0]))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(uLocal_48[0]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_48[0]))
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_54[0])) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[0]))
					{
						TASK::TASK_PLANE_MISSION(uLocal_54[0], uLocal_48[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50);
					}
				}
				else if (bParam0)
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_54[0])) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[0]))
					{
						TASK::TASK_PLANE_MISSION(uLocal_54[0], uLocal_48[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[2]))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(uLocal_48[2]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_48[2]))
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_54[2])) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[2]))
					{
						TASK::TASK_PLANE_MISSION(uLocal_54[2], uLocal_48[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50);
					}
				}
				else if (bParam0)
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_54[2])) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[2]))
					{
						TASK::TASK_PLANE_MISSION(uLocal_54[2], uLocal_48[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50);
					}
				}
			}
		}
	}
}

void func_4()//Position - 0x47C
{
	int iVar0;
	
	switch (iLocal_87)
	{
		case 0:
			Local_60[0 /*3*/] = { -1542.113f, -3023.802f, 23.2538f };
			Local_60[1 /*3*/] = { -3089.888f, -1960.075f, 313.559f };
			Local_60[2 /*3*/] = { -1037.638f, -3316.12f, 23.2475f };
			Local_60[3 /*3*/] = { 451.174f, -4009.46f, 135.1171f };
			Local_73 = { -1612.174f, -2688.442f, 12.9444f };
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					bLocal_77 = false;
				}
				else
				{
					bLocal_77 = true;
				}
			}
			iLocal_87 = 1;
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(iLocal_83);
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
			VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
			VEHICLE::REQUEST_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
			iLocal_87 = 2;
			break;
		
		case 2:
			if (!bLocal_81)
			{
				if ((((((STREAMING::HAS_MODEL_LOADED(joaat("jet")) && STREAMING::HAS_MODEL_LOADED(iLocal_83)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					bLocal_81 = true;
				}
				else
				{
					STREAMING::REQUEST_MODEL(joaat("jet"));
					STREAMING::REQUEST_MODEL(iLocal_83);
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
				}
			}
			if (bLocal_81)
			{
				if (!CAM::IS_SPHERE_VISIBLE(Local_60[0 /*3*/], 50f) && !CAM::IS_SPHERE_VISIBLE(Local_73, 50f))
				{
					iLocal_87 = 3;
				}
				else
				{
					if (CAM::IS_SPHERE_VISIBLE(Local_60[0 /*3*/], 50f))
					{
					}
					if (CAM::IS_SPHERE_VISIBLE(Local_73, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			uLocal_48[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_60[0 /*3*/], 0, 1, 1);
			ENTITY::SET_ENTITY_HEADING(uLocal_48[0], 240.3179f);
			VEHICLE::_0x279D50DE5652D935(uLocal_48[0], 0);
			uLocal_48[1] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_60[1 /*3*/], 0, 1, 1);
			VEHICLE::_0x279D50DE5652D935(uLocal_48[1], 0);
			uLocal_48[2] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_60[2 /*3*/], 0, 1, 1);
			VEHICLE::_0x279D50DE5652D935(uLocal_48[2], 0);
			uLocal_48[3] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_60[3 /*3*/], 0, 1, 1);
			VEHICLE::_0x279D50DE5652D935(uLocal_48[3], 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[iVar0]))
				{
					uLocal_54[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_48[iVar0], 4, iLocal_83, -1, 1, 1);
					ENTITY::SET_ENTITY_LOD_DIST(uLocal_48[iVar0], 1000);
					VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_48[iVar0], 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_54[iVar0], 1);
				}
				iVar0++;
			}
			func_8(&(uLocal_48[1]), &(uLocal_54[1]));
			func_8(&(uLocal_48[2]), &(uLocal_54[2]));
			func_8(&(uLocal_48[3]), &(uLocal_54[3]));
			if (bLocal_77)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[0]))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_48[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_76 = 1;
					}
					else
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_87 = 4;
			break;
		
		case 4:
			if (iLocal_80)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[3]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_48[3]))
					{
						if (!iLocal_78)
						{
							func_8(&(uLocal_48[3]), &(uLocal_54[3]));
							iLocal_78 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_86)
			{
				case 0:
					if (!iLocal_76)
					{
						if (bLocal_77)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[0]))
							{
								if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_48[0]) && !CAM::IS_SPHERE_VISIBLE(Local_60[0 /*3*/], 50f))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_48[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_76 = 1;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_76)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_48[0]))
							{
								fLocal_84 = VEHICLE::GET_POSITION_IN_RECORDING(uLocal_48[0]);
							}
						}
						if (fLocal_84 > 1100f)
						{
							iLocal_86 = 1;
						}
					}
					break;
				
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[1]))
					{
						if (bLocal_77)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_48[1]))
							{
								if (iLocal_80)
								{
									if (iLocal_78)
									{
										func_6(&(uLocal_48[1]), &(uLocal_54[1]));
										if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
										{
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_48[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_79 = 0;
											iLocal_86 = 2;
										}
										else
										{
											VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(uLocal_48[1]), &(uLocal_54[1]));
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_48[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_79 = 0;
										iLocal_86 = 2;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[1]))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_48[1]))
						{
							iLocal_86 = 3;
						}
					}
					break;
				
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[2]))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew"))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Local_60[2 /*3*/], 50f))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_48[2]))
								{
									func_6(&(uLocal_48[2]), &(uLocal_54[2]));
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_48[2], 101, "AirportNew", 1);
									iLocal_86 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[2]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_48[2]))
						{
							fLocal_85 = VEHICLE::GET_POSITION_IN_RECORDING(uLocal_48[2]);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[1]))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_48[1]))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_48[1]))
							{
								func_8(&(uLocal_48[1]), &(uLocal_54[1]));
								iLocal_79 = 1;
							}
						}
					}
					if (fLocal_85 > 1100f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[3]))
						{
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux"))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Local_60[3 /*3*/], 50f))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_48[3]) && iLocal_79)
									{
										func_6(&(uLocal_48[3]), &(uLocal_54[3]));
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_48[3], 104, "AirplaneLandingRedux", 1);
										iLocal_86 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_48[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_48[3]))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_48[3]))
						{
							func_5();
							iLocal_86 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()//Position - 0xB8D
{
	fLocal_84 = 0f;
	iLocal_76 = 0;
	iLocal_80 = 1;
	iLocal_78 = 0;
}

void func_6(var uParam0, var uParam1)//Position - 0xBA1
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, 1);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, 1);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, 1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
}

void func_7()//Position - 0xBCA
{
	struct<3> Var0;
	
	switch (iLocal_82)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_53))
			{
				uLocal_53 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0, 1, 1);
				ENTITY::SET_ENTITY_LOD_DIST(uLocal_53, 1000);
				VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_53, 1, 1);
				VEHICLE::_0x279D50DE5652D935(uLocal_53, 0);
				uLocal_59 = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_53, 4, iLocal_83, -1, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_59, 1);
				iLocal_82 = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_53) && !ENTITY::IS_ENTITY_DEAD(uLocal_53))
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_53))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_53, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_82 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_53) && !ENTITY::IS_ENTITY_DEAD(uLocal_53))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_53))
				{
					if ((ENTITY::IS_ENTITY_OCCLUDED(uLocal_53) && !CAM::IS_SPHERE_VISIBLE(-1602.086f, -2674.039f, 12.9444f, 50f)) && SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(uLocal_53, 1)) > 62500f)
					{
						iLocal_82 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)//Position - 0xD04
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, 0);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, 0);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, 0, 0);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 1);
}




void func_12()//Position - 0xD46
{
	func_1();
	func_13();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_13()//Position - 0xD5A
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_88))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_88))
		{
			VEHICLE::DELETE_VEHICLE(&uLocal_88);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_88) && !PED::IS_PED_INJURED(uLocal_89))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_88);
			PED::SET_PED_KEEP_TASK(uLocal_89, 1);
			Var0 = { ENTITY::GET_ENTITY_COORDS(uLocal_88, 1) };
			uVar9 = ENTITY::GET_ENTITY_HEADING(uLocal_88);
			Var3 = { 0f, 500f, 50f };
			Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, uVar9, Var3) };
			TASK::TASK_HELI_MISSION(uLocal_89, uLocal_88, 0, 0, Var6, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
		}
	}
	if (bLocal_94)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "HelicopterTakeOff");
	}
}

