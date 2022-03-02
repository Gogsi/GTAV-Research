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
	char* sLocal_18[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_32[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_46 = 0;
	char* sLocal_47[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	float fLocal_113 = 0f;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	char cLocal_144[16] = "";
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	iLocal_58 = 1;
	bLocal_61 = true;
	bLocal_62 = true;
	fLocal_72 = 0f;
	fLocal_73 = 172f;
	fLocal_76 = 1f;
	iLocal_136 = 1200;
	iLocal_137 = 1200;
	iLocal_138 = 166;
	fLocal_155 = 0.5f;
	fLocal_156 = 0.85f;
	fLocal_157 = 0.5f;
	fLocal_158 = -0.25f;
	fLocal_159 = 0.25f;
	fLocal_160 = 0.3f;
	fLocal_161 = 0.3f;
	fLocal_162 = 0.075f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (!func_132())
	{
		Global_2543373 = 99;
		Global_2543374 = 99;
		iLocal_56 = 99;
	}
	else
	{
		Global_2543373 = 0;
		Global_2543374 = 0;
	}
	sLocal_18[0] = "No_Filter";
	sLocal_18[1] = "phone_cam1";
	sLocal_18[2] = "phone_cam2";
	sLocal_18[3] = "phone_cam3";
	sLocal_18[4] = "phone_cam4";
	sLocal_18[5] = "phone_cam5";
	sLocal_18[6] = "phone_cam6";
	sLocal_18[7] = "phone_cam7";
	sLocal_18[8] = "phone_cam8";
	sLocal_18[9] = "phone_cam9";
	sLocal_18[10] = "phone_cam10";
	sLocal_18[11] = "phone_cam11";
	sLocal_18[12] = "phone_cam12";
	sLocal_32[0] = "No_Border";
	sLocal_32[1] = "frame1";
	sLocal_32[2] = "frame2";
	sLocal_32[3] = "frame3";
	sLocal_32[4] = "frame4";
	sLocal_32[5] = "frame5";
	sLocal_32[6] = "frame6";
	sLocal_32[7] = "frame7";
	sLocal_32[8] = "frame8";
	sLocal_32[9] = "frame9";
	sLocal_32[10] = "frame10";
	sLocal_32[11] = "frame11";
	sLocal_32[12] = "frame12";
	sLocal_47[0] = "No_Expression";
	sLocal_47[1] = "mood_Aiming_1";
	sLocal_47[2] = "mood_Happy_1";
	sLocal_47[3] = "mood_smug_1";
	sLocal_47[4] = "mood_Injured_1";
	sLocal_47[5] = "mood_sulk_1";
	sLocal_47[6] = "mood_Angry_1";
	func_131();
	if (func_130(1, 1, !iLocal_63))
	{
		iLocal_63 = 1;
	}
	GlobalFunc_587();
	iLocal_111 = AUDIO::GET_SOUND_ID();
	if (Global_14338 == 0)
	{
		fLocal_95 = 0.207f;
		fLocal_96 = 0.158f;
		fLocal_97 = 0.207f;
		fLocal_98 = 0.335f;
	}
	else
	{
		fLocal_95 = 0.24f;
		fLocal_96 = 0.258f;
		fLocal_97 = 0.24f;
		fLocal_98 = 0.435f;
	}
	Global_16725 = 0;
	Global_16726 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			Global_16725 = 1;
		}
		if (GRAPHICS::GET_USINGNIGHTVISION())
		{
			Global_16725 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0))
		{
			Global_16725 = 1;
		}
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			Global_16725 = 1;
		}
		if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
		{
			Global_16725 = 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_130 == 1)
			{
				Global_16725 = 1;
			}
			uLocal_148 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if ((ENTITY::GET_ENTITY_MODEL(uLocal_148) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_148) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_148) == joaat("submersible"))
			{
				Global_16725 = 1;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_148, -1) == PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_148) > 0f)
				{
					if (!Global_68245)
					{
						if (!GlobalFunc_456())
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), iLocal_148, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_68245)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 0);
		}
	}
	MISC::CLEAR_BIT(&Global_2263, 21);
	func_127(0);
	MISC::SET_BIT(&Global_2263, 17);
	if (Global_14335 == 0)
	{
		func_126();
	}
	else
	{
		uLocal_139 = unk_0x67D02A194A2FC2BD("camera_gallery");
		uLocal_140 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_139) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_140))
		{
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		}
		if (Global_68245)
		{
			iLocal_143 = 2;
		}
		else
		{
			switch (func_125())
			{
				case 0:
					iLocal_143 = 2;
					break;
				
				case 2:
					iLocal_143 = 2;
					break;
				
				case 3:
					iLocal_143 = 2;
					break;
				}
		}
		GlobalFunc_1493(uLocal_139, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_143), -1082130432, -1082130432, -1082130432, -1082130432);
		GlobalFunc_2013(uLocal_139, "CLOSE_SHUTTER");
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "DISPLAY_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	Local_77 = { Global_14353 };
	Local_80 = { Global_14346[Global_14338 /*3*/] };
	Global_16726 = 1;
	iLocal_117 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 0;
	iLocal_124 = 0;
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 8;
	}
	if (iLocal_130 == 0)
	{
		MISC::CLEAR_BIT(&Global_2265, 3);
	}
	func_121();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	if (NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV())
	{
	}
	if (Global_1602437.f_69971)
	{
	}
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		fLocal_76 = 1f;
	}
	else
	{
		fLocal_76 = 1f;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_STOP_RECORDING_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
		if (!Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Focus_Lock_Help_Been_Displayed)
		{
			if (!MISC::IS_BIT_SET(Global_2544648, 13))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!MISC::IS_BIT_SET(Global_2264, 28))
					{
						if (iLocal_127 && iLocal_130 == 0)
						{
							MISC::SET_BIT(&Global_2544648, 13);
							Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Focus_Lock_Help_Been_Displayed = 1;
							GlobalFunc_159("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_1602437.f_69970 == 0 && Global_1602437.f_69971 == 0)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
			if (iLocal_149 == 0)
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_14366);
			}
			PAD::SET_INPUT_EXCLUSIVE(0, Global_14363);
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				iLocal_129 = 1;
				Global_14393.f_1 = 3;
				MISC::SET_GAME_PAUSED(0);
			}
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
			{
				Global_14393.f_1 = 3;
				MISC::SET_GAME_PAUSED(0);
			}
			if (MISC::IS_BIT_SET(Global_2264, 3))
			{
				Global_14393.f_1 = 3;
				MISC::SET_GAME_PAUSED(0);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_109())
				{
					Global_14393.f_1 = 3;
					MISC::SET_GAME_PAUSED(0);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_14393.f_1 = 3;
					MISC::SET_GAME_PAUSED(0);
				}
				if ((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (func_108())
					{
					}
					else
					{
						Global_14393.f_1 = 3;
						MISC::SET_GAME_PAUSED(0);
					}
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_68245 == 1)
					{
						Global_14393.f_1 = 3;
					}
				}
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						Global_14393.f_1 = 3;
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_107();
					iLocal_148 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_148) < 0f)
					{
						GlobalFunc_6685(0);
					}
					if (iLocal_114 == 1)
					{
						if (iLocal_115 == 1)
						{
							if (!CAM::_0x1F2300CB7FA7B7F6())
							{
								GlobalFunc_6685(0);
							}
						}
						else if (!CAM::_0x1F2300CB7FA7B7F6())
						{
							iLocal_115 = 1;
							SYSTEM::WAIT(0);
							RECORDING::_STOP_RECORDING_THIS_FRAME();
						}
					}
				}
				else if (Global_68245 == 0)
				{
					if (MISC::IS_BIT_SET(Global_2263, 18))
					{
						GlobalFunc_8951();
						if ((Global_14393 == 0 || Global_14393 == 1) || Global_14393 == 2)
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
								{
								}
								else
								{
									Global_14393.f_1 = 3;
									MISC::SET_GAME_PAUSED(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_141)
			{
				func_103();
			}
			if (Global_14393.f_1 < 4)
			{
			}
			if (iLocal_152 == 0)
			{
				if (iLocal_102 == 0)
				{
					if (iLocal_103 == 0)
					{
						if (iLocal_110 == 0)
						{
							if (Global_14393.f_1 > 3)
							{
								if (iLocal_149)
								{
									func_101();
									if (Global_16730 == 0 && Global_16727 == 6)
									{
										HUD::CLEAR_FLOATING_HELP(0, 1);
										HUD::BUSYSPINNER_OFF();
										iLocal_149 = 0;
										func_100();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
										{
											Local_66 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
										}
										GlobalFunc_2011();
										iLocal_108++;
										if (func_132())
										{
											GlobalFunc_1493(uLocal_139, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											GlobalFunc_1493(uLocal_139, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432, -1082130432, -1082130432);
										}
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_126 = 0;
										func_98();
									}
									if (Global_16727 == 0)
									{
										iLocal_149 = 0;
										HUD::BUSYSPINNER_OFF();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
										{
											Local_66 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
										}
										func_97();
										iLocal_131 = 0;
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_126 = 0;
										func_98();
										if (func_132())
										{
											if (Global_2543374 == 0)
											{
												if (!MISC::IS_BIT_SET(Global_2544648, 2))
												{
													GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!MISC::IS_BIT_SET(Global_2544648, 2))
										{
											GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_96();
										func_95(1);
									}
								}
								else if (Global_14393.f_1 != 9)
								{
									if (Global_16726 == 1)
									{
										if (Global_16725 == 0)
										{
											func_94();
										}
									}
									else if ((Global_2871 - Global_2870) > Global_2872)
									{
										if (GlobalFunc_2010(2, Global_14361, 0))
										{
											if (func_92() && iLocal_126)
											{
											}
											else if (iLocal_126 == 0)
											{
												MISC::SET_GAME_PAUSED(0);
												AUDIO::STOP_SOUND(iLocal_111);
												iLocal_142 = 0;
												if (Global_16725 == 0)
												{
													GlobalFunc_2011();
													Global_16725 = 1;
													HUD::CLEAR_FLOATING_HELP(0, 1);
													iLocal_127 = 0;
													iLocal_117 = 1;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													func_91(0, 0);
													func_95(0);
													iLocal_114 = 0;
													func_90();
													iLocal_141 = 0;
													GlobalFunc_4937(0, 1);
													GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_100 == 0)
									{
										if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_87();
											iLocal_100 = 1;
										}
									}
									else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_87();
										iLocal_100 = 0;
									}
									if (iLocal_101 == 0)
									{
										if (MISC::IS_BIT_SET(Global_2263, 28))
										{
											func_87();
											iLocal_101 = 1;
										}
									}
									else if (!MISC::IS_BIT_SET(Global_2263, 28))
									{
										func_87();
										iLocal_101 = 0;
									}
									if (Global_16725 == 1)
									{
										func_80();
									}
									else if (Global_14393.f_1 > 4)
									{
										if (iLocal_123 == 1 && iLocal_124 == 0)
										{
											func_76();
										}
										if (iLocal_123 == 0 && iLocal_124 == 1)
										{
											func_97();
											if (iLocal_135 == 1 || iLocal_135 == 0)
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
													{
														GlobalFunc_2013(uLocal_139, "CLOSE_SHUTTER");
														iLocal_134 = MISC::GET_GAME_TIMER();
														while (MISC::GET_GAME_TIMER() < (iLocal_134 + iLocal_136) && Global_14393.f_1 > 3)
														{
															HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
															func_103();
															func_75();
															RECORDING::_STOP_RECORDING_THIS_FRAME();
															SYSTEM::WAIT(0);
														}
													}
												}
												if (func_132())
												{
													if (Global_2543374 == 0)
													{
														if (!MISC::IS_BIT_SET(Global_2544648, 2))
														{
															GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!MISC::IS_BIT_SET(Global_2544648, 2))
												{
													GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_103();
												HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
												iLocal_131 = 0;
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_126 = 0;
												func_98();
												iLocal_135 = 0;
												GlobalFunc_2013(uLocal_139, "OPEN_SHUTTER");
											}
											func_96();
											func_95(1);
											func_74();
										}
									}
									if (iLocal_142 == 1)
									{
										func_71();
									}
									if (iLocal_128)
									{
										if (SYSTEM::TIMERB() > 500)
										{
											iLocal_127 = 1;
											iLocal_128 = 0;
											MISC::SET_BIT(&Global_2263, 18);
											if (Global_16725 == 0)
											{
												GlobalFunc_4937(1, 1);
											}
										}
									}
									if (iLocal_126 == 0)
									{
										if (iLocal_127 && Global_16725 == 0)
										{
											if ((iLocal_129 == 0 && iLocal_124 == 0) && Global_16728 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_75();
										}
									}
									else if (iLocal_123 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_14393.f_1 > 3)
					{
						if (Global_16726 == 1)
						{
							if (Global_16725 == 0)
							{
								func_94();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_154 == 1)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_151, "CELL_CAM_FW_2", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 2)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_151, "", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 6)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_151, "", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 3)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_151, "", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 7)
				{
					if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_151, "", 0, -1, "", "", 1);
					}
					if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_151, "", 0, -1, "", "", 1);
					}
					if (MISC::IS_PC_VERSION())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_151, "", 0, -1, "", "", 1);
					}
				}
				if (iLocal_154 == 4)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_151, "CELL_CAM_CCW_2", 0, -1, "", "", 1);
				}
				if (iLocal_154 == 5)
				{
					iVar0 = NETWORK::NETWORK_GET_AGE_GROUP();
					switch (iVar0)
					{
						case -1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						case 0:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						case 1:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						case 2:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_151, "", 0, -1, "", "", 1);
							break;
						
						default:
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_151, "", 0, -1, "", "", 1);
							break;
						}
				}
				if (iLocal_154 == 0)
				{
				}
				if (iLocal_154 == 2 || iLocal_154 == 3)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_152 = 0;
						iLocal_154 = 0;
						GlobalFunc_4937(0, 1);
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
					{
						iLocal_153 = 1;
					}
					if (iLocal_153 == 1)
					{
						if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							GlobalFunc_4937(0, 1);
							iLocal_153 = 0;
							HUD::SET_SOCIAL_CLUB_TOUR("Gallery");
							HUD::OPEN_SOCIAL_CLUB_MENU();
						}
					}
				}
				else if (iLocal_154 == 7)
				{
					if (MISC::IS_ORBIS_VERSION())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							GlobalFunc_4937(0, 1);
							iLocal_110 = 0;
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_152 = 0;
						iLocal_154 = 0;
						GlobalFunc_4937(0, 1);
						iLocal_110 = 0;
					}
					if (!MISC::IS_ORBIS_VERSION())
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(2, Global_14365))
						{
							iLocal_152 = 0;
							iLocal_154 = 0;
							GlobalFunc_4937(0, 1);
							if (MISC::IS_BIT_SET(Global_2264, 28))
							{
								iLocal_110 = 0;
							}
							else
							{
								iLocal_110 = 2;
							}
							iLocal_106 = MISC::GET_GAME_TIMER();
							PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(1);
						}
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
				{
					iLocal_152 = 0;
					iLocal_154 = 0;
					GlobalFunc_4937(0, 1);
				}
			}
		}
		iLocal_107 = MISC::GET_GAME_TIMER();
		if (GlobalFunc_2001() || iLocal_129)
		{
			func_1(0);
			func_91(0, 0);
			func_95(0);
			iLocal_114 = 0;
			func_90();
			Global_16725 = 0;
			Global_16726 = 0;
			Global_16728 = 0;
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_139);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_140);
			MISC::SET_GAME_PAUSED(0);
			if (Global_14553 == 1)
			{
				MISC::SET_BIT(&Global_2263, 17);
			}
			else
			{
				MISC::CLEAR_BIT(&Global_2263, 17);
			}
			HUD::CLEAR_FLOATING_HELP(0, 1);
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
			MISC::CLEAR_BIT(&Global_2265, 3);
			MISC::CLEAR_BIT(&Global_2544648, 3);
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_16729 = 1;
			AUDIO::STOP_SOUND(iLocal_111);
			AUDIO::RELEASE_SOUND_ID(iLocal_111);
			HUD::BUSYSPINNER_OFF();
			func_90();
			MOBILE::_0xA2CCBE62CD4C91A4(0);
			MOBILE::_SET_MOBILE_PHONE_UNK(0);
			MOBILE::_0x1B0B4AEED5B9B41C(1f);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
			}
			if (Global_2543374 > 0 && Global_2543374 < 13)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_32[Global_2543374]);
			}
			MISC::CLEAR_BIT(&Global_2263, 18);
			GlobalFunc_4937(0, 1);
			if (func_130(0, 1, iLocal_63))
			{
				iLocal_63 = 0;
			}
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1(int iParam0)//Position - 0x101F
{
	if (GlobalFunc_2003())
	{
		if (iParam0 == 1)
		{
			MOBILE::_CELL_CAM_SET_LEAN(1);
		}
		else if (Global_14393.f_1 > 3)
		{
			MOBILE::_CELL_CAM_SET_LEAN(0);
		}
	}
}



void func_4()//Position - 0x10D4
{
	iLocal_105 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
	switch (iLocal_105)
	{
		case 0:
			iLocal_102 = 0;
			iLocal_108 = GRAPHICS::GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS();
			iLocal_109 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS();
			if (iLocal_103 == 1)
			{
				if (iLocal_126 == 0)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_139))
					{
						if (func_132())
						{
							if (Global_2543374 == 0)
							{
								if (!MISC::IS_BIT_SET(Global_2544648, 2))
								{
									GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							GlobalFunc_1493(uLocal_139, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!MISC::IS_BIT_SET(Global_2544648, 2))
							{
								GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							GlobalFunc_1493(uLocal_139, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_139))
				{
					GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					GlobalFunc_1493(uLocal_139, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432, -1082130432, -1082130432);
				}
				iLocal_103 = 0;
			}
			HUD::BUSYSPINNER_OFF();
			break;
		
		case 1:
			if (!HUD::BUSYSPINNER_IS_ON())
			{
				HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_SPINNER2");
				HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(Global_2264, 28))
			{
				iLocal_102 = 0;
				iLocal_108 = 0;
				iLocal_109 = 0;
			}
			else
			{
				Global_14393.f_1 = 3;
				Global_16729 = 1;
			}
			HUD::BUSYSPINNER_OFF();
			break;
	}
}

void func_5()//Position - 0x126F
{
	if (GlobalFunc_2010(2, Global_14362, 0))
	{
		func_1(0);
		if (MISC::IS_BIT_SET(Global_2264, 28))
		{
			MISC::SET_GAME_PAUSED(0);
			SYSTEM::SETTIMERB(0);
			func_100();
			iLocal_126 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Local_66 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			GlobalFunc_2011();
			iLocal_135 = 1;
		}
		else if (func_9())
		{
			if (MISC::IS_BIT_SET(Global_2264, 14))
			{
				GlobalFunc_159("CELL_299", -1);
			}
			else
			{
				GlobalFunc_2011();
				func_8();
			}
		}
		else
		{
			iLocal_152 = 1;
			GlobalFunc_4937(1, 1);
		}
	}
	if (MISC::IS_BIT_SET(Global_2263, 22))
	{
		func_1(0);
		while (SYSTEM::TIMERA() < 2000)
		{
			SYSTEM::WAIT(0);
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			func_75();
			func_107();
			func_103();
		}
		MISC::SET_GAME_PAUSED(0);
		func_100();
		SYSTEM::SETTIMERB(0);
		iLocal_126 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			Local_66 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		func_98();
		GlobalFunc_2011();
	}
	if (GlobalFunc_2010(2, Global_14366, 0))
	{
		func_1(0);
		if (func_92() || MISC::IS_BIT_SET(Global_2264, 28))
		{
		}
		else
		{
			MISC::SET_GAME_PAUSED(0);
			SYSTEM::SETTIMERB(0);
			iLocal_135 = 1;
			func_100();
			iLocal_126 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Local_66 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			GlobalFunc_2011();
		}
	}
	if (MISC::IS_BIT_SET(Global_2263, 28))
	{
		if (GlobalFunc_2010(2, Global_14365, 0))
		{
			func_1(0);
			MISC::SET_GAME_PAUSED(0);
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
			GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
			Global_16729 = 1;
			iLocal_142 = 0;
			iLocal_125 = 0;
			GlobalFunc_4937(0, 1);
			Global_16725 = 1;
			HUD::CLEAR_FLOATING_HELP(0, 1);
			iLocal_127 = 0;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			GlobalFunc_7017();
			iLocal_126 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Local_66 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			func_91(0, 0);
			func_95(0);
			iLocal_114 = 0;
			func_90();
			MISC::SET_BIT(&Global_2263, 9);
			iLocal_141 = 0;
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}



void func_8()//Position - 0x14D3
{
	iLocal_149 = 1;
	Global_16730 = 1;
	HUD::CLEAR_FLOATING_HELP(0, 1);
}

int func_9()//Position - 0x14E8
{
	if (iLocal_106 == iLocal_107)
	{
		if (iLocal_104)
		{
			iLocal_104 = 1;
		}
	}
	if (Global_14393.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_108 == iLocal_109 || iLocal_108 > iLocal_109)
	{
		iLocal_154 = 1;
		iLocal_151 = 2;
		return 0;
	}
	return 1;
}

void func_10()//Position - 0x1530
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_130)
	{
		func_66();
		func_62();
		func_61();
		fLocal_72 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_73 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		if (iLocal_132 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, iVar0) && !PAD::IS_CONTROL_PRESSED(2, iVar1))
			{
				iLocal_132 = 1;
				GlobalFunc_1493(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				GlobalFunc_1493(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (MISC::IS_BIT_SET(Global_2263, 28))
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), "CELL_287");
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_280");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_58();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_MAX_WIDTH");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_76);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GlobalFunc_1493(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_CONTROL_PRESSED(2, iVar1))
		{
			iLocal_132 = 0;
			func_98();
		}
		if (iLocal_133 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, iVar1) && !PAD::IS_CONTROL_PRESSED(2, iVar0))
			{
				iLocal_133 = 1;
				GlobalFunc_1493(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				GlobalFunc_1493(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (MISC::IS_BIT_SET(Global_2263, 28))
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), "CELL_287");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_280");
					func_59(uLocal_140, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
				}
				func_57();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_MAX_WIDTH");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_76);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GlobalFunc_1493(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!PAD::IS_CONTROL_PRESSED(2, iVar1) || PAD::IS_CONTROL_PRESSED(2, iVar0))
		{
			iLocal_133 = 0;
			func_98();
		}
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		func_98();
	}
	func_107();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 183))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (MISC::IS_BIT_SET(Global_2544648, 2))
				{
					MISC::CLEAR_BIT(&Global_2544648, 2);
					if (!MISC::IS_BIT_SET(Global_2544648, 2))
					{
						GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					MISC::SET_BIT(&Global_2544648, 2);
					GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_130)
	{
		if (iLocal_131 == 1)
		{
			iLocal_131 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_139, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			GlobalFunc_726("CELL_FOCUS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (!GlobalFunc_39(14))
		{
			if (MISC::IS_BIT_SET(Global_2544648, 10))
			{
				if ((Global_68245 == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_54())
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_139, "SET_FOCUS_LOCK");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::_GET_LABEL_TEXT(&Global_2545339));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					MISC::CLEAR_BIT(&Global_2544648, 10);
				}
			}
		}
		else if (MISC::IS_BIT_SET(Global_2544648, 10))
		{
			MISC::CLEAR_BIT(&Global_2544648, 10);
		}
		iLocal_65 = MISC::GET_GAME_TIMER();
		if ((iLocal_65 - iLocal_64) > 1500)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Local_69 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_69, Local_66, 1) > 5f)
				{
					Global_14393.f_1 = 3;
					MISC::SET_GAME_PAUSED(0);
				}
				iLocal_64 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (iLocal_131)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, 182))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
			iLocal_131 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_139, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			GlobalFunc_726("CELL_FOCUS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0, 182))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
		iLocal_131 = 1;
		if (!GlobalFunc_39(14))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_139, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GlobalFunc_726("CELL_FOCUS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (func_132())
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 186))
		{
			if (iLocal_130)
			{
				iLocal_56++;
				if (iLocal_56 > 0 && iLocal_56 < 7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						if (Global_14393 == 0)
						{
							iVar4 = 0;
							iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_56 == 2 || iLocal_56 == 3) || iLocal_56 == 4) || iLocal_56 == 8) || iLocal_56 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_56 == 3)
										{
											PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_47[iLocal_56], 0);
										}
									}
								}
								else
								{
									PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_47[iLocal_56], 0);
								}
							}
							else
							{
								PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_47[iLocal_56], 0);
							}
						}
						else
						{
							PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_47[iLocal_56], 0);
						}
					}
				}
				if (iLocal_56 == 7 || iLocal_56 > 7)
				{
					iLocal_56 = 0;
				}
				if (iLocal_56 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 185))
		{
			if (iLocal_130)
			{
				if (bLocal_61 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
					if (iLocal_60 == 0)
					{
						iLocal_60 = 1;
						iLocal_59 = 1;
						if (MISC::ARE_STRINGS_EQUAL(sLocal_18[Global_2543373], "phone_cam12DUMMY"))
						{
						}
						else
						{
							MOBILE::_0xA2CCBE62CD4C91A4(1);
							MOBILE::_SET_MOBILE_PHONE_UNK(1);
						}
					}
					else
					{
						iLocal_60 = 0;
						iLocal_59 = 0;
						MOBILE::_0xA2CCBE62CD4C91A4(0);
						MOBILE::_SET_MOBILE_PHONE_UNK(0);
					}
				}
			}
			else if (bLocal_62 == 1)
			{
				if (iLocal_59 == 0)
				{
					iLocal_59 = 1;
					iLocal_60 = 1;
					MOBILE::_0xA2CCBE62CD4C91A4(1);
					MOBILE::_SET_MOBILE_PHONE_UNK(1);
				}
				else
				{
					iLocal_59 = 0;
					iLocal_60 = 0;
					MOBILE::_0xA2CCBE62CD4C91A4(0);
					MOBILE::_SET_MOBILE_PHONE_UNK(0);
				}
			}
		}
	}
	if (iLocal_58 == 1)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 172))
		{
			if (func_132())
			{
				Global_2543374++;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
			}
			if (Global_2543374 == 13)
			{
				func_95(0);
				MOBILE::_0x1B0B4AEED5B9B41C(1f);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_32[(Global_2543374 - 1)]);
				Global_2543374 = 0;
				func_53();
				if (iLocal_46 == 1)
				{
					MISC::CLEAR_BIT(&Global_2544648, 2);
					iLocal_46 = 0;
					GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_2543374 > 0 && Global_2543374 < 13)
			{
				iLocal_58 = 0;
				iLocal_57 = 0;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_32[Global_2543374], 0);
			}
		}
	}
	if (Global_2543374 > 0)
	{
		if (iLocal_58 == 0)
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_32[Global_2543374]))
			{
				iLocal_57 = 1;
				iLocal_58 = 1;
				if (!GRAPHICS::_0xBCEDB009461DA156())
				{
					func_95(1);
				}
				if (iLocal_46 == 0)
				{
					if (!MISC::IS_BIT_SET(Global_2544648, 2))
					{
						iLocal_46 = 1;
					}
				}
				MISC::SET_BIT(&Global_2544648, 2);
				GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				MOBILE::_0x1B0B4AEED5B9B41C(0.25f);
				GRAPHICS::_0x27FEB5254759CDE3(sLocal_32[Global_2543374], 0);
			}
		}
		if (iLocal_57 == 1)
		{
			if (Global_2543374 == 1 || Global_2543374 == 3)
			{
			}
			if (Global_2543374 == 2 || Global_2543374 == 4)
			{
			}
		}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 173))
	{
		if (func_132())
		{
			func_90();
			Global_2543373++;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
		}
		if (Global_2543373 == 13)
		{
			Global_2543373 = 0;
		}
		if (Global_2543373 == 0)
		{
			if (func_132())
			{
				func_90();
			}
		}
		else
		{
			func_96();
		}
		func_52();
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 184))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				Local_66 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14382, 1);
				GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				GlobalFunc_2013(uLocal_139, "CLOSE_SHUTTER");
				iLocal_134 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_134 + iLocal_138) && Global_14393.f_1 > 3)
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					func_103();
					func_75();
					RECORDING::_STOP_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				if (iLocal_130 == 0)
				{
					AUDIO::STOP_SOUND(iLocal_111);
					iLocal_130 = 1;
					func_51(1);
					func_50();
					MISC::SET_BIT(&Global_2265, 3);
					iLocal_64 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_132 = 0;
					iLocal_133 = 0;
					func_51(0);
					iLocal_130 = 0;
					MISC::CLEAR_BIT(&Global_2265, 3);
				}
				iLocal_134 = MISC::GET_GAME_TIMER();
				while (MISC::GET_GAME_TIMER() < (iLocal_134 + iLocal_136) && Global_14393.f_1 > 3)
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					func_103();
					func_75();
					RECORDING::_STOP_RECORDING_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
				GlobalFunc_2013(uLocal_139, "OPEN_SHUTTER");
				if (func_132())
				{
					if (Global_2543374 == 0)
					{
						if (!MISC::IS_BIT_SET(Global_2544648, 2))
						{
							GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!MISC::IS_BIT_SET(Global_2544648, 2))
				{
					GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_103();
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (MISC::IS_BIT_SET(Global_2263, 28))
				{
					StringCopy(&cLocal_144, "CELL_296", 16);
					func_49();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_295", 16);
					func_27();
				}
			}
		}
	}
	if (iLocal_130 == 0)
	{
		if (iLocal_112 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 40) || PAD::IS_CONTROL_JUST_PRESSED(0, 41))
			{
				fLocal_113 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
				if (fLocal_113 > 1f && fLocal_113 < 4.5f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_111))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_111, "Camera_Zoom", &Global_14382, 1);
					}
				}
				else
				{
					AUDIO::STOP_SOUND(iLocal_111);
				}
				iLocal_112 = 1;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(0, 40) || PAD::IS_CONTROL_PRESSED(0, 41))
		{
			fLocal_113 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
			if (fLocal_113 > 1f && fLocal_113 < 4.5f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_111))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_111, "Camera_Zoom", &Global_14382, 1);
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_111);
			}
		}
		else
		{
			AUDIO::STOP_SOUND(iLocal_111);
		}
	}
	if (GlobalFunc_2010(2, Global_14362, 0))
	{
		fLocal_74 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_75 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
		MISC::SET_BIT(&Global_2263, 21);
		AUDIO::STOP_SOUND(iLocal_111);
		iLocal_126 = 1;
		GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		GlobalFunc_1493(uLocal_139, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Camera_Shoot", &Global_14382, 1);
		GlobalFunc_2013(uLocal_139, "CLOSE_SHUTTER");
		Local_83 = { -90.3f, 0f, 90f };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_83, 0);
		if (!func_132())
		{
			func_90();
		}
		Global_16728 = 1;
		HUD::CLEAR_FLOATING_HELP(0, 1);
		while (Global_16727 < 6 && Global_14393.f_1 > 3)
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			func_103();
			func_75();
			func_107();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		MOBILE::CELL_CAM_ACTIVATE(0, 0);
		if (Global_14335)
		{
			func_1(1);
		}
		iLocal_134 = MISC::GET_GAME_TIMER();
		while (MISC::GET_GAME_TIMER() < (iLocal_134 + iLocal_137) && Global_14393.f_1 > 3)
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			func_103();
			func_75();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
		SYSTEM::SETTIMERA(0);
		GlobalFunc_2013(uLocal_139, "OPEN_SHUTTER");
		MISC::CLEAR_BIT(&Global_2263, 21);
		func_98();
		if (Global_14393.f_1 > 3)
		{
			if (Global_68245)
			{
				func_20(1074, 1, -1);
				func_19();
				GlobalFunc_4989(23, 0);
			}
			else
			{
				switch (GlobalFunc_8315())
				{
					case 0:
						STATS::STAT_INCREMENT(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						STATS::STAT_INCREMENT(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						STATS::STAT_INCREMENT(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_95(0);
		}
		func_103();
	}
	if (MISC::IS_BIT_SET(Global_2263, 28))
	{
		if (GlobalFunc_2010(2, Global_14365, 0))
		{
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			SYSTEM::WAIT(0);
			RECORDING::_STOP_RECORDING_THIS_FRAME();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
			GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
			Global_16729 = 1;
			iLocal_142 = 0;
			iLocal_125 = 1;
			Global_16725 = 1;
			HUD::CLEAR_FLOATING_HELP(0, 1);
			iLocal_127 = 0;
			iLocal_117 = 1;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			GlobalFunc_7017();
			iLocal_126 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Local_66 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			func_91(0, 0);
			func_95(0);
			iLocal_114 = 0;
			func_90();
			MISC::SET_BIT(&Global_2263, 9);
			MISC::SET_GAME_PAUSED(0);
			iLocal_141 = 0;
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}









void func_19()//Position - 0x2592
{
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	Global_14330 = { Global_14346[Global_14338 /*3*/] };
	GlobalFunc_4937(0, 1);
	func_91(0, 0);
	func_95(0);
	iLocal_114 = 0;
	func_90();
	if (!MISC::IS_BIT_SET(Global_2264, 28))
	{
		if (NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV() == 0)
		{
			if (MISC::IS_XBOX360_VERSION())
			{
				if (iLocal_116 == 0)
				{
					iLocal_116 = 1;
				}
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2)//Position - 0x25F5
{
	int iVar0;
	
	iVar0 = GlobalFunc_6924(iParam0, GlobalFunc_4916(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!GlobalFunc_243(iParam0))
	{
		GlobalFunc_6923(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		GlobalFunc_6922(iParam0, iVar0, iParam2, 1);
	}
}







void func_27()//Position - 0x2A01
{
	if (iLocal_132 == 0 && iLocal_133 == 0)
	{
		GlobalFunc_1493(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		GlobalFunc_1493(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_280");
		if (iLocal_130)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_68245 == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_54())
				{
					func_47();
				}
				else
				{
					if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_61)
							{
								func_59(uLocal_140, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_61)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_62)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, 1), "CELL_FOCUS");
						}
						func_59(uLocal_140, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
						func_59(uLocal_140, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
				}
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					func_59(uLocal_140, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_62)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, 1), "CELL_FOCUS");
						}
						func_59(uLocal_140, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
						func_59(uLocal_140, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_76);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GlobalFunc_1493(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)//Position - 0x2E55
{
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)//Position - 0x2E75
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_2007(Global_2476507, Global_2476508))
		{
			if (iParam0 == 0 || !func_30(Global_2476507, Global_2476508, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2EB5
{
	return GlobalFunc_7907(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, bParam3, bParam4);
}















void func_45(float fParam0)//Position - 0x5884
{
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 172, 1), "CELL_BORDER");
}

void func_46(float fParam0)//Position - 0x58A4
{
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 173, 1), "CELL_FILTER");
}

void func_47()//Position - 0x58C4
{
	if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_59(uLocal_140, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 183, 1), "CELL_GRID");
	func_59(uLocal_140, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_61)
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
	}
	if (!GlobalFunc_39(14))
	{
		if ((Global_68245 == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_54())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_139, "SET_FOCUS_LOCK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::_GET_LABEL_TEXT(&Global_2545339));
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_48(float fParam0)//Position - 0x59D1
{
	func_59(uLocal_140, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 175, 1), "CELL_ACCYC");
}

void func_49()//Position - 0x59F1
{
	if (iLocal_132 == 0 && iLocal_133 == 0)
	{
		GlobalFunc_1493(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		GlobalFunc_1493(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), "CELL_287");
		if (iLocal_130)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_68245 == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_54())
				{
					func_47();
				}
				else
				{
					if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_61)
							{
								func_59(uLocal_140, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_61)
						{
							func_59(uLocal_140, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
					func_59(uLocal_140, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					func_59(uLocal_140, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_284");
					if (func_132())
					{
						func_46(6f);
						func_45(7f);
						func_59(uLocal_140, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(3f);
						func_45(4f);
						func_59(uLocal_140, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
				}
				func_59(uLocal_140, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
				func_59(uLocal_140, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
				func_59(uLocal_140, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_284");
				if (func_132())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_62)
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, 1), "CELL_FOCUS");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
				}
				else
				{
					if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
					}
					func_59(uLocal_140, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_285");
					if (func_132())
					{
						func_46(4f);
						func_45(5f);
						func_59(uLocal_140, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_76);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GlobalFunc_1493(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_50()//Position - 0x5E79
{
	if (iLocal_130)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_72, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_73);
	}
}

void func_51(int iParam0)//Position - 0x5E97
{
	if (Global_1602437.f_69970 == 1)
	{
	}
	else if (Global_1602437.f_69971 == 1)
	{
	}
	else
	{
		MOBILE::_CELL_CAM_DISABLE_THIS_FRAME(iParam0);
	}
}

void func_52()//Position - 0x5EC7
{
	if (iLocal_60 == 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sLocal_18[Global_2543373], "phone_cam12DUMMY"))
		{
			MOBILE::_0xA2CCBE62CD4C91A4(0);
			MOBILE::_SET_MOBILE_PHONE_UNK(0);
		}
		else
		{
			MOBILE::_0xA2CCBE62CD4C91A4(1);
			MOBILE::_SET_MOBILE_PHONE_UNK(1);
		}
	}
}

void func_53()//Position - 0x5EFF
{
	GlobalFunc_1493(uLocal_139, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_132())
	{
		GRAPHICS::SET_TIMECYCLE_MODIFIER("phone_cam");
	}
}

int func_54()//Position - 0x5F36
{
	if (GlobalFunc_39(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/])
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
			return 0;
		}
	}
	return 1;
}



void func_57()//Position - 0x5FD1
{
	if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 30, 1), "CELL_RT_RSTICK");
		func_59(uLocal_140, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_RT_RSTICK");
		func_59(uLocal_140, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_58()//Position - 0x6080
{
	if (PAD::_IS_USING_KEYBOARD(2) || MISC::IS_ORBIS_VERSION())
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_59(uLocal_140, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_LT_RSTICK");
	if (GlobalFunc_39(14))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_LT_LSTICKZ");
		func_59(uLocal_140, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 30, 1), "CELL_LT_LSTICK");
	}
}

void func_59(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)//Position - 0x6132
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam3))
	{
		GlobalFunc_257(uParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		GlobalFunc_726(sParam4);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_61()//Position - 0x617F
{
	if (Global_68245)
	{
		switch (Global_16809)
		{
			case 0:
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					GlobalFunc_159("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					GlobalFunc_159("CELL_CAM_SELFIE_0", -1);
				}
				Global_16809++;
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::_IS_USING_KEYBOARD(2))
					{
						GlobalFunc_159("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						GlobalFunc_159("CELL_CAM_SELFIE_1", -1);
					}
					Global_16809++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16808)
		{
			case 0:
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					GlobalFunc_159("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					GlobalFunc_159("CELL_CAM_SELFIE_0", -1);
				}
				Global_16808++;
				break;
			
			case 1:
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (PAD::_IS_USING_KEYBOARD(2))
					{
						GlobalFunc_159("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						GlobalFunc_159("CELL_CAM_SELFIE_1", -1);
					}
					Global_16808++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_62()//Position - 0x627B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (PAD::IS_CONTROL_PRESSED(2, iVar10) && !PAD::IS_CONTROL_PRESSED(2, iVar9))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 2)) * 127;
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			}
		}
		else if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
		}
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			fVar7 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290);
			fVar8 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291);
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_162);
		}
		func_65(fVar5);
		func_64(fVar6);
		func_63(fVar4);
	}
	else if (!PAD::IS_CONTROL_PRESSED(2, iVar9))
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
}

void func_63(float fParam0)//Position - 0x63FA
{
	fLocal_159 = (fLocal_159 + fParam0);
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < -1f)
	{
		fLocal_159 = -1f;
	}
	MOBILE::_0xD6ADE981781FCA09(fLocal_159);
}

void func_64(float fParam0)//Position - 0x6426
{
	fLocal_160 = (fLocal_160 + fParam0);
	if (fLocal_160 > 1f)
	{
		fLocal_160 = 1f;
	}
	else if (fLocal_160 < -1f)
	{
		fLocal_160 = -1f;
	}
	MOBILE::_0xF1E22DC13F5EEBAD(fLocal_160);
}

void func_65(float fParam0)//Position - 0x6452
{
	fLocal_161 = (fLocal_161 + fParam0);
	if (fLocal_161 > 1f)
	{
		fLocal_161 = 1f;
	}
	else if (fLocal_161 < -1f)
	{
		fLocal_161 = -1f;
	}
	MOBILE::_0x466DA42C89865553(fLocal_161);
}

void func_66()//Position - 0x647E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (PAD::IS_CONTROL_PRESSED(2, iVar10))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 178))
			{
				MOBILE::_0x53F4892D18EC90A4(0.5f);
				MOBILE::_0x3117D84EFA60F77B(0.85f);
				MOBILE::_0xAC2890471901861C(0.5f);
				MOBILE::_0x15E69E2802C24B8D(-0.25f);
				fLocal_155 = 0.5f;
				fLocal_156 = 0.85f;
				fLocal_157 = 0.5f;
				fLocal_158 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (PAD::IS_CONTROL_PRESSED(2, iVar10) && !PAD::IS_CONTROL_PRESSED(2, iVar11))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 178))
		{
			MOBILE::_0x53F4892D18EC90A4(0.5f);
			MOBILE::_0x3117D84EFA60F77B(0.85f);
			MOBILE::_0xAC2890471901861C(0.5f);
			MOBILE::_0x15E69E2802C24B8D(-0.25f);
			fLocal_155 = 0.5f;
			fLocal_156 = 0.85f;
			fLocal_157 = 0.5f;
			fLocal_158 = -0.25f;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 2)) * 127;
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 39)) * 127;
			fVar8 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290);
			fVar9 = PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291);
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (MISC::ABSI(iVar2) > 15 || MISC::ABSI(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_162);
		}
		func_70(fVar6);
		func_69(fVar7);
		func_68(fVar4);
		if (!GlobalFunc_39(14))
		{
			func_67(fVar5);
		}
	}
	else if (!PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar11))
	{
		PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
	if (!PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar10) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar11))
	{
		iVar0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 294)) * 127;
		iVar2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 295)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 292)) * 127;
		iVar3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 293)) * 127;
		if (MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_162);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_162);
		}
		if (MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_162);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_162);
		}
		if (!GlobalFunc_39(14))
		{
			func_67(fVar5);
		}
	}
}

void func_67(float fParam0)//Position - 0x67A9
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 1f)
	{
		fLocal_157 = 1f;
	}
	else if (fLocal_157 < 0f)
	{
		fLocal_157 = 0f;
	}
	MOBILE::_0xAC2890471901861C(fLocal_157);
}

void func_68(float fParam0)//Position - 0x67D5
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1f)
	{
		fLocal_158 = 1f;
	}
	else if (fLocal_158 < -1f)
	{
		fLocal_158 = -1f;
	}
	MOBILE::_0x15E69E2802C24B8D(fLocal_158);
}

void func_69(float fParam0)//Position - 0x6801
{
	fLocal_156 = (fLocal_156 + fParam0);
	if (fLocal_156 > 1.5f)
	{
		fLocal_156 = 1.5f;
	}
	else if (fLocal_156 < 0.5f)
	{
		fLocal_156 = 0.5f;
	}
	MOBILE::_0x3117D84EFA60F77B(fLocal_156);
}

void func_70(float fParam0)//Position - 0x683D
{
	fLocal_155 = (fLocal_155 + fParam0);
	if (fLocal_155 > 2f)
	{
		fLocal_155 = 2f;
	}
	else if (fLocal_155 < -1.7f)
	{
		fLocal_155 = -1.7f;
	}
	MOBILE::_0x53F4892D18EC90A4(fLocal_155);
}

void func_71()//Position - 0x6871
{
	if (Global_68505 || Global_68506)
	{
		return;
	}
	if (iLocal_123 == 0)
	{
		if (!iLocal_149)
		{
			if (Global_1602437.f_69970 == 0 && Global_1602437.f_69971 == 0)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_140, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_126 == 0)
	{
		if (Global_14335)
		{
			if (Global_14551)
			{
				if (iLocal_149 == 0)
				{
					if (Global_14393.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_73(255, 255, 255, 255);
			GlobalFunc_2008(0.059f, 0.644f, "CELL_284", 0);
			func_73(255, 255, 255, 255);
			GlobalFunc_2008(0.165f, 0.644f, "CELL_285", 0);
			func_73(255, 255, 255, 255);
			GlobalFunc_2008(0.275f, 0.75f, "CELL_280", 0);
			func_73(255, 255, 255, 255);
			GlobalFunc_2008(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_14335)
	{
	}
	else
	{
		func_73(255, 255, 255, 255);
		GlobalFunc_2008(0.275f, 0.75f, "CELL_287", 0);
		func_73(255, 255, 255, 255);
		GlobalFunc_2008(0.275f, 0.79f, "CELL_286", 0);
		func_73(255, 255, 255, 255);
		GlobalFunc_2008(0.275f, 0.83f, "CELL_281", 0);
	}
}


void func_73(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x69D8
{
	HUD::SET_TEXT_SCALE(0.4f, 0.4f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(1);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_74()//Position - 0x6A17
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_74, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_75);
}

void func_75()//Position - 0x6A30
{
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 3, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 4, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 5, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 6, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 39, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 56, 1);
}

void func_76()//Position - 0x6A8A
{
	Local_86 = { Global_14346[Global_14338 /*3*/] };
	if (Global_14335)
	{
		if (func_79())
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Local_92);
			Local_86 = { Local_92 };
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
		}
		func_1(1);
		if (iLocal_120)
		{
			Local_80.x = (Local_80.x + 12f);
		}
		if (Local_80.x > Local_86.x || Local_80.x == Local_86.x)
		{
			Local_80.x = Local_86.x;
			iLocal_120 = 0;
		}
		if (iLocal_121)
		{
			Local_80.f_1 = (Local_80.f_1 - 6f);
		}
		if (MISC::IS_BIT_SET(Global_2265, 4))
		{
			if (Local_80.f_1 < (Local_86.f_1 + 15f) || Local_80.f_1 == (Local_86.f_1 + 15f))
			{
				Local_80.f_1 = (Local_86.f_1 + 15f);
				iLocal_121 = 0;
			}
		}
		else if (Local_80.f_1 < (Local_86.f_1 + 10f) || Local_80.f_1 == (Local_86.f_1 + 10f))
		{
			Local_80.f_1 = (Local_86.f_1 + 10f);
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_80.f_2 = (Local_80.f_2 - 10f);
		}
		if (Local_80.f_2 < Local_86.f_2 || Local_80.f_2 == Local_86.f_2)
		{
			Local_80.f_2 = Local_86.f_2;
			iLocal_122 = 0;
		}
		if (func_79() == 0)
		{
			if (MISC::IS_BIT_SET(Global_2265, 4))
			{
				Local_86.f_1 = (Local_86.f_1 + 15f);
			}
			else
			{
				Local_86.f_1 = (Local_86.f_1 + 10f);
			}
			Local_86.x = (Local_86.x - 14f);
		}
		else
		{
			Local_86 = { Global_14339[Global_14338 /*3*/] };
		}
		Local_80 = { Local_86 };
		iLocal_122 = 0;
		iLocal_121 = 0;
		iLocal_120 = 0;
		MOBILE::SET_MOBILE_PHONE_POSITION(Local_80);
		if ((iLocal_120 == 0 && iLocal_121 == 0) && iLocal_122 == 0)
		{
			iLocal_123 = 0;
			Local_83 = { -90.3f, 0f, 90f };
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_83, 0);
			if (!MISC::IS_BIT_SET(Global_2263, 22))
			{
				if (MISC::IS_BIT_SET(Global_2263, 28))
				{
					StringCopy(&cLocal_144, "CELL_294", 16);
					func_78();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_293", 16);
					func_77();
				}
				iLocal_99 = 2;
			}
		}
	}
}

void func_77()//Position - 0x6C89
{
	GlobalFunc_1493(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_1493(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (MISC::IS_BIT_SET(Global_2264, 28))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_286");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, 1), "CELL_277");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_GALSAVE");
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_76);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GlobalFunc_1493(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_78()//Position - 0x6D5B
{
	GlobalFunc_1493(uLocal_140, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	GlobalFunc_1493(uLocal_140, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (MISC::IS_BIT_SET(Global_2264, 28))
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), "CELL_287");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_286");
	}
	else
	{
		func_59(uLocal_140, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), "CELL_287");
		func_59(uLocal_140, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, 1), "CELL_277");
		func_59(uLocal_140, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_GALSAVE");
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_76);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GlobalFunc_1493(uLocal_140, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_79()//Position - 0x6E5B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			if (Global_14336 == 0)
			{
				if (Global_1578 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_15692 != 2)
						{
						}
					}
				}
			}
		}
		if (GlobalFunc_39(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_96401)
		{
			return 0;
		}
	}
	if (Global_68245)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2544850 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY.Is_Trackify_App_Available)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_80()//Position - 0x706E
{
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PAD::SET_INPUT_EXCLUSIVE(0, Global_14363);
	Local_83 = { Global_14353 };
	Local_86 = { Global_14346[Global_14338 /*3*/] };
	if (func_79())
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_89, 0);
		Local_83 = { Local_89 };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Local_92);
		Local_86 = { Local_92 };
		iLocal_117 = 0;
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
	}
	if (Global_14335)
	{
		GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_51(0);
		iLocal_130 = 0;
		if (MISC::IS_BIT_SET(Global_2263, 30))
		{
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			func_81();
		}
		if (iLocal_120)
		{
			if (MISC::IS_BIT_SET(Global_2263, 9))
			{
				Local_80.x = (Local_80.x + 2f);
			}
			else
			{
				Local_80.x = (Local_80.x + 12f);
			}
		}
		if (Local_80.x > Local_86.x || Local_80.x == Local_86.x)
		{
			Local_80.x = Local_86.x;
			iLocal_120 = 0;
		}
		if (iLocal_121)
		{
			Local_80.f_1 = (Local_80.f_1 - 6f);
		}
		if (Local_80.f_1 < Local_86.f_1 || Local_80.f_1 == Local_86.f_1)
		{
			Local_80.f_1 = Local_86.f_1;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_80.f_2 = (Local_80.f_2 - 10f);
		}
		if (Local_80.f_2 < Local_86.f_2 || Local_80.f_2 == Local_86.f_2)
		{
			Local_80.f_2 = Local_86.f_2;
			iLocal_122 = 0;
		}
		if (iLocal_122 == 0)
		{
			if (iLocal_117)
			{
				Local_77.x = (Local_77.x + 1f);
			}
			if (Local_77.x > Local_83.x || Local_77.x == Local_83.x)
			{
				Local_77.x = Local_83.x;
				iLocal_117 = 0;
			}
			if (iLocal_118)
			{
				Local_77.f_1 = (Local_77.f_1 - 2f);
			}
			if (Local_77.f_1 < Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
			{
				Local_77.f_1 = Local_83.f_1;
				iLocal_118 = 0;
			}
			if (iLocal_119)
			{
				Local_77.f_2 = (Local_77.f_2 - 14f);
			}
			if (Local_77.f_2 < Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
			{
				Local_77.f_2 = Local_83.f_2;
				iLocal_119 = 0;
			}
		}
		if (iLocal_125)
		{
			Local_77 = { Local_83 };
			Local_80 = { Local_86 };
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			if (func_79() == 0)
			{
				MOBILE::SET_MOBILE_PHONE_ROTATION(Local_77, 0);
				MOBILE::SET_MOBILE_PHONE_POSITION(Local_80);
			}
			GlobalFunc_4937(0, 1);
		}
		else if (func_79() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_77, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(Local_80);
		}
		if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
		{
			func_81();
		}
	}
	else
	{
		if (iLocal_117)
		{
			Local_77.x = (Local_77.x + 1f);
		}
		if (Local_77.x > Local_83.x || Local_77.x == Local_83.x)
		{
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_77.f_1 = (Local_77.f_1 - 2f);
		}
		if (Local_77.f_1 < Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_77.f_2 = (Local_77.f_2 - 7f);
		}
		if (Local_77.f_2 < Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
		{
			iLocal_119 = 0;
		}
		if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
		{
			func_81();
		}
	}
	MOBILE::SET_MOBILE_PHONE_ROTATION(Local_77, 0);
}

void func_81()//Position - 0x7378
{
	func_1(0);
	if (func_79() == 0)
	{
		if (MISC::IS_BIT_SET(Global_2263, 30))
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14339[Global_14338 /*3*/]);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14346[Global_14338 /*3*/]);
		}
		Local_77 = { Local_83 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_77, 0);
	}
	Global_16725 = 0;
	func_91(0, 0);
	func_95(0);
	iLocal_114 = 0;
	func_90();
	Global_14380 = 1;
	Global_16728 = 0;
	if (Global_14393.f_1 > 4)
	{
		Global_14393.f_1 = 6;
		Global_14371 = 1;
		GlobalFunc_7908();
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_139))
	{
		GlobalFunc_2013(uLocal_139, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0);
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_140);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_139);
	if (Global_14553 == 1)
	{
		MISC::SET_BIT(&Global_2263, 17);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 17);
	}
	MISC::CLEAR_BIT(&Global_2263, 18);
	MISC::CLEAR_BIT(&Global_2263, 21);
	HUD::CLEAR_FLOATING_HELP(0, 1);
	MISC::CLEAR_BIT(&Global_2265, 3);
	MISC::CLEAR_BIT(&Global_2544648, 3);
	MISC::SET_GAME_PAUSED(0);
	PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
	HUD::RESET_HUD_COMPONENT_VALUES(15);
	Global_16729 = 1;
	AUDIO::STOP_SOUND(iLocal_111);
	AUDIO::RELEASE_SOUND_ID(iLocal_111);
	HUD::BUSYSPINNER_OFF();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
	}
	func_90();
	MOBILE::_0xA2CCBE62CD4C91A4(0);
	MOBILE::_SET_MOBILE_PHONE_UNK(0);
	MOBILE::_0x1B0B4AEED5B9B41C(1f);
	if (Global_2543374 > 0 && Global_2543374 < 13)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_32[Global_2543374]);
	}
	GlobalFunc_4937(0, 1);
	if (func_130(0, 1, iLocal_63))
	{
		iLocal_63 = 0;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}






void func_87()//Position - 0x842C
{
	switch (iLocal_99)
	{
		case 1:
			HUD::CLEAR_FLOATING_HELP(0, 1);
			if (MISC::IS_BIT_SET(Global_2263, 28))
			{
				StringCopy(&cLocal_144, "CELL_296", 16);
				func_49();
			}
			else
			{
				StringCopy(&cLocal_144, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_2263, 22))
			{
				HUD::CLEAR_FLOATING_HELP(0, 1);
				if (MISC::IS_BIT_SET(Global_2263, 28))
				{
					StringCopy(&cLocal_144, "CELL_294", 16);
					func_78();
				}
				else
				{
					StringCopy(&cLocal_144, "CELL_293", 16);
					func_77();
				}
				iLocal_99 = 2;
			}
			break;
		
		default:
			break;
	}
}



void func_90()//Position - 0x8588
{
	if (Global_1602437.f_69970 == 0 && Global_1602437.f_69971 == 0)
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
}

void func_91(int iParam0, int iParam1)//Position - 0x85B4
{
	if (Global_1602437.f_69970 == 1)
	{
	}
	else if (Global_1602437.f_69971 == 1)
	{
	}
	else
	{
		MOBILE::CELL_CAM_ACTIVATE(iParam0, iParam1);
	}
}

int func_92()//Position - 0x85E6
{
	if (MISC::IS_BIT_SET(Global_2263, 15))
	{
		return 1;
	}
	return 0;
}


void func_94()//Position - 0x8674
{
	if (Global_14335)
	{
		Local_83 = { -90.3f, 0f, 90f };
		Local_86 = { 1.5f, 0f, -17f };
		if (func_79())
		{
			MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_89, 0);
			Local_83 = { Local_89 };
			MOBILE::GET_MOBILE_PHONE_POSITION(&Local_92);
			Local_86 = { Local_92 };
			iLocal_117 = 0;
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
		}
		if (iLocal_119 == 0)
		{
			if (iLocal_120)
			{
				Local_80.x = (Local_80.x - 14f);
			}
			if (Local_80.x < Local_86.x || Local_80.x == Local_86.x)
			{
				iLocal_120 = 0;
			}
			if (iLocal_121)
			{
				Local_80.f_1 = (Local_80.f_1 + 7f);
			}
			if (Local_80.f_1 > Local_86.f_1 || Local_80.f_1 == Local_86.f_1)
			{
				iLocal_121 = 0;
			}
			if (iLocal_122)
			{
				Local_80.f_2 = (Local_80.f_2 + 12f);
			}
			if (Local_80.f_2 > Local_86.f_2 || Local_80.f_2 == Local_86.f_2)
			{
				iLocal_122 = 0;
			}
		}
		if (iLocal_117)
		{
			Local_77.x = (Local_77.x - 1f);
		}
		if (Local_77.x < Local_83.x || Local_77.x == Local_83.x)
		{
			Local_77.x = Local_83.x;
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_77.f_1 = (Local_77.f_1 - 0.5f);
		}
		if (Local_77.f_1 < Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
		{
			Local_77.f_1 = Local_83.f_1;
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_77.f_2 = (Local_77.f_2 + 11f);
		}
		if (Local_77.f_2 > Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
		{
			Local_77.f_2 = Local_83.f_2;
			iLocal_119 = 0;
		}
		if (func_79() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(Local_77, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(Local_80);
		}
	}
	else
	{
		Local_83 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_117)
		{
			Local_77.x = (Local_77.x - 1f);
		}
		if (Local_77.x < Local_83.x || Local_77.x == Local_83.x)
		{
			iLocal_117 = 0;
		}
		if (iLocal_118)
		{
			Local_77.f_1 = (Local_77.f_1 + 2f);
		}
		if (Local_77.f_1 > Local_83.f_1 || Local_77.f_1 == Local_83.f_1)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_77.f_2 = (Local_77.f_2 + 7f);
		}
		if (Local_77.f_2 > Local_83.f_2 || Local_77.f_2 == Local_83.f_2)
		{
			iLocal_119 = 0;
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_77, 0);
	}
	if (Global_14335)
	{
		if (((((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0)
		{
			if (func_79())
			{
			}
			else
			{
				Local_77 = { Local_83 };
				MOBILE::SET_MOBILE_PHONE_ROTATION(Local_77, 0);
				Local_80 = { Local_86 };
				MOBILE::SET_MOBILE_PHONE_POSITION(Local_80);
			}
			if (iLocal_102 == 0)
			{
				Global_16726 = 0;
				func_91(1, 1);
				iLocal_114 = 1;
				func_95(1);
				func_53();
				func_96();
				func_51(0);
				SYSTEM::SETTIMERA(0);
				iLocal_141 = 1;
				iLocal_142 = 1;
				func_103();
				GlobalFunc_1493(uLocal_139, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_143), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!MISC::IS_BIT_SET(Global_2544648, 2))
				{
					GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				GlobalFunc_1493(uLocal_139, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432, -1082130432, -1082130432);
				func_126();
			}
		}
	}
	else if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
	{
		Local_77 = { Local_83 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_77, 0);
		Global_16726 = 0;
	}
}

void func_95(bool bParam0)//Position - 0x89EC
{
	if (func_132())
	{
		if (bParam0)
		{
			if (!GRAPHICS::_0xBCEDB009461DA156())
			{
				GRAPHICS::_0x7AC24EAB6D74118D(1);
				if (Global_2543374 > 0 && Global_2543374 < 99)
				{
					GRAPHICS::_0x27FEB5254759CDE3(sLocal_32[Global_2543374], 0);
					MOBILE::_0x1B0B4AEED5B9B41C(0.25f);
				}
			}
		}
		else if (GRAPHICS::_0xBCEDB009461DA156())
		{
			GRAPHICS::_0x7AC24EAB6D74118D(0);
		}
	}
}

void func_96()//Position - 0x8A4A
{
	if (Global_2543373 > 0 && Global_2543373 < 99)
	{
		GRAPHICS::SET_TIMECYCLE_MODIFIER(sLocal_18[Global_2543373]);
	}
}

void func_97()//Position - 0x8A73
{
	if (Global_14335)
	{
		iLocal_124 = 0;
		func_53();
		GlobalFunc_4937(1, 1);
		func_91(1, 1);
		iLocal_114 = 1;
		Global_16729 = 1;
	}
}

void func_98()//Position - 0x8A9B
{
	if (iLocal_126 == 0)
	{
		if (MISC::IS_BIT_SET(Global_2263, 28))
		{
			StringCopy(&cLocal_144, "CELL_296", 16);
			func_49();
		}
		else
		{
			StringCopy(&cLocal_144, "CELL_295", 16);
			func_27();
		}
		if (MISC::ARE_STRINGS_EQUAL(&cLocal_144, "DUMMYCOMPARISON"))
		{
			fLocal_97 = fLocal_98;
			fLocal_95 = fLocal_96;
			fLocal_98 = fLocal_97;
			fLocal_96 = fLocal_95;
		}
		iLocal_99 = 1;
	}
}


void func_100()//Position - 0x8B11
{
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 0;
	iLocal_124 = 1;
}

void func_101()//Position - 0x8B2E
{
	func_102();
}

void func_102()//Position - 0x8B3A
{
	if (iLocal_150)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_150 = 0;
		}
	}
	if (iLocal_150 == 0)
	{
	}
}

void func_103()//Position - 0x8B59
{
	if (Global_14393.f_1 > 3)
	{
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_139, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}




void func_107()//Position - 0x8CC3
{
	PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 56, 1);
	if (iLocal_149 == 0)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_14366);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_14363);
		PAD::DISABLE_CONTROL_ACTION(0, 278, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 279, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 280, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 282, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 282, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 284, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 285, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 77, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 78, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 286, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 287, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 79, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 61, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 62, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 63, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 64, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 90, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 108, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 109, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 111, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 112, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 137, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 139, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
	}
}

int func_108()//Position - 0x8EA2
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uVar0, -1))
			{
				return 1;
			}
			else if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1) == PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_109()//Position - 0x8EF3
{
	bool bVar0;
	
	func_116(&bVar0);
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
	if (GlobalFunc_479())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (GlobalFunc_478())
	{
		return 1;
	}
	if (GlobalFunc_477(157))
	{
		if (!GlobalFunc_476())
		{
			return 1;
		}
	}
	if (GlobalFunc_477(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (GlobalFunc_5086() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GlobalFunc_5086()) == 0)
		{
			return 1;
		}
	}
	return 0;
}







void func_116(var uParam0)//Position - 0x9006
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
					func_117(iVar0);
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

void func_117(int iParam0)//Position - 0x9076
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (GlobalFunc_1471(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (GlobalFunc_2012(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}




void func_121()//Position - 0x91A0
{
	if (func_122())
	{
		GRAPHICS::_0x4AF92ACD3141D96C();
		if (GRAPHICS::_0x2A893980E96B659A(0))
		{
			iLocal_102 = 1;
			iLocal_110 = 0;
		}
		else
		{
			Global_16729 = 1;
			Global_14393.f_1 = 3;
			HUD::BUSYSPINNER_OFF();
		}
	}
	else
	{
		iLocal_108 = 0;
		iLocal_109 = 0;
		if (iLocal_103 == 1)
		{
			if (iLocal_126 == 0)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_139))
				{
					if (func_132())
					{
						if (Global_2543374 == 0)
						{
							if (!MISC::IS_BIT_SET(Global_2544648, 2))
							{
								GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						GlobalFunc_1493(uLocal_139, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!MISC::IS_BIT_SET(Global_2544648, 2))
						{
							GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						GlobalFunc_1493(uLocal_139, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_139))
			{
				GlobalFunc_1493(uLocal_139, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				GlobalFunc_1493(uLocal_139, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), -1082130432, -1082130432, -1082130432);
			}
			iLocal_103 = 0;
		}
		iLocal_110 = 0;
		HUD::BUSYSPINNER_OFF();
	}
}

int func_122()//Position - 0x92FE
{
	if (Global_1602437.f_69970 == 1)
	{
		if (Global_68245)
		{
			return 0;
		}
	}
	if (Global_1602437.f_69971 == 1)
	{
		if (Global_68245)
		{
			return 0;
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION())
	{
		if (MISC::IS_BIT_SET(Global_2264, 28))
		{
			return 0;
		}
	}
	return 1;
}



int func_125()//Position - 0x93D2
{
	if (Global_68245)
	{
		Global_14393 = 3;
	}
	else
	{
		Global_14393 = GlobalFunc_8315();
	}
	if (Global_14393 > 3)
	{
		Global_14393 = 3;
	}
	return Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_7;
}

void func_126()//Position - 0x9408
{
	if (Global_14393.f_1 > 3)
	{
		Global_14393.f_1 = 8;
	}
	Global_16728 = 0;
	iLocal_126 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Local_66 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (Global_14335)
	{
		while (SYSTEM::TIMERA() < iLocal_136)
		{
			SYSTEM::WAIT(0);
			func_103();
			func_75();
			RECORDING::_STOP_RECORDING_THIS_FRAME();
		}
		GlobalFunc_2013(uLocal_139, "OPEN_SHUTTER");
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		func_98();
		iLocal_128 = 1;
		SYSTEM::SETTIMERB(0);
	}
	else
	{
		func_91(1, 1);
		func_95(1);
		func_53();
		func_96();
		func_51(0);
		iLocal_114 = 1;
	}
}

void func_127(int iParam0)//Position - 0x949B
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 15);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 15);
	}
}



int func_130(int iParam0, int iParam1, bool bParam2)//Position - 0x94D2
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && bParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_131()//Position - 0x9503
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
			MOBILE::_0x53F4892D18EC90A4(fLocal_155);
			MOBILE::_0x3117D84EFA60F77B(fLocal_156);
			MOBILE::_0xAC2890471901861C(fLocal_157);
		}
		else
		{
			MOBILE::_0x53F4892D18EC90A4(fLocal_155);
			MOBILE::_0x3117D84EFA60F77B(fLocal_156);
			MOBILE::_0xAC2890471901861C(fLocal_157);
		}
	}
	MOBILE::_0x15E69E2802C24B8D(fLocal_158);
	MOBILE::_0xD6ADE981781FCA09(fLocal_159);
	MOBILE::_0xF1E22DC13F5EEBAD(fLocal_160);
	MOBILE::_0x466DA42C89865553(fLocal_161);
	func_50();
}

int func_132()//Position - 0x956F
{
	if (iLocal_55 == 0)
	{
		iLocal_55 = 1;
	}
	return 1;
}

