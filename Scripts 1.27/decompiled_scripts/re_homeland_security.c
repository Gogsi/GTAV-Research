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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51[2] = { 0, 0 };
	struct<3> Local_54[2];
	float fLocal_61[2] = { 0f, 0f };
	int iLocal_64 = 0;
	struct<3> Local_65 = { 0, 0, 0 } ;
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	struct<3> Local_72 = { 0, 0, 0 } ;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<6> Local_77 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_83 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120[2] = { 0, 0 };
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 16;
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
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
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
	int iVar0;
	
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	StringCopy(&Local_77, "", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_71))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_71))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_71);
			}
		}
		func_203();
	}
	if (func_161(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		GlobalFunc_6828(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_107) || iLocal_136)
		{
			if (!GlobalFunc_6827())
			{
				if (GlobalFunc_10586())
				{
					func_203();
				}
			}
			RECORDING::_0x208784099002BC30("RE_RA", 0);
			switch (iLocal_47)
			{
				case 0:
					if (func_144())
					{
						func_203();
					}
					if (!iLocal_102)
					{
						func_143();
					}
					else
					{
						func_142();
					}
					if (bLocal_103)
					{
						iLocal_101 = 1;
						iLocal_47 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						switch (iLocal_48)
						{
							case 0:
								func_132();
								iLocal_48 = 1;
								break;
							
							case 1:
								if (!func_131())
								{
									if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_72, 75f, 75f, 75f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_71)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 15f, 15f, 15f, 0, 1, 0))
									{
										if (!GlobalFunc_6827())
										{
											TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, -1, 0, 2);
											PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
											func_130();
											GlobalFunc_9559(1);
										}
										bLocal_110 = true;
									}
									if (!PED::IS_PED_INJURED(iLocal_51[0]) && !PED::IS_PED_INJURED(iLocal_51[1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51[1], PLAYER::PLAYER_PED_ID(), 1))
										{
											func_130();
											bLocal_110 = true;
										}
									}
									if (bLocal_110)
									{
										func_115();
									}
									if (!PED::IS_PED_INJURED(iLocal_71) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_64, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(iLocal_71, uLocal_64, 0))
										{
											iLocal_136 = 1;
										}
									}
									if (bLocal_137)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_64, 0))
										{
											if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_64, 150f, 150f, 150f, 0, 1, 0))
											{
												iLocal_48 = 9;
											}
										}
									}
								}
								if (func_114())
								{
									func_130();
									iLocal_48 = 3;
								}
								else if (func_131())
								{
									func_130();
									GlobalFunc_5105();
									iLocal_48 = 2;
								}
								break;
							
							case 2:
								switch (iLocal_131)
								{
									case 0:
										iLocal_48 = 3;
										break;
									
									case 1:
										iLocal_48 = 3;
										break;
									
									case 3:
										iLocal_48 = 3;
										break;
									
									case 4:
										iLocal_48 = 3;
										break;
									
									case 5:
										if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
										{
											iLocal_139 = 1;
											iLocal_50 = 9;
										}
										else
										{
											iLocal_50 = 13;
										}
										iLocal_48 = 1;
										break;
								}
								if (func_131())
								{
									switch (iLocal_49)
									{
										case 2:
											func_111();
											break;
										
										case 4:
											func_110();
											break;
										
										case 5:
											func_109();
											break;
										}
								}
								break;
							
							case 3:
								func_106();
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								if (!PED::IS_PED_INJURED(iLocal_71))
								{
									AUDIO::PLAY_PAIN(iLocal_71, 3, 0, 0);
									if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_71, 0))
									{
										if (!iLocal_116)
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, "random@homelandsecurity", "idle_girl", 3) && !PED::IS_PED_RAGDOLL(iLocal_71))
											{
												PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_71, 16);
												TASK::OPEN_SEQUENCE_TASK(&uLocal_135);
												TASK::TASK_PLAY_ANIM(0, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, 0, 0, 0, 0);
												TASK::TASK_PLAY_ANIM(0, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, 0, 0, 0, 0);
												TASK::CLOSE_SEQUENCE_TASK(uLocal_135);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_135);
												TASK::CLEAR_SEQUENCE_TASK(&uLocal_135);
												iLocal_116 = 1;
											}
											else
											{
												TASK::TASK_COWER(iLocal_71, -1);
												iLocal_116 = 1;
											}
										}
										else if ((((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, "random@homelandsecurity", "idle_girl", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, "random@homelandsecurity", "knees_loop_girl", 1)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, 474215631) != 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, 474215631) != 1)
										{
											iLocal_116 = 0;
										}
									}
									else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_64, 0))
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_119))
											{
												HUD::REMOVE_BLIP(&uLocal_119);
											}
										}
									}
								}
								else
								{
									func_105();
								}
								if (!GlobalFunc_111())
								{
									if (iLocal_128 < MISC::GET_GAME_TIMER())
									{
										if (GlobalFunc_745())
										{
											if (!PED::IS_PED_INJURED(iLocal_51[0]))
											{
												GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!PED::IS_PED_INJURED(iLocal_51[1]))
										{
											GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_128 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 5000));
									}
								}
								if (PED::IS_PED_INJURED(iLocal_51[0]))
								{
									if (HUD::DOES_BLIP_EXIST(uLocal_120[0]))
									{
										HUD::REMOVE_BLIP(&(uLocal_120[0]));
									}
									GlobalFunc_200(&uLocal_153, 5);
								}
								else if (PED::CAN_PED_SEE_HATED_PED(iLocal_51[0], PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (HUD::DOES_BLIP_EXIST(uLocal_120[0]))
								{
									HUD::REMOVE_BLIP(&(uLocal_120[0]));
								}
								if (PED::IS_PED_INJURED(iLocal_51[1]))
								{
									if (HUD::DOES_BLIP_EXIST(uLocal_120[1]))
									{
										HUD::REMOVE_BLIP(&(uLocal_120[1]));
									}
									GlobalFunc_200(&uLocal_153, 4);
								}
								else if (PED::CAN_PED_SEE_HATED_PED(iLocal_51[1], PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51[1], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (HUD::DOES_BLIP_EXIST(uLocal_120[1]))
								{
									HUD::REMOVE_BLIP(&(uLocal_120[1]));
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_51[1]))
								{
									if (((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_51[0], joaat("weapon_stungun"), 0) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_51[1], joaat("weapon_stungun"), 0)) || (PED::IS_PED_DEAD_OR_DYING(iLocal_51[0], 1) && PED::IS_PED_DEAD_OR_DYING(iLocal_51[1], 1))) || func_100())
									{
										if (HUD::DOES_BLIP_EXIST(uLocal_120[0]))
										{
											HUD::REMOVE_BLIP(&(uLocal_120[0]));
										}
										if (HUD::DOES_BLIP_EXIST(uLocal_120[1]))
										{
											HUD::REMOVE_BLIP(&(uLocal_120[1]));
										}
										if (!PED::IS_PED_INJURED(iLocal_71))
										{
											if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 15f, 15f, 15f, 0, 1, 0))
											{
												if (!GlobalFunc_111())
												{
													GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													bLocal_89 = false;
													iLocal_107 = 1;
													PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_71, 16);
													ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_71);
													iLocal_48 = 4;
												}
											}
										}
									}
								}
								break;
							
							case 4:
								if (!bLocal_89)
								{
									if (!PED::IS_PED_INJURED(iLocal_71))
									{
										if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, "random@homelandsecurity", "idle_to_knees_girl", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, "random@homelandsecurity", "knees_loop_girl", 1)) && !PED::IS_PED_RAGDOLL(iLocal_71))
										{
											TASK::TASK_PLAY_ANIM(iLocal_71, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0.3f, 0, 0, 0);
										}
										else
										{
											TASK::CLEAR_PED_TASKS(iLocal_71);
										}
										PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_71, 0);
										PED::SET_PED_AS_GROUP_MEMBER(iLocal_71, GlobalFunc_468());
										PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_71, 1);
										GlobalFunc_9563();
										bLocal_89 = true;
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_71))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_71, "random@homelandsecurity", "knees_to_stand_girl") > 0.8f)
										{
											TASK::CLEAR_PED_TASKS(iLocal_71);
										}
									}
								}
								if (!iLocal_91)
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											iLocal_91 = 1;
										}
									}
								}
								else if (!iLocal_90)
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_8329() == 0)
										{
											GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (GlobalFunc_8329() == 1)
										{
											GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										iLocal_90 = 1;
									}
								}
								if (bLocal_89)
								{
									if (!PED::IS_PED_INJURED(iLocal_71))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 8f, 8f, 8f, 0, 1, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_119))
											{
												HUD::REMOVE_BLIP(&uLocal_119);
											}
										}
										else if (!HUD::DOES_BLIP_EXIST(uLocal_119))
										{
											uLocal_119 = GlobalFunc_7491(iLocal_71, 0, 145);
										}
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_51[0]))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_51[0], PLAYER::PLAYER_PED_ID()))
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
										{
										}
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_51[1]))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_51[1], PLAYER::PLAYER_PED_ID()))
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
										{
										}
									}
								}
								if (iLocal_90 && func_94())
								{
									if (!GlobalFunc_111())
									{
										GlobalFunc_4956();
										SYSTEM::WAIT(0);
										GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_51[0]));
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_51[1]));
										if (!PED::IS_PED_INJURED(iLocal_71))
										{
											if (PED::IS_PED_IN_GROUP(iLocal_71))
											{
												iVar0 = 0;
												while (iVar0 < iLocal_51)
												{
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar0]))
													{
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_51[iVar0]));
													}
													iVar0++;
												}
												PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
												iLocal_48 = 5;
											}
										}
									}
								}
								break;
							
							case 5:
								func_86();
								func_81();
								func_80();
								func_77();
								func_76();
								if (func_75(Local_92))
								{
									func_61(0);
									GlobalFunc_4956();
									SYSTEM::WAIT(0);
									GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (GlobalFunc_9562())
								{
									func_61(0);
									GlobalFunc_4956();
									SYSTEM::WAIT(0);
									GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!PED::IS_PED_INJURED(iLocal_71))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_92, Global_21, 1, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, 0, 1, 0))
									{
										if (PED::IS_PED_IN_GROUP(iLocal_71))
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_119))
											{
												HUD::REMOVE_BLIP(&uLocal_119);
											}
											if (HUD::DOES_BLIP_EXIST(uLocal_123))
											{
												HUD::REMOVE_BLIP(&uLocal_123);
											}
											if (HUD::DOES_BLIP_EXIST(uLocal_124))
											{
												HUD::REMOVE_BLIP(&uLocal_124);
											}
											if (PED::IS_PED_IN_GROUP(iLocal_71))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_71);
											}
											if (func_94())
											{
												if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
												{
													VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f, 2, 0);
												}
												iLocal_48 = 6;
											}
											else
											{
												GlobalFunc_4956();
												SYSTEM::WAIT(0);
												GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!PED::IS_PED_INJURED(iLocal_71))
												{
													TASK::OPEN_SEQUENCE_TASK(&uLocal_135);
													TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2052, 2);
													TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_95, 1f, -1, 0.25f, 0, 38.9844f);
													TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
													TASK::CLOSE_SEQUENCE_TASK(uLocal_135);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_135);
													TASK::CLEAR_SEQUENCE_TASK(&uLocal_135);
													PED::SET_PED_KEEP_TASK(iLocal_71, 1);
												}
												GlobalFunc_10829(GlobalFunc_8329(), 1, 80, 0, 1);
												iLocal_48 = 7;
											}
										}
									}
								}
								break;
							
							case 6:
								func_33();
								break;
							
							case 7:
								func_4();
								break;
							
							case 9:
								func_105();
								break;
						}
						if (iLocal_149 && !iLocal_150)
						{
							if (iLocal_48 != 6)
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_148))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_148) > 0.85f)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, 0))
										{
											if (!PED::IS_PED_INJURED(iLocal_71))
											{
												if (!PED::IS_PED_IN_VEHICLE(iLocal_71, iLocal_64, 0))
												{
													if (!PED::IS_PED_RAGDOLL(iLocal_71))
													{
														TASK::CLEAR_PED_TASKS(iLocal_71);
														PED::SET_PED_INTO_VEHICLE(iLocal_71, iLocal_64, 2);
														PED::SET_PED_KEEP_TASK(iLocal_71, 1);
														iLocal_150 = 1;
													}
													else
													{
														iLocal_150 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						if (GlobalFunc_6568())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
							{
								PED::DELETE_PED(&iLocal_71);
							}
							func_4();
						}
						if ((iLocal_48 != 0 && iLocal_48 != 6) && iLocal_48 != 7)
						{
							if (func_1())
							{
								iLocal_48 = 9;
							}
						}
						if (iLocal_48 == 4 || iLocal_48 == 5)
						{
							if (!PED::IS_PED_INJURED(iLocal_71))
							{
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 150f, 150f, 150f, 0, 1, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 1))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
									GlobalFunc_4956();
									func_105();
								}
							}
						}
						if (iLocal_48 < 5)
						{
							PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
						}
						if (PED::IS_PED_INJURED(iLocal_51[0]))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_120[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_120[0]));
							}
						}
						if (PED::IS_PED_INJURED(iLocal_51[1]))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_120[1]))
							{
								HUD::REMOVE_BLIP(&(uLocal_120[1]));
							}
						}
						if (PED::IS_PED_INJURED(iLocal_71))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_119))
							{
								HUD::REMOVE_BLIP(&uLocal_119);
							}
						}
					}
					break;
			}
		}
		else
		{
			func_203();
		}
	}
}

int func_1()//Position - 0xC9C
{
	int iVar0[3];
	
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[0]))
	{
		if (PED::IS_PED_INJURED(iLocal_51[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[1]))
	{
		if (PED::IS_PED_INJURED(iLocal_51[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
	{
		if (PED::IS_PED_INJURED(iLocal_71))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return 1;
	}
	return 0;
}



void func_4()//Position - 0xD71
{
	while (GlobalFunc_111())
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	func_8(-1, 0);
	GlobalFunc_7068();
	func_203();
}




void func_8(int iParam0, int iParam1)//Position - 0xE29
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

























void func_33()//Position - 0x2362
{
	switch (iLocal_151)
	{
		case 0:
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_151++;
			break;
		
		case 1:
			iLocal_151++;
			break;
		
		case 2:
			iLocal_151++;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_71))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_135);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2052, 2);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_95, 1f, -1, 0.25f, 0, 38.9844f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_135);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_135);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_135);
				PED::SET_PED_KEEP_TASK(iLocal_71, 1);
			}
			iLocal_151++;
			break;
		
		case 4:
			GlobalFunc_10829(GlobalFunc_8329(), 1, 80, 0, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			func_4();
			break;
	}
}




























void func_61(bool bParam0)//Position - 0x346D
{
	if (bParam0)
	{
		if (iLocal_76)
		{
			if (GlobalFunc_10699(&uLocal_153, "REHOMAU", &Local_83, &Local_77, 8, 0, 0))
			{
				iLocal_76 = 0;
			}
		}
	}
	else if (!iLocal_76 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Local_83 = { GlobalFunc_560() };
		Local_77 = { GlobalFunc_2209() };
		GlobalFunc_5105();
		iLocal_76 = 1;
	}
}














int func_75(struct<3> Param0)//Position - 0x3BAD
{
	if (GlobalFunc_8329() == 2)
	{
		if (GlobalFunc_831() && !Global_24681)
		{
			if (fLocal_46 == -1f)
			{
				fLocal_46 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0) > (fLocal_46 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				Global_24681 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_76()//Position - 0x3C3A
{
	if (!PED::IS_PED_INJURED(iLocal_71))
	{
		if (!iLocal_104)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) && PED::IS_PED_IN_VEHICLE(iLocal_71, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					func_61(0);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_104 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && PED::IS_PED_IN_VEHICLE(iLocal_71, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				iLocal_104 = 0;
			}
		}
		if (!iLocal_105)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_61(0);
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_105 = 1;
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_105 = 0;
		}
		if (!iLocal_106)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_61(0);
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_106 = 1;
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_106 = 0;
		}
	}
}

void func_77()//Position - 0x3D5F
{
	if (!func_78())
	{
		func_61(1);
	}
	if (!GlobalFunc_111())
	{
		switch (iLocal_129)
		{
			case 0:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_129++;
				break;
			
			case 1:
				GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 2:
				GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 3:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_129++;
				break;
			
			case 4:
				GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 5:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_129++;
				break;
			
			case 6:
				GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 7:
				GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_129++;
				break;
			
			case 8:
				if (GlobalFunc_8329() == 0)
				{
					GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (GlobalFunc_8329() == 1)
				{
					GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_129++;
				break;
			
			case 9:
				GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_129++;
				break;
			}
	}
}

int func_78()//Position - 0x3F61
{
	if (((((((((GlobalFunc_5672("REHOM_QM") || GlobalFunc_5672("REHOM_GETOUT")) || GlobalFunc_5672("REHOM_SHOOT")) || GlobalFunc_5672("REHOM_JACK")) || GlobalFunc_5672("REHOM_WRONG")) || GlobalFunc_5672("REHOM_CULT")) || GlobalFunc_5672("REHOM_STOP")) || GlobalFunc_5672("REHOM_NOVEH")) || GlobalFunc_5672("REHOM_UNS1")) || GlobalFunc_5672("REHOM_UNS2"))
	{
		return 1;
	}
	return 0;
}


void func_80()//Position - 0x401F
{
	if (!PED::IS_PED_INJURED(iLocal_71))
	{
		if (PED::IS_PED_ON_FOOT(iLocal_71))
		{
			if (!iLocal_141)
			{
				iLocal_142 = MISC::GET_GAME_TIMER();
				iLocal_141 = 1;
			}
			else
			{
				iLocal_143 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_141 = 0;
		}
		if ((iLocal_143 - iLocal_142) > 180000)
		{
			if (PED::IS_PED_IN_GROUP(iLocal_71))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_71);
				GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_105();
			}
		}
	}
}

void func_81()//Position - 0x4089
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_144)
		{
			iLocal_146 = MISC::GET_GAME_TIMER();
			iLocal_144 = 1;
		}
		else
		{
			iLocal_147 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_147 = 0;
		iLocal_144 = 0;
		iLocal_145 = 0;
	}
	if ((iLocal_147 - iLocal_146) > 50000 && !iLocal_145)
	{
		func_61(0);
		GlobalFunc_4956();
		SYSTEM::WAIT(0);
		GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_145 = 1;
	}
	if ((iLocal_147 - iLocal_146) > 60000 && iLocal_145)
	{
		if (!PED::IS_PED_INJURED(iLocal_71))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			GlobalFunc_5471(iLocal_71, 120000, 0);
			PED::SET_PED_KEEP_TASK(iLocal_71, 1);
			if (PED::IS_PED_IN_GROUP(iLocal_71))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_71);
			}
		}
		func_105();
	}
}





void func_86()//Position - 0x42AB
{
	if (!PED::IS_PED_INJURED(iLocal_71))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 8f, 8f, 8f, 0, 1, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_119))
			{
				HUD::REMOVE_BLIP(&uLocal_119);
			}
			if (!PED::IS_PED_IN_GROUP(iLocal_71))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_71, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_71, 0);
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_123))
				{
					uLocal_123 = GlobalFunc_5104(Local_92, 1);
				}
				if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_123))
					{
						uLocal_123 = GlobalFunc_5104(Local_92, 1);
					}
				}
				if (GlobalFunc_8329() == 2 && !GlobalFunc_832())
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_124))
					{
						uLocal_124 = GlobalFunc_5104(Local_98, 0);
						HUD::SET_BLIP_SPRITE(uLocal_124, 269);
						GlobalFunc_9564();
					}
				}
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_119))
			{
				uLocal_119 = GlobalFunc_7491(iLocal_71, 0, 145);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_123))
			{
				HUD::REMOVE_BLIP(&uLocal_123);
			}
		}
	}
}








int func_94()//Position - 0x4481
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uLocal_117 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_117, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_71))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_71, iLocal_117))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}






int func_100()//Position - 0x45FF
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
	{
		if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_64, 0) && PED::IS_PED_IN_VEHICLE(iLocal_71, iLocal_64, 0)) && !PED::IS_PED_IN_VEHICLE(iLocal_51[0], iLocal_64, 0)) && !PED::IS_PED_IN_VEHICLE(iLocal_51[1], iLocal_64, 0))
		{
			return 1;
		}
	}
	return 0;
}





void func_105()//Position - 0x4703
{
	func_203();
}

void func_106()//Position - 0x470F
{
	if (!iLocal_108)
	{
		if (!PED::IS_PED_INJURED(iLocal_51[0]))
		{
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_51[0], 0);
			TASK::CLEAR_PED_TASKS(iLocal_51[0]);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_135);
			TASK::TASK_CLEAR_LOOK_AT(0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_135);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_51[0], uLocal_135);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_135);
			PED::SET_PED_KEEP_TASK(iLocal_51[0], 1);
			if (HUD::DOES_BLIP_EXIST(uLocal_120[0]))
			{
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_120[0], false);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_108 = 1;
		}
		else
		{
			SYSTEM::SETTIMERB(500);
			iLocal_108 = 1;
		}
	}
	if (!iLocal_109)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_120[1]))
		{
			HUD::SET_BLIP_AS_FRIENDLY(uLocal_120[1], false);
		}
		GlobalFunc_4956();
		SYSTEM::WAIT(0);
		if (!PED::IS_PED_INJURED(iLocal_51[1]))
		{
			GlobalFunc_5122(iLocal_51[1], "GENERIC_INSULT_HIGH", 24);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_51[1], 2);
			if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_51[1], "random@homelandsecurity", "idle_cop_ground", 3) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_148)) && !PED::IS_PED_RAGDOLL(iLocal_51[1]))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_51[1], 16);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_135);
				TASK::TASK_PLAY_ANIM(0, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, 0, 0, 0, 0);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_135);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_51[1], uLocal_135);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_135);
				PED::SET_PED_KEEP_TASK(iLocal_51[1], 1);
				iLocal_109 = 1;
			}
			else
			{
				TASK::TASK_COMBAT_PED(iLocal_51[1], PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_51[1], 1);
				iLocal_109 = 1;
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_51[1]))
	{
		if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_51[1], "random@homelandsecurity", "idle_cop_ground", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_51[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_51[1], 780511057) != 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_51[1], 780511057) != 1)
		{
			iLocal_109 = 1;
		}
	}
}



void func_109()//Position - 0x4B0C
{
	iLocal_48 = 3;
}

void func_110()//Position - 0x4B17
{
	GlobalFunc_4956();
	SYSTEM::WAIT(0);
	GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_48 = 3;
}

void func_111()//Position - 0x4B3D
{
	iLocal_48 = 3;
}



int func_114()//Position - 0x4B7C
{
	iLocal_125 = 0;
	while (iLocal_125 <= 1)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_51[iLocal_125]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51[iLocal_125], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		iLocal_125++;
	}
	return 0;
}

void func_115()//Position - 0x4BBA
{
	iLocal_127 = MISC::GET_GAME_TIMER();
	if (!bLocal_137)
	{
		switch (iLocal_50)
		{
			case 0:
				if (func_120())
				{
					iLocal_50 = 9;
				}
				if (func_119() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if (GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_126 = MISC::GET_GAME_TIMER();
					iLocal_50 = 1;
				}
				break;
			
			case 1:
				if (func_120())
				{
					iLocal_50 = 9;
				}
				if (func_119() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if (GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_126 = MISC::GET_GAME_TIMER();
					iLocal_50 = 2;
				}
				break;
			
			case 2:
				if (func_120())
				{
					iLocal_50 = 9;
				}
				if (func_119() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if ((iLocal_127 - iLocal_126) > 6000)
				{
					if (GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_126 = MISC::GET_GAME_TIMER();
						iLocal_50 = 3;
					}
				}
				break;
			
			case 3:
				if (func_120())
				{
					iLocal_50 = 9;
				}
				if (func_119() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if (GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_126 = MISC::GET_GAME_TIMER();
					iLocal_50 = 4;
				}
				break;
			
			case 4:
				if (func_120())
				{
					iLocal_50 = 9;
				}
				if (func_119() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if ((iLocal_127 - iLocal_126) > 5500)
				{
					if (GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_126 = MISC::GET_GAME_TIMER();
						iLocal_50 = 5;
					}
				}
				break;
			
			case 5:
				if (func_120())
				{
					iLocal_50 = 9;
				}
				if (func_119() && !iLocal_113)
				{
					iLocal_50 = 13;
				}
				if (!iLocal_114 && SYSTEM::TIMERA() > 5000)
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_135);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_71, -1, 2054, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_71, -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_135);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_51[0], uLocal_135);
					PED::SET_PED_KEEP_TASK(iLocal_51[0], 1);
					iLocal_114 = 1;
				}
				if ((iLocal_127 - iLocal_126) > 3000 || iLocal_113)
				{
					if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, 0) && !PED::IS_PED_INJURED(iLocal_51[0])) && !PED::IS_PED_INJURED(iLocal_51[1])) && !PED::IS_PED_INJURED(iLocal_71))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_148))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_148) > 0.98f)
							{
								if (!GlobalFunc_111())
								{
									if (PED::IS_PED_FACING_PED(iLocal_51[0], iLocal_71, 10f))
									{
										if (GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											TASK::TASK_CLEAR_LOOK_AT(iLocal_51[0]);
											uLocal_148 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
											PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_148, iLocal_64, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_71, uLocal_148, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[0], uLocal_148, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[1], uLocal_148, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
											ENTITY::PLAY_ENTITY_ANIM(iLocal_64, "exit_car", "random@homelandsecurity", 4f, 0, 0, 0, 0, 0);
											iLocal_149 = 1;
											iLocal_126 = MISC::GET_GAME_TIMER();
											iLocal_50 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_118())
				{
					iLocal_50 = 15;
				}
				break;
			
			case 15:
				if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, 0) && !PED::IS_PED_INJURED(iLocal_51[0])) && !PED::IS_PED_INJURED(iLocal_51[1])) && !PED::IS_PED_INJURED(iLocal_71))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_148))
					{
						if (!GlobalFunc_111())
						{
							if (PED::IS_PED_FACING_PED(iLocal_51[0], iLocal_71, 10f))
							{
								if (GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									TASK::TASK_CLEAR_LOOK_AT(iLocal_51[0]);
									uLocal_148 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_148, iLocal_64, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_71, uLocal_148, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[0], uLocal_148, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[1], uLocal_148, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
									ENTITY::PLAY_ENTITY_ANIM(iLocal_64, "exit_car", "random@homelandsecurity", 2f, 0, 0, 0, 0, 0);
									iLocal_149 = 1;
									iLocal_126 = MISC::GET_GAME_TIMER();
									iLocal_50 = 6;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				func_116();
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_148))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_148) > 0.45f)
					{
						if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, 0) && !PED::IS_PED_INJURED(iLocal_71)) && !PED::IS_PED_INJURED(iLocal_51[0]))
						{
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_148))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_148) > 0.9f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_51[0]))
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_51[0], iLocal_64, -1, -1, 1f, 9, 0);
								iLocal_50 = 7;
							}
						}
					}
				}
				break;
			
			case 7:
				func_116();
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_148))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_148) > 0.95f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_51[1]))
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_51[1], iLocal_64, -1, 0, 1f, 9, 0);
								PED::SET_PED_KEEP_TASK(iLocal_51[1], 1);
								iLocal_50 = 8;
							}
						}
					}
				}
				break;
			
			case 8:
				func_116();
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, 0) && !PED::IS_PED_INJURED(iLocal_51[0])) && !PED::IS_PED_INJURED(iLocal_51[1]))
				{
					if ((PED::IS_PED_SITTING_IN_VEHICLE(iLocal_71, iLocal_64) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_51[0], iLocal_64)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_51[1], iLocal_64))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_51[0], iLocal_64, 15f, 786468);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_64, 1);
						bLocal_137 = true;
					}
				}
				break;
			
			case 9:
				TASK::OPEN_SEQUENCE_TASK(&uLocal_135);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 0, 2);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_135);
				if (!PED::IS_PED_INJURED(iLocal_51[0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_51[0], uLocal_135);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_135);
				if (!iLocal_111)
				{
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3))
					{
						GlobalFunc_4956();
						SYSTEM::WAIT(0);
						GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
					{
						GlobalFunc_4956();
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(iLocal_51[0]))
						{
							GlobalFunc_5122(iLocal_51[0], "GUN_COOL", 24);
						}
					}
					iLocal_111 = 1;
					iLocal_133 = MISC::GET_GAME_TIMER();
				}
				iLocal_50 = 10;
				break;
			
			case 10:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_134 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_50 = 13;
				}
				if (((iLocal_134 - iLocal_133) > 6000 && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && !iLocal_112)
				{
					if (GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_133 = MISC::GET_GAME_TIMER();
						iLocal_112 = 1;
					}
					iLocal_50 = 11;
				}
				break;
			
			case 11:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_134 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_50 = 13;
				}
				if (((iLocal_134 - iLocal_133) > 9000 && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) || iLocal_139)
				{
					if (GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_50 = 12;
					}
				}
				break;
			
			case 12:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					iLocal_134 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_50 = 13;
				}
				if ((iLocal_134 - iLocal_133) > 13000)
				{
					iLocal_48 = 3;
				}
				break;
			
			case 13:
				if (!PED::IS_PED_INJURED(iLocal_51[0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_135);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_135);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_51[0], uLocal_135);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_135);
				}
				if (iLocal_140)
				{
					if (!PED::IS_PED_INJURED(iLocal_51[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_71))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_51[1], 1785177548) != 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_135);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_71, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_71, 20000, 0, 2);
								TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_71, -1f, 0f, 0f, 1f, -1, 1036831949, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_135);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_51[1], uLocal_135);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_135);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_51[1], 1785177548) != 1)
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_135);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 0, 2);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_135);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_51[1], uLocal_135);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_135);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_71))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, 1785177548) != 1)
						{
							TASK::TASK_SEEK_COVER_FROM_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), -1, 0);
							PED::SET_PED_KEEP_TASK(iLocal_71, 1);
						}
					}
				}
				iLocal_50 = 14;
				break;
			
			case 14:
				if (func_120())
				{
					iLocal_50 = 9;
				}
				if (func_118())
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_148))
					{
						if (!iLocal_140)
						{
							if (!PED::IS_PED_INJURED(iLocal_51[1]))
							{
							}
							if (!PED::IS_PED_INJURED(iLocal_71))
							{
								TASK::TASK_SEEK_COVER_FROM_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), -1, 0);
								PED::SET_PED_KEEP_TASK(iLocal_71, 1);
							}
							iLocal_140 = 1;
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_51[0]))
				{
					if (!GlobalFunc_111() && !iLocal_113)
					{
						if (GlobalFunc_745())
						{
							GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						iLocal_113 = 1;
					}
					iLocal_114 = 0;
					SYSTEM::SETTIMERA(0);
					iLocal_126 = (MISC::GET_GAME_TIMER() - 4500);
					iLocal_50 = 5;
				}
			}
	}
}

void func_116()//Position - 0x556D
{
	if (!GlobalFunc_111())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_71))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_71, iLocal_64, 0))
				{
					if (GlobalFunc_1518(iLocal_71) == 2)
					{
						if (iLocal_128 < MISC::GET_GAME_TIMER())
						{
							GlobalFunc_10652(&uLocal_153, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_128 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 4000));
						}
					}
				}
			}
		}
	}
}


int func_118()//Position - 0x5650
{
	if ((!PED::IS_PED_INJURED(iLocal_51[0]) && !PED::IS_PED_INJURED(iLocal_51[1])) && !PED::IS_PED_INJURED(iLocal_71))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51[0], 1.5f, 1.5f, 5f, 0, 1, 2) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51[1], 2.5f, 2.5f, 5f, 0, 1, 2)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 1.5f, 1.5f, 5f, 0, 1, 2))
			{
				return 1;
			}
		}
		else if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51[0], 0.5f, 0.5f, 5f, 0, 1, 1) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51[1], 0.5f, 0.5f, 5f, 0, 1, 1)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 0.5f, 0.5f, 5f, 0, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_119()//Position - 0x5752
{
	if (!PED::IS_PED_INJURED(iLocal_51[1]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51[1], 6f, 6f, 6f, 0, 1, 0))
		{
			if (PED::IS_PED_FACING_PED(iLocal_51[1], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_51[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51[0], 6f, 6f, 6f, 0, 1, 0))
		{
			if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_120()//Position - 0x57D8
{
	if (!PED::IS_PED_INJURED(iLocal_51[1]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51[1], 6f, 6f, 6f, 0, 1, 1))
		{
			if (PED::IS_PED_FACING_PED(iLocal_51[1], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_51[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51[0], 6f, 6f, 6f, 0, 1, 1))
		{
			if (PED::IS_PED_FACING_PED(iLocal_51[0], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}










void func_130()//Position - 0x5DB7
{
	if (HUD::DOES_BLIP_EXIST(uLocal_118))
	{
		HUD::REMOVE_BLIP(&uLocal_118);
	}
	if (!HUD::DOES_BLIP_EXIST(uLocal_119))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_71))
		{
			uLocal_119 = GlobalFunc_7491(iLocal_71, 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_119, 0);
		}
	}
	else
	{
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_119, 1);
	}
	iLocal_125 = 0;
	while (iLocal_125 <= 1)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_120[iLocal_125]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_51[iLocal_125]))
			{
				uLocal_120[iLocal_125] = GlobalFunc_7491(iLocal_51[iLocal_125], 0, 145);
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_120[iLocal_125], 0);
			}
		}
		else
		{
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_120[iLocal_125], 1);
		}
		iLocal_125++;
	}
}

int func_131()//Position - 0x5E58
{
	var uVar0;
	var uVar1;
	
	if (!bLocal_132)
	{
		if (MISC::IS_PROJECTILE_IN_AREA(Local_65 - Vector(30f, 30f, 30f), Local_65 + Vector(30f, 30f, 30f), 1) || MISC::IS_BULLET_IN_BOX(Local_65 - Vector(30f, 30f, 30f), Local_65 + Vector(30f, 30f, 30f), 1))
		{
			iLocal_49 = 2;
			return 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_51[0]) && !PED::IS_PED_INJURED(iLocal_51[1]))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_51[0], PLAYER::PLAYER_PED_ID(), 6f, 6f, 6f, 0, 1, 0)))
				{
					if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_51[0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_51[0])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_51[1])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_51[1]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_51[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_51[1], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_49 = 2;
							return 1;
						}
					}
				}
			}
		}
		uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_64))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_64, PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_49 = 2;
					return 1;
				}
				if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_64) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.1f)
				{
					iLocal_49 = 2;
					return 1;
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_64, 0))
				{
					iLocal_49 = 2;
					return 1;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_64, iVar0, 1))
					{
						iLocal_49 = 2;
						return 1;
					}
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_64, PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_49 = 2;
				return 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_64))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(uVar1, iLocal_64))
					{
						iLocal_49 = 2;
						return 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_51[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_51[0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_49 = 5;
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51[0]) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.1f)
			{
				iLocal_49 = 5;
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51[0], iVar0, 1))
				{
					iLocal_49 = 5;
					return 1;
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_51[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_51[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51[1], PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_49 = 5;
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_51[1]) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.1f)
			{
				iLocal_49 = 5;
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_51[1], iVar0, 1))
				{
					iLocal_49 = 5;
					return 1;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_71))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_49 = 4;
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71))
			{
				iLocal_49 = 4;
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, iVar0, 1))
				{
					iLocal_49 = 4;
					return 1;
				}
			}
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_49 = 4;
			return 1;
		}
	}
	return 0;
}

void func_132()//Position - 0x620D
{
	GlobalFunc_8536(39, 1);
	GlobalFunc_8536(40, 1);
	GlobalFunc_8536(41, 1);
	GlobalFunc_8536(42, 1);
	GlobalFunc_8536(43, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(374.869f, -1358.043f, 25.667f, 452.41f, -1423.882f, 38.337f, 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_95 - Vector(20f, 20f, 20f), Local_95 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	MISC::CLEAR_AREA_OF_PEDS(Local_72, 50f, 0);
	PATHFIND::SET_PED_PATHS_IN_AREA(419f, -1387f, 28f, 427f, -1370f, 29f, 0, 0);
	MISC::SET_BIT(&uLocal_130, 5);
	iLocal_71 = PED::CREATE_PED(26, iLocal_75, Local_72, 0, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_75);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_71, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_71, 185, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_71, 206, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_71, 2, 0);
	AUDIO::STOP_PED_SPEAKING(iLocal_71, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_71, "REHOMGirl");
	PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 0, 2, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 3, 1, 4, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 4, 0, 5, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_71, 6, 1, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("OFFICERS", &iLocal_152);
	iLocal_125 = 0;
	while (iLocal_125 <= 1)
	{
		iLocal_51[iLocal_125] = PED::CREATE_PED(6, iLocal_69, Local_54[iLocal_125 /*3*/], fLocal_61[iLocal_125], 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51[iLocal_125], 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_69);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_51[iLocal_125], iLocal_152);
		PED::SET_PED_CONFIG_FLAG(iLocal_51[iLocal_125], 42, 1);
		iLocal_125++;
	}
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_51[0], joaat("weapon_pistol"), -1, 1, 1);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_51[1], joaat("weapon_pistol"), -1, 0, 1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_152, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_152, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_152);
	iLocal_64 = VEHICLE::CREATE_VEHICLE(iLocal_70, Local_65, fLocal_68, 1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_70, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_64);
	VEHICLE::SET_VEHICLE_SIREN(iLocal_64, 1);
	GlobalFunc_1286(&uLocal_153, 5, iLocal_51[0], "ACULTMember1", 0, 1);
	GlobalFunc_1286(&uLocal_153, 4, iLocal_51[1], "ACULTMember2", 0, 1);
	GlobalFunc_1286(&uLocal_153, 3, iLocal_71, "REHOMGirl", 0, 1);
	if (GlobalFunc_8329() == 0)
	{
		GlobalFunc_1286(&uLocal_153, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (GlobalFunc_8329() == 1)
	{
		GlobalFunc_1286(&uLocal_153, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	uLocal_148 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
	PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_148, iLocal_64, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_71, uLocal_148, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1148846080, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[0], uLocal_148, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1148846080, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_51[1], uLocal_148, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1148846080, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_148, 1);
}










void func_142()//Position - 0x6A37
{
	STREAMING::REQUEST_MODEL(iLocal_75);
	STREAMING::REQUEST_MODEL(iLocal_69);
	STREAMING::REQUEST_MODEL(iLocal_70);
	STREAMING::REQUEST_ANIM_DICT("random@homelandsecurity");
	if (((STREAMING::HAS_MODEL_LOADED(iLocal_75) && STREAMING::HAS_MODEL_LOADED(iLocal_69)) && STREAMING::HAS_MODEL_LOADED(iLocal_70)) && STREAMING::HAS_ANIM_DICT_LOADED("random@homelandsecurity"))
	{
		bLocal_103 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_75);
		STREAMING::REQUEST_MODEL(iLocal_69);
		STREAMING::REQUEST_MODEL(iLocal_70);
		STREAMING::REQUEST_ANIM_DICT("random@homelandsecurity");
	}
}

void func_143()//Position - 0x6AA2
{
	iLocal_75 = joaat("a_f_y_tourist_01");
	iLocal_69 = joaat("a_m_o_acult_01");
	iLocal_70 = joaat("fugitive");
	Local_72 = { -174.0522f, 1905.611f, 197.0466f };
	Local_54[0 /*3*/] = { -174.3279f, 1903.972f, 197.0502f };
	fLocal_61[0] = 147.8596f;
	Local_54[1 /*3*/] = { -174.3233f, 1906.384f, 197.0145f };
	fLocal_61[1] = 164.5974f;
	Local_65 = { -172.4207f, 1905.183f, 197.1163f };
	fLocal_68 = 187.3899f;
	Local_92 = { 469.8768f, 2617.532f, 42.2566f };
	Local_95 = { 472.2393f, 2611.611f, 42.2676f };
	Local_98 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_102 = 1;
}

int func_144()//Position - 0x6B68
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_43) < (75f * 75f))
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

















int func_161(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x8966
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










































void func_203()//Position - 0x9F87
{
	int iVar0;
	
	if (iLocal_101)
	{
		GlobalFunc_9158(0);
		if (Global_24682)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		GlobalFunc_825();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(420.5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		GlobalFunc_4956();
		if (iLocal_102)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_75);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_69);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_70);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_70, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_51)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_51[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_51[iVar0]))
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_AIM_GUN_AT_COORD(iLocal_51[iVar0], GlobalFunc_80(PLAYER::PLAYER_ID()), -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_51[iVar0], 1);
						if (!PED::IS_PED_INJURED(iLocal_71))
						{
							TASK::TASK_COWER(iLocal_71, -1);
							PED::SET_PED_KEEP_TASK(iLocal_71, 1);
						}
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_51[iVar0], 0);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_51[iVar0]));
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
		{
			if (!PED::IS_PED_INJURED(iLocal_71))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_71, 317, 1);
				if (PED::IS_PED_IN_GROUP(iLocal_71))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_71);
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_71, 0))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_71);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, 0);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_71);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_64);
		}
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}















