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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	float fLocal_73 = 0f;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_77 = { 0, 0, 0 } ;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 16;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	char* sLocal_276 = NULL;
	int iLocal_277 = 0;
	struct<3> Local_278 = { 0, 0, 0 } ;
	struct<3> Local_281 = { 0, 0, 0 } ;
	int iLocal_284 = 0;
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
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_278 = { 1435.77f, 2983.11f, 40.77f };
	Local_281 = { 2162.552f, 2122.646f, 124.7956f };
	Local_55 = { ScriptParam_0.f_1[0 /*3*/] };
	func_305();
	if (CLOCK::GET_CLOCK_HOURS() > 7 && CLOCK::GET_CLOCK_HOURS() < 19)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_279(Local_55, 23, iLocal_284, 0, 0))
	{
		GlobalFunc_6828(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_228();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || iLocal_260)
		{
			if (!GlobalFunc_6827())
			{
				if (GlobalFunc_10586())
				{
					func_228();
				}
			}
			RECORDING::_0x208784099002BC30("RE_AV", 0);
			switch (iLocal_50)
			{
				case 0:
					if (iLocal_52)
					{
						iLocal_53 = 1;
						iLocal_50 = 1;
					}
					else
					{
						if (func_214())
						{
							func_228();
						}
						if (!iLocal_54)
						{
							func_213();
						}
						else
						{
							func_212();
						}
					}
					break;
				
				case 1:
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_251))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_251, 0))
						{
							GlobalFunc_5077();
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_252))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_252, 0))
						{
							GlobalFunc_5077();
						}
					}
					if (!iLocal_259)
					{
						func_209();
						func_196();
					}
					if (!iLocal_260)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_253))
						{
							if (GlobalFunc_2367(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_253, 1), 1) < IntToFloat(iLocal_273) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_253))
							{
								if (!iLocal_267)
								{
									GlobalFunc_4956();
									SYSTEM::WAIT(0);
									if (iLocal_51 == 1)
									{
										if (GlobalFunc_8329() == 0)
										{
											GlobalFunc_10641(&uLocal_83, "re_acau", "re_ac_approM", 4, 0, 0, 0);
										}
										else if (GlobalFunc_8329() == 1)
										{
											GlobalFunc_10641(&uLocal_83, "re_acau", "re_ac_approF", 4, 0, 0, 0);
										}
										else if (GlobalFunc_8329() == 2)
										{
											GlobalFunc_10641(&uLocal_83, "re_acau", "re_ac_approT", 4, 0, 0, 0);
										}
									}
									else if (iLocal_51 == 2)
									{
										if (GlobalFunc_8329() == 0)
										{
											GlobalFunc_10641(&uLocal_83, "reac2au", "reac2_approM", 4, 0, 0, 0);
										}
										else if (GlobalFunc_8329() == 1)
										{
											GlobalFunc_10641(&uLocal_83, "reac2au", "reac2_approF", 4, 0, 0, 0);
										}
										else if (GlobalFunc_8329() == 2)
										{
											GlobalFunc_10641(&uLocal_83, "reac2au", "reac2_approT", 4, 0, 0, 0);
										}
									}
									if (HUD::DOES_BLIP_EXIST(uLocal_250))
									{
										HUD::SHOW_HEIGHT_ON_BLIP(uLocal_250, 1);
									}
									iLocal_267 = 1;
								}
							}
						}
						if (iLocal_51 == 1)
						{
							RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
						}
						func_175();
						if (iLocal_51 == 2)
						{
							func_174();
						}
					}
					else
					{
						func_173();
						if (!iLocal_262)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_253))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_253, 0))
								{
									if (!PED::IS_PED_INJURED(iLocal_251))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_270);
										TASK::TASK_ENTER_VEHICLE(0, iLocal_253, -1, -1, 2f, 524296, 0);
										TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_270);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_251, uLocal_270);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_270);
										PED::SET_PED_KEEP_TASK(iLocal_251, 1);
									}
									iLocal_262 = 1;
								}
							}
						}
						func_167();
						func_166();
						func_165();
						if (iLocal_51 == 1)
						{
							func_4();
							func_2();
						}
					}
					GlobalFunc_587();
					break;
			}
		}
		else
		{
			func_228();
		}
	}
}


void func_2()//Position - 0x38A
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_251))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_251, 10f, 10f, 10f, 0, 1, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if ((SYSTEM::TIMERB() > 3000 && iLocal_271 == 0) && !GlobalFunc_111())
			{
				GlobalFunc_10641(&uLocal_83, "re_acau", "re_ac_attac2", 4, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_251, PLAYER::PLAYER_PED_ID(), 4000, 0, 2);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_80, 1862763509);
				SYSTEM::SETTIMERB(0);
				iLocal_271++;
			}
			if ((SYSTEM::TIMERB() > 4000 && iLocal_271 == 1) && !GlobalFunc_111())
			{
				GlobalFunc_10641(&uLocal_83, "re_acau", "re_ac_attac1", 4, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_251, PLAYER::PLAYER_PED_ID(), 4000, 0, 2);
				SYSTEM::SETTIMERB(0);
				iLocal_271++;
			}
			if ((SYSTEM::TIMERB() > 3000 && iLocal_271 == 2) && !GlobalFunc_111())
			{
				GlobalFunc_10641(&uLocal_83, "re_acau", "re_ac_attac2", 4, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_251, PLAYER::PLAYER_PED_ID(), 4000, 0, 2);
				SYSTEM::SETTIMERB(0);
				iLocal_271 = 0;
			}
		}
	}
}


void func_4()//Position - 0x4D8
{
	var uVar0;
	
	if (!iLocal_266)
	{
		if (!PED::IS_PED_INJURED(iLocal_251))
		{
			if (!iLocal_263)
			{
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_263 = 1;
					iLocal_274++;
					GlobalFunc_10641(&uLocal_83, "re_acau", "re_ac_rambl", 4, 0, 0, 0);
					SYSTEM::SETTIMERA(0);
				}
			}
			else if (SYSTEM::TIMERA() > 4000)
			{
				if (!PED::IS_PED_INJURED(iLocal_251))
				{
					TASK::TASK_COMBAT_PED(iLocal_251, PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_251, 1);
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
				SYSTEM::WAIT(3000);
				iLocal_263 = 0;
			}
			if (!PED::IS_PED_INJURED(iLocal_251))
			{
				if ((iLocal_274 >= 1 && PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0)) && iLocal_263)
				{
					TASK::TASK_PLAY_ANIM(iLocal_251, "amb@world_human_guard_patrol@male@idle_b", "idle_e", 2f, -2f, -1, 0, 0, 0, 0, 0);
					AUDIO::TRIGGER_MUSIC_EVENT(sLocal_276);
					CAM::SHAKE_GAMEPLAY_CAM("DEATH_FAIL_IN_EFFECT_SHAKE", 1f);
					GRAPHICS::ANIMPOSTFX_PLAY("Dont_tazeme_bro", 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 768);
					iLocal_266 = 1;
				}
			}
		}
	}
	else
	{
		VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(1);
		switch (iLocal_277)
		{
			case 0:
				if (HUD::DOES_BLIP_EXIST(uLocal_248))
				{
					if (PED::IS_PED_INJURED(iLocal_251))
					{
						HUD::REMOVE_BLIP(&uLocal_248);
					}
				}
				SYSTEM::WAIT(2000);
				iLocal_277++;
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(iLocal_251))
				{
					GlobalFunc_5105();
					uLocal_81 = STREAMING::STREAMVOL_CREATE_SPHERE(923.5159f, 3203.386f, 40.173f, 30f, 13, 127);
					GlobalFunc_7632(1);
					CAM::DO_SCREEN_FADE_OUT(500);
					SYSTEM::WAIT(2000);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_251))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_251);
					}
					iLocal_277++;
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
				break;
			
			case 2:
				GRAPHICS::ANIMPOSTFX_STOP("Dont_tazeme_bro");
				if (GlobalFunc_8329() == 0)
				{
					func_43(PLAYER::PLAYER_PED_ID(), 12, 52, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					func_43(PLAYER::PLAYER_PED_ID(), 12, 38, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				else if (GlobalFunc_8329() == 2)
				{
					func_43(PLAYER::PLAYER_PED_ID(), 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 923.5159f, 3203.386f, 40.173f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 280.1253f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-5.2078f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15.2963f, 1065353216);
				if (HUD::DOES_BLIP_EXIST(uLocal_248))
				{
					HUD::REMOVE_BLIP(&uLocal_248);
				}
				STREAMING::REQUEST_MODEL(joaat("freight"));
				STREAMING::REQUEST_MODEL(joaat("freightcar"));
				STREAMING::REQUEST_MODEL(joaat("freightgrain"));
				STREAMING::REQUEST_MODEL(joaat("freightcont1"));
				while (((!STREAMING::HAS_MODEL_LOADED(joaat("freight")) || !STREAMING::HAS_MODEL_LOADED(joaat("freightcar"))) || !STREAMING::HAS_MODEL_LOADED(joaat("freightgrain"))) || !STREAMING::HAS_MODEL_LOADED(joaat("freightcont1")))
				{
					SYSTEM::WAIT(0);
				}
				VEHICLE::DELETE_ALL_TRAINS();
				iLocal_254 = VEHICLE::CREATE_MISSION_TRAIN(0, 1063.595f, 3227.571f, 39.3899f, 1);
				uVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_254, 26, iLocal_257, -1, 1, 1);
				uVar0 = uVar0;
				if (!iLocal_265)
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Train_Horn", 0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Warning_Once", iLocal_254, "TRAIN_HORN", 0, 0);
					}
				}
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "random@train_tracks", "on_back_c", 1000f, -8f, -1, 0, 0, 0, 0, 0);
				}
				SYSTEM::WAIT(100);
				SYSTEM::SETTIMERA(0);
				iLocal_277++;
				break;
			
			case 3:
				STREAMING::STREAMVOL_DELETE(uLocal_81);
				CAM::DO_SCREEN_FADE_IN(3000);
				GRAPHICS::SET_TIMECYCLE_MODIFIER("Drug_deadman");
				GRAPHICS::_0x1CBA05AE7BD7EE05(30f);
				CLOCK::ADD_TO_CLOCK_TIME(8, 0, 0);
				GlobalFunc_7942(8f);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				iLocal_277++;
				break;
			
			case 4:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@train_tracks", "on_back_c", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "random@train_tracks", "on_back_c") > 0.95f)
					{
						GlobalFunc_7632(0);
						if (GlobalFunc_4705(64) || PAD::IS_CONTROL_PRESSED(0, 22))
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "random@train_tracks", "on_back_c") < 0.1f)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-5.2078f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15.2963f, 1065353216);
					}
				}
				if (SYSTEM::TIMERA() > 2000 && SYSTEM::TIMERA() < 3000)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10641(&uLocal_83, "re_acau", "re_ac_awakeM", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10641(&uLocal_83, "re_acau", "re_ac_awakeF", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10641(&uLocal_83, "re_acau", "re_ac_awakeT", 4, 0, 0, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_254))
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Train_Horn", 0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Warning_Once", iLocal_254, "TRAIN_HORN", 0, 0);
						iLocal_265 = 1;
					}
				}
				if (SYSTEM::TIMERA() > 10000)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						func_15();
					}
					else
					{
						func_14();
						if (iLocal_51 == 1)
						{
							GlobalFunc_7610(213, 0, 0);
						}
						else if (iLocal_51 == 2)
						{
							GlobalFunc_7610(214, 0, 0);
						}
						GlobalFunc_7068();
					}
				}
				break;
			}
	}
}










void func_14()//Position - 0x12F6
{
	func_228();
}

void func_15()//Position - 0x1302
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_16(23, iLocal_284);
		GlobalFunc_7068();
		func_228();
	}
}

void func_16(int iParam0, int iParam1)//Position - 0x1327
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
			GlobalFunc_7610(GlobalFunc_4703(iParam0, iParam1), Local_47.x, Local_47.f_1);
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



























int func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x21D7
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
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
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
		GlobalFunc_8539(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_7054(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7054(iParam0, 9);
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
			iVar7 = GlobalFunc_7614(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7614(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7614(iParam0, 2);
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
							GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8539(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_56(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8539(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_56(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, func_53(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_52(iParam0, iVar10, &iVar4, 1))
							{
								func_43(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_43(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_43(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_43(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_43(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_43(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_43(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8539(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_56(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8539(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_56(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_56(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_43(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (func_52(iParam0, iVar10, &iVar4, 0))
		{
			func_43(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_44(iParam0, iVar10, &iVar4))
		{
			func_43(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_44(int iParam0, int iParam1, int iParam2)//Position - 0x29C4
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_45(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_45(int iParam0, int iParam1, int iParam2)//Position - 0x2A50
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_45(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_45(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10828(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_45(iParam0, 14, iVar4))
										{
											if (!GlobalFunc_8307(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_68106[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = GlobalFunc_7054(iParam0, iVar2);
						Global_68106[2 /*14*/] = { GlobalFunc_10828(iVar0, iVar2, iVar1) };
						if (!GlobalFunc_8307(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_68106[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar32 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_45(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_4 || Global_68106[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
	{
		return 1;
	}
	return 0;
}







int func_52(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3509
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_45(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_53(int iParam0, int iParam1, int iParam2)//Position - 0x359F
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
				if (func_45(iParam0, iParam1, iVar0))
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
				if (func_45(iParam0, iParam1, iVar1))
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
			return GlobalFunc_7054(iParam0, iParam1);
		}
	}
	return -99;
}



int func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x39F7
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = GlobalFunc_7054(iParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_7054(iParam0, 2);
				iVar0 = GlobalFunc_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		GlobalFunc_4911(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		GlobalFunc_4912(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (GlobalFunc_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!GlobalFunc_7935(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_7935(iParam0, 3, 135, 150))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!GlobalFunc_7935(iParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_7935(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!GlobalFunc_7935(iParam0, 3, 176, 191) && !GlobalFunc_7935(iParam0, 3, 227, 242))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = GlobalFunc_7054(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_7054(iParam0, 11);
								iVar5 = GlobalFunc_11156(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_7054(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!GlobalFunc_22(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = GlobalFunc_7054(iParam0, 8);
								iVar8 = GlobalFunc_7054(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = GlobalFunc_11156(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = GlobalFunc_11156(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = GlobalFunc_7054(iParam0, 11);
								iVar0 = GlobalFunc_11156(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}













































































































void func_165()//Position - 0x1E503
{
	if ((PED::IS_PED_INJURED(iLocal_251) && PED::IS_PED_INJURED(iLocal_252)) && !iLocal_266)
	{
		func_15();
	}
	if (iLocal_51 == 1)
	{
		if (!iLocal_266)
		{
			if (!PED::IS_PED_INJURED(iLocal_251))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_251, 50f, 50f, 50f, 0, 1, 0))
				{
					func_15();
				}
			}
		}
	}
	else if (iLocal_51 == 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_251) && !PED::IS_PED_INJURED(iLocal_252))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_251, 200f, 200f, 200f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_251, 200f, 200f, 200f, 0, 1, 0))
			{
				func_15();
			}
		}
	}
}

void func_166()//Position - 0x1E5CC
{
	if (!PED::IS_PED_INJURED(iLocal_251))
	{
		if (iLocal_51 == 1)
		{
			if (!PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_251, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, 0, 1, 0) || !ENTITY::IS_ENTITY_AT_COORD(iLocal_251, Local_70, 215f, 215f, 215f, 0, 1, 0))
				{
					if ((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_251) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_251)) || !ENTITY::IS_ENTITY_AT_COORD(iLocal_251, Local_70, 215f, 215f, 215f, 0, 1, 0))
					{
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) || !ENTITY::IS_ENTITY_AT_COORD(iLocal_251, Local_70, 215f, 215f, 215f, 0, 1, 0))
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_251, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(iLocal_251, 1);
							GlobalFunc_4956();
							SYSTEM::WAIT(0);
							GlobalFunc_10641(&uLocal_83, "re_acau", "re_ac_aim", 4, 0, 0, 0);
							func_15();
						}
					}
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				if (((PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("annihilator"))) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("buzzard"))) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("lazer")))
				{
					func_15();
				}
			}
		}
	}
}

void func_167()//Position - 0x1E745
{
	if (iLocal_51 == 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_251))
		{
			if (!TASK::IS_PED_IN_WRITHE(iLocal_251))
			{
				if (iLocal_277 < 3)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_251, 20f, 20f, 10f, 0, 1, 0))
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
					}
					else if (GlobalFunc_111())
					{
						GlobalFunc_619(1);
					}
				}
			}
		}
		else if (GlobalFunc_620())
		{
			GlobalFunc_619(0);
		}
	}
	else if (iLocal_51 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_251))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_251, 31f, 31f, 11f, 0, 1, 0))
			{
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
				}
			}
			else if (GlobalFunc_111())
			{
				GlobalFunc_619(1);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_252))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_252, 31f, 31f, 11f, 0, 1, 0))
			{
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
				}
			}
			else if (GlobalFunc_111())
			{
				GlobalFunc_619(1);
			}
		}
		else if (GlobalFunc_620())
		{
			GlobalFunc_619(0);
		}
		if (!GlobalFunc_111())
		{
			if (!iLocal_269)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_251, 30f, 30f, 10f, 0, 1, 0))
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10641(&uLocal_83, "reac2au", "reac2_attacM", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10641(&uLocal_83, "reac2au", "reac2_attacF", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10641(&uLocal_83, "reac2au", "reac2_attacT", 4, 0, 0, 0);
					}
				}
				iLocal_269 = 1;
			}
			if (iLocal_275 < MISC::GET_GAME_TIMER())
			{
				if (GlobalFunc_745())
				{
					if (!PED::IS_PED_INJURED(iLocal_251))
					{
						if (!TASK::IS_PED_IN_WRITHE(iLocal_251))
						{
							GlobalFunc_10641(&uLocal_83, "reac2au", "reac2_attac2", 4, 0, 0, 0);
							iLocal_275 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 5000));
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iLocal_252))
				{
					if (!TASK::IS_PED_IN_WRITHE(iLocal_252))
					{
						GlobalFunc_10641(&uLocal_83, "reac2au", "reac2_attac3", 4, 0, 0, 0);
						iLocal_275 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 5000));
					}
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_251))
	{
		if (!TASK::IS_PED_IN_WRITHE(iLocal_251))
		{
			if ((PED::IS_PED_RAGDOLL(iLocal_251) || PED::IS_PED_BEING_STUNNED(iLocal_251, joaat("weapon_stungun"))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_251, PLAYER::PLAYER_PED_ID(), 1))
			{
				GlobalFunc_4956();
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_251);
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_251, Local_77, 0, 1, 0) || !ENTITY::IS_ENTITY_AT_COORD(iLocal_251, Local_70, 290f, 290f, 290f, 0, 1, 0))
			{
				if ((!iLocal_264 && !GlobalFunc_5672("reac2_attac1")) && iLocal_277 < 3)
				{
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					if (iLocal_51 == 1)
					{
						GlobalFunc_10641(&uLocal_83, "re_acau", "re_ac_flee", 4, 0, 0, 0);
					}
					else if (iLocal_51 == 2)
					{
						GlobalFunc_10641(&uLocal_83, "reac2au", "reac2_flee", 4, 0, 0, 0);
					}
					iLocal_264 = 1;
				}
			}
		}
	}
}






void func_173()//Position - 0x1EAD5
{
	if (HUD::DOES_BLIP_EXIST(uLocal_248))
	{
		if (PED::IS_PED_INJURED(iLocal_251))
		{
			HUD::REMOVE_BLIP(&uLocal_248);
		}
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_249))
	{
		if (PED::IS_PED_INJURED(iLocal_252))
		{
			HUD::REMOVE_BLIP(&uLocal_249);
		}
	}
}

void func_174()//Position - 0x1EB0D
{
	if (!PED::IS_PED_INJURED(iLocal_251))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_251, 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(iLocal_251, 0), 0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy", 3))
				{
					if ((((((((ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 0.1f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.075f) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 0.25f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.225f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 0.38f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.355f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 0.53f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.505f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 0.638f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.613f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 0.7f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.675f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 0.833f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.808f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") < 1f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy") > 0.983f))
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_251, 0), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SUSPENSION_SCRIPT_FORCE", PED::GET_VEHICLE_PED_IS_IN(iLocal_251, 0), 0, 0, 0);
					}
				}
				if (GlobalFunc_6827() && !iLocal_268)
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_10641(&uLocal_83, "reac2au", "reac2_sex", 4, 0, 0, 0);
						iLocal_268 = 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_252))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_252, PLAYER::PLAYER_PED_ID(), 1))
			{
				TASK::TASK_PLAY_ANIM(iLocal_252, "random@train_tracks", "frontseat_carsex_death_exit_top_guy", 2f, -2f, -1, 2097152, 0, 0, 0, 0);
			}
		}
	}
}

void func_175()//Position - 0x1ED71
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_253))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_253, 0)) || iLocal_51 == 2)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_253, Local_74, 0, 1, 0) || iLocal_259)
			{
				if (iLocal_51 == 1)
				{
					Local_58 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(-1f, 8.8f, 0f) };
					PATHFIND::GET_SAFE_COORD_FOR_PED(Local_58, 0, &Local_58, 0);
					Local_61 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(-1f, 0f, 8.8f) };
					PATHFIND::GET_SAFE_COORD_FOR_PED(Local_61, 0, &Local_61, 0);
					Local_64 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(-1f, 8.8f, 0f) };
					PATHFIND::GET_SAFE_COORD_FOR_PED(Local_64, 0, &Local_64, 0);
					Local_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(-1f, 0f, 8.8f) };
					PATHFIND::GET_SAFE_COORD_FOR_PED(Local_67, 0, &Local_67, 0);
					if (!CAM::IS_SPHERE_VISIBLE(Local_58, 2f))
					{
						iLocal_251 = PED::CREATE_PED(19, iLocal_257, Local_58 - Vector(1f, 0f, 0f), GlobalFunc_830(Local_58, GlobalFunc_80(PLAYER::PLAYER_ID())), 1, 1);
					}
					else if (!CAM::IS_SPHERE_VISIBLE(Local_61, 2f))
					{
						iLocal_251 = PED::CREATE_PED(19, iLocal_257, Local_61 - Vector(1f, 0f, 0f), GlobalFunc_830(Local_61, GlobalFunc_80(PLAYER::PLAYER_ID())), 1, 1);
					}
					else if (!CAM::IS_SPHERE_VISIBLE(Local_64, 2f))
					{
						iLocal_251 = PED::CREATE_PED(19, iLocal_257, Local_64 - Vector(1f, 0f, 0f), GlobalFunc_830(Local_64, GlobalFunc_80(PLAYER::PLAYER_ID())), 1, 1);
					}
					else if (!CAM::IS_SPHERE_VISIBLE(Local_67, 2f))
					{
						iLocal_251 = PED::CREATE_PED(19, iLocal_257, Local_67 - Vector(1f, 0f, 0f), GlobalFunc_830(Local_67, GlobalFunc_80(PLAYER::PLAYER_ID())), 1, 1);
					}
					if (!PED::IS_PED_INJURED(iLocal_251))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_251, "A_M_M_HillBilly_01_WHITE_MINI_02");
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_251, joaat("weapon_stungun"), -1, 1, 1);
						PED::SET_PED_SHOOT_RATE(iLocal_251, 100);
						PED::SET_PED_CONFIG_FLAG(iLocal_251, 137, 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_251, 188, 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_251, 286, 1);
						PED::SET_PED_MIN_GROUND_TIME_FOR_STUNGUN(PLAYER::PLAYER_PED_ID(), 10000);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_251, 0, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_251, 27, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_251, 13, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_251, 50, 1);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_251, 2);
						PED::SET_PED_COMBAT_ABILITY(iLocal_251, 2);
						PED::SET_PED_COMBAT_RANGE(iLocal_251, 0);
						PED::SET_COMBAT_FLOAT(iLocal_251, 2, 11f);
						PED::SET_COMBAT_FLOAT(iLocal_251, 13, 1f);
						AUDIO::STOP_PED_SPEAKING(iLocal_251, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_251, iLocal_80);
						GlobalFunc_173(&uLocal_83, 4, iLocal_251, "RAPIST", 0, 1);
						PED::CLEAR_PED_ALTERNATE_WALK_ANIM(PLAYER::PLAYER_PED_ID(), -8f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_251, 1);
						if (!HUD::DOES_BLIP_EXIST(uLocal_248))
						{
							uLocal_248 = GlobalFunc_7491(iLocal_251, 1, 145);
						}
						HUD::REMOVE_BLIP(&uLocal_250);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_270);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 3f, 1, 3f, 1082130432, 1, 0, -957453492);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_270);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_251, uLocal_270);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_270);
						PED::SET_PED_KEEP_TASK(iLocal_251, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_251, 0, 0);
						iLocal_260 = 1;
					}
				}
				else if (iLocal_51 == 2)
				{
					iLocal_259 = 1;
					AUDIO::TRIGGER_MUSIC_EVENT(sLocal_276);
					if (HUD::DOES_BLIP_EXIST(uLocal_250))
					{
						HUD::REMOVE_BLIP(&uLocal_250);
					}
					if (!PED::IS_PED_INJURED(iLocal_251))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_248))
						{
							uLocal_248 = GlobalFunc_7491(iLocal_251, 1, 145);
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_270);
						TASK::TASK_PLAY_ANIM(0, "random@train_tracks", "frontseat_carsex_outro_low_guy", 8f, -8f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_270);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_251, uLocal_270);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_270);
						PED::SET_PED_KEEP_TASK(iLocal_251, 1);
					}
					if (!PED::IS_PED_INJURED(iLocal_252))
					{
						uLocal_249 = GlobalFunc_7491(iLocal_252, 1, 145);
						ENTITY::SET_ENTITY_HEALTH(iLocal_252, 200);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_270);
						TASK::TASK_PLAY_ANIM(0, "random@train_tracks", "frontseat_carsex_outro_top_guy", 8f, -8f, -1, 0, 0, 0, 0, 0);
						if (!PED::IS_PED_INJURED(iLocal_251))
						{
							TASK::TASK_PAUSE(0, 400);
						}
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_270);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_252, uLocal_270);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_270);
						PED::SET_PED_KEEP_TASK(iLocal_252, 1);
					}
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iLocal_251) && !PED::IS_PED_INJURED(iLocal_252))
					{
						GlobalFunc_10641(&uLocal_83, "reac2au", "reac2_attac1", 4, 0, 0, 0);
					}
					iLocal_260 = 1;
				}
			}
		}
	}
}





















void func_196()//Position - 0x1FA85
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_253, 0))
	{
		if (!GlobalFunc_6827())
		{
			if (GlobalFunc_2367(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_253, 1), 1) < IntToFloat(iLocal_272))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_250))
				{
					HUD::REMOVE_BLIP(&uLocal_250);
				}
				uLocal_250 = GlobalFunc_7055(iLocal_253, 0, 0);
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_250, 0);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					iLocal_255 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				}
				GlobalFunc_9034(1);
				GlobalFunc_563(1);
			}
		}
	}
	else
	{
		func_14();
	}
	if (iLocal_51 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_251))
		{
			if ((((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_251, 13f, 13f, 13f, 0, 1, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_251, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_251, PLAYER::PLAYER_PED_ID(), 1)) || CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_251, 1), 2f))
			{
				iLocal_259 = 1;
				SYSTEM::SETTIMERB(0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_251))
				{
					if (!iLocal_82)
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_248))
						{
							uLocal_248 = GlobalFunc_7491(iLocal_251, 1, 145);
						}
						HUD::REMOVE_BLIP(&uLocal_250);
						iLocal_82 = 1;
						GlobalFunc_10641(&uLocal_83, "re_acau", "re_ac_attac1", 4, 0, 0, 0);
					}
					else
					{
						GlobalFunc_10641(&uLocal_83, "re_acau", "re_ac_rambl", 4, 0, 0, 0);
					}
					SYSTEM::SETTIMERB(0);
					if (!PED::IS_PED_INJURED(iLocal_251))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_251, PLAYER::PLAYER_PED_ID(), 30000, 0, 2);
					}
				}
			}
		}
	}
}













void func_209()//Position - 0x2018C
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_253))
	{
		if (iLocal_51 == 1)
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_253, Local_70, 15f, 15f, 15f, 0, 1, 0))
			{
				func_14();
			}
		}
		else if (iLocal_51 == 2)
		{
			if ((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_253, PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Local_70 - Vector(50f, 50f, 50f), Local_70 + Vector(50f, 50f, 50f), 0, 1)) || FIRE::IS_EXPLOSION_IN_AREA(2, Local_70 - Vector(50f, 50f, 50f), Local_70 + Vector(50f, 50f, 50f))) || FIRE::IS_EXPLOSION_IN_AREA(4, Local_70 - Vector(50f, 50f, 50f), Local_70 + Vector(50f, 50f, 50f))) || FIRE::IS_EXPLOSION_IN_AREA(0, Local_70 - Vector(50f, 50f, 50f), Local_70 + Vector(50f, 50f, 50f))) || FIRE::IS_EXPLOSION_IN_AREA(1, Local_70 - Vector(50f, 50f, 50f), Local_70 + Vector(50f, 50f, 50f))) || PED::IS_COP_PED_IN_AREA_3D(Local_70 - Vector(50f, 50f, 50f), Local_70 + Vector(50f, 50f, 50f))) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Local_70 - Vector(50f, 50f, 50f), Local_70 + Vector(50f, 50f, 50f))) || (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_253, 50f, 50f, 50f, 0, 1, 2) && PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID())))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					iLocal_255 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				}
				GlobalFunc_9034(1);
				GlobalFunc_563(1);
				iLocal_259 = 1;
			}
		}
	}
}



void func_212()//Position - 0x203B5
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surfer"), 1);
	if (iLocal_51 == 1)
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_70 - Vector(20f, 50f, 50f), Local_70 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	}
	else if (iLocal_51 == 2)
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_70 - Vector(50f, 100f, 100f), Local_70 + Vector(50f, 100f, 100f), 0, 1, 1, 1);
	}
	MISC::CLEAR_AREA_OF_VEHICLES(Local_55, 50f, 0, 0, 0, 0, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	STREAMING::REQUEST_MODEL(iLocal_257);
	STREAMING::REQUEST_MODEL(iLocal_258);
	STREAMING::REQUEST_ANIM_DICT("random@train_tracks");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_guard_patrol@male@idle_b");
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_276);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	AUDIO::START_AUDIO_SCENE("RE_ABANDONED_VEHICLE_SCENE");
	while (((((!STREAMING::HAS_MODEL_LOADED(iLocal_257) || !STREAMING::HAS_MODEL_LOADED(iLocal_258)) || !STREAMING::HAS_ANIM_DICT_LOADED("random@train_tracks")) || !STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_guard_patrol@male@idle_b")) || !AUDIO::PREPARE_MUSIC_EVENT(sLocal_276)) || !AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_ABANDONED_VEHICLE_SCENE"))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_8329() == 0)
	{
		GlobalFunc_173(&uLocal_83, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (GlobalFunc_8329() == 1)
	{
		GlobalFunc_173(&uLocal_83, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (GlobalFunc_8329() == 2)
	{
		GlobalFunc_173(&uLocal_83, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	iLocal_253 = VEHICLE::CREATE_VEHICLE(iLocal_258, Local_70, fLocal_73, 1, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_253, 10000);
	VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_253);
	VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_253, 5f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_258);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_253, "RE_ABANDONED_VEHICLE_MOTORHOME", 0);
	AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_253, 3);
	PED::ADD_RELATIONSHIP_GROUP("Redneck", &iLocal_80);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_80, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_80);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_80, joaat("COP"));
	if (iLocal_51 == 1)
	{
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_253, 0, 1, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_253, 1, 1, 0);
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_253, Local_70, 0f, 1700f, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_253, 0, 1);
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_253, 2);
	}
	else if (iLocal_51 == 2)
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_253, 0, 1);
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_253, 1);
		iLocal_251 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_253, 26, iLocal_257, -1, 1, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_251, 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_251, 2, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_251, 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_251, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_251, 8, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_251, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_251, iLocal_80);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_251, joaat("weapon_sawnoffshotgun"), -1, 0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_251, 1, 0);
		PED::SET_PED_ACCURACY(iLocal_251, 25);
		AUDIO::STOP_PED_SPEAKING(iLocal_251, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_251, "A_M_M_HillBilly_02_WHITE_MINI_01");
		GlobalFunc_173(&uLocal_83, 4, iLocal_251, "INCESTBRO1", 0, 1);
		iLocal_252 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_253, 26, iLocal_257, 0, 1, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_252, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_252, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_252, 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_252, 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_252, 8, 0, 0, 0);
		ENTITY::SET_ENTITY_HEALTH(iLocal_252, 100000000);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_252, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_252, iLocal_80);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_252, joaat("weapon_pistol"), -1, 0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_252, 1, 0);
		PED::SET_PED_ACCURACY(iLocal_252, 25);
		AUDIO::STOP_PED_SPEAKING(iLocal_252, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_252, "A_M_M_HillBilly_02_WHITE_MINI_02");
		GlobalFunc_173(&uLocal_83, 5, iLocal_252, "INCESTBRO2", 0, 1);
		TASK::TASK_PLAY_ANIM(iLocal_251, "random@train_tracks", "frontseat_carsex_loop_low_guy", 1000f, -8f, -1, 1, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(iLocal_252, "random@train_tracks", "frontseat_carsex_loop_top_guy", 1000f, -8f, -1, 1, 0, 0, 0, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_257);
	}
	iLocal_52 = 1;
}

void func_213()//Position - 0x2076E
{
	if (iLocal_51 == 1)
	{
		iLocal_257 = joaat("a_m_m_hillbilly_01");
		iLocal_258 = joaat("surfer");
		Local_70 = { 1430.073f, 2976.399f, 39.7694f };
		fLocal_73 = 131.558f;
		Local_77 = { 18f, 18f, 10f };
		iLocal_272 = 170;
		iLocal_273 = 40;
		Local_74 = { 20f, 20f, 10f };
		sLocal_276 = "RE8A_TASERED";
	}
	else if (iLocal_51 == 2)
	{
		iLocal_257 = joaat("a_m_y_acult_01");
		iLocal_258 = joaat("journey");
		Local_58 = { 2162.552f, 2122.646f, 124.7956f };
		Local_70 = { 2162.552f, 2122.646f, 124.7956f };
		fLocal_73 = 218.6214f;
		Local_77 = { 20f, 20f, 20f };
		iLocal_272 = 70;
		iLocal_273 = 25;
		Local_74 = { 10f, 10f, 10f };
		sLocal_276 = "RE8B_CAUGHT";
	}
	iLocal_54 = 1;
}

int func_214()//Position - 0x2085D
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_47) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !GlobalFunc_874())
		{
			return 0;
		}
	}
	if (GlobalFunc_6562())
	{
		return 1;
	}
	if (GlobalFunc_9553(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}














void func_228()//Position - 0x22562
{
	if (iLocal_53)
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("Dont_tazeme_bro"))
			{
				GRAPHICS::ANIMPOSTFX_STOP("Dont_tazeme_bro");
			}
		}
		STREAMING::STREAMVOL_DELETE(uLocal_81);
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
		AUDIO::CANCEL_MUSIC_EVENT(sLocal_276);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_MIN_GROUND_TIME_FOR_STUNGUN(PLAYER::PLAYER_PED_ID(), -1);
		}
		AUDIO::STOP_AUDIO_SCENE("RE_ABANDONED_VEHICLE_SCENE");
		GlobalFunc_4956();
		GlobalFunc_563(0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_255))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_255, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_255, 50f, 50f, 50f, 0, 1, 0))
			{
				GlobalFunc_9554(iLocal_255, 0, 145);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_251) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			WEAPON::SET_PED_DROPS_WEAPON(iLocal_251);
			TASK::TASK_SMART_FLEE_PED(iLocal_251, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_251, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_252) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			WEAPON::SET_PED_DROPS_WEAPON(iLocal_252);
			TASK::TASK_SMART_FLEE_PED(iLocal_252, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_252, 1);
		}
	}
	func_229(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_229(int iParam0)//Position - 0x22694
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = GlobalFunc_5213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (GlobalFunc_6827())
	{
		func_234(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_97344 = MISC::GET_GAME_TIMER();
		GlobalFunc_3061(30000);
		StringCopy(&cVar0, GlobalFunc_819(Global_97342, 1), 64);
		if (GlobalFunc_818(Global_97342) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97341, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_97339, (MISC::GET_GAME_TIMER() - Global_97340), 0);
	}
	else if (MISC::IS_BIT_SET(Global_97349, 0) && Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT < 3)
	{
		MISC::CLEAR_BIT(&Global_97349, 0);
	}
	GlobalFunc_54(&Global_24503);
	Global_97343 = 0;
	GlobalFunc_817(-1);
}





void func_234(int iParam0)//Position - 0x229EF
{
	func_235(iParam0, 0, GlobalFunc_823(iParam0));
}

void func_235(int iParam0, int iParam1, int iParam2)//Position - 0x22A04
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = GlobalFunc_7719();
	GlobalFunc_8385(&iVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_244(iParam0, &iVar0);
	Var1 = { func_236(&iVar0) };
}

struct<16> func_236(int iParam0)//Position - 0x22A33
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = GlobalFunc_208(*iParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = GlobalFunc_207(*iParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = GlobalFunc_206(*iParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = GlobalFunc_209(*iParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = GlobalFunc_210(*iParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, GlobalFunc_4975(*iParam0), 64);
	return Var0;
}








void func_244(int iParam0, int iParam1)//Position - 0x22B98
{
	Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam0] = *iParam1;
}



































int func_279(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x241F0
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
	Local_47 = { Param0 };
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
			if ((Var1.f_2 - Local_47.f_2) > 50f)
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


























Vector3 func_305()//Position - 0x25457
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_278, 1);
		iLocal_284 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_281, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_281, 1);
			iLocal_284 = 2;
		}
		if (iLocal_284 == 1)
		{
			iLocal_51 = 1;
			return Local_278;
		}
		else if (iLocal_284 == 2)
		{
			iLocal_51 = 2;
			return Local_281;
		}
	}
	return 0f, 0f, 0f;
}

