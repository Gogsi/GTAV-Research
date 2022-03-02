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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	struct<3> Local_31 = { 0, 0, 0 } ;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60[5] = { 0, 0, 0, 0, 0 };
	var uLocal_66[5] = { 0, 0, 0, 0, 0 };
	var uLocal_72 = 5;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	fLocal_30 = 1E+07f;
	Local_31 = { 2134.06f, 4780.69f, 41.664f };
	iLocal_34 = -1;
	Local_49 = { 2136.133f, 4780.563f, 39.9702f };
	Local_54 = { 2149.737f, 4798.472f, 40.1071f };
	fLocal_57 = 55.4847f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_170();
	}
	GlobalFunc_501(17);
	func_168();
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (true)
	{
		if (GlobalFunc_5187() == 309)
		{
			bLocal_36 = true;
		}
		else
		{
			bLocal_36 = false;
		}
		if (func_154())
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				fLocal_30 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_31);
			}
			func_152(&iVar1);
			func_29(&iVar2);
			if (iLocal_46 > 3)
			{
				if (fLocal_30 < 600f)
				{
					if (GlobalFunc_6687(0) == 0 && (MISC::GET_GAME_TIMER() - iLocal_80) > 2000)
					{
						iLocal_80 = MISC::GET_GAME_TIMER();
						GlobalFunc_10715();
					}
				}
			}
			iVar0 = 0;
		}
		else
		{
			if (!bLocal_45)
			{
				if (GlobalFunc_474(104))
				{
					GlobalFunc_2198(104, 0, 0);
					Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_AirBlipOn = 0;
				}
			}
			else
			{
				Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_AirBlipOn = 0;
			}
			if (!bLocal_45)
			{
				if (GlobalFunc_474(105))
				{
					GlobalFunc_2198(105, 0, 0);
					Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_GndBlipOn = 0;
				}
			}
			else
			{
				Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_GndBlipOn = 0;
			}
			iVar0 = 1000;
		}
		SYSTEM::WAIT(iVar0);
	}
}





























void func_29(int iParam0)//Position - 0x13B3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<91> Var4;
	int iVar101;
	
	bVar0 = false;
	if (iLocal_52 != 9)
	{
		if (!Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_GndBlipOn)
		{
			if (Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_iGndRank == 0 && Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_SAVED_iAirRank == 0)
			{
				if (!GlobalFunc_747(Global_SAVE_DATA.TRAFFICKING_iBools, 32))
				{
					GlobalFunc_6677("MG_TRAF_AVAIL", 0, 0, -1, 10000, 7, 0, 0, 0);
					GlobalFunc_5211(&(Global_SAVE_DATA.TRAFFICKING_iBools), 32);
				}
			}
			GlobalFunc_2198(105, 1, 0);
			Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_GndBlipOn = 1;
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		GlobalFunc_2198(105, 0, 0);
		Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_GndBlipOn = 0;
	}
	if (iLocal_52 != 1 && iLocal_52 != 8)
	{
		if (func_145() && !*iParam0)
		{
			func_144(0);
			iLocal_52 = 1;
		}
	}
	switch (iLocal_52)
	{
		case 0:
			iLocal_52 = 1;
			break;
		
		case 1:
			if (!func_145())
			{
				if (fLocal_30 < 50625f)
				{
					iLocal_52 = 2;
				}
				else if (bLocal_36)
				{
					iLocal_52 = 2;
				}
			}
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(joaat("dune"));
			iLocal_52 = 3;
			break;
		
		case 3:
			if (STREAMING::HAS_MODEL_LOADED(joaat("dune")))
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Local_54, 4f, 0, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_53);
				}
				iLocal_53 = VEHICLE::CREATE_VEHICLE(func_143(), Local_54, fLocal_57, 1, 1);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_53, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_143());
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
				{
					if (VEHICLE::DOES_EXTRA_EXIST(iLocal_53, 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_53, 1, 1);
					}
					if (VEHICLE::DOES_EXTRA_EXIST(iLocal_53, 2))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_53, 2, 0);
					}
					if (VEHICLE::DOES_EXTRA_EXIST(iLocal_53, 3))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_53, 3, 0);
					}
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_53, 0, 0);
				}
				iLocal_52 = 4;
			}
			break;
		
		case 5:
			if (fLocal_30 >= 50625f && !*iParam0)
			{
				func_144(0);
				iLocal_52 = 1;
				return;
			}
			break;
		
		case 4:
			func_142();
			if (!bLocal_36)
			{
				if (fLocal_30 >= 50625f && !*iParam0)
				{
					func_144(0);
					iLocal_52 = 1;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!bVar0)
				{
				}
				if (!*iParam0)
				{
				}
				if (!iLocal_58)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_27, 0))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_USING(iLocal_27);
						if (iVar1 == iLocal_53)
						{
							iLocal_58 = 1;
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_53);
							iLocal_52 = 9;
						}
					}
				}
				return;
			}
			if (*iParam0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_53))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, -1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_53))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, 1))
				{
					GlobalFunc_187();
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_53) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					if (iVar2 == iLocal_53)
					{
						if (SYSTEM::VDIST2(Local_54, ENTITY::GET_ENTITY_COORDS(iLocal_27, 1)) < 100f)
						{
							SCRIPT::REQUEST_SCRIPT("Traffick_Ground");
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_28) && !ENTITY::IS_ENTITY_DEAD(iLocal_28))
							{
								if (ENTITY::GET_ENTITY_MODEL(iLocal_28) != joaat("dune") && ENTITY::GET_ENTITY_MODEL(iLocal_28) != joaat("cuban800"))
								{
									GlobalFunc_10236(iLocal_28, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, 0);
								}
								else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
								{
									VEHICLE::SET_PLAYERS_LAST_VEHICLE(iLocal_28);
								}
							}
							iLocal_52 = 6;
						}
					}
				}
			}
			break;
		
		case 6:
			if (SCRIPT::HAS_SCRIPT_LOADED("Traffick_Ground"))
			{
				iVar3 = 0;
				if (*iParam0)
				{
					iVar3 = 1;
				}
				else
				{
					iVar3 = GlobalFunc_7905(&iLocal_34, 6, 9, 0, 0);
					iLocal_44 = 1;
				}
				if (iVar3 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
					if (!*iParam0)
					{
						func_80("Traffick_Ground", 0);
					}
					Var4 = -1;
					Var4.f_8 = 4;
					Var4.f_13 = 2;
					Var4.f_16 = 4;
					Var4.f_29 = 4;
					Var4.f_61 = 9;
					Var4.f_71 = 4;
					Var4.f_76 = 8;
					Var4.f_85 = 4;
					Var4.f_90 = 6;
					uLocal_29 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("Traffick_Ground", &Var4, 97, 17000);
					GlobalFunc_2656(16);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("Traffick_Ground");
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_53, 1, 0);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_53);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (Global_35957 == 1)
						{
							GlobalFunc_8395(PLAYER::PLAYER_PED_ID());
						}
					}
					iLocal_58 = 0;
					iLocal_52 = 7;
				}
				else if (iVar3 == 0)
				{
					iLocal_44 = 0;
					func_144(0);
					iLocal_52 = 9;
				}
			}
			break;
		
		case 7:
			if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_29))
			{
				iLocal_52 = 9;
				if (GlobalFunc_747(Global_96007, 2))
				{
					iLocal_52 = 8;
				}
				else
				{
					GlobalFunc_1997(&iLocal_34);
					GlobalFunc_8306();
					iLocal_35 = 1;
					iVar101 = GlobalFunc_7719();
					GlobalFunc_8385(&iVar101, 0, 0, 3, 0, 0, 0);
					Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_todNextGnd = iVar101;
					GlobalFunc_2198(105, 0, 0);
					Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_GndBlipOn = 0;
				}
				*iParam0 = 0;
				GlobalFunc_5312(&Global_96007, 2);
			}
			break;
		
		case 8:
			if (Global_89962 == 10)
			{
				if (Global_89996)
				{
					*iParam0 = 1;
					SCRIPT::REQUEST_SCRIPT("Traffick_Ground");
					iLocal_52 = 2;
				}
				else
				{
					*iParam0 = 0;
					iLocal_52 = 2;
				}
			}
			else if (Global_89962 == 13)
			{
				GlobalFunc_1997(&iLocal_34);
				GlobalFunc_8306();
				*iParam0 = 0;
				iLocal_52 = 2;
			}
			break;
		
		case 9:
			if (fLocal_30 >= 50625f && GlobalFunc_8448(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_todNextGnd))
			{
				func_144(0);
				iLocal_52 = 1;
			}
			break;
		
		default:
			break;
	}
}



















































void func_80(char[4] cParam0, int iParam1)//Position - 0x2B90
{
	MISC::CLEAR_BIT(&(Global_89962.f_20), 17);
	func_81(cParam0, iParam1, 0);
}

void func_81(char[4] cParam0, int iParam1, int iParam2)//Position - 0x2BAD
{
	if (Global_89962 != 10 && Global_89962 != 9)
	{
		StringCopy(&Global_91343, cParam0, 32);
		func_83(&Global_91351, cParam0, 0, "Start", iParam1, iParam2);
		GlobalFunc_864();
		Global_84545 = 0;
	}
}


void func_83(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3881
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_7719();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_10628(&(uParam0->f_2161), 0);
		GlobalFunc_7705(PLAYER::PLAYER_PED_ID());
		GlobalFunc_7704(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_294[iVar1];
		if (iVar1 == GlobalFunc_8315())
		{
			GlobalFunc_8358(PLAYER::PLAYER_PED_ID(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89752[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89752[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89752[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89752[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89752[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89752[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89752[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89752[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89752[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89752[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51925[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		GlobalFunc_9750(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	GlobalFunc_542(&(uParam0->f_2233));
	sParam3 = sParam3;
	iParam2 = iParam2;
}



























































void func_142()//Position - 0xA011
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_28))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_31) < 2500f)
			{
				iLocal_28 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_28))
				{
					iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_28);
					if (iVar0 == joaat("dune"))
					{
					}
				}
			}
		}
	}
}

int func_143()//Position - 0xA06A
{
	return joaat("dune");
}

void func_144(bool bParam0)//Position - 0xA077
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dune"));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_53);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_53);
		}
	}
}

int func_145()//Position - 0xA0A5
{
	if (GlobalFunc_6687(9))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("trevor2")) == 1)
		{
			if (!iLocal_37[0])
			{
				iLocal_37[0] = 1;
			}
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_heist2b")) == 1)
		{
			if (!iLocal_37[1])
			{
				iLocal_37[1] = 1;
			}
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("traffick_air")) == 1)
		{
			if (!iLocal_37[2])
			{
				iLocal_37[2] = 1;
			}
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("traffick_ground")) == 1)
		{
			if (!iLocal_37[3])
			{
				iLocal_37[3] = 1;
			}
			return 0;
		}
		if (Global_89996)
		{
			return 0;
		}
		if (iLocal_34 != -1)
		{
			return 0;
		}
		if (GlobalFunc_5187() == 309)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}







void func_152(int iParam0)//Position - 0xA4A2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	bVar0 = false;
	if (iLocal_46 != 9)
	{
		if (!Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_AirBlipOn)
		{
			GlobalFunc_2198(104, 1, 0);
			Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_AirBlipOn = 1;
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		GlobalFunc_2198(104, 0, 0);
		Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_AirBlipOn = 0;
	}
	if (iLocal_46 != 1 && iLocal_46 != 8)
	{
		if (func_145() && !*iParam0)
		{
			func_153(0);
			iLocal_46 = 1;
		}
	}
	switch (iLocal_46)
	{
		case 0:
			iLocal_46 = 1;
			break;
		
		case 1:
			if (!func_145())
			{
				if (fLocal_30 < 50625f)
				{
					iLocal_46 = 2;
				}
				else if (bLocal_36)
				{
					iLocal_46 = 2;
				}
			}
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(joaat("cuban800"));
			iLocal_46 = 3;
			break;
		
		case 3:
			STREAMING::REQUEST_MODEL(joaat("cuban800"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("cuban800")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_47))
				{
					MISC::CLEAR_AREA_OF_VEHICLES(Local_49, 8f, 0, 0, 0, 0, 0);
					iLocal_47 = VEHICLE::CREATE_VEHICLE(joaat("cuban800"), Local_49, 25.29f, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_47, 2);
					GlobalFunc_5211(&(Global_SAVE_DATA.TRAFFICKING_iBools), 128);
					iLocal_46 = 4;
				}
				else
				{
					iLocal_46 = 4;
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_47) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_46 = 9;
					return;
				}
			}
			if (GlobalFunc_6687(9))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("traffick_ground")) == 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_47))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_47, 2);
						return;
					}
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("traffick_ground")) == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_47))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_47, 1);
				}
			}
			if (!bLocal_36)
			{
				if (fLocal_30 >= 50625f && !*iParam0)
				{
					func_153(0);
					iLocal_46 = 1;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!iLocal_48)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_27, 0))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_USING(iLocal_27);
						if (iVar1 == iLocal_47)
						{
							iLocal_48 = 1;
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_47);
							iLocal_46 = 9;
						}
					}
				}
			}
			if (*iParam0)
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_27, iLocal_47, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_47))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_47, 1))
				{
					GlobalFunc_187();
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					if (iVar2 == iLocal_47)
					{
						SCRIPT::REQUEST_SCRIPT("Traffick_Air");
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_28) && !ENTITY::IS_ENTITY_DEAD(iLocal_28))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_28) != joaat("dune") && ENTITY::GET_ENTITY_MODEL(iLocal_28) != joaat("cuban800"))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_28, 2137.12f, 4799.97f, 39.67854f, 2116.64f, 4790.417f, 45.45295f, 25f, 0, 1, 0))
								{
									GlobalFunc_10236(iLocal_28, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, 0);
								}
							}
							else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								VEHICLE::SET_PLAYERS_LAST_VEHICLE(iLocal_28);
							}
						}
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (SCRIPT::HAS_SCRIPT_LOADED("Traffick_Air"))
			{
				iVar3 = 0;
				if (*iParam0)
				{
					iVar3 = 1;
				}
				else
				{
					iVar3 = GlobalFunc_7905(&iLocal_34, 6, 9, 0, 0);
					iLocal_44 = 1;
				}
				if (iVar3 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
					if (!*iParam0)
					{
						func_80(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
					}
					uLocal_29 = SYSTEM::START_NEW_SCRIPT("Traffick_Air", 17000);
					GlobalFunc_2656(15);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("Traffick_Air");
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_47);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (Global_35957 == 1)
						{
							GlobalFunc_8395(PLAYER::PLAYER_PED_ID());
						}
					}
					iLocal_48 = 0;
					iLocal_46 = 7;
				}
				else if (iVar3 == 0)
				{
					iLocal_44 = 0;
					func_153(0);
					iLocal_46 = 9;
				}
			}
			break;
		
		case 7:
			if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_29))
			{
				if (GlobalFunc_747(Global_96007, 1))
				{
					iLocal_46 = 8;
				}
				else
				{
					GlobalFunc_1997(&iLocal_34);
					GlobalFunc_8306();
					uVar4 = GlobalFunc_7719();
					GlobalFunc_8385(&uVar4, 0, 0, 3, 0, 0, 0);
					Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_todNextAir = uVar4;
					GlobalFunc_2198(104, 0, 0);
					Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_AirBlipOn = 0;
					iLocal_46 = 9;
				}
				*iParam0 = 0;
				GlobalFunc_5312(&Global_96007, 1);
			}
			break;
		
		case 8:
			if (Global_89962 == 10)
			{
				if (Global_89996)
				{
					*iParam0 = 1;
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2136.446f, 4791.483f, 39.9702f, 1, 0, 0, 1);
						}
					}
					STREAMING::REQUEST_MODEL(joaat("cuban800"));
					SCRIPT::REQUEST_SCRIPT("Traffick_Air");
					if (STREAMING::HAS_MODEL_LOADED(joaat("cuban800")))
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Local_49, 8f, 0, 0, 0, 0, 0);
						iLocal_47 = VEHICLE::CREATE_VEHICLE(joaat("cuban800"), Local_49, 25.29f, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
						iLocal_46 = 3;
					}
				}
				else
				{
					*iParam0 = 0;
					iLocal_46 = 1;
				}
			}
			else if (Global_89962 == 13)
			{
				GlobalFunc_1997(&iLocal_34);
				GlobalFunc_8306();
				*iParam0 = 0;
				iLocal_46 = 1;
			}
			break;
		
		case 9:
			if (fLocal_30 >= 50625f && GlobalFunc_8448(Global_SAVE_DATA.TRAFFICKING_SAVED_STRUCT.TRAFFICKING_todNextAir))
			{
				func_153(0);
				iLocal_46 = 1;
			}
			break;
		
		default:
			break;
	}
}

void func_153(bool bParam0)//Position - 0xA9DF
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_47))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_47);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_47);
		}
	}
	if (GlobalFunc_747(Global_SAVE_DATA.TRAFFICKING_iBools, 128))
	{
		GlobalFunc_5312(&(Global_SAVE_DATA.TRAFFICKING_iBools), 128);
	}
	iLocal_48 = 0;
}

int func_154()//Position - 0xAA2D
{
	if (!func_165())
	{
		return 0;
	}
	if (!iLocal_44)
	{
		if (GlobalFunc_5187() == 309)
		{
			return 1;
		}
		if (!GlobalFunc_4938(9))
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("traffick_ground")) == 1 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("traffick_air")) == 1)
	{
		return 1;
	}
	iLocal_27 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iLocal_27))
	{
	}
	if (GlobalFunc_142())
	{
		return 1;
	}
	if (GlobalFunc_8315() != 2)
	{
		return 0;
	}
	if (!GlobalFunc_9039(6))
	{
		if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			bLocal_45 = true;
		}
		if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
		{
			bLocal_45 = true;
		}
		if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0))
		{
		}
		if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
		{
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
		}
		if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
		{
		}
		if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
		}
		if (Global_96400)
		{
		}
		if (Global_24446)
		{
		}
		if (GlobalFunc_268())
		{
		}
		if (GlobalFunc_153(8, -1))
		{
		}
		if (GlobalFunc_489())
		{
			return 1;
		}
		return 0;
	}
	else
	{
		bLocal_45 = false;
	}
	return 1;
}











int func_165()//Position - 0xB3B5
{
	if (Global_SAVE_DATA.isGameflowActive)
	{
		return (GlobalFunc_892(0, 15) && GlobalFunc_892(0, 16));
	}
	else
	{
		return 1;
	}
	return 0;
}



void func_168()//Position - 0xB459
{
	if (!iLocal_79)
	{
		iLocal_78 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(40.073f, 4788.559f, 2157.109f) - Vector(25f, 25f, 25f), Vector(40.073f, 4788.559f, 2157.109f) + Vector(25f, 25f, 25f), 0, 1, 1, 1);
		iLocal_79 = 1;
	}
}


void func_170()//Position - 0xB50C
{
	if (iLocal_78 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_78, 0);
	}
	func_153(1);
	func_144(1);
	func_173();
	GlobalFunc_5848();
	SCRIPT::TERMINATE_THIS_THREAD();
}



void func_173()//Position - 0xB5FC
{
	int iVar0;
	
	iLocal_35 = 0;
	WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_combatpistol"));
	WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_smg"));
	WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_stickybomb"));
	WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_assaultshotgun"));
	WEAPON::REMOVE_WEAPON_ASSET(joaat("weapon_rpg"));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_66[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(uLocal_66[iVar0]);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_60[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_60[iVar0]));
		}
		iVar0++;
	}
}

