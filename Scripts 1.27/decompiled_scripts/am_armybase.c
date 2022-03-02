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
	struct<4> Local_48 = { 2, 0, 0, 3 } ;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 2;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	struct<8> Local_75[32];
	struct<178> Local_332 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0 } ;
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
		func_102(ScriptParam_0);
	}
	else
	{
		func_99();
	}
	while (true)
	{
		GlobalFunc_906();
		func_90();
		if (GlobalFunc_7778() || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_99();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_17())
			{
				func_99();
			}
			if (((((!Global_1573335 && !func_16(2)) && !GlobalFunc_6678(PLAYER::PLAYER_ID(), 0)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !GlobalFunc_7624(PLAYER::PLAYER_ID()))
			{
				if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 1000, 0) || func_9(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1000))
				{
					if (!MISC::IS_BIT_SET(Global_2446554.f_4389, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
							{
								if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 0, 0) || func_9(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 0))
								{
									if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
									{
										PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
									}
									else
									{
										PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
									}
								}
								else if (!GlobalFunc_226(&(Local_332.f_3)))
								{
									GlobalFunc_7777(&(Local_332.f_3));
								}
								else if (GlobalFunc_5182(&(Local_332.f_3)) > 20f || Local_332.f_177)
								{
									if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
									{
										PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
									}
									else
									{
										PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
									}
								}
							}
							else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
							}
							else
							{
								PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
							}
						}
						else
						{
							if (GlobalFunc_226(&(Local_332.f_3)))
							{
								GlobalFunc_235(&(Local_332.f_3));
							}
							if (Local_332.f_177)
							{
								Local_332.f_177 = 0;
							}
						}
					}
					else if (!Local_332.f_177)
					{
						Local_332.f_177 = 1;
					}
				}
				else if (Local_332.f_177)
				{
					Local_332.f_177 = 0;
				}
			}
		}
		else
		{
			func_99();
		}
	}
}









int func_9(struct<3> Param0, int iParam3)//Position - 0x3C1
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	
	iVar110 = 0;
	Var0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	Var46[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam3)) };
	fVar92[0] = 88f;
	Var0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	Var46[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam3)) };
	fVar92[1] = 88f;
	Var0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	Var46[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam3)) };
	fVar92[2] = 88f;
	Var0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	Var46[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam3)) };
	fVar92[3] = 88f;
	Var0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var46[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam3)) };
	fVar92[4] = 9f;
	Var0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var46[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam3)) };
	fVar92[5] = 9.5f;
	Var0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	Var46[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam3)) };
	fVar92[6] = 9.5f;
	Var0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	Var46[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[7] = 9.5f;
	Var0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	Var46[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[8] = 9.5f;
	Var0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	Var46[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam3)) };
	fVar92[9] = 9.5f;
	Var0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	Var46[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam3)) };
	fVar92[10] = 9.5f;
	Var0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	Var46[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam3)) };
	fVar92[11] = 9.5f;
	Var0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	Var46[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam3)) };
	fVar92[12] = 9.5f;
	iVar108 = 13;
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}







bool func_16(int iParam0)//Position - 0x155D
{
	return MISC::IS_BIT_SET(Global_1573334, iParam0);
}

int func_17()//Position - 0x156F
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_58())
		{
			iVar0 = 1;
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_18()//Position - 0x1597
{
	int iVar0;
	
	switch (Local_332.f_6)
	{
		case 0:
			func_57();
			if (GlobalFunc_6722(PLAYER::PLAYER_ID(), 1) && GlobalFunc_895())
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), 1);
			}
			GlobalFunc_5211(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/]), 1);
			Local_332.f_176 = 1;
			Local_332.f_6 = 1;
			break;
		
		case 1:
			if (func_50())
			{
				GlobalFunc_5211(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/]), 2);
				Local_332.f_6 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_747(Local_48.f_20, 1))
			{
				Local_332.f_6 = 3;
			}
			break;
		
		case 3:
			if (!GlobalFunc_6722(PLAYER::PLAYER_ID(), 1) && !GlobalFunc_895())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_26(iVar0);
					iVar0++;
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_19(iVar0);
				iVar0++;
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_332.f_6 = 4;
			}
			break;
		
		case 4:
			if (GlobalFunc_6722(PLAYER::PLAYER_ID(), 1) && GlobalFunc_895())
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_19(int iParam0)//Position - 0x16D4
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (Local_48.f_3[iParam0 /*5*/].f_2 > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/]))
	{
		if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_48.f_3[iParam0 /*5*/])))
		{
			if (HUD::DOES_BLIP_EXIST(Local_332.f_172[iParam0]))
			{
				HUD::REMOVE_BLIP(&(Local_332.f_172[iParam0]));
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(Local_332.f_172[iParam0]) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 2)
		{
			Local_332.f_172[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_48.f_3[iParam0 /*5*/]));
			HUD::SET_BLIP_COLOUR(Local_332.f_172[iParam0], 1);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_332.f_172[iParam0]))
	{
		HUD::REMOVE_BLIP(&(Local_332.f_172[iParam0]));
	}
	switch (Local_48.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0] = 0;
				GlobalFunc_812(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 4)
						{
							if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 500, 0))
							{
								GlobalFunc_812(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 2))
			{
				if (func_23(iParam0))
				{
					uVar2 = PLAYER::GET_PLAYER_PED(Local_48.f_3[iParam0 /*5*/].f_4);
					uVar0 = NETWORK::NET_TO_PED(Local_48.f_3[iParam0 /*5*/].f_1);
					uVar1 = NETWORK::NET_TO_VEH(Local_48.f_3[iParam0 /*5*/]);
					if (!ENTITY::IS_ENTITY_DEAD(uVar2))
					{
						if (PED::IS_PED_IN_ANY_PLANE(uVar2))
						{
							uVar3 = PED::GET_VEHICLE_PED_IS_IN(uVar2, 0);
							if ((!ENTITY::IS_ENTITY_DEAD(uVar0) && !ENTITY::IS_ENTITY_DEAD(uVar1)) && !ENTITY::IS_ENTITY_DEAD(uVar3))
							{
								TASK::TASK_PLANE_MISSION(uVar0, uVar1, uVar3, uVar2, ENTITY::GET_ENTITY_COORDS(uVar2, 1), 6, 70f, -1f, 30f, 500, 50);
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uVar0, joaat("vehicle_weapon_space_rocket"));
								PED::SET_PED_CAN_SWITCH_WEAPON(uVar0, 0);
							}
						}
					}
				}
				if (func_22(iParam0))
				{
					uVar0 = NETWORK::NET_TO_PED(Local_48.f_3[iParam0 /*5*/].f_1);
					iVar2 = PLAYER::GET_PLAYER_PED(Local_48.f_3[iParam0 /*5*/].f_4);
					if (!ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						if (PED::IS_PED_IN_ANY_PLANE(iVar2))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(uVar0, iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, 1));
						}
					}
				}
				if (func_21(iParam0, 6))
				{
					GlobalFunc_812(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 8))
			{
				if (func_23(iParam0))
				{
					uVar0 = NETWORK::NET_TO_PED(Local_48.f_3[iParam0 /*5*/].f_1);
					uVar1 = NETWORK::NET_TO_VEH(Local_48.f_3[iParam0 /*5*/]);
					if (!ENTITY::IS_ENTITY_DEAD(uVar0) && !ENTITY::IS_ENTITY_DEAD(uVar1))
					{
						TASK::TASK_PLANE_MISSION(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50);
					}
				}
				if (func_21(iParam0, 9))
				{
					GlobalFunc_812(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_48.f_3[iParam0 /*5*/]) || NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_48.f_3[iParam0 /*5*/].f_1))
			{
				if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_48.f_3[iParam0 /*5*/]), 0), 10f) && !NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_48.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/].f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_48.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = NETWORK::NET_TO_ENT(Local_48.f_3[iParam0 /*5*/].f_1);
						ENTITY::DELETE_ENTITY(&uVar4);
					}
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_48.f_3[iParam0 /*5*/]))
					{
						uVar5 = NETWORK::NET_TO_ENT(Local_48.f_3[iParam0 /*5*/]);
						ENTITY::DELETE_ENTITY(&uVar5);
					}
				}
			}
			else if (GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				GlobalFunc_811(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}


int func_21(int iParam0, int iParam1)//Position - 0x1B6B
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	uVar0 = NETWORK::NET_TO_VEH(Local_48.f_3[iParam0 /*5*/]);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 1;
	}
	if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_22(int iParam0)//Position - 0x1BB2
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	uVar0 = NETWORK::NET_TO_PED(Local_48.f_3[iParam0 /*5*/].f_1);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_23(int iParam0)//Position - 0x1BFC
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	uVar0 = NETWORK::NET_TO_VEH(Local_48.f_3[iParam0 /*5*/]);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}



void func_26(int iParam0)//Position - 0x1C62
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48[iParam0]))
	{
		return;
	}
	uVar0 = NETWORK::NET_TO_PED(Local_48[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return;
	}
	switch (Local_48.f_21[iParam0])
	{
		case 0:
			if (!GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 64))
			{
				Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0] = 0;
				GlobalFunc_812(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f)
					{
						GlobalFunc_812(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 2) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f)
			{
				GlobalFunc_878(&(Local_332.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				GlobalFunc_10645(&(Local_332.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				GlobalFunc_812(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_30(iParam0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, func_29(iParam0), -1, 0);
				}
				if (func_28(iParam0, 1630799643))
				{
					GlobalFunc_812(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 8) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				if (!GlobalFunc_226(&Local_332))
				{
					GlobalFunc_7777(&Local_332);
				}
				if (GlobalFunc_5182(&Local_332) >= 7f)
				{
					GlobalFunc_812(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 8);
					GlobalFunc_10645(&(Local_332.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (GlobalFunc_226(&Local_332))
			{
				GlobalFunc_235(&Local_332);
			}
			if (!GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_27(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f)
				{
					GlobalFunc_812(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
				}
			}
			if (GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) > 900f)
					{
						GlobalFunc_811(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_27(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 900f)
				{
					GlobalFunc_812(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
				}
			}
			if (GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) > 900f)
					{
						GlobalFunc_811(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_28(iParam0, 1630799643))
			{
				if (func_30(iParam0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, func_29(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (GlobalFunc_747(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_30(iParam0))
				{
					TASK::CLEAR_PED_TASKS(iVar0);
				}
				if (!func_28(iParam0, 1435919172))
				{
					GlobalFunc_811(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
					GlobalFunc_811(&(Local_75[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_27(int iParam0)//Position - 0x20CC
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48[iParam0]))
	{
		return 0;
	}
	uVar0 = NETWORK::NET_TO_PED(Local_48[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, int iParam1)//Position - 0x2161
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48[iParam0]))
	{
		return 1;
	}
	uVar0 = NETWORK::NET_TO_PED(Local_48[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

var func_29(int iParam0)//Position - 0x21B5
{
	int iVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			uVar2 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!ENTITY::IS_ENTITY_DEAD(uVar2))
			{
				fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar2, 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_48[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					uVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return uVar1;
}

int func_30(int iParam0)//Position - 0x222E
{
	var uVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48[iParam0]))
	{
		return 0;
	}
	uVar0 = NETWORK::NET_TO_PED(Local_48[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}




















int func_50()//Position - 0x2B31
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("lazer")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}







void func_57()//Position - 0x2BFE
{
	STREAMING::REQUEST_MODEL(joaat("s_m_y_marine_01"));
	STREAMING::REQUEST_MODEL(joaat("lazer"));
	STREAMING::REQUEST_MODEL(joaat("s_m_y_pilot_01"));
}

int func_58()//Position - 0x2C21
{
	int iVar0;
	
	switch (Local_48.f_19)
	{
		case 0:
			if (func_78())
			{
				Local_48.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_77())
			{
				Local_48.f_19 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_6722(PLAYER::PLAYER_ID(), 1) || GlobalFunc_895())
			{
				GlobalFunc_5211(&(Local_48.f_20), 1);
				Local_48.f_19 = 3;
			}
			else if (func_75())
			{
				GlobalFunc_5211(&(Local_48.f_20), 1);
				Local_48.f_19 = 3;
			}
			break;
		
		case 3:
			if (!GlobalFunc_6722(PLAYER::PLAYER_ID(), 1) && !GlobalFunc_895())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_72(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_61(iVar0);
					iVar0++;
				}
			}
			if (func_60())
			{
				Local_48.f_19 = 4;
			}
			break;
		
		case 4:
			func_59();
			return 1;
			break;
	}
	return 0;
}

void func_59()//Position - 0x2D0F
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48[iVar0]))
		{
			uVar1 = NETWORK::NET_TO_PED(Local_48[iVar0]);
			if (!ENTITY::IS_ENTITY_DEAD(uVar1))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_48.f_3[iVar0 /*5*/].f_1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iVar0 /*5*/]))
		{
			uVar2 = NETWORK::NET_TO_VEH(Local_48.f_3[iVar0 /*5*/]);
			if (!ENTITY::IS_ENTITY_DEAD(uVar2))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
			}
		}
		iVar0++;
	}
}

int func_60()//Position - 0x2DC2
{
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_61(int iParam0)//Position - 0x2E03
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	struct<3> Var5;
	var uVar8;
	
	if (Local_48.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/].f_1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_48.f_3[iParam0 /*5*/].f_1)))
			{
				uVar0 = NETWORK::NET_TO_PED(Local_48.f_3[iParam0 /*5*/].f_1);
				Var1 = { ENTITY::GET_ENTITY_COORDS(uVar0, 1) };
				if (Var1.f_2 <= -150f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam0 /*5*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_48.f_3[iParam0 /*5*/])))
						{
							uVar4 = NETWORK::NET_TO_VEH(Local_48.f_3[iParam0 /*5*/]);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
	switch (Local_48.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_71(iParam0, 16))
			{
				Local_48.f_3[iParam0 /*5*/].f_4 = -1;
				Local_48.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_69(iParam0))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			Var5 = { func_68(iParam0) };
			if (!GlobalFunc_105(Var5))
			{
				if (!NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(Var5, 20f) && !CAM::IS_SPHERE_VISIBLE(Var5, 20f))
				{
					if (func_64(Var5, ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(Local_48.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_48.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_71(iParam0, 2))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			uVar8 = PLAYER::GET_PLAYER_PED(Local_48.f_3[iParam0 /*5*/].f_4);
			if (!ENTITY::DOES_ENTITY_EXIST(uVar8))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (ENTITY::IS_ENTITY_DEAD(uVar8))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (PED::IS_PED_IN_ANY_PLANE(iVar8) || PED::IS_PED_IN_ANY_HELI(iVar8))
			{
				if (func_63(PED::GET_VEHICLE_PED_IS_IN(iVar8, 0)))
				{
					Local_48.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_71(iParam0, 8))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 6;
				Local_48.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_62(iParam0, 16))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_69(iParam0))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_62(int iParam0, int iParam1)//Position - 0x305A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (GlobalFunc_747(Local_75[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x309E
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_64(struct<3> Param0, var uParam3, int iParam4)//Position - 0x30E0
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam4 /*5*/]))
	{
		if (!GlobalFunc_913(&(Local_48.f_3[iParam4 /*5*/]), joaat("lazer"), Param0, uParam3, 1, 1, 1, 0, 1, 1))
		{
			iVar0 = 0;
		}
		else
		{
			VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_48.f_3[iParam4 /*5*/]), 3);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam4 /*5*/]))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48.f_3[iParam4 /*5*/].f_1))
		{
			if (!GlobalFunc_912(&(Local_48.f_3[iParam4 /*5*/].f_1), Local_48.f_3[iParam4 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(NETWORK::NET_TO_PED(Local_48.f_3[iParam4 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				PED::SET_PED_CAN_SWITCH_WEAPON(NETWORK::NET_TO_PED(Local_48.f_3[iParam4 /*5*/].f_1), 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}




Vector3 func_68(int iParam0)//Position - 0x32F9
{
	var uVar0;
	struct<3> Var1;
	
	uVar0 = PLAYER::GET_PLAYER_PED(Local_48.f_3[iParam0 /*5*/].f_4);
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 0f, 0f, 0f;
	}
	Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, 1), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -250f, (40f * SYSTEM::TO_FLOAT(iParam0))) };
	if (Var1.f_2 < 100f)
	{
		Var1.f_2 = 100f;
	}
	return Var1;
}

int func_69(int iParam0)//Position - 0x3361
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			uVar1 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!func_70(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))))
			{
				if (PED::IS_PED_IN_ANY_PLANE(uVar1) || PED::IS_PED_IN_ANY_HELI(iVar1))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))) >= 4)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 0) };
						if (GlobalFunc_877(Var2, 3, 1000, 0) && Var2.f_2 > 90f)
						{
							Local_48.f_3[iParam0 /*5*/].f_4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x3417
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(uVar0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uVar2 = PLAYER::GET_PLAYER_PED(Local_48.f_3[iVar1 /*5*/].f_4);
		if (ENTITY::DOES_ENTITY_EXIST(uVar2))
		{
			if (iParam0 == Local_48.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_71(int iParam0, int iParam1)//Position - 0x3481
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!GlobalFunc_747(Local_75[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_72(int iParam0)//Position - 0x34C6
{
	switch (Local_48.f_21[iParam0])
	{
		case 0:
			if (func_74(iParam0, 64))
			{
				Local_48.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_73(iParam0, 1))
			{
				Local_48.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_73(iParam0, 2))
			{
				Local_48.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_74(iParam0, 4))
			{
				Local_48.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_73(iParam0, 8))
			{
				Local_48.f_21[iParam0] = 5;
			}
			if (!func_73(iParam0, 1))
			{
				Local_48.f_21[iParam0] = 7;
			}
			if (func_73(iParam0, 16))
			{
				Local_48.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_73(iParam0, 16))
			{
				Local_48.f_21[iParam0] = 6;
			}
			if (!func_73(iParam0, 1))
			{
				Local_48.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_73(iParam0, 4))
			{
				Local_48.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_73(int iParam0, int iParam1)//Position - 0x35E8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (GlobalFunc_747(Local_75[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0, int iParam1)//Position - 0x362C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!GlobalFunc_747(Local_75[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_75()//Position - 0x3671
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_76(&(Local_48[0]), 29, joaat("s_m_y_marine_01"), -2295.587f, 3377.288f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48[0]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_48[0]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	if (!func_76(&(Local_48[1]), 29, joaat("s_m_y_marine_01"), -1597.432f, 2808.987f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_48[1]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_48[1]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	return iVar0;
}

int func_76(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x3730
{
	var uVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	uVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, iParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(uVar0, iParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_77()//Position - 0x378F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!GlobalFunc_747(Local_75[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_78()//Position - 0x37D0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!GlobalFunc_747(Local_75[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}












void func_90()//Position - 0x3AA7
{
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false) != 5)
	{
		if (GlobalFunc_6841(5, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(0) <= 5)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false) != 3)
	{
		if (GlobalFunc_6842(3, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(0) <= 3)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
			}
		}
	}
}









void func_99()//Position - 0x3D46
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_60())
			{
				func_59();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(Local_332.f_172[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_332.f_172[iVar0]));
		}
		iVar0++;
	}
	func_101();
	GlobalFunc_491();
}


void func_101()//Position - 0x3DAA
{
	if (!Local_332.f_176)
	{
		return;
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_marine_01"));
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("lazer")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_pilot_01"));
	}
}

void func_102(struct<20> Param0)//Position - 0x3DFD
{
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_48, 27);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_75, 257);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!GlobalFunc_5091())
	{
		func_99();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_99();
	}
}






