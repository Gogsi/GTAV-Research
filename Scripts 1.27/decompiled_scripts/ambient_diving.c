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
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	struct<8> Local_41 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	struct<11> Local_54[30];
	int iLocal_385 = 0;
	var uLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	var uLocal_389 = 0;
	int iLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392[4] = { 0, 0, 0, 0 };
	float fLocal_397[4] = { 0f, 0f, 0f, 0f };
	float fLocal_402 = 0f;
	float fLocal_403 = 0f;
	float fLocal_404 = 0f;
	int iLocal_405 = 0;
	bool bLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	bLocal_39 = true;
	bLocal_40 = true;
	iLocal_387 = -1;
	iLocal_405 = 1;
	uLocal_407 = AUDIO::GET_SOUND_ID();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_77(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_diving")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	GlobalFunc_501(27);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (GlobalFunc_6687(0))
		{
			if (!iLocal_411)
			{
				func_77(0);
				iLocal_411 = 1;
			}
		}
		else
		{
			iLocal_411 = 0;
			GlobalFunc_852(PLAYER::PLAYER_PED_ID());
			switch (iLocal_385)
			{
				case 0:
					func_67();
					break;
				
				case 1:
					func_64();
					func_55();
					func_1();
					break;
				
				case 2:
					func_55();
					break;
				
				case 3:
					func_77(1);
					break;
				}
		}
	}
}

void func_1()//Position - 0x113
{
	if (func_18(&Local_41, &Local_54) || GlobalFunc_485(110) == 1)
	{
		if (GlobalFunc_836())
		{
			GlobalFunc_835(0);
		}
		GlobalFunc_7734(298, 0, 0);
		if (!GlobalFunc_485(110))
		{
			if (!bLocal_406)
			{
				bLocal_406 = GlobalFunc_6831(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
			}
		}
		func_2(2);
	}
}

void func_2(int iParam0)//Position - 0x180
{
	iLocal_385 = iParam0;
}
















int func_18(var uParam0, int iParam1)//Position - 0xD95
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var5;
	int iVar8;
	
	PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = GlobalFunc_849(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar1)
			{
				if (!GlobalFunc_100((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f))
				{
					GlobalFunc_5220(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else
				{
					GlobalFunc_5220(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			GlobalFunc_8392(uParam0, iParam1, Var2);
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11)
	{
		if (!Global_68505)
		{
			GlobalFunc_8391(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 5, &iLocal_388, &uLocal_386, "DIVING_TITLE", "DIVING_COLLECT");
		}
		if (!GlobalFunc_63(44))
		{
			Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (func_24(&Local_41, &Local_54, Var5, &iVar8))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_23(iVar8), Var5, 0) > 200f)
				{
					GlobalFunc_6677("DIVING_HELP4", 1, 7500, -1, 10000, 7, 0, 0, 0);
					GlobalFunc_651(44);
				}
			}
		}
	}
	if (!bLocal_406)
	{
		if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
		{
			bLocal_406 = GlobalFunc_6831(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}





Vector3 func_23(int iParam0)//Position - 0x1298
{
	switch (iParam0)
	{
		case 0:
			return -1036.73f, 6735.72f, -100.52f;
			break;
		
		case 1:
			return -908.86f, 6655.98f, -34.35f;
			break;
		
		case 2:
			return -985.14f, 6697.71f, -41.57f;
			break;
		
		case 3:
			return 1825.73f, -2920.67f, -36.82f;
			break;
		
		case 4:
			return 1772.11f, -2967.72f, -46.81f;
			break;
		
		case 5:
			return 3198.59f, -385.05f, -31.49f;
			break;
		
		case 6:
			return 3170.43f, -302.21f, -25.99f;
			break;
		
		case 7:
			return 3157.44f, -268.54f, -28.07f;
			break;
		
		case 8:
			return -3180.2f, 3010.9f, -37.6f;
			break;
		
		case 9:
			return -3178.3f, 3044.86f, -39.96f;
			break;
		
		case 10:
			return 910.48f, -3471.21f, -17.57f;
			break;
		
		case 11:
			return 1338.76f, -3041.59f, -19.23f;
			break;
		
		case 12:
			return 1153.38f, -2864.51f, -18.96f;
			break;
		
		case 13:
			return 958.56f, -2847.78f, -22.05f;
			break;
		
		case 14:
			return 782.28f, -2872.81f, -9.577f;
			break;
		
		case 15:
			return 581.28f, -2471.5f, -9.44f;
			break;
		
		case 16:
			return 636.56f, -2214.49f, -7.87f;
			break;
		
		case 17:
			return 371.06f, -3226.67f, -19.6f;
			break;
		
		case 18:
			return 689.69f, -3451.07f, -27.85f;
			break;
		
		case 19:
			return 180.17f, -2255.91f, -2.54f;
			break;
		
		case 20:
			return -691.64f, -2836.86f, -15.67f;
			break;
		
		case 21:
			return -3397.5f, 3717.52f, -86.14f;
			break;
		
		case 22:
			return -3357.11f, 3710.79f, -96.14f;
			break;
		
		case 23:
			return -3282.21f, 3682.6f, -82.87f;
			break;
		
		case 24:
			return -3256.66f, 3672.29f, -35.06f;
			break;
		
		case 25:
			return -3142.19f, 3625.95f, -26.31f;
			break;
		
		case 26:
			return 3271.34f, 6420.78f, -50.78f;
			break;
		
		case 27:
			return 3237.83f, 6487.44f, -43.9f;
			break;
		
		case 28:
			return 1772.1f, -2997.12f, -50.44f;
			break;
		
		case 29:
			return 3207f, -415.17f, -32.01f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_24(var uParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x15D4
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!GlobalFunc_849(&(uParam0->f_1), iVar0))
		{
			fVar1 = SYSTEM::VDIST2(Param2, (iParam1[iVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam5 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam5 != -1;
}































void func_55()//Position - 0x244A
{
	float fVar0;
	
	switch (iLocal_410)
	{
		case 0:
			if (func_62())
			{
				if (GlobalFunc_847(uLocal_408))
				{
					func_61();
					VEHICLE::SET_BOAT_ANCHOR(uLocal_408, 0);
					iLocal_410 = 1;
					if (iLocal_385 == 2)
					{
						func_2(3);
					}
				}
			}
			else if (GlobalFunc_847(uLocal_408) && GlobalFunc_847(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					fVar0 = 500f;
				}
				else
				{
					fVar0 = 250f;
				}
				if (GlobalFunc_850(PLAYER::PLAYER_PED_ID(), uLocal_408, 0) > fVar0)
				{
					func_59();
					if (iLocal_385 == 2)
					{
						func_2(3);
					}
				}
			}
			else
			{
				func_61();
				if (iLocal_385 == 2)
				{
					func_2(3);
				}
			}
			break;
		
		case 1:
			if (iLocal_385 == 2)
			{
				func_2(3);
			}
			if (!func_62())
			{
				if (GlobalFunc_847(uLocal_408))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_409))
					{
						uLocal_409 = GlobalFunc_6834(uLocal_408, 0, 0);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_408, 0, 1);
					if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(uLocal_408)))
					{
						if (!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uLocal_408))
						{
							VEHICLE::SET_BOAT_ANCHOR(uLocal_408, 1);
						}
					}
					iLocal_410 = 0;
				}
			}
			break;
	}
}




void func_59()//Position - 0x2638
{
	func_61();
	if (GlobalFunc_847(uLocal_408))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(uLocal_408)))
		{
			VEHICLE::SET_BOAT_ANCHOR(uLocal_408, 0);
		}
		ENTITY::SET_ENTITY_RECORDS_COLLISIONS(uLocal_408, 0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_408))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_408);
		}
	}
}


void func_61()//Position - 0x26D9
{
	if (HUD::DOES_BLIP_EXIST(uLocal_409))
	{
		HUD::REMOVE_BLIP(&uLocal_409);
	}
}

int func_62()//Position - 0x26F2
{
	if (GlobalFunc_847(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_847(uLocal_408))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_408, 0))
			{
				return 1;
			}
		}
		else if (func_63())
		{
			uLocal_408 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_408))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_408, 1, 1);
				ENTITY::SET_ENTITY_RECORDS_COLLISIONS(uLocal_408, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_63()//Position - 0x2758
{
	var uVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("dinghy") || ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("dinghy2"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_64()//Position - 0x27AD
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (func_24(&Local_41, &Local_54, Var0, &iLocal_387))
	{
		Var3 = { func_23(iLocal_387) };
		fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Var0, 0);
		if (fVar6 > 200f)
		{
			func_66();
			if (!iLocal_405)
			{
				iLocal_405 = 1;
			}
			if (func_63())
			{
				if (!GlobalFunc_63(41))
				{
					GlobalFunc_6677("DIVING_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
					GlobalFunc_651(41);
				}
				if (iLocal_387 != iLocal_390)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_389))
					{
						HUD::REMOVE_BLIP(&uLocal_389);
					}
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_389))
				{
					uLocal_389 = HUD::ADD_BLIP_FOR_RADIUS(Var3, 200f);
					HUD::SET_BLIP_ALPHA(uLocal_389, 128);
					HUD::SET_BLIP_COLOUR(uLocal_389, 2);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(uLocal_389, 0);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_389, "B_WRE");
					HUD::SHOW_HEIGHT_ON_BLIP(uLocal_389, 0);
					iLocal_390 = iLocal_387;
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_389))
			{
				HUD::REMOVE_BLIP(&uLocal_389);
			}
		}
		else
		{
			if (func_63())
			{
				if (!GlobalFunc_63(42))
				{
					GlobalFunc_6677("DIVING_HELP2", 1, 0, -1, 10000, 7, 0, 0, 0);
					GlobalFunc_651(42);
				}
			}
			if (GlobalFunc_63(42))
			{
				if (!GlobalFunc_63(43))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_6677("DIVING_HELP3", 1, 2000, -1, 10000, 7, 0, 0, 0);
						GlobalFunc_651(43);
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_389))
			{
				HUD::REMOVE_BLIP(&uLocal_389);
			}
			if (iLocal_387 != iLocal_390)
			{
				func_66();
				iLocal_390 = iLocal_387;
				iLocal_405 = 1;
			}
			if (Local_41.f_1.f_4 < Local_41.f_1.f_3)
			{
				if (iLocal_405)
				{
					fLocal_402 = 0f;
					fLocal_403 = fVar6;
					if (func_63())
					{
						fLocal_403 = GlobalFunc_253(fLocal_403, 20f, 200f);
					}
					else
					{
						fLocal_403 = GlobalFunc_253(fLocal_403, 10f, 200f);
					}
					fLocal_404 = (fLocal_403 * 0.025f);
					iLocal_405 = 0;
					if (func_63())
					{
						AUDIO::PLAY_SOUND_FROM_COORD(uLocal_407, "SINGLE_BLIP_FROM_BOAT", Var3, "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
					else
					{
						AUDIO::PLAY_SOUND_FROM_COORD(uLocal_407, "SCRIPT_TRIGGERED_FROM_PROP", Var0, "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
				}
				else
				{
					fLocal_402 = (fLocal_402 + fLocal_404);
					fLocal_402 = GlobalFunc_253(fLocal_402, 0f, fLocal_403);
					if (!HUD::DOES_BLIP_EXIST(uLocal_391))
					{
						uLocal_391 = HUD::ADD_BLIP_FOR_RADIUS(Var3, fLocal_402);
						HUD::SET_BLIP_ALPHA(uLocal_391, 255);
						HUD::SET_BLIP_COLOUR(uLocal_391, 4);
						HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_391, 1);
						HUD::SET_RADIUS_BLIP_EDGE(uLocal_391, 1);
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_391, 0);
					}
					else
					{
						HUD::SET_BLIP_SCALE(uLocal_391, fLocal_402);
					}
					iVar7 = 0;
					if (func_63())
					{
						iVar7 = 0;
						while (iVar7 <= 3)
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_392[iVar7]))
							{
								uLocal_392[iVar7] = HUD::ADD_BLIP_FOR_RADIUS(Var3, (fLocal_402 + fLocal_397[iVar7]));
								HUD::SET_BLIP_ALPHA(uLocal_392[iVar7], 255);
								HUD::SET_BLIP_COLOUR(uLocal_392[iVar7], 4);
								HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_392[iVar7], 1);
								HUD::SET_RADIUS_BLIP_EDGE(uLocal_392[iVar7], 1);
								HUD::SHOW_HEIGHT_ON_BLIP(uLocal_392[iVar7], 0);
							}
							else
							{
								HUD::SET_BLIP_SCALE(uLocal_392[iVar7], (fLocal_402 + fLocal_397[iVar7]));
							}
							iVar7++;
						}
					}
					else
					{
						iVar7 = 0;
						while (iVar7 <= 3)
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_392[iVar7]))
							{
								HUD::SET_BLIP_SCALE(uLocal_392[iVar7], fLocal_402);
							}
							iVar7++;
						}
					}
					if (fLocal_402 >= fLocal_403)
					{
						iLocal_405 = 1;
					}
				}
			}
			else
			{
				func_66();
			}
		}
	}
}


void func_66()//Position - 0x2B46
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_391))
	{
		HUD::REMOVE_BLIP(&uLocal_391);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_392[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_392[iVar0]));
		}
		iVar0++;
	}
}

void func_67()//Position - 0x2B8A
{
	iLocal_388 = 0;
	if (func_62())
	{
		iLocal_410 = 1;
	}
	else
	{
		iLocal_410 = 0;
	}
	func_71();
	GlobalFunc_851(&Local_41, 5, joaat("prop_sub_chunk_01"), "DIVING_COLLECT");
	GlobalFunc_8393(&Local_41, joaat("num_hidden_packages_4"), 845, 30);
	func_2(1);
	fLocal_397[0] = 0.25f;
	fLocal_397[1] = 0.5f;
	fLocal_397[2] = 0.75f;
	fLocal_397[3] = 1f;
}




void func_71()//Position - 0x2C99
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Local_54[iVar0 /*11*/].f_3 = { func_23(iVar0) };
		Local_54[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_54[0 /*11*/].f_6 = { -16.4f, 78.53f, -146.67f };
	Local_54[1 /*11*/].f_6 = { 0f, 45f, 10f };
	Local_54[2 /*11*/].f_6 = { 0.72f, 65.2f, -50.26f };
	Local_54[3 /*11*/].f_6 = { 0f, 15f, -132.16f };
	Local_54[4 /*11*/].f_6 = { 166.37f, -40f, 168.81f };
	Local_54[5 /*11*/].f_6 = { 90f, 56.2f, 90f };
	Local_54[6 /*11*/].f_6 = { -20f, 0f, 89.95f };
	Local_54[7 /*11*/].f_6 = { 4.08f, 54.9f, -65.35f };
	Local_54[8 /*11*/].f_6 = { 174.15f, -58.2f, -144.66f };
	Local_54[9 /*11*/].f_6 = { -28.22f, 36.11f, -90.22f };
	Local_54[10 /*11*/].f_6 = { -5f, 44f, 65f };
	Local_54[11 /*11*/].f_6 = { 0f, -108f, 45.36f };
	Local_54[12 /*11*/].f_6 = { -10.9f, 43.12f, 131.52f };
	Local_54[13 /*11*/].f_6 = { 12.37f, 49.66f, 126.88f };
	Local_54[14 /*11*/].f_6 = { 4.35f, 10.22f, 27.51f };
	Local_54[15 /*11*/].f_6 = { 0f, 10f, 60.73f };
	Local_54[16 /*11*/].f_6 = { 150.56f, -78.67f, -174.35f };
	Local_54[17 /*11*/].f_6 = { 0f, 50f, 46.41f };
	Local_54[18 /*11*/].f_6 = { 6.26f, 44.65f, 8.88f };
	Local_54[19 /*11*/].f_6 = { 90f, 78.5f, 16.04f };
	Local_54[20 /*11*/].f_6 = { -1.36f, 6.53f, -70.94f };
	Local_54[21 /*11*/].f_6 = { -61.86f, 78.61f, 126.5f };
	Local_54[22 /*11*/].f_6 = { -10f, -80.71f, 69.7f };
	Local_54[23 /*11*/].f_6 = { -76.43f, -70.02f, 29.74f };
	Local_54[24 /*11*/].f_6 = { -28f, -70f, 107.53f };
	Local_54[25 /*11*/].f_6 = { 4.19f, 6.46f, 110.43f };
	Local_54[26 /*11*/].f_6 = { -3.19f, 60.6f, 25f };
	Local_54[27 /*11*/].f_6 = { 0f, -81.68f, -20.16f };
	Local_54[28 /*11*/].f_6 = { 7.39f, 44.52f, 19.65f };
	Local_54[29 /*11*/].f_6 = { 89.74f, 80.95f, 151.74f };
}






void func_77(bool bParam0)//Position - 0x3222
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_389))
	{
		HUD::REMOVE_BLIP(&uLocal_389);
	}
	func_66();
	if (!AUDIO::HAS_SOUND_FINISHED(uLocal_407))
	{
		AUDIO::STOP_SOUND(uLocal_407);
	}
	func_59();
	iVar0 = 0;
	while (iVar0 < Local_54)
	{
		GlobalFunc_846(&(Local_54[iVar0 /*11*/].f_2));
		GlobalFunc_841(&(Local_54[iVar0 /*11*/].f_1));
		Local_54[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		if (GlobalFunc_853(&(Local_41.f_1)) || GlobalFunc_485(110) == 1)
		{
			GlobalFunc_492(27);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_41.f_7);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		iLocal_385 = 0;
	}
}



