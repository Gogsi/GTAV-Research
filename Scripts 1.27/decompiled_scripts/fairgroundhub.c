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
	struct<17> Local_39 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	struct<10> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = -1;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	struct<24> Local_73[1];
	struct<24> Local_98[1];
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
	int iVar0;
	struct<3> Var1;
	int iVar4[4];
	
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
	Var1 = { ScriptParam_0.f_1[0 /*3*/] };
	GlobalFunc_105(Var1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(195))
	{
		func_69();
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fairgroundhub")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_2621550)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-847690929) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(-847690929);
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-847690929))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-847690929, &ScriptParam_0, 23, 1424);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_61();
	SYSTEM::WAIT(3000);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar4[0]))
	{
		iVar4[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1643.524f, -1124.681f, 17.4326f, 0.3f, joaat("prop_roller_car_01"), 1, 0, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar4[1]))
	{
		iVar4[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1645.146f, -1126.613f, 17.4326f, 0.3f, joaat("prop_roller_car_02"), 1, 0, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar4[2]))
	{
		iVar4[2] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1646.768f, -1128.545f, 17.4326f, 0.3f, joaat("prop_roller_car_02"), 1, 0, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar4[3]))
	{
		iVar4[3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1648.39f, -1130.478f, 17.4326f, 0.3f, joaat("prop_roller_car_02"), 1, 0, 1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar4[iVar0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar4[iVar0], 1);
			ENTITY::SET_ENTITY_INVINCIBLE(iVar4[iVar0], 1);
		}
		iVar0++;
	}
	while (true)
	{
		GlobalFunc_234(PLAYER::PLAYER_PED_ID());
		if (GlobalFunc_2367(PLAYER::PLAYER_PED_ID(), Var1, 0) > (100f + 20f))
		{
			func_69();
		}
		if (!GlobalFunc_39(14))
		{
			if (GlobalFunc_756())
			{
				func_69();
			}
			else if (Local_73[0 /*24*/].f_9 == 0)
			{
				Local_73[0 /*24*/].f_9 = 15;
				Local_98[0 /*24*/].f_9 = 8;
				Local_39.f_9 = 0;
				Local_56.f_9 = 0;
			}
		}
		if (GlobalFunc_2539(64) != 0)
		{
			GlobalFunc_7621(64, 0, 0, 1, 0);
		}
		if (func_1(&Local_73, &Local_39, 0, 0, 1, 2050))
		{
			func_69();
		}
		if (func_1(&Local_98, &Local_56, 0, 0, 1, 2050))
		{
			func_69();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x29D
{
	int iVar0;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			func_43(uParam0[iVar0 /*24*/]);
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
				while (iVar0 < *uParam0)
				{
					if (func_38(uParam0[iVar0 /*24*/]) && (*uParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((uParam0[iVar0 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0))
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
						else if ((uParam0[iVar0 /*24*/])->f_8)
						{
							GlobalFunc_7986(uParam1, 2);
						}
						else if (func_27() < (uParam0[uParam1->f_12 /*24*/])->f_9)
						{
							GlobalFunc_7986(uParam1, 1);
						}
						else if (GlobalFunc_7985())
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
				func_19(uParam1, uParam1->f_6);
			}
			if (func_15(uParam0[uParam1->f_12 /*24*/]) || (uParam0[iVar0 /*24*/])->f_8 == 0)
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_10(uParam1, uParam1->f_2, (uParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_15(uParam0[uParam1->f_12 /*24*/]) || func_27() >= (uParam0[uParam1->f_12 /*24*/])->f_9)
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_19(uParam1, uParam1->f_1);
			}
			if (func_15(uParam0[uParam1->f_12 /*24*/]) || !GlobalFunc_5815(uParam1->f_16))
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_19(uParam1, uParam1->f_3);
			}
			if ((func_15(uParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !GlobalFunc_5815(uParam1->f_16))
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_19(uParam1, uParam1->f_5);
			}
			if (func_15(uParam0[uParam1->f_12 /*24*/]) || !GlobalFunc_5815(uParam1->f_16))
			{
				GlobalFunc_7986(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_19(uParam1, uParam1->f_4);
			}
			if (func_15(uParam0[uParam1->f_12 /*24*/]) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
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
					func_19(uParam1, uParam1->f_7);
				}
				else
				{
					func_19(uParam1, uParam1->f_8);
				}
			}
			if (func_15(uParam0[uParam1->f_12 /*24*/]) || GlobalFunc_5813(uParam0[uParam1->f_12 /*24*/]))
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
			if ((uParam0[uParam1->f_12 /*24*/])->f_8)
			{
				GlobalFunc_7986(uParam1, 2);
				return 0;
			}
			if (func_15(uParam0[uParam1->f_12 /*24*/]) || !GlobalFunc_5815(uParam1->f_16))
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
			if ((uParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || GlobalFunc_1518(PLAYER::PLAYER_PED_ID()) != -1)
				{
					GlobalFunc_7986(uParam1, 0);
					return 0;
				}
			}
			if ((uParam0[uParam1->f_12 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0))
			{
				GlobalFunc_7986(uParam1, 6);
				return 0;
			}
			if (GlobalFunc_7985())
			{
				GlobalFunc_7986(uParam1, 7);
				return 0;
			}
			if (func_27() < (uParam0[uParam1->f_12 /*24*/])->f_9)
			{
				GlobalFunc_7986(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_10(uParam1, *uParam1, (uParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((uParam0[uParam1->f_12 /*24*/])->f_6 == 1)
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
				if (!GlobalFunc_5813(uParam0[uParam1->f_12 /*24*/]))
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
			(uParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				GlobalFunc_7986(uParam1, 0);
				return 1;
			}
			HUD::CLEAR_HELP(1);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0[uParam1->f_12 /*24*/])->f_5))
			{
				SCRIPT::REQUEST_SCRIPT((uParam0[uParam1->f_12 /*24*/])->f_5);
				while (!SCRIPT::HAS_SCRIPT_LOADED((uParam0[uParam1->f_12 /*24*/])->f_5))
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
					SCRIPT::REQUEST_SCRIPT((uParam0[uParam1->f_12 /*24*/])->f_5);
					PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
					SYSTEM::WAIT(0);
				}
				if (bParam3)
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (SCRIPT::HAS_SCRIPT_LOADED((uParam0[uParam1->f_12 /*24*/])->f_5))
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
					SYSTEM::START_NEW_SCRIPT((uParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED((uParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}









int func_10(var uParam0, var uParam1, var uParam2)//Position - 0xD3B
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





bool func_15(var uParam0)//Position - 0xE29
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




int func_19(var uParam0, var uParam1)//Position - 0xF89
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (GlobalFunc_5814(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
		GlobalFunc_Display_Help_Text2(uParam1);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}








int func_27()//Position - 0x1191
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











bool func_38(var uParam0)//Position - 0x1405
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





void func_43(var uParam0)//Position - 0x15B1
{
	if (uParam0->f_11 == 1)
	{
		func_45(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		GlobalFunc_2368(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}


void func_45(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x169B
{
	func_46(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_46(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x16C1
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















void func_61()//Position - 0x5CDD
{
	if (GlobalFunc_39(14))
	{
		GlobalFunc_2545(&(Local_98[0 /*24*/]), 0, "Bigwheel", GlobalFunc_1567(157), 0, "", 0, 6.2f);
		func_62(&(Local_73[0 /*24*/]), 0, "Rollercoaster", -1651.641f, -1134.325f, 21.90398f, -1640.984f, -1121.59f, 16.50313f, 6.75f, 0, "", 0);
	}
	else
	{
		GlobalFunc_2545(&(Local_98[0 /*24*/]), 0, "Bigwheel", GlobalFunc_1567(157), 8, "", 0, 6.2f);
		func_62(&(Local_73[0 /*24*/]), 0, "Rollercoaster", -1651.641f, -1134.325f, 21.90398f, -1640.984f, -1121.59f, 16.50313f, 6.75f, 15, "", 0);
	}
	Local_39 = "LEV_RIDEHLP";
	Local_39.f_1 = "LEV_BROKEN";
	Local_39.f_2 = "LEV_NOMONEY";
	Local_39.f_4 = "LEV_WANTED";
	Local_39.f_3 = 0;
	Local_39.f_16 = 1;
	Local_56 = "BIGW_RIDEHLP";
	Local_56.f_1 = "BIGW_BROKEN";
	Local_56.f_2 = "BIGW_NOMONEY";
	Local_56.f_4 = "BIGW_WANTED";
	Local_56.f_3 = 0;
	Local_39.f_16 = 1;
}

void func_62(var uParam0, int iParam1, char* sParam2, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, char* sParam11, int iParam12)//Position - 0x5DEF
{
	uParam0->f_5 = sParam2;
	uParam0->f_4 = sParam11;
	uParam0->f_9 = iParam10;
	uParam0->f_7 = iParam12;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 1;
	uParam0->f_10 = 0f;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	func_66(&(uParam0->f_16), Param3, Param6, fParam9);
	uParam0->f_1 = { func_63(uParam0->f_16) };
}

Vector3 func_63(struct<3>[] Param0, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x5E58
{
	return GlobalFunc_5778(Param0[0 /*3*/], Param0[1 /*3*/], 0.5f, 1);
}



void func_66(var uParam0, struct<3> Param1, struct<3> Param4, var uParam7)//Position - 0x5EC8
{
	*(uParam0[0 /*3*/]) = { Param1 };
	*(uParam0[1 /*3*/]) = { Param4 };
	uParam0->f_7 = uParam7;
}



void func_69()//Position - 0x5F79
{
	GlobalFunc_1665(&(Local_98[0 /*24*/]));
	GlobalFunc_1665(&(Local_73[0 /*24*/]));
	GlobalFunc_7144(&Local_39);
	GlobalFunc_7144(&Local_56);
	SCRIPT::TERMINATE_THIS_THREAD();
}



