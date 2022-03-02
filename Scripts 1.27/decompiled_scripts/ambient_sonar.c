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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
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
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	var uLocal_393 = 0;
	int iLocal_394[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	bLocal_39 = true;
	bLocal_40 = true;
	iLocal_390 = -1;
	iLocal_391 = 5;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_118();
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_sonar")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	GlobalFunc_501(13);
	GlobalFunc_835(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		GlobalFunc_852(PLAYER::PLAYER_PED_ID());
		switch (iLocal_387)
		{
			case 0:
				func_109();
				break;
			
			case 1:
				func_101();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				func_118();
				break;
		}
	}
}

void func_1()//Position - 0xE8
{
	iLocal_388 = 0;
	if (GlobalFunc_847(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (func_66(&Local_41, &Local_54))
			{
				func_28();
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				uLocal_385 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				GlobalFunc_835(1);
				func_13(0);
				if (GlobalFunc_847(PLAYER::PLAYER_PED_ID()))
				{
					if (func_11(&Local_41, &Local_54, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iLocal_390))
					{
						func_8();
					}
				}
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				func_7();
				func_6(1);
			}
			else if (GlobalFunc_847(uLocal_385))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_385, 1)) > 62500f)
				{
					func_5();
				}
				else if (!HUD::DOES_BLIP_EXIST(uLocal_386))
				{
					uLocal_386 = GlobalFunc_6834(uLocal_385, 0, 0);
					HUD::SET_BLIP_SPRITE(uLocal_386, 308);
				}
			}
			else
			{
				func_7();
			}
		}
	}
}




void func_5()//Position - 0x29A
{
	func_7();
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_385))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_385);
	}
}

void func_6(int iParam0)//Position - 0x2B7
{
	iLocal_387 = iParam0;
}

void func_7()//Position - 0x2C4
{
	if (HUD::DOES_BLIP_EXIST(uLocal_386))
	{
		HUD::REMOVE_BLIP(&uLocal_386);
	}
}

void func_8()//Position - 0x2DD
{
	GlobalFunc_883(func_10(iLocal_390), 1, 1);
	iLocal_389 = 1;
}


Vector3 func_10(int iParam0)//Position - 0x342
{
	switch (iParam0)
	{
		case 0:
			return -1435.61f, 5781.12f, -29.87f;
			break;
		
		case 1:
			return -1956.54f, -1125.07f, -37.21f;
			break;
		
		case 2:
			return 2752.88f, -1212.78f, -22.41f;
			break;
		
		case 3:
			return 3188.04f, -1668.19f, -146.88f;
			break;
		
		case 4:
			return 2555.04f, -2372.47f, -112.01f;
			break;
		
		case 5:
			return 2945.9f, 6537.41f, -27.36f;
			break;
		
		case 6:
			return -1266.69f, 6261.75f, -34.17f;
			break;
		
		case 7:
			return 3034.72f, 6550.42f, -35.2f;
			break;
		
		case 8:
			return 1694.53f, 6991.69f, -137.62f;
			break;
		
		case 9:
			return 1233.43f, 7081.15f, -141.72f;
			break;
		
		case 10:
			return -3413.73f, 830.23f, -12.95f;
			break;
		
		case 11:
			return 1422.5f, 6854.67f, -38.2f;
			break;
		
		case 12:
			return -3345.1f, 3547.8f, -59.1f;
			break;
		
		case 13:
			return -3437.93f, 3069.57f, -54.85f;
			break;
		
		case 14:
			return -2909.28f, 4204.32f, -111.62f;
			break;
		
		case 15:
			return -3179.12f, 2151.28f, -31.86f;
			break;
		
		case 16:
			return 4146.09f, 3825.86f, -40.96f;
			break;
		
		case 17:
			return 2716.61f, 6956.91f, -157.17f;
			break;
		
		case 18:
			return 2487.5f, 7001.69f, -143.56f;
			break;
		
		case 19:
			return -3043.23f, -212.16f, -23.48f;
			break;
		
		case 20:
			return -2871.1f, 4268.19f, -152.47f;
			break;
		
		case 21:
			return -777.21f, 6726.71f, -30.89f;
			break;
		
		case 22:
			return -3008.33f, 2877.73f, -27.76f;
			break;
		
		case 23:
			return -1843.12f, -1260.67f, -22.17f;
			break;
		
		case 24:
			return -2591.62f, -470.34f, -30.4f;
			break;
		
		case 25:
			return 3824.99f, 3729.17f, -16.17f;
			break;
		
		case 26:
			return 3885.44f, 3797.19f, -24.26f;
			break;
		
		case 27:
			return 2153.9f, -2826.37f, -50.76f;
			break;
		
		case 28:
			return 1873.5f, -3012.6f, -47f;
			break;
		
		case 29:
			return -2325.06f, -1046.7f, -70.67f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_11(var uParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x67E
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


int func_13(int iParam0)//Position - 0x723
{
	if (func_14(17, 0, 1, 0))
	{
		if (iParam0 == 1)
		{
			MISC::SET_BIT(&Global_2264, 22);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_2264, 22);
		}
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x75A
{
	if (Global_68245)
	{
		if (iParam0 != 17 && iParam0 != 3)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Global_2544648, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_2544648, 14);
				MISC::SET_BIT(&Global_2544648, 16);
			}
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_2544648, 14);
				MISC::SET_BIT(&Global_2544648, 15);
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_2544648, 14);
			MISC::CLEAR_BIT(&Global_2544648, 16);
			MISC::CLEAR_BIT(&Global_2544648, 15);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	GlobalFunc_9035();
	if (Global_14393.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (GlobalFunc_116(0) == 1)
		{
			return 0;
		}
	}
	if (Global_14359 == 1)
	{
		return 0;
	}
	if (Global_14393.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_14390))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14393.f_1 < 4)
			{
				GlobalFunc_885("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_14390 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_14375)
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_5232();
	GlobalFunc_5231();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[iParam0 /*15*/].f_9) == 0)
	{
		Global_2869 = 0;
		Global_14393.f_1 = 7;
		GlobalFunc_885(&(Global_2270[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[iParam0 /*15*/].f_9) == 0)
			{
				Global_14391 = SYSTEM::START_NEW_SCRIPT(&(Global_2270[iParam0 /*15*/].f_5), 3800);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_2270[iParam0 /*15*/].f_9) == 0)
		{
			Global_14391 = SYSTEM::START_NEW_SCRIPT(&(Global_2270[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_2270[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}














void func_28()//Position - 0x1158
{
	GlobalFunc_10929(3, 250000);
	GlobalFunc_7734(299, 0, 0);
	GlobalFunc_8960(20, 1);
	func_29();
	func_6(3);
}

void func_29()//Position - 0x1183
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(65);
	Global_2408820[iVar0 /*83*/] = 65;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}





































int func_66(var uParam0, int iParam1)//Position - 0x2FD0
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	
	PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iVar0 = 0;
	while (iVar0 < iLocal_391)
	{
		bVar4 = GlobalFunc_849(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar4)
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
		else if (!bVar4)
		{
			if (GlobalFunc_8392(uParam0, iParam1, Var1))
			{
				if (func_11(uParam0, iParam1, Var1, &iLocal_390))
				{
					GlobalFunc_10929(3, 23000);
					func_8();
				}
			}
		}
		func_81(uParam0->f_10, bVar4);
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (!Global_68505)
	{
		GlobalFunc_8391(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 3, &iLocal_392, &uLocal_393, "SUBM_TITLE", "SUBM_COLLECT");
	}
	if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
	{
		func_70();
		GlobalFunc_835(0);
		GlobalFunc_6685(0);
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}




void func_70()//Position - 0x323C
{
	MISC::SET_BIT(&Global_2264, 30);
}











void func_81(int iParam0, bool bParam1)//Position - 0x387E
{
	int iVar0;
	
	if (func_83(iParam0) == 0)
	{
		return;
	}
	if (iLocal_394[iParam0] == -1)
	{
		if (!bParam1 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_54[iParam0 /*11*/].f_3) < (100f * 100f))
			{
				if (func_82(&iVar0))
				{
					GRAPHICS::_0xAE51BC858F32BA66(iVar0, Local_54[iParam0 /*11*/].f_3, 8f);
					iLocal_394[iParam0] = iVar0;
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_54[iParam0 /*11*/].f_3) > (105f * 105f))
		{
			if (iLocal_394[iParam0] >= 0 && iLocal_394[iParam0] < 8)
			{
				GRAPHICS::_0x649C97D52332341A(iLocal_394[iParam0]);
				iLocal_394[iParam0] = -1;
			}
		}
	}
}

int func_82(var uParam0)//Position - 0x3962
{
	*uParam0 = 0;
	*uParam0 = 0;
	while (*uParam0 < 8)
	{
		if (!GRAPHICS::_0x2C42340F916C5930(*uParam0))
		{
			return 1;
		}
		*uParam0++;
	}
	*uParam0 = -1;
	return 0;
}

int func_83(int iParam0)//Position - 0x3999
{
	if (iParam0 == 23)
	{
		return 0;
	}
	return 1;
}


















void func_101()//Position - 0x4108
{
	if (GlobalFunc_847(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_835(0);
			GlobalFunc_6685(0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			func_6(2);
		}
		else
		{
			if (!GlobalFunc_63(15))
			{
				GlobalFunc_6677("SUBM_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
				GlobalFunc_651(15);
			}
			if (!GlobalFunc_836())
			{
				GlobalFunc_835(1);
				if (!iLocal_388 && !Local_41.f_1.f_4 >= Local_41.f_1.f_3)
				{
					GlobalFunc_6677("SUBM_TRKHELP", 1, 0, -1, 10000, 7, 0, 0, 0);
					iLocal_388 = 1;
				}
			}
			func_102();
			if (func_66(&Local_41, &Local_54))
			{
				func_28();
			}
		}
	}
}

void func_102()//Position - 0x41B0
{
	iLocal_389++;
	if ((iLocal_389 % 30) == 0 || iLocal_390 == -1)
	{
		if (func_11(&Local_41, &Local_54, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iLocal_390))
		{
			func_8();
		}
	}
}







void func_109()//Position - 0x45A9
{
	iLocal_392 = 0;
	func_113();
	GlobalFunc_851(&Local_41, 3, joaat("prop_rad_waste_barrel_01"), "SUBM_COLLECT");
	GlobalFunc_8393(&Local_41, joaat("num_hidden_packages_3"), 815, 30);
	if (GlobalFunc_847(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			func_6(1);
		}
		else
		{
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			func_6(2);
		}
	}
}




void func_113()//Position - 0x46A7
{
	int iVar0;
	
	Local_54[0 /*11*/].f_3 = { func_10(0) };
	Local_54[0 /*11*/].f_9 = 179.47f;
	Local_54[1 /*11*/].f_3 = { func_10(1) };
	Local_54[1 /*11*/].f_9 = 104f;
	Local_54[2 /*11*/].f_3 = { func_10(2) };
	Local_54[2 /*11*/].f_9 = 321.5f;
	Local_54[3 /*11*/].f_3 = { func_10(3) };
	Local_54[3 /*11*/].f_9 = -29.79f;
	Local_54[4 /*11*/].f_3 = { func_10(4) };
	Local_54[4 /*11*/].f_9 = -165.6f;
	Local_54[5 /*11*/].f_3 = { func_10(5) };
	Local_54[5 /*11*/].f_9 = 116f;
	Local_54[6 /*11*/].f_3 = { func_10(6) };
	Local_54[6 /*11*/].f_9 = -68.65f;
	Local_54[7 /*11*/].f_3 = { func_10(7) };
	Local_54[7 /*11*/].f_9 = 40f;
	Local_54[8 /*11*/].f_3 = { func_10(8) };
	Local_54[8 /*11*/].f_9 = 40f;
	Local_54[9 /*11*/].f_3 = { func_10(9) };
	Local_54[9 /*11*/].f_9 = 40f;
	Local_54[10 /*11*/].f_3 = { func_10(10) };
	Local_54[10 /*11*/].f_9 = 40f;
	Local_54[11 /*11*/].f_3 = { func_10(11) };
	Local_54[11 /*11*/].f_9 = 27.04f;
	Local_54[12 /*11*/].f_3 = { func_10(12) };
	Local_54[12 /*11*/].f_9 = 40f;
	Local_54[13 /*11*/].f_3 = { func_10(13) };
	Local_54[13 /*11*/].f_9 = 40f;
	Local_54[14 /*11*/].f_3 = { func_10(14) };
	Local_54[14 /*11*/].f_9 = 40f;
	Local_54[15 /*11*/].f_3 = { func_10(15) };
	Local_54[15 /*11*/].f_9 = 40f;
	Local_54[16 /*11*/].f_3 = { func_10(16) };
	Local_54[16 /*11*/].f_6 = { 89.94f, 61.93f, 90.94f };
	Local_54[17 /*11*/].f_3 = { func_10(17) };
	Local_54[17 /*11*/].f_9 = 40f;
	Local_54[18 /*11*/].f_3 = { func_10(18) };
	Local_54[18 /*11*/].f_9 = 40f;
	Local_54[19 /*11*/].f_3 = { func_10(19) };
	Local_54[19 /*11*/].f_9 = 40f;
	Local_54[20 /*11*/].f_3 = { func_10(20) };
	Local_54[20 /*11*/].f_9 = 40f;
	Local_54[21 /*11*/].f_3 = { func_10(21) };
	Local_54[21 /*11*/].f_9 = 40f;
	Local_54[22 /*11*/].f_3 = { func_10(22) };
	Local_54[22 /*11*/].f_9 = 40f;
	Local_54[23 /*11*/].f_3 = { func_10(23) };
	Local_54[23 /*11*/].f_9 = 40f;
	Local_54[24 /*11*/].f_3 = { func_10(24) };
	Local_54[24 /*11*/].f_9 = 40f;
	Local_54[25 /*11*/].f_3 = { func_10(25) };
	Local_54[25 /*11*/].f_9 = 198f;
	Local_54[26 /*11*/].f_3 = { func_10(26) };
	Local_54[26 /*11*/].f_9 = 198f;
	Local_54[27 /*11*/].f_3 = { func_10(27) };
	Local_54[27 /*11*/].f_9 = 198f;
	Local_54[28 /*11*/].f_3 = { func_10(28) };
	Local_54[28 /*11*/].f_9 = 198f;
	Local_54[29 /*11*/].f_3 = { func_10(29) };
	Local_54[29 /*11*/].f_9 = -109.43f;
	func_114(&Local_54);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iLocal_394[iVar0] = -1;
		iVar0++;
	}
}

void func_114(int iParam0)//Position - 0x4A2A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		(iParam0[iVar0 /*11*/])->f_10 = 0;
		iVar0++;
	}
}




void func_118()//Position - 0x4AEA
{
	int iVar0;
	
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_5();
	iVar0 = 0;
	while (iVar0 < Local_54)
	{
		GlobalFunc_846(&(Local_54[iVar0 /*11*/].f_2));
		GlobalFunc_841(&(Local_54[iVar0 /*11*/].f_1));
		if (iLocal_394[iVar0] >= 0 && iLocal_394[iVar0] < 8)
		{
			GRAPHICS::_0x649C97D52332341A(iLocal_394[iVar0]);
		}
		iVar0++;
	}
	if (GlobalFunc_853(&(Local_41.f_1)))
	{
		GlobalFunc_492(13);
	}
	func_70();
	GlobalFunc_835(0);
	GlobalFunc_6685(0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_41.f_7);
	SCRIPT::TERMINATE_THIS_THREAD();
}



