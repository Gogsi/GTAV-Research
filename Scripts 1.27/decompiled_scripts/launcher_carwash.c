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
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	struct<24> Local_39[2];
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = -1;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	bool bLocal_105 = 0;
	struct<3> Local_106[2];
	var uLocal_113[2] = { 0, 0 };
	int iLocal_116[2] = { 0, 0 };
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	var uVar1;
	struct<3> Var2;
	int iVar5;
	
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	Var2 = { ScriptParam_0.f_1[0 /*3*/] };
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("launcher_carwash")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(99))
	{
		func_65();
	}
	if (Global_2621550)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-949873222) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(-949873222);
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-949873222))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-949873222, &ScriptParam_0, 23, 1424);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
	{
	}
	func_58();
	while (true)
	{
		GlobalFunc_234(PLAYER::PLAYER_PED_ID());
		if (GlobalFunc_2367(PLAYER::PLAYER_PED_ID(), Var2, 0) > (100f + 20f))
		{
			func_65();
		}
		bVar0 = false;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			bVar0 = (func_54(uVar1) || func_53(uVar1));
			bLocal_105 = VEHICLE::DOES_VEHICLE_HAVE_ROOF(uVar1);
			GlobalFunc_728(bLocal_105);
		}
		iVar5 = 0;
		while (iVar5 < Local_39)
		{
			func_51(iVar5);
			iVar5++;
		}
		if (func_1(&Local_39, &uLocal_88, bVar0, 0, 1, 1424))
		{
			func_65();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x193
{
	int iVar0;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_46(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (GlobalFunc_5815(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_40(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0))
						{
							GlobalFunc_7986(uParam1, 6);
						}
						else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							GlobalFunc_7986(uParam1, 8);
						}
						else if (bParam2)
						{
							GlobalFunc_7986(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							GlobalFunc_7986(uParam1, 2);
						}
						else if (func_29() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							GlobalFunc_7986(uParam1, 1);
						}
						else if (func_24())
						{
							GlobalFunc_7986(uParam1, 7);
						}
						else
						{
							GlobalFunc_7986(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				GlobalFunc_7144(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_6);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_12(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || func_29() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_1);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || !GlobalFunc_5815(uParam1->f_16))
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_3);
			}
			if ((func_17(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !GlobalFunc_5815(uParam1->f_16))
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_5);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || !GlobalFunc_5815(uParam1->f_16))
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_21(uParam1, uParam1->f_4);
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (GlobalFunc_2546())
				{
					func_21(uParam1, uParam1->f_7);
				}
				else
				{
					func_21(uParam1, uParam1->f_8);
				}
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || GlobalFunc_5813(iParam0[uParam1->f_12 /*24*/]))
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			PAD::SET_INPUT_EXCLUSIVE(2, 51);
			PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
			GlobalFunc_187();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				GlobalFunc_7986(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				GlobalFunc_7986(uParam1, 2);
				return 0;
			}
			if (func_17(iParam0[uParam1->f_12 /*24*/]) || !GlobalFunc_5815(uParam1->f_16))
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			if (Global_67058)
			{
				return 0;
			}
			if (GlobalFunc_6825(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || GlobalFunc_1518(PLAYER::PLAYER_PED_ID()) != -1)
				{
					GlobalFunc_7986(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0))
			{
				GlobalFunc_7986(uParam1, 6);
				return 0;
			}
			if (func_24())
			{
				GlobalFunc_7986(uParam1, 7);
				return 0;
			}
			if (func_29() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				GlobalFunc_7986(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_12(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 0;
			}
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if ((PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.05f)
				{
					return 0;
				}
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 51) && uParam1->f_9 == 1)
			{
				if (!GlobalFunc_5813(iParam0[uParam1->f_12 /*24*/]))
				{
					GlobalFunc_7986(uParam1, 9);
				}
				else
				{
					GlobalFunc_7986(uParam1, 5);
				}
			}
			break;
		
		case 5:
			GlobalFunc_7144(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				GlobalFunc_7986(uParam1, 0);
				return 1;
			}
			HUD::CLEAR_HELP(1);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				SCRIPT::REQUEST_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!SCRIPT::HAS_SCRIPT_LOADED((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					GlobalFunc_187();
					if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !Global_68245)
						{
							GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2f, 1, 1056964608, 0, 1);
							VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
						}
					}
					PAD::SET_INPUT_EXCLUSIVE(2, 51);
					SCRIPT::REQUEST_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5);
					PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
					SYSTEM::WAIT(0);
				}
				if (bParam3)
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (SCRIPT::HAS_SCRIPT_LOADED((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!CAM::IS_SCREEN_FADED_OUT())
						{
							if (GlobalFunc_234(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !Global_68245)
								{
									GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2f, 1, 1056964608, 0, 1);
									VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
								}
							}
							PAD::SET_INPUT_EXCLUSIVE(2, 51);
							PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
							GlobalFunc_187();
							SYSTEM::WAIT(0);
						}
					}
					SYSTEM::START_NEW_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}











int func_12(var uParam0, var uParam1, var uParam2)//Position - 0xC69
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (GlobalFunc_5814(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
		GlobalFunc_2540(uParam1, uParam2);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = uParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}





bool func_17(var uParam0)//Position - 0xD57
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 1;
		}
		if (GlobalFunc_1518(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { GlobalFunc_5741(uParam0->f_16, 2f) };
	return !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}




int func_21(var uParam0, var uParam1)//Position - 0xEB7
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (GlobalFunc_5814(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
		GlobalFunc_2542(uParam1);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}



bool func_24()//Position - 0xF43
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (FIRE::IS_ENTITY_ON_FIRE(iVar0))
	{
		return 1;
	}
	if (GlobalFunc_2417(iVar0))
	{
		return 1;
	}
	if (func_25(iVar0, 3))
	{
		return 1;
	}
	return !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0);
}

int func_25(int iParam0, int iParam1)//Position - 0xF97
{
	int iVar0;
	
	if (GlobalFunc_5201(iParam0))
	{
		iVar0 = 0;
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}




int func_29()//Position - 0x10BF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GlobalFunc_6899(PLAYER::PLAYER_ID());
	}
	switch (GlobalFunc_8315())
	{
		case 2:
			return GlobalFunc_2033(2);
		
		case 0:
			return GlobalFunc_2033(0);
		
		case 1:
			return GlobalFunc_2033(1);
		
		default:
	}
	return 0;
}











bool func_40(var uParam0)//Position - 0x1333
{
	GlobalFunc_234(PLAYER::PLAYER_PED_ID());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (GlobalFunc_126(0))
	{
		return 0;
	}
	if (GlobalFunc_160())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (GlobalFunc_1518(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, 1, 0);
	}
	return GlobalFunc_775(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_10);
}






void func_46(var uParam0)//Position - 0x14F4
{
	if (uParam0->f_11 == 1)
	{
		func_48(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		GlobalFunc_2368(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}


void func_48(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x15DE
{
	func_49(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_49(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1604
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13[8];
	int iVar38;
	
	if (fParam6 == 0f)
	{
		return;
	}
	Var0 = { GlobalFunc_107(Param3 - Param0) };
	Var3 = { GlobalFunc_277(Var0, 0f, 0f, 1f) };
	fVar6 = (fParam6 / 2f);
	Var7 = { Param0 };
	Var10 = { Param3 };
	Var10.f_2 = Param0.f_2;
	Var13[0 /*3*/] = { Var7 - Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[1 /*3*/] = { Var7 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[2 /*3*/] = { Var10 + Var3 * Vector(fVar6, fVar6, fVar6) };
	Var13[3 /*3*/] = { Var10 - Var3 * Vector(fVar6, fVar6, fVar6) };
	unk_0x6A3E157475DBFCD9(Var13[0 /*3*/], Var13[1 /*3*/], uParam7, uParam8, uParam9, uParam10);
	unk_0x6A3E157475DBFCD9(Var13[1 /*3*/], Var13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[2 /*3*/], Var13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[3 /*3*/], Var13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		Var13[(4 + iVar38) /*3*/] = { Var13[iVar38 /*3*/] };
		Var13[(4 + iVar38) /*3*/].f_2 = Param3.f_2;
		iVar38++;
	}
	unk_0x6A3E157475DBFCD9(Var13[4 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[5 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[6 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[7 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[0 /*3*/], Var13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[1 /*3*/], Var13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[2 /*3*/], Var13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x6A3E157475DBFCD9(Var13[3 /*3*/], Var13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}


void func_51(int iParam0)//Position - 0x184D
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar5;
	int iVar8;
	
	if (!func_40(&(Local_39[iParam0 /*24*/])))
	{
		Local_39[iParam0 /*24*/].f_8 = 0;
		iLocal_116[iParam0] = 0;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		Local_39[iParam0 /*24*/].f_8 = 0;
		iLocal_116[iParam0] = 0;
		return;
	}
	if (iLocal_116[iParam0] == 0)
	{
		if (MISC::GET_GAME_TIMER() > uLocal_113[iParam0])
		{
			iLocal_116[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Local_106[iParam0 /*3*/], Local_106[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4);
		}
	}
	else
	{
		iVar0 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_116[iParam0], &iVar8, &uVar2, &uVar5, &uVar1);
		if (iVar0 == 2)
		{
			Local_39[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						Local_39[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_116[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_116[iParam0] = 0;
		}
		uLocal_113[iParam0] = MISC::GET_GAME_TIMER() + 250;
	}
}


int func_53(int iParam0)//Position - 0x194B
{
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uParam0)))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 1))
	{
		if (VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x19B6
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!GlobalFunc_777(uParam0))
	{
		return 0;
	}
	if (!VEHICLE::DOES_VEHICLE_HAVE_ROOF(uParam0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(uParam0))
	{
		return 1;
	}
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uParam0)))
	{
		return 1;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		return 1;
	}
	if (func_55(iParam0))
	{
		return 1;
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var3);
	if (MISC::ABSF((Var3.x - Var0.x)) > 3.4f)
	{
		return 1;
	}
	if (MISC::ABSF((Var3.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_68245)
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			return 0;
		}
	}
	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 1) && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (!VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 1) && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("btype"))
	{
		if (GlobalFunc_777(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 3)) || GlobalFunc_777(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x1ACD
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);
	if (GlobalFunc_2543(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3) && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}



void func_58()//Position - 0x1DBD
{
	GlobalFunc_2545(&(Local_39[0 /*24*/]), 1, "Carwash1", GlobalFunc_1567(155), 15, "", 0, 4f);
	GlobalFunc_2545(&(Local_39[1 /*24*/]), 1, "Carwash2", GlobalFunc_1567(156), 15, "", 0, 4f);
	GlobalFunc_5817(&(Local_39[0 /*24*/]), -1f, 0f, 0f, 360f);
	GlobalFunc_5817(&(Local_39[1 /*24*/]), 0f, -1f, 0f, 360f);
	GlobalFunc_2544(&uLocal_88, 0);
	Local_106[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_106[1 /*3*/] = { -700f, -925.3f, 19f };
}







void func_65()//Position - 0x1FDA
{
	func_66(&Local_39);
	GlobalFunc_7144(&uLocal_88);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_66(var uParam0)//Position - 0x1FF2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		GlobalFunc_1665(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}


