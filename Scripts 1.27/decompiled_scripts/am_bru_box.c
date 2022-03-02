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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	struct<10> Local_55 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_65 = 0;
	struct<3> Local_66[32];
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	int iLocal_167 = 0;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ScriptParam_0.f_16 >= 32)
		{
			if (GlobalFunc_1074(PLAYER::PLAYER_ID()) != 1)
			{
				func_180();
			}
		}
		if (!func_173(ScriptParam_0))
		{
			func_180();
		}
	}
	while (true)
	{
		GlobalFunc_906();
		if (GlobalFunc_7741())
		{
			func_180();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (GlobalFunc_1074(PLAYER::PLAYER_ID()) != 1)
			{
				func_180();
			}
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() != iLocal_167)
		{
			func_180();
		}
		NETWORK::_0x2302C0264EA58D31();
		switch (func_161(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_160())
				{
					if (func_159() == 1)
					{
						Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
					}
					else if (func_159() == 4)
					{
						Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_159() == 1)
				{
					func_129();
				}
				else if (func_159() == 4)
				{
					Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				if (Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 0)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_55.f_3, 500f, 500f, 500f, 0, 1, 0) && GlobalFunc_1074(PLAYER::PLAYER_ID()) != 1)
					{
						Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				GlobalFunc_5240(&(Local_55.f_9));
				if (GlobalFunc_914(&(Local_55.f_9)))
				{
					Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_180();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_159())
			{
				case 0:
					if (func_6())
					{
						Local_55 = 1;
					}
					break;
				
				case 1:
					func_5();
					func_4();
					if (func_1())
					{
						Local_55 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x21C
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x230
{
	if (Local_55.f_7 >= 32)
	{
		if (GlobalFunc_105(Global_2446554.f_778.f_1))
		{
			return 1;
		}
	}
	if (Local_55.f_8 == 2)
	{
		return 1;
	}
	return 0;
}


void func_4()//Position - 0x28E
{
	switch (Local_55.f_8)
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2) || Local_55.f_6 != -1)
			{
				Local_55.f_8 = 1;
			}
			break;
		
		case 1:
			Local_55.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_5()//Position - 0x2DC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_55.f_6 == -1)
			{
				if (MISC::IS_BIT_SET(Local_66[iVar0 /*3*/].f_1, 0))
				{
					Local_55.f_6 = iVar0;
				}
			}
			if (!MISC::IS_BIT_SET(Local_55.f_1, 7))
			{
				if (MISC::IS_BIT_SET(Local_66[iVar0 /*3*/].f_1, 1))
				{
					MISC::SET_BIT(&(Local_55.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

int func_6()//Position - 0x34A
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var9;
	int iVar12;
	struct<18> Var13;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (func_160())
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				fVar5 = 250f;
				Var6 = { Local_55.f_3 };
				if (MISC::IS_BIT_SET(Local_55.f_1, 8))
				{
					Var0 = { Global_2446554.f_778.f_1 };
					uVar3 = Global_2446554.f_778.f_4;
				}
				if (GlobalFunc_1074(PLAYER::PLAYER_ID()) == 7)
				{
					iVar12 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
					if (Global_1602437.f_72[iVar12 /*5346*/].f_409[0 /*23*/].f_10 > 0f)
					{
						Var6 = { Global_1602437.f_72[iVar12 /*5346*/].f_409[0 /*23*/].f_3 };
						Var9 = { Global_1602437.f_72[iVar12 /*5346*/].f_409[0 /*23*/].f_6 };
						fVar5 = Global_1602437.f_72[iVar12 /*5346*/].f_409[0 /*23*/].f_10;
						iVar4 = 1;
					}
					else if (Global_1602437.f_72[iVar12 /*5346*/].f_409[0 /*23*/].f_9 > 0f)
					{
						Var6 = { Global_1602437.f_72[iVar12 /*5346*/].f_409[0 /*23*/] };
						fVar5 = Global_1602437.f_72[iVar12 /*5346*/].f_409[0 /*23*/].f_9;
					}
				}
				Var13.f_5 = 1115815936;
				Var13.f_4 = 1;
				Var13.f_5 = 30f;
				Var13.f_10 = 1;
				if (iVar4 == 0)
				{
					if (MISC::IS_BIT_SET(Local_55.f_1, 8) || func_125(Var6, fVar5, &Var0, &uVar3, Var13))
					{
						if (Local_55.f_7 >= 32)
						{
							Local_55.f_2 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_55.f_2 = NETWORK::OBJ_TO_NET(OBJECT::_CREATE_PORTABLE_PICKUP_2(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_55.f_2), uVar3);
					}
				}
				else if (MISC::IS_BIT_SET(Local_55.f_1, 8) || func_7(Var6, Var9, fVar5, &Var0, &uVar3, Var13))
				{
					if (Local_55.f_7 >= 32)
					{
						Local_55.f_2 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_55.f_2 = NETWORK::OBJ_TO_NET(OBJECT::_CREATE_PORTABLE_PICKUP_2(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_55.f_2), uVar3);
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		return 1;
	}
	return 0;
}

int func_7(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7, var uParam8, struct<8> Param9, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26)//Position - 0x58D
{
	struct<11> Var0;
	struct<23> Var18;
	
	if (Param9.f_5 < 20f)
	{
		Param9.f_5 = 20f;
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_22 = 1;
	Var18.f_5 = 0;
	Var18.f_6 = 1;
	Var18.f_7 = 1;
	Var18.f_8 = { Param0 };
	Var18.f_11 = { Param3 };
	Var18.f_14 = fParam6;
	Var18.f_15 = 0;
	Var18.f_16 = 1;
	Var18.f_17 = 0;
	Param9.f_7 = 0;
	if (func_8(&Var18, &Param9, &Var0))
	{
		*uParam7 = { Var0[0 /*3*/] };
		*uParam8 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_8(var uParam0, var uParam1, var uParam2)//Position - 0x62B
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	bool bVar18;
	struct<46> Var19;
	bool bVar65;
	
	bVar18 = false;
	if (!uParam0->f_7)
	{
		if (((!Global_2404548.f_1192 == *uParam0 || !Global_2404548.f_1192.f_1 == uParam0->f_1) || !Global_2404548.f_1192.f_2 == uParam0->f_2) || !Global_2404548.f_1195 == uParam0->f_4)
		{
			bVar18 = true;
		}
	}
	else if ((((((!Global_2404548.f_1206 == uParam0->f_8 || !Global_2404548.f_1206.f_1 == uParam0->f_8.f_1) || !Global_2404548.f_1206.f_2 == uParam0->f_8.f_2) || !Global_2404548.f_1209 == uParam0->f_11) || !Global_2404548.f_1209.f_1 == uParam0->f_11.f_1) || !Global_2404548.f_1209.f_2 == uParam0->f_11.f_2) || !Global_2404548.f_1212 == uParam0->f_14)
	{
		bVar18 = true;
	}
	if (bVar18)
	{
		if (Global_2404548.f_1190 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2404548.f_1199))
			{
				if (Global_2404548.f_1199 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1196) < GlobalFunc_429())
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1196) < GlobalFunc_429())
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			GlobalFunc_409();
		}
		Global_2404548.f_1190 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1196) > GlobalFunc_429())
	{
		Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
	}
	if (!uParam0->f_7)
	{
		fVar4 = (*uParam0 - uParam0->f_4);
		fVar5 = (uParam0->f_1 - uParam0->f_4);
		fVar6 = (*uParam0 + uParam0->f_4);
		fVar7 = (uParam0->f_1 + uParam0->f_4);
	}
	else
	{
		if (uParam0->f_8 < uParam0->f_11)
		{
			fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
			fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
		}
		else
		{
			fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
			fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
		}
		if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
		{
			fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
			fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
		}
		else
		{
			fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
			fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
		}
	}
	PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(fVar4, fVar5, fVar6, fVar7);
	if (!uParam0->f_7)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2404548.f_1190)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		GlobalFunc_409();
		if (uParam1->f_7 && !uParam0->f_7)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_122(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!uParam0->f_7)
			{
				Global_2404548.f_1192 = { *uParam0 };
				Global_2404548.f_1195 = uParam0->f_4;
				Global_2404548.f_1213 = 0;
			}
			else
			{
				Global_2404548.f_1206 = { uParam0->f_8 };
				Global_2404548.f_1209 = { uParam0->f_11 };
				Global_2404548.f_1212 = uParam0->f_14;
				Global_2404548.f_1192 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
				Global_2404548.f_1213 = 1;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				GlobalFunc_408(Var8.x, Var8.f_1);
			}
			Global_2404548.f_1191 = 1;
			Global_2404548.f_1190 = 1;
			Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
			Global_2404548.f_1196 = NETWORK::GET_NETWORK_TIME();
			Global_2404548.f_1199 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404548.f_1190)
	{
		if (Global_2404548.f_1191 == 1)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar4, fVar5, fVar6, fVar7) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1197) > 5000)
			{
				Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var8 };
					}
					Var19.f_6 = 1082130432;
					Var19.f_7 = 1176255488;
					Var19.f_8 = 1;
					Var19.f_10 = 1;
					Var19.f_13 = 1;
					Var19.f_15 = 1;
					Var19.f_16 = 1;
					Var19.f_31 = 1;
					Var19.f_34 = joaat("tailgater");
					Var19.f_43 = 1123024896;
					Var19 = { *uParam1 };
					Var19.f_3 = uParam1->f_5;
					Var19.f_11 = uParam1->f_9;
					Var19.f_18 = 1;
					if (uParam0->f_7)
					{
						Var19.f_26 = 1;
						Var19.f_19 = { uParam0->f_8 };
						Var19.f_22 = { uParam0->f_11 };
						Var19.f_25 = uParam0->f_14;
					}
					else
					{
						Var19.f_26 = 0;
						Var19.f_19 = { *uParam0 };
						Var19.f_25 = uParam0->f_4;
					}
					Var19.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var19.f_30 = 1;
						Var19.f_32 = 1;
					}
					Var19.f_38 = { uParam1->f_13 };
					Var19.f_41 = uParam1->f_16;
					Var19.f_45 = uParam1->f_17;
					func_108(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var19);
					if ((uParam1->f_7 && uParam1->f_9) && !uParam0->f_7)
					{
						if (!GlobalFunc_347(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404548.f_1191 = 9;
				}
				else
				{
					Global_2404548.f_1191 = 2;
				}
			}
		}
		if (Global_2404548.f_1191 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var11, Var14) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1197) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(Var11, Var14) == 0)
			{
				Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !GlobalFunc_6678(PLAYER::PLAYER_ID(), 0))
				{
					Global_2404548.f_1191 = 3;
				}
				else
				{
					Global_2404548.f_1191 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1201) > 7000)
			{
				GlobalFunc_5055(Var8.x, Var8.f_1);
			}
		}
		if (Global_2404548.f_1191 == 3)
		{
			if (GlobalFunc_407() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1197) > 10000)
			{
				Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
				Global_2404548.f_1191 = 4;
			}
		}
		if (Global_2404548.f_1191 == 4)
		{
			if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
			}
			else
			{
				iVar0 = 0;
				GlobalFunc_5054();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					if (!uParam0->f_7)
					{
						if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
						{
							Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
							Global_2404548.f_1191 = 5;
						}
					}
					else if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
					{
						Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
						Global_2404548.f_1191 = 5;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
					Global_2404548.f_1191 = 5;
					if (!uParam0->f_7)
					{
						PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					}
					else
					{
						PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					}
				}
			}
		}
		if (Global_2404548.f_1191 == 5)
		{
			if (func_39(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404548.f_1217.f_4)
				{
					Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
					Global_2404548.f_1191 = 6;
				}
				else
				{
					Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
						}
					}
					Global_2404548.f_1191 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1197) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
				Global_2404548.f_1191 = 8;
			}
		}
		if (Global_2404548.f_1191 == 6)
		{
			iVar0 = 0;
			Global_2404548.f_1217 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (!uParam0->f_7)
			{
				if (!GlobalFunc_386(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!GlobalFunc_385(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
			Global_2404548.f_1191 = 7;
			if (!uParam0->f_7)
			{
				PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
			}
			else
			{
				PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
			}
		}
		if (Global_2404548.f_1191 == 7)
		{
			if (func_39(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2404548.f_1324[iVar17 /*3*/]) == 0f)
							{
								if (!uParam0->f_7)
								{
									if (SYSTEM::VDIST(Global_2404548.f_1324[iVar17 /*3*/], *uParam0) < uParam0->f_4)
									{
									}
								}
								else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2404548.f_1324[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
								{
									*(uParam2[0 /*3*/]) = { Global_2404548.f_1324[iVar17 /*3*/] };
								}
							}
						}
						iVar17++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						if (!uParam0->f_7)
						{
							Var1 = { *uParam0 };
						}
						else
						{
							Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
						}
						func_11(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404548.f_1191 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1197) > 20000)
			{
				Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
				Global_2404548.f_1191 = 8;
			}
		}
		if (Global_2404548.f_1191 == 8)
		{
			if (uParam0->f_5)
			{
				if (GlobalFunc_410(Global_2404548.f_404))
				{
				}
			}
			else if (Global_2404548.f_1217.f_1)
			{
				GlobalFunc_383(uParam2, &(Global_2404548.f_1217.f_5));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar65 = false;
				}
				else
				{
					bVar65 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404548.f_1192 };
				func_11(uParam2[0 /*3*/], 0, bVar65, 0, 0, uParam0, uParam1);
			}
			Global_2404548.f_1197 = NETWORK::GET_NETWORK_TIME();
			Global_2404548.f_1191 = 9;
		}
		if (Global_2404548.f_1191 == 9)
		{
			Global_2404548.f_1190 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			GlobalFunc_409();
			return 1;
		}
		Global_2404548.f_1196 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}



void func_11(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x12C1
{
	struct<3> Var0;
	var uVar3;
	struct<46> Var4;
	var uVar50;
	bool bVar51;
	int iVar52;
	struct<3> Var53;
	struct<3> Var56;
	struct<3> Var59;
	float fVar62;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_43 = 1123024896;
	if (bParam1)
	{
		iVar52 = 0;
	}
	else
	{
		iVar52 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar52 += 4;
			}
			else if (!uParam5->f_7)
			{
				Var53 = { *uParam5 };
				if (GlobalFunc_386(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var53)))
				{
					iVar52 += 4;
				}
			}
			else
			{
				Var53 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
				if (GlobalFunc_385(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var53)))
				{
					iVar52 += 4;
				}
			}
		}
		else
		{
			iVar52 += 4;
		}
	}
	if (GlobalFunc_10613(*uParam0, &Var0, iVar52, iParam3, 1))
	{
	}
	else
	{
		bVar51 = true;
	}
	if (bVar51)
	{
		Var0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (bParam4)
		{
			Var4.f_18 = 1;
			if (uParam5->f_7)
			{
				Var4.f_26 = 1;
				Var4.f_19 = { uParam5->f_8 };
				Var4.f_22 = { uParam5->f_11 };
				Var4.f_25 = uParam5->f_14;
			}
			else
			{
				Var4.f_26 = 0;
				Var4.f_19 = { *uParam5 };
				Var4.f_25 = uParam5->f_4;
			}
		}
		Var4.f_38 = { uParam6->f_13 };
		Var4.f_41 = uParam6->f_16;
		Var4.f_45 = uParam6->f_17;
		func_108(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		if (uParam5->f_7)
		{
			Var56 = { uParam5->f_8 };
			Var59 = { uParam5->f_11 };
			fVar62 = uParam5->f_14;
		}
		else
		{
			Var56 = { *uParam5 };
			fVar62 = uParam5->f_4;
		}
		if (!GlobalFunc_384(Var0, uParam5->f_7, Var56, Var59, fVar62))
		{
			if (GlobalFunc_10613(*uParam0, &Var0, iVar52, iParam3, 0))
			{
				if (!GlobalFunc_384(Var0, uParam5->f_7, Var56, Var59, fVar62))
				{
					if (uParam5->f_7)
					{
						Var0 = { Var56 + Var59 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var56 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar50))
					{
						Var0.f_2 = uVar50;
					}
				}
			}
			else
			{
				if (uParam5->f_7)
				{
					Var0 = { Var56 + Var59 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var56 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar50))
				{
					Var0.f_2 = uVar50;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404548.f_518 = 1;
}




























int func_39(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x247D
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404548.f_1217 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2404548.f_1217)))
			{
				case 0:
					if (uParam2->f_7 && !Global_2404548.f_440.f_7)
					{
						*(uParam0[0 /*3*/]) = { *uParam1 };
						uParam0->f_10[0] = uParam1->f_3;
						return 1;
					}
					else
					{
						if (uParam1->f_21)
						{
							*(uParam0[0 /*3*/]) = { uParam1->f_18 };
						}
						else
						{
							*(uParam0[0 /*3*/]) = { Global_2404548.f_1192 };
						}
						if (uParam1->f_5 && GlobalFunc_410(Global_2404548.f_404))
						{
							if (!Global_2404548.f_1217.f_4)
							{
								Global_2404548.f_1217.f_4 = 1;
							}
							else
							{
								func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
							}
						}
						else
						{
							func_11(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
						}
						uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
						return 1;
					}
					break;
				
				case 1:
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
				{
					Global_2404548.f_1217 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_2404548.f_1217.f_4 = 1;
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		GlobalFunc_5053(Global_2404548.f_440, &(Global_2404548.f_1217.f_30), &(Global_2404548.f_1217.f_63));
	}
	if (uParam2->f_7 && !Global_2404548.f_1217.f_3)
	{
		Global_2404548.f_1217.f_3 = 1;
		func_44(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 43;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2404548.f_1217 > 0)
	{
		if (uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404548.f_1217)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404548.f_1217.f_2)
					{
						iVar4 = Global_2404548.f_1217.f_2 + 1;
					}
					if (iVar4 > (Global_2404548.f_1217 - 1))
					{
						iVar4 = (Global_2404548.f_1217 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar4);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar4, &iVar5);
					}
					func_44(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404548.f_1217.f_2 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2404548.f_1217;
		}
		if (Global_2404548.f_1217 == iVar4)
		{
			if (uParam1->f_5 && GlobalFunc_410(Global_2404548.f_404))
			{
				if (Global_2404548.f_1217.f_1)
				{
					GlobalFunc_383(uParam0, &(Global_2404548.f_1217.f_5));
					GlobalFunc_387(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404548.f_1192 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					GlobalFunc_387(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404548.f_1217.f_1)
			{
				GlobalFunc_383(uParam0, &(Global_2404548.f_1217.f_5));
				GlobalFunc_387(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2404548.f_1217);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!GlobalFunc_6766(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					GlobalFunc_387(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404548.f_1192 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					GlobalFunc_387(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404548.f_1192 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				GlobalFunc_387(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404548.f_1192 };
		if (uParam1->f_5 && GlobalFunc_410(Global_2404548.f_404))
		{
			if (!Global_2404548.f_1217.f_4)
			{
				Global_2404548.f_1217.f_4 = 1;
			}
			else
			{
				func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_11(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		GlobalFunc_387(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}





void func_44(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)//Position - 0x2B9E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<8> Var11;
	bool bVar19;
	bool bVar20;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2404548.f_404 == 1)
		{
			if (MISC::ABSF((Global_2404548.f_417.f_2 - Param0.f_2)) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (uParam4->f_5)
	{
		if (GlobalFunc_7646(PLAYER::PLAYER_ID(), 1))
		{
			if (iParam7 == -1)
			{
				bVar8 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar8 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!GlobalFunc_7670(Param0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (uParam4->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_92(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	if (SYSTEM::VMAG(uParam5->f_13) > 0f)
	{
		if (SYSTEM::VDIST(Param0, uParam5->f_13) > uParam5->f_16)
		{
			iVar7 += 64;
		}
	}
	else
	{
		iVar7 += 64;
	}
	if (uParam4->f_5)
	{
		if (!Global_2404548.f_537)
		{
			if (GlobalFunc_8972(Global_2404548.f_417))
			{
				if ((!GlobalFunc_8341(&Param0, 0, 0, 0) && !GlobalFunc_8340(&Param0, 0, 0)) && !GlobalFunc_5029(&Param0, 0))
				{
					iVar7 += 128;
				}
			}
			else if ((!GlobalFunc_8340(&Param0, 0, 0) && !GlobalFunc_5029(&Param0, 0)) && !GlobalFunc_349(Param0, 0.5f))
			{
				iVar7 += 128;
			}
		}
		else
		{
			iVar7 += 128;
		}
	}
	else if (!GlobalFunc_400(Param0, 2.5f, 3))
	{
		iVar7 += 128;
	}
	if (uParam4->f_5)
	{
		if (func_83(Param0, fParam3, uParam4->f_15, GlobalFunc_399(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 256;
			iVar7 += 512;
		}
		else
		{
			iVar9 = Global_2404548.f_1;
		}
	}
	else if (!GlobalFunc_7661(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!GlobalFunc_7665(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 512;
			iVar7 += 256;
		}
		else if (!GlobalFunc_7665(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 256;
		}
	}
	if (uParam4->f_5)
	{
		if (!(GlobalFunc_7668(PLAYER::PLAYER_ID()) && GlobalFunc_5051(PLAYER::PLAYER_ID())))
		{
			if (!GlobalFunc_5050(&Param0, &(Global_2404548.f_1217.f_63), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!GlobalFunc_5051(PLAYER::PLAYER_ID()))
		{
			if (!GlobalFunc_395(Param0, &(Global_2404548.f_1217.f_30), &(Global_2404548.f_1217.f_63), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (GlobalFunc_394(Param0))
	{
		if (uParam4->f_5)
		{
			if (GlobalFunc_394(Param0))
			{
				if (GlobalFunc_410(Global_2404548.f_404))
				{
					if (GlobalFunc_6758(Param0, 1f))
					{
						iVar7 += 4096;
					}
				}
				else
				{
					iVar7 += 4096;
				}
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (GlobalFunc_393(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404548.f_37.f_31)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (!GlobalFunc_6766(&Param0, 0))
	{
		iVar7 = (iVar7 + 32768);
	}
	else
	{
		iVar7 = -1;
	}
	if (uParam4->f_5)
	{
	}
	else if (GlobalFunc_392(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var11.f_2 = 1176256410;
	bVar19 = false;
	bVar20 = false;
	iVar10 = 0;
	while (iVar10 < 3)
	{
		if (iVar7 >= Global_2404548.f_1217.f_5[iVar10 /*8*/])
		{
			if (uParam4->f_5)
			{
				if (!bVar19)
				{
					if (bParam6)
					{
						uParam5->f_4 = 0;
						bVar4 = false;
					}
					else
					{
						bVar4 = true;
					}
					if (uParam4->f_21)
					{
						fVar0 = func_60(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					else
					{
						fVar0 = func_60(Param0, Global_2404548.f_1192, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar19 = true;
				}
				if ((GlobalFunc_410(Global_2404548.f_404) && iVar7 == Global_2404548.f_1217.f_5[iVar10 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar20)
					{
						fVar2 = GlobalFunc_5333(Param0);
						bVar20 = true;
					}
					if (fVar2 < Global_2404548.f_1217.f_5[iVar10 /*8*/].f_2)
					{
						Var11.f_4 = { Param0 };
						Var11.f_7 = fParam3;
						Var11 = iVar7;
						Var11.f_1 = fVar0;
						Var11.f_2 = fVar2;
						GlobalFunc_389(Var11, iVar10);
						Global_2404548.f_1217.f_1 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404548.f_1217.f_5[iVar10 /*8*/] || (iVar7 == Global_2404548.f_1217.f_5[iVar10 /*8*/] && fVar0 > Global_2404548.f_1217.f_5[iVar10 /*8*/].f_1))
				{
					Var11.f_4 = { Param0 };
					Var11.f_7 = fParam3;
					Var11 = iVar7;
					Var11.f_1 = fVar0;
					GlobalFunc_389(Var11, iVar10);
					Global_2404548.f_1217.f_1 = 1;
					return;
				}
			}
			else
			{
				if (!bVar19)
				{
					if (uParam4->f_15)
					{
						fVar1 = 3.5f;
					}
					else
					{
						fVar1 = 1f;
					}
					fVar5 = GlobalFunc_7667(Param0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = func_46(Param0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = GlobalFunc_388(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = GlobalFunc_388(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					bVar19 = true;
				}
				if (iVar7 > Global_2404548.f_1217.f_5[iVar10 /*8*/] || (iVar7 == Global_2404548.f_1217.f_5[iVar10 /*8*/] && fVar3 > Global_2404548.f_1217.f_5[iVar10 /*8*/].f_3))
				{
					Var11.f_4 = { Param0 };
					Var11.f_7 = fParam3;
					Var11 = iVar7;
					Var11.f_3 = fVar3;
					GlobalFunc_389(Var11, iVar10);
					Global_2404548.f_1217.f_1 = 1;
					return;
				}
			}
		}
		iVar10++;
	}
}


float func_46(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x33B8
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar7;
	
	fVar2 = 999999.9f;
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (GlobalFunc_252(iVar7, 1, 1))
		{
			if (!iVar7 == PLAYER::PLAYER_ID() || iParam5 == 1)
			{
				bVar3 = false;
				if (bParam3)
				{
					if (func_49(iVar7))
					{
						bVar3 = true;
					}
				}
				if (bParam4)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar7) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar7) == -1 || !GlobalFunc_7646(PLAYER::PLAYER_ID(), 1))
						{
							bVar3 = true;
						}
					}
				}
				if (bVar3)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar7) || !bParam6)
					{
						if (GlobalFunc_338(iVar7))
						{
							Var4 = { GlobalFunc_271(iVar7) };
							if (!bParam6)
							{
								if (Var4.f_2 < -100f)
								{
									Var4.f_2 = Param0.f_2;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var4, 1);
							if (fVar1 < fVar2)
							{
								fVar2 = fVar1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar2;
}



int func_49(int iParam0)//Position - 0x34ED
{
	if (GlobalFunc_252(iParam0, 0, 1))
	{
		if (!GlobalFunc_7624(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
					{
						if (!GlobalFunc_424(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
					{
						if (!GlobalFunc_6839(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}











float func_60(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9)//Position - 0x3BD6
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam9) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam6)
	{
		fVar0 = GlobalFunc_388(SYSTEM::VDIST(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	fVar0 = GlobalFunc_388(func_46(Param0, 1, 0, 0, 1), 0f, GlobalFunc_8976(), GlobalFunc_8975(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar0 = GlobalFunc_388(GlobalFunc_5049(Param0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar4 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !GlobalFunc_7646(PLAYER::PLAYER_ID(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = GlobalFunc_388(GlobalFunc_5048(Param0, PLAYER::PLAYER_ID(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bParam7)
	{
		if (GlobalFunc_1289(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = GlobalFunc_388(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + GlobalFunc_388(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = GlobalFunc_388(SYSTEM::VDIST(Global_2404548.f_417, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}























int func_83(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)//Position - 0x4901
{
	Global_2404548.f_1 = 0;
	if (!GlobalFunc_7661(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2404548.f_1++;
		if (bParam5)
		{
			if (func_122(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404548.f_1 = (Global_2404548.f_1 + Global_2404548);
				if (!GlobalFunc_8346(Param0, fParam12))
				{
					Global_2404548.f_1++;
					if (!GlobalFunc_7669(Param0))
					{
						Global_2404548.f_1++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404548.f_1 = (Global_2404548.f_1 + Global_2404548);
			}
		}
		else if (!bParam4)
		{
			if (func_122(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404548.f_1 = (Global_2404548.f_1 + Global_2404548);
				if (!GlobalFunc_8346(Param0, fParam12))
				{
					Global_2404548.f_1++;
					if (!GlobalFunc_5052(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404548.f_1++;
						if (!GlobalFunc_7669(Param0))
						{
							Global_2404548.f_1++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404548.f_1 = (Global_2404548.f_1 + Global_2404548);
			}
		}
		else if (func_122(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
		{
			Global_2404548.f_1 = (Global_2404548.f_1 + Global_2404548);
			if (!GlobalFunc_8346(Param0, fParam12))
			{
				Global_2404548.f_1++;
				if (!GlobalFunc_5052(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404548.f_1++;
					if (!GlobalFunc_7669(Param0))
					{
						Global_2404548.f_1++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404548.f_1 = (Global_2404548.f_1 + Global_2404548);
		}
	}
	return 0;
}









int func_92(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x4F44
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (GlobalFunc_252(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && GlobalFunc_338(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam9) && bParam6) && GlobalFunc_6839(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(GlobalFunc_271(iVar1), Param0, 1) < fParam3)
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
















void func_108(var uParam0, var uParam1, var uParam2)//Position - 0x55A1
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	struct<3> Var23;
	var uVar26;
	struct<3> Var27;
	var uVar30;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (GlobalFunc_9661(uParam2->f_35, uParam0, uParam2->f_38, uParam2->f_41, 1, 1))
		{
			uParam2->f_6 = 9999.9f;
		}
	}
	if (uParam2->f_45)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_42)
	{
		if (GlobalFunc_7663(uParam0, 1))
		{
		}
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2408329.f_162 = 0;
	Global_2408329.f_163 = 0;
	Global_2408329.f_164 = -99;
	Global_2408329.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2408329[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2408329.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, iVar0, &uVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &Var1);
			bVar12 = false;
			if (Global_2408329.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2408329.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, *uParam0) > uParam2->f_4)
				{
					if (!GlobalFunc_5029(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!GlobalFunc_5028(Var1))
									{
										if (Var1.f_2 >= (uParam0->f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
										{
											if (Var1.f_2 <= (uParam0->f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
											{
												if (GlobalFunc_342(Var1, uParam2) || uParam2->f_33 >= 2)
												{
													if ((uParam2->f_42 && !GlobalFunc_7663(&Var1, 0)) || uParam2->f_42 == 0)
													{
														Var1 = { GlobalFunc_6879(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_45) };
														if (!bVar12)
														{
															if (bVar11)
															{
																iVar0 = (iVar0 + -1);
															}
														}
														if (SYSTEM::VMAG(Var1) > 0f)
														{
															if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.x, Var1.f_1, 0f, *uParam0, uParam0->f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
															{
																if ((uParam2->f_12 && !GlobalFunc_7662(Var1, uVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, 1)) || !uParam2->f_12)
																{
																	if (!uParam2->f_15 || !GlobalFunc_9661(uParam2->f_35, &Var1, uParam2->f_38, uParam2->f_41, 0, 1))
																	{
																		if (uParam2->f_8)
																		{
																			iVar17 = uParam2->f_31;
																			bVar18 = true;
																			iVar19 = 1;
																			fVar20 = uParam2->f_43;
																			if (uParam2->f_17)
																			{
																				iVar17 = 0;
																				bVar18 = false;
																				iVar19 = 0;
																				if (uParam2->f_33 == 1)
																				{
																					fVar20 = (fVar20 * 0.375f);
																				}
																			}
																			else
																			{
																				bVar18 = true;
																				iVar19 = 1;
																				if (uParam2->f_28)
																				{
																					if (uParam2->f_33 == 1)
																					{
																						fVar20 = (fVar20 * 0.375f);
																					}
																				}
																			}
																			iVar21 = 0;
																			if (uParam2->f_3 > 7f)
																			{
																				if (func_122(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																			}
																			else if (func_122(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0) && !func_113(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																			{
																				iVar21 = 1;
																			}
																			if (iVar21 || uParam2->f_33 >= 2)
																			{
																				if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2)
																				{
																					if (uParam2->f_30)
																					{
																						if (Global_2408329.f_162 == 0)
																						{
																							Global_2408329[0 /*3*/] = { Var1 };
																							Global_2408329.f_121[0] = uVar4;
																						}
																						else
																						{
																							iVar16 = 0;
																							while (iVar16 < Global_2408329.f_162 + 1)
																							{
																								if (iVar16 < 40)
																								{
																									if (SYSTEM::VDIST2(Var1, *uParam0) < SYSTEM::VDIST2(Global_2408329[iVar16 /*3*/], *uParam0))
																									{
																										GlobalFunc_341(Var1, uVar4, iVar16);
																										iVar16 = Global_2408329.f_162 + 1;
																									}
																								}
																								iVar16++;
																							}
																						}
																						Global_2408329.f_162++;
																						if (Global_2408329.f_162 >= 5)
																						{
																							iVar0 = 100;
																						}
																					}
																					else
																					{
																						Global_2408329[Global_2408329.f_162 /*3*/] = { Var1 };
																						Global_2408329.f_121[Global_2408329.f_162] = uVar4;
																						Global_2408329.f_162++;
																						if (GlobalFunc_342(Var1, uParam2))
																						{
																							Global_2408329.f_163++;
																						}
																						if (Global_2408329.f_162 >= 10)
																						{
																							iVar0 = 100;
																						}
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = uVar4;
																					return;
																				}
																			}
																			else
																			{
																				iVar0++;
																			}
																		}
																		else
																		{
																			*uParam0 = { Var1 };
																			*uParam1 = uVar4;
																			return;
																		}
																	}
																}
																else
																{
																	iVar15++;
																}
															}
															else
															{
																iVar0 = 100;
															}
														}
													}
													else
													{
														iVar0++;
													}
												}
												else if (!uParam2->f_32)
												{
													iVar0 = 100;
												}
											}
											else
											{
												iVar0++;
											}
										}
										else
										{
											iVar0++;
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2408329.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2408329[0 /*3*/] };
						*uParam1 = Global_2408329.f_121[0];
						return;
					}
					else
					{
						if (Global_2408329.f_163 > 0 && !Global_2408329.f_163 == Global_2408329.f_162)
						{
							GlobalFunc_5026(0, uParam2);
						}
						iVar22 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2408329.f_162);
						Var23 = { Global_2408329[0 /*3*/] };
						uVar26 = Global_2408329.f_121[0];
						Global_2408329[0 /*3*/] = { Global_2408329[iVar22 /*3*/] };
						Global_2408329.f_121[0] = Global_2408329.f_121[iVar22];
						Global_2408329[iVar22 /*3*/] = { Var23 };
						Global_2408329.f_121[iVar22] = uVar26;
						*uParam0 = { Global_2408329[0 /*3*/] };
						*uParam1 = Global_2408329.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_108(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iVar15), (40 + iVar15));
						PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*uParam0, iVar0, &Var1, &uVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { GlobalFunc_6879(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_45) };
						Var27 = { Var1 };
						uVar30 = uVar4;
						if (GlobalFunc_9661(uParam2->f_35, &Var27, uParam2->f_38, uParam2->f_41, 1, 1) || GlobalFunc_7663(&Var27, 1))
						{
							if (!uParam2->f_44)
							{
								uParam2->f_33 = 0;
								uParam2->f_44 = 1;
								*uParam0 = { Var27 };
								*uParam1 = uVar30;
								func_108(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = uVar30;
								return;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = uVar30;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				func_108(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				GlobalFunc_8339(&Global_1312061, uParam0, uParam1, PLAYER::PLAYER_ID());
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2408329.f_164 = iVar8;
	}
}





int func_113(struct<3> Param0, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x5FCD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (GlobalFunc_252(iVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && GlobalFunc_338(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && GlobalFunc_6839(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (GlobalFunc_5022(GlobalFunc_271(iVar1), Param0, uParam3, iParam4, 1036831949))
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









int func_122(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)//Position - 0x6740
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
		if (func_92(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404548++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (GlobalFunc_7665(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404548++;
	return 1;
}



int func_125(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)//Position - 0x6888
{
	struct<11> Var0;
	struct<18> Var18;
	struct<3> Var41;
	
	if (Param6.f_5 > (fParam3 - 20f))
	{
		Param6.f_5 = (fParam3 - 20f);
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_22 = 1;
	Var18 = { Param0 };
	Var18.f_3 = Param6.f_11;
	Var18.f_4 = fParam3;
	Var18.f_5 = 0;
	Var18.f_6 = 1;
	Var18.f_7 = 0;
	Var18.f_15 = 0;
	Var18.f_16 = 1;
	Var18.f_17 = 0;
	if (func_8(&Var18, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			Var41 = { Param0 - Var0[0 /*3*/] };
			if (Var41.f_2 > Param6.f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_10[0] = Param6.f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_10[0];
		return 1;
	}
	return 0;
}




void func_129()//Position - 0x69FD
{
	switch (Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_158();
			func_157();
			if (func_147())
			{
				func_145();
				func_144();
				func_130(35);
				Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			else if (Local_55.f_8 >= 1)
			{
				func_144();
				Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_55.f_8 >= 2)
			{
				Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_130(int iParam0)//Position - 0x6A84
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6828)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_1795[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_1795[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1)
			{
				Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1 = 1;
				MISC::SET_BIT(&Global_2445620, (8 + iVar2));
				GlobalFunc_7779(2094, -1);
				func_134(67, -1);
				STATS::PLAYSTATS_ACTIVITY_DONE(1000, iVar1);
				if (iVar3 < 2)
				{
					GlobalFunc_4989(15, 0);
				}
			}
		}
	}
}




void func_134(int iParam0, int iParam1)//Position - 0x6C44
{
	int iVar0;
	
	iVar0 = GlobalFunc_6881(iParam0, GlobalFunc_4916(iParam1));
	iVar0++;
	GlobalFunc_6880(iParam0, iVar0, iParam1);
}










void func_144()//Position - 0x70C6
{
	if (HUD::DOES_BLIP_EXIST(uLocal_164))
	{
		HUD::REMOVE_BLIP(&uLocal_164);
	}
}

void func_145()//Position - 0x70DD
{
	if (!MISC::IS_BIT_SET(Global_2422140.f_3181, 0))
	{
		MISC::SET_BIT(&(Global_2422140.f_3181), 0);
		func_146();
	}
	else
	{
		MISC::SET_BIT(&(Global_2422140.f_3181), 1);
	}
}

void func_146()//Position - 0x7114
{
	GlobalFunc_7779(1176, -1);
}

int func_147()//Position - 0x7124
{
	struct<14> Var0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_55.f_2), PLAYER::PLAYER_PED_ID()) && GlobalFunc_918(Local_55.f_2))
		{
			GlobalFunc_917(&(Local_55.f_2));
			if (HUD::DOES_BLIP_EXIST(uLocal_164))
			{
				HUD::REMOVE_BLIP(&uLocal_164);
			}
			GlobalFunc_8417("ABB_BOXCT", 1);
			Var0.f_2 = 107;
			Var0.f_10 = PLAYER::PLAYER_ID();
			GlobalFunc_1290(Var0, GlobalFunc_5335(0));
			MISC::SET_BIT(&(Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
			return 1;
		}
	}
	return 0;
}










void func_157()//Position - 0x7467
{
	if (!HUD::DOES_BLIP_EXIST(uLocal_164))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
		{
			uLocal_164 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_OBJ(Local_55.f_2));
			HUD::SET_BLIP_SCALE(uLocal_164, 1.2f);
			HUD::SET_BLIP_SPRITE(uLocal_164, 403);
			HUD::SET_BLIP_COLOUR(uLocal_164, 2);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_164, "ABB_BLIPN");
		}
	}
}

void func_158()//Position - 0x74B6
{
	var uVar0;
	
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		uVar0 = GlobalFunc_6671(1178, -1, 0);
		if (!MISC::IS_BIT_SET(uVar0, 14))
		{
			MISC::SET_BIT(&uVar0, 14);
			GlobalFunc_6784(1178, uVar0, -1, 1);
		}
	}
}

int func_159()//Position - 0x74F0
{
	return Local_55;
}

int func_160()//Position - 0x74FA
{
	STREAMING::REQUEST_MODEL(joaat("prop_drug_package_02"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0)//Position - 0x751C
{
	return Local_66[iParam0 /*3*/];
}












int func_173(struct<20> Param0)//Position - 0x7789
{
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_55, 11);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_66, 97);
	if (!GlobalFunc_5091())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_55.f_7 = Param0.f_16;
		Local_55.f_3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		if (!GlobalFunc_105(Global_2446554.f_778.f_1))
		{
			MISC::SET_BIT(&(Local_55.f_1), 8);
		}
	}
	iLocal_167 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
	Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	return 1;
}







void func_180()//Position - 0x7C77
{
	if (HUD::DOES_BLIP_EXIST(uLocal_164))
	{
		HUD::REMOVE_BLIP(&uLocal_164);
	}
	func_182();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_55.f_2))
			{
				GlobalFunc_917(&(Local_55.f_2));
			}
			Local_55 = 4;
		}
	}
	if (MISC::IS_BIT_SET(Local_55.f_1, 8))
	{
		func_181();
	}
	GlobalFunc_491();
}

void func_181()//Position - 0x7CD8
{
	Global_2446554.f_778 = 0;
	Global_2446554.f_778.f_1 = { 0f, 0f, 0f };
	Global_2446554.f_778.f_4 = 0f;
}

void func_182()//Position - 0x7D00
{
	if (MISC::IS_BIT_SET(uLocal_163, 4))
	{
		PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 0.72f);
		PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
		PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
		PLAYER::SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
		GlobalFunc_5336(1);
		MISC::CLEAR_BIT(&uLocal_163, 5);
		MISC::CLEAR_BIT(&uLocal_163, 7);
		MISC::CLEAR_BIT(&uLocal_163, 4);
	}
}




