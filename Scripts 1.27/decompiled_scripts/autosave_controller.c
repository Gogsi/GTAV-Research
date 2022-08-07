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
	int iLocal_20 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		GlobalFunc_491();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		switch (iLocal_20)
		{
			case 0:
				func_348();
				break;
			
			case 1:
				func_347();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				GlobalFunc_491();
				break;
		}
	}
}

void func_1()//Position - 0x89
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	if (Global_90001.f_4)
	{
		Global_90001.f_1 = 0;
		Global_90001.f_2 = 0;
		Global_90001.f_3 = 0;
		Global_90001.f_5 = 0;
		Global_90001.f_4 = 0;
		Global_90001.f_10 = (Global_90001.f_10 - 1);
		GlobalFunc_842(0, 0);
		if (Global_90001.f_10 > 0)
		{
			iLocal_20 = 1;
		}
		else
		{
			Global_90001 = 0;
			iLocal_20 = 3;
		}
		return;
	}
	if (!Global_90001.f_2)
	{
		if (Global_68245)
		{
			Global_90001.f_4 = 1;
			return;
		}
		if (!Global_SAVE_DATA.isGameflowActive || !MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[27 /*3*/], 1))
		{
			Global_90001.f_4 = 1;
			return;
		}
		iVar0 = GlobalFunc_8329();
		if (!GlobalFunc_42(iVar0))
		{
			if (GlobalFunc_39(13))
			{
			}
			else if (GlobalFunc_39(14))
			{
			}
			else
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
				if (GlobalFunc_39(17))
				{
					return;
				}
			}
			Global_90001.f_4 = 1;
			return;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), iVar0, 0) == 10)
			{
				Global_90001.f_4 = 1;
				return;
			}
		}
		if (Global_90001)
		{
			Global_90001.f_4 = 1;
			return;
		}
		if (!Global_90001.f_7)
		{
			Global_90001.f_5 = 1;
		}
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			return;
		}
		if (MISC::IS_AUTO_SAVE_IN_PROGRESS())
		{
			return;
		}
		if (MISC::IS_MEMORY_CARD_IN_USE())
		{
			return;
		}
		if (Global_68514.f_1)
		{
			return;
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			return;
		}
		if (GlobalFunc_331())
		{
			return;
		}
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || GlobalFunc_236())
		{
			return;
		}
		if (GlobalFunc_116(0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) == 0)
		{
			return;
		}
		if (GlobalFunc_862())
		{
			return;
		}
		if (func_336())
		{
			Global_90001.f_8 = 1;
			if (GlobalFunc_100(Global_SAVE_DATA.RP_PLAYER_x, 0f, 0f, 0f))
			{
				Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut_switch = 1;
			}
		}
		if (!Global_90001.f_8)
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				return;
			}
			if (MISC::IS_FRONTEND_FADING())
			{
				return;
			}
			MISC::SET_FADE_IN_AFTER_LOAD(1);
			Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut = 0;
			Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut_switch = 0;
		}
		else
		{
			MISC::SET_FADE_IN_AFTER_LOAD(0);
			Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut = 1;
			if (GlobalFunc_100(Global_SAVE_DATA.RP_PLAYER_x, 0f, 0f, 0f))
			{
				Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut_switch = 1;
			}
		}
		bVar3 = false;
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar4 = Global_SAVE_DATA.FLOW_STRUCT.MF_STRANDS_ARRAY[iVar2 /*3*/].f_1;
			if (iVar4 != -1)
			{
				if (Global_68514.f_6825[iVar4 /*3*/] == joaat("flow_do_mission_now"))
				{
					bVar5 = false;
					iVar6 = 0;
					while (iVar6 < Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.numberStoredOverrides)
					{
						if (Global_SAVE_DATA.MF_STRANDS_TO_OVERRIDE_ARRAY[iVar6] == iVar2)
						{
							if (!Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.MF_APPLY_ON_MP_SWITCH_ONLY[iVar6])
							{
								bVar5 = true;
							}
						}
						iVar6++;
					}
					if (!bVar5)
					{
						MISC::SET_FADE_IN_AFTER_LOAD(0);
						Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut = 1;
						Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut_switch = 0;
						bVar3 = true;
					}
				}
			}
			iVar2++;
		}
		func_10(1, 0, bVar3);
		MISC::CLEAR_REPLAY_STATS();
		MISC::DO_AUTO_SAVE();
		Global_90001.f_2 = 1;
		if (!Global_90001.f_6)
		{
		}
		if (!MISC::IS_AUTO_SAVE_IN_PROGRESS())
		{
			if (!Global_90001.f_6)
			{
				GlobalFunc_6677("SAVE_OFF", 2, 0, -1, 10000, 7, 0, 0, 0);
			}
			return;
		}
		Global_90001.f_3 = 1;
	}
	if (MISC::IS_AUTO_SAVE_IN_PROGRESS())
	{
		if (HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			GlobalFunc_7629();
			GlobalFunc_187();
		}
		return;
	}
	if (Global_90001.f_3)
	{
		if (MISC::GET_IS_AUTO_SAVE_OFF())
		{
		}
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 == 0)
		{
			Global_90001.f_8 = 0;
		}
	}
	Global_90001.f_4 = 1;
	Global_90001.f_6 = 1;
}









void func_10(bool bParam0, int iParam1, bool bParam2)//Position - 0x87E
{
	var uVar0;
	var uVar3;
	
	GlobalFunc_2292();
	GlobalFunc_7955();
	func_53();
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset), 4);
	}
	Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.Comms_Game_time = MISC::GET_GAME_TIMER();
	if (Global_68507 == 62 || Global_68508 == 62)
	{
		GlobalFunc_10954(2, 1);
	}
	if (!bParam0)
	{
		Global_90001.f_8 = 0;
		Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut = 0;
		Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.wasFadedOut_switch = 0;
	}
	MISC::OVERRIDE_SAVE_HOUSE(iParam1, Global_SAVE_DATA.RP_PLAYER_x, Global_SAVE_DATA.RP_PLAYER.RP_PLAYER_heading, bParam0, &uVar0, &uVar3);
}











































void func_53()//Position - 0x5726
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<4> Var3;
	struct<3> Var11;
	int iVar14;
	
	func_310(PLAYER::PLAYER_PED_ID(), 1);
	func_55(PLAYER::PLAYER_PED_ID(), 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_87698[iVar0]))
		{
			bVar1 = false;
			iVar2 = 0;
			StringCopy(&Var3, "", 32);
			Var11 = { 0f, 0f, 0f };
			iVar14 = GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Global_87708[iVar0], 1);
			if ((((iVar14 != 10 && iVar14 != 3) && iVar14 != 2) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_87698[iVar0], 0)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Global_87698[iVar0]))
			{
				while (!bVar1 && GlobalFunc_2197(Global_87708[iVar0], iVar2, &Var3, &iVar14))
				{
					if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&Var3, Global_87698[iVar0]))
					{
						bVar1 = true;
						Var11 = { ENTITY::GET_ENTITY_COORDS(Global_87698[iVar0], 0) };
						GlobalFunc_2290(Global_87708[iVar0], iVar2, &Var11);
					}
					iVar2++;
				}
			}
			if (bVar1)
			{
				if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_87718[iVar0]))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][Global_87708[iVar0] /*3*/] = { Var11 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[0 /*4*/][Global_87708[iVar0]] = ENTITY::GET_ENTITY_HEADING(Global_87698[iVar0]);
				}
				else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_87718[iVar0]))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][Global_87708[iVar0] /*3*/] = { Var11 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[1 /*4*/][Global_87708[iVar0]] = ENTITY::GET_ENTITY_HEADING(Global_87698[iVar0]);
				}
			}
			else if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_87718[iVar0]))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[0 /*10*/][Global_87708[iVar0] /*3*/] = { 0f, 0f, 0f };
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[0 /*4*/][Global_87708[iVar0]] = 0f;
			}
			else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_87718[iVar0]))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2528[1 /*10*/][Global_87708[iVar0] /*3*/] = { 0f, 0f, 0f };
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2549[1 /*4*/][Global_87708[iVar0]] = 0f;
			}
		}
		iVar0++;
	}
}


void func_55(int iParam0, int iParam1)//Position - 0x5A06
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6712(iParam0);
		if (GlobalFunc_42(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11072(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_73(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			GlobalFunc_8532(iParam0, &Var2, 1);
			Global_89752[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_9151();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!GlobalFunc_39(0) && !GlobalFunc_39(1)) && !GlobalFunc_39(2)) && !GlobalFunc_39(3)) && !GlobalFunc_39(4)) && !GlobalFunc_39(9)) && !GlobalFunc_39(10)))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/] = { Var2 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}


















void func_73(int iParam0, var uParam1, bool bParam2)//Position - 0x6F0C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6712(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (GlobalFunc_42(iVar0))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (GlobalFunc_11071(iParam0, iVar1, &iVar2, 0))
			{
				func_293(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11070(iParam0, iVar1, &iVar2))
			{
				func_293(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			GlobalFunc_11290(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				GlobalFunc_11290(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_6784(740, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6784(2035, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6785(161, 1, -1, 1);
		}
	}
}




























































































































































































































int func_293(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x4AF44
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
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (PED::IS_PED_INJURED(uParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8357(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_6669(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6669(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = GlobalFunc_7953(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7953(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7953(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_68149 };
		}
		else
		{
			uVar11 = { GlobalFunc_7617(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, uVar11[iVar0]) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_68165 };
						}
						else
						{
							uVar27 = { GlobalFunc_7616(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11231(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_293(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							GlobalFunc_4911(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
						}
						GlobalFunc_8357(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11231(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_293(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, GlobalFunc_11072(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11071(iParam0, iVar10, &iVar4, 1))
							{
								func_293(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_293(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10828(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_293(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_293(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_293(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_293(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_293(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { GlobalFunc_7616(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11231(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_293(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11231(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_293(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11231(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_293(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11027(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11071(iParam0, iVar10, &iVar4, 0))
		{
			func_293(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11070(iParam0, iVar10, &iVar4))
		{
			func_293(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

















void func_310(int iParam0, bool bParam1)//Position - 0x4D863
{
	func_322(iParam0);
	func_316(iParam0, bParam1);
	func_315(iParam0);
	func_314(iParam0);
	func_313(iParam0);
	func_312(iParam0);
	func_311(iParam0);
}

void func_311(int iParam0)//Position - 0x4D897
{
	int iVar0;
	
	iVar0 = GlobalFunc_6712(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1556[iVar0] = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		}
	}
}

void func_312(int iParam0)//Position - 0x4D8DE
{
	int iVar0;
	
	iVar0 = GlobalFunc_6712(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[iVar0 /*3*/] = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
	}
}

void func_313(int iParam0)//Position - 0x4D91C
{
	int iVar0;
	
	iVar0 = GlobalFunc_6712(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
			{
				return;
			}
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iVar0] = ENTITY::GET_ENTITY_HEADING(iParam0);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[iVar0] = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0);
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] >= 8000f)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] = 7500f;
		}
		else if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] <= -8000f)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/] = -7500f;
		}
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_314(int iParam0)//Position - 0x4DAA9
{
	int iVar0;
	
	iVar0 = GlobalFunc_6712(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_294[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_315(int iParam0)//Position - 0x4DAE5
{
	int iVar0;
	
	iVar0 = GlobalFunc_6712(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_290[iVar0] = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) * 100f);
	}
}

void func_316(int iParam0, bool bParam1)//Position - 0x4DB42
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = GlobalFunc_6712(iParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_6796(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar2 /*4*/][iVar0] = HUD::_HUD_WEAPON_WHEEL_GET_SLOT_HASH(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::_HUD_WEAPON_WHEEL_GET_SELECTED_HASH();
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}






void func_322(int iParam0)//Position - 0x4EA8A
{
	int iVar0;
	
	iVar0 = GlobalFunc_6712(uParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(uParam0))
	{
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar0] = GlobalFunc_7626();
	}
}














int func_336()//Position - 0x4F608
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	float fVar10;
	int iVar11;
	struct<3> Var12;
	float fVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<3> Var24;
	float fVar27;
	int iVar28;
	int iVar29;
	float fVar30;
	float fVar31;
	
	uVar0 = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_INJURED(uVar0))
	{
		return 0;
	}
	if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[57])
	{
		return 1;
	}
	Var1 = { 0f, 0f, 0f };
	fVar4 = 0f;
	if (MISC::OVERRIDE_SAVE_HOUSE(0, 0f, 0f, 0f, 0f, true, &Var1, &fVar4))
	{
		iVar5 = 0;
		while (iVar5 < 8)
		{
			if (Global_87300[iVar5 /*17*/])
			{
				if (Global_87300[iVar5 /*17*/].f_3 == 0)
				{
					if (Global_87300[iVar5 /*17*/].f_5 != -1)
					{
						iVar6 = Global_81155[Global_87300[iVar5 /*17*/].f_5 /*34*/].f_10;
						if (iVar6 != 262)
						{
							if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar6 /*23*/].f_11, 19))
							{
								if (GlobalFunc_42(GlobalFunc_8329()))
								{
									Var7 = { Global_Mission_Blips[iVar6 /*23*/][GlobalFunc_8329() /*3*/] };
								}
								else
								{
									Var7 = { Global_Mission_Blips[iVar6 /*23*/][0 /*3*/] };
								}
							}
							else
							{
								Var7 = { Global_Mission_Blips[iVar6 /*23*/][0 /*3*/] };
							}
							fVar10 = SYSTEM::VDIST2(Var1, Var7);
							if (fVar10 < (50f * 50f))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar5++;
		}
		if (Global_68507 != -1)
		{
			iVar11 = Global_81155[Global_68507 /*34*/].f_10;
			if (iVar11 != 262)
			{
				if (MISC::IS_BIT_SET(Global_Mission_Blips[iVar11 /*23*/].f_11, 19))
				{
					if (GlobalFunc_42(GlobalFunc_8329()))
					{
						Var12 = { Global_Mission_Blips[iVar11 /*23*/][GlobalFunc_8329() /*3*/] };
					}
					else
					{
						Var12 = { Global_Mission_Blips[iVar11 /*23*/][0 /*3*/] };
					}
				}
				else
				{
					Var12 = { Global_Mission_Blips[iVar11 /*23*/][0 /*3*/] };
				}
				fVar15 = SYSTEM::VDIST2(Var1, Var12);
				if (fVar15 < (50f * 50f))
				{
					return 1;
				}
			}
		}
		iVar16 = MISC::GET_GAME_TIMER();
		iVar17 = 0;
		while (iVar17 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Calls)
		{
			iVar18 = Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar17 /*15*/].Restricted_Area_ID;
			if (iVar18 != -1)
			{
				if ((((((((((((((((((((((((iVar18 != -1 && iVar18 != 51) && iVar18 != 62) && iVar18 != 52) && iVar18 != 62) && iVar18 != 53) && iVar18 != 62) && iVar18 != 54) && iVar18 != 62) && iVar18 != 55) && iVar18 != 62) && iVar18 != 56) && iVar18 != 62) && iVar18 != 57) && iVar18 != 62) && iVar18 != 58) && iVar18 != 62) && iVar18 != 59) && iVar18 != 62) && iVar18 != 60) && iVar18 != 62) && iVar18 != 61) && iVar18 != 62) && iVar18 != 62) && iVar18 != 63)
				{
					iVar19 = (Global_SAVE_DATA.COMM_CONTROL_QUEUED_CALLS_ARRAY[iVar17 /*15*/].Queue_Time - iVar16);
					if (iVar19 < 180000)
					{
						if (func_337(Var1, iVar18))
						{
							return 1;
						}
					}
				}
			}
			iVar17++;
		}
		iVar17 = 0;
		while (iVar17 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Texts)
		{
			iVar20 = Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar17 /*14*/].Restricted_Area_ID;
			if (iVar20 != -1)
			{
				if ((((((((((((((((((((((((iVar20 != -1 && iVar20 != 51) && iVar20 != 62) && iVar20 != 52) && iVar20 != 62) && iVar20 != 53) && iVar20 != 62) && iVar20 != 54) && iVar20 != 62) && iVar20 != 55) && iVar20 != 62) && iVar20 != 56) && iVar20 != 62) && iVar20 != 57) && iVar20 != 62) && iVar20 != 58) && iVar20 != 62) && iVar20 != 59) && iVar20 != 62) && iVar20 != 60) && iVar20 != 62) && iVar20 != 61) && iVar20 != 62) && iVar20 != 62) && iVar20 != 63)
				{
					iVar21 = (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_TEXTS_ARRAY[iVar17 /*14*/].Queue_Time - iVar16);
					if (iVar21 < 180000)
					{
						if (func_337(Var1, iVar20))
						{
							return 1;
						}
					}
				}
			}
			iVar17++;
		}
		iVar17 = 0;
		while (iVar17 < Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.No_Queued_Emails)
		{
			iVar22 = Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar17 /*10*/].Restricted_Area_ID;
			if (iVar22 != -1)
			{
				if ((((((((((((((((((((((((iVar22 != -1 && iVar22 != 51) && iVar22 != 62) && iVar22 != 52) && iVar22 != 62) && iVar22 != 53) && iVar22 != 62) && iVar22 != 54) && iVar22 != 62) && iVar22 != 55) && iVar22 != 62) && iVar22 != 56) && iVar22 != 62) && iVar22 != 57) && iVar22 != 62) && iVar22 != 58) && iVar22 != 62) && iVar22 != 59) && iVar22 != 62) && iVar22 != 60) && iVar22 != 62) && iVar22 != 61) && iVar22 != 62) && iVar22 != 62) && iVar22 != 63)
				{
					iVar23 = (Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_QUEUED_EMAILS_ARRAY[iVar17 /*10*/].Queue_Time - iVar16);
					if (iVar23 < 180000)
					{
						if (func_337(Var1, iVar22))
						{
							return 1;
						}
					}
				}
			}
			iVar17++;
		}
		Var24 = { 0f, 0f, 0f };
		fVar27 = -1f;
		if (25 <= 31)
		{
			iVar28 = 9;
			iVar29 = 25;
		}
		else
		{
			iVar28 = 10;
			iVar29 = (25 - 31);
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar28], iVar29))
		{
			Var24 = { -808.7974f, 169.3193f, 70.9558f };
			fVar27 = 85f;
			fVar30 = SYSTEM::VDIST2(Var1, Var24);
			if (fVar30 < (fVar27 * fVar27))
			{
				return 1;
			}
		}
		if (24 <= 31)
		{
			iVar28 = 9;
			iVar29 = 24;
		}
		else
		{
			iVar28 = 10;
			iVar29 = (24 - 31);
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar28], iVar29))
		{
			Var24 = { -2.62564f, 528.3256f, 178.392f };
			fVar27 = 65f;
			fVar31 = SYSTEM::VDIST2(Var1, Var24);
			if (fVar31 < (fVar27 * fVar27))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_337(struct<3> Param0, int iParam3)//Position - 0x4FCA3
{
	if (iParam3 != -1)
	{
		if (SYSTEM::VDIST2(Param0, Global_Restricted_Areas[iParam3 /*5*/]) <= (Global_Restricted_Areas[iParam3 /*5*/].f_3 * Global_Restricted_Areas[iParam3 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_Restricted_Areas[iParam3 /*5*/].f_4 != -1)
		{
			return func_337(Param0, Global_Restricted_Areas[iParam3 /*5*/].f_4);
		}
	}
	return 0;
}










void func_347()//Position - 0x4FE8D
{
	if (Global_90001.f_10 > 0)
	{
		Global_90001.f_1 = 1;
		Global_90001.f_2 = 0;
		Global_90001.f_3 = 0;
		Global_90001.f_4 = 0;
		Global_90001.f_5 = 0;
		Global_90001.f_9 = MISC::GET_GAME_TIMER();
		iLocal_20 = 2;
	}
}

void func_348()//Position - 0x4FECF
{
	iLocal_20 = 1;
}


