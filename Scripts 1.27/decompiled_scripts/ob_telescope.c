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
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	char* sLocal_69 = NULL;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	char* sLocal_98 = NULL;
	char* sLocal_99 = NULL;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	bool bLocal_102 = 0;
	var uLocal_103 = 0;
	char* sLocal_104 = NULL;
	char* sLocal_105 = NULL;
	char* sLocal_106 = NULL;
	int iLocal_107 = 0;
	var uScriptParam_0 = 0;
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
	iLocal_52 = 1;
	iLocal_54 = -1;
	iLocal_55 = -1;
	iLocal_56 = -1;
	iLocal_57 = -1;
	iLocal_58 = -1;
	iLocal_59 = -1;
	iLocal_60 = -1;
	iLocal_61 = -1;
	iLocal_62 = -1;
	iLocal_63 = -1;
	fLocal_85 = -40f;
	fLocal_86 = 40f;
	fLocal_87 = -70f;
	fLocal_88 = 70f;
	fLocal_89 = 10f;
	fLocal_90 = 65f;
	fLocal_91 = fLocal_90;
	fLocal_92 = 1f;
	fLocal_93 = 50f;
	fLocal_94 = (fLocal_91 / fLocal_93);
	fLocal_97 = 0.34f;
	sLocal_98 = "MINI@TELESCOPE";
	sLocal_99 = "MINI@TELESCOPE";
	iLocal_100 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_296();
	}
	iLocal_76 = uScriptParam_0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_76))
	{
		func_295();
	}
	fLocal_72 = PAD::GET_CONTROL_NORMAL(2, 239);
	fLocal_74 = PAD::GET_CONTROL_NORMAL(2, 240);
	GlobalFunc_587();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_76))
		{
			if (func_293(iLocal_76))
			{
				GRAPHICS::DRAW_DEBUG_TEXT_2D("SCOPE FALLEN", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
				bLocal_102 = true;
			}
			else
			{
				GRAPHICS::DRAW_DEBUG_TEXT_2D("SCOPE UPRIGHT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
				bLocal_102 = false;
			}
			if (!bLocal_64)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_76, true);
			}
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_76))
			{
				switch (iLocal_51)
				{
					case 0:
						uLocal_78 = unk_0x67D02A194A2FC2BD("observatory_scope");
						STREAMING::REQUEST_ANIM_DICT(sLocal_98);
						STREAMING::REQUEST_ANIM_DICT(sLocal_99);
						while ((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_78) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_98)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_99))
						{
							AUDIO::HINT_AMBIENT_AUDIO_BANK("TELESCOPES", 0);
							SYSTEM::WAIT(0);
						}
						func_292();
						iLocal_51 = 1;
						break;
					
					case 1:
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && GlobalFunc_5085())
						{
							func_4();
						}
						else if (CAM::DOES_CAM_EXIST(uLocal_77))
						{
							func_1();
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_296();
			}
		}
		else
		{
			func_296();
		}
	}
}

void func_1()//Position - 0x227
{
	HUD::CLEAR_HELP(1);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	if (CAM::IS_CAM_ACTIVE(uLocal_77))
	{
		CAM::SET_CAM_ACTIVE(uLocal_77, 0);
	}
	CAM::DESTROY_CAM(uLocal_77, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	GRAPHICS::POP_TIMECYCLE_MODIFIER();
	if (!GlobalFunc_5459(PLAYER::PLAYER_PED_ID()))
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
}



void func_4()//Position - 0x2DE
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	
	if (bLocal_64)
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_76) == joaat("prop_telescope"))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_76, 0.02f, -0.78f, 0f) };
			sLocal_104 = "UPRIGHT_ENTER_FRONT";
			sLocal_105 = "UPRIGHT_IDLE";
			sLocal_106 = "UPRIGHT_EXIT_FRONT";
		}
		else
		{
			if (Global_68245)
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_76, -0.03f, 0.96f, 0f) };
			}
			else
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_76, 0.2f, 0.96f, 0f) };
			}
			sLocal_104 = "PUBLIC_ENTER_FRONT";
			sLocal_105 = "PUBLIC_IDLE";
			sLocal_106 = "PUBLIC_EXIT_FRONT";
		}
	}
	else
	{
		if (Global_68245)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_76, 1.14f, 0.02f, 0f) };
		}
		else
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_76, 1f, -0.4f, 0f) };
		}
		sLocal_104 = "ENTER_FRONT";
		sLocal_105 = "IDLE";
		sLocal_106 = "EXIT_FRONT";
		if (24 <= 31)
		{
			iVar3 = 9;
			iVar4 = 24;
		}
		else
		{
			iVar3 = 10;
			iVar4 = (24 - 31);
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_217[iVar3], iVar4))
		{
			return;
		}
	}
	Var5 = { 1.2f, 1.2f, 1.2f };
	if (bLocal_64)
	{
		if (iLocal_55 > 0)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_55 + 50500))
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_57))
				{
					if (MISC::GET_GAME_TIMER() < (iLocal_55 + 60000))
					{
						func_289();
					}
					else
					{
						if (iLocal_52 != 2)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1045468327) == 7)
							{
								iLocal_55 = -1;
							}
						}
						AUDIO::STOP_SOUND(iLocal_58);
						AUDIO::STOP_SOUND(iLocal_61);
						AUDIO::STOP_SOUND(iLocal_62);
						AUDIO::STOP_SOUND(iLocal_59);
					}
				}
			}
		}
	}
	switch (iLocal_52)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, (Var5.x * 2f), (Var5.f_1 * 2f), Var5.f_2, 0, 1, 0))
				{
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_76))
					{
						AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TELESCOPES", 0);
						if (bLocal_64)
						{
							if (!GlobalFunc_74("TELECSH"))
							{
								if (GlobalFunc_469(GlobalFunc_8315()) > 0 || MISC::GET_GAME_TIMER() < (iLocal_55 + 60000))
								{
									iLocal_52 = 1;
								}
							}
						}
						else
						{
							iLocal_52 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(uLocal_103, 0))
			{
				if (!Global_90014.f_1318)
				{
					MISC::CLEAR_BIT(&uLocal_103, 0);
				}
			}
			if (GlobalFunc_552(1, 0, 1) && func_278(PLAYER::PLAYER_ID()))
			{
				ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, 0.5f, 0.5f, 1f, 0, 1, 0);
				if ((((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, Var5.x, Var5.f_1, Var5.f_2, 0, 1, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && func_276(Var0)) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_76)) && func_275()) && func_274()) && !bLocal_102)
				{
					if ((func_271() || MISC::GET_GAME_TIMER() < (iLocal_55 + 60000)) || !bLocal_64)
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (bLocal_64)
							{
								if (MISC::GET_GAME_TIMER() < (iLocal_55 + 60000))
								{
									sLocal_101 = "TELEHOME";
								}
								else
								{
									if (MISC::ARE_STRINGS_EQUAL(sLocal_101, "TELEHOME"))
									{
										GlobalFunc_5084(&iLocal_54);
									}
									sLocal_101 = "TELEHLP";
								}
							}
							if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, Var5, 0, 1, 0) && !GlobalFunc_153(8, -1)) && !GlobalFunc_1594())
							{
								if (iLocal_54 == -1)
								{
									GlobalFunc_6774(&iLocal_54, 3, sLocal_101, 0, 0);
								}
								if (GlobalFunc_5079(iLocal_54, 1))
								{
									iLocal_49 = func_263(PLAYER::PLAYER_PED_ID(), 1, -1);
									if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
									{
									}
									HUD::CLEAR_HELP(1);
									func_295();
									if (!Global_68245)
									{
										if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 14.53664f, 529.3154f, 173.6282f, 12.65681f, 528.8023f, 175.8782f, 2f, 0, 1, 0))
										{
											Var8 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iLocal_76) };
											Var11 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_98, sLocal_104, ENTITY::GET_ENTITY_COORDS(iLocal_76, 1), Var8, 0, 2) };
											Var14 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_98, sLocal_104, ENTITY::GET_ENTITY_COORDS(iLocal_76, 1), Var8, 0, 2) };
											TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var11, 1f, 20000, Var14.f_2, 0.05f);
										}
										else
										{
											GlobalFunc_702(1, 1, 1);
											func_261();
											func_253();
										}
										FIRE::STOP_FIRE_IN_RANGE(Var0, 10f);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
										Global_24696 = 1;
										GlobalFunc_8380(1, 1, 1, 0);
									}
									else
									{
										Var17 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iLocal_76) };
										Var20 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_98, sLocal_104, ENTITY::GET_ENTITY_COORDS(iLocal_76, 1), Var17, 0, 2) };
										Var23 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_98, sLocal_104, ENTITY::GET_ENTITY_COORDS(iLocal_76, 1), Var17, 0, 2) };
										GlobalFunc_702(1, 1, 1);
										TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var20, 1f, 20000, Var23.f_2, 0.05f);
										ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_76, 1);
										GlobalFunc_969();
										GlobalFunc_7467(PLAYER::PLAYER_ID(), 0, 66048, 1);
										Global_2446554.f_4379 = 1;
									}
									if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
									{
										PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_76, 1)));
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 0, 0, 0);
										PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 69, 1);
									}
									WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_53, 1);
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
									GlobalFunc_5084(&iLocal_54);
									PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_52 = 2;
									PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Ob_Telescope");
									iLocal_107 = 1;
								}
							}
							else
							{
								GlobalFunc_5084(&iLocal_54);
							}
						}
						else
						{
							GlobalFunc_5084(&iLocal_54);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						GlobalFunc_5084(&iLocal_54);
						GlobalFunc_159("TELECSH", -1);
					}
					else
					{
						if (iLocal_54 == -1)
						{
							GlobalFunc_6774(&iLocal_54, 3, "TELEHLP", 0, 0);
						}
						if (GlobalFunc_5079(iLocal_54, 1))
						{
							if (!MISC::IS_BIT_SET(uLocal_103, 0))
							{
								GlobalFunc_7677(0, 31, 5);
								MISC::SET_BIT(&uLocal_103, 0);
							}
						}
					}
				}
				else
				{
					GlobalFunc_5084(&iLocal_54);
				}
			}
			else
			{
				GlobalFunc_5084(&iLocal_54);
			}
			break;
		
		case 2:
			if (func_278(PLAYER::PLAYER_ID()))
			{
				if (!Global_68245)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 14.53664f, 529.3154f, 173.6282f, 12.65681f, 528.8023f, 175.8782f, 2f, 0, 1, 0))
					{
						func_253();
					}
				}
				if (Global_68245)
				{
					func_87(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					if (GlobalFunc_6742(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, func_263(PLAYER::PLAYER_PED_ID(), 14, 0)))
					{
						PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
					}
					func_50(PLAYER::PLAYER_PED_ID(), 4, -1, -1);
					if (GlobalFunc_1671(PLAYER::PLAYER_PED_ID(), 7))
					{
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
					}
					if (GlobalFunc_1670(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_5474(PLAYER::PLAYER_PED_ID());
						iLocal_50 = 1;
					}
				}
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_76, 1)));
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 69, 1);
				}
				if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 7 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1)
				{
					GlobalFunc_187();
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 14.53664f, 529.3154f, 173.6282f, 12.65681f, 528.8023f, 175.8782f, 2f, 0, 1, 0))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(PLAYER::PLAYER_PED_ID(), sLocal_98, sLocal_104, ENTITY::GET_ENTITY_COORDS(iLocal_76, 1), ENTITY::GET_ENTITY_ROTATION(iLocal_76, 2), 2f, 0.1f, -1, 1576960, 0, 2, 0);
					}
					iLocal_52 = 3;
				}
				else if (SYSTEM::TIMERA() > 2500)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if (!Global_68245)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						GlobalFunc_8380(0, 1, 1, 0);
						Global_24696 = 0;
					}
					else
					{
						GlobalFunc_968();
						GlobalFunc_7467(PLAYER::PLAYER_ID(), 1, 0, 1);
						GlobalFunc_702(0, 0, 1);
						Global_2446554.f_4379 = 0;
					}
					GlobalFunc_702(0, 0, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_53, 1);
					iLocal_52 = 1;
				}
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (!Global_68245)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					GlobalFunc_8380(0, 1, 1, 0);
					Global_24696 = 0;
				}
				else
				{
					GlobalFunc_968();
					GlobalFunc_7467(PLAYER::PLAYER_ID(), 1, 0, 1);
					GlobalFunc_702(0, 0, 1);
					Global_2446554.f_4379 = 0;
				}
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_53, 1);
				iLocal_52 = 1;
			}
			break;
		
		case 3:
			if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -2017877118) == 7 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -2017877118) != 0) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -2017877118) != 1)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 14.53664f, 529.3154f, 173.6282f, 12.65681f, 528.8023f, 175.8782f, 2f, 0, 1, 0))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(PLAYER::PLAYER_PED_ID(), sLocal_98, sLocal_105, ENTITY::GET_ENTITY_COORDS(iLocal_76, 1), ENTITY::GET_ENTITY_ROTATION(iLocal_76, 2), 2f, 0.1f, -1, 1576961, 0, 2, 0);
				}
				if (bLocal_64)
				{
					if (iLocal_55 == -1)
					{
						iLocal_55 = MISC::GET_GAME_TIMER();
						func_6();
					}
				}
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 14.53664f, 529.3154f, 173.6282f, 12.65681f, 528.8023f, 175.8782f, 2f, 0, 1, 0))
				{
					func_261();
				}
				func_253();
				if (!Global_68245)
				{
					MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 10f, 0);
				}
				iLocal_52 = 4;
			}
			break;
		
		case 4:
			PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
			if (func_278(PLAYER::PLAYER_ID()) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, 1f, 1f, 1.5f, 0, 1, 0))
			{
				GlobalFunc_187();
				func_253();
				if (!GlobalFunc_74("TELEUSE"))
				{
					GlobalFunc_1("TELEUSE");
				}
				if ((PAD::IS_CONTROL_JUST_PRESSED(2, 51) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 200)) || bLocal_102)
				{
					iLocal_52 = 5;
				}
				else if (bLocal_64)
				{
					if (MISC::GET_GAME_TIMER() > (iLocal_55 + 60000))
					{
						iLocal_52 = 5;
					}
				}
				if (!iLocal_65)
				{
					iLocal_65 = 1;
				}
			}
			else
			{
				func_1();
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (!Global_68245)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					GlobalFunc_8380(0, 1, 1, 0);
					Global_24696 = 0;
				}
				else
				{
					GlobalFunc_968();
					GlobalFunc_7467(PLAYER::PLAYER_ID(), 1, 0, 1);
					GlobalFunc_702(0, 0, 1);
					Global_2446554.f_4379 = 0;
				}
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_53, 1);
				iLocal_52 = 1;
			}
			break;
		
		case 5:
			if (iLocal_50 == 1)
			{
				GlobalFunc_5474(PLAYER::PLAYER_PED_ID());
				iLocal_50 = 0;
			}
			func_87(PLAYER::PLAYER_PED_ID(), 1, iLocal_49, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			AUDIO::STOP_SOUND(iLocal_61);
			AUDIO::STOP_SOUND(iLocal_62);
			AUDIO::STOP_SOUND(iLocal_59);
			if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TELESCOPES", 0))
			{
				AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
			}
			AUDIO::HINT_AMBIENT_AUDIO_BANK("TELESCOPES", 0);
			iLocal_65 = 0;
			func_1();
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 14.53664f, 529.3154f, 173.6282f, 12.65681f, 528.8023f, 175.8782f, 2f, 0, 1, 0))
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_99, sLocal_106, 2f, -4f, -1, 1048576, 0f, 0, 0, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_99, sLocal_106, 2f, -4f, -1, 1048576, 0f, 0, 0, 0);
				}
			}
			if (!Global_68245)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				GlobalFunc_8380(0, 1, 1, 0);
				Global_24696 = 0;
			}
			else
			{
				GlobalFunc_968();
				GlobalFunc_7467(PLAYER::PLAYER_ID(), 1, 0, 1);
				GlobalFunc_702(0, 0, 1);
				Global_2446554.f_4379 = 0;
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_53, 1);
			if (GlobalFunc_74("TELEUSE"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (iLocal_107)
			{
				PAD::_RESET_INPUT_MAPPING_SCHEME();
				iLocal_107 = 0;
			}
			iLocal_52 = 1;
			break;
	}
}


void func_6()//Position - 0xE43
{
	var uVar0;
	
	if (bLocal_64)
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_56, "Insert_Coin", iLocal_76, sLocal_69, 0, 0);
		AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_58, "Timer", iLocal_76, sLocal_69, 0, 0);
		if (Global_68245)
		{
			GlobalFunc_5283(-iLocal_100, 1, 1, 0f);
			if (GlobalFunc_218())
			{
				GlobalFunc_8416(650665123, 1, &uVar0, 0, 0);
			}
			else
			{
				MONEY::NETWORK_SPENT_TELESCOPE(1, 0, 0);
			}
		}
		else
		{
			GlobalFunc_10834(GlobalFunc_8315(), 1, iLocal_100);
		}
	}
}












































void func_50(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x26D6
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_68175[iVar1] = -1;
		Global_68175.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_68175.f_26)
	{
		Global_68175.f_26[iVar1] = -1;
		Global_68175.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_68175.f_46)
	{
		Global_68175.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (GlobalFunc_8457(iParam0, &Global_68175, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_68175[iVar1] != -1)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar1) == Global_68175[iVar1] && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar1) == Global_68175.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_68175.f_26)
		{
			if (Global_68175.f_26[iVar1] != -1 && Global_68175.f_26[iVar1] != 255)
			{
				if (PED::GET_PED_PROP_INDEX(iParam0, iVar1) == Global_68175.f_26[iVar1] && PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iVar1) == Global_68175.f_36[iVar1])
				{
					PED::CLEAR_PED_PROP(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!GlobalFunc_456())
			{
				if (GlobalFunc_6707(161, -1))
				{
					func_87(iParam0, 2, GlobalFunc_6709(2035, Global_68104, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				else
				{
					func_87(iParam0, 2, GlobalFunc_6709(740, Global_68104, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(PLAYER::INT_TO_PLAYERINDEX(iParam2)))
					{
						NETWORK::NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(iParam0, PLAYER::INT_TO_PLAYERINDEX(iParam2));
					}
				}
				else
				{
					GlobalFunc_9102(iParam0, -1);
				}
			}
			GlobalFunc_1022(0);
			GlobalFunc_8911(0, 0);
		}
	}
}





































int func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x6EAA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar31;
	var uVar41;
	int iVar57;
	var uVar58;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	var uVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	var uVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1315831 != 4 && Global_1315831 != 5) && Global_1315831 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_219 == 2)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10899(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		func_184(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_68149 };
		}
		else
		{
			uVar15 = { GlobalFunc_7617(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10899(iVar5, 10, 0) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
					}
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
					{
						func_184(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10899(iVar5, iVar0, uVar15[iVar0]) };
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = { Global_68165 };
							}
							else
							{
								uVar31 = { GlobalFunc_7616(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_68106[1 /*14*/] = { GlobalFunc_10899(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									func_184(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iParam4 == -1)
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
							}
							else
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
							}
							if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
							{
								func_184(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10899(iVar5, iVar0, func_263(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_87(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9107();
			if (iVar57 != -1)
			{
				GlobalFunc_9106(iVar57, 0, Global_68104);
			}
			func_171(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10899(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				func_184(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11152(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_87(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar68 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar68, joaat("FORCE_PROP"), 0))
		{
			iVar69 = GlobalFunc_6669(iParam0, 1);
			iVar3 = GlobalFunc_11152(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			func_184(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11152(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_87(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar70 = GlobalFunc_6669(iParam0, 11);
				iVar71 = GlobalFunc_6669(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_6669(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = GlobalFunc_11152(iParam0, iVar5, 11, iVar70, 3, 0);
					}
					if (iVar73 != -99)
					{
						iVar74 = iVar73;
						iVar75 = 0;
						while (iVar75 < 9)
						{
							if (GlobalFunc_308(iVar5, iVar74, iVar75) == iVar72)
							{
								iVar11 = iVar75;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar75++;
						}
					}
				}
				iVar76 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar70 = GlobalFunc_6669(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_87(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10899(iVar5, iParam1, iParam2) };
						}
					}
				}
				else if (GlobalFunc_6737(iVar5, iParam2))
				{
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (!GlobalFunc_6737(iVar5, iVar70))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_12"), 0)))
						{
						}
						else
						{
							iVar78 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar78 != -99)
							{
								func_87(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10899(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_87(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10899(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10899(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10899(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10899(iVar5, 8, iVar71) };
							iVar81 = Global_68106[1 /*14*/].f_4;
							iVar82 = GlobalFunc_6736(iVar5, iVar71, iVar81);
							if (iVar82 == -99)
							{
								iVar83 = iVar71;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || GlobalFunc_306(GlobalFunc_4913(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar82 = GlobalFunc_5013(iVar5, 11, -1);
										Global_68106[1 /*14*/] = { GlobalFunc_10899(iVar5, 11, iVar82) };
										iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, Global_68106[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, iVar81);
							}
							if (iVar83 != -99)
							{
								func_87(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_87(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10899(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10679(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_171(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, func_263(iParam0, 8, -1), iParam2);
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = GlobalFunc_6709(2135, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = GlobalFunc_6709(2142, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_123(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_171(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10679(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_6669(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_6669(iParam0, 7);
				if (!GlobalFunc_8360(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar87 = GlobalFunc_6709(2082, iParam10, 0);
				iVar88 = GlobalFunc_6709(2083, iParam10, 0);
				iVar89 = GlobalFunc_6709(2084, iParam10, 0);
				uVar90 = GlobalFunc_6788(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar87, iVar88, iVar89, 0f, uVar90, 0f, 0);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar87, iVar88, iVar89, 0f, fVar90, 0f, 0);
				}
				iVar91 = 0;
				while (iVar91 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar91, 0f);
					iVar91++;
				}
			}
			else
			{
				GlobalFunc_9102(iParam0, Global_68104);
			}
			iVar92 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar93 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar92, joaat("FORCE_PROP"), 0))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar93, joaat("FORCE_PROP"), 0))
				{
					iVar94 = GlobalFunc_6669(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = GlobalFunc_11152(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7614(iParam0, iVar95);
						if (iVar3 == iVar96)
						{
							PED::CLEAR_PED_PROP(iParam0, iVar95);
						}
						iVar95++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11152(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_87(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7688(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!GlobalFunc_11023(iParam0, 9, iVar97))
						{
							func_87(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_87(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_87(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar98 = GlobalFunc_6709(2024, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, GlobalFunc_5005(iParam0, iVar98), GlobalFunc_282(iParam0, iVar98), GlobalFunc_81(iParam0, iVar98));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, GlobalFunc_5005(PLAYER::PLAYER_PED_ID(), iVar98), GlobalFunc_282(PLAYER::PLAYER_PED_ID(), iVar98), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), GlobalFunc_81(PLAYER::PLAYER_PED_ID(), iVar98));
					GlobalFunc_5004(PLAYER::PLAYER_ID(), iVar98);
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar99 = func_263(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = func_263(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_87(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_87(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				GlobalFunc_5003(iParam0);
				iVar102 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar103 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar104 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar102, iVar103);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar104, joaat("FORCE_PROP"), 0))
				{
					iVar3 = GlobalFunc_11152(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_87(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11152(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_87(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_89(iParam0, &uVar4))
		{
			func_87(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_87(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_87(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_87(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar105 = GlobalFunc_308(iVar5, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), iVar11);
		if (iVar105 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_87(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}


int func_89(int iParam0, var uParam1)//Position - 0x8052
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_263(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (GlobalFunc_6709(741, Global_68104, 0) != -99 && GlobalFunc_6714())
	{
		if (GlobalFunc_278() == 4)
		{
			return 1;
		}
		if (GlobalFunc_6709(741, Global_68104, 0) == 0 && GlobalFunc_6709(742, Global_68104, 0) == 0)
		{
			if (GlobalFunc_6707(161, Global_68104))
			{
				if (GlobalFunc_6709(2035, Global_68104, 0) == 0)
				{
					return 0;
				}
			}
			else if (GlobalFunc_6709(740, Global_68104, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = GlobalFunc_6709(741, Global_68104, 0);
		iVar1 = GlobalFunc_6709(742, Global_68104, 0);
		if (!GlobalFunc_11023(iParam0, iVar1, iVar0))
		{
			if (GlobalFunc_6707(161, Global_68104))
			{
				*uParam1 = GlobalFunc_6709(2035, Global_68104, 0);
			}
			else
			{
				*uParam1 = GlobalFunc_6709(740, Global_68104, 0);
			}
			GlobalFunc_6784(741, -99, Global_68104, 1);
			GlobalFunc_6784(742, 2, Global_68104, 1);
			return 1;
		}
	}
	return 0;
}


































void func_123(int iParam0, int iParam1, bool bParam2)//Position - 0xD6A4
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_152(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9106(iVar1, 1, Global_68104);
	}
	func_124(iParam0, bParam2, 0);
}

void func_124(int iParam0, bool bParam1, bool bParam2)//Position - 0xD6E6
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_68104;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar14 = GlobalFunc_303(iParam0);
		bVar15 = func_145(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = func_142(iParam0);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (GlobalFunc_8500(iVar18, iVar0))
			{
				if (GlobalFunc_5134(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9103(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8500(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar20 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar14, iVar19, &Var21))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var21))
				{
					iVar36 = (129 + iVar19);
					if (GlobalFunc_8500(iVar36, iVar0))
					{
						if (GlobalFunc_9103(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var21.f_2, Var21.f_3);
							GlobalFunc_294(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}


















int func_142(int iParam0)//Position - 0x112F4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6709(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar2 = func_263(iParam0, 11, -1);
				if (iVar2 >= 256)
				{
					iVar3 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar2, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_M_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6709(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar4 = func_263(iParam0, 11, -1);
				if (iVar4 >= 256)
				{
					iVar5 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar4, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_F_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}



int func_145(int iParam0)//Position - 0x114C3
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
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar2 = func_263(iParam0, 11, -1);
						if (iVar2 >= 237)
						{
							iVar3 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar2, 11, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar4 = func_263(iParam0, 8, -1);
						if (iVar4 >= 241)
						{
							iVar5 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar4, 8, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
						case 7:
						case 4:
						case 9:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar6 = func_263(iParam0, 11, -1);
						if (iVar6 >= 256)
						{
							iVar7 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar6, 11, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_263(iParam0, 8, -1);
						if (iVar8 >= 136)
						{
							iVar9 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar8, 8, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
		}
		if (GlobalFunc_302(iParam0))
		{
			return 1;
		}
	}
	return 0;
}







void func_152(int iParam0, int iParam1)//Position - 0x1451F
{
	struct<12> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<7> Var16;
	int iVar31;
	int iVar32;
	struct<7> Var33;
	int iVar48;
	int iVar49;
	struct<7> Var50;
	int iVar65;
	int iVar66;
	struct<7> Var67;
	int iVar82;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		iVar13 = GlobalFunc_303(iParam1);
		if (iParam0 != 0)
		{
			if (iVar13 == 3 || iVar13 == 4)
			{
				if (iParam0 == 1019352240)
				{
					GlobalFunc_9106(13, 0, Global_68104);
					GlobalFunc_9106(14, 0, Global_68104);
					GlobalFunc_9106(15, 0, Global_68104);
					GlobalFunc_9106(16, 0, Global_68104);
					GlobalFunc_9106(71, 0, Global_68104);
					GlobalFunc_9106(72, 0, Global_68104);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar13 == 3)
					{
						GlobalFunc_9106(73, 0, Global_68104);
						GlobalFunc_9106(74, 0, Global_68104);
						GlobalFunc_9106(75, 0, Global_68104);
						GlobalFunc_9106(76, 0, Global_68104);
						GlobalFunc_9106(77, 0, Global_68104);
						GlobalFunc_9106(78, 0, Global_68104);
						GlobalFunc_9106(79, 0, Global_68104);
						GlobalFunc_9106(80, 0, Global_68104);
						GlobalFunc_9106(81, 0, Global_68104);
						GlobalFunc_9106(82, 0, Global_68104);
						GlobalFunc_9106(83, 0, Global_68104);
						GlobalFunc_9106(84, 0, Global_68104);
						GlobalFunc_9106(85, 0, Global_68104);
						GlobalFunc_9106(86, 0, Global_68104);
						GlobalFunc_9106(90, 0, Global_68104);
						GlobalFunc_9106(91, 0, Global_68104);
						GlobalFunc_9106(124, 0, Global_68104);
						GlobalFunc_9106(125, 0, Global_68104);
						GlobalFunc_9106(87, 0, Global_68104);
						GlobalFunc_9106(88, 0, Global_68104);
						GlobalFunc_9106(89, 0, Global_68104);
						iVar15 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar14 = 0;
						while (iVar14 < iVar15)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar14, &Var16))
							{
								if (Var16.f_6 == 277073536)
								{
									GlobalFunc_9106((129 + iVar14), 0, Global_68104);
								}
							}
							iVar14++;
						}
					}
					else
					{
						GlobalFunc_9106(73, 0, Global_68104);
						GlobalFunc_9106(74, 0, Global_68104);
						GlobalFunc_9106(75, 0, Global_68104);
						GlobalFunc_9106(76, 0, Global_68104);
						GlobalFunc_9106(77, 0, Global_68104);
						GlobalFunc_9106(78, 0, Global_68104);
						GlobalFunc_9106(79, 0, Global_68104);
						GlobalFunc_9106(80, 0, Global_68104);
						GlobalFunc_9106(81, 0, Global_68104);
						GlobalFunc_9106(82, 0, Global_68104);
						GlobalFunc_9106(83, 0, Global_68104);
						GlobalFunc_9106(84, 0, Global_68104);
						GlobalFunc_9106(85, 0, Global_68104);
						GlobalFunc_9106(92, 0, Global_68104);
						GlobalFunc_9106(87, 0, Global_68104);
						GlobalFunc_9106(88, 0, Global_68104);
						GlobalFunc_9106(89, 0, Global_68104);
						iVar32 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar31 = 0;
						while (iVar31 < iVar32)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar31, &Var33))
							{
								if (Var33.f_6 == 277073536)
								{
									GlobalFunc_9106((129 + iVar31), 0, Global_68104);
								}
							}
							iVar31++;
						}
					}
				}
				else if (iParam0 == 2140335355)
				{
					if (iVar13 == 3)
					{
						GlobalFunc_9106(93, 0, Global_68104);
						GlobalFunc_9106(94, 0, Global_68104);
						GlobalFunc_9106(95, 0, Global_68104);
						GlobalFunc_9106(96, 0, Global_68104);
						GlobalFunc_9106(97, 0, Global_68104);
						GlobalFunc_9106(98, 0, Global_68104);
						GlobalFunc_9106(99, 0, Global_68104);
						GlobalFunc_9106(100, 0, Global_68104);
						GlobalFunc_9106(101, 0, Global_68104);
						GlobalFunc_9106(102, 0, Global_68104);
						GlobalFunc_9106(103, 0, Global_68104);
						GlobalFunc_9106(104, 0, Global_68104);
						GlobalFunc_9106(105, 0, Global_68104);
						GlobalFunc_9106(106, 0, Global_68104);
						GlobalFunc_9106(107, 0, Global_68104);
						GlobalFunc_9106(108, 0, Global_68104);
						GlobalFunc_9106(109, 0, Global_68104);
						GlobalFunc_9106(110, 0, Global_68104);
						GlobalFunc_9106(111, 0, Global_68104);
						GlobalFunc_9106(112, 0, Global_68104);
						GlobalFunc_9106(113, 0, Global_68104);
						GlobalFunc_9106(114, 0, Global_68104);
						GlobalFunc_9106(115, 0, Global_68104);
						GlobalFunc_9106(116, 0, Global_68104);
						GlobalFunc_9106(117, 0, Global_68104);
						GlobalFunc_9106(123, 0, Global_68104);
						iVar49 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar48 = 0;
						while (iVar48 < iVar49)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar48, &Var50))
							{
								if (Var50.f_6 == 2140335355)
								{
									GlobalFunc_9106((129 + iVar48), 0, Global_68104);
								}
							}
							iVar48++;
						}
					}
					else
					{
						GlobalFunc_9106(93, 0, Global_68104);
						GlobalFunc_9106(94, 0, Global_68104);
						GlobalFunc_9106(95, 0, Global_68104);
						GlobalFunc_9106(96, 0, Global_68104);
						GlobalFunc_9106(97, 0, Global_68104);
						GlobalFunc_9106(98, 0, Global_68104);
						GlobalFunc_9106(99, 0, Global_68104);
						GlobalFunc_9106(100, 0, Global_68104);
						GlobalFunc_9106(101, 0, Global_68104);
						GlobalFunc_9106(102, 0, Global_68104);
						GlobalFunc_9106(103, 0, Global_68104);
						GlobalFunc_9106(104, 0, Global_68104);
						GlobalFunc_9106(105, 0, Global_68104);
						GlobalFunc_9106(106, 0, Global_68104);
						GlobalFunc_9106(107, 0, Global_68104);
						GlobalFunc_9106(108, 0, Global_68104);
						GlobalFunc_9106(109, 0, Global_68104);
						GlobalFunc_9106(110, 0, Global_68104);
						GlobalFunc_9106(111, 0, Global_68104);
						GlobalFunc_9106(112, 0, Global_68104);
						GlobalFunc_9106(113, 0, Global_68104);
						GlobalFunc_9106(114, 0, Global_68104);
						GlobalFunc_9106(115, 0, Global_68104);
						GlobalFunc_9106(116, 0, Global_68104);
						GlobalFunc_9106(117, 0, Global_68104);
						GlobalFunc_9106(118, 0, Global_68104);
						GlobalFunc_9106(119, 0, Global_68104);
						GlobalFunc_9106(120, 0, Global_68104);
						GlobalFunc_9106(121, 0, Global_68104);
						GlobalFunc_9106(122, 0, Global_68104);
						GlobalFunc_9106(123, 0, Global_68104);
						iVar66 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar65 = 0;
						while (iVar65 < iVar66)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar65, &Var67))
							{
								if (Var67.f_6 == 2140335355)
								{
									GlobalFunc_9106((129 + iVar65), 0, Global_68104);
								}
							}
							iVar65++;
						}
					}
					return;
				}
			}
			iVar82 = 0;
			while (iVar82 < 127)
			{
				if (GlobalFunc_5134(&Var0, iVar82, iVar13, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						GlobalFunc_9106(Var0.f_11, 0, Global_68104);
					}
				}
				iVar82++;
			}
		}
	}
}



















void func_171(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x19E7C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (GlobalFunc_6737(iVar0, iParam2))
				{
					iParam1 = 8;
					iParam2 = GlobalFunc_6669(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = GlobalFunc_6669(iParam0, 11);
				if (!GlobalFunc_6737(iVar0, iVar1))
				{
					return;
				}
			}
			func_152(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!GlobalFunc_9938(iVar0, iParam2, 13) && !GlobalFunc_9938(iVar0, iParam2, 14)) && !GlobalFunc_9938(iVar0, iParam2, 15)) && !GlobalFunc_9938(iVar0, iParam2, 16)) && !GlobalFunc_9938(iVar0, iParam2, 71)) && !GlobalFunc_9938(iVar0, iParam2, 72))
				{
					func_152(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = GlobalFunc_9104(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					GlobalFunc_9542(iParam0, iVar2);
				}
				else
				{
					GlobalFunc_9106(iVar2, 1, Global_68104);
				}
			}
		}
	}
}













void func_184(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1CCCD
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9[2];
	struct<2> Var12;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	struct<2> Var33;
	int iVar50;
	int iVar51;
	int iVar52;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_68104 != GlobalFunc_5() || iParam2 == -99)
		{
			return;
		}
		Global_68106[2 /*14*/] = { GlobalFunc_10899(iParam0, iParam1, iParam2) };
		if (MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				GlobalFunc_7901(Global_2621444, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				GlobalFunc_7901(Global_2621444, 2, 1, 1, -1);
			}
			else
			{
				GlobalFunc_7901(Global_2621444, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2621444);
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar1 < Global_2542253)
					{
						Global_2542253[iVar1] = -1;
						Global_2542364[iVar1] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2621444, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10)
					{
						if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							GlobalFunc_7901(iVar2, 2, 1, 1, -1);
							if (iVar1 < Global_2542253)
							{
								Global_2542253[iVar1] = iVar2;
								Global_2542364[iVar1] = iVar4;
							}
						}
						else
						{
							func_184(iParam0, GlobalFunc_33(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_2542252++;
				if (Global_2542252 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar0)
					{
						if (iVar1 < Global_2542253)
						{
							if (Global_2542253[iVar1] != -1)
							{
								if (iParam0 == joaat("mp_m_freemode_01"))
								{
									func_184(iParam0, GlobalFunc_33(Global_2542364[iVar1]), GlobalFunc_4914(iParam0, Global_2542253[iVar1], GlobalFunc_33(Global_2542364[iVar1]), 3), 1);
								}
								else
								{
									func_184(iParam0, GlobalFunc_33(Global_2542364[iVar1]), GlobalFunc_4914(iParam0, Global_2542253[iVar1], GlobalFunc_33(Global_2542364[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_2542252 = (Global_2542252 - 1);
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 1) && !MISC::IS_BIT_SET(Global_68106[2 /*14*/].f_6, 6))
		{
			if (GlobalFunc_36(iParam1, Global_68106[1 /*14*/].f_2, &iVar5))
			{
				iVar6 = GlobalFunc_6709(iVar5, Global_68104, 0);
				MISC::SET_BIT(&iVar6, Global_68106[2 /*14*/].f_1);
				GlobalFunc_6784(iVar5, iVar6, Global_68104, 1);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("mp_m_freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar7 = (75 + Global_68106[2 /*14*/].f_4);
							func_184(iParam0, 14, iVar7, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar7 = (83 + Global_68106[2 /*14*/].f_4);
							func_184(iParam0, 14, iVar7, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar7 = (64 + Global_68106[2 /*14*/].f_4);
							func_184(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar7 = (48 + Global_68106[2 /*14*/].f_4);
							func_184(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar7 = (112 + Global_68106[2 /*14*/].f_4);
							func_184(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar7 = (96 + Global_68106[2 /*14*/].f_4);
							func_184(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar7 = (160 + Global_68106[2 /*14*/].f_4);
							func_184(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar7 = (176 + Global_68106[2 /*14*/].f_4);
							func_184(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar7 = (0 + Global_68106[2 /*14*/].f_4);
							func_184(iParam0, 11, iVar7, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar7 = (16 + Global_68106[2 /*14*/].f_4);
							func_184(iParam0, 11, iVar7, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar7 = (32 + Global_68106[2 /*14*/].f_4);
							func_184(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar7 = (224 + Global_68106[2 /*14*/].f_4);
							func_184(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_0");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_0");
									break;
								
								case 221:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_1");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_1");
									break;
								
								case 222:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_2");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_2");
									break;
								
								case 223:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_3");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_3");
									break;
								
								case 224:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_4");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_4");
									break;
								
								case 225:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_5");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_5");
									break;
								
								case 226:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_6");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_6");
									break;
								
								case 227:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_7");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_7");
									break;
								
								case 228:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_8");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_8");
									break;
								
								case 229:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_9");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_9");
									break;
								
								case 230:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_10");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_10");
									break;
								
								case 231:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_11");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_11");
									break;
								
								case 232:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_12");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_12");
									break;
								
								case 233:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_13");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_13");
									break;
								
								case 234:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_14");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_14");
									break;
								
								case 235:
									iVar9[0] = joaat("DLC_MP_BUSI_M_ACCS5_15");
									iVar9[1] = joaat("DLC_MP_BUSI_M_ACCS5_15");
									break;
							}
							FILES::INIT_SHOP_PED_COMPONENT(&Var12);
							iVar31 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(3, 6, -1, 0, -1, 8);
							iVar29 = 0;
							while (iVar29 < iVar31)
							{
								FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar29, &Var12);
								if (!FILES::IS_CONTENT_ITEM_LOCKED(Var12))
								{
									if (Var12.f_1 == iVar9[0] || Var12.f_1 == iVar9[1])
									{
										func_184(iParam0, 8, (241 + iVar30), 0);
										iVar29 = iVar31 + 1;
									}
									iVar30++;
								}
								iVar29++;
							}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_68106[2 /*14*/].f_4)
							{
								case 0:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								
								case 1:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								
								case 2:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								
								case 3:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								
								case 4:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								
								case 5:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								
								case 6:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								
								case 7:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								
								case 8:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								
								case 9:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								
								case 10:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								
								case 11:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								
								case 12:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								
								case 13:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								
								case 14:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								
								case 15:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_68106[2 /*14*/].f_4)
							{
								case 0:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								
								case 1:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								
								case 2:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								
								case 3:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								
								case 4:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								
								case 5:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								
								case 6:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								
								case 7:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								
								case 8:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								
								case 9:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								
								case 10:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								
								case 11:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								
								case 12:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								
								case 13:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								
								case 14:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								
								case 15:
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_184(iParam0, 7, GlobalFunc_4914(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar7 = (16 + Global_68106[2 /*14*/].f_4);
							func_184(iParam0, 8, iVar7, 0);
						}
					}
				}
				Global_68106[2 /*14*/] = { GlobalFunc_10899(iParam0, iParam1, iParam2) };
				if (iParam1 == 11)
				{
					iVar8 = GlobalFunc_6741(iParam0, iParam2, Global_68106[2 /*14*/].f_4);
					if (iVar8 != -99)
					{
						func_184(iParam0, 8, iVar8, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_0");
								break;
							
							case 200:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_1");
								break;
							
							case 201:
								iVar32 = joaat("DLC_MP_BUSI_F_ACCS2_2");
								break;
						}
						FILES::INIT_SHOP_PED_COMPONENT(&Var33);
						iVar52 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(4, 6, -1, 0, -1, 8);
						iVar50 = 0;
						while (iVar50 < iVar52)
						{
							FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar50, &Var33);
							if (!FILES::IS_CONTENT_ITEM_LOCKED(Var33))
							{
								if (Var33.f_1 == iVar32)
								{
									func_184(iParam0, 8, (136 + iVar51), 0);
									iVar50 = iVar52 + 1;
								}
								iVar51++;
							}
							iVar50++;
						}
					}
				}
				else if (iParam1 == 8)
				{
					iVar8 = GlobalFunc_6736(iParam0, iParam2, Global_68106[2 /*14*/].f_4);
					if (iVar8 != -99)
					{
						func_184(iParam0, 11, iVar8, 0);
					}
				}
			}
		}
	}
}





































































void func_253()//Position - 0x3768A
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	
	bVar8 = true;
	bVar9 = true;
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (CAM::IS_CAM_ACTIVE(uLocal_77))
		{
			CAM::_0x271401846BD26E92(1, 0);
			VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(8f);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_78, 0, 0, 0, 255, 0);
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				GlobalFunc_255(&uVar6, &iVar7, &iVar4, &iVar5, 0, 0);
				if (!PAD::IS_LOOK_INVERTED())
				{
					iVar5 = (iVar5 * -1);
				}
				if (PAD::_IS_USING_KEYBOARD(0))
				{
					iVar4 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 290) * 127f));
					iVar5 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 291) * 127f));
				}
				if ((iVar5 > 28 || iVar5 < -28) || PAD::_IS_USING_KEYBOARD(0))
				{
					fVar0 = SYSTEM::TO_FLOAT(iVar5);
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						fVar0 = (fVar0 * -0.1f);
					}
					else
					{
						fVar0 = (fVar0 * fVar0);
						fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
						if (iVar5 < 0)
						{
							fVar0 = (fVar0 * -1f);
						}
					}
					fVar0 = (fVar0 * fLocal_94);
					fLocal_95 = (fLocal_95 + fVar0);
					if ((AUDIO::HAS_SOUND_FINISHED(iLocal_61) && !iLocal_66) && !PAD::_IS_USING_KEYBOARD(0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_62, "Turn", iLocal_76, sLocal_69, 0, 0);
					}
					if (((AUDIO::HAS_SOUND_FINISHED(iLocal_62) && !iLocal_67) && PAD::_IS_USING_KEYBOARD(0)) && func_255())
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_62, "Turn", iLocal_76, sLocal_69, 0, 0);
					}
					if ((!AUDIO::HAS_SOUND_FINISHED(iLocal_62) && PAD::_IS_USING_KEYBOARD(0)) && !func_255())
					{
						AUDIO::STOP_SOUND(iLocal_62);
					}
					bVar9 = true;
					if (fLocal_95 < fLocal_85)
					{
						fLocal_95 = fLocal_85;
						bVar9 = false;
					}
					if (fLocal_95 > fLocal_86)
					{
						fLocal_95 = fLocal_86;
						bVar9 = false;
					}
					if (fLocal_95 != fLocal_85 && fLocal_95 != fLocal_86)
					{
						iLocal_66 = 0;
					}
				}
				else
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_61))
					{
						AUDIO::STOP_SOUND(iLocal_61);
					}
					if (fLocal_95 != fLocal_85 && fLocal_95 != fLocal_86)
					{
						iLocal_66 = 0;
					}
				}
				if (bVar9)
				{
					func_254(fVar0);
				}
				else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_61))
				{
					if (!iLocal_66)
					{
						AUDIO::STOP_SOUND(iLocal_61);
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_63, "Turn_Limit", iLocal_76, sLocal_69, 0, 0);
						iLocal_66 = 1;
					}
				}
				if ((iVar4 > 28 || iVar4 < -28) || PAD::_IS_USING_KEYBOARD(0))
				{
					fVar0 = SYSTEM::TO_FLOAT(iVar4);
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						fVar0 = (fVar0 * -0.1f);
					}
					else
					{
						fVar0 = (fVar0 * fVar0);
						fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
						if (iVar4 > 0)
						{
							fVar0 = (fVar0 * -1f);
						}
					}
					fVar0 = (fVar0 * fLocal_94);
					fLocal_96 = (fLocal_96 + fVar0);
					if ((AUDIO::HAS_SOUND_FINISHED(iLocal_62) && !iLocal_67) && !PAD::_IS_USING_KEYBOARD(0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_62, "Turn", iLocal_76, sLocal_69, 0, 0);
					}
					if (((AUDIO::HAS_SOUND_FINISHED(iLocal_62) && !iLocal_67) && PAD::_IS_USING_KEYBOARD(0)) && func_255())
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_62, "Turn", iLocal_76, sLocal_69, 0, 0);
					}
					if ((AUDIO::HAS_SOUND_FINISHED(iLocal_62) && PAD::_IS_USING_KEYBOARD(0)) && !func_255())
					{
						AUDIO::STOP_SOUND(iLocal_62);
					}
					bVar9 = true;
					if (fLocal_96 < fLocal_87)
					{
						fLocal_96 = fLocal_87;
						bVar9 = false;
					}
					if (fLocal_96 > fLocal_88)
					{
						fLocal_96 = fLocal_88;
						bVar9 = false;
					}
					if (fLocal_96 != fLocal_87 && fLocal_96 != fLocal_88)
					{
						iLocal_67 = 0;
					}
				}
				else
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_62))
					{
						AUDIO::STOP_SOUND(iLocal_62);
					}
					if (fLocal_96 != fLocal_87 && fLocal_96 != fLocal_88)
					{
						iLocal_67 = 0;
					}
					bVar9 = false;
				}
				if (bVar9)
				{
					func_254(fVar0);
				}
				else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_62))
				{
					if (!iLocal_67)
					{
						AUDIO::STOP_SOUND(iLocal_62);
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_63, "Turn_Limit", iLocal_76, sLocal_69, 0, 0);
						iLocal_67 = 1;
					}
				}
				if (iVar7 > 28 || iVar7 < -28)
				{
					fVar0 = SYSTEM::TO_FLOAT(iVar7);
					fVar0 = (fVar0 * fVar0);
					fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
					fVar0 = (fVar0 * fLocal_92);
					if (iVar7 < 0)
					{
						fVar0 = (fVar0 * -1f);
					}
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_59) && !iLocal_68)
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_59, "Zoom", iLocal_76, sLocal_69, 0, 0);
					}
					bVar8 = true;
					fLocal_91 = (fLocal_91 + fVar0);
					if (fLocal_91 < fLocal_89)
					{
						fLocal_91 = fLocal_89;
						bVar8 = false;
					}
					if (fLocal_91 > fLocal_90)
					{
						fLocal_91 = fLocal_90;
						bVar8 = false;
					}
					if (fLocal_91 != fLocal_89 && fLocal_91 != fLocal_90)
					{
						iLocal_68 = 0;
					}
				}
				else
				{
					if (fLocal_91 != fLocal_89 && fLocal_91 != fLocal_90)
					{
						iLocal_68 = 0;
					}
					bVar8 = false;
				}
				if (!bVar8)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_59))
					{
						if (!iLocal_68)
						{
							AUDIO::STOP_SOUND(iLocal_59);
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_60, "Zoom_Limit", iLocal_76, sLocal_69, 0, 0);
							iLocal_68 = 1;
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 227))
				{
					fLocal_96 = 0f;
					fLocal_95 = 0f;
					fLocal_91 = 0f;
				}
				Var1 = { Local_82 };
				Var1 = { Var1 + Vector(fLocal_96, 0f, fLocal_95) };
				CAM::SET_CAM_ROT(uLocal_77, Var1, 2);
				fLocal_94 = (fLocal_91 / fLocal_93);
				if (fLocal_91 > 0f)
				{
					CAM::SET_CAM_FOV(uLocal_77, fLocal_91);
				}
				else
				{
					CAM::SET_CAM_FOV(uLocal_77, fLocal_90);
				}
			}
		}
	}
}

void func_254(float fParam0)//Position - 0x37B79
{
	if (bLocal_64)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_61))
		{
			if (fParam0 < 0f)
			{
				fParam0 = (fParam0 + (-fParam0 * 2f));
			}
			AUDIO::SET_VARIABLE_ON_SOUND(iLocal_61, "velocity", fParam0);
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_62))
		{
			if (fParam0 < 0f)
			{
				fParam0 = (fParam0 + (-fParam0 * 2f));
			}
			AUDIO::SET_VARIABLE_ON_SOUND(iLocal_62, "velocity", fParam0);
		}
	}
}

int func_255()//Position - 0x37BD4
{
	fLocal_72 = PAD::GET_CONTROL_NORMAL(2, 239);
	fLocal_74 = PAD::GET_CONTROL_NORMAL(2, 240);
	if (fLocal_72 != fLocal_73 || fLocal_74 != fLocal_75)
	{
		fLocal_73 = fLocal_72;
		fLocal_75 = fLocal_74;
		if (!GlobalFunc_439(&uLocal_70))
		{
			GlobalFunc_436(&uLocal_70, 1, 0);
		}
	}
	if (GlobalFunc_439(&uLocal_70))
	{
		if (GlobalFunc_5071(&uLocal_70, 200, 1))
		{
			GlobalFunc_434(&uLocal_70);
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}






void func_261()//Position - 0x37E05
{
	uLocal_77 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fLocal_90, 1, 2);
	CAM::SET_CAM_NEAR_CLIP(uLocal_77, 0.1f);
	CAM::_0x661B5C8654ADD825(uLocal_77, 1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::PUSH_TIMECYCLE_MODIFIER();
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_78, 0, 0, 0, 255, 0);
	GRAPHICS::SET_TIMECYCLE_MODIFIER("telescope");
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}


int func_263(int iParam0, int iParam1, int iParam2)//Position - 0x37E8F
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (GlobalFunc_11023(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (GlobalFunc_11023(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return GlobalFunc_7614(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_6669(iParam0, iParam1);
		}
	}
	return -99;
}








int func_271()//Position - 0x38229
{
	if (Global_68245)
	{
		if (GlobalFunc_5265(PLAYER::PLAYER_ID()) > 0)
		{
			return 1;
		}
	}
	else if (GlobalFunc_469(GlobalFunc_8315()) > 0)
	{
		return 1;
	}
	return 0;
}



int func_274()//Position - 0x382C4
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2359301, 16) || MISC::IS_BIT_SET(Global_2359301, 17))
		{
			return 0;
		}
	}
	else if (GlobalFunc_39(13) || GlobalFunc_39(14))
	{
		return 0;
	}
	return 1;
}

int func_275()//Position - 0x38311
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_76))
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_76) == joaat("prop_telescope_01"))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_76, 17))
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

int func_276(struct<3> Param0)//Position - 0x3834B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Param0, 3f, 0, 6);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar0 = 0;
	}
	iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iVar1, Param0, 3f, 3f, 3f, 0, 1, 0))
		{
			iVar0 = 0;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_277(Param0))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_277(struct<3> Param0)//Position - 0x383AC
{
	var uVar0[8];
	int iVar9;
	int iVar10;
	
	iVar9 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	if (iVar9 > 0)
	{
		iVar10 = 0;
		while (iVar10 <= 7)
		{
			if (!PED::IS_PED_INJURED(uVar0[iVar10]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(uVar0[iVar10], Param0, 0.5f, 0.5f, 1f, 0, 1, 0))
				{
					return 0;
				}
			}
			iVar10++;
		}
	}
	return 1;
}

int func_278(int iParam0)//Position - 0x38411
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((!GlobalFunc_1269(iParam0, 1, 1) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || func_279())
		{
			return 0;
		}
		return 1;
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_279()//Position - 0x3846F
{
	if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(PLAYER::PLAYER_PED_ID()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
		return 1;
	}
	return 0;
}










void func_289()//Position - 0x387C3
{
	if (bLocal_64)
	{
		AUDIO::STOP_SOUND(iLocal_58);
		AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_57, "10_Seconds", iLocal_76, sLocal_69, 0, 0);
	}
}



void func_292()//Position - 0x38809
{
	iLocal_56 = AUDIO::GET_SOUND_ID();
	iLocal_57 = AUDIO::GET_SOUND_ID();
	iLocal_58 = AUDIO::GET_SOUND_ID();
	iLocal_61 = AUDIO::GET_SOUND_ID();
	iLocal_62 = AUDIO::GET_SOUND_ID();
	iLocal_63 = AUDIO::GET_SOUND_ID();
	iLocal_59 = AUDIO::GET_SOUND_ID();
	iLocal_60 = AUDIO::GET_SOUND_ID();
	if (bLocal_64)
	{
		sLocal_69 = "TELESCOPE_COIN_OP";
	}
	else
	{
		sLocal_69 = "TELESCOPE_DOMESTIC";
	}
}

int func_293(int iParam0)//Position - 0x38855
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(uParam0, 2) };
	if (((Var0.x < -5f || Var0.x > 5f) || Var0.f_1 < -5f) || Var0.f_1 > 5f)
	{
		return 1;
	}
	return 0;
}


void func_295()//Position - 0x388A6
{
	var uVar0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (ENTITY::GET_ENTITY_MODEL(iLocal_76) == joaat("prop_telescope") || ENTITY::GET_ENTITY_MODEL(iLocal_76) == joaat("prop_telescope_01"))
	{
		bLocal_64 = true;
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_76), &uVar0, &Var3);
	Local_82 = { ENTITY::GET_ENTITY_ROTATION(iLocal_76, 2) };
	if (bLocal_64)
	{
		sLocal_101 = "TELEHLP";
		if (ENTITY::GET_ENTITY_MODEL(iLocal_76) == joaat("prop_telescope_01"))
		{
			Local_82.f_2 = (Local_82.f_2 - 180f);
			Var6 = { 0f, (-Var3.f_1 - 0.5f), (Var3.f_2 + 0.5f) };
		}
		else
		{
			Var6 = { 0f, Var3.f_1, Var3.f_2 };
		}
	}
	else
	{
		Local_82.f_2 = (Local_82.f_2 - 270f);
		sLocal_101 = "TELEHOME";
		Var6 = { -fLocal_97, 0f, (Var3.f_2 + 0.2f) };
	}
	if (Local_82.f_2 < 0f)
	{
		Local_82.f_2 = (Local_82.f_2 + 360f);
	}
	Local_79 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_76, Var6) };
}

void func_296()//Position - 0x38988
{
	GlobalFunc_968();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_101))
	{
		if (GlobalFunc_74(sLocal_101))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (iLocal_54 != -1)
	{
		GlobalFunc_5084(&iLocal_54);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_77))
	{
		func_1();
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_78);
	Global_2446554.f_4379 = 0;
	Global_24696 = 0;
	if (iLocal_107)
	{
		PAD::_RESET_INPUT_MAPPING_SCHEME();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

