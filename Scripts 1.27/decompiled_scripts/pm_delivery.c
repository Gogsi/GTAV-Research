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
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 3;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 1092616192;
	var uLocal_46 = 1101004800;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 3;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	bool bLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89[2] = { 0, 0 };
	int iLocal_92[2] = { 0, 0 };
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98[2] = { 0, 0 };
	var uLocal_101 = 0;
	char* sLocal_102 = NULL;
	char* sLocal_103 = NULL;
	char* sLocal_104 = NULL;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = -1;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 1000;
	var uLocal_115 = 1000;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
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
	iLocal_19 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_84 = -1;
	sLocal_102 = "PMDL_OBJ";
	sLocal_103 = "PMDL_LOC";
	sLocal_104 = "PMDL_BCK";
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_4670(2);
		func_105();
	}
	iLocal_35 = func_103();
	while (true)
	{
		switch (iLocal_36)
		{
			case 0:
				if (!iLocal_75)
				{
					func_98();
				}
				else
				{
					func_97();
				}
				if (bLocal_74)
				{
					iLocal_76 = 1;
					iLocal_36 = 1;
				}
				break;
			
			case 1:
				if (!func_96())
				{
					switch (iLocal_37)
					{
						case 0:
							func_93();
							break;
						
						case 1:
							if (iLocal_35 == 5 || iLocal_35 == 6)
							{
								func_65();
							}
							else
							{
								func_64();
							}
							break;
						
						case 2:
							func_9();
							if (iLocal_35 < 3)
							{
								func_7();
							}
							else if (iLocal_35 > 6)
							{
								func_7();
								func_2();
							}
							break;
						
						case 3:
						case 4:
							func_1();
							break;
					}
				}
				else
				{
					func_1();
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x150
{
	GlobalFunc_4670(2);
	func_105();
}

void func_2()//Position - 0x161
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_95))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, 0))
		{
			iVar0 = 200;
			iVar1 = (ENTITY::GET_ENTITY_HEALTH(iLocal_95) - 800);
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_95))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_95, (ENTITY::GET_ENTITY_HEALTH(iLocal_95) - 5));
			}
			if (iVar1 <= 0)
			{
				iLocal_37 = 4;
			}
			else if (iVar1 < 75)
			{
				GlobalFunc_6813(iVar1, iVar0, "PMDL_DMG", 6, 0, 1);
			}
			else
			{
				GlobalFunc_6813(iVar1, iVar0, "PMDL_DMG", 1, 0, 1);
			}
		}
		else
		{
			iLocal_37 = 4;
		}
	}
	else
	{
		iLocal_37 = 4;
	}
}





void func_7()//Position - 0x369
{
	int iVar0;
	
	iVar0 = (iLocal_79 - MISC::GET_GAME_TIMER());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_83)
	{
		GlobalFunc_5277(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
	}
	else
	{
		GlobalFunc_5277(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
	}
	switch (iLocal_80)
	{
		case 0:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 10000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 1:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 9000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 2:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 8000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 3:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 7000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 4:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 6000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 5:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 5000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 6:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 4500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 7:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 4000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 8:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 3500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 9:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 3000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 10:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 2500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 11:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 2000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 12:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 1500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 13:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 1000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 14:
			if (MISC::GET_GAME_TIMER() >= (iLocal_79 - 500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 15:
			if (MISC::GET_GAME_TIMER() >= iLocal_79)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 16:
			break;
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_79)
	{
		iLocal_37 = 3;
	}
}


void func_9()//Position - 0x76B
{
	int iVar0;
	int iVar1;
	
	if (iLocal_35 >= 3 && iLocal_35 <= 4)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_92)
		{
			if (!iLocal_77)
			{
				if (!PED::IS_PED_INJURED(iLocal_92[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_63, 50f, 50f, 50f, 0, 1, 0))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
						iLocal_77 = 1;
					}
				}
			}
			else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_92[iVar0]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_92[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_92[iVar0], 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_92[iVar0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_96))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_96);
				}
			}
			iVar0++;
		}
	}
	if (func_20(&uLocal_38, Local_66, Global_21, 1, iLocal_95, sLocal_103, "", sLocal_104, 1, 0, 1, -1))
	{
		GlobalFunc_530(iLocal_95, 10.5f, 2, 1056964608, 0, 1);
		TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 2000, 0);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_95, 0);
		GlobalFunc_5652(&uLocal_38, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_89)
	{
		if (!PED::IS_PED_INJURED(iLocal_89[iVar1]))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_98[iVar1]))
			{
				uLocal_98[iVar1] = GlobalFunc_6829(iLocal_89[iVar1], 1, 145);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_119);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_119);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_89[iVar1], uLocal_119);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_119);
				PED::SET_PED_KEEP_TASK(iLocal_89[iVar1], 1);
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_89[iVar1], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_98[iVar1]))
				{
					HUD::REMOVE_BLIP(&(uLocal_98[iVar1]));
				}
				TASK::TASK_SMART_FLEE_PED(iLocal_89[iVar1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_89[iVar1], 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_89[iVar1]));
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uLocal_98[iVar1]))
		{
			HUD::REMOVE_BLIP(&(uLocal_98[iVar1]));
		}
		iVar1++;
	}
}




void func_13()//Position - 0xAA1
{
	GlobalFunc_4670(1);
	func_105();
}







bool func_20(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)//Position - 0xEA0
{
	return func_21(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, 0, 0, 0, iParam8, sParam9, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_21(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, int iParam36)//Position - 0xEEF
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	GlobalFunc_647(uParam0);
	GlobalFunc_646(uParam0);
	GlobalFunc_502();
	if (func_43(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		GlobalFunc_635(sParam20);
		GlobalFunc_635(sParam21);
		GlobalFunc_635(sParam22);
		GlobalFunc_635(sParam23);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam18, 0))
				{
					MISC::SET_BIT(&(uParam0->f_13), 3);
					if (!MISC::IS_BIT_SET(uParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 4);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 23))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 23);
					}
					MISC::SET_BIT(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (GlobalFunc_5146(uParam0, iParam29))
				{
					MISC::SET_BIT(&(uParam0->f_13), 3);
					if (!MISC::IS_BIT_SET(uParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 4);
					}
					MISC::SET_BIT(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				GlobalFunc_635(sParam24);
				GlobalFunc_635(sParam27);
				GlobalFunc_635("MORE_SEATS");
				if (bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						GlobalFunc_635(sParam19);
					}
					if (HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(uParam0);
					}
					if ((!GlobalFunc_5172(uParam0, 1) && !GlobalFunc_633(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							GlobalFunc_5145(uParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5122(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(uParam0->f_13), 0);
						MISC::CLEAR_BIT(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						GlobalFunc_635("LOSE_WANTED");
						MISC::CLEAR_BIT(&(uParam0->f_13), 0);
						MISC::SET_BIT(&(uParam0->f_13), 1);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!GlobalFunc_5172(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5122(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(uParam0->f_13), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*uParam0))
						{
							HUD::REMOVE_BLIP(uParam0);
						}
						uParam0->f_5 = GlobalFunc_5104(Var3, 0);
						if (!iParam31 == -1)
						{
							HUD::SET_BLIP_SPRITE(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							GlobalFunc_714(uParam0->f_5, uParam0);
						}
					}
					else if (!GlobalFunc_537(Var3, HUD::GET_BLIP_COORDS(uParam0->f_5), 0.1f))
					{
						HUD::SET_BLIP_COORDS(uParam0->f_5, Var3);
						if (bParam35)
						{
							GlobalFunc_714(uParam0->f_5, uParam0);
						}
					}
					if (!GlobalFunc_5172(uParam0, 2))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_13, 2))
						{
							GlobalFunc_5145(uParam0, sParam19, 0);
							MISC::SET_BIT(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (MISC::IS_BIT_SET(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, iParam13, iVar6, iVar7);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param7, Param10, iParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar2], GlobalFunc_468()) || !GlobalFunc_5144(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (GlobalFunc_5143(uParam0))
							{
								GlobalFunc_635(sParam19);
								GlobalFunc_635(sParam24);
								GlobalFunc_635(sParam20);
								GlobalFunc_635(sParam21);
								GlobalFunc_635(sParam22);
								GlobalFunc_635(sParam23);
								GlobalFunc_635("LOSE_WANTED");
								GlobalFunc_635("MORE_SEATS");
								GlobalFunc_635(sParam27);
								GlobalFunc_5652(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam18))
			{
				if ((bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!MISC::IS_BIT_SET(uParam0->f_13, 9) && !MISC::IS_BIT_SET(uParam0->f_13, 22)))
				{
					GlobalFunc_635(sParam24);
					GlobalFunc_635(sParam27);
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5) || HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						HUD::REMOVE_BLIP(uParam0);
						GlobalFunc_635(sParam19);
					}
					if ((!GlobalFunc_5172(uParam0, 1) && !GlobalFunc_633(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							GlobalFunc_5145(uParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5122(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(uParam0->f_13), 0);
						MISC::CLEAR_BIT(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						GlobalFunc_635("LOSE_WANTED");
						MISC::CLEAR_BIT(&(uParam0->f_13), 0);
						MISC::SET_BIT(&(uParam0->f_13), 1);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!GlobalFunc_5172(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5122(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(uParam0->f_13), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(*uParam0))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_5));
								GlobalFunc_635(sParam19);
							}
							*uParam0 = GlobalFunc_7056(iParam18, 0, 0);
							HUD::SET_BLIP_DISPLAY(*uParam0, 2);
							if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								GlobalFunc_714(*uParam0, uParam0);
							}
						}
						if (!GlobalFunc_5172(uParam0, 2))
						{
							if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 3);
								MISC::CLEAR_BIT(&(uParam0->f_13), 4);
							}
							else if (MISC::IS_BIT_SET(uParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam27))
								{
									if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
									{
										GlobalFunc_5145(uParam0, sParam27, 0);
										MISC::SET_BIT(&(uParam0->f_13), 4);
									}
								}
								else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
								{
									GlobalFunc_5145(uParam0, sParam24, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
								if (!MISC::IS_BIT_SET(uParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
									{
										GlobalFunc_5122(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_5));
					GlobalFunc_635(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!GlobalFunc_5172(uParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8);
									if (!PED::IS_PED_INJURED(uParam0->f_17[iVar9]))
									{
										GlobalFunc_5122(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									GlobalFunc_5145(uParam0, "MORE_SEATS", 0);
									MISC::SET_BIT(&(uParam0->f_13), 13);
								}
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 3);
								MISC::CLEAR_BIT(&(uParam0->f_13), 4);
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								if (MISC::IS_BIT_SET(uParam0->f_13, 9))
								{
									GlobalFunc_5145(uParam0, sParam27, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!GlobalFunc_5172(uParam0, 2))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
						{
							GlobalFunc_5145(uParam0, sParam24, 0);
							MISC::SET_BIT(&(uParam0->f_13), 3);
							MISC::CLEAR_BIT(&(uParam0->f_13), 4);
						}
						else if (MISC::IS_BIT_SET(uParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam27))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
								{
									GlobalFunc_5145(uParam0, sParam27, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(uParam0->f_13, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), 0);
		}
		GlobalFunc_635(sParam19);
		GlobalFunc_635(sParam24);
		GlobalFunc_635(sParam27);
		GlobalFunc_635(sParam24);
		GlobalFunc_635("LOSE_WANTED");
		if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*uParam0))
		{
			HUD::REMOVE_BLIP(uParam0);
		}
	}
	MISC::CLEAR_BIT(&(uParam0->f_13), 11);
	MISC::CLEAR_BIT(&(uParam0->f_13), 12);
	return 0;
}






















int func_43(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x1F43
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	var uVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_13, 29) && !MISC::IS_BIT_SET(uParam0->f_13, 28))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					MISC::SET_BIT(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!MISC::IS_BIT_SET(uParam0->f_13, 29) && MISC::IS_BIT_SET(uParam0->f_13, 28))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				MISC::CLEAR_BIT(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			uVar24 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0, iVar25);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_21, 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_21, 1)) < 400f)
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17)
					{
						if (GlobalFunc_634(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470) == 7 && !func_58(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
					}
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!MISC::IS_BIT_SET(uParam0->f_13, 26))
	{
		if ((!func_55(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!GlobalFunc_5172(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar26);
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar27]))
						{
							GlobalFunc_5122(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						GlobalFunc_5145(uParam0, "MORE_SEATS", 0);
						MISC::SET_BIT(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			MISC::CLEAR_BIT(&(uParam0->f_13), 13);
			GlobalFunc_635("MORE_SEATS");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			if ((!PED::IS_PED_INJURED(uParam0->f_17[0]) || !PED::IS_PED_INJURED(uParam0->f_17[1])) || !PED::IS_PED_INJURED(uParam0->f_17[2]))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_13, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_5172(uParam0, 2))
					{
						iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (GlobalFunc_643(iVar13, uParam0))
						{
							GlobalFunc_5145(uParam0, "CMN_VEHSUIT", 0);
							MISC::SET_BIT(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					MISC::CLEAR_BIT(&(uParam0->f_13), 31);
					GlobalFunc_635("CMN_VEHSUIT");
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 75))
				{
					MISC::SET_BIT(&(uParam0->f_13), 21);
				}
			}
			else if (MISC::IS_BIT_SET(uParam0->f_13, 21))
			{
				MISC::CLEAR_BIT(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 1);
					}
					else
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 0);
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, 0))
						{
							if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (!func_55(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (!GlobalFunc_642(uParam0->f_17[iVar0]))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar13))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iVar13))
							{
								if (ENTITY::IS_ENTITY_IN_WATER(iVar13) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar13))
								{
									Var28 = { ENTITY::GET_ENTITY_COORDS(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
						{
							iVar13 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_17[iVar0], 0);
							if (!ENTITY::IS_ENTITY_DEAD(iVar13))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar13))
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar13) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iVar31 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar13) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
					{
						iVar32 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (ENTITY::DOES_ENTITY_EXIST(iVar32))
						{
							if (GlobalFunc_634(iVar32, uParam0, 0))
							{
								if (GlobalFunc_641(iVar0, uParam0) || !MISC::IS_BIT_SET(uParam0->f_13, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
									GlobalFunc_627(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										MISC::SET_BIT(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!GlobalFunc_641(iVar0, uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar32) == joaat("sentinel2"))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 4);
								}
								else
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 2);
								}
								GlobalFunc_640(iVar0, uParam0);
							}
						}
					}
					if ((!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()) && !GlobalFunc_639(uParam0->f_17[iVar0], iParam10)) && !GlobalFunc_5147(uParam0->f_17[iVar0], iParam10))
					{
						if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (((!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]))
								{
									iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
									}
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = MISC::GET_GAME_TIMER();
								uParam0->f_1[iVar0] = GlobalFunc_7056(uParam0->f_17[iVar0], 0, 0);
								HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									GlobalFunc_714(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
					{
						if (((GlobalFunc_5144(uParam0->f_17[iVar0], 1) || GlobalFunc_639(uParam0->f_17[iVar0], iParam10)) || iParam12) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
								GlobalFunc_635(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								GlobalFunc_714(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iParam10))
						{
							if ((ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !MISC::IS_BIT_SET(uParam0->f_13, 11)) && !((bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!GlobalFunc_5144(uParam0->f_17[iVar0], 1))
										{
											if (GlobalFunc_630(uParam0->f_17[iVar0]))
											{
												iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
									{
										if ((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_58(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) && !GlobalFunc_638(uParam0->f_17[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
											if (MISC::IS_BIT_SET(uParam0->f_13, 10))
											{
												PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
											}
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = GlobalFunc_7056(uParam0->f_17[iVar0], 0, 0);
										HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
									{
										iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
										}
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 0);
										PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 21))
								{
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468());
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_13, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
								MISC::SET_BIT(&(uParam0->f_13), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], GlobalFunc_468()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					GlobalFunc_635(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!GlobalFunc_5172(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
						{
							if (GlobalFunc_642(uParam0->f_17[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !GlobalFunc_642(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = MISC::GET_GAME_TIMER();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!MISC::IS_BIT_SET(uParam0->f_13, 5))
							{
								GlobalFunc_5145(uParam0, sParam7, 0);
								MISC::SET_BIT(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!GlobalFunc_637(iVar0, uParam0))
									{
										if (!MISC::IS_STRING_NULL(uVar19[iVar0]))
										{
											if (!MISC::ARE_STRINGS_EQUAL(uVar19[iVar0], ""))
											{
												GlobalFunc_5173(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												GlobalFunc_636(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!GlobalFunc_637(iVar0, uParam0))
										{
											GlobalFunc_5145(uParam0, uVar15[iVar0], 0);
											GlobalFunc_636(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		MISC::CLEAR_BIT(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					GlobalFunc_635(uVar15[iVar0]);
				}
				iVar0++;
			}
			GlobalFunc_635("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}












int func_55(var uParam0)//Position - 0x33E7
{
	var uVar0;
	
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (GlobalFunc_634(uVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x3416
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam1))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
			if (!ENTITY::IS_ENTITY_DEAD(uVar0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
					{
						if (func_55(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (GlobalFunc_634(iVar0, uParam0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
						{
							if (func_57(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
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
	return 0;
}

int func_57(int iParam0)//Position - 0x34F3
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_58(int iParam0, int iParam1)//Position - 0x352A
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}






void func_64()//Position - 0x3715
{
	int iVar0;
	
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_95, 0))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_101))
		{
			HUD::REMOVE_BLIP(&uLocal_101);
		}
		if (iLocal_35 <= 2)
		{
			iLocal_79 = (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * ((60 * iLocal_81) + iLocal_82));
			iLocal_79 = (iLocal_79 + MISC::GET_GAME_TIMER());
			iLocal_83 = (iLocal_79 - CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
		}
		else if (iLocal_35 > 6)
		{
			iLocal_79 = (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * ((60 * iLocal_81) + iLocal_82));
			iLocal_79 = (iLocal_79 + MISC::GET_GAME_TIMER());
			iLocal_83 = (iLocal_79 - CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
		}
		else if (iLocal_35 >= 3 && iLocal_35 <= 4)
		{
			iLocal_96 = VEHICLE::CREATE_VEHICLE(iLocal_88, Local_69, fLocal_73, 1, 1);
			iLocal_92[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_96, 6, iLocal_86, -1, 1, 1);
			iLocal_92[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_96, 6, iLocal_86, 0, 1, 1);
			PED::ADD_RELATIONSHIP_GROUP("rghCop", &uLocal_117);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, uLocal_117, 1862763509);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_92[0], 39, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_92[1], 39, 1);
			iVar0 = 0;
			while (iVar0 < iLocal_92)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_92[iVar0], joaat("weapon_pistol"), -1, 0, 1);
				PED::SET_PED_SEEING_RANGE(iLocal_92[iVar0], 100f);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_92[iVar0], uLocal_117);
				iVar0++;
			}
		}
		iLocal_37 = 2;
	}
}

void func_65()//Position - 0x3846
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_95))
	{
		if (func_92() || PED::IS_PED_INJURED(iLocal_89[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_89)
			{
				if (!PED::IS_PED_INJURED(iLocal_89[iVar0]))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_98[iVar0]))
					{
						uLocal_98[iVar0] = GlobalFunc_6829(iLocal_89[iVar0], 1, 145);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_89[iVar0], 1, 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_119);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_119);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_89[iVar0], uLocal_119);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_119);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_98[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_98[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_78)
		{
			if (!PED::IS_PED_INJURED(iLocal_89[0]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89[0], 50f, 50f, 50f, 0, 1, 0))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_89[0], iLocal_95, PLAYER::PLAYER_PED_ID(), 8, 25f, 786469, -1f, -1f, 1);
					iLocal_78 = 1;
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_95, 0))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_101))
			{
				HUD::REMOVE_BLIP(&uLocal_101);
			}
			GlobalFunc_4948(&uLocal_105, 0, 0);
			iLocal_37 = 2;
		}
		else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_95, -1) || PED::IS_PED_INJURED(iLocal_89[0]))
		{
			GlobalFunc_4948(&uLocal_105, 0, 0);
		}
		else
		{
			func_66();
		}
	}
}

void func_66()//Position - 0x39B2
{
	if (!PED::IS_PED_INJURED(iLocal_89[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_95))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_89[0], iLocal_95, 0))
		{
			func_67(&uLocal_105, iLocal_95, 0, 0, 1, 1, 1);
		}
	}
}

void func_67(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x39EF
{
	func_68(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_68(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x3A0C
{
	func_69(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_69(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x3A2A
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		GlobalFunc_4948(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	GlobalFunc_8921(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}























int func_92()//Position - 0x491B
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_95))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_95))
		{
			if ((((((ENTITY::GET_ENTITY_HEALTH(iLocal_95) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_95) < 200f) || FIRE::IS_ENTITY_ON_FIRE(iLocal_95)) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_95, 0, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_95, 1, 0))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_95, 4, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_95, 5, 0))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_95, 0, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_95, 4, 0))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_95, 1, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_95, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_93()//Position - 0x49D2
{
	int iVar0;
	int iVar1;
	
	iLocal_95 = func_95(0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, 0))
	{
		iLocal_95 = VEHICLE::CREATE_VEHICLE(iLocal_87, Local_63, uLocal_72, 1, 1);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_95, iVar0, 1);
			iVar0++;
		}
		if (iLocal_84 != -1)
		{
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_95, iLocal_84, 0);
		}
	}
	VEHICLE::SET_VEHICLE_IS_WANTED(iLocal_95, 1);
	uLocal_101 = GlobalFunc_7055(iLocal_95, 0, 0);
	if (iLocal_35 != 5 && iLocal_35 != 6)
	{
		if (iLocal_35 > 6)
		{
			ENTITY::SET_ENTITY_PROOFS(iLocal_95, 0, 0, 0, 0, 1, 0, 0, 0);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_95, 0, 0, 0);
		}
		GlobalFunc_164(sLocal_102, 7500, 1);
	}
	else
	{
		iLocal_89[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_95, 26, iLocal_85, -1, 1, 1);
		iLocal_89[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_95, 26, iLocal_85, 0, 1, 1);
		PED::ADD_RELATIONSHIP_GROUP("rghCriminal", &uLocal_118);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_118, 1862763509);
		iVar1 = 0;
		while (iVar1 < iLocal_89)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_89[iVar1], 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_89[iVar1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_89[iVar1], uLocal_118);
			iVar1++;
		}
		TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_89[0], iLocal_95, 25f, 786599);
		GlobalFunc_164("PMDL_REC", 7500, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		iLocal_97 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	}
	iLocal_37 = 1;
}


int func_95(int iParam0)//Position - 0x4B36
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96066.f_222[iParam0], 0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96066.f_222[iParam0], 1, 1);
		return Global_96066.f_222[iParam0];
	}
	return 0;
}

int func_96()//Position - 0x4B6E
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_95))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, 0))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_95, PLAYER::PLAYER_PED_ID(), 300f, 300f, 300f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (PED::IS_PED_INJURED(iLocal_89[0]))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_98[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_98[0]));
		}
	}
	return 0;
}

void func_97()//Position - 0x4BD6
{
	STREAMING::REQUEST_MODEL(iLocal_87);
	HUD::REQUEST_ADDITIONAL_TEXT("PMDL", 0);
	if (iLocal_35 >= 3 && iLocal_35 <= 4)
	{
		STREAMING::REQUEST_MODEL(iLocal_86);
		STREAMING::REQUEST_MODEL(iLocal_88);
	}
	else if (iLocal_35 == 5 || iLocal_35 == 6)
	{
		STREAMING::REQUEST_MODEL(iLocal_85);
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("benson"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pony2"), 1);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_87) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		if (iLocal_35 >= 3 && iLocal_35 <= 4)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_86) && STREAMING::HAS_MODEL_LOADED(iLocal_88))
			{
				bLocal_74 = true;
			}
		}
		else if (iLocal_35 == 5 || iLocal_35 == 6)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_85))
			{
				bLocal_74 = true;
			}
		}
		else if (iLocal_35 > 6)
		{
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Deliveries", 0))
			{
				bLocal_74 = true;
			}
		}
		else
		{
			bLocal_74 = true;
		}
	}
}

void func_98()//Position - 0x4CAF
{
	float fVar0;
	
	Local_63 = { func_100(GlobalFunc_4669(), iLocal_35) };
	fLocal_72 = func_99(GlobalFunc_4669(), iLocal_35);
	if (iLocal_35 > 6)
	{
		sLocal_102 = "PMDL_TRUCK";
		sLocal_103 = "PMDL_BTIM";
		sLocal_104 = "PMDL_BCKT";
		iLocal_87 = joaat("benson");
		iLocal_84 = 2;
	}
	if (GlobalFunc_4669() == 10)
	{
		Local_66 = { -1161.213f, -1567.068f, 3.4234f };
		iLocal_87 = joaat("pony2");
		if (iLocal_35 == 0)
		{
			iLocal_81 = 2;
			iLocal_82 = 15;
			sLocal_103 = "PMDL_TIM";
		}
		else if (iLocal_35 == 1)
		{
			iLocal_81 = 1;
			iLocal_82 = 30;
			sLocal_103 = "PMDL_TIM";
		}
		else if (iLocal_35 == 2)
		{
			iLocal_81 = 1;
			iLocal_82 = 30;
			sLocal_103 = "PMDL_TIM";
		}
		else if (iLocal_35 == 3)
		{
			Local_69 = { -3121.261f, 1152.92f, 19.4047f };
			fLocal_73 = 176.4887f;
			iLocal_88 = joaat("police4");
			iLocal_86 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_35 == 4)
		{
			Local_69 = { 1543.145f, 2184.371f, 77.8114f };
			fLocal_73 = 45.3499f;
			iLocal_88 = joaat("police4");
			iLocal_86 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_35 >= 5)
		{
			iLocal_85 = joaat("g_m_y_salvagoon_02");
		}
	}
	else if (GlobalFunc_4669() == 14)
	{
		Local_66 = { -2169.828f, 4277.365f, 47.9568f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_63, Local_66, 1);
		iLocal_82 = SYSTEM::ROUND((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (GlobalFunc_4669() == 13)
	{
		Local_66 = { -323.356f, 6264.431f, 30.4463f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_63, Local_66, 1);
		iLocal_82 = SYSTEM::ROUND((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (GlobalFunc_4669() == 12)
	{
		Local_66 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_63, Local_66, 1);
		iLocal_82 = SYSTEM::ROUND((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (GlobalFunc_4669() == 11)
	{
		Local_66 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_63, Local_66, 1);
		iLocal_82 = SYSTEM::ROUND((((fVar0 / 16.5f) + 15f) / 2f));
	}
	iLocal_80 = 0;
	iLocal_75 = 1;
}

float func_99(int iParam0, int iParam1)//Position - 0x4EDD
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0.5801f;
					break;
				
				case 1:
					return 177.9306f;
					break;
				
				case 2:
					return 49.6978f;
					break;
				
				case 3:
					return 336.9449f;
					break;
				
				case 4:
					return 80.1639f;
					break;
				
				case 5:
					return 287.983f;
					break;
				
				case 6:
					return 46.7895f;
					break;
			}
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 273.1085f;
					break;
				
				case 8:
					return 256.7899f;
					break;
				
				case 9:
					return 180.9647f;
					break;
				
				case 10:
					return 126.4385f;
					break;
				
				case 11:
					return 123.4767f;
					break;
				
				case 12:
					return 226.219f;
					break;
				
				case 13:
					return 82.6097f;
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_100(int iParam0, int iParam1)//Position - 0x500D
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return -128.1876f, 1934.495f, 194.9075f;
					break;
				
				case 1:
					return -179.8744f, 586.4468f, 196.6278f;
					break;
				
				case 2:
					return 1390.089f, -605.923f, 73.3378f;
					break;
				
				case 3:
					return -3170.048f, 1098.809f, 19.7817f;
					break;
				
				case 4:
					return 1581.22f, 2194.629f, 78.1062f;
					break;
				
				case 5:
					return 1475.833f, -113.5801f, 141.794f;
					break;
				
				case 6:
					return 1603.071f, -1793.915f, 89.0179f;
					break;
			}
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 642.2169f, 2774.892f, 40.985f;
					break;
				
				case 8:
					return -1916.122f, 2060.313f, 139.7363f;
					break;
				
				case 9:
					return 824.8992f, -1064.192f, 26.9851f;
					break;
				
				case 10:
					return -669.6013f, -1198.664f, 9.6125f;
					break;
				
				case 11:
					return -1465.579f, -390.7494f, 37.5168f;
					break;
				
				case 12:
					return 797.7521f, -1793.008f, 28.3164f;
					break;
				
				case 13:
					return 806.319f, -2017.451f, 28.2215f;
					break;
			}
			break;
	}
	return GlobalFunc_4546(iParam0);
}



int func_103()//Position - 0x538F
{
	return func_104(Global_96066.f_20, Global_96066.f_29);
}

int func_104(int iParam0, int iParam1)//Position - 0x53A7
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 4;
					break;
				
				case 5:
					return 5;
					break;
				
				case 6:
					return 6;
					break;
			}
			break;
		
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 9;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 11;
					break;
				
				case 3:
					return 12;
					break;
				
				case 4:
					return 13;
					break;
			}
			break;
		
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 7;
					break;
			}
			break;
	}
	return 0;
}

void func_105()//Position - 0x54AF
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("benson"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pony2"), 0);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (iLocal_76)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_97))
		{
			func_106(iLocal_97, 0, 145);
		}
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		GlobalFunc_4948(&uLocal_105, 0, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_106(int iParam0, int iParam1, int iParam2)//Position - 0x54FC
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
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






















