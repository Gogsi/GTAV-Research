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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	char* sLocal_69 = NULL;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	float fLocal_77 = 0f;
	int iLocal_78 = 0;
	int iLocal_79[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
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
	iLocal_45 = 1;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = joaat("bmx");
	iLocal_72 = 300000;
	fLocal_77 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_109();
	}
	Global_24689 = 0;
	Global_24688 = 0;
	Global_24690 = 0;
	Global_24691 = 0;
	Global_24693 = 0;
	Global_24692 = 0;
	func_108();
	while (true)
	{
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xF6
{
	func_85();
	func_66();
	func_20();
	func_2(iLocal_66);
}

void func_2(int iParam0)//Position - 0x110
{
	switch (iLocal_45)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (INTERIOR::IS_INTERIOR_SCENE())
			{
				func_19("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_45 = 1;
			}
			else
			{
				func_18(iParam0);
			}
			break;
		
		case 4:
			func_3(iParam0);
			break;
		
		default:
			break;
	}
}

void func_3(int iParam0)//Position - 0x165
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	
	bVar4 = false;
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_67))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_67, 0))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_67, 1) };
						fVar3 = ENTITY::GET_ENTITY_HEADING(iLocal_67);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.x, Var0.f_1, (Var0.f_2 + 4f), 1, 0, 0, 1);
						bVar4 = true;
					}
				}
				VEHICLE::DELETE_VEHICLE(&iLocal_67);
			}
			if (!bVar4)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 3.5f, 1f) };
				}
				fVar3 = (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) + 90f);
			}
			if (func_16(iParam0, Var0, fVar3))
			{
				iLocal_67 = VEHICLE::CREATE_VEHICLE(iParam0, Var0, fVar3, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_67);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_67);
				func_14(sLocal_69);
				func_4(20);
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
				func_19("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_45 = 1;
		}
	}
}

void func_4(int iParam0)//Position - 0x2A1
{
	if (!GlobalFunc_39(14) && !func_12(""))
	{
		MISC::SET_BIT(&Global_24690, iParam0);
		Global_24693 = 1;
		func_5();
	}
}

void func_5()//Position - 0x2D4
{
	int iVar0;
	
	iVar0 = GlobalFunc_8329();
	switch (iVar0)
	{
		case 0:
			GlobalFunc_183(joaat("sp0_times_cheated"), 1);
			break;
		
		case 1:
			GlobalFunc_183(joaat("sp1_times_cheated"), 1);
			break;
		
		case 2:
			GlobalFunc_183(joaat("sp2_times_cheated"), 1);
			break;
	}
}







int func_12(char* sParam0)//Position - 0x4CE
{
	if (iLocal_93 != 0)
	{
		if (GlobalFunc_39(14) && CAM::IS_SCREEN_FADED_IN())
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "CHEAT_SUPER_JUMP") && INTERIOR::IS_INTERIOR_SCENE())
			{
				return 0;
			}
			if ((MISC::ARE_STRINGS_EQUAL(sParam0, "CHEAT_GRAVITY_MOON") && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}


void func_14(char* sParam0)//Position - 0x545
{
	if (func_12(""))
	{
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_ACTIVATED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_15(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1));
		STATS::PLAYSTATS_CHEAT_APPLIED(sParam0);
	}
}

void func_15(int iParam0)//Position - 0x577
{
	iLocal_79[iLocal_90] = iParam0;
	iLocal_90++;
	if (iLocal_90 >= 10)
	{
		iLocal_90 = 0;
	}
}

int func_16(int iParam0, struct<3> Param1, float fParam4)//Position - 0x597
{
	struct<3> Var0[9];
	struct<3> Var28;
	struct<3> Var31;
	struct<3> Var34;
	var uVar37;
	var uVar40;
	int iVar43;
	var uVar44;
	var uVar45;
	var uVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var28, &Var31);
	Var34.x = (MISC::ABSF((Var31.x - Var28.x)) / 2f);
	Var34.f_1 = (MISC::ABSF((Var31.f_1 - Var28.f_1)) / 2f);
	Var34.f_2 = (MISC::ABSF((Var31.f_2 - Var28.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam4, -Var34.x, -Var34.f_1, -Var34.f_2) };
	Var0[2 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam4, Var34.x, -Var34.f_1, -Var34.f_2) };
	Var0[3 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam4, Var34.x, Var34.f_1, -Var34.f_2) };
	Var0[4 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam4, -Var34.x, Var34.f_1, -Var34.f_2) };
	Var0[5 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam4, -Var34.x, -Var34.f_1, Var34.f_2) };
	Var0[6 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam4, Var34.x, -Var34.f_1, Var34.f_2) };
	Var0[7 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam4, Var34.x, Var34.f_1, Var34.f_2) };
	Var0[8 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam4, -Var34.x, Var34.f_1, Var34.f_2) };
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param1))
	{
		return 0;
	}
	uVar50 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(GlobalFunc_80(PLAYER::PLAYER_ID()) + Vector(1f, 0f, 0f), Param1, 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(uVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar44 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[1 /*3*/], Var0[3 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(uVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar45 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[2 /*3*/], Var0[4 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(uVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar46 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[5 /*3*/], Var0[7 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(uVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar47 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[6 /*3*/], Var0[8 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(uVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar48 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[1 /*3*/], Var0[8 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(uVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar49 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[2 /*3*/], Var0[7 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(uVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	return 1;
}


void func_18(int iParam0)//Position - 0x866
{
	if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0);
		if (STREAMING::HAS_MODEL_LOADED(uParam0))
		{
			iLocal_45 = 4;
		}
	}
}

void func_19(char* sParam0)//Position - 0x889
{
	if (!GlobalFunc_39(14))
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_DENIED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_15(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1));
	}
}

void func_20()//Position - 0x8B5
{
	func_63();
	func_62();
	func_43();
	func_42();
	func_41();
	func_37();
	func_34();
	func_30();
	func_21();
}

void func_21()//Position - 0x8E1
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_29(19, 1);
			func_28();
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_26()) || GlobalFunc_2567(23)) || GlobalFunc_2567(21)) || GlobalFunc_2567(19))
			{
				iLocal_65 = 9;
				return;
			}
			func_23();
			break;
		
		case 9:
			func_22("CHEAT_AIM_SLOW_MO");
			func_29(19, 0);
			MISC::SET_TIME_SCALE(1f);
			iLocal_76 = 0;
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_22(char* sParam0)//Position - 0x980
{
	if (func_12(sParam0))
	{
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_DEACTIVATED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_15(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1));
	}
}

void func_23()//Position - 0x9AB
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (PAD::IS_CONTROL_PRESSED(2, 25))
		{
			if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("object"))
			{
				MISC::SET_TIME_SCALE(fLocal_77);
			}
			else
			{
				MISC::SET_TIME_SCALE(1f);
			}
		}
		else
		{
			MISC::SET_TIME_SCALE(1f);
		}
	}
}



int func_26()//Position - 0xA2F
{
	if (((((((GlobalFunc_39(0) || GlobalFunc_39(11)) || GlobalFunc_39(4)) || GlobalFunc_39(9)) || GlobalFunc_39(10)) || GlobalFunc_39(3)) || GlobalFunc_39(2)) || GlobalFunc_485(35))
	{
		return 1;
	}
	return 0;
}


void func_28()//Position - 0xAC2
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_76 = 0;
		iLocal_65 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_14("CHEAT_AIM_SLOW_MO1");
			fLocal_77 = 0.6f;
			break;
		
		case 2:
			func_14("CHEAT_AIM_SLOW_MO2");
			fLocal_77 = 0.4f;
			break;
		
		case 3:
			func_14("CHEAT_AIM_SLOW_MO3");
			fLocal_77 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_65 = 5;
}

void func_29(int iParam0, bool bParam1)//Position - 0xB32
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_24689, iParam0);
		func_4(iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_24689, iParam0);
	}
}

void func_30()//Position - 0xB5A
{
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_29(16, 1);
			func_33();
			break;
		
		case 5:
			PAD::DISABLE_CONTROL_ACTION(2, 37, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
			if ((((((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_26()) || GlobalFunc_236()) || GlobalFunc_126(1)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 37)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 19)) || GlobalFunc_2567(23)) || GlobalFunc_2567(21)) || GlobalFunc_2567(16))
			{
				iLocal_62 = 9;
			}
			break;
		
		case 9:
			PAD::DISABLE_CONTROL_ACTION(2, 37, 1);
			PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
			func_22("CHEAT_SLOW_MO");
			func_29(16, 0);
			iLocal_75 = 0;
			MISC::SET_TIME_SCALE(1f);
			iLocal_62 = 1;
			break;
		
		default:
			break;
	}
}



void func_33()//Position - 0xC86
{
	iLocal_75++;
	if (iLocal_75 > 3)
	{
		iLocal_62 = 9;
		return;
	}
	switch (iLocal_75)
	{
		case 1:
			func_14("CHEAT_SLOW_MO1");
			MISC::SET_TIME_SCALE(0.6f);
			break;
		
		case 2:
			func_14("CHEAT_SLOW_MO2");
			MISC::SET_TIME_SCALE(0.4f);
			break;
		
		case 3:
			func_14("CHEAT_SLOW_MO3");
			MISC::SET_TIME_SCALE(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_62 = 5;
}

void func_34()//Position - 0xCF9
{
	struct<3> Var0;
	var uVar3;
	float fVar4;
	
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 2:
			func_29(17, 1);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 1);
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			uVar3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar4);
			fVar4 = (fVar4 + 500f);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.x, Var0.f_1, fVar4, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar3);
			iLocal_71 = MISC::GET_GAME_TIMER();
			CAM::DO_SCREEN_FADE_OUT(0);
			iLocal_63 = 3;
			break;
		
		case 3:
			if (GlobalFunc_2521(1000, iLocal_71))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				iLocal_71 = MISC::GET_GAME_TIMER();
				iLocal_63 = 4;
			}
			break;
		
		case 4:
			if (GlobalFunc_2521(1000, iLocal_71))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 144, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 149, 1);
				if (GlobalFunc_8329() == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
				}
				CAM::DO_SCREEN_FADE_IN(250);
				iLocal_71 = MISC::GET_GAME_TIMER();
				func_14("CHEAT_SKYFALL");
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				iLocal_63 = 5;
			}
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_26()) || GlobalFunc_2567(23)) || GlobalFunc_2567(21)) || GlobalFunc_2567(17))
			{
				iLocal_63 = 9;
				break;
			}
			PAD::DISABLE_CONTROL_ACTION(0, 144, 1);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_63 = 9;
				}
			}
			else
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			func_35();
			func_22("CHEAT_SKYFALL");
			func_29(17, 0);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

void func_35()//Position - 0xEF7
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"));
	}
	if (iLocal_61 != 5)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
}


void func_37()//Position - 0xF5D
{
	struct<3> Var0;
	
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_INVINCIBILITY");
			func_29(15, 1);
			iLocal_61 = 5;
			iLocal_73 = MISC::GET_GAME_TIMER();
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
		
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_61 = 9;
				return;
			}
			Var0 = { GlobalFunc_80(PLAYER::PLAYER_ID()) };
			if (((((func_26() || GlobalFunc_236()) || GlobalFunc_2567(23)) || GlobalFunc_2567(21)) || GlobalFunc_2567(15)) || Var0.f_2 <= -170f)
			{
				iLocal_61 = 9;
				return;
			}
			iLocal_74 = (MISC::GET_GAME_TIMER() - iLocal_73);
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) == 0)
			{
				GlobalFunc_5277((iLocal_72 - iLocal_74), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0);
			}
			if (iLocal_74 >= (iLocal_72 - 1000))
			{
				iLocal_61 = 9;
				return;
			}
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
			STATS::STAT_SET_CHEAT_IS_ACTIVE();
			break;
		
		case 9:
			func_22("CHEAT_INVINCIBILITY_OFF");
			func_29(15, 0);
			iLocal_61 = 1;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}




void func_41()//Position - 0x1220
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FLAMING_BULLETS");
			func_29(12, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || GlobalFunc_2567(23)) || GlobalFunc_2567(21)) || GlobalFunc_2567(12))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_58 = 9;
				return;
			}
			MISC::SET_FIRE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
		
		case 9:
			func_22("CHEAT_FLAMING_BULLETS");
			func_29(12, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_42()//Position - 0x12C7
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_EXPLOSIVE_MELEE");
			func_29(13, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || GlobalFunc_2567(23)) || GlobalFunc_2567(21)) || GlobalFunc_2567(13)) || func_26())
			{
				iLocal_59 = 9;
				return;
			}
			MISC::SET_EXPLOSIVE_MELEE_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
		
		case 9:
			func_22("CHEAT_EXPLOSIVE_MELEE");
			func_29(13, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_43()//Position - 0x136A
{
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_DRUNK");
			func_29(18, 1);
			GlobalFunc_7057(PLAYER::PLAYER_PED_ID());
			func_56(30000, 1050253722, 1065353216, 0);
			iLocal_64 = 5;
			break;
		
		case 5:
			if ((((func_26() || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || GlobalFunc_2567(23)) || GlobalFunc_2567(21)) || GlobalFunc_2567(18))
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_DRUNK");
			func_29(18, 0);
			GlobalFunc_8395(PLAYER::PLAYER_PED_ID());
			func_46(1000);
			iLocal_64 = 1;
			break;
		
		case 10:
			GlobalFunc_5476(1);
			func_29(18, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}



void func_46(int iParam0)//Position - 0x1546
{
	int iVar0;
	
	if (!Global_35923)
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	Global_35925 = (iVar0 + iParam0);
	Global_35926 = iParam0;
}










void func_56(int iParam0, float fParam1, float fParam2, int iParam3)//Position - 0x17E4
{
	func_57(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_57(int iParam0, var uParam1, float fParam2, float fParam3, var uParam4, bool bParam5)//Position - 0x17FA
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_35923)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", fParam3);
	}
	if (!CAM::IS_CINEMATIC_CAM_SHAKING())
	{
		CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (fParam3 * Global_35922));
	}
	if (CAM::DOES_CAM_EXIST(uParam4))
	{
		CAM::SHAKE_CAM(uParam4, "DRUNK_SHAKE", fParam3);
		Global_35924 = uParam4;
	}
	else
	{
		Global_35924 = 0;
	}
	Global_35923 = 1;
	iVar0 = MISC::GET_GAME_TIMER();
	Global_35925 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_35925 = -1;
		}
	}
	Global_35926 = uParam1;
	Global_35927 = fParam2;
	Global_35929 = fParam3;
	Global_35928 = fParam3;
}





void func_62()//Position - 0x19F1
{
	switch (iLocal_57)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_BANG_BANG");
			func_29(11, 1);
			iLocal_57 = 5;
			break;
		
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || GlobalFunc_2567(23)) || GlobalFunc_2567(21)) || GlobalFunc_2567(11))
			{
				iLocal_57 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_57 = 9;
				return;
			}
			MISC::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
		
		case 9:
			func_22("CHEAT_BANG_BANG");
			func_29(11, 0);
			iLocal_57 = 1;
			break;
		
		default:
			break;
	}
}

void func_63()//Position - 0x1A98
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_4(14);
			func_29(14, 1);
			func_65();
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_26()) || GlobalFunc_2567(23)) || GlobalFunc_2567(21)) || GlobalFunc_2567(14)) || GlobalFunc_2568(17)) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_60 = 9;
				}
			}
			else
			{
				iLocal_60 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_GRAVITY_MOON");
			func_29(14, 0);
			MISC::SET_GRAVITY_LEVEL(0);
			iLocal_78 = 0;
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}


void func_65()//Position - 0x1B7C
{
	iLocal_78++;
	if (iLocal_78 > 1)
	{
		iLocal_60 = 9;
		return;
	}
	switch (iLocal_78)
	{
		case 1:
			func_14("CHEAT_GRAVITY_MOON");
			MISC::SET_GRAVITY_LEVEL(1);
			break;
		
		default:
			break;
	}
	iLocal_60 = 5;
}

void func_66()//Position - 0x1BB9
{
	func_84();
	func_78();
	func_77();
	func_76();
	func_75();
	func_74();
	func_73();
	func_72();
	func_71();
	func_70();
	func_67();
}

void func_67()//Position - 0x1BED
{
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((GlobalFunc_2567(23) || GlobalFunc_2567(22)) || GlobalFunc_2567(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_14("CHEAT_GIVE_PARACHUTE");
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 1, 1);
			func_4(10);
		}
	}
}

int func_68()//Position - 0x1C65
{
	if (iLocal_92)
	{
		iLocal_92 = 0;
		return 0;
	}
	if (GlobalFunc_116(0))
	{
		return 1;
	}
	return 0;
}


void func_70()//Position - 0x1CE0
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((GlobalFunc_2567(23) || GlobalFunc_2567(22)) || GlobalFunc_2567(9))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			if (iVar0 > 0)
			{
				func_14("CHEAT_WANTED_DOWN");
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), (iVar0 - 1), 0);
				func_4(9);
			}
			else
			{
				func_19("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_71()//Position - 0x1D83
{
	int iVar0;
	
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((GlobalFunc_2567(23) || GlobalFunc_2567(22)) || GlobalFunc_2567(8))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			if (iVar0 < PLAYER::GET_MAX_WANTED_LEVEL())
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iVar0 + 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				func_14("CHEAT_WANTED_UP");
				func_4(8);
			}
			else
			{
				func_19("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_72()//Position - 0x1E32
{
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((GlobalFunc_2567(23) || GlobalFunc_2567(22)) || GlobalFunc_2567(7)) || GlobalFunc_39(9)) || GlobalFunc_39(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
			func_14("CHEAT_SPECIAL_ABILITY");
			func_4(7);
		}
	}
}

void func_73()//Position - 0x1EB9
{
	int iVar0;
	
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((((GlobalFunc_2567(23) || GlobalFunc_2567(22)) || GlobalFunc_2567(6)) || GlobalFunc_39(9)) || GlobalFunc_39(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_14("CHEAT_HEALTH_ARMOR");
			func_4(6);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
			PED::ADD_ARMOUR_TO_PED(PLAYER::PLAYER_PED_ID(), (PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID()) - PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID())));
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						VEHICLE::SET_VEHICLE_FIXED(iVar0);
					}
				}
			}
		}
	}
}

void func_74()//Position - 0x1F8F
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((GlobalFunc_2567(23) || GlobalFunc_2567(22)) || GlobalFunc_2567(5))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		func_4(5);
		switch (iLocal_70)
		{
			case 0:
				iLocal_70 = 1;
			
			case 1:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_14("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_70 = 2;
				break;
			
			case 2:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEAR");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_14("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_70 = 3;
				break;
			
			case 3:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_14("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_70 = 4;
				break;
			
			case 4:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("SMOG");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_14("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_70 = 6;
				break;
			
			case 6:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("OVERCAST");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_14("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_70 = 7;
				break;
			
			case 7:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("RAIN");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_14("CHEAT_ADVANCE_WEATHER_RAIN");
				func_29(5, 1);
				iLocal_70 = 8;
				break;
			
			case 8:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_14("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_70 = 9;
				break;
			
			case 9:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEARING");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_14("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_70 = 11;
				break;
			
			case 11:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("XMAS");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_14("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_70 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_75()//Position - 0x211E
{
	if (iLocal_50 == 4)
	{
		iLocal_50 = 1;
		if ((GlobalFunc_2567(23) || GlobalFunc_2567(22)) || GlobalFunc_2567(4))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		func_14("CHEAT_GIVE_WEAPONS");
		func_4(4);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_knife"), -1, 0);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg"), 300, 0);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 300, 1);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 150, 0);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 30, 0);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenade"), 5, 0);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_rpg"), 5, 0);
		}
	}
}

void func_76()//Position - 0x21F3
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_SWIM");
			func_29(3, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || GlobalFunc_2567(23)) || GlobalFunc_2567(22)) || GlobalFunc_2567(3))
			{
				iLocal_49 = 9;
			}
			else
			{
				PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.49f);
				STATS::STAT_SET_CHEAT_IS_ACTIVE();
			}
			break;
		
		case 9:
			PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			func_22("CHEAT_FAST_SWIM");
			func_29(3, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_77()//Position - 0x229B
{
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_RUN");
			func_29(2, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || GlobalFunc_2567(23)) || GlobalFunc_2567(22)) || GlobalFunc_2567(2))
			{
				iLocal_48 = 9;
			}
			else
			{
				if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())))
				{
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.49f);
				}
				else
				{
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
				}
				STATS::STAT_SET_CHEAT_IS_ACTIVE();
			}
			break;
		
		case 9:
			PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			func_22("CHEAT_FAST_RUN");
			func_29(2, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

void func_78()//Position - 0x2384
{
	int iVar0;
	
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SLIDEY_CARS");
			func_29(1, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || GlobalFunc_2567(23)) || GlobalFunc_2567(22)) || GlobalFunc_2567(1))
			{
				iLocal_47 = 9;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == PLAYER::PLAYER_PED_ID())
					{
						if (iLocal_68 == 0)
						{
							iLocal_68 = iVar0;
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_68))
							{
								if (func_79(1))
								{
									VEHICLE::SET_VEHICLE_REDUCE_GRIP(iLocal_68, 1);
								}
								else
								{
									iLocal_68 = 0;
								}
							}
						}
						else if (iLocal_68 != 0)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_68))
							{
								VEHICLE::SET_VEHICLE_REDUCE_GRIP(iLocal_68, 0);
								iLocal_68 = 0;
							}
						}
					}
				}
			}
			break;
		
		case 9:
			func_22("CHEAT_SLIDEY_CARS");
			iLocal_47 = 10;
			break;
		
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_68))
			{
				VEHICLE::SET_VEHICLE_REDUCE_GRIP(iLocal_68, 0);
				iLocal_68 = 0;
			}
			func_29(1, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

int func_79(int iParam0)//Position - 0x24A5
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				iVar2 = GlobalFunc_8329();
				if (iParam0 & 1 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_dside_r") != -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_dside_r") == -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
					{
						if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_dside_r") != -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_dside_r") == -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!GlobalFunc_42(iVar2))
					{
						return 0;
					}
					if (GlobalFunc_4931(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
					{
						return 0;
					}
					if (VEHICLE::IS_BIG_VEHICLE(iVar0))
					{
						return 0;
					}
					uVar4 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar3);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar4))
					{
						if (MISC::GET_HASH_KEY(uVar4) == MISC::GET_HASH_KEY("taxiService"))
						{
							return 0;
						}
					}
					if (GlobalFunc_5750(iVar0, iVar2, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}





void func_84()//Position - 0x2AA9
{
	switch (iLocal_46)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SUPER_JUMP");
			func_29(0, 1);
			iLocal_46 = 5;
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || GlobalFunc_2567(23)) || GlobalFunc_2567(22)) || GlobalFunc_2567(0)) || INTERIOR::IS_INTERIOR_SCENE())
			{
				iLocal_46 = 9;
				return;
			}
			MISC::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_ID());
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 217, 1);
			break;
		
		case 9:
			func_22("CHEAT_SUPER_JUMP");
			func_29(0, 0);
			iLocal_46 = 1;
			break;
		
		default:
			break;
	}
}

void func_85()//Position - 0x2B52
{
	if ((GlobalFunc_489() || iLocal_93 != 0) || GlobalFunc_39(14))
	{
		PAD::DISABLE_CONTROL_ACTION(2, 243, 1);
	}
	func_106();
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (GlobalFunc_236() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return;
	}
	if (GlobalFunc_142())
	{
		if (!iLocal_91)
		{
			func_104();
			iLocal_91 = 1;
		}
		return;
	}
	iLocal_91 = 0;
	iLocal_92 = 0;
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(988027572, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("buzzoff"))) || func_103(20, joaat("buzzard")))
	{
		func_100(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-1134279030, 11) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("bandit"))) || func_103(20, joaat("bmx")))
	{
		func_100(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(971352167, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("holein1"))) || func_103(20, joaat("caddy")))
	{
		func_100(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-269863225, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("comet"))) || func_103(20, joaat("comet2")))
	{
		func_100(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(458579068, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("flyspray"))) || func_103(20, joaat("duster")))
	{
		func_100(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-666513193, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("rocket"))) || func_103(20, joaat("pcj")))
	{
		func_100(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-1245984749, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("rapidgt"))) || func_103(20, joaat("rapidgt")))
	{
		func_100(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(2076774618, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("offroad"))) || func_103(20, joaat("sanchez")))
	{
		func_100(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(855685457, 9) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("vinewood"))) || func_103(20, joaat("stretch")))
	{
		func_100(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-591395876, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("barnstorm"))) || func_103(20, joaat("stunt")))
	{
		func_100(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-1399217582, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("trashed"))) || func_103(20, joaat("trash")))
	{
		func_100(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (GlobalFunc_84())
	{
		if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-375917581, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("extinct"))) || func_103(20, joaat("dodo")))
		{
			func_100(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-2124307881, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("deathcar"))) || func_103(20, joaat("dukes2")))
		{
			func_100(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(1028964594, 9) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("bubbles"))) || func_103(20, joaat("submersible2")))
		{
			func_100(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-393416581, 11) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("hoptoit"))) || func_103(0, 0))
	{
		func_98();
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-296509791, 8) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("snowday"))) || func_103(1, 0))
	{
		func_97();
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(1120820643, 7) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("catchme"))) || func_103(2, 0))
	{
		func_96();
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-421458016, 9) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("gotgills"))) || func_103(3, 0))
	{
		func_95();
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(372390926, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("toolup"))) || func_103(4, 0))
	{
		iLocal_50 = 4;
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(606506837, 8) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("makeitrain"))) || func_103(5, 0))
	{
		iLocal_51 = 4;
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(453014206, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("turtle"))) || func_103(6, 0))
	{
		iLocal_52 = 4;
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(1773187142, 9) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("powerup"))) || func_103(7, 0))
	{
		iLocal_53 = 4;
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(1173296014, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("fugitive"))) || func_103(8, 0))
	{
		iLocal_54 = 4;
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-381269753, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("lawyerup"))) || func_103(9, 0))
	{
		iLocal_55 = 4;
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-2023988698, 11) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("skydive"))) || func_103(10, 0))
	{
		iLocal_56 = 4;
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-835863906, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("highex"))) || func_103(11, 0))
	{
		func_94();
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(1958387485, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("incendiary"))) || func_103(12, 0))
	{
		func_93();
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-903985180, 9) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("hothands"))) || func_103(13, 0))
	{
		func_92();
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(2087642905, 9) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("floater"))) || func_103(14, 0))
	{
		func_91();
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(1257820019, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("painkiller"))) || func_103(15, 0))
	{
		func_90();
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(1540206179, 7) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("slowmo"))) || func_103(16, 0))
	{
		func_89();
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(115565392, 16) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("skyfall"))) || func_103(17, 0))
	{
		func_88();
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(-1276513277, 8) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("liquor"))) || func_103(18, 0))
	{
		func_87();
	}
	if ((MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(2040433593, 9) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("deadeye"))) || func_103(19, 0))
	{
		func_86();
	}
}

void func_86()//Position - 0x32B6
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((GlobalFunc_2567(23) || GlobalFunc_2567(21)) || GlobalFunc_2567(16))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 != 1)
	{
		func_19("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_65 = 4;
	}
}

void func_87()//Position - 0x3322
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_64 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_64 = 1;
		return;
	}
	if ((GlobalFunc_2567(23) || GlobalFunc_2567(21)) || GlobalFunc_2567(18))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_64 = 1;
		return;
	}
	if (iLocal_64 == 1)
	{
		iLocal_64 = 4;
	}
	else if (iLocal_64 == 5)
	{
		iLocal_64 = 9;
	}
}

void func_88()//Position - 0x3399
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		func_19("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_19("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((GlobalFunc_2567(23) || GlobalFunc_2567(21)) || GlobalFunc_2567(17)) || GlobalFunc_2568(0)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || !CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 0)) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("respawn_controller")) > 0)
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_63 = 2;
}

void func_89()//Position - 0x3472
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((GlobalFunc_2567(23) || GlobalFunc_2567(21)) || GlobalFunc_2567(16))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_65 != 1)
	{
		func_19("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_62 = 4;
	}
}

void func_90()//Position - 0x34DE
{
	struct<3> Var0;
	
	Var0 = { GlobalFunc_80(PLAYER::PLAYER_ID()) };
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (((GlobalFunc_2567(23) || GlobalFunc_2567(21)) || GlobalFunc_2567(15)) || Var0.f_2 <= -170f)
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_61 == 1)
	{
		iLocal_61 = 4;
	}
	else if (iLocal_61 == 5)
	{
		iLocal_61 = 9;
	}
}

void func_91()//Position - 0x3568
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((GlobalFunc_2567(23) || GlobalFunc_2567(21)) || GlobalFunc_2567(14)) || GlobalFunc_2568(17)) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_60 = 4;
}

void func_92()//Position - 0x35DD
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((GlobalFunc_2567(23) || GlobalFunc_2567(21)) || GlobalFunc_2567(13))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_93()//Position - 0x3654
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((GlobalFunc_2567(23) || GlobalFunc_2567(21)) || GlobalFunc_2567(12))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_94()//Position - 0x36CB
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_57 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_57 = 1;
		return;
	}
	if ((GlobalFunc_2567(23) || GlobalFunc_2567(21)) || GlobalFunc_2567(11))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_57 = 1;
		return;
	}
	if (iLocal_57 == 1)
	{
		iLocal_57 = 4;
	}
	else if (iLocal_57 == 5)
	{
		iLocal_57 = 9;
	}
}

void func_95()//Position - 0x3742
{
	if ((((GlobalFunc_2567(23) || GlobalFunc_2567(22)) || GlobalFunc_2567(3)) || GlobalFunc_39(9)) || GlobalFunc_39(10))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_96()//Position - 0x37B5
{
	if ((((GlobalFunc_2567(23) || GlobalFunc_2567(22)) || GlobalFunc_2567(2)) || GlobalFunc_39(9)) || GlobalFunc_39(10))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_97()//Position - 0x3828
{
	if ((GlobalFunc_2567(23) || GlobalFunc_2567(22)) || GlobalFunc_2567(1))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

void func_98()//Position - 0x3883
{
	if (((GlobalFunc_2567(23) || GlobalFunc_2567(22)) || GlobalFunc_2567(0)) || INTERIOR::IS_INTERIOR_SCENE())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_46 == 1)
	{
		iLocal_46 = 4;
	}
	else if (iLocal_46 == 5)
	{
		iLocal_46 = 9;
	}
}


void func_100(int iParam0, char* sParam1)//Position - 0x396B
{
	if (iLocal_45 == 1)
	{
		if (((((GlobalFunc_39(9) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("barry1")) > 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tennis")) > 0) || GlobalFunc_2567(23)) || GlobalFunc_2567(22)) || GlobalFunc_2567(20))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_101(iParam0))
		{
			func_19("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_66 = iParam0;
		sLocal_69 = sParam1;
		iLocal_45 = 2;
	}
}

int func_101(int iParam0)//Position - 0x3A05
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (GlobalFunc_78(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (GlobalFunc_78(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (GlobalFunc_78(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}


int func_103(int iParam0, int iParam1)//Position - 0x3A80
{
	if (MISC::IS_BIT_SET(Global_24691, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_24692)
			{
				MISC::CLEAR_BIT(&Global_24691, iParam0);
				iLocal_92 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			MISC::CLEAR_BIT(&Global_24691, iParam0);
			iLocal_92 = 1;
			return 1;
		}
	}
	return 0;
}

void func_104()//Position - 0x3ACD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_79[iVar0] != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(iLocal_79[iVar0]);
			iLocal_79[iVar0] = -1;
		}
		iVar0++;
	}
}


void func_106()//Position - 0x3B41
{
	if (GlobalFunc_39(14) || (!CAM::IS_SCREEN_FADED_IN() && iLocal_93 != 0))
	{
		iLocal_93 = MISC::GET_GAME_TIMER();
	}
	if (iLocal_93 != 0)
	{
		if (!GlobalFunc_39(14))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_93) > 1000)
			{
				iLocal_93 = 0;
			}
		}
	}
}


void func_108()//Position - 0x3BB6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_79[iVar0] = -1;
		iVar0++;
	}
	iLocal_91 = 0;
	iLocal_90 = 0;
}

void func_109()//Position - 0x3BDE
{
	MISC::SET_RIOT_MODE_ENABLED(0);
	if (iLocal_63 == 5)
	{
		func_35();
	}
	if (iLocal_64 == 5)
	{
		GlobalFunc_5476(1);
	}
	if (iLocal_62 == 5 || iLocal_65 == 5)
	{
		MISC::SET_TIME_SCALE(1f);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_61 == 5)
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
	}
	MISC::SET_GRAVITY_LEVEL(0);
	Global_24689 = 0;
	Global_24688 = 0;
	Global_24690 = 0;
	Global_24691 = 0;
	Global_24693 = 0;
	Global_24692 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

