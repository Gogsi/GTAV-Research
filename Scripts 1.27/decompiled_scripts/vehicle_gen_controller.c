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
	int iLocal_46 = 0;
	var uLocal_47[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_116[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_185[68];
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	var uLocal_392[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	struct<114> Local_401 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_515 = { 0, 0, 0, 0, 0 } ;
	struct<74> Local_520 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 2;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620[4] = { 0, 0, 0, 0 };
	int iLocal_625 = 0;
	int iLocal_626[1] = { 0 };
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638[2] = { 0, 0 };
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	bool bLocal_647 = 0;
	struct<13> Local_648 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	struct<81> Local_669 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	bool bLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	int iLocal_763[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_832[3] = { 0, 0, 0 };
	int iLocal_836 = 0;
	var uLocal_837[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	bool bLocal_911 = 0;
	int iLocal_912 = 0;
	int iLocal_913 = 0;
	bool bLocal_914 = 0;
	char cLocal_915[16] = "";
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	char cLocal_919[16] = "";
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	int iLocal_923 = 0;
	int iLocal_924 = 0;
	int iLocal_925 = 0;
	int iLocal_926 = 0;
	int iLocal_927 = 0;
	int iLocal_928 = 0;
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	char* sLocal_931 = NULL;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	float fLocal_934 = 0f;
	int iLocal_935 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	iLocal_629 = -1;
	iLocal_630 = -1;
	iLocal_635 = -1;
	iLocal_642 = -1;
	iLocal_836 = -1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	Local_401.f_5 = -1;
	Local_401 = -1;
	Local_401.f_1 = 99999.99f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_87746[iVar0 /*3*/][0] = -1;
		Global_87746[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4250)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[0 /*939*/].f_626[iVar0] = -15;
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[1 /*939*/].f_626[iVar0] = -15;
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[iVar0] = -1f;
			iVar0++;
		}
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = -15;
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4250 = 1;
	}
	if (((!func_318() && !func_317()) && !func_316()) && !func_315())
	{
		func_314(60, 0);
		func_314(61, 0);
	}
	func_313();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_312(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_400)
		{
			iLocal_400 = 1;
			if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
			{
				if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 64)
				{
					if (!Global_68103)
					{
						iLocal_400 = 0;
					}
					else
					{
						func_311();
						func_310();
					}
					Global_68103 = 0;
				}
				else
				{
					func_311();
					func_310();
				}
			}
		}
		SYSTEM::WAIT(0);
		if (MISC::GET_INDEX_OF_CURRENT_LEVEL() != 5)
		{
			iLocal_646 = func_308();
			func_269();
			func_267();
			func_242();
			func_11();
			func_3();
			func_1(&uLocal_906);
		}
	}
}

void func_1(var uParam0)//Position - 0x234
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1320761.f_21)
	{
		iVar1 = func_2(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1320761.f_21 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = VEHICLE::GET_VEHICLE_CLASS_ESTIMATED_MAX_SPEED(iVar0);
			if (Global_1320761[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1320761[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_ACCELERATION(iVar0);
			if (Global_1320761[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1320761[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_AGILITY(iVar0);
			}
			else
			{
				fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_TRACTION(iVar0);
			}
			if (Global_1320761[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1320761[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = VEHICLE::GET_VEHICLE_CLASS_MAX_BRAKING(iVar0);
			if (Global_1320761[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1320761[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

int func_2(int iParam0, int iParam1)//Position - 0x351
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				case 6:
					return 6;
				
				case 7:
					return 7;
				
				case 8:
					return 8;
				
				case 9:
					return 9;
				
				case 10:
					return 10;
				
				case 11:
					return 11;
				
				case 12:
					return 12;
				
				case 13:
					return 13;
				
				case 14:
					return 17;
				
				case 15:
					return 18;
				
				case 16:
					return 19;
				
				case 17:
					return 20;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 14;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 15;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 16;
				
				default:
			}
			break;
	}
	return -1;
}

void func_3()//Position - 0x480
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (HUD::DOES_BLIP_EXIST(Global_67138.f_583))
	{
		bVar0 = false;
		if (iLocal_646 != Global_67138.f_582)
		{
			bVar0 = true;
		}
		else if (((((func_10(0) || func_10(3)) || func_10(2)) || func_10(4)) || func_10(13)) || func_10(14))
		{
			bVar0 = true;
		}
		else if (Global_67138.f_590)
		{
			if (!func_9(Global_67138.f_584, HUD::GET_BLIP_COORDS(Global_67138.f_583), 1056964608) || func_5(Global_67138.f_582, func_6(Global_67138.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_67138.f_591)
		{
			if (!func_9(Global_67138.f_587, HUD::GET_BLIP_COORDS(Global_67138.f_583), 1056964608) || func_5(Global_67138.f_582, func_6(Global_67138.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!ENTITY::DOES_ENTITY_EXIST(Global_67138.f_581) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_581, 0)) || (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_67138.f_581, 0)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_581) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_581, 0))
			{
				Global_67138.f_587 = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_581))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_581, 0))
			{
				Global_67138.f_587 = { ENTITY::GET_ENTITY_COORDS(Global_67138.f_581, 1) };
			}
			else
			{
				Global_67138.f_587 = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			HUD::REMOVE_BLIP(&(Global_67138.f_583));
			Global_67138.f_590 = 0;
			Global_67138.f_591 = 0;
			Global_67138.f_581 = 0;
		}
	}
	else
	{
		Global_67138.f_590 = 0;
		Global_67138.f_591 = 0;
		Global_67138.f_581 = 0;
	}
	if ((((((!HUD::DOES_BLIP_EXIST(Global_67138.f_583) && !func_10(0)) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(13)) && !func_10(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_87708[iVar2] != 145 && Global_87718[iVar2] != 0) && ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar2])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_87698[iVar2], 0)) && !HUD::DOES_BLIP_EXIST(HUD::GET_BLIP_FROM_ENTITY(Global_87698[iVar2]))) && Global_87708[iVar2] == iLocal_646) && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_87698[iVar2])))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_87698[iVar2], 0))
				{
					Global_67138.f_581 = Global_87698[iVar2];
					Global_67138.f_582 = iLocal_646;
					Global_67138.f_590 = 0;
					Global_67138.f_583 = HUD::ADD_BLIP_FOR_ENTITY(Global_67138.f_581);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!HUD::DOES_BLIP_EXIST(Global_67138.f_583) && !func_4(Global_67138.f_584, 0f, 0f, 0f))
			{
				Global_67138.f_581 = 0;
				Global_67138.f_582 = iLocal_646;
				Global_67138.f_590 = 1;
				Global_67138.f_583 = HUD::ADD_BLIP_FOR_COORD(Global_67138.f_584);
			}
			if (!HUD::DOES_BLIP_EXIST(Global_67138.f_583) && !func_4(Global_67138.f_587, 0f, 0f, 0f))
			{
				Global_67138.f_581 = 0;
				Global_67138.f_582 = iLocal_646;
				Global_67138.f_591 = 1;
				Global_67138.f_583 = HUD::ADD_BLIP_FOR_COORD(Global_67138.f_587);
			}
		}
		else
		{
			Global_67138.f_590 = 0;
			Global_67138.f_591 = 0;
		}
		if (HUD::DOES_BLIP_EXIST(Global_67138.f_583))
		{
			HUD::SET_BLIP_SPRITE(Global_67138.f_583, 225);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_67138.f_583, "PVEHICLE");
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_67138.f_583, false);
			HUD::SET_BLIP_PRIORITY(Global_67138.f_583, 3);
			if (iLocal_646 == 0)
			{
				iVar3 = 42;
			}
			else if (iLocal_646 == 1)
			{
				iVar3 = 43;
			}
			else if (iLocal_646 == 2)
			{
				iVar3 = 44;
			}
			HUD::SET_BLIP_COLOUR(Global_67138.f_583, iVar3);
		}
	}
}

bool func_4(struct<3> Param0, struct<3> Param3)//Position - 0x904
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_5(int iParam0, int iParam1)//Position - 0x92D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_87698[iVar1], 0))
		{
			if (Global_87708[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == ENTITY::GET_ENTITY_MODEL(Global_87698[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_6(int iParam0, int iParam1)//Position - 0x99D
{
	struct<58> Var0;
	
	if (func_8(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_7(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_7(int iParam0, var uParam1, int iParam2)//Position - 0x9DF
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	Var1.f_64 = 1;
	Var1.f_60 = 255;
	Var1.f_61 = 255;
	Var1.f_62 = 255;
	Var1.f_73 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[128] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_11[0] = 1;
					StringCopy(&(Var1.f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "BETTY 32", 16);
					if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[119])
					{
						Var1.f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					Var1 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "FC1988", 16);
					Var1.f_11[0] = 1;
					Var1.f_11[1] = 1;
					Var1.f_11[2] = 1;
					Var1.f_11[3] = 1;
					Var1.f_11[4] = 1;
					Var1.f_11[5] = 1;
					Var1.f_11[6] = 1;
					Var1.f_11[7] = 1;
					Var1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

bool func_8(int iParam0)//Position - 0xC52
{
	return iParam0 < 3;
}

int func_9(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0xC5E
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_10(int iParam0)//Position - 0xCAA
{
	return Global_34913 == iParam0;
}

void func_11()//Position - 0xCB8
{
	func_186();
	func_134();
	func_47();
	func_12();
}

void func_12()//Position - 0xCD0
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (((((Local_401.f_29.f_80 && !Local_401.f_29.f_69) && Local_401 != -1) && func_46(Local_401, 0)) && func_46(Local_401, 5)) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael1")) == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_401.f_113))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
						if (func_43(iVar1))
						{
							Local_401.f_113 = iVar0;
						}
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_401.f_113, 0) && func_43(ENTITY::GET_ENTITY_MODEL(Local_401.f_113)))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_401.f_113, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_401.f_113, Local_401.f_29.f_48, Local_401.f_29.f_51, Local_401.f_29.f_54, 0, 1, 0))
					{
						if ((!func_42(Local_401.f_113) && !func_41(Local_401.f_113)) && Local_401.f_113 != Global_67138.f_484[Local_401])
						{
							func_13(Local_401, Local_401.f_113, 1);
						}
						Local_401.f_113 = 0;
					}
				}
			}
			else
			{
				Local_401.f_113 = 0;
			}
		}
		else
		{
			Local_401.f_113 = 0;
		}
	}
}

void func_13(int iParam0, int iParam1, int iParam2)//Position - 0xE34
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_40(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67138.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_68045 != -1 && Global_68045 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = func_29();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_28(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_14(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}

void func_14(int iParam0, int iParam1)//Position - 0xF51
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_19(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4800[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_42)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 = iParam1;
	Global_68043 = iParam0;
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 1;
	func_15(iParam0, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742));
}

void func_15(int iParam0, var uParam1)//Position - 0x1152
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_18(uParam1);
		uParam1->f_42 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_43 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_45 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_46 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_53), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_53), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_44 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 2:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_53), 23);
						MISC::SET_BIT(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_53), 23);
						MISC::CLEAR_BIT(&(uParam1->f_53), 22);
						break;
					
					case 4:
						MISC::SET_BIT(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_53), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 12);
		}
		func_17(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_53), func_16(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_53), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_53), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_53), 27);
		}
	}
}

int func_16(int iParam0)//Position - 0x13FC
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_17(int iParam0, var uParam1, var uParam2)//Position - 0x14AC
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_18(var uParam0)//Position - 0x1586
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_19(int iParam0)//Position - 0x1636
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_26(iParam0, 0, 0)) || func_26(iParam0, 1, 0)) || func_26(iParam0, 2, 0)) || func_25(iParam0) != 145) || func_24(iParam0)) || func_42(iParam0)) || func_41(iParam0)) || func_23(iParam0)) || !func_20(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_42(iParam0))
		{
		}
		if (func_42(iParam0))
		{
		}
		if (func_26(iParam0, 0, 0))
		{
		}
		if (func_26(iParam0, 1, 0))
		{
		}
		if (func_26(iParam0, 2, 0))
		{
		}
		if (func_25(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_20(int iParam0)//Position - 0x1713
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_21(iParam0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_21(int iParam0)//Position - 0x18C3
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_22())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_318() && !func_317()) && !func_316()) && !func_315()) && !func_22())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_316())
		{
			return 0;
		}
	}
	return 1;
}

int func_22()//Position - 0x1A92
{
	var uVar0;
	
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_23(int iParam0)//Position - 0x1B15
{
	int iVar0;
	var uVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	uVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_21(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0)//Position - 0x1B59
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[24]))
	{
		if (iParam0 == Global_67138.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67138.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x1C41
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				return Global_87708[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_26(int iParam0, int iParam1, bool bParam2)//Position - 0x1CA4
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_27(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_SAVE_DATA.RESPAWN_LOCATION_DATA[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_27(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x1D15
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_28(int iParam0)//Position - 0x1DE6
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_67138.f_139[iParam0];
}

int func_29()//Position - 0x1E02
{
	var uVar0;
	
	func_39(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_38(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_37(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_32(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_31(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_30(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_30(var uParam0, int iParam1)//Position - 0x1E48
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_31(var uParam0, int iParam1)//Position - 0x1ECE
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_32(var uParam0, int iParam1)//Position - 0x1F01
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_36(*uParam0);
	iVar1 = func_34(*uParam0);
	if (iParam1 < 1 || iParam1 > func_33(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_33(int iParam0, int iParam1)//Position - 0x1F52
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_34(int iParam0)//Position - 0x1FF4
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_35(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_35(bool bParam0, int iParam1, int iParam2)//Position - 0x2019
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_36(int iParam0)//Position - 0x2030
{
	return iParam0 & 15;
}

void func_37(var uParam0, int iParam1)//Position - 0x203D
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_38(var uParam0, int iParam1)//Position - 0x2077
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_39(var uParam0, int iParam1)//Position - 0x20B2
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_40(var uParam0, int iParam1)//Position - 0x20EE
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_6(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_6(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_6(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_6(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_6(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_6(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_6(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_6(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_6(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_22())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_22())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[uParam0->f_14 /*54*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_4(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[uParam0->f_14 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[uParam0->f_14 /*3*/] };
		}
		if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[uParam0->f_14];
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_4(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[1 /*4*/][uParam0->f_12];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_4(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_41(int iParam0)//Position - 0x37E2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87728[iVar0]))
		{
			if (Global_87728[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x381D
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_87698[iVar0], 0))
			{
				if (Global_87698[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_87698[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_43(int iParam0)//Position - 0x3899
{
	switch (Local_401.f_6)
	{
		case 0:
			return func_45(iParam0);
			break;
		
		case 1:
			if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_44(iParam0);
			break;
		
		case 2:
			return (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x392D
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	if (iParam0 == joaat("rhino"))
	{
		return 0;
	}
	if (((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)//Position - 0x39A1
{
	if (iParam0 == joaat("jet"))
	{
		return 0;
	}
	if ((((!VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

bool func_46(int iParam0, int iParam1)//Position - 0x39FA
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT[iParam0], iParam1);
}

void func_47()//Position - 0x3A1D
{
	struct<54> Var0;
	struct<54> Var54;
	bool bVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	struct<4> Var114;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	bool bVar125;
	int iVar126;
	bool bVar127;
	bool bVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	struct<2> Var133;
	int iVar137;
	bool bVar138;
	int iVar139;
	bool bVar140;
	var uVar141;
	
	Var0.f_9 = 25;
	Var0.f_35 = 2;
	Var54.f_9 = 25;
	Var54.f_35 = 2;
	bVar108 = false;
	iVar109 = 0;
	if (iLocal_628 > 0 && iLocal_628 != 99)
	{
		if (((((((((((((Local_401 == -1 || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_401.f_29.f_7, Local_401.f_29.f_10, Local_401.f_29.f_13, 0, 1, 0)) || ((ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[Local_401]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[Local_401], 0)) && (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_67138.f_484[Local_401]) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_67138.f_484[Local_401], 1)))) || ((ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[Local_401]) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ((ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) - 1f) > 0.15f && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Global_67138.f_484[Local_401])))) || func_10(0)) || func_10(3)) || func_10(2)) || func_10(4)) || func_10(14)) || func_133(0) != bLocal_914) || bLocal_750) || func_132(-1082130432))
		{
			iLocal_628 = 99;
		}
	}
	switch (iLocal_628)
	{
		case 0:
			if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !Global_67058) && !bLocal_750) && !CAM::IS_SCREEN_FADED_OUT())
			{
				if ((((((((((Local_401.f_29.f_80 && Local_401.f_2 == 0) && (Global_67138.f_592[0] != -1 || func_131() != 0)) && Local_401 != -1) && !iLocal_912) && !func_10(0)) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(14)) && !func_132(-1082130432))
				{
					if (iLocal_630 != -1)
					{
					}
					else if (func_46(Local_401, 0) && func_46(Local_401, 5))
					{
						if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_401.f_29.f_7, Local_401.f_29.f_10, Local_401.f_29.f_13, 0, 1, 0) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
						{
							if ((!ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[Local_401]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[Local_401], 0)) || (!PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_67138.f_484[Local_401]) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_67138.f_484[Local_401], 1)))
							{
								iVar112 = func_131();
								iVar113 = 0;
								while (iVar113 < iVar112)
								{
									if (func_43(func_127(iVar113)))
									{
										iVar111++;
									}
									iVar113++;
								}
								iVar110 = 0;
								while (iVar110 < Global_67138.f_592)
								{
									if (Global_67138.f_592[iVar110] != -1)
									{
										if ((func_126(Global_67138.f_592[iVar110], iLocal_646) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_626[Global_67138.f_592[iVar110]] == -15) && (Global_67138.f_592[iVar110] != 200 || !Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bMarshallUnlocked))
										{
											iVar111++;
										}
									}
									iVar110++;
								}
								if (iVar111 > 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										iLocal_752 = 1;
										if (Local_401.f_6 == 3)
										{
											func_125(&iLocal_629, 3, "WEB_VEH_TRIG2", 0, 0);
										}
										else
										{
											func_125(&iLocal_629, 3, "WEB_VEH_TRIG", 0, 0);
										}
										bLocal_914 = func_133(0);
										iLocal_628++;
									}
								}
								else if (!iLocal_752)
								{
									if (Local_401.f_6 == 0)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_124("HANGAR_NO"))
										{
											func_123("HANGAR_NO", -1);
											StringCopy(&cLocal_915, "HANGAR_NO", 16);
										}
										bVar108 = true;
									}
									else if (Local_401.f_6 == 1)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_124("MARINA_NO"))
										{
											func_123("MARINA_NO", -1);
											StringCopy(&cLocal_915, "MARINA_NO", 16);
										}
										bVar108 = true;
									}
									else if (Local_401.f_6 == 2)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_124("HELIPAD_NO"))
										{
											func_123("HELIPAD_NO", -1);
											StringCopy(&cLocal_915, "HELIPAD_NO", 16);
										}
										bVar108 = true;
									}
									else if (Local_401.f_6 == 3)
									{
										StringCopy(&Var114, "CAR_GAR_NO", 16);
										if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
										{
											StringConCat(&Var114, "_1", 16);
										}
										else if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
										{
											StringConCat(&Var114, "_2", 16);
										}
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_124(&Var114))
										{
											func_123(&Var114, -1);
											cLocal_915 = { Var114 };
										}
										bVar108 = true;
									}
								}
							}
						}
						else
						{
							iLocal_752 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_121(0, -1))
			{
				if (iLocal_630 != -1)
				{
					iLocal_628 = 0;
					return;
				}
				if (func_120(iLocal_629, 1))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					}
					else
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
						{
							AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
						}
					}
					func_119();
					iLocal_631 = 0;
					iLocal_632 = 0;
					iLocal_633 = 0;
					iLocal_619 = -1;
					iLocal_628++;
					return;
				}
			}
			break;
		
		case 2:
			if (!iLocal_631 || iLocal_632)
			{
				func_118(0);
				func_117(1, 4, 0, 0, 0);
				func_116(1, 2, 1, 1, 1);
				func_115("WEB_VEH_TITLE");
				iVar118 = 0;
				while (iVar118 < iLocal_620)
				{
					iLocal_620[iVar118] = 0;
					iVar118++;
				}
				iVar119 = -1;
				iVar120 = 0;
				func_40(&(Local_401.f_8), Local_401);
				iVar122 = 0;
				iVar123 = func_131();
				iVar121 = 0;
				while (iVar121 < iVar123)
				{
					if (func_43(func_127(iVar121)))
					{
						if (iVar119 == -1)
						{
							iVar119 = iVar122;
						}
						if (Local_401.f_8.f_4 == func_127(iVar121))
						{
							iLocal_619 = iVar122;
							iVar120 = 1;
						}
						iVar122++;
					}
					iVar121++;
				}
				iVar121 = 0;
				while (iVar121 < Global_67138.f_592)
				{
					if (Global_67138.f_592[iVar121] != -1)
					{
						if ((func_126(Global_67138.f_592[iVar121], iLocal_646) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_626[Global_67138.f_592[iVar121]] == -15) && (Global_67138.f_592[iVar121] != 200 || !Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bMarshallUnlocked))
						{
							func_109(Global_67138.f_592[iVar121], &Var0, 0, iLocal_646);
							if (iVar119 == -1)
							{
								iVar119 = iVar122;
							}
							if (Local_401.f_8.f_4 == Var0.f_42)
							{
								iLocal_619 = iVar122;
								iVar120 = 1;
							}
							iVar122++;
						}
					}
					iVar121++;
				}
				if (iLocal_619 == -1)
				{
					iLocal_619 = iVar119;
				}
				iVar122 = 0;
				iVar123 = func_131();
				iVar121 = 0;
				while (iVar121 < iVar123)
				{
					if (func_43(func_127(iVar121)))
					{
						MISC::SET_BIT(&(iLocal_620[(iVar122 / 32)]), (iVar122 % 32));
						func_106(iVar122, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_127(iVar121)), 0, 1, 0, 0);
						if ((iLocal_619 == iVar122 && iVar120) && Local_401.f_6 != 3)
						{
							func_105(iVar122, 4, 0);
						}
						else
						{
							func_105(iVar122, 0, 0);
						}
						iVar122++;
					}
					iVar121++;
				}
				iVar121 = 0;
				while (iVar121 < Global_67138.f_592)
				{
					if (Global_67138.f_592[iVar121] != -1)
					{
						if ((func_126(Global_67138.f_592[iVar121], iLocal_646) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_626[Global_67138.f_592[iVar121]] == -15) && (Global_67138.f_592[iVar121] != 200 || !Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bMarshallUnlocked))
						{
							MISC::SET_BIT(&(iLocal_620[(iVar122 / 32)]), (iVar122 % 32));
							func_109(Global_67138.f_592[iVar121], &Var0, 0, iLocal_646);
							func_106(iVar122, func_103(Global_67138.f_592[iVar121]), 0, 1, 0, 0);
							if (iLocal_619 == iVar122 && iVar120)
							{
								func_105(iVar122, 4, 0);
							}
							else
							{
								func_105(iVar122, 0, 0);
							}
							iVar122++;
						}
					}
					iVar121++;
				}
				func_102(iLocal_619, 1, 1);
				iLocal_634 = 1;
				iLocal_632 = 0;
				iLocal_631 = 1;
			}
			else
			{
				iVar109 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
						PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
						func_99(0, 0, 0, 1);
						func_98(0, -1);
						if (func_97())
						{
							if (Global_2543381 != iLocal_619)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_619 = Global_2543381;
								func_102(iLocal_619, 1, 1);
								iLocal_634 = 1;
							}
							else
							{
								iVar109 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
				{
					iLocal_634 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar124 = (iLocal_619 - 1);
					while (iVar124 >= 0)
					{
						if (MISC::IS_BIT_SET(iLocal_620[(iVar124 / 32)], (iVar124 % 32)))
						{
							iLocal_619 = iVar124;
							bVar125 = true;
							iVar124 = 0;
						}
						iVar124 = (iVar124 + -1);
					}
					if (!bVar125)
					{
						iVar124 = (iLocal_620 * 32 - 1);
						while (iVar124 >= iLocal_619 + 1)
						{
							if (MISC::IS_BIT_SET(iLocal_620[(iVar124 / 32)], (iVar124 % 32)))
							{
								iLocal_619 = iVar124;
								bVar125 = true;
								iVar124 = 0;
							}
							iVar124 = (iVar124 + -1);
						}
					}
					if (bVar125)
					{
						func_102(iLocal_619, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
				{
					iLocal_634 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar126 = iLocal_619 + 1;
					while (iVar126 <= (iLocal_620 * 32 - 1))
					{
						if (MISC::IS_BIT_SET(iLocal_620[(iVar126 / 32)], (iVar126 % 32)))
						{
							iLocal_619 = iVar126;
							bVar127 = true;
							iVar126 = iLocal_620 * 32 + 1;
						}
						iVar126++;
					}
					if (!bVar127)
					{
						iVar126 = 0;
						while (iVar126 <= (iLocal_619 - 1))
						{
							if (MISC::IS_BIT_SET(iLocal_620[(iVar126 / 32)], (iVar126 % 32)))
							{
								iLocal_619 = iVar126;
								bVar127 = true;
								iVar126 = iLocal_620 * 32 + 1;
							}
							iVar126++;
						}
					}
					if (bVar127)
					{
						func_102(iLocal_619, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar109 == 1)
				{
					bVar128 = false;
					iVar109 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar130 = 0;
					iVar131 = func_131();
					iVar129 = 0;
					while (iVar129 < iVar131)
					{
						if (func_43(func_127(iVar129)))
						{
							if (iLocal_619 == iVar130 && (((((Local_401.f_8.f_4 != func_127(iVar129) || !ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[Local_401])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[Local_401], 0)) || Local_401 == 21) || Local_401 == 22) || Local_401 == 23))
							{
								bVar128 = true;
								if ((((!iLocal_633 && Local_401.f_8.f_4 != func_127(iVar129)) || (!iLocal_633 && Local_401 == 21)) || (!iLocal_633 && Local_401 == 22)) || (!iLocal_633 && Local_401 == 23))
								{
									func_96("VEH_SELECT_CNFA", 0, 0);
									func_95(-1);
									func_94(201, "ITEM_YES", -1);
									func_94(202, "ITEM_NO", -1);
									iLocal_633 = 1;
									iVar129 = func_131() + 1;
								}
								else if (Local_401.f_6 == 3)
								{
									if (func_93(func_127(iVar129)))
									{
										iLocal_913 = func_127(iVar129);
										iLocal_631 = 0;
										iLocal_632 = 0;
										iLocal_625 = 0;
										iLocal_628++;
									}
									else
									{
										iLocal_912 = 1;
										iLocal_913 = func_127(iVar129);
										iLocal_628 = 99;
									}
								}
								else if (Local_401.f_6 == 0 && func_93(func_127(iVar129)))
								{
									iLocal_913 = func_127(iVar129);
									iLocal_631 = 0;
									iLocal_632 = 0;
									iLocal_625 = 0;
									iLocal_628++;
								}
								else
								{
									if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[Local_401]))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_67138.f_484[Local_401], 0, 1);
										VEHICLE::DELETE_VEHICLE(&(Global_67138.f_484[Local_401]));
									}
									Var54.f_42 = func_127(iVar129);
									MISC::SET_BIT(&(Var54.f_53), 14);
									func_90(Local_401, Var54, 0f, 0f, 0f, -1f, 145);
									func_89(Local_401);
									func_40(&(Local_401.f_8), Local_401);
									iVar129 = func_131() + 1;
									iLocal_632 = 1;
								}
							}
							iVar130++;
						}
						iVar129++;
					}
					if (!bVar128)
					{
						iVar129 = 0;
						while (iVar129 < Global_67138.f_592)
						{
							if (Global_67138.f_592[iVar129] != -1)
							{
								if ((func_126(Global_67138.f_592[iVar129], iLocal_646) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_626[Global_67138.f_592[iVar129]] == -15) && (Global_67138.f_592[iVar129] != 200 || !Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bMarshallUnlocked))
								{
									func_109(Global_67138.f_592[iVar129], &Var0, 0, iLocal_646);
									if (iLocal_619 == iVar130 && ((Local_401.f_8.f_4 != Var0.f_42 || !ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[Local_401])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[Local_401], 0)))
									{
										bVar128 = true;
										if (!iLocal_633)
										{
											if (Local_401.f_6 == 3)
											{
												func_96("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_96("VEH_SELECT_CNFA", 0, 0);
											}
											func_95(-1);
											func_94(201, "ITEM_YES", -1);
											func_94(202, "ITEM_NO", -1);
											iLocal_633 = 1;
											iVar129 = Global_67138.f_592 + 1;
										}
										else if (Var0.f_42 == joaat("marshall"))
										{
											iLocal_628 = 3;
											iLocal_632 = 1;
											iVar129 = Global_67138.f_592 + 1;
										}
										else
										{
											if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[Local_401]))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_67138.f_484[Local_401], 0, 1);
												VEHICLE::DELETE_VEHICLE(&(Global_67138.f_484[Local_401]));
											}
											func_109(Global_67138.f_592[iVar129], &Var0, 0, iLocal_646);
											MISC::SET_BIT(&(Var0.f_53), 14);
											if (VEHICLE::IS_THIS_MODEL_A_PLANE(Var0.f_42))
											{
												MISC::SET_BIT(&(Var0.f_53), 22);
											}
											func_90(Local_401, Var0, 0f, 0f, 0f, -1f, 145);
											func_89(Local_401);
											func_40(&(Local_401.f_8), Local_401);
											iVar129 = Global_67138.f_592 + 1;
											iLocal_632 = 1;
										}
									}
									iVar130++;
								}
							}
							iVar129++;
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (iLocal_633)
					{
						iLocal_634 = 1;
						iLocal_633 = 0;
					}
					else
					{
						iLocal_628 = 99;
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_634)
			{
				func_96("", 0, 0);
				func_95(-1);
				func_94(201, "ITEM_SELECT", -1);
				func_94(202, "ITEM_EXIT", -1);
				iLocal_633 = 0;
				iLocal_634 = 0;
			}
			func_53(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 3:
			if (!iLocal_631 || iLocal_632)
			{
				func_118(0);
				func_117(1, 0, 0, 0, 0);
				func_116(1, 1, 1, 1, 1);
				iVar132 = 0;
				while (iVar132 < iLocal_626)
				{
					iLocal_626[iVar132] = 0;
					iVar132++;
				}
				func_115("WEB_VEH_TITLE2");
				iVar132 = 0;
				while (iVar132 < 25)
				{
					StringCopy(&Var133, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var133, iVar132, 16);
					func_106(iVar132, &Var133, 0, 1, 0, 0);
					MISC::SET_BIT(&(iLocal_626[(iVar132 / 32)]), (iVar132 % 32));
					iVar132++;
				}
				if (Local_648.f_12 == 0)
				{
					iLocal_625 = Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_M[200];
				}
				else if (Local_648.f_12 == 1)
				{
					iLocal_625 = Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_F[200];
				}
				else
				{
					iLocal_625 = Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_T[200];
				}
				func_102(iLocal_625, 1, 1);
				iLocal_634 = 1;
				iLocal_632 = 0;
				iLocal_631 = 1;
			}
			else
			{
				iVar109 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
						func_99(0, 0, 0, 1);
						func_98(0, -1);
						if (func_97())
						{
							if (Global_2543381 != iLocal_625)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_625 = Global_2543381;
								func_102(iLocal_625, 1, 1);
								iLocal_634 = 1;
							}
							else
							{
								iVar109 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
				{
					iLocal_634 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar137 = (iLocal_625 - 1);
					while (iVar137 >= 0)
					{
						if (MISC::IS_BIT_SET(iLocal_626[(iVar137 / 32)], (iVar137 % 32)))
						{
							iLocal_625 = iVar137;
							bVar138 = true;
							iVar137 = 0;
						}
						iVar137 = (iVar137 + -1);
					}
					if (!bVar138)
					{
						iVar137 = 31;
						while (iVar137 >= iLocal_625 + 1)
						{
							if (MISC::IS_BIT_SET(iLocal_626[(iVar137 / 32)], (iVar137 % 32)))
							{
								iLocal_625 = iVar137;
								bVar138 = true;
								iVar137 = iLocal_625;
							}
							iVar137 = (iVar137 + -1);
						}
					}
					if (bVar138)
					{
						func_102(iLocal_625, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
				{
					iLocal_634 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar139 = iLocal_625 + 1;
					while (iVar139 <= 31)
					{
						if (MISC::IS_BIT_SET(iLocal_626[(iVar139 / 32)], (iVar139 % 32)))
						{
							iLocal_625 = iVar139;
							bVar140 = true;
							iVar139 = 31;
						}
						iVar139++;
					}
					if (!bVar140)
					{
						iVar139 = 0;
						while (iVar139 <= (iLocal_625 - 1))
						{
							if (MISC::IS_BIT_SET(iLocal_626[(iVar139 / 32)], (iVar139 % 32)))
							{
								iLocal_625 = iVar139;
								bVar140 = true;
								iVar139 = iLocal_625;
							}
							iVar139++;
						}
					}
					if (bVar140)
					{
						func_102(iLocal_625, 1, 1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar109 == 1)
				{
					iVar109 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[Local_401]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_67138.f_484[Local_401], 0, 1);
						VEHICLE::DELETE_VEHICLE(&(Global_67138.f_484[Local_401]));
					}
					uVar141 = iLocal_625 + 1;
					if (iLocal_646 == 0)
					{
						Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_M[200] = uVar141;
					}
					else if (iLocal_646 == 1)
					{
						Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_F[200] = uVar141;
					}
					else if (iLocal_646 == 2)
					{
						Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_T[200] = uVar141;
					}
					func_109(200, &Var0, 0, iLocal_646);
					MISC::SET_BIT(&(Var0.f_53), 14);
					if (VEHICLE::IS_THIS_MODEL_A_PLANE(Var0.f_42))
					{
						MISC::SET_BIT(&(Var0.f_53), 22);
					}
					func_90(Local_401, Var0, 0f, 0f, 0f, -1f, 145);
					func_89(Local_401);
					func_40(&(Local_401.f_8), Local_401);
					iLocal_632 = 1;
					iLocal_628 = 2;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iLocal_631 = 0;
					iLocal_632 = 0;
					iLocal_628 = (iLocal_628 - 1);
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_634)
			{
				func_96("", 0, 0);
				func_95(-1);
				func_94(201, "ITEM_SELECT", -1);
				func_94(202, "ITEM_EXIT", -1);
				iLocal_633 = 0;
				iLocal_634 = 0;
			}
			func_53(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (!AUDIO::IS_PLAYER_VEH_RADIO_ENABLE())
					{
						AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
					}
				}
			}
			func_50(1, -1);
			iLocal_628 = 0;
			func_48(&iLocal_629);
			iLocal_629 = -1;
			break;
	}
	if (!bVar108 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_915))
		{
			if ((((func_124("HANGAR_NO") || func_124("MARINA_NO")) || func_124("HELIPAD_NO")) || func_124("CAR_GAR_NO_1")) || func_124("CAR_GAR_NO_2"))
			{
				HUD::CLEAR_HELP(1);
			}
			StringCopy(&cLocal_915, "", 16);
		}
	}
}

void func_48(int iParam0)//Position - 0x4F67
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_49(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_49(int iParam0)//Position - 0x4FBE
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_50(bool bParam0, int iParam1)//Position - 0x4FF9
{
	int iVar0;
	
	if (!func_52(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17236.f_7207)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_17236.f_7207 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_17236.f_4886[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_17236.f_4886[iVar0] = 0;
	}
	if (Global_17236.f_4879[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_17236.f_4879[iVar0] = 0;
	}
	if (bParam0)
	{
		func_51(&(Global_17236.f_4918[iVar0 /*10*/]));
		Global_17236.f_4979[iVar0] = 0;
	}
	else
	{
		Global_17236.f_4979[iVar0] = 0;
	}
}

void func_51(var uParam0)//Position - 0x5097
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_52(var uParam0, bool bParam1, int iParam2)//Position - 0x50C0
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17236.f_4979[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17236.f_4979[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17236.f_4979[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_53(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x515D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_52(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_86(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17236)
	{
		if (func_84(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17236 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_17236.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar56 = Global_17234;
	}
	else
	{
		fVar56 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17235;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar57, &iVar58);
		fVar60 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_83())
		{
			iVar57 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) * fVar60));
		}
		fVar61 = (SYSTEM::TO_FLOAT(iVar57) / SYSTEM::TO_FLOAT(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (func_83())
		{
			fVar59 = 1f;
		}
		iVar57 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar57) / fVar59));
		iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) / fVar59));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17236.f_4986)
		{
			if (MISC::GET_HASH_KEY(&(Global_17236.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_17234;
			}
			else
			{
				if (Global_17236)
				{
					GRAPHICS::DRAW_SPRITE(func_82(29), func_80(29, 1), (Global_17233 + (fParam5 * 0.5f)), (Global_17234 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17236.f_7177)
				{
					iVar1 = Global_17236.f_7173;
					iVar2 = Global_17236.f_7174;
					iVar3 = Global_17236.f_7175;
					iVar4 = Global_17236.f_7176;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_79(Global_17233, (Global_17234 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_17236.f_1)) != 0)
				{
					func_78();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17236.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17236.f_68)
					{
						if (Global_17236.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17236.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_14[iVar16], Global_17236.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17236.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_17233 + 0.00390625f), ((Global_17234 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17236.f_4989 > Global_17236.f_4499)
				{
					if (Global_17236.f_4992 != 0)
					{
						func_78();
						func_76((((Global_17233 + fParam5) - 0.00390625f) - func_77("CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991)), ((Global_17234 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991);
					}
				}
			}
			iVar6 = Global_17236.f_4993;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17236.f_7187)
			{
				iVar1 = Global_17236.f_7183;
				iVar2 = Global_17236.f_7184;
				iVar3 = Global_17236.f_7185;
				iVar4 = Global_17236.f_7186;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17236.f_4499 && iVar6 <= Global_17236.f_4492)
			{
				if (iVar6 >= 0)
				{
					if (Global_17236.f_4753[iVar6])
					{
						if (Global_17236.f_4627[iVar6] && iVar6 != Global_17236.f_4993)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar54 = Global_17236.f_5000[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 = (fVar49 + fVar54);
					iVar9++;
					if (Global_17236.f_4492 <= 1)
					{
						Global_17236.f_4492++;
					}
					iVar52 = 1;
				}
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17236.f_4989 > Global_17236.f_4499)
			{
				if (Global_17236.f_7192)
				{
					iVar1 = Global_17236.f_7188;
					iVar2 = Global_17236.f_7189;
					iVar3 = Global_17236.f_7190;
					iVar4 = Global_17236.f_7191;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_79(Global_17233, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var37.x = (Var37.x * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17236.f_7205)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), (Var37.x / IntToFloat(iVar57)), (Var37.f_1 / IntToFloat(iVar58)), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_17236.f_3969)) != 0 && Global_17236.f_4043 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_17236.f_4045 != 0)
				{
					func_84(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_75(fVar41);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar41, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_79(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_75(fVar41);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17236.f_4045 != 0)
				{
					func_84(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					func_74(Global_17236.f_4045, 1, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_82(Global_17236.f_4045), func_80(Global_17236.f_4045, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17236.f_4043 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_17236.f_4044) > Global_17236.f_4043)
					{
						StringCopy(&(Global_17236.f_3969), "", 16);
						Global_17236.f_4043 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_2543305.f_21)) != 0 && Global_2543305.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_2543305.f_67 != 0)
				{
					func_84(Global_2543305.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_75(fVar41);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_2543305.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2543305.f_61)
				{
					if (Global_2543305.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_2543305.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2543305.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_2543305.f_34[iVar16], Global_2543305.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2543305.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar41, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_79(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_75(fVar41);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_2543305.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2543305.f_61)
				{
					if (Global_2543305.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_2543305.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2543305.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_2543305.f_34[iVar16], Global_2543305.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2543305.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2543305.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2543305.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2543305.f_67 != 0)
				{
					func_84(Global_2543305.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_74(Global_2543305.f_67, 1, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_82(Global_2543305.f_67), func_80(Global_2543305.f_67, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2543305.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_2543305.f_66) > Global_2543305.f_65)
					{
						StringCopy(&(Global_2543305.f_21), "", 16);
						Global_2543305.f_65 = -1;
					}
				}
			}
			func_66(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17236.f_4986)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar63 = Global_17236.f_4492;
			if (Global_17236.f_4987)
			{
				iVar63 = (Global_17236.f_4990 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17236.f_5000[iVar6] != 0f)
				{
					fVar54 = Global_17236.f_5000[iVar6];
				}
				if (Global_17236.f_4987)
				{
					iVar6 = Global_17236.f_6833[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17236.f_4993 && iVar9 < Global_17236.f_4499)
				{
					bVar32 = true;
					if (Global_17236.f_4994 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17236.f_4627[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17236.f_5131[iVar6] = fVar34;
				fVar33 = (Global_17233 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17236.f_4994 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17236.f_7199)
					{
						HUD::GET_HUD_COLOUR(Global_17236.f_7198, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_17233 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17236.f_5129 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_64(bVar31, 1, 0, 0, 0, 0);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("DFLT_MNU_OPT");
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17236.f_4500)
					{
						if (MISC::IS_BIT_SET(Global_17236.f_4366[iVar6], iVar8) || Global_17236.f_4333[iVar8] == 5)
						{
							if (Global_17236.f_4987)
							{
								iVar19 = Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar20 = Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar21 = Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar22 = Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar23 = Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)];
							}
							else
							{
								Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar19;
								Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar20;
								Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar21;
								Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar22;
								Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17236.f_5260[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17236.f_5260[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17236.f_4339[iVar8] != -1f)
							{
								fVar33 = ((Global_17233 + 0.0046875f) + Global_17236.f_4339[iVar8]);
							}
							if ((iVar8 < 4 && Global_17236.f_4339[iVar8 + 1] != -1f) && fVar33 < Global_17236.f_4339[iVar8 + 1])
							{
								fVar45 = (Global_17236.f_4339[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17233 + Global_17235) - 0.0046875f) - fVar33);
							}
							if ((Global_17236.f_4352[iVar8] && Global_17236.f_5126) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17236.f_4333[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_64(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, iVar70, bVar50);
												HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_17236.f_73[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3340[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
												{
													if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												fVar42 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_84(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17236.f_3843[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
											Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_64(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, bVar50);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_63(bVar31);
											}
											HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17236.f_73[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3340[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17236.f_3843[(iVar22 + iVar28)] == 2)
												{
													if (func_84(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_84(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_74(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_4360[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_82(Global_17236.f_3843[(iVar22 + iVar28)]), func_80(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_82(Global_17236.f_3843[(iVar22 + iVar28)]), func_80(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_17236.f_4360[iVar8] == 2)
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17236.f_3843[(iVar22 + iVar14)] != 2)
												{
													if (func_84(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_84(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_74(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_3843[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_82(Global_17236.f_3843[(iVar22 + iVar14)]), func_80(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (Global_17233 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17236.f_4360[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_82(Global_17236.f_3843[(iVar22 + iVar14)]), func_80(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_82(Global_17236.f_3843[(iVar22 + iVar14)]), func_80(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											func_64(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_63(bVar31);
											}
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3340[iVar20]);
											fVar42 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_64(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										func_62((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3340[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											func_64(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_63(bVar31);
											}
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
											fVar42 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_84(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_74(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_64(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										func_61((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_84(Global_17236.f_3843[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17236.f_4987)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17236.f_4360[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
												Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
												fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
											}
											if (bVar51)
											{
												if (func_84(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17236.f_4360[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_74(26, 1, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(func_82(26), func_80(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_84(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_84(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_74(27, 1, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(func_82(27), func_80(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_84(Global_17236.f_3843[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_74(Global_17236.f_3843[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_82(Global_17236.f_3843[iVar22]), func_80(Global_17236.f_3843[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_60(Global_17236.f_3843[iVar22])), (fVar36 * func_60(Global_17236.f_3843[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17236.f_4333[iVar8] == 5)
							{
								if (Global_17236.f_4345[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								if (Global_17236.f_4352[iVar8])
								{
									if (func_84(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17236.f_6833[iVar9] = iVar6;
						Global_17236.f_4995 = iVar6;
						iVar9++;
						if (Global_17236.f_4627[iVar6])
						{
							iVar13++;
						}
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17236.f_5000[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17236.f_4986)
					{
						Global_17236.f_4753[iVar6] = 1;
						if (Global_17236.f_4501[iVar6])
						{
							if (bVar31)
							{
								Global_17236.f_4992 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17236.f_4992 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17236.f_4986)
			{
				Global_17236.f_4988 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17236.f_4991 = iVar11;
				Global_17236.f_4989 = iVar10;
				Global_17236.f_4986 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17236.f_4987)
	{
		Global_17236.f_4990 = iVar9;
		Global_17236.f_4987 = 1;
	}
	Global_17236.f_5128 = fVar49;
	Global_17236.f_5130 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_17236.f_5128);
	if (!Global_17236.f_7172)
	{
		func_55();
	}
	Global_17236.f_7172 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_54(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_54(int iParam0)//Position - 0x7A6D
{
	Global_1328872.f_756 = iParam0;
}

void func_55()//Position - 0x7A7E
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_59(0))
		{
			func_56(0);
		}
		MISC::SET_BIT(&Global_2264, 2);
	}
}

void func_56(int iParam0)//Position - 0x7AA6
{
	if (Global_14551)
	{
		func_58(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2264, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 30);
	}
	if (!func_57())
	{
		Global_14393.f_1 = 3;
	}
}

int func_57()//Position - 0x7B16
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_58(bool bParam0, bool bParam1)//Position - 0x7B3D
{
	if (bParam0)
	{
		if (func_59(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14330);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14321);
		}
	}
}

int func_59(int iParam0)//Position - 0x7BB1
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

float func_60(int iParam0)//Position - 0x7C0B
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_61(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)//Position - 0x7C74
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_62(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x7C93
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_63(bool bParam0)//Position - 0x7CB1
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_17236.f_7200[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_17236.f_7200[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_64(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x7CF7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_65(Global_17236.f_5260[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_65(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x7E8E
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x8119
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_52(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_86(bParam4, bParam8))
	{
		return;
	}
	if (func_72())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_69(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_17236.f_4046 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (Global_17236.f_4303[iVar1] != 332)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_17236.f_4303[iVar1], 1), 64);
				}
				else if (Global_17236.f_4316[iVar1] != 31)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_17236.f_4316[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17236.f_4047 = 0;
		}
		if (!Global_17236.f_4047)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_17236.f_4358 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (MISC::GET_HASH_KEY(&(Global_17236.f_4241[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_68(&(Global_17236.f_4048[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_17236.f_4241[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_68(&(Global_17236.f_4048[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17236.f_4290[iVar1] == -1)
					{
						func_67(&(Global_17236.f_4241[iVar1 /*4*/]));
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17236.f_4241[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_17236.f_4303[iVar1] != 332 && MISC::IS_BIT_SET(Global_17236.f_4329, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_17236.f_4303[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(332);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_2543305.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_17236.f_4046);
				func_68(&Global_2543305);
				if (Global_2543305.f_20 == -1)
				{
					func_67(&(Global_2543305.f_16));
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_2543305.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17236.f_4359)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_17236.f_4047 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17236.f_4046)
		{
			if (Global_17236.f_4290[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17236.f_4241[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_2543305.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_2543305.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17236.f_7207)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_17236.f_7207 = 1;
			}
		}
		else if (Global_17236.f_7207)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_17236.f_7207 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_17236.f_4332)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_17236.f_4918[iVar0 /*10*/], Global_17236.f_4330, Global_17236.f_4331, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_17236.f_4918[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_67(char[4] cParam0)//Position - 0x85F4
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(cParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_68(var uParam0)//Position - 0x8606
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

bool func_69(int iParam0, int iParam1)//Position - 0x8614
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_70(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_70(int iParam0, bool bParam1)//Position - 0x865F
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_71();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_71()//Position - 0x86A0
{
	return Global_1312737;
}

int func_72()//Position - 0x86AC
{
	struct<3> Var0;
	
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	if (func_73())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_14338 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_73()//Position - 0x871A
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_74(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8734
{
	var uVar0;
	
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_75(float fParam0)//Position - 0x87E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_17233 + Global_17235) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_76(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x8847
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_77(char* sParam0, int iParam1, int iParam2)//Position - 0x886A
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_78();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_78()//Position - 0x88AC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17236.f_7182)
	{
		iVar0 = Global_17236.f_7178;
		iVar1 = Global_17236.f_7179;
		iVar2 = Global_17236.f_7180;
		iVar3 = Global_17236.f_7181;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_17233 + 0.0046875f), ((Global_17233 + Global_17235) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_79(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x8936
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_80(int iParam0, bool bParam1)//Position - 0x8965
{
	char* sVar0[2];
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17236.f_6048[iParam0 /*16*/])))
	{
		return func_81(&(Global_17236.f_6048[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_81(var uParam0)//Position - 0x8D45
{
	return uParam0;
}

char* func_82(int iParam0)//Position - 0x8D4F
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17236.f_5263[iParam0 /*16*/])))
	{
		return func_81(&(Global_17236.f_5263[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_83()//Position - 0x8D7E
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x8DB0
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_82(iParam0);
	sVar1 = func_80(iParam0, bParam1);
	if (MISC::GET_HASH_KEY(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_83())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_83())
			{
				fVar4 = 1f;
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		Var7 = { GRAPHICS::GET_TEXTURE_RESOLUTION(uVar0, sVar1) };
		Var7.x = (Var7.x * (func_85(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_85(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17235)
			{
				*fParam4 = (*fParam4 * (Global_17235 / *fParam3));
				*fParam3 = Global_17235;
			}
		}
		return 1;
	}
	return 0;
}

float func_85(int iParam0)//Position - 0x8F17
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_86(bool bParam0, bool bParam1)//Position - 0x8FB0
{
	if (Global_2422140.f_1310.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_88(8, -1) && func_87() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_68505) || Global_17236.f_7206) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_90014.f_1318)
	{
		return 0;
	}
	return 1;
}

int func_87()//Position - 0x904D
{
	return Global_1315832;
}

bool func_88(int iParam0, int iParam1)//Position - 0x9059
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1327593.f_949, iParam0);
}

void func_89(int iParam0)//Position - 0x9094
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_67138[iParam0] = 0;
	Global_67138.f_69[iParam0] = 0;
}

void func_90(int iParam0, struct<54> Param1, struct<3> Param55, float fParam58, int iParam59)//Position - 0x90B9
{
	if (func_40(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 10))
		{
			func_92(iParam0);
			func_91(Param1, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[Global_67138.f_555[0 /*21*/].f_14 /*54*/]));
			if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 11))
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { Param55 };
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[Global_67138.f_555[0 /*21*/].f_14] = fParam58;
			}
			else
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[Global_67138.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Global_67138.f_555[0 /*21*/].f_14] = iParam59 + 1;
			func_314(iParam0, 1);
		}
	}
}

void func_91(struct<54> Param0, var uParam54)//Position - 0x91BB
{
	uParam54->f_42 = Param0.f_42;
	*uParam54 = Param0;
	uParam54->f_1 = { Param0.f_1 };
	uParam54->f_5 = Param0.f_5;
	uParam54->f_6 = Param0.f_6;
	uParam54->f_7 = Param0.f_7;
	uParam54->f_8 = Param0.f_8;
	uParam54->f_9 = { Param0.f_9 };
	uParam54->f_35 = { Param0.f_35 };
	uParam54->f_38 = Param0.f_38;
	uParam54->f_39 = Param0.f_39;
	uParam54->f_40 = Param0.f_40;
	uParam54->f_41 = Param0.f_41;
	uParam54->f_53 = Param0.f_53;
	uParam54->f_43 = Param0.f_43;
	uParam54->f_45 = Param0.f_45;
	uParam54->f_44 = Param0.f_44;
	uParam54->f_47 = Param0.f_47;
	uParam54->f_48 = Param0.f_48;
	uParam54->f_49 = Param0.f_49;
	uParam54->f_50 = Param0.f_50;
	uParam54->f_51 = Param0.f_51;
	uParam54->f_52 = Param0.f_52;
}

void func_92(int iParam0)//Position - 0x9286
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_40(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_67138.f_139[iParam0], 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_67138.f_139[iParam0]));
			Global_67138.f_139[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 13))
		{
			func_314(iParam0, 0);
		}
	}
}

int func_93(int iParam0)//Position - 0x9300
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 1;
			break;
	}
	return 0;
}

void func_94(int iParam0, char* sParam1, int iParam2)//Position - 0x931D
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_17236.f_4046 >= 12)
	{
		StringCopy(&Global_2543305, sVar0, 64);
		StringCopy(&(Global_2543305.f_16), sParam1, 16);
		Global_2543305.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_17236.f_4329), Global_17236.f_4046);
	StringCopy(&(Global_17236.f_4048[Global_17236.f_4046 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17236.f_4241[Global_17236.f_4046 /*4*/]), sParam1, 16);
	Global_17236.f_4290[Global_17236.f_4046] = iParam2;
	Global_17236.f_4303[Global_17236.f_4046] = iParam0;
	Global_17236.f_4316[Global_17236.f_4046] = 31;
	Global_17236.f_4046++;
}

void func_95(int iParam0)//Position - 0x93CC
{
	int iVar0;
	int iVar1;
	
	Global_17236.f_4046 = 0;
	Global_17236.f_4047 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17236.f_4241[iVar0 /*4*/]), "", 16);
		Global_17236.f_4290[iVar0] = -1;
		Global_17236.f_4303[iVar0] = 332;
		Global_17236.f_4316[iVar0] = 31;
		iVar0++;
	}
	Global_17236.f_4329 = 0;
	StringCopy(&(Global_2543305.f_16), "", 16);
	Global_2543305.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_52(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17236.f_4918[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_96(char* sParam0, int iParam1, int iParam2)//Position - 0x9474
{
	int iVar0;
	
	StringCopy(&(Global_17236.f_3969), sParam0, 16);
	Global_17236.f_4039 = 0;
	Global_17236.f_4040 = 0;
	Global_17236.f_4041 = 0;
	Global_17236.f_4042 = 0;
	Global_17236.f_4043 = iParam1;
	Global_17236.f_4044 = MISC::GET_GAME_TIMER();
	Global_17236.f_4045 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_3973[iVar0] = 0;
		iVar0++;
	}
}

int func_97()//Position - 0x94D9
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_2543381 > -1)
		{
			if (PAD::IS_CONTROL_JUST_RELEASED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_98(int iParam0, int iParam1)//Position - 0x9500
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	if (Global_2543381 == -6)
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2543381 = -1;
			return 0;
		}
	}
	if (((Global_2543381 > -1 || Global_2543381 == -3) || Global_2543381 == -2) || HUD::_0x3D9ACB1EB139E702())
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_2543381 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(4);
			Global_2543381 = -6;
			return 1;
		}
		else
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_MOUSE_CURSOR_SPRITE(1);
	return 0;
}

void func_99(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x95DB
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		Global_2543381 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_17233;
	fVar2 = (fVar0 + Global_17235);
	fVar3 = Global_17236.f_4988;
	fVar1 = (Global_17236.f_4988 - (IntToFloat(Global_17236.f_4990) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17236.f_4990 < 1)
	{
		fVar1 = (Global_17236.f_4988 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_101();
	if (Global_2543381 == -6)
	{
		return;
	}
	Global_2543381 = -1;
	fVar7 = Global_2543375;
	fVar8 = Global_2543376;
	if (Global_17236.f_4991 > Global_17236.f_4990)
	{
		if (((Global_2543375 >= fVar0 && Global_2543375 <= fVar2) && Global_2543376 >= fVar3) && Global_2543376 < (fVar3 + fVar6))
		{
			Global_2543381 = -2;
			if (bParam3)
			{
				func_100(0);
			}
			return;
		}
		if (((Global_2543375 >= fVar0 && Global_2543375 <= fVar2) && Global_2543376 >= (fVar3 + fVar6)) && Global_2543376 < (fVar3 + 0.034722f))
		{
			Global_2543381 = -3;
			if (bParam3)
			{
				func_100(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_17236.f_4991 == -1)
		{
			Global_2543381 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17236.f_4990);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_79(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17235, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_2543381 = Global_17236.f_6833[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2543381 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2543381 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2543381 = -4;
		return;
	}
	Global_2543381 = -1;
}

void func_100(bool bParam0)//Position - 0x9887
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17233;
	fVar1 = Global_17236.f_4988;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_2543381 == -2)
	{
		func_79(fVar0, fVar1, Global_17235, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2543381 == -3)
	{
		func_79(fVar0, (fVar1 + fVar2), Global_17235, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_101()//Position - 0x9910
{
	Global_2543377 = Global_2543375;
	Global_2543378 = Global_2543376;
	Global_2543375 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_2543376 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_2543379 = (Global_2543375 - Global_2543377);
	Global_2543380 = (Global_2543376 - Global_2543378);
}

void func_102(int iParam0, bool bParam1, int iParam2)//Position - 0x9958
{
	int iVar0;
	int iVar1;
	
	Global_17236.f_4994 = iParam0;
	Global_17236.f_5126 = iParam2;
	if (Global_17236.f_4994 < Global_17236.f_4993)
	{
		Global_17236.f_4993 = Global_17236.f_4994;
	}
	else if ((Global_17236.f_4987 && Global_17236.f_4994 > Global_17236.f_4995) || (!Global_17236.f_4987 && Global_17236.f_4994 >= (Global_17236.f_4993 + Global_17236.f_4499)))
	{
		iVar0 = Global_17236.f_4993;
		while (iVar0 <= Global_17236.f_4994)
		{
			if (iVar0 >= 0 && iVar0 < 124)
			{
				if (Global_17236.f_4366[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17236.f_4499 && Global_17236.f_4993 < 125)
		{
			Global_17236.f_4993++;
			iVar1 = 0;
			iVar0 = Global_17236.f_4993;
			while (iVar0 <= Global_17236.f_4994)
			{
				if (iVar0 >= 0 && iVar0 < 124)
				{
					if (Global_17236.f_4366[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17236.f_4986 = 0;
	Global_17236.f_4987 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17236.f_3969), "", 16);
		StringCopy(&(Global_2543305.f_21), "", 16);
	}
}

char* func_103(int iParam0)//Position - 0x9AA8
{
	if (iParam0 == -1)
	{
		return "";
	}
	if (func_104(iParam0) == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "ZTYPE";
		
		case 1:
			return "STINGER";
		
		case 2:
			return "JB700";
		
		case 3:
			return "CHEETAH";
		
		case 4:
			return "ENTITYXF";
		
		case 5:
			return "ADDER";
		
		case 6:
			return "MONROE";
		
		case 7:
			return "COGCABRI";
		
		case 9:
			return "DODO";
		
		case 12:
			return "CUBAN800";
		
		case 13:
			return "DUSTER";
		
		case 14:
			return "LUXOR";
		
		case 10:
			return "SHAMAL";
		
		case 11:
			return "STUNT";
		
		case 113:
			return "VESTRA";
		
		case 15:
			return "FROGGER";
		
		case 16:
			return "MAVERICK";
		
		case 17:
			return "RHINO";
		
		case 18:
			return "TITAN";
		
		case 19:
			return "CARGOBOB";
		
		case 20:
			return "BUZZARD";
		
		case 21:
			return "CRUSADER";
		
		case 22:
			return "BARRACKS";
		
		case 23:
			return "MARINA";
		
		case 24:
			return "MARQUIS";
		
		case 25:
			return "JETMAX";
		
		case 26:
			return "SPEEDER";
		
		case 27:
			return "SQUALO";
		
		case 28:
			return "SUNTRAP";
		
		case 29:
			return "TROPIC";
		
		case 30:
			return "SEASHARK";
		
		case 32:
			return "SUNTRAP";
		
		case 31:
			return "SUBMERSIBLE";
		
		case 33:
			return "BMX";
		
		case 34:
			return "SCORCHER";
		
		case 35:
			return "TRIBIKE";
		
		case 36:
			return "TRIBIKE2";
		
		case 37:
			return "TRIBIKE3";
		
		case 38:
			return "CRUISER";
		
		case 39:
			return "SCHWARZE";
		
		case 40:
			return "ZION";
		
		case 41:
			return "GAUNTLET";
		
		case 42:
			return "VIGERO";
		
		case 43:
			return "ISSI2";
		
		case 44:
			return "INFERNUS";
		
		case 45:
			return "SURANO";
		
		case 46:
			return "VACCA";
		
		case 47:
			return "NINEF";
		
		case 48:
			return "COMET2";
		
		case 49:
			return "BANSHEE";
		
		case 50:
			return "FELTZER";
		
		case 51:
			return "BFINJECT";
		
		case 52:
			return "SANDKING";
		
		case 53:
			return "FUGITIVE";
		
		case 54:
			return "DILETTAN";
		
		case 55:
			return "SUPERD";
		
		case 56:
			return "EXEMPLAR";
		
		case 57:
			return "BALLER2";
		
		case 58:
			return "CAVCADE";
		
		case 59:
			return "ROCOTO";
		
		case 60:
			return "FELON";
		
		case 61:
			return "ORACLE";
		
		case 62:
			return "BATI";
		
		case 63:
			return "AKUMA";
		
		case 64:
			return "RUFFIAN";
		
		case 65:
			return "VADER";
		
		case 66:
			return "BLAZER";
		
		case 67:
			return "PCJ";
		
		case 68:
			return "SANCHEZ";
		
		case 69:
			return "FAGGIO";
		
		default:
	}
	switch (iParam0)
	{
		case 70:
			return "BULLET";
		
		case 71:
			return "CARBONIZ";
		
		case 72:
			return "COQUETTE";
		
		case 73:
			return "NINEF2";
		
		case 74:
			return "RAPIDGT";
		
		case 75:
			return "RAPIDGT";
		
		case 76:
			return "STINGERG";
		
		case 77:
			return "VOLTIC";
		
		case 78:
			return "ANNIHL";
		
		case joaat("mpsv_lp0_31"):
			return "MAMMATUS";
		
		case 80:
			return "VELUM";
		
		case 81:
			return "DUMP";
		
		case 82:
			return "AIRBUS";
		
		case 83:
			return "BUS";
		
		case 84:
			return "COACH";
		
		case 85:
			return "JOURNEY";
		
		case 86:
			return "MULE";
		
		case 87:
			return "RENTBUS";
		
		case 88:
			return "STRETCH";
		
		case 89:
			return "BISON";
		
		case 90:
			return "DOUBLE";
		
		case 91:
			return "FELON2";
		
		case 92:
			return "HEXER";
		
		case 93:
			return "ZION2";
		
		case 94:
			return "BATI2";
		
		case 95:
			return "ELEGY2";
		
		case 96:
			return "KHAMEL";
		
		case 97:
			return "HOTKNIFE";
		
		case 98:
			return "CARBON";
		
		case 99:
			return "BIFTA";
		
		case 100:
			return "KALAHARI";
		
		case 101:
			return "PARADISE";
		
		case 102:
			return "SPEEDER";
		
		case 103:
			return "BODHI2";
		
		case 104:
			return "DUNE";
		
		case 105:
			return "REBEL";
		
		case 106:
			return "SADLER";
		
		case 107:
			return "SANCHEZ2";
		
		case 108:
			return "SANDKIN2";
		
		case 109:
			return "ROOSEVELT";
		
		case 111:
			return "JESTER";
		
		case 114:
			return "MASSACRO";
		
		case 112:
			return "TURISMOR";
		
		case 115:
			return "ZENTORNO";
		
		case 116:
			return "HUNTLEY";
		
		case 110:
			return "ALPHA";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 121:
			return "THRUST";
		
		case 128:
			return "ASEA";
		
		case 129:
			return "ASTROPE";
		
		case 130:
			return "BOBCATXL";
		
		case 131:
			return "CAVCADE";
		
		case 132:
			return "GRANGER";
		
		case 133:
			return "INGOT";
		
		case 134:
			return "INTRUDER";
		
		case 135:
			return "MINIVAN";
		
		case 136:
			return "PREMIER";
		
		case 137:
			return "RADI";
		
		case 138:
			return "RANCHERX";
		
		case 139:
			return "RLOADER";
		
		case 140:
			return "STANIER";
		
		case 141:
			return "STRATUM";
		
		case 142:
			return "WASHINGT";
		
		case 122:
			return "DOMINATO";
		
		case 123:
			return "F620";
		
		case 124:
			return "FUSILADE";
		
		case 125:
			return "PENUMBRA";
		
		case 126:
			return "SENTINEL";
		
		case 127:
			return "SENTINEL2";
		
		case 143:
			return "BLADE";
		
		case 144:
			return "WARRENER";
		
		case 145:
			return "GLENDALE";
		
		case 146:
			return "RHAPSODY";
		
		case 147:
			return "PANTO";
		
		case 148:
			return "DUBSTA3";
		
		case 149:
			return "PIGALLE";
		
		case 150:
			return "PICADOR";
		
		case 151:
			return "REGINA";
		
		case 152:
			return "SURFER";
		
		case 153:
			return "YOUGA";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 156:
			return "PRIMO";
		
		case 157:
			return "BUFFALO";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 161:
			return "SOVEREIGN";
		
		case 160:
			return "MONSTER";
		
		case 162:
			return "MILJET";
		
		case 163:
			return "BESRA";
		
		case 164:
			return "SWIFT";
		
		case 165:
			return "COQUETTE2";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 167:
			return "INNOVATION";
		
		case 168:
			return "HAKUCHOU";
		
		case 169:
			return "FURORE";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 187:
			return "VALKYRIE";
		
		case 177:
			return "HYDRA";
		
		case 185:
			return "SAVAGE";
		
		case 174:
			return "ENDURO";
		
		case 171:
			return "BOXVILLE4";
		
		case 172:
			return "CASCO";
		
		case 173:
			return "DINGHY3";
		
		case 175:
			return "GBURRITO2";
		
		case 176:
			return "GUARDIAN";
		
		case 178:
			return "INSURGENT";
		
		case 179:
			return "INSURGENT2";
		
		case 180:
			return "KURUMA";
		
		case 181:
			return "KURUMA2";
		
		case 182:
			return "LECTRO";
		
		case 183:
			return "MULE3";
		
		case 184:
			return "PBUS";
		
		case 186:
			return "TECHNICAL";
		
		case 188:
			return "VELUM2";
		
		case 189:
			return "GRESLEY";
		
		case 190:
			return "JACKAL";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 193:
			return "NEMESIS";
		
		case 194:
			return "ORACLE1";
		
		case 195:
			return "RUMPO";
		
		case 196:
			return "SCHAFTER2";
		
		case 197:
			return "SEMINOLE";
		
		case 198:
			return "SURGE";
		
		case 199:
			return "DODO";
		
		case 200:
			return "MARSHALL";
		
		case 201:
			return "SUBMERS2";
		
		case 202:
			return "BLISTA2";
		
		case 203:
			return "STALION";
		
		case 204:
			return "DUKES";
		
		case 205:
			return "DUKES2";
		
		case 206:
			return "STALION2";
		
		case 207:
			return "DOMINATOR2";
		
		case 208:
			return "GAUNTLET2";
		
		case 209:
			return "BUFFALO3";
		
		case 210:
			return "SLAMVAN";
		
		case 211:
			return "RLOADER2";
		
		case 212:
			return "JESTER2";
		
		case 213:
			return "MASSACRO2";
		
		case 214:
			return "FELTZER3";
		
		case 215:
			return "LUXOR2";
		
		case 216:
			return "OSIRIS";
		
		case 217:
			return "SWIFT2";
		
		case 218:
			return "VIRGO";
		
		case 219:
			return "WINDSOR";
		
		default:
	}
	return "";
}

int func_104(int iParam0)//Position - 0xA5FC
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		
		case 1:
			return joaat("stinger");
		
		case 2:
			return joaat("jb700");
		
		case 3:
			return joaat("cheetah");
		
		case 4:
			return joaat("entityxf");
		
		case 5:
			return joaat("adder");
		
		case 6:
			return joaat("monroe");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("shamal");
		
		case 11:
			return joaat("stunt");
		
		case 12:
			return joaat("cuban800");
		
		case 13:
			return joaat("duster");
		
		case 14:
			return joaat("luxor");
		
		case 15:
			return joaat("frogger");
		
		case 16:
			return joaat("maverick");
		
		case 17:
			return joaat("rhino");
		
		case 18:
			return joaat("titan");
		
		case 19:
			return joaat("cargobob");
		
		case 20:
			return joaat("buzzard");
		
		case 21:
			return joaat("crusader");
		
		case 22:
			return joaat("barracks");
		
		case 24:
			return joaat("marquis");
		
		case 25:
			return joaat("jetmax");
		
		case 27:
			return joaat("squalo");
		
		case 29:
			return joaat("tropic");
		
		case 30:
			return joaat("seashark");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("suntrap");
		
		case 33:
			return joaat("bmx");
		
		case 34:
			return joaat("scorcher");
		
		case 35:
			return joaat("tribike");
		
		case 36:
			return joaat("tribike2");
		
		case 37:
			return joaat("tribike3");
		
		case 38:
			return joaat("cruiser");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("zion");
		
		case 41:
			return joaat("gauntlet");
		
		case 42:
			return joaat("vigero");
		
		case 43:
			return joaat("issi2");
		
		case 44:
			return joaat("infernus");
		
		case 45:
			return joaat("surano");
		
		case 46:
			return joaat("vacca");
		
		case 47:
			return joaat("ninef");
		
		case 48:
			return joaat("comet2");
		
		case 49:
			return joaat("banshee");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("sandking");
		
		case 53:
			return joaat("fugitive");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("superd");
		
		case 56:
			return joaat("exemplar");
		
		case 57:
			return joaat("baller2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("rocoto");
		
		case 60:
			return joaat("felon");
		
		case 61:
			return joaat("oracle2");
		
		case 62:
			return joaat("bati");
		
		case 63:
			return joaat("akuma");
		
		case 64:
			return joaat("ruffian");
		
		case 65:
			return joaat("vader");
		
		case 66:
			return joaat("blazer");
		
		case 67:
			return joaat("pcj");
		
		case 68:
			return joaat("sanchez");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("bullet");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("coquette");
		
		case 73:
			return joaat("ninef2");
		
		case 74:
			return joaat("rapidgt");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("voltic");
		
		case 78:
			return joaat("annihilator");
		
		case joaat("mpsv_lp0_31"):
			return joaat("mammatus");
		
		case 80:
			return joaat("velum");
		
		case 81:
			return joaat("dump");
		
		case 82:
			return joaat("airbus");
		
		case 83:
			return joaat("bus");
		
		case 84:
			return joaat("coach");
		
		case 85:
			return joaat("journey");
		
		case 86:
			return joaat("mule");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("stretch");
		
		case 89:
			return joaat("bison");
		
		case 90:
			return joaat("double");
		
		case 91:
			return joaat("felon2");
		
		case 92:
			return joaat("hexer");
		
		case 93:
			return joaat("zion2");
		
		case 94:
			return joaat("bati2");
		
		case 95:
			return joaat("elegy2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("hotknife");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		
		case 100:
			return joaat("kalahari");
		
		case 101:
			return joaat("paradise");
		
		case 102:
			return joaat("speeder");
		
		case 103:
			return joaat("bodhi2");
		
		case 104:
			return joaat("dune");
		
		case 105:
			return joaat("rebel");
		
		case 106:
			return joaat("sadler");
		
		case 107:
			return joaat("sanchez2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("btype");
		
		case 111:
			return joaat("jester");
		
		case 114:
			return joaat("massacro");
		
		case 112:
			return joaat("turismor");
		
		case 115:
			return joaat("zentorno");
		
		case 116:
			return joaat("huntley");
		
		case 110:
			return joaat("alpha");
		
		case 113:
			return joaat("vestra");
		
		case 117:
			return joaat("coquette");
		
		case 118:
			return joaat("banshee");
		
		case 119:
			return joaat("stinger");
		
		case 120:
			return joaat("voltic");
		
		case 121:
			return joaat("thrust");
		
		case 128:
			return joaat("asea");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("bobcatxl");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("granger");
		
		case 133:
			return joaat("ingot");
		
		case 134:
			return joaat("intruder");
		
		case 135:
			return joaat("minivan");
		
		case 136:
			return joaat("premier");
		
		case 137:
			return joaat("radi");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("stanier");
		
		case 141:
			return joaat("stratum");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("f620");
		
		case 124:
			return joaat("fusilade");
		
		case 125:
			return joaat("penumbra");
		
		case 126:
			return joaat("sentinel");
		
		case 127:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		
		case 144:
			return joaat("warrener");
		
		case 145:
			return joaat("glendale");
		
		case 146:
			return joaat("rhapsody");
		
		case 147:
			return joaat("panto");
		
		case 148:
			return joaat("dubsta3");
		
		case 149:
			return joaat("pigalle");
		
		case 150:
			return joaat("picador");
		
		case 151:
			return joaat("regina");
		
		case 152:
			return joaat("surfer");
		
		case 153:
			return joaat("youga");
		
		case 154:
			return joaat("blazer3");
		
		case 155:
			return joaat("rebel2");
		
		case 156:
			return joaat("primo");
		
		case 157:
			return joaat("buffalo");
		
		case 158:
			return joaat("buffalo2");
		
		case 159:
			return joaat("tailgater");
		
		case 160:
			return joaat("monster");
		
		case 161:
			return joaat("sovereign");
		
		case 162:
			return joaat("miljet");
		
		case 163:
			return joaat("besra");
		
		case 164:
			return joaat("swift");
		
		case 165:
			return joaat("coquette2");
		
		case 166:
			return joaat("coquette2");
		
		case 167:
			return joaat("innovation");
		
		case 168:
			return joaat("hakuchou");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("kalahari");
		
		case 187:
			return joaat("valkyrie");
		
		case 177:
			return joaat("hydra");
		
		case 185:
			return joaat("savage");
		
		case 174:
			return joaat("enduro");
		
		case 171:
			return joaat("boxville4");
		
		case 172:
			return joaat("casco");
		
		case 173:
			return joaat("dinghy3");
		
		case 175:
			return joaat("gburrito2");
		
		case 176:
			return joaat("guardian");
		
		case 178:
			return joaat("insurgent");
		
		case 179:
			return joaat("insurgent2");
		
		case 183:
			return joaat("mule3");
		
		case 180:
			return joaat("kuruma");
		
		case 181:
			return joaat("kuruma2");
		
		case 182:
			return joaat("lectro");
		
		case 184:
			return joaat("pbus");
		
		case 186:
			return joaat("technical");
		
		case 188:
			return joaat("velum2");
		
		case 189:
			return joaat("gresley");
		
		case 190:
			return joaat("jackal");
		
		case 191:
			return joaat("landstalker");
		
		case 192:
			return joaat("mesa3");
		
		case 193:
			return joaat("nemesis");
		
		case 194:
			return joaat("oracle");
		
		case 195:
			return joaat("rumpo");
		
		case 196:
			return joaat("schafter2");
		
		case 197:
			return joaat("seminole");
		
		case 198:
			return joaat("surge");
		
		case 199:
			return joaat("dodo");
		
		case 200:
			return joaat("marshall");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("blista2");
		
		case 203:
			return joaat("stalion");
		
		case 204:
			return joaat("dukes");
		
		case 205:
			return joaat("dukes2");
		
		case 206:
			return joaat("stalion2");
		
		case 207:
			return joaat("dominator2");
		
		case 208:
			return joaat("gauntlet2");
		
		case 209:
			return joaat("buffalo3");
		
		case 210:
			return joaat("slamvan");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("jester2");
		
		case 213:
			return joaat("massacro2");
		
		case 214:
			return joaat("feltzer3");
		
		case 215:
			return joaat("luxor2");
		
		case 216:
			return joaat("osiris");
		
		case 217:
			return joaat("swift2");
		
		case 218:
			return joaat("virgo");
		
		case 219:
			return joaat("windsor");
		
		default:
	}
	return 0;
}

void func_105(int iParam0, int iParam1, bool bParam2)//Position - 0xB1DB
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_17236.f_4492 > iParam0)
	{
		return;
	}
	if (Global_17236.f_4492 >= 125)
	{
		return;
	}
	if (Global_17236.f_4498 >= 125)
	{
		return;
	}
	if (Global_17236.f_4998 < Global_17236.f_4996)
	{
		return;
	}
	if (Global_17236.f_4492 != iParam0)
	{
		Global_17236.f_4492 = iParam0;
		Global_17236.f_4493 = 0;
	}
	iVar0 = Global_17236.f_4333[Global_17236.f_4493];
	if (iVar0 != 4)
	{
		while (Global_17236.f_4493 < 4 && iVar0 != 4)
		{
			Global_17236.f_4493++;
			iVar0 = Global_17236.f_4333[Global_17236.f_4493];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_17236.f_3843[Global_17236.f_4498] = iParam1;
	Global_17236.f_4498++;
	if (iParam1 != 0)
	{
		func_84(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_17236.f_4352[Global_17236.f_4493])
		{
			func_84(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_17236.f_4345[Global_17236.f_4493])
		{
			Global_17236.f_4345[Global_17236.f_4493] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_17236.f_5000[iParam0])
			{
				Global_17236.f_5000[iParam0] = fVar2;
			}
		}
	}
	MISC::SET_BIT(&(Global_17236.f_4366[iParam0]), Global_17236.f_4493);
	Global_17236.f_4493++;
	Global_17236.f_4999 = 4;
}

void func_106(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xB355
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17236.f_4492 > iParam0)
	{
		return;
	}
	if (Global_17236.f_4492 >= 125)
	{
		return;
	}
	if (Global_17236.f_4494 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 < Global_17236.f_4996)
	{
		return;
	}
	if (Global_17236.f_4492 != iParam0)
	{
		Global_17236.f_4492 = iParam0;
		Global_17236.f_4493 = 0;
	}
	iVar0 = Global_17236.f_4333[Global_17236.f_4493];
	if (iVar0 != 1)
	{
		while (Global_17236.f_4493 < 4 && iVar0 != 1)
		{
			Global_17236.f_4493++;
			iVar0 = Global_17236.f_4333[Global_17236.f_4493];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17236.f_73[Global_17236.f_4494 /*4*/]), sParam1, 16);
	Global_17236.f_1074[Global_17236.f_4494] = iParam3;
	Global_17236.f_1325[Global_17236.f_4494] = iParam4;
	Global_17236.f_4494++;
	if (iParam2 == 0)
	{
		fVar1 = func_108(sParam1);
		if (Global_17236.f_4352[Global_17236.f_4493])
		{
			func_84(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17236.f_4345[Global_17236.f_4493])
		{
			Global_17236.f_4345[Global_17236.f_4493] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_107(sParam1);
			if (fVar4 > Global_17236.f_5000[iParam0])
			{
				Global_17236.f_5000[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_17236.f_4366[iParam0]), Global_17236.f_4493);
	Global_17236.f_4493++;
	Global_17236.f_4999 = 1;
	Global_17236.f_4997 = (Global_17236.f_4494 - 1);
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = iParam2;
}

float func_107(char* sParam0)//Position - 0xB515
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_108(char* sParam0)//Position - 0xB531
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_64(0, 1, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_109(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0xB56D
{
	int iVar0;
	
	uParam1->f_42 = func_104(iParam0);
	if (uParam1->f_42 == 0)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (iParam3 == 2 && uParam1->f_42 == joaat("frogger"))
	{
		uParam1->f_42 = joaat("frogger2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_43 = 1;
		return;
	}
	uParam1->f_53 = 0;
	func_114(iParam0, &(uParam1->f_53));
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	if (iParam0 == 218)
	{
		uParam1->f_9[23] = 7;
	}
	if (bParam2)
	{
		iVar0 = Global_67135;
	}
	else if (iParam3 == 0)
	{
		iVar0 = Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_M[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar0 = Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_F[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar0 = Global_SAVE_DATA.BUY_VEC_SAVED.OWVEC_COL_T[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_43 = -1;
	if (iParam0 == 200)
	{
		switch (iVar0)
		{
			case 1:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 2:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 3:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 4:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 5:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 6:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 7:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 8:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 9:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 10:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 11:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 12:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 13:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 14:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 15:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 16:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 17:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 18:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 19:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 20:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 21:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 22:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 23:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 24:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			case 25:
				func_112(func_113(iParam0, iVar0), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_111(func_113(iParam0, iVar0));
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 219)
	{
		switch (iVar0)
		{
			case 1:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 1;
				break;
			
			case 2:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 2;
				break;
			
			case 3:
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 3;
				break;
			
			case 4:
				uParam1->f_5 = 59;
				uParam1->f_6 = 59;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 8;
				break;
			
			case 5:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4;
				break;
			
			case 6:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 5;
				break;
			
			case 7:
				uParam1->f_5 = 42;
				uParam1->f_6 = 42;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 7;
				break;
			
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 6;
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 1:
				if (func_110(iParam0))
				{
					if (iParam0 != 164)
					{
						uParam1->f_43 = 0;
					}
					else
					{
						uParam1->f_43 = func_111(func_113(iParam0, iVar0));
					}
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_43 = -1;
				}
				break;
			
			case 2:
				if (func_110(iParam0))
				{
					if (iParam0 != 164)
					{
						uParam1->f_43 = 1;
					}
					else
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 10;
						uParam1->f_7 = 4;
						uParam1->f_8 = 156;
						uParam1->f_43 = func_111(func_113(iParam0, iVar0));
					}
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_43 = -1;
				}
				break;
			
			case 3:
				if (func_110(iParam0))
				{
					uParam1->f_43 = 2;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_43 = -1;
				}
				break;
			
			case 4:
				if (func_110(iParam0))
				{
					uParam1->f_43 = 3;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					uParam1->f_43 = -1;
				}
				break;
			
			case 5:
				if (uParam1->f_42 == joaat("bifta") || uParam1->f_42 == joaat("kalahari"))
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 0;
					uParam1->f_43 = -1;
				}
				else if (((((uParam1->f_42 == joaat("jester") || uParam1->f_42 == joaat("massacro")) || uParam1->f_42 == joaat("turismor")) || uParam1->f_42 == joaat("zentorno")) || uParam1->f_42 == joaat("huntley")) || uParam1->f_42 == joaat("alpha"))
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 0;
					uParam1->f_43 = -1;
				}
				else if (uParam1->f_42 == joaat("ratloader"))
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 0;
					uParam1->f_43 = -1;
				}
				else if (uParam1->f_42 == joaat("panto"))
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 0;
					uParam1->f_43 = -1;
				}
				else if (uParam1->f_42 == joaat("insurgent") || uParam1->f_42 == joaat("insurgent2"))
				{
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_7 = 18;
					uParam1->f_8 = 152;
					uParam1->f_43 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					uParam1->f_43 = -1;
				}
				break;
			
			case 6:
				uParam1->f_5 = 64;
				uParam1->f_6 = 68;
				uParam1->f_43 = -1;
				break;
			
			case 7:
				if (uParam1->f_42 == joaat("kuruma2"))
				{
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_7 = 13;
					uParam1->f_8 = 156;
					uParam1->f_43 = -1;
				}
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_43 = -1;
				}
				break;
			
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 0;
				uParam1->f_43 = -1;
				break;
			
			default:
				break;
			}
	}
	if (iVar0 == 0)
	{
		switch (iParam0)
		{
			case 32:
				uParam1->f_5 = 111;
				uParam1->f_6 = 65;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 13:
				uParam1->f_5 = 46;
				uParam1->f_6 = 24;
				uParam1->f_7 = 46;
				uParam1->f_8 = 24;
				uParam1->f_43 = -1;
				break;
			
			case 33:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 34:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 35:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 36:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 37:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 38:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 206:
				uParam1->f_5 = 2;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_43 = -1;
				break;
			
			case 207:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 126;
				uParam1->f_43 = -1;
				break;
			
			case 208:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_43 = -1;
				break;
			
			case 209:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 139;
				uParam1->f_43 = -1;
				break;
			
			case 210:
				uParam1->f_5 = 28;
				uParam1->f_6 = 0;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 213:
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_7 = 42;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 212:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 27;
				uParam1->f_43 = -1;
				break;
			
			case 17:
				uParam1->f_5 = 30;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 215:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 217:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			default:
				break;
			}
	}
	if (iParam0 == 161)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 111;
		uParam1->f_7 = 111;
		uParam1->f_8 = 156;
		uParam1->f_43 = -1;
	}
	if (uParam1->f_43 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_43 = 1;
	}
}

int func_110(int iParam0)//Position - 0xC2FA
{
	if (((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219)
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)//Position - 0xC346
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		default:
	}
	return -1;
}

int func_112(int iParam0, var uParam1, var uParam2)//Position - 0xC475
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
			break;
	}
	return 0;
}

int func_113(int iParam0, int iParam1)//Position - 0xC694
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case joaat("mpsv_lp0_31"):
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (Global_67135 == 2)
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		default:
	}
	return -1;
}

void func_114(int iParam0, var uParam1)//Position - 0xCA2A
{
	if (iParam0 == 64)
	{
		MISC::SET_BIT(uParam1, 4);
	}
	else if (iParam0 == 67)
	{
		MISC::SET_BIT(uParam1, 4);
	}
	else if (iParam0 == 72)
	{
		MISC::SET_BIT(uParam1, 1);
	}
	else if (iParam0 == 117)
	{
		MISC::CLEAR_BIT(uParam1, 1);
	}
	else if (iParam0 == 49)
	{
		MISC::SET_BIT(uParam1, 1);
	}
	else if (iParam0 == 118)
	{
		MISC::CLEAR_BIT(uParam1, 1);
	}
	else if (iParam0 == 1)
	{
		MISC::SET_BIT(uParam1, 1);
	}
	else if (iParam0 == 119)
	{
		MISC::CLEAR_BIT(uParam1, 1);
	}
	else if (iParam0 == 77)
	{
		MISC::SET_BIT(uParam1, 0);
		MISC::CLEAR_BIT(uParam1, 1);
		MISC::CLEAR_BIT(uParam1, 2);
	}
	else if (iParam0 == 120)
	{
		MISC::CLEAR_BIT(uParam1, 0);
		MISC::CLEAR_BIT(uParam1, 1);
		MISC::SET_BIT(uParam1, 2);
	}
	else if (iParam0 == 104)
	{
		MISC::SET_BIT(uParam1, 1);
	}
	else if (iParam0 == 100)
	{
		MISC::SET_BIT(uParam1, 1);
		MISC::SET_BIT(uParam1, 2);
	}
	else if (iParam0 == 130)
	{
		MISC::SET_BIT(uParam1, 0);
	}
	else if (iParam0 == 132)
	{
		MISC::SET_BIT(uParam1, 0);
	}
	else if (iParam0 == 135)
	{
		MISC::CLEAR_BIT(uParam1, 0);
		MISC::SET_BIT(uParam1, 1);
	}
	else if (iParam0 == 137)
	{
		MISC::SET_BIT(uParam1, 0);
	}
	else if (iParam0 == 141)
	{
		MISC::SET_BIT(uParam1, 1);
		MISC::CLEAR_BIT(uParam1, 6);
	}
	else if (iParam0 == 147)
	{
		MISC::SET_BIT(uParam1, 0);
		MISC::SET_BIT(uParam1, 1);
		MISC::SET_BIT(uParam1, 2);
		MISC::SET_BIT(uParam1, 3);
		MISC::SET_BIT(uParam1, 4);
		MISC::SET_BIT(uParam1, 5);
		MISC::SET_BIT(uParam1, 6);
		MISC::SET_BIT(uParam1, 7);
		MISC::SET_BIT(uParam1, 8);
	}
	else if (iParam0 == 203)
	{
		MISC::SET_BIT(uParam1, 0);
		MISC::CLEAR_BIT(uParam1, 1);
		MISC::CLEAR_BIT(uParam1, 2);
	}
	else if (iParam0 == 165)
	{
		MISC::CLEAR_BIT(uParam1, 0);
		MISC::SET_BIT(uParam1, 1);
	}
	else if (iParam0 == 166)
	{
		MISC::SET_BIT(uParam1, 0);
		MISC::CLEAR_BIT(uParam1, 1);
	}
	else if (iParam0 == 100)
	{
		MISC::SET_BIT(uParam1, 0);
		MISC::SET_BIT(uParam1, 1);
		MISC::SET_BIT(uParam1, 2);
	}
	else if (iParam0 == 170)
	{
		MISC::CLEAR_BIT(uParam1, 0);
		MISC::CLEAR_BIT(uParam1, 1);
		MISC::CLEAR_BIT(uParam1, 2);
	}
	else if (func_104(iParam0) == joaat("monster"))
	{
		MISC::SET_BIT(uParam1, 15);
	}
	else if (func_104(iParam0) == joaat("sovereign"))
	{
		MISC::SET_BIT(uParam1, 15);
	}
	else if (iParam0 == 192)
	{
		MISC::SET_BIT(uParam1, 0);
		MISC::SET_BIT(uParam1, 1);
		MISC::CLEAR_BIT(uParam1, 2);
	}
}

void func_115(char* sParam0)//Position - 0xCCA8
{
	int iVar0;
	
	StringCopy(&(Global_17236.f_1), sParam0, 16);
	Global_17236.f_68 = 0;
	Global_17236.f_69 = 0;
	Global_17236.f_70 = 0;
	Global_17236.f_71 = 0;
	Global_17236.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xCCF3
{
	Global_17236.f_4360[0] = iParam0;
	Global_17236.f_4360[1] = iParam1;
	Global_17236.f_4360[2] = iParam2;
	Global_17236.f_4360[3] = iParam3;
	Global_17236.f_4360[4] = iParam4;
}

void func_117(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xCD32
{
	Global_17236.f_4333[0] = iParam0;
	Global_17236.f_4333[1] = iParam1;
	Global_17236.f_4333[2] = iParam2;
	Global_17236.f_4333[3] = iParam3;
	Global_17236.f_4333[4] = iParam4;
	Global_17236.f_4500 = 0;
	if (iParam0 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam1 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam2 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam3 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam4 != 0)
	{
		Global_17236.f_4500++;
	}
}

void func_118(bool bParam0)//Position - 0xCDDC
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 250)
	{
		StringCopy(&(Global_17236.f_73[iVar0 /*4*/]), "", 16);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17236.f_1576[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2435345[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 250)
	{
		Global_17236.f_3340[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_3591[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_3843[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_4366[iVar0] = 0;
		Global_17236.f_4501[iVar0] = 0;
		Global_17236.f_4627[iVar0] = 0;
		Global_17236.f_5131[iVar0] = 0f;
		Global_17236.f_4753[iVar0] = 0;
		Global_17236.f_5000[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17236.f_4333[iVar0] = 0;
		Global_17236.f_4345[iVar0] = 0f;
		Global_17236.f_4339[iVar0] = -1f;
		Global_17236.f_4352[iVar0] = 0;
		Global_17236.f_4360[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17236.f_4241[iVar0 /*4*/]), "", 16);
		Global_17236.f_4290[iVar0] = -1;
		Global_17236.f_4303[iVar0] = 332;
		Global_17236.f_4316[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&(Global_17236.f_5263[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17236.f_6048[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2543305.f_16), "", 16);
	Global_2543305.f_20 = -1;
	Global_17236 = 0;
	Global_17236.f_4492 = 0;
	Global_17236.f_4493 = 0;
	Global_17236.f_4494 = 0;
	Global_17236.f_4496 = 0;
	Global_17236.f_4497 = 0;
	Global_17236.f_4498 = 0;
	Global_17236.f_4495 = 0;
	Global_17236.f_5126 = 0;
	Global_17236.f_4994 = 0;
	Global_17236.f_4993 = 0;
	Global_17236.f_4995 = 0;
	StringCopy(&(Global_17236.f_3969), "", 16);
	Global_17236.f_4039 = 0;
	Global_17236.f_4040 = 0;
	Global_17236.f_4041 = 0;
	Global_17236.f_4042 = 0;
	Global_17236.f_4043 = 0;
	Global_17236.f_4044 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_3973[iVar0] = 0;
		iVar0++;
	}
	Global_17236.f_4045 = 0;
	StringCopy(&(Global_2543305.f_21), "", 16);
	Global_2543305.f_61 = 0;
	Global_2543305.f_62 = 0;
	Global_2543305.f_63 = 0;
	Global_2543305.f_64 = 0;
	Global_2543305.f_65 = 0;
	Global_2543305.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2543305.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2543305.f_67 = 0;
	StringCopy(&(Global_17236.f_1), "", 16);
	Global_17236.f_4351 = 0f;
	Global_17236.f_68 = 0;
	Global_17236.f_69 = 0;
	Global_17236.f_70 = 0;
	Global_17236.f_71 = 0;
	Global_17236.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17236.f_4999 = 0;
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = 0;
	Global_17236.f_4997 = 0;
	Global_17236.f_4046 = 0;
	Global_17236.f_4047 = 0;
	Global_17236.f_4499 = 10;
	Global_17236.f_4500 = 0;
	Global_17236.f_5128 = 0f;
	Global_17236.f_5129 = 0f;
	Global_17236.f_4986 = 0;
	Global_17236.f_4987 = 0;
	Global_17236.f_4988 = 0f;
	Global_17236.f_4989 = 0;
	Global_17236.f_4991 = 0;
	Global_17236.f_4990 = 0;
	Global_17236.f_4992 = 0;
	Global_17236.f_7203 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17236.f_5257[iVar0] = -1;
		Global_17236.f_5260[iVar0] = -1;
		iVar0++;
	}
	Global_17236.f_4358 = 0f;
	Global_17236.f_4329 = 0;
	Global_17236.f_4359 = 0;
	Global_17236.f_7182 = 0;
	Global_17236.f_7177 = 0;
	Global_17236.f_7187 = 0;
	Global_17236.f_7192 = 0;
	Global_17236.f_7197 = 0;
	Global_17236.f_7199 = 0;
	Global_17236.f_7205 = 0;
	Global_17233 = 0.05f;
	Global_17234 = 0.05f;
	Global_17235 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_17235 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17235 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17235 = 0.225f;
	}
}

void func_119()//Position - 0xD26D
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

int func_120(int iParam0, bool bParam1)//Position - 0xD28B
{
	int iVar0;
	
	iVar0 = func_49(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_59(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/] == 1 && Global_35613[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35613[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35613[iVar0 /*18*/].f_4 = 1;
			Global_35613[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35613[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35613[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

bool func_121(char* sParam0, int iParam1)//Position - 0xD343
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_52(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17236.f_4893[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17236.f_4893[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_17236.f_4893[iVar0 /*4*/]), 9);
		Global_17236.f_4886[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_17236.f_4893[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_17236.f_4879[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17236.f_4918[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_122(&(Global_17236.f_4918[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_122(var uParam0)//Position - 0xD411
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_123(char* sParam0, int iParam1)//Position - 0xD4B3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

var func_124(char* sParam0)//Position - 0xD4CA
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_125(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)//Position - 0xD4DD
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_48(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/] = 1;
			Global_35613[iVar0 /*18*/].f_1 = Global_35730;
			Global_35730++;
			Global_35613[iVar0 /*18*/].f_3 = 0;
			Global_35613[iVar0 /*18*/].f_16 = 0;
			Global_35613[iVar0 /*18*/].f_4 = 0;
			Global_35613[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35613[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35613[iVar0 /*18*/].f_5 = iParam3;
			Global_35613[iVar0 /*18*/].f_17 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_35613[iVar0 /*18*/].f_6 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_35613[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35613[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35613[iVar0 /*18*/].f_11 = 0;
			}
			*iParam0 = Global_35613[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_126(int iParam0, int iParam1)//Position - 0xD5E8
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_SAVE_DATA.OWVEC_IND[iParam0], iVar0);
}

int func_127(int iParam0)//Position - 0xD61A
{
	int iVar0;
	int iVar1[128];
	
	if (func_130(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_22() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_129(33, 0) && !func_128(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bStallionUnlocked)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bGauntletUnlocked)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bDominatorUnlocked)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bBuffaloUnlocked)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bMarshallUnlocked)
		{
			iVar1[iVar0] = joaat("marshall");
			iVar0++;
		}
	}
	if (iParam0 >= 0 && iParam0 < iVar0)
	{
		return iVar1[iParam0];
	}
	return 0;
}

int func_128(int iParam0)//Position - 0xD75F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts)
	{
		if (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0, int iParam1)//Position - 0xD79A
{
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_VAR_COMPLETE[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_130(bool bParam0, bool bParam1)//Position - 0xD7BD
{
	if (bParam0)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683, 2))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		if (!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (!MISC::IS_PS3_VERSION() && !MISC::IS_ORBIS_VERSION())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		return 1;
	}
	return 0;
}

int func_131()//Position - 0xD829
{
	int iVar0;
	
	iVar0 = 0;
	if (func_130(1, 1))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0++;
		}
	}
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[45 /*6*/], 3))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0++;
		}
	}
	if (func_22() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_129(33, 0) && !func_128(1751306471))
		{
			iVar0++;
		}
		if (Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bStallionUnlocked)
		{
			iVar0++;
		}
		if (Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bGauntletUnlocked)
		{
			iVar0++;
		}
		if (Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bDominatorUnlocked)
		{
			iVar0++;
		}
		if (Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bBuffaloUnlocked)
		{
			iVar0++;
		}
		if (Global_SAVE_DATA.COUNTRY_RACE_SAVED_STRUCT.COUNTRY_RACE_bMarshallUnlocked)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_132(float fParam0)//Position - 0xD8F8
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (fParam0 <= 0f)
		{
			return PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID()) > 0;
		}
		else
		{
			return PED::_0x336B3D200AB007CB(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), fParam0) > 0;
		}
	}
	return 0;
}

bool func_133(bool bParam0)//Position - 0xD949
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

void func_134()//Position - 0xD974
{
	var uVar0[10];
	bool bVar11;
	int iVar12;
	float fVar13;
	char* sVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	bool bVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	struct<3> Var29;
	bool bVar50;
	float fVar51;
	int iVar52;
	struct<3> Var53;
	struct<3> Var56;
	int iVar59;
	struct<3> Var60;
	bool bVar81;
	float fVar82;
	int iVar83;
	bool bVar84;
	struct<4> Var85;
	bool bVar89;
	int iVar90;
	struct<4> Var91;
	struct<54> Var112;
	int iVar166;
	int iVar167;
	int iVar168;
	bool bVar169;
	float fVar170;
	int iVar171;
	struct<54> Var172;
	int iVar226;
	bool bVar227;
	int iVar228;
	int iVar229;
	int iVar230;
	bool bVar231;
	bool bVar232;
	
	bVar11 = false;
	if (((((((((((((((Local_401.f_29.f_80 && Local_401.f_29.f_69) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && Local_401.f_2 == 0) && Local_401 != -1) && func_46(Local_401, 0)) && func_46(Local_401, 5)) && !func_10(0)) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(5)) && !func_10(14)) && !Global_67058) && !func_133(1)) || ((Local_401.f_3 > 1 && !func_133(0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())))
	{
		func_185(Local_401, &Local_520);
		fVar13 = 0f;
		sVar14 = "ANIM@APT_TRANS@GARAGE";
		Var15 = { 198.3659f, -1020.273f, -100f };
		Var18 = { Var15 };
		Var21 = { 198.9538f, -1026.13f, -100f };
		switch (Local_401.f_3)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					Local_401.f_3 = 10;
					return;
				}
				if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0) && (func_184(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_401.f_29.f_68, 90f) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					if (func_183())
					{
						bVar24 = true;
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar12))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, 0))
								{
									iVar25 = ENTITY::GET_ENTITY_MODEL(iVar12);
									if ((((((((!func_43(iVar25) || func_42(iVar12)) || func_41(iVar12)) || VEHICLE::IS_BIG_VEHICLE(iVar12)) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar25) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar25)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar25))) || iVar25 == joaat("monster")) || FIRE::IS_ENTITY_ON_FIRE(iVar12)) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar12)) || (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("taxi_procedural")) > 0))
									{
										bVar24 = false;
									}
								}
								else
								{
									bVar24 = false;
								}
							}
						}
						else if (STREAMING::DOES_ANIM_DICT_EXIST(sVar14))
						{
							STREAMING::REQUEST_ANIM_DICT(sVar14);
							if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar14))
							{
								bVar24 = false;
							}
						}
						if (bVar24)
						{
							func_125(&iLocal_630, 3, "WEB_VEH_ENTER", 0, 0);
							iLocal_930 = 0;
							Local_401.f_3 = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_124("WEB_VEH_INV"))
							{
								func_123("WEB_VEH_INV", -1);
								StringCopy(&cLocal_919, "WEB_VEH_INV", 16);
								bVar11 = true;
							}
						}
					}
					else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_124("WEB_VEH_FULL"))
					{
						func_123("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_919, "WEB_VEH_FULL", 16);
						bVar11 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_928)
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_928 = 0;
						STREAMING::REQUEST_ANIM_DICT(sVar14);
						if (STREAMING::HAS_ANIM_DICT_LOADED(sVar14))
						{
							iLocal_928 = 1;
						}
					}
					else
					{
						STREAMING::REMOVE_ANIM_DICT(sVar14);
						iLocal_928 = 1;
					}
				}
				iVar26 = 1;
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, 0))
						{
							iVar27 = ENTITY::GET_ENTITY_MODEL(iVar12);
							if ((((((((!func_43(iVar27) || func_42(iVar12)) || func_41(iVar12)) || VEHICLE::IS_BIG_VEHICLE(iVar12)) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar27) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar27)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar27))) || iVar27 == joaat("monster")) || FIRE::IS_ENTITY_ON_FIRE(iVar12)) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar12)) || (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("taxi_procedural")) > 0))
							{
								iVar26 = 0;
							}
						}
						else
						{
							iVar26 = 0;
						}
					}
				}
				if (((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0) && (func_184(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_401.f_29.f_68, 90f) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && func_183()) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)) && iVar26)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || (STREAMING::HAS_ANIM_DICT_LOADED(sVar14) || !STREAMING::DOES_ANIM_DICT_EXIST(sVar14)))
					{
						if (func_120(iLocal_630, 1))
						{
							func_48(&iLocal_630);
							iLocal_928 = 0;
							Local_401.f_3 = 2;
						}
						func_181(47, 0);
						func_176(47, 0);
						Local_401.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var15, "v_garagem_sp");
						if (INTERIOR::IS_VALID_INTERIOR(Local_401.f_112))
						{
							if (!INTERIOR::IS_INTERIOR_READY(Local_401.f_112))
							{
								if ((MISC::GET_FRAME_COUNT() % 10) == 0)
								{
									INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_401.f_112);
								}
							}
							StringCopy(&Global_31718, "v_garagem_sp", 32);
						}
						if (!iLocal_927 && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar28 = func_174(Local_401);
								func_40(&Var29, iVar28);
								Var18 = { Var29 };
								STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var18, 20f, 0);
							}
							else
							{
								STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var21 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_927 = 1;
						}
					}
				}
				else
				{
					if (iLocal_927 && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						iLocal_927 = 0;
					}
					iLocal_928 = 0;
					func_48(&iLocal_630);
					STREAMING::REMOVE_ANIM_DICT(sVar14);
					Local_401.f_3 = 0;
				}
				break;
			
			case 2:
				func_181(47, 0);
				func_176(47, 0);
				PLAYER::FORCE_CLEANUP(8);
				Global_67138.f_577 = 1;
				Global_67138.f_578 = { Local_401.f_29.f_55 };
				iLocal_908 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, 0))
					{
						if (func_184(ENTITY::GET_ENTITY_HEADING(iVar12), Local_401.f_29.f_68, 90f))
						{
							iLocal_930 = 0;
						}
						else
						{
							iLocal_930 = 1;
						}
						ENTITY::SET_ENTITY_PROOFS(iVar12, 1, 1, 1, 1, 1, 1, 0, 0);
						MISC::CLEAR_AREA_OF_OBJECTS(Local_520.f_86[0 /*6*/], 20f, 0);
						MISC::CLEAR_AREA_OF_PROJECTILES(Local_520.f_86[0 /*6*/], 20f, 0);
						GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_520.f_86[0 /*6*/], 7f);
						ENTITY::SET_ENTITY_COORDS(iVar12, Local_520.f_86[0 /*6*/], 1, 0, 0, 1);
						if (iLocal_930 && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_HEADING(iVar12, (Local_520.f_86[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							ENTITY::SET_ENTITY_HEADING(iVar12, Local_520.f_86[0 /*6*/].f_3.f_2);
						}
						if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
						{
							PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0, 0, -1);
							PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar12);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					func_169(1, 1, 1, 0);
					func_168(&(Local_520[1 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
					Local_401.f_3 = 3;
				}
				else
				{
					if ((ENTITY::DOES_ENTITY_EXIST(iLocal_923) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_923)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_923, 1))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_923);
					}
					iLocal_923 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_923) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_923, 0)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_923))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_923))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_923)))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_923))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_923, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_923) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_923, 0))
						{
							if (!bVar50)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_923, Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0))
								{
									bVar50 = true;
								}
							}
							if (!bVar50)
							{
								fVar51 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_923, 1), Local_520[0 /*15*/]);
								if (fVar51 < (5f * 5f))
								{
									bVar50 = true;
								}
							}
							if (bVar50)
							{
								iVar52 = func_28(24);
								if (iVar52 != 0)
								{
									func_167(iVar52, 1, func_308());
								}
								if (Local_401 == 21)
								{
									MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
									func_165(iLocal_923, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_401 == 22)
								{
									MISC::CLEAR_AREA(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
									func_165(iLocal_923, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_401 == 23)
								{
									MISC::CLEAR_AREA(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
									func_165(iLocal_923, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_923);
							}
						}
					}
					else
					{
						iLocal_923 = 0;
					}
					Var53 = { Local_401.f_29 * Vector(2f, 2f, 2f) + Local_401.f_29.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					Var56 = { Local_401.f_29 * Vector(1f, 1f, 1f) + Local_401.f_29.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_401.f_29, Var53.x, Var53.f_1, Local_401.f_29.f_3.f_2, Local_401.f_29.f_6, 0, 1, 0))
					{
						sLocal_931 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_931 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_931 = "gar_open_2_left";
								break;
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var53.x, Var53.f_1, Local_401.f_29.f_2, Var56.x, Var56.f_1, Local_401.f_29.f_3.f_2, Local_401.f_29.f_6, 0, 1, 0))
					{
						sLocal_931 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_931 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_931 = "gar_open_1_right";
								break;
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var56.x, Var56.f_1, Local_401.f_29.f_2, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0))
					{
						sLocal_931 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								sLocal_931 = "gar_open_1_right";
								break;
							
							case 1:
								sLocal_931 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_931 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
						{
							case 0:
								sLocal_931 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_931 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_931 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_931 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_931 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_931 = "gar_open_3_right";
								break;
							}
					}
					MISC::CLEAR_AREA_OF_OBJECTS(Local_520.f_73[0 /*4*/], 20f, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_520.f_86[0 /*6*/], 20f, 0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_520.f_73[0 /*4*/], 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_520.f_73[0 /*4*/].f_3);
					iLocal_635 = PED::CREATE_SYNCHRONIZED_SCENE(Local_520.f_73[0 /*4*/], 0f, 0f, Local_520.f_73[0 /*4*/].f_3, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_635, sVar14, sLocal_931, 8f, -8f, 0, 0, 1148846080, 0);
					func_169(1, 1, 1, 0);
					func_168(&(Local_520[0 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
					Local_401.f_3 = 4;
				}
				Local_401.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var15, "v_garagem_sp");
				if (INTERIOR::IS_VALID_INTERIOR(Local_401.f_112))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_401.f_112))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_401.f_112);
					}
					StringCopy(&Global_31718, "v_garagem_sp", 32);
				}
				if (!iLocal_927)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar59 = func_174(Local_401);
						func_40(&Var60, iVar59);
						Var18 = { Var60 };
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var18, 20f, 0);
					}
					else
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var21, 20f, 0);
					}
				}
				MISC::SET_BIT(&(Local_648.f_9), 25);
				func_161(198.0043f, -999.7775f, -100f, 50f, 0);
				func_89(Local_401);
				func_89(26);
				func_89(29);
				func_89(32);
				func_89(28);
				func_89(31);
				func_89(34);
				func_89(27);
				func_89(30);
				func_89(33);
				SYSTEM::SETTIMERA(0);
				iLocal_929 = 0;
				break;
			
			case 4:
				bVar81 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar81 = false;
				}
				if (INTERIOR::IS_VALID_INTERIOR(Local_401.f_112))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_401.f_112))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_401.f_112);
					}
					StringCopy(&Global_31718, "v_garagem_sp", 32);
				}
				else
				{
					Local_401.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var15, "v_garagem_sp");
				}
				if (func_160())
				{
				}
				else
				{
					bVar81 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_401.f_110) && CAM::IS_CAM_RENDERING(Local_401.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_401.f_110))
					{
						bVar81 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_520[0 /*15*/].f_14 * 1000f))
					{
						bVar81 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_401.f_111) && CAM::IS_CAM_RENDERING(Local_401.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_401.f_111))
					{
						bVar81 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_520[0 /*15*/].f_14 * 1000f))
					{
						bVar81 = false;
					}
				}
				else
				{
					bVar81 = false;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_635))
				{
					fVar82 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_635);
					if (fVar82 < 0.4f)
					{
						bVar81 = false;
					}
				}
				if (bVar81)
				{
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_401.f_3 = 5;
				}
				break;
			
			case 5:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar83 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iVar83, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					AUDIO::SET_VARIABLE_ON_SOUND(iVar83, "hold", (2250f / 1000f));
					func_169(0, 1, 1, 0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					if (CAM::DOES_CAM_EXIST(Local_401.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_401.f_110, 0);
						CAM::DESTROY_CAM(Local_401.f_110, 0);
					}
					if (CAM::DOES_CAM_EXIST(Local_401.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_401.f_111, 0);
						CAM::DESTROY_CAM(Local_401.f_111, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_933))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_933, 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_933, 0);
						iLocal_933 = 0;
					}
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					PLAYER::FORCE_CLEANUP(8);
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_635))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iLocal_635);
					}
					iLocal_635 = -1;
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 194.5394f, -1026.32f, -100f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 334.1665f);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					SYSTEM::SETTIMERA(0);
					Local_401.f_3 = 6;
				}
				break;
			
			case 6:
				func_159(Local_401);
				if (CAM::IS_SCREEN_FADED_OUT() && SYSTEM::TIMERA() > 2250)
				{
					STREAMING::REMOVE_ANIM_DICT(sVar14);
					func_158();
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					CAM::DO_SCREEN_FADE_IN(800);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					SYSTEM::SETTIMERA(0);
					iLocal_909 = 0;
					iLocal_927 = 0;
					Local_401.f_3 = 10;
				}
				break;
			
			case 3:
				func_159(Local_401);
				bVar84 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar84 = false;
				}
				if (INTERIOR::IS_VALID_INTERIOR(Local_401.f_112))
				{
					if (!INTERIOR::IS_INTERIOR_READY(Local_401.f_112))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_401.f_112);
					}
					StringCopy(&Global_31718, "v_garagem_sp", 32);
				}
				else
				{
					Local_401.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var15, "v_garagem_sp");
				}
				if (func_160())
				{
				}
				else
				{
					bVar84 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_401.f_110) && CAM::IS_CAM_RENDERING(Local_401.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_401.f_110))
					{
						bVar84 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_520[1 /*15*/].f_14 * 1000f))
					{
						bVar84 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_401.f_111) && CAM::IS_CAM_RENDERING(Local_401.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_401.f_111))
					{
						bVar84 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_520[1 /*15*/].f_14 * 1000f))
					{
						bVar84 = false;
					}
				}
				else
				{
					bVar84 = false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					Var85 = { 0f, 0f, 0f };
					Var85.f_3 = 0f;
					func_150(PLAYER::PLAYER_PED_ID(), Local_520.f_86[0 /*6*/], Local_520.f_66[0 /*3*/], ((Local_520[1 /*15*/].f_14 * 1000f) - 500f), Var85, 2, &fVar13);
				}
				if (bVar84)
				{
					func_158();
					SYSTEM::SETTIMERA(0);
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_401.f_3 = 35;
				}
				break;
			
			case 35:
				bVar89 = true;
				func_159(Local_401);
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_520.f_61[1] * 1000f))
				{
					bVar89 = false;
				}
				if (bVar89)
				{
					func_158();
					func_169(0, 1, 1, 0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					if (CAM::DOES_CAM_EXIST(Local_401.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_401.f_110, 0);
						CAM::DESTROY_CAM(Local_401.f_110, 0);
					}
					if (CAM::DOES_CAM_EXIST(Local_401.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_401.f_111, 0);
						CAM::DESTROY_CAM(Local_401.f_111, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_933))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_933, 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_933, 0);
						iLocal_933 = 0;
					}
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					PLAYER::FORCE_CLEANUP(8);
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, 0))
						{
							iVar90 = func_174(Local_401);
							func_40(&Var91, iVar90);
							ENTITY::SET_ENTITY_COORDS(iVar12, Var91, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar12, Var91.f_3);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar12, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar12, 0, 1);
							VEHICLE::SET_VEHICLE_LIGHTS(iVar12, 4);
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iVar12, 1, 0);
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iVar12, 0, 0);
							AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar12, 0);
							ENTITY::SET_ENTITY_PROOFS(iVar12, 0, 0, 0, 0, 0, 0, 0, 0);
							TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar12, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iVar12, 0);
							Var112.f_9 = 25;
							Var112.f_35 = 2;
							func_15(iVar12, &Var112);
							func_90(iVar90, Var112, 0f, 0f, 0f, -1f, 145);
							func_13(iVar90, iVar12, 1);
							func_149(iVar12);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
					iVar166 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
					iVar167 = 0;
					while (iVar167 < iVar166)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar167]) && !PED::IS_PED_INJURED(uVar0[iVar167])) && PED::IS_PED_GROUP_MEMBER(uVar0[iVar167], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uVar0[iVar167], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar167++;
					}
					SYSTEM::SETTIMERA(0);
					iLocal_909 = 0;
					iLocal_927 = 0;
					CAM::DO_SCREEN_FADE_IN(800);
					Local_401.f_3 = 10;
				}
				break;
			
			case 10:
				if (SYSTEM::TIMERA() < 7000 || !Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4248)
				{
					if (!Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4248)
					{
						if (iLocal_909 == 0)
						{
							func_123("CAR_GAR_05", -1);
							StringCopy(&cLocal_919, "CAR_GAR_05", 16);
							bVar11 = true;
							if (SYSTEM::TIMERA() >= 7000)
							{
								SYSTEM::SETTIMERA(0);
								iLocal_909++;
							}
						}
						else if (iLocal_909 == 1)
						{
							func_123("CAR_GAR_06", -1);
							StringCopy(&cLocal_919, "CAR_GAR_06", 16);
							bVar11 = true;
							if (SYSTEM::TIMERA() >= 7000)
							{
								SYSTEM::SETTIMERA(0);
								Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4248 = 1;
							}
						}
					}
					else
					{
						func_123("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_919, "CAR_GAR_EXIT", 16);
						bVar11 = true;
					}
				}
				else
				{
					Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4248 = 1;
				}
				iVar168 = 0;
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (iLocal_630 != -1)
					{
						func_48(&iLocal_630);
					}
					iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, 0))
					{
						if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar12) || PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
						{
							if (!(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())))
							{
								if ((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 71) != 0f || PAD::IS_CONTROL_JUST_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 71)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 71))
								{
									iVar168 = 1;
								}
								if ((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 72) != 0f || PAD::IS_CONTROL_JUST_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 72)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 72))
								{
									iVar168 = 1;
								}
							}
						}
					}
				}
				else
				{
					STREAMING::REQUEST_ANIM_DICT(sVar14);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, 1, 0) && func_184(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 180f, 90f))
					{
						if (iLocal_629 != -1)
						{
							func_48(&iLocal_629);
						}
						if (iLocal_630 == -1)
						{
							func_125(&iLocal_630, 3, "WEB_VEH_EXIT", 0, 0);
						}
						if (!iLocal_629 != -1 && !iLocal_630 == -1)
						{
							if (func_120(iLocal_630, 1))
							{
								func_48(&iLocal_630);
								iVar168 = 1;
							}
						}
					}
					else if (iLocal_630 != -1)
					{
						func_48(&iLocal_630);
					}
				}
				if (iLocal_912)
				{
					iVar168 = 1;
				}
				if (iVar168 && !func_148())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || iLocal_912)
					{
						SYSTEM::SETTIMERA(0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_520.f_73[2 /*4*/], 20f, 0);
						if (iLocal_630 != -1)
						{
							func_48(&iLocal_630);
						}
						Local_401.f_3 = 12;
					}
					else if (STREAMING::HAS_ANIM_DICT_LOADED(sVar14))
					{
						sLocal_931 = "";
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
						{
							case 0:
								sLocal_931 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_931 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_931 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_931 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_931 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_931 = "gar_open_3_right";
								break;
						}
						iLocal_635 = PED::CREATE_SYNCHRONIZED_SCENE(Local_520.f_73[1 /*4*/], 0f, 0f, Local_520.f_73[1 /*4*/].f_3, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_635, sVar14, sLocal_931, 8f, -8f, 0, 0, 1148846080, 0);
						func_169(1, 1, 1, 0);
						func_168(&(Local_520[2 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_520.f_73[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_630 != -1)
						{
							func_48(&iLocal_630);
						}
						Local_401.f_3 = 11;
					}
					else if (!STREAMING::DOES_ANIM_DICT_EXIST(sVar14))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_520.f_73[1 /*4*/], 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_520.f_73[1 /*4*/].f_3);
						func_169(1, 1, 1, 0);
						func_168(&(Local_520[2 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_520.f_73[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_630 != -1)
						{
							func_48(&iLocal_630);
						}
						Local_401.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar169 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar169 = false;
				}
				if (func_160())
				{
				}
				else
				{
					bVar169 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_401.f_110) && CAM::IS_CAM_RENDERING(Local_401.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_401.f_110))
					{
						bVar169 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_520[2 /*15*/].f_14 * 1000f))
					{
						bVar169 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_401.f_111) && CAM::IS_CAM_RENDERING(Local_401.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_401.f_111))
					{
						bVar169 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_520[2 /*15*/].f_14 * 1000f))
					{
						bVar169 = false;
					}
				}
				else
				{
					bVar169 = false;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_635))
				{
					fVar170 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_635);
					if (fVar170 < 0.4f)
					{
						bVar169 = false;
					}
				}
				if (bVar169)
				{
					iLocal_909 = 0;
					iLocal_927 = 0;
					CAM::DO_SCREEN_FADE_OUT(800);
					SYSTEM::SETTIMERA(0);
					Local_401.f_3 = 13;
				}
				break;
			
			case 12:
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				if (SYSTEM::TIMERA() > 500)
				{
					iVar171 = func_147();
					if ((iVar171 == 21 || iVar171 == 22) || iVar171 == 23)
					{
						Var172.f_9 = 25;
						Var172.f_35 = 2;
						func_90(iVar171, Var172, 0f, 0f, 0f, -1f, 145);
						func_92(iVar171);
					}
					else if (iVar171 != -1)
					{
						if (!iLocal_912)
						{
							func_314(iVar171, 0);
							func_92(iVar171);
						}
					}
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					STREAMING::REMOVE_ANIM_DICT(sVar14);
					CAM::DO_SCREEN_FADE_OUT(800);
					Local_401.f_3 = 13;
				}
				break;
			
			case 13:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar226 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iVar226, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
					AUDIO::SET_VARIABLE_ON_SOUND(iVar226, "hold", (2250f / 1000f));
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					if (CAM::DOES_CAM_EXIST(Local_401.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_401.f_110, 0);
						CAM::DESTROY_CAM(Local_401.f_110, 0);
					}
					if (CAM::DOES_CAM_EXIST(Local_401.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_401.f_111, 0);
						CAM::DESTROY_CAM(Local_401.f_111, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_933))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_933, 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_933, 0);
						iLocal_933 = 0;
					}
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::FORCE_CLEANUP(8);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!iLocal_912)
						{
							iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, 0))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								ENTITY::SET_ENTITY_COORDS(iVar12, Local_401.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar12, Local_401.f_29.f_77[1]);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar12);
							}
						}
					}
					else
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_635))
						{
							PED::DETACH_SYNCHRONIZED_SCENE(iLocal_635);
						}
						iLocal_635 = -1;
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_401.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_401.f_29.f_77[1]);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					SYSTEM::SETTIMERA(0);
					Local_401.f_3 = 14;
				}
				break;
			
			case 14:
				if (CAM::IS_SCREEN_FADED_OUT() && SYSTEM::TIMERA() > 2250)
				{
					bVar227 = true;
					if (iLocal_912)
					{
						STREAMING::REQUEST_MODEL(iLocal_913);
						if (STREAMING::HAS_MODEL_LOADED(iLocal_913))
						{
							iVar228 = VEHICLE::CREATE_VEHICLE(iLocal_913, Local_401.f_29.f_70[0 /*3*/], Local_401.f_29.f_77[0], 1, 1);
							if (iLocal_913 == joaat("windsor"))
							{
								VEHICLE::SET_VEHICLE_LIVERY(iVar228, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar228) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar228, 0))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar228, -1);
								VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar228, 0f);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_913);
								if (func_93(iLocal_913))
								{
									switch (iLocal_913)
									{
										case joaat("marshall"):
											VEHICLE::SET_VEHICLE_LIVERY(iVar228, iLocal_625);
											break;
										}
								}
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar228);
							}
							iLocal_912 = 0;
						}
						else
						{
							bVar227 = false;
						}
					}
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
					}
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
					}
					else
					{
						bVar227 = false;
					}
					if (bVar227)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_923) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_923, 0))
						{
							if (Local_401 == 21)
							{
								MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
								ENTITY::SET_ENTITY_COORDS(iLocal_923, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_923, 154.4846f);
							}
							else if (Local_401 == 22)
							{
								MISC::CLEAR_AREA(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
								ENTITY::SET_ENTITY_COORDS(iLocal_923, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_923, 319.6985f);
							}
							else if (Local_401 == 23)
							{
								MISC::CLEAR_AREA(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
								ENTITY::SET_ENTITY_COORDS(iLocal_923, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_923, 270.8741f);
							}
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_923);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iVar12, Local_520.f_66[1 /*3*/], 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar12, Local_401.f_29.f_77[0]);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar12);
								if ((iLocal_913 == joaat("monster") || iLocal_913 == joaat("marshall")) || iLocal_913 == joaat("rhino"))
								{
									VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar12, false);
								}
								else
								{
									VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar12, true);
								}
								if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
								{
									PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0, 0, -1);
									PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
								}
								AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar12, 1);
								func_140(func_308(), &iVar12, 3, 1);
							}
							CAM::DO_SCREEN_FADE_IN(800);
							func_169(1, 1, 1, 0);
							func_168(&(Local_520[3 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
							iLocal_930 = 0;
							iLocal_932 = -1;
							Local_401.f_3 = 15;
						}
						else
						{
							STREAMING::REMOVE_ANIM_DICT(sVar14);
							func_158();
							CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
							if (CAM::DOES_CAM_EXIST(Local_401.f_110))
							{
								CAM::SET_CAM_ACTIVE(Local_401.f_110, 0);
								CAM::DESTROY_CAM(Local_401.f_110, 0);
							}
							if (CAM::DOES_CAM_EXIST(Local_401.f_111))
							{
								CAM::SET_CAM_ACTIVE(Local_401.f_111, 0);
								CAM::DESTROY_CAM(Local_401.f_111, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_933))
							{
								ENTITY::SET_ENTITY_COLLISION(iLocal_933, 1, 0);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_933, 0);
								iLocal_933 = 0;
							}
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							PLAYER::FORCE_CLEANUP(8);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_401.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_401.f_29.f_77[1]);
							CAM::DO_SCREEN_FADE_IN(800);
							SYSTEM::SETTIMERA(0);
							func_161(198.0043f, -999.7775f, -100f, 50f, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							Local_401.f_3 = 16;
						}
						if (Local_401.f_3 != 16)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						}
						HUD::DISPLAY_HUD(0);
						HUD::DISPLAY_RADAR(0);
						SYSTEM::SETTIMERA(0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						iVar229 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
						iVar230 = 0;
						while (iVar230 < iVar229)
						{
							if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar230]) && !PED::IS_PED_INJURED(uVar0[iVar230])) && PED::IS_PED_GROUP_MEMBER(uVar0[iVar230], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if ((ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, 0)) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar12) > VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar12))
									{
										PED::SET_PED_INTO_VEHICLE(uVar0[iVar230], iVar12, -1);
									}
								}
								else
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uVar0[iVar230], Local_401.f_29.f_70[1 /*3*/], 0, 0, 1);
								}
							}
							iVar230++;
						}
						PLAYER::FORCE_CLEANUP(8);
						iLocal_929 = 0;
					}
				}
				break;
			
			case 15:
				bVar231 = true;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
				}
				else
				{
					bVar231 = false;
				}
				if (func_160())
				{
				}
				else
				{
					bVar231 = false;
				}
				if (CAM::DOES_CAM_EXIST(Local_401.f_110) && CAM::IS_CAM_RENDERING(Local_401.f_110))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_401.f_110))
					{
						bVar231 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_520[3 /*15*/].f_14 * 1000f))
					{
						bVar231 = false;
					}
				}
				else if (CAM::DOES_CAM_EXIST(Local_401.f_111) && CAM::IS_CAM_RENDERING(Local_401.f_111))
				{
					if (CAM::IS_CAM_INTERPOLATING(Local_401.f_111))
					{
						bVar231 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_520[3 /*15*/].f_14 * 1000f))
					{
						bVar231 = false;
					}
				}
				else
				{
					bVar231 = false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_150(PLAYER::PLAYER_PED_ID(), Local_520.f_86[1 /*6*/], Local_520.f_66[1 /*3*/], ((Local_520[3 /*15*/].f_14 * 1000f) - 500f), Local_520.f_73[2 /*4*/], 3, &fVar13);
				}
				if (iLocal_932 < 1 && func_139(PLAYER::PLAYER_PED_ID(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_932 == 0)
					{
						func_161(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_932++;
				}
				if (bVar231)
				{
					SYSTEM::SETTIMERA(0);
					Local_401.f_3 = 16;
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				break;
			
			case 16:
				bVar232 = true;
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_520.f_61[3] * 1000f))
				{
					bVar232 = false;
				}
				if (bVar232)
				{
					Local_401.f_3 = 17;
				}
				break;
			
			case 17:
				if (INTERIOR::IS_VALID_INTERIOR(Local_401.f_112))
				{
					INTERIOR::UNPIN_INTERIOR(Local_401.f_112);
				}
				StringCopy(&Global_31718, "", 32);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				func_138(47, 1);
				func_136(47, 1);
				Global_67138.f_577 = 0;
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				SYSTEM::SETTIMERA(0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				if (CAM::DOES_CAM_EXIST(Local_401.f_110))
				{
					CAM::SET_CAM_ACTIVE(Local_401.f_110, 0);
					CAM::DESTROY_CAM(Local_401.f_110, 0);
				}
				if (CAM::DOES_CAM_EXIST(Local_401.f_111))
				{
					CAM::SET_CAM_ACTIVE(Local_401.f_111, 0);
					CAM::DESTROY_CAM(Local_401.f_111, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_933))
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_933, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_933, 0);
					iLocal_933 = 0;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar12 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar12, 0))
					{
						ENTITY::SET_ENTITY_COORDS(iVar12, Local_520.f_73[2 /*4*/], 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iVar12, Local_520.f_73[2 /*4*/].f_3);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar12);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
				}
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				func_169(0, 1, 1, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				if (iLocal_908 > 0)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_908, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_923) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_923)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_923, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_923);
				}
				MISC::CLEAR_BIT(&(Local_648.f_9), 25);
				iLocal_927 = 0;
				Local_401.f_3 = 18;
				break;
			
			case 18:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					Local_401.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_67138.f_577)
		{
			func_138(47, 1);
			func_136(47, 1);
			Global_67138.f_577 = 0;
		}
		Local_401.f_3 = 0;
		if (iLocal_630 != -1)
		{
			func_48(&iLocal_630);
		}
	}
	if (Global_67138.f_577)
	{
		HUD::HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME();
		func_135();
		func_55();
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		PAD::SET_INPUT_EXCLUSIVE(2, 202);
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 157, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 158, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 159, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 160, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 161, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 162, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 163, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 164, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 165, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 53, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 38, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 46, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	}
	if (!bVar11 && Local_401.f_2 == 0)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_919))
			{
				if ((((func_124("WEB_VEH_INV") || func_124("WEB_VEH_FULL")) || func_124("CAR_GAR_05")) || func_124("CAR_GAR_06")) || func_124("CAR_GAR_EXIT"))
				{
					HUD::CLEAR_HELP(1);
				}
				StringCopy(&cLocal_919, "", 16);
			}
		}
	}
}

void func_135()//Position - 0xFEF5
{
	Global_17098.f_6 = 1;
}

void func_136(int iParam0, bool bParam1)//Position - 0xFF03
{
	struct<2> Var0;
	
	Var0 = { func_137(iParam0) };
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_30782[Var0.f_1]), Var0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_30782[Var0.f_1]), Var0);
	}
}

struct<2> func_137(var uParam0)//Position - 0xFF3B
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 2)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_138(int iParam0, bool bParam1)//Position - 0xFF8D
{
	struct<2> Var0;
	
	Var0 = { func_137(iParam0) };
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_30779[Var0.f_1]), Var0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_30779[Var0.f_1]), Var0);
	}
}

float func_139(int iParam0, struct<3> Param1, int iParam4)//Position - 0xFFC5
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam4);
}

void func_140(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xFFFE
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_8(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
	{
		if (iParam2 > Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_14(*iParam1, iParam0);
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, 0))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 1;
			}
			else
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
			}
		}
		else
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62));
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_65 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_69), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_70), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_71));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3209[iParam0] = 10;
		if ((VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) < 255) && func_144(*iParam1, 0, &uVar0))
		{
			func_17(iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_57));
			if (bParam3)
			{
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_40 = 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/] = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_4 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_5 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_6 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_10 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_16 = !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_19 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27 };
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_23 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_7 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[11];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[12];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_9 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[23];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_11 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[4];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[15];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_13 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[16];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_14 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[14];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_15 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[22];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_18 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[20];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_17 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[18];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_32 = VEHICLE::_0xEEBFC7A7EFDC35B4(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_31 = func_143(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_141(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7, iVar3, 1, &(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_141(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6, -1, iVar3, 0, &(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_141(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0x10BDF
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_142(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_142(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x10C52
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_143(int iParam0)//Position - 0x12144
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) < 255)
	{
		if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 0)
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

int func_144(int iParam0, bool bParam1, var uParam2)//Position - 0x12202
{
	int iVar0;
	
	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!func_145(iVar0, bParam1, uParam2))
	{
		return 0;
	}
	if (VEHICLE::IS_BIG_VEHICLE(iParam0))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((func_41(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("sentinel2")) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_145(int iParam0, bool bParam1, var uParam2)//Position - 0x122A4
{
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("insurgent") || iParam0 == joaat("technical"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_146(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_146(int iParam0)//Position - 0x1263E
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

int func_147()//Position - 0x12667
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (iVar0 == Global_67138.f_484[21])
			{
				return 21;
			}
			if (iVar0 == Global_67138.f_484[26])
			{
				return 26;
			}
			if (iVar0 == Global_67138.f_484[29])
			{
				return 29;
			}
			if (iVar0 == Global_67138.f_484[32])
			{
				return 32;
			}
			if (iVar0 == Global_67138.f_484[22])
			{
				return 22;
			}
			if (iVar0 == Global_67138.f_484[27])
			{
				return 27;
			}
			if (iVar0 == Global_67138.f_484[30])
			{
				return 30;
			}
			if (iVar0 == Global_67138.f_484[33])
			{
				return 33;
			}
			if (iVar0 == Global_67138.f_484[23])
			{
				return 23;
			}
			if (iVar0 == Global_67138.f_484[28])
			{
				return 28;
			}
			if (iVar0 == Global_67138.f_484[31])
			{
				return 31;
			}
			if (iVar0 == Global_67138.f_484[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_148()//Position - 0x12798
{
	return MISC::GET_GAME_TIMER() <= Global_17236.f_5130 + 100;
}

void func_149(int iParam0)//Position - 0x127AD
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && iParam0 == Global_68043)
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 0;
		Global_68043 = 0;
	}
}

int func_150(int iParam0, struct<4> Param1, var uParam5, var uParam6, struct<3> Param7, float fParam10, struct<4> Param11, int iParam15, float fParam16)//Position - 0x127E6
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	int iVar12;
	struct<3> Var13;
	float fVar16;
	float fVar17;
	float fVar18;
	
	Var0 = { Param1 };
	Var3 = { Param1.f_3 };
	Var6 = { Param7 };
	Var9 = { Param1.f_3 };
	if (iLocal_929 == 0)
	{
		iVar12 = PED::GET_VEHICLE_PED_IS_IN(uParam0, 0);
		iLocal_933 = iVar12;
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_933, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_933, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_933);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_933, 1, 1);
		if (PED::IS_PED_ON_ANY_BIKE(iParam0))
		{
			PED::GIVE_PED_HELMET(iParam0, 0, 0, -1);
			PED::SET_PED_HELMET(iParam0, 1);
		}
		Var13 = { ENTITY::GET_ENTITY_COORDS(iLocal_933, 1) };
		fLocal_934 = (Var13.f_2 - Var0.f_2);
		ENTITY::SET_ENTITY_COORDS(iLocal_933, Var0 + Vector(-10f, 0f, 0f), 1, 0, 0, 1);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_933, 0))
		{
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_933, 3);
		}
		iLocal_935 = MISC::GET_GAME_TIMER();
		iLocal_929 = 1;
	}
	if (iLocal_929 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_933) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_933, 0))
		{
			fVar16 = SYSTEM::TO_FLOAT(iLocal_935);
			fVar17 = (fVar16 + fParam10);
			fVar18 = func_157(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()), fVar16, fVar17);
			fVar18 = (fVar18 - fVar16);
			fVar18 = (fVar18 / fParam10);
			if (iParam15 == 1)
			{
				fVar18 = func_156(fVar18);
			}
			else if (iParam15 == 2)
			{
				fVar18 = func_155(fVar18);
			}
			else if (iParam15 == 3)
			{
				fVar18 = func_153(fVar18);
			}
			fVar18 = (fVar18 * fParam10);
			fVar18 = (fVar18 + fVar16);
			PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_933, func_151(Var0 + Vector(fLocal_934, 0f, 0f), Var6 + Vector(fLocal_934, 0f, 0f), fVar16, fVar17, fVar18), 0, 0, 1);
			if (iLocal_930 && !PED::IS_PED_ON_ANY_BIKE(iParam0))
			{
				ENTITY::SET_ENTITY_ROTATION(iLocal_933, func_151((0f - Var3.x), (0f - Var3.f_1), (Var3.f_2 + 180f), (0f - Var9.x), (0f - Var9.f_1), (Var9.f_2 + 180f), fVar16, fVar17, fVar18), 2, 1);
			}
			else
			{
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (PED::IS_PED_ON_ANY_BIKE(iParam0))
					{
						PED::SET_PED_RESET_FLAG(iParam0, 236, 1);
						PED::SET_PED_RESET_FLAG(iParam0, 309, 1);
					}
				}
				ENTITY::SET_ENTITY_ROTATION(iLocal_933, func_151(Var3, Var9, fVar16, fVar17, fVar18), 2, 1);
			}
			ENTITY::SET_ENTITY_COLLISION(iLocal_933, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_933, 1);
		}
		else
		{
			iLocal_929 = 2;
			return 0;
		}
		if (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) > (SYSTEM::TO_FLOAT(iLocal_935) + fParam10) && SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) > ((SYSTEM::TO_FLOAT(iLocal_935) + fParam10) + 2600f))
		{
			iLocal_929 = 2;
			return 0;
		}
	}
	if (iLocal_929 == 2)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 236, 0);
		PED::SET_PED_RESET_FLAG(iParam0, 309, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_933))
		{
			if (!func_4(Param11, 0f, 0f, 0f))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_933, Param11, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_933, Param11.f_3);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_933);
			}
			ENTITY::SET_ENTITY_COLLISION(iLocal_933, 1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_933, 0);
			iLocal_933 = 0;
		}
		if (PED::IS_PED_ON_ANY_BIKE(iParam0))
		{
			PED::REMOVE_PED_HELMET(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_151(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)//Position - 0x12AD2
{
	return func_152(Param0.x, Param3.x, fParam6, fParam7, fParam8), func_152(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_152(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_152(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x12B0C
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_153(float fParam0)//Position - 0x12B28
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = SYSTEM::SIN(func_154(((fParam0 * 3.141593f) * 0.5f)));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_154(float fParam0)//Position - 0x12B64
{
	return (fParam0 * 57.29578f);
}

float func_155(float fParam0)//Position - 0x12B74
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - SYSTEM::COS(func_154(((fParam0 * 3.141593f) * 0.5f))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_156(float fParam0)//Position - 0x12BB2
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - SYSTEM::COS(func_154((fParam0 * 3.141593f)))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_157(float fParam0, float fParam1, float fParam2)//Position - 0x12BF0
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_158()//Position - 0x12C17
{
	Global_67138.f_553 = 1;
	Global_67138.f_554 = 0;
}

void func_159(var uParam0)//Position - 0x12C2F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = uParam0;
		iVar1 = (9 + (iVar2 - 21));
		if (iVar0 > 0)
		{
			iVar2 = (iVar2 + 2 + iVar0 * 3);
			iVar1 = ((9 + (iVar2 - 21)) - 2);
		}
		iLocal_116[iVar2] = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[iVar1 /*54*/].f_42;
		if (iLocal_116[iVar2] != 0)
		{
			if (!MISC::IS_BIT_SET(uLocal_47[iVar2], 2))
			{
				STREAMING::REQUEST_MODEL(iLocal_116[iVar2]);
				MISC::SET_BIT(&(uLocal_47[iVar2]), 2);
				func_312(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_160()//Position - 0x12CBD
{
	return !Global_67138.f_553;
}

void func_161(struct<3> Param0, float fParam3, int iParam4)//Position - 0x12CCD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_40(&(Global_67138.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_67138.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_162(iVar0);
			}
		}
		iVar0++;
	}
}

void func_162(int iParam0)//Position - 0x12D1D
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_40(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_139[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_67138.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_67138.f_139[iParam0], 1, 1);
				VEHICLE::DELETE_VEHICLE(&(Global_67138.f_139[iParam0]));
			}
		}
		Global_67138[iParam0] = 1;
		if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_46(iParam0, 0)) && Global_68047.f_42 == 0) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Global_67138.f_555[0 /*21*/].f_14] != 0) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Global_67138.f_555[0 /*21*/].f_14] > 3) && (!func_163(0, Global_67138.f_555[0 /*21*/].f_12) || !func_163(1, Global_67138.f_555[0 /*21*/].f_12)))
			{
				func_91(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[Global_67138.f_555[0 /*21*/].f_14 /*54*/], &Global_68047);
				Global_68101 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4799;
			}
			func_314(iParam0, 0);
		}
	}
}

int func_163(int iParam0, int iParam1)//Position - 0x12E92
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_164(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/])))
	{
		return 0;
	}
	return func_21(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/][iParam0 /*54*/].f_42);
}

int func_164(var uParam0)//Position - 0x12F03
{
	return *uParam0;
}

void func_165(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)//Position - 0x12F0E
{
	struct<54> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[25], 0))
			{
				if (Global_67138.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_166(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		func_15(iParam0, &Var0);
		if (func_4(Param1, 0f, 0f, 0f))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_68102 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_90(iParam5, Var0, Param1, fParam4, func_25(iParam0));
		func_13(iParam5, iParam0, 0);
	}
}

void func_166(int iParam0)//Position - 0x13039
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_92(iParam0);
	func_314(iParam0, 0);
}

int func_167(int iParam0, int iParam1, int iParam2)//Position - 0x13060
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (MISC::GET_HASH_KEY(sVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_14(iParam0, iParam2);
	return 1;
}

int func_168(var uParam0, var uParam1, var uParam2)//Position - 0x130A0
{
	if (CAM::DOES_CAM_EXIST(*uParam1))
	{
		CAM::DESTROY_CAM(*uParam1, 0);
	}
	if (CAM::DOES_CAM_EXIST(*uParam2))
	{
		CAM::DESTROY_CAM(*uParam2, 0);
	}
	*uParam1 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	*uParam2 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	if (CAM::DOES_CAM_EXIST(*uParam1) && CAM::DOES_CAM_EXIST(*uParam2))
	{
		CAM::SET_CAM_COORD(*uParam1, *uParam0);
		CAM::SET_CAM_ROT(*uParam1, uParam0->f_3, 2);
		CAM::SET_CAM_FOV(*uParam1, uParam0->f_12);
		CAM::SET_CAM_COORD(*uParam2, uParam0->f_6);
		CAM::SET_CAM_ROT(*uParam2, uParam0->f_6.f_3, 2);
		CAM::SET_CAM_FOV(*uParam2, uParam0->f_12);
		CAM::SHAKE_CAM(*uParam1, "HAND_SHAKE", uParam0->f_13);
		CAM::SHAKE_CAM(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f)
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(*uParam2, *uParam1, SYSTEM::ROUND((uParam0->f_14 * 1000f)), 1, 1);
		}
		else
		{
			CAM::SET_CAM_ACTIVE(*uParam1, 1);
		}
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_169(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x131A7
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_173(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_14393.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_57())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_172(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_173(0);
		HUD::THEFEED_RESUME();
		Global_54756 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_172(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_170(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_68243 = 0;
	}
}

int func_170(int iParam0)//Position - 0x13278
{
	if (func_69(iParam0, 0))
	{
		return 1;
	}
	if (func_171())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_171()//Position - 0x132B9
{
	return MISC::IS_BIT_SET(Global_2359301, 3);
}

int func_172(int iParam0, var uParam1, var uParam2)//Position - 0x132CA
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_173(int iParam0)//Position - 0x132FB
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 13);
	}
}

int func_174(int iParam0)//Position - 0x1331E
{
	func_40(&(Global_67138.f_555[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_67138.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_175(26))
			{
				return 26;
			}
			if (!func_175(29))
			{
				return 29;
			}
			if (!func_175(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_67138.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_175(27))
			{
				return 27;
			}
			if (!func_175(30))
			{
				return 30;
			}
			if (!func_175(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_67138.f_555[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_175(28))
			{
				return 28;
			}
			if (!func_175(31))
			{
				return 31;
			}
			if (!func_175(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_175(int iParam0)//Position - 0x13420
{
	return func_46(iParam0, 0);
}

void func_176(int iParam0, bool bParam1)//Position - 0x1342F
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_178(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_136(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (func_177(iParam0))
			{
				func_136(iParam0, 0);
			}
		}
		INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_177(int iParam0)//Position - 0x134BA
{
	struct<2> Var0;
	
	Var0 = { func_137(iParam0) };
	if (MISC::IS_BIT_SET(Global_30782[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

var func_178(int iParam0, int iParam1)//Position - 0x134E3
{
	struct<5> Var0;
	
	Var0 = { func_179(iParam0) };
	*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_179(int iParam0)//Position - 0x13508
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_180(1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_180(2) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_180(3) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_180(4) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_180(5) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_180(6) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_180(7) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1048995[34 /*1425*/].f_146.f_1041 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_180(35) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_180(36) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_180(37) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_180(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_180(39) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_180(40) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_180(41) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_180(42) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_180(43) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_180(int iParam0)//Position - 0x13DC7
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

void func_181(int iParam0, bool bParam1)//Position - 0x14249
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_178(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !INTERIOR::IS_INTERIOR_CAPPED(iVar1))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_138(iParam0, 1);
				return;
			}
			INTERIOR::CAP_INTERIOR(iVar1, 1);
		}
		else if (!bParam1 && INTERIOR::IS_INTERIOR_CAPPED(iVar1))
		{
			if (func_182(iParam0))
			{
				func_138(iParam0, 0);
			}
			INTERIOR::CAP_INTERIOR(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_182(iParam0))
			{
				func_138(iParam0, 0);
			}
		}
	}
}

int func_182(int iParam0)//Position - 0x142EF
{
	struct<2> Var0;
	
	Var0 = { func_137(iParam0) };
	if (MISC::IS_BIT_SET(Global_30779[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

int func_183()//Position - 0x14318
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || func_174(Local_401) != -1)
	{
		return 1;
	}
	return 0;
}

int func_184(float fParam0, float fParam1, float fParam2)//Position - 0x14341
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_185(int iParam0, var uParam1)//Position - 0x143B6
{
	uParam1->f_73[1 /*4*/] = { 194.674f, -1026.984f, -100f };
	uParam1->f_73[1 /*4*/].f_3 = 285f;
	*(uParam1[2 /*15*/]) = { 198.9908f, -1025.956f, -98.8981f };
	(uParam1[2 /*15*/])->f_3 = { -4.5679f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_6 = { 198.6016f, -1026.103f, -98.9313f };
	(uParam1[2 /*15*/])->f_6.f_3 = { -5.3499f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_12 = 25.2218f;
	(uParam1[2 /*15*/])->f_13 = 0.2f;
	(uParam1[2 /*15*/])->f_14 = 3.5f;
	uParam1->f_61[2] = 0f;
	switch (iParam0)
	{
		case 21:
			*(uParam1[0 /*15*/]) = { -84.4891f, 95.2463f, 72.7397f };
			(uParam1[0 /*15*/])->f_3 = { -1.0236f, 0.0007f, -126.7439f };
			(uParam1[0 /*15*/])->f_6 = { -84.1568f, 94.9229f, 72.7318f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.0236f, 0.0007f, -127.1499f };
			(uParam1[0 /*15*/])->f_12 = 25.1687f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -62.5434f, 80.2917f, 70.5644f };
			uParam1->f_73[0 /*4*/].f_3 = 345f;
			*(uParam1[1 /*15*/]) = { -61.075f, 81.2555f, 84.5867f };
			(uParam1[1 /*15*/])->f_3 = { -69.9271f, 0f, 103.892f };
			(uParam1[1 /*15*/])->f_6 = { -60.6284f, 81.2036f, 84.5867f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -73.4239f, 0f, 108.7693f };
			(uParam1[1 /*15*/])->f_12 = 29.9579f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -60.3859f, 78.4352f, 70.5249f };
			uParam1->f_86[0 /*6*/] = { -67.0129f, 81.9471f, 70.5249f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -117.9206f };
			*(uParam1[3 /*15*/]) = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_3 = { -57.747f, 0f, 34.1968f };
			(uParam1[3 /*15*/])->f_6 = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -48.0008f, 0f, 49.6137f };
			(uParam1[3 /*15*/])->f_12 = 30.0324f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -62.6272f, 79.7534f, 70.6161f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 65f };
			uParam1->f_66[1 /*3*/] = { -79.1059f, 87.1091f, 70.5157f };
			uParam1->f_73[2 /*4*/] = { -88.4f, 70.8f, 72f };
			uParam1->f_73[2 /*4*/].f_3 = 150f;
			return 1;
			break;
		
		case 22:
			*(uParam1[0 /*15*/]) = { -66.6121f, -1842.122f, 26.6941f };
			(uParam1[0 /*15*/])->f_3 = { 3.4131f, -0.0009f, 17.9566f };
			(uParam1[0 /*15*/])->f_6 = { -66.5137f, -1841.616f, 26.7211f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.1669f, -0.0009f, 18.0384f };
			(uParam1[0 /*15*/])->f_12 = 25.1856f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -72.5431f, -1820.447f, 25.9424f };
			uParam1->f_73[0 /*4*/].f_3 = 140f;
			*(uParam1[1 /*15*/]) = { -72.7256f, -1823.283f, 41.0951f };
			(uParam1[1 /*15*/])->f_3 = { -81.9335f, 0f, -58.1415f };
			(uParam1[1 /*15*/])->f_6 = { -72.9027f, -1822.998f, 41.0951f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.6657f, 0f, -29.6554f };
			(uParam1[1 /*15*/])->f_12 = 29.9864f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 3f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -76.7939f, -1816.77f, 26.6473f };
			uParam1->f_86[0 /*6*/] = { -69.2183f, -1823.258f, 25.9421f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, 49.4214f };
			*(uParam1[3 /*15*/]) = { -70.9492f, -1820.936f, 45.3628f };
			(uParam1[3 /*15*/])->f_3 = { -85.5171f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_6 = { -70.9836f, -1821.023f, 45.3628f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -89.4995f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_12 = 28.4803f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 4f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -75.3386f, -1818.249f, 26.0241f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, -132.7699f };
			uParam1->f_66[1 /*3*/] = { -63.988f, -1829.39f, 26.423f };
			uParam1->f_73[2 /*4*/] = { -49.738f, -1830.147f, 25.5591f };
			uParam1->f_73[2 /*4*/].f_3 = 317.3589f;
			return 1;
			break;
		
		case 23:
			*(uParam1[0 /*15*/]) = { -237.074f, -1170.391f, 23.479f };
			(uParam1[0 /*15*/])->f_3 = { 7.619f, 0f, -69.7398f };
			(uParam1[0 /*15*/])->f_6 = { -237.2166f, -1169.672f, 23.4931f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 7.619f, 0f, -71.3391f };
			(uParam1[0 /*15*/])->f_12 = 40.0015f;
			(uParam1[0 /*15*/])->f_13 = 0.2f;
			(uParam1[0 /*15*/])->f_14 = 3.5f;
			uParam1->f_61[0] = 0f;
			uParam1->f_73[0 /*4*/] = { -218.0289f, -1162.392f, 22.0242f };
			uParam1->f_73[0 /*4*/].f_3 = 15f;
			*(uParam1[1 /*15*/]) = { -219.5507f, -1159.951f, 36.8399f };
			(uParam1[1 /*15*/])->f_3 = { -81.7188f, 0f, 170.4291f };
			(uParam1[1 /*15*/])->f_6 = { -219.1442f, -1160.019f, 36.8399f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.5726f, 0f, -168.992f };
			(uParam1[1 /*15*/])->f_12 = 30.0319f;
			(uParam1[1 /*15*/])->f_13 = 0.2f;
			(uParam1[1 /*15*/])->f_14 = 4f;
			uParam1->f_61[1] = 1f;
			uParam1->f_66[0 /*3*/] = { -211.6438f, -1162.407f, 22.0234f };
			uParam1->f_86[0 /*6*/] = { -221.6438f, -1162.407f, 22.0234f };
			uParam1->f_86[0 /*6*/].f_3 = { 0f, 0f, -90f };
			*(uParam1[3 /*15*/]) = { -218.5983f, -1159.061f, 31.4452f };
			(uParam1[3 /*15*/])->f_3 = { -62.4689f, 0f, -142.2907f };
			(uParam1[3 /*15*/])->f_6 = { -218.6533f, -1159.067f, 31.4471f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -62.4689f, 0f, -172.3491f };
			(uParam1[3 /*15*/])->f_12 = 30f;
			(uParam1[3 /*15*/])->f_13 = 0.2f;
			(uParam1[3 /*15*/])->f_14 = 3f;
			uParam1->f_61[3] = 1f;
			uParam1->f_86[1 /*6*/] = { -214.5676f, -1162.658f, 21.9591f };
			uParam1->f_86[1 /*6*/].f_3 = { 0f, 0f, 90f };
			uParam1->f_66[1 /*3*/] = { -227.7619f, -1162.848f, 22.0085f };
			uParam1->f_73[2 /*4*/] = { -221.6f, -1156.3f, 22.6f };
			uParam1->f_73[2 /*4*/].f_3 = 0f;
			return 1;
			break;
	}
	return 0;
}

void func_186()//Position - 0x14BA7
{
	struct<5> Var0;
	int iVar21;
	bool bVar22;
	char cVar23[16];
	float fVar27;
	int iVar28;
	struct<3> Var29;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	
	if ((((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || func_10(0)) || func_10(3)) || func_10(2)) || func_10(4)) || func_10(14)) || !func_8(iLocal_646))
	{
		return;
	}
	if (!Global_67058)
	{
		if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_626[iLocal_751] != -15)
		{
			if (!Global_67138[Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_313[iLocal_751]])
			{
				if (func_236(func_29(), Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_626[iLocal_751]))
				{
					func_234(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/][iLocal_751], iLocal_751, iLocal_646);
					func_40(&Var0, Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_313[iLocal_751]);
					if (Var0.f_4 == 0)
					{
					}
					else
					{
						func_314(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_313[iLocal_751], 1);
					}
					Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_626[iLocal_751] = -15;
				}
			}
		}
		iLocal_751++;
		if (iLocal_751 >= 312)
		{
			iLocal_751 = 0;
		}
	}
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != Local_401.f_7 || Local_401.f_2 == 99)
	{
		if (Local_401.f_5 != -1)
		{
			func_48(&(Local_401.f_5));
		}
		if (Local_401.f_2 > 0)
		{
			HUD::CLEAR_HELP(1);
		}
		Local_401.f_7 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		Local_401.f_5 = -1;
		Local_401.f_2 = 0;
		Local_401.f_4 = 0;
		if (bLocal_750)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (CAM::DOES_CAM_EXIST(Local_401.f_110))
			{
				CAM::SET_CAM_ACTIVE(Local_401.f_110, 0);
				CAM::DESTROY_CAM(Local_401.f_110, 0);
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
			}
			iVar21 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar21) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar21, 0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar21, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iVar21, 0);
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar21, 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar21);
				}
			}
			if (INTERIOR::IS_VALID_INTERIOR(Local_401.f_112))
			{
				INTERIOR::UNPIN_INTERIOR(Local_401.f_112);
			}
			StringCopy(&Global_31718, "", 32);
			if ((Local_401 == 21 || Local_401 == 22) || Local_401 == 23)
			{
				func_181(47, 1);
				func_176(47, 1);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			STREAMING::CLEAR_FOCUS();
			HUD::DISPLAY_HUD(1);
			HUD::DISPLAY_RADAR(1);
			func_169(0, 1, 1, 0);
			bLocal_750 = false;
			Global_24697 = 0;
		}
	}
	bVar22 = false;
	if ((((((((((!bLocal_750 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !Local_401.f_29.f_69)) || (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))) || (!bLocal_750 && func_46(Local_401, 5))) || (!bLocal_750 && PAD::IS_CONTROL_JUST_PRESSED(2, 199))) || (!bLocal_750 && HUD::IS_PAUSE_MENU_ACTIVE())) || !func_232(0)) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || Global_24594) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())))
	{
		if (Local_401.f_2 > 0 && Local_401.f_2 != 90)
		{
			iLocal_910 = 1;
			Local_401.f_2 = 99;
		}
		bVar22 = true;
	}
	fVar27 = 20f;
	iVar28 = 3;
	switch (Local_401.f_2)
	{
		case 0:
			if ((((Local_401 != -1 && func_46(Local_401, 0)) && !func_46(Local_401, 5)) && !bLocal_911) && !bVar22)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					cVar23 = { Local_401.f_29.f_63 };
					StringConCat(&cVar23, "_01", 16);
					func_125(&(Local_401.f_5), 3, &cVar23, 0, 0);
					Local_401.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_120(Local_401.f_5, 1))
			{
				if (func_231(iLocal_646) < Local_401.f_29.f_67)
				{
					Local_401.f_4 = MISC::GET_GAME_TIMER();
					func_48(&(Local_401.f_5));
					iLocal_643 = 0;
					Local_401.f_2 = 90;
				}
				else
				{
					iLocal_643 = 0;
					Local_401.f_4 = MISC::GET_GAME_TIMER();
					func_48(&(Local_401.f_5));
					Local_401.f_2 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_643++;
			if (iLocal_643 >= 3)
			{
				cVar23 = { Local_401.f_29.f_63 };
				StringConCat(&cVar23, "_02", 16);
				func_125(&(Local_401.f_5), 3, &cVar23, 0, 0);
				Local_401.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_120(Local_401.f_5, 1))
			{
				if (func_231(iLocal_646) < Local_401.f_29.f_67)
				{
					Local_401.f_4 = MISC::GET_GAME_TIMER();
					Local_401.f_2 = 90;
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", 1);
					bLocal_750 = false;
					if ((Local_401 == 15 || Local_401 == 17) || Local_401 == 16)
					{
						Local_515.f_4 = 112;
						bLocal_750 = true;
					}
					else if (Local_401 == 18 || Local_401 == 19)
					{
						Local_515.f_4 = 114;
						bLocal_750 = true;
					}
					else if (Local_401 == 12 || Local_401 == 13)
					{
						Local_515.f_4 = 113;
						bLocal_750 = true;
					}
					else if ((Local_401 == 21 || Local_401 == 22) || Local_401 == 23)
					{
						Local_515.f_4 = 115;
						bLocal_750 = true;
					}
					Local_515 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
					Local_515.f_1 = 0;
					Local_515.f_3 = 0;
					Local_515.f_2 = 0;
					iLocal_752 = 1;
					Global_24697 = 1;
					if (bLocal_750)
					{
						if ((Local_401 == 21 || Local_401 == 22) || Local_401 == 23)
						{
							func_181(47, 0);
							func_176(47, 0);
							Local_401.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (INTERIOR::IS_VALID_INTERIOR(Local_401.f_112))
							{
								if (!INTERIOR::IS_INTERIOR_READY(Local_401.f_112))
								{
									INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_401.f_112);
								}
								StringCopy(&Global_31718, "v_garagem_sp", 32);
							}
						}
						PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
						STREAMING::NEW_LOAD_SCENE_STOP();
						Local_401.f_4 = MISC::GET_GAME_TIMER();
						Local_401.f_2 = 4;
					}
					else
					{
						Local_401.f_2 = 8;
					}
					func_48(&(Local_401.f_5));
				}
			}
			break;
		
		case 4:
			bVar32 = true;
			if ((Local_401 == 21 || Local_401 == 22) || Local_401 == 23)
			{
				Local_401.f_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!INTERIOR::IS_VALID_INTERIOR(Local_401.f_112) || INTERIOR::IS_INTERIOR_CAPPED(Local_401.f_112)) || INTERIOR::IS_INTERIOR_DISABLED(Local_401.f_112))
				{
					func_181(47, 0);
					func_176(47, 0);
					bVar32 = false;
				}
			}
			if (bVar32)
			{
				if (Local_401 == 12)
				{
					fVar27 = 95f;
					iVar28 = 2;
				}
				else if (Local_401 == 13)
				{
					fVar27 = 150f;
					iVar28 = 2;
				}
				else if ((Local_401 == 21 || Local_401 == 22) || Local_401 == 23)
				{
					fVar27 = 150f;
					iVar28 = 2;
				}
				Var29 = { SYSTEM::COS((Local_401.f_29.f_14.f_3.f_2 + 90f)), SYSTEM::SIN((Local_401.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if ((Local_401 == 21 || Local_401 == 22) || Local_401 == 23)
				{
					if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(200.4651f, -1020.631f, -100f, 50f, 0) || (MISC::GET_GAME_TIMER() - Local_401.f_4) > 3500)
					{
						Local_401.f_4 = MISC::GET_GAME_TIMER();
						Local_401.f_2 = 5;
					}
				}
				else if (STREAMING::NEW_LOAD_SCENE_START(Local_401.f_29.f_14, Var29, fVar27, iVar28) || (MISC::GET_GAME_TIMER() - Local_401.f_4) > 3500)
				{
					Local_401.f_4 = MISC::GET_GAME_TIMER();
					Local_401.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && (!INTERIOR::IS_VALID_INTERIOR(Local_401.f_112) || INTERIOR::IS_INTERIOR_READY(Local_401.f_112))) || (MISC::GET_GAME_TIMER() - Local_401.f_4) > 10000)
			{
				Local_401.f_4 = MISC::GET_GAME_TIMER();
				Local_401.f_2 = 6;
			}
			break;
		
		case 6:
			if ((MISC::GET_GAME_TIMER() - Local_401.f_4) > 1000)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_923) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_923)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_923, 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_923);
				}
				iLocal_923 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_923) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_923, 0)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_923))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_923))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_923)))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_923))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_923, 0, 0);
					}
				}
				else
				{
					iLocal_923 = 0;
				}
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 16);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 32);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 128);
					PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
				}
				func_169(1, 1, 1, 0);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				Var29 = { SYSTEM::COS((Local_401.f_29.f_14.f_3.f_2 + 90f)), SYSTEM::SIN((Local_401.f_29.f_14.f_3.f_2 + 90f)), 0f };
				if (!Local_401.f_29.f_69)
				{
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_401.f_29.f_14, Var29);
				}
				if (!CAM::DOES_CAM_EXIST(Local_401.f_110))
				{
					Local_401.f_110 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
				}
				if (CAM::DOES_CAM_EXIST(Local_401.f_110))
				{
					if (Local_401.f_29.f_69)
					{
						INTERIOR::_0xAF348AFCB575A441("GtaMloRoom001");
					}
					func_169(1, 1, 1, 0);
					func_168(&(Local_401.f_29.f_14), &(Local_401.f_110), &(Local_401.f_111));
				}
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				STREAMING::NEW_LOAD_SCENE_STOP();
				Local_401.f_2 = 7;
				Local_401.f_4 = MISC::GET_GAME_TIMER();
				func_48(&(Local_401.f_5));
			}
			break;
		
		case 7:
			if ((MISC::GET_GAME_TIMER() - Local_401.f_4) < 7000 && !func_229(1000))
			{
				cVar23 = { Local_401.f_29.f_63 };
				StringConCat(&cVar23, "_05", 16);
				func_123(&cVar23, -1);
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (Local_401 == 12 || Local_401 == 13)
					{
						fVar27 = 85f;
						iVar28 = 2;
					}
					Var29 = { SYSTEM::COS((Local_401.f_29.f_29.f_2 + 90f)), SYSTEM::SIN((Local_401.f_29.f_29.f_2 + 90f)), 0f };
					STREAMING::NEW_LOAD_SCENE_START(Local_401.f_29.f_29, Var29, fVar27, iVar28);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_401.f_110))
				{
					if (Local_401.f_29.f_69)
					{
						INTERIOR::_0xAF348AFCB575A441("GtaMloRoom001");
					}
					func_169(1, 1, 1, 0);
					func_168(&(Local_401.f_29.f_29), &(Local_401.f_110), &(Local_401.f_111));
				}
				STREAMING::CLEAR_FOCUS();
				HUD::CLEAR_HELP(1);
				Local_401.f_4 = MISC::GET_GAME_TIMER();
				Local_401.f_2 = 8;
			}
			break;
		
		case 8:
			if ((MISC::GET_GAME_TIMER() - Local_401.f_4) < 7000 && !func_229(1000))
			{
				cVar23 = { Local_401.f_29.f_63 };
				StringConCat(&cVar23, "_06", 16);
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_123(&cVar23, 7000);
				}
			}
			else
			{
				HUD::CLEAR_HELP(1);
				Local_401.f_4 = MISC::GET_GAME_TIMER();
				Local_401.f_2 = 9;
			}
			break;
		
		case 9:
			if ((MISC::GET_GAME_TIMER() - Local_401.f_4) < 3500 && !func_229(1000))
			{
				cVar23 = { Local_401.f_29.f_63 };
				StringConCat(&cVar23, "_03", 16);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_515))
				{
					if (Local_515.f_1)
					{
						if (!Local_515.f_3)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
							Local_515.f_3 = 1;
						}
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_515, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_515, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_67(&cVar23);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						Local_515.f_1 = 1;
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - Local_401.f_4) < 4000 && !func_229(1000))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_515))
				{
					if (Local_515.f_2)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_515, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_515, "SHARD_ANIM_OUT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						Local_515.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_750)
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					if (CAM::DOES_CAM_EXIST(Local_401.f_110))
					{
						CAM::SET_CAM_ACTIVE(Local_401.f_110, 0);
						CAM::DESTROY_CAM(Local_401.f_110, 0);
					}
					if (CAM::DOES_CAM_EXIST(Local_401.f_111))
					{
						CAM::SET_CAM_ACTIVE(Local_401.f_111, 0);
						CAM::DESTROY_CAM(Local_401.f_111, 0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					iVar33 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
						if ((ENTITY::DOES_ENTITY_EXIST(iVar33) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar33, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar33, 0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar33, Local_401.f_29.f_44, 1, 1, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar33, Local_401.f_29.f_47);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar33);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_401.f_29.f_44, 1, 1, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_401.f_29.f_47);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_923) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_923, 0))
					{
						if (Local_401 == 21)
						{
							MISC::CLEAR_AREA(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
							ENTITY::SET_ENTITY_COORDS(iLocal_923, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_923, 154.4846f);
						}
						else if (Local_401 == 22)
						{
							MISC::CLEAR_AREA(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
							ENTITY::SET_ENTITY_COORDS(iLocal_923, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_923, 319.6985f);
						}
						else if (Local_401 == 23)
						{
							MISC::CLEAR_AREA(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
							ENTITY::SET_ENTITY_COORDS(iLocal_923, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_923, 270.8741f);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_923);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar33) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar33, 0))
					{
						ENTITY::SET_ENTITY_VISIBLE(iVar33, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iVar33, 0);
						if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar33, 1))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar33);
						}
					}
					iVar34 = 5000;
					iVar35 = MISC::GET_GAME_TIMER();
					while (!CAM::IS_GAMEPLAY_CAM_RENDERING() && (MISC::GET_GAME_TIMER() - iVar35) < iVar34)
					{
						SYSTEM::WAIT(0);
					}
					if (INTERIOR::IS_VALID_INTERIOR(Local_401.f_112))
					{
						INTERIOR::UNPIN_INTERIOR(Local_401.f_112);
					}
					StringCopy(&Global_31718, "", 32);
					if ((Local_401 == 21 || Local_401 == 22) || Local_401 == 23)
					{
						func_181(47, 1);
						func_176(47, 1);
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4248 = 1;
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::CLEAR_FOCUS();
					HUD::DISPLAY_HUD(1);
					HUD::DISPLAY_RADAR(1);
					func_169(0, 1, 1, 0);
					bLocal_750 = false;
					Global_24697 = 0;
				}
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_515))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Local_515);
				}
				func_203(iLocal_646, Local_515.f_4, Local_401.f_29.f_67);
				func_202(Local_401, 5, 1);
				func_189(Local_401);
				if (HUD::DOES_BLIP_EXIST(Global_67138.f_208[Local_401]))
				{
					HUD::REMOVE_BLIP(&(Global_67138.f_208[Local_401]));
				}
				iLocal_836 = Local_401;
				func_188();
				Local_401.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_643++;
			if (iLocal_643 >= 3)
			{
				if ((MISC::GET_GAME_TIMER() - Local_401.f_4) < 4000)
				{
					cVar23 = { Local_401.f_29.f_63 };
					StringConCat(&cVar23, "_04", 16);
					func_187(&cVar23);
				}
				else
				{
					Local_401.f_2 = 99;
				}
			}
			break;
	}
}

void func_187(char[4] cParam0)//Position - 0x15C7F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_188()//Position - 0x15C95
{
	if (func_133(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

void func_189(int iParam0)//Position - 0x15CE0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 21:
			iVar0 = 20;
			iVar1 = 155;
			break;
		
		case 22:
			iVar0 = 21;
			iVar1 = 156;
			break;
		
		case 23:
			iVar0 = 22;
			iVar1 = 157;
			break;
		
		case 12:
			iVar0 = 13;
			iVar1 = 57;
			break;
		
		case 13:
			iVar0 = 16;
			iVar1 = 62;
			break;
		
		case 14:
			iVar0 = 19;
			iVar1 = 63;
			break;
		
		case 15:
			iVar0 = 12;
			iVar1 = 56;
			break;
		
		case 16:
			iVar0 = 15;
			iVar1 = 60;
			break;
		
		case 17:
			iVar0 = 18;
			iVar1 = 61;
			break;
		
		case 18:
			iVar0 = 11;
			iVar1 = 55;
			break;
		
		case 19:
			iVar0 = 14;
			iVar1 = 58;
			break;
	}
	func_201(iVar0, 0);
	iVar2 = func_200(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_199(iVar0);
		if (func_197(iVar0, iVar1, 1))
		{
			func_190(iVar0);
			func_199(iVar0);
		}
	}
}

void func_190(int iParam0)//Position - 0x15DE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_196(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_45154[iVar0 /*203*/].f_9 - 1);
	if (!Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_195(Global_35970[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		func_191(1, Global_35970[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_35970[iVar1 /*12*/].f_3)
		{
			case 0:
				func_191(0, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_191(1, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_191(2, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_191(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x16157
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_308();
	bVar1 = false;
	StringCopy(&cVar2, func_194(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1");
				break;
			
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3");
				break;
			
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2");
				break;
			
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_192(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, 0, 2, HUD::_GET_LABEL_TEXT(func_193(iParam1)), 0));
		}
		else
		{
			func_192(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, HUD::_GET_LABEL_TEXT(func_193(iParam1)), 0));
		}
		switch (Global_14393)
		{
			case 0:
				StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
				Global_35962++;
				if (Global_35962 > 16)
				{
					Global_35962 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
				Global_35964++;
				if (Global_35964 > 16)
				{
					Global_35964 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
				Global_35963++;
				if (Global_35963 > 16)
				{
					Global_35963 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_14382, 1);
	}
}

void func_192(var uParam0)//Position - 0x1633F
{
	Global_35965[Global_35969] = uParam0;
	Global_16750 = 1;
	Global_16749 = uParam0;
	Global_35969++;
	if (Global_35969 == 3)
	{
		Global_35969 = 0;
	}
}

char* func_193(int iParam0)//Position - 0x1636D
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_194(int iParam0, int iParam1)//Position - 0x166D8
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/].f_7));
		
		case 1:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/].f_7));
		
		case 2:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/].f_7));
		
		case 7:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[12 /*29*/].f_7));
		
		case 4:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[60 /*29*/].f_7));
		
		case 6:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[62 /*29*/].f_7));
		
		case 3:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[14 /*29*/].f_7));
		
		case 16:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[97 /*29*/].f_7));
		
		case 19:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[99 /*29*/].f_7));
		
		case 15:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[15 /*29*/].f_7));
		
		case 26:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[30 /*29*/].f_7));
		
		case 27:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[17 /*29*/].f_7));
		
		case 29:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[20 /*29*/].f_7));
		
		case 30:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[43 /*29*/].f_7));
		
		case 31:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[44 /*29*/].f_7));
		
		case 32:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[19 /*29*/].f_7));
		
		case 34:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[40 /*29*/].f_7));
		
		case 36:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[22 /*29*/].f_7));
		
		case 38:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[122 /*29*/].f_7));
		
		case 40:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[125 /*29*/].f_7));
		
		case 41:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[113 /*29*/].f_7));
		
		case 42:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[126 /*29*/].f_7));
		
		case 43:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[127 /*29*/].f_7));
		
		case 44:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[124 /*29*/].f_7));
		
		case 45:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[114 /*29*/].f_7));
		
		case 46:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[115 /*29*/].f_7));
		
		case 47:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[116 /*29*/].f_7));
		
		case 48:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[123 /*29*/].f_7));
		
		case 49:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[117 /*29*/].f_7));
		
		case 50:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[118 /*29*/].f_7));
		
		case 51:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[119 /*29*/].f_7));
		
		case 52:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[120 /*29*/].f_7));
		
		case 53:
			return HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_195(int iParam0)//Position - 0x16B34
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_196(int iParam0)//Position - 0x16B65
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_45154[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_45154[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_45154[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_197(int iParam0, int iParam1, bool bParam2)//Position - 0x16BC9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_201(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_45154[iVar0 /*203*/].f_2 = iParam0;
	Global_45154[iVar0 /*203*/].f_10[Global_45154[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_45154[iVar0 /*203*/].f_10[Global_45154[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_45154[iVar0 /*203*/].f_10[Global_45154[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_45154[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45154[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45154[iVar0 /*203*/].f_4[iVar1] == Global_35970[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45154[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45154[iVar0 /*203*/].f_4[Global_45154[iVar0 /*203*/].f_3] = Global_35970[iParam1 /*12*/].f_3;
			Global_45154[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45154[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45154[iVar0 /*203*/].f_4[iVar1] == Global_35970[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45154[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45154[iVar0 /*203*/].f_4[Global_45154[iVar0 /*203*/].f_3] = Global_35970[iParam1 /*12*/].f_2;
			Global_45154[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_45154[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_45154[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_198(Global_45154[iVar0 /*203*/].f_4[iVar1], Global_45154[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_198(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x16DC5
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_39271[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_39271[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_195(Global_35970[iVar20 /*12*/].f_1) };
		if (Global_35970[iVar20 /*12*/].f_2 == iParam0 && !Global_35970[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_35970[iVar20 /*12*/].f_2;
		iVar0 = Global_44792[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_44792[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_35962 = (Global_35962 - 1);
						if (Global_35962 < 0)
						{
							Global_35962 = 0;
						}
						break;
					
					case 1:
						Global_35963 = (Global_35963 - 1);
						if (Global_35963 < 0)
						{
							Global_35963 = 0;
						}
						break;
					
					case 2:
						Global_35964 = (Global_35964 - 1);
						if (Global_35964 < 0)
						{
							Global_35964 = 0;
						}
						break;
					}
				}
		}
		Global_44792[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_44792[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_44792[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_44792[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_44792[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_44792[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_35962 = (Global_35962 - 1);
						if (Global_35962 < 0)
						{
							Global_35962 = 0;
						}
						break;
					
					case 1:
						Global_35963 = (Global_35963 - 1);
						if (Global_35963 < 0)
						{
							Global_35963 = 0;
						}
						break;
					
					case 2:
						Global_35964 = (Global_35964 - 1);
						if (Global_35964 < 0)
						{
							Global_35964 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_45154[iVar24 /*203*/].f_1 == iParam1 && Global_45154[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_44792[iParam0 /*120*/].f_18[iVar0] = Global_45154[iVar23 /*203*/].f_1;
		Global_44792[iParam0 /*120*/].f_1[iVar0] = (Global_45154[iVar23 /*203*/].f_9 - 1);
		Global_44792[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_44792[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_44792[iParam0 /*120*/]++;
		iVar25 = Global_44792[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_45154[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_35970[iVar26 /*12*/].f_2;
		if (Global_45154[iVar23 /*203*/].f_10[(Global_45154[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_45154[iVar23 /*203*/].f_10[(Global_45154[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_195(Global_35970[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_44792[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_191(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_191(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_191(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_191(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_199(int iParam0)//Position - 0x1719A
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!MISC::IS_BIT_SET(Global_SAVE_DATA.Launcher_Bit_Flags, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_196(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_45154[iVar0 /*203*/] = 0;
}

int func_200(int iParam0, int iParam1, int iParam2)//Position - 0x171D7
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_46576 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45154[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_45154[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_45154[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_46577[iVar1 /*53*/].f_52 == 0)
		{
			Global_46577[iVar1 /*53*/].f_52 = iVar0;
			Global_46577[iVar1 /*53*/] = iParam0;
			Global_46577[iVar1 /*53*/].f_1 = iParam1;
			Global_46577[iVar1 /*53*/].f_2 = iParam2;
			Global_SAVE_DATA.EMAIL_DATA.f_310++;
			if (Global_SAVE_DATA.EMAIL_DATA.f_310 == 0)
			{
				Global_SAVE_DATA.EMAIL_DATA.f_310 = 1;
			}
			Global_46577[iVar1 /*53*/].f_10 = 0;
			Global_46577[iVar1 /*53*/].f_3 = Global_SAVE_DATA.EMAIL_DATA.f_310;
			Global_46577[iVar1 /*53*/].f_4 = 1;
			Global_46576++;
			return Global_46577[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_201(int iParam0, bool bParam1)//Position - 0x172F2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_196(iParam0);
	if (iVar0 > -1)
	{
		if (Global_45154[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45154[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45154[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_45154[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_45154[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_45154[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_45154[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_45154[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_44792[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_44792[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_44792[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_44792[iVar6 /*120*/].f_18[iVar8] == Global_45154[iVar4 /*203*/].f_1)
							{
								if (Global_44792[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_35962 = (Global_35962 - 1);
											break;
										
										case 1:
											Global_35963 = (Global_35963 - 1);
											break;
										
										case 2:
											Global_35964 = (Global_35964 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_45154[iVar4 /*203*/].f_2 = iParam0;
	Global_45154[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_45154[iVar4 /*203*/] = 1;
	}
	Global_SAVE_DATA.EMAIL_DATA.f_310++;
	if (Global_SAVE_DATA.EMAIL_DATA.f_310 == 0)
	{
		Global_SAVE_DATA.EMAIL_DATA.f_310 = 1;
	}
	Global_45154[iVar4 /*203*/].f_1 = Global_SAVE_DATA.EMAIL_DATA.f_310;
	Global_45154[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_202(int iParam0, int iParam1, bool bParam2)//Position - 0x1750A
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
}

int func_203(int iParam0, int iParam1, int iParam2)//Position - 0x17545
{
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_204(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_204(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1758E
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_228();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_227(99, 1);
					func_226(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_226(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_226(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_212(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_211(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_226(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_226(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_226(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_211(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_226(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_226(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_226(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_226(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_226(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_226(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_226(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_226(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_226(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_226(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_226(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_226(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_226(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_226(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_226(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_211(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_226(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_226(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_226(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_226(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_226(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_226(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_210(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_227(95, iParam3);
					break;
				
				case 1:
					func_227(97, iParam3);
					break;
				
				case 2:
					func_227(96, iParam3);
					break;
			}
			func_227(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_207(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_207(iVar1);
	}
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_226(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_226(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_226(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/]++;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1++;
		if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_206(iParam0);
	if (Global_34913 == 15)
	{
		func_205(0);
	}
	return 1;
}

void func_205(bool bParam0)//Position - 0x17B8D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_206(int iParam0)//Position - 0x17E0F
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_207(int iParam0)//Position - 0x17E69
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_209() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_209() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_208(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_208(int iParam0)//Position - 0x17F2B
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_209()//Position - 0x17FA5
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_210(int iParam0)//Position - 0x17FB2
{
	func_227(93, iParam0);
	func_227(29, iParam0);
	func_227(30, iParam0);
}

bool func_211(int iParam0)//Position - 0x17FD2
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_209() /*8053*/].f_5756.f_10, iParam0);
}

int func_212(bool bParam0)//Position - 0x18011
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_225(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_213(27, 1);
	return 1;
}

int func_213(int iParam0, int iParam1)//Position - 0x180C8
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_214(iParam0, iParam1);
}

int func_214(int iParam0, int iParam1)//Position - 0x180E3
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_224(&Global_2544859))
	{
		if (func_222(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_215(&Global_2544859, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_215(var uParam0, int iParam1)//Position - 0x18167
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_222(uParam0, iParam1))
	{
		return 0;
	}
	func_218(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_216(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_216(var uParam0, int iParam1)//Position - 0x181ED
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_222(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_217(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_217(var uParam0, int iParam1)//Position - 0x1823D
{
	return (*uParam0)[iParam1] == 61;
}

void func_218(var uParam0)//Position - 0x1824E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_221(uParam0, iVar0);
		iVar0++;
	}
	func_219(&(uParam0->f_62), (8f - 0.5f));
}

void func_219(var uParam0, float fParam1)//Position - 0x18285
{
	uParam0->f_1 = (func_220(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_220(bool bParam0)//Position - 0x182B3
{
	int iVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(iVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_221(var uParam0, int iParam1)//Position - 0x182FB
{
	(*uParam0)[iParam1] = 61;
}

bool func_222(var uParam0, int iParam1)//Position - 0x1830B
{
	return func_223(uParam0, iParam1) != -1;
}

int func_223(var uParam0, int iParam1)//Position - 0x1831D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_224(var uParam0)//Position - 0x1834A
{
	return uParam0->f_68 == 1;
}

int func_225(int iParam0, int iParam1)//Position - 0x18358
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_226(int iParam0, int iParam1)//Position - 0x183A9
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_227(int iParam0, int iParam1)//Position - 0x183CC
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_228()//Position - 0x18429
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

int func_229(int iParam0)//Position - 0x1849E
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			Global_26 = MISC::GET_GAME_TIMER();
		}
		Global_27 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_26) > iParam0)
		{
			if (func_230())
			{
				Global_26 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_230()//Position - 0x184E8
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_231(int iParam0)//Position - 0x1851A
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_232(int iParam0)//Position - 0x18572
{
	return func_233(iParam0, Global_34913);
}

int func_233(int iParam0, int iParam1)//Position - 0x18583
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_234(int iParam0, int iParam1, int iParam2)//Position - 0x18764
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_308();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_103(iParam1);
	switch (iParam0)
	{
		case 10:
			iVar0 = 5;
			switch (iVar2)
			{
				case 0:
					iVar1 = 32;
					break;
				
				case 2:
					iVar1 = 33;
					break;
				
				case 1:
					iVar1 = 31;
					break;
			}
			break;
		
		case 11:
			iVar0 = 7;
			if (((iParam1 == 15 || iParam1 == 16) || iParam1 == 164) || iParam1 == 217)
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 191;
						break;
					
					case 2:
						iVar1 = 193;
						break;
					
					case 1:
						iVar1 = 192;
						break;
				}
			}
			else
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 40;
						break;
					
					case 2:
						iVar1 = 42;
						break;
					
					case 1:
						iVar1 = 41;
						break;
					}
			}
			break;
		
		case 12:
			iVar0 = 6;
			switch (iVar2)
			{
				case 0:
					iVar1 = 34;
					break;
				
				case 2:
					iVar1 = 36;
					break;
				
				case 1:
					iVar1 = 35;
					break;
			}
			break;
		
		case 13:
			iVar0 = 8;
			switch (iVar2)
			{
				case 0:
					iVar1 = 37;
					break;
				
				case 2:
					iVar1 = 39;
					break;
				
				case 1:
					iVar1 = 38;
					break;
			}
			break;
		
		case 15:
			iVar0 = 9;
			switch (iVar2)
			{
				case 0:
					iVar1 = 186;
					break;
				
				case 2:
					iVar1 = 188;
					break;
				
				case 1:
					iVar1 = 185;
					break;
			}
			break;
		
		case 16:
			iVar0 = 10;
			switch (iVar2)
			{
				case 0:
					iVar1 = 189;
					break;
				
				case 2:
					iVar1 = 190;
					break;
				
				case 1:
					iVar1 = 187;
					break;
			}
			break;
		
		default:
			return;
			break;
	}
	if (func_197(iVar0, iVar1, 1))
	{
		func_235(iVar0, sVar3);
		func_190(iVar0);
		func_199(iVar0);
	}
}

void func_235(int iParam0, char* sParam1)//Position - 0x1896E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_196(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_236(int iParam0, int iParam1)//Position - 0x18A23
{
	int iVar0;
	int iVar1;
	
	if (!func_241(iParam1) || !func_241(iParam0))
	{
		return 1;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_34(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_36(iParam0);
	iVar1 = func_36(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_240(iParam0);
	iVar1 = func_240(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_239(iParam0);
	iVar1 = func_239(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_238(iParam0);
	iVar1 = func_238(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)//Position - 0x18B2F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_238(int iParam0)//Position - 0x18B42
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_239(int iParam0)//Position - 0x18B55
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_240(int iParam0)//Position - 0x18B68
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_241(int iParam0)//Position - 0x18B7A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_237(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_238(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_239(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_34(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_36(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_240(iParam0);
	if (iVar5 < 1 || iVar5 > func_33(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_242()//Position - 0x18C56
{
	int iVar0;
	var uVar1;
	char* sVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<3> Var15;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	int iVar24;
	bool bVar25;
	struct<3> Var26;
	int iVar29;
	
	iVar0 = 0;
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_68043))
			{
				func_262(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742), Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798);
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 0;
			}
			else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_68043, 0) || func_26(Global_68043, Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798, 1))
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 0;
			}
			else
			{
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == Global_68043) && func_260(PLAYER::PLAYER_PED_ID()) != Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798)
				{
					Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 = func_260(PLAYER::PLAYER_PED_ID());
				}
				if (Global_68043 != iLocal_645)
				{
					sVar2 = ENTITY::GET_ENTITY_SCRIPT(Global_68043, &uVar1);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
					{
						if (MISC::GET_HASH_KEY(sVar2) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
						{
							Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 0;
							iLocal_924 = Global_68043;
							if (Global_67138.f_139[24] == Global_68043 || (Global_68044 == Global_68043 && Global_68045 == 24))
							{
								func_259(458, 24, -1, 1);
							}
							else
							{
								func_259(458, 0, -1, 1);
							}
							Global_68043 = 0;
						}
					}
				}
				if (((Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 != func_308() && Global_89503[Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 /*74*/] == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742.f_42) && MISC::ARE_STRINGS_EQUAL(&(Global_89503[Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 /*74*/].f_27), &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742.f_1))) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_91(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 /*54*/]));
					Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 0;
					iLocal_924 = 0;
					func_259(458, 0, -1, 1);
					Global_68043 = 0;
				}
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(Global_68043) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_68043, 0)) && !func_26(Global_68043, Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798, 1))
		{
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_924) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_924, 0))
		{
			if (((!Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 && iLocal_924 != Global_68043) && iLocal_924 != iLocal_925) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_924, 1))
			{
				func_14(iLocal_924, 145);
				iLocal_924 = 0;
				func_259(458, 0, -1, 1);
			}
		}
		else if (iLocal_924 != 0)
		{
			iLocal_924 = 0;
			func_259(458, 0, -1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_925) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_925, 0))
		{
		}
		else if (iLocal_925 != 0)
		{
			iLocal_925 = 0;
		}
	}
	if (Global_68047.f_42 != 0 && Global_68044 == 0)
	{
		func_262(&Global_68047, Global_68101);
		Global_68047.f_42 = 0;
	}
	Var3 = { 433.6721f, -1006.538f, 25.96351f };
	Var6 = { 433.6578f, -1017.5f, 32.09895f };
	fVar9 = 11.25f;
	if (iLocal_641 > 0 && iLocal_641 < 99)
	{
		if (iLocal_641 != 3)
		{
			if (((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var3, Var6, fVar9, 0, 1, 0)) || func_10(0)) || func_10(3)) || func_10(2)) || func_10(14))
			{
				iLocal_641 = 99;
			}
		}
	}
	if (func_258(iLocal_646))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_753))
		{
			if (((func_10(15) || func_10(12)) && iLocal_641 != 3) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				uLocal_753 = func_256(428.37f, -1013.5f, 27.93f, 0);
				HUD::SET_BLIP_SPRITE(uLocal_753, 225);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_753, "IMPOUND_BLIPNAME");
				HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_753, true);
			}
		}
		else if ((!(func_10(15) || func_10(12)) || iLocal_641 == 3) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			HUD::REMOVE_BLIP(&uLocal_753);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_753))
	{
		HUD::REMOVE_BLIP(&uLocal_753);
	}
	switch (iLocal_641)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((Local_401.f_2 == 0 && (func_10(15) || func_10(12))) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (func_258(iLocal_646))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var3, Var6, fVar9, 0, 1, 0))
						{
							if (func_231(iLocal_646) >= 250)
							{
								iVar10 = 0;
								iVar11 = 0;
								while (iVar11 < 2)
								{
									if (func_163(iVar11, iLocal_646))
									{
										iVar10++;
									}
									iVar11++;
								}
								if (iVar10 > 1)
								{
									func_125(&iLocal_642, 3, "IMPOUND_TRIG2", 0, 0);
								}
								else
								{
									func_125(&iLocal_642, 3, "IMPOUND_TRIG1", 0, 0);
								}
								iLocal_641 = 1;
							}
							else
							{
								func_123("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_121(0, -1))
			{
				if (func_120(iLocal_642, 1))
				{
					func_48(&iLocal_642);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_255();
					iVar12 = 0;
					iVar13 = 0;
					while (iVar13 < 2)
					{
						if (func_163(iVar13, iLocal_646))
						{
							iVar12++;
						}
						iVar13++;
					}
					if (iVar12 > 1)
					{
						iLocal_631 = 0;
						iLocal_632 = 0;
						iLocal_633 = 0;
						iLocal_636 = -1;
						iLocal_641++;
					}
					else
					{
						iVar14 = 0;
						while (iVar14 < 2)
						{
							if (func_163(iVar14, iLocal_646))
							{
								if (iVar14 == 0)
								{
									Var15 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									Var15 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_249(&iLocal_645, iVar14, Var15, 179.24f, 1))
								{
									SYSTEM::WAIT(0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_645))
								{
									if (iVar14 == 0)
									{
										func_248(18, 1, 0);
									}
									else
									{
										func_248(19, 1, 0);
									}
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
									}
									func_203(iLocal_646, 117, 250);
									func_247(iVar14);
									func_14(iLocal_645, func_308());
									func_50(1, -1);
									iLocal_641 = 3;
									func_48(&iLocal_642);
									iLocal_642 = -1;
									iLocal_633 = 0;
								}
							}
							iVar14++;
						}
					}
				}
			}
			break;
		
		case 2:
			switch (func_308())
			{
				case 0:
					iVar18 = 0;
					break;
				
				case 1:
					iVar18 = 1;
					break;
				
				case 2:
					iVar18 = 2;
					break;
			}
			func_255();
			if (!iLocal_631 || iLocal_632)
			{
				func_118(0);
				func_117(1, 1, 0, 0, 0);
				func_116(1, 2, 1, 1, 1);
				func_115("IMPOUND_TITLE");
				iLocal_637 = 0;
				iVar19 = -1;
				iVar21 = 0;
				iVar20 = 0;
				while (iVar20 < 2)
				{
					if (func_163(iVar20, iLocal_646))
					{
						func_106(iVar21, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar18 /*109*/][iVar20 /*54*/].f_42), 0, 1, 0, 0);
						if (iVar19 == -1)
						{
							iVar19 = iVar21;
							iLocal_636 = iVar21;
						}
						MISC::SET_BIT(&iLocal_637, iVar21);
						iLocal_638[iVar21] = iVar20;
						func_106(iVar21, "IMPOUND_COST", 1, 1, 0, 0);
						func_244(250, 0);
						iVar21++;
					}
					iVar20++;
				}
				iVar21 = 0;
				func_102(iLocal_636, 1, 1);
				iLocal_634 = 1;
				iLocal_632 = 0;
				iLocal_631 = 1;
			}
			else
			{
				iVar0 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_USING_KEYBOARD_2(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
						func_99(0, 0, 0, 1);
						func_98(0, -1);
						if (func_97())
						{
							if (Global_2543381 != iLocal_636)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_636 = Global_2543381;
								func_102(iLocal_636, 1, 1);
								iLocal_634 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
				{
					if (!iLocal_633)
					{
						iLocal_634 = 1;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar22 = (iLocal_636 - 1);
						while (iVar22 >= 0)
						{
							if (MISC::IS_BIT_SET(iLocal_637, iVar22))
							{
								iLocal_636 = iVar22;
								bVar23 = true;
								iVar22 = 0;
							}
							iVar22 = (iVar22 + -1);
						}
						if (!bVar23)
						{
							iVar22 = 31;
							while (iVar22 >= iLocal_636 + 1)
							{
								if (MISC::IS_BIT_SET(iLocal_637, iVar22))
								{
									iLocal_636 = iVar22;
									bVar23 = true;
									iVar22 = iLocal_636;
								}
								iVar22 = (iVar22 + -1);
							}
						}
						if (bVar23)
						{
							func_102(iLocal_636, 1, 1);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
				{
					if (!iLocal_633)
					{
						iLocal_634 = 1;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar24 = iLocal_636 + 1;
						while (iVar24 <= 31)
						{
							if (MISC::IS_BIT_SET(iLocal_637, iVar24))
							{
								iLocal_636 = iVar24;
								bVar25 = true;
								iVar24 = 31;
							}
							iVar24++;
						}
						if (!bVar25)
						{
							iVar24 = 0;
							while (iVar24 <= (iLocal_636 - 1))
							{
								if (MISC::IS_BIT_SET(iLocal_637, iVar24))
								{
									iLocal_636 = iVar24;
									bVar25 = true;
									iVar24 = iLocal_636;
								}
								iVar24++;
							}
						}
						if (bVar25)
						{
							func_102(iLocal_636, 1, 1);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!iLocal_633)
					{
						func_96("IMPOUND_CNF", 0, 0);
						func_95(-1);
						func_94(201, "ITEM_YES", -1);
						func_94(202, "ITEM_NO", -1);
						iLocal_633 = 1;
					}
					else
					{
						if (iLocal_636 == 0)
						{
							Var26 = { 431.4f, -997.33f, 24.76f };
						}
						else
						{
							Var26 = { 436.39f, -997.25f, 24.76f };
						}
						if (func_163(iLocal_638[iLocal_636], iLocal_646))
						{
							while (!func_249(&iLocal_645, iLocal_638[iLocal_636], Var26, 179.24f, 1))
							{
								SYSTEM::WAIT(0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_645))
							{
								if (iLocal_636 == 0)
								{
									func_248(18, 1, 0);
								}
								else
								{
									func_248(19, 1, 0);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
								}
								func_203(iLocal_646, 117, 250);
								func_247(iLocal_638[iLocal_636]);
								func_14(iLocal_645, func_308());
								func_50(1, -1);
								iLocal_641++;
								func_48(&iLocal_642);
								iLocal_642 = -1;
								iLocal_633 = 0;
							}
						}
						iLocal_632 = 1;
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (iLocal_633)
					{
						iLocal_634 = 1;
						iLocal_633 = 0;
					}
					else
					{
						iLocal_641 = 99;
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (iLocal_634)
			{
				func_96("", 0, 0);
				func_95(-1);
				func_94(201, "ITEM_SELECT", -1);
				func_94(202, "ITEM_EXIT", -1);
				iLocal_633 = 0;
				iLocal_634 = 0;
			}
			if (func_121(0, -1))
			{
				func_53(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			break;
		
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 431.4f, -997.33f, 24.76f, 1) > 20f && !func_243())
			{
				func_14(iLocal_645, func_308());
				iLocal_641 = 99;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 431.4f, -997.33f, 24.76f, 1) > 100f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_645))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_645))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_645, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_645, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) > 100f)
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_645))
							{
								func_167(iLocal_645, 1, 145);
								VEHICLE::DELETE_VEHICLE(&iLocal_645);
								MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
								iLocal_641 = 99;
							}
						}
						else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_645, 0))
						{
							MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
							func_14(iLocal_645, func_308());
							iLocal_641 = 99;
						}
					}
					else
					{
						MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
						iLocal_641 = 99;
					}
				}
				else
				{
					MISC::CLEAR_AREA_OF_VEHICLES(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
					iLocal_641 = 99;
				}
			}
			break;
		
		case 99:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
			func_48(&iLocal_642);
			iVar29 = 0;
			while (iVar29 < 2)
			{
				iLocal_638[iVar29] = -1;
				iVar29++;
			}
			func_248(18, 0, 0);
			func_248(19, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_645))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_645);
			}
			iLocal_641 = 0;
			break;
	}
	if (iLocal_641 == 0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, 1, 0))
		{
			if (!iLocal_644)
			{
				func_248(18, 1, 0);
				iLocal_644 = 1;
			}
		}
		else if (iLocal_644 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, 1, 0))
		{
			func_248(18, 0, 0);
			iLocal_644 = 0;
		}
	}
}

int func_243()//Position - 0x19A3D
{
	if (MISC::IS_POSITION_OCCUPIED(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_244(int iParam0, bool bParam1)//Position - 0x19AE7
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17236.f_4496 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 >= 4)
	{
		return;
	}
	if (Global_17236.f_4999 != 1)
	{
		return;
	}
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		return;
	}
	Global_17236.f_3340[Global_17236.f_4496] = iParam0;
	Global_17236.f_4496++;
	Global_17236.f_1576[Global_17236.f_4997 /*5*/][Global_17236.f_4998] = 2;
	Global_17236.f_4998++;
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		fVar0 = func_246();
		if (Global_17236.f_4352[Global_17236.f_4493] && Global_17236.f_4998 == Global_17236.f_4996)
		{
			func_84(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17236.f_4345[(Global_17236.f_4493 - 1)])
		{
			Global_17236.f_4345[(Global_17236.f_4493 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17236.f_4998 >= Global_17236.f_4996)
		{
			fVar3 = func_245();
			if (fVar3 > Global_17236.f_5000[Global_17236.f_4492])
			{
				Global_17236.f_5000[Global_17236.f_4492] = fVar3;
			}
		}
	}
}

float func_245()//Position - 0x19C21
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17236.f_4998)
	{
		if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17236.f_3843[((Global_17236.f_4498 - iVar1) + iVar0)] != 0)
		{
			if (func_84(Global_17236.f_3843[((Global_17236.f_4498 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_246()//Position - 0x19CD4
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17236.f_4998)
	{
		if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_64(0, 1, 0, 0, 0, iVar6 > 0);
	if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_17236.f_73[Global_17236.f_4997 /*4*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17236.f_4998)
	{
		if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(Global_17236.f_4997 + iVar8) /*4*/]));
			}
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17236.f_73[(Global_17236.f_4997 + iVar8) /*4*/]));
			}
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17236.f_3340[((Global_17236.f_4496 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17236.f_3591[((Global_17236.f_4497 - iVar4) + iVar10)], Global_17236.f_3717[((Global_17236.f_4497 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[((Global_17236.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2435345[((Global_17236.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2435345[((Global_17236.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17236.f_3843[((Global_17236.f_4498 - iVar5) + iVar7)] != 0)
		{
			func_84(Global_17236.f_3843[((Global_17236.f_4498 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_247(int iParam0)//Position - 0x1A0AF
{
	int iVar0;
	
	switch (func_308())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_164(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/])))
	{
		return;
	}
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/][iParam0 /*54*/].f_42 = 0;
}

void func_248(int iParam0, bool bParam1, bool bParam2)//Position - 0x1A11E
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_34036[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (MISC::IS_BIT_SET(Global_34036[iParam0 /*31*/].f_1, 1))
			{
				Global_34036[iParam0 /*31*/].f_22 = -1f;
			}
			else
			{
				Global_34036[iParam0 /*31*/].f_22 = 1f;
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[iParam0 /*31*/], Global_34036[iParam0 /*31*/].f_22, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_34036[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_34036[iParam0 /*31*/].f_22 = 0f;
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[iParam0 /*31*/], Global_34036[iParam0 /*31*/].f_22, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

int func_249(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x1A1CE
{
	int iVar0;
	
	if (!func_163(iParam1, func_308()) || ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	switch (func_308())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	STREAMING::REQUEST_MODEL(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/][iParam1 /*54*/].f_42);
	if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/][iParam1 /*54*/].f_42))
	{
		*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/][iParam1 /*54*/].f_42, Param2, fParam5, 0, 0);
		func_250(*iParam0, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/][iParam1 /*54*/]), 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
		VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
		if (bParam6)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/][iParam1 /*54*/].f_42);
		}
		return 1;
	}
	return 0;
}

void func_250(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1A2CD
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((MISC::IS_BIT_SET(uParam1->f_53, 15) || func_254(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_253())
		{
			uParam1->f_38 = 0;
			uParam1->f_39 = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_38 = 255;
			uParam1->f_39 = 255;
			uParam1->f_40 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_38, uParam1->f_39, uParam1->f_40);
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_41);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !MISC::IS_BIT_SET(uParam1->f_53, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_46);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_50, uParam1->f_51, uParam1->f_52);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_53, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_53, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_53, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_53, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_53, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_45);
					}
				}
				else
				{
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_45);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_251(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_42) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_42))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_53, func_16(iVar0 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, true);
				}
				iVar0++;
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_53, 23))
			{
				if (MISC::IS_BIT_SET(uParam1->f_53, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_251(int iParam0, var uParam1, var uParam2)//Position - 0x1A6B8
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_252(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
	}
	return 1;
}

int func_252(int iParam0)//Position - 0x1A7EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_253()//Position - 0x1A8C6
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

int func_254(int iParam0)//Position - 0x1A8D7
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					uVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return MISC::IS_BIT_SET(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_255()//Position - 0x1A922
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(0, 188, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 187, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 201, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 202, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 239, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 240, 1);
}

var func_256(struct<3> Param0, int iParam3)//Position - 0x1A96D
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_257(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_257(bool bParam0, float fParam1, float fParam2)//Position - 0x1A999
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_258(int iParam0)//Position - 0x1A9B0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_163(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_259(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1A9DA
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_71();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_260(int iParam0)//Position - 0x1AC01
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_261(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_261(int iParam0)//Position - 0x1AC3E
{
	if (func_8(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_262(var uParam0, int iParam1)//Position - 0x1AC68
{
	int iVar0;
	
	if (!func_20(uParam0->f_42))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_68044))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		default:
			return 0;
			break;
	}
	if (!func_163(0, iParam1))
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4800[iVar0] = 0;
	}
	else if (!func_163(1, iParam1))
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4800[iVar0] = 1;
	}
	func_263(iParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uParam0->f_42));
	func_91(*uParam0, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/][Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4800[iVar0] /*54*/]));
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4800[iVar0]++;
	if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4800[iVar0] >= func_164(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/])))
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4800[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_89503[iVar0 /*74*/] == uParam0->f_42 && MISC::ARE_STRINGS_EQUAL(&(Global_89503[iVar0 /*74*/].f_27), &(uParam0->f_1)))
		{
			Global_89503[iVar0 /*74*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_263(int iParam0, char* sParam1)//Position - 0x1ADC3
{
	if (!func_8(iParam0))
	{
		return;
	}
	if (!Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4804[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_264("IMPOUND_HELPM", sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_264("IMPOUND_HELPF", sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_264("IMPOUND_HELPT", sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4804[iParam0] = 1;
	}
}

void func_264(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x1AE72
{
	func_265(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_265(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1AE92
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount < 9)
	{
		StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/]), sParam0, 16);
		StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_4), sParam1, 16);
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_9 = iParam5;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_11 = iParam6;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_12 = uParam2;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_13 = iParam7;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_14 = iParam8;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_10 = -1;
		}
		Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount++;
		func_266();
	}
}

void func_266()//Position - 0x1B065
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 0))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[0])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[0] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 1))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[1])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[1] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 2))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[2])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[2] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_267()//Position - 0x1B185
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_391)
			{
				STREAMING::REQUEST_MODEL(joaat("v_ilev_uvline"));
				iLocal_390 = 1;
				if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_uvline")))
				{
					if (func_268(8))
					{
						uLocal_392[4] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, 1, 1, 0);
						ENTITY::SET_ENTITY_COORDS(uLocal_392[4], 471.48f, fVar0, 30.33f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(uLocal_392[4], 0f, 0f, 116.9f, 2, 1);
						uLocal_392[1] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, 1, 1, 0);
						ENTITY::SET_ENTITY_COORDS(uLocal_392[1], 471.48f, fVar0, 30.15f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(uLocal_392[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_268(9))
					{
						uLocal_392[5] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, 1, 1, 0);
						ENTITY::SET_ENTITY_COORDS(uLocal_392[5], 471.48f, fVar0, 29.98f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(uLocal_392[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_268(10))
					{
						uLocal_392[3] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, 1, 1, 0);
						ENTITY::SET_ENTITY_COORDS(uLocal_392[3], 471.48f, fVar0, 29.82f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(uLocal_392[3], 0f, 0f, 116.9f, 2, 1);
					}
					uVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_392[iVar2]))
						{
							ENTITY::SET_ENTITY_VISIBLE(uLocal_392[iVar2], 1);
							ENTITY::SET_ENTITY_ALWAYS_PRERENDER(uLocal_392[iVar2], 1);
							INTERIOR::_0x82EBB79E258FA2B7(uLocal_392[iVar2], uVar1);
						}
						iVar2++;
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_uvline"));
					iLocal_391 = 1;
				}
			}
		}
		else
		{
			if (iLocal_390)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_uvline"));
				iLocal_390 = 0;
			}
			if (iLocal_391)
			{
				func_311();
				iLocal_391 = 0;
			}
		}
	}
}

int func_268(int iParam0)//Position - 0x1B3BB
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iParam0 /*6*/];
}

void func_269()//Position - 0x1B3E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_67138.f_553)
	{
		if (!iLocal_399)
		{
			Global_67138.f_554 = 0;
			iLocal_399 = 1;
		}
		else if (Global_67138.f_554 >= 68)
		{
			Global_67138.f_553 = 0;
			iLocal_399 = 0;
		}
	}
	else
	{
		iLocal_399 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_762)
	{
		iVar1 = iLocal_763[iVar0];
		if (func_40(&Local_648, iVar1))
		{
			func_307(&Local_669, iVar1);
			if ((Local_669.f_69 && Local_401.f_3 == 0) || iVar1 == 14)
			{
				uLocal_837[iVar1] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_669.f_55, 0);
			}
			else
			{
				uLocal_837[iVar1] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_648, 0);
			}
			if (func_306())
			{
				func_305(iVar1);
				func_303(iVar1);
				func_302(iVar1);
				func_301(iVar1);
				func_299(iVar1);
				func_298(iVar1);
				func_297(iVar1);
				func_271(iVar1);
				if (MISC::IS_BIT_SET(uLocal_47[iVar1], 2))
				{
					if (Global_67138.f_553)
					{
						iLocal_399 = 0;
					}
					func_312(iVar1);
				}
			}
			else
			{
				func_270(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_762;
	iLocal_762 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_832)
	{
		iLocal_832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (MISC::IS_BIT_SET(uLocal_47[iLocal_763[iVar0]], 2))
		{
			func_312(iLocal_763[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_836 != -1)
	{
		func_312(iLocal_836);
		iLocal_836 = -1;
	}
	iLocal_46++;
	if (iLocal_46 >= 68)
	{
		iLocal_46 = 0;
	}
	func_312(iLocal_46);
	if (iLocal_910)
	{
		func_312(21);
		func_312(22);
		func_312(23);
		iLocal_910 = 0;
		bLocal_911 = true;
	}
	else if (bLocal_911)
	{
		bLocal_911 = false;
	}
	if (Global_67138.f_553)
	{
		Global_67138.f_554++;
	}
}

void func_270(int iParam0)//Position - 0x1B5E0
{
	if (iLocal_116[iParam0] != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_116[iParam0]);
		iLocal_116[iParam0] = 0;
	}
}

void func_271(int iParam0)//Position - 0x1B603
{
	float fVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	struct<54> Var11;
	int iVar65;
	bool bVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	struct<3> Var70;
	struct<3> Var76;
	struct<54> Var82;
	int iVar136;
	
	fVar0 = 210f;
	fVar1 = 200f;
	if (!MISC::IS_BIT_SET(uLocal_47[iParam0], 2))
	{
		func_270(iParam0);
	}
	MISC::CLEAR_BIT(&(uLocal_47[iParam0]), 2);
	if (MISC::IS_BIT_SET(uLocal_47[iParam0], 1))
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_185[iParam0 /*3*/], 1);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (MISC::IS_BIT_SET(Local_648.f_9, 23))
	{
		if (Local_648.f_4 == joaat("blimp"))
		{
			fVar0 = 1010f;
			fVar1 = 1000f;
		}
		else
		{
			fVar0 = 410f;
			fVar1 = 400f;
		}
	}
	else if (MISC::IS_BIT_SET(Local_648.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((MISC::IS_BIT_SET(Local_648.f_9, 19) || MISC::IS_BIT_SET(Local_648.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (MISC::IS_BIT_SET(Local_648.f_9, 25) && (((iLocal_646 == 0 && Local_401 == 21) || (iLocal_646 == 0 && Local_401 == 22)) || (iLocal_646 == 0 && Local_401 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_139[iParam0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_139[iParam0], 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (iParam0 == 24)
				{
					uVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_67138.f_139[iParam0], -1);
					if (!ENTITY::DOES_ENTITY_EXIST(uVar3))
					{
						iVar3 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(Global_67138.f_139[iParam0], -1);
					}
					iVar4 = func_260(iVar3);
					if (iVar4 != Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4799)
					{
						if (func_8(iVar4))
						{
							func_296("Updating last character to use vehicle gen", iVar4);
							Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4799 = iVar4;
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_67138.f_139[iParam0], 1))
				{
					func_295("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_42(Global_67138.f_139[iParam0])) && !func_41(Global_67138.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_67138.f_139[iParam0], true);
					}
					Global_67138.f_139[iParam0] = 0;
					Global_67138[iParam0] = 1;
					func_294(iParam0);
					return;
				}
				if (((MISC::IS_BIT_SET(uLocal_47[iParam0], 0) && !MISC::IS_BIT_SET(Local_648.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_295("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_42(Global_67138.f_139[iParam0])) && !func_41(Global_67138.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_67138.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_67138.f_139[iParam0]));
					Global_67138.f_139[iParam0] = 0;
					Global_67138[iParam0] = 1;
					func_294(iParam0);
					return;
				}
				if ((!MISC::IS_BIT_SET(uLocal_47[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_67138.f_139[iParam0], PLAYER::PLAYER_PED_ID(), 1))
					{
						func_295("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_42(Global_67138.f_139[iParam0])) && !func_41(Global_67138.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
						{
							VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_67138.f_139[iParam0], true);
						}
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_67138.f_139[iParam0]));
						Global_67138.f_139[iParam0] = 0;
						Global_67138[iParam0] = 1;
						func_294(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((MISC::IS_BIT_SET(uLocal_47[iParam0], 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_67138.f_139[iParam0], 1), Local_185[iParam0 /*3*/], 1) > fVar5) || (!MISC::IS_BIT_SET(uLocal_47[iParam0], 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_67138.f_139[iParam0], 1), Local_648, 1) > fVar5))
				{
					func_295("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_42(Global_67138.f_139[iParam0])) && !func_41(Global_67138.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_67138.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_67138.f_139[iParam0]));
					Global_67138.f_139[iParam0] = 0;
					Global_67138[iParam0] = 1;
					func_294(iParam0);
					return;
				}
				if (!func_46(iParam0, 0))
				{
					func_295("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_42(Global_67138.f_139[iParam0])) && !func_41(Global_67138.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_67138.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_67138.f_139[iParam0]));
					Global_67138.f_139[iParam0] = 0;
					Global_67138[iParam0] = 1;
					func_294(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_26(Global_67138.f_139[iParam0], iLocal_646, 1) && !func_42(Global_67138.f_139[iParam0])) && !func_41(Global_67138.f_139[iParam0]))
					{
						func_295("No longer needed: Mission vehicle gen moved to players garage");
						if (ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
						{
							VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_67138.f_139[iParam0], true);
						}
						Global_67138.f_139[iParam0] = 0;
						Global_67138[iParam0] = 1;
						func_294(iParam0);
						return;
					}
				}
				if (uLocal_837[iParam0] > fVar0 && (!MISC::IS_BIT_SET(uLocal_47[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_29();
						iVar7 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249;
						func_292(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_236(iVar6, iVar7))
						{
							if ((!func_42(Global_67138.f_139[iParam0]) && !func_41(Global_67138.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
							{
								VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_67138.f_139[iParam0], true);
							}
							func_14(Global_67138.f_139[iParam0], Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4799);
							Global_67138[iParam0] = 1;
							func_294(iParam0);
						}
						else if (func_19(Global_67138.f_139[iParam0]))
						{
							func_15(Global_67138.f_139[iParam0], &Global_2436029);
							Global_2436028 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4799;
							iLocal_925 = Global_67138.f_139[iParam0];
						}
					}
					func_295("No longer needed: Player out for range");
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_67138.f_139[iParam0]));
					MISC::CLEAR_AREA(Local_648, 3f, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_648, 3f, 0, 0, 0, 0, 0);
					Global_67138.f_139[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
					{
						Global_67138.f_584 = { Local_648 };
						Global_67138.f_587 = { 0f, 0f, 0f };
					}
					return;
				}
				if (MISC::IS_BIT_SET(Local_648.f_9, 30))
				{
					if (!MISC::IS_BIT_SET(Local_648.f_9, 31))
					{
						if (!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Global_67138.f_139[iParam0]) && !ENTITY::IS_ENTITY_ATTACHED(Global_67138.f_139[iParam0]))
						{
							Var8 = { ENTITY::GET_ENTITY_COORDS(Global_67138.f_139[iParam0], 1) };
							if (Var8.f_2 >= func_291(iParam0))
							{
								VEHICLE::SET_BOAT_ANCHOR(Global_67138.f_139[iParam0], 1);
								MISC::SET_BIT(&(Local_648.f_9), 31);
							}
						}
					}
				}
			}
			return;
		}
	}
	else
	{
		Global_67138.f_139[iParam0] = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_139[iParam0]))
	{
		func_295("No longer needed: Vehicle not driveable");
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_67138.f_139[iParam0]));
		Global_67138.f_139[iParam0] = 0;
		Global_67138[iParam0] = 1;
		func_294(iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (Global_68045 == iParam0)
	{
		func_295("Processing a vehgen vehicle handover request.");
		if (ENTITY::DOES_ENTITY_EXIST(Global_68044) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_68044, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_139[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_139[iParam0], 0))
			{
				if (Global_67138.f_139[iParam0] == Global_68044)
				{
					func_295("Vehicle to be handed over is the same vehicle.");
					Global_68045 = -1;
					Global_68044 = 0;
					return;
				}
				else
				{
					func_295("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_42(Global_67138.f_139[iParam0])) && !func_41(Global_67138.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_67138.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_67138.f_139[iParam0]));
					Global_67138.f_139[iParam0] = 0;
				}
			}
			Global_67138.f_139[iParam0] = Global_68044;
			Global_67138[iParam0] = 1;
			MISC::CLEAR_BIT(&(uLocal_47[iParam0]), 0);
			MISC::SET_BIT(&(uLocal_47[iParam0]), 1);
			MISC::CLEAR_BIT(&(uLocal_47[iParam0]), 3);
			Local_185[iParam0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_68044, 1) };
			Global_68045 = -1;
			if (MISC::IS_BIT_SET(Local_648.f_9, 10))
			{
				Var11.f_9 = 25;
				Var11.f_35 = 2;
				func_15(Global_68044, &Var11);
				if (Global_68046)
				{
					func_90(iParam0, Var11, ENTITY::GET_ENTITY_COORDS(Global_68044, 1), ENTITY::GET_ENTITY_HEADING(Global_68044), func_25(Global_68044));
				}
				else
				{
					func_90(iParam0, Var11, Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[Local_648.f_14 /*3*/], Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[Local_648.f_14], func_25(Global_68044));
				}
				Global_67138.f_139[iParam0] = Global_68044;
				Global_67138.f_484[iParam0] = Global_67138.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar65 = func_308();
				if (func_8(iVar65))
				{
					func_295("Players stored switch vehicle cleared for prep getaway.");
					Global_89730[iVar65] = 0;
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_67138.f_139[iParam0], 1, 1);
			if (iParam0 == 24)
			{
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_67138.f_139[iParam0], false);
			}
			Global_68044 = 0;
			if (Global_2436029.f_42 != 0)
			{
				func_262(&Global_2436029, Global_2436028);
				Global_2436029.f_42 = 0;
			}
			return;
		}
		if (Global_2436029.f_42 != 0)
		{
			func_262(&Global_2436029, Global_2436028);
			Global_2436029.f_42 = 0;
		}
		func_295("Vehicle to be handed over doesn't exist.");
		Global_68045 = -1;
		Global_68044 = 0;
	}
	if (Global_67138[iParam0])
	{
		if (uLocal_837[iParam0] >= fVar0)
		{
			Global_67138[iParam0] = 0;
			func_295("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
		{
			Global_67138.f_584 = { 0f, 0f, 0f };
			Global_67138.f_587 = { 0f, 0f, 0f };
		}
		return;
	}
	bVar66 = false;
	if (uLocal_837[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Local_648.f_14] != 0) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Local_648.f_14] > 3) && Local_648.f_4 != 0) && func_46(iParam0, 0)) && func_21(Local_648.f_4))
		{
			iVar67 = func_29();
			iVar68 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249;
			func_292(&iVar68, 0, 0, 17, 0, 0, 0);
			if (func_236(iVar67, iVar68))
			{
				func_262(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[Local_648.f_14 /*54*/]), Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4799);
				func_294(iParam0);
				Global_67138[iParam0] = 1;
				func_295("Cannot be created: Vehicle ready for impound");
				Global_2436029.f_42 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
		{
			bVar66 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
	{
		Global_67138.f_584 = { 0f, 0f, 0f };
		Global_67138.f_587 = { 0f, 0f, 0f };
	}
	if (Local_648.f_4 == 0)
	{
		Global_67138[iParam0] = 1;
		func_295("Cannot be created: Dummy model");
		return;
	}
	if (!func_21(Local_648.f_4))
	{
		Global_67138[iParam0] = 1;
		func_295("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_46(iParam0, 0))
	{
		Global_67138[iParam0] = 1;
		func_295("Cannot be created: Vehicle gen not available");
		return;
	}
	if (MISC::IS_BIT_SET(Local_648.f_9, 14) && !func_46(iParam0, 5))
	{
		Global_67138[iParam0] = 1;
		func_295("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_290() && func_289(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_67138[iParam0] = 1;
		func_295("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_647)
	{
		Global_67138[iParam0] = 1;
		func_295("Cannot be created: Player character not valid");
		return;
	}
	if (MISC::IS_BIT_SET(Local_648.f_9, 10))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[iParam0]))
		{
			Global_67138[iParam0] = 1;
			func_295("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_67138.f_484[iParam0] = 0;
		}
	}
	if (MISC::IS_BIT_SET(Local_648.f_9, 6))
	{
		if (func_288(Local_648.f_4, -1))
		{
			Global_67138[iParam0] = 1;
			func_295("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_287(Local_648.f_4, -1))
		{
			Global_67138[iParam0] = 1;
			func_295("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (MISC::IS_BIT_SET(Local_648.f_9, 29))
	{
		if (Local_401.f_3 == 0)
		{
			return;
		}
	}
	if (func_286(iParam0))
	{
		Global_67138[iParam0] = 1;
		func_295("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_67138[iParam0] = 1;
			func_295("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar69 = 0;
	if (MISC::IS_BIT_SET(Local_648.f_9, 19))
	{
		iVar69 = 2;
	}
	else if (MISC::IS_BIT_SET(Local_648.f_9, 20))
	{
		iVar69 = 1;
	}
	if ((iParam0 == 24 && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Local_648.f_14] > 0) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Local_648.f_14] <= 3)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(Local_648.f_4))
		{
			iVar69 = 2;
			Local_648.f_12 = (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Local_648.f_14] - 1);
		}
		else if (VEHICLE::IS_THIS_MODEL_A_CAR(Local_648.f_4))
		{
			iVar69 = 1;
			Local_648.f_12 = (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Local_648.f_14] - 1);
		}
	}
	if (iVar69 != 0)
	{
		if (func_285(Local_648.f_12, iVar69, Local_648, -1f))
		{
			Global_67138[iParam0] = 1;
			func_295("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_314(iParam0, 0);
			}
			return;
		}
		if (MISC::IS_BIT_SET(Local_648.f_9, 19) || MISC::IS_BIT_SET(Local_648.f_9, 20))
		{
			if (iVar69 == 2)
			{
				if (Global_87746[Local_648.f_12 /*3*/][1] != -1 && (MISC::GET_GAME_TIMER() - Global_87746[Local_648.f_12 /*3*/][1]) < CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180)
				{
					Global_67138[iParam0] = 1;
					func_295("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var70, "...", 24);
					StringIntConCat(&Var70, ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180 - (MISC::GET_GAME_TIMER() - Global_87746[Local_648.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var70, " seconds", 24);
					func_295(&Var70);
					return;
				}
			}
			else if (iVar69 == 1)
			{
				if (Global_87746[Local_648.f_12 /*3*/][0] != -1 && (MISC::GET_GAME_TIMER() - Global_87746[Local_648.f_12 /*3*/][0]) < CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180)
				{
					Global_67138[iParam0] = 1;
					func_295("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var76, "...", 24);
					StringIntConCat(&Var76, ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180 - (MISC::GET_GAME_TIMER() - Global_87746[Local_648.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var76, " seconds", 24);
					func_295(&Var76);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
	{
		Global_67138.f_584 = { Local_648 };
	}
	if (bVar66)
	{
		return;
	}
	if (iVar69 != 0)
	{
		iLocal_116[iParam0] = func_6(Local_648.f_12, iVar69);
		STREAMING::REQUEST_MODEL(iLocal_116[iParam0]);
		MISC::SET_BIT(&(uLocal_47[iParam0]), 2);
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_116[iParam0]))
		{
			func_295("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_284(iLocal_116[iParam0], Local_648, 1))
		{
			func_295("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		MISC::CLEAR_AREA(Local_648, 3f, 0, 0, 0, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_648, 3f, 0, 0, 0, 0, 0);
		if (iVar69 == 2)
		{
			func_279(&(Global_67138.f_139[iParam0]), Local_648.f_12, Local_648, Local_648.f_3, 0, 2);
		}
		else if (iVar69 == 1)
		{
			func_279(&(Global_67138.f_139[iParam0]), Local_648.f_12, Local_648, Local_648.f_3, 0, 1);
		}
		else
		{
			Global_67138[iParam0] = 1;
			func_295("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(Local_648.f_4);
		iLocal_116[iParam0] = Local_648.f_4;
		MISC::SET_BIT(&(uLocal_47[iParam0]), 2);
		if (!STREAMING::HAS_MODEL_LOADED(Local_648.f_4))
		{
			func_295("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_284(Local_648.f_4, Local_648, 1))
		{
			func_295("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		MISC::CLEAR_AREA(Local_648, 3f, 0, 0, 0, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_648, 3f, 0, 0, 0, 0, 0);
		if (MISC::IS_BIT_SET(Local_648.f_9, 23))
		{
			STREAMING::REQUEST_COLLISION_AT_COORD(Local_648);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_648.f_4 == joaat("submersible2"))
			{
				Local_648.f_2 = -3f;
			}
		}
		Global_67138.f_139[iParam0] = VEHICLE::CREATE_VEHICLE(Local_648.f_4, Local_648, Local_648.f_3, 1, 1);
		if (MISC::IS_BIT_SET(Local_648.f_9, 10))
		{
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_648.f_4))
			{
				MISC::SET_BIT(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[Local_648.f_14 /*54*/].f_53), 22);
			}
			if (MISC::IS_BIT_SET(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[Local_648.f_14 /*54*/].f_53, 14))
			{
				Var82.f_9 = 25;
				Var82.f_35 = 2;
				func_15(Global_67138.f_139[iParam0], &Var82);
				func_278(Var82.f_53, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[Local_648.f_14 /*54*/].f_53), Local_648.f_4);
				MISC::CLEAR_BIT(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[Local_648.f_14 /*54*/].f_53), 14);
			}
			func_250(Global_67138.f_139[iParam0], &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[Local_648.f_14 /*54*/]), 0, 1);
			Global_67138.f_484[iParam0] = Global_67138.f_139[iParam0];
		}
		else
		{
			if (MISC::IS_BIT_SET(Local_648.f_9, 9))
			{
				VEHICLE::SET_VEHICLE_COLOURS(Global_67138.f_139[iParam0], Local_648.f_10, Local_648.f_11);
			}
			if (MISC::IS_BIT_SET(Local_648.f_9, 8))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_67138.f_139[iParam0], 2);
				VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Global_67138.f_139[iParam0], 0);
				VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Global_67138.f_139[iParam0], 0);
				VEHICLE::SET_VEHICLE_CAN_BREAK(Global_67138.f_139[iParam0], 0);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Global_67138.f_139[iParam0], 0);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Global_67138.f_139[iParam0], 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Global_67138.f_139[iParam0], false);
				ENTITY::SET_ENTITY_INVINCIBLE(Global_67138.f_139[iParam0], 1);
				ENTITY::FREEZE_ENTITY_POSITION(Global_67138.f_139[iParam0], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_139[iParam0]))
	{
		func_277("Created - Coords: ", Local_648);
		func_276("Created - Dist From Player:", uLocal_837[iParam0]);
		if (((iParam0 == 0 && iLocal_646 == 0) || (iParam0 == 6 && iLocal_646 == 2)) || (iParam0 == 2 && iLocal_646 == 1))
		{
			Global_67138.f_584 = { 0f, 0f, 0f };
		}
		switch (Local_648.f_4)
		{
			case joaat("miljet"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_67138.f_139[iParam0], 121, 21);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_67138.f_139[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_67138.f_139[iParam0], 122, 89);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_67138.f_139[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_67138.f_139[iParam0], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_67138.f_139[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_67138.f_139[iParam0], 12, 12);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_67138.f_139[iParam0], 0, 12);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				VEHICLE::SET_VEHICLE_COLOURS(Global_67138.f_139[iParam0], 159, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_67138.f_139[iParam0], 160, 156);
				break;
		}
		if (MISC::IS_BIT_SET(Local_648.f_9, 22))
		{
			VEHICLE::SET_BOAT_ANCHOR(Global_67138.f_139[iParam0], 1);
		}
		if (MISC::IS_BIT_SET(Local_648.f_9, 30))
		{
			MISC::CLEAR_BIT(&(Local_648.f_9), 31);
		}
		if (MISC::IS_BIT_SET(Local_648.f_9, 26))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_67138.f_139[iParam0], 7);
			VEHICLE::SET_VEHICLE_ALARM(Global_67138.f_139[iParam0], 1);
		}
		func_275(Global_67138.f_139[iParam0], iParam0);
		if (!MISC::IS_BIT_SET(Local_648.f_9, 29) && !MISC::IS_BIT_SET(Local_648.f_9, 30))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_67138.f_139[iParam0]);
		}
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_67138.f_139[iParam0], 0f);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Global_67138.f_139[iParam0], 1);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_67138.f_139[iParam0], MISC::IS_BIT_SET(Local_648.f_9, 5));
	}
	MISC::CLEAR_BIT(&(uLocal_47[iParam0]), 0);
	MISC::CLEAR_BIT(&(uLocal_47[iParam0]), 1);
	Global_67138[iParam0] = 1;
	if (iVar69 != 0)
	{
		Global_67138.f_69[iParam0] = 1;
	}
	iVar136 = func_272(458, -1, -1);
	if (iVar136 != 0 && iVar136 == iParam0)
	{
		iLocal_924 = Global_67138.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2436029.f_42 = 0;
	}
}

int func_272(int iParam0, int iParam1, int iParam2)//Position - 0x1CE21
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_71();
	}
	iVar0 = 0;
	iVar1 = func_274(iParam0, iParam1);
	uVar2 = func_273(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_273(int iParam0)//Position - 0x1CE67
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	return iVar0;
}

int func_274(int iParam0, int iParam1)//Position - 0x1CFE1
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_71();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	return iVar0;
}

void func_275(int iParam0, int iParam1)//Position - 0x1D133
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				VEHICLE::SET_VEHICLE_DAMAGE(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			
			case 35:
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, false);
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
				break;
			}
	}
}

void func_276(char* sParam0, float fParam1)//Position - 0x1D1D9
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_277(char* sParam0, float fParam1, var uParam2, var uParam3)//Position - 0x1D1F2
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_278(var uParam0, var uParam1, int iParam2)//Position - 0x1D20B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			break;
		
		case joaat("kalahari"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			MISC::CLEAR_BIT(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			MISC::CLEAR_BIT(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			MISC::CLEAR_BIT(&iVar0, 0);
			break;
		
		case joaat("hotknife"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			break;
		
		case joaat("stalion"):
			MISC::CLEAR_BIT(&iVar0, 0);
			MISC::CLEAR_BIT(&iVar0, 1);
			MISC::CLEAR_BIT(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_279(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x1D2DA
{
	var uVar0;
	var uVar1;
	struct<73> Var5;
	int iVar79;
	int iVar80;
	bool bVar81;
	char cVar82[16];
	int iVar86;
	
	if (func_8(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		func_7(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var5)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar79 = 0;
				while (iVar79 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar79 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_11[iVar79]);
					iVar79++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24);
				}
				if (func_283(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				func_251(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_281(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				func_280(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar80 = 0;
				while (iVar80 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar80 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_11[iVar80]);
					iVar80++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24);
				}
				if (func_283(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				func_251(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_281(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				func_280(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var5);
			if (STREAMING::HAS_MODEL_LOADED(Var5))
			{
				bVar81 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5, Param2, fParam5, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				StringCopy(&cVar82, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var5.f_5, Var5.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var5.f_7, Var5.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar86 = 0;
				while (iVar86 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar86 + 1, !Var5.f_11[iVar86]);
					iVar86++;
				}
				if (Var5.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var5.f_24);
				}
				if (func_283(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var5.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var5.f_60, Var5.f_61, Var5.f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var5.f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var5.f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var5.f_69, Var5.f_70, Var5.f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Var5.f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Var5.f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Var5.f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Var5.f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var5.f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var5.f_65);
				}
				if (Var5.f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var5.f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
						}
					}
				}
				func_251(iParam0, &(Var5.f_31), &(Var5.f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar82);
						bVar81 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_281(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208 = 1;
					func_140(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var5);
				}
				if (bVar81)
				{
					func_280(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_280(int iParam0, int iParam1)//Position - 0x1E0C0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]))
		{
			Global_87698[iVar0] = iParam0;
			Global_87708[iVar0] = iParam1;
			Global_87718[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_87718[iVar0]))
			{
				Global_87746[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_87746[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_281(var uParam0)//Position - 0x1E142
{
	if (!func_282(*uParam0))
	{
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[119]);
	}
}

bool func_282(int iParam0)//Position - 0x1E16D
{
	return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 5);
}

int func_283(var uParam0, var uParam1)//Position - 0x1E17C
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_261)
	{
		*uParam0 = { Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_267 };
		*uParam1 = Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT.f_271;
		return 1;
	}
	return 0;
}

int func_284(var uParam0, struct<3> Param1, int iParam4)//Position - 0x1E1BD
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if ((iParam4 && CAM::IS_SCREEN_FADED_OUT()) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) > 0)
	{
		func_295("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	MISC::GET_MODEL_DIMENSIONS(uParam0, &Var0, &Var3);
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Var0, 1);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param1, 1) < (fVar6 * 0.5f))
	{
		func_276("player is in vehicle bounds - fLength: ", fVar6);
		func_276("player is in vehicle bounds - fDistance: ", MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param1, 1));
		return 1;
	}
	return 0;
}

int func_285(int iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x1E24F
{
	int iVar0;
	struct<58> Var1;
	int iVar75;
	
	if (!func_8(iParam0))
	{
		return 0;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	iVar75 = 0;
	func_7(iParam0, &Var1, iParam1);
	iVar75 = Var1;
	if (iVar75 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_87698[iVar0], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_87698[iVar0]) == iVar75 && Global_87708[iVar0] == iParam0)
				{
					if (fParam5 == -1f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_87698[iVar0], 0), Param2, 1) <= fParam5)
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_286(int iParam0)//Position - 0x1E314
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_648.f_4 == joaat("frogger2"))
		{
			if (((func_288(Local_648.f_4, -1) || func_287(Local_648.f_4, -1)) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("exile2")) > 0) || !func_268(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[20]) && !ENTITY::IS_ENTITY_DEAD(Global_67138.f_484[20])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[20], 0))
		{
			if (Local_648.f_4 == ENTITY::GET_ENTITY_MODEL(Global_67138.f_484[20]))
			{
				VEHICLE::GET_VEHICLE_COLOURS(Global_67138.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_648.f_10 && iVar1 == Local_648.f_11)
				{
					func_162(20);
				}
			}
		}
	}
	return 0;
}

int func_287(int iParam0, int iParam1)//Position - 0x1E3FB
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Local_648, 200f, iParam0, iVar0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0)) && ENTITY::GET_ENTITY_MODEL(iVar1) == iParam0)
	{
		if (iParam1 == -1 || VEHICLE::GET_VEHICLE_LIVERY(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_288(int iParam0, int iParam1)//Position - 0x1E45A
{
	var uVar0[50];
	int iVar51;
	int iVar52;
	
	iVar52 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar0);
	iVar51 = 0;
	while (iVar51 < iVar52)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar51]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0[iVar51], 0)) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar51]) == iParam0)
		{
			if (iParam1 == -1 || VEHICLE::GET_VEHICLE_LIVERY(uVar0[iVar51]) == iParam1)
			{
				return 1;
			}
		}
		iVar51++;
	}
	return 0;
}

int func_289(int iParam0)//Position - 0x1E4D5
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_232(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_290()//Position - 0x1E4F7
{
	return Global_67138.f_138;
}

float func_291(int iParam0)//Position - 0x1E505
{
	switch (iParam0)
	{
		case 57:
			return -0.7f;
			break;
		
		case 63:
			return -0.8f;
			break;
	}
	return 0f;
}

void func_292(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1E537
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_34(*uParam0);
	iVar1 = func_36(*uParam0);
	iVar2 = func_240(*uParam0);
	iVar3 = func_239(*uParam0);
	iVar4 = func_238(*uParam0);
	iVar5 = func_237(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_33(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_33(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_293(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_293(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1E6B9
{
	func_39(uParam0, iParam1);
	func_38(uParam0, iParam2);
	func_37(uParam0, iParam3);
	func_32(uParam0, iParam4);
	func_31(uParam0, iParam5);
	func_30(uParam0, iParam6);
}

void func_294(int iParam0)//Position - 0x1E6F1
{
	if (MISC::IS_BIT_SET(Local_648.f_9, 13))
	{
		func_314(iParam0, 0);
	}
}

void func_295(char* sParam0)//Position - 0x1E70E
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
	}
}

void func_296(char* sParam0, int iParam1)//Position - 0x1E720
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_297(int iParam0)//Position - 0x1E738
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	bVar0 = false;
	iVar5 = -1;
	iVar6 = joaat("prop_forsale_dyn_01");
	switch (iParam0)
	{
		case 12:
		case 13:
			bVar0 = !func_46(iParam0, 5);
			Var1 = { -961.42f, -2794.47f, 12.96f };
			fVar4 = -209.22f;
			iVar5 = 0;
			iVar6 = joaat("prop_airport_sale_sign");
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !func_46(iParam0, 5);
			Var1 = { -827.93f, -1368.14f, 3.9982f };
			fVar4 = -68.75f;
			iVar5 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !func_46(iParam0, 5);
			bVar0 = true;
			Var1 = { -710.07f, -1414.31f, 4f };
			fVar4 = -41.25f;
			iVar5 = 2;
			break;
		
		case 21:
			bVar0 = !func_46(iParam0, 5);
			Var1 = { -66.21f, 77.76f, 70.51f };
			fVar4 = -27f;
			iVar5 = 3;
			break;
		
		case 22:
			bVar0 = !func_46(iParam0, 5);
			Var1 = { -76.02f, -1825.61f, 25.88f };
			fVar4 = -129.67f;
			iVar5 = 4;
			break;
		
		case 23:
			bVar0 = !func_46(iParam0, 5);
			Var1 = { -218.68f, -1165.76f, 21.99f };
			fVar4 = 89.95f;
			iVar5 = 5;
			break;
	}
	if (bVar0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var1, 1) < 250f)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_754[iVar5]))
		{
			STREAMING::REQUEST_MODEL(iVar6);
			iLocal_761 = 1;
			if (STREAMING::HAS_MODEL_LOADED(iVar6))
			{
				if (iLocal_761)
				{
					uLocal_754[iVar5] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar6, Var1, 0, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(uLocal_754[iVar5], 0f, 0f, fVar4, 2, 1);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_754[iVar5], 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_754[iVar5], 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar6);
					iLocal_761 = 0;
				}
			}
		}
	}
	else if (iVar5 != -1)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uLocal_754[iVar5]) && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_754[iVar5])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var1, 1) > 255f)
		{
			OBJECT::DELETE_OBJECT(&(uLocal_754[iVar5]));
			if (iLocal_761)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar6);
				iLocal_761 = 0;
			}
		}
	}
}

void func_298(int iParam0)//Position - 0x1E991
{
	bool bVar0;
	
	bVar0 = false;
	if (func_46(iParam0, 0) && (!MISC::IS_BIT_SET(Local_648.f_9, 14) || func_46(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_67138.f_346[iParam0] != bVar0)
	{
		if (!func_4(Local_648.f_15, 0f, 0f, 0f))
		{
			if (!bVar0)
			{
				if (Global_67138.f_346[iParam0])
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_67138.f_415[iParam0], 0);
				}
			}
			else if (!Global_67138.f_346[iParam0])
			{
				Global_67138.f_415[iParam0] = PED::ADD_SCENARIO_BLOCKING_AREA(Local_648.f_15, Local_648.f_18, 0, 1, 1, 1);
			}
		}
		Global_67138.f_346[iParam0] = bVar0;
	}
}

void func_299(int iParam0)//Position - 0x1EA4D
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(Local_648.f_9, 15))
	{
		if (func_46(iParam0, 0) && !func_46(iParam0, 5))
		{
			iVar0 = 145;
			if (MISC::IS_BIT_SET(Local_648.f_9, 16))
			{
				iVar0 = func_300(9);
			}
			else if (MISC::IS_BIT_SET(Local_648.f_9, 18))
			{
				iVar0 = func_300(4);
			}
			if (iVar0 == Local_648.f_12)
			{
				func_202(iParam0, 5, 1);
			}
		}
	}
}

int func_300(int iParam0)//Position - 0x1EABE
{
	return Global_SAVE_DATA.PROPERTIES_SAVED_DATA[iParam0 /*4*/];
}

void func_301(int iParam0)//Position - 0x1EAD1
{
	if (func_46(iParam0, 0) && !func_46(iParam0, 3))
	{
		if (MISC::IS_BIT_SET(Local_648.f_9, 4))
		{
			func_202(iParam0, 3, 1);
		}
		else
		{
			func_202(iParam0, 3, 1);
		}
	}
}

void func_302(int iParam0)//Position - 0x1EB10
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_46(iParam0, 0) && bLocal_647)
	{
		if (MISC::IS_BIT_SET(Local_648.f_9, 0) || (MISC::IS_BIT_SET(Local_648.f_9, 2) && !func_46(iParam0, 2)))
		{
			if ((!MISC::IS_BIT_SET(Local_648.f_9, 21) || (((((((!func_10(0) && !func_10(3)) && !func_10(2)) && !func_10(4)) && !func_10(9)) && !func_10(10)) && !func_10(13)) && !func_10(14))) && ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 || func_46(iParam0, 5)) || !MISC::IS_BIT_SET(Local_648.f_9, 28)))
			{
				bVar0 = false;
				if (!HUD::DOES_BLIP_EXIST(Global_67138.f_208[iParam0]))
				{
					if (func_268(0))
					{
						if (MISC::IS_BIT_SET(Local_648.f_9, 14) && !func_46(iParam0, 5))
						{
							Global_67138.f_208[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_669.f_55);
							if (Local_669.f_58 != -1)
							{
								HUD::SET_BLIP_SPRITE(Global_67138.f_208[iParam0], Local_669.f_58);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_669.f_59)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_67138.f_208[iParam0], &(Local_669.f_59));
								}
							}
						}
						else if (func_46(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_67138.f_208[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_669.f_55);
							if (Local_648.f_13 != -1)
							{
								HUD::SET_BLIP_SPRITE(Global_67138.f_208[iParam0], Local_648.f_13);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_669.f_59)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_67138.f_208[iParam0], &(Local_669.f_59));
								}
								if (Local_648.f_12 == 0)
								{
									iVar1 = 42;
								}
								else if (Local_648.f_12 == 1)
								{
									iVar1 = 43;
								}
								else if (Local_648.f_12 == 2)
								{
									iVar1 = 44;
								}
								HUD::SET_BLIP_COLOUR(Global_67138.f_208[iParam0], iVar1);
							}
						}
						else
						{
							Global_67138.f_208[iParam0] = HUD::ADD_BLIP_FOR_COORD(Local_648);
							if (Local_648.f_13 != -1)
							{
								HUD::SET_BLIP_SPRITE(Global_67138.f_208[iParam0], Local_648.f_13);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_669.f_59)))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_67138.f_208[iParam0], &(Local_669.f_59));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_648.f_12 == 0)
									{
										iVar2 = 42;
									}
									else if (Local_648.f_12 == 1)
									{
										iVar2 = 43;
									}
									else if (Local_648.f_12 == 2)
									{
										iVar2 = 44;
									}
									HUD::SET_BLIP_COLOUR(Global_67138.f_208[iParam0], iVar2);
								}
							}
						}
						HUD::SET_BLIP_AS_SHORT_RANGE(Global_67138.f_208[iParam0], !MISC::IS_BIT_SET(Local_648.f_9, 1));
						HUD::SET_BLIP_FLASHES(Global_67138.f_208[iParam0], 0);
						HUD::SET_BLIP_PRIORITY(Global_67138.f_208[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (HUD::DOES_BLIP_EXIST(Global_67138.f_208[iParam0]))
		{
			HUD::REMOVE_BLIP(&(Global_67138.f_208[iParam0]));
		}
	}
}

void func_303(int iParam0)//Position - 0x1EE8A
{
	if (func_46(iParam0, 0) && !func_46(iParam0, 1))
	{
		if (func_46(iParam0, 4))
		{
			if (MISC::IS_BIT_SET(Local_648.f_9, 3))
			{
				func_304(&(Local_648.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_202(iParam0, 1, 1);
			}
			else
			{
				func_202(iParam0, 1, 1);
			}
		}
	}
}

void func_304(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1EEE6
{
	func_265(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_305(int iParam0)//Position - 0x1EF07
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!MISC::IS_BIT_SET(Local_648.f_9, 7) || Local_648.f_12 == iLocal_646)
	{
		bLocal_647 = true;
	}
	else
	{
		bLocal_647 = false;
	}
	if (func_10(14))
	{
		bLocal_647 = false;
	}
	if ((bLocal_647 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && MISC::IS_BIT_SET(Local_648.f_9, 14))
	{
		if (Local_401.f_2 == 0 && Local_401.f_3 == 0)
		{
			if (uLocal_837[iParam0] < Local_401.f_1 || Local_401 == iParam0)
			{
				if (Local_401 != iParam0)
				{
					Local_401.f_8 = { Local_648 };
					Local_401.f_29 = { Local_669 };
					Local_401 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_67138.f_592)
					{
						Global_67138.f_592[iVar0] = -1;
						iVar0++;
					}
					Local_401.f_6 = -1;
					if ((Local_401 == 12 || Local_401 == 13) || Local_401 == 14)
					{
						Local_401.f_6 = 0;
					}
					else if ((Local_401 == 15 || Local_401 == 16) || Local_401 == 17)
					{
						Local_401.f_6 = 1;
					}
					else if ((Local_401 == 18 || Local_401 == 19) || Local_401 == 20)
					{
						Local_401.f_6 = 2;
					}
					else if ((Local_401 == 21 || Local_401 == 22) || Local_401 == 23)
					{
						Local_401.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312)
					{
						iVar2 = func_104(iVar0);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_67138.f_592)
							{
								switch (Local_401.f_6)
								{
									case 3:
										if (func_44(iVar2))
										{
											Global_67138.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar2))
										{
											Global_67138.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((VEHICLE::IS_THIS_MODEL_A_BOAT(iVar2) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_67138.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_45(iVar2))
										{
											Global_67138.f_592[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_401.f_1 = uLocal_837[iParam0];
			}
		}
	}
	else if (Local_401 == iParam0)
	{
		Local_401 = -1;
		Local_401.f_1 = 99999.99f;
	}
	if (!MISC::IS_BIT_SET(uLocal_47[iParam0], 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_139[iParam0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_139[iParam0], 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_67138.f_139[iParam0], 0))
					{
						if (!MISC::IS_BIT_SET(uLocal_47[iParam0], 1) || MISC::IS_BIT_SET(uLocal_47[iParam0], 3))
						{
							MISC::SET_BIT(&(uLocal_47[iParam0]), 0);
							func_202(iParam0, 4, 1);
							func_202(iParam0, 2, 1);
						}
					}
					else
					{
						MISC::SET_BIT(&(uLocal_47[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[iParam0], 0)) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_484[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_926)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_67138.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Global_67138.f_484[iParam0], 0f);
					iLocal_926 = 1;
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_67138.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0))
			{
				VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Global_67138.f_484[iParam0], 1f);
				iLocal_926 = 0;
			}
		}
		else
		{
			iLocal_926 = 0;
		}
	}
}

int func_306()//Position - 0x1F32C
{
	return 1;
}

var func_307(var uParam0, int iParam1)//Position - 0x1F335
{
	uParam0->f_80 = 0;
	uParam0->f_69 = 0;
	StringCopy(&(uParam0->f_59), "", 16);
	switch (iParam1)
	{
		case 12:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1652.454f, -3059.149f, 24.932f };
			uParam0->f_14.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_12 = 38.2303f;
			uParam0->f_14.f_6 = { -1651.547f, -3060.478f, 23.8077f };
			uParam0->f_14.f_6.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1650.431f, -3177.229f, 16.9898f };
			uParam0->f_29.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_12 = 38.2303f;
			uParam0->f_29.f_6 = { -1647.495f, -3173.728f, 16.6439f };
			uParam0->f_29.f_6.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_10 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_13 = 60.1875f;
			uParam0->f_48 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_51 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_54 = 60.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 13:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_44 = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_47 = 146.6324f;
			uParam0->f_14 = { -1184.2f, -3345f, 17.5f };
			uParam0->f_14.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_12 = 30.3f;
			uParam0->f_14.f_6 = { -1184.3f, -3345f, 16.6f };
			uParam0->f_14.f_6.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -1272.6f, -3414.7f, 15.6f };
			uParam0->f_29.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_12 = 37.8f;
			uParam0->f_29.f_6 = { -1274f, -3414.4f, 15.6f };
			uParam0->f_29.f_6.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_10 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_13 = 66.1875f;
			uParam0->f_48 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_51 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_54 = 66.1875f;
			uParam0->f_55 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 14:
			*uParam0 = { 1727.302f, 3291.453f, 39.61911f };
			uParam0->f_3 = { 1744.108f, 3296.215f, 44.17199f };
			uParam0->f_6 = 4.6875f;
			uParam0->f_44 = { 1737.53f, 3289.239f, 40.1448f };
			uParam0->f_47 = 14.8763f;
			uParam0->f_14 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_14.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_12 = 50f;
			uParam0->f_14.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_14.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_29.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_12 = 50f;
			uParam0->f_29.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_29.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_7 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_10 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_13 = 28.125f;
			uParam0->f_48 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_51 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_58 = 372;
			StringCopy(&(uParam0->f_59), "HANGAR_NAME2", 16);
			uParam0->f_67 = 1378600;
			StringCopy(&(uParam0->f_63), "HANGAR", 16);
			uParam0->f_80 = 1;
			break;
		
		case 18:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -739.1531f, -1439.509f, 3.188024f };
			uParam0->f_10 = { -753.7792f, -1426.756f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -738f, -1440f, 6.3f };
			uParam0->f_14.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -738f, -1440f, 6f };
			uParam0->f_14.f_6.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -749.3f, -1425.7f, 5.9f };
			uParam0->f_29.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -749.9f, -1426f, 5.9f };
			uParam0->f_29.f_6.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -738.7791f, -1439.377f, 9.125515f };
			uParam0->f_51 = { -755.9111f, -1425.006f, 1.688014f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 19:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -755.6812f, -1459.234f, 3.188023f };
			uParam0->f_10 = { -770.7671f, -1446.867f, 7.188024f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_47 = 142.6382f;
			uParam0->f_14 = { -754.6f, -1460.5f, 6.4f };
			uParam0->f_14.f_3 = { -4.8f, 0f, 48.5f };
			uParam0->f_14.f_12 = 45f;
			uParam0->f_14.f_6 = { -754.6f, -1460.6f, 6.1f };
			uParam0->f_14.f_6.f_3 = { -2.2f, 0f, 48.5f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -771.8f, -1452.6f, 5.7f };
			uParam0->f_29.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { -771.8f, -1452.1f, 5.7f };
			uParam0->f_29.f_6.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -755.5715f, -1459.453f, 9.125514f };
			uParam0->f_51 = { -771.4204f, -1446.235f, 1.688017f };
			uParam0->f_54 = 18.0625f;
			uParam0->f_55 = { -708.48f, -1414.66f, 4f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME", 16);
			uParam0->f_67 = 419850;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 20:
			*uParam0 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_3 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_6 = 17.75f;
			uParam0->f_7 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_10 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_13 = 17.75f;
			uParam0->f_44 = { 1761.122f, 3250.125f, 40.733f };
			uParam0->f_47 = 236.5858f;
			uParam0->f_14 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_14.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_12 = 40f;
			uParam0->f_14.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_14.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_29.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_12 = 40f;
			uParam0->f_29.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_29.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { 1802.327f, 3245.165f, 46.95544f };
			uParam0->f_51 = { 1755.04f, 3237.17f, 38.6937f };
			uParam0->f_54 = 28.125f;
			uParam0->f_55 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_58 = 370;
			StringCopy(&(uParam0->f_59), "HELIPAD_NAME2", 16);
			uParam0->f_67 = 0;
			StringCopy(&(uParam0->f_63), "HELIPAD", 16);
			uParam0->f_80 = 1;
			break;
		
		case 15:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -845.2216f, -1356.04f, -0.212093f };
			uParam0->f_10 = { -841.6451f, -1365.777f, 3.787907f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -835.86f, -1358.347f, 0.6102f };
			uParam0->f_47 = 112.3787f;
			uParam0->f_14 = { -859.6f, -1374f, 4.3f };
			uParam0->f_14.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_12 = 32.9f;
			uParam0->f_14.f_6 = { -859.7f, -1374f, 3f };
			uParam0->f_14.f_6.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -837.2f, -1350.3f, 2.4f };
			uParam0->f_29.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -837.4f, -1350.8f, 2.3f };
			uParam0->f_29.f_6.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 16:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -848.8177f, -1347.786f, -0.212093f };
			uParam0->f_10 = { -845.2482f, -1357.936f, 3.787908f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -839.2461f, -1349.525f, 0.6102f };
			uParam0->f_47 = 110.6762f;
			uParam0->f_14 = { -866.1f, -1365.6f, 4.3f };
			uParam0->f_14.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_12 = 30f;
			uParam0->f_14.f_6 = { -866.1f, -1365.6f, 3f };
			uParam0->f_14.f_6.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -838.7f, -1343.3f, 2.9f };
			uParam0->f_29.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -838.8f, -1343.2f, 2.9f };
			uParam0->f_29.f_6.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 17:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -851.6987f, -1339.128f, -0.212129f };
			uParam0->f_10 = { -848.128f, -1349.168f, 3.787905f };
			uParam0->f_13 = 17.5625f;
			uParam0->f_44 = { -842.0763f, -1341.401f, 0.6102f };
			uParam0->f_47 = 109.8916f;
			uParam0->f_14 = { -866.3f, -1357.9f, 4.3f };
			uParam0->f_14.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_12 = 31.2f;
			uParam0->f_14.f_6 = { -866.3f, -1357.9f, 3f };
			uParam0->f_14.f_6.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7f;
			uParam0->f_29 = { -841.6f, -1336.3f, 2.5f };
			uParam0->f_29.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_12 = 47.5f;
			uParam0->f_29.f_6 = { -841.8f, -1336.1f, 2.5f };
			uParam0->f_29.f_6.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_14.f_14 = 11f;
			uParam0->f_48 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_51 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_54 = 19.625f;
			uParam0->f_55 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_58 = 371;
			StringCopy(&(uParam0->f_59), "MARINA_NAME", 16);
			uParam0->f_67 = 75000;
			StringCopy(&(uParam0->f_63), "MARINA", 16);
			uParam0->f_80 = 1;
			break;
		
		case 21:
			*uParam0 = { -63.38147f, 84.0594f, 70.52139f };
			uParam0->f_3 = { -66.17774f, 77.95913f, 74.05372f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -65.2041f, 81.0524f, 70.5666f };
			uParam0->f_47 = 243.8699f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -62.62f, 80.03f, 70.62f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME1", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 243.8699f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -67.9068f, 82.2664f, 70.5153f };
			uParam0->f_77[0] = 66.202f;
			uParam0->f_70[1 /*3*/] = { -65.1234f, 81.2517f, 70.5644f };
			uParam0->f_77[1] = 71.6237f;
			uParam0->f_80 = 1;
			break;
		
		case 22:
			*uParam0 = { -72.41166f, -1824.142f, 25.81704f };
			uParam0->f_3 = { -68.70254f, -1819.642f, 29.37954f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -70.1992f, -1823.225f, 25.942f };
			uParam0->f_47 = 46.1535f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -71.29f, -1821.68f, 25.94f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME2", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 53.0985f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -64.2268f, -1832.598f, 25.8666f };
			uParam0->f_77[0] = 274.6339f;
			uParam0->f_70[1 /*3*/] = { -68.5531f, -1824.377f, 25.9424f };
			uParam0->f_77[1] = 215.8295f;
			uParam0->f_80 = 1;
			break;
		
		case 23:
			*uParam0 = { -220.7794f, -1159.28f, 21.90302f };
			uParam0->f_3 = { -220.7273f, -1165.265f, 25.45053f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_44 = { -220.7592f, -1162.277f, 22.0242f };
			uParam0->f_47 = 271.2097f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_10 = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_13 = 23f;
			uParam0->f_14 = { 191f, -1026.9f, -98.3f };
			uParam0->f_14.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_14.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_14.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_14.f_12 = 37f;
			uParam0->f_14.f_13 = 0.2f;
			uParam0->f_14.f_14 = 7.5f;
			uParam0->f_29 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_29.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_29.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_29.f_12 = 37f;
			uParam0->f_29.f_13 = 0.2f;
			uParam0->f_29.f_14 = 11.5f;
			uParam0->f_48 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_51 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_54 = 6.25f;
			uParam0->f_55 = { -218.35f, -1162.18f, 22.02f };
			uParam0->f_58 = 369;
			StringCopy(&(uParam0->f_59), "GARAGE_NAME3", 16);
			uParam0->f_67 = 30000;
			StringCopy(&(uParam0->f_63), "CAR_GAR", 16);
			uParam0->f_68 = 271.2097f;
			uParam0->f_69 = 1;
			uParam0->f_70[0 /*3*/] = { -222.1935f, -1162.113f, 22.0204f };
			uParam0->f_77[0] = 358.5703f;
			uParam0->f_70[1 /*3*/] = { -220.8189f, -1162.302f, 22.0242f };
			uParam0->f_77[1] = 70.2711f;
			uParam0->f_80 = 1;
			break;
	}
	return uParam0->f_80;
}

int func_308()//Position - 0x20AE1
{
	func_309();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_309()//Position - 0x20AFA
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_261(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_260(PLAYER::PLAYER_PED_ID());
			if (func_8(iVar0) && (!func_10(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_8(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = iVar0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != 145)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
			}
			return;
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
}

void func_310()//Position - 0x20BF7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (HUD::DOES_BLIP_EXIST(Global_67138.f_208[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Global_67138.f_208[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_139[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_139[iVar0], 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_67138.f_139[iVar0]));
				Global_67138.f_139[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(Local_401.f_110))
	{
		CAM::SET_CAM_ACTIVE(Local_401.f_110, 0);
		CAM::DESTROY_CAM(Local_401.f_110, 0);
	}
	if (CAM::DOES_CAM_EXIST(Local_401.f_111))
	{
		CAM::SET_CAM_ACTIVE(Local_401.f_111, 0);
		CAM::DESTROY_CAM(Local_401.f_111, 0);
	}
	if (Local_401.f_3 != 0)
	{
		func_158();
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_67138.f_583))
	{
		HUD::REMOVE_BLIP(&(Global_67138.f_583));
	}
	if (iLocal_630 != -1)
	{
		func_48(&iLocal_630);
	}
	if (iLocal_629 != -1)
	{
		func_48(&iLocal_629);
	}
	if (Local_401.f_5 != -1)
	{
		func_48(&(Local_401.f_5));
	}
	if (iLocal_642 != -1)
	{
		func_48(&iLocal_642);
	}
	if (Local_401.f_3 > 0)
	{
		if (Global_67138.f_577)
		{
			func_138(47, 1);
			func_136(47, 1);
			Global_67138.f_577 = 0;
			Local_401.f_3 = 0;
		}
	}
	Global_67138.f_553 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_311()//Position - 0x20D53
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_392[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_392[iVar0]));
		}
		iVar0++;
	}
}

void func_312(int iParam0)//Position - 0x20D86
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!MISC::IS_BIT_SET(iLocal_832[iVar0], iVar1))
	{
		MISC::SET_BIT(&(iLocal_832[iVar0]), iVar1);
		iLocal_763[iLocal_762] = iParam0;
		iLocal_762++;
	}
}

void func_313()//Position - 0x20DCC
{
	int iVar0;
	
	if (func_175(25))
	{
		if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_42 != 0 && !func_21(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_42))
		{
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_42 = joaat("fugitive");
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_53 = 0;
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_41 = 0;
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_38 = 255;
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_39 = 255;
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_40 = 255;
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_5 = 0;
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_6 = 0;
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_7 = 0;
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 25)
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_35[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_175(21) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[9 /*54*/].f_42 != 0) && !func_21(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[9 /*54*/].f_42))
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[9 /*54*/].f_42 = 0;
	}
	if ((func_175(22) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[10 /*54*/].f_42 != 0) && !func_21(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[10 /*54*/].f_42))
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[10 /*54*/].f_42 = 0;
	}
	if ((func_175(23) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[11 /*54*/].f_42 != 0) && !func_21(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[11 /*54*/].f_42))
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[11 /*54*/].f_42 = 0;
	}
	if (func_175(26) && !func_21(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[12 /*54*/].f_42))
	{
		func_314(26, 0);
	}
	if (func_175(27) && !func_21(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[13 /*54*/].f_42))
	{
		func_314(27, 0);
	}
	if (func_175(28) && !func_21(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[14 /*54*/].f_42))
	{
		func_314(28, 0);
	}
	if (func_175(29) && !func_21(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[15 /*54*/].f_42))
	{
		func_314(29, 0);
	}
	if (func_175(30) && !func_21(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[16 /*54*/].f_42))
	{
		func_314(30, 0);
	}
	if (func_175(31) && !func_21(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[17 /*54*/].f_42))
	{
		func_314(31, 0);
	}
	if (func_175(32) && !func_21(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[18 /*54*/].f_42))
	{
		func_314(32, 0);
	}
	if (func_175(33) && !func_21(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[19 /*54*/].f_42))
	{
		func_314(33, 0);
	}
	if (func_175(34) && !func_21(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[20 /*54*/].f_42))
	{
		func_314(34, 0);
	}
}

void func_314(int iParam0, bool bParam1)//Position - 0x21144
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_46(iParam0, 0))
		{
			func_202(iParam0, 1, 0);
			func_202(iParam0, 2, 0);
			func_202(iParam0, 3, 0);
			func_202(iParam0, 4, 0);
			func_202(iParam0, 0, 1);
			Global_67138[iParam0] = 1;
		}
	}
	else
	{
		func_202(iParam0, 0, 0);
	}
}

int func_315()//Position - 0x211A1
{
	return 0;
}

int func_316()//Position - 0x211AA
{
	return 1;
}

int func_317()//Position - 0x211B3
{
	return 1;
}

int func_318()//Position - 0x211BC
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

