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
	if (((!GlobalFunc_83() && !GlobalFunc_82()) && !GlobalFunc_82()) && !GlobalFunc_81())
	{
		GlobalFunc_4927(60, 0);
		GlobalFunc_4927(61, 0);
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
			iLocal_646 = GlobalFunc_8329();
			func_269();
			func_267();
			func_242();
			func_11();
			func_3();
			GlobalFunc_6414(&uLocal_906);
		}
	}
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
		else if (((((GlobalFunc_39(0) || GlobalFunc_39(3)) || GlobalFunc_39(2)) || GlobalFunc_39(4)) || GlobalFunc_39(13)) || GlobalFunc_39(14))
		{
			bVar0 = true;
		}
		else if (Global_67138.f_590)
		{
			if (!GlobalFunc_537(Global_67138.f_584, HUD::GET_BLIP_COORDS(Global_67138.f_583), 1056964608) || GlobalFunc_4608(Global_67138.f_582, GlobalFunc_4931(Global_67138.f_582, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_67138.f_591)
		{
			if (!GlobalFunc_537(Global_67138.f_587, HUD::GET_BLIP_COORDS(Global_67138.f_583), 1056964608) || GlobalFunc_4608(Global_67138.f_582, GlobalFunc_4931(Global_67138.f_582, 1)) > 0)
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
	if ((((((!HUD::DOES_BLIP_EXIST(Global_67138.f_583) && !GlobalFunc_39(0)) && !GlobalFunc_39(3)) && !GlobalFunc_39(2)) && !GlobalFunc_39(4)) && !GlobalFunc_39(13)) && !GlobalFunc_39(14))
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
			if (!HUD::DOES_BLIP_EXIST(Global_67138.f_583) && !GlobalFunc_100(Global_67138.f_584, 0f, 0f, 0f))
			{
				Global_67138.f_581 = 0;
				Global_67138.f_582 = iLocal_646;
				Global_67138.f_590 = 1;
				Global_67138.f_583 = HUD::ADD_BLIP_FOR_COORD(Global_67138.f_584);
			}
			if (!HUD::DOES_BLIP_EXIST(Global_67138.f_583) && !GlobalFunc_100(Global_67138.f_587, 0f, 0f, 0f))
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
		if (((((Local_401.f_29.f_80 && !Local_401.f_29.f_69) && Local_401 != -1) && GlobalFunc_78(Local_401, 0)) && GlobalFunc_78(Local_401, 5)) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael1")) == 0)
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
						if ((!GlobalFunc_86(Local_401.f_113) && !GlobalFunc_85(Local_401.f_113)) && Local_401.f_113 != Global_67138.f_484[Local_401])
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
	if (!GlobalFunc_6682(&(Global_67138.f_555[0 /*21*/]), iParam0))
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
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_7719();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = GlobalFunc_104(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						GlobalFunc_8526(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
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
		if (((((((((((((Local_401 == -1 || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_401.f_29.f_7, Local_401.f_29.f_10, Local_401.f_29.f_13, 0, 1, 0)) || ((ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[Local_401]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[Local_401], 0)) && (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_67138.f_484[Local_401]) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_67138.f_484[Local_401], 1)))) || ((ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[Local_401]) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ((ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) - 1f) > 0.15f && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Global_67138.f_484[Local_401])))) || GlobalFunc_39(0)) || GlobalFunc_39(3)) || GlobalFunc_39(2)) || GlobalFunc_39(4)) || GlobalFunc_39(14)) || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) != bLocal_914) || bLocal_750) || GlobalFunc_1546(-1082130432))
		{
			iLocal_628 = 99;
		}
	}
	switch (iLocal_628)
	{
		case 0:
			if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !Global_67058) && !bLocal_750) && !CAM::IS_SCREEN_FADED_OUT())
			{
				if ((((((((((Local_401.f_29.f_80 && Local_401.f_2 == 0) && (Global_67138.f_592[0] != -1 || func_131() != 0)) && Local_401 != -1) && !iLocal_912) && !GlobalFunc_39(0)) && !GlobalFunc_39(3)) && !GlobalFunc_39(2)) && !GlobalFunc_39(4)) && !GlobalFunc_39(14)) && !GlobalFunc_1546(-1082130432))
				{
					if (iLocal_630 != -1)
					{
					}
					else if (GlobalFunc_78(Local_401, 0) && GlobalFunc_78(Local_401, 5))
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
											GlobalFunc_6774(&iLocal_629, 3, "WEB_VEH_TRIG2", 0, 0);
										}
										else
										{
											GlobalFunc_6774(&iLocal_629, 3, "WEB_VEH_TRIG", 0, 0);
										}
										bLocal_914 = GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0);
										iLocal_628++;
									}
								}
								else if (!iLocal_752)
								{
									if (Local_401.f_6 == 0)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || GlobalFunc_74("HANGAR_NO"))
										{
											GlobalFunc_159("HANGAR_NO", -1);
											StringCopy(&cLocal_915, "HANGAR_NO", 16);
										}
										bVar108 = true;
									}
									else if (Local_401.f_6 == 1)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || GlobalFunc_74("MARINA_NO"))
										{
											GlobalFunc_159("MARINA_NO", -1);
											StringCopy(&cLocal_915, "MARINA_NO", 16);
										}
										bVar108 = true;
									}
									else if (Local_401.f_6 == 2)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || GlobalFunc_74("HELIPAD_NO"))
										{
											GlobalFunc_159("HELIPAD_NO", -1);
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
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || GlobalFunc_74(&Var114))
										{
											GlobalFunc_159(&Var114, -1);
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
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4998(0, -1))
			{
				if (iLocal_630 != -1)
				{
					iLocal_628 = 0;
					return;
				}
				if (GlobalFunc_5079(iLocal_629, 1))
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
					GlobalFunc_1395();
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
				GlobalFunc_262(0);
				GlobalFunc_1317(1, 4, 0, 0, 0);
				GlobalFunc_1316(1, 2, 1, 1, 1);
				GlobalFunc_1318("WEB_VEH_TITLE");
				iVar118 = 0;
				while (iVar118 < iLocal_620)
				{
					iLocal_620[iVar118] = 0;
					iVar118++;
				}
				iVar119 = -1;
				iVar120 = 0;
				GlobalFunc_6682(&(Local_401.f_8), Local_401);
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
							GlobalFunc_7025(Global_67138.f_592[iVar121], &Var0, 0, iLocal_646);
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
						GlobalFunc_7830(iVar122, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_127(iVar121)), 0, 1, 0, 0);
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
							GlobalFunc_7025(Global_67138.f_592[iVar121], &Var0, 0, iLocal_646);
							GlobalFunc_7830(iVar122, GlobalFunc_5594(Global_67138.f_592[iVar121]), 0, 1, 0, 0);
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
				GlobalFunc_1588(iLocal_619, 1, 1);
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
						GlobalFunc_6900(0, 0, 0, 1);
						GlobalFunc_1393(0, -1);
						if (func_97())
						{
							if (Global_2543381 != iLocal_619)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_619 = Global_2543381;
								GlobalFunc_1588(iLocal_619, 1, 1);
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
						GlobalFunc_1588(iLocal_619, 1, 1);
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
						GlobalFunc_1588(iLocal_619, 1, 1);
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
									GlobalFunc_1353("VEH_SELECT_CNFA", 0, 0);
									GlobalFunc_5342(-1);
									GlobalFunc_261(201, "ITEM_YES", -1);
									GlobalFunc_261(202, "ITEM_NO", -1);
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
									GlobalFunc_8387(Local_401, Var54, 0f, 0f, 0f, -1f, 145);
									GlobalFunc_76(Local_401);
									GlobalFunc_6682(&(Local_401.f_8), Local_401);
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
									GlobalFunc_7025(Global_67138.f_592[iVar129], &Var0, 0, iLocal_646);
									if (iLocal_619 == iVar130 && ((Local_401.f_8.f_4 != Var0.f_42 || !ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[Local_401])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[Local_401], 0)))
									{
										bVar128 = true;
										if (!iLocal_633)
										{
											if (Local_401.f_6 == 3)
											{
												GlobalFunc_1353("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												GlobalFunc_1353("VEH_SELECT_CNFA", 0, 0);
											}
											GlobalFunc_5342(-1);
											GlobalFunc_261(201, "ITEM_YES", -1);
											GlobalFunc_261(202, "ITEM_NO", -1);
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
											GlobalFunc_7025(Global_67138.f_592[iVar129], &Var0, 0, iLocal_646);
											MISC::SET_BIT(&(Var0.f_53), 14);
											if (VEHICLE::IS_THIS_MODEL_A_PLANE(Var0.f_42))
											{
												MISC::SET_BIT(&(Var0.f_53), 22);
											}
											GlobalFunc_8387(Local_401, Var0, 0f, 0f, 0f, -1f, 145);
											GlobalFunc_76(Local_401);
											GlobalFunc_6682(&(Local_401.f_8), Local_401);
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
				GlobalFunc_1353("", 0, 0);
				GlobalFunc_5342(-1);
				GlobalFunc_261(201, "ITEM_SELECT", -1);
				GlobalFunc_261(202, "ITEM_EXIT", -1);
				iLocal_633 = 0;
				iLocal_634 = 0;
			}
			func_53(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 3:
			if (!iLocal_631 || iLocal_632)
			{
				GlobalFunc_262(0);
				GlobalFunc_1317(1, 0, 0, 0, 0);
				GlobalFunc_1316(1, 1, 1, 1, 1);
				iVar132 = 0;
				while (iVar132 < iLocal_626)
				{
					iLocal_626[iVar132] = 0;
					iVar132++;
				}
				GlobalFunc_1318("WEB_VEH_TITLE2");
				iVar132 = 0;
				while (iVar132 < 25)
				{
					StringCopy(&Var133, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var133, iVar132, 16);
					GlobalFunc_7830(iVar132, &Var133, 0, 1, 0, 0);
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
				GlobalFunc_1588(iLocal_625, 1, 1);
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
						GlobalFunc_6900(0, 0, 0, 1);
						GlobalFunc_1393(0, -1);
						if (func_97())
						{
							if (Global_2543381 != iLocal_625)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_625 = Global_2543381;
								GlobalFunc_1588(iLocal_625, 1, 1);
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
						GlobalFunc_1588(iLocal_625, 1, 1);
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
						GlobalFunc_1588(iLocal_625, 1, 1);
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
					GlobalFunc_7025(200, &Var0, 0, iLocal_646);
					MISC::SET_BIT(&(Var0.f_53), 14);
					if (VEHICLE::IS_THIS_MODEL_A_PLANE(Var0.f_42))
					{
						MISC::SET_BIT(&(Var0.f_53), 22);
					}
					GlobalFunc_8387(Local_401, Var0, 0f, 0f, 0f, -1f, 145);
					GlobalFunc_76(Local_401);
					GlobalFunc_6682(&(Local_401.f_8), Local_401);
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
				GlobalFunc_1353("", 0, 0);
				GlobalFunc_5342(-1);
				GlobalFunc_261(201, "ITEM_SELECT", -1);
				GlobalFunc_261(202, "ITEM_EXIT", -1);
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
			GlobalFunc_4988(1, -1);
			iLocal_628 = 0;
			GlobalFunc_5084(&iLocal_629);
			iLocal_629 = -1;
			break;
	}
	if (!bVar108 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_915))
		{
			if ((((GlobalFunc_74("HANGAR_NO") || GlobalFunc_74("MARINA_NO")) || GlobalFunc_74("HELIPAD_NO")) || GlobalFunc_74("CAR_GAR_NO_1")) || GlobalFunc_74("CAR_GAR_NO_2"))
			{
				HUD::CLEAR_HELP(1);
			}
			StringCopy(&cLocal_915, "", 16);
		}
	}
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
	
	if (!GlobalFunc_240(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!GlobalFunc_4997(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17236)
	{
		if (GlobalFunc_6942(29, 1, 1, &fVar35, &fVar36, bParam7))
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
		if (GlobalFunc_1313())
		{
			iVar57 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) * fVar60));
		}
		fVar61 = (SYSTEM::TO_FLOAT(iVar57) / SYSTEM::TO_FLOAT(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (GlobalFunc_1313())
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
					GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(29), GlobalFunc_5343(29, 1), (Global_17233 + (fParam5 * 0.5f)), (Global_17234 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
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
				GlobalFunc_1327(Global_17233, (Global_17234 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_17236.f_1)) != 0)
				{
					GlobalFunc_1326();
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
						GlobalFunc_1326();
						GlobalFunc_1325((((Global_17233 + fParam5) - 0.00390625f) - GlobalFunc_5346("CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991)), ((Global_17234 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991);
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
				GlobalFunc_1327(Global_17233, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					GlobalFunc_6942(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				GlobalFunc_1324(fVar41);
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
				GlobalFunc_1327(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				GlobalFunc_1324(fVar41);
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
					GlobalFunc_6942(Global_17236.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					GlobalFunc_1323(Global_17236.f_4045, 1, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_4045), GlobalFunc_5343(Global_17236.f_4045, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
					GlobalFunc_6942(Global_2543305.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				GlobalFunc_1324(fVar41);
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
				GlobalFunc_1327(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				GlobalFunc_1324(fVar41);
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
					GlobalFunc_6942(Global_2543305.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					GlobalFunc_1323(Global_2543305.f_67, 1, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_2543305.f_67), GlobalFunc_5343(Global_2543305.f_67, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
					GlobalFunc_5345(bVar31, 1, 0, 0, 0, 0);
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
												GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, iVar70, bVar50);
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
													if (GlobalFunc_6942(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
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
											if (GlobalFunc_6942(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6942(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(26), GlobalFunc_5343(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (GlobalFunc_6942(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6942(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(27), GlobalFunc_5343(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, bVar50);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												GlobalFunc_1322(bVar31);
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
													if (GlobalFunc_6942(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (GlobalFunc_6942(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															GlobalFunc_1323(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_4360[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar28)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar28)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
													if (GlobalFunc_6942(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (GlobalFunc_6942(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															GlobalFunc_1323(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_3843[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar14)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (Global_17233 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17236.f_4360[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar14)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[(iVar22 + iVar14)]), GlobalFunc_5343(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												GlobalFunc_1322(bVar31);
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
											if (GlobalFunc_6942(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6942(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(26), GlobalFunc_5343(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (GlobalFunc_6942(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6942(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(27), GlobalFunc_5343(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										GlobalFunc_1321((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3340[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												GlobalFunc_1322(bVar31);
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
											if (GlobalFunc_6942(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6942(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(26, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(26), GlobalFunc_5343(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (GlobalFunc_6942(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (GlobalFunc_6942(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													GlobalFunc_1323(27, 1, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(27), GlobalFunc_5343(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										GlobalFunc_5345(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										GlobalFunc_1320((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (GlobalFunc_6942(Global_17236.f_3843[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
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
												if (GlobalFunc_6942(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17236.f_4360[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (GlobalFunc_6942(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														GlobalFunc_1323(26, 1, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(26), GlobalFunc_5343(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (GlobalFunc_6942(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (GlobalFunc_6942(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														GlobalFunc_1323(27, 1, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(27), GlobalFunc_5343(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (GlobalFunc_6942(Global_17236.f_3843[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												GlobalFunc_1323(Global_17236.f_3843[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(GlobalFunc_5344(Global_17236.f_3843[iVar22]), GlobalFunc_5343(Global_17236.f_3843[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * GlobalFunc_1319(Global_17236.f_3843[iVar22])), (fVar36 * GlobalFunc_1319(Global_17236.f_3843[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
									if (GlobalFunc_6942(26, 1, 1, &fVar35, &fVar36, bParam7))
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
		GlobalFunc_7629();
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
		GlobalFunc_732(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}













void func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x8119
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!GlobalFunc_240(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !GlobalFunc_4997(bParam4, bParam8))
	{
		return;
	}
	if (GlobalFunc_4996())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (GlobalFunc_6678(PLAYER::PLAYER_ID(), 0))
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
					GlobalFunc_257(&(Global_17236.f_4048[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_17236.f_4241[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						GlobalFunc_257(&(Global_17236.f_4048[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17236.f_4290[iVar1] == -1)
					{
						GlobalFunc_3795(&(Global_17236.f_4241[iVar1 /*4*/]));
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
				GlobalFunc_257(&Global_2543305);
				if (Global_2543305.f_20 == -1)
				{
					GlobalFunc_3795(&(Global_2543305.f_16));
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
		GlobalFunc_6942(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_17236.f_4352[Global_17236.f_4493])
		{
			GlobalFunc_6942(26, 1, 0, &fVar3, &fVar4, 0);
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
	
	if (GlobalFunc_524(1, 1))
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
	if (GlobalFunc_84() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_2046(33, 0) && !GlobalFunc_2948(1751306471))
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




int func_131()//Position - 0xD829
{
	int iVar0;
	
	iVar0 = 0;
	if (GlobalFunc_524(1, 1))
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
	if (GlobalFunc_84() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_2046(33, 0) && !GlobalFunc_2948(1751306471))
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
	if (((((((((((((((Local_401.f_29.f_80 && Local_401.f_29.f_69) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && Local_401.f_2 == 0) && Local_401 != -1) && GlobalFunc_78(Local_401, 0)) && GlobalFunc_78(Local_401, 5)) && !GlobalFunc_39(0)) && !GlobalFunc_39(3)) && !GlobalFunc_39(2)) && !GlobalFunc_39(4)) && !GlobalFunc_39(5)) && !GlobalFunc_39(14)) && !Global_67058) && !GlobalFunc_Is_Mission_Repeat_Or_Benchmark(1)) || ((Local_401.f_3 > 1 && !GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())))
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
				if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0) && (GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_401.f_29.f_68, 90f) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
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
									if ((((((((!func_43(iVar25) || GlobalFunc_86(iVar12)) || GlobalFunc_85(iVar12)) || VEHICLE::IS_BIG_VEHICLE(iVar12)) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar25) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar25)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar25))) || iVar25 == joaat("monster")) || FIRE::IS_ENTITY_ON_FIRE(iVar12)) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar12)) || (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("taxi_procedural")) > 0))
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
							GlobalFunc_6774(&iLocal_630, 3, "WEB_VEH_ENTER", 0, 0);
							iLocal_930 = 0;
							Local_401.f_3 = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || GlobalFunc_74("WEB_VEH_INV"))
							{
								GlobalFunc_159("WEB_VEH_INV", -1);
								StringCopy(&cLocal_919, "WEB_VEH_INV", 16);
								bVar11 = true;
							}
						}
					}
					else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || GlobalFunc_74("WEB_VEH_FULL"))
					{
						GlobalFunc_159("WEB_VEH_FULL", -1);
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
							if ((((((((!func_43(iVar27) || GlobalFunc_86(iVar12)) || GlobalFunc_85(iVar12)) || VEHICLE::IS_BIG_VEHICLE(iVar12)) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar27) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar27)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar27))) || iVar27 == joaat("monster")) || FIRE::IS_ENTITY_ON_FIRE(iVar12)) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar12)) || (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("taxi_procedural")) > 0))
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
				if (((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0) && (GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Local_401.f_29.f_68, 90f) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && func_183()) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2)) && iVar26)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || (STREAMING::HAS_ANIM_DICT_LOADED(sVar14) || !STREAMING::DOES_ANIM_DICT_EXIST(sVar14)))
					{
						if (GlobalFunc_5079(iLocal_630, 1))
						{
							GlobalFunc_5084(&iLocal_630);
							iLocal_928 = 0;
							Local_401.f_3 = 2;
						}
						GlobalFunc_7934(47, 0);
						GlobalFunc_7678(47, 0);
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
								iVar28 = GlobalFunc_7915(Local_401);
								GlobalFunc_6682(&Var29, iVar28);
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
					GlobalFunc_5084(&iLocal_630);
					STREAMING::REMOVE_ANIM_DICT(sVar14);
					Local_401.f_3 = 0;
				}
				break;
			
			case 2:
				GlobalFunc_7934(47, 0);
				GlobalFunc_7678(47, 0);
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
						if (GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(iVar12), Local_401.f_29.f_68, 90f))
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
					GlobalFunc_8316(1, 1, 1, 0);
					GlobalFunc_1569(&(Local_520[1 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
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
								iVar52 = GlobalFunc_104(24);
								if (iVar52 != 0)
								{
									func_167(iVar52, 1, GlobalFunc_8329());
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
					GlobalFunc_8316(1, 1, 1, 0);
					GlobalFunc_1569(&(Local_520[0 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
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
						iVar59 = GlobalFunc_7915(Local_401);
						GlobalFunc_6682(&Var60, iVar59);
						Var18 = { Var60 };
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var18, 20f, 0);
					}
					else
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var21, 20f, 0);
					}
				}
				MISC::SET_BIT(&(Local_648.f_9), 25);
				GlobalFunc_8365(198.0043f, -999.7775f, -100f, 50f, 0);
				GlobalFunc_76(Local_401);
				GlobalFunc_76(26);
				GlobalFunc_76(29);
				GlobalFunc_76(32);
				GlobalFunc_76(28);
				GlobalFunc_76(31);
				GlobalFunc_76(34);
				GlobalFunc_76(27);
				GlobalFunc_76(30);
				GlobalFunc_76(33);
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
				if (GlobalFunc_2768())
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
					GlobalFunc_8316(0, 1, 1, 0);
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
					GlobalFunc_2769();
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
				if (GlobalFunc_2768())
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
					GlobalFunc_2769();
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
					GlobalFunc_2769();
					GlobalFunc_8316(0, 1, 1, 0);
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
							iVar90 = GlobalFunc_7915(Local_401);
							GlobalFunc_6682(&Var91, iVar90);
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
							GlobalFunc_4932(iVar12, &Var112);
							GlobalFunc_8387(iVar90, Var112, 0f, 0f, 0f, -1f, 145);
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
							GlobalFunc_159("CAR_GAR_05", -1);
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
							GlobalFunc_159("CAR_GAR_06", -1);
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
						GlobalFunc_159("CAR_GAR_EXIT", -1);
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
						GlobalFunc_5084(&iLocal_630);
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
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, 1, 0) && GlobalFunc_1575(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 180f, 90f))
					{
						if (iLocal_629 != -1)
						{
							GlobalFunc_5084(&iLocal_629);
						}
						if (iLocal_630 == -1)
						{
							GlobalFunc_6774(&iLocal_630, 3, "WEB_VEH_EXIT", 0, 0);
						}
						if (!iLocal_629 != -1 && !iLocal_630 == -1)
						{
							if (GlobalFunc_5079(iLocal_630, 1))
							{
								GlobalFunc_5084(&iLocal_630);
								iVar168 = 1;
							}
						}
					}
					else if (iLocal_630 != -1)
					{
						GlobalFunc_5084(&iLocal_630);
					}
				}
				if (iLocal_912)
				{
					iVar168 = 1;
				}
				if (iVar168 && !GlobalFunc_160())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || iLocal_912)
					{
						SYSTEM::SETTIMERA(0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_520.f_73[2 /*4*/], 20f, 0);
						if (iLocal_630 != -1)
						{
							GlobalFunc_5084(&iLocal_630);
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
						GlobalFunc_8316(1, 1, 1, 0);
						GlobalFunc_1569(&(Local_520[2 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_520.f_73[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_630 != -1)
						{
							GlobalFunc_5084(&iLocal_630);
						}
						Local_401.f_3 = 11;
					}
					else if (!STREAMING::DOES_ANIM_DICT_EXIST(sVar14))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_520.f_73[1 /*4*/], 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_520.f_73[1 /*4*/].f_3);
						GlobalFunc_8316(1, 1, 1, 0);
						GlobalFunc_1569(&(Local_520[2 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_520.f_73[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_630 != -1)
						{
							GlobalFunc_5084(&iLocal_630);
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
				if (GlobalFunc_2768())
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
						GlobalFunc_8387(iVar171, Var172, 0f, 0f, 0f, -1f, 145);
						GlobalFunc_7627(iVar171);
					}
					else if (iVar171 != -1)
					{
						if (!iLocal_912)
						{
							GlobalFunc_4927(iVar171, 0);
							GlobalFunc_7627(iVar171);
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
								GlobalFunc_9139(GlobalFunc_8329(), &iVar12, 3, 1);
							}
							CAM::DO_SCREEN_FADE_IN(800);
							GlobalFunc_8316(1, 1, 1, 0);
							GlobalFunc_1569(&(Local_520[3 /*15*/]), &(Local_401.f_110), &(Local_401.f_111));
							iLocal_930 = 0;
							iLocal_932 = -1;
							Local_401.f_3 = 15;
						}
						else
						{
							STREAMING::REMOVE_ANIM_DICT(sVar14);
							GlobalFunc_2769();
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
							GlobalFunc_8365(198.0043f, -999.7775f, -100f, 50f, 0);
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
				if (GlobalFunc_2768())
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
				if (iLocal_932 < 1 && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_932 == 0)
					{
						GlobalFunc_8365(198.0043f, -999.7775f, -100f, 50f, 0);
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
				GlobalFunc_5661(47, 1);
				GlobalFunc_5081(47, 1);
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
				GlobalFunc_8316(0, 1, 1, 0);
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
			GlobalFunc_5661(47, 1);
			GlobalFunc_5081(47, 1);
			Global_67138.f_577 = 0;
		}
		Local_401.f_3 = 0;
		if (iLocal_630 != -1)
		{
			GlobalFunc_5084(&iLocal_630);
		}
	}
	if (Global_67138.f_577)
	{
		HUD::HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME();
		GlobalFunc_187();
		GlobalFunc_7629();
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
				if ((((GlobalFunc_74("WEB_VEH_INV") || GlobalFunc_74("WEB_VEH_FULL")) || GlobalFunc_74("CAR_GAR_05")) || GlobalFunc_74("CAR_GAR_06")) || GlobalFunc_74("CAR_GAR_EXIT"))
				{
					HUD::CLEAR_HELP(1);
				}
				StringCopy(&cLocal_919, "", 16);
			}
		}
	}
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
			fVar18 = GlobalFunc_253(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()), fVar16, fVar17);
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
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_933, GlobalFunc_5434(Var0 + Vector(fLocal_934, 0f, 0f), Var6 + Vector(fLocal_934, 0f, 0f), fVar16, fVar17, fVar18), 0, 0, 1);
			if (iLocal_930 && !PED::IS_PED_ON_ANY_BIKE(iParam0))
			{
				ENTITY::SET_ENTITY_ROTATION(iLocal_933, GlobalFunc_5434((0f - Var3.x), (0f - Var3.f_1), (Var3.f_2 + 180f), (0f - Var9.x), (0f - Var9.f_1), (Var9.f_2 + 180f), fVar16, fVar17, fVar18), 2, 1);
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
				ENTITY::SET_ENTITY_ROTATION(iLocal_933, GlobalFunc_5434(Var3, Var9, fVar16, fVar17, fVar18), 2, 1);
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
			if (!GlobalFunc_100(Param11, 0f, 0f, 0f))
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



float func_153(float fParam0)//Position - 0x12B28
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = SYSTEM::SIN(GlobalFunc_569(((fParam0 * 3.141593f) * 0.5f)));
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


float func_155(float fParam0)//Position - 0x12B74
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - SYSTEM::COS(GlobalFunc_569(((fParam0 * 3.141593f) * 0.5f))));
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
			fVar0 = (0.5f * (1f - SYSTEM::COS(GlobalFunc_569((fParam0 * 3.141593f)))));
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
		GlobalFunc_8319(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		GlobalFunc_4932(iParam0, &Var0);
		if (GlobalFunc_100(Param1, 0f, 0f, 0f))
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
		GlobalFunc_8387(iParam5, Var0, Param1, fParam4, GlobalFunc_99(iParam0));
		func_13(iParam5, iParam0, 0);
	}
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
	GlobalFunc_8526(iParam0, iParam2);
	return 1;
}
















int func_183()//Position - 0x14318
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || GlobalFunc_7915(Local_401) != -1)
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
	
	if ((((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || GlobalFunc_39(0)) || GlobalFunc_39(3)) || GlobalFunc_39(2)) || GlobalFunc_39(4)) || GlobalFunc_39(14)) || !GlobalFunc_42(iLocal_646))
	{
		return;
	}
	if (!Global_67058)
	{
		if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_626[iLocal_751] != -15)
		{
			if (!Global_67138[Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_313[iLocal_751]])
			{
				if (GlobalFunc_7640(GlobalFunc_7719(), Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_626[iLocal_751]))
				{
					func_234(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/][iLocal_751], iLocal_751, iLocal_646);
					GlobalFunc_6682(&Var0, Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_313[iLocal_751]);
					if (Var0.f_4 == 0)
					{
					}
					else
					{
						GlobalFunc_4927(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1430[iLocal_646 /*939*/].f_313[iLocal_751], 1);
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
			GlobalFunc_5084(&(Local_401.f_5));
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
				GlobalFunc_7934(47, 1);
				GlobalFunc_7678(47, 1);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			STREAMING::CLEAR_FOCUS();
			HUD::DISPLAY_HUD(1);
			HUD::DISPLAY_RADAR(1);
			GlobalFunc_8316(0, 1, 1, 0);
			bLocal_750 = false;
			Global_24697 = 0;
		}
	}
	bVar22 = false;
	if ((((((((((!bLocal_750 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !Local_401.f_29.f_69)) || (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))) || (!bLocal_750 && GlobalFunc_78(Local_401, 5))) || (!bLocal_750 && PAD::IS_CONTROL_JUST_PRESSED(2, 199))) || (!bLocal_750 && HUD::IS_PAUSE_MENU_ACTIVE())) || !GlobalFunc_4938(0)) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || Global_24594) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())))
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
			if ((((Local_401 != -1 && GlobalFunc_78(Local_401, 0)) && !GlobalFunc_78(Local_401, 5)) && !bLocal_911) && !bVar22)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_401.f_29, Local_401.f_29.f_3, Local_401.f_29.f_6, 0, 1, 0) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					cVar23 = { Local_401.f_29.f_63 };
					StringConCat(&cVar23, "_01", 16);
					GlobalFunc_6774(&(Local_401.f_5), 3, &cVar23, 0, 0);
					Local_401.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_5079(Local_401.f_5, 1))
			{
				if (GlobalFunc_469(iLocal_646) < Local_401.f_29.f_67)
				{
					Local_401.f_4 = MISC::GET_GAME_TIMER();
					GlobalFunc_5084(&(Local_401.f_5));
					iLocal_643 = 0;
					Local_401.f_2 = 90;
				}
				else
				{
					iLocal_643 = 0;
					Local_401.f_4 = MISC::GET_GAME_TIMER();
					GlobalFunc_5084(&(Local_401.f_5));
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
				GlobalFunc_6774(&(Local_401.f_5), 3, &cVar23, 0, 0);
				Local_401.f_2 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_5079(Local_401.f_5, 1))
			{
				if (GlobalFunc_469(iLocal_646) < Local_401.f_29.f_67)
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
							GlobalFunc_7934(47, 0);
							GlobalFunc_7678(47, 0);
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
					GlobalFunc_5084(&(Local_401.f_5));
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
					GlobalFunc_7934(47, 0);
					GlobalFunc_7678(47, 0);
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
				GlobalFunc_8316(1, 1, 1, 0);
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
					GlobalFunc_8316(1, 1, 1, 0);
					GlobalFunc_1569(&(Local_401.f_29.f_14), &(Local_401.f_110), &(Local_401.f_111));
				}
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				STREAMING::NEW_LOAD_SCENE_STOP();
				Local_401.f_2 = 7;
				Local_401.f_4 = MISC::GET_GAME_TIMER();
				GlobalFunc_5084(&(Local_401.f_5));
			}
			break;
		
		case 7:
			if ((MISC::GET_GAME_TIMER() - Local_401.f_4) < 7000 && !GlobalFunc_4926(1000))
			{
				cVar23 = { Local_401.f_29.f_63 };
				StringConCat(&cVar23, "_05", 16);
				GlobalFunc_159(&cVar23, -1);
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
					GlobalFunc_8316(1, 1, 1, 0);
					GlobalFunc_1569(&(Local_401.f_29.f_29), &(Local_401.f_110), &(Local_401.f_111));
				}
				STREAMING::CLEAR_FOCUS();
				HUD::CLEAR_HELP(1);
				Local_401.f_4 = MISC::GET_GAME_TIMER();
				Local_401.f_2 = 8;
			}
			break;
		
		case 8:
			if ((MISC::GET_GAME_TIMER() - Local_401.f_4) < 7000 && !GlobalFunc_4926(1000))
			{
				cVar23 = { Local_401.f_29.f_63 };
				StringConCat(&cVar23, "_06", 16);
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_159(&cVar23, 7000);
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
			if ((MISC::GET_GAME_TIMER() - Local_401.f_4) < 3500 && !GlobalFunc_4926(1000))
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
						GlobalFunc_3795(&cVar23);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						Local_515.f_1 = 1;
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - Local_401.f_4) < 4000 && !GlobalFunc_4926(1000))
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
						GlobalFunc_7934(47, 1);
						GlobalFunc_7678(47, 1);
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4248 = 1;
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::CLEAR_FOCUS();
					HUD::DISPLAY_HUD(1);
					HUD::DISPLAY_RADAR(1);
					GlobalFunc_8316(0, 1, 1, 0);
					bLocal_750 = false;
					Global_24697 = 0;
				}
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_515))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Local_515);
				}
				GlobalFunc_10834(iLocal_646, Local_515.f_4, Local_401.f_29.f_67);
				GlobalFunc_77(Local_401, 5, 1);
				func_189(Local_401);
				if (HUD::DOES_BLIP_EXIST(Global_67138.f_208[Local_401]))
				{
					HUD::REMOVE_BLIP(&(Global_67138.f_208[Local_401]));
				}
				iLocal_836 = Local_401;
				GlobalFunc_4907();
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
					Display_Help_Text(&cVar23);
				}
				else
				{
					Local_401.f_2 = 99;
				}
			}
			break;
	}
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
	GlobalFunc_5723(iVar0, 0);
	iVar2 = func_200(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		GlobalFunc_5901(iVar0);
		if (GlobalFunc_10732(iVar0, iVar1, 1))
		{
			GlobalFunc_10363(iVar0);
			GlobalFunc_5901(iVar0);
		}
	}
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


































void func_234(int iParam0, int iParam1, int iParam2)//Position - 0x18764
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = GlobalFunc_8329();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = GlobalFunc_5594(iParam1);
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
	if (GlobalFunc_10732(iVar0, iVar1, 1))
	{
		GlobalFunc_5722(iVar0, sVar3);
		GlobalFunc_10363(iVar0);
		GlobalFunc_5901(iVar0);
	}
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
				GlobalFunc_8920(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742), Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798);
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 0;
			}
			else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_68043, 0) || GlobalFunc_4929(Global_68043, Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798, 1))
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 0;
			}
			else
			{
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == Global_68043) && GlobalFunc_6712(PLAYER::PLAYER_PED_ID()) != Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798)
				{
					Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 = GlobalFunc_6712(PLAYER::PLAYER_PED_ID());
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
								GlobalFunc_5019(458, 24, -1, 1);
							}
							else
							{
								GlobalFunc_5019(458, 0, -1, 1);
							}
							Global_68043 = 0;
						}
					}
				}
				if (((Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 != GlobalFunc_8329() && Global_89503[Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 /*74*/] == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742.f_42) && MISC::ARE_STRINGS_EQUAL(&(Global_89503[Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 /*74*/].f_27), &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742.f_1))) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					GlobalFunc_98(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 /*54*/]));
					Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 0;
					iLocal_924 = 0;
					GlobalFunc_5019(458, 0, -1, 1);
					Global_68043 = 0;
				}
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(Global_68043) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_68043, 0)) && !GlobalFunc_4929(Global_68043, Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798, 1))
		{
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_924) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_924, 0))
		{
			if (((!Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 && iLocal_924 != Global_68043) && iLocal_924 != iLocal_925) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_924, 1))
			{
				GlobalFunc_8526(iLocal_924, 145);
				iLocal_924 = 0;
				GlobalFunc_5019(458, 0, -1, 1);
			}
		}
		else if (iLocal_924 != 0)
		{
			iLocal_924 = 0;
			GlobalFunc_5019(458, 0, -1, 1);
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
		GlobalFunc_8920(&Global_68047, Global_68101);
		Global_68047.f_42 = 0;
	}
	Var3 = { 433.6721f, -1006.538f, 25.96351f };
	Var6 = { 433.6578f, -1017.5f, 32.09895f };
	fVar9 = 11.25f;
	if (iLocal_641 > 0 && iLocal_641 < 99)
	{
		if (iLocal_641 != 3)
		{
			if (((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var3, Var6, fVar9, 0, 1, 0)) || GlobalFunc_39(0)) || GlobalFunc_39(3)) || GlobalFunc_39(2)) || GlobalFunc_39(14))
			{
				iLocal_641 = 99;
			}
		}
	}
	if (func_258(iLocal_646))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_753))
		{
			if (((GlobalFunc_39(15) || GlobalFunc_39(12)) && iLocal_641 != 3) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				uLocal_753 = GlobalFunc_5104(428.37f, -1013.5f, 27.93f, 0);
				HUD::SET_BLIP_SPRITE(uLocal_753, 225);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_753, "IMPOUND_BLIPNAME");
				HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_753, true);
			}
		}
		else if ((!(GlobalFunc_39(15) || GlobalFunc_39(12)) || iLocal_641 == 3) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
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
				if ((Local_401.f_2 == 0 && (GlobalFunc_39(15) || GlobalFunc_39(12))) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (func_258(iLocal_646))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var3, Var6, fVar9, 0, 1, 0))
						{
							if (GlobalFunc_469(iLocal_646) >= 250)
							{
								iVar10 = 0;
								iVar11 = 0;
								while (iVar11 < 2)
								{
									if (GlobalFunc_6792(iVar11, iLocal_646))
									{
										iVar10++;
									}
									iVar11++;
								}
								if (iVar10 > 1)
								{
									GlobalFunc_6774(&iLocal_642, 3, "IMPOUND_TRIG2", 0, 0);
								}
								else
								{
									GlobalFunc_6774(&iLocal_642, 3, "IMPOUND_TRIG1", 0, 0);
								}
								iLocal_641 = 1;
							}
							else
							{
								GlobalFunc_159("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4998(0, -1))
			{
				if (GlobalFunc_5079(iLocal_642, 1))
				{
					GlobalFunc_5084(&iLocal_642);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_255();
					iVar12 = 0;
					iVar13 = 0;
					while (iVar13 < 2)
					{
						if (GlobalFunc_6792(iVar13, iLocal_646))
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
							if (GlobalFunc_6792(iVar14, iLocal_646))
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
										GlobalFunc_2790(18, 1, 0);
									}
									else
									{
										GlobalFunc_2790(19, 1, 0);
									}
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
									}
									GlobalFunc_10834(iLocal_646, 117, 250);
									func_247(iVar14);
									GlobalFunc_8526(iLocal_645, GlobalFunc_8329());
									GlobalFunc_4988(1, -1);
									iLocal_641 = 3;
									GlobalFunc_5084(&iLocal_642);
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
			switch (GlobalFunc_8329())
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
				GlobalFunc_262(0);
				GlobalFunc_1317(1, 1, 0, 0, 0);
				GlobalFunc_1316(1, 2, 1, 1, 1);
				GlobalFunc_1318("IMPOUND_TITLE");
				iLocal_637 = 0;
				iVar19 = -1;
				iVar21 = 0;
				iVar20 = 0;
				while (iVar20 < 2)
				{
					if (GlobalFunc_6792(iVar20, iLocal_646))
					{
						GlobalFunc_7830(iVar21, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar18 /*109*/][iVar20 /*54*/].f_42), 0, 1, 0, 0);
						if (iVar19 == -1)
						{
							iVar19 = iVar21;
							iLocal_636 = iVar21;
						}
						MISC::SET_BIT(&iLocal_637, iVar21);
						iLocal_638[iVar21] = iVar20;
						GlobalFunc_7830(iVar21, "IMPOUND_COST", 1, 1, 0, 0);
						GlobalFunc_8495(250, 0);
						iVar21++;
					}
					iVar20++;
				}
				iVar21 = 0;
				GlobalFunc_1588(iLocal_636, 1, 1);
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
						GlobalFunc_6900(0, 0, 0, 1);
						GlobalFunc_1393(0, -1);
						if (func_97())
						{
							if (Global_2543381 != iLocal_636)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iLocal_636 = Global_2543381;
								GlobalFunc_1588(iLocal_636, 1, 1);
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
							GlobalFunc_1588(iLocal_636, 1, 1);
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
							GlobalFunc_1588(iLocal_636, 1, 1);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!iLocal_633)
					{
						GlobalFunc_1353("IMPOUND_CNF", 0, 0);
						GlobalFunc_5342(-1);
						GlobalFunc_261(201, "ITEM_YES", -1);
						GlobalFunc_261(202, "ITEM_NO", -1);
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
						if (GlobalFunc_6792(iLocal_638[iLocal_636], iLocal_646))
						{
							while (!func_249(&iLocal_645, iLocal_638[iLocal_636], Var26, 179.24f, 1))
							{
								SYSTEM::WAIT(0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_645))
							{
								if (iLocal_636 == 0)
								{
									GlobalFunc_2790(18, 1, 0);
								}
								else
								{
									GlobalFunc_2790(19, 1, 0);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
								}
								GlobalFunc_10834(iLocal_646, 117, 250);
								func_247(iLocal_638[iLocal_636]);
								GlobalFunc_8526(iLocal_645, GlobalFunc_8329());
								GlobalFunc_4988(1, -1);
								iLocal_641++;
								GlobalFunc_5084(&iLocal_642);
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
				GlobalFunc_1353("", 0, 0);
				GlobalFunc_5342(-1);
				GlobalFunc_261(201, "ITEM_SELECT", -1);
				GlobalFunc_261(202, "ITEM_EXIT", -1);
				iLocal_633 = 0;
				iLocal_634 = 0;
			}
			if (GlobalFunc_4998(0, -1))
			{
				func_53(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			break;
		
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 431.4f, -997.33f, 24.76f, 1) > 20f && !func_243())
			{
				GlobalFunc_8526(iLocal_645, GlobalFunc_8329());
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
							GlobalFunc_8526(iLocal_645, GlobalFunc_8329());
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
			GlobalFunc_5084(&iLocal_642);
			iVar29 = 0;
			while (iVar29 < 2)
			{
				iLocal_638[iVar29] = -1;
				iVar29++;
			}
			GlobalFunc_2790(18, 0, 0);
			GlobalFunc_2790(19, 0, 0);
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
				GlobalFunc_2790(18, 1, 0);
				iLocal_644 = 1;
			}
		}
		else if (iLocal_644 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, 1, 0))
		{
			GlobalFunc_2790(18, 0, 0);
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




void func_247(int iParam0)//Position - 0x1A0AF
{
	int iVar0;
	
	switch (GlobalFunc_8329())
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
	if (iParam0 < 0 || iParam0 >= GlobalFunc_535(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/])))
	{
		return;
	}
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar0 /*109*/][iParam0 /*54*/].f_42 = 0;
}


int func_249(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x1A1CE
{
	int iVar0;
	
	if (!GlobalFunc_6792(iParam1, GlobalFunc_8329()) || ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	switch (GlobalFunc_8329())
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
		if (((MISC::IS_BIT_SET(uParam1->f_53, 15) || GlobalFunc_539(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && GlobalFunc_321())
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
			GlobalFunc_5018(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_42) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_42))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_53, GlobalFunc_101(iVar0 + 1)))
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



int func_258(int iParam0)//Position - 0x1A9B0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (GlobalFunc_6792(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
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
					if (GlobalFunc_230(8))
					{
						uLocal_392[4] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, 1, 1, 0);
						ENTITY::SET_ENTITY_COORDS(uLocal_392[4], 471.48f, fVar0, 30.33f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(uLocal_392[4], 0f, 0f, 116.9f, 2, 1);
						uLocal_392[1] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, 1, 1, 0);
						ENTITY::SET_ENTITY_COORDS(uLocal_392[1], 471.48f, fVar0, 30.15f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(uLocal_392[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (GlobalFunc_230(9))
					{
						uLocal_392[5] = OBJECT::CREATE_OBJECT(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, 1, 1, 0);
						ENTITY::SET_ENTITY_COORDS(uLocal_392[5], 471.48f, fVar0, 29.98f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(uLocal_392[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (GlobalFunc_230(10))
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
		if (GlobalFunc_6682(&Local_648, iVar1))
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
			if (GlobalFunc_82())
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
					iVar4 = GlobalFunc_6712(iVar3);
					if (iVar4 != Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4799)
					{
						if (GlobalFunc_42(iVar4))
						{
							func_296("Updating last character to use vehicle gen", iVar4);
							Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4799 = iVar4;
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_67138.f_139[iParam0], 1))
				{
					GlobalFunc_143("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !GlobalFunc_86(Global_67138.f_139[iParam0])) && !GlobalFunc_85(Global_67138.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
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
					GlobalFunc_143("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !GlobalFunc_86(Global_67138.f_139[iParam0])) && !GlobalFunc_85(Global_67138.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
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
						GlobalFunc_143("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !GlobalFunc_86(Global_67138.f_139[iParam0])) && !GlobalFunc_85(Global_67138.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
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
					GlobalFunc_143("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !GlobalFunc_86(Global_67138.f_139[iParam0])) && !GlobalFunc_85(Global_67138.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
					{
						VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_67138.f_139[iParam0], true);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_67138.f_139[iParam0]));
					Global_67138.f_139[iParam0] = 0;
					Global_67138[iParam0] = 1;
					func_294(iParam0);
					return;
				}
				if (!GlobalFunc_78(iParam0, 0))
				{
					GlobalFunc_143("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !GlobalFunc_86(Global_67138.f_139[iParam0])) && !GlobalFunc_85(Global_67138.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
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
					if ((GlobalFunc_4929(Global_67138.f_139[iParam0], iLocal_646, 1) && !GlobalFunc_86(Global_67138.f_139[iParam0])) && !GlobalFunc_85(Global_67138.f_139[iParam0]))
					{
						GlobalFunc_143("No longer needed: Mission vehicle gen moved to players garage");
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
						iVar6 = GlobalFunc_7719();
						iVar7 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249;
						GlobalFunc_8328(&iVar7, 0, 0, 17, 0, 0, 0);
						if (GlobalFunc_7640(iVar6, iVar7))
						{
							if ((!GlobalFunc_86(Global_67138.f_139[iParam0]) && !GlobalFunc_85(Global_67138.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
							{
								VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(Global_67138.f_139[iParam0], true);
							}
							GlobalFunc_8526(Global_67138.f_139[iParam0], Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4799);
							Global_67138[iParam0] = 1;
							func_294(iParam0);
						}
						else if (GlobalFunc_7941(Global_67138.f_139[iParam0]))
						{
							GlobalFunc_4932(Global_67138.f_139[iParam0], &Global_2436029);
							Global_2436028 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4799;
							iLocal_925 = Global_67138.f_139[iParam0];
						}
					}
					GlobalFunc_143("No longer needed: Player out for range");
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
		GlobalFunc_143("No longer needed: Vehicle not driveable");
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
		GlobalFunc_143("Processing a vehgen vehicle handover request.");
		if (ENTITY::DOES_ENTITY_EXIST(Global_68044) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_68044, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_139[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_139[iParam0], 0))
			{
				if (Global_67138.f_139[iParam0] == Global_68044)
				{
					GlobalFunc_143("Vehicle to be handed over is the same vehicle.");
					Global_68045 = -1;
					Global_68044 = 0;
					return;
				}
				else
				{
					GlobalFunc_143("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !GlobalFunc_86(Global_67138.f_139[iParam0])) && !GlobalFunc_85(Global_67138.f_139[iParam0])) && ENTITY::GET_ENTITY_MODEL(Global_67138.f_139[iParam0]) != joaat("monster"))
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
				GlobalFunc_4932(Global_68044, &Var11);
				if (Global_68046)
				{
					GlobalFunc_8387(iParam0, Var11, ENTITY::GET_ENTITY_COORDS(Global_68044, 1), ENTITY::GET_ENTITY_HEADING(Global_68044), GlobalFunc_99(Global_68044));
				}
				else
				{
					GlobalFunc_8387(iParam0, Var11, Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[Local_648.f_14 /*3*/], Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[Local_648.f_14], GlobalFunc_99(Global_68044));
				}
				Global_67138.f_139[iParam0] = Global_68044;
				Global_67138.f_484[iParam0] = Global_67138.f_139[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar65 = GlobalFunc_8329();
				if (GlobalFunc_42(iVar65))
				{
					GlobalFunc_143("Players stored switch vehicle cleared for prep getaway.");
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
				GlobalFunc_8920(&Global_2436029, Global_2436028);
				Global_2436029.f_42 = 0;
			}
			return;
		}
		if (Global_2436029.f_42 != 0)
		{
			GlobalFunc_8920(&Global_2436029, Global_2436028);
			Global_2436029.f_42 = 0;
		}
		GlobalFunc_143("Vehicle to be handed over doesn't exist.");
		Global_68045 = -1;
		Global_68044 = 0;
	}
	if (Global_67138[iParam0])
	{
		if (uLocal_837[iParam0] >= fVar0)
		{
			Global_67138[iParam0] = 0;
			GlobalFunc_143("Leave area flag cleared");
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
		if (((((iParam0 == 24 && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Local_648.f_14] != 0) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1406[Local_648.f_14] > 3) && Local_648.f_4 != 0) && GlobalFunc_78(iParam0, 0)) && GlobalFunc_4928(Local_648.f_4))
		{
			iVar67 = GlobalFunc_7719();
			iVar68 = Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249;
			GlobalFunc_8328(&iVar68, 0, 0, 17, 0, 0, 0);
			if (GlobalFunc_7640(iVar67, iVar68))
			{
				GlobalFunc_8920(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[Local_648.f_14 /*54*/]), Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4799);
				func_294(iParam0);
				Global_67138[iParam0] = 1;
				GlobalFunc_143("Cannot be created: Vehicle ready for impound");
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
		GlobalFunc_143("Cannot be created: Dummy model");
		return;
	}
	if (!GlobalFunc_4928(Local_648.f_4))
	{
		Global_67138[iParam0] = 1;
		GlobalFunc_143("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!GlobalFunc_78(iParam0, 0))
	{
		Global_67138[iParam0] = 1;
		GlobalFunc_143("Cannot be created: Vehicle gen not available");
		return;
	}
	if (MISC::IS_BIT_SET(Local_648.f_9, 14) && !GlobalFunc_78(iParam0, 5))
	{
		Global_67138[iParam0] = 1;
		GlobalFunc_143("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_290() && GlobalFunc_6687(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_67138[iParam0] = 1;
		GlobalFunc_143("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_647)
	{
		Global_67138[iParam0] = 1;
		GlobalFunc_143("Cannot be created: Player character not valid");
		return;
	}
	if (MISC::IS_BIT_SET(Local_648.f_9, 10))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[iParam0]))
		{
			Global_67138[iParam0] = 1;
			GlobalFunc_143("Cannot be created: Previous dyanmic vehicle still exists");
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
			GlobalFunc_143("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_287(Local_648.f_4, -1))
		{
			Global_67138[iParam0] = 1;
			GlobalFunc_143("Cannot be created: Same vehicle model found nearby gen location");
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
		GlobalFunc_143("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_67138[iParam0] = 1;
			GlobalFunc_143("Cannot be created: Short range switch in progress");
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
		if (GlobalFunc_5886(Local_648.f_12, iVar69, Local_648, -1f))
		{
			Global_67138[iParam0] = 1;
			GlobalFunc_143("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				GlobalFunc_4927(iParam0, 0);
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
					GlobalFunc_143("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var70, "...", 24);
					StringIntConCat(&Var70, ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180 - (MISC::GET_GAME_TIMER() - Global_87746[Local_648.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var70, " seconds", 24);
					GlobalFunc_143(&Var70);
					return;
				}
			}
			else if (iVar69 == 1)
			{
				if (Global_87746[Local_648.f_12 /*3*/][0] != -1 && (MISC::GET_GAME_TIMER() - Global_87746[Local_648.f_12 /*3*/][0]) < CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180)
				{
					Global_67138[iParam0] = 1;
					GlobalFunc_143("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&Var76, "...", 24);
					StringIntConCat(&Var76, ((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 180 - (MISC::GET_GAME_TIMER() - Global_87746[Local_648.f_12 /*3*/][1])) / 1000), 24);
					StringConCat(&Var76, " seconds", 24);
					GlobalFunc_143(&Var76);
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
		iLocal_116[iParam0] = GlobalFunc_4931(Local_648.f_12, iVar69);
		STREAMING::REQUEST_MODEL(iLocal_116[iParam0]);
		MISC::SET_BIT(&(uLocal_47[iParam0]), 2);
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_116[iParam0]))
		{
			GlobalFunc_143("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_284(iLocal_116[iParam0], Local_648, 1))
		{
			GlobalFunc_143("Cannot be created: Player is too close to spawn position (default vehicle type)");
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
			GlobalFunc_143("Cannot be created: Invalid player vehicle type specified");
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
			GlobalFunc_143("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_284(Local_648.f_4, Local_648, 1))
		{
			GlobalFunc_143("Cannot be created: Player is too close to spawn position (specific vehicle type)");
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
				GlobalFunc_4932(Global_67138.f_139[iParam0], &Var82);
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
	iVar136 = GlobalFunc_6732(458, -1, -1);
	if (iVar136 != 0 && iVar136 == iParam0)
	{
		iLocal_924 = Global_67138.f_139[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2436029.f_42 = 0;
	}
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
	
	if (GlobalFunc_42(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		GlobalFunc_97(iParam1, &Var5, iParam7);
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
				if (GlobalFunc_197(&uVar1, &uVar0))
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
				GlobalFunc_5018(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
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
				if (GlobalFunc_197(&uVar1, &uVar0))
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
				GlobalFunc_5018(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
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
				if (GlobalFunc_197(&uVar1, &uVar0))
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
				GlobalFunc_5018(iParam0, &(Var5.f_31), &(Var5.f_57));
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
						GlobalFunc_5120(iParam0);
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
					GlobalFunc_9139(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var5);
				}
				if (bVar81)
				{
					GlobalFunc_531(*iParam0, iParam1);
				}
				return 1;
			}
		}
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
		GlobalFunc_143("player is in vehicle bounds - \"startup_positioning\" is running.");
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


int func_286(int iParam0)//Position - 0x1E314
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_648.f_4 == joaat("frogger2"))
		{
			if (((func_288(Local_648.f_4, -1) || func_287(Local_648.f_4, -1)) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("exile2")) > 0) || !GlobalFunc_230(30))
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
					GlobalFunc_7695(20);
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



void func_294(int iParam0)//Position - 0x1E6F1
{
	if (MISC::IS_BIT_SET(Local_648.f_9, 13))
	{
		GlobalFunc_4927(iParam0, 0);
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
			bVar0 = !GlobalFunc_78(iParam0, 5);
			Var1 = { -961.42f, -2794.47f, 12.96f };
			fVar4 = -209.22f;
			iVar5 = 0;
			iVar6 = joaat("prop_airport_sale_sign");
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !GlobalFunc_78(iParam0, 5);
			Var1 = { -827.93f, -1368.14f, 3.9982f };
			fVar4 = -68.75f;
			iVar5 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !GlobalFunc_78(iParam0, 5);
			bVar0 = true;
			Var1 = { -710.07f, -1414.31f, 4f };
			fVar4 = -41.25f;
			iVar5 = 2;
			break;
		
		case 21:
			bVar0 = !GlobalFunc_78(iParam0, 5);
			Var1 = { -66.21f, 77.76f, 70.51f };
			fVar4 = -27f;
			iVar5 = 3;
			break;
		
		case 22:
			bVar0 = !GlobalFunc_78(iParam0, 5);
			Var1 = { -76.02f, -1825.61f, 25.88f };
			fVar4 = -129.67f;
			iVar5 = 4;
			break;
		
		case 23:
			bVar0 = !GlobalFunc_78(iParam0, 5);
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
	if (GlobalFunc_78(iParam0, 0) && (!MISC::IS_BIT_SET(Local_648.f_9, 14) || GlobalFunc_78(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_67138.f_346[iParam0] != bVar0)
	{
		if (!GlobalFunc_100(Local_648.f_15, 0f, 0f, 0f))
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
		if (GlobalFunc_78(iParam0, 0) && !GlobalFunc_78(iParam0, 5))
		{
			iVar0 = 145;
			if (MISC::IS_BIT_SET(Local_648.f_9, 16))
			{
				iVar0 = GlobalFunc_466(9);
			}
			else if (MISC::IS_BIT_SET(Local_648.f_9, 18))
			{
				iVar0 = GlobalFunc_466(4);
			}
			if (iVar0 == Local_648.f_12)
			{
				GlobalFunc_77(iParam0, 5, 1);
			}
		}
	}
}


void func_301(int iParam0)//Position - 0x1EAD1
{
	if (GlobalFunc_78(iParam0, 0) && !GlobalFunc_78(iParam0, 3))
	{
		if (MISC::IS_BIT_SET(Local_648.f_9, 4))
		{
			GlobalFunc_77(iParam0, 3, 1);
		}
		else
		{
			GlobalFunc_77(iParam0, 3, 1);
		}
	}
}

void func_302(int iParam0)//Position - 0x1EB10
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (GlobalFunc_78(iParam0, 0) && bLocal_647)
	{
		if (MISC::IS_BIT_SET(Local_648.f_9, 0) || (MISC::IS_BIT_SET(Local_648.f_9, 2) && !GlobalFunc_78(iParam0, 2)))
		{
			if ((!MISC::IS_BIT_SET(Local_648.f_9, 21) || (((((((!GlobalFunc_39(0) && !GlobalFunc_39(3)) && !GlobalFunc_39(2)) && !GlobalFunc_39(4)) && !GlobalFunc_39(9)) && !GlobalFunc_39(10)) && !GlobalFunc_39(13)) && !GlobalFunc_39(14))) && ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 || GlobalFunc_78(iParam0, 5)) || !MISC::IS_BIT_SET(Local_648.f_9, 28)))
			{
				bVar0 = false;
				if (!HUD::DOES_BLIP_EXIST(Global_67138.f_208[iParam0]))
				{
					if (GlobalFunc_230(0))
					{
						if (MISC::IS_BIT_SET(Local_648.f_9, 14) && !GlobalFunc_78(iParam0, 5))
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
						else if (GlobalFunc_78(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
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
	if (GlobalFunc_78(iParam0, 0) && !GlobalFunc_78(iParam0, 1))
	{
		if (GlobalFunc_78(iParam0, 4))
		{
			if (MISC::IS_BIT_SET(Local_648.f_9, 3))
			{
				GlobalFunc_6677(&(Local_648.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				GlobalFunc_77(iParam0, 1, 1);
			}
			else
			{
				GlobalFunc_77(iParam0, 1, 1);
			}
		}
	}
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
	if (GlobalFunc_39(14))
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
						iVar2 = GlobalFunc_1365(iVar0);
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
							GlobalFunc_77(iParam0, 4, 1);
							GlobalFunc_77(iParam0, 2, 1);
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
		GlobalFunc_2769();
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_67138.f_583))
	{
		HUD::REMOVE_BLIP(&(Global_67138.f_583));
	}
	if (iLocal_630 != -1)
	{
		GlobalFunc_5084(&iLocal_630);
	}
	if (iLocal_629 != -1)
	{
		GlobalFunc_5084(&iLocal_629);
	}
	if (Local_401.f_5 != -1)
	{
		GlobalFunc_5084(&(Local_401.f_5));
	}
	if (iLocal_642 != -1)
	{
		GlobalFunc_5084(&iLocal_642);
	}
	if (Local_401.f_3 > 0)
	{
		if (Global_67138.f_577)
		{
			GlobalFunc_5661(47, 1);
			GlobalFunc_5081(47, 1);
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
	
	if (GlobalFunc_5599(25))
	{
		if (Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_42 != 0 && !GlobalFunc_4928(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[22 /*54*/].f_42))
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
	if ((GlobalFunc_5599(21) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[9 /*54*/].f_42 != 0) && !GlobalFunc_4928(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[9 /*54*/].f_42))
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[9 /*54*/].f_42 = 0;
	}
	if ((GlobalFunc_5599(22) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[10 /*54*/].f_42 != 0) && !GlobalFunc_4928(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[10 /*54*/].f_42))
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[10 /*54*/].f_42 = 0;
	}
	if ((GlobalFunc_5599(23) && Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[11 /*54*/].f_42 != 0) && !GlobalFunc_4928(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[11 /*54*/].f_42))
	{
		Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[11 /*54*/].f_42 = 0;
	}
	if (GlobalFunc_5599(26) && !GlobalFunc_4928(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[12 /*54*/].f_42))
	{
		GlobalFunc_4927(26, 0);
	}
	if (GlobalFunc_5599(27) && !GlobalFunc_4928(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[13 /*54*/].f_42))
	{
		GlobalFunc_4927(27, 0);
	}
	if (GlobalFunc_5599(28) && !GlobalFunc_4928(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[14 /*54*/].f_42))
	{
		GlobalFunc_4927(28, 0);
	}
	if (GlobalFunc_5599(29) && !GlobalFunc_4928(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[15 /*54*/].f_42))
	{
		GlobalFunc_4927(29, 0);
	}
	if (GlobalFunc_5599(30) && !GlobalFunc_4928(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[16 /*54*/].f_42))
	{
		GlobalFunc_4927(30, 0);
	}
	if (GlobalFunc_5599(31) && !GlobalFunc_4928(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[17 /*54*/].f_42))
	{
		GlobalFunc_4927(31, 0);
	}
	if (GlobalFunc_5599(32) && !GlobalFunc_4928(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[18 /*54*/].f_42))
	{
		GlobalFunc_4927(32, 0);
	}
	if (GlobalFunc_5599(33) && !GlobalFunc_4928(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[19 /*54*/].f_42))
	{
		GlobalFunc_4927(33, 0);
	}
	if (GlobalFunc_5599(34) && !GlobalFunc_4928(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[20 /*54*/].f_42))
	{
		GlobalFunc_4927(34, 0);
	}
}






