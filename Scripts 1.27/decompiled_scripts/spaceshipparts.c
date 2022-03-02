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
	struct<11> Local_54[50];
	int iLocal_605 = 0;
	int iLocal_606 = 0;
	bool bLocal_607 = 0;
	var uLocal_608 = 0;
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
	iLocal_605 = 15;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_54();
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("spaceshipparts")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	GlobalFunc_501(14);
	func_51();
	GlobalFunc_851(&Local_41, 0, joaat("prop_power_cell"), "SSHIP_COLLECT");
	GlobalFunc_8393(&Local_41, joaat("num_hidden_packages_1"), 755, 50);
	while (true)
	{
		SYSTEM::WAIT(0);
		GlobalFunc_852(PLAYER::PLAYER_PED_ID());
		if (func_15(&Local_41, &Local_54) || GlobalFunc_485(107) == 1)
		{
			if (!bLocal_607)
			{
				bLocal_607 = GlobalFunc_7168(367701416, 1, 2, 69, 5000, 10000, -1, 179, -1, 32, 1);
			}
			if (bLocal_607)
			{
				if (!GlobalFunc_8354() == 1)
				{
					GlobalFunc_6677("SSHIP_SWITCH", 1, 0, 20000, 10000, 3, 0, 0, 0);
				}
				func_54();
			}
		}
	}
}















int func_15(var uParam0, int iParam1)//Position - 0x876
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	
	if (!GlobalFunc_39(14) && !CAM::IS_SCREEN_FADED_OUT())
	{
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
					if (uParam0->f_10 == iLocal_605)
					{
						GlobalFunc_5220(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 1, 0, 2);
						if (OBJECT::DOES_PICKUP_EXIST((iParam1[uParam0->f_10 /*11*/])->f_1))
						{
							INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME((iParam1[uParam0->f_10 /*11*/])->f_1, "GtaMloRoomTun5");
						}
					}
					else if ((((uParam0->f_10 == 6 || uParam0->f_10 == 14) || uParam0->f_10 == 21) || uParam0->f_10 == 34) || uParam0->f_10 == 39)
					{
						GlobalFunc_5220(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
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
		if (!Global_68505)
		{
			GlobalFunc_8391(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 0, &iLocal_606, &uLocal_608, "SSHIP_TITLE", "SSHIP_COLLECT");
		}
		if (!bLocal_607)
		{
			if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
			{
				bLocal_607 = GlobalFunc_7168(367701416, 1, 2, 69, 5000, 10000, -1, 179, -1, 32, 1);
			}
		}
		if (!uParam0->f_12 && !uParam0->f_11)
		{
			return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
		}
	}
	return 0;
}




































void func_51()//Position - 0x1B97
{
	int iVar0;
	
	iLocal_606 = 0;
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.SPACESHIP_PARTS_SAVED_STRUCT.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_54[iVar0 /*11*/].f_3 = { func_52(iVar0, 0) };
		Local_54[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_54[0 /*11*/].f_9 = 179.4746f;
	Local_54[1 /*11*/].f_9 = 198f;
	Local_54[2 /*11*/].f_9 = 104f;
	Local_54[3 /*11*/].f_9 = 321.5f;
	Local_54[4 /*11*/].f_9 = 256.25f;
	Local_54[5 /*11*/].f_9 = 286.5f;
	Local_54[6 /*11*/].f_9 = 0f;
	Local_54[6 /*11*/].f_6 = { 0f, 0f, 1f };
	Local_54[7 /*11*/].f_9 = -165.6051f;
	Local_54[8 /*11*/].f_9 = 91.5f;
	Local_54[9 /*11*/].f_9 = 116f;
	Local_54[10 /*11*/].f_9 = 15f;
	Local_54[11 /*11*/].f_9 = 305.5f;
	Local_54[12 /*11*/].f_9 = 0f;
	Local_54[13 /*11*/].f_9 = 95f;
	Local_54[14 /*11*/].f_9 = 40f;
	Local_54[15 /*11*/].f_9 = 40f;
	Local_54[16 /*11*/].f_9 = 40f;
	Local_54[17 /*11*/].f_9 = 40f;
	Local_54[18 /*11*/].f_9 = 40f;
	Local_54[19 /*11*/].f_9 = 40f;
	Local_54[20 /*11*/].f_9 = 40f;
	Local_54[21 /*11*/].f_6 = { 90f, 0f, 57f };
	Local_54[22 /*11*/].f_9 = 40f;
	Local_54[23 /*11*/].f_9 = 40f;
	Local_54[24 /*11*/].f_9 = 40f;
	Local_54[25 /*11*/].f_9 = 40f;
	Local_54[26 /*11*/].f_9 = 40f;
	Local_54[27 /*11*/].f_9 = 40f;
	Local_54[28 /*11*/].f_9 = 40f;
	Local_54[29 /*11*/].f_9 = 40f;
	Local_54[29 /*11*/].f_6 = { -24.35f, 15.74f, 14.31f };
	Local_54[30 /*11*/].f_9 = 40f;
	Local_54[31 /*11*/].f_9 = 40f;
	Local_54[32 /*11*/].f_9 = 40f;
	Local_54[33 /*11*/].f_9 = 40f;
	Local_54[34 /*11*/].f_6 = { 0f, 0f, -15f };
	Local_54[35 /*11*/].f_9 = 40f;
	Local_54[36 /*11*/].f_9 = 40f;
	Local_54[37 /*11*/].f_9 = 40f;
	Local_54[38 /*11*/].f_9 = 40f;
	Local_54[38 /*11*/].f_6 = { 20.18f, -0.87f, 20.46f };
	Local_54[39 /*11*/].f_6 = { 0f, 0f, -4.39f };
	Local_54[40 /*11*/].f_9 = 40f;
	Local_54[41 /*11*/].f_9 = 80f;
	Local_54[42 /*11*/].f_9 = 198f;
	Local_54[43 /*11*/].f_9 = 198f;
	Local_54[44 /*11*/].f_9 = 198f;
	Local_54[45 /*11*/].f_9 = 198f;
	Local_54[46 /*11*/].f_9 = 198f;
	Local_54[47 /*11*/].f_9 = 198f;
	Local_54[48 /*11*/].f_9 = 198f;
	Local_54[49 /*11*/].f_9 = 198f;
}

Vector3 func_52(int iParam0, int iParam1)//Position - 0x1EA4
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495.9f, 12.9448f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 606.8925f, -3250.188f, 5.06951f;
			}
			else
			{
				return 634.5865f, -3232.79f, -16.5774f;
			}
			break;
		
		case 2:
			return 1590.6f, -2810.174f, 3.4494f;
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 327.99f, -2757.61f, 4.99f;
			}
			else
			{
				return 338.4039f, -2762.106f, 42.6543f;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 1134.422f, -2607.024f, 14.77071f;
			}
			else
			{
				return 1133.688f, -2605.073f, 14.9729f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 368.9316f, -2118.533f, 15.40341f;
			}
			else
			{
				return 369.945f, -2116.756f, 16.1688f;
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				return 1741.82f, -1623.85f, 111.41f;
			}
			else
			{
				return 1742.024f, -1618.777f, 111.8313f;
			}
			break;
		
		case 7:
			return 287.7294f, -1444.4f, 45.5095f;
			break;
		
		case 8:
			return 17.5926f, -1213.207f, 28.3678f;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return -910.0172f, -1147.44f, 1.06785f;
			}
			else
			{
				return -900.3597f, -1165.551f, 31.8047f;
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
				return 1237.728f, -1099.15f, 37.52579f;
			}
			else
			{
				return 1231.973f, -1102.308f, 34.4289f;
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 87.69075f, 810.3736f, 210.1258f;
			}
			else
			{
				return 81.2213f, 814.0283f, 213.2917f;
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return -1900.951f, 1389.582f, 218.1509f;
			}
			else
			{
				return -1907.515f, 1388.69f, 217.9728f;
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 467.369f, -730.7552f, 26.36373f;
			}
			else
			{
				return 469.8529f, -730.8f, 26.3985f;
			}
			break;
		
		case 14:
			return 202.1081f, -569.7198f, 128.18f;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 163.0531f, -566.3394f, 21.029f;
			}
			else
			{
				return 159.39f, -563.82f, 21f;
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return -1183.152f, -518.5386f, 38.53018f;
			}
			else
			{
				return -1182.538f, -525.5859f, 39.9114f;
			}
			break;
		
		case 17:
			return -228.0476f, -236.4184f, 49.1361f;
			break;
		
		case 18:
			return -407.7026f, -151.7918f, 63.5505f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -1169.397f, -56.76701f, 44.45705f;
			}
			else
			{
				return -1175.488f, -65.4649f, 44.6563f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 1679.056f, 39.44059f, 160.7736f;
			}
			else
			{
				return 1684.664f, 40.7142f, 153.4074f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return 1964.25f, 553.68f, 160.72f;
			}
			else
			{
				return 1965.58f, 555.99f, 160.79f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 24.21706f, 637.1212f, 206.3897f;
			}
			else
			{
				return 22.4492f, 638.8155f, 189.6085f;
			}
			break;
		
		case 23:
			return 2901.204f, 796.1192f, 3.3556f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return -1531.895f, 870.3203f, 180.6775f;
			}
			else
			{
				return -1529.722f, 871.4257f, 180.6421f;
			}
			break;
		
		case 25:
			return -404.3191f, 1100.889f, 331.535f;
			break;
		
		case 26:
			return -2809.354f, 1449.643f, 99.928f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			else
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			break;
		
		case 28:
			return 815.7574f, 1850.879f, 120.1796f;
			break;
		
		case 29:
			return -1944.24f, 1941.07f, 162.8f;
			break;
		
		case 30:
			if (iParam1 == 1)
			{
				return -1452.23f, 2127.41f, 42.84f;
			}
			else
			{
				return -1436.87f, 2130.22f, 26.78f;
			}
			break;
		
		case 31:
			return 1367.413f, 2180.632f, 96.6914f;
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return 170.1652f, 2217.637f, 89.30811f;
			}
			else
			{
				return 172.1426f, 2220.131f, 89.7842f;
			}
			break;
		
		case 33:
			return 889.3209f, 2870.052f, 55.2834f;
			break;
		
		case 34:
			if (iParam1 == 1)
			{
				return 1980.2f, 2914.79f, 45.48f;
			}
			else
			{
				return 1963.55f, 2922.81f, 57.76f;
			}
			break;
		
		case 35:
			return -390.384f, 2963.26f, 18.2713f;
			break;
		
		case 36:
			return 71.6642f, 3279.368f, 30.3918f;
			break;
		
		case 37:
			return 1924.186f, 3471.256f, 50.3238f;
			break;
		
		case 38:
			return -583.1569f, 3580.375f, 266.2471f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 2514.302f, 3789.519f, 52.077f;
			}
			else
			{
				return 2516.98f, 3789.35f, 53.79f;
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return 1517.613f, 3803.926f, 30.95605f;
			}
			else
			{
				return 1486.047f, 3857.217f, 22.2905f;
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -530.2739f, 4474.358f, 59.45993f;
			}
			else
			{
				return -528.8246f, 4440.644f, 31.7384f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return 3815.055f, 4447.343f, 2.06631f;
			}
			else
			{
				return 3820.813f, 4441.683f, 1.8007f;
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return -1946.95f, 4584.36f, 56.06f;
			}
			else
			{
				return -1943.055f, 4585.194f, 46.6362f;
			}
			break;
		
		case 44:
			return 2437.545f, 4779.959f, 33.5101f;
			break;
		
		case 45:
			return -1441.495f, 5414.888f, 23.3f;
			break;
		
		case 46:
			return 2196.251f, 5599.034f, 52.7129f;
			break;
		
		case 47:
			if (iParam1 == 1)
			{
				return -503.95f, 5673.55f, 51.24f;
			}
			else
			{
				return -503.2193f, 5665.61f, 48.8487f;
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return -378.4192f, 6080.782f, 30.44296f;
			}
			else
			{
				return -381.291f, 6086.949f, 38.6147f;
			}
			break;
		
		case 49:
			return 440.9546f, 6459.642f, 27.7432f;
			break;
	}
	return 0f, 0f, 0f;
}


void func_54()//Position - 0x274A
{
	int iVar0;
	
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.SPACESHIP_PARTS_SAVED_STRUCT.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_54)
	{
		GlobalFunc_846(&(Local_54[iVar0 /*11*/].f_2));
		GlobalFunc_841(&(Local_54[iVar0 /*11*/].f_1));
		iVar0++;
	}
	if (GlobalFunc_853(&(Local_41.f_1)) || GlobalFunc_485(107) == 1)
	{
		GlobalFunc_585(107, 1);
		func_56();
		GlobalFunc_492(14);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_41.f_7);
	SCRIPT::TERMINATE_THIS_THREAD();
}


void func_56()//Position - 0x281A
{
	int iVar0;
	
	iVar0 = GlobalFunc_886(63);
	Global_2408820[iVar0 /*83*/] = 63;
	StringCopy(&(Global_2408820[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}




