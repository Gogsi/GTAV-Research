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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	struct<20> Local_86 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	struct<3> Local_110 = { 0, 0, 0 } ;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	struct<3> Local_115[32];
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_109 = 40;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_111(ScriptParam_0))
		{
			func_110();
		}
	}
	while (true)
	{
		func_109();
		if (func_100())
		{
			func_110();
		}
		switch (func_99(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_98() == 1)
				{
					if (func_97())
					{
						Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 1;
					}
				}
				break;
			
			case 1:
				if (func_98() == 1)
				{
					func_34();
				}
				else if (func_98() == 3)
				{
					Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_110();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_98())
			{
				case 0:
					if (func_31())
					{
						Global_2441732 = 1;
					}
					break;
				
				case 1:
					if (func_30())
					{
						Global_2441732 = 3;
					}
					func_1();
					break;
				
				case 3:
					func_110();
					break;
				}
		}
	}
}

void func_1()//Position - 0x14F
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	switch (Global_2441732.f_2)
	{
		case 0:
			if (!MISC::IS_BIT_SET(Global_2441732.f_1, 1))
			{
				func_29(&(Global_2441732.f_60));
				MISC::SET_BIT(&(Global_2441732.f_1), 1);
			}
			else if (func_27(&(Global_2441732.f_60), Global_2441732.f_62, 0))
			{
				func_26(1);
				MISC::CLEAR_BIT(&(Global_2441732.f_1), 1);
			}
			break;
		
		case 1:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar0 = 0;
				while (iVar0 < 8)
				{
					iVar1 = iVar0;
					func_25(iVar1, 0f);
					if (!func_24(iVar1))
					{
						if (func_12(func_23(iVar1), func_22(iVar1), func_21(iVar1), 1, 1))
						{
							if (!func_11(iVar1))
							{
								func_25(iVar1, func_10(iVar1));
							}
						}
					}
					iVar0++;
				}
				func_26(3);
			}
			else
			{
				func_26(0);
			}
			break;
		
		case 3:
			Global_2441732.f_3 = -1;
			iVar2 = func_9();
			if (iVar2 != -1)
			{
				Global_2441732.f_3 = { Global_2441732.f_8[iVar2 /*5*/] };
				func_26(4);
			}
			else
			{
				Global_2441732.f_62 = (Global_262145.f_6409 / 2);
				func_26(0);
			}
			break;
		
		case 4:
			switch (func_8(Global_2441732.f_3))
			{
				case 0:
					break;
				
				case 1:
					switch (Global_2441732.f_3)
					{
						case 1:
							func_6();
							break;
					}
					bVar3 = true;
					if (bVar3)
					{
						if (Global_2441732.f_3 == 1)
						{
							if (MISC::IS_BIT_SET(Global_2441732.f_1, 4))
							{
								func_26(5);
							}
							else
							{
								func_26(6);
							}
						}
						else
						{
							func_26(6);
						}
					}
					else
					{
						func_25(Global_2441732.f_3, 0f);
						func_26(3);
					}
					break;
				
				case 2:
					func_25(Global_2441732.f_3, 0f);
					func_26(3);
					break;
			}
			break;
		
		case 5:
			if (Global_2441732.f_3 == 1)
			{
				if (MISC::IS_BIT_SET(Global_2441732.f_1, 4))
				{
					if (!MISC::IS_BIT_SET(Global_2441732.f_1, 3))
					{
						func_29(&(Global_2441732.f_58));
						MISC::SET_BIT(&(Global_2441732.f_1), 3);
					}
					else if (func_27(&(Global_2441732.f_58), (Global_262145.f_44 * 120000), 0))
					{
						MISC::CLEAR_BIT(&(Global_2441732.f_1), 3);
						func_26(6);
					}
				}
				else
				{
					func_26(6);
				}
			}
			else
			{
				func_26(6);
			}
			break;
		
		case 6:
			if (Global_2441732.f_3.f_1 == 19)
			{
				func_4(func_5(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_IMP_EXP", -1, 0)), 1);
				Global_2446554.f_1550 = 0;
				func_26(7);
				func_3(Global_2441732.f_3);
			}
			else if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_2(Global_2441732.f_3.f_1), -1, 0, 0))
			{
				func_26(7);
				func_3(Global_2441732.f_3);
			}
			break;
		
		case 7:
			if (Global_2441732.f_3.f_1 == 19)
			{
				if (Global_2446554.f_1550)
				{
					func_26(8);
					Global_2446554.f_1550 = 0;
				}
			}
			else if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_2(Global_2441732.f_3.f_1), -1, 0, 0))
			{
				func_26(8);
			}
			break;
		
		case 8:
			if (MISC::IS_BIT_SET(Global_2441732.f_1, 0))
			{
				func_26(0);
				MISC::CLEAR_BIT(&(Global_2441732.f_1), 0);
			}
			else
			{
				Global_2441732.f_62 = Global_262145.f_6409;
				Global_2441732.f_8[Global_2441732.f_3 /*5*/].f_4 = 1;
				if (MISC::IS_BIT_SET(Global_2441732.f_1, 2))
				{
					MISC::CLEAR_BIT(&(Global_2441732.f_1), 2);
				}
				if (MISC::IS_BIT_SET(Global_2441732.f_1, 4))
				{
					MISC::CLEAR_BIT(&(Global_2441732.f_1), 4);
				}
				Global_2441732.f_3 = -1;
				Global_2441732.f_3.f_1 = 0;
				MISC::SET_BIT(&(Global_2441732.f_1), 0);
			}
			break;
	}
}

char* func_2(int iParam0)//Position - 0x4F0
{
	switch (iParam0)
	{
		case 1:
			return "AM_HOLD_UP";
		
		case 2:
			return "AM_CR_SecurityVan";
		
		case 32:
			return "AM_JOYRIDER";
		
		case 33:
			return "AM_PLANE_TAKEDOWN";
		
		case 34:
			return "AM_DISTRACT_COPS";
		
		case 35:
			return "AM_DESTROY_VEH";
		
		case 3:
			return "AM_CR_SELL_DRUGS";
		
		case 12:
			return "AM_Safehouse";
		
		case 16:
			return "MG_RACE_TO_POINT";
		
		case 18:
			return "AM_CRATE_DROP";
		
		case 28:
			return "AM_AMMO_DROP";
		
		case 29:
			return "AM_VEHICLE_DROP";
		
		case 30:
			return "AM_BRU_BOX";
		
		case 31:
			return "AM_GA_PICKUPS";
		
		case 26:
			return "AM_backup_heli";
		
		case 27:
			return "AM_airstrike";
		
		case 17:
			return "AM_PI_MENU";
		
		case 36:
			return "AM_BOAT_TAXI";
		
		case 37:
			return "AM_HELI_TAXI";
		
		case 19:
			return "AM_IMP_EXP";
		
		case 22:
			return "AM_TAXI";
		
		case 23:
			return "AM_TAXI_LAUNCHER";
		
		case 24:
			return "AM_GANG_CALL";
		
		case 25:
			return "heli_gun";
		
		case 49:
			return "am_rollercoaster";
		
		case 50:
			return "am_ferriswheel";
		
		case 51:
			return "AM_LAUNCHER";
		
		case 52:
			return "AM_DAILY_OBJECTIVES";
		
		case 4:
			return "AM_STRIPPER";
		
		case 13:
			return "AM_Hitchhiker";
		
		case 5:
			return "stripclub_mp";
		
		case 6:
			return "AM_ArmWrestling";
		
		case 8:
			return "AM_Tennis";
		
		case 9:
			return "AM_Darts";
		
		case 7:
			return "AM_ImportExport";
		
		case 10:
			return "AM_FistFight";
		
		case 11:
			return "AM_DropOffHooker";
		
		case 15:
			return "AM_DOORS";
		
		case 20:
			return "FM_INTRO";
		
		case 21:
			return "AM_PROSTITUTE";
		
		case 38:
			return "fm_hold_up_tut";
		
		case 39:
			return "AM_CAR_MOD_TUT";
		
		case 40:
			return "AM_CONTACT_REQUESTS";
		
		case 41:
			return "am_mission_launch";
		
		case 42:
			return "am_npc_invites";
		
		case 43:
			return "am_lester_cut";
		
		case 45:
			return "AM_VEHICLE_SPAWN";
		
		case 46:
			return "am_ronTrevor_Cut";
		
		case 47:
			return "AM_ARMYBASE";
		
		case 48:
			return "AM_PRISON";
		
		case 53:
			return "AM_ArmWrestling";
		
		case 60:
			return "fm_Bj_race_controler";
		
		case 54:
			return "AM_Darts";
		
		case 61:
			return "fm_deathmatch_controler";
		
		case 59:
			return "FM_Impromptu_DM_Controler";
		
		case 62:
			return "fm_hideout_controler";
		
		case 55:
			return "golf_mp";
		
		case 58:
			return "Pilot_School_MP";
		
		case 63:
			return "FM_Mission_Controller";
		
		case 64:
			return "FM_Race_Controler";
		
		case 56:
			return "Range_Modern_MP";
		
		case 65:
			return "FM_Horde_Controler";
		
		case 57:
			return "tennis_network_mp";
		
		case 44:
			return "am_heist_int";
		
		case 66:
			return "SCTV";
		
		case 0:
			return "";
		
		default:
	}
	return "";
}

void func_3(var uParam0)//Position - 0x84D
{
	int iVar0;
	
	if (Global_262145.f_6408 > 0 && Global_262145.f_6408 <= 8)
	{
		if (!Global_2441732.f_49[(Global_262145.f_6408 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < (Global_262145.f_6408 - 1))
			{
				Global_2441732.f_49[iVar0] = Global_2441732.f_49[iVar0 + 1];
				iVar0++;
			}
		}
		Global_2441732.f_49[(Global_262145.f_6408 - 1)] = uParam0;
	}
}

void func_4(int iParam0, int iParam1)//Position - 0x8CA
{
	struct<3> Var0;
	
	Var0.x = 363;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

int func_5(int iParam0)//Position - 0x8FA
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

void func_6()//Position - 0x90C
{
	func_7(func_5(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("freemode", -1, 0)), 0);
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < Global_262145.f_108)
	{
		if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() >= Global_262145.f_109)
		{
			func_7(func_5(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("freemode", -1, 0)), 1);
			MISC::SET_BIT(&(Global_2441732.f_1), 4);
		}
	}
}

void func_7(int iParam0, int iParam1)//Position - 0x968
{
	struct<3> Var0;
	
	Var0.x = 364;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

int func_8(struct<4> Param0, var uParam4)//Position - 0x998
{
	int iVar0;
	
	iLocal_106 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			if (MISC::IS_BIT_SET(Local_115[iVar0 /*3*/].f_1, 0))
			{
				iLocal_106++;
				if (Param0.f_1 == 18)
				{
					if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() >= Param0.f_3)
					{
						return 1;
					}
					else
					{
						return 2;
					}
				}
				if (iLocal_106 >= Param0.f_3)
				{
					if (Param0.f_1 == 2)
					{
						if (!MISC::IS_BIT_SET(Global_2441732.f_1, 2))
						{
							MISC::SET_BIT(&(Global_2441732.f_1), 2);
						}
					}
					return 1;
				}
			}
			else if (MISC::IS_BIT_SET(Local_115[iVar0 /*3*/].f_1, 1))
			{
			}
			else if (!MISC::IS_BIT_SET(Local_115[iVar0 /*3*/].f_1, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 2;
}

int func_9()//Position - 0xA53
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		fVar1 = (fVar1 + Global_2441732.f_8[iVar0 /*5*/].f_2);
		iVar0++;
	}
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		fVar2 = (fVar2 + Global_2441732.f_8[iVar0 /*5*/].f_2);
		if (fVar3 < fVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_10(int iParam0)//Position - 0xABA
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_6446;
		
		case 1:
			return Global_262145.f_6443;
		
		case 2:
			return Global_262145.f_6444;
		
		case 3:
			return Global_262145.f_6445;
		
		case 4:
			return Global_262145.f_6447;
		
		case 5:
			return Global_262145.f_6448;
		
		case 6:
			return Global_262145.f_6449;
		
		case 7:
			return Global_262145.f_6829;
		
		default:
	}
	return 0f;
}

int func_11(int iParam0)//Position - 0xB4A
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_4999;
		
		case 1:
			return Global_262145.f_4996;
		
		case 2:
			return Global_262145.f_4997;
		
		case 3:
			return Global_262145.f_4998;
		
		case 4:
			return Global_262145.f_6497;
		
		case 5:
			return Global_262145.f_6394;
		
		case 6:
			return Global_262145.f_6399;
		
		case 7:
			return Global_262145.f_6404;
		
		default:
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xBDA
{
	if ((func_20(iParam0, bParam3, bParam4) || func_19(iParam1, bParam3, bParam4)) || func_13(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_13(int iParam0, bool bParam1, bool bParam2)//Position - 0xC14
{
	return func_14(2, iParam0, 0, bParam1, bParam2);
}

int func_14(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xC28
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_1336615, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_18(iParam0) - func_17(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_17(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_18(iParam0) - func_16(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_17(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_18(iParam0) - func_17(iParam0, 1));
		}
		if (!bParam4 && Global_1582596[PLAYER::PLAYER_ID() /*324*/] != 3)
		{
			iVar1 = (iVar1 - func_15(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0)//Position - 0xCF1
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0xD2B
{
	switch (iParam0)
	{
		case 0:
			return Global_1336615.f_1;
			break;
		
		case 1:
			return Global_1336615.f_2;
			break;
		
		case 2:
			return Global_1336615.f_3;
			break;
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)//Position - 0xD71
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2414009[iVar0 /*254*/].f_206;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2414009[iVar0 /*254*/].f_207;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2414009[iVar0 /*254*/].f_208;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1);
			}
			break;
	}
	return 0;
}

int func_18(int iParam0)//Position - 0xE08
{
	switch (iParam0)
	{
		case 0:
			return Global_1336623;
			break;
		
		case 1:
			return Global_1336624;
			break;
		
		case 2:
			return Global_1336625;
			break;
	}
	return 0;
}

int func_19(int iParam0, bool bParam1, bool bParam2)//Position - 0xE48
{
	return func_14(1, iParam0, 0, bParam1, bParam2);
}

int func_20(int iParam0, bool bParam1, bool bParam2)//Position - 0xE5C
{
	return func_14(0, iParam0, 0, bParam1, bParam2);
}

int func_21(int iParam0)//Position - 0xE70
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		default:
	}
	return 0;
}

int func_22(int iParam0)//Position - 0xED0
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_23(int iParam0)//Position - 0xF30
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 4;
		
		case 2:
			return 2;
		
		case 3:
			return 0;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 4;
		
		default:
	}
	return 0;
}

int func_24(int iParam0)//Position - 0xF90
{
	int iVar0;
	
	if (Global_262145.f_6408 > 0 && Global_262145.f_6408 <= 8)
	{
		if (!Global_2441732.f_49[(Global_262145.f_6408 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_6408)
			{
				if (Global_2441732.f_49[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

void func_25(int iParam0, float fParam1)//Position - 0xFF6
{
	Global_2441732.f_8[iParam0 /*5*/].f_2 = fParam1;
}

void func_26(int iParam0)//Position - 0x100C
{
	Global_2441732.f_2 = iParam0;
}

int func_27(var uParam0, int iParam1, bool bParam2)//Position - 0x101C
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_28(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_28(var uParam0, bool bParam1, bool bParam2)//Position - 0x107A
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_29(var uParam0)//Position - 0x10BF
{
	uParam0->f_1 = 0;
}

int func_30()//Position - 0x10CC
{
	return 0;
}

int func_31()//Position - 0x10D5
{
	int iVar0;
	int iVar1;
	
	Global_2441732.f_62 = Global_262145.f_6409;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2441732.f_8[iVar0 /*5*/] = iVar0;
		Global_2441732.f_8[iVar0 /*5*/].f_1 = func_33(iVar0);
		Global_2441732.f_8[iVar0 /*5*/].f_2 = 1f;
		Global_2441732.f_8[iVar0 /*5*/].f_3 = func_32(iVar0);
		iVar0++;
	}
	if (Global_262145.f_6408 > 0 && Global_262145.f_6408 <= 8)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_6408)
		{
			Global_2441732.f_49[iVar1] = -1;
			iVar1++;
		}
	}
	return 1;
}

int func_32(int iParam0)//Position - 0x1179
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return Global_262145.f_4822;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 2;
		
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x11DF
{
	switch (iParam0)
	{
		case 0:
			return 32;
			break;
		
		case 1:
			return 18;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 19;
			break;
		
		case 4:
			return 41;
			break;
		
		case 5:
			return 33;
			break;
		
		case 6:
			return 34;
			break;
		
		case 7:
			return 35;
			break;
	}
	return 0;
}

void func_34()//Position - 0x125E
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	switch (Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			if (Global_2441732.f_2 >= 4 && Global_2441732.f_2 != 8)
			{
				if (MISC::IS_BIT_SET(Global_2441732.f_1, 2))
				{
					MISC::SET_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
					MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
				}
				if (!MISC::IS_BIT_SET(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1, 1))
				{
					func_96(4);
				}
				else if (!MISC::IS_BIT_SET(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1, 3))
				{
					func_29(&uLocal_107);
					MISC::SET_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 3);
				}
				else if (func_27(&uLocal_107, 10000, 0))
				{
					func_96(4);
					MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 3);
				}
			}
			else if (MISC::IS_BIT_SET(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1, 1))
			{
				MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
			}
			break;
		
		case 4:
			if (MISC::IS_BIT_SET(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1, 0))
			{
				if (Global_2441732.f_2 == 8)
				{
					func_96(8);
					MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
				}
				else if (Global_2441732.f_2 == 5)
				{
					func_96(5);
					MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
				}
				else if (Global_2441732.f_2 >= 6)
				{
					func_96(6);
					MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
				}
				else if (Global_2441732.f_2 == 3)
				{
					func_96(0);
					MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
				}
			}
			else
			{
				iVar0 = 0;
				if (((((((((((((!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() && !func_95(PLAYER::PLAYER_ID())) && !func_94()) && !func_93()) && !func_92()) && !func_91()) && !func_89(PLAYER::PLAYER_ID())) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_87(PLAYER::PLAYER_ID())) && func_85()) && !func_84(PLAYER::PLAYER_ID(), 0)) && !func_84(PLAYER::PLAYER_ID(), 7)) && !func_83(PLAYER::PLAYER_ID(), 0)) && func_82(PLAYER::PLAYER_ID(), 1, 1))
				{
					iVar1 = func_81(Global_2441732.f_3);
					if (iVar1 < 0 || !func_79(iVar1))
					{
						switch (Global_2441732.f_3)
						{
							case 0:
								if (((func_74(0) && func_72(func_73(PLAYER::PLAYER_ID()), 40f, 40f, 40f)) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 10f) && !func_71())
								{
									iVar0 = 1;
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							case 1:
								if (func_61(31, 0))
								{
									iVar0 = 1;
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							case 2:
								if (func_61(20, 0) && !func_60())
								{
									iVar0 = func_52();
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							case 3:
								if (func_61(19, 0))
								{
									iVar0 = 1;
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							case 4:
								if (((((func_61(20, 0) && !func_84(PLAYER::PLAYER_ID(), 1)) && !func_84(PLAYER::PLAYER_ID(), 2)) && !func_84(PLAYER::PLAYER_ID(), 3)) && !Global_2422140.f_3033) && !func_50())
								{
									iVar0 = 1;
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							case 5:
								if (func_61(124, 0))
								{
									iVar0 = 1;
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							case 6:
								if (func_61(126, 0))
								{
									iVar0 = 1;
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							case 7:
								if (func_61(127, 0))
								{
									iVar0 = 1;
								}
								else
								{
									iVar0 = 2;
								}
								break;
							
							default:
								iVar0 = 2;
								break;
						}
					}
					else
					{
						iVar0 = 2;
					}
				}
				else
				{
					iVar0 = 2;
				}
				if (iVar0 == 1)
				{
					MISC::SET_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 0);
				}
				else if (iVar0 == 2)
				{
					func_96(0);
					MISC::SET_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
				}
			}
			break;
		
		case 5:
			if (Global_2441732.f_2 == 6)
			{
				MISC::CLEAR_BIT(&(Global_2446554.f_200.f_1), 1);
				MISC::CLEAR_BIT(&(Global_2446554.f_200.f_1), 2);
				MISC::CLEAR_BIT(&(Global_2446554.f_200.f_1), 3);
				func_96(6);
			}
			else if (MISC::IS_BIT_SET(Global_2441732.f_1, 3) && func_49(&(Global_2441732.f_58)))
			{
				func_39();
			}
			break;
		
		case 6:
			uVar2 = func_2(Global_2441732.f_3.f_1);
			if (Global_2441732.f_3.f_1 == 19)
			{
				if (Global_2446554.f_1547)
				{
					if (Global_2441732.f_2 == 7)
					{
						func_96(7);
					}
				}
				else if (Global_2446554.f_1548)
				{
					Global_2446554.f_1548 = 0;
					func_96(0);
					MISC::SET_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 1);
				}
			}
			else if (!MISC::IS_BIT_SET(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1, 2))
			{
				Local_86.f_16 = -1;
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(uVar2)) == 0)
				{
					if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(uVar2, -1, 0, 0) || NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(uVar2, -1, 0) < 32)
					{
						if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(uVar2, -1, 1, 0))
						{
							Local_86 = Global_2441732.f_3.f_1;
							if (func_35(Local_86, 0))
							{
								MISC::SET_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 2);
							}
						}
					}
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(uVar2)) != 0)
			{
				if (Global_2441732.f_2 == 7)
				{
					func_96(7);
					MISC::CLEAR_BIT(&(Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_1), 2);
				}
			}
			break;
		
		case 7:
			if (Global_2441732.f_2 != 7)
			{
				func_96(8);
			}
			break;
		
		case 8:
			func_96(0);
			break;
	}
}

int func_35(struct<17> Param0, var uParam17, var uParam18, var uParam19, bool bParam20)//Position - 0x180F
{
	char cVar0[32];
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (func_38())
	{
		return 0;
	}
	bParam20 = bParam20;
	StringCopy(&cVar0, func_2(Param0), 32);
	if (SCRIPT::DOES_SCRIPT_EXIST(&cVar0))
	{
		SCRIPT::REQUEST_SCRIPT(&cVar0);
		if (SCRIPT::HAS_SCRIPT_LOADED(&cVar0))
		{
			iVar8 = 1;
			if (bParam20)
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 16)
				{
					if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar0, iVar9, iVar8, 0))
					{
						return 0;
					}
					iVar9++;
				}
			}
			else if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar0, Param0.f_16, iVar8, 0))
			{
				return 0;
			}
			iVar10 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&cVar0, &Param0, 20, func_36(Param0));
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar0);
			if (iVar10 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x18B8
{
	switch (iParam0)
	{
		case 53:
		case 60:
		case 54:
		case 58:
		case 61:
		case 62:
		case 55:
		case 63:
		case 64:
		case 56:
		case 65:
		case 57:
		case 66:
		case 59:
			return 30000;
		
		default:
	}
	if (func_37(iParam0) == 3)
	{
		return 8344;
	}
	else if (func_37(iParam0) == 7)
	{
		return 3650;
	}
	else if (func_37(iParam0) == 0)
	{
		return 3650;
	}
	else if (func_37(iParam0) == 2)
	{
		return 3650;
	}
	else if (func_37(iParam0) == 6)
	{
		if (((((((iParam0 == 18 || iParam0 == 22) || iParam0 == 24) || iParam0 == 17) || iParam0 == 49) || iParam0 == 50) || iParam0 == 52) || iParam0 == 42)
		{
			return 3650;
		}
		if (iParam0 == 40)
		{
			return 8344;
		}
		if ((((((((((iParam0 == 9 || iParam0 == 16) || iParam0 == 15) || iParam0 == 37) || iParam0 == 36) || iParam0 == 19) || iParam0 == 41) || iParam0 == 38) || iParam0 == 21) || iParam0 == 51) || iParam0 == 52)
		{
			return 2050;
		}
		if (iParam0 == 45)
		{
			return 2812;
		}
	}
	return 1424;
}

int func_37(int iParam0)//Position - 0x1A6B
{
	switch (iParam0)
	{
		case 3:
			return 7;
		
		case 1:
			return 7;
		
		case 2:
			return 7;
		
		case 32:
			return 7;
		
		case 33:
			return 7;
		
		case 34:
			return 7;
		
		case 35:
			return 7;
		
		case 16:
			return 6;
		
		case 18:
			return 6;
		
		case 28:
			return 6;
		
		case 26:
			return 6;
		
		case 27:
			return 6;
		
		case 29:
			return 6;
		
		case 30:
			return 6;
		
		case 31:
			return 6;
		
		case 17:
			return 6;
		
		case 36:
			return 6;
		
		case 37:
			return 6;
		
		case 19:
			return 6;
		
		case 22:
			return 6;
		
		case 23:
			return 6;
		
		case 24:
			return 6;
		
		case 25:
			return 6;
		
		case 40:
			return 6;
		
		case 49:
			return 6;
		
		case 50:
			return 6;
		
		case 51:
			return 6;
		
		case 52:
			return 6;
		
		case 12:
			return 6;
		
		case 4:
			return 6;
		
		case 13:
			return 6;
		
		case 5:
			return 6;
		
		case 6:
			return 6;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 7:
			return 6;
		
		case 10:
			return 6;
		
		case 11:
			return 6;
		
		case 15:
			return 6;
		
		case 21:
			return 6;
		
		case 47:
			return 6;
		
		case 48:
			return 6;
		
		case 38:
			return 6;
		
		case 41:
			return 6;
		
		case 42:
			return 6;
		
		case 39:
			return 6;
		
		case 43:
			return 6;
		
		case 45:
			return 6;
		
		case 46:
			return 6;
		
		case 53:
			return 6;
		
		case 60:
			return 0;
		
		case 54:
			return 6;
		
		case 61:
			return 0;
		
		case 59:
			return 0;
		
		case 62:
			return 0;
		
		case 55:
			return 6;
		
		case 63:
			return 0;
		
		case 58:
			return 6;
		
		case 64:
			return 0;
		
		case 56:
			return 6;
		
		case 65:
			return 0;
		
		case 57:
			return 6;
		
		case 44:
			return 6;
		
		case 66:
			return 6;
		
		default:
	}
	return 11;
}

bool func_38()//Position - 0x1CFF
{
	return Global_2428131.f_567;
}

void func_39()//Position - 0x1D0E
{
	if (Global_2411466.f_84.f_2 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_2446554.f_200.f_1, 1))
		{
			if (((Global_262145.f_44 * 120000) - func_48(&(Global_2441732.f_58), 0, 0)) < 360000)
			{
				if (!MISC::IS_BIT_SET(Global_2446554.f_200.f_1, 1))
				{
					if (func_61(31, 0) && !func_92())
					{
						if (Global_262145.f_44 < 3)
						{
							func_40("ACD_TSCH", Global_262145.f_44, 1);
						}
						else
						{
							func_40("ACD_TSCH", 3, 1);
						}
					}
					MISC::SET_BIT(&(Global_2446554.f_200.f_1), 1);
				}
			}
			else if (((Global_262145.f_44 * 120000) - func_48(&(Global_2441732.f_58), 0, 0)) < 600000)
			{
				if (!MISC::IS_BIT_SET(Global_2446554.f_200.f_1, 2))
				{
					if (func_61(31, 0) && !func_92())
					{
						func_40("ACD_TSCH", 5, 1);
					}
					MISC::SET_BIT(&(Global_2446554.f_200.f_1), 2);
				}
			}
			else if (((Global_262145.f_44 * 120000) - func_48(&(Global_2441732.f_58), 0, 0)) < 1200000)
			{
				if (!MISC::IS_BIT_SET(Global_2446554.f_200.f_1, 3))
				{
					if (func_61(31, 0) && !func_92())
					{
						func_40("ACD_TSCH", 10, 1);
					}
					MISC::SET_BIT(&(Global_2446554.f_200.f_1), 3);
				}
			}
		}
	}
}

int func_40(char* sParam0, int iParam1, int iParam2)//Position - 0x1E6B
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_41(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_41(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1EA1
{
	int iVar0;
	
	if ((!func_47() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_44(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_42(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1692405.f_5[iVar0 /*53*/] = iParam0;
		Global_1692405.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1692405.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1692405.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1692405.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1692405.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1692405.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_42(int iParam0)//Position - 0x1FA9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1692405 - 1))
	{
		if (iParam0 > Global_1692405.f_5[iVar0 /*53*/].f_1)
		{
			func_43(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1692405++;
	if (Global_1692405 > 5)
	{
		Global_1692405 = 5;
		return Global_1692405;
	}
	return (Global_1692405 - 1);
}

void func_43(int iParam0)//Position - 0x200B
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1692405.f_5[iVar0 /*53*/] = { Global_1692405.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_44(int iParam0, int iParam1)//Position - 0x2044
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_45(-1, 0) == 8;
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

int func_45(int iParam0, bool bParam1)//Position - 0x208F
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_46();
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

int func_46()//Position - 0x20D0
{
	return Global_1312737;
}

bool func_47()//Position - 0x20DC
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_48(var uParam0, bool bParam1, bool bParam2)//Position - 0x20ED
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

var func_49(var uParam0)//Position - 0x2134
{
	return uParam0->f_1;
}

int func_50()//Position - 0x2140
{
	if (!func_51())
	{
		return 0;
	}
	if (Global_2404111.f_2 == Global_262145.f_6842 || Global_2404111.f_2 == Global_262145.f_6866)
	{
		return 1;
	}
	return 0;
}

int func_51()//Position - 0x217E
{
	switch (Global_2404111)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 11:
		case 12:
			return 0;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_52()//Position - 0x21E6
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	struct<3> Var5;
	
	iVar1 = 0;
	Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (!bVar0)
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var5, iLocal_109, &Local_110, &uLocal_113, &uVar2, 0, 1077936128, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1367.557f, -3220.598f, 12.9448f, Var5, 1) >= 600f)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var5, Local_110, 1) >= 75f)
				{
					PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT((Var5.x - 250f), (Var5.f_1 - 250f), (Var5.x + 250f), (Var5.f_1 + 250f));
					if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Local_110, &uVar3, &uVar4))
					{
						if (uVar4 & 1 == 0)
						{
							if (iLocal_114 <= 0)
							{
								if (func_53(Local_110, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
								{
									bVar0 = true;
									iVar1 = 1;
								}
							}
							else
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_109 += 3;
		if (iLocal_109 >= 150)
		{
			iLocal_109 = 40;
			iLocal_114++;
		}
	}
	if (iLocal_114 > 0)
	{
		iVar1 = 2;
	}
	return iVar1;
}

int func_53(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)//Position - 0x2303
{
	Global_2404548 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404548++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404548++;
	if (fParam14 > 0f)
	{
		if (func_56(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404548++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_54(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404548++;
	return 1;
}

int func_54(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x2400
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_82(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_73(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_82(iVar1, 1, 1))
		{
			if (!func_44(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_55(iVar1) || !bParam10) && !Global_2414009[iVar1 /*254*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_73(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_73(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x25B6
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2414009[iParam0 /*254*/].f_239)
	{
		return 1;
	}
	return 0;
}

int func_56(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)//Position - 0x25E0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_82(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_55(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_57(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_73(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_57(int iParam0)//Position - 0x26DC
{
	if (func_59(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2445582 = { func_58(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2445582))
	{
		return 1;
	}
	return 0;
}

struct<13> func_58(var uParam0)//Position - 0x2712
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

int func_59(int iParam0, var uParam1)//Position - 0x2729
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2445582 = { func_58(iParam0) };
		Global_2445595 = { func_58(uParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2445582))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2445595))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2445512, 35, &Global_2445582);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2445547, 35, &Global_2445595);
				if (Global_2445512 == Global_2445547)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_60()//Position - 0x2796
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_61(int iParam0, bool bParam1)//Position - 0x28A8
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6017 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_66(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4821 == 1)
		{
			return 1;
		}
	}
	if (func_65() || func_64())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_62())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return MISC::IS_BIT_SET(Global_1573723[iVar1], iVar0);
}

int func_62()//Position - 0x2A0D
{
	var uVar0;
	
	if (Global_1312448)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2446554.f_1618, 23))
	{
		return 1;
	}
	if (func_65())
	{
		return 1;
	}
	if (func_64())
	{
		return 1;
	}
	uVar0 = Global_1335599[func_63(-1)];
	if (MISC::IS_BIT_SET(uVar0, 7))
	{
		MISC::SET_BIT(&(Global_2446554.f_1618), 23);
		return 1;
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x2A73
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_46();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

bool func_64()//Position - 0x2AA7
{
	return Global_1315888;
}

bool func_65()//Position - 0x2AB3
{
	return Global_1315890;
}

bool func_66(int iParam0, int iParam1)//Position - 0x2ABF
{
	var uVar0;
	int iVar1;
	
	if (!func_69())
	{
		return 0;
	}
	if (func_68())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_67(iParam1);
	iVar1 = uVar0;
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_300, iVar1);
}

int func_67(int iParam0)//Position - 0x2B07
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_68()//Position - 0x2B67
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 3);
}

int func_69()//Position - 0x2B81
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_65())
	{
		return 1;
	}
	if (func_64())
	{
		return 1;
	}
	return func_70(120, -1);
}

int func_70(int iParam0, int iParam1)//Position - 0x2BB1
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473393[iParam0 /*6*/][func_63(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_71()//Position - 0x2BDD
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_72(struct<3> Param0, struct<3> Param3)//Position - 0x2CFB
{
	struct<3> Var0;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Param0, &Var0, 0, 1077936128, 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, Param3, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_73(int iParam0)//Position - 0x2D32
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_74(bool bParam0)//Position - 0x2D45
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (func_78(PLAYER::PLAYER_ID(), 1))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_94())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!func_61(19, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_75(9))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	return 1;
}

bool func_75(int iParam0)//Position - 0x2DC4
{
	return !func_76(iParam0);
}

int func_76(int iParam0)//Position - 0x2DD3
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_4996)
			{
				return 0;
			}
			if (func_84(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_4997)
			{
				return 0;
			}
			if (func_84(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_4998)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_4999)
			{
				return 0;
			}
			if (func_84(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_77(4))
			{
				return 0;
			}
			if (func_84(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 18:
			if (func_77(4))
			{
				return 0;
			}
			if (func_84(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_77(4))
			{
				return 0;
			}
			if (func_84(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 0) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_77(int iParam0)//Position - 0x306D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_82(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2414009[iVar0 /*254*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_78(int iParam0, bool bParam1)//Position - 0x30B2
{
	if (bParam1)
	{
		if (func_87(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582596[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_79(int iParam0)//Position - 0x30DE
{
	var uVar0;
	
	uVar0 = func_80(2436, -1, 0);
	return MISC::IS_BIT_SET(uVar0, iParam0);
}

int func_80(int iParam0, int iParam1, int iParam2)//Position - 0x30F9
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_63(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_81(int iParam0)//Position - 0x312B
{
	switch (iParam0)
	{
		case 1:
			return 0;
		
		case 2:
			return 1;
		
		case 3:
			return 2;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 6;
		
		case 7:
			return 5;
		
		default:
	}
	return -1;
}

int func_82(int iParam0, bool bParam1, bool bParam2)//Position - 0x3181
{
	int iVar0;
	
	iVar0 = iParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422140.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_83(int iParam0, bool bParam1)//Position - 0x31C5
{
	if (Global_1582596[iParam0 /*324*/].f_235.f_6 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_235.f_4, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_84(int iParam0, int iParam1)//Position - 0x3204
{
	return MISC::IS_BIT_SET(Global_2414009[iParam0 /*254*/].f_205, iParam1);
}

int func_85()//Position - 0x321C
{
	if (func_86() == 0)
	{
		return 1;
	}
	return 0;
}

int func_86()//Position - 0x3231
{
	return Global_1312467.f_18;
}

bool func_87(int iParam0)//Position - 0x323F
{
	return func_88(iParam0);
}

bool func_88(int iParam0)//Position - 0x324D
{
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_13.f_1, 0);
}

int func_89(int iParam0)//Position - 0x3267
{
	switch (func_90(iParam0))
	{
		case 20:
		case 21:
		case 24:
		case 25:
		case 26:
		case 28:
		case 27:
		case 29:
		case 30:
			return 1;
		
		default:
	}
	return 0;
}

int func_90(int iParam0)//Position - 0x32B5
{
	return Global_1582596[iParam0 /*324*/].f_165;
}

bool func_91()//Position - 0x32C8
{
	return Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_165 != 0;
}

bool func_92()//Position - 0x32DF
{
	return Global_1315900;
}

bool func_93()//Position - 0x32EB
{
	return Global_1582596[PLAYER::PLAYER_ID() /*324*/] == 5;
}

bool func_94()//Position - 0x3300
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_31.f_18, 0);
}

int func_95(int iParam0)//Position - 0x331C
{
	if (func_78(iParam0, 1))
	{
		if (Global_1582596[iParam0 /*324*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

void func_96(int iParam0)//Position - 0x3340
{
	Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/].f_2 = iParam0;
}

int func_97()//Position - 0x3354
{
	return 1;
}

int func_98()//Position - 0x335D
{
	return Global_2441732;
}

int func_99(int iParam0)//Position - 0x3369
{
	return Local_115[iParam0 /*3*/];
}

int func_100()//Position - 0x3377
{
	bool bVar0;
	
	func_106(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_38())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (func_104(157))
	{
		if (!func_103())
		{
			return 1;
		}
	}
	if (func_104(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_101() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_101()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_101()//Position - 0x340A
{
	switch (func_102())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_102()//Position - 0x343E
{
	return Global_24444;
}

bool func_103()//Position - 0x3449
{
	return Global_2428131.f_572;
}

int func_104(int iParam0)//Position - 0x3458
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_105()//Position - 0x346F
{
	return Global_2435238;
}

void func_106(var uParam0)//Position - 0x347B
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 168)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_107(iVar0);
					break;
				
				case 2:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_107(int iParam0)//Position - 0x34EB
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_82(Var0.f_1, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_108(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_108(var uParam0, var uParam1)//Position - 0x356C
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_109()//Position - 0x35BA
{
	SYSTEM::WAIT(0);
}

void func_110()//Position - 0x35C7
{
	Global_2446554.f_1547 = 0;
	Global_2446554.f_1548 = 0;
	Global_2446554.f_1550 = 0;
	Global_2446554.f_1549 = 0;
	MISC::CLEAR_BIT(&(Global_2446554.f_200.f_1), 1);
	MISC::CLEAR_BIT(&(Global_2446554.f_200.f_1), 2);
	MISC::CLEAR_BIT(&(Global_2446554.f_200.f_1), 3);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_111(struct<20> Param0)//Position - 0x361A
{
	func_117();
	func_115(func_116(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	func_112(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_2441732, 63);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_115, 97);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	Local_115[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = 0;
	func_96(0);
	return 1;
}

int func_112(int iParam0, int iParam1, bool bParam2)//Position - 0x3668
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_114();
			}
			else
			{
				return 0;
			}
		}
		if (!func_113())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_114();
					}
					else
					{
						return 0;
					}
				}
				if (func_38())
				{
					if (!bParam2)
					{
						func_114();
					}
					else
					{
						return 0;
					}
				}
				if (func_104(155))
				{
					if (!bParam2)
					{
						func_114();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_114();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_114();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_114();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_113()//Position - 0x377D
{
	return Global_1315874;
}

void func_114()//Position - 0x3789
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_115(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)//Position - 0x3795
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_114();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_116(int iParam0)//Position - 0x37B4
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

void func_117()//Position - 0x3A6D
{
	struct<63> Var0;
	
	Var0.f_3 = -1;
	Var0.f_3.f_2 = 1065353216;
	Var0.f_8 = 8;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_1.f_2 = 1065353216;
	Var0.f_8.f_1.f_5 = -1;
	Var0.f_8.f_1.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_49 = 8;
	Global_2441732 = { Var0 };
}

