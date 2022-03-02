#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
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
	struct<3> Local_42 = { 0, 0, 0 } ;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<5> Local_48[8];
	struct<4> Local_89[8];
	struct<3> Local_122 = { 0, 0, 0 } ;
	struct<3> Local_125 = { 0, 0, 0 } ;
	struct<3> Local_128 = { 0, 0, 0 } ;
	struct<3> Local_131 = { 0, 0, 0 } ;
	struct<3> Local_134 = { 0, 0, 0 } ;
	struct<3> Local_137 = { 0, 0, 0 } ;
	struct<3> Local_140 = { 0, 0, 0 } ;
	var uLocal_143 = 0;
	struct<3> Local_144 = { 0, 0, 0 } ;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	float fLocal_163 = 0f;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
	int iLocal_172 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_122 = { 0f, 0f, 0f };
	Local_128 = { 1064.871f, 2670.857f, 38.5511f };
	Local_131 = { 926.3422f, 2708.926f, 39.5394f };
	Local_134 = { 1140.03f, 2698.027f, 37.1568f };
	Local_137 = { Local_122 };
	fLocal_163 = 0f;
	iLocal_164 = joaat("dukes2");
	iLocal_165 = joaat("phantom");
	iLocal_166 = joaat("trailers2");
	iLocal_167 = joaat("rancherxl");
	iLocal_168 = joaat("a_m_m_hillbilly_01");
	iLocal_169 = joaat("a_m_m_hillbilly_02");
	iLocal_172 = 3;
	Local_125 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (GlobalFunc_115(Local_89[0 /*4*/]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_89[0 /*4*/], 2);
		}
		func_193(1, 0);
	}
	if (func_151(Local_125, 31, 0, 0, 0))
	{
		func_148(31);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || func_147(1)) || iLocal_154 > 2)
		{
			if (func_147(13))
			{
				func_116();
			}
			switch (iLocal_46)
			{
				case 0:
					func_54();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (GlobalFunc_115(Local_89[0 /*4*/]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_89[0 /*4*/], 2);
			}
			func_193(1, 0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1AA
{
	switch (iLocal_47)
	{
		case 0:
			iLocal_47 = 1;
			break;
		
		case 1:
			switch (iLocal_154)
			{
				case 0:
					iLocal_47 = 2;
					break;
			}
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()//Position - 0x1EE
{
	GlobalFunc_4927(64, 1);
	GlobalFunc_4927(65, 1);
	GlobalFunc_8526(Local_89[0 /*4*/], 145);
	func_6(-1, 0);
	GlobalFunc_7068();
	func_193(1, 0);
}




void func_6(int iParam0, int iParam1)//Position - 0x2A2
{
	if (iParam0 == -1)
	{
		iParam0 = GlobalFunc_5213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= GlobalFunc_818(iParam0))
	{
		GlobalFunc_4704(iParam0, iParam1);
		if (!GlobalFunc_63(51))
		{
			GlobalFunc_6677("RE_REWARD", 1, 0, 4000, 10000, GlobalFunc_8546(), 0, 138, 0);
			GlobalFunc_651(51);
		}
		if (GlobalFunc_827(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (GlobalFunc_4703(iParam0, iParam1) != 322)
		{
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_42.x, Local_42.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				GlobalFunc_4702(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				GlobalFunc_4702(7);
			}
			else
			{
				GlobalFunc_4702(1);
			}
		}
	}
}
















































void func_54()//Position - 0x281C
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	
	switch (iLocal_47)
	{
		case 0:
			func_105();
			func_104(13);
			STREAMING::REQUEST_MODEL(iLocal_164);
			iLocal_47 = 1;
			break;
		
		case 1:
			switch (iLocal_154)
			{
				case 0:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_164))
					{
						func_100(0, Local_122, -1f, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_164);
						STREAMING::REQUEST_MODEL(iLocal_165);
						STREAMING::REQUEST_MODEL(iLocal_168);
						STREAMING::REQUEST_MODEL(iLocal_166);
						GlobalFunc_9034(1);
						iLocal_154++;
					}
					break;
				
				case 1:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_165) && STREAMING::HAS_MODEL_LOADED(iLocal_168)) && STREAMING::HAS_MODEL_LOADED(iLocal_166))
					{
						func_104(9);
						iLocal_154++;
					}
					break;
				
				case 2:
					if ((GlobalFunc_115(Local_89[3 /*4*/]) && GlobalFunc_115(Local_48[0 /*5*/])) && func_89())
					{
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_89[3 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
						if (Var0.x <= 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 953.5052f, 2665.587f, 38.61237f, 955.0941f, 2716.872f, 50.67046f, 71f, 0, 1, 0))
						{
							if ((((func_88(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_89[3 /*4*/], 0f, 10f, 0f), 1.25f) || func_88(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_89[3 /*4*/], 0f, 12.5f, 0f), 1.5f)) || func_88(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_89[3 /*4*/], 0f, 15f, 0f), 1.75f)) || func_88(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_89[3 /*4*/], 0f, 17.5f, 0f), 2f)) || func_88(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_89[3 /*4*/], 0f, 20f, 0f), 2.25f))
							{
								func_83(3, 0, 4, 1);
								iLocal_154 = 4;
							}
						}
					}
					if (((!func_147(8) && GlobalFunc_115(Local_89[4 /*4*/])) && GlobalFunc_115(Local_48[1 /*5*/])) && func_89())
					{
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_89[4 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
						if (Var0.x >= 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.712f, 2695.67f, 36.77993f, 1109.166f, 2665.531f, 48.50355f, 71f, 0, 1, 0))
						{
							if ((((func_88(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_89[4 /*4*/], 0f, 10f, 0f), 1.5f) || func_88(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_89[4 /*4*/], 0f, 12.5f, 0f), 1.75f)) || func_88(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_89[4 /*4*/], 0f, 15f, 0f), 2f)) || func_88(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_89[4 /*4*/], 0f, 17.5f, 0f), 2.25f)) || func_88(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_89[4 /*4*/], 0f, 20f, 0f), 2.5f))
							{
								func_83(4, 1, 3, 0);
								iLocal_154 = 4;
							}
						}
					}
					if (!func_147(8) && func_81())
					{
						func_104(6);
						if (GlobalFunc_115(Local_48[0 /*5*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[0 /*5*/], 0);
							TASK::TASK_COMBAT_PED(Local_48[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_48[0 /*5*/].f_3 = 3;
						}
						if (GlobalFunc_115(Local_48[1 /*5*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[1 /*5*/], 0);
							TASK::TASK_COMBAT_PED(Local_48[1 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_48[1 /*5*/].f_3 = 3;
						}
						if (GlobalFunc_115(Local_89[3 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_89[3 /*4*/], 1);
						}
						if (GlobalFunc_115(Local_89[4 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_89[4 /*4*/], 1);
						}
						iLocal_154++;
					}
					break;
				
				case 3:
					if ((!GlobalFunc_115(Local_48[0 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_48[0 /*5*/].f_1)) && (!GlobalFunc_115(Local_48[1 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_48[1 /*5*/].f_1)))
					{
						iLocal_154++;
					}
					break;
				
				case 4:
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_170);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_170, 1862763509);
					if (GlobalFunc_115(Local_89[3 /*4*/]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_89[3 /*4*/], 1);
					}
					if (GlobalFunc_115(Local_89[4 /*4*/]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_89[4 /*4*/], 1);
					}
					STREAMING::REQUEST_MODEL(iLocal_167);
					SYSTEM::SETTIMERA(0);
					iLocal_154++;
					break;
				
				case 5:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_167))
					{
						STREAMING::REQUEST_MODEL(iLocal_168);
						iLocal_154++;
					}
					break;
				
				case 6:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_168))
					{
						STREAMING::REQUEST_MODEL(iLocal_169);
						iLocal_154++;
					}
					break;
				
				case 7:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_167) && STREAMING::HAS_MODEL_LOADED(iLocal_168)) && STREAMING::HAS_MODEL_LOADED(iLocal_169))
					{
						func_100(5, Local_122, -1082130432, 0);
						func_100(6, Local_122, -1082130432, 0);
						func_100(7, Local_122, -1082130432, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167);
						func_76(2, 0, Local_122, -1082130432);
						func_76(3, 0, Local_122, -1082130432);
						func_76(4, 0, Local_122, -1082130432);
						func_76(5, 0, Local_122, -1082130432);
						func_76(6, 0, Local_122, -1082130432);
						func_76(7, 0, Local_122, -1082130432);
						if (func_147(10) && func_147(11))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_168);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_169);
						iLocal_154++;
					}
					break;
				
				case 8:
					if (!GlobalFunc_115(Local_48[0 /*5*/]) && !GlobalFunc_115(Local_48[1 /*5*/]))
					{
						if (SYSTEM::TIMERA() < 16000)
						{
							SYSTEM::SETTIMERA(16000);
						}
					}
					if (SYSTEM::TIMERA() > 20000 && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_128, 1) >= 150f)
					{
						iLocal_154++;
					}
					break;
				
				case 9:
					if (func_89() || (GlobalFunc_115(Local_89[0 /*4*/]) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_89[0 /*4*/], 1) <= 35f))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						uVar15 = MISC::GET_RANDOM_INT_IN_RANGE(6, 10);
						if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Var3, uVar15, &Var6, 1, 5f, 0))
						{
							PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var6, &uVar17, &uVar18);
							if (((uVar18 & 4 == 0 && (!func_73() || uVar18 & 8 == 0)) && (func_72() || uVar18 & 1 == 0)) && !func_71(Var6, 1084227584))
							{
								uVar16 = GlobalFunc_830(Var6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
								Var9 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var6, uVar16, 6f, -6f, 0f) };
								Var12 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var6, uVar16, -6f, -6f, 0f) };
								if ((((!CAM::IS_SPHERE_VISIBLE(Var6, 7f) && !CAM::IS_SPHERE_VISIBLE(Var9, 7f)) && !CAM::IS_SPHERE_VISIBLE(Var12, 7f)) && !func_71(Var9, 1084227584)) && !func_71(Var12, 1084227584))
								{
									func_69(Local_89[5 /*4*/], Var6);
									func_69(Local_89[6 /*4*/], Var9);
									func_69(Local_89[7 /*4*/], Var12);
									iLocal_148 = MISC::GET_GAME_TIMER();
									iVar19 = 2;
									while (iVar19 <= 7)
									{
										if (GlobalFunc_115(Local_48[iVar19 /*5*/]))
										{
											Local_48[iVar19 /*5*/].f_1 = GlobalFunc_6829(Local_48[iVar19 /*5*/], 1, 145);
											if (PED::IS_PED_IN_ANY_VEHICLE(Local_48[iVar19 /*5*/], 0))
											{
												if (GlobalFunc_708(Local_48[iVar19 /*5*/]) == -1)
												{
													HUD::SET_BLIP_SCALE(Local_48[iVar19 /*5*/].f_1, 1f);
												}
												else
												{
													HUD::SET_BLIP_ALPHA(Local_48[iVar19 /*5*/].f_1, 0);
													HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_48[iVar19 /*5*/].f_1, 1);
												}
											}
										}
										iVar19++;
									}
									func_104(2);
									func_104(7);
									iLocal_158 = (MISC::GET_GAME_TIMER() + 60000);
									func_64(6);
									iLocal_154++;
								}
							}
						}
					}
					break;
				
				case 10:
					if (((((GlobalFunc_115(Local_48[2 /*5*/]) || GlobalFunc_115(Local_48[3 /*5*/])) || GlobalFunc_115(Local_48[4 /*5*/])) || GlobalFunc_115(Local_48[5 /*5*/])) || GlobalFunc_115(Local_48[6 /*5*/])) || GlobalFunc_115(Local_48[7 /*5*/]))
					{
						if (func_147(7))
						{
							if (GlobalFunc_115(Local_89[5 /*4*/]))
							{
								func_57(5, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_149);
							}
							if (GlobalFunc_115(Local_89[6 /*4*/]))
							{
								func_57(6, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_150);
							}
							if (GlobalFunc_115(Local_89[7 /*4*/]))
							{
								func_57(7, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_151);
							}
						}
					}
					else if (!GlobalFunc_115(Local_48[0 /*5*/]) && !GlobalFunc_115(Local_48[1 /*5*/]))
					{
						if (GlobalFunc_115(Local_89[0 /*4*/]))
						{
							iLocal_47 = 2;
						}
						else
						{
							func_56();
						}
					}
					break;
			}
			break;
		
		case 2:
			func_55(1);
			break;
	}
}

void func_55(int iParam0)//Position - 0x30E0
{
	iLocal_154 = 0;
	iLocal_47 = 0;
	iLocal_46 = iParam0;
}

void func_56()//Position - 0x30F2
{
	if (GlobalFunc_115(Local_89[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_89[0 /*4*/], 2);
	}
	func_193(1, 0);
}

void func_57(int iParam0, int iParam1, var uParam2)//Position - 0x3116
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_89[iParam0 /*4*/], 0))
	{
		if ((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && Local_89[iParam0 /*4*/] != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && func_63(Local_89[iParam0 /*4*/]))
		{
			if (iParam0 == 3 || iParam0 == 4)
			{
				fVar0 = 50f;
				fVar1 = 35f;
				iVar2 = 1500;
			}
			else
			{
				fVar0 = 75f;
				fVar1 = 50f;
				iVar2 = 3000;
			}
			if (GlobalFunc_713(iParam1, Local_140, 1) >= fVar0 && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1))
			{
				Local_144 = { Local_140 };
				uLocal_147 = uLocal_143;
				Local_140 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
				uLocal_143 = ENTITY::GET_ENTITY_HEADING(iParam1);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(Local_89[iParam0 /*4*/]))
			{
				*uParam2 = MISC::GET_GAME_TIMER();
			}
			else if (((((((((((MISC::GET_GAME_TIMER() - *uParam2) > iVar2 && (MISC::GET_GAME_TIMER() - iLocal_148) > 1500) && GlobalFunc_156(Local_89[iParam0 /*4*/], iParam1, 1) > GlobalFunc_713(iParam1, Local_144, 1)) && func_62(iParam0)) && GlobalFunc_713(iParam1, Local_144, 1) >= fVar0) && GlobalFunc_156(Local_89[iParam0 /*4*/], iParam1, 1) >= fVar1) && func_61(Local_89[iParam0 /*4*/], Local_144, 1153138688)) && func_60(Local_89[iParam0 /*4*/], iParam1, Local_144)) && !GlobalFunc_105(Local_144)) && !CAM::IS_SPHERE_VISIBLE(Local_144, 4f)) && !func_71(Local_144, 1084227584))
			{
				MISC::CLEAR_AREA_OF_PEDS(Local_144, 1.5f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_144, 5f, 0, 0, 0, 0, 0);
				if (iParam0 == 3 || iParam0 == 4)
				{
					VEHICLE::DETACH_VEHICLE_FROM_TRAILER(Local_89[iParam0 /*4*/]);
					if (iParam0 == 3)
					{
						func_58(0, 3);
					}
					else
					{
						func_58(1, 3);
					}
				}
				ENTITY::SET_ENTITY_COORDS(Local_89[iParam0 /*4*/], Local_144, 1, 0, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_89[iParam0 /*4*/]);
				ENTITY::SET_ENTITY_HEADING(Local_89[iParam0 /*4*/], uLocal_147);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_89[iParam0 /*4*/], 1, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_89[iParam0 /*4*/], (ENTITY::GET_ENTITY_SPEED(iParam1) * 1.2f));
				*uParam2 = MISC::GET_GAME_TIMER();
				Local_89[iParam0 /*4*/].f_2 = MISC::GET_GAME_TIMER();
				iLocal_148 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			*uParam2 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_58(int iParam0, int iParam1)//Position - 0x33A5
{
	MISC::SET_BIT(&(Local_48[iParam0 /*5*/].f_2), iParam1);
}


int func_60(int iParam0, int iParam1, struct<3> Param2)//Position - 0x33E5
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, Param2) };
	if ((Var0.f_1 > 0f && Var3.f_1 > 0f) || (Var0.f_1 < 0f && Var3.f_1 < 0f))
	{
		return 1;
	}
	if (iParam0 == Local_89[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_48[0 /*5*/].f_1))
	{
		return 1;
	}
	if (iParam0 == Local_89[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_48[1 /*5*/].f_1))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, struct<3> Param1, float fParam4)//Position - 0x347C
{
	if (GlobalFunc_713(iParam0, Param1, 1) <= fParam4)
	{
		return 1;
	}
	if (iParam0 == Local_89[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_48[0 /*5*/].f_1))
	{
		return 1;
	}
	if (iParam0 == Local_89[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_48[1 /*5*/].f_1))
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x34DA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	
	if (func_147(6))
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 5;
	}
	if (func_147(7))
	{
		iVar1 = 7;
	}
	else if (func_147(6))
	{
		iVar1 = 4;
	}
	else
	{
		iVar1 = 5;
	}
	iVar3 = -1;
	fVar5 = -1f;
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (GlobalFunc_115(Local_89[iVar2 /*4*/]))
		{
			if (IntToFloat(iVar3) == -1f || (MISC::GET_GAME_TIMER() - Local_89[iVar2 /*4*/].f_2) > iVar3)
			{
				iVar3 = (MISC::GET_GAME_TIMER() - Local_89[iVar2 /*4*/].f_2);
				iVar4 = iVar2;
			}
			if (fVar5 == -1f || GlobalFunc_156(Local_89[iVar2 /*4*/], PLAYER::PLAYER_PED_ID(), 1) > fVar5)
			{
				fVar5 = GlobalFunc_156(Local_89[iVar2 /*4*/], PLAYER::PLAYER_PED_ID(), 1);
				iVar6 = iVar2;
			}
		}
		iVar2++;
	}
	if (iParam0 == iVar4 || iParam0 == iVar6)
	{
		return 1;
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x35B9
{
	var uVar0;
	
	if (GlobalFunc_115(uParam0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0, -1))
	{
		uVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (GlobalFunc_115(uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_64(int iParam0)//Position - 0x35EE
{
	MISC::CLEAR_BIT(&iLocal_155, iParam0);
}





void func_69(int iParam0, struct<3> Param1)//Position - 0x3788
{
	if (GlobalFunc_115(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, 0);
		MISC::CLEAR_AREA_OF_PEDS(Param1, 1.5f, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(Param1, 3f, 0, 0, 0, 0, 0);
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, 1, 0, 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
		ENTITY::SET_ENTITY_HEADING(iParam0, GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)));
		if (GlobalFunc_115(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1)))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				TASK::TASK_VEHICLE_CHASE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1), PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1), iParam0, PLAYER::PLAYER_PED_ID(), 2, 100f, 786469, -1f, -1f, 1);
			}
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 1.2f));
	}
}


int func_71(struct<3> Param0, float fParam3)//Position - 0x3863
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_89[iVar1 /*4*/]) && ENTITY::IS_ENTITY_AT_COORD(Local_89[iVar1 /*4*/], Param0, fParam3, fParam3, fParam3, 0, 1, 0))
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

int func_72()//Position - 0x38AF
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Var0, 1, 1077936128, 0))
	{
		if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var0, &uVar4, &uVar3))
		{
			return uVar3 & 1 == 1;
		}
	}
	return 0;
}

int func_73()//Position - 0x38E9
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Var0, 1, 1077936128, 0))
	{
		if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var0, &uVar4, &uVar3))
		{
			return uVar3 & 8 == 0;
		}
	}
	return 0;
}



int func_76(int iParam0, bool bParam1, struct<3> Param2, float fParam5)//Position - 0x39B9
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	bool bVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	bool bVar48;
	bool bVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	bool bVar54;
	int iVar55;
	int iVar56;
	bool bVar57;
	int iVar58;
	int iVar59;
	bool bVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	bool bVar64;
	bool bVar65;
	int iVar66;
	bool bVar67;
	int iVar68;
	bool bVar69;
	bool bVar70;
	char* sVar71;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_48[iParam0 /*5*/]))
	{
		iVar5 = joaat("weapon_unarmed");
		iVar6 = 0;
		iVar7 = -1;
		Var9 = { Local_122 };
		Var12 = { Local_122 };
		iVar15 = 0;
		iVar16 = 1;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = 10;
		fVar20 = 0f;
		fVar21 = 0f;
		fVar22 = 60f;
		fVar23 = 5f;
		fVar24 = 120f;
		fVar25 = -90f;
		fVar26 = 90f;
		iVar27 = iLocal_170;
		iVar28 = 1;
		iVar29 = 1;
		iVar30 = 0;
		iVar31 = 1;
		iVar32 = 1;
		bVar33 = true;
		iVar34 = 0;
		iVar35 = 1;
		iVar36 = 0;
		iVar37 = 1;
		iVar38 = 1;
		iVar39 = 0;
		bVar40 = false;
		iVar41 = 1;
		iVar42 = 0;
		iVar43 = 1;
		iVar44 = 1;
		iVar45 = 0;
		iVar46 = 1;
		iVar47 = 1;
		bVar48 = true;
		bVar49 = false;
		iVar50 = 0;
		iVar51 = 0;
		iVar52 = 0;
		iVar53 = 0;
		bVar54 = false;
		iVar55 = 1;
		iVar56 = 0;
		bVar57 = false;
		iVar58 = 0;
		iVar59 = 1;
		bVar60 = true;
		iVar61 = 0;
		iVar62 = 0;
		iVar63 = 0;
		bVar64 = false;
		bVar65 = false;
		iVar66 = 0;
		bVar67 = false;
		iVar68 = 1;
		bVar69 = true;
		bVar70 = false;
		switch (iParam0)
		{
			case 0:
				iVar4 = iLocal_168;
				iVar6 = Local_89[3 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar36 = 1;
				bVar33 = false;
				iVar34 = 1;
				bVar70 = true;
				break;
			
			case 1:
				iVar4 = iLocal_168;
				iVar6 = Local_89[4 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar36 = 1;
				bVar33 = false;
				iVar34 = 1;
				bVar70 = true;
				break;
			
			case 2:
				iVar4 = iLocal_169;
				iVar6 = Local_89[5 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar36 = 1;
				bVar33 = false;
				break;
			
			case 3:
				iVar4 = iLocal_168;
				iVar6 = Local_89[5 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("weapon_pistol");
				iVar36 = 1;
				bVar33 = false;
				break;
			
			case 4:
				iVar4 = iLocal_168;
				iVar6 = Local_89[6 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar36 = 1;
				bVar33 = false;
				break;
			
			case 5:
				iVar4 = iLocal_169;
				iVar6 = Local_89[6 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("weapon_pistol");
				iVar36 = 1;
				bVar33 = false;
				break;
			
			case 6:
				iVar4 = iLocal_169;
				iVar6 = Local_89[7 /*4*/];
				iVar5 = joaat("weapon_pistol");
				iVar36 = 1;
				bVar33 = false;
				break;
			
			case 7:
				iVar4 = iLocal_169;
				iVar6 = Local_89[7 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("weapon_pistol");
				iVar36 = 1;
				bVar33 = false;
				break;
			
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar4))
		{
			return 0;
		}
		if (!GlobalFunc_100(Param2, Local_122))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uVar8))
			{
				Var0 = { Param2 };
			}
			else
			{
				Var9 = { Param2 };
			}
		}
		if (fParam5 != -1f)
		{
			fVar3 = fParam5;
		}
		if (GlobalFunc_115(iVar6))
		{
			Local_48[iParam0 /*5*/] = PED::CREATE_PED_INSIDE_VEHICLE(iVar6, 26, iVar4, iVar7, 1, 1);
		}
		else
		{
			Local_48[iParam0 /*5*/] = PED::CREATE_PED(26, iVar4, Var0, fVar3, 1, 1);
			ENTITY::SET_ENTITY_COLLISION(Local_48[iParam0 /*5*/], iVar41, 0);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_48[iParam0 /*5*/], !bVar65, 0);
		}
		if (bVar40)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_48[iParam0 /*5*/], Var0, 0, 0, 1);
		}
		if (bParam1)
		{
			if (iVar27 == iLocal_170)
			{
				Local_48[iParam0 /*5*/].f_1 = GlobalFunc_6829(Local_48[iParam0 /*5*/], 1, 145);
			}
			else
			{
				Local_48[iParam0 /*5*/].f_1 = GlobalFunc_6829(Local_48[iParam0 /*5*/], 0, 145);
			}
		}
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_48[iParam0 /*5*/], iVar59);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*5*/], 213, iVar28);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*5*/], 212, iVar29);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*5*/], iVar30);
		PED::SET_PED_KEEP_TASK(Local_48[iParam0 /*5*/], iVar31);
		PED::SET_PED_DIES_WHEN_INJURED(Local_48[iParam0 /*5*/], iVar32);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*5*/], 188, iVar55);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*5*/], 42, !bVar33);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*5*/], 9, iVar35);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*5*/], 3, iVar37);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*5*/], 342, bVar57);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_48[iParam0 /*5*/], iVar36);
		PED::SET_PED_ARMOUR(Local_48[iParam0 /*5*/], iVar18);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*5*/], 8, iVar39);
		ENTITY::SET_ENTITY_VISIBLE(Local_48[iParam0 /*5*/], iVar38);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_48[iParam0 /*5*/], iVar42);
		WEAPON::GIVE_WEAPON_TO_PED(Local_48[iParam0 /*5*/], iVar5, -1, iVar34, iVar34);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*5*/], 2, iVar43);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*5*/], 1, iVar44);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*5*/], 52, iVar45);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*5*/], 13, iVar68);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_48[iParam0 /*5*/], iVar46);
		PED::SET_PED_CAN_BE_TARGETTED(Local_48[iParam0 /*5*/], iVar47);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*5*/], 118, bVar48);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*5*/], 115, bVar49);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*5*/], 12, iVar50);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*5*/], 36, iVar51);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*5*/], 35, iVar52);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*5*/], 29, iVar53);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*5*/], 185, bVar54);
		PED::SET_PED_TO_LOAD_COVER(Local_48[iParam0 /*5*/], iVar56);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_48[iParam0 /*5*/], 17, iVar62);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_48[iParam0 /*5*/], iVar63);
		AUDIO::STOP_PED_SPEAKING(Local_48[iParam0 /*5*/], iVar58);
		GlobalFunc_4495(Local_48[iParam0 /*5*/], fVar22, fVar23, fVar24, fVar25, fVar26);
		ENTITY::FREEZE_ENTITY_POSITION(Local_48[iParam0 /*5*/], iVar66);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*5*/], 203, bVar67);
		PED::_0xA9B61A329BFDCBEA(Local_48[iParam0 /*5*/], !bVar67);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*5*/], 366, bVar69);
		PED::SET_PED_CONFIG_FLAG(Local_48[iParam0 /*5*/], 134, bVar70);
		if (!bVar60)
		{
			func_58(iParam0, 2);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar71))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(Local_48[iParam0 /*5*/], sVar71, -1, 0);
		}
		if (iVar17 > 0)
		{
			if (iVar17 > ENTITY::GET_ENTITY_MAX_HEALTH(Local_48[iParam0 /*5*/]) || iVar61)
			{
				ENTITY::SET_ENTITY_MAX_HEALTH(Local_48[iParam0 /*5*/], iVar17);
			}
			ENTITY::SET_ENTITY_HEALTH(Local_48[iParam0 /*5*/], iVar17);
		}
		if (iVar19 > 0)
		{
			PED::SET_PED_ACCURACY(Local_48[iParam0 /*5*/], iVar19);
		}
		if (fVar20 > 0f || fVar21 > 0f)
		{
			WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_48[iParam0 /*5*/], fVar20, fVar21);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_48[iParam0 /*5*/], iVar27);
		if (ENTITY::DOES_ENTITY_EXIST(iVar8))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_48[iParam0 /*5*/], iVar8, -1, Var9, Var12, 1, 1, 1, 0, 2, 1);
			PED::SET_PED_CAN_RAGDOLL(Local_48[iParam0 /*5*/], 0);
			func_58(iParam0, 1);
		}
		func_78(iParam0);
		func_77(iParam0);
		if (iVar15 != 0)
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_48[iParam0 /*5*/], iVar5, iVar15);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_48[iParam0 /*5*/], iVar5, 1);
		}
		PED::SET_PED_COMBAT_ABILITY(Local_48[iParam0 /*5*/], iVar16);
		if (bVar64)
		{
			PED::SET_PED_STEALTH_MOVEMENT(Local_48[iParam0 /*5*/], 1, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

void func_77(int iParam0)//Position - 0x3FEE
{
	if (GlobalFunc_115(Local_48[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 2:
				break;
			}
	}
}

void func_78(int iParam0)//Position - 0x4013
{
	if (GlobalFunc_115(Local_48[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 0:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			
			case 1:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 2, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 4, 1, 1, 0);
				break;
			
			case 2:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			
			case 3:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 4, 0, 2, 0);
				break;
			
			case 4:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 2, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 4, 0, 2, 0);
				break;
			
			case 5:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 4, 0, 1, 0);
				break;
			
			case 6:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 0, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 3, 2, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 4, 0, 1, 0);
				break;
			
			case 7:
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 3, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_48[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			}
	}
}



int func_81()//Position - 0x429C
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if ((GlobalFunc_115(Local_48[0 /*5*/]) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_48[0 /*5*/], 1) >= 200f) && (GlobalFunc_115(Local_48[1 /*5*/]) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_48[1 /*5*/], 1) >= 200f))
	{
		return 1;
	}
	if ((func_147(10) && !GlobalFunc_115(Local_48[0 /*5*/])) || (func_147(11) && !GlobalFunc_115(Local_48[1 /*5*/])))
	{
		return 1;
	}
	if ((GlobalFunc_115(Local_48[0 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_48[0 /*5*/], PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_48[0 /*5*/], 0))) || (GlobalFunc_115(Local_48[1 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_48[1 /*5*/], PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_48[1 /*5*/], 0))))
	{
		return 1;
	}
	if ((GlobalFunc_115(Local_89[1 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_89[1 /*4*/], PLAYER::PLAYER_PED_ID(), 1)) || (GlobalFunc_115(Local_89[2 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_89[2 /*4*/], PLAYER::PLAYER_PED_ID(), 1)))
	{
		return 1;
	}
	if (func_82(Local_89[3 /*4*/]) || func_82(Local_89[4 /*4*/]))
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (GlobalFunc_115(iVar0))
	{
		fLocal_163 = ENTITY::GET_ENTITY_SPEED(iVar0);
	}
	else
	{
		fLocal_163 = 0f;
	}
	if (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		uVar2 = PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID());
		iVar1 = uVar2;
		if ((iVar1 == Local_89[3 /*4*/] && GlobalFunc_115(Local_48[0 /*5*/])) || (iVar1 == Local_89[4 /*4*/] && GlobalFunc_115(Local_48[1 /*5*/])))
		{
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0)//Position - 0x4464
{
	int iVar0;
	float fVar1;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (((GlobalFunc_115(iParam0) && GlobalFunc_115(iVar0)) && fLocal_163 != 0f) && fLocal_163 >= 9f)
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iVar0) && fVar1 <= (fLocal_163 * 0.5f))
		{
			return 1;
		}
	}
	return 0;
}

void func_83(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x44C4
{
	func_104(8);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_89[iParam0 /*4*/], 5f);
	Local_48[iParam1 /*5*/].f_1 = GlobalFunc_6829(Local_48[iParam1 /*5*/], 1, 145);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam1 /*5*/], 1);
	func_87();
	TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_89[iParam0 /*4*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_89[iParam0 /*4*/], 0f, 20f, 0f), 30f, 0, 0, 262144, 4f, -1f);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
	TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
	func_86(Local_48[iParam1 /*5*/]);
	GlobalFunc_5122(Local_48[iParam1 /*5*/], "GENERIC_INSULT_HIGH", 13);
	Local_48[iParam1 /*5*/].f_3 = 3;
	if (GlobalFunc_115(Local_89[iParam2 /*4*/]))
	{
		if (iParam0 == 3)
		{
			Local_137 = { 1031.986f, 2693.441f, 38.6861f };
		}
		else
		{
			Local_137 = { 1027.001f, 2686.89f, 37.8987f };
		}
		iLocal_160 = MISC::GET_GAME_TIMER() + 1000;
		if (GlobalFunc_115(Local_48[iParam3 /*5*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam3 /*5*/], 1);
			TASK::TASK_VEHICLE_MISSION(Local_48[iParam3 /*5*/], Local_89[iParam2 /*4*/], Local_89[0 /*4*/], 2, 30f, 262144, -1f, -1f, 1);
		}
		Local_48[iParam3 /*5*/].f_3++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_170);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_170, 1862763509);
}



void func_86(var uParam0)//Position - 0x4810
{
	if (func_147(0))
	{
		TASK::CLOSE_SEQUENCE_TASK(uLocal_171);
		func_64(0);
	}
	TASK::TASK_PERFORM_SEQUENCE(uParam0, uLocal_171);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_171);
}

void func_87()//Position - 0x4839
{
	if (!func_147(0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_171);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_171);
		func_104(0);
	}
}

int func_88(struct<3> Param0, float fParam3)//Position - 0x485B
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	fVar1 = GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Param0, 1);
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	Var5 = { Var2 + ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()) };
	if ((fVar1 / fVar0) <= fParam3 && MISC::GET_DISTANCE_BETWEEN_COORDS(Var5, Param0, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Param0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_89()//Position - 0x48CD
{
	return (GlobalFunc_115(Local_89[0 /*4*/]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_89[0 /*4*/], 0));
}











int func_100(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x4E4F
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	var uVar26;
	struct<3> Var27;
	struct<3> Var30;
	char* sVar33;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_89[iParam0 /*4*/]))
	{
		iVar5 = 0;
		iVar6 = 1;
		iVar7 = 1;
		iVar8 = 0;
		iVar9 = 0;
		iVar10 = 0;
		bVar11 = false;
		bVar12 = true;
		iVar13 = 0;
		iVar14 = 0;
		iVar15 = 0;
		iVar16 = 0;
		iVar17 = 0;
		iVar18 = 1;
		iVar19 = 0;
		iVar20 = 1;
		iVar21 = 0;
		bVar22 = false;
		fVar24 = -1f;
		fVar25 = -1f;
		switch (iParam0)
		{
			case 0:
				Var0 = { Local_128 };
				fVar3 = 89.7263f;
				iVar4 = iLocal_164;
				bVar12 = false;
				iVar17 = 1;
				iVar18 = 0;
				iVar21 = 1;
				iVar8 = 1;
				iVar20 = 0;
				iVar5 = 7;
				break;
			
			case 3:
				Var0 = { Local_131 };
				fVar3 = 175.3714f;
				iVar4 = iLocal_165;
				iVar10 = 1;
				iVar17 = 1;
				iVar18 = 0;
				sVar33 = "96NWO218";
				iVar5 = 2;
				break;
			
			case 4:
				Var0 = { Local_134 };
				fVar3 = 171f;
				iVar4 = iLocal_165;
				iVar10 = 1;
				iVar17 = 1;
				iVar18 = 0;
				sVar33 = "01DTS039";
				iVar5 = 2;
				break;
			
			case 1:
				Var0 = { 930.46f, 2719.65f, 42.41f };
				fVar3 = 180.53f;
				iVar4 = iLocal_166;
				break;
			
			case 2:
				Var0 = { 1141.17f, 2711.97f, 40.04f };
				fVar3 = 176.67f;
				iVar4 = iLocal_166;
				break;
			
			case 5:
				Var0 = { 514.5844f, -649.9937f, 23.7512f };
				fVar3 = 182.0097f;
				iVar4 = iLocal_167;
				iVar9 = 1;
				iVar10 = 1;
				iVar20 = 0;
				sVar33 = "18NJM316";
				break;
			
			case 6:
				Var0 = { 507.3959f, -653.6174f, 23.7512f };
				fVar3 = 177.8055f;
				iVar4 = iLocal_167;
				iVar9 = 1;
				iVar10 = 1;
				iVar20 = 0;
				sVar33 = "28HDT291";
				break;
			
			case 7:
				Var0 = { 1200.547f, -1553.607f, 38.4019f };
				fVar3 = 0.0001f;
				iVar4 = iLocal_167;
				iVar9 = 1;
				iVar10 = 1;
				iVar20 = 0;
				sVar33 = "23DJT162";
				break;
			
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar4))
		{
			return 0;
		}
		if (!GlobalFunc_100(Param1, Local_122))
		{
			Var0 = { Param1 };
		}
		if (fParam4 != -1f)
		{
			fVar3 = fParam4;
		}
		Local_89[iParam0 /*4*/] = VEHICLE::CREATE_VEHICLE(iVar4, Var0, fVar3, 1, 1);
		func_103(iParam0);
		func_102(iParam0);
		ENTITY::SET_ENTITY_VISIBLE(Local_89[iParam0 /*4*/], iVar7);
		if (ENTITY::DOES_ENTITY_EXIST(uVar26))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_89[iParam0 /*4*/], iVar26, -1, Var27, Var30, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			ENTITY::SET_ENTITY_COLLISION(Local_89[iParam0 /*4*/], iVar6, 0);
		}
		VEHICLE::SET_VEHICLE_STRONG(Local_89[iParam0 /*4*/], iVar8);
		ENTITY::FREEZE_ENTITY_POSITION(Local_89[iParam0 /*4*/], iVar9);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_89[iParam0 /*4*/], iVar10, 1);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_89[iParam0 /*4*/], iVar13);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_89[iParam0 /*4*/], iVar14);
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Local_89[iParam0 /*4*/], iVar15);
		VEHICLE::_0x4D9D109F63FEE1D4(Local_89[iParam0 /*4*/], iVar16);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_89[iParam0 /*4*/], iVar18, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_89[iParam0 /*4*/], iVar17);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_89[iParam0 /*4*/], iVar19);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_89[iParam0 /*4*/], iVar20);
		VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Local_89[iParam0 /*4*/], iVar21);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_89[iParam0 /*4*/], !bVar22, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar33))
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_89[iParam0 /*4*/], sVar33);
		}
		if (fVar23 > 0f)
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_89[iParam0 /*4*/], fVar23);
		}
		if (bVar11)
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_89[iParam0 /*4*/]);
		}
		if (fVar24 >= 0f)
		{
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(Local_89[iParam0 /*4*/], fVar24);
		}
		if (fVar25 >= 0f)
		{
			VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_89[iParam0 /*4*/], fVar25);
		}
		if (iVar5 != 0)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_89[iParam0 /*4*/], iVar5);
		}
		if (bParam5)
		{
			Local_89[iParam0 /*4*/].f_1 = GlobalFunc_7055(Local_89[iParam0 /*4*/], bVar12, 0);
		}
	}
	return 1;
}


void func_102(int iParam0)//Position - 0x51F8
{
	if (GlobalFunc_115(Local_89[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
			case 6:
			case 7:
			case 3:
			case 4:
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_89[iParam0 /*4*/], 15f);
				break;
			}
	}
}

void func_103(int iParam0)//Position - 0x5244
{
	if (GlobalFunc_115(Local_89[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				VEHICLE::SET_VEHICLE_COLOURS(Local_89[iParam0 /*4*/], 48, 48);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_89[iParam0 /*4*/], 8, 156);
				break;
			
			case 6:
				VEHICLE::SET_VEHICLE_COLOURS(Local_89[iParam0 /*4*/], 58, 58);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_89[iParam0 /*4*/], 8, 156);
				break;
			
			case 7:
				VEHICLE::SET_VEHICLE_COLOURS(Local_89[iParam0 /*4*/], 94, 94);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_89[iParam0 /*4*/], 8, 156);
				break;
			
			case 3:
			case 4:
				VEHICLE::SET_VEHICLE_COLOURS(Local_89[iParam0 /*4*/], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_89[iParam0 /*4*/], 61, 156);
				break;
			}
	}
}

void func_104(int iParam0)//Position - 0x52F1
{
	MISC::SET_BIT(&iLocal_155, iParam0);
}

void func_105()//Position - 0x5301
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	func_115(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_170);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, iLocal_170);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_170, iLocal_170);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_170, 1862763509);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
	GlobalFunc_9166(1);
}










void func_115(int iParam0)//Position - 0x5848
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_167, iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_165, iParam0);
}

void func_116()//Position - 0x5860
{
	if (!GlobalFunc_6827())
	{
		if (GlobalFunc_10586())
		{
			func_193(1, 0);
		}
	}
	RECORDING::_0x208784099002BC30("RE_DUEL", 0);
	func_131();
	func_126();
	func_122();
	func_117();
	if ((func_147(5) && GlobalFunc_115(Local_89[iLocal_172 /*4*/])) && MISC::GET_GAME_TIMER() < iLocal_156)
	{
		AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(Local_89[iLocal_172 /*4*/]);
	}
	if (func_147(6))
	{
		if (iLocal_157 == 0)
		{
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_128, 1) >= 150f)
			{
				iLocal_157 = MISC::GET_GAME_TIMER() + 30000;
			}
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_157)
		{
			func_64(6);
		}
	}
	if (func_147(7))
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_158)
		{
			func_64(7);
		}
	}
	if ((func_147(9) && GlobalFunc_115(Local_89[0 /*4*/])) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_89[0 /*4*/], 1) <= 35f)
	{
		if (!func_147(10))
		{
			if (!CAM::IS_SPHERE_VISIBLE(Local_131, 7f))
			{
				if (((MISC::GET_GAME_TIMER() - iLocal_161) >= 1000 && !func_71(Local_131, 7f)) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_131, 1) >= 50f)
				{
					MISC::CLEAR_AREA(Local_131, 7f, 1, 0, 0, 0);
					func_100(3, Local_122, -1082130432, 0);
					func_100(1, Local_122, -1082130432, 0);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_89[3 /*4*/], Local_89[1 /*4*/], 1065353216);
					func_76(0, 0, Local_122, -1082130432);
					func_104(10);
					if (iLocal_154 > 2)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[0 /*5*/], 0);
						TASK::TASK_COMBAT_PED(Local_48[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_48[0 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_161 = MISC::GET_GAME_TIMER();
			}
		}
		if (!func_147(11))
		{
			if (!CAM::IS_SPHERE_VISIBLE(Local_134, 7f))
			{
				if (((MISC::GET_GAME_TIMER() - iLocal_162) >= 1000 && !func_71(Local_134, 7f)) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_134, 1) >= 50f)
				{
					MISC::CLEAR_AREA(Local_134, 7f, 1, 0, 0, 0);
					func_100(4, Local_122, -1082130432, 0);
					func_100(2, Local_122, -1082130432, 0);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_89[4 /*4*/], Local_89[2 /*4*/], 1065353216);
					func_76(1, 0, Local_122, -1082130432);
					func_104(11);
					if (iLocal_154 > 2)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[1 /*5*/], 0);
						TASK::TASK_COMBAT_PED(Local_48[1 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_48[1 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_162 = MISC::GET_GAME_TIMER();
			}
		}
		if (func_147(10) && func_147(11))
		{
			func_64(9);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_168);
		}
	}
	if (func_147(8))
	{
		if (iLocal_159 == 0)
		{
			iLocal_159 = MISC::GET_GAME_TIMER() + 3500;
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_159)
		{
			func_64(8);
			func_104(6);
		}
	}
}

void func_117()//Position - 0x5B48
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar0 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_48[iVar0 /*5*/].f_1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_48[iVar0 /*5*/], 0))
			{
				if (!func_121(iVar0, 0))
				{
					HUD::SET_BLIP_SCALE(Local_48[iVar0 /*5*/].f_1, 1f);
					func_58(iVar0, 0);
				}
				if (GlobalFunc_708(Local_48[iVar0 /*5*/]) != -1)
				{
					if (func_120(iVar0))
					{
						if (HUD::GET_BLIP_ALPHA(Local_48[iVar0 /*5*/].f_1) > 0)
						{
							HUD::SET_BLIP_ALPHA(Local_48[iVar0 /*5*/].f_1, 0);
							HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_48[iVar0 /*5*/].f_1, 1);
						}
					}
					else if (HUD::GET_BLIP_ALPHA(Local_48[iVar0 /*5*/].f_1) == 0)
					{
						HUD::SET_BLIP_ALPHA(Local_48[iVar0 /*5*/].f_1, 255);
						HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_48[iVar0 /*5*/].f_1, 0);
					}
				}
			}
			else if (func_121(iVar0, 0))
			{
				HUD::SET_BLIP_SCALE(Local_48[iVar0 /*5*/].f_1, 0.7f);
				func_119(iVar0, 0);
				if (HUD::GET_BLIP_ALPHA(Local_48[iVar0 /*5*/].f_1) == 0)
				{
					HUD::SET_BLIP_ALPHA(Local_48[iVar0 /*5*/].f_1, 255);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_48[iVar0 /*5*/].f_1, 0);
				}
			}
			if (PED::IS_PED_INJURED(Local_48[iVar0 /*5*/]))
			{
				GlobalFunc_846(&(Local_48[iVar0 /*5*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_89[iVar0 /*4*/]) && HUD::DOES_BLIP_EXIST(Local_89[iVar0 /*4*/].f_1))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_89[iVar0 /*4*/], 0))
			{
				GlobalFunc_846(&(Local_89[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}


void func_119(int iParam0, int iParam1)//Position - 0x5CF2
{
	MISC::CLEAR_BIT(&(Local_48[iParam0 /*5*/].f_2), iParam1);
}

int func_120(int iParam0)//Position - 0x5D08
{
	if (iParam0 == 3)
	{
		if (!GlobalFunc_115(Local_48[2 /*5*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 5)
	{
		if (!GlobalFunc_115(Local_48[4 /*5*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 7)
	{
		if (!GlobalFunc_115(Local_48[6 /*5*/]))
		{
			return 0;
		}
	}
	return 1;
}

bool func_121(int iParam0, int iParam1)//Position - 0x5D56
{
	return MISC::IS_BIT_SET(Local_48[iParam0 /*5*/].f_2, iParam1);
}

void func_122()//Position - 0x5D6C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_89[iVar0 /*4*/]))
		{
			func_123(iVar0);
		}
		iVar0++;
	}
}

void func_123(int iParam0)//Position - 0x5D9A
{
	if (GlobalFunc_115(Local_89[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				if ((!GlobalFunc_115(Local_48[2 /*5*/]) && !GlobalFunc_115(Local_48[3 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_89[iParam0 /*4*/], 0))
				{
					func_124(iParam0, 0);
				}
				break;
			
			case 6:
				if ((!GlobalFunc_115(Local_48[4 /*5*/]) && !GlobalFunc_115(Local_48[5 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_89[iParam0 /*4*/], 0))
				{
					func_124(iParam0, 0);
				}
				break;
			
			case 7:
				if ((!GlobalFunc_115(Local_48[6 /*5*/]) && !GlobalFunc_115(Local_48[7 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_89[iParam0 /*4*/], 0))
				{
					func_124(iParam0, 0);
				}
				break;
			
			case 3:
				if (!GlobalFunc_115(Local_48[0 /*5*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_89[iParam0 /*4*/], 0))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_89[iParam0 /*4*/], 1) >= 50f)
					{
						func_124(iParam0, 0);
					}
				}
				if (func_147(6))
				{
					func_57(iParam0, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_152);
				}
				break;
			
			case 4:
				if (!GlobalFunc_115(Local_48[1 /*5*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_89[iParam0 /*4*/], 0))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_89[iParam0 /*4*/], 1) >= 50f)
					{
						func_124(iParam0, 0);
					}
				}
				if (func_147(6))
				{
					func_57(iParam0, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_153);
				}
				break;
			
			case 1:
				if (!GlobalFunc_115(Local_89[3 /*4*/]) || GlobalFunc_156(Local_89[3 /*4*/], Local_89[iParam0 /*4*/], 1) >= 150f)
				{
					func_124(iParam0, 0);
				}
				break;
			
			case 2:
				if (!GlobalFunc_115(Local_89[4 /*4*/]) || GlobalFunc_156(Local_89[4 /*4*/], Local_89[iParam0 /*4*/], 1) >= 150f)
				{
					func_124(iParam0, 0);
				}
				break;
			
			case 0:
				switch (Local_89[iParam0 /*4*/].f_3)
				{
					case 0:
						if (func_89())
						{
							func_104(1);
							GlobalFunc_846(&(Local_89[iParam0 /*4*/].f_1));
							Local_89[iParam0 /*4*/].f_3++;
						}
						break;
				}
				break;
		}
	}
	else if (ENTITY::IS_ENTITY_VISIBLE(Local_89[iParam0 /*4*/]))
	{
		func_124(iParam0, 0);
	}
	else
	{
		func_124(iParam0, 1);
	}
}

void func_124(int iParam0, bool bParam1)//Position - 0x600A
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_89[iParam0 /*4*/]))
	{
		GlobalFunc_846(&(Local_89[iParam0 /*4*/].f_1));
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_89[iParam0 /*4*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_89[iParam0 /*4*/]);
		}
		if (func_125(&(Local_89[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_89[iParam0 /*4*/]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_89[iParam0 /*4*/]));
			}
		}
		Local_89[iParam0 /*4*/] = 0;
		Local_89[iParam0 /*4*/].f_2 = 0;
		Local_89[iParam0 /*4*/].f_3 = 0;
	}
}

int func_125(var uParam0)//Position - 0x6084
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
	{
		return 0;
	}
	return 1;
}

void func_126()//Position - 0x60A0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_48[iVar0 /*5*/]))
		{
			func_127(iVar0);
		}
		iVar0++;
	}
}

void func_127(int iParam0)//Position - 0x60CE
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	float fVar6;
	
	if (GlobalFunc_115(Local_48[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				if (iParam0 == 0)
				{
					iVar0 = 3;
					iVar1 = 4;
				}
				else
				{
					iVar0 = 4;
					iVar1 = 3;
				}
				switch (Local_48[iParam0 /*5*/].f_3)
				{
					case 0:
						Local_48[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER();
						if (GlobalFunc_156(Local_48[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f)
						{
							PED::SET_IK_TARGET(Local_48[iParam0 /*5*/], 1, PLAYER::PLAYER_PED_ID(), 31086, Local_122, 0, -1, -1);
						}
						break;
					
					case 1:
						if (GlobalFunc_115(Local_89[iVar0 /*4*/]))
						{
							VEHICLE::_0x88BC673CA9E0AE99(Local_89[iVar0 /*4*/], 1);
							if (GlobalFunc_115(Local_89[0 /*4*/]) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_89[iVar0 /*4*/], Local_89[0 /*4*/]))
							{
								if ((((((MISC::GET_GAME_TIMER() >= iLocal_160 && !func_147(12)) && !ENTITY::IS_ENTITY_AT_COORD(Local_89[iVar0 /*4*/], Local_137, 7f, 7f, 7f, 0, 1, 0)) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_137, 1) < GlobalFunc_156(Local_89[iVar0 /*4*/], PLAYER::PLAYER_PED_ID(), 1)) && !CAM::IS_SPHERE_VISIBLE(Local_137, 7f)) && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_89[iVar0 /*4*/], 1), 7f)) && !func_71(Local_137, 8f))
								{
									uVar5 = GlobalFunc_830(Local_137, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
									MISC::CLEAR_AREA_OF_VEHICLES(Local_137, 8f, 0, 0, 0, 0, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_137, uVar5, 0f, -8f, 0f), 8f, 0, 0, 0, 0, 0);
									ENTITY::SET_ENTITY_COORDS(Local_89[iVar0 /*4*/], Local_137, 1, 0, 0, 1);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_89[iVar0 /*4*/]);
									ENTITY::SET_ENTITY_HEADING(Local_89[iVar0 /*4*/], uVar5);
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_89[iVar0 /*4*/], 1, 1);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_89[iVar0 /*4*/], 30f);
									func_104(5);
									iLocal_172 = iVar0;
									iLocal_156 = MISC::GET_GAME_TIMER() + 5000;
								}
								if (!func_147(12) && ENTITY::IS_ENTITY_AT_COORD(Local_89[iVar0 /*4*/], Local_137, 7f, 7f, 7f, 0, 1, 0))
								{
									func_104(12);
								}
								if (((MISC::GET_GAME_TIMER() >= iLocal_160 && ENTITY::IS_ENTITY_OCCLUDED(Local_89[iVar0 /*4*/])) && GlobalFunc_115(Local_89[iVar1 /*4*/])) && GlobalFunc_156(Local_89[iVar0 /*4*/], Local_89[iVar1 /*4*/], 1) >= 20f)
								{
									Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_89[iVar0 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
									if (Var2.x < -3.5f || Var2.x > 3.5f)
									{
										fVar6 = ENTITY::GET_ENTITY_SPEED(Local_89[iVar0 /*4*/]);
										fVar6 = GlobalFunc_253(fVar6, 20f, 50f);
										ENTITY::SET_ENTITY_HEADING(Local_89[iVar0 /*4*/], GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(Local_89[iVar0 /*4*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)));
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_89[iVar0 /*4*/], fVar6);
									}
								}
								if ((func_121(iParam0, 3) || GlobalFunc_156(Local_48[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f) || (GlobalFunc_115(Local_89[iVar1 /*4*/]) && GlobalFunc_156(Local_89[iVar0 /*4*/], Local_89[iVar1 /*4*/], 1) <= 15f))
								{
									if (GlobalFunc_156(Local_48[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f)
									{
										if (!HUD::DOES_BLIP_EXIST(Local_48[iParam0 /*5*/].f_1))
										{
											Local_48[iParam0 /*5*/].f_1 = GlobalFunc_6829(Local_48[iParam0 /*5*/], 1, 145);
											GlobalFunc_5122(Local_48[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
										}
									}
									Local_48[iParam0 /*5*/].f_3++;
								}
							}
							else
							{
								if (!HUD::DOES_BLIP_EXIST(Local_48[iParam0 /*5*/].f_1))
								{
									Local_48[iParam0 /*5*/].f_1 = GlobalFunc_6829(Local_48[iParam0 /*5*/], 1, 145);
									GlobalFunc_5122(Local_48[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
								}
								Local_48[iParam0 /*5*/].f_3++;
							}
						}
						break;
					
					case 2:
						if (GlobalFunc_115(Local_89[iVar0 /*4*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_48[iParam0 /*5*/], 0);
							TASK::TASK_COMBAT_PED(Local_48[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_48[iParam0 /*5*/].f_3++;
						}
						break;
					
					case 3:
						if (!HUD::DOES_BLIP_EXIST(Local_48[iParam0 /*5*/].f_1))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_48[iParam0 /*5*/], 1) <= 85f)
							{
								Local_48[iParam0 /*5*/].f_1 = GlobalFunc_6829(Local_48[iParam0 /*5*/], 1, 145);
							}
						}
						if (func_147(6) || func_147(8))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*5*/], 0) && GlobalFunc_156(Local_48[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
							{
								func_129(iParam0, 0);
							}
						}
						else if (GlobalFunc_156(Local_48[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
						{
							func_129(iParam0, 0);
						}
						break;
				}
				break;
			
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (func_147(7))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_48[iParam0 /*5*/], PLAYER::PLAYER_PED_ID()) && !GlobalFunc_2664(Local_48[iParam0 /*5*/], 579380604, 1))
					{
						TASK::TASK_COMBAT_PED(Local_48[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				if (func_147(7))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*5*/], 0) && GlobalFunc_156(Local_48[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
					{
						func_129(iParam0, 0);
					}
				}
				else if (func_147(2) && GlobalFunc_156(Local_48[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
				{
					func_129(iParam0, 0);
				}
				break;
		}
	}
	else
	{
		if (func_121(iParam0, 1))
		{
			PED::SET_PED_CAN_RAGDOLL(Local_48[iParam0 /*5*/], 1);
			ENTITY::DETACH_ENTITY(Local_48[iParam0 /*5*/], 1, 0);
			func_119(iParam0, 1);
		}
		if (!func_121(iParam0, 2))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_48[iParam0 /*5*/]))
			{
				func_129(iParam0, 0);
			}
			else
			{
				func_129(iParam0, 1);
			}
		}
	}
}


void func_129(int iParam0, bool bParam1)//Position - 0x66FE
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_48[iParam0 /*5*/]))
	{
		GlobalFunc_846(&(Local_48[iParam0 /*5*/].f_1));
		if ((((GlobalFunc_115(Local_48[iParam0 /*5*/]) && ENTITY::IS_ENTITY_ATTACHED(Local_48[iParam0 /*5*/])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_48[iParam0 /*5*/], 1)) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_48[iParam0 /*5*/])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_48[iParam0 /*5*/]))
		{
			ENTITY::DETACH_ENTITY(Local_48[iParam0 /*5*/], 1, 1);
		}
		if (bParam1)
		{
			PED::DELETE_PED(&(Local_48[iParam0 /*5*/]));
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_48[iParam0 /*5*/]));
		}
		Local_48[iParam0 /*5*/].f_2 = 0;
	}
}


void func_131()//Position - 0x67C4
{
	if ((func_147(1) || iLocal_154 > 2) && func_132())
	{
		if (GlobalFunc_115(Local_89[0 /*4*/]) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_89[0 /*4*/], 1) >= 250f)
		{
			func_56();
		}
	}
	if (func_132())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_89[0 /*4*/]) && !GlobalFunc_115(Local_89[0 /*4*/]))
		{
			func_56();
		}
	}
}

int func_132()//Position - 0x6836
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (GlobalFunc_115(Local_48[iVar1 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_48[iVar1 /*5*/].f_1))
		{
			iVar0 = 0;
			iVar1 = 8;
		}
		iVar1++;
	}
	return iVar0;
}















bool func_147(int iParam0)//Position - 0x851A
{
	return MISC::IS_BIT_SET(iLocal_155, iParam0);
}

void func_148(int iParam0)//Position - 0x852A
{
	if (iParam0 == -1)
	{
		iParam0 = GlobalFunc_5213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	GlobalFunc_817(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_97339 = 0;
	func_149();
}

void func_149()//Position - 0x8560
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}


int func_151(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x85AB
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = GlobalFunc_5213();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!GlobalFunc_84())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
			{
				return 0;
			}
		}
		if (!Global_SAVE_DATA.isGameflowActive)
		{
			return 0;
		}
		if (GlobalFunc_2(0))
		{
			return 0;
		}
		if (GlobalFunc_6562())
		{
			return 0;
		}
		if (GlobalFunc_4612())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_9553(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!GlobalFunc_6563(iParam3))
		{
			return 0;
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (GlobalFunc_6509(GlobalFunc_8329()) == 4 || GlobalFunc_6509(GlobalFunc_8329()) == 5)
			{
				return 0;
			}
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			if (!GlobalFunc_9555(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!GlobalFunc_8448(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_97344) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (GlobalFunc_10550())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!GlobalFunc_8988(4))
		{
			return 0;
		}
		if (!GlobalFunc_4938(5))
		{
			return 0;
		}
		if (GlobalFunc_2046(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !GlobalFunc_2046(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (GlobalFunc_6563(30) && !GlobalFunc_2046(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (GlobalFunc_42(GlobalFunc_8329()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar4 /*3*/] };
				iVar8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar4];
				if (GlobalFunc_6710(iVar8))
				{
					if (GlobalFunc_10880(iVar4))
					{
						if (!GlobalFunc_100(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (GlobalFunc_8329() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}










































void func_193(bool bParam0, bool bParam1)//Position - 0x9BFC
{
	func_219();
	func_218();
	func_115(0);
	GlobalFunc_7206(1, 1, 1, 0);
	GlobalFunc_6415(0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	HUD::DISPLAY_RADAR(1);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
	GlobalFunc_587();
	GlobalFunc_587();
	GlobalFunc_587();
	if (GlobalFunc_115(Local_89[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_89[0 /*4*/], 1);
	}
	func_210(bParam1);
	func_209(bParam1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_170);
	GlobalFunc_4956();
	GlobalFunc_4935();
	GlobalFunc_9166(0);
	CAM::DESTROY_ALL_CAMS(0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	VEHICLE::SET_RANDOM_TRAINS(1);
	if (bParam0)
	{
		GlobalFunc_10823(-1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}
















void func_209(bool bParam0)//Position - 0xA4FF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_124(iVar0, bParam0);
		iVar0++;
	}
}

void func_210(bool bParam0)//Position - 0xA522
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_129(iVar0, bParam0);
		iVar0++;
	}
}








void func_218()//Position - 0xA6B4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		GlobalFunc_846(&(Local_48[iVar0 /*5*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		GlobalFunc_846(&(Local_89[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_219()//Position - 0xA6FA
{
	iLocal_46 = 0;
	iLocal_47 = 0;
	iLocal_154 = 0;
	iLocal_155 = 0;
}


