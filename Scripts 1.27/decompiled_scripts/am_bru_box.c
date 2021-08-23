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
			if (func_185(PLAYER::PLAYER_ID()) != 1)
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
		func_172();
		if (func_162())
		{
			func_180();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_185(PLAYER::PLAYER_ID()) != 1)
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
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_55.f_3, 500f, 500f, 500f, 0, 1, 0) && func_185(PLAYER::PLAYER_ID()) != 1)
					{
						Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_127(&(Local_55.f_9));
				if (func_126(&(Local_55.f_9)))
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
		if (func_3(Global_2446554.f_778.f_1))
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

int func_3(struct<3> Param0)//Position - 0x264
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
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
				if (func_185(PLAYER::PLAYER_ID()) == 7)
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
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1196) < func_124())
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1196) < func_124())
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			func_123();
		}
		Global_2404548.f_1190 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1196) > func_124())
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
		func_123();
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
				func_121(Var8.x, Var8.f_1);
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
						if (!func_107(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
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
				if (uParam0->f_5 && !func_104(PLAYER::PLAYER_ID(), 0))
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
				func_103(Var8.x, Var8.f_1);
			}
		}
		if (Global_2404548.f_1191 == 3)
		{
			if (func_102() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2404548.f_1197) > 10000)
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
				func_97();
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
				if (!func_38(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_37(uParam0->f_8, uParam0->f_11, uParam0->f_14))
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
				if (func_10(Global_2404548.f_404))
				{
				}
			}
			else if (Global_2404548.f_1217.f_1)
			{
				func_9(uParam2, &(Global_2404548.f_1217.f_5));
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
			func_123();
			return 1;
		}
		Global_2404548.f_1196 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_9(var uParam0, var uParam1)//Position - 0x1258
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*8*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*8*/])->f_7;
		uParam0->f_14[iVar0] = (*uParam1)[iVar0 /*8*/];
		iVar0++;
	}
}

int func_10(int iParam0)//Position - 0x12A2
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
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
				if (func_38(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var53)))
				{
					iVar52 += 4;
				}
			}
			else
			{
				Var53 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
				if (func_37(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var53)))
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
	if (func_13(*uParam0, &Var0, iVar52, iParam3, 1))
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
		if (!func_12(Var0, uParam5->f_7, Var56, Var59, fVar62))
		{
			if (func_13(*uParam0, &Var0, iVar52, iParam3, 0))
			{
				if (!func_12(Var0, uParam5->f_7, Var56, Var59, fVar62))
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

int func_12(struct<3> Param0, bool bParam3, struct<3> Param4, struct<3> Param7, float fParam10)//Position - 0x15AA
{
	if (bParam3)
	{
		return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param4, Param7, fParam10, 0, 1);
	}
	else if (SYSTEM::VDIST(Param0, Param4) <= fParam10)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_13(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x15EF
{
	float fVar0;
	
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, 0, uParam3, iParam4))
	{
		fVar0 = SYSTEM::VDIST(Param0, *uParam3);
		if (fVar0 < 40f)
		{
			if ((iParam5 == 1 && !func_14(Global_2404548.f_417, &Param0, 0f, 0f, 0f, 0f, bParam6, 1)) || iParam5 == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7, bool bParam8, bool bParam9)//Position - 0x165B
{
	if (func_27(Param0))
	{
		if (func_26(uParam3, bParam8, 0, 1))
		{
			if (bParam8)
			{
			}
			return 1;
		}
	}
	if (func_17(uParam3, bParam8, 1))
	{
		if (bParam8)
		{
		}
		return 1;
	}
	if (bParam9)
	{
		if (func_16(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	if (SYSTEM::VDIST(*uParam3, Param4) < fParam7)
	{
		if (bParam8)
		{
			func_15(uParam3, Param4, fParam7, 1036831949, 0);
		}
		return 1;
	}
	return 0;
}

void func_15(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6)//Position - 0x16E6
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.x;
	uParam0->f_1 = Var3.f_1;
}

int func_16(struct<3> Param0, float fParam3)//Position - 0x1768
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (SYSTEM::VDIST(Param0, Global_2404548.f_1418[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_17(var uParam0, bool bParam1, bool bParam2)//Position - 0x17A2
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < Global_2404548.f_282.f_121)
	{
		if (Global_2404548.f_282[iVar0 /*12*/].f_9 == 1)
		{
			if (func_25(*uParam0, &(Global_2404548.f_282[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					Var1 = { *uParam0 };
					func_18(&Var1, &(Global_2404548.f_282[iVar0 /*12*/]), 1036831949, 0, bParam2);
					if (func_17(&Var1, 0, 0))
					{
						Var1 = { *uParam0 };
						func_18(&Var1, &(Global_2404548.f_282[iVar0 /*12*/]), 1036831949, 1, bParam2);
					}
					*uParam0 = { Var1 };
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_18(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x1851
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_23(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404548.f_1417) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_23(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_23(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_15(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404548.f_1417) * uParam1->f_8)), fParam2, bParam3);
				break;
			
			case 1:
				func_22(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_19(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_19(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)//Position - 0x195A
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_21(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.f_1, Var3.x, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_20(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_20(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = SYSTEM::VDIST(Param1.x, Param1.f_1, 0f, Param4.x, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_21(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_21(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var26.x, Var26.f_1, Var29.x, Var29.f_1)));
		if (!bParam9)
		{
			if (func_20(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_20(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (SYSTEM::VDIST(Var10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

float func_20(struct<3> Param0, struct<3> Param3)//Position - 0x1C29
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_21(struct<3> Param0, struct<3> Param3)//Position - 0x1C4A
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.x) - (Param0.x * Param3.f_2)), ((Param0.x * Param3.f_1) - (Param0.f_1 * Param3.x));
}

void func_22(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)//Position - 0x1C83
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1);
	fVar4 = (*uParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.x = (Param1 - fParam7);
			}
			else
			{
				Var0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.x = (Param4 + fParam7);
		}
		else
		{
			Var0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

Vector3 func_23(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)//Position - 0x1D82
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_15(&Param0, Param3, fParam9, fParam11, bParam12);
			break;
		
		case 1:
			func_22(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_19(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_107(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_24(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_24(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)//Position - 0x1E84
{
	if (((!Param0.x >= Param3.x || !Param0.f_1 >= Param3.f_1) || !Param0.x <= Param6.x) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

int func_25(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)//Position - 0x1F27
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_107(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404548.f_1417) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_24(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_26(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x2088
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2406588[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2406588[iVar0 /*17*/].f_16))
			{
				if (func_25(*uParam0, &(Global_2406588[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2406588[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2406588[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_18(&Var1, &(Global_2406588[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_26(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_18(&Var1, &(Global_2406588[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_27(struct<3> Param0)//Position - 0x2161
{
	int iVar0;
	struct<3> Var1;
	
	if (!func_31(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (!Global_2404548.f_420)
	{
		if (!func_30(Param0, 1008981770))
		{
			if (!func_26(&Param0, 0, 0, 0))
			{
				return 1;
			}
			else if (func_26(&Param0, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = func_29(Param0, 1008981770);
			if (iVar0 > -1)
			{
				Var1 = { func_28(&(Global_2404548.f_37[iVar0 /*12*/])) };
				if (!func_26(&Var1, 0, 0, 0))
				{
					if (!func_26(&Param0, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_28(var uParam0)//Position - 0x2203
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_29(struct<3> Param0, float fParam3)//Position - 0x224C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2404548.f_37[iVar0 /*12*/].f_9)
		{
			if (func_25(Param0, &(Global_2404548.f_37[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_30(struct<3> Param0, float fParam3)//Position - 0x2294
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2404548.f_37[iVar0 /*12*/].f_9)
		{
			if (func_25(Param0, &(Global_2404548.f_37[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_31(int iParam0, bool bParam1)//Position - 0x22DB
{
	if (Global_1312449 != 0)
	{
		return func_35(iParam0) != 0;
	}
	return func_32(iParam0, bParam1);
}

int func_32(int iParam0, bool bParam1)//Position - 0x2301
{
	if (bParam1)
	{
		if (func_33(iParam0))
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

bool func_33(int iParam0)//Position - 0x232D
{
	return func_34(iParam0);
}

bool func_34(int iParam0)//Position - 0x233B
{
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_13.f_1, 0);
}

int func_35(int iParam0)//Position - 0x2355
{
	if (func_36(iParam0, 0, 1))
	{
		return Global_2414009[iParam0 /*254*/].f_1;
	}
	return 0;
}

int func_36(int iParam0, bool bParam1, bool bParam2)//Position - 0x2376
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

int func_37(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x23BA
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param0.x > Param3.x)
	{
		Var3.x = Param0.x;
		Var0.x = Param3.x;
	}
	else
	{
		Var3.x = Param3.x;
		Var0.x = Param0.x;
	}
	if (Param0.f_1 > Param3.f_1)
	{
		Var3.f_1 = Param0.f_1;
		Var0.f_1 = Param3.f_1;
	}
	else
	{
		Var3.f_1 = Param3.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param3.f_2)
	{
		Var3.f_2 = Param0.f_2;
		Var0.f_2 = Param3.f_2;
	}
	else
	{
		Var3.f_2 = Param3.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (SYSTEM::VMAG(Var3 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_38(float fParam0)//Position - 0x2465
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
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
						if (uParam1->f_5 && func_10(Global_2404548.f_404))
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
		func_94(Global_2404548.f_440, &(Global_2404548.f_1217.f_30), &(Global_2404548.f_1217.f_63));
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
			if (uParam1->f_5 && func_10(Global_2404548.f_404))
			{
				if (Global_2404548.f_1217.f_1)
				{
					func_9(uParam0, &(Global_2404548.f_1217.f_5));
					func_43(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404548.f_1192 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_43(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404548.f_1217.f_1)
			{
				func_9(uParam0, &(Global_2404548.f_1217.f_5));
				func_43(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2404548.f_1217);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_40(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_43(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404548.f_1192 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_43(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404548.f_1192 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_43(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404548.f_1192 };
		if (uParam1->f_5 && func_10(Global_2404548.f_404))
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
		func_43(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

int func_40(var uParam0, bool bParam1)//Position - 0x2995
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_42(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2407491[iVar4])
	{
		if (func_41(Var1, &(Global_2406725[iVar4 /*85*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_19(&Var1, Global_2406725[iVar4 /*85*/][iVar0 /*7*/], Global_2406725[iVar4 /*85*/][iVar0 /*7*/].f_3, Global_2406725[iVar4 /*85*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2407491[8])
	{
		if (func_41(Var1, &(Global_2406725[8 /*85*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_19(&Var1, Global_2406725[iVar4 /*85*/][iVar0 /*7*/], Global_2406725[iVar4 /*85*/][iVar0 /*7*/].f_3, Global_2406725[iVar4 /*85*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_41(struct<3> Param0, var uParam3)//Position - 0x2AA2
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_42(struct<2> Param0, var uParam2)//Position - 0x2AC2
{
	if (Param0 < 0f)
	{
		if (Param0.f_1 > 4000f)
		{
			return 0;
		}
		else if (Param0.f_1 > 0f)
		{
			return 2;
		}
		else if (Param0.f_1 > -2000f)
		{
			return 4;
		}
		else
		{
			return 6;
		}
	}
	else if (Param0.f_1 > 4000f)
	{
		return 1;
	}
	else if (Param0.f_1 > 0f)
	{
		return 3;
	}
	else if (Param0.f_1 > -2000f)
	{
		return 5;
	}
	else
	{
		return 7;
	}
	return 8;
}

void func_43(struct<3> Param0)//Position - 0x2B4E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404548.f_1324[(3 - iVar0) /*3*/] = { Global_2404548.f_1324[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404548.f_1324[0 /*3*/] = { Param0 };
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
		if (func_31(PLAYER::PLAYER_ID(), 1))
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
		if (!func_93(Param0, 1084227584, 1123024896, 0))
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
			if (func_27(Global_2404548.f_417))
			{
				if ((!func_26(&Param0, 0, 0, 0) && !func_17(&Param0, 0, 0)) && !func_91(&Param0, 0))
				{
					iVar7 += 128;
				}
			}
			else if ((!func_17(&Param0, 0, 0) && !func_91(&Param0, 0)) && !func_16(Param0, 0.5f))
			{
				iVar7 += 128;
			}
		}
		else
		{
			iVar7 += 128;
		}
	}
	else if (!func_90(Param0, 2.5f, 3))
	{
		iVar7 += 128;
	}
	if (uParam4->f_5)
	{
		if (func_83(Param0, fParam3, uParam4->f_15, func_89(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 256;
			iVar7 += 512;
		}
		else
		{
			iVar9 = Global_2404548.f_1;
		}
	}
	else if (!func_77(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_76(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 512;
			iVar7 += 256;
		}
		else if (!func_76(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 256;
		}
	}
	if (uParam4->f_5)
	{
		if (!(func_75(PLAYER::PLAYER_ID()) && func_73(PLAYER::PLAYER_ID())))
		{
			if (!func_72(&Param0, &(Global_2404548.f_1217.f_63), 0, 1065353216))
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
		if (!func_73(PLAYER::PLAYER_ID()))
		{
			if (!func_71(Param0, &(Global_2404548.f_1217.f_30), &(Global_2404548.f_1217.f_63), 1073741824))
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
	if (func_70(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_70(Param0))
			{
				if (func_10(Global_2404548.f_404))
				{
					if (func_30(Param0, 1f))
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
		if (func_69(Param0))
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
	if (!func_40(&Param0, 0))
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
	else if (func_68(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
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
				if ((func_10(Global_2404548.f_404) && iVar7 == Global_2404548.f_1217.f_5[iVar10 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar20)
					{
						fVar2 = func_58(Param0);
						bVar20 = true;
					}
					if (fVar2 < Global_2404548.f_1217.f_5[iVar10 /*8*/].f_2)
					{
						Var11.f_4 = { Param0 };
						Var11.f_7 = fParam3;
						Var11 = iVar7;
						Var11.f_1 = fVar0;
						Var11.f_2 = fVar2;
						func_57(Var11, iVar10);
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
					func_57(Var11, iVar10);
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
					fVar5 = func_56(Param0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = func_46(Param0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = func_45(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = func_45(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					bVar19 = true;
				}
				if (iVar7 > Global_2404548.f_1217.f_5[iVar10 /*8*/] || (iVar7 == Global_2404548.f_1217.f_5[iVar10 /*8*/] && fVar3 > Global_2404548.f_1217.f_5[iVar10 /*8*/].f_3))
				{
					Var11.f_4 = { Param0 };
					Var11.f_7 = fParam3;
					Var11 = iVar7;
					Var11.f_3 = fVar3;
					func_57(Var11, iVar10);
					Global_2404548.f_1217.f_1 = 1;
					return;
				}
			}
		}
		iVar10++;
	}
}

float func_45(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x331A
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
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
		if (func_36(iVar7, 1, 1))
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
						if (!PLAYER::GET_PLAYER_TEAM(iVar7) == -1 || !func_31(PLAYER::PLAYER_ID(), 1))
						{
							bVar3 = true;
						}
					}
				}
				if (bVar3)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar7) || !bParam6)
					{
						if (func_48(iVar7))
						{
							Var4 = { func_47(iVar7) };
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

Vector3 func_47(int iParam0)//Position - 0x34B0
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_48(int iParam0)//Position - 0x34C3
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2414009[iParam0 /*254*/].f_239)
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0)//Position - 0x34ED
{
	if (func_36(iParam0, 0, 1))
	{
		if (!func_54(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_32(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_53(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())))
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
					if (!func_32(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_50(iParam0))
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

int func_50(int iParam0)//Position - 0x3597
{
	if (func_52(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2445582 = { func_51(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2445582))
	{
		return 1;
	}
	return 0;
}

struct<13> func_51(var uParam0)//Position - 0x35CD
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

int func_52(int iParam0, var uParam1)//Position - 0x35E4
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2445582 = { func_51(iParam0) };
		Global_2445595 = { func_51(uParam1) };
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

int func_53(int iParam0, int iParam1)//Position - 0x3651
{
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x3807
{
	if (func_104(iParam0, 0))
	{
		return 1;
	}
	if (func_55())
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

bool func_55()//Position - 0x3848
{
	return MISC::IS_BIT_SET(Global_2359301, 3);
}

float func_56(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x3859
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_36(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
				{
					fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_36(iVar1, 1, 1))
		{
			if (!func_104(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_48(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam7 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
							{
								fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

void func_57(struct<8> Param0, int iParam8)//Position - 0x39F0
{
	struct<8> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404548.f_1217.f_5[iParam8 /*8*/] };
	Global_2404548.f_1217.f_5[iParam8 /*8*/] = { Param0 };
	if (iParam8 < 2)
	{
		func_57(Var0, iParam8 + 1);
	}
}

float func_58(struct<3> Param0)//Position - 0x3A42
{
	var uVar0;
	
	return func_59(Param0, &(Global_2404548.f_37), &uVar0);
}

float func_59(struct<3> Param0, var uParam3, var uParam4)//Position - 0x3A5A
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam3[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404548.f_1417) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.x < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - Param0.x));
					}
					else if (Param0.x > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.x - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
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
		fVar0 = func_45(SYSTEM::VDIST(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	fVar0 = func_45(func_46(Param0, 1, 0, 0, 1), 0f, func_67(), func_65(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar0 = func_45(func_63(Param0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar4 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_31(PLAYER::PLAYER_ID(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_45(func_62(Param0, PLAYER::PLAYER_ID(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bParam7)
	{
		if (func_61(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_45(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_45(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_45(SYSTEM::VDIST(Global_2404548.f_417, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_61(struct<3> Param0, var uParam3, var uParam4)//Position - 0x3D81
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar3))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(uVar3, &Var0);
		*uParam3 = SYSTEM::VDIST(Param0.x, Param0.f_1, 0f, Var0.x, Var0.f_1, 0f);
		*uParam4 = MISC::ABSF((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_62(struct<3> Param0, int iParam3, int iParam4)//Position - 0x3DDA
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!iParam3 == iVar2 || iParam4 == 1)
		{
			iVar3 = iVar2;
			if (func_36(iVar3, 0, 1))
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam3) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam3) == -1))
				{
					if (Global_2410940.f_260[iVar2])
					{
						fVar1 = SYSTEM::VDIST(Global_2410940.f_130[iVar2 /*3*/], Param0);
						if (fVar1 < fVar0)
						{
							fVar0 = fVar1;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

float func_63(struct<3> Param0)//Position - 0x3E7B
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar2]))
			{
				if (func_64(uVar6[iVar2]))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(uVar6[iVar2], 1) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_64(var uParam0)//Position - 0x3F07
{
	var uVar0;
	int iVar1;
	
	uVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1574020[PLAYER::PLAYER_ID()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1582596[PLAYER::PLAYER_ID() /*324*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1573731[iVar1]))
			{
				case 3:
				case 5:
					return 1;
					break;
				}
			}
	}
	return 0;
}

float func_65()//Position - 0x3FB2
{
	if (func_66())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2404548.f_37.f_43) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2404548.f_37.f_43)) || Global_2404548.f_37.f_43 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_66()//Position - 0x4010
{
	if (Global_2404548.f_37.f_41 && !Global_2404548.f_37.f_240)
	{
		if (!func_54(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_67()//Position - 0x4045
{
	if (func_66())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2404548.f_37.f_43) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2404548.f_37.f_43)) || Global_2404548.f_37.f_43 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_68(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)//Position - 0x40A1
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam7)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_69(struct<3> Param0)//Position - 0x4130
{
	var uVar0;
	int iVar1;
	
	if (Global_2404548.f_37.f_31)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_2404548.f_37.f_32))
		{
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
			{
				uVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
				if (INTERIOR::IS_VALID_INTERIOR(uVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(uVar0);
					if (!iVar1 == Global_2404548.f_37.f_33)
					{
						return 0;
					}
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
	}
	return 1;
}

int func_70(struct<3> Param0)//Position - 0x419B
{
	float fVar0;
	
	if (!Global_2404548.f_1213)
	{
		fVar0 = MISC::ABSF((Param0.f_2 - Global_2404548.f_1192.f_2));
		if (fVar0 < Global_2404548.f_1195)
		{
			return 1;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_2404548.f_1206, Global_2404548.f_1209, Global_2404548.f_1212, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_71(struct<3> Param0, var uParam3, var uParam4, float fParam5)//Position - 0x4201
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (SYSTEM::VDIST(*(uParam3[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		Var2 = { *(uParam4[iVar1 /*10*/]) };
		Var5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_72(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x42AF
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_15(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_73(int iParam0)//Position - 0x4321
{
	switch (Global_1312449)
	{
		case 0:
			if (!func_74(iParam0))
			{
				if (Global_1582596[iParam0 /*324*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_74(int iParam0)//Position - 0x4357
{
	return Global_1582596[iParam0 /*324*/].f_165 != 0;
}

int func_75(int iParam0)//Position - 0x436C
{
	if (func_32(iParam0, 1))
	{
		if (Global_1582596[iParam0 /*324*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_76(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x4390
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_36(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam3))
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
		if (func_36(iVar1, 1, 1))
		{
			if (!func_104(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_48(iVar1) || !bParam10) && !Global_2414009[iVar1 /*254*/].f_253)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

int func_77(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4546
{
	if (func_82(Param0, fParam3, iParam4, iParam5) || func_78(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_78(struct<3> Param0, int iParam3, int iParam4)//Position - 0x4576
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_79(Param0, Global_2410940.f_293[iVar0 /*3*/], Global_2410940.f_390[iVar0], Global_2410940.f_423[iVar0], 1036831949))
			{
				if (func_36(iVar1, 0, 1) && func_36(iParam3, 0, 1))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_79(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, float fParam8)//Position - 0x45FF
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (SYSTEM::VDIST(Param0, Param3) < func_81(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_80(&Var0, 0f, 0f, uParam6);
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
		MISC::GET_MODEL_DIMENSIONS(iParam7, &Var3, &Var6);
		fVar9 = MISC::ABSF((Var6.f_1 - Var3.f_1));
		fVar10 = MISC::ABSF((Var6.x - Var3.x));
		fVar11 = MISC::ABSF((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var12, Var15, fVar10, 0, 1);
	}
	return 0;
}

void func_80(var uParam0, struct<3> Param1)//Position - 0x46EC
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(Param1.x);
	fVar1 = SYSTEM::SIN(Param1.x);
	Var2.x = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_1);
	fVar1 = SYSTEM::SIN(Param1.f_1);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_2);
	fVar1 = SYSTEM::SIN(Param1.f_2);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_81(int iParam0, float fParam1)//Position - 0x47C3
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var3);
	Var6 = { Var3 - Var0 };
	return (SYSTEM::SQRT((((Var6.x * 0.5f) * (Var6.x * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f)))) + fParam1);
}

int func_82(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x481A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (func_36(iVar1, 0, 1) && func_36(iParam4, 0, 1))
			{
				if (Global_2410940.f_260[iVar0])
				{
					if (SYSTEM::VDIST(Global_2410940.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (SYSTEM::VDIST(func_47(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2410940.f_260[iVar0])
			{
				if (SYSTEM::VDIST(Global_2410940.f_130[iVar0 /*3*/], Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (func_36(iVar1, 0, 1))
			{
				if (SYSTEM::VDIST(func_47(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_83(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)//Position - 0x4901
{
	Global_2404548.f_1 = 0;
	if (!func_77(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2404548.f_1++;
		if (bParam5)
		{
			if (func_122(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404548.f_1 = (Global_2404548.f_1 + Global_2404548);
				if (!func_88(Param0, fParam12))
				{
					Global_2404548.f_1++;
					if (!func_87(Param0))
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
				if (!func_88(Param0, fParam12))
				{
					Global_2404548.f_1++;
					if (!func_84(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404548.f_1++;
						if (!func_87(Param0))
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
			if (!func_88(Param0, fParam12))
			{
				Global_2404548.f_1++;
				if (!func_84(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404548.f_1++;
					if (!func_87(Param0))
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

int func_84(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x4B20
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((func_36(iVar1, 1, 1) && func_48(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!func_86(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_85(func_47(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_85(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)//Position - 0x4B9F
{
	struct<3> Var0;
	struct<3> Var3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	Var0.x = SYSTEM::SIN(fParam6);
	Var0.f_1 = SYSTEM::COS(fParam6);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	Var0 = { Var0 * Vector(fParam7, fParam7, fParam7) };
	Var3 = { Param3 + Var0 };
	Var3.f_2 = Param3.f_2;
	Var3.f_2 = (Var3.f_2 + fParam9);
	Param3.f_2 = (Param3.f_2 + fParam9);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_86(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4C2B
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_87(struct<3> Param0)//Position - 0x4CA3
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (func_32(PLAYER::PLAYER_ID(), 1))
	{
		if (Global_1602437.f_28441 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1602437.f_28441)
			{
				if (Global_1602437.f_28442[iVar0 /*31*/].f_7 != 0)
				{
					MISC::GET_MODEL_DIMENSIONS(Global_1602437.f_28442[iVar0 /*31*/].f_7, &Var1, &Var4);
					fVar7 = (MISC::ABSF((Var1.f_1 - Var4.f_1)) * 0.5f);
					fVar8 = (MISC::ABSF((Var1.x - Var4.x)) * 0.5f);
					fVar9 = (MISC::ABSF((Var1.f_2 - Var4.f_2)) * 0.5f);
					fVar10 = ((fVar7 * fVar7) + (fVar8 * fVar8));
					fVar10 = (fVar10 + fVar9);
					if (SYSTEM::VDIST2(Global_1602437.f_28442[iVar0 /*31*/], Param0) < fVar10)
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_88(struct<3> Param0, float fParam3)//Position - 0x4D6F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_36(iVar1, 1, 1) && func_48(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_31(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !func_86(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(Param0, func_47(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x4E2B
{
	if ((Global_2404548.f_404 == 9 || Global_2404548.f_404 == 9) || (Global_2404548.f_404 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_90(struct<3> Param0, float fParam3, int iParam4)//Position - 0x4E6E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (SYSTEM::VDIST2(Global_2404548.f_1324[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_91(var uParam0, bool bParam1)//Position - 0x4EAC
{
	struct<3> Var0;
	float fVar3;
	
	if (Global_2404548.f_473 > 0f)
	{
		fVar3 = SYSTEM::VDIST(*uParam0, Global_2404548.f_470);
		if (fVar3 < Global_2404548.f_473)
		{
			if (bParam1)
			{
				Var0 = { *uParam0 };
				func_15(&Var0, Global_2404548.f_470, Global_2404548.f_473, 1036831949, 0);
				if (func_91(&Var0, 0))
				{
					Var0 = { *uParam0 };
					func_15(&Var0, Global_2404548.f_470, Global_2404548.f_473, 1036831949, 1);
				}
				*uParam0 = { Var0 };
			}
			return 1;
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
			if (func_36(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_48(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam9) && bParam6) && func_50(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(iVar1), Param0, 1) < fParam3)
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

int func_93(struct<3> Param0, float fParam3, int iParam4, float fParam5)//Position - 0x5040
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_36(iVar1, 1, 1))
			{
				if ((!func_104(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1)) && iVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_94(struct<3> Param0, var uParam3, var uParam4)//Position - 0x5105
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var6;
	struct<3> Var16;
	struct<3> Var19;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var6 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!MISC::IS_BIT_SET(Global_2359718[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2359718[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359718[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359718[iVar1 /*26*/].f_6.f_2;
					func_96(&Var2, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			Var16 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var19 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam4[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(Var16, Param0) < SYSTEM::VDIST(Var19, Param0))
			{
				Var6 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var6.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var6.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var6.f_7 = { Global_2359394[iVar1 /*3*/] };
				func_95(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_95(var uParam0, var uParam1, int iParam2)//Position - 0x52ED
{
	Global_2408319 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_95(&Global_2408319, uParam1, iParam2 + 1);
	}
}

void func_96(var uParam0, var uParam1, int iParam2)//Position - 0x532B
{
	Global_2408315 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_96(&Global_2408315, uParam1, iParam2 + 1);
	}
}

void func_97()//Position - 0x5365
{
	func_101();
	func_100();
	func_99();
	func_98();
}

void func_98()//Position - 0x537D
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404548.f_1217.f_63[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_99()//Position - 0x53AC
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404548.f_1217.f_30[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_100()//Position - 0x53DA
{
	struct<8> Var0;
	int iVar8;
	
	Var0.f_2 = 1176256410;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		Global_2404548.f_1217.f_5[iVar8 /*8*/] = { Var0 };
		iVar8++;
	}
}

void func_101()//Position - 0x5416
{
	struct<5> Var0;
	
	Var0.f_2 = -1;
	Global_2404548.f_1217 = { Var0 };
}

var func_102()//Position - 0x5434
{
	return Global_1310987.f_4;
}

void func_103(var uParam0, var uParam1)//Position - 0x5442
{
	func_123();
	func_121(uParam0, uParam1);
}

bool func_104(int iParam0, int iParam1)//Position - 0x5456
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_105(-1, 0) == 8;
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

int func_105(int iParam0, bool bParam1)//Position - 0x54A1
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_106();
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

int func_106()//Position - 0x54E2
{
	return Global_1312737;
}

bool func_107(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)//Position - 0x54EE
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
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
		if (func_14(uParam2->f_35, uParam0, uParam2->f_38, uParam2->f_41, 1, 1))
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
		if (func_120(uParam0, 1))
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
					if (!func_91(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_119(Var1))
									{
										if (Var1.f_2 >= (uParam0->f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
										{
											if (Var1.f_2 <= (uParam0->f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
											{
												if (func_118(Var1, uParam2) || uParam2->f_33 >= 2)
												{
													if ((uParam2->f_42 && !func_120(&Var1, 0)) || uParam2->f_42 == 0)
													{
														Var1 = { func_116(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_45) };
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
																if ((uParam2->f_12 && !func_114(Var1, uVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, 1)) || !uParam2->f_12)
																{
																	if (!uParam2->f_15 || !func_14(uParam2->f_35, &Var1, uParam2->f_38, uParam2->f_41, 0, 1))
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
																										func_112(Var1, uVar4, iVar16);
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
																						if (func_118(Var1, uParam2))
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
							func_110(0, uParam2);
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
						Var1 = { func_116(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_45) };
						Var27 = { Var1 };
						uVar30 = uVar4;
						if (func_14(uParam2->f_35, &Var27, uParam2->f_38, uParam2->f_41, 1, 1) || func_120(&Var27, 1))
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
				func_109(&Global_1312061, uParam0, uParam1, PLAYER::PLAYER_ID());
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

void func_109(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x5E36
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), func_47(iParam3));
		if (fVar1 < fVar0)
		{
			if (!func_77(*(uParam0[iVar2 /*4*/]), 5f, iParam3, 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_110(int iParam0, var uParam1)//Position - 0x5EBA
{
	if (!func_118(Global_2408329[iParam0 /*3*/], uParam1))
	{
		Global_2408329.f_162 = (Global_2408329.f_162 - 1);
		func_111(iParam0);
		if (Global_2408329.f_162 > Global_2408329.f_163)
		{
			func_110(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_110(iParam0 + 1, uParam1);
	}
}

void func_111(int iParam0)//Position - 0x5F15
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2408329[iParam0 /*3*/] = { Global_2408329[iParam0 + 1 /*3*/] };
			Global_2408329.f_121[iParam0] = Global_2408329.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_112(struct<3> Param0, var uParam3, int iParam4)//Position - 0x5F60
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2408329[iParam4 /*3*/] };
	uVar3 = Global_2408329.f_121[iParam4];
	Global_2408329[iParam4 /*3*/] = { Param0 };
	Global_2408329.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2408329.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_112(Var0, uVar3, iParam4 + 1);
		}
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
			if (func_36(iVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_48(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_50(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (func_79(func_47(iVar1), Param0, uParam3, iParam4, 1036831949))
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

int func_114(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x60CE
{
	if (func_115(Param0, uParam3, iParam4, iParam5, iParam6) || func_78(Param0, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_115(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6100
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_36(iVar1, 0, 1) && func_36(iParam5, 0, 1))
			{
				if (Global_2410940.f_260[iVar0])
				{
					if (func_79(Global_2410940.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_79(func_47(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2410940.f_260[iVar0])
			{
				if (func_79(Global_2410940.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_36(iVar1, 0, 1))
			{
				if (func_79(func_47(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_116(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)//Position - 0x61FF
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	float fVar17;
	float fVar20;
	float fVar23;
	
	if (bParam15)
	{
		if (SYSTEM::VMAG(Param6) > 0f)
		{
			if (!func_117(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
		if (iVar11 == iVar12)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar11 + iVar12) != iParam4)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *bParam12)
		{
			*uParam3 = (*uParam3 + 180f);
			if (*uParam3 > 360f)
			{
				*uParam3 = (*uParam3 + -360f);
			}
		}
		if (*uParam3 <= 90f || *uParam3 > 270f)
		{
			bVar15 = true;
		}
		else
		{
			bVar15 = false;
		}
		bVar16 = false;
		if (bVar15)
		{
			if (iVar11 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar11)
			{
				bVar16 = true;
			}
		}
		else if (iVar12 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar12)
		{
			bVar16 = true;
		}
		if (fVar13 < 0f)
		{
			fVar14 = 0f;
		}
		else
		{
			if (bVar15)
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (SYSTEM::TO_FLOAT(iVar11) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * SYSTEM::TO_FLOAT(iVar11));
				}
				if (bVar16)
				{
					if (iVar11 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar11 - 2)) * 1f));
					}
				}
				else if (iVar11 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar11 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (SYSTEM::TO_FLOAT(iVar12) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * SYSTEM::TO_FLOAT(iVar12));
				}
				if (bVar16)
				{
					if (iVar12 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar12 - 2)) * 1f));
					}
				}
				else if (iVar12 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar12 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar14 = (fVar14 + (0.95f * fVar13));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				MISC::GET_MODEL_DIMENSIONS(iParam11, &fVar17, &fVar20);
				fVar23 = (fVar20 - fVar17);
				if (fVar23 > 1.8f)
				{
					fVar14 = (fVar14 + ((fVar23 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param6) > 0f)
	{
		if (!func_117(Param0, *uParam3, Param6))
		{
			if (bParam5)
			{
				*uParam3 = (*uParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, *uParam3, fVar14, 0f, 0f) };
	return Var0;
}

int func_117(struct<3> Param0, var uParam3, struct<3> Param4)//Position - 0x6547
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_80(&Var0, 0f, 0f, uParam3);
	Var3 = { Param4 - Param0 };
	if (func_20(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_118(struct<3> Param0, var uParam3)//Position - 0x6583
{
	if (uParam3->f_18)
	{
		if (!uParam3->f_26)
		{
			if (SYSTEM::VDIST(Param0, uParam3->f_19) <= uParam3->f_25)
			{
				return 1;
			}
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_119(struct<3> Param0)//Position - 0x65DD
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_42(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2408204[iVar1])
	{
		if (func_41(Param0, &(Global_2407501[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408204[8])
	{
		if (func_41(Param0, &(Global_2407501[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_120(var uParam0, bool bParam1)//Position - 0x6658
{
	if (Global_2404548.f_22.f_14)
	{
		if (((((*uParam0 > Global_2404548.f_22.f_8 && *uParam0 < Global_2404548.f_22.f_11) && uParam0->f_1 > Global_2404548.f_22.f_8.f_1) && uParam0->f_1 < Global_2404548.f_22.f_11.f_1) && uParam0->f_2 > Global_2404548.f_22.f_8.f_2) && uParam0->f_2 < Global_2404548.f_22.f_11.f_2)
		{
			if (bParam1)
			{
				*uParam0 = { func_23(*uParam0, Global_2404548.f_22.f_8, Global_2404548.f_22.f_11, 0f, 1, 1036831949, 0) };
			}
			return 1;
		}
	}
	return 0;
}

void func_121(var uParam0, var uParam1)//Position - 0x670D
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(uParam0, uParam1, 0.1f);
	Global_2404548.f_1200 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2404548.f_1198 = 1;
	Global_2404548.f_1201 = NETWORK::GET_NETWORK_TIME();
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
			if (func_76(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404548++;
	return 1;
}

void func_123()//Position - 0x683D
{
	if (Global_2404548.f_1198)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2404548.f_1200)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2404548.f_1198 = 0;
	}
}

int func_124()//Position - 0x6870
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	return 1000;
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

int func_126(var uParam0)//Position - 0x6970
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_127(var uParam0)//Position - 0x6999
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_128(uParam0, 0, 0);
		}
	}
}

void func_128(var uParam0, bool bParam1, bool bParam2)//Position - 0x69B8
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
			if (Global_2097152[func_143() /*8053*/].f_5756.f_1795[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_143() /*8053*/].f_5756.f_1795[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_143() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1)
			{
				Global_2097152[func_143() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1 = 1;
				MISC::SET_BIT(&Global_2445620, (8 + iVar2));
				func_138(2094, -1);
				func_134(67, -1);
				STATS::PLAYSTATS_ACTIVITY_DONE(1000, iVar1);
				if (iVar3 < 2)
				{
					func_131(15, 0);
				}
			}
		}
	}
}

void func_131(int iParam0, int iParam1)//Position - 0x6B66
{
	int iVar0;
	
	if (func_133(iParam0, iParam1))
	{
		iVar0 = func_132();
		Global_2435149[iVar0] = iParam0;
	}
}

int func_132()//Position - 0x6B89
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435149[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_133(int iParam0, var uParam1)//Position - 0x6BBE
{
	if (Global_1315888)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315900) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_134(int iParam0, int iParam1)//Position - 0x6C44
{
	int iVar0;
	
	iVar0 = func_136(iParam0, func_137(iParam1));
	iVar0++;
	func_135(iParam0, iVar0, iParam1);
}

void func_135(int iParam0, int iParam1, var uParam2)//Position - 0x6C6A
{
	int iVar0;
	
	iVar0 = Global_2475233[iParam0 /*6*/][func_137(uParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_136(int iParam0, int iParam1)//Position - 0x6C8E
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2475233[iParam0 /*6*/][func_137(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_137(var uParam0)//Position - 0x6CBA
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_106();
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

void func_138(int iParam0, int iParam1)//Position - 0x6CEE
{
	int iVar0;
	
	iVar0 = func_142(iParam0, func_137(iParam1), 0);
	iVar0++;
	if (!func_141(iParam0))
	{
		func_140(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_139(iParam0, iVar0, iParam1, 1);
	}
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6D2E
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_137(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 775:
			Global_1335551[func_137(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1335557[func_137(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1335563[func_137(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1335569[func_137(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1335527[func_137(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1335533[func_137(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1335539[func_137(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1335545[func_137(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1335503[func_137(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335509[func_137(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335515[func_137(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335521[func_137(iParam2)] = iParam1;
			break;
		
		case 745:
			Global_1335575[func_137(iParam2)] = iParam1;
			break;
		
		case 746:
			Global_1335581[func_137(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1335587[func_137(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1335593[func_137(iParam2)] = iParam1;
			break;
		
		case 1290:
			Global_1335599[func_137(iParam2)] = iParam1;
			break;
		
		case 627:
			Global_1335605[func_137(iParam2)] = iParam1;
			break;
		
		case 1265:
			Global_1335611[func_137(iParam2)] = iParam1;
			break;
		
		case 1862:
			Global_2476002[0 /*6*/][func_137(iParam2)] = iParam1;
			break;
		
		case 2251:
			Global_2476002[1 /*6*/][func_137(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335617[func_137(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1335623[func_137(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1335629[func_137(iParam2)] = iParam1;
			break;
		
		case 1223:
			Global_1335635[func_137(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_140(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6FA8
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_137(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_141(int iParam0)//Position - 0x6FD3
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 775:
			case 776:
			case 777:
			case 778:
			case 765:
			case 766:
			case 767:
			case 768:
			case 755:
			case 756:
			case 757:
			case 758:
			case 745:
			case 746:
			case 747:
			case 748:
			case 1290:
			case 627:
			case 1265:
			case 752:
			case 753:
			case 754:
			case 1223:
			case 1862:
			case 2251:
				return 1;
				break;
			}
	}
	return 0;
}

int func_142(int iParam0, int iParam1, int iParam2)//Position - 0x7087
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_137(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_143()//Position - 0x70B9
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
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
	func_138(1176, -1);
}

int func_147()//Position - 0x7124
{
	struct<14> Var0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_55.f_2))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_55.f_2), PLAYER::PLAYER_PED_ID()) && func_156(Local_55.f_2))
		{
			func_155(&(Local_55.f_2));
			if (HUD::DOES_BLIP_EXIST(uLocal_164))
			{
				HUD::REMOVE_BLIP(&uLocal_164);
			}
			func_150("ABB_BOXCT", 1);
			Var0.f_2 = 107;
			Var0.f_10 = PLAYER::PLAYER_ID();
			func_148(Var0, func_149(0));
			MISC::SET_BIT(&(Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
			return 1;
		}
	}
	return 0;
}

void func_148(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x71A6
{
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_149(int iParam0)//Position - 0x71CF
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_36(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_150(char* sParam0, int iParam1)//Position - 0x722C
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_151(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_151(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x7258
{
	int iVar0;
	
	if ((!func_154() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_104(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_152(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1692405.f_5[iVar0 /*53*/] = iParam0;
		Global_1692405.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1692405.f_5[iVar0 /*53*/].f_2[0] = iParam4;
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

int func_152(int iParam0)//Position - 0x7360
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1692405 - 1))
	{
		if (iParam0 > Global_1692405.f_5[iVar0 /*53*/].f_1)
		{
			func_153(iVar0);
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

void func_153(int iParam0)//Position - 0x73C2
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1692405.f_5[iVar0 /*53*/] = { Global_1692405.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_154()//Position - 0x73FB
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_155(var uParam0)//Position - 0x740C
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&uVar0);
	}
}

int func_156(var uParam0)//Position - 0x7445
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
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
		uVar0 = func_142(1178, -1, 0);
		if (!MISC::IS_BIT_SET(uVar0, 14))
		{
			MISC::SET_BIT(&uVar0, 14);
			func_140(1178, uVar0, -1, 1);
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

int func_162()//Position - 0x752A
{
	bool bVar0;
	
	func_169(&bVar0);
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
	if (func_168())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (func_167())
	{
		return 1;
	}
	if (func_166(157))
	{
		if (!func_165())
		{
			return 1;
		}
	}
	if (func_166(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_163() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_163()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_163()//Position - 0x75BD
{
	switch (func_164())
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

int func_164()//Position - 0x75F1
{
	return Global_24444;
}

bool func_165()//Position - 0x75FC
{
	return Global_2428131.f_572;
}

int func_166(int iParam0)//Position - 0x760B
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_167()//Position - 0x7622
{
	return Global_2435238;
}

bool func_168()//Position - 0x762E
{
	return Global_2428131.f_567;
}

void func_169(var uParam0)//Position - 0x763D
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
					func_170(iVar0);
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

void func_170(int iParam0)//Position - 0x76AD
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_36(Var0.f_1, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_171(uVar4, &bVar5))
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

int func_171(var uParam0, var uParam1)//Position - 0x772E
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

void func_172()//Position - 0x777C
{
	SYSTEM::WAIT(0);
}

int func_173(struct<20> Param0)//Position - 0x7789
{
	func_178(func_179(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	func_175(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_55, 11);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_66, 97);
	if (!func_174())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_55.f_7 = Param0.f_16;
		Local_55.f_3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		if (!func_3(Global_2446554.f_778.f_1))
		{
			MISC::SET_BIT(&(Local_55.f_1), 8);
		}
	}
	iLocal_167 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
	Local_66[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	return 1;
}

int func_174()//Position - 0x7819
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_168())
		{
			return 0;
		}
		if (func_166(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_175(int iParam0, int iParam1, bool bParam2)//Position - 0x7872
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_177();
			}
			else
			{
				return 0;
			}
		}
		if (!func_176())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
				if (func_168())
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
				if (func_166(155))
				{
					if (!bParam2)
					{
						func_177();
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
					func_177();
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
				func_177();
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
			func_177();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_176()//Position - 0x7987
{
	return Global_1315874;
}

void func_177()//Position - 0x7993
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_178(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)//Position - 0x799F
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_177();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_179(int iParam0)//Position - 0x79BE
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
				func_155(&(Local_55.f_2));
			}
			Local_55 = 4;
		}
	}
	if (MISC::IS_BIT_SET(Local_55.f_1, 8))
	{
		func_181();
	}
	func_177();
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
		func_183(1);
		MISC::CLEAR_BIT(&uLocal_163, 5);
		MISC::CLEAR_BIT(&uLocal_163, 7);
		MISC::CLEAR_BIT(&uLocal_163, 4);
	}
}

void func_183(int iParam0)//Position - 0x7D54
{
	var uVar0;
	
	uVar0 = func_184(iParam0, 0);
	GRAPHICS::ANIMPOSTFX_STOP(uVar0);
}

char* func_184(int iParam0, bool bParam1)//Position - 0x7D6B
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
	}
	return "";
}

int func_185(int iParam0)//Position - 0x7DF1
{
	return Global_1582596[iParam0 /*324*/];
}

