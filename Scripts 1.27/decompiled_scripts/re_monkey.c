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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	float fLocal_57 = 0f;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<3> Local_60 = { 0, 0, 0 } ;
	var uLocal_63[4] = { 0, 0, 0, 0 };
	struct<3> Local_68 = { 0, 0, 0 } ;
	int iLocal_71 = 0;
	char* sLocal_72 = NULL;
	char* sLocal_73 = NULL;
	char* sLocal_74 = NULL;
	char* sLocal_75 = NULL;
	char* sLocal_76 = NULL;
	struct<3> Local_77 = { 0, 0, 0 } ;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
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
	Local_50 = { -336.6146f, -93.66808f, 46.0005f };
	fLocal_53 = 256.1257f;
	fLocal_57 = 0f;
	Local_68 = { -334.8087f, -85.713f, 47.4504f };
	sLocal_72 = "scr_lamgraff_paint_spray";
	sLocal_73 = "switch@franklin@lamar_tagging_wall";
	sLocal_74 = "lamar_tagging_wall_loop_lamar";
	sLocal_75 = "lamar_tagging_wall_exit_lamar";
	sLocal_76 = "lamar_tagging_exit_loop_lamar";
	Local_77 = { 0f, 0f, 0f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_144();
	}
	func_79(ScriptParam_0.f_1[0 /*3*/]);
	while (true)
	{
		func_65();
		switch (iLocal_46)
		{
			case 0:
				if (func_49())
				{
					func_46();
				}
				break;
			
			case 1:
				if (func_1())
				{
					func_46();
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()//Position - 0x116
{
	if (iLocal_47 == 0)
	{
		return 1;
	}
	else if (iLocal_47 == 1)
	{
		func_45();
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_2239(PLAYER::PLAYER_PED_ID(), -347.4067f, -93.5801f, 44.6639f, 306.0178f);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		CAM::DO_SCREEN_FADE_IN(250);
		return 1;
	}
	else if (iLocal_47 == 2)
	{
		switch (iLocal_48)
		{
			case 0:
				GlobalFunc_7682(-899711929);
				func_30();
				func_5(-1, 0);
				GlobalFunc_7068();
				func_144();
				break;
			}
	}
	return 0;
}




void func_5(int iParam0, int iParam1)//Position - 0x22E
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
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_43.x, Local_43.f_1);
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

























void func_30()//Position - 0x176E
{
	GlobalFunc_7168(1751306471, 6, func_34(), 133, 30000, 10000, -1, 0, -1, 0, 0);
}




int func_34()//Position - 0x19DB
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	switch (iVar0)
	{
		case joaat("player_zero"):
			return 1;
		
		case joaat("player_one"):
			return 2;
		
		case joaat("player_two"):
			return 4;
		
		default:
	}
	return -1;
}











void func_45()//Position - 0x1FF1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		switch (iVar1)
		{
			case 0:
				break;
			
			case 1:
				uLocal_63[iVar1] = OBJECT::CREATE_OBJECT(joaat("prop_paints_can02"), -335.66f, -95.24f, 46.16f, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_63[iVar1], -335.66f, -95.24f, 46.16f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(uLocal_63[iVar1], -2.32f, 0.66f, -0.8f, 2, 1);
				break;
			
			case 2:
				uLocal_63[iVar1] = OBJECT::CREATE_OBJECT(joaat("prop_paint_brush05"), -336.04f, -94.9f, 46.02f, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_63[iVar1], -336.04f, -94.9f, 46.02f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(uLocal_63[iVar1], 0.01f, 3.85f, 2.72f, 2, 1);
				break;
			
			case 3:
				uLocal_63[iVar1] = OBJECT::CREATE_OBJECT(joaat("prop_paint_spray01b"), -336.34f, -95.66f, 46.02f, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_63[iVar1], -336.34f, -95.66f, 46.02f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(uLocal_63[iVar1], -2.86f, 0.76f, 28.89f, 2, 1);
				break;
		}
		iVar0++;
	}
}

void func_46()//Position - 0x2142
{
	if (iLocal_47 == 2)
	{
		func_48();
		iLocal_48 = 0;
	}
	func_47();
}

void func_47()//Position - 0x215B
{
	switch (iLocal_47)
	{
		case 0:
			iLocal_47 = 2;
			break;
		
		case 1:
			iLocal_47 = 2;
			break;
		
		case 2:
			iLocal_47 = 0;
			break;
	}
}

void func_48()//Position - 0x218E
{
	int iVar0;
	
	iVar0 = iLocal_46 + 1;
	if (iVar0 >= 0 && iVar0 < 2)
	{
		iLocal_46 = iVar0;
	}
}

int func_49()//Position - 0x21B0
{
	if (iLocal_47 == 0)
	{
		return 1;
	}
	else if (iLocal_47 == 1)
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_2239(PLAYER::PLAYER_PED_ID(), -366.6139f, -79.7531f, 44.6616f, 230.7299f);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		CAM::DO_SCREEN_FADE_IN(250);
		return 1;
	}
	else if (iLocal_47 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49))
		{
			if (PED::IS_PED_DEAD_OR_DYING(iLocal_49, 1))
			{
				func_144();
			}
		}
		else if (iLocal_48 > 0)
		{
			if (iLocal_55)
			{
				return 1;
			}
			else
			{
				func_144();
			}
		}
		switch (iLocal_48)
		{
			case 0:
				if (func_51())
				{
					func_45();
					iLocal_48++;
				}
				break;
			
			case 1:
				if (GlobalFunc_2796())
				{
					if (GlobalFunc_115(iLocal_49))
					{
						if (CAM::GET_FOCUS_PED_ON_SCREEN(1106247680, 31086, 1061997773, 1060320051, 1048576000, 1090519040, 1051361018, 31086, 24818) == iLocal_49)
						{
							iLocal_82 = MISC::GET_GAME_TIMER() + 2000;
							iLocal_48++;
						}
					}
				}
				break;
			
			case 2:
				if (iLocal_82 < MISC::GET_GAME_TIMER())
				{
					iLocal_55 = 1;
					iLocal_48++;
				}
				break;
			}
	}
	return 0;
}


int func_51()//Position - 0x22EF
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_49))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("u_m_m_streetart_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("u_m_m_streetart_01")))
		{
			iLocal_49 = PED::CREATE_PED(26, joaat("u_m_m_streetart_01"), Local_50, fLocal_53, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("u_m_m_streetart_01"));
			uLocal_63[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_spray_can"), Local_68, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_63[0], iLocal_49, PED::GET_PED_BONE_INDEX(iLocal_49, 28422), 0f, -0.01f, -0.02f, Local_77, 1, 1, 0, 0, 2, 1);
			PED::SET_PED_KEEP_TASK(iLocal_49, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_49, 42, 1);
			uLocal_56 = GlobalFunc_6797(iLocal_49, 0, 145);
			GlobalFunc_9034(1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_49, 1862763509);
			PED::SET_PED_LOD_MULTIPLIER(iLocal_49, 2.5f);
		}
	}
	return 0;
}














void func_65()//Position - 0x2A17
{
	func_66();
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && iLocal_54 < 3)
	{
		func_144();
	}
}

void func_66()//Position - 0x2A38
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	struct<3> Var9;
	bool bVar12;
	bool bVar13;
	float fVar14;
	int iVar15;
	var uVar16;
	var uVar19;
	var uVar22;
	int iVar23;
	
	if (GlobalFunc_115(iLocal_49))
	{
		bVar0 = GlobalFunc_115(iLocal_49);
		bVar1 = GlobalFunc_115(PLAYER::PLAYER_PED_ID());
		Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_49, 0) };
		fVar8 = 7.5f;
		Var9 = { fVar8, fVar8, fVar8 };
		if (bVar1)
		{
			Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
			bVar12 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
			bVar13 = PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID());
		}
		if (iLocal_54 < 3)
		{
			if (MISC::IS_BULLET_IN_AREA(Var2, fVar8, 0) || MISC::IS_PROJECTILE_IN_AREA(Var2 - Var9, Var2 + Var9, 0))
			{
				iLocal_54 = 3;
			}
		}
		switch (iLocal_54)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT(sLocal_73);
				if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_73))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, 1);
					TASK::TASK_PLAY_ANIM(iLocal_49, sLocal_73, sLocal_74, 1000f, -8f, -1, 8193, 0, 0, 0, 0);
					iLocal_54++;
				}
				break;
			
			case 1:
				if (func_77(-2017877118))
				{
					iLocal_54 = 5;
				}
				if (func_76(PLAYER::PLAYER_PED_ID(), iLocal_49, 35f))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_81);
					TASK::TASK_PLAY_ANIM(0, sLocal_73, sLocal_75, 8f, -8f, -1, 8192, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_73, sLocal_76, 8f, -2f, -1, 8193, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_81);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_49, uLocal_81);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_81);
					STREAMING::REMOVE_ANIM_DICT(sLocal_73);
					iLocal_54++;
				}
				break;
			
			case 2:
				if (func_77(242628503))
				{
					iLocal_54 = 5;
				}
				if (bVar13)
				{
					fVar14 = 30f;
				}
				else if (bVar12)
				{
					fVar14 = 17.5f;
				}
				else
				{
					fVar14 = 5f;
				}
				if ((bVar0 && bVar1) && func_76(PLAYER::PLAYER_PED_ID(), iLocal_49, fVar14))
				{
					iLocal_54 = 3;
				}
				if (iLocal_55)
				{
					iLocal_54 = 3;
				}
				if (func_75())
				{
					iLocal_54 = 3;
				}
				if (bVar1 && func_74(Var5, Var2))
				{
					iLocal_54 = 3;
				}
				func_72();
				break;
			
			case 3:
				if (func_67())
				{
					iLocal_54++;
				}
				break;
			
			case 4:
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49, 8, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49, 32, 1);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_81);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 800);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 9999f, -1, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_81);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_49, uLocal_81);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_81);
				iLocal_54++;
				break;
			
			case 5:
				if (func_77(242628503))
				{
					iLocal_54 = 5;
				}
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_49) && SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) > 2500f)
				{
					uLocal_80 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var5, Var2, 1, 0, 7);
					iLocal_54++;
				}
				break;
			
			case 6:
				if (func_77(242628503))
				{
					iLocal_54 = 5;
				}
				iVar23 = SHAPETEST::GET_SHAPE_TEST_RESULT(uLocal_80, &iVar15, &uVar16, &uVar19, &uVar22);
				if (iVar23 == 2)
				{
					if (iVar15 == 1)
					{
						iLocal_54++;
					}
					else
					{
						iLocal_54 = (iLocal_54 - 1);
					}
				}
				else if (iVar23 == 0)
				{
					iLocal_54++;
				}
				break;
			
			case 7:
				PED::DELETE_PED(&iLocal_49);
				break;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_49))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_49, 0);
	}
}

int func_67()//Position - 0x2D5F
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	
	Var0 = { -335.71f, -93.39f, 46f };
	Var3 = { -336.7188f, -93.5128f, 46f };
	switch (iLocal_59)
	{
		case 0:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49, sLocal_73, sLocal_76, 3))
			{
				fLocal_57 = 0.349f;
				iLocal_58 = 900;
				Local_60 = { Var0 };
				iLocal_59 = 1;
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49, sLocal_73, sLocal_75, 3))
			{
				fLocal_57 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_49, sLocal_73, sLocal_75);
				fLocal_57 = GlobalFunc_253(fLocal_57, 0.2f, 0.349f);
				if (fLocal_57 != 0.2f)
				{
					fVar6 = ((1f / (0.349f - 0.161f)) * SYSTEM::TO_FLOAT(900));
					iLocal_58 = SYSTEM::ROUND(((fLocal_57 - 0.161f) * fVar6));
					Local_60 = { ENTITY::GET_ENTITY_COORDS(iLocal_49, 0) - Vector(1f, 0f, 0f) };
					iLocal_59 = 1;
				}
				else
				{
					iLocal_59 = 3;
				}
			}
			else
			{
				iLocal_59 = 3;
			}
			break;
		
		case 1:
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_49, 1);
			TASK::TASK_PLAY_ANIM(iLocal_49, sLocal_73, sLocal_75, 4f, -8f, -1, 0, fLocal_57, 1, 0, 0);
			iLocal_82 = MISC::GET_GAME_TIMER();
			GlobalFunc_846(&uLocal_56);
			func_69();
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_63[0]))
			{
				ENTITY::DETACH_ENTITY(uLocal_63[0], 1, 1);
			}
			iLocal_59++;
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49, sLocal_73, sLocal_75, 3))
			{
				iVar7 = (MISC::GET_GAME_TIMER() - iLocal_82);
				fVar8 = (SYSTEM::TO_FLOAT(iVar7) / SYSTEM::TO_FLOAT(iLocal_58));
				fVar9 = (fLocal_57 - ((fLocal_57 - 0.161f) * fVar8));
				fVar9 = GlobalFunc_253(fVar9, 0.161f, fLocal_57);
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_49, sLocal_73, sLocal_75, fVar9);
				fVar10 = (fVar8 - 0.12f);
				fVar10 = GlobalFunc_253(fVar10, 0f, 0.8f);
				Var11 = { GlobalFunc_721(Local_60, Var3, fVar10) };
				ENTITY::SET_ENTITY_COORDS(iLocal_49, Var11, 0, 1, 0, 1);
				if (fVar9 == 0.161f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_49, 0);
					return 1;
				}
			}
			break;
		
		case 3:
			GlobalFunc_846(&uLocal_56);
			func_69();
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_63[0]))
			{
				ENTITY::DETACH_ENTITY(uLocal_63[0], 1, 1);
			}
			return 1;
	}
	return 0;
}


void func_69()//Position - 0x2F88
{
	if (iLocal_71 != 0)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_71, 0);
		iLocal_71 = 0;
	}
}



void func_72()//Position - 0x2FE7
{
	float fVar0;
	
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49, sLocal_73, sLocal_75, 3))
	{
		fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_49, sLocal_73, sLocal_75);
		if (fVar0 < 0.383793f)
		{
			func_69();
		}
		else if (fVar0 < 0.612112f)
		{
			func_73();
		}
		else if (fVar0 < 1f)
		{
			func_69();
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49, sLocal_73, sLocal_76, 3))
	{
		fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_49, sLocal_73, sLocal_76);
		if (fVar0 < 0.1124f)
		{
			func_69();
		}
		else if (fVar0 < 0.5566f)
		{
			func_73();
		}
		else if (fVar0 < 0.7546f)
		{
			func_69();
		}
		else if (fVar0 < 0.9f)
		{
			func_73();
		}
		else if (fVar0 < 1f)
		{
			func_69();
		}
	}
}

void func_73()//Position - 0x30A8
{
	if (iLocal_71 == 0)
	{
		iLocal_71 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(sLocal_72, uLocal_63[0], Local_77, Local_77, 1065353216, 0, 0, 0);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iLocal_71, 1f, 1f, 1f, 0);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_71, 0.2f);
	}
}

bool func_74(struct<3> Param0, struct<3> Param3)//Position - 0x30E8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar0 = PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID());
	fVar1 = GlobalFunc_253((fVar0 / 14f), 0f, 1f);
	fVar2 = SYSTEM::VDIST(Param0, Param3);
	fVar3 = (GlobalFunc_253((30f - fVar2), 0f, 30f) / 30f);
	fVar4 = (fVar1 * fVar3);
	return fVar4 > 0.25f;
}

bool func_75()//Position - 0x3141
{
	return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -334.4651f, -93.42171f, 48.57328f, -332.2641f, -82.78552f, 45.8103f, 3f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -329.1134f, -83.87273f, 45.79989f, -331.0937f, -88.05348f, 48.71878f, 3f, 0, 1, 0));
}

int func_76(int iParam0, int iParam1, float fParam2)//Position - 0x31A3
{
	float fVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && ENTITY::DOES_ENTITY_EXIST(uParam1))
	{
		fVar0 = (fParam2 * fParam2);
		return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 0), ENTITY::GET_ENTITY_COORDS(iParam1, 0)) <= fVar0;
	}
	return 0;
}

int func_77(int iParam0)//Position - 0x31DF
{
	if (!func_78(iLocal_49, iParam0) && !func_78(iLocal_49, 1805844857))
	{
		GlobalFunc_846(&uLocal_56);
		TASK::TASK_SMART_FLEE_PED(iLocal_49, PLAYER::PLAYER_PED_ID(), 9999f, -1, 1, 0);
		return 1;
	}
	return 0;
}

bool func_78(var uParam0, int iParam1)//Position - 0x3221
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1);
	return (iVar0 == 1 || iVar0 == 0);
}

void func_79(struct<3> Param0)//Position - 0x3241
{
	if (func_83(Param0))
	{
		GlobalFunc_6828(33);
	}
	else
	{
		func_144();
	}
	STREAMING::REQUEST_PTFX_ASSET();
}




int func_83(struct<3> Param0)//Position - 0x32E6
{
	if (func_89(Param0, 33, 0, 0, 0))
	{
		if (GlobalFunc_794(58))
		{
			if (func_85())
			{
				if (GlobalFunc_84())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


bool func_85()//Position - 0x339D
{
	return GlobalFunc_78(func_87(), 5);
}


int func_87()//Position - 0x33D1
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	switch (iVar0)
	{
		case joaat("player_zero"):
			return 21;
		
		case joaat("player_one"):
			return 22;
		
		case joaat("player_two"):
			return 23;
		
		default:
	}
	return -1;
}


int func_89(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x343A
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
	Local_43 = { Param0 };
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
		if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			return 0;
		}
		if (GlobalFunc_6562())
		{
			return 0;
		}
		if (GlobalFunc_2663())
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
			if ((Var1.f_2 - Local_43.f_2) > 50f)
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























































void func_144()//Position - 0x6629
{
	STREAMING::REMOVE_PTFX_ASSET();
	GlobalFunc_846(&uLocal_56);
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}













